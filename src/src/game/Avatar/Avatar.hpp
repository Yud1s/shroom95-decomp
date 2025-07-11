// Avatar.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "GW/GW.hpp"

#include "VecCtrl/VecCtrl.hpp"
#include "ActionMan/ActionMan.hpp"

struct GW_ItemSlotBase;
class CharacterData;
class CInPacket;

// Level: 0 0x4e2a
class CAvatar;
struct AvatarLook;

#pragma pack(push, 1)
struct AvatarLook : public ZRefCounted
{
    // Nested
    // Fields
public:
    unsigned char nGender{};

public:
    long nSkin{};

public:
    long nFace{};

public:
    long nWeaponStickerID{};

public:
    std::array<long, 60> anHairEquip{};

public:
    std::array<long, 60> anUnseenEquip{};

public:
    std::array<long, 3> anPetID{};
    // Methods
public:
    virtual ~AvatarLook();

public:
    void _dtor_0();

    CTOR_DEFAULT(AvatarLook)

public:
    AvatarLook(const AvatarLook& __that);

public:
    void _ctor_2(const AvatarLook& __that);

public:
    AvatarLook(const GW_CharacterStat& cs, const ZRef<GW_ItemSlotBase>* apEquipped,
               const ZRef<GW_ItemSlotBase>* apEquipped2);

public:
    void _ctor_4(const GW_CharacterStat& cs, const ZRef<GW_ItemSlotBase>* apEquipped,
                 const ZRef<GW_ItemSlotBase>* apEquipped2);

public:
    AvatarLook(const GW_CharacterStat& arg0, const long* arg1, const long* arg2);

public:
    void _ctor_3(const GW_CharacterStat& arg0, const long* arg1, const long* arg2) const;

public:
    AvatarLook(const CharacterData& cd);

public:
    void _ctor_0(const CharacterData& cd);

public:
    AvatarLook(CInPacket& iPacket);

public:
    void _ctor_5(CInPacket& iPacket);

public:
    AvatarLook();

public:
    void _ctor_1();

public:
    void Load(const GW_CharacterStat& cs, const ZRef<GW_ItemSlotBase>* apEquipped,
              const ZRef<GW_ItemSlotBase>* apEquipped2);

    void Load_1(const GW_CharacterStat& cs, const ZRef<GW_ItemSlotBase>* apEquipped,
                const ZRef<GW_ItemSlotBase>* apEquipped2)
    {
        Load(cs, apEquipped, apEquipped2);
    }

public:
    void Load(const GW_CharacterStat& arg0, const long* arg1, const long* arg2) const;

public:
    void Load(const CharacterData& cd);

    void Load_0(const CharacterData& cd)
    {
        Load(cd);
    }

public:
    void Encode(COutPacket& arg0) const;

public:
    void Decode(CInPacket& iPacket);

public:
    AvatarLook& operator=(const AvatarLook& __that);

public:
    static AvatarLook& _op_assign_12(AvatarLook* pThis, const AvatarLook& __that);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(AvatarLook, 517);

class CAvatar
{
    // Nested
public:
    struct ACTIONINFO
    {
        // Nested
        // Fields
    public:
        long nCurFrameIndex{};

    public:
        long tCurFrameRemain{};

    public:
        long tTotFrameDelay{};

    public:
        ZArray<long> aFrameDelay;

    public:
        int32_t bCurFrameStop{};

    public:
        long nCurTMFrameIndex{};

    public:
        long tCurTMFrameRemain{};

    public:
        long tTotTMFrameDelay{};

    public:
        ZArray<long> aTMFrameDelay;

    public:
        std::array<ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>, 273> aaAction{};

    public:
        std::array<ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>, 273> aaTamingMobAction{};

    public:
        std::array<ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>>, 49> aaMorphAction{};

    public:
        ZArray<ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>> aSPAction{};
        // Methods
    public:
        ~ACTIONINFO();

    public:
        void _dtor_0();

    public:
        ACTIONINFO(const CAvatar::ACTIONINFO& arg0);

    public:
        void _ctor_1(const CAvatar::ACTIONINFO& arg0) const;

    public:
        ACTIONINFO();

        CTOR_DEFAULT(ACTIONINFO)

    public:
        void _ctor_0();

    public:
        void SetCurFrameStop(int32_t arg0);

    public:
        CAvatar::ACTIONINFO& operator=(const CAvatar::ACTIONINFO& arg0);

