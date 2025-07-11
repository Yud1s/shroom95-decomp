#pragma once

#include "IWzBase.h"
#include "IWzSerialize.h"

DECLARE_INTERFACE_IID_(IWzProperty, IWzSerialize, "986515D9-0A0B-4929-8B4F-718682177B92")
{
    BEGIN_INTERFACE;

    // ** IWzProperty methods **
    STDMETHOD(get_item)
    (THIS_ const wchar_t *wsPath, Ztl_variant_t *result) PURE;

    STDMETHOD(put_item)
    (THIS_ const wchar_t *wsPath, Ztl_variant_t pItem) PURE;

    STDMETHOD(Get__NewEnum)
    (THIS_ IUnknown **)PURE;

    STDMETHOD(get_count)
    (THIS_ unsigned int *)PURE;

    STDMETHOD(raw_Add)
    (THIS_ wchar_t *, tagVARIANT, tagVARIANT) PURE;

    STDMETHOD(raw_Remove)
    (THIS_ wchar_t *)PURE;

    STDMETHOD(raw_Import)
    (THIS_ wchar_t *)PURE;

    STDMETHOD(raw__GetHeadPosition)
    (THIS_ unsigned int **)PURE;

    STDMETHOD(raw__GetAt)
    (THIS_ unsigned int *, tagVARIANT *)PURE;

    STDMETHOD(raw__GetName)
    (THIS_ unsigned int *, wchar_t **)PURE;

    STDMETHOD(raw__GetNext)
    (THIS_ unsigned int **)PURE;

    END_INTERFACE;

    IUnknownPtr *Get_NewEnum(IUnknownPtr * pUnk)
    {
        TESTHR_EX_T(this->Get__NewEnum((IUnknown **)pUnk), this);
        return pUnk;
    }

    Ztl_variant_t Getitem(Ztl_bstr_t path)
    {
        Ztl_variant_t result;
        TESTHR_EX_T(get_item(path, &result), this);
        return result;
    }

    template<typename T>
	_com_ptr_t<_com_IIID<T, &__uuidof(T)>> GetItemT(Ztl_bstr_t path) {
		auto vObj = Getitem(path);
		auto unk = vObj.GetUnknown();
		return _com_ptr_t < _com_IIID<T, &__uuidof(T)>>(unk);
	}

    HRESULT Add(Ztl_bstr_t name, const Ztl_variant_t &value, const Ztl_variant_t &bNoReplace)
    {
        auto hr = raw_Add(name, value, bNoReplace);
        TESTHR_EX_T(hr, this);
        return hr;
    }

    size_t Getcount()
    {
        size_t count = 0;
        TESTHR_EX_T(get_count(&count), this);
        return count;
    }

    void Putitem(Ztl_bstr_t s, const Ztl_variant_t &v)
    {
        TESTHR_EX_T(put_item(s, v), this);
    }
};

typedef _com_ptr_t<_com_IIID<IWzProperty, &__uuidof(IWzProperty)>> IWzPropertyPtr;