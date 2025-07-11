#pragma once
#include "IWzBase.h"
#include "IWzSerialize.h"

interface IWzSound;

DECLARE_INTERFACE_IID_(IWzSoundState, IUnknown, "d9730ba4-23f5-4c2d-95d4-0e7d3df3765d")
{
    BEGIN_INTERFACE;

    STDMETHOD(get_parentSound)(THIS_ IWzSound** u0) PURE;
    STDMETHOD(get_playing)(THIS_ long* u0) PURE;
    STDMETHOD(put_playing)(THIS_ long u0) PURE;
    STDMETHOD(get_chain)(THIS_ VARIANT* u0) PURE;
    STDMETHOD(put_chain)(THIS_ VARIANT u0) PURE;
    STDMETHOD(get_chainValue)(THIS_ long* u0) PURE;
    STDMETHOD(put_chainValue)(THIS_ long u0) PURE;
    STDMETHOD(get_volume)(THIS_ long* u0) PURE;
    STDMETHOD(put_volume)(THIS_ long u0) PURE;
    STDMETHOD(raw_MoveVolume)(THIS_ long u0, long u1) PURE;

    END_INTERFACE;

    void Putchain(const Ztl_variant_t& pvChain) {
        TESTHR_EX_T(put_chain(pvChain), this);
    }
};

typedef _com_ptr_t<_com_IIID<IWzSoundState, &__uuidof(IWzSoundState)>> IWzSoundStatePtr;


DECLARE_INTERFACE_IID_(IWzSound, IWzSerialize, "1c923939-1338-4f8b-92cf-38935cee1fef")
{
	BEGIN_INTERFACE;

    STDMETHOD(raw_GlobalInit)(THIS_ VARIANT u0, VARIANT u1, VARIANT u2, VARIANT u3) PURE;
    STDMETHOD(raw_GlobalClose)(THIS) PURE;
    STDMETHOD(raw_GlobalSetBuffer)(THIS_ unsigned long u0, unsigned long u1) PURE;
    STDMETHOD(get_globalVolume)(THIS_ long* u0) PURE;
    STDMETHOD(put_globalVolume)(THIS_ long u0) PURE;
    STDMETHOD(get_allSoundStates)(THIS_ IEnumVARIANT** u0) PURE;
    STDMETHOD(get_globalFocus)(THIS_ long* u0) PURE;
    STDMETHOD(put_globalFocus)(THIS_ long u0) PURE;
    STDMETHOD(raw_Play)(THIS_ VARIANT nPlay, VARIANT vRet, IWzSoundState** u2) PURE;
    STDMETHOD(get_length)(THIS_ long* u0) PURE;
    STDMETHOD(get_type)(THIS_ wchar_t** u0) PURE;
    STDMETHOD(raw_GetSourceBuffer)(THIS_ unsigned char** u0, unsigned long* u1) PURE;


	END_INTERFACE;

	long Getlength() {
		long length = 0;
        TESTHR_EX_T(get_length(&length), this);
        return length;
	}

	IWzSoundStatePtr Play(const Ztl_variant_t& nRepeat, const Ztl_variant_t& vRet) {
        IWzSoundState* pRet = nullptr;
        auto hr = raw_Play(nRepeat, vRet, &pRet);
        TESTHR_EX_T(hr, this);
        return IWzSoundStatePtr(pRet, false);
	}

	IEnumVARIANTPtr GetallSoundStates() {
        IEnumVARIANT* pRet = nullptr;
        auto hr = get_allSoundStates(&pRet);
        TESTHR_EX_T(hr, this);
        return IEnumVARIANTPtr(pRet, false);
    }
};

typedef _com_ptr_t<_com_IIID<IWzSound, &__uuidof(IWzSound)>> IWzSoundPtr;

