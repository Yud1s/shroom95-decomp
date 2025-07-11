// SkillInfo.cpp
#include "SkillInfo.hpp"

#include <skills_ids.h>

#include "WvsExtra.h"
#include "Crc32/Crc32.hpp"

static ZRefCounted_AllocHelper<ZRefCountedDummy<ITEMSKILLENTRY>> FAKE_ZRefCountedAllocHelper_ITEMSKILLENTRY{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<MOBSKILLENTRY>> FAKE_ZRefCountedAllocHelper_MOBSKILLENTRY{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<MCGUARDIANENTRY>> FAKE_ZRefCountedAllocHelper_MCGUARDIANENTRY{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<MCSKILLENTRY>> FAKE_ZRefCountedAllocHelper_MCSKILLENTRY{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<ITEMOPTIONSKILLENTRY>> FAKE_ZRefCountedAllocHelper_ITEMOPTIONSKILLENTRY
    {};

static ZRef<AdditionPsd> FAKE_ZRef_AdditionPsd{};
static ZRef<SKILLROOT> FAKE_ZRef_SKILLROOT{};
static ZRef<ITEMSKILLLEVELDATA> FAKE_ZRef_ITEMSKILLLEVELDATA{};
static ZRef<ITEMOPTIONSKILLLEVELDATA> FAKE_ZRef_ITEMOPTIONSKILLLEVELDATA{};
static ZRef<SKILLENTRY> FAKE_ZRef_SKILLENTRY{};

static _ZtlSecureFuseHelper<unsigned char> FAKE_ZtlSecureFuseHelper_uchar{};
static _ZtlSecureTearHelper<unsigned char> FAKE_ZtlSecureTearHelper_uchar{};

static _ZtlSecureFuseHelper<unsigned long> FAKE_ZtlSecureFuseHelper_ulong{};
static _ZtlSecureTearHelper<unsigned long> FAKE_ZtlSecureTearHelper_ulong{};

static _ZtlSecureTearHelper<long> FAKE_ZtlSecureTearHelper_long{};
static _ZtlSecureFuseHelper<long> FAKE_ZtlSecureFuseHelper_long{};

static _ZtlSecureFuseHelper<short> FAKE_ZtlSecureFuseHelper_short{};

static _ZtlSecureTearHelper<float> FAKE_ZtlSecureTearHelper_float{};
static _ZtlSecureFuseHelper<float> FAKE_ZtlSecureFuseHelper_float{};

static GETCRC32Helper<long, long> FAKE_GETCRC32Helper_long_long{};


char *__cdecl ___strlwr(char *String)
{
    return _strlwr(String);
}
#include "SkillInfo_regen.ipp"

SKILLROOT::~SKILLROOT()
{
}

void SKILLROOT::_dtor_0()
{
    this->~SKILLROOT();
}

SKILLROOT::SKILLROOT(const SKILLROOT& arg0)
{
    _ctor_1(arg0);
}

void SKILLROOT::_ctor_1(const SKILLROOT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

SKILLROOT::SKILLROOT()
{
    // UNIMPLEMENTED; //_ctor_0();
}

void SKILLROOT::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

SKILLROOT& SKILLROOT::operator=(const SKILLROOT& arg0)
{
    return _op_assign_3(this, arg0);
}

SKILLROOT& SKILLROOT::_op_assign_3(SKILLROOT* pThis, const SKILLROOT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

SKILLLEVELDATACommon::~SKILLLEVELDATACommon()
{
}

void SKILLLEVELDATACommon::_dtor_0()
{
    return __sub_002F3730(this, nullptr);
}

SKILLLEVELDATACommon::SKILLLEVELDATACommon(const SKILLLEVELDATACommon& arg0)
{
    _ctor_1(arg0);
}

void SKILLLEVELDATACommon::_ctor_1(const SKILLLEVELDATACommon& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

SKILLLEVELDATACommon::SKILLLEVELDATACommon()
{
    // UNIMPLEMENTED; //_ctor_0();
}

void SKILLLEVELDATACommon::_ctor_0()
{
    return __sub_002F35A0(this, nullptr);
}

SKILLLEVELDATACommon& SKILLLEVELDATACommon::operator=(const SKILLLEVELDATACommon& arg0)
{
    return _op_assign_3(this, arg0);
}

SKILLLEVELDATACommon& SKILLLEVELDATACommon::_op_assign_3(SKILLLEVELDATACommon* pThis, const SKILLLEVELDATACommon& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MCGUARDIANENTRY::~MCGUARDIANENTRY()
{
}

void MCGUARDIANENTRY::_dtor_0()
{
    return __sub_002F3530(this, nullptr);
}

MCGUARDIANENTRY::MCGUARDIANENTRY(const MCGUARDIANENTRY& arg0)
{
    _ctor_1(arg0);
}

void MCGUARDIANENTRY::_ctor_1(const MCGUARDIANENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MCGUARDIANENTRY::MCGUARDIANENTRY()
{
    // UNIMPLEMENTED; //_ctor_0();
}

void MCGUARDIANENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MCGUARDIANENTRY& MCGUARDIANENTRY::operator=(const MCGUARDIANENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

MCGUARDIANENTRY& MCGUARDIANENTRY::_op_assign_3(MCGUARDIANENTRY* pThis, const MCGUARDIANENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

SKILLLEVELDATA::~SKILLLEVELDATA()
{
}

void SKILLLEVELDATA::_dtor_0()
{
    return __sub_002FD8C0(this, nullptr);
}

/*SKILLLEVELDATA::SKILLLEVELDATA(const SKILLLEVELDATA &__that)
{
	_ctor_1(__that);
}
void SKILLLEVELDATA::_ctor_1(const SKILLLEVELDATA &__that)
{
	return __sub_0051DBE0(this, nullptr, __that);
}*/
SKILLLEVELDATA::SKILLLEVELDATA()
{
    _ZtlSecurePut_unDotInterval(0);
    _ZtlSecurePut_unDotTime(0);
    _ZtlSecurePut_nCRC(0);
    _ZtlSecurePut_nHP(0);
    _ZtlSecurePut_nMP(0);
    _ZtlSecurePut_nPAD(0);
    _ZtlSecurePut_nPDD(0);
    _ZtlSecurePut_nMAD(0);
    _ZtlSecurePut_nMDD(0);
    _ZtlSecurePut_nACC(0);
    _ZtlSecurePut_nEVA(0);
    _ZtlSecurePut_nCraft(0);
    _ZtlSecurePut_nSpeed(0);
    _ZtlSecurePut_nJump(0);
    _ZtlSecurePut_nMorph(0);
    _ZtlSecurePut_nHPCon(0);
    _ZtlSecurePut_nMPCon(0);
    _ZtlSecurePut_nMoneyCon(0);
    _ZtlSecurePut_nItemCon(0);
    _ZtlSecurePut_nItemConNo(0);
    _ZtlSecurePut_nDamage(0);
    _ZtlSecurePut_nFixDamage(0);
    _ZtlSecurePut_nSelfDestruction(0);
    _ZtlSecurePut_tTime(0);
    _ZtlSecurePut_tSubTime(0);
    _ZtlSecurePut_nProp(0);
    _ZtlSecurePut_nSubProp(0);
    _ZtlSecurePut_nAttackCount(0);
    _ZtlSecurePut_nBulletCount(0);
    _ZtlSecurePut_nBulletConsume(0);
    _ZtlSecurePut_nMastery(0);
    _ZtlSecurePut_nMobCount(0);
    _ZtlSecurePut_nX(0);
    _ZtlSecurePut_nY(0);
    _ZtlSecurePut_nZ(0);
    _ZtlSecurePut_nAction(0);
    _ZtlSecurePut_nEMHP(0);
    _ZtlSecurePut_nEMMP(0);
    _ZtlSecurePut_nEPAD(0);
    _ZtlSecurePut_nEPDD(0);
    _ZtlSecurePut_nEMDD(0);
    _ZtlSecurePut_nRange(0);
    _ZtlSecurePut_nCooltime(0);
    _ZtlSecurePut_nMHPr(0);
    _ZtlSecurePut_nMMPr(0);
    _ZtlSecurePut_nCr(0);
    _ZtlSecurePut_nCDMin(0);
    _ZtlSecurePut_nCDMax(0);
    _ZtlSecurePut_nACCr(0);
    _ZtlSecurePut_nEVAr(0);
    _ZtlSecurePut_nAr(0);
    _ZtlSecurePut_nEr(0);
    _ZtlSecurePut_nPDDr(0);
    _ZtlSecurePut_nMDDr(0);
    _ZtlSecurePut_nPDr(0);
    _ZtlSecurePut_nMDr(0);
    _ZtlSecurePut_nDIPr(0);
    _ZtlSecurePut_nPDamr(0);
    _ZtlSecurePut_nMDamr(0);
    _ZtlSecurePut_nPADr(0);
    _ZtlSecurePut_nMADr(0);
    _ZtlSecurePut_nEXPr(0);
    _ZtlSecurePut_nDot(0);
    _ZtlSecurePut_unDotInterval(0);
    _ZtlSecurePut_unDotTime(0);
    _ZtlSecurePut_nIMPr(0);
    _ZtlSecurePut_nASRr(0);
    _ZtlSecurePut_nTERr(0);
    _ZtlSecurePut_nMESOr(0);
    _ZtlSecurePut_nPADx(0);
    _ZtlSecurePut_nMADx(0);
    _ZtlSecurePut_nIMDr(0);
    _ZtlSecurePut_nPsdJump(0);
    _ZtlSecurePut_nPsdSpeed(0);
    _ZtlSecurePut_nOCr(0);
    _ZtlSecurePut_nDCr(0);
    _ZtlSecurePut_nReqGL(0);
    _ZtlSecurePut_nPrice(0);
    _ZtlSecurePut_nCRC(0);
    _ZtlSecurePut_nS(0);
    _ZtlSecurePut_nU(0);
    _ZtlSecurePut_nV(0);
    _ZtlSecurePut_nW(0);
    _ZtlSecurePut_fT(0);
}

void SKILLLEVELDATA::_ctor_1()
{
    new(this) SKILLLEVELDATA();
}

_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nHP)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMP)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPAD)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPDD)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMAD)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMDD)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nACC)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEVA)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nCraft)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nSpeed)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nJump)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMorph)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nHPCon)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMPCon)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMoneyCon)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nItemCon)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nItemConNo)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nDamage)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nFixDamage)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nSelfDestruction)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, tTime)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, tSubTime)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nProp)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nSubProp)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nAttackCount)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nBulletCount)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nBulletConsume)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMastery)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMobCount)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nX)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nY)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nZ)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nAction)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEMHP)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEMMP)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEPAD)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEPDD)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEMDD)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nRange)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nCooltime)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMHPr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMMPr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nCr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nCDMin)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nCDMax)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nACCr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEVAr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nAr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPDDr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMDDr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPDr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMDr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nDIPr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPDamr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMDamr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPADr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMADr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEXPr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nDot)
_ZTL_SEC_GETSETI(unsigned long, SKILLLEVELDATA, unDotInterval)
_ZTL_SEC_GETSETI(unsigned long, SKILLLEVELDATA, unDotTime)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nIMPr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nASRr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nTERr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMESOr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPADx)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMADx)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nIMDr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPsdJump)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPsdSpeed)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nOCr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nDCr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nReqGL)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPrice)
_ZTL_SEC_GETSETI(unsigned long, SKILLLEVELDATA, nCRC)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nS)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nU)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nV)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nW)
_ZTL_SEC_GETSETI(float, SKILLLEVELDATA, fT)

