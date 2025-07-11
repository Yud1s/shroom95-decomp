#pragma once

#include "base.h"
#include "pcom/wz.h"

struct CONSTANTS
{
    // Nested
    // Fields
public:
    double dWalkForce{};

public:
    double dWalkSpeed{};

public:
    double dWalkDrag{};

public:
    double dSlipForce{};

public:
    double dSlipSpeed{};

public:
    double dFloatDrag1{};

public:
    double dFloatDrag2{};

public:
    double dFloatCoefficient{};

public:
    double dSwimForce{};

public:
    double dSwimSpeed{};

public:
    double dFlyForce{};

public:
    double dFlySpeed{};

public:
    double dGravityAcc{};

public:
    double dFallSpeed{};

public:
    double dJumpSpeed{};

public:
    double dMaxFriction{};

public:
    double dMinFriction{};

public:
    double dSwimSpeedDec{};

public:
    double dFlyJumpDec{};
    // Methods
};
STATIC_ASSERT_SIZE(CONSTANTS, 152);

struct ITEMNAME
{
    // Nested
    // Fields
public:
    ZXString<char> sItemName;

public:
    long nItemID{};
    // Methods
};
STATIC_ASSERT_SIZE(ITEMNAME, 8);

struct DAYBYDAYEVENT
{
    // Nested
    // Fields
public:
    long nType{};

public:
    long nParam{};

public:
    long nParam2{};

public:
    _FILETIME ftStart;

public:
    _FILETIME ftEnd;

public:
    int32_t bStart{};
    // Methods
};
STATIC_ASSERT_SIZE(DAYBYDAYEVENT, 32);
struct TRADEINFO
{
    // Nested
    // Fields
public:
    long nRemoveCount{};

public:
    _LARGE_INTEGER *aRemoveSN{};

public:
    long nAddCount{};

public:
    _LARGE_INTEGER *aAddSN{};
    // Methods
};
STATIC_ASSERT_SIZE(TRADEINFO, 16);

struct PlayTimeRecord
{
    // Nested
    // Fields
public:
    _FILETIME ftLastUpdated{};

public:
    unsigned char bDone{};

public:
    uint16_t usPlayTime{};

public:
    uint16_t usDoneCount{};
    // Methods
};
// TODO STATIC_ASSERT_SIZE(PlayTimeRecord, 13);

struct SCRIPTINFO
{ /* Size=0xc */
    /* 0x0000 */ public:
    ZXString<char> sScript;
    /* 0x0004 */ public:
    int32_t tStartDate{};
    /* 0x0008 */ public:
    int32_t tEndDate{};

    void Decode()
    {
    }

    /*public:
        void Encode(COutPacket &)
        {
        }

    public:
        void Decode(CInPacket &)
        {
        }*/
};

STATIC_ASSERT_SIZE(SCRIPTINFO, 0xc);

struct FACELOOKCODES
{
    // Nested
    // Fields
public:
    long nFace{};

public:
    long nEmotion{};

public:
    long nAcc{};
    // Methods

    bool operator==(const FACELOOKCODES &rhs) const
    {
        return nFace == rhs.nFace && nEmotion == rhs.nEmotion && nAcc == rhs.nAcc;
    }
};
STATIC_ASSERT_SIZE(FACELOOKCODES, 12);

struct DamageModifiedSubInfo
{
    // Nested
    // Fields
public:
    long nType{};

public:
    long nArg1{};

public:
    long nArg2{};

public:
    long nArg3{};

public:
    long nArg4{};
};
STATIC_ASSERT_SIZE(DamageModifiedSubInfo, 20);

struct DamageModifiedInfo
{
    // Nested
    // Fields
public:
    DamageModifiedSubInfo pAttackInfo;

public:
    DamageModifiedSubInfo pDefendInfo;
};
STATIC_ASSERT_SIZE(DamageModifiedInfo, 40);

STATIC_ASSERT_SIZE(_QualityOfService, 72);
struct BasicStatRateOption
{
    // Nested
    // Fields
public:
    long nSTRr{};

public:
    long nDEXr{};

public:
    long nINTr{};

public:
    long nLUKr{};

public:
    long nMHPr{};

public:
    long nMMPr{};
};
STATIC_ASSERT_SIZE(BasicStatRateOption, 24);

