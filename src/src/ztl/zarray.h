#pragma once

#include <cstring>
#include <span>

#include "zallocex.h"

template <typename T>
class ZArray
{
public:
    struct Header
    {
        size_t _count{};
        T _data[0];

        static Header* Alloc(const size_t cap, size_t count)
        {
            void* hdr_ = z_anon_alloc(sizeof(Header) + sizeof(T) * cap);
            auto hdr = static_cast<Header*>(hdr_);
            hdr->_count = count;
            return hdr;
        }

        void Free()
        {
            z_anon_free(reinterpret_cast<void*>(this));
        }

        void FreeDestroy()
        {
            for (auto i = 0; i < _count; i++)
            {
                _data[i].~T();
            }
            Free();
        }

        [[nodiscard]] size_t BytesCap() const
        {
            const auto size = ZAllocBase::_MemSize(static_cast<const void*>(this));
            return size - sizeof(Header);
        }

        [[nodiscard]] size_t Cap() const
        {
            return BytesCap() / sizeof(T);
        }

        [[nodiscard]] size_t BytesLen() const
        {
            return _count * sizeof(T);
        }

        [[nodiscard]] size_t Len() const
        {
            return _count;
        }

        std::span<T> GetSpan()
        {
            return std::span<T>(_data, _count);
        }

        T* Start()
        {
            return _data;
        }

        T* End()
        {
            return _data + _count;
        }
    };

    // Fields
    T* _a{};

    // Functions
    Header* GetHeader()
    {
        return _a ? reinterpret_cast<Header*>(_a) - 1 : nullptr;
    }

    Header* GetHeader() const
    {
        return _a ? reinterpret_cast<Header*>(_a) - 1 : nullptr;
    }

    static size_t NextSize(size_t size)
    {
        return size == 0 ? 1 : size * 2;
    }

    static size_t FindNextSize(size_t curSize, size_t size)
    {
        while (curSize < size)
            curSize = NextSize(curSize);
        return curSize;
    }

public:
    ZArray() = default;

    ~ZArray()
    {
        RemoveAll();
    }

    explicit ZArray(const size_t size)
    {
        Alloc(size, ZAllocHelper(1));
    }

    explicit ZArray(const size_t size, const ZAllocHelper& alloc)
    {
        Alloc(size, alloc);
    }

    ZArray(const ZArray<T>& rhs)
    {
        copyFrom(rhs._a, rhs.GetCount());
    }

    ZArray(const T* data, size_t size)
    {
        if (!size)
        {
            return;
        }
        // Allocate new memory
        _a = Header::Alloc(size);
        std::memmove(_a, data, size * sizeof(T));
    }

    T* begin()
    {
        return _a;
    }

    T* end()
    {
        return _a + GetCount();
    }

    T* At(size_t ix)
    {
        if (ix >= GetCount())
        {
            return nullptr;
        }

        return &_a[ix];
    }

    const T* At(size_t ix) const
    {
        if (ix >= GetCount())
        {
            return nullptr;
        }

        return &_a[ix];
    }


    const T* begin() const
    {
        return _a;
    }

    const T* end() const
    {
        return _a + GetCount();
    }

    [[nodiscard]] size_t GetCount() const
    {
        auto hdr = GetHeader();
        return hdr ? hdr->_count : 0;
    }

    [[nodiscard]] bool IsEmpty() const
    {
        return this->GetCount() == 0;
    }

    [[nodiscard]] size_t GetCapacity() const
    {
        auto hdr = GetHeader();
        return hdr ? hdr->Cap() : 0;
    }

    T& GetAt(size_t i)
    {
        ZTL_CHECK_BOUNDS(i, GetCount());
        return _a[i];
    }

    T* Insert(const T& e, size_t ix = SIZE_MAX)
    {
        ix = ix == SIZE_MAX ? GetCount() : ix;
        InsertBefore(ix) = e;
        return &_a[ix];
    }

    T& InsertBefore(size_t ix = SIZE_MAX)
    {
        const auto len = GetCount();
        ix = ix == SIZE_MAX ? len : ix;
        //TODO ZTL_CHECK_BOUNDS(ix, len);

        if (const auto cap = GetCapacity(); len + 1 > cap)
        {
            Reserve(NextSize(len));
        }

        // Shift elements to the right
        auto hdr = GetHeader();
        ++hdr->_count;
        auto tail = &hdr->_data[ix];
        std::memmove(
            &tail[1],
            tail,
            sizeof(T) * (len - ix));

        // Initialize the new object
        new(&hdr->_data[ix]) T();
        return hdr->_data[ix];
    }

    void MakeSpace(const size_t new_size)
    {
        if (const size_t cur_size = GetCount(); new_size > cur_size)
        {
            ReAlloc(FindNextSize(cur_size, new_size), false, ZAllocHelper(1));
        }
    }

    const T* GetData() const
    {
        return _a;
    }

    T* GetData_()
    {
        return _a;
    }

    // TODO that should be RemoveAt
    void RemoveAtIx(size_t nIdx)
    {
        this->RemoveAt(&_a[nIdx]);
    }

    void RemoveAt(T* item) // TODO test this
    {
        ZTL_CHECK_BOUNDS_PTR(item, GetStart(), GetEnd());
        item->~T();

        auto hdr = GetHeader();
        auto ix = IndexOf(item);
        std::memmove(
            item,
            item + 1,
            sizeof(T) * (GetCount() - ix - 1));
        --hdr->_count;
    }

