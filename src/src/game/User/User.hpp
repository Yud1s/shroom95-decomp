// User.hpp
#pragma once
#include <VecCtrlUser/VecCtrlUser.hpp>

#include "util/base.h"
#include "pcom/wz.h"

#include "Avatar/Avatar.hpp"
#include "Life/Life.hpp"
#include "WvsPhysicalSpace2D/WvsPhysicalSpace2D.hpp"
#include "Stat/Stat.hpp"
#include "KeywordEffectManager/KeywordEffectManager.hpp"
#include "ItemEffect/ItemEffect.hpp"
#include "Dragon/Dragon.hpp"
#include "Pet/Pet.hpp"
#include "Summoned/Summoned.hpp"

class CPet;
class CSummoned;
struct ATTACKINFO;
class CMob;

// Level: 0 0x5fe6
struct USERLAYER;
// Level: 1 0x4169
class CUser;
// Level: 1 0x13d44
class CGrenade;

struct USERLAYER
{
    // Nested
public:
    enum POSTYPE
    {
        POS_BODY_ORIGIN = 0,
        POS_FACE_ORIGIN = 1,
        POS_CENTER = 2,
        POS_GROUND_ORIGIN = 3
    };

    // Fields
public:
    int32_t bFixed{};

public:
    USERLAYER::POSTYPE nPos{POS_BODY_ORIGIN};

public:
    _x_com_ptr<IWzGr2DLayer> pLayer;
    // Methods
public:
    ~USERLAYER();

public:
    void _dtor_0();

public:
    USERLAYER(const USERLAYER& arg0);

public:
    void _ctor_1(const USERLAYER& arg0);

public:
    USERLAYER();

public:
    void _ctor_0();

public:
    USERLAYER& operator=(const USERLAYER& arg0);

public:
    static USERLAYER& _op_assign_3(USERLAYER* pThis, const USERLAYER& arg0);
};

STATIC_ASSERT_SIZE(USERLAYER, 12);

class CUser : public CLife, public CAvatar
{
    // Nested
public:
    struct ADDITIONALLAYER
    {
        // Nested
        // Fields
    public:
        long nDataForRepeat{};

    public:
        long nType{};

    public:
        long nData{};

    public:
        USERLAYER l;

    public:
        USERLAYER l2;
        // Methods
        CTOR_DEFAULT(ADDITIONALLAYER)

    public:
        ~ADDITIONALLAYER();

    public:
        void _dtor_0();

    public:
        ADDITIONALLAYER(const CUser::ADDITIONALLAYER& arg0);

    public:
        void _ctor_1(const CUser::ADDITIONALLAYER& arg0);

    public:
        ADDITIONALLAYER();

    public:
        void _ctor_0();

    public:
        void Reset();

    public:
        CUser::ADDITIONALLAYER& operator=(const CUser::ADDITIONALLAYER& arg0);

    public:
        static CUser::ADDITIONALLAYER& _op_assign_4(CUser::ADDITIONALLAYER* pThis, const CUser::ADDITIONALLAYER& arg0);
    };

public:
    struct AFFECTEDSKILLENTRY
    {
        // Nested
        // Fields
    public:
        long nSkillID{};

    public:
        long tStart{};

    public:
        __POSITION* posList{};

    public:
        USERLAYER l;

    public:
        int32_t bEnterField{};
        // Methods
    public:
        ~AFFECTEDSKILLENTRY();

    public:
        void _dtor_0();

    public:
        AFFECTEDSKILLENTRY(const CUser::AFFECTEDSKILLENTRY& arg0);

    public:
        void _ctor_1(const CUser::AFFECTEDSKILLENTRY& arg0);

    public:
        AFFECTEDSKILLENTRY();

    public:
        void _ctor_0();

    public:
        CUser::AFFECTEDSKILLENTRY& operator=(const CUser::AFFECTEDSKILLENTRY& arg0);

