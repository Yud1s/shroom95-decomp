#pragma once

#include "IWzNamespace.h"

DECLARE_INTERFACE_IID_(IWzPackage, IWzNameSpace, "e610818b-038d-4522-9232-30fcd5f4737c")
{
    BEGIN_INTERFACE;

    STDMETHOD(raw_Init)
    (THIS_ wchar_t * key, wchar_t * baseUOL, IWzSeekableArchive * archive) PURE;

    END_INTERFACE;

    HRESULT Init(Ztl_bstr_t key, Ztl_bstr_t baseUOL, IWzSeekableArchive * archive)
    {
        wchar_t *wBaseUOL = (wchar_t *)baseUOL.op_ushort_str();
        wchar_t *wKey = (wchar_t *)key.op_ushort_str();
        auto hr = raw_Init(key, wBaseUOL, archive);
        TESTHR_EX_T(hr, this);
        return hr;
    }
};