#pragma once

#include "IWzSerialize.h"

DECLARE_INTERFACE_IID_(IWzUOL, IWzSerialize, "f945bf59-d1ec-45e8-8bd9-3dd11ac1a48a")
{
    BEGIN_INTERFACE;

    STDMETHOD(raw_Init)
    (THIS_ const wchar_t *, VARIANT) PURE;
    STDMETHOD(get_UOL)
    (THIS_ wchar_t **) PURE;
    STDMETHOD(put_UOL)
    (THIS_ const wchar_t *) PURE;
    STDMETHOD(get_filePath)
    (THIS_ wchar_t **) PURE;
    STDMETHOD(get_className)
    (THIS_ wchar_t **) PURE;
    STDMETHOD(get_localUOL)
    (THIS_ wchar_t **) PURE;
    STDMETHOD(get_currentDirectory)
    (THIS_ wchar_t **) PURE;
    STDMETHOD(put_currentDirectory)
    (THIS_ const wchar_t *) PURE;

    END_INTERFACE;
    Ztl_bstr_t GetUOL()
    {
        wchar_t *u0;
        TESTHR_EX_T(get_UOL(&u0), this);
        return Ztl_bstr_t{u0};
    }

    Ztl_bstr_t GetfilePath()
    {
        wchar_t *u0;
        TESTHR_EX_T(get_filePath(&u0), this);
        return Ztl_bstr_t{u0};
    }

    Ztl_bstr_t GetClassName()
    {
        wchar_t *u0;
        TESTHR_EX_T(get_className(&u0), this);
        return Ztl_bstr_t{u0};
    }

    Ztl_bstr_t GetLocalUOL()
    {
        wchar_t *u0;
        TESTHR_EX_T(get_localUOL(&u0), this);
        return Ztl_bstr_t{u0};
    }

    Ztl_bstr_t GetCurrentDirectory()
    {
        wchar_t *u0;
        TESTHR_EX_T(get_currentDirectory(&u0), this);
        return Ztl_bstr_t{u0};
    }
};

typedef _com_ptr_t<_com_IIID<IWzUOL, &__uuidof(IWzUOL)>> IWzUOLPtr;