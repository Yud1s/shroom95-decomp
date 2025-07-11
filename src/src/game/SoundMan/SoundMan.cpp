// SoundMan.cpp
#include "SoundMan.hpp"


static ZMap<wchar_t const *, __POSITION *, Ztl_bstr_t> _TMP_MAP;
#include "SoundMan_regen.ipp"

CSoundMan::~CSoundMan()
{
}

void CSoundMan::_dtor_0()
{
    return __sub_00317F60(this, nullptr);
}

CSoundMan::CSoundMan(const CSoundMan& arg0)
{
    _ctor_1(arg0);
}

void CSoundMan::_ctor_1(const CSoundMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSoundMan::CSoundMan()
{
    //UNIMPLEMENTED; //_ctor_0();
}

void CSoundMan::_ctor_0()
{
    return __sub_005C8F70(this, nullptr);
}

int32_t CSoundMan::Init(HWND__* hWnd, uint32_t uSECacheTime, long nChannels, long nSampleRate, long nBitsPerSample)
{
    return __sub_00317720(this, nullptr, hWnd, uSECacheTime, nChannels, nSampleRate, nBitsPerSample);
}

void CSoundMan::Term()
{
    __sub_00317F60(this, nullptr);
}

void CSoundMan::SetBGMVolume(uint32_t u100, uint32_t uFadingDuration)
{
    __sub_00317380(this, nullptr, u100, uFadingDuration);
}

uint32_t CSoundMan::GetBGMVolume() const
{
    return m_uBGMVolume;
}

void CSoundMan::PlayBGM(const wchar_t* sPath, int32_t bLoop, uint32_t uFadeOutTime, uint32_t uFadeInTime,
                        int32_t bForceRestart)
{
    __sub_00046040(this, nullptr, sPath, bLoop, uFadeOutTime, uFadeInTime, bForceRestart);
}

void CSoundMan::SetSEVolume(uint32_t uUsedBefore)
{
    __sub_00043250(this, nullptr, uUsedBefore);
}

uint32_t CSoundMan::GetSEVolume()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

uint32_t CSoundMan::PlaySE(const wchar_t* sPath, uint32_t uStartVolume128, int32_t bLoop)
{
    return 0;
    //return __sub_0004F880(this, nullptr, sPath, uStartVolume128, bLoop);
}

void CSoundMan::StopSE(uint32_t uCookie, uint32_t uFadeOutTime)
{
    __sub_00317C40(this, nullptr, uCookie, uFadeOutTime);
}

void CSoundMan::FlushSECache(uint32_t uUsedBefore)
{
    __sub_00043250(this, nullptr, uUsedBefore);
}

CSoundMan::SECACHEITEM::~SECACHEITEM()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CSoundMan::SECACHEITEM::_dtor_0()
{
    return __sub_0003B770(this, nullptr);
}

CSoundMan::SECACHEITEM::SECACHEITEM(const CSoundMan::SECACHEITEM& arg0)
{
    _ctor_1(arg0);
}

void CSoundMan::SECACHEITEM::_ctor_1(const CSoundMan::SECACHEITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSoundMan::SECACHEITEM::SECACHEITEM(IWzSound* pSound)
{
    _ctor_0(pSound);
}

void CSoundMan::SECACHEITEM::_ctor_0(IWzSound* pSound)
{
    return __sub_0003B710(this, nullptr, pSound);
}

CSoundMan::SECACHEITEM::SECACHEITEM()
{
    UNIMPLEMENTED; //_ctor_3();
}

void CSoundMan::SECACHEITEM::_ctor_3()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CSoundMan::SECACHEITEM::operator<(const CSoundMan::SECACHEITEM& arg0) const
{
    return tLastUsed < arg0.tLastUsed;
}

int32_t CSoundMan::SECACHEITEM::_op_lt_4(CSoundMan::SECACHEITEM* pThis, const CSoundMan::SECACHEITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSoundMan::SECACHEITEM& CSoundMan::SECACHEITEM::operator=(const CSoundMan::SECACHEITEM& arg0)
{
    return _op_assign_5(this, arg0);
}

CSoundMan::SECACHEITEM& CSoundMan::SECACHEITEM::_op_assign_5(CSoundMan::SECACHEITEM* pThis,
                                                             const CSoundMan::SECACHEITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzSound___GUID_1c923939_1338_4f8b_92cf_38935cee1fef___(
    const wchar_t* sUOL, _x_com_ptr<IWzSound>& pObj, IUnknown* pUnkOuter)
{
    return __sub_00317690(sUOL, pObj, pUnkOuter);
}

void stop_ui_sound_loop(uint32_t uSoundCookie)
{
    CSoundMan::ms_pInstance->StopSE(uSoundCookie, 0);
}

uint32_t play_ui_sound_loop(const wchar_t* sSndName)
{
    //TODO 0x966790
    UNIMPLEMENTED;
}

void play_casheffect_sound(const wchar_t* sName, size_t uVol)
{
    // TODO 0x9685a0
}

void play_object_sound(const wchar_t* sName, size_t uVol)
{
    // TODO 0x967580
    UNIMPLEMENTED;
}

void play_field_sound(const wchar_t* sName, size_t uVol)
{
    // TODO 0x9684e0
    UNIMPLEMENTED;
}

void play_minigame_sound(const wchar_t* sName, size_t uVol)
{
    // TODO 009674d0
    UNIMPLEMENTED;
}

void stop_skill_sound(uint32_t uSoundCookie)
{
    CSoundMan::ms_pInstance->StopSE(uSoundCookie, 0);
}

void play_weapon_sound(wchar_t const* wt, SE_TYPE seType, uint32_t vol)
{
    //UNIMPLEMENTED;
    return; //TODO
}

void play_ConsumeEffect_sound(int effect)
{
    UNIMPLEMENTED;
}