const _FILETIME SKILLLEVELDATA::GetSkillLevelDateExpire(ZXString<char> sDateExpire)
{
    //return __sub_002F81D0(this, nullptr, CreateNakedParam(sDateExpire));
    if (!sDateExpire.IsEmpty())
    {
        SYSTEMTIME st{};
        auto yr = sDateExpire.Left(4);
        st.wYear = atoi(yr.c_str());
        auto month = sDateExpire.Mid(4, 6);
        st.wMonth = atoi(month.c_str());
        auto day = sDateExpire.Mid(6, 8);
        st.wDay = atoi(day.c_str());
        auto hr = sDateExpire.Right(2);
        st.wHour = atoi(hr.c_str());

        FILETIME ft{};
        SystemTimeToFileTime(&st, &ft);
        return ft;
    }
    else
    {
        return _D_DB_DATE_20790101;
    }
}

int32_t SKILLLEVELDATA::LoadLevelData(long nSkillID, _x_com_ptr<IWzProperty> pLevelData,
                                      const SKILLLEVELDATACommon* pLevelCommon, long nLevel,
                                      _x_com_ptr<IWzProperty> pStrSR)
{
    return __sub_00300990(this, nullptr, nSkillID, CreateNakedParam(pLevelData), pLevelCommon, nLevel,
                          CreateNakedParam(pStrSR));
}

int32_t SKILLLEVELDATA::LoadLevelDataByCommon(long nSkillID, const SKILLLEVELDATACommon* pLevelCommon, long nLevel,
                                              _x_com_ptr<IWzProperty> pStrSR)
{
    return __sub_002FF7F0(this, nullptr, nSkillID, pLevelCommon, nLevel, CreateNakedParam(pStrSR));
}

ZXString<char> SKILLLEVELDATA::GetCommonHelpString(_x_com_ptr<IWzProperty> pStrSR, ZXString<char> sID)
{
    ZXString<char> ret;
    return *__sub_002F9A40(this, nullptr, &ret, CreateNakedParam(pStrSR), CreateNakedParam(sID));
}

long SKILLLEVELDATA::GetParsedCommonData(ZXString<char> sText, long nLevel)
{
    return __sub_002FE560(this, nullptr, CreateNakedParam(sText), nLevel);
}

long SKILLLEVELDATA::GetArithmeticData(ZXString<char> sExpression, int32_t bCeiling)
{
    return __sub_002F9300(this, nullptr, CreateNakedParam(sExpression), bCeiling);
    /*auto& sp = StringPool::GetInstance();
    while (true)
    {
        auto nOp = -1;
        if (sExpression.Find(sp.GetString(0x187A).c_str(), 0, false) != SIZE_MAX)
        {

        }
    }*/
}

unsigned long SKILLLEVELDATA::GetParsedCommonDataULONG(ZXString<char> sText, long nLevel)
{
    return __sub_002FDF60(this, nullptr, CreateNakedParam(sText), nLevel);
}

unsigned long SKILLLEVELDATA::GetArithmeticDataULONG(ZXString<char> sExpression, int32_t bCeiling)
{
    return __sub_002F8BA0(this, nullptr, CreateNakedParam(sExpression), bCeiling);
}

float SKILLLEVELDATA::GetParsedCommonDataFloat(ZXString<char> sText, long nLevel)
{
    return __sub_002FD950(this, nullptr, CreateNakedParam(sText), nLevel);
}

float SKILLLEVELDATA::GetArithmeticDataFloat(ZXString<char> sExpression, int32_t bCeiling)
{
    return __sub_002F8460(this, nullptr, CreateNakedParam(sExpression), bCeiling);
}

unsigned long SKILLLEVELDATA::GetCrc()
{
    //return __sub_002F1C50(this, nullptr);
    if (!bCalcCRC)
        CalcCrc();
    return _ZtlSecureGet_nCRC();
}

void SKILLLEVELDATA::CalcCrc()
{
    __sub_002F0660(this, nullptr);
}

SKILLLEVELDATA& SKILLLEVELDATA::operator=(const SKILLLEVELDATA& arg0) = default;

SKILLLEVELDATA& SKILLLEVELDATA::_op_assign_177(SKILLLEVELDATA* pThis, const SKILLLEVELDATA& arg0)
{
    *pThis = arg0;
    return *pThis;
}

MOBSKILLLEVELDATA::~MOBSKILLLEVELDATA()
{
}

void MOBSKILLLEVELDATA::_dtor_0()
{
    this->~MOBSKILLLEVELDATA();
}

MOBSKILLLEVELDATA::MOBSKILLLEVELDATA(const MOBSKILLLEVELDATA& arg0)
{
    _ctor_1(arg0);
}

