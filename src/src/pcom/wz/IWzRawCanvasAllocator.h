#pragma once
#include "IWzBase.h"

DECLARE_INTERFACE_IID_(IWzRawCanvasAllocator, IUnknown, "58003396-b7c8-4ef4-a863-7622b90b956c")
{
	BEGIN_INTERFACE;

	// ** IUnknown methods **
	STDMETHOD(QueryInterface)(THIS_ REFIID riid, void** ppv) PURE;
	STDMETHOD_(ULONG, AddRef)(THIS) PURE;
	STDMETHOD_(ULONG, Release)(THIS) PURE;

	// ** IWzRawCanvasAllocator methods **
	STDMETHOD(raw_AllocCanvas)(THIS_ IWzCanvas * pCanvas, CANVAS_PIXFORMAT pixFormat, int flags) PURE;
	STDMETHOD(raw_ConvertIfNotAvailable)(THIS_ IWzCanvas * pCanvas1, int* pResult) PURE;

	END_INTERFACE;
};