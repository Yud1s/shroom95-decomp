#pragma once
#include "IWzBase.h"

DECLARE_INTERFACE_IID_(IWzResMan, IUnknown, "57DFE40B-3E20-4DBC-97E8-805A50F381BF")
{
	BEGIN_INTERFACE;

	// ** IUnknown methods **
	STDMETHOD(QueryInterface)(THIS_ REFIID riid, void** ppv) PURE;
	STDMETHOD_(ULONG, AddRef)(THIS) PURE;
	STDMETHOD_(ULONG, Release)(THIS) PURE;

	// ** IWzResMan methods **
	STDMETHOD(get_rootNameSpace)(THIS_ IUnknown * *ppVal) PURE;
	STDMETHOD(put_rootNameSpace)(THIS_ IUnknown pVal) PURE;
	STDMETHOD(raw_SetResManParam)(THIS_ RESMAN_PARAM nParam, int nRetainTime, int nNameSpaceCacheTime) PURE;
	STDMETHOD(raw_CreateObject)(THIS_ const wchar_t* sUOL, IUnknown * *ppObj) PURE;
	STDMETHOD(raw_GetObject)(THIS_ const wchar_t* sUOL, tagVARIANT vParam, tagVARIANT vAux, tagVARIANT * pvObj) PURE;
	STDMETHOD(raw_SerializeObject)(THIS_ void* pArchive, tagVARIANT vDispObject, IUnknown * *ppObj) PURE;
	STDMETHOD(raw_FlushCachedObjects)(THIS_ int nUsedBefore) PURE;
	STDMETHOD(raw_OverrideObject)(THIS_ const wchar_t* sOrgUOL, const wchar_t* sNewUOL) PURE;

	END_INTERFACE;

	Ztl_variant_t GetObjectA(Ztl_bstr_t uol, const Ztl_variant_t& param, const Ztl_variant_t& aux) {
        Ztl_variant_t v;
        TESTHR_EX_T(raw_GetObject(uol, param, aux, &v), this);
        return v;
	}

	template<typename T>
	_com_ptr_t<_com_IIID<T, &__uuidof(T)>> GetObjectT(Ztl_bstr_t uol, const Ztl_variant_t& param = vtMissing, const Ztl_variant_t& aux = vtMissing) {
		auto vObj = GetObjectA(uol, param, aux);
		auto unk = vObj.GetUnknown();
		return _com_ptr_t < _com_IIID<T, &__uuidof(T)>>(unk);
	}

	HRESULT SetResManParam(RESMAN_PARAM nParam, int nRetainTime, int nNameSpaceCacheTime) {
        auto hr = raw_SetResManParam(nParam, nRetainTime, nNameSpaceCacheTime);
        TESTHR_EX_T(hr, this);
        return hr;
	}
};