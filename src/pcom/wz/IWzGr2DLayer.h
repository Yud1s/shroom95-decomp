#pragma once

#include "IWzBase.h"
#include "IWzVector2D.h"
#include "IWzCanvas.h"

DECLARE_INTERFACE_IID_(IWzGr2DLayer, IWzVector2D, "6dc8c7ce-8e81-4420-b4f6-4b60b7d5fcdf")
{
    BEGIN_INTERFACE;

    // ** IWzGr2DLayer methods **
    STDMETHOD(get_z)(THIS_ int*);

    STDMETHOD(put_z)(THIS_ int);

    STDMETHOD(get_width)(THIS_ int*);

    STDMETHOD(put_width)(THIS_ int);

    STDMETHOD(get_height)(THIS_ int*);

    STDMETHOD(put_height)(THIS_ int);

    STDMETHOD(get_lt)(THIS_ IWzVector2D**);

    STDMETHOD(get_rb)(THIS_ IWzVector2D**);

    STDMETHOD(raw_InterlockedOffset)(THIS_ int, int, int, int);

    STDMETHOD(get_flip)(THIS_ int*);

    STDMETHOD(put_flip)(THIS_ int);

    STDMETHOD(get_color)(THIS_ unsigned int*);

    STDMETHOD(put_color)(THIS_ unsigned int);

    STDMETHOD(get_alpha)(THIS_ IWzVector2D**);

    STDMETHOD(get_redTone)(THIS_ IWzVector2D**);

    STDMETHOD(get_greenBlueTone)(THIS_ IWzVector2D**);

    STDMETHOD(get_blend)(THIS_ LAYER_BLENDTYPE*);

    STDMETHOD(put_blend)(THIS_ LAYER_BLENDTYPE);

    STDMETHOD(get_overlay)(THIS_ tagVARIANT*);

    STDMETHOD(put_overlay)(THIS_ tagVARIANT);

    STDMETHOD(get_canvas)(THIS_ tagVARIANT, IWzCanvas**);

    STDMETHOD(raw_InsertCanvas)(THIS_ IWzCanvas*, tagVARIANT, tagVARIANT, tagVARIANT, tagVARIANT, tagVARIANT,
                                tagVARIANT*);

    STDMETHOD(raw_RemoveCanvas)(THIS_ tagVARIANT, IWzCanvas**);

    STDMETHOD(raw_ShiftCanvas)(THIS_ tagVARIANT);

    STDMETHOD(raw_Animate)(THIS_ GR2D_ANITYPE, tagVARIANT, tagVARIANT);

    STDMETHOD(get_animationState)(THIS_ int*);

    STDMETHOD(get_visible)(THIS_ int*);

    STDMETHOD(put_visible)(THIS_ int);

    END_INTERFACE;

    IWzVector2DPtr Getalpha()
    {
        IWzVector2D* result{};
        auto hr = get_alpha(&result);
        TESTHR_EX_T(hr, this);
        return IWzVector2DPtr(result, false);
    }

    HRESULT ShiftCanvas(const Ztl_variant_t& value)
    {
        auto hr = raw_ShiftCanvas(value);
        TESTHR_EX_T(hr, this);
        return hr;
    }

    IWzCanvasPtr Getcanvas(const Ztl_variant_t& index)
    {
        IWzCanvas* result{};
        auto hr = get_canvas(index, &result);
        TESTHR_EX_T(hr, this);
        return IWzCanvasPtr(result, false);
    }


    IWzCanvasPtr RemoveCanvas(const Ztl_variant_t& index)
    {
        IWzCanvas* result{};
        auto hr = raw_RemoveCanvas(index, &result);
        TESTHR_EX_T(hr, this);
        return IWzCanvasPtr(result, false);
    }

    Ztl_variant_t InsertCanvas(IWzCanvas* canvas, const Ztl_variant_t& delay, const Ztl_variant_t& alpha0,
                               const Ztl_variant_t& alpha1, const Ztl_variant_t& zoom0, const Ztl_variant_t& zoom1)
    {
        Ztl_variant_t result;
        auto hr = raw_InsertCanvas(canvas, delay, alpha0, alpha1, zoom0, zoom1, &result);
        TESTHR_EX_T(hr, this);
        return result;
    }

    Ztl_variant_t InsertCanvas_(IWzCanvas* canvas, int nDelay, int a0,
                                int a1, int zoom0, int zoom1)
    {
        return InsertCanvas(canvas, Ztl_variant_t(nDelay), Ztl_variant_t(a0), Ztl_variant_t(a1), Ztl_variant_t(zoom0),
                            Ztl_variant_t(zoom1));
    }

    IWzVector2DPtr Getlt()
    {
        IWzVector2D* result{};
        auto hr = get_lt(&result);
        TESTHR_EX_T(hr, this);
        return IWzVector2DPtr(result, false);
    }

    IWzVector2DPtr Getrb()
    {
        IWzVector2D* result{};
        auto hr = get_rb(&result);
        TESTHR_EX_T(hr, this);
        return IWzVector2DPtr(result, false);
    }


    int Getz()
    {
        int result;
        auto hr = get_z(&result);
        TESTHR_EX_T(hr, this);
        return result;
    }

    void Putz(long z)
    {
        auto hr = put_z(z);
        TESTHR_EX_T(hr, this);
    }

    int Getflip()
    {
        int result;
        auto hr = get_flip(&result);
        TESTHR_EX_T(hr, this);
        return result;
    }

    void Putflip(int flip)
    {
        auto hr = put_flip(flip);
        TESTHR_EX_T(hr, this);
    }

    HRESULT Animate(GR2D_ANITYPE nType, const Ztl_variant_t& nDelay, const Ztl_variant_t& vRepeat)
    {
        auto hr = raw_Animate(nType, nDelay, vRepeat);
        TESTHR_EX_T(hr, this);
        return hr;
    }

    int Getwidth()
    {
        int result;
        auto hr = get_width(&result);
        TESTHR_EX_T(hr, this);
        return result;
    }


    void Putoverlay(const Ztl_variant_t& pp)
    {
        auto hr = put_overlay(pp);
        TESTHR_EX_T(hr, this);
    }

    void PutOverlay(IWzGr2DLayer* layer)
    {
        Putoverlay(Ztl_variant_t((IUnknown*)layer, true));
    }

    Ztl_variant_t Getoverlay()
    {
        Ztl_variant_t result;
        auto hr = get_overlay(&result);
        TESTHR_EX_T(hr, this);
        return result;
    }


    void Putcolor(unsigned long color)
    {
        auto hr = put_color(color);
        TESTHR_EX_T(hr, this);
    }

    unsigned int Getcolor()
    {
        unsigned int result;
        auto hr = get_color(&result);
        TESTHR_EX_T(hr, this);
        return result;
    }

    int GetanimationState()
    {
        int result;
        auto hr = get_animationState(&result);
        TESTHR_EX_T(hr, this);
        return result;
    }


    int Getheight()
    {
        int result;
        auto hr = get_height(&result);
        TESTHR_EX_T(hr, this);
        return result;
    }

    IWzVector2DPtr GetredTone()
    {
        IWzVector2D* result{};
        auto hr = get_redTone(&result);
        TESTHR_EX_T(hr, this);
        return IWzVector2DPtr(result, false);
    }

    IWzVector2DPtr GetgreenBlueTone()
    {
        IWzVector2D* result{};
        auto hr = get_greenBlueTone(&result);
        TESTHR_EX_T(hr, this);
        return IWzVector2DPtr(result, false);
    }


    int Getvisible()
    {
        int result;
        auto hr = get_visible(&result);
        TESTHR_EX_T(hr, this);
        return result;
    }

    void Putvisible(int v)
    {
        auto hr = put_visible(v);
        TESTHR_EX_T(hr, this);
    }
};


typedef _com_ptr_t<_com_IIID<IWzGr2DLayer, &__uuidof(IWzGr2DLayer)>> IWzGr2DLayerPtr;