    public:
        static CAvatar::ACTIONINFO& _op_assign_4(CAvatar::ACTIONINFO* pThis, const CAvatar::ACTIONINFO& arg0);
    };

public:
    enum UnnamedEnum16419
    {
        SUPERMAN_1_MORPHED = 1000,
        SUPERMAN_2_MORPHED = 1001,
        SUPERMAN_3_MORPHED = 1100,
        SUPERMAN_4_MORPHED = 1101,
        OAK_CASK_MORPHED = 1002
    };

    enum UnnamedEnum16421
    {
        REPEATABLE_ACTION = 0,
        ONETIME_ACTION = 1,
        ACT_TYPE_NO = 2
    };

    // Fields
protected:
    AvatarLook m_avatarLook;

protected:
    AvatarLook m_avatarLookLast;

protected:
    std::array<long, 60> m_aAvatarHairEquipForced{};

protected:
    int32_t m_bForcingAppearance{};

protected:
    long m_nWeaponItemID{};

protected:
    long m_nSubWeaponItemID{};

protected:
    long m_nShieldItemID{};

protected:
    long m_nWalkType{};

protected:
    long m_nStandType{};

protected:
    long m_nAttackActionType{};

protected:
    std::array<long, 2> _ZtlSecureTear_m_nWeaponAttackSpeed{};

protected:
    uint32_t _ZtlSecureTear_m_nWeaponAttackSpeed_CS{};

protected:
    Ztl_bstr_t m_sWeaponAfterimage;

protected:
    int32_t m_bBlinking{};

protected:
    long m_tNextBlink{};

protected:
    long m_tEmotionEnd{};

protected:
    std::array<long, 2> _ZtlSecureTear_m_nEmotion{};

protected:
    uint32_t _ZtlSecureTear_m_nEmotion_CS{};

protected:
    int32_t m_bResetEmotion{};

protected:
    unsigned long m_dwMorphTemplateID{};

protected:
    tagRECT m_rcMorphBody{};

protected:
    long m_nGhostIndex{};

protected:
    long m_nMechanicMode{};

protected:
    int32_t m_bRocketBoosterStart{};

protected:
    int32_t m_bRocketBoosterLoop{};

protected:
    int32_t m_bForcedInvisible{};

protected:
    long m_nRidingVehicleID{};

protected:
    long m_nRidingChairID{};

protected:
    tagRECT m_rcTamingMobBody{};

protected:
    long m_nCharacterActionFrame{};

protected:
    SECPOINT m_ptBodyRelMove;

protected:
    int32_t m_bTamingMobTired{};

protected:
    long m_nTamingMobOneTimeAction{};

protected:
    long m_nTamingMobAction{};

protected:
    int32_t m_bDelayedLoad{};

protected:
    long m_tAlertRemain{};

protected:
    long m_nMoveAction{};

protected:
    long m_nOneTimeAction{};

protected:
    std::array<CAvatar::ACTIONINFO, 2> m_aiAction{};

protected:
    long m_nDefaultEmotion{};

protected:
    long m_nChairHeight{};

protected:
    _x_com_ptr<IWzVector2D> m_pRawOrigin;

protected:
    _x_com_ptr<IWzVector2D> m_pOrigin;

protected:
    _x_com_ptr<IWzVector2D> m_pFaceOrigin;

protected:
    _x_com_ptr<IWzVector2D> m_pBodyOrigin;

protected:
    _x_com_ptr<IWzVector2D> m_pMuzzleOrigin;

protected:
    _x_com_ptr<IWzVector2D> m_pTMNavelOrigin;

protected:
    _x_com_ptr<IWzVector2D> m_pTMHeadOrigin;

protected:
    _x_com_ptr<IWzVector2D> m_pTMMuzzleOrigin;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerFace;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerOverFace;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerUnderFace;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerShadowPartner;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerOverCharacter;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerUnderCharacter;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerOverlay;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerMuzzle;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerBarrier;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerCyclone;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerAR01;

protected:
    SECPOINT m_ptPos;

protected:
    SECPOINT m_ptPosPrev;

protected:
    long m_nScale{};

protected:
    int32_t m_bFlip{};

protected:
    uint16_t m_wLastDayOfWeek{};

private:
    long m_tLevitationFlowTime{};

private:
    long m_tLevitationLastUpdateTime{};
    // Methods
    CTOR_DEFAULT(CAvatar)

public:
    virtual ~CAvatar();

public:
    void _dtor_0();

public:
    CAvatar(const CAvatar& arg0);

public:
    void _ctor_1(const CAvatar& arg0) const;

public:
    CAvatar();

public:
    void _ctor_0();

protected:
    void Init(_x_com_ptr<IWzVector2D> pOrigin, long x, long y, _x_com_ptr<IWzGr2DLayer> pOverlay, long z);

