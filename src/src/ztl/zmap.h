#pragma once

#include <bit>
#include <cstdint>
#include <cassert>
#include "zrecyclable.h"

#include "zhash.h"

typedef void POSITION;

template <typename Key, typename Value, typename KeyS>
class ZMap final
{
    struct Pair final : public ZRecyclable<Pair, 16, Pair>
    {
        Pair *_next{};
        KeyS _key;
        Value _value;

        Pair(const Key &key, const Value &value) : _next(nullptr), _key(key), _value(value) {}
        Pair(const Key &key) : _next(nullptr), _key(key), _value() {}
        ~Pair() override = default;

        [[nodiscard]] size_t GetHash() const
        {
            const Key key = static_cast<Key>(_key);
            return zhash<Key>(key);
        }

        const KeyS &GetKey() const
        {
            return _key;
        }

        KeyS &GetKey()
        {
            return _key;
        }

        const Value &GetValue() const
        {
            return _value;
        }

        void SetValue(const Value &value)
        {
            _value = value;
        }
    };

    struct Table
    {
        Pair **_p{};
        size_t _size{};

        explicit Table(size_t size)
        {
            // For whatever reason the default size is 31
            _size = size == 0 ? 31 : size;
            if (size)
            {
                _p = ZAllocExAnon::GetInstance()->AllocArrayT<Pair *>(size);
                for (auto i = 0; i < size; i++)
                {
                    _p[i] = nullptr;
                }
            }
        }

        Table(Table &&other) noexcept
        {
            _p = other._p;
            _size = other._size;
            other._p = nullptr;
            other._size = 0;
        }

        Table &operator=(Table &&other) noexcept
        {
            if (this != &other)
            {
                Clear();
                _p = other._p;
                _size = other._size;
                other._p = nullptr;
                other._size = 0;
            }
            return *this;
        }

        ~Table()
        {
            Clear();
        }

        [[nodiscard]] size_t GetSize() const
        {
            return _p ? _size : 0;
        }

        [[nodiscard]] Pair *FindPair(const Key &key) const
        {
            if (!_p)
            {
                return nullptr;
            }

            auto ix = zhash(key) % _size;
            auto cur = _p[ix];
            while (cur)
            {
                if (cur->GetKey() == key)
                {
                    return cur;
                }
                cur = cur->_next;
            }
            return nullptr;
        }

        void Clear()
        {
            if (_p)
            {
                ZAllocExAnon::GetInstance()->FreeT(_p);
                _p = nullptr;
            }
        }
    };

private:
    Table _table{0};
    size_t _count{};
    size_t _auto_grow_every128{};
    size_t _auto_grow_limit{};

public:
    ZMap()
    {
        calcAutoGrow(100);
    }
    ZMap(size_t hash_table_size, const size_t auto_grow_every128)
    {
        _table = Table(hash_table_size);
        _auto_grow_every128 = auto_grow_every128;
        calcAutoGrow(auto_grow_every128);
    }
    ZMap(const ZMap &other)
    {
        copyFrom(other);
    }

    void _ctor_0()
    {
        new (this) ZMap();
    }

    void _ctor_ii(size_t hash_table_size, size_t auto_grow_every128)
    {
        new (this) ZMap(hash_table_size, auto_grow_every128);
    }

    virtual ~ZMap()
    {
        RemoveAll();
    }

    void ResizeHashTable(size_t new_table_size, size_t use_auto_grow_every128)
    {
        if (_table.GetSize() == new_table_size)
        {
            return;
        }

        // Allocate new table
        auto oldTable = std::exchange(_table, Table(new_table_size));
        calcAutoGrow(use_auto_grow_every128);

        // Nothing to empty
        if (!oldTable._p)
        {
            return;
        }

        // Copy over
        for (auto i = 0; i < oldTable.GetSize(); i++)
        {
            auto p = oldTable._p[i];
            while (p)
            {
                auto next = p->_next;
                auto bucket_ix = p->GetHash() % _table.GetSize();
                p->_next = _table._p[bucket_ix];
                _table._p[bucket_ix] = p;
                p = next;
            }
        }
    }

    void EnsureHashTableSize(size_t s)
    {
        if (s > _table.GetSize())
        {
            ResizeHashTable(s, 0);
        }
    }

    [[nodiscard]] size_t GetHashTableSize() const
    {
        return _table.GetSize();
    }

    [[nodiscard]] size_t GetCount() const
    {
        return _count;
    }

    [[nodiscard]] bool IsEmpty() const
    {
        return !_count;
    }

    Value *GetAt(const Key &key, Value *value) const
    {
        if (auto p = _table.FindPair(key))
        {
            if (value)
            {
                *value = p->GetValue();
            }
            return &p->_value;
        }
        return nullptr;
    }

    const Value *GetAt_(const Key &key, Value *value) const
    {
        if (auto p = _table.FindPair(key))
        {
            if (value)
            {
                *value = p->GetValue();
            }
            return &p->value;
        }
        return nullptr;
    }

    Value *SetAt(const Key &key, const Value &value)
    {
        auto p = Insert(key, value);
        return &reinterpret_cast<Pair *>(p)->_value;
    }

    Value &operator[](const Key &key)
    {
        if (auto p = GetAt(key, nullptr))
        {
            return *p;
        }

        return *SetAt(key, Value());
    }

    [[nodiscard]] size_t GetBucketIx(const Key &key) const
    {
        return zhash(key) % _table.GetSize();
    }

    POSITION *Insert(const Key &key, const Value &value)
    {
        return reinterpret_cast<POSITION *>(_Insert(key, &value));
    }

