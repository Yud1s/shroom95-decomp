#pragma once

#include "zref.h"
#include <functional>

template <class T>
class ZList : private ZRefCountedAccessor<T>, private ZRefCountedAccessor<ZRefCountedDummy<T>>
{
private:
    struct Node
    {
        T data;

        void *operator new(size_t size) = delete;
        void operator delete(void *p) = delete;

        void Free()
        {
            delete GetHeader();
        }

        static Node *Alloc()
        {
            auto p = new ZRefCountedDummy<T>();
            return reinterpret_cast<Node *>(p->GetInner());
        }

        ZRefCountedDummy<T> *GetHeader()
        {
            return ZRefCountedDummy<T>::From(&data);
        }

        const ZRefCountedDummy<T> *GetHeader() const
        {
            return ZRefCountedDummy<T>::From(&data);
        }

        void SetNext(Node *next)
        {
            GetHeader()->_next = next ? next->GetHeader() : nullptr;
        }

        void SetPrev(Node *prev)
        {
            GetHeader()->_prev = prev ? prev->GetHeader() : nullptr;
        }

        void LinkNext(Node *next)
        {
            next->SetPrev(this);
            SetNext(next);
        }

        void LinkPrev(Node *prev)
        {
            prev->SetNext(this);
            SetPrev(prev);
        }

        Node *GetNext()
        {
            auto next = reinterpret_cast<ZRefCountedDummy<T> *>(GetHeader()->_next);
            if (!next)
            {
                return nullptr;
            }
            return reinterpret_cast<Node *>(next->GetInner());
        }

        Node *GetPrev()
        {
            auto prev = reinterpret_cast<ZRefCountedDummy<T> *>(GetHeader()->_prev);
            if (!prev)
            {
                return nullptr;
            }
            return reinterpret_cast<Node *>(prev->GetInner());
        }
    };

    size_t _count{0};
    Node *_head{};
    Node *_tail{};

public:
    struct Iterator
    {
        using iterator_category = std::bidirectional_iterator_tag;
        using difference_type = std::ptrdiff_t;
        using pointer = T *;
        using reference = T &;
        using value_type = T;

        explicit Iterator(Node *ptr) : _cur(ptr) {}

        difference_type operator-(const Iterator &other) const
        {
            return std::distance(other._cur, _cur);
        }
        reference operator*() const { return _cur->data; }
        pointer operator->() { return &_cur->data; }

        Iterator &operator++()
        {
            _cur = _cur->GetNext();
            return *this;
        }
        Iterator operator++(int)
        {
            Iterator tmp = *this;
            _cur = _cur->GetNext();
            return tmp;
        }

        Iterator operator--()
        {
            // TODO this is hack to allow proper backwards iteration from _tail
            Iterator tmp = *this;
            _cur = _cur->GetPrev();
            return tmp;
        }
        Iterator operator--(int)
        {
            Iterator tmp = *this;
            _cur = _cur->GetPrev();
            return tmp;
        }

        friend bool operator==(const Iterator &a, const Iterator &b) { return a._cur == b._cur; };
        friend bool operator!=(const Iterator &a, const Iterator &b) { return a._cur != b._cur; };

    private:
        Node *_cur;
    };

    Iterator begin()
    {
        return Iterator(_head);
    }

    Iterator end()
    {
        return Iterator(nullptr);
    }

    auto rbegin()
    {
        return std::reverse_iterator<Iterator>(Iterator(_tail));
    }

    auto rend()
    {
        return std::reverse_iterator<Iterator>(Iterator(nullptr));
    }

    ZList() = default;
    ZList(const ZList &other)
    {
        AddTail(other);
    }

    void _ctor_0()
    {
        new (this) ZList();
    }

    void _ctor_default()
    {
        new (this) ZList();
    }

    virtual ~ZList()
    {
        RemoveAll();
    }

    ZList &operator=(const ZList &l)
    {
        RemoveAll();
        AddTail(l);

        return *this;
    }

    T *GetHeadPosition()
    {
        return &_head->data;
    }

    T *GetTailPosition()
    {
        return &_tail->data;
    }

