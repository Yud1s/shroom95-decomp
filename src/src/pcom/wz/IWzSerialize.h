#pragma once

#include "IWzBase.h"

DECLARE_INTERFACE_IID_(IWzSerialize, IUnknown, "01110bc6-d843-4ff1-918c-9cf64632fb15") {
    BEGIN_INTERFACE;

    // ** IUnknown methods **
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void **ppv) PURE;

    STDMETHOD_(ULONG, AddRef)(THIS) PURE;

    STDMETHOD_(ULONG, Release)(THIS) PURE;

    // ** IWzSerialize methods **
    STDMETHOD(get_persistentUOL)(THIS_ wchar_t **u0) PURE;

    STDMETHOD(raw_Serialize)(THIS_ IWzArchive *u0) PURE;

    END_INTERFACE;
};

typedef _com_ptr_t<_com_IIID<IWzSerialize, &__uuidof(IWzSerialize)>> IWzSerializePtr;
