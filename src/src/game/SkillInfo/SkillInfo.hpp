// SkillInfo.hpp
#pragma once

#include "util/base.h"
#include "pcom/wz.h"

#include "DBBasic/DBBasic.hpp"
#include "spdlog/spdlog.h"
#include "Stat/Stat.hpp"
//#include "ActionMan/ActionMan.hpp"

class CharacterData;

struct BasicStat;
struct SecondaryStat;

// Level: 0 0x554f
struct SKILLROOT;
// Level: 0 0x52e7
struct SKILLLEVELDATACommon;
// Level: 0 0x5567
struct MCGUARDIANENTRY;
// Level: 0 0x52ae
struct SKILLLEVELDATA;
// Level: 0 0x53df
struct MOBSKILLLEVELDATA;
// Level: 0 0x555b
struct MCSKILLENTRY;
// Level: 0 0x53cf
struct CHARLEVELDATA;
// Level: 0 0x5041
struct SKILLENTRY;

// Level: 1 0x5505
class CSkillInfo;

struct SKILLROOT {
    // Nested
    // Fields
public:
    long nSkillRootID{};

public:
    ZXString<char> sBookName;

public:
    ZArray<ZRef<SKILLENTRY>> aSkill;

public:
    _x_com_ptr<IWzCanvas> pBookIcon;
    // Methods
public:
    ~SKILLROOT();

public:
    void _dtor_0();

public:
    SKILLROOT(const SKILLROOT &arg0);

public:
    void _ctor_1(const SKILLROOT &arg0);

public:
    SKILLROOT();

public:
    void _ctor_0();

public:
    SKILLROOT &operator=(const SKILLROOT &arg0);

public:
    static SKILLROOT &_op_assign_3(SKILLROOT *pThis, const SKILLROOT &arg0);
};

STATIC_ASSERT_SIZE(SKILLROOT, 16);

struct SKILLLEVELDATACommon {
    // Nested
    // Fields
public:
    ZXString<char> sHP;

public:
    ZXString<char> sMP;

public:
    ZXString<char> sPAD;

public:
    ZXString<char> sPDD;

public:
    ZXString<char> sMAD;

public:
    ZXString<char> sMDD;

public:
    ZXString<char> sACC;

public:
    ZXString<char> sEVA;

public:
    ZXString<char> sCraft;

public:
    ZXString<char> sSpeed;

public:
    ZXString<char> sJump;

public:
    ZXString<char> sMorph;

public:
    ZXString<char> sHPCon;

public:
    ZXString<char> sMPCon;

public:
    ZXString<char> sMoneyCon;

public:
    ZXString<char> sItemCon;

public:
    ZXString<char> sItemConNo;

public:
    ZXString<char> sDamage;

public:
    ZXString<char> sFixDamage;

public:
    ZXString<char> sSelfDestruction;

public:
    ZXString<char> sTime;

public:
    ZXString<char> sSubTime;

public:
    ZXString<char> sProp;

public:
    ZXString<char> sSubProp;

public:
    ZXString<char> sAttackCount;

public:
    ZXString<char> sBulletCount;

public:
    ZXString<char> sBulletConsume;

public:
    ZXString<char> sMastery;

public:
    ZXString<char> sMobCount;

public:
    ZXString<char> sX;

public:
    ZXString<char> sY;

public:
    ZXString<char> sZ;

public:
    ZXString<char> sAction;

public:
    ZXString<char> sEMHP;

public:
    ZXString<char> sEMMP;

public:
    ZXString<char> sEPAD;

public:
    ZXString<char> sEPDD;

public:
    ZXString<char> sEMDD;

public:
    ZXString<char> sRange;

public:
    ZXString<char> sCooltime;

public:
    SECRECT rcAffectedArea;

public:
    ZXString<char> sMHPr;

public:
    ZXString<char> sMMPr;

public:
    ZXString<char> sCr;

public:
    ZXString<char> sCDMin;

public:
    ZXString<char> sCDMax;

public:
    ZXString<char> sACCr;

public:
    ZXString<char> sEVAr;

public:
    ZXString<char> sAr;

public:
    ZXString<char> sEr;

public:
    ZXString<char> sPDDr;

public:
    ZXString<char> sMDDr;

public:
    ZXString<char> sPDr;

public:
    ZXString<char> sMDr;

public:
    ZXString<char> sDIPr;

public:
    ZXString<char> sPDamr;

public:
    ZXString<char> sMDamr;

public:
    ZXString<char> sPADr;

public:
    ZXString<char> sMADr;

public:
    ZXString<char> sEXPr;

public:
    ZXString<char> sDot;

public:
    ZXString<char> sDotInterval;

public:
    ZXString<char> sDotTime;

public:
    ZXString<char> sIMPr;

public:
    ZXString<char> sASRr;

public:
    ZXString<char> sTERr;

public:
    ZXString<char> sMESOr;

public:
    ZXString<char> sPADx;

public:
    ZXString<char> sMADx;

public:
    ZXString<char> sIMDr;

public:
    ZXString<char> sPsdJump;

public:
    ZXString<char> sPsdSpeed;

public:
    ZXString<char> sOCr;

public:
    ZXString<char> sDCr;

public:
    ZXString<char> sReqGL;

public:
    ZXString<char> sPrice;

public:
    ZXString<char> sS;

public:
    ZXString<char> sU;

public:
    ZXString<char> sV;

public:
    ZXString<char> sW;

public:
    ZXString<char> sT;
    // Methods
public:
    ~SKILLLEVELDATACommon();

public:
    void _dtor_0();

public:
    SKILLLEVELDATACommon(const SKILLLEVELDATACommon &arg0);

public:
    void _ctor_1(const SKILLLEVELDATACommon &arg0);

CTOR_DEFAULT(SKILLLEVELDATACommon)

public:
    SKILLLEVELDATACommon();

public:
    void _ctor_0();

public:
    SKILLLEVELDATACommon &operator=(const SKILLLEVELDATACommon &arg0);

public:
    static SKILLLEVELDATACommon &_op_assign_3(SKILLLEVELDATACommon *pThis, const SKILLLEVELDATACommon &arg0);
};

STATIC_ASSERT_SIZE(SKILLLEVELDATACommon, 368);