    size_t GetCount()
    {
        return _count;
    }

    bool IsEmpty()
    {
        return _count == 0;
    }

    T &AddHead()
    {
        auto *node = NewNode();

        // Empty list
        if (!_head)
        {
            _tail = node;
            _head = node;
        }
        else
        {
            node->LinkNext(_head);
            _head = node;
        }

        return _head->data;
    }

    T *AddHead(const T &d)
    {
        AddHead() = d;
        return &_head->data;
    }

    void AddHead(const ZList &l)
    {
        auto cur = l._tail;
        while (cur)
        {
            AddHead() = cur->data;
            cur = cur->GetPrev();
        }
    }

    T &AddHead_()
    {
        return AddHead();
    }

    T *AddHead_Position(const T &d)
    {
        return AddHead(d);
    }

    void AddHead_List(const ZList &l)
    {
        AddHead(l);
    }

    T &AddTail()
    {
        auto node = NewNode();

        // Empty list
        if (!_tail)
        {
            _head = node;
            _tail = node;
        }
        else
        {
            _tail->LinkNext(node);
            _tail = node;
        }

        return _tail->data;
    }

    T *AddTail(const T &d)
    {
        AddTail() = d;
        return &_tail->data;
    }

    void AddTail(const ZList &l)
    {
        auto cur = l._head;
        while (cur)
        {
            AddTail() = cur->data;
            cur = cur->GetNext();
        }
    }

    T &AddTail_()
    {
        return AddTail();
    }

    T *AddTail_Position(const T &d)
    {
        return AddTail(d);
    }

    void AddTail_List(const ZList &l)
    {
        AddTail(l);
    }

    void RemoveTail()
    {
        if (!_tail)
        {
            return;
        }

        auto prev = _tail->GetPrev();
        _tail->Free();
        if (prev)
        {
            prev->SetNext(nullptr);
            _tail = prev;
        }
        else
        {
            _head = nullptr;
            _tail = nullptr;
        }
        _count--;
    }

    void RemoveHead()
    {
        if (!_head)
        {
            return;
        }

        auto next = _head->GetNext();
        DeleteNode(_head);
        if (next)
        {
            next->SetPrev(nullptr);
            _head = next;
        }
        else
        {
            _head = nullptr;
            _tail = nullptr;
        }
    }

    void RemoveAt(T *pos)
    {
        auto node = reinterpret_cast<Node *>(pos);
        if (!node)
        {
            return;
        }

        auto next = node->GetNext();
        auto prev = node->GetPrev();
        if(next) {
            next->SetPrev(prev);
        } else {
            _tail = prev;
        }

        if(prev) {
            prev->SetNext(next);
        } else {
            _head = next;
        }
        DeleteNode(node);
    }

    void RemoveAll()
    {
        auto cur = _head;
        while (cur)
        {
            auto next = cur->GetNext();
            DeleteNode(cur);
            cur = next;
        }

        _tail = nullptr;
        _head = nullptr;
        _count = 0;
    }

    T *FindIndex(const size_t ix)
    {
        if (ix >= _count)
        {
            return nullptr;
        }

        auto half = _count / 2;
        // Go Backwards
        if (ix > half)
        {
            auto cur = _tail;
            for (auto i = 0; i < ix; i++)
            {
                cur = cur->GetPrev();
            }
            return &cur->data;
        }
        else
        { // Go Forwards
            auto cur = _head;
            for (auto i = 0; i < ix; i++)
            {
                cur = cur->GetNext();
            }
            return &cur->data;
        }
    }

    size_t IndexOf(const T *pos)
    {
        auto i = 0;
        for (auto it = begin(); it != end(); ++it)
        {
            if (&(*it) == pos)
            {
                return i;
            }
            i++;
        }
        return SIZE_MAX;
    }

    T *Find(const T &needle, T *after = nullptr) const
    {
        auto cur = reinterpret_cast<Node *>(after);
        cur = cur ? cur : _head;

        while (cur)
        {
            if (cur->data == needle)
            {
                return &cur->data;
            }
            cur = cur->GetNext();
        }
        return nullptr;
    }