void MOBSKILLLEVELDATA::_ctor_1(const MOBSKILLLEVELDATA& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MOBSKILLLEVELDATA::MOBSKILLLEVELDATA() = default;

void MOBSKILLLEVELDATA::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Ztl_bstr_t MOBSKILLLEVELDATA::GetEffectUOL()
{
    return sEffectUOL;
}

Ztl_bstr_t MOBSKILLLEVELDATA::GetHitUOL()
{
    return sHitUOL;
}

Ztl_bstr_t MOBSKILLLEVELDATA::GetMobUOL()
{
    return sMobUOL;
}

Ztl_bstr_t MOBSKILLLEVELDATA::GetAffectedUOL()
{
    return sAffectedUOL;
}

Ztl_bstr_t MOBSKILLLEVELDATA::GetTileUOL()
{
    return sTileUOL;
}

MOBSKILLLEVELDATA& MOBSKILLLEVELDATA::operator=(const MOBSKILLLEVELDATA& arg0) = default;

MOBSKILLLEVELDATA& MOBSKILLLEVELDATA::_op_assign_8(MOBSKILLLEVELDATA* pThis, const MOBSKILLLEVELDATA& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MCSKILLENTRY::~MCSKILLENTRY()
{
}

void MCSKILLENTRY::_dtor_0()
{
    return __sub_002F34C0(this, nullptr);
}

MCSKILLENTRY::MCSKILLENTRY(const MCSKILLENTRY& arg0)
{
    _ctor_1(arg0);
}

void MCSKILLENTRY::_ctor_1(const MCSKILLENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MCSKILLENTRY::MCSKILLENTRY()
{
}

void MCSKILLENTRY::_ctor_0()
{
    new(this) MCSKILLENTRY();
}

MCSKILLENTRY& MCSKILLENTRY::operator=(const MCSKILLENTRY& arg0) = default;

MCSKILLENTRY& MCSKILLENTRY::_op_assign_3(MCSKILLENTRY* pThis, const MCSKILLENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CHARLEVELDATA::~CHARLEVELDATA() = default;

void CHARLEVELDATA::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CHARLEVELDATA::CHARLEVELDATA(const CHARLEVELDATA& arg0)
{
    _ctor_1(arg0);
}

void CHARLEVELDATA::_ctor_1(const CHARLEVELDATA& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CHARLEVELDATA::CHARLEVELDATA() = default;

void CHARLEVELDATA::_ctor_0()
{
    new(this) CHARLEVELDATA();
}

int32_t CHARLEVELDATA::LoadCharLevelData(long nSkillID, _x_com_ptr<IWzProperty> pCharLevelData, long nCharLevel)
{
    return __sub_002FD040(this, nullptr, nSkillID, CreateNakedParam(pCharLevelData), nCharLevel);
}

CHARLEVELDATA& CHARLEVELDATA::operator=(const CHARLEVELDATA& arg0)
{
    return _op_assign_4(this, arg0);
}

CHARLEVELDATA& CHARLEVELDATA::_op_assign_4(CHARLEVELDATA* pThis, const CHARLEVELDATA& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

SKILLENTRY::~SKILLENTRY()
{
}

void SKILLENTRY::_dtor_0()
{
    return __sub_00308B80(this, nullptr);
}

SKILLENTRY::SKILLENTRY(const SKILLENTRY& arg0)
{
    _ctor_1(arg0);
}

void SKILLENTRY::_ctor_1(const SKILLENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

SKILLENTRY::SKILLENTRY() = default;

void SKILLENTRY::_ctor_0()
{
    new(this) SKILLENTRY();
}

long SKILLENTRY::GetMaxLevel() const
{
    //return __sub_0010A020(this, nullptr);
    if (!pLevelData)
        return std::max<long>(nMaxLevel, 0);

    auto count = pLevelData->Getcount();
    if (this->nMaxLevel <= 0)
        return count;
    return std::min<long>(nMaxLevel, count);
}

const CHARLEVELDATA* SKILLENTRY::GetCharLevelData(long nCharLevel)
{
    return __sub_00309110(this, nullptr, nCharLevel);
}

long SKILLENTRY::GetCharLevelIndex(long nCharLevel)
{
    //return __sub_002EF640(this, nullptr, nCharLevel);
    for (auto i = 0; i < aCharLevelData.GetCount(); ++i)
    {
        if (aCharLevelData[i].nBaseLevel > nCharLevel)
            return i;
    }

    return -1;
}

const SKILLLEVELDATA& SKILLENTRY::GetLevelData(long nLevel) const
{
    //return __sub_00308E10((SKILLENTRY*)this, nullptr, nLevel);
    auto& lvlData = const_cast<ZArray<SKILLLEVELDATA>&>(aLevelData);
    if (pLevelData)
    {
        auto n = lvlData.GetCount();
        auto count = pLevelData->Getcount();
        if (n != count)
        {
            lvlData.Alloc(count);
            for (auto i = 0; i < count; ++i)
            {
                lvlData[i].bLoaded = false;
            }
        }
    }
    else
    {
        auto n = lvlData.GetCount();
        auto max  = nMaxLevel;
        if (bCombatOrders)
            max += 2;
        if (max > 0 && n < max)
        {
            lvlData.Alloc(max);
            for (auto i = 0; i < max; ++i)
            {
                lvlData[i].bLoaded = false;
            }
        }
    }

    if (!lvlData[nLevel - 1].bLoaded)
    {
        if (pLevelData)
        {
            wchar_t key[32]{};
            _itow_s(nLevel, key, 10);
            auto lvlProp = pLevelData->GetItemT<IWzProperty>(key);
            lvlData[nLevel - 1].LoadLevelData(nSkillID, _x_com_ptr<IWzProperty>(lvlProp), &common, nLevel, {});
        }
        else
        {
            lvlData[nLevel - 1].LoadLevelDataByCommon(nSkillID, &common, nLevel, {});
        }
    }

    return aLevelData[nLevel - 1];
}

int32_t SKILLENTRY::IsFinalAttack()
{
    return this->nSkillType == 3;
}

int32_t SKILLENTRY::IsSerialAttack()
{
    //TODO(game)
    return this->nSkillType == 2;
}

int32_t SKILLENTRY::AdjustDamageDecRate(long nSLV, long nOrder, long* aDamage, int32_t bFinalAfterSlashBlast)
{
    //return __sub_0030AEC0(this, nullptr, nSLV, nOrder, aDamage, bFinalAfterSlashBlast);
    auto res = 0;
    auto aadRate = 0.;
    auto nSkillID = this->nSkillID;
    if (bFinalAfterSlashBlast)
    {
        aadRate = _D_S_AADRATE[0][nOrder];
    }
    else
    {
        auto x = GetLevelData(nSLV)._ZtlSecureGet_nX();
        switch (nSkillID)
        {
        case CROSSBOWMAN_IRON_ARROW_CROSSBOW:
            aadRate = _D_S_AADRATE[1][nOrder];
            break;
        case BUCCANEER_ENERGY_ORB:
            aadRate = _D_S_AADRATE[2][nOrder];
            break;
        case EVAN10_BLAZE:
        case IL3_CHAIN_LIGHTNING:
            aadRate = std::min<long>(100 - nOrder * x, 100) / 100.0;
            break;
        case WH2_RICOCHET:
            aadRate = _D_S_AADRATE[3][nOrder];
            break;
        case DB5_SUDDEN_RAID:
            aadRate = _D_S_AADRATE[4][nOrder];
            break;

        case MARKSMAN_PIERCING_ARROW:
            aadRate = _D_S_AADRATE[3][nOrder];
            break;
        case HUNTER_ARROW_BOMB_BOW:
            aadRate = x / 100.0;
            if (!nOrder)
                res = *aDamage == 0;
            break;
        default:
            return 0;
        }
    }

    for (auto i = 0; i < 15; ++i)
        aDamage[i] = static_cast<long>(aDamage[i] * aadRate);
    return res;
}

Ztl_bstr_t SKILLENTRY::GetAfterimageUOL(unsigned char nCharLevel)
{
    /*Ztl_bstr_t ret;
    return *__sub_00037130(this, nullptr, &ret, nCharLevel);*/
    auto charData = GetCharLevelData(nCharLevel);
    return charData ? charData->sAfterimageUOL : sAfterimageUOL;
}

Ztl_bstr_t SKILLENTRY::GetAfterimageUOL_()
{
    return sAfterimageUOL;
}

Ztl_bstr_t SKILLENTRY::GetSummonedUOL()
{
    return sSummonedUOL;
}

_x_com_ptr<IWzCanvas> SKILLENTRY::GetIconCanvas(long nIconNumber) const
{
    //_x_com_ptr<IWzCanvas> ret;
    //return *__sub_002F7D40((SKILLENTRY*)this, nullptr, &ret, nIconNumber);
    if (!nIconNumber)
    {
        return GetIconCanvas();
    }

    auto str = StringPool::GetInstance().GetStringW(0x9A5u);
    //TODO verify diff
    auto wUol = ZXString16::FromFmt(str.c_str(), nSkillID / 10000, nSkillID, nIconNumber);
    //TODO(game) use get_unknown
    return _x_com_ptr<IWzCanvas>(get_rm()->GetObjectT<IWzCanvas>(Ztl_bstr_t((const wchar_t*)wUol.c_str())));
}

_x_com_ptr<IWzCanvas> SKILLENTRY::GetIconCanvas() const
{
    //return __sub_002EF610((SKILLENTRY*)this, nullptr);
    return this->apCanvas[1];
}

Ztl_bstr_t SKILLENTRY::GetEffectUOL(unsigned char nCharLevel)
{
    if (auto lvlData = GetCharLevelData(nCharLevel))
        return lvlData->sEffectUOL;
    return sEffectUOL;
}

Ztl_bstr_t SKILLENTRY::GetScreenEffectUOL() const
{
    return sScreenEffectUOL;
}

Ztl_bstr_t SKILLENTRY::GetAffectedUOL() const
{
    return sAffectedUOL;
}

Ztl_bstr_t SKILLENTRY::GetSpecialAffectedUOL() const
{
    return sSpecialAffectedUOL;
}

Ztl_bstr_t SKILLENTRY::GetMobUOL() const
{
    return sMobUOL;
}

Ztl_bstr_t SKILLENTRY::GetTileUOL() const
{
    return sTileUOL;
}

Ztl_bstr_t SKILLENTRY::GetPrepareUOL() const
{
    return sPrepareUOL;
}

Ztl_bstr_t SKILLENTRY::GetSpecialUOL(long nCharLevel)
{
    if (auto lvlData = GetCharLevelData(nCharLevel))
        return lvlData->sSpecialUOL;
    return sSpecialUOL;
}

Ztl_bstr_t SKILLENTRY::GetFinishUOL()
{
    return sFinishUOL;
}

Ztl_bstr_t SKILLENTRY::GetRandomHitUOL(unsigned char nCharLevel, long nSLV)
{
    //Ztl_bstr_t ret;
    //return *__sub_00115260(this, nullptr, &ret, nCharLevel, nSLV);
    auto& hitUOL = GetHitUOL(nCharLevel, nSLV);
    auto n = hitUOL.GetCount();
    return n ? hitUOL[rand() % n] : Ztl_bstr_t();
}

Ztl_bstr_t SKILLENTRY::GetHitUOLByIndex(unsigned char nCharLevel, long nSLV, long nIndex)
{
    //Ztl_bstr_t ret;
    //return *__sub_00249F50(this, nullptr, &ret, nCharLevel, nSLV, nIndex);
    auto& hitUOL = GetHitUOL(nCharLevel, nSLV);
    auto n = hitUOL.GetCount();
    return n ? hitUOL[nIndex] : Ztl_bstr_t();
}

const ZArray<Ztl_bstr_t>& SKILLENTRY::GetHitUOL(unsigned char nCharLevel, long nSLV)
{
    auto& lvl = GetLevelData(nSLV);
    if (lvl.asHitUOL.IsEmpty())
    {
        auto charLvl = GetCharLevelData(nCharLevel);
        return charLvl ? charLvl->asHitUOL : asHitUOL;
    }
    return lvl.asHitUOL;
}

Ztl_bstr_t SKILLENTRY::GetBallUOL(long nSLV, unsigned char nCharLevel, int32_t bFlip)
{
    //Ztl_bstr_t ret;
    //return *__sub_00169390(this, nullptr, &ret, nSLV, nCharLevel, bFlip);
    Ztl_bstr_t result;
    if (auto charLvl = GetCharLevelData(nCharLevel))
    {
        result = bFlip ? charLvl->sFlipBallUOL : charLvl->sBallUOL;
    }

    if (!result.length())
    {
        auto& lvl = GetLevelData(nSLV);
        result = bFlip ? lvl.sFlipBallUOL : lvl.sBallUOL;
        if (!result.length())
        {
            result = bFlip ? sFlipBallUOL : sBallUOL;
        }
    }


    return result;
}

long SKILLENTRY::GetRandomAppointedAction(long nSLV, uint32_t nRandNumber) const
{
    //return __sub_0030AD40(this, nullptr, nSLV, nRandNumber);
    auto& lvlData = GetLevelData(nSLV);
    auto action = lvlData._ZtlSecureGet_nAction();
    if (action >= 0)
        return action;

    auto n = aAction.GetCount();
    return n ? aAction[nRandNumber % n] : -1;
}

int32_t SKILLENTRY::IsActionAppointed(long nSLV) const
{
    //return __sub_0030ADD0(this, nullptr, nSLV);
    auto& lvlData = GetLevelData(nSLV);
    if (lvlData._ZtlSecureGet_nAction() < 0)
        return !aAction.IsEmpty();
    return true;
}

int32_t SKILLENTRY::IsCorrectAppointedAction(long nSLV, long nAction) const
{
    //return __sub_0030AE20(this, nullptr, nSLV, nAction);
    auto& lvlData = GetLevelData(nSLV);
    if (auto action = lvlData._ZtlSecureGet_nAction(); action >= 0)
        return action == nAction;

    for (auto& act : aAction)
    {
        if (act == nAction)
            return true;
    }
    if (nSpecialAction == nAction)
        return true;
    if (nAction == 79)
    {
        for (auto& act : aAction)
        {
            if (act == 78)
                return true;
        }
    }
    return false;
}

int32_t SKILLENTRY::IsCorrectWeaponType(long nWT, long nSubWT) const
{
    //return __sub_002ECD40((SKILLENTRY*)this, nullptr, nWT, nSubWT);
    if (this->nSkillID == DB3_FLASHBANG)
        return 1;
    if (nSkillID > DW2_SOUL_BLADE)
    {
        if (nSkillID > EVAN2_FIRE_CIRCLE)
        {
            if (nSkillID > EVAN9_MAPLE_WARRIOR)
            {
                if (nSkillID > STAFF_BOOST)
                {
                    if (nSkillID == WH1_CROSSBOW_BOOSTER)
                        return nWT == 46;
                    if (nSkillID != MECH2_MECHANIC_RAGE)
                        goto LABEL_131;
                    return nWT == 49;
                }
                if (nSkillID == STAFF_BOOST)
                    return nWT == 38;
                if (nSkillID > EVAN10_SOUL_STONE || nSkillID < EVAN10_BLESSING_OF_THE_ONYX && nSkillID - 22171002 > 1)
                    goto LABEL_131;
            }
            else if (nSkillID != EVAN9_MAPLE_WARRIOR)
            {
                if (nSkillID > EVAN6_SLOW)
                {
                    if (nSkillID > EVAN8_RECOVERY_AURA
                        || nSkillID < EVAN8_EARTHQUAKE && (nSkillID < EVAN7_FIRE_BREATH || nSkillID >
                            EVAN7_MAGIC_RESISTANCE))
                    {
                        goto LABEL_131;
                    }
                }
                else if (nSkillID < EVAN6_DRAGON_THRUST)
                {
                    if (nSkillID > EVAN4_ELEMENTAL_RESET)
                    {
                        if (nSkillID < EVAN5_MAGIC_FLARE || nSkillID > EVAN5_MAGIC_SHIELD)
                            goto LABEL_131;
                    }
                    else if (nSkillID < EVAN4_ICE_BREATH && nSkillID != EVAN3_LIGHTNING_BOLT)
                    {
                        goto LABEL_131;
                    }
                }
            }
        }
        else
        {
            if (nSkillID == EVAN2_FIRE_CIRCLE)
                return nWT == 37 || nWT == 38;
            if (nSkillID > TB2_KNUCKLE_BOOSTER)
            {
                if (nSkillID <= TB3_SPARK)
                {
                    if (nSkillID == TB3_SPARK)
                        return nWT == 48;
                    if (nSkillID > TB2_ENERGY_BLAST)
                    {
                        if (nSkillID - 15111003 > 1)
                            goto LABEL_131;
                    }
                    else if (nSkillID != TB2_ENERGY_BLAST && nSkillID != TB2_CORKSCREW_BLOW)
                    {
                        goto LABEL_131;
                    }
                    return nWT == 39 || nWT == 48;
                }
                if (nSkillID == ARAN1_POLEARM_BOOSTER)
                    return nWT == 44;
                if (nSkillID != EVAN1_MAGIC_MISSILE)
                    goto LABEL_131;
            }
            else
            {
                if (nSkillID == TB2_KNUCKLE_BOOSTER)
                    return nWT == 48;
                if (nSkillID > WA2_FINAL_ATTACK)
                {
                    if (nSkillID == NW2_CLAW_BOOSTER)
                        return nWT == 47;
                    if (nSkillID != TB1_STRAIGHT)
                        goto LABEL_131;
                    return nWT == 39 || nWT == 48 || nWT == 49;
                }
                if (nSkillID >= WA2_BOW_BOOSTER)
                    return nWT == 45;
                if (nSkillID <= BW2_FIRE_PILLAR)
                {
                    if (nSkillID >= BW2_SPELL_BOOSTER)
                        return nWT == 37 || nWT == 38;
                    if (nSkillID - 11111006 > 1)
                        goto LABEL_131;
                    return nWT == 30 || nWT == 40;
                }
                if (nSkillID < BW3_FLAME_GEAR || nSkillID > BW3_FIRE_STRIKE)
                    goto LABEL_131;
            }
        }
        return nWT == 37 || nWT == 38;
    }
    if (nSkillID == DW2_SOUL_BLADE)
        return nWT == 30 || nWT == 40;
    if (nSkillID <= ASSASSIN_CLAW_BOOSTER)
    {
        if (nSkillID != ASSASSIN_CLAW_BOOSTER)
        {
            if (nSkillID <= SPEARNMAN_WEAPON_BOOSTER)
            {
                if (nSkillID == SPEARNMAN_WEAPON_BOOSTER)
                    return nWT == 43 || nWT == 44;
                if (nSkillID <= WK_ICE_CHARGE)
                {
                    if (nSkillID != WK_ICE_CHARGE)
                    {
                        if (nSkillID == FIGHTER_WEAPON_BOOSTER)
                            return nWT == 30 || nWT == 40 || nWT == 31 || nWT == 41;
                        if (nSkillID != PAGE_WEAPON_BOOSTER && nSkillID != WK_FIRE_CHARGE)
                            goto LABEL_131;
                    }
                    return nWT == 30 || nWT == 40 || nWT == 32 || nWT == 42;
                }
                if (nSkillID == WK_LIGHTNING_CHARGE || nSkillID == PALADIN_DIVINE_CHARGE)
                    return nWT == 30 || nWT == 40 || nWT == 32 || nWT == 42;
            LABEL_131:
                if (nSubWeapon && nSubWT != -1)
                    return nWT == this->nWeapon && nSubWT == nSubWeapon;
                return !nWeapon || nWT == nWeapon;
            }
            if (nSkillID <= IL2_ELEMENTAL_DECREASE)
            {
                if (nSkillID != IL2_ELEMENTAL_DECREASE)
                {
                    auto v5 = nSkillID - 2111005;
                    if (v5)
                    {
                        auto v6 = v5 - 3;
                        if (v6)
                        {
                            if (v6 != 99997)
                                goto LABEL_131;
                        }
                    }
                }
                return nWT == 37 || nWT == 38;
            }
            if (nSkillID != HUNTER_BOW_BOOSTER)
            {
                if (nSkillID != CROSSBOWMAN_CROSSBOW_BOOSTER)
                    goto LABEL_131;
                return nWT == 46;
            }
            return nWT == 45;
        }
        return nWT == 47;
    }
    if (nSkillID <= MARAUDER_ENERGY_BLAST)
    {
        if (nSkillID != MARAUDER_ENERGY_BLAST)
        {
            if (nSkillID <= PIRATE_FLASH_FIST)
            {
                if (nSkillID != PIRATE_FLASH_FIST)
                {
                    if (nSkillID != NIGHTLORD_SHADOW_STARS)
                    {
                        if (nSkillID == BANDIT_DAGGER_BOOSTER)
                            return nWT == 33;
                        if (nSkillID == DB1_KATARA_BOOSTER)
                            return nWT == 33 && nSubWT == 34;
                        goto LABEL_131;
                    }
                    return nWT == 47;
                }
                return nWT == 39 || nWT == 48 || nWT == 49;
            }
            if (nSkillID < BRAWLER_BACKSPIN_BLOW)
                goto LABEL_131;
            if (nSkillID > BRAWLER_CORKSCREW_BLOW)
            {
                if (nSkillID != BRAWLER_KNUCKLE_BOOSTER)
                    goto LABEL_131;
                return nWT == 48;
            }
        }
        return nWT == 39 || nWT == 48;
    }
    if (nSkillID <= BUCCANEER_BARRAGE)
    {
        if (nSkillID != BUCCANEER_BARRAGE)
        {
            if (nSkillID > BUCCANEER_ENERGY_ORB)
            {
                if (nSkillID < BUCCANEER_DEMOLITION || nSkillID > BUCCANEER_SNATCH)
                    goto LABEL_131;
            }
            else if (nSkillID < BUCCANEER_DRAGON_STRIKE && nSkillID != MARAUDER_SHOCKWAVE)
            {
                goto LABEL_131;
            }
        }
        return nWT == 39 || nWT == 48;
    }
    if (nSkillID != GUNSLINGER_GUN_BOOSTER)
    {
        if (nSkillID <= 11101000 || nSkillID > DW2_FINAL_ATTACK)
            goto LABEL_131;
        return nWT == 30 || nWT == 40;
    }
    return nWT == 49;
}

unsigned long SKILLENTRY::GetCrc()
{
    return dwCRC;
}

void SKILLENTRY::InitCrc()
{
    //__sub_002ED400(this, nullptr);
    uint32_t seed = 95;
    auto key = CCrc32::Get(seed, 0);
    dwCRC = CCrc32::Get(key, 0);
}

void SKILLENTRY::AddCrc(unsigned long nAddCrc)
{
    dwCRC ^= nAddCrc;
}

SKILLENTRY& SKILLENTRY::operator=(const SKILLENTRY& arg0) = default;

SKILLENTRY& SKILLENTRY::_op_assign_35(SKILLENTRY* pThis, const SKILLENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSkillInfo::~CSkillInfo()
{
}

void CSkillInfo::_dtor_0()
{
    this->~CSkillInfo();
}

CSkillInfo::CSkillInfo(const CSkillInfo& arg0)
{
    _ctor_1(arg0);
}

void CSkillInfo::_ctor_1(const CSkillInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSkillInfo::CSkillInfo()
{
    ms_pInstance = this;
}

void CSkillInfo::_ctor_0()
{
    new(this) CSkillInfo();
}

int32_t CSkillInfo::IterateSkillInfo()
{
    return __sub_00310390(this, nullptr);
}

int32_t CSkillInfo::LoadMobSkill()
{
    return __sub_0030BBD0(this, nullptr);
}

int32_t CSkillInfo::LoadMCSkill()
{
    return __sub_002FEB20(this, nullptr);
}

int32_t CSkillInfo::LoadMCGuardian()
{
    return __sub_002FF0D0(this, nullptr);
}

int32_t CSkillInfo::LoadItemSkill()
{
    return __sub_00307E70(this, nullptr);
}

int32_t CSkillInfo::LoadItemOptionSkill()
{
    return __sub_003083D0(this, nullptr);
}

int32_t CSkillInfo::LoadBFSkill()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const SKILLROOT* CSkillInfo::GetSkillRoot(long nSkillRootID)
{
    ZRef<SKILLROOT> entry{};
    m_mSkillRoot.GetAt(nSkillRootID, &entry);
    return entry.op_arrow();
}

const SKILLENTRY* CSkillInfo::GetSkill(long nSkillID)
{
    //return __sub_002F1BB0(this, nullptr, nSkillID);
    ZRef<SKILLENTRY> entry{};
    m_mSkill.GetAt(nSkillID, &entry);
    return entry.op_arrow();
}

void CSkillInfo::GetGuildSkill(long arg0, const SKILLENTRY** arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CSkillInfo::GetSkillRootVisible(long nSkillRootID, const CharacterData& cd, SKILLROOT& SkillRootVisible)
{
    __sub_002F4050(this, nullptr, nSkillRootID, cd, SkillRootVisible);
}

long CSkillInfo::GetPureSkillLevel(const CharacterData& c, long nSkillID, const SKILLENTRY** ppSkillEntry)
{
    //return __sub_002F1C80(this, nullptr, c, nSkillID, ppSkillEntry);

    auto skill = GetSkill(nSkillID);
    if (!skill)
        return 0;
    if (nSkillID == DB3_TORNADO_SPIN_ATTACK)
    {
        nSkillID = DB3_TORNADO_SPIN;
        skill = GetSkill(nSkillID);
        if (!skill)
            return 0;
    }


    if (ppSkillEntry)
        *ppSkillEntry = skill;
    long lvl{};
    if (!c.mSkillRecord.GetAt(nSkillID, &lvl))
        return 0;
    return std::min(lvl, skill->GetMaxLevel());
}

long CSkillInfo::GetSkillLevel(const CharacterData& c, const SecondaryStat& ss, long nSkillID,
                               const SKILLENTRY** ppSkillEntry)
{
    //return __sub_002F2000(this, nullptr, c, ss, nSkillID, ppSkillEntry);
    int result; // eax

    if (nSkillID > LEGEND_VISITOR_RANGE_ATTACK)
    {
        if (nSkillID > CITIZEN_VISITOR_RANGE_ATTACK
            || nSkillID < CITIZEN_VISITOR_MELEE_ATTACK
            && (nSkillID < EVANBEGINNER_VISITOR_MELEE_ATTACK || nSkillID > EVANBEGINNER_VISITOR_RANGE_ATTACK))
        {
            return GetSkillLevel(c, nSkillID, ppSkillEntry);
        }
    }
    else if (nSkillID < LEGEND_VISITOR_MELEE_ATTACK
        && (nSkillID > NOBLESSE_VISITOR_RANGE_ATTACK
            || nSkillID < NOBLESSE_VISITOR_MELEE_ATTACK
            && (nSkillID < BEGINNER_VISITOR_MELEE_ATTACK || nSkillID > BEGINNER_VISITOR_RANGE_ATTACK)))
    {
        return GetSkillLevel(c, nSkillID, ppSkillEntry);
    }
    if (ppSkillEntry)
        *ppSkillEntry = GetSkill(nSkillID);
    switch (ss._ZtlSecureGet_nMorph_())
    {
    case 65:
        result = 2;
        break;
    case 66:
        result = 3;
        break;
    case 67:
        result = 4;
        break;
    default:
        result = 1;
        break;
    }
    return result;
}

long CSkillInfo::GetSkillLevel(const CharacterData& c, long nSkillID, const SKILLENTRY** ppSkillEntry)
{
    //TODO(game)
    return __sub_002F1D10(this, nullptr, c, nSkillID, ppSkillEntry);
    /* const SKILLENTRY *Skill{};
     auto nSkillID_ = nSkillID;
     for (auto i = ppSkillEntry; ; i = 0)
     {
         while (1)
         {
             while (1)
             {
                 while (1)
                 {
                     while (1)
                     {
                         while (1)
                         {
                             while (1)
                             {
                                 if (nSkillID_ > LEGEND_RAGE_OF_PHARAOH)
                                 {
                                     if (nSkillID_ > EVANBEGINNER_VISITOR_RANGE_ATTACK)
                                     {
                                         switch (nSkillID_)
                                         {
                                         case CITIZEN_BAMBOO_RAIN:
                                         case CITIZEN_INVINCIBILITY:
                                         case CITIZEN_POWER_EXPLOSION:
                                         case CITIZEN_RAGE_OF_PHARAOH:
                                         case CITIZEN_VISITOR_MELEE_ATTACK:
                                         case CITIZEN_VISITOR_RANGE_ATTACK:
                                             goto $LN24_42;
                                         default:
                                             goto LABEL_10;
                                         }
                                     }
                                     if (nSkillID_ >= EVANBEGINNER_VISITOR_MELEE_ATTACK)
                                         goto $LN24_42;
                                     if (nSkillID_ > EVANBEGINNER_METEO_SHOWER)
                                     {
                                         if (nSkillID_ == EVANBEGINNER_RAGE_OF_PHARAOH)
                                             goto $LN24_42;
                                     }
                                     else if (nSkillID_ >= EVANBEGINNER_BAMBOO_THRUST
                                         || nSkillID_ >= LEGEND_VISITOR_MELEE_ATTACK && nSkillID_ <=
                                         LEGEND_VISITOR_RANGE_ATTACK)
                                     {
                                         goto $LN24_42;
                                     }
                                 }
                                 else
                                 {
                                     if (nSkillID_ == LEGEND_RAGE_OF_PHARAOH)
                                         goto $LN24_42;
                                     if (nSkillID_ <= NOBLESSE_METEO_SHOWER)
                                     {
                                         if (nSkillID_ < NOBLESSE_BAMBOO_THRUST)
                                         {
                                             switch (nSkillID_)
                                             {
                                             case BEGINNER_BAMBOO_RAIN:
                                             case BEGINNER_INVINCIBILITY:
                                             case BEGINNER_POWER_EXPLOSION:
                                             case BEGINNER_RAGE_OF_PHARAOH:
                                             case BEGINNER_VISITOR_MELEE_ATTACK:
                                             case BEGINNER_VISITOR_RANGE_ATTACK:
                                                 break;
                                             default:
                                                 goto LABEL_10;
                                             }
                                         }
                                     $LN24_42:
                                         if (i)
                                             *i = GetSkill(nSkillID_);
                                         return 1;
                                     }
                                     if (nSkillID_ > NOBLESSE_VISITOR_RANGE_ATTACK)
                                     {
                                         if (nSkillID_ >= LEGEND_BAMBOO_THRUST && nSkillID_ <= LEGEND_METEO_SHOWER)
                                             goto $LN24_42;
                                     }
                                     else if (nSkillID_ >= NOBLESSE_VISITOR_MELEE_ATTACK || nSkillID_ ==
                                         NOBLESSE_RAGE_OF_PHARAOH)
                                     {
                                         goto $LN24_42;
                                     }
                                 }
                             LABEL_10:
                                 if (!i || (Skill = *i) == nullptr)
                                     Skill = GetSkill(nSkillID_);
                                 if (i && !*i)
                                     *i = Skill;
                                 if (!Skill)
                                     return 0;
                                 if (nSkillID_ != DB3_TORNADO_SPIN_ATTACK)
                                     break;
                                 nSkillID_ = DB3_TORNADO_SPIN;
                                 i = nullptr;
                                 nSkillID = DB3_TORNADO_SPIN;
                             }
                             if (nSkillID_ != (MECH4_AMPLIFIER_ROBOT_AF11 | 0x1))
                                 break;
                             nSkillID_ = MECH4_BOTS_N_TOTS;
                             i = nullptr;
                             nSkillID = MECH4_BOTS_N_TOTS;
                         }
                         if (nSkillID_ != WH2_JAGUAROSHI_2 && nSkillID_ != WH2_JAGUAROSHI_1)
                             break;
                         nSkillID_ = WH2_JAGUAROSHI;
                         i = 0;
                         nSkillID = WH2_JAGUAROSHI;
                     }
                     if (nSkillID_ != MECH2_ENHANCED_FLAME_LAUNCHER)
                         break;
                     nSkillID_ = MECH1_FLAME_LAUNCHER;
                     i = nullptr;
                     nSkillID = MECH1_FLAME_LAUNCHER;
                 }
                 if (nSkillID_ != MECH2_ENHANCED_GATLING_GUN)
                     break;
                 nSkillID_ = MECH1_GATLING_GUN;
                 i = nullptr;
                 nSkillID = MECH1_GATLING_GUN;
             }
             if (nSkillID_ != WH2_ITS_RAINING_MINESHIDDEN_SELFDESTRUCT)
                 break;
             nSkillID_ = WH2_ITS_RAINING_MINES;
             i = nullptr;
             nSkillID = WH2_ITS_RAINING_MINES;
         }
         if (nSkillID_ != MECH4_MECH_SIEGE_MODE)
             break;
         nSkillID_ = MECH3_MECH_SIEGE_MODE;
         nSkillID = MECH3_MECH_SIEGE_MODE;
     }
     long lvl{};
     if (!c.mSkillRecord.GetAt(nSkillID, &lvl))
         return 0;
     if (!lvl)
         return 0;
     long lvlEx{};
     if (c.mSkillRecordEx.GetAt(nSkillID, &lvlEx))
         lvl += lvlEx;
     auto maxLevel = Skill->GetMaxLevel();
     if (Skill->bCombatOrders)
         maxLevel += c.nCombatOrders;

     if (lvl < maxLevel)
         maxLevel = lvl;
     return maxLevel <= 0 ? 0 : maxLevel;*/
}

long CSkillInfo::GetShootSkillRange(const CharacterData& cd, long nSkillID, long nWT)
{
    //return __sub_00309650(this, nullptr, cd, nSkillID, nWT);
    auto SkillLevel = 0;
    const SKILLENTRY* pSkill{};
    auto v8 = 0;
    auto result = 0;
    if (nSkillID)
    {
        SkillLevel = GetSkillLevel(cd, nSkillID, &pSkill);
        switch (nSkillID)
        {
        case MECH2_ENHANCED_FLAME_LAUNCHER:
            v8 = GetSkillLevel(cd, MECH1_FLAME_LAUNCHER, nullptr);
            SkillLevel = v8;
            break;
        case MECH2_ENHANCED_GATLING_GUN:
            v8 = GetSkillLevel(cd, MECH1_GATLING_GUN, nullptr);
            SkillLevel = v8;
            break;
        case MECH4_MECH_SIEGE_MODE:
            v8 = GetSkillLevel(cd, MECH3_MECH_SIEGE_MODE, nullptr);
            SkillLevel = v8;
            break;
        default:
            break;
        }
    }
    auto v9 = 0;
    auto job = cd.characterStat._ZtlSecureGet_nJob();
    if (pSkill
        && pSkill->GetLevelData(SkillLevel)._ZtlSecureGet_nRange() > 0)
    {
        return pSkill->GetLevelData(SkillLevel)._ZtlSecureGet_nRange();
    }
    if (nSkillID == NIGHTLORD_TAUNT || nSkillID == SHADOWER_TAUNT || nSkillID == WH4_STINK_BOMB_SHOT)
    {
        return 300;
    }
    if (nSkillID / 10000 / 100 == 33)
    {
        return 420;
    }
    if (nSkillID == MECH3_PUNCH_LAUNCHER)
    {
        auto& v13 = pSkill->GetLevelData(SkillLevel);
        return std::abs(v13.rcAffectedArea._ZtlSecureGet_left())
            - 60;
    }

    auto isCygnus = is_cygnus_job(job);
    auto slvl = 0;
    const SKILLENTRY* skillEntry{};
    switch (nWT)
    {
    case 45:
    case 46:
        slvl = GetSkillLevel(
            cd,
            isCygnus ? WA1_THE_EYE_OF_AMAZON : BOWMAN_THE_EYE_OF_AMAZON,
            &skillEntry);
        if (!slvl)
            return 300;
        return skillEntry->GetLevelData(slvl)._ZtlSecureGet_nRange() + 300;
    case 47:
        v9 = 200;
        slvl = GetSkillLevel(cd, isCygnus ? NW1_KEEN_EYES : THIEF_KEEN_EYES, &skillEntry);
        if (!slvl)
            return 200;
        return skillEntry->GetLevelData(slvl)._ZtlSecureGet_nRange() + 200;
    case 49:
        return 200;
    default:
        return v9;
    }
}

int32_t CSkillInfo::IsSkillVisible(const CharacterData& c, long nSkillID, const SKILLENTRY** ppSkillEntry)
{
    return __sub_002F20D0(this, nullptr, c, nSkillID, ppSkillEntry);
}

long CSkillInfo::GetMobTossSkillID(const CharacterData& c)
{
    //return __sub_002F4410(this, nullptr, c);
    std::array TOSS_SKILLS = {21110003, 4331004, 35101003};
    for (auto id : TOSS_SKILLS)
    {
        if (GetSkillLevel(c, id, nullptr))
            return id;
    }

    return 0;
}

const MOBSKILLENTRY* CSkillInfo::GetMobSkill(long nSkillID)
{
    //return __sub_002F30C0(this, nullptr, nSkillID);
    ZRef<MOBSKILLENTRY> entry{};
    m_mMobSkill.GetAt(nSkillID, &entry);
    return entry.op_arrow();
}

const MCSKILLENTRY* CSkillInfo::GetMCSkill(long nSkillID)
{
    ZRef<MCSKILLENTRY> entry{};
    m_mMCSkill.GetAt(nSkillID, &entry);
    return entry.op_arrow();
}

const MCSKILLENTRY* CSkillInfo::GetMCRandomSkill()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const MCGUARDIANENTRY* CSkillInfo::GetMCGuardian(long nSkillID) const
{
    ZRef<MCGUARDIANENTRY> entry{};
    m_mMCGuardian.GetAt(nSkillID, &entry);
    return entry.op_arrow();
}

const ITEMSKILLENTRY* CSkillInfo::GetItemSkill(long nSkillID) const
{
    ZRef<ITEMSKILLENTRY> entry{};
    m_mItemSkill.GetAt(nSkillID, &entry);
    return entry.op_arrow();
}

const ITEMOPTIONSKILLENTRY* CSkillInfo::GetItemOptionSkill(long nSkillID)
{
    ZRef<ITEMOPTIONSKILLENTRY> entry{};
    m_mItemOptionSkill.GetAt(nSkillID, &entry);
    return entry.op_arrow();
}

const BFSKILLENTRY* CSkillInfo::GetBFSkill(long arg0)
{
    ZRef<BFSKILLENTRY> entry{};
    m_mBFSkill.GetAt(arg0, &entry);
    return entry.op_arrow();
}

long CSkillInfo::CheckConsumeForActiveSkill(CharacterData& cd, const BasicStat& bs, const SecondaryStat& ss,
                                            long nSkillID, long* pHPCon, long* pMPCon)
{
    return __sub_0030B010(this, nullptr, cd, bs, ss, nSkillID, pHPCon, pMPCon);
}

int32_t __cdecl CSkillInfo::IsMobChaseAttack(const SKILLENTRY* pSkill, long nSLV)
{
    if (pSkill)
    {
        if (pSkill->nSkillID == THIEF_DISORDER || pSkill->nSkillID == CORSAIR_HYPNOTIZE || pSkill->nSkillID ==
            NW1_DISORDER)
            return 0;
    }
    return true;
}

int32_t CSkillInfo::LoadSkillRoot(long nSkillRootID, _x_com_ptr<IWzProperty> pSkillRoot, _x_com_ptr<IWzProperty> pStrSR)
{
    return __sub_0030FC00(this, nullptr, nSkillRootID, CreateNakedParam(pSkillRoot), CreateNakedParam(pStrSR));
}

ZRef<SKILLENTRY> CSkillInfo::LoadSkill(long arg0, _x_com_ptr<IWzProperty> arg1, _x_com_ptr<IWzProperty> arg2)
{
    ZRef<SKILLENTRY> ret;
    return *__sub_0030C190(this, nullptr, &ret, arg0, CreateNakedParam(arg1), CreateNakedParam(arg2));
}

int32_t CSkillInfo::LoadFinalAttack(ZArray<ZArray<long>>& a1, _x_com_ptr<IWzProperty> p1)
{
    return __sub_002F7680(this, nullptr, a1, CreateNakedParam(p1));
}

int32_t CSkillInfo::LoadReqSkill(ZList<GW_SkillRecord>& l, _x_com_ptr<IWzProperty> p)
{
    return __sub_002F7AA0(this, nullptr, l, CreateNakedParam(p));
}

int32_t CSkillInfo::LoadLevelData(long arg0, int32_t arg1, ZArray<SKILLLEVELDATA>& arg2, _x_com_ptr<IWzProperty> arg3,
                                  _x_com_ptr<IWzProperty> arg4, long arg5, const SKILLLEVELDATACommon* arg6)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CSkillInfo::LoadCharLevelData(long nSkillID, ZArray<CHARLEVELDATA>& a, _x_com_ptr<IWzProperty> p)
{
    return __sub_003093A0(this, nullptr, nSkillID, a, CreateNakedParam(p));
}

int32_t CSkillInfo::LoadLevelDataCommon(long nSkillID, _x_com_ptr<IWzProperty> pCommon, _x_com_ptr<IWzProperty> pStrSR,
                                        SKILLLEVELDATACommon& common, long& nMaxLevel)
{
    return __sub_002F47A0(this, nullptr, nSkillID, CreateNakedParam(pCommon), CreateNakedParam(pStrSR), common,
                          nMaxLevel);
}

int32_t CSkillInfo::LoadMobSkillLevelData(long arg0, ZArray<MOBSKILLLEVELDATA>& arg1, _x_com_ptr<IWzProperty> arg2)
{
    return __sub_00306D30(this, nullptr, arg0, arg1, CreateNakedParam(arg2));
}

int32_t CSkillInfo::LoadItemSkillLevelData(long arg0, ZArray<ZRef<ITEMSKILLLEVELDATA>>& arg1,
                                           _x_com_ptr<IWzProperty> arg2)
{
    return __sub_00306150(this, nullptr, arg0, arg1, CreateNakedParam(arg2));
}

int32_t CSkillInfo::LoadItemOptionSkillLevelData(long arg0, ZArray<ZRef<ITEMOPTIONSKILLLEVELDATA>>& arg1,
                                                 _x_com_ptr<IWzProperty> arg2)
{
    return __sub_00306710(this, nullptr, arg0, arg1, CreateNakedParam(arg2));
}

void CSkillInfo::DrawSkillIconForSlot(_x_com_ptr<IWzCanvas> arg0, long arg1, long arg2, long arg3, int32_t arg4)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSkillInfo& CSkillInfo::operator=(const CSkillInfo& arg0) = default;

CSkillInfo& CSkillInfo::_op_assign_40(CSkillInfo* pThis, const CSkillInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

uint32_t __fastcall _ZtlSecureTear_float_(float t, float* arg1)
{
    return __sub_002EF6A0(t, arg1);
}

long __cdecl get_random_melee_attack_action(long nAttackActionType, long nWT, const SKILLENTRY* pSkill, long nSLV,
                                            uint32_t nRandNumber)
{
    //return __sub_0030B700(nAttackActionType, nWT, pSkill, nSLV, nRandNumber);
    auto v6 = 0;
    if ((nAttackActionType - 1) > 9)
        return -1;
    if (!pSkill)
        goto LABEL_9;
    if (!pSkill->IsCorrectWeaponType(nWT, -1))
        return -1;
    if (pSkill->IsActionAppointed(nSLV))
    {
        if (pSkill->nSkillType != 3)
            return pSkill->GetRandomAppointedAction(nSLV, nRandNumber);
        goto LABEL_8;
    }
    if (pSkill->nSkillType != 3)
    {
    LABEL_9:
        v6 = 2 * nAttackActionType - 2;
        goto LABEL_10;
    }
LABEL_8:
    v6 = 2 * nAttackActionType - 1;
LABEL_10:

    auto n = _D_AMELEEATTACKACTI[v6][0];
    if (n <= 0)
        return -1;
    auto rnd = nRandNumber % n;
    return _D_AMELEEATTACKACTI[v6][rnd + 1];
}

char __cdecl _anon_get_char(Ztl_variant_t& v, char cDefault)
{
    return __sub_002F4510(v, cDefault);
}

long __cdecl get_novice_skill_point(const CharacterData& cd)
{
    return __sub_002F0C20(cd);
}

int32_t __cdecl is_correct_melee_attack(long nAttackActionType, long nWT, long nAction, const SKILLENTRY* pSkill,
                                        long nSLV)
{
    //return __sub_0030B8E0(nAttackActionType, nWT, nAction, pSkill, nSLV);
    if ((nAttackActionType - 1) > 9)
        return false;
    if ( nAction == 41 || nAction == 57 )
        return pSkill == nullptr;
    auto act = 2 * nAttackActionType - 2;

    if (pSkill)
    {
        if (!pSkill->IsCorrectWeaponType(nWT, -1))
            return false;

        if (pSkill->IsActionAppointed(nSLV) && pSkill->nSkillType != 3)
        {
            return pSkill->IsCorrectAppointedAction(nSLV, nAction);
        }
        if (pSkill->nSkillType == 3)
        {
            act = 2 * nAttackActionType - 1;
        }
    }

    auto n = _D_AMELEEATTACKACTI[act][0];
    for (auto i = 0; i < n; ++i)
    {
        if (_D_AMELEEATTACKACTI[act][i + 1] == nAction)
            return true;
    }

    return false;
}

long __cdecl get_amplification(const CharacterData& cd, long nSkillID, long* pnIncMPCon)
{
    return __sub_0030A5E0(cd, nSkillID, pnIncMPCon);
}

int32_t __cdecl is_not_depend_on_weapon_skill(const SKILLENTRY* pSkill, long nSLV, long nJobCode)
{
    return __sub_002EEAA0(pSkill, nSLV, nJobCode);
}

long __cdecl get_weapon_mastery(const CharacterData& cd, const SecondaryStat& ss, long nWeaponItemID, long nAttackType,
                                long nSkillID, long* pnACCInc, long* pnPADInc)
{
    return __sub_00309950(cd, ss, nWeaponItemID, nAttackType, nSkillID, pnACCInc, pnPADInc);
}

long __cdecl get_magic_mastery(const CharacterData& cd, long* pnMADInc, long nWeaponItemID)
{
    //return __sub_00309F30(cd, pnMADInc, nWeaponItemID);
    auto job = cd.characterStat._ZtlSecureGet_nJob() / 10;
    long inc = 0;
    auto result = 0;
    auto mastery_from_skill = 0;
    switch (job)
    {
    case 220:
    case 221:
        mastery_from_skill = get_mastery_from_skill(cd, EVAN4_SPELL_MASTERY, pnMADInc);
        result = get_mastery_from_skill(cd, EVAN9_MAGIC_MASTERY, &inc);
        if (result)
        {
            if (pnMADInc)
                *pnMADInc += inc;
        }
        else
        {
            result = mastery_from_skill;
        }
        return result;
    case 320:
    case 321:
        return get_mastery_from_skill(cd, STAFF_MASTERY, pnMADInc);
    case 21:
        return get_mastery_from_skill(cd, FP1_SPELL_MASTERY, pnMADInc);
    case 22:
        return get_mastery_from_skill(cd, IL1_SPELL_MASTERY, pnMADInc);
    case 23:
        return get_mastery_from_skill(cd, CLERIC_SPELL_MASTERY, pnMADInc);
    case 120:
    case 121:
        return get_mastery_from_skill(cd, BW2_SPELL_MASTERY, pnMADInc);
    default:
        return 0;
    }
}

long __cdecl _anon_char2elem_attr(char chr)
{
    int result; // eax

    switch (chr)
    {
    case 'F':
        result = 2;
        break;
    case 'I':
        result = 1;
        break;
    case 'L':
        result = 3;
        break;
    default:
        result = 4;
        break;
    }
    return result;
}

long __cdecl get_mastery_from_skill(const CharacterData& cd, const long nSkillID, long* pnInc)
{
    //return __sub_003098C0(cd, nSkillID, pnInc);
    const SKILLENTRY* pSkill{};
    auto slvl = CSkillInfo::GetInstance()->GetSkillLevel(cd, nSkillID, &pSkill);
    if (pnInc)
    {
        if (slvl <= 0)
        {
            *pnInc = 0;
        }
        else
        {
            auto& lvl = pSkill->GetLevelData(slvl);
            *pnInc = lvl._ZtlSecureGet_nX();
        }
    }

    if (!slvl)
        return 0;

    auto& lvl = pSkill->GetLevelData(slvl);
    return lvl._ZtlSecureGet_nMastery();
}

int32_t __cdecl is_shoot_skill_not_showing_bullet(const SKILLENTRY* pSkill)
{
    //return __sub_002EDC50(pSkill);
    if (!pSkill)
        return 0;
    if (pSkill->nSkillType != 3)
    {
        auto nSkillID = pSkill->nSkillID;
        auto v3 = false;
        if (pSkill->nSkillID > 13111000)
        {
            if (nSkillID > WH4_EXPLODING_ARROWS)
            {
                if (nSkillID == MECH1_FLAME_LAUNCHER || nSkillID == MECH2_ENHANCED_FLAME_LAUNCHER)
                    return 1;
                v3 = nSkillID == MECH4_LASER_BLAST;
            }
            else
            {
                if (nSkillID == WH4_EXPLODING_ARROWS || nSkillID == NW2_VAMPIRE || nSkillID == ARAN4_COMBO_TEMPEST)
                    return 1;
                v3 = nSkillID == WH2_JAGUAR_RAWR;
            }
        }
        else
        {
            if (nSkillID == WA3_ARROW_RAIN)
                return 1;
            if (nSkillID > SNIPER_ARROW_ERUPTION)
            {
                if (nSkillID > OUTLAW_ICE_SPLITTER)
                {
                    v3 = nSkillID == WA2_STORM_BREAK;
                }
                else
                {
                    if (nSkillID >= OUTLAW_FLAMETHROWER)
                        return 1;
                    v3 = nSkillID == GUNSLINGER_INVISIBLE_SHOT;
                }
            }
            else
            {
                if (nSkillID == SNIPER_ARROW_ERUPTION || nSkillID == HUNTER_POWER_KNOCKBACK || nSkillID ==
                    RANGER_ARROW_RAIN)
                    return 1;
                v3 = nSkillID == CROSSBOWMAN_POWER_KNOCKBACK;
            }
        }
        if (!v3)
            return 0;
    }
    return 1;
}

long __cdecl get_critical_skill_level(const CharacterData& cd, long nWeaponItemID, long nAttackType, long* pnProp,
                                      long* pnParam)
{
    return __sub_0030A240(cd, nWeaponItemID, nAttackType, pnProp, pnParam);
}

float __cdecl _ZtlSecureFuse_float_(const float* at, uint32_t uCS)
{
    return __sub_002EE3E0(at, uCS);
}

long __cdecl get_combo_damage_param(const CharacterData& cd, long nSkillID, long nComboCounter)
{
    return __sub_0030A410(cd, nSkillID, nComboCounter);
}

long __cdecl get_max_durability_of_vehicle(long nSkillID, long nSLV, long nCharLevel)
{
    if (nSkillID == CORSAIR_BATTLESHIP)
        return 300 * nCharLevel + 500 * (nSLV - 72);
    else
        return -1;
}

long __cdecl get_summon_skill_id_from_idx(const CharacterData& cd, long nIdx)
{
    //return __sub_002EE930(cd, nIdx);
    auto job = cd.characterStat._ZtlSecureGet_nJob();
    if (is_correct_job_for_skill_root(job, 311))
    {
        if (nIdx == 1)
            return 3111002;
        if (nIdx == 2)
            return 3111005;
    };
    if (is_correct_job_for_skill_root(job, 321))
    {
        if (nIdx == 1)
            return 3211002;
        if (nIdx == 2)
            return 3211005;
    }
    if (is_correct_job_for_skill_root(job, 231) && nIdx == 1)
        return 2311006;
    if (is_correct_job_for_skill_root(job, 1311) && nIdx == 1)
        return 13111004;
    if (is_correct_job_for_skill_root(job, 434) && nIdx == 1)
        return 4341006;
    if (is_correct_job_for_skill_root(job, 3311))
    {
        if (nIdx == 1)
            return 33111003;
        if (nIdx == 2)
            return 33111005;
    }
    return 0;
}

long __cdecl get_summoned_attack_damage(long nAIType, long nSkillID, long nDamage, const CharacterData& cd)
{
    //return __sub_0030A110(nAIType, nSkillID, nDamage, cd);
    auto skillInfo = CSkillInfo::GetInstance();
    if (nAIType != 1)
        return nDamage;
    nAIType = 0;
    const SKILLENTRY* pSkill{};
    auto SkillLevel = skillInfo->GetSkillLevel(cd, nSkillID, &pSkill);
    auto LevelData = pSkill->GetLevelData(nAIType);

    auto selfDestruct = LevelData._ZtlSecureGet_nSelfDestruction();
    if (nSkillID == (MECH4_AMPLIFIER_ROBOT_AF11 | 0x1))
    {
        auto v10 = skillInfo->GetSkillLevel(cd, MECH4_EXTREME_MECH | 0x2, &pSkill);
        if (v10 <= 0)
        {
            return selfDestruct;
        }
        else
        {
            auto v11 = pSkill->GetLevelData(v10);
            return v11._ZtlSecureGet_nPAD();
        }
    }
    return selfDestruct;
}

long __cdecl get_resistance(const CharacterData& cd, const SecondaryStat& ss, long nElement)
{
    return __sub_0030A910(cd, ss, nElement);
}


bool get_element_attribute_from_char(wchar_t c, long& attr)
{
    switch (c)
    {
    //TODO case 0:
    case L'P':
    case L'p':
        attr = 0;
        return 1;
    case L'D':
    case L'd':
        attr = 6;
        return 1;
    case L'F':
    case L'f':
        attr = 2;
        return 1;
    case L'H':
    case L'h':
        attr = 5;
        return 1;
    case L'I':
    case L'i':
        attr = 1;
        return 1;
    case 'L':
    case 'l':
        attr = 3;
        return 1;
    case 'S':
    case 's':
        attr = 4;
        return 1;
    case 'U':
    case 'u':
        attr = 7;
        return 1;
    default:
        attr = 0;
        return 0;
    }
}

int32_t __cdecl get_element_attribute(const wchar_t* sAttr, long& ret)
{
    switch (sAttr[0])
    {
    case 0:
    case L'P':
    case L'p':
        ret = 0;
        return 1;
    case L'D':
    case L'd':
        ret = 6;
        return 1;
    case L'F':
    case L'f':
        ret = 2;
        return 1;
    case L'H':
    case L'h':
        ret = 5;
        return 1;
    case L'I':
    case L'i':
        ret = 1;
        return 1;
    case 'L':
    case 'l':
        ret = 3;
        return 1;
    case 'S':
    case 's':
        ret = 4;
        return 1;
    case 'U':
    case 'u':
        ret = 7;
        return 1;
    default:
        ret = 0;
        return 0;
    }
    // return __sub_002ED2D0(arg0, arg1);
}

// Special calling convention
NAKED int32_t __cdecl __get_element_attribute()
{
    __asm {
        // ret is in eax
        push eax
        // sAttr is in ecx
        push ecx
        call get_element_attribute
        add esp, 8
        ret
        }
}

int32_t __cdecl get_element_attribute_list(const wchar_t* sAttr, long* p)
{
    memset(p, 0, sizeof(long) * 8);
    if (!sAttr)
    {
        return 1;
    }

    while (*sAttr)
    {
        auto attrChr = *sAttr;
        ++sAttr;

        auto value = 0;
        if (*sAttr)
        {
            while (*sAttr >= L'0' && *sAttr <= L'9')
            {
                value = value * 10 + *sAttr - L'0';
                ++sAttr;
            }
        }
        long elem = 0;
        if (!get_element_attribute_from_char(attrChr, elem))
        {
            return 0;
        }
        p[elem] = value;
    }

    return 1;
}

// Special calling convention
NAKED int32_t __cdecl __get_element_attribute_list()
{
    __asm {
        // ret is in eax
        push esi
        // sAttr is in ecx
        push edx
        call get_element_attribute_list
        add esp, 8
        ret
        }
}

bool is_correct_shoot_attack(int32_t nAttackActionType, int32_t nWT, int32_t nAction, SKILLENTRY const* pSkill,
    int32_t nSLV)
{
    if ((nAttackActionType - 1) > 9)
        return false;
    auto act = 2 * nAttackActionType - 2;

    if (pSkill)
    {
        if (!pSkill->IsCorrectWeaponType(nWT, -1))
            return false;

        if (pSkill->IsActionAppointed(nSLV) && pSkill->nSkillType != 3)
        {
            return pSkill->IsCorrectAppointedAction(nSLV, nAction);
        }
        if (pSkill->nSkillType == 3)
        {
            act = 2 * nAttackActionType - 1;
        }
    }

    auto n = _D_ASHOOTATTACKACTI[act][0];
    for (auto i = 0; i < n; ++i)
    {
        if (_D_ASHOOTATTACKACTI[act][i + 1] == nAction)
            return true;
    }

    return false;
}

bool is_correct_normal_attack(int32_t nAttackActionType, int32_t nWT, int32_t nAction, SKILLENTRY const* pSkill,
    int32_t nSLV)
{
    return is_correct_melee_attack(nAttackActionType, nWT, nAction, pSkill, nSLV)
        || is_correct_shoot_attack(nAttackActionType, nWT, nAction, pSkill, nSLV);
}
