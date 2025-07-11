#pragma once

#include "IWzBase.h"

DECLARE_INTERFACE_IID_(IWzFont, IUnknown, "2bef046d-ccd6-445a-88c4-929fc35d30ac") {
    BEGIN_INTERFACE;

    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void **ppv) PURE;

    STDMETHOD_(ULONG, AddRef)(THIS) PURE;

    STDMETHOD_(ULONG, Release)(THIS) PURE;


    STDMETHOD(raw_Create)(THIS_ wchar_t *name, unsigned long height, unsigned long color, VARIANT styke) PURE;

    STDMETHOD(get_color)(THIS_ long *u0) PURE;

    STDMETHOD(get_height)(THIS_ long *u0) PURE;

    STDMETHOD(get_fullHeight)(THIS_ long *u0) PURE;

    STDMETHOD(raw_CalcTextWidth)(THIS_ wchar_t *u0, VARIANT u1, unsigned long *u2) PURE;

    STDMETHOD(raw_CalcLongestText)(THIS_ wchar_t *u0, long u1, VARIANT u2, long *u3) PURE;

    STDMETHOD(raw_CalcLongestTextForGlobal)(THIS_ wchar_t *u0, long u1, VARIANT u2, long *u3) PURE;

    STDMETHOD(raw_CalcLongestTextForGlobalEx)(THIS_ wchar_t *u0, long u1, long *u2, VARIANT u3, long *u4) PURE;

    STDMETHOD(raw_CalcLineCountForGlobal)(THIS_ wchar_t *u0, long u1, VARIANT u2, long *u3) PURE;

    STDMETHOD(raw_DrawText)(THIS_ long u0, long u1, wchar_t *u2, IWzCanvas *u3, VARIANT u4, VARIANT u5,
                            unsigned long *u6) PURE;

    END_INTERFACE;

    HRESULT Create(Ztl_bstr_t  name, unsigned long height, unsigned long color, const Ztl_variant_t & style) {
        auto hr = raw_Create(name, height, color, style);
        TESTHR_EX_T(hr, this);
        return hr;
    }

    unsigned long CalcTextWidth(Ztl_bstr_t test, const Ztl_variant_t & tabOrg) {
        unsigned long result{};
        auto hr = raw_CalcTextWidth(test, tabOrg, &result);
        TESTHR_EX_T(hr, this);
        return result;
    }

    uint32_t DrawTextA(int left, int top, Ztl_bstr_t text, IWzCanvas* canvas, const Ztl_variant_t& alpha, const Ztl_variant_t& tagOrg) {
        unsigned long result{};
        auto hr = raw_DrawText(left, top, text, canvas, alpha, tagOrg, &result);
        TESTHR_EX_T(hr, this);
        return result;
    }

    int Getheight() {
        long result{};
        auto hr = get_height(&result);
        TESTHR_EX_T(hr, this);
        return result;
    }

    int CalcLongestTextForGlobal(Ztl_bstr_t txt, int w, const Ztl_variant_t& tabOrg) {
        long result{};
        auto hr = raw_CalcLongestTextForGlobal(txt, w, tabOrg, &result);
        TESTHR_EX_T(hr, this);
        return result;

    }

    int CalcLongestTextForGlobalEx(Ztl_bstr_t txt, int w, long* posAdj, const Ztl_variant_t& tabOrg) {
        long result{};
        auto hr = raw_CalcLongestTextForGlobalEx(txt, w, posAdj, tabOrg, &result);
        TESTHR_EX_T(hr, this);
        return result;
    }

    int CalcLongestText(Ztl_bstr_t txt, int w, const Ztl_variant_t& tabOrg) {
        long result{};
        auto hr = raw_CalcLongestText(txt, w, tabOrg, &result);
        TESTHR_EX_T(hr, this);
        return result;
    }



    int GetfullHeight() {
        long result{};
        auto hr = get_fullHeight(&result);
        TESTHR_EX_T(hr, this);
        return result;
    }
};