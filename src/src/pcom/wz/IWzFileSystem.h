#pragma once

#include "IWzBase.h"
#include "IWzNamespace.h"

DECLARE_INTERFACE_IID_(IWzFileSystem, IWzWritableNameSpace, "352d8655-51e4-4668-8ce4-0866e2b6a5b5")
{
    BEGIN_INTERFACE;
    STDMETHOD(raw_Init)
    (THIS_ const wchar_t *) PURE;
    END_INTERFACE;

    HRESULT Init(Ztl_bstr_t path)
    {
        auto hr = raw_Init(path.op_ushort_str());
        TESTHR_EX_T(hr, this);
        return hr;
    }
};