struct ITEMSKILLLEVELDATA
{
    // Nested
    // Fields
public:
    long nConMP{};

public:
    long tInterval{};

public:
    long tDuration{};

public:
    long nProp{};

public:
    long nX{};

public:
    long nY{};

public:
    Ztl_bstr_t sMobUOL;
    // Methods
};
STATIC_ASSERT_SIZE(ITEMSKILLLEVELDATA, 28);

struct ITEMSKILLENTRY
{
    // Nested
    // Fields
public:
    long nSkillID{};

public:
    ZArray<ZRef<ITEMSKILLLEVELDATA>> apLevelData;
    // Methods
    //	public:   long GetMaxLevel();
};
STATIC_ASSERT_SIZE(ITEMSKILLENTRY, 8);

struct ITEMOPTIONSKILLLEVELDATA
{
    // Nested
    // Fields
public:
    long nProb{};

public:
    long nMissProb{};

public:
    long nDuration{};

public:
    long nDamage{};

public:
    long nSpeed{};

public:
    long nPos{};

public:
    long nRepeat{};

public:
    Ztl_bstr_t sMobUOL;
    // Methods
};
STATIC_ASSERT_SIZE(ITEMOPTIONSKILLLEVELDATA, 32);

struct BFSKILLENTRY
{
    // Nested
    // Fields
public:
    long nMobSkillID{};

public:
    long nSLV{};

public:
    long nUserCount{};

public:
    int32_t bAllMap{};

public:
    ZXString<char> sDesc;

public:
    long nOwnerTeam{};

public:
    ZXString<char> sEffectPath;
    // Methods
};
STATIC_ASSERT_SIZE(BFSKILLENTRY, 28);
struct MODQUESTTIME
{
    // Nested
    // Fields
public:
    long nQuestID{};

public:
    _FILETIME ftStart;

public:
    _FILETIME ftEnd;
    // Methods
};
STATIC_ASSERT_SIZE(MODQUESTTIME, 20);
struct ItemInfo
{
    // Nested
    // Fields
public:
    long nItemID{};

public:
    long nCount{};

public:
    int32_t bSecret{};
    // Methods
};

struct PMD
{
    // Nested
    // Fields
public:
    int32_t mdisp{};

public:
    int32_t pdisp{};

public:
    int32_t vdisp{};
    // Methods
};
STATIC_ASSERT_SIZE(PMD, 12);
struct SkillInfo
{
    // Nested
    // Fields
public:
    long nSkillID{};

public:
    long nLevel{};

public:
    int32_t bAcquire{};
    // Methods
};
STATIC_ASSERT_SIZE(SkillInfo, 12);

struct SocketOptionLevelData
{
    // Nested
    // Fields
    // Methods
    // TODO public:   int32_t LoadLevelData(long arg0, _x_com_ptr<IWzProperty> arg1, long arg2);
};
STATIC_ASSERT_SIZE(SocketOptionLevelData, 1);

struct SocketOptionInfo
{
    // Nested
    // Fields
public:
    long nSocketOptionID{};

public:
    ZArray<SocketOptionLevelData> aLevelData;
    // Methods
};

struct ITEMOPTIONSKILLENTRY
{
    // Nested
    // Fields
public:
    long nSkillID{};

public:
    ZArray<ZRef<ITEMOPTIONSKILLLEVELDATA>> apLevelData;
    // Methods
    // TODO	public:   long GetMaxLevel();
};
STATIC_ASSERT_SIZE(ITEMOPTIONSKILLENTRY, 8);

struct MobSkillInfo : public ZRefCounted
{
    // Nested
    // Fields
public:
    long nSkillID{};

public:
    long nSLV{};

public:
    long nAction{};

public:
    long tEffectAfter{};
    // Methods
};
STATIC_ASSERT_SIZE(MobSkillInfo, 28);

struct MobSpeakCondition : public ZRefCounted
{
    // Nested
    // Fields
public:
    long nQuestID{};

public:
    long nState{};

public:
    long nPetID{};
    // Methods
public:
    virtual ~MobSpeakCondition()
    {
    }
};
STATIC_ASSERT_SIZE(MobSpeakCondition, 24);
struct CAKEPIEEVENT_ITEMINFO : public ZRefCounted
{
    // Nested
    // Fields
public:
    long nFieldID{};

public:
    long nItemID{};

public:
    long nPercentage{};

public:
    long nEventStatus{};

public:
    long nWinnerTeam{};
    // Methods
public:
    virtual ~CAKEPIEEVENT_ITEMINFO()
    {
    }
};
STATIC_ASSERT_SIZE(CAKEPIEEVENT_ITEMINFO, 32);

