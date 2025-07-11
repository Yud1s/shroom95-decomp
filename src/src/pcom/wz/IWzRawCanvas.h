#pragma once
#include "IWzBase.h"

DECLARE_INTERFACE_IID_(IWzRawCanvas, IUnknown, "312126f0-c399-4111-8eab-0f96a30b6b7c")
{
	BEGIN_INTERFACE;

	// ** IUnknown methods **
	STDMETHOD(QueryInterface)(THIS_ REFIID riid, void** ppv) PURE;
	STDMETHOD_(ULONG, AddRef)(THIS) PURE;
	STDMETHOD_(ULONG, Release)(THIS) PURE;

	// ** IWzRawCanvas methods **
	STDMETHOD(get_pixelFormat)(THIS_ CANVAS_PIXFORMAT * u0) PURE;
	STDMETHOD(get_magLevel)(THIS_ long* u0) PURE;
	STDMETHOD(get_width)(THIS_ unsigned long* u0) PURE;
	STDMETHOD(get_height)(THIS_ unsigned long* u0) PURE;
	STDMETHOD(raw__LockAddress)(THIS_ long* u0, VARIANT * u1) PURE;
	STDMETHOD(raw__UnlockAddress)(THIS_ RECT * u0) PURE;
	STDMETHOD(raw_SetTexture)(THIS_ unsigned long* u0) PURE;
	STDMETHOD(raw_GetTextureSize)(THIS_ RECT * u0) PURE;

	END_INTERFACE;

	Ztl_variant_t _LockAddress(long* pitch) {
        Ztl_variant_t result;
        TESTHR_EX_T(raw__LockAddress(pitch, &result), this);
        return result;
	}
};

typedef _com_ptr_t<_com_IIID<IWzRawCanvas, &__uuidof(IWzRawCanvas)>> IWzRawCanvasPtr;