    public:
        static CUser::AFFECTEDSKILLENTRY& _op_assign_3(CUser::AFFECTEDSKILLENTRY* pThis,
                                                       const CUser::AFFECTEDSKILLENTRY& arg0);
    };

public:
    struct AFTERIMAGEINFO
    {
        // Nested
        // Fields
    public:
        long tStart{};

    public:
        int32_t bLeft{};

    public:
        long nAction{};

    public:
        Ztl_bstr_t sAfterimageUOL;

    public:
        Ztl_bstr_t sSfxUOL;
        // Methods
    public:
        ~AFTERIMAGEINFO();

    public:
        void _dtor_0();

    public:
        AFTERIMAGEINFO(const CUser::AFTERIMAGEINFO& arg0);

    public:
        void _ctor_1(const CUser::AFTERIMAGEINFO& arg0);

    public:
        AFTERIMAGEINFO();

    public:
        void _ctor_0();

    public:
        CUser::AFTERIMAGEINFO& operator=(const CUser::AFTERIMAGEINFO& arg0);

    public:
        static CUser::AFTERIMAGEINFO& _op_assign_3(CUser::AFTERIMAGEINFO* pThis, const CUser::AFTERIMAGEINFO& arg0);
    };

public:
    enum UnnamedEnum16628
    {
        CALL_PET = 0,
        TRANSFER_FIELD = 1,
        USER_DEAD = 2,
        OPEN_WINDOWS = 3,
        POINTING_FAVORITE = 4,
        POINTING_UNFAVORITE = 5,
        STAND_LONGTIME = 6
    };

    enum MIRROR_LAYER_COUNT
    {
        MIRROR_LAYER_COUNT = 5
    };