struct MCGUARDIANENTRY {
    // Nested
    // Fields
public:
    ZXString<char> sName;

public:
    ZXString<char> sDesc;

public:
    long nSpendCP{};
    // Methods
public:
    ~MCGUARDIANENTRY();

public:
    void _dtor_0();

public:
    MCGUARDIANENTRY(const MCGUARDIANENTRY &arg0);

public:
    void _ctor_1(const MCGUARDIANENTRY &arg0);

public:
    MCGUARDIANENTRY();

public:
    void _ctor_0();

public:
    MCGUARDIANENTRY &operator=(const MCGUARDIANENTRY &arg0);

public:
    static MCGUARDIANENTRY &_op_assign_3(MCGUARDIANENTRY *pThis, const MCGUARDIANENTRY &arg0);
};

STATIC_ASSERT_SIZE(MCGUARDIANENTRY, 12);

struct SKILLLEVELDATA {
    // Nested
    // Fields
public:
    Ztl_bstr_t sHelp;

public:
    std::array<long, 2> _ZtlSecureTear_nHP{};

public:
    uint32_t _ZtlSecureTear_nHP_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMP{};

public:
    uint32_t _ZtlSecureTear_nMP_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPAD{};

public:
    uint32_t _ZtlSecureTear_nPAD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPDD{};

public:
    uint32_t _ZtlSecureTear_nPDD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMAD{};

public:
    uint32_t _ZtlSecureTear_nMAD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMDD{};

public:
    uint32_t _ZtlSecureTear_nMDD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nACC{};

public:
    uint32_t _ZtlSecureTear_nACC_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEVA{};

public:
    uint32_t _ZtlSecureTear_nEVA_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nCraft{};

public:
    uint32_t _ZtlSecureTear_nCraft_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSpeed{};

public:
    uint32_t _ZtlSecureTear_nSpeed_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nJump{};

public:
    uint32_t _ZtlSecureTear_nJump_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMorph{};

public:
    uint32_t _ZtlSecureTear_nMorph_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nHPCon{};

public:
    uint32_t _ZtlSecureTear_nHPCon_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMPCon{};

public:
    uint32_t _ZtlSecureTear_nMPCon_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMoneyCon{};

public:
    uint32_t _ZtlSecureTear_nMoneyCon_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nItemCon{};

public:
    uint32_t _ZtlSecureTear_nItemCon_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nItemConNo{};

public:
    uint32_t _ZtlSecureTear_nItemConNo_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDamage{};

public:
    uint32_t _ZtlSecureTear_nDamage_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nFixDamage{};

public:
    uint32_t _ZtlSecureTear_nFixDamage_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSelfDestruction{};

public:
    uint32_t _ZtlSecureTear_nSelfDestruction_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tTime{};

public:
    uint32_t _ZtlSecureTear_tTime_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSubTime{};

public:
    uint32_t _ZtlSecureTear_tSubTime_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nProp{};

public:
    uint32_t _ZtlSecureTear_nProp_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSubProp{};

public:
    uint32_t _ZtlSecureTear_nSubProp_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nAttackCount{};

public:
    uint32_t _ZtlSecureTear_nAttackCount_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nBulletCount{};

public:
    uint32_t _ZtlSecureTear_nBulletCount_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nBulletConsume{};

public:
    uint32_t _ZtlSecureTear_nBulletConsume_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMastery{};

public:
    uint32_t _ZtlSecureTear_nMastery_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMobCount{};

public:
    uint32_t _ZtlSecureTear_nMobCount_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nX{};

public:
    uint32_t _ZtlSecureTear_nX_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nY{};

public:
    uint32_t _ZtlSecureTear_nY_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nZ{};

public:
    uint32_t _ZtlSecureTear_nZ_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nAction{};

public:
    uint32_t _ZtlSecureTear_nAction_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEMHP{};

public:
    uint32_t _ZtlSecureTear_nEMHP_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEMMP{};

public:
    uint32_t _ZtlSecureTear_nEMMP_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEPAD{};

public:
    uint32_t _ZtlSecureTear_nEPAD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEPDD{};

public:
    uint32_t _ZtlSecureTear_nEPDD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEMDD{};

public:
    uint32_t _ZtlSecureTear_nEMDD_CS{};

public:
    SECRECT rcAffectedArea;

public:
    std::array<long, 2> _ZtlSecureTear_nRange{};

public:
    uint32_t _ZtlSecureTear_nRange_CS{};

public:
    Ztl_bstr_t sBallUOL;

public:
    Ztl_bstr_t sFlipBallUOL;

public:
    ZArray<Ztl_bstr_t> asHitUOL;

public:
    std::array<long, 2> _ZtlSecureTear_nCooltime{};

public:
    uint32_t _ZtlSecureTear_nCooltime_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMHPr{};

public:
    uint32_t _ZtlSecureTear_nMHPr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMMPr{};

public:
    uint32_t _ZtlSecureTear_nMMPr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nCr{};

public:
    uint32_t _ZtlSecureTear_nCr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nCDMin{};

public:
    uint32_t _ZtlSecureTear_nCDMin_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nCDMax{};

public:
    uint32_t _ZtlSecureTear_nCDMax_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nACCr{};

public:
    uint32_t _ZtlSecureTear_nACCr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEVAr{};

public:
    uint32_t _ZtlSecureTear_nEVAr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nAr{};

public:
    uint32_t _ZtlSecureTear_nAr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEr{};

public:
    uint32_t _ZtlSecureTear_nEr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPDDr{};

public:
    uint32_t _ZtlSecureTear_nPDDr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMDDr{};

public:
    uint32_t _ZtlSecureTear_nMDDr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPDr{};

public:
    uint32_t _ZtlSecureTear_nPDr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMDr{};

public:
    uint32_t _ZtlSecureTear_nMDr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDIPr{};

public:
    uint32_t _ZtlSecureTear_nDIPr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPDamr{};

public:
    uint32_t _ZtlSecureTear_nPDamr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMDamr{};

public:
    uint32_t _ZtlSecureTear_nMDamr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPADr{};

public:
    uint32_t _ZtlSecureTear_nPADr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMADr{};

public:
    uint32_t _ZtlSecureTear_nMADr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEXPr{};

public:
    uint32_t _ZtlSecureTear_nEXPr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDot{};

public:
    uint32_t _ZtlSecureTear_nDot_CS{};

public:
    std::array<unsigned long, 2> _ZtlSecureTear_unDotInterval;

public:
    uint32_t _ZtlSecureTear_unDotInterval_CS{};

public:
    std::array<unsigned long, 2> _ZtlSecureTear_unDotTime;

public:
    uint32_t _ZtlSecureTear_unDotTime_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nIMPr{};

public:
    uint32_t _ZtlSecureTear_nIMPr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nASRr{};

public:
    uint32_t _ZtlSecureTear_nASRr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nTERr{};

public:
    uint32_t _ZtlSecureTear_nTERr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMESOr{};

public:
    uint32_t _ZtlSecureTear_nMESOr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPADx{};

public:
    uint32_t _ZtlSecureTear_nPADx_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMADx{};

public:
    uint32_t _ZtlSecureTear_nMADx_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nIMDr{};

public:
    uint32_t _ZtlSecureTear_nIMDr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPsdJump{};

public:
    uint32_t _ZtlSecureTear_nPsdJump_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPsdSpeed{};

public:
    uint32_t _ZtlSecureTear_nPsdSpeed_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nOCr{};

public:
    uint32_t _ZtlSecureTear_nOCr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDCr{};

public:
    uint32_t _ZtlSecureTear_nDCr_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nReqGL{};

public:
    uint32_t _ZtlSecureTear_nReqGL_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPrice{};

public:
    uint32_t _ZtlSecureTear_nPrice_CS{};

public:
    std::array<unsigned long, 2> _ZtlSecureTear_nCRC;

public:
    uint32_t _ZtlSecureTear_nCRC_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nS{};

public:
    uint32_t _ZtlSecureTear_nS_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nU{};

public:
    uint32_t _ZtlSecureTear_nU_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nV{};

public:
    uint32_t _ZtlSecureTear_nV_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nW{};

public:
    uint32_t _ZtlSecureTear_nW_CS{};

public:
    std::array<float, 2> _ZtlSecureTear_fT{};

public:
    uint32_t _ZtlSecureTear_fT_CS{};

public:
    _FILETIME dateExpire{};

public:
    int32_t bLoaded{};

public:
    int32_t bCalcCRC{};
    // Methods
public:
    ~SKILLLEVELDATA();

public:
    void _dtor_0();

public:
    SKILLLEVELDATA(const SKILLLEVELDATA &__that) = default;

public:
    void _ctor_0(const SKILLLEVELDATA &__that)
    {
        new(this) SKILLLEVELDATA(__that);
    }

public:
    SKILLLEVELDATA();

public:
    void _ctor_1();

public:
    long __fastcall _ZtlSecureGet_nHP() const;

public:
    long __fastcall _ZtlSecurePut_nHP(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMP() const;

public:
    long __fastcall _ZtlSecurePut_nMP(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPAD() const;

public:
    long __fastcall _ZtlSecurePut_nPAD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPDD() const;

public:
    long __fastcall _ZtlSecurePut_nPDD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMAD() const;

public:
    long __fastcall _ZtlSecurePut_nMAD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMDD() const;

public:
    long __fastcall _ZtlSecurePut_nMDD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nACC() const;

public:
    long __fastcall _ZtlSecurePut_nACC(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEVA() const;

public:
    long __fastcall _ZtlSecurePut_nEVA(long arg0);

public:
    long __fastcall _ZtlSecureGet_nCraft() const;

public:
    long __fastcall _ZtlSecurePut_nCraft(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSpeed() const;

public:
    long __fastcall _ZtlSecurePut_nSpeed(long arg0);

public:
    long __fastcall _ZtlSecureGet_nJump() const;

public:
    long __fastcall _ZtlSecurePut_nJump(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMorph() const;

public:
    long __fastcall _ZtlSecurePut_nMorph(long arg0);

public:
    long __fastcall _ZtlSecureGet_nHPCon() const;

public:
    long __fastcall _ZtlSecurePut_nHPCon(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMPCon() const;

public:
    long __fastcall _ZtlSecurePut_nMPCon(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMoneyCon() const;

public:
    long __fastcall _ZtlSecurePut_nMoneyCon(long arg0);

public:
    long __fastcall _ZtlSecureGet_nItemCon() const;

public:
    long __fastcall _ZtlSecurePut_nItemCon(long arg0);

public:
    long __fastcall _ZtlSecureGet_nItemConNo() const;

public:
    long __fastcall _ZtlSecurePut_nItemConNo(long arg0);

public:
    long __fastcall _ZtlSecureGet_nDamage() const;

public:
    long __fastcall _ZtlSecurePut_nDamage(long arg0);

public:
    long __fastcall _ZtlSecureGet_nFixDamage() const;

public:
    long __fastcall _ZtlSecurePut_nFixDamage(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSelfDestruction() const;

public:
    long __fastcall _ZtlSecurePut_nSelfDestruction(long arg0);

public:
    long __fastcall _ZtlSecureGet_tTime() const;

public:
    long __fastcall _ZtlSecurePut_tTime(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSubTime() const;

public:
    long __fastcall _ZtlSecurePut_tSubTime(long arg0);

public:
    long __fastcall _ZtlSecureGet_nProp() const;

public:
    long __fastcall _ZtlSecurePut_nProp(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSubProp() const;

public:
    long __fastcall _ZtlSecurePut_nSubProp(long arg0);

public:
    long __fastcall _ZtlSecureGet_nAttackCount() const;

public:
    long __fastcall _ZtlSecurePut_nAttackCount(long arg0);

public:
    long __fastcall _ZtlSecureGet_nBulletCount() const;

public:
    long __fastcall _ZtlSecurePut_nBulletCount(long arg0);

public:
    long __fastcall _ZtlSecureGet_nBulletConsume() const;

public:
    long __fastcall _ZtlSecurePut_nBulletConsume(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMastery() const;

public:
    long __fastcall _ZtlSecurePut_nMastery(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMobCount() const;

public:
    long __fastcall _ZtlSecurePut_nMobCount(long arg0);

public:
    long __fastcall _ZtlSecureGet_nX() const;

public:
    long __fastcall _ZtlSecurePut_nX(long arg0);

public:
    long __fastcall _ZtlSecureGet_nY() const;

public:
    long __fastcall _ZtlSecurePut_nY(long arg0);

public:
    long __fastcall _ZtlSecureGet_nZ() const;

public:
    long __fastcall _ZtlSecurePut_nZ(long arg0);

public:
    long __fastcall _ZtlSecureGet_nAction() const;

public:
    long __fastcall _ZtlSecurePut_nAction(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEMHP() const;

public:
    long __fastcall _ZtlSecurePut_nEMHP(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEMMP() const;

public:
    long __fastcall _ZtlSecurePut_nEMMP(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEPAD() const;

public:
    long __fastcall _ZtlSecurePut_nEPAD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEPDD() const;

public:
    long __fastcall _ZtlSecurePut_nEPDD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEMDD() const;

public:
    long __fastcall _ZtlSecurePut_nEMDD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nRange() const;

public:
    long __fastcall _ZtlSecurePut_nRange(long arg0);

public:
    long __fastcall _ZtlSecureGet_nCooltime() const;

public:
    long __fastcall _ZtlSecurePut_nCooltime(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMHPr() const;

public:
    long __fastcall _ZtlSecurePut_nMHPr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMMPr() const;

public:
    long __fastcall _ZtlSecurePut_nMMPr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nCr() const;

public:
    long __fastcall _ZtlSecurePut_nCr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nCDMin() const;

public:
    long __fastcall _ZtlSecurePut_nCDMin(long arg0);

public:
    long __fastcall _ZtlSecureGet_nCDMax() const;

public:
    long __fastcall _ZtlSecurePut_nCDMax(long arg0);

public:
    long __fastcall _ZtlSecureGet_nACCr() const;

public:
    long __fastcall _ZtlSecurePut_nACCr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEVAr() const;

public:
    long __fastcall _ZtlSecurePut_nEVAr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nAr() const;

public:
    long __fastcall _ZtlSecurePut_nAr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEr() const;

public:
    long __fastcall _ZtlSecurePut_nEr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPDDr() const;

public:
    long __fastcall _ZtlSecurePut_nPDDr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMDDr() const;

public:
    long __fastcall _ZtlSecurePut_nMDDr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPDr() const;

public:
    long __fastcall _ZtlSecurePut_nPDr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMDr() const;

public:
    long __fastcall _ZtlSecurePut_nMDr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nDIPr() const;

public:
    long __fastcall _ZtlSecurePut_nDIPr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPDamr() const;

public:
    long __fastcall _ZtlSecurePut_nPDamr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMDamr() const;

public:
    long __fastcall _ZtlSecurePut_nMDamr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPADr() const;

public:
    long __fastcall _ZtlSecurePut_nPADr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMADr() const;

public:
    long __fastcall _ZtlSecurePut_nMADr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEXPr() const;

public:
    long __fastcall _ZtlSecurePut_nEXPr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nDot() const;

public:
    long __fastcall _ZtlSecurePut_nDot(long arg0);

public:
    unsigned long __fastcall _ZtlSecureGet_unDotInterval() const;

public:
    unsigned long __fastcall _ZtlSecurePut_unDotInterval(unsigned long arg0);

public:
    unsigned long __fastcall _ZtlSecureGet_unDotTime() const;

public:
    unsigned long __fastcall _ZtlSecurePut_unDotTime(unsigned long arg0);

public:
    long __fastcall _ZtlSecureGet_nIMPr() const;

public:
    long __fastcall _ZtlSecurePut_nIMPr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nASRr() const;

public:
    long __fastcall _ZtlSecurePut_nASRr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nTERr() const;

public:
    long __fastcall _ZtlSecurePut_nTERr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMESOr() const;

public:
    long __fastcall _ZtlSecurePut_nMESOr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPADx() const;

public:
    long __fastcall _ZtlSecurePut_nPADx(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMADx() const;

public:
    long __fastcall _ZtlSecurePut_nMADx(long arg0);

public:
    long __fastcall _ZtlSecureGet_nIMDr() const;

public:
    long __fastcall _ZtlSecurePut_nIMDr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPsdJump() const;

public:
    long __fastcall _ZtlSecurePut_nPsdJump(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPsdSpeed() const;

public:
    long __fastcall _ZtlSecurePut_nPsdSpeed(long arg0);

public:
    long __fastcall _ZtlSecureGet_nOCr() const;

public:
    long __fastcall _ZtlSecurePut_nOCr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nDCr() const;

public:
    long __fastcall _ZtlSecurePut_nDCr(long arg0);

public:
    long __fastcall _ZtlSecureGet_nReqGL() const;

public:
    long __fastcall _ZtlSecurePut_nReqGL(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPrice() const;

public:
    long __fastcall _ZtlSecurePut_nPrice(long arg0);

public:
    unsigned long __fastcall _ZtlSecureGet_nCRC() const;

public:
    unsigned long __fastcall _ZtlSecurePut_nCRC(unsigned long arg0);

public:
    long __fastcall _ZtlSecureGet_nS() const;

public:
    long __fastcall _ZtlSecurePut_nS(long arg0);

public:
    long __fastcall _ZtlSecureGet_nU() const;

public:
    long __fastcall _ZtlSecurePut_nU(long arg0);

public:
    long __fastcall _ZtlSecureGet_nV() const;

public:
    long __fastcall _ZtlSecurePut_nV(long arg0);

public:
    long __fastcall _ZtlSecureGet_nW() const;

public:
    long __fastcall _ZtlSecurePut_nW(long arg0);

public:
    float __fastcall _ZtlSecureGet_fT() const;

public:
    float __fastcall _ZtlSecurePut_fT(float arg0);

public:
    const _FILETIME GetSkillLevelDateExpire(ZXString<char> sDateExpire);

public:
    int32_t LoadLevelData(long nSkillID, _x_com_ptr<IWzProperty> pLevelData, const SKILLLEVELDATACommon *pLevelCommon,
                          long nLevel, _x_com_ptr<IWzProperty> pStrSR);

public:
    int32_t LoadLevelDataByCommon(long nSkillID, const SKILLLEVELDATACommon *pLevelCommon, long nLevel,
                                  _x_com_ptr<IWzProperty> pStrSR);

public:
    ZXString<char> GetCommonHelpString(_x_com_ptr<IWzProperty> pStrSR, ZXString<char> sID);

public:
    long GetParsedCommonData(ZXString<char> sText, long nLevel);

public:
    long GetArithmeticData(ZXString<char> sExpression, int32_t bCeiling);

public:
    unsigned long GetParsedCommonDataULONG(ZXString<char> sText, long nLevel);

public:
    unsigned long GetArithmeticDataULONG(ZXString<char> sExpression, int32_t bCeiling);

public:
    float GetParsedCommonDataFloat(ZXString<char> sText, long nLevel);

public:
    float GetArithmeticDataFloat(ZXString<char> sExpression, int32_t bCeiling);

public:
    unsigned long GetCrc();

public:
    void CalcCrc();

public:
    SKILLLEVELDATA &operator=(const SKILLLEVELDATA &arg0);

public:
    static SKILLLEVELDATA &_op_assign_177(SKILLLEVELDATA *pThis, const SKILLLEVELDATA &arg0);
};

STATIC_ASSERT_SIZE(SKILLLEVELDATA, 1052);

struct MOBSKILLLEVELDATA {
    // Nested
    // Fields
public:
    long nHPBelow{};

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
    tagRECT rcAffectedArea{};

public:
    long nEffect{};

public:
    long nLimit{};

public:
    long nTargetUserCount{};

public:
    int32_t bTargetUserRandom{};

public:
    long nDirection{};

public:
    long nElemAttr{};

public:
    Ztl_bstr_t sEffectUOL;

public:
    Ztl_bstr_t sHitUOL;

public:
    Ztl_bstr_t sMobUOL;

public:
    Ztl_bstr_t sAffectedUOL;

public:
    Ztl_bstr_t sTileUOL;

public:
    ZArray<unsigned long> adwTemplateID;
    // Methods
public:
    ~MOBSKILLLEVELDATA();

public:
    void _dtor_0();

public:
    MOBSKILLLEVELDATA(const MOBSKILLLEVELDATA &arg0);

public:
    void _ctor_1(const MOBSKILLLEVELDATA &arg0);

public:
    MOBSKILLLEVELDATA();

public:
    void _ctor_0();

public:
    Ztl_bstr_t GetEffectUOL();

public:
    Ztl_bstr_t GetHitUOL();

public:
    Ztl_bstr_t GetMobUOL();

public:
    Ztl_bstr_t GetAffectedUOL();

public:
    Ztl_bstr_t GetTileUOL();

public:
    MOBSKILLLEVELDATA &operator=(const MOBSKILLLEVELDATA &arg0);

public:
    static MOBSKILLLEVELDATA &_op_assign_8(MOBSKILLLEVELDATA *pThis, const MOBSKILLLEVELDATA &arg0);
};

STATIC_ASSERT_SIZE(MOBSKILLLEVELDATA, 92);

struct MOBSKILLENTRY {
    // Nested
    // Fields
public:
    long nSkillID{};

public:
    ZArray<MOBSKILLLEVELDATA> aLevelData;
    // Methods
    //	public:   long GetMaxLevel();
};
STATIC_ASSERT_SIZE(MOBSKILLENTRY, 8);

struct MCSKILLENTRY {
    // Nested
    // Fields
public:
    ZXString<char> sName;

public:
    ZXString<char> sDesc;

public:
    long nSpendCP{};
    // Methods
public:
    ~MCSKILLENTRY();

public:
    void _dtor_0();

public:
    MCSKILLENTRY(const MCSKILLENTRY &arg0);

public:
    void _ctor_1(const MCSKILLENTRY &arg0);

public:
    MCSKILLENTRY();

public:
    void _ctor_0();

public:
    MCSKILLENTRY &operator=(const MCSKILLENTRY &arg0);

public:
    static MCSKILLENTRY &_op_assign_3(MCSKILLENTRY *pThis, const MCSKILLENTRY &arg0);
};

STATIC_ASSERT_SIZE(MCSKILLENTRY, 12);

struct CHARLEVELDATA {
    // Nested
    // Fields
public:
    ZArray<Ztl_bstr_t> asHitUOL;

public:
    Ztl_bstr_t sEffectUOL;

public:
    Ztl_bstr_t sBallUOL;

public:
    Ztl_bstr_t sFlipBallUOL;

public:
    Ztl_bstr_t sSpecialUOL;

public:
    Ztl_bstr_t sAfterimageUOL;

public:
    long nAction{};

public:
    long nBaseLevel{};
    // Methods
public:
    ~CHARLEVELDATA();

public:
    void _dtor_0();

public:
    CHARLEVELDATA(const CHARLEVELDATA &arg0);

public:
    void _ctor_1(const CHARLEVELDATA &arg0);

public:
    CHARLEVELDATA();

public:
    void _ctor_0();

public:
    int32_t LoadCharLevelData(long nSkillID, _x_com_ptr<IWzProperty> pCharLevelData, long nCharLevel);

public:
    CHARLEVELDATA &operator=(const CHARLEVELDATA &arg0);

public:
    static CHARLEVELDATA &_op_assign_4(CHARLEVELDATA *pThis, const CHARLEVELDATA &arg0);
};

STATIC_ASSERT_SIZE(CHARLEVELDATA, 32);

struct SKILLENTRY {
    // Nested
    // Fields
public:
    long nSkillID{};

public:
    ZXString<char> sName;

public:
    ZXString<char> sDescription;

public:
    long nSkillType{};

public:
    long nPsdSkill{};

public:
    long nAttackElemAttr{};

public:
    long nWeapon{};

public:
    long nSubWeapon{};

public:
    ZArray<long> aAction;

public:
    long nSpecialAction{};

public:
    long nPrepareAction{};

public:
    long tPrepare{};

public:
    long tBallDelay{};

public:
    int32_t bInvisible{};

public:
    int32_t bUpButtonDisabled{};

public:
    long nDefaultMasterLev{};

public:
    int32_t bCombatOrders{};

public:
    unsigned long dwCRC{};

public:
    int32_t bTimeLimited{};

public:
    unsigned long dwMobCode{};

public:
    long nDelayFrame{};

public:
    long nHoldFrame{};

public:
    ZArray<ZArray<long>> aFinalAttack;

public:
    ZList<GW_SkillRecord> lReqSkill;

public:
    long nMaxLevel{};

public:
    SKILLLEVELDATACommon common;

public:
    ZMap<long, ZRef<AdditionPsd>, long> mAdditionPsdOffset;

private:
    ZArray<SKILLLEVELDATA> aLevelData;

public:
    _x_com_ptr<IWzProperty> pLevelData;

public:
    ZArray<CHARLEVELDATA> aCharLevelData;

public:
    _x_com_ptr<IWzProperty> pCharLevelData;

public:
    int32_t bSkillLVData{};

public:
    int32_t bContinuousEffect{};

public:
    Ztl_bstr_t sEffectUOL;

public:
    Ztl_bstr_t sScreenEffectUOL;

public:
    Ztl_bstr_t sAffectedUOL;

public:
    Ztl_bstr_t sSpecialAffectedUOL;

public:
    Ztl_bstr_t sHitRootUOL;

public:
    ZArray<Ztl_bstr_t> asHitUOL;

public:
    Ztl_bstr_t sBallUOL;

public:
    Ztl_bstr_t sFlipBallUOL;

public:
    Ztl_bstr_t sMobUOL;

public:
    Ztl_bstr_t sTileUOL;

public:
    Ztl_bstr_t sAfterimageUOL;

public:
    Ztl_bstr_t sPrepareUOL;

public:
    Ztl_bstr_t sKeyDownUOL;

public:
    Ztl_bstr_t sKeyDownEndUOL;

public:
    Ztl_bstr_t sSpecialUOL;

public:
    Ztl_bstr_t sSummonedUOL;

public:
    Ztl_bstr_t sFinishUOL;

public:
    std::array<_x_com_ptr<IWzCanvas>, 3> apCanvas{};
    // Methods
public:
    ~SKILLENTRY();

public:
    void _dtor_0();

public:
    SKILLENTRY(const SKILLENTRY &arg0);

public:
    void _ctor_1(const SKILLENTRY &arg0);

public:
    SKILLENTRY();

public:
    void _ctor_0();

public:
    long GetMaxLevel() const;

public:
    const CHARLEVELDATA *GetCharLevelData(long nCharLevel);

public:
    long GetCharLevelIndex(long nCharLevel);

public:
    const SKILLLEVELDATA &GetLevelData(long nLevel) const;

public:
    int32_t IsFinalAttack();

public:
    int32_t IsSerialAttack();

public:
    int32_t AdjustDamageDecRate(long nSLV, long nOrder, long *aDamage, int32_t bFinalAfterSlashBlast);

public:
    Ztl_bstr_t GetAfterimageUOL(unsigned char nCharLevel);

public:
    Ztl_bstr_t GetAfterimageUOL_();

public:
    Ztl_bstr_t GetSummonedUOL();

public:
    _x_com_ptr<IWzCanvas> GetIconCanvas(long nIconNumber) const;

    _x_com_ptr<IWzCanvas> GetIconCanvas_1(long nIconNumber) {
        return GetIconCanvas(nIconNumber);
    }

public:
    _x_com_ptr<IWzCanvas> GetIconCanvas() const;

    _x_com_ptr<IWzCanvas> GetIconCanvas_0() {
        return GetIconCanvas();
    }

public:
    Ztl_bstr_t GetEffectUOL(unsigned char nCharLevel);

public:
    Ztl_bstr_t GetScreenEffectUOL() const;

public:
    Ztl_bstr_t GetAffectedUOL() const;

public:
    Ztl_bstr_t GetSpecialAffectedUOL() const;

public:
    Ztl_bstr_t GetMobUOL() const;

public:
    Ztl_bstr_t GetTileUOL() const;

public:
    Ztl_bstr_t GetPrepareUOL() const;

public:
    Ztl_bstr_t GetSpecialUOL(long nCharLevel);

public:
    Ztl_bstr_t GetFinishUOL();

public:
    Ztl_bstr_t GetRandomHitUOL(unsigned char nCharLevel, long nSLV);

public:
    Ztl_bstr_t GetHitUOLByIndex(unsigned char nCharLevel, long nSLV, long nIndex);

public:
    const ZArray<Ztl_bstr_t> &GetHitUOL(unsigned char nCharLevel, long nSLV);

public:
    Ztl_bstr_t GetBallUOL(long nSLV, unsigned char nCharLevel, int32_t bFlip);

public:
    long GetRandomAppointedAction(long nSLV, uint32_t nRandNumber) const;

public:
    int32_t IsActionAppointed(long nSLV) const;

public:
    int32_t IsCorrectAppointedAction(long nSLV, long nAction) const;

public:
    int32_t IsCorrectWeaponType(long nWT, long nSubWT) const;

public:
    unsigned long GetCrc();

public:
    void InitCrc();

public:
    void AddCrc(unsigned long nAddCrc);

public:
    SKILLENTRY &operator=(const SKILLENTRY &arg0);

public:
    static SKILLENTRY &_op_assign_35(SKILLENTRY *pThis, const SKILLENTRY &arg0);
};

STATIC_ASSERT_SIZE(SKILLENTRY, 612);

class CSkillInfo : public TSingleton<CSkillInfo> {
    // Nested
    // Fields
protected:
    ZMap<long, ZRef<SKILLENTRY>, long> m_mSkill;

protected:
    ZMap<long, ZRef<SKILLROOT>, long> m_mSkillRoot;

protected:
    ZMap<long, ZRef<MOBSKILLENTRY>, long> m_mMobSkill;

protected:
    ZMap<long, ZRef<MCSKILLENTRY>, long> m_mMCSkill;

protected:
    ZArray<long> m_aMCRandomSkill;

protected:
    ZMap<long, ZRef<MCGUARDIANENTRY>, long> m_mMCGuardian;

protected:
    ZMap<long, ZRef<BFSKILLENTRY>, long> m_mBFSkill;

protected:
    ZMap<long, ZRef<ITEMSKILLENTRY>, long> m_mItemSkill;

protected:
    ZMap<long, ZRef<ITEMOPTIONSKILLENTRY>, long> m_mItemOptionSkill;
    // Methods
public:
    virtual ~CSkillInfo();

public:
    void _dtor_0();

public:
    CSkillInfo(const CSkillInfo &arg0);

public:
    void _ctor_1(const CSkillInfo &arg0);

public:
    CSkillInfo();

public:
    void _ctor_0();

public:
    int32_t IterateSkillInfo();

public:
    int32_t LoadMobSkill();

public:
    int32_t LoadMCSkill();

public:
    int32_t LoadMCGuardian();

public:
    int32_t LoadItemSkill();

public:
    int32_t LoadItemOptionSkill();

public:
    int32_t LoadBFSkill();

public:
    const SKILLROOT *GetSkillRoot(long nSkillRootID);

public:
    const SKILLENTRY *GetSkill(long nSkillID);

public:
    void GetGuildSkill(long arg0, const SKILLENTRY **arg1);

public:
    void GetSkillRootVisible(long nSkillRootID, const CharacterData &cd, SKILLROOT &SkillRootVisible);

public:
    long GetPureSkillLevel(const CharacterData &c, long nSkillID, const SKILLENTRY **ppSkillEntry);

public:
    long GetSkillLevel(const CharacterData &c, const SecondaryStat &ss, long nSkillID, const SKILLENTRY **ppSkillEntry = nullptr);

    long
    GetSkillLevel_1(const CharacterData &c, const SecondaryStat &ss, long nSkillID, const SKILLENTRY **ppSkillEntry) {
        return GetSkillLevel(c, ss, nSkillID, ppSkillEntry);
    }

public:
    long GetSkillLevel(const CharacterData &c, long nSkillID, const SKILLENTRY **ppSkillEntry);

    long GetSkillLevel_0(const CharacterData &c, long nSkillID, const SKILLENTRY **ppSkillEntry) {
        return GetSkillLevel(c, nSkillID, ppSkillEntry);

    }

public:
    long GetShootSkillRange(const CharacterData &cd, long nSkillID, long nWT);

public:
    int32_t IsSkillVisible(const CharacterData &c, long nSkillID, const SKILLENTRY **ppSkillEntry);

public:
    long GetMobTossSkillID(const CharacterData &c);

public:
    const MOBSKILLENTRY *GetMobSkill(long nSkillID);

public:
    const MCSKILLENTRY *GetMCSkill(long nSkillID);

public:
    const MCSKILLENTRY *GetMCRandomSkill();

public:
    const MCGUARDIANENTRY *GetMCGuardian(long nSkillID) const;

public:
    const ITEMSKILLENTRY *GetItemSkill(long nSkillID) const;

public:
    const ITEMOPTIONSKILLENTRY *GetItemOptionSkill(long nSkillID);

public:
    const BFSKILLENTRY *GetBFSkill(long arg0);

public:
    long CheckConsumeForActiveSkill(CharacterData &cd, const BasicStat &bs, const SecondaryStat &ss, long nSkillID,
                                    long *pHPCon, long *pMPCon);

public:
    static int32_t __cdecl IsMobChaseAttack(const SKILLENTRY *pSkill, long nSLV);

protected:
    int32_t LoadSkillRoot(long nSkillRootID, _x_com_ptr<IWzProperty> pSkillRoot, _x_com_ptr<IWzProperty> pStrSR);

protected:
    ZRef<SKILLENTRY> LoadSkill(long arg0, _x_com_ptr<IWzProperty> arg1, _x_com_ptr<IWzProperty> arg2);

protected:
    int32_t LoadFinalAttack(ZArray<ZArray<long>> &a1, _x_com_ptr<IWzProperty> p1);

protected:
    int32_t LoadReqSkill(ZList<GW_SkillRecord> &l, _x_com_ptr<IWzProperty> p);

protected:
    int32_t LoadLevelData(long arg0, int32_t arg1, ZArray<SKILLLEVELDATA> &arg2, _x_com_ptr<IWzProperty> arg3,
                          _x_com_ptr<IWzProperty> arg4, long arg5, const SKILLLEVELDATACommon *arg6);

protected:
    int32_t LoadCharLevelData(long nSkillID, ZArray<CHARLEVELDATA> &a, _x_com_ptr<IWzProperty> p);

protected:
    int32_t LoadLevelDataCommon(long nSkillID, _x_com_ptr<IWzProperty> pCommon, _x_com_ptr<IWzProperty> pStrSR,
                                SKILLLEVELDATACommon &common, long &nMaxLevel);

protected:
    int32_t LoadMobSkillLevelData(long arg0, ZArray<MOBSKILLLEVELDATA> &arg1, _x_com_ptr<IWzProperty> arg2);

protected:
    int32_t LoadItemSkillLevelData(long arg0, ZArray<ZRef<ITEMSKILLLEVELDATA>> &arg1, _x_com_ptr<IWzProperty> arg2);

protected:
    int32_t
    LoadItemOptionSkillLevelData(long arg0, ZArray<ZRef<ITEMOPTIONSKILLLEVELDATA>> &arg1, _x_com_ptr<IWzProperty> arg2);

public:
    void DrawSkillIconForSlot(_x_com_ptr<IWzCanvas> arg0, long arg1, long arg2, long arg3, int32_t arg4);

public:
    CSkillInfo &operator=(const CSkillInfo &arg0);

public:
    static CSkillInfo &_op_assign_40(CSkillInfo *pThis, const CSkillInfo &arg0);
};

STATIC_ASSERT_SIZE(CSkillInfo, 200);


// 86AC5C 4
static const SKILLENTRY *_D_S_PMESOEXPLOSION{};
// 86B578 4
static const SKILLENTRY *_D_S_PTHIEFMASTER_S{};
// 86B57C 4
static const SKILLENTRY *_D_S_PKNIGHT_SHIELD{};
// 86B580 4
static const SKILLENTRY *_D_S_PSTRIKER_CRITI{};
// 86B584 4
static const SKILLENTRY *_D_S_PASSASSIN_CRIT{};
// 86B588 4
static const SKILLENTRY *_D_S_PNIGHTWALKER_C{};
// 86B58C 4
static const SKILLENTRY *_D_S_PARCHER_CRITIC{};
// 86B590 4
static const SKILLENTRY *_D_S_PWINDBREAKER_C{};
// 86B594 4
static const SKILLENTRY *_D_S_PEVAN_ELEMENTA{};
// 86B598 4
static const SKILLENTRY *_D_S_PFLAMEWIZARD_E{};
// 86B59C 4
static const SKILLENTRY *_D_S_PMAGE2_ELEMENT{};
// 86B5A0 4
static const SKILLENTRY *_D_S_PMAGE1_ELEMENT{};
// 86B5A4 4
static const SKILLENTRY *_D_S_PFLAMEWIZARD_E__1{};
// 86B5A8 4
static const SKILLENTRY *_D_S_PPRIEST_ELEMEN{};
// 86B5AC 4
static const SKILLENTRY *_D_S_PMAGE2_PARTIAL{};
// 86B5B0 4
static const SKILLENTRY *_D_S_PMAGE1_PARTIAL{};
// 86B5B4 4
static const SKILLENTRY *_D_S_PDRAGONNIGHT_E{};
// 86B5B8 4
static const SKILLENTRY *_D_S_PWINDBREAKER_T{};
// 86B5BC 4
static const SKILLENTRY *_D_S_PSNIPER_THRUST{};
// 86B5C0 4
static const SKILLENTRY *_D_S_PRANGER_THRUST{};
// 86B5C4 4
static const SKILLENTRY *_D_S_PSHADOWPARTNER{};


// 86D70C 4
static const SKILLENTRY *_D_PGRIDSKILL{};
// 86D710 4
static const SKILLENTRY *_D_S_PCHANCEATTACK{};
// 86D714 4
static const SKILLENTRY *_D_S_PVANISH{};
// 86D718 4
static const SKILLENTRY *_D_S_PWINDWALK{};
// 86D71C 4
static const SKILLENTRY *_D_S_PMIRRORIMAGING{};
// 86D720 4
static const SKILLENTRY *_D_S_PGRIDSKILL{};
// 86D724 4
static const SKILLENTRY *_D_S_PNIGHTWALKERSH{};
// 86D728 4
static const SKILLENTRY *_D_S_PMIRRORIMAING{};
// 86D72C 4
static const SKILLENTRY *_D_S_PHERMITSHADOWP{};
// 86D730 4
static const SKILLENTRY *_D_S_PTHIEFMASTERSH{};
// 86D734 4
static const SKILLENTRY *_D_S_PEVANDRAGONSOU{};
// 86D738 4
static const SKILLENTRY *_D_S_PSTRIKERQUICKM{};
// 86D73C 4
static const SKILLENTRY *_D_S_PPIRATEQUICKMO{};
// 86D740 4
static const SKILLENTRY *_D_S_PNIGHTWALKERNI{};
// 86D744 4
static const SKILLENTRY *_D_S_PTHIEFNIMBLEBO{};


// 86E700 4
static const SKILLENTRY *_D_S_PHEALING{};
// 86E704 4
static const SKILLENTRY *_D_S_PBUFF{};
// 86F300 4
static const SKILLENTRY *_D_PVENGEANCE{};
// 86F30C 4
static const SKILLENTRY *_D_S_PSOULMASTERSLA{};
// 86F310 4
static const SKILLENTRY *_D_S_PWARRIOUSLASHB{};
// 86F320 4
static const SKILLENTRY *_D_S_PCHAKRA{};
// 86F318 4
static const SKILLENTRY *_D_S_PMANAREFLECTIO{};

uint32_t __fastcall _ZtlSecureTear_float_(float t, float *arg1);

long __cdecl get_random_melee_attack_action(long nAttackActionType, long nWT, const SKILLENTRY *pSkill, long nSLV,
                                            uint32_t nRandNumber);

char __cdecl _anon_get_char(Ztl_variant_t &v, char cDefault);

long __cdecl get_novice_skill_point(const CharacterData &cd);

int32_t
__cdecl is_correct_melee_attack(long nAttackActionType, long nWT, long nAction, const SKILLENTRY *pSkill, long nSLV);

long __cdecl get_amplification(const CharacterData &cd, long nSkillID, long *pnIncMPCon);

int32_t __cdecl is_not_depend_on_weapon_skill(const SKILLENTRY *pSkill, long nSLV, long nJobCode);

long __cdecl get_weapon_mastery(const CharacterData &cd, const SecondaryStat &ss, long nWeaponItemID, long nAttackType,
                                long nSkillID, long *pnACCInc, long *pnPADInc);

long __cdecl get_magic_mastery(const CharacterData &cd, long *pnMADInc, long nWeaponItemID);

long __cdecl _anon_char2elem_attr(char chr);

long __cdecl get_mastery_from_skill(const CharacterData &cd, const long nSkillID, long *pnInc);

int32_t __cdecl is_shoot_skill_not_showing_bullet(const SKILLENTRY *pSkill);

long __cdecl get_critical_skill_level(const CharacterData &cd, long nWeaponItemID, long nAttackType, long *pnProp,
                                      long *pnParam);

float __cdecl _ZtlSecureFuse_float_(const float *at, uint32_t uCS);

long __cdecl get_combo_damage_param(const CharacterData &cd, long nSkillID, long nComboCounter);

long __cdecl get_max_durability_of_vehicle(long nSkillID, long nSLV, long nCharLevel);

long __cdecl get_summon_skill_id_from_idx(const CharacterData &cd, long nIdx);

long __cdecl get_summoned_attack_damage(long nAIType, long nSkillID, long nDamage, const CharacterData &cd);

long __cdecl get_resistance(const CharacterData &cd, const SecondaryStat &ss, long nElement);

int32_t __cdecl get_element_attribute(const wchar_t *arg0, long &arg1);
int32_t __cdecl __get_element_attribute();

int32_t __cdecl get_element_attribute_list(const wchar_t *sAttr, long *p);
int32_t __cdecl __get_element_attribute_list();

bool is_correct_shoot_attack(int32_t nAttackActionType, int32_t nWT, int32_t nAction, SKILLENTRY const* pSkill, int32_t nSLV);

bool is_correct_normal_attack(int32_t nAttackActionType,
                                     int32_t nWT, int32_t nAction,
                                     SKILLENTRY const *pSkill,
                                     int32_t nSLV);