    T *FindLast(const T &needle, T *after = nullptr) const
    {
        auto cur = reinterpret_cast<Node *>(after);
        cur = cur ? cur : _tail;

        while (cur)
        {
            if (cur->data == needle)
            {
                return &cur->data;
            }
            cur = cur->GetPrev();
        }
        return nullptr;
    }

    T *Insert(const T &data)
    {
        return AddTail(data);
    }

    T *InsertBefore(T *pos)
    {
        auto node = reinterpret_cast<Node *>(pos);
        if (!node)
        {
            return nullptr;
        }

        auto prev = node->GetPrev();
        auto new_node = NewNode();

        if (prev)
        {
            prev->SetNext(new_node);
            new_node->SetPrev(prev);
        }
        else
        {
            _head = new_node;
        }

        node->SetPrev(new_node);
        new_node->SetNext(node);
        return &new_node->data;
    }

    T *InsertAfter(T *pos)
    {
        auto node = reinterpret_cast<Node *>(pos);
        if (!node)
        {
            return nullptr;
        }

        auto next = node->GetNext();
        auto new_node = NewNode();

        if (next)
        {
            next->SetPrev(new_node);
            new_node->SetNext(next);
        }
        else
        {
            _tail = new_node;
        }

        node->SetNext(new_node);
        new_node->SetPrev(node);
        return &new_node->data;
    }

    void MoveAfter(ZList &l, T *from, T *to, T *pos)
    {
        if (!l._count)
        {
            return;
        }

        auto n = l._count;
        l._head = nullptr;
        l._tail = nullptr;
        l._count = 0;

        auto nodeFrom = from ? reinterpret_cast<Node *>(from) : l._head;
        auto nodeTo = to ? reinterpret_cast<Node *>(to) : l._tail;
        auto nodeInsertPos = pos ? reinterpret_cast<Node *>(pos) : _tail;

        // Current list is empty
        if (!nodeInsertPos)
        {
            _head = nodeFrom;
            _tail = nodeTo;
            _count = n;
            return;
        }

        // Store tmp node
        auto next = nodeInsertPos->GetNext();
        // Link insert position to from
        nodeInsertPos->LinkNext(nodeFrom);

        // Link to node to old next node, update the tail if required
        nodeTo->SetNext(next);
        if (next)
        {
            next->SetPrev(nodeTo);
        }
        else
        {
            _tail = nodeTo;
        }
        _count += n;
    }

    void MoveAfter_(ZList &l, T *from, T *to)
    {
        MoveAfter(l, from, to, nullptr);
    }

    T *FindSatisfying(bool (*fn)(const T &)) const
    {
        auto cur = _head;
        while (cur)
        {
            if (fn(cur->data))
            {
                return &cur->data;
            }
            cur = cur->GetNext();
        }
        return nullptr;
    }

    static T *__cdecl GetNext(T *&pos)
    {
        auto cur = reinterpret_cast<Node *>(pos);
        if (!cur)
        {
            return nullptr;
        }

        auto ret = &cur->data;
        auto next = cur->GetNext();
        pos = next ? &next->data : nullptr;
        return ret;
    }

    static T *__cdecl GetPrev(T *&pos)
    {
        auto cur = reinterpret_cast<Node *>(pos);
        if (!cur)
        {
            return nullptr;
        }

        auto ret = &cur->data;
        auto prev = cur->GetPrev();
        pos = prev ? &prev->data : nullptr;
        return ret;
    }

    void ReplaceAt(T *pos, const T &data)
    {
        auto node = reinterpret_cast<Node *>(pos);
        if (!node)
        {
            return;
        }

        node->data = data;
    }

    void Retain(std::function<bool(T&)> f)
    {
        auto cur = GetHeadPosition();
        while (cur)
        {
            auto val = GetNext(cur);
            if (!f(*val))
            {
                RemoveAt(val);
            }
        }
    }

private:
    Node *NewNode()
    {
        _count++;
        return Node::Alloc();
    }

    void DeleteNode(Node *node)
    {
        node->Free();
        _count--;
    }
};

Z_ASSERT_SIZE(ZList<int>, 0x14);