#pragma once

#include <cstdint>
#include <type_traits>
#include "helper.h"
#include "zalloc.h"
#include "zrecyclable.h"

struct ZRefCount
{
    [[nodiscard]] bool IsLastRef() const;
    int AddRef();
    bool Release();
    [[nodiscard]] int GetRefCount() const;
    void Set(int rc);

private:
    [[nodiscard]] const std::atomic_int &GetRef() const;
    std::atomic_int &GetRef();
    int ref_count{};
};



#pragma pack(push, 1)
class ZRefCounted
{
public:
    union
    {
        ZRefCount ref_count;
        ZRefCounted *_next;
        int _long{};
    };
    ZRefCounted *_prev = nullptr;

public:
    ZRefCounted();
    virtual ~ZRefCounted() = default;
    [[nodiscard]] bool IsLastRef() const;
};
#pragma pack(pop)

Z_ASSERT_SIZE(ZRefCounted, 0xc);

class ZRefCountedAccessorBase
{
protected:
    static ZRefCounted *_Set1(ZRefCounted *p);
    static void _Delete(ZRefCounted *p);
    static void _AddRef(ZRefCounted *p);
    static void _Release(ZRefCounted *p);
    static ZRefCounted *&_GetPrev(ZRefCounted *p);
    static ZRefCounted *&_GetNext(ZRefCounted *p);
    static int &_GetLong(ZRefCounted *p);
};

Z_ASSERT_SIZE(ZRefCountedAccessorBase, 1);

template <class T>
class ZRefCountedAccessor : public ZRefCountedAccessorBase
{
protected:
    static void _Delete(T *p)
    {
        ZRefCountedAccessorBase::_Delete(p);
    }
    static void _AddRef(T *p)
    {
        ZRefCountedAccessorBase::_AddRef(p);
    }
    static void _Release(T *p)
    {
        ZRefCountedAccessorBase::_Release(p);
    }
    static int &_GetLong(T *p)
    {
        return ZRefCountedAccessorBase::_GetLong(p);
    }

};
Z_ASSERT_SIZE(ZRefCountedAccessor<int>, 1);

template <class T>
class ZRefCountedDummy : public ZRefCounted, public ZRecyclable<ZRefCountedDummy<T>, 16, T>
{
private:
    T _t{};

public:
    ~ZRefCountedDummy() override = default;

    [[nodiscard]] const T *GetInner() const
    {
        return static_cast<const T *>(&_t);
    }

    T *GetInner()
    {
        return static_cast<T *>(&_t);
    }

    explicit operator T *() const
    {
        return &_t;
    }

    ZRefCountedDummy *GetPrev()
    {
        return reinterpret_cast<ZRefCountedDummy<T> *>(this->_prev);
    }

    ZRefCountedDummy *GetNext()
    {
        return reinterpret_cast<ZRefCountedDummy<T> *>(this->_next);
    }

    static ZRefCountedDummy *From(T *p)
    {
        // Verify
        static constexpr size_t OFFSET = sizeof(size_t) * 4;
        auto *data = reinterpret_cast<uint8_t *>(p);
        return reinterpret_cast<ZRefCountedDummy<T> *>(data - OFFSET);
    }

    static const ZRefCountedDummy *From(const T *p)
    {
        // Verify
        static constexpr size_t OFFSET = sizeof(size_t) * 4;
        auto *data = reinterpret_cast<const uint8_t *>(p);
        return reinterpret_cast<const ZRefCountedDummy<T> *>(data - OFFSET);
    }
};

template <class T>
typename std::enable_if<std::is_base_of<ZRefCounted, T>::value, T*>::type
ZRefCounted_Alloc()
{
    return new T();
}

template <class T>
typename std::enable_if<!std::is_base_of<ZRefCounted, T>::value, T*>::type
ZRefCounted_Alloc()
{
    auto p = new ZRefCountedDummy<T>();
    return p->GetInner();
}

template <typename T>
struct ZRefCounted_AllocHelper
{
    static T * __cdecl call(void* p)
    {
        return ZRefCounted_Alloc<T>();
    }
};


Z_ASSERT_SIZE(ZRefCountedDummy<int32_t>, 0x14);

template <typename T>
class ZRef : private ZRefCountedAccessor<T>, private ZRefCountedAccessor<ZRefCountedDummy<T>>
{
    ZTL_PAD_FIELD;

public:
    T *_p{};

public:
    ZRef() = default;

    explicit ZRef(const ZAllocHelper &helper)
    {
        Alloc(helper);
    }

    ZRef(T *p, bool add_ref)
    {
        if (!p)
            return;

        _p = p;
        if (add_ref)
        {
            _AddRef();
        }
    }

    explicit ZRef(int zero)
    {
        _p = nullptr;
    }

    ZRef(std::nullptr_t zero) // NOLINT(*-explicit-constructor)
    {
        _p = nullptr;
    }

    ZRef(const ZRef &other)
    {
        *this = other;
    }

    ZRef(const ZRef &other, bool add_ref)
    {
        _p = other._p;
        if (add_ref && _p)
        {
            _AddRef();
        }
    }

    ~ZRef()
    {
        Clear();
    }

    T *Attach(T *d)
    {
        T *old = this->_p;
        _p = d;
        if(_p) {
            _AddRef();
        }
        return old;
    }

    T *Detach()
    {
        T *old = this->_p;
        this->_p = nullptr;
        return old;
    }

