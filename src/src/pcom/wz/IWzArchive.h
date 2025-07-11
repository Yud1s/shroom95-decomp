#pragma once

#include "IWzBase.h"

DECLARE_INTERFACE_IID_(IWzArchive, IUnknown, "3c39b9aa-18cc-408c-8716-c4fb2117266e") {
    BEGIN_INTERFACE;

    // ** IUnknown methods **
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void **ppv) PURE;

    STDMETHOD_(ULONG, AddRef)(THIS) PURE;

    STDMETHOD_(ULONG, Release)(THIS) PURE;

    STDMETHOD(get_loading)(THIS_ long *u0) PURE;

    STDMETHOD(raw_Read)(THIS_ unsigned char *u0, unsigned long u1, unsigned long *u2) PURE;

    STDMETHOD(raw_Write)(THIS_ unsigned char *u0, unsigned long u1, unsigned long *u2) PURE;

    STDMETHOD(get_absoluteUOL)(THIS_ wchar_t **u0) PURE;

    STDMETHOD(put_absoluteUOL)(THIS_ wchar_t *u0) PURE;

    STDMETHOD(get_position)(THIS_ unsigned long *u0) PURE;

    STDMETHOD(get_context)(THIS_ VARIANT *u0) PURE;

    STDMETHOD(put_context)(THIS_ VARIANT u0) PURE;

    END_INTERFACE;
};