struct StatPair
{
    // Nested
    // Fields
public:
    unsigned long dwStatFlag{};

public:
    long nValue{};
    // Methods

    StatPair()
    {
    }
};
STATIC_ASSERT_SIZE(StatPair, 8);

struct RAINBOWWEEKEVENT
{
    // Nested
    // Fields
public:
    long nType{};

public:
    long nExpRate{};

public:
    ZList<long> lMobIDs;

public:
    ZXString<char> sChatMsg;

public:
    _FILETIME ftStart{};

public:
    _FILETIME ftEnd{};

public:
    int32_t bStart{};
    // Methods
};
STATIC_ASSERT_SIZE(RAINBOWWEEKEVENT, 52);
struct AdditionPsd
{
    // Nested
    // Fields
public:
    long nCr{};

public:
    long nCDMin{};

public:
    long nAr{};

public:
    long nDIPr{};

public:
    long nPDamr{};

public:
    long nMDamr{};

public:
    long nIMPr{};
    // Methods
public:
    AdditionPsd()
    {
    }
};
STATIC_ASSERT_SIZE(AdditionPsd, 28);

class CLadderOrRope
{
    // Nested
    // Fields
public:
    unsigned long dwSN{};

public:
    int32_t bLadder{};

public:
    int32_t bUpperFoothold{};

public:
    long x{};

public:
    long y1{};

public:
    long y2{};

public:
    long nPage{};
    // Methods
};
STATIC_ASSERT_SIZE(CLadderOrRope, 28);

static CLadderOrRope *_ZtlSecureFuse_CLadderOrRope_ptr()
{
    // TODO
    return nullptr;
}


struct TzArea
{ /* Size=0x40 */
    /* 0x0000 */ public:
    int32_t nStart{};
    /* 0x0004 */ public:
    int32_t nAreaCount{};
    /* 0x0008 */ public:
    int32_t nAttackCount{};
    /* 0x000c */ public:
    int32_t nWidth{};
    /* 0x0010 */ public:
    SECRECT rcAttack;
};

struct TzRange
{ /* Size=0xc */
    /* 0x0000 */ public:
    int32_t x{};
    /* 0x0004 */ public:
    int32_t y{};
    /* 0x0008 */ public:
    int32_t nRange{};
};

struct SummonedAttackInfo : public ZRefCounted
{
    // Nested
public:
    enum AT_
    {
        AT_RANGE = 0,
        AT_SHOOT = 1,
        AT_PIERCE = 2
    };
    // Fields
public:
    long nType{};

public:
    int32_t bInactive{};

public:
    long nConMP{};

public:
    int32_t bMagicAttack{};

public:
    long nMobCount{};

public:
    long nAttackCount{};

public:
    int32_t bJumpAttack{};

public:
    TzRange tzRange;

public:
    SECRECT rcRange;

public:
    long tAttackAfter{};

public:
    long nPriorBuffID{};

public:
    Ztl_bstr_t sEffect;

public:
    Ztl_bstr_t sBall;

public:
    long tEffectAfter{};

public:
    long nBulletSpeed{};

public:
    int32_t bRangeAttack{};
    // Methods
public:
    virtual ~SummonedAttackInfo()
    {
    }
};
STATIC_ASSERT_SIZE(SummonedAttackInfo, 128);

