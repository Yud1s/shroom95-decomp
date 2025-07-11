// SoundMan.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"
#include "extra.h"

// Level: 1 0x19557
class CSoundMan;

class CSoundMan : public TSingleton<CSoundMan>
{
    // Nested
public:
    struct SECACHEITEM
    {
        // Nested
        // Fields
        _x_com_ptr<IWzSound> pSound;
        __POSITION* posMap{};
        long tLastUsed{};
        // Methods
        ~SECACHEITEM();
        void _dtor_0();

        SECACHEITEM(const CSoundMan::SECACHEITEM& arg0);
        void _ctor_1(const CSoundMan::SECACHEITEM& arg0);

        SECACHEITEM(IWzSound* pSound);
        void _ctor_0(IWzSound* pSound);

        SECACHEITEM();
        void _ctor_3();

        int32_t operator<(const CSoundMan::SECACHEITEM& arg0) const;
        static int32_t _op_lt_4(CSoundMan::SECACHEITEM* pThis, const CSoundMan::SECACHEITEM& arg0);
        CSoundMan::SECACHEITEM& operator=(const CSoundMan::SECACHEITEM& arg0);
        static CSoundMan::SECACHEITEM& _op_assign_5(CSoundMan::SECACHEITEM* pThis, const CSoundMan::SECACHEITEM& arg0);
    };

    // Fields
private:
    _x_com_ptr<IWzResMan> m_pResMan;
    uint32_t m_uBGMVolume{};
    _x_com_ptr<IWzSoundState> m_pBGMState;
    Ztl_bstr_t m_sBGMPath;
    uint32_t m_uSEVolume{};
    long m_tSECacheTime{};
    ZMap<unsigned short const*, __POSITION*, Ztl_bstr_t> m_mposSECache;
    ZMinHeap<CSoundMan::SECACHEITEM, ZMinHeapCompare<CSoundMan::SECACHEITEM>> m_heapSECache;
    uint32_t m_uSerial{};
    ZMap<unsigned int, _x_com_ptr<IWzSoundState>, unsigned int> m_mpLoopingStates;
    // Methods
public:
    virtual ~CSoundMan();
    void _dtor_0();
    CSoundMan(const CSoundMan& arg0);
    void _ctor_1(const CSoundMan& arg0);
    CSoundMan();
    void _ctor_0();
    CTOR_DEFAULT(CSoundMan)
    int32_t Init(HWND__* hWnd, uint32_t uSECacheTime, long nChannels, long nSampleRate, long nBitsPerSample);
    void Term();
    void SetBGMVolume(uint32_t u100, uint32_t uFadingDuration);
    uint32_t GetBGMVolume() const;
    void PlayBGM(const wchar_t* sPath, int32_t bLoop, uint32_t uFadeOutTime, uint32_t uFadeInTime,
                 int32_t bForceRestart);
    void SetSEVolume(uint32_t uUsedBefore);
    uint32_t GetSEVolume();
    uint32_t PlaySE(const wchar_t* sPath, uint32_t uStartVolume128, int32_t bLoop);
    void StopSE(uint32_t uCookie, uint32_t uFadeOutTime);
    void FlushSECache(uint32_t uUsedBefore);
};

STATIC_ASSERT_SIZE(CSoundMan::SECACHEITEM, 0xc);
STATIC_ASSERT_SIZE(CSoundMan, 100);

void stop_ui_sound_loop(uint32_t uSoundCookie);
uint32_t play_ui_sound_loop(wchar_t const* sSndName);
void play_object_sound(const wchar_t* sName, size_t uVol);
void play_casheffect_sound(const wchar_t* sName, size_t uVol);
void __cdecl play_field_sound(const wchar_t* sName, size_t uVol);
void play_minigame_sound(const wchar_t* sName, size_t uVol);
void stop_skill_sound(uint32_t uSoundCookie);
void play_weapon_sound(wchar_t const* wt, SE_TYPE seType, uint32_t vol);
void play_ConsumeEffect_sound(int effect);

void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzSound___GUID_1c923939_1338_4f8b_92cf_38935cee1fef___(
    const wchar_t* sUOL, _x_com_ptr<IWzSound>& pObj, IUnknown* pUnkOuter);