    POSITION *InsertPtr(const Key &key, const Value *value)
    {
        return reinterpret_cast<POSITION *>(_Insert(key, value));
    }

    Value *InsertPtrValue(const Key &key, const Value *value)
    {
        return &_Insert(key, value)->_value;
    }

    bool RemoveKey(const Key &key)
    {
        if (!this->_table._p)
            return false;
        auto ix = GetBucketIx(key);
        Pair *cur = _table._p[ix];
        Pair *prev = nullptr;
        while (cur)
        {
            if (cur->_key == key)
            {
                _Remove(prev, cur, ix);
                return true;
            }
            prev = cur;
            cur = cur->_next;
        }

        return false;
    }

    bool RemoveAt(POSITION *p)
    {
        if (!this->_table._p)
            return false;
        auto pair = static_cast<Pair *>(p);
        auto ix = GetBucketIx(pair->key);
        Pair *cur = this->_table._p[ix];
        Pair *prev = nullptr;
        while (cur)
        {
            if (cur == pair)
            {
                RemovePair(prev, cur, ix);
                return true;
            }
            prev = cur;
            cur = cur->_next;
        }

        return false;
    }

    void RemoveAll()
    {
        for (auto i = 0; i < _table.GetSize(); i++)
        {
            auto cur = _table._p[i];
            while (cur)
            {
                auto next = cur->_next;
                delete cur;
                cur = next;
            }
            _table._p[i] = nullptr;
        }
        _count = 0;
    }

    [[nodiscard]] POSITION *GetHeadPosition() const
    {
        for (auto i = 0; i < _table.GetSize(); i++)
        {
            if (_table._p[i])
            {
                return *reinterpret_cast<POSITION **>(&_table._p[i]);
            }
        }

        return nullptr;
    }

    // TODO GetNext const
    const KeyS &GetNext(POSITION *&p, Value *value) const
    {
        auto pair = static_cast<Pair *>(p);
        auto next = pair->_next;
        if (!next)
        {
            auto ix = pair->GetHash() % _table.GetSize();
            if (ix + 1 < _table.GetSize())
            {
                next = _table._p[ix + 1];
            }
        }
        p = reinterpret_cast<POSITION *>(next);
        if (value)
        {
            *value = pair->_value;
        }
        return pair->_key;
    }

    Value &GetValueAt(POSITION *p)
    {
        return static_cast<Pair *>(p)->value;
    }

    const Value &GetValueAt(POSITION *p) const
    {
        return static_cast<Pair *>(p)->value;
    }

    const Key &GetAtByPos(POSITION *p, Value &v) const
    {
        auto pair = static_cast<Pair *>(p);
        v = pair->value;
        return pair->key;
    }

    const Key &GetAtByPos(POSITION *p) const
    {
        return static_cast<Pair *>(p)->GetKey();
    }

    [[nodiscard]] POSITION *GetPos(const Key &key) const
    {
        return reinterpret_cast<POSITION *>(_table.FindPair(key));
    }

    const KeyS *FindInverse(const Value &v)
    {
        for (auto i = 0; i < _table.GetSize(); i++)
        {
            auto cur = _table._p[i];
            while (cur)
            {
                if (cur->_value == v)
                {
                    return &cur->_key;
                }
                cur = cur->_next;
            }
        }
        return nullptr;
    }

    void calcAutoGrow(const size_t grow128)
    {
        if (grow128)
        {
            _auto_grow_every128 = grow128;
        }

        if (_auto_grow_every128 != SIZE_MAX)
        {
            _auto_grow_limit = (_table._size * _auto_grow_every128) / 128;
        }
        else
        {
            _auto_grow_limit = _auto_grow_every128 | grow128;
        }
    }

    void _CalcAutoGrow(const size_t grow128)
    {
        calcAutoGrow(grow128);
    }

    void copyFrom(const ZMap &other)
    {
        for (size_t i = 0; i < other._table.GetSize(); i++)
        {
            auto cur = other._table._p[i];
            while (cur)
            {
                Key key = static_cast<Key>(cur->GetKey());
                SetAt(key, cur->_value);
                cur = cur->_next;
            }
        }
    }

    ZMap &operator=(const ZMap &other)
    {
        if (this == &other)
        {
            return *this;
        }

        RemoveAll();
        _auto_grow_every128 = other._auto_grow_every128;
        _auto_grow_limit = other._auto_grow_limit;
        EnsureHashTableSize(other._table.GetSize());
        copyFrom(other);
        return *this;
    }

private:
    Pair *_Insert(const Key &key, const Value *value)
    {
        auto sz = _table.GetSize();
        if (!sz)
        {
            ResizeHashTable(_table._size, 0);
        }
        else if (_count > _auto_grow_limit)
        {
            ResizeHashTable(sz * 2 + 1, 0);
        }

        auto bucketIx = GetBucketIx(key);
        // Find insert slot
        auto cur = &_table._p[bucketIx];

        while (*cur)
        {
            auto p = *cur;
            if (p->GetKey() == key)
            {
                if (value)
                {
                    p->SetValue(*value);
                }
                return p;
            }
            cur = &p->_next;
        }

        if (value)
        {
            *cur = new Pair(key, *value);
        }
        else
        {
            *cur = new Pair(key);
        }

        _count++;
        return *cur;
    }

    void _Remove(Pair *prev, Pair *toDelete, size_t ix)
    {
        auto next = toDelete->_next;
        if (prev)
        {
            prev->_next = next;
        }
        else
        {
            _table._p[ix] = next;
        }
        delete toDelete;
        _count--;
    }
};

static_assert(sizeof(ZMap<int, int, int>) == 0x18, "ZMap");