template <typename T>
class TAnimation
{
    // Nested
    // Fields
private:
    ZList<T> m_lList;
    // Methods
    /*
    TODO
    public:    ~TAnimation<CAnimationDisplayer::ONETIMEINFO>();
        public: static void _dtor_0(TAnimation<CAnimationDisplayer::ONETIMEINFO>* pThis);
    public:    TAnimation<CAnimationDisplayer::ONETIMEINFO>(const TAnimation<CAnimationDisplayer::ONETIMEINFO>& arg0);
        public: static void _ctor_1(TAnimation<CAnimationDisplayer::ONETIMEINFO>* pThis, const TAnimation<CAnimationDisplayer::ONETIMEINFO>& arg0);
    public:    TAnimation<CAnimationDisplayer::ONETIMEINFO>();
        public: static void _ctor_0(TAnimation<CAnimationDisplayer::ONETIMEINFO>* pThis);
    public:   void Update(long tCur);
        public:   CAnimationDisplayer::ONETIMEINFO& Add();
        public:   void RemoveAll();
        public:   int32_t IsRunning();
        public:   ZList<CAnimationDisplayer::ONETIMEINFO>& GetList();
        public:   TAnimation<CAnimationDisplayer::ONETIMEINFO>& operator=(const TAnimation<CAnimationDisplayer::ONETIMEINFO>& arg0);
        public: static TAnimation<CAnimationDisplayer::ONETIMEINFO>& _op_assign_8(TAnimation<CAnimationDisplayer::ONETIMEINFO>* pThis, const TAnimation<CAnimationDisplayer::ONETIMEINFO>& arg0);*/
};

struct AnimationState
{
    // Nested
    // Fields
public:
    int32_t bTerminate{};

public:
    int32_t bPause{};

public:
    int32_t bFlip{};
    // Methods
};
STATIC_ASSERT_SIZE(AnimationState, 12);

struct CS_BEST
{
    // Nested
    // Fields
public:
    long nCategory{};

public:
    long nGender{};

public:
    long nCommoditySN{};
    // Methods
};
STATIC_ASSERT_SIZE(CS_BEST, 12);

struct OneADayInfo
{
    // Nested
    // Fields
public:
    long nDate{};

public:
    long nSN{};

public:
    long nOriginalSN{};
};
STATIC_ASSERT_SIZE(OneADayInfo, 12);

struct WEBCOOKIE
{
    // Nested
    // Fields
public:
    std::array<char, 4096> szCookie{};

public:
    std::array<char, 4096> szReserved{};
    // Methods
};
STATIC_ASSERT_SIZE(WEBCOOKIE, 8192);



enum PartyRaidTeam
{
    PARTY_RAID_TEAM_RED = 0,
    PARTY_RAID_TEAM_BLUE = 1,
    PARTY_RAID_TEAM_NONE = 0xff,
    PARTY_RAID_TEAM_MAX = 2 // TODO same as PartyRaidTeam?
};

enum _anon_Align
{
    _anon_Align_Left = 0,
    _anon_Align_Center = 1,
    _anon_Align_Right = 2
};
struct ITCAuctionProperty
{
    // Nested
    // Fields
public:
    short nBidCount{};

public:
    short nBidRange{};

public:
    long nBidPrice{};
    // Methods
};
STATIC_ASSERT_SIZE(ITCAuctionProperty, 8);

struct FLYORIGIN
{
    // Nested
    // Fields
public:
    IWzVector2D *pVec{};

public:
    double rx{};

public:
    double ry{};

public:
    double vx{};

public:
    double vy{};

public:
    long tBegin{};
    // Methods
};
STATIC_ASSERT_OFFSET_OF(FLYORIGIN, rx, 8);
STATIC_ASSERT_SIZE(FLYORIGIN, 48);

struct RECOMMENDWORLDMSG
{
    // Nested
    // Fields
public:
    long nWorldID{};

public:
    ZXString<char> sMessage;
    // Methods
};
STATIC_ASSERT_SIZE(RECOMMENDWORLDMSG, 8);

struct MonsterBookCard
{
    // Nested
    enum CARD_
    {
        CARD_ID_BASE = 2380000,
        CARD_ID_OFFSET = 1000,
        CARD_MAX_NO = 5
    };
    enum GRADE_
    {
        GRADE_8 = 0,
        GRADE_7 = 1,
        GRADE_6 = 2,
        GRADE_5 = 3,
        GRADE_4 = 4,
        GRADE_3 = 5,
        GRADE_2 = 6,
        GRADE_1 = 7,
        GRADE_S = 8,
        GRADE_NO = 9
    };
    // Fields
public:
    long nCardID{};

public:
    long nMobID{};

public:
    long nGrade{};

public:
    long nIdx{};

public:
    _x_com_ptr<IWzCanvas> pIcon;
    // Methods
    // TODO public:  static long __cdecl GetCardGrade(long arg0);
};