    void Clear()
    {
        _Release();
        _p = nullptr;
    }

    [[nodiscard]] int GetRefCount() const
    {
        return this->GetRaw()->ref_count.GetRefCount();
    }

    /// Operators
    bool operator==(T *d) const
    {
        return this->_p == d;
    }

    bool operator==(const ZRef &other) const
    {
        return this->_p == other._p;
    }

    explicit operator bool() const
    {
        return this->_p != nullptr;
    }

    bool operator!() const
    {
        return this->_p == nullptr;
    }

    explicit operator const T *() const
    {
        return this->_p;
    }

    explicit operator T *() const
    {
        return this->_p;
    }

    explicit operator T&()
    {
        return *this->_p;
    }

    explicit operator const T& () const
    {
        return *this->_p;
    }

    T *operator->()
    {
        return this->_p;
    }

    const T *operator->() const
    {
        return this->_p;
    }

    T& operator*() {
        return *_p;
    }

    const T& operator*() const {
        return *_p;
    }

    ZRef &operator=(const ZRef &other)
    {
        if(this == &other) {
            return *this;
        }

        _Release();
        if (other._p)
        {
            _p = other._p;
            _AddRef();
        }
        return *this;
    }

    ZRef &operator=(int zero)
    {
        if (!zero)
        {
            Clear();
        }
        return *this;
    }

    ZRef &operator=(T *d)
    {
        this->Clear();
        this->Attach(d);
        return *this;
    }

private:
    template <typename U = T>
    typename std::enable_if<std::is_base_of<ZRefCounted, U>::value, T*>::type GetRaw()
    {
        return _p;
    }

    template <typename U = T>
    typename std::enable_if<!std::is_base_of<ZRefCounted, U>::value, ZRefCountedDummy<T>*>::type GetRaw()
    {
        return _p ? ZRefCountedDummy<T>::From(_p) : nullptr;
    }

    template <typename U = T>
    typename std::enable_if<std::is_base_of<ZRefCounted, U>::value, const T*>::type GetRaw() const
    {
        return _p;
    }

    template <typename U = T>
    typename std::enable_if<!std::is_base_of<ZRefCounted, U>::value, const ZRefCountedDummy<T>*>::type GetRaw() const
    {
        return _p ? ZRefCountedDummy<T>::From(_p) : nullptr;
    }

    template <typename U = T>
    typename std::enable_if<std::is_base_of<ZRefCounted, U>::value>::type __Alloc()
    {
        _p = new T();
        ZRefCountedAccessorBase::_Set1(_p);
    }

    // Second function: Enabled if T does not inherit from ZRefCounted
    template <typename U = T>
    typename std::enable_if<!std::is_base_of<ZRefCounted, U>::value>::type __Alloc()
    {
        auto p = new ZRefCountedDummy<U>();
        ZRefCountedAccessorBase::_Set1(p);
        _p = p->GetInner();
    }

    template <typename U = T>
    typename std::enable_if<std::is_base_of<ZRefCounted, U>::value>::type _Delete()
    {
        ZRefCountedAccessor<T>::_Delete(_p);
    }

    // Second function: Enabled if T does not inherit from ZRefCounted
    template <typename U = T>
    typename std::enable_if<!std::is_base_of<ZRefCounted, U>::value>::type _Delete()
    {
        ZRefCountedAccessor<ZRefCountedDummy<U>>::_Delete(ZRefCountedDummy<U>::From(_p));
    }

    void _Alloc() {
        _Release();
        __Alloc();
    }

    ZRef& Alloc(const ZAllocHelper &alloc)
    {
        _Release();
        __Alloc(); //TODO is this correct?
        return *this;
    }

    void _AddRef()
    {
        GetRaw()->ref_count.AddRef();
    }

    void _Release()
    {
        if (_p)
        {
            auto raw = GetRaw();
            if(raw->ref_count.Release())
            {
                _Delete();
            }
            _p = nullptr;
        }
    }

    void _ReleaseRaw(ZRefCounted* raw)
    {
        _Release();
    }

#ifdef REGEN_HELPERS
public:
    void _ctor_default()
    {
        new (this) ZRef();
    }

    void _ctor_zero(int zero)
    {
        new (this) ZRef(zero);
    }

    void _ctor_alloc(const ZAllocHelper &helper)
    {
        new (this) ZRef(helper);
    }

    void _ctor_copy(ZRef& other)
    {
        new (this) ZRef(other, true);
    }

    // TODO
    T *op_star()
    {
        return _p;
    }
    // TODO
    T* op_star_access()
    {
        return _p;
    }

    ZRef& op_assign_copy(const ZRef<T> &other)
    {
        return operator=(other);
    }

    ZRef& op_assign_zero(int zero)
    {
        return operator=(zero);
    }

    ZRef& op_assign_ptr(T *d)
    {
        return operator=(d);
    }

    [[nodiscard]] T *op_arrow() const
    {
        return this->_p;
    }

    [[nodiscard]] T *op_ptr() const
    {
        return this->_p;
    }

    [[nodiscard]] T *op_ptr_access() const
    {
        return op_ptr();
    }

    [[nodiscard]] bool op_not() const
    {
        return operator!();
    }

    ZRef& op_assign(const ZRef<T> &other)
    {
        return operator=(other);
    }
#endif
};
Z_ASSERT_SIZE(ZRef<int>, 0x8);