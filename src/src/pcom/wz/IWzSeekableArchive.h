#pragma once

#include "IWzArchive.h"

DECLARE_INTERFACE_IID_(IWzSeekableArchive, IWzArchive, "35c1f133-7f61-496e-878f-9a1758afa9ea") {
    BEGIN_INTERFACE;

    STDMETHOD(get_position)(THIS_ uint32_t *u0) PURE;
    STDMETHOD(put_position)(THIS_ uint32_t u0) PURE;
    STDMETHOD(get_length)(THIS_ uint32_t *u0) PURE;
    STDMETHOD(put_length)(THIS_ uint32_t u0) PURE;
    STDMETHOD(get_address)(THIS_ VARIANT*) PURE;
    STDMETHOD(raw_Rewind)(THIS) PURE;
    STDMETHOD(raw_ReadLock)(THIS_ wchar_t*, uint32_t, IWzSeekableArchive**) PURE;
    END_INTERFACE;
};