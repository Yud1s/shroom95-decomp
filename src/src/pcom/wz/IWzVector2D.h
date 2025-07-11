#pragma once
#include "IWzBase.h"
#include "IWzShape2D.h"

DECLARE_INTERFACE_IID_(IWzVector2D, IWzShape2D, "F28BD1ED-3DEB-4F92-9EEC-10EF5A1C3FB4")
{
	BEGIN_INTERFACE;
	// ** IWzVector2D methods **
	STDMETHOD(get_currentTime)(THIS_ int*) PURE;
	STDMETHOD(put_currentTime)(THIS_ int) PURE;
	STDMETHOD(get_origin)(THIS_ tagVARIANT*) PURE;
	STDMETHOD(put_origin)(THIS_ tagVARIANT) PURE;
	STDMETHOD(get_rx)(THIS_ int*) PURE;
	STDMETHOD(put_rx)(THIS_ int) PURE;
	STDMETHOD(get_ry)(THIS_ int*) PURE;
	STDMETHOD(put_ry)(THIS_ int) PURE;
	STDMETHOD(get_a)(THIS_ double*) PURE;
	STDMETHOD(get_ra)(THIS_ double*) PURE;
	STDMETHOD(put_ra)(THIS_ double) PURE;
	STDMETHOD(get_flipX)(THIS_ int*) PURE;
	STDMETHOD(put_flipX)(THIS_ int) PURE;
	STDMETHOD(raw__GetSnapshot)(THIS_ int*, int*, int*, int*, int*, int*, double*, double*, tagVARIANT) PURE;
	STDMETHOD(raw_RelMove)(THIS_ int nX, int nY, tagVARIANT nTime, tagVARIANT nType) PURE;
	STDMETHOD(raw_RelOffset)(THIS_ int, int, tagVARIANT, tagVARIANT) PURE;
	STDMETHOD(raw_Ratio)(THIS_ IWzVector2D*, int, int, int, int) PURE;
	STDMETHOD(raw_WrapClip)(THIS_ tagVARIANT, int, int, unsigned int, unsigned int, tagVARIANT) PURE;
	STDMETHOD(raw_Rotate)(THIS_ double, tagVARIANT) PURE;
	STDMETHOD(get_looseLevel)(THIS_ unsigned int*) PURE;
	STDMETHOD(put_looseLevel)(THIS_ unsigned int) PURE;
	STDMETHOD(raw_Fly)(THIS_ tagVARIANT*, int) PURE;

	END_INTERFACE;


    Ztl_variant_t Getorigin() {
        Ztl_variant_t v{};
        TESTHR(get_origin(&v));
        return v;
    }

    void Putorigin(const Ztl_variant_t& v) {
        TESTHR(put_origin(v));
    }

	void PutOrigin(const IWzVector2D* vec) {
    	TESTHR(put_origin(Ztl_variant_t((IUnknown*)vec, true)));
    }

    HRESULT RelMove(int x, int y, const Ztl_variant_t& time, const Ztl_variant_t& type) {
        auto hr = raw_RelMove(x, y, time, type);
        TESTHR(hr);
        return hr;
    }

	HRESULT RelOffset(int dx, int dy, const Ztl_variant_t& time, const Ztl_variant_t& type) {
        auto hr = raw_RelOffset(dx, dy, time, type);
        TESTHR(hr);
        return hr;
	}

    HRESULT Rotate(double angle, const Ztl_variant_t& time) {
        auto hr = raw_Rotate(angle, time);
        TESTHR(hr);
        return hr;
    }

	HRESULT Ratio(IWzVector2D* origin, int originW, int originH, int scaleW, int scaleH) {
        auto hr = raw_Ratio(origin, originW, originH, scaleW, scaleH);
        TESTHR(hr);
        return hr;
	}

	int GetcurrentTime() {
        int currentTime = 0;
        TESTHR_EX_T(get_currentTime(&currentTime), this);
        return currentTime;
	}

	int Getry() {
        int ry = 0;
        TESTHR_EX_T(get_ry(&ry), this);
        return ry;
	}

	int Getrx() {
        int rx = 0;
        TESTHR_EX_T(get_rx(&rx), this);
        return rx;
	}

	HRESULT _GetSnapshot(int* x, int* y, int* rx, int* ry, int* xOrg, int* yOrg, double* a, double* aOrg, const Ztl_variant_t& time) {
        auto hr = raw__GetSnapshot(x, y, rx, ry, xOrg, yOrg, a, aOrg, time);
        TESTHR(hr);
        return hr;
	}

	HRESULT WrapClip(const Ztl_variant_t& origin, int wrapLeft, int wrapTop, unsigned int wrapW, unsigned int wrapH, const Ztl_variant_t& bClip) {
        auto hr = raw_WrapClip(origin, wrapLeft, wrapTop, wrapW, wrapH, bClip);
        TESTHR(hr);
        return hr;
	}

	void PutflipX(int flipX) {
        TESTHR(put_flipX(flipX));
	}

	void Putra(double ra) {
        TESTHR(put_ra(ra));
	}

	double Getra() {
        double ra = 0;
        TESTHR_EX_T(get_ra(&ra), this);
        return ra;
	}
};

typedef _com_ptr_t<_com_IIID<IWzVector2D, &__uuidof(IWzVector2D)>> IWzVector2DPtr;