    // Fields
public:
    ZMap<unsigned long, long, unsigned long> m_mapNewYearCardEffectMap;

protected:
    long m_nPartyHP{};

protected:
    _x_com_ptr<IWzVector2D> m_pvc;

protected:
    unsigned long m_dwCharacterId{};

protected:
    ZXString<char> m_sCharacterName;

protected:
    ZXString<char> m_sGuildName;

protected:
    long m_nJobCode{};

protected:
    uint16_t m_nGuildMarkBg{};

protected:
    unsigned char m_nGuildMarkBgColor{};

protected:
    uint16_t m_nGuildMark{};

protected:
    unsigned char m_nGuildMarkColor{};

protected:
    SecondaryStat m_secondaryStat;

protected:
    long m_nTeamForMCarnival{};

protected:
    long m_nMiniRoomType{};

protected:
    unsigned long m_dwMiniRoomSN{};

protected:
    ZXString<char> m_sMiniRoomTitle;

protected:
    int32_t m_bPrivate{};

protected:
    long m_nGameKind{};

protected:
    long m_nMaxUsers{};

protected:
    long m_nCurUsers{};

protected:
    int32_t m_bGameOn{};

protected:
    unsigned long m_nTargetID{};

protected:
    long m_nPhase{};

protected:
    unsigned long m_dwPhaseAlpha{};

protected:
    TSecType<long> m_tHitPeriodRemain;

protected:
    std::array<long, 2> _ZtlSecureTear_m_nChatBalloonType{};

protected:
    uint32_t _ZtlSecureTear_m_nChatBalloonType_CS{};

protected:
    std::array<long, 2> _ZtlSecureTear_m_nNameTagType{};

protected:
    uint32_t _ZtlSecureTear_m_nNameTagType_CS{};

protected:
    ZArray<ZRef<CPet>> m_apPet;

protected:
    long m_nPetBackgroundEffectCount{};

protected:
    ZMap<unsigned long, ZRef<CSummoned>, unsigned long> m_mSummoned;

protected:
    ZList<ZRef<CSummoned>> m_lSummoned;

protected:
    _LARGE_INTEGER m_liCoupleItemSN{};

protected:
    _LARGE_INTEGER m_liPairItemSN{};

protected:
    ZRef<AnimationState> m_pSpectrumAniState;

protected:
    long m_nLastMAType{};

protected:
    long m_nMedalItemID{};

protected:
    unsigned long m_dwDriverID{};

protected:
    unsigned long m_dwPassenserID{};

protected:
    int32_t m_bEmotionByItemOption{};

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerEffect;

protected:
    ZRef<CDragon> m_pDragon;

public:
    unsigned long m_dwMarriageCharacterID{};

public:
    unsigned long m_dwMarriagePairCharacterID{};

public:
    long m_nWeddingRingID{};

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerWeddingRingCommonEffect;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerWeddingRingPrivateEffect;

protected:
    int32_t m_bHideCombo{};

protected:
    long m_tRideVehicleLeft{};

protected:
    long m_tOakCaskLeft{};

protected:
    int32_t m_bOakCask{};

protected:
    long m_tEndBoomerangStep{};

protected:
    long m_tEndDojangBamboo{};

protected:
    long m_nChocoCount{};

protected:
    long m_nConsumeItemID{};

protected:
    ZList<ZRef<CGrenade>> m_lpGrenade;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerGauge;

protected:
    long m_nGaugePos{};

public:
    _LARGE_INTEGER m_liFriendshipItemSN{};

public:
    _LARGE_INTEGER m_liFriendshipPairItemSN{};

public:
    _x_com_ptr<IWzGr2DLayer> m_pLayerAfterimage;

public:
    _x_com_ptr<IWzGr2DLayer> m_pLayerTomb;

public:
    unsigned long m_uLayerStateCounter{};

public:
    tagPOINT m_ptRevive{};

public:
    std::array<CUser::ADDITIONALLAYER, 75> m_aAdditionalLayer{};

public:
    long m_lRescentUsedNewYearCardLayer{};

public:
    long m_nActiveEffectItemTempForDelayedLoad{};

public:
    long m_nCarryItemEffectTempForDelayedLoad{};

public:
    long m_nCurrentEffectItemID{};

public:
    int32_t m_bCurrentEffectItemFollow{};

public:
    long m_nCompletedSetItemID{};

public:
    ZArray<long> m_aCurrentEffectItemAction;

public:
    long m_nLastAction{};

public:
    ZList<CUser::AFFECTEDSKILLENTRY> m_lAffectedSkillEntry;

public:
    ZArray<ZList<_x_com_ptr<IWzGr2DLayer>>> m_lpLayerAffected;

public:
    TSecType<int> m_bShowAdminEffect;

public:
    long m_nStand{};

public:
    ZRef<CUser::AFTERIMAGEINFO> m_pAfterimageInfo;

public:
    long m_nLastJumpInputX{};

public:
    long m_nTamingMobLevel{};

public:
    long m_nTamingMobExp{};

public:
    long m_nTamingMobFatigue{};

private:
    unsigned long m_tEnergyCharge{};

private:
    uint32_t m_uWingsSoundCookie{};

private:
    CKeywordEffectManager m_KeywordEffect;

private:
    CItemEffectManager m_ItemEffect;

protected:
    long m_tStandingTime{};

protected:
    long m_tNextRestAlarmByPet{};

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerDojangBerserkEffect;

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerDojangInvincibleEffect;

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerSuddenDeathEffect;

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerFinalCutEffect;

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerBlessingArmor;

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerSwallowing;

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerMoreWildEffect;

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerMoreWildEffect0;

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerMoreWildFinishEffect;

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerMoreWildFinishEffect0;

private:
    long m_tDelayMoreWildEffect{};

private:
    int32_t m_bIsLadderOrRopeMoreWildEffect{};

private:
    _x_com_ptr<IWzGr2DLayer> m_pDoubleJumpEffect;

private:
    long m_nTeamForBattlefield{};

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerBuffRepeateEffect;

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerMagicShield;

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerFlyingWing;

private:
    long m_tStartMirror{};

private:
    std::array<_x_com_ptr<IWzGr2DLayer>, 5> m_apLayerMirror{};

private:
    int32_t m_bFlyingAssulterLand{};

public:
    int32_t m_bIsAbleToHitByUser{};

public:
    long m_nIsAbleToHitByUserReason{};

private:
    int32_t m_bRepeatEffect{};

private:
    int32_t m_bRepeatEffectRemove{};
    // Methods
public:
    CUser()
    {
    }

public:
    virtual ~CUser();

public:
    void _dtor_0();

public:
    CUser(const CUser& arg0);

public:
    void _ctor_1(const CUser& arg0);

public:
    CUser(unsigned long dwCharacterId);

public:
    void _ctor_0(unsigned long dwCharacterId);

public:
    void Init(const AvatarLook& al, int32_t bShowAdminEffect);

public:
    unsigned long GetCharacterId();

public:
    const char* GetCharacterName();

public:
    virtual unsigned char GetCharacterLevel();

public:
    virtual const SecondaryStat& GetSecondaryStat();

public:
    virtual int32_t IsLocalUser();

public:
    virtual int32_t IsPreview();

public:
    virtual int32_t IsRemoteUser();

public:
    virtual int32_t IsAdminHide();

public:
    virtual int32_t IsMovingMode();

public:
    virtual int32_t IsEvanJob();

public:
    int32_t IsDarkSight();

public:
    int32_t IsWindWalk();

public:
    int32_t IsSneak();

public:
    int32_t IsDojangInvincible();

public:
    int32_t IsCyclone();

public:
    int32_t IsDoingBoomerangStep(long nReason);

public:
    int32_t IsDoingDojangBamboo(long nReason);

public:
    int32_t IsDoingHashing();

public:
    _x_com_ptr<IWzVector2D> GetVecCtrl();