    inline size_t IndexOf(T* pos)
    {
        ZTL_CHECK_BOUNDS_PTR(pos, GetStart(), GetEnd());
        return pos - _a;
    }

    T& GetNext(T*& pos)
    {
        T* cur = pos;
        pos = cur > _a ? cur - 1 : nullptr;

        return *cur;
    }

    T& GetPrev(T*& pos)
    {
        T* cur = pos;
        pos = cur < _a + GetCount() ? cur + 1 : nullptr;

        return *cur;
    }

    T* GetHeadPosition()
    {
        auto hdr = GetHeader();
        return hdr ? &hdr->_data[hdr->_count - 1] : nullptr;
    }

    T* GetTailPosition() const
    {
        return _a;
    }

    void RemoveAll()
    {
        auto hdr = GetHeader();
        if (!hdr)
            return;

        // Call destructors
        auto data = hdr->_data;
        this->Destroy(data, data + hdr->_count);

        // Free the header
        hdr->Free();
        _a = nullptr;
    }

    T* FindIndex(size_t ix)
    {
        ZTL_CHECK_BOUNDS(ix, GetCount());
        return &_a[ix];
    }

    size_t FindIndexOf(const T& value) const
    {
        auto pos = std::find(begin(), end(), value);
        if (pos == end())
        {
            return -1;
        }
        return std::distance(begin(), pos);
    }

    size_t SortedFindIndexOf(const T& value) const
    {
        auto it = std::lower_bound(begin(), end(), value);
        if (it == end() || *it != value) return -1; // Not found
        return std::distance(begin(), it);
    }

    void Move(ZArray& other)
    {
        this->RemoveAll();
        _a = other._a;
        other._a = nullptr;
    }

    void ReAlloc(size_t newSize, int mode, const ZAllocHelper& h)
    {
        size_t old_size = this->GetCount();
        auto hdr = GetHeader();
        // If no header exists allocate one
        if (!hdr)
        {
            Alloc(newSize, h);
            return;
        }

        auto cap = hdr->Cap();
        if (newSize <= cap)
        {
            hdr->_count = newSize;
            Construct(&_a[old_size], &_a[newSize]);
            return;
        }

        // TODO get next size
        auto newHdr = Header::Alloc(newSize, newSize);
        if ((mode & 1) == 0)
        {
            std::memmove(newHdr->_data, _a, sizeof(T) * old_size);
            hdr->Free();

            Construct(&newHdr->_data[old_size], &newHdr->_data[newSize]);
        }
        else
        {
            // Oversight in the actual code
            this->RemoveAll();
            Construct(&newHdr->_data[0], &newHdr->_data[newSize]);
        }
        newHdr->_count = newSize;
        // TODO initialize the newly allocated data
        _a = newHdr->_data;
    }

    void copyFrom(const T* data, size_t count)
    {
        if (!count)
        {
            return;
        }

        auto hdr = Header::Alloc(count, count);
        _a = hdr->_data;
        for (auto i = 0; i < count; i++)
        {
            new(&hdr->_data[i]) T(data[i]);
        }
    }

    ZArray& operator=(const ZArray& other)
    {
        if (this == &other)
        {
            return *this;
        }

        // Remove all items from the array
        RemoveAll();
        copyFrom(other._a, other.GetCount());

        return *this;
    }

    T& operator[](size_t i)
    {
        ZTL_CHECK_BOUNDS(i, GetCount());
        return _a[i];
    }

    const T& operator[](size_t i) const
    {
        ZTL_CHECK_BOUNDS(i, GetCount());
        return _a[i];
    }

    T* operator*()
    {
        return *_a;
    }

    const T* operator*() const
    {
        return *_a;
    }

    void Alloc(size_t size, const ZAllocHelper& h = ZAllocHelper(1))
    {
        this->RemoveAll();

        if (!size)
        {
            return;
        }

        auto hdr = Header::Alloc(size, size);
        _a = hdr->_data;
        Construct(_a, _a + size);
    }

private:
    static void Construct(T* start, T* end)
    {
        for (auto cur = start; cur < end; ++cur)
        {
            new(cur) T();
        }
    }

    static void Destroy(T* start, T* end)
    {
        for (auto cur = start; cur < end; ++cur)
        {
            cur->~T();
        }
    }


    void _Alloc(const size_t size, const ZAllocHelper& h)
    {
        Alloc(size, ZAllocHelper(1));
    }

    void Reserve(size_t requestCap)
    {
        if (const auto cap = GetCapacity(); cap >= requestCap)
        {
            return;
        }

        auto hdr = GetHeader();
        auto len = GetCount();
        auto newHdr = Header::Alloc(requestCap, len);
        if (hdr)
        {
            std::memmove(newHdr->_data, _a, sizeof(T) * len);
            hdr->Free();
        }

        _a = newHdr->_data;
    }

    T* GetStart()
    {
        return _a;
    }

    T* GetEnd()
    {
        return _a + GetCount();
    }

public:
    // Helper
    void _ctor_default()
    {
        new(this) ZArray();
    }

    void _ctor_alloc(size_t n, const ZAllocHelper& alloc)
    {
        new(this) ZArray(n, alloc);
    }

    void _Realloc(const size_t newSize, const int mode, const ZAllocHelper& h)
    {
        this->ReAlloc(newSize, mode, h);
    }
};