struct AFFECTEDAREA
{
    // Nested
    // Fields
public:
    unsigned long dwID{};

public:
    long nType{};

public:
    unsigned long dwOwnerID{};

public:
    long nSkillID{};

public:
    long nSLV{};

public:
    long tStart{};

public:
    long tEnd{};

public:
    int32_t bEnd{};

public:
    tagRECT rcArea{};

public:
    long nElemAttr{};

public:
    long nDamage{};

public:
    int32_t bLeftToDraw{};

public:
    long nFogState{};

public:
    ZArray<_x_com_ptr<IWzGr2DLayer>> apLayer;

public:
    __POSITION *posList{};

public:
    long nPhase{};
};
STATIC_ASSERT_SIZE(AFFECTEDAREA, 76);

struct SOFTKEYBOARDPARAM
{
    // Nested
    // Fields
public:
    long nMinLength{};

public:
    long nMaxLength{};

public:
    long nKeyboardType{};
};
STATIC_ASSERT_SIZE(SOFTKEYBOARDPARAM, 12);

struct KEYMAP
{
    // Nested
    // Fields
public:
    unsigned char nKey{};

public:
    unsigned char nState{};
    // Methods
};
STATIC_ASSERT_SIZE(KEYMAP, 2);

struct __tag_FILE_IDX
{ /* Size=0x8 */
    /* 0x0000 */ public:
    ZXString<char> sFileName;
    /* 0x0004 */ public:
    uint32_t iFrequence{};
};
STATIC_ASSERT_SIZE(__tag_FILE_IDX, 8);

template <class T>
class ClassLevelLockable
{
public:
    static inline int volatile ms_nLocker = 0;

public:
    class ClassLevelLock
    {
    public:
        // TODO
        ClassLevelLock()
        {
            this->Lock();
        }

    public:
        ~ClassLevelLock()
        {
            this->Unlock();
        }

    private:
        void Lock()
        {
        }

    private:
        void Unlock()
        {
        }
    };
};

class CWndGuildBoard : public TSingleton<CWndGuildBoard>
{
    // TODO
};