    _x_com_ptr<IWzVector2D> GetVecCtrl_0();

    _x_com_ptr<IWzVector2D> GetVecCtrl_1();

public:
    int32_t IsStand();

public:
    int32_t IsOnFoothold();

public:
    int32_t IsOnLadderOrRope();

public:
    int32_t IsSwimOrFly();

public:
    CStaticFoothold* GetFoothold();

public:
    virtual void OnAvatarModified();

public:
    virtual void SetMoveAction(long nMA, int32_t bReload);

public:
    long GetAttackActionSpeed(long nSkillID);

public:
    const long GetAuraBooster();

public:
    int32_t SetAttackAction(long nAttackAction, long nAttackSpeed, const SKILLENTRY* pSkill, long nSLV);

public:
    const CChatBalloon& GetChatBalloon();

public:
    long GetMiniRoomType();

public:
    unsigned long GetMiniRoomSN();

public:
    ZXString<char> GetMiniRoomTitle();

public:
    int32_t IsPrivate();

public:
    void GetMiniRoomBalloonRect(tagRECT& arg0);

public:
    CPet* GetActivePet(long arg0);

public:
    CPet* GetBossPet();

public:
    void SetActivePet(long nIdx, CPet* pPet);

public:
    ZRef<GW_ItemSlotPet> GetActivePetItemSlot(long nIndex);

public:
    long GetPetWearID(long arg0);

public:
    long GetActiveEffectItemID();

public:
    void MakeIncDecHPEffect(long nDelta, int32_t bGuard);

public:
    virtual void OnTemporaryStatChanged(MY_UINT128 uFlag, long tDelay, int32_t bInit);

public:
    void UpdateAffectedSkillList(long tDelay, int32_t bEnterField);

public:
    void SetConsumeItemEffect(long arg0);

    void SetConsumeItemEffect_0(long arg0)
    {
        SetConsumeItemEffect(arg0);
    }

public:
    void SetConsumeItemEffect(CInPacket& iPacket);

