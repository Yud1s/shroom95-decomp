//
//

#ifndef GMS95_REGEN_XCOM_PTR_H
#define GMS95_REGEN_XCOM_PTR_H

#include "wz/IWzBase.h"
#include "pcom/wz/IWzGr2DLayer.h"
#include "pcom/wz/IWzSound.h"
#include "macros.h"

// Small hack to allow cvectrl querying, the vtable for vec2d is always as +12
struct FakeCVecCtrl
{
    void* fakeVtable{};
    int pad;
    void* prev{};
    IWzVector2D* vec{};
};

template <typename T>
class _x_com_ptr : public _com_ptr_t<_com_IIID<T, &__uuidof(T)>>
{
private:
    typedef _com_ptr_t<_com_IIID<T, &__uuidof(T)>> _inner_t;

public:
    template <typename _InterfaceType>
    explicit _x_com_ptr(_InterfaceType* ptr) : _inner_t(ptr)
    {
    }

    _x_com_ptr() : _inner_t()
    {
    }


    explicit _x_com_ptr(T* ptr) : _inner_t(ptr)
    {
    }

    ~_x_com_ptr()
    {
    }


    template <typename To>
    _x_com_ptr<To> Cast()
    {
        IUnknown* p{};
        if (SUCCEEDED(this->QueryInterface(__uuidof(To), reinterpret_cast<void**>(&p))))
        {
            return _x_com_ptr<To>(p);
        }

        return {};
    }


    void op_assign_zero(int null)
    {
        _inner_t::operator=(nullptr);
    }

    void _ctor_zero(int null)
    {
        new(this) _x_com_ptr(nullptr);
    }

    void _ctor_default()
    {
        new(this) _x_com_ptr();
    }

    void _ctor_copy(const _x_com_ptr& rhs)
    {
        new(this) _x_com_ptr(rhs);
    }

    _x_com_ptr& operator=(const _x_com_ptr& rhs)
    {
        _inner_t::operator=(rhs);
        return *this;
    }

    _x_com_ptr& operator=(const _inner_t& rhs)
    {
        _inner_t::operator=(rhs);
        return *this;
    }

    //operator&
    _x_com_ptr* operator&()
    {
        return this;
    }

    T* op_arrow()
    {
        return _com_ptr_t<_com_IIID<T, &__uuidof(T)>>::operator->();
    }

    _com_ptr_t<_com_IIID<T, &__uuidof(T)>>& op_assign(T* ptr)
    {
        return _com_ptr_t<_com_IIID<T, &__uuidof(T)>>::operator=(ptr);
    }

    _x_com_ptr<T>& op_assign_copy(const _x_com_ptr<T>& rhs)
    {
        return operator=(rhs);
    }

    bool op_neq(T* ptr)
    {
        return _com_ptr_t<_com_IIID<T, &__uuidof(T)>>::operator!=(ptr);
    }

    T* op_star()
    {
        return op_arrow();
    }

    _x_com_ptr& op_assign_unknown_com_ptr(const _x_com_ptr<IUnknown>& p)
    {
        _inner_t::operator=(p);
        return *this;
    }

    _x_com_ptr& op_assign_unknown(IUnknown* p)
    {
        _inner_t::operator=(p);
        return *this;
    }

    void CreateFromUnknown(IUnknown* pUnknown)
    {
        new(this) _x_com_ptr((T*)pUnknown);
    }

    void CreateFromUnknownComPtr(IUnknownPtr* p)
    {
        CreateFromUnknown(p->GetInterfacePtr());
    }

    void CreateFromWzGr2DLayerComPtr(IWzGr2DLayerPtr* p)
    {
        CreateFromUnknown((IUnknown*)p->GetInterfacePtr());
    }

    HRESULT _QueryUnknown(IUnknown* p)
    {
        return _QueryInterface(p);
    }

    HRESULT _QueryUnknownComPtr(_x_com_ptr<IUnknown> p)
    {
        return _QueryInterface(p);
    }

