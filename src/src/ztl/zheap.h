#pragma once

#include "util.h"

#include <cassert>
#include <array>
#include <cstdint>

#include "zref.h"
#include "zarray.h"

template <typename T>
class ZMinHeapCompare
{
public:
    static int32_t _Compare(const T& a, const T& b)
    {
        // TODO
        return a < b;
    }


    static int32_t _Compare(const T* a, const T* b)
    {
        return _Compare(*a, *b);
    }
};


//
template <typename T, typename U>
class ZHeapBase : private ZRefCountedAccessor<T>, private ZRefCountedAccessor<ZRefCountedDummy<T>>
{
    ZTL_PAD_FIELD;
    const size_t _increment{};
    size_t _count{};
    ZArray<T*> _heap;

    ZRefCountedDummy<T>* GetRef(size_t i)
    {
        return ZRefCountedDummy<T>::From(_heap[i]);
    }

    static size_t Parent(size_t i)
    {
        return (i - 1) / 2;
    }

    static size_t Left(size_t i)
    {
        return 2 * i + 1;
    }

    static size_t Right(size_t i)
    {
        return 2 * i + 2;
    }

public:
    ZHeapBase() : _increment(0),
                  _count(0)
    {
    }

    ZHeapBase(const size_t inc, const size_t count) : _increment(inc)
    {
        _count = count;
    }

    virtual ~ZHeapBase() = default;

    [[nodiscard]] size_t GetCount() const
    {
        return _count;
    }

    [[nodiscard]] bool IsEmpty() const
    {
        return _count == 0;
    }

    T& operator*()
    {
        return *_heap[0];
    }

    T* operator->()
    {
        return _heap[0];
    }

    void RemoveHead()
    {
        if (!_count)
        {
            return;
        }

        // TODO verify delete
        auto node = GetRef(0);
        delete node;
        _count--;

        if (!_count)
        {
            return;
        }

        Swap(_count, 0);
        _AdjustDownward(0);
    }

    T* Insert(const T& value)
    {
        auto len = _heap.GetCount();
        if (_count >= len)
        {
            auto inc = _increment ? _increment : len;
            inc = inc ? inc : 4;
            _heap.ReAlloc(len + inc, 1, ZAllocHelper(1)); // TODO verify retain
        }

        auto node = _New(nullptr, _count);
        *node = value;
        _heap[_count] = node;
        _count++;
        _AdjustUpward();
        return node;
    }

    [[nodiscard]] T* GetHeadPosition() const
    {
        return reinterpret_cast<T*>(_count > 0 ? 0 : -1);
    }

    T& GetNext(T*&)
    {
        Z_UNIMPLEMENTED;
    }

    const T& GetNext(T*&) const
    {
        Z_UNIMPLEMENTED;
    }

    T& GetAt(T*)
    {
        Z_UNIMPLEMENTED;
    }

    const T& GetAt(T*) const
    {
        Z_UNIMPLEMENTED;
    }

    void RemoveAt(T* p)
    {
        auto ix = _GetIndex(p);
        Swap(_count - 1, ix);
        _heap.RemoveAt(_count - 1);
        _count--;
        _AdjustDownward(ix);
    }

    void UpdateAt(T* pos)
    {
        if (_count <= 1)
        {
            return;
        }

        auto ix = _GetIndex(pos);
        auto count = _count;
        if (ix < _count - 1)
        {
            Swap(_count - 1, ix);
            _count--;
            _AdjustDownward(ix);
            _count++;
        }
        _count++;
        _AdjustUpward();
    }

    void RemoveAll()
    {
        if (_count)
        {
            for (size_t i = 0; i < _count; i++)
            {
                auto node = GetRef(i);
                delete node;
            }
        }

        _heap.RemoveAll();
    }

    void Swap(size_t i, size_t j)
    {
        auto temp = _heap[i];
        _heap[i] = _heap[j];
        GetRef(i)->_long = i;
        _heap[j] = temp;
        GetRef(j)->_long = j;
    }

    size_t _Adjust(size_t cur)
    {
        auto left = 2 * cur + 1;
        auto right = 2 * cur + 2;
        auto largest = cur;


        if (left < _count && U::_Compare(static_cast<const T*>(_heap[left]), static_cast<const T*>(_heap[largest])) > 0)
        {
            largest = left;
        }
        if (right < _count && U::_Compare(static_cast<const T*>(_heap[right]), static_cast<const T*>(_heap[largest])) >
            0)
        {
            largest = right;
        }
        if (largest == cur)
        {
            return 0;
        }
        Swap(cur, largest);
        return largest;
    }

    void _AdjustDownward(size_t cur)
    {
        auto i = cur;
        do
        {
            i = _Adjust(i);
        }
        while (i != 0);
    }

    void _AdjustUpward()
    {
        const auto i = _count - 1;
        while (i >= 1)
        {
            if (const auto parent = (i - 1) / 2; _Adjust(parent) == 0)
            {
                break;
            }
        }
    }

    static T* _New(void* p, size_t index)
    {
        auto ref = new ZRefCountedDummy<T>();
        ref->_long = static_cast<int>(index);
        return ref->GetInner();
    }

    static int32_t& _GetIndex(T* p)
    {
        return ZRefCountedDummy<T>::From(p)->_long;
    }
};

template <typename T, typename U = ZMinHeapCompare<T>>
class ZMinHeap : public ZHeapBase<T, U>
{
public:
    ZMinHeap() = default;

    virtual ~ZMinHeap() = default;
};

typedef ZMinHeap<int> ZMinHeapInt;
Z_ASSERT_SIZE(ZMinHeapInt, 0x14);