    void SetConsumeItemEffect_1(CInPacket& iPacket)
    {
        SetConsumeItemEffect(iPacket);
    }

public:
    void SetActiveEffectItem(long arg0);

public:
    void ShowUpgradeTombEffect(long nItemID, long nPosX, long nPosY);

public:
    void SetActivePortableChair(long nItemID);

public:
    void SetMapSpecificEffect();

public:
    tagPOINT GetRevivePos();

public:
    void OnChat(CInPacket& iPacket, int32_t bIsFromOutsideOfMap);

public:
    void OnChatFromOutside(CInPacket& arg0);

public:
    void OnADBoard(CInPacket& iPacket);

public:
    void OnEmotion(CInPacket& iPacket);

public:
    void OnEffect(CInPacket& arg0);

public:
    void ShowItemUpgradeEffect(CInPacket& iPacket);

public:
    void ShowItemHyperUpgradeEffect(CInPacket& iPacket);

public:
    void ShowItemOptionUpgradeEffect(CInPacket& iPacket);

public:
    void ShowItemReleaseEffect(CInPacket& iPacket);

public:
    void ShowItemUnreleaseEffect(CInPacket& iPacket);

public:
    void OnMiniRoomBalloon(CInPacket& iPacket);

public:
    void OnPetPacket(long nType, CInPacket& iPacket);

public:
    void OnShowPQReward(CInPacket& iPacket);

public:
    void OnRandomEmotion(CInPacket& iPacket);

public:
    virtual long OnPetActivated(CInPacket& arg0);

public:
    virtual long PetInterActWithUserAction(long nUserAction, long nPetIndex);

public:
    virtual void OnPetEvol(CInPacket& iPacket);

public:
    void AddSummonedList(ZRef<CSummoned> pSummoned);

public:
    int32_t OnSummonedRemoved(unsigned long dwSummonedID, CInPacket& iPacket);

public:
    void OnSummonedMove(CInPacket& iPacket);

public:
    void OnSummonedAttack(CInPacket& iPacket);

public:
    void OnSummonedSkill(CInPacket& iPacket);

public:
    void OnSummonedHit(CInPacket& iPacket);

public:
    ZRef<CSummoned> GetSummoned(long nSkillID);

public:
    ZRef<CSummoned> GetSummonedByID(long dwSummonedID);

public:
    void OnDragonPacket(long nType, CInPacket& iPacket);

public:
    void OnHitByUser(CInPacket& iPacket);

public:
    void OnSetPhase(CInPacket& iPacket);

public:
    void OnTeslaTriangle(CInPacket& iPacket);

public:
    void OnFollowCharacter(CInPacket& iPacket);

public:
    void OnPassiveMove(CInPacket& iPacket);

public:
    void OnFollowCharacterFailed(CInPacket& arg0);

public:
    long FixedPosTo(unsigned long dwCharID, long nDX, long nDY);

public:
    void SetDriverID(unsigned long nTargetID);

public:
    unsigned long GetDriverID();

public:
    int32_t IsFollow();

public:
    void SetPassenserID(unsigned long nTargetID);

public:
    int32_t GetPassenserID();

public:
    void ShowRecoverUpgradeCountEffect(CInPacket& iPacket);

public:
    virtual void Update();

public:
    virtual void OnSetDead(int32_t bOnInit);

public:
    virtual void OnRevive();

public:
    int32_t SetCoupleItemEffect(long nType, CUser* pPairUser, long nItemID);

public:
    int32_t IsCoupleItem(const _LARGE_INTEGER& arg0);

public:
    const _LARGE_INTEGER& GetCoupleItemSN();

public:
    void SetWeddingRingEffect(long nType, CUser* pPairUser, long nRingID);

public:
    int32_t IsMarriageCharacter(const unsigned long& arg0);

public:
    const unsigned long& GetMarriageCharacterID();

public:
    int32_t SetFriendShipItemEffect(long nType, CUser* pPairUser, long nItemID);

public:
    int32_t IsFriendShipItem(const _LARGE_INTEGER& arg0);

public:
    const _LARGE_INTEGER& GetFriendShipItemSN();

public:
    int32_t SetNewYearCardEffect(long nType, CUser* pPairUser, unsigned long dwSN, long nItemID);

public:
    long GetLocalUserLevel();

public:
    int32_t SetCoupleChairEffect(long nType, CUser* pPairUser, long nItemID);

public:
    long GetHitPeriodRemain();

public:
    void SetMorphed(unsigned long dwMorphTemplateID, int32_t bOnCreate);

public:
    void SetGhostState(long nGhostIndex, int32_t bOnCreate);

public:
    int32_t IsTamingMobTired();

public:
    void SetTeamForMCarnival(long arg0);

public:
    ZXString<char> GetTeamNameForMCarnival();

public:
    long GetTeamForMCarnival();

public:
    long GetTeamForPartyRaid();

public:
    ZXString<char> GetTeamNameForPartyRaid();

public:
    long GetPhase();

public:
    void SetPhase(long arg0);

public:
    unsigned long GetPhaseAlpha();

public:
    int32_t IsSamePhaseWithLocalUser();

public:
    virtual void GetUpFromPortableChair(int32_t bOnInit);

public:
    void ShowGauge(int32_t bOnInit);

public:
    void DrawGauge(long arg0);

public:
    void DrawGauge();

public:
    void ShowHPTag(int32_t bOnInit);

public:
    void DrawHPTag(long arg0, long arg1);

public:
    long GetPartyHP();

public:
    void DrawNameTags();

public:
    unsigned long GetTargetID();

public:
    void SetTargetID(unsigned long nTargetID);

public:
    virtual long GetType();

public:
    virtual long OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl* pvc);

