#pragma once
#include "IWzBase.h"
#include "IWzProperty.h"
#include "IWzRawCanvas.h"

DECLARE_INTERFACE_IID_(IWzCanvas, IUnknown, "7600dc6c-9328-4bff-9624-5b0f5c01179e")
{
	BEGIN_INTERFACE;

	// ** IUnknown methods **
	STDMETHOD(QueryInterface)(THIS_ REFIID riid, void** ppv) PURE;
	STDMETHOD_(ULONG, AddRef)(THIS) PURE;
	STDMETHOD_(ULONG, Release)(THIS) PURE;

	// ** IWzSerialize methods **
	STDMETHOD(get_persistentUOL)(THIS_ wchar_t** u0) PURE;
	STDMETHOD(raw_Serialize)(THIS_ IWzArchive * u0) PURE;

	// ** IWzCanvas methods **
	STDMETHOD(get_defaultDither)(THIS_ CANVAS_DITHERTYPE * u0) PURE;
	STDMETHOD(put_defaultDither)(THIS_ CANVAS_DITHERTYPE u0) PURE;
	STDMETHOD(get_defaultLevelMap)(THIS_ CANVAS_LEVELMAP * u0) PURE;
	STDMETHOD(put_defaultLevelMap)(THIS_ CANVAS_LEVELMAP u0) PURE;
	STDMETHOD(get_defaultAllocator)(THIS_ IWzRawCanvasAllocator * *u0) PURE;
	STDMETHOD(put_defaultAllocator)(THIS_ IWzRawCanvasAllocator * u0) PURE;
	STDMETHOD(raw_Create)(THIS_ unsigned long u0, unsigned long u1, VARIANT u2, VARIANT u3) PURE;
	STDMETHOD(raw_AddRawCanvas)(THIS_ long u0, long u1, IWzRawCanvas * u2) PURE;
	STDMETHOD(get_rawCanvas)(THIS_ long u0, long u1, IWzRawCanvas * *u2) PURE;
	STDMETHOD(get_tileWidth)(THIS_ unsigned long* u0) PURE;
	STDMETHOD(get_tileHeight)(THIS_ unsigned long* u0) PURE;
	STDMETHOD(get_width)(THIS_ unsigned long* u0) PURE;
	STDMETHOD(put_width)(THIS_ unsigned long u0) PURE;
	STDMETHOD(get_height)(THIS_ unsigned long* u0) PURE;
	STDMETHOD(put_height)(THIS_ unsigned long u0) PURE;
	STDMETHOD(get_pixelFormat)(THIS_ CANVAS_PIXFORMAT * u0) PURE;
	STDMETHOD(put_pixelFormat)(THIS_ CANVAS_PIXFORMAT u0) PURE;
	STDMETHOD(get_magLevel)(THIS_ long* u0) PURE;
	STDMETHOD(put_magLevel)(THIS_ long u0) PURE;
	STDMETHOD(raw_GetSnapshotU)(THIS_ unsigned long* u0, unsigned long* u1, unsigned long* u2, unsigned long* u3, CANVAS_PIXFORMAT * u4, long* u5) PURE;
	STDMETHOD(raw_GetSnapshot)(THIS_ long* u0, long* u1, long* u2, long* u3, CANVAS_PIXFORMAT * u4, long* u5) PURE;
	STDMETHOD(get_property)(THIS_ IWzProperty **u0) PURE;
	STDMETHOD(get_cx)(THIS_ long* u0) PURE;
	STDMETHOD(put_cx)(THIS_ long u0) PURE;
	STDMETHOD(get_cy)(THIS_ long* u0) PURE;
	STDMETHOD(put_cy)(THIS_ long u0) PURE;
	STDMETHOD(raw_SetClipRect)(THIS_ long u0, long u1, long u2, long u3, VARIANT u4, VARIANT * u5) PURE;
	STDMETHOD(raw_Copy)(THIS_ long u0, long u1, IWzCanvas * u2, VARIANT u3) PURE;
	STDMETHOD(raw_CopyEx)(THIS_ long u0, long u1, IWzCanvas * u2, CANVAS_ALPHATYPE u3, long u4, long u5, long u6, long u7, long u8, long u9, VARIANT u10) PURE;
	STDMETHOD(get_pixel)(THIS_ long u0, long u1, unsigned long* u2) PURE;
	STDMETHOD(raw_DrawRectangle)(THIS_ long u0, long u1, unsigned long u2, unsigned long u3, unsigned long u4) PURE;
	STDMETHOD(raw_DrawLine)(THIS_ long u0, long u1, long u2, long u3, unsigned long u4, VARIANT u5) PURE;
	STDMETHOD(raw_DrawPolygon)(THIS) PURE;
	STDMETHOD(raw_DrawText)(THIS_ long u0, long u1, wchar_t* u2, IWzFont * u3, VARIANT u4, VARIANT u5, unsigned long* u6) PURE;

	END_INTERFACE;


    HRESULT Copy(int dstLeft, int dstTop, IWzCanvas* src, const Ztl_variant_t& alpha) {
        auto hr = raw_Copy(dstLeft, dstTop, src, alpha);
        TESTHR_EX_T(hr, this);
        return hr;
    }

    HRESULT CopyEx(int dstLeft, int dstTop,
                   IWzCanvas* src,
                   CANVAS_ALPHATYPE alpha,
                   int width, int height,
                   int srcLeft, int srcTop,
                   int srcWidth, int srcHeight,
                   const Ztl_variant_t & adj) {
        auto hr = raw_CopyEx(dstLeft, dstTop, src, alpha, width, height, srcLeft, srcTop, srcWidth, srcHeight, adj);
        TESTHR_EX_T(hr, this);
        return hr;
    }

	uint32_t DrawTextA(int left, int top, Ztl_bstr_t tt, IWzFont* font, const Ztl_variant_t& alpha, const Ztl_variant_t & tabOrg) {
        unsigned long result{};
        auto hr = raw_DrawText(left, top, tt, font, alpha, tabOrg, &result);
        TESTHR_EX_T(hr, this);
        return result;
	}


	HRESULT Create(unsigned long w, unsigned long h, const Ztl_variant_t & maglevel, const Ztl_variant_t & pixFmt) {
        auto hr = raw_Create(w, h, maglevel, pixFmt);
        TESTHR_EX_T(hr, this);
        return hr;
	}

	uint32_t Getheight() {
        unsigned long result{};
        auto hr = get_height(&result);
        TESTHR_EX_T(hr, this);
        return result;
    }

    uint32_t Getwidth() {
        unsigned long result{};
        auto hr = get_width(&result);
        TESTHR_EX_T(hr, this);
        return result;
	}

    long Getcy() {
        long result{};
        auto hr = get_cy(&result);
        TESTHR_EX_T(hr, this);
        return result;
    }
    void Putcy(long cy) {
        auto hr = put_cy(cy);
        TESTHR_EX_T(hr, this);
    }

    long Getcx() {
        long result{};
        auto hr = get_cx(&result);
        TESTHR_EX_T(hr, this);
        return result;
    }

    void Putcx(long cy) {
        auto hr = put_cx(cy);
        TESTHR_EX_T(hr, this);
    }



	HRESULT DrawRectangle(int left, int top, int w, int h, unsigned long color) {
        auto hr = raw_DrawRectangle(left, top, w, h, color);
        TESTHR_EX_T(hr, this);
        return hr;
	}

	IWzPropertyPtr Getproperty() {
        IWzProperty *result{};
        TESTHR_EX_T(get_property(&result), this);
        return IWzPropertyPtr (result, false);
	}

	Ztl_variant_t SetClipRect(int left, int top, int w, int h, const Ztl_variant_t& bTmp) {
        Ztl_variant_t result;
        auto hr = raw_SetClipRect(left, top, w, h, bTmp, &result);
        TESTHR_EX_T(hr, this);
        return result;
	}

	HRESULT DrawLine(int x1, int y1, int x2, int y2, unsigned long color, const Ztl_variant_t& width) {
        auto hr = raw_DrawLine(x1, y1, x2, y2, color, width);
        TESTHR_EX_T(hr, this);
        return hr;
	}

	IWzRawCanvasPtr GetrawCanvas(int x, int y) {
        IWzRawCanvas *result{};
        auto hr = get_rawCanvas(x, y, &result);
        TESTHR_EX_T(hr, this);
        return IWzRawCanvasPtr (result, false);
	}

	uint32_t GettileHeight() {
        unsigned long result{};
        auto hr = get_tileHeight(&result);
        TESTHR_EX_T(hr, this);
        return result;
	}

    uint32_t GettileWidth() {
        unsigned long result{};
        auto hr = get_tileWidth(&result);
        TESTHR_EX_T(hr, this);
        return result;
	}


	void PutMagLevel(int magLevel)
    {
    	auto hr = put_magLevel(magLevel);
    	TESTHR_EX_T(hr, this);
    }
};


typedef _com_ptr_t<_com_IIID<IWzCanvas, &__uuidof(IWzCanvas)>> IWzCanvasPtr;