enum FONT_TYPE : uint32_t
{
    FONT_BASIC_WHITE = 0x0,
    FONT_BASIC_BLACK = 0x1,
    FONT_BASIC_GRAY = 0x2,
    FONT_BASIC_YELLOW = 0x3,
    FONT_BASIC_BLUE = 0x4,
    FONT_BASIC_SKYBLUE = 0x5,
    FONT_BASIC_RED = 0x6,
    FONT_BASIC_LIGHTGREEN = 0x7,
    FONT_BASIC_PINK = 0x8,
    FONT_BASIC_ORANGE = 0x9,
    FONT_BASIC_REDVIOLET = 0xa,
    FONT_BASIC_DIMBLUE = 0xb,
    FONT_BASIC_DIMRED = 0xc,
    FONT_BASIC_DIMGREEN = 0xd,
    FONT_BASIC_BROWN = 0xe,
    FONT_BASIC_LIGHTVIOLET = 0xf,
    FONT_BASIC_CYAN = 0x10,
    FONT_BASIC_LIGHTGRAY = 0x11,
    FONT_BASIC_DARKGRAY = 0x12,
    FONT_BASIC_DIMGRAY = 0x13,
    FONT_SMALL_BLACK = 0x14,
    FONT_SMALL_BLACK_B = 0x15,
    FONT_SMALL_WHITE = 0x16,
    FONT_SMALL_WHITE_B = 0x17,
    FONT_SMALL_GRAY = 0x18,
    FONT_SMALL_GRAY_B = 0x19,
    FONT_SMALL_WHITEGRAY = 0x1a,
    FONT_SMALL_WHITEGRAY_B = 0x1b,
    FONT_SMALL_BLUE = 0x1c,
    FONT_SMALL_BLUE_B = 0x1d,
    FONT_SMALL_SKYBLUE = 0x1e,
    FONT_SMALL_SKYBLUE_B = 0x1f,
    FONT_SMALL_DIMBLUE = 0x20,
    FONT_SMALL_DIMBLUE_B = 0x21,
    FONT_SMALL_RED = 0x22,
    FONT_SMALL_RED_B = 0x23,
    FONT_SMALL_DIMRED = 0x24,
    FONT_SMALL_DIMRED_B = 0x25,
    FONT_SMALL_REDVIOLET = 0x26,
    FONT_SMALL_REDVIOLET_B = 0x27,
    FONT_SMALL_ORANGE = 0x28,
    FONT_SMALL_ORANGE_B = 0x29,
    FONT_SMALL_DIMGREEN = 0x2a,
    FONT_SMALL_DIMGREEN_B = 0x2b,
    FONT_SMALL_YELLOW = 0x2c,
    FONT_SMALL_YELLOW_B = 0x2d,
    FONT_SMALL_LIGHTGREEN = 0x2e,
    FONT_SMALL_LIGHTGREEN_B = 0x2f,
    FONT_SMALL_DARKGRAY = 0x30,
    FONT_DLG_NORMAL = 0x31,
    FONT_DLG_BACK = 0x32,
    FONT_DLG_OUTLINE = 0x33,
    FONT_DLG_NORMAL_FIXED_W = 0x34,
    FONT_DLG_BACK_FIXED_W = 0x35,
    FONT_DLG_OUTLINE_FIXED_W = 0x36,
    FONT_NO_WHITE = 0x37,
    FONT_NO_BLACK = 0x38,
    FONT_NO_BLACK_SMALL = 0x39,
    FONT_NO_GRAY = 0x3a,
    FONT_NO_YELLOW = 0x3b,
    FONT_NO_WHITE_BA = 0x3c,
    FONT_NO_BLACK_BA = 0x3d,
    FONT_NO_BLUE = 0x3e,
    FONT_NO_RED = 0x3f,
    FONT_NO_BLUE_B = 0x40,
    FONT_NO_RED_B = 0x41,
    FONT_BIG_WHITE = 0x42,
    FONT_DISABLED_GRAY = 0x43,
    FONT_SMALL_DISABLED_GRAY = 0x44,
    FONT_BASIC_BLACK_B = 0x45,
    FONT_BASIC_BLUE_B = 0x46,
    FONT_BASIC_RED_B = 0x47,
    FONT_BASIC_BROWN_B = 0x48,
    FONT_SALE_RED = 0x49,
    FONT_SALE_DARKRED = 0x4a,
    FONT_STAN_WHITE = 0x4b,
    FONT_STAN_BLACK = 0x4c,
    FONT_STAN_BLUE = 0x4d,
    FONT_STAN_RED = 0x4e,
    FONT_STAN_ORANGE = 0x4f,
    FONT_STAN_WHITE_BA = 0x50,
    FONT_STAN_BLACK_BA = 0x51,
    FONT_PERSONALSHOP_1 = 0x52,
    FONT_PERSONALSHOP_2 = 0x53,
    FONT_PERSONALSHOP_3 = 0x54,
    FONT_PERSONALSHOP_4 = 0x55,
    FONT_PERSONALSHOP_5 = 0x56,
    FONT_PERSONALSHOP_6 = 0x57,
    FONT_PERSONALSHOP_1_s = 0x58,
    FONT_PERSONALSHOP_2_s = 0x59,
    FONT_PERSONALSHOP_3_s = 0x5a,
    FONT_PERSONALSHOP_4_s = 0x5b,
    FONT_PERSONALSHOP_5_s = 0x5c,
    FONT_PERSONALSHOP_6_s = 0x5d,
    FONT_DODOOMCHE_11_WHITE = 0x5e,
    FONT_DODOOMCHE_11_BLACK = 0x5f,
    FONT_DODOOMCHE_11_GRAY90 = 0x60,
    FONT_BASIC_BLACK_BIG = 0x61,
    FONT_NO = 0x62
};