public:
    virtual void OnLayerZChanged(const CVecCtrl* pvc);

public:
    virtual const ZRef<CAttrShoe> GetShoeAttr();

public:
    virtual const tagPOINT GetPos();

public:
    virtual const tagPOINT GetPosPrev();

public:
    virtual long GetZMass();

public:
    long GetLastJumpInputX() const;

public:
    void SetLastJumpInputX(long arg0);

protected:
    long __fastcall _ZtlSecureGet_m_nChatBalloonType() const;

protected:
    long __fastcall _ZtlSecurePut_m_nChatBalloonType(long arg0);

protected:
    long __fastcall _ZtlSecureGet_m_nNameTagType() const;

protected:
    long __fastcall _ZtlSecurePut_m_nNameTagType(long arg0);

public:
    ZRef<CDragon> GetDragon();

protected:
    void RegisterSerialBullet(long nSkillID, ATTACKINFO& a, const tagPOINT& pt0, const CMob* pPrevMob,
                              unsigned long tCur, unsigned long& tPrevDelay, const Ztl_bstr_t& sBulletEffectUOL);

public:
    CUser::ADDITIONALLAYER* GetAdditionalLayer(long nType);

public:
    CUser::ADDITIONALLAYER* RemoveAdditionalLayer(long nType);

public:
    CUser::ADDITIONALLAYER* RetrieveNewYearCardAdditionalLayer(unsigned long dwSN);

public:
    void UpdateAdditionalLayer();

public:
    int32_t LoadLayer(Ztl_bstr_t bsUOL, int32_t bLeft, USERLAYER& l, long* pnRepeatStartIndex);

public:
    void ShiftAffectedSkillAnimation(int32_t bForced);

public:
    virtual void PrepareActionLayer(long nActionSpeed, long nWalkSpeed, int32_t bKeyDown);

public:
    void PrepareShadowPartnerActionLayer();

public:
    void PrepareMirrorActionLayer();

public:
    void ShowAffectedSkillAni(long tCur);


    CVecCtrlUser* GetVecCtrlUser();

public:
    void ShowSkillEffect(const SKILLENTRY* arg0, long arg1, long arg2, int32_t arg3, long arg4, tagPOINT* arg5);