    HRESULT _QueryWzGr2DLayerComPtr(_x_com_ptr<IWzGr2DLayer> p)
    {
        return _QueryInterface<IWzGr2DLayer*>(p);
    }

    HRESULT _QueryWzVector2DComPtr(_x_com_ptr<IWzVector2D> p)
    {
        return _QueryInterface(p);
    }

    int _CompareWzSoundState(IWzSoundState* p)
    {
        return _CompareUnknown(p);
    }

    int _CompareWzFont(IWzFont* p)
    {
        return _CompareUnknown(p);
    }

    int _CompareWzProperty(IWzProperty* p)
    {
        return _CompareUnknown(p);
    }

    HRESULT _QueryVecCtrl(FakeCVecCtrl* p)
    {
        return _QueryInterface(p->vec);
    }

    HRESULT _QueryVecCtrlDragon(FakeCVecCtrl* p)
    {
        return _QueryVecCtrl(p);
    }

    HRESULT _QueryVecCtrlUserPreview(FakeCVecCtrl* p)
    {
        return _QueryVecCtrl(p);
    }

    HRESULT _QueryVecCtrlUser(FakeCVecCtrl* p)
    {
        return _QueryVecCtrl(p);
    }

    HRESULT _QueryVecCtrlGrenade(FakeCVecCtrl* p)
    {
        return _QueryVecCtrl(p);
    }

    HRESULT _QueryVecCtrlMob(FakeCVecCtrl* p)
    {
        return _QueryVecCtrl(p);
    }

    HRESULT _QueryVecCtrlSummoned(FakeCVecCtrl* p)
    {
        return _QueryVecCtrl(p);
    }

    HRESULT _QueryVecCtrlPet(FakeCVecCtrl* p)
    {
        return _QueryVecCtrl(p);
    }

    template <typename U>
    HRESULT _QueryVecCtrlNpc(U* p)
    {
        //IWzVector2D* pVec = (IWzVector2D*)&p[3];
        return _QueryInterface<U>(p);
    }

    template <typename _InterfacePtr> // NOLINT(*-reserved-identifier)
    HRESULT __QueryInterface(_InterfacePtr p) noexcept // NOLINT(*-reserved-identifier)
    {
        return _QueryInterface(p);
    }

private:
    template <typename _InterfacePtr> // NOLINT(*-reserved-identifier)
    HRESULT _QueryInterface(_InterfacePtr p) noexcept // NOLINT(*-reserved-identifier)
    {
        HRESULT hr{};
        //TODO


        // Can't QI nullptr
        //
        if (p)
        {
            // Query for this interface
            //
            T* pInterface{};
            hr = p->QueryInterface(__uuidof(T), reinterpret_cast<void**>(&pInterface));

            // Save the interface without AddRef()ing.
            //
            this->Attach(SUCCEEDED(hr) ? pInterface : nullptr);
        }
        else
        {
            operator=(nullptr);
            hr = E_NOINTERFACE;
        }

        return hr;
    }

    template <typename _InterfacePtr> // NOLINT(*-reserved-identifier)
    int _CompareUnknown(_InterfacePtr p) const // NOLINT(*-reserved-identifier)
    {
        IUnknown* pu1{};
        IUnknown* pu2{};

        if (this->GetInterfacePtr())
        {
            if (const HRESULT hr = this->GetInterfacePtr()->QueryInterface(
                __uuidof(IUnknown), reinterpret_cast<void**>(&pu1)); FAILED(hr))
            {
                pu1 = nullptr;
                _com_issue_error(hr);
            }
            pu1->Release();
        }

        if (p)
        {
            if (const HRESULT hr = p->QueryInterface(__uuidof(IUnknown), reinterpret_cast<void**>(&pu2)); FAILED(hr))
            {
                pu2 = nullptr;
                _com_issue_error(hr);
            }
            pu2->Release();
        }

        if (pu1 == pu2)
        {
            return 0;
        }

        return (pu1 > pu2) ? 1 : -1;
    }
};

#endif // GMS95_REGEN_XCOM_PTR_H
