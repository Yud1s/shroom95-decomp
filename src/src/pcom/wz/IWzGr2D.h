#pragma once

#include "IWzBase.h"
#include "IWzGr2DLayer.h"

DECLARE_INTERFACE_IID_(IWzGr2D, IUnknown, "e576ea33-d465-4f08-aab1-e78df73ee6d9")
{
    BEGIN_INTERFACE;

    // ** IUnknown methods **
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void** ppv) PURE;

    STDMETHOD_(ULONG, AddRef)(THIS) PURE;

    STDMETHOD_(ULONG, Release)(THIS) PURE;

    STDMETHOD(raw_Initialize)(THIS_ unsigned long u0, unsigned long u1, VARIANT u2, VARIANT u3, VARIANT u4) PURE;

    STDMETHOD(raw_Uninitialize)(THIS) PURE;

    STDMETHOD(get_nextRenderTime)(THIS_ long* u0) PURE;

    STDMETHOD(raw_UpdateCurrentTime)(THIS_ long u0) PURE;

    STDMETHOD(raw_RenderFrame)(THIS) PURE;

    STDMETHOD(raw_SetFrameSkip)(THIS) PURE;

    STDMETHOD(raw_ToggleFpsPanel)(THIS) PURE;

    STDMETHOD(raw_DisableFpsPanel)(THIS) PURE;

    STDMETHOD(get_width)(THIS_ unsigned long* u0) PURE;

    STDMETHOD(get_height)(THIS_ unsigned long* u0) PURE;

    STDMETHOD(put_screenResolution)(THIS_ unsigned long u0, unsigned long u1) PURE;

    STDMETHOD(get_bpp)(THIS_ unsigned long* u0) PURE;

    STDMETHOD(get_refreshRate)(THIS_ unsigned long* u0) PURE;

    STDMETHOD(get_fps100)(THIS_ unsigned long* u0) PURE;

    STDMETHOD(get_currentTime)(THIS_ long* u0) PURE;

    STDMETHOD(get_fullScreen)(THIS_ long* u0) PURE;

    STDMETHOD(put_fullScreen)(THIS_ long u0) PURE;

    STDMETHOD(get_backColor)(THIS_ unsigned long* u0) PURE;

    STDMETHOD(put_backColor)(THIS_ unsigned long u0) PURE;

    STDMETHOD(get_redTone)(THIS_ IWzVector2D** u0) PURE;

    STDMETHOD(get_greenBlueTone)(THIS_ IWzVector2D** u0) PURE;

    STDMETHOD(get_center)(THIS_ IWzVector2D** u0) PURE;

    STDMETHOD(raw_GetSnapshot)(THIS_ VARIANT u0, unsigned long u1, long u2, long u3) PURE;

    STDMETHOD(raw_CreateLayer)(THIS_ long u0, long u1, unsigned long u2, unsigned long u3, long u4, VARIANT u5,
                               VARIANT u6, IWzGr2DLayer** u7) PURE;

    STDMETHOD(raw_AdjustCenter)(THIS_ long u0, long u1) PURE;

    STDMETHOD(raw_TakeScreenShot)(THIS_ wchar_t* u0, long u1) PURE;

    STDMETHOD(raw_SetVideoMode)(THIS_ long u0) PURE;

    STDMETHOD(raw_SetVideoPath)(THIS_ wchar_t* u0, long u1, long u2) PURE;

    STDMETHOD(raw_PlayVideo)(THIS) PURE;

    STDMETHOD(raw_PauseVideo)(THIS_ long u0) PURE;

    STDMETHOD(raw_StopVideo)(THIS) PURE;

    STDMETHOD(get_videoStatus)(THIS_ long* u0) PURE;

    STDMETHOD(put_videoVolume)(THIS_ long u0) PURE;

    END_INTERFACE;

    HRESULT Initialize(unsigned long width, unsigned long height, const Ztl_variant_t& hwnd, const Ztl_variant_t& bpp,
                       const Ztl_variant_t& refreshRate)
    {
        auto hr = raw_Initialize(width, height, hwnd, bpp, refreshRate);
        TESTHR_EX_T(hr, this);
        return hr;
    }


    IWzVector2DPtr GetredTone()
    {
        IWzVector2D* pRet = nullptr;
        auto hr = get_redTone(&pRet);
        TESTHR_EX_T(hr, this);
        return IWzVector2DPtr(pRet, false);
    }

    IWzVector2DPtr GetgreenBlueTone()
    {
        IWzVector2D* pRet = nullptr;
        auto hr = get_greenBlueTone(&pRet);
        TESTHR_EX_T(hr, this);
        return IWzVector2DPtr(pRet, false);
    }


    HRESULT DisableFpsPanel()
    {
        auto hr = raw_DisableFpsPanel();
        TESTHR_EX_T(hr, this);
        return hr;
    }


    IWzGr2DLayerPtr CreateLayer(int left, int top,
                                unsigned long w, unsigned long h,
                                int zOrder,
                                const Ztl_variant_t& vCanvas,
                                const Ztl_variant_t& dwFilter
    )
    {
        IWzGr2DLayer* pRet = nullptr;
        auto hr = raw_CreateLayer(left, top, w, h, zOrder, vCanvas, dwFilter, &pRet);
        TESTHR_EX_T(hr, this);
        return IWzGr2DLayerPtr(pRet, false);
    }

    IWzGr2DLayerPtr CreateLayer_(int left = 0, int top = 0,
                                unsigned long w = 0, unsigned long h = 0,
                                int zOrder = 0,
                                const int canvas = 0,
                                const uint32_t filter = 0
    )
    {
        Ztl_variant_t vFilter = filter ? Ztl_variant_t(filter) : Ztl_variant_t(vtMissing);
        return CreateLayer(left, top, w, h, zOrder, Ztl_variant_t(canvas), vFilter);
    }

    IWzVector2DPtr Getcenter()
    {
        IWzVector2D* pRet = nullptr;
        auto hr = get_center(&pRet);
        TESTHR_EX_T(hr, this);
        return pRet;
    }

    int Getcurrenttime()
    {
        long t = 0;
        auto hr = get_currentTime(&t);
        TESTHR_EX_T(hr, this);
        return t;
    }

    int GetnextRenderTime()
    {
        long t = 0;
        auto hr = get_nextRenderTime(&t);
        TESTHR_EX_T(hr, this);
        return t;
    }


    uint32_t Getfps100()
    {
        unsigned long fps100 = 0;
        auto hr = get_fps100(&fps100);
        TESTHR_EX_T(hr, this);
        return fps100;
    }

    void PutfullScreen(int fullscreen)
    {
        auto hr = put_fullScreen(fullscreen);
        TESTHR_EX_T(hr, this);
    }

    int GetfullScreen()
    {
        long fullscreen = 0;
        auto hr = get_fullScreen(&fullscreen);
        TESTHR_EX_T(hr, this);
        return fullscreen;
    }

    void PutbackColor(unsigned long color)
    {
        auto hr = put_backColor(color);
        TESTHR_EX_T(hr, this);
    }


    HRESULT RenderFrame()
    {
        auto hr = raw_RenderFrame();
        TESTHR_EX_T(hr, this);
        return hr;
    }

    HRESULT UpdateCurrentTime(int t)
    {
        auto hr = raw_UpdateCurrentTime(t);
        TESTHR_EX_T(hr, this);
        return hr;
    }

    HRESULT ToggleFpsPanel()
    {
        auto hr = raw_ToggleFpsPanel();
        TESTHR_EX_T(hr, this);
        return hr;
    }

    void PutvideoVolume(int vol)
    {
        auto hr = put_videoVolume(vol);
        TESTHR_EX_T(hr, this);
    }

    HRESULT SetVideoMode(int mode)
    {
        auto hr = raw_SetVideoMode(mode);
        TESTHR_EX_T(hr, this);
        return hr;
    }

    HRESULT PlayVideo()
    {
        auto hr = raw_PlayVideo();
        TESTHR_EX_T(hr, this);
        return hr;
    }

    int GetvideoStatus()
    {
        long status = 0;
        auto hr = get_videoStatus(&status);
        TESTHR_EX_T(hr, this);
        return status;
    }
};
