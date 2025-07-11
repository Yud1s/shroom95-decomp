#pragma once

#include "IWzBase.h"
#include "IWzSerialize.h"

DECLARE_INTERFACE_IID_(IWzShape2D, IWzSerialize, "4cfb57c7-eae3-40b3-ac98-4b2750e3642a") {
    BEGIN_INTERFACE;

    STDMETHOD(get_item)(THIS_ tagVARIANT, tagVARIANT *) PURE;

    STDMETHOD(get__NewEnum)(THIS_ IUnknown **) PURE;

    STDMETHOD(get_count)(THIS_ unsigned int *) PURE;

    STDMETHOD(get_x)(THIS_ int *) PURE;

    STDMETHOD(put_x)(THIS_ int) PURE;

    STDMETHOD(get_y)(THIS_ int *) PURE;

    STDMETHOD(put_y)(THIS_ int) PURE;

    STDMETHOD(get_x2)(THIS_ int *) PURE;

    STDMETHOD(put_x2)(THIS_ int) PURE;

    STDMETHOD(get_y2)(THIS_ int *) PURE;

    STDMETHOD(put_y2)(THIS_ int) PURE;

    STDMETHOD(raw_Move)(THIS_ int, int) PURE;

    STDMETHOD(raw_Offset)(THIS_ int, int) PURE;

    STDMETHOD(raw_Scale)(THIS_ int, int, int, int, int, int) PURE;

    STDMETHOD(raw_Insert)(THIS_ tagVARIANT, tagVARIANT) PURE;

    STDMETHOD(raw_Remove)(THIS_ tagVARIANT, tagVARIANT *) PURE;

    STDMETHOD(raw_Init)(THIS_ int, int) PURE;

    END_INTERFACE;

    void Putx(int x) {
        TESTHR_EX_T(put_x(x), this);
    }

    int Getx() {
        int x;
        TESTHR_EX_T(get_x(&x), this);
        return x;

    }

    int Gety() {
        int y;
        TESTHR_EX_T(get_y(&y), this);
        return y;
    }

    HRESULT Move(int x, int y) {
        auto hr = raw_Move(x, y);
        TESTHR_EX_T(hr, this);
        return hr;
    }


    void Offset(int dx, int dy) {
        TESTHR_EX_T(raw_Offset(dx, dy), this);
    }

    uint32_t Getcount() {
        uint32_t count{};
        TESTHR_EX_T(get_count(&count), this);
        return count;
    }
};

typedef _com_ptr_t<_com_IIID<IWzShape2D, &__uuidof(IWzShape2D)>> IWzShape2DPtr;