public:
    void ShowSkillAffected(const SKILLENTRY* pSkill, long nSLV, int32_t bSpecial, long nSelect);

public:
    void ShowSkillSpecialEffect(const SKILLENTRY* pSkill, long nDelayRate, CGrenade* pGrenade, long nSLV,
                                long nTimeBombX, long nTimeBombY);

public:
    void ShowSkillPrepare(const SKILLENTRY* pSkill, long nActionSpeed, int32_t bKeyDown, int32_t bEnd);

public:
    void ShowMorphEffect(int32_t bOnLadderOrRope, int32_t bSound);

public:
    void ShowRideVehicleEffect(long nVehicleID);

public:
    void ShowOakCaskEffect();

public:
    void SetLayerZ();

public:
    void RegisterNextBlink();

public:
    void SetAbilityEquip();

public:
    void SetSetItemEffect();

public:
    void SetSetItemBackground(int32_t bTeleport, int32_t bSetPetBackgroundEffect);

public:
    void SetCarryItemEffect(long nCount);

public:
    void ShowEffectItem(long nItemID);

public:
    void ShowFollowEffectItem(long arg0);

public:
    void ShowEffectRocketBooster(const SKILLENTRY* pSkill, long nSLV);

public:
    void ShowEffectRocketBoosterAttack(const SKILLENTRY* pSkill, long nSLV);

public:
    void ShowEffectSiegeStart(const SKILLENTRY* pSkill, long nSLV, int32_t bSpecial);

public:
    void ShowEffectSiegeAttack(const SKILLENTRY* pSkill, long nSLV);

public:
    void ShowEffectSiegeEnd(const SKILLENTRY* pSkill, long nSLV, int32_t bSpecial);

public:
    void ShowEffectFlameThrowerEnd(const SKILLENTRY* pSkill, long nSLV);

public:
    void SetAdminEffect();

public:
    void SetIsAdminEffectAvaliable();

public:
    void RegisterAfterimage(long tStart, int32_t bLeft, long nAction, Ztl_bstr_t sAfterimageUOL, long nWeaponItemID,
                            long nSubWeaponItemID, long nChargeSkillID);

public:
    virtual void ThrowGrenade(long pGrenade, long nAngle, long nImpactX, tagPOINT nImpactY);

public:
    static long __cdecl GetShootDelay(const SKILLENTRY* pSkill, long nDefault);

public:
    static long __cdecl GetBulletDelay(long nBulletItemID, long nSkillID, long nDefault);

public:
    static Ztl_bstr_t __cdecl GetAfterimageUOL(SKILLENTRY* pSkill, long nSLV, Ztl_bstr_t sName, long nMastery,
                                               long nCharLevel);

public:
    void PetAutoSpeaking(long nEvent);

public:
    long GetDamageDelay(long nSkillID, long nDamageIdx, long nDamagePerMob);

public:
    virtual long GetJobCode();

public:
    void ShowKeyowrdEffect(const char* szChat);

private:
    void UpdateKeywordEffects();

public:
    void LoadDojangBerserkEffect();

public:
    void RemoveDojangBerserkEffect();

public:
    void LoadDojangInvincibleEffect();

public:
    void RemoveDojangInvincibleEffect();

public:
    void LoadSuddenDeathEffect();

public:
    void RemoveSuddenDeathEffect();

public:
    void LoadFinalCutEffect();

public:
    void RemoveFinalCutEffect();

public:
    void LoadBlessingArmor();

public:
    void RemoveBlessingArmor();

public:
    void LoadSwallowingEffect();

public:
    void RemoveSwallowingEffect();

public:
    void UpdateMoreWildEffect(long tCur);

public:
    void LoadMoreWildEffect(long tDelay, int32_t bForced);

public:
    void RemoveMoreWildEffect();

public:
    void LoadMoreWildFinishEffect();

