#pragma once
#include "IWzBase.h"

// TODO
struct IWzNameSpaceProperty
{
};

DECLARE_INTERFACE_IID_(IWzNameSpace, IUnknown, "2aeeeb36-a4e1-4e2b-8f6f-2e7bdec5c53d")
{
        BEGIN_INTERFACE;

        // ** IUnknown methods **
        STDMETHOD(QueryInterface)
        (THIS_ REFIID riid, void **ppv) PURE;
        STDMETHOD_(ULONG, AddRef)
        (THIS) PURE;
        STDMETHOD_(ULONG, Release)
        (THIS) PURE;

        STDMETHOD(get_item)
        (THIS_ wchar_t *, tagVARIANT *) PURE;
        STDMETHOD(get_property)
        (THIS_ wchar_t *, tagVARIANT, IWzNameSpaceProperty **) PURE;
        STDMETHOD(get__NewEnum)
        (THIS_ IUnknown **) PURE;
        STDMETHOD(raw_Mount)
        (THIS_ wchar_t *, IWzNameSpace *, int32_t) PURE;
        STDMETHOD(raw_Unmount)
        (THIS_ wchar_t *, tagVARIANT) PURE;
        STDMETHOD(raw__OnMountEvent)
        (THIS_ IWzNameSpace *, IWzNameSpace *, wchar_t *, int32_t) PURE;
        STDMETHOD(raw__OnGetLocalObject)
        (THIS_ int32_t, wchar_t *, int32_t *, tagVARIANT *) PURE;

        END_INTERFACE;

        Ztl_variant_t Getitem(Ztl_bstr_t path)
        {
                Ztl_variant_t result;
                TESTHR_EX_T(this->get_item(path, &result), this);
                return result;
        }
        HRESULT Mount(Ztl_bstr_t path, IWzNameSpace * down, int priority)
        {
                auto hr = raw_Mount(path, down, priority);
                TESTHR_EX_T(hr, this);
                return hr;
        }

        IUnknownPtr* Get_NewEnum(IUnknownPtr* pUnk)
        {
                TESTHR_EX_T(this->get__NewEnum((IUnknown**)pUnk), this);
                return pUnk;
        }
};


DECLARE_INTERFACE_IID_(IWzWritableNameSpace, IWzNameSpace, "2aeeeb36-a4e1-4e2b-8f6f-2e7bdec5c53d")
{
        BEGIN_INTERFACE;
        STDMETHOD(raw_CreateChildNameSpace)(THIS_ wchar_t *, IWzNameSpace **) PURE;
        STDMETHOD(raw_AddObject)(THIS_ wchar_t *, tagVARIANT, tagVARIANT *) PURE;
        STDMETHOD(raw_Unlink)(THIS_ wchar_t *) PURE;
        END_INTERFACE;
};