enum SE_TYPE : uint32_t
{
    SE_MOB_DAMAGE = 0x0,
    SE_MOB_DIE = 0x1,
    SE_MOB_ATTACK1 = 0x2,
    SE_MOB_ATTACK2 = 0x3,
    SE_MOB_ATTACK3 = 0x4,
    SE_MOB_ATTACK4 = 0x5,
    SE_MOB_ATTACK5 = 0x6,
    SE_MOB_ATTACK6 = 0x7,
    SE_MOB_ATTACK7 = 0x8,
    SE_MOB_ATTACK8 = 0x9,
    SE_MOB_ATTACKF = 0xa,
    SE_MOB_CHARDAMAGE1 = 0xb,
    SE_MOB_CHARDAMAGE2 = 0xc,
    SE_MOB_CHARDAMAGE3 = 0xd,
    SE_MOB_CHARDAMAGE4 = 0xe,
    SE_MOB_CHARDAMAGE5 = 0xf,
    SE_MOB_CHARDAMAGE6 = 0x10,
    SE_MOB_CHARDAMAGE7 = 0x11,
    SE_MOB_CHARDAMAGE8 = 0x12,
    SE_MOB_CHARDAMAGEF = 0x13,
    SE_MOB_SKILL1 = 0x14,
    SE_MOB_SKILL2 = 0x15,
    SE_MOB_SKILL3 = 0x16,
    SE_MOB_SKILL4 = 0x17,
    SE_MOB_SKILL5 = 0x18,
    SE_MOB_SKILL6 = 0x19,
    SE_MOB_SKILL7 = 0x1a,
    SE_MOB_SKILL8 = 0x1b,
    SE_MOB_SKILL9 = 0x1c,
    SE_MOB_SKILL10 = 0x1d,
    SE_MOB_SKILL11 = 0x1e,
    SE_MOB_SKILL12 = 0x1f,
    SE_MOB_SKILL13 = 0x20,
    SE_MOB_SKILL14 = 0x21,
    SE_MOB_SKILL15 = 0x22,
    SE_MOB_SKILL16 = 0x23,
    SE_MOB_SKILLF = 0x24,
    SE_MOB_BOMB = 0x25,
    SE_MOB_REGEN = 0x26,
    SE_WEAPON_ATTACK = 0x27,
    SE_WEAPON_ATTACK2 = 0x28,
    SE_ITEM_USE = 0x29,
    SE_SKILL_USE = 0x2a,
    SE_SKILL_USE2 = 0x2b,
    SE_SKILL_USE3 = 0x2c,
    SE_SKILL_USE4 = 0x2d,
    SE_SKILL_USE5 = 0x2e,
    SE_SKILL_LOOP = 0x2f,
    SE_SKILL_SUMMONED = 0x30,
    SE_SKILL_ATTACK1 = 0x31,
    SE_SKILL_DIE = 0x32,
    SE_SKILL_DAMAGE = 0x33,
    SE_SKILL_HIT = 0x34,
    SE_SKILL_DELAYEDHIT = 0x35,
    SE_SKILL_GETOFF = 0x36,
    SE_REACTOR_HIT = 0x37
};

enum ENUM_TEXT_ALIGN
{
    ETA_LEFT = 0,
    ETA_CENTER = 1,
    ETA_RIGHT = 2,
};

struct Triangle
{
    // Nested
    // Fields
public:
    std::array<tagPOINT, 3> p{};
    // Methods
};
// STATIC_ASSERT_SIZE(Triangle, 24);

struct CS_LIMITGOODS
{
    // Nested
    // Fields
public:
    long nItemID{};

public:
    std::array<long, 10> nSN{};

public:
    long nState{};

public:
    long nOriginCount{};

public:
    long nRemainCount{};

public:
    unsigned long dwConditionFlag{};

public:
    long nDateStart{};

public:
    long nDateEnd{};

public:
    long nHourStart{};

public:
    long nHourEnd{};

public:
    std::array<int32_t, 7> abWeek{};
    // Methods
};
STATIC_ASSERT_SIZE(CS_LIMITGOODS, 104);

class CMob;

struct ATTACKINFO
{ /* Size=0x98 */
    union
    {
        /* 0x0000 */ public:
        uint32_t dwMobID{};
        /* 0x0000 */ public:
        CMob *pMob;
    };
    /* 0x0004 */ public:
    int32_t nHitAction{};
    /* 0x0008 */ public:
    int32_t nForeAction{};
    /* 0x000c */ public:
    int32_t nFrameIdx{};
    /* 0x0010 */ public:
    int32_t tDelay{};
    /* 0x0014 */ public:
    int32_t nAttackCount{};
    /* 0x0018 */ public:
    int32_t aDamage[15];
    /* 0x0054 */ public:
    int32_t abCritical[15];
    /* 0x0090 */ public:
    tagPOINT ptHit{};
};
STATIC_ASSERT_SIZE(ATTACKINFO, 0x98);