public:
    void RemoveMoreWildFinishEffect();

public:
    void LoadDarkForceEffect();

public:
    void UpdateAr01Effect();

public:
    long GetTeamForBattlefield() const;

public:
    void SetTeamForBattlefield(long arg0);

private:
    _x_com_ptr<IWzGr2DLayer> LoadSkillRepeatEffect(long nSkillID, _x_com_ptr<IWzGr2DLayer> pOverlay);

public:
    long GetDashingSkill();

private:
    void _LoadItemRepeatEffect(long nItemEffectID);

private:
    void _RemoveItemRepeatEffect();

public:
    void LoadMagicShield();

public:
    void RemoveMagicShield();

private:
    void UpdateFlyingWingEffect();

private:
    _x_com_ptr<IWzGr2DLayer> GetMirrorSrcLayer(long nIdx);

public:
    void TryDoingCycloneAfter();

public:
    tagPOINT GetRidingMechanicBulletPos(tagPOINT pt, long nSkillID, long nBulletSequence);

public:
    int32_t IsFanShapeShoot(long nSkillID);

public:
    int32_t IsAbleToHitByUser(long nReason);

public:
    void SetRepeatEffectRemove(int32_t bOnInit);

public:
    int32_t SetRepeatEffect(int32_t arg0);

public:
    int32_t IsRepeatEffect();

    CLASS_RTTI_(CUser, CLife);

public:
    CUser& operator=(CUser& arg0);

public:
    static CUser& _op_assign_230(CUser* pThis, CUser& arg0);
};

STATIC_ASSERT_SIZE(CUser, 15040);

class CGrenade : public IVecCtrlOwner, public ZRefCounted
{
    // Nested
    // Fields
protected:
    CUser* m_pOwner{};

protected:
    _x_com_ptr<IWzVector2D> m_pvc;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerAni;

private:
    ZRef<CAttrShoe> m_pAttrShoe;

private:
    tagPOINT m_ptPos{};

private:
    tagPOINT m_ptPosPrev{};

private:
    tagRECT m_rcPet{};

private:
    long m_nSkillID{};

private:
    long m_nSLV{};

private:
    long m_tThrowDelayTime{};

private:
    long m_tLimitTime{};

private:
    long m_nCollisionOffSetX{};

private:
    long m_nCollisionOffSetY{};
    // Methods
public:
    virtual ~CGrenade();

public:
    void _dtor_0();

public:
    CGrenade(const CGrenade& arg0);

public:
    void _ctor_1(const CGrenade& arg0);

public:
    CGrenade();

public:
    void _ctor_0();

public:
    void Init(long nSkillID, long nSLV, CUser* pOwner, int32_t bFlip, tagPOINT pt, long vx, long vy,
              int32_t bGravityFree, long tThrowDelayTime, long tLimitTime, long nBallAngle);

public:
    int32_t Update(unsigned long dwMobID);

public:
    void PrepareAnimationLayer(int32_t bFlip, long nBallAngle);

public:
    _x_com_ptr<IWzVector2D> GetVecCtrl();

public:
    void SetDragValue(long nX, long nY);

public:
    virtual long GetType();

public:
    virtual long OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl* pvc);

public:
    virtual void OnLayerZChanged(const CVecCtrl* pvc);

public:
    virtual const ZRef<CAttrShoe> GetShoeAttr();

public:
    virtual const tagPOINT GetPos();

public:
    virtual const tagPOINT GetPosPrev();

public:
    virtual long GetZMass();

public:
    long GetSkillID();

private:
    void BombAndAttackMob();

private:
    void JustBomb();

private:
    int32_t SendTimeBombInfo(unsigned long dwMobID);

public:
    CGrenade& operator=(const CGrenade& arg0);

public:
    static CGrenade& _op_assign_19(CGrenade* pThis, const CGrenade& arg0);
};

STATIC_ASSERT_SIZE(CGrenade, 92);