    void Init_0(_x_com_ptr<IWzVector2D> pOrigin, long x, long y, _x_com_ptr<IWzGr2DLayer> pOverlay, long z)
    {
        Init(pOrigin, x, y, pOverlay, z);
    }

public:
    void Init(const AvatarLook& al, long nMoveAction, _x_com_ptr<IWzVector2D> pOrigin,
              const _x_com_ptr<IWzGr2DLayer> pOverlay, long z, long x, long y, long nScale, long nDefaultEmotion);

    void Init_1(const AvatarLook& al, long nMoveAction, _x_com_ptr<IWzVector2D> pOrigin,
                _x_com_ptr<IWzGr2DLayer> pOverlay, long z, long x, long y, long nScale, long nDefaultEmotion)
    {
        Init(al, nMoveAction, pOrigin, pOverlay, z, x, y, nScale, nDefaultEmotion);
    }

public:
    AvatarLook& GetAvatarLook();

public:
    void SetAvatarLook(const AvatarLook& al);

public:
    int32_t IsForcingAppearance() const;

public:
    long* GetAvatarHairEquipForced();

public:
    void NotifyAvatarModified(int32_t bForced);

public:
    virtual int32_t CanUseBareHand();

public:
    virtual int32_t IsEvanJob();

public:
    virtual void OnAvatarModified();

public:
    long GetGender() const;

public:
    void ForcingAppearance(int32_t bSet, long* pAvatarHairEquip);

public:
    long GetWeaponItemID() const;

public:
    long GetSubWeaponItemID() const;

public:
    long GetShieldItemID();

public:
    int32_t IsAlertMode() const;

public:
    int32_t IsDead() const;

public:
    long GetMoveAction() const;

public:
    virtual void SetMoveAction(long nMA, int32_t bReload);

public:
    void SetLayerZ(long z) const;

public:
    long GetLayerZ() const;

public:
    void SetLayerColor(long nColor) const;

public:
    int32_t IsOnPlayingOneTimeAction() const;

public:
    int32_t IsOnPlayingRotateAction() const;

public:
    long GetOneTimeAction() const;

public:
    int32_t IsLeft() const;

public:
    long GetCurrentAction(long* pnDir);

public:
    void GetBodyRect(tagRECT& rc, int32_t bContinuous);

public:
    long GetHeight();

public:
    void SetEmotion(long nEmotion, long tDuration);

public:
    long GetEmotion() const;

public:
    _x_com_ptr<IWzGr2DLayer> GetLayerUnderFace();

public:
    _x_com_ptr<IWzVector2D> GetOrigin();

public:
    _x_com_ptr<IWzVector2D> GetFaceOrigin();

public:
    _x_com_ptr<IWzVector2D> GetBodyOrigin();

public:
    _x_com_ptr<IWzVector2D> GetTMNavelOrigin();

public:
    _x_com_ptr<IWzVector2D> GetTMHeadOrigin();

public:
    _x_com_ptr<IWzVector2D> GetTMMuzzleOrigin();

public:
    _x_com_ptr<IWzVector2D> GetSuitableMuzzleOrigin();

public:
    void Update();

public:
    int32_t SetMorphed(unsigned long dwMorphTemplateID);

public:
    void SetGhostState(long nGhostIndex);

public:
    void SetMechanicMode(long nMechanicMode);

public:
    long GetGhostState() const;

public:
    int32_t IsMorphed() const;

public:
    int32_t IsSuperMan() const;

public:
    int32_t IsMonsterMorphed() const;

public:
    int32_t IsHideMorphed() const;

public:
    long GetMechanicMode() const;

public:
    int32_t IsAttackableMorphed() const;

public:
    void SetRidingVehicle(long nVehicleID, int32_t bRidingAction);

public:
    long GetRidingVehicle() const;

public:
    void SetRidingChair(long nVehicleID);

public:
    int32_t IsRidingVehicle() const;

public:
    int32_t IsRidingTamedMob() const;

public:
    int32_t IsRidingSkillVehicle() const;

public:
    int32_t IsRidingEventVehicle() const;

public:
    int32_t IsRidingEvanDragon() const;

public:
    int32_t IsRidingWildHunterJaguar() const;

public:
    int32_t IsRidingMechanic() const;

public:
    int32_t IsRidingChair() const;

public:
    void SetTamingMobTired(int32_t arg0);

public:
    int32_t IsDelayedLoad() const;

public:
    void SetDelayedLoad(int32_t arg0);

public:
    void SetVisibleMan(int32_t bVisible) const;

public:
    void SetVisibleTamingMob(int32_t bVisible) const;

public:
    int32_t IsTransFormSkill() const;

public:
    long CalcMorphedFrameDelay(long arg0, int32_t arg1, long arg2) const;

public:
    int32_t IsActionHold(long nAction, long nIndex) const;

public:
    void ApplyScaleAndOffset(_x_com_ptr<IWzGr2DLayer>& pLayer, _x_com_ptr<IWzCanvas>& pCanvas, long nIndex);

public:
    long GetCurrentActionType() const;

public:
    CAvatar::ACTIONINFO& GetActionInfo();

public:
    void LoadBarrier();

public:
    void RemoveBarrier();

public:
    void LoadCyclone();

public:
    void SetRidingVehicleID(long arg0);

public:
    long* GetAppearance() const;

public:
    void TakeOffWeapon();

public:
    void ChangeWeapon(long arg0) const;

public:
    void ChangeCashItemLook() const;

public:
    int32_t IsResetEmotion() const;

public:
    void SetResetEmotion(int32_t arg0);

public:
    void SetOneTimeAction(long nAction);

protected:
    virtual void PrepareActionLayer(long nActionSpeed, long nWalkSpeed, int32_t bKeyDown);

protected:
    void PrepareFaceLayer(long tDuration);

protected:
    void ClearActionLayer(long nIndex);

protected:
    void ResetOneTimeAction();

protected:
    void ActionProcess(long nSaveAction);

protected:
    void RegisterNextBlink();

protected:
    void SetAlertMode();

protected:
    void Zoom(_x_com_ptr<IWzGr2DLayer> arg0) const;

protected:
    long MoveAction2RawAction(long nMA, long* pnDir);

protected:
    void AvatarLayerRemoveCanvas(long nIndex);

protected:
    void AvatarLayerFlip(long nFlip) const;

protected:
    long __fastcall _ZtlSecureGet_m_nWeaponAttackSpeed() const;

protected:
    long __fastcall _ZtlSecurePut_m_nWeaponAttackSpeed(long arg0);

protected:
    long __fastcall _ZtlSecureGet_m_nEmotion() const;

protected:
    long __fastcall _ZtlSecurePut_m_nEmotion(long arg0);

protected:
    int32_t IsRidingEx() const;

protected:
    void ResetCharacterOneTimeAction();

protected:
    void ResetTamingMobOneTimeAction();

protected:
    long ConvertCharacterAction(long nAction) const;

protected:
    long GetCurCharacterAction(long* pnDir);

protected:
    long GetCurTamingMobAction();

protected:
    void ClearCharacterActionLayer(long nIndex);

protected:
    void ClearTamingMobActionLayer(long nIndex);

protected:
    void PrepareCharacterActionLayer(long nActionSpeed, long nWalkSpeed, int32_t bKeyDown);

protected:
    void PrepareTamingMobActionLayer(long nActionSpeed, long nWalkSpeed, int32_t bKeyDown);

protected:
    int32_t CharacterFrameUpdate();

protected:
    void TamingMobFrameUpdate();

protected:
    void FixCharacterPosition();

protected:
    long GetCurTamingMobActionType() const;

protected:
    CAvatar::ACTIONINFO& GetTamingMobActionInfo() const;

public:
    int32_t IsOnPlayingTamingMobOneTimeAction() const;

protected:
    long GetTamingMobOneTimeAction() const;

protected:
    void SetResistanceRidingMoveAction(long nMA, int32_t bReload);

protected:
    void SetChairHeight(long arg0);

private:
    void DoLevitationAction();

private:
    void StopLevitationAction();

public:
    CAvatar& operator=(const CAvatar& arg0);

public:
    static CAvatar& _op_assign_122(CAvatar* pThis, const CAvatar& arg0);
};

STATIC_ASSERT_SIZE(CAvatar, 6464);


CVecCtrl*__cdecl rc_vc(IWzVector2D* p);
int32_t __cdecl is_back_action(long nAction, int32_t bMorphed);
