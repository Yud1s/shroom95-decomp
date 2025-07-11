// GW.cpp
#include "GW.hpp"
#include "GW_regen.ipp"
#include "spdlog/spdlog.h"


GW_CharacterStat::~GW_CharacterStat()
{

}

void GW_CharacterStat::_dtor_0()
{
    this->~GW_CharacterStat();
}

GW_CharacterStat::GW_CharacterStat(const GW_CharacterStat& arg0)
{
    _ctor_1(arg0);
}

void GW_CharacterStat::_ctor_1(const GW_CharacterStat& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GW_CharacterStat::GW_CharacterStat()
{
    //TODO __sub_000824B0(this, nullptr);
}

void GW_CharacterStat::_ctor_0()
{
    new(this) GW_CharacterStat();
}

_ZTL_SEC_GETSETI(unsigned char, GW_CharacterStat, nLevel)
_ZTL_SEC_GETSETI(short, GW_CharacterStat, nJob)
_ZTL_SEC_GETSETI(short, GW_CharacterStat, nSTR)
_ZTL_SEC_GETSETI(short, GW_CharacterStat, nDEX)
_ZTL_SEC_GETSETI(short, GW_CharacterStat, nINT)
_ZTL_SEC_GETSETI(short, GW_CharacterStat, nLUK)
_ZTL_SEC_GETSETI(long, GW_CharacterStat, nHP)
_ZTL_SEC_GETSETI(long, GW_CharacterStat, nMHP)
_ZTL_SEC_GETSETI(long, GW_CharacterStat, nMP)
_ZTL_SEC_GETSETI(long, GW_CharacterStat, nMMP)
_ZTL_SEC_GETSETI(short, GW_CharacterStat, nAP)
_ZTL_SEC_GETSETI(short, GW_CharacterStat, nSP)
_ZTL_SEC_GETSETI(long, GW_CharacterStat, nEXP)
_ZTL_SEC_GETSETI(short, GW_CharacterStat, nPOP)
_ZTL_SEC_GETSETI(long, GW_CharacterStat, nMoney)
_ZTL_SEC_GETSETI(long, GW_CharacterStat, nTempEXP)
_ZTL_SEC_GETSETI(unsigned long, GW_CharacterStat, dwPosMap)

void GW_CharacterStat::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_CharacterStat::EncodeMoney(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_CharacterStat::Decode(CInPacket& iPacket, int32_t bBackwardUpdate)
{
    __sub_000F9D40(this, nullptr, iPacket, bBackwardUpdate);
    spdlog::info("str: {}, dex: {}, int: {}, luk: {}", _ZtlSecureGet_nSTR(), _ZtlSecureGet_nDEX(), _ZtlSecureGet_nINT(), _ZtlSecureGet_nLUK());
}

void GW_CharacterStat::DecodeMoney(CInPacket& iPacket)
{
    _ZtlSecurePut_nMoney(iPacket.Decode4());
}

void GW_CharacterStat::EncodeChangeStat(unsigned long arg0, COutPacket& arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned long GW_CharacterStat::DecodeChangeStat(CInPacket& iPacket)
{
    return __sub_000FA000(this, nullptr, iPacket);
}

ZXString<char> GW_CharacterStat::GetString()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GW_CharacterStat& GW_CharacterStat::operator=(const GW_CharacterStat& __that) = default;

GW_CharacterStat& GW_CharacterStat::_op_assign_44(GW_CharacterStat* pThis, const GW_CharacterStat& __that)
{
    *pThis = __that;
    return *pThis;
}

void* GW_GuildBBSComment::GetDataBlock()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void* GW_GuildBBSEntryText::GetDataBlock()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GW_ItemSlotEquipOpt::GW_ItemSlotEquipOpt()
{
    _ZtlSecurePut_nGrade(0);
    _ZtlSecurePut_nCHUC(0);
    _ZtlSecurePut_nOption1(0);
    _ZtlSecurePut_nOption2(0);
    _ZtlSecurePut_nOption3(0);
    _ZtlSecurePut_nSocket1(0);
    _ZtlSecurePut_nSocket2(0);
    //return __sub_000F4C40(this, nullptr);
}

void GW_ItemSlotEquipOpt::_ctor_0()
{
    new(this) GW_ItemSlotEquipOpt();
}

_ZTL_SEC_GETSETI(unsigned char, GW_ItemSlotEquipOpt, nGrade)
_ZTL_SEC_GETSETI(unsigned char, GW_ItemSlotEquipOpt, nCHUC)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipOpt, nOption1)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipOpt, nOption2)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipOpt, nOption3)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipOpt, nSocket1)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipOpt, nSocket2)

GW_WildHunterInfo::GW_WildHunterInfo()
{
    UNIMPLEMENTED; //_ctor_0();
}

void GW_WildHunterInfo::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long GW_WildHunterInfo::GetRidingType()
{
    return this->nRidingType;
}

long GW_WildHunterInfo::GetRidingItem()
{
    return __sub_0053A170(this, nullptr);
}

void GW_WildHunterInfo::SetRidingType(unsigned char arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t GW_WildHunterInfo::CheckOverlapMob(unsigned long dwCapturedMob)
{
    return __sub_00539FE0(this, nullptr, dwCapturedMob);
}

int32_t GW_WildHunterInfo::AddCapturedMob(unsigned long dwCapturedMob)
{
    return __sub_00539FE0(this, nullptr, dwCapturedMob);
}

unsigned long GW_WildHunterInfo::GetRandomCapturedMob()
{
    return __sub_0053A2C0(this, nullptr);
}

unsigned long* GW_WildHunterInfo::GetCaptureMobList()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long GW_WildHunterInfo::GetIdx()
{
    return this->nIdx;
}

void GW_WildHunterInfo::Decode(CInPacket& iPacket)
{
    __sub_000F2BC0(this, nullptr, iPacket);
}

void GW_WildHunterInfo::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_WildHunterInfo::Arrange()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_MiniGameRecord::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_MiniGameRecord::Decode(CInPacket& iPacket)
{
    __sub_000F2AD0(this, nullptr, iPacket);
}

void GW_MiniGameRecord::InitializeData(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_Memo::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_Memo::Decode(CInPacket& iPacket)
{
    __sub_000F8D40(this, nullptr, iPacket);
}

ExtendSP::~ExtendSP()
{
    //UNIMPLEMENTED; // _dtor_0();
}

void ExtendSP::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ExtendSP::ExtendSP(const ExtendSP& arg0)
{
    _ctor_1(arg0);
}

void ExtendSP::_ctor_1(const ExtendSP& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ExtendSP::ExtendSP()
{
}

void ExtendSP::_ctor_0()
{
    new(this) ExtendSP();
}

unsigned char ExtendSP::Get(unsigned char nJobLevel)
{
    for (auto& sp: lSPSet)
    {
        if (sp._ZtlSecureGet_nJobLevel() == nJobLevel)
            return sp._ZtlSecureGet_nSP();
    }
    return 0;
}

long ExtendSP::GetTotalSP()
{
    auto sum = 0;
    for (auto& sp: lSPSet)
    {
        sum += sp._ZtlSecureGet_nSP();
    }
    return sum;
}

void ExtendSP::Decode(CInPacket& iPacket)
{
    auto len = iPacket.Decode1();
    for (int i = 0; i < len; ++i)
    {
        lSPSet.Insert(SPSet(iPacket.Decode1(), iPacket.Decode1()));
    }
}

void ExtendSP::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void ExtendSP::RemoveAll()
{
    lSPSet.RemoveAll();
}

void ExtendSP::Set(unsigned char arg0, unsigned char arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t ExtendSP::MakeSPString(char* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ExtendSP& ExtendSP::operator=(const ExtendSP& arg0)
{
    return _op_assign_10(this, arg0);
}

ExtendSP& ExtendSP::_op_assign_10(ExtendSP* pThis, const ExtendSP& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_NewYearCardRecord::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_NewYearCardRecord::Decode(CInPacket& iPacket)
{
    __sub_000F8BF0(this, nullptr, iPacket);
}

void __cdecl GW_NewYearCardRecord::SaveExtraData(long arg0, char* arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long __cdecl GW_NewYearCardRecord::LoadExtraData(const char* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool __cdecl GW_NewYearCardRecord::IsExtraDataSaved(const char* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

FUNCKEY_MAPPED::FUNCKEY_MAPPED(unsigned char type, long id): nType(type), nID(id)
{
}

void FUNCKEY_MAPPED::Encode(COutPacket& oPacket)
{
    oPacket.EncodeBuffer(this, sizeof(FUNCKEY_MAPPED));
}

void FUNCKEY_MAPPED::Decode(CInPacket& iPacket)
{
    iPacket.DecodeBuffer(this, sizeof(FUNCKEY_MAPPED));
}

int32_t FUNCKEY_MAPPED::IsItemShortCut()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t FUNCKEY_MAPPED::IsBasicShortCut()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_FriendRecord::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_FriendRecord::Decode(CInPacket& iPacket)
{
    __sub_000F2B70(this, nullptr, iPacket);
}

long __cdecl GW_RadioSchedule::GetDataSize()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void* GW_RadioSchedule::GetDataBlock()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> GW_RadioSchedule::GetTrack()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t GW_RadioSchedule::IsEqual(const GW_RadioSchedule& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_RadioSchedule::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_RadioSchedule::Decode(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_WeddingReservation::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_WeddingReservation::Decode(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

SPSet::SPSet(unsigned char arg0, unsigned char arg1)
{
    _ZtlSecurePut_nJobLevel(arg0);
    _ZtlSecurePut_nSP(arg1);
    //_ctor_0( arg0, arg1);
}

void SPSet::_ctor_0(unsigned char arg0, unsigned char arg1)
{
    new(this) SPSet(arg0, arg1);
}

SPSet::SPSet()
{
}

void SPSet::_ctor_1()
{
    new(this) SPSet();
}

_ZTL_SEC_GETSETI(unsigned char, SPSet, nJobLevel);
_ZTL_SEC_GETSETI(unsigned char, SPSet, nSP);

void GW_CoupleRecord::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_CoupleRecord::Decode(CInPacket& iPacket)
{
    __sub_000F2B60(this, nullptr, iPacket);
}

void GW_MarriageRecord::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_MarriageRecord::Decode(CInPacket& iPacket)
{
    __sub_000F2B50(this, nullptr, iPacket);
}

int32_t GW_MonsterBookCardLess::operator()(const ZRef<GW_MonsterBookCard> arg0, const ZRef<GW_MonsterBookCard> arg1)
{
    return _op_call_0(this, arg0, arg1);
}

int32_t GW_MonsterBookCardLess::_op_call_0(GW_MonsterBookCardLess* pThis, const ZRef<GW_MonsterBookCard> arg0,
                                           const ZRef<GW_MonsterBookCard> arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_Friend::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_Friend::Decode(CInPacket& iPacket)
{
    __sub_000F2B30(this, nullptr, iPacket);
}

void __cdecl GW_MonsterBookCode::Encode(COutPacket& arg0, ZArray<ZRef<GW_MonsterBookCard>>& arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl GW_MonsterBookCode::Decode(CInPacket& arg0, ZArray<ZRef<GW_MonsterBookCard>>& arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GW_ItemSlotEquipBase::GW_ItemSlotEquipBase()
{
    this->_ZtlSecurePut_nLevel(0);
    this->_ZtlSecurePut_nEXP(0);
    this->_ZtlSecurePut_nDurability(0);
    this->_ZtlSecurePut_nIUC(0);
    this->_ZtlSecurePut_nRUC(0);
    this->_ZtlSecurePut_nCUC(0);
    this->_ZtlSecurePut_niSTR(0);
    this->_ZtlSecurePut_niDEX(0);
    this->_ZtlSecurePut_niINT(0);
    this->_ZtlSecurePut_niLUK(0);
    this->_ZtlSecurePut_niMaxHP(0);
    this->_ZtlSecurePut_niMaxMP(0);
    this->_ZtlSecurePut_niPAD(0);
    this->_ZtlSecurePut_niMAD(0);
    this->_ZtlSecurePut_niPDD(0);
    this->_ZtlSecurePut_niMDD(0);
    this->_ZtlSecurePut_niACC(0);
    this->_ZtlSecurePut_niEVA(0);
    this->_ZtlSecurePut_niCraft(0);
    this->_ZtlSecurePut_niSpeed(0);
    this->_ZtlSecurePut_niJump(0);
    this->_ZtlSecurePut_nAttribute(0);
    this->_ZtlSecurePut_nLevelUpType(0);

}

void GW_ItemSlotEquipBase::_ctor_0()
{
    new(this) GW_ItemSlotEquipBase();
}

_ZTL_SEC_GETSETI(unsigned char, GW_ItemSlotEquipBase, nRUC)
_ZTL_SEC_GETSETI(unsigned char, GW_ItemSlotEquipBase, nCUC)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, niSTR)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, niDEX)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, niINT)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, niLUK)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, niMaxHP)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, niMaxMP)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, niPAD)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, niMAD)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, niPDD)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, niMDD)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, niACC)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, niEVA)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, niCraft)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, niSpeed)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, niJump)
_ZTL_SEC_GETSETI(short, GW_ItemSlotEquipBase, nAttribute)
_ZTL_SEC_GETSETI(unsigned char, GW_ItemSlotEquipBase, nLevelUpType)
_ZTL_SEC_GETSETI(unsigned char, GW_ItemSlotEquipBase, nLevel)
_ZTL_SEC_GETSETI(long, GW_ItemSlotEquipBase, nEXP)
_ZTL_SEC_GETSETI(long, GW_ItemSlotEquipBase, nDurability)
_ZTL_SEC_GETSETI(long, GW_ItemSlotEquipBase, nIUC)

void GW_WeddingWishList::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_WeddingWishList::Decode(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void* GW_GuildBBSEntryList::GetDataBlock()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GW_ItemSlotBase::~GW_ItemSlotBase()
{
}

void GW_ItemSlotBase::_dtor_0()
{
    this->~GW_ItemSlotBase();
}

GW_ItemSlotBase::GW_ItemSlotBase(const GW_ItemSlotBase& arg0)
{
    _ctor_1(arg0);
}

void GW_ItemSlotBase::_ctor_1(const GW_ItemSlotBase& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GW_ItemSlotBase::GW_ItemSlotBase()
{
}

void GW_ItemSlotBase::_ctor_0()
{
    new(this) GW_ItemSlotBase();
}

ZRef<GW_ItemSlotBase> __cdecl GW_ItemSlotBase::CreateItem(long nType)
{
    //return __sub_000F75E0(nType);
    ZRef<GW_ItemSlotBase> item;

    switch (nType)
    {
    case 1:
        item = new GW_ItemSlotEquip();
        break;
    case 2:
        item = new GW_ItemSlotBundle();
        break;
    case 3:
        item = new GW_ItemSlotPet();
        break;
    default:
        break;
    }

    return item;
}

ZRef<GW_ItemSlotBase> __cdecl GW_ItemSlotBase::Decode(CInPacket& pkt)
{
    //return __sub_000F7EA0(iPacket);
    auto ty = pkt.Decode1();
    auto item = CreateItem(ty);
    if (item)
    {
        item->RawDecode(pkt);
    }

    return item;
}

void GW_ItemSlotBase::Encode(COutPacket& oPacket)
{
    //__sub_000F6660(this, nullptr, oPacket);
    oPacket.Encode1(GetType());
    RawEncode(oPacket);
}

int32_t GW_ItemSlotBase::IsCashItem()
{
    //return __sub_0009C620(this, nullptr);
    return liCashItemSN.QuadPart != 0;
}

int32_t GW_ItemSlotBase::IsTimeLimitedItem()
{
    return CompareFileTime(&this->dateExpire, &_D_DB_DATE_20790101) < 0;
}

long GW_ItemSlotBase::GetTypeIndex()
{
    //TODO(game)
    return 0;
}

int32_t GW_ItemSlotBase::IsProtectedItem()
{
    return 0;
}

int32_t GW_ItemSlotBase::IsPreventSlipItem()
{
    return 0;
}

int32_t GW_ItemSlotBase::IsSupportWarmItem()
{
    return 0;
}

int32_t GW_ItemSlotBase::IsBindedItem()
{
    return 0;
}

int32_t GW_ItemSlotBase::IsPossibleTradingItem()
{
    return 0;
}

int32_t GW_ItemSlotBase::IsSharedOnceItem()
{
    return 0;
}

long GW_ItemSlotBase::GetType()
{
    return 0;
}

long GW_ItemSlotBase::GetDataSize()
{
    return 0;
}

long GW_ItemSlotBase::GetItemNumber()
{
    return this->nItemID;
}

long GW_ItemSlotBase::GetLevelUpType()
{
    return 0;
}

long GW_ItemSlotBase::GetLevel()
{
    return 0;
}

long GW_ItemSlotBase::GetEXP()
{
    return 0;
}

void GW_ItemSlotBase::SetItemNumber(short arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> GW_ItemSlotBase::GetItemTitle()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_ItemSlotBase::SetItemTitle(ZXString<char> arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_ItemSlotBase::SetProtected()
{
}

void GW_ItemSlotBase::ResetProtected()
{
}

void GW_ItemSlotBase::SetPreventSlip()
{
}

void GW_ItemSlotBase::SetWarmSupport()
{
}

void GW_ItemSlotBase::SetBinded()
{
}

void GW_ItemSlotBase::SetPossibleTrading()
{
}

void GW_ItemSlotBase::SetSharedOnce()
{
}

void GW_ItemSlotBase::ResetPossibleTrading()
{
}

void GW_ItemSlotBase::SetItemAttribute(short arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t GW_ItemSlotBase::IsSameItem(GW_ItemSlotBase* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

short GW_ItemSlotBase::GetItemAttribute()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_ItemSlotBase::SetLevel(unsigned char arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_ItemSlotBase::SetEXP(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GW_ItemSlotBase::BackwardUpdateCashItem(GW_ItemSlotBase* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> GW_ItemSlotBase::DumpString()
{
    //return __sub_000F6B70(this, nullptr);
    return {};
}

void GW_ItemSlotBase::RawDecode(CInPacket& iPacket)
{
    //__sub_000F5310(this, nullptr, iPacket);
    nItemID = iPacket.Decode4();
    if (iPacket.Decode1())
    {
        liCashItemSN = iPacket.DecodeT<_LARGE_INTEGER>();
    }
    else
    {
        liCashItemSN.QuadPart = 0;
    }

    dateExpire = iPacket.DecodeFT();
}

void GW_ItemSlotBase::RawEncode(COutPacket& oPacket)
{
    auto id = nItemID.GetData();
    oPacket.Encode4(id);
    auto isCash = IsCashItem();
    oPacket.Encode1(isCash);
    if (isCash)
        oPacket.EncodeBuffer(&liCashItemSN, 8);
    oPacket.EncodeBuffer(&dateExpire, 8);
}

GW_ItemSlotBase& GW_ItemSlotBase::operator=(GW_ItemSlotBase& arg0) = default;

GW_ItemSlotBase& GW_ItemSlotBase::_op_assign_41(GW_ItemSlotBase* pThis, GW_ItemSlotBase& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GW_ItemSlotPet::~GW_ItemSlotPet()
{

}

void GW_ItemSlotPet::_dtor_0()
{
    this->~GW_ItemSlotPet();
}

GW_ItemSlotPet::GW_ItemSlotPet(const GW_ItemSlotPet& arg0)
{
    _ctor_1(arg0);
}

void GW_ItemSlotPet::_ctor_1(const GW_ItemSlotPet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GW_ItemSlotPet::GW_ItemSlotPet()
{
}

void GW_ItemSlotPet::_ctor_0()
{
    new(this) GW_ItemSlotPet();
}

_ZTL_SEC_GETSETI(unsigned char, GW_ItemSlotPet, nLevel)
_ZTL_SEC_GETSETI(short, GW_ItemSlotPet, nTameness)
_ZTL_SEC_GETSETI(unsigned char, GW_ItemSlotPet, nRepleteness)
_ZTL_SEC_GETSETI(short, GW_ItemSlotPet, nPetAttribute)
_ZTL_SEC_GETSETI(uint16_t, GW_ItemSlotPet, usPetSkill)
_ZTL_SEC_GETSETI(long, GW_ItemSlotPet, nRemainLife)
_ZTL_SEC_GETSETI(short, GW_ItemSlotPet, nAttribute)

int32_t GW_ItemSlotPet::IsProtectedItem()
{
    return 0;
}

int32_t GW_ItemSlotPet::IsPreventSlipItem()
{
    return __sub_000F6930(this, nullptr);
}

int32_t GW_ItemSlotPet::IsSupportWarmItem()
{
    return 0;
}

int32_t GW_ItemSlotPet::IsBindedItem()
{
    return 0;
}

int32_t GW_ItemSlotPet::IsPossibleTradingItem()
{
    return _ZtlSecureGet_nAttribute() & 1;
}

long GW_ItemSlotPet::GetType()
{
    return 3;
}

long GW_ItemSlotPet::GetDataSize()
{
    return 105;
}

long GW_ItemSlotPet::GetItemNumber()
{
    return 1;
}

long GW_ItemSlotPet::GetLevelUpType()
{
    return 0;
}

long GW_ItemSlotPet::GetLevel()
{
    return 0;
}

long GW_ItemSlotPet::GetEXP()
{
    return 0;
}

void GW_ItemSlotPet::SetItemNumber(short nNumber)
{
}

ZXString<char> GW_ItemSlotPet::GetItemTitle()
{
    return ZXString<char>();
}

void GW_ItemSlotPet::SetItemTitle(ZXString<char> sName)
{
}

void GW_ItemSlotPet::SetProtected()
{
}

void GW_ItemSlotPet::ResetProtected()
{
}

void GW_ItemSlotPet::SetPreventSlip()
{
}

void GW_ItemSlotPet::SetWarmSupport()
{
}

void GW_ItemSlotPet::SetBinded()
{
}

void GW_ItemSlotPet::SetPossibleTrading()
{
    _ZtlSecurePut_nAttribute(_ZtlSecureGet_nAttribute() | 1);
}

void GW_ItemSlotPet::ResetPossibleTrading()
{
    _ZtlSecurePut_nAttribute(_ZtlSecureGet_nAttribute() & 0xFFFE);
}

void GW_ItemSlotPet::SetItemAttribute(short nNewAttribute)
{
    _ZtlSecurePut_nAttribute(nNewAttribute);
}

short GW_ItemSlotPet::GetItemAttribute()
{
    return _ZtlSecureGet_nAttribute();
}

void GW_ItemSlotPet::SetLevel(unsigned char nNewLevel)
{
}

void GW_ItemSlotPet::SetEXP(long nNewEXP)
{
}

_LARGE_INTEGER GW_ItemSlotPet::GetSN()
{
    return {};
}

void GW_ItemSlotPet::GetNewSN()
{
}

void GW_ItemSlotPet::SetSyncSpeed()
{
}

int32_t GW_ItemSlotPet::IsSyncSpeed()
{
    //TODO(game)
    return 0;
}

int32_t GW_ItemSlotPet::IsDead()
{
    if (CItemInfo::GetInstance()->IsLimitedLifePet(nItemID))
        return _ZtlSecureGet_nRemainLife();

    return IsDeadByDate();
}

int32_t GW_ItemSlotPet::IsDeadByDate()
{
    return CompareFileTime(&dateDead, &_D_DB_DATE_20790101) >= 0;
}

int32_t GW_ItemSlotPet::IsPetSkillExist(uint16_t usSkillID)
{
    return _ZtlSecureGet_usPetSkill() & usSkillID != 0;
}

void GW_ItemSlotPet::BackwardUpdateCashItem(GW_ItemSlotBase* pSrc)
{
    __sub_000F5660(this, nullptr, pSrc);
}

ZXString<char> GW_ItemSlotPet::DumpString()
{
    return ZXString<char>();
}

void GW_ItemSlotPet::RawDecode(CInPacket& iPacket)
{
    __sub_000F5750(this, nullptr, iPacket);
}

void GW_ItemSlotPet::RawEncode(COutPacket& oPacket)
{
    __sub_000F6C90(this, nullptr, oPacket);
}

GW_ItemSlotPet& GW_ItemSlotPet::operator=(GW_ItemSlotPet& arg0)
{
    return _op_assign_53(this, arg0);
}

GW_ItemSlotPet& GW_ItemSlotPet::_op_assign_53(GW_ItemSlotPet* pThis, GW_ItemSlotPet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GW_ItemSlotEquip::~GW_ItemSlotEquip()
{
}

void GW_ItemSlotEquip::_dtor_0()
{
    this->~GW_ItemSlotEquip();
}

GW_ItemSlotEquip::GW_ItemSlotEquip(const GW_ItemSlotEquip& arg0)
{
    _ctor_1(arg0);
}

void GW_ItemSlotEquip::_ctor_1(const GW_ItemSlotEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GW_ItemSlotEquip::GW_ItemSlotEquip()
{
    ftEquipped = _D_DB_DATE_19000101;
    nPrevBonusExpRate = -1;
    item._ZtlSecurePut_nDurability(-1);
    item._ZtlSecurePut_nIUC(0);
}

void GW_ItemSlotEquip::_ctor_0()
{
    new(this) GW_ItemSlotEquip();
}

int32_t GW_ItemSlotEquip::IsProtectedItem()
{
    return GetItemAttribute() & 1;
}

int32_t GW_ItemSlotEquip::IsPreventSlipItem()
{
    return (GetItemAttribute() & 2) >> 1;
}

int32_t GW_ItemSlotEquip::IsSupportWarmItem()
{
    return (GetItemAttribute() & 4) >> 2;
}

int32_t GW_ItemSlotEquip::IsBindedItem()
{
    return __sub_000F6110(this, nullptr);
}

int32_t GW_ItemSlotEquip::IsPossibleTradingItem()
{
    return __sub_000F6130(this, nullptr);
}

long GW_ItemSlotEquip::GetType()
{
    return 1;
}

long GW_ItemSlotEquip::GetDataSize()
{
    return 301;
}

long GW_ItemSlotEquip::GetItemNumber()
{
    return 1;
}

long GW_ItemSlotEquip::GetLevelUpType()
{
    return __sub_000F6150(this, nullptr);
}

long GW_ItemSlotEquip::GetLevel()
{
    return __sub_000F6170(this, nullptr);
}

long GW_ItemSlotEquip::GetEXP()
{
    return __sub_000F6190(this, nullptr);
}

void GW_ItemSlotEquip::SetItemNumber(short nNumber)
{
    __sub_000F60A0(this, nullptr, nNumber);
}

ZXString<char> GW_ItemSlotEquip::GetItemTitle()
{
    return __sub_000F7DC0(this, nullptr);
}

void GW_ItemSlotEquip::SetItemTitle(ZXString<char> sName)
{
    __sub_000F7460(this, nullptr, CreateNakedParam(sName));
}

void GW_ItemSlotEquip::SetProtected()
{
    __sub_000F6250(this, nullptr);
}

void GW_ItemSlotEquip::ResetProtected()
{
    __sub_000F6290(this, nullptr);
}

void GW_ItemSlotEquip::SetPreventSlip()
{
    __sub_000F62D0(this, nullptr);
}

void GW_ItemSlotEquip::SetWarmSupport()
{
    __sub_000F6310(this, nullptr);
}

void GW_ItemSlotEquip::SetBinded()
{
    __sub_000F6350(this, nullptr);
}

void GW_ItemSlotEquip::SetPossibleTrading()
{
    __sub_000F6390(this, nullptr);
}

void GW_ItemSlotEquip::ResetPossibleTrading()
{
    __sub_000F63D0(this, nullptr);
}

void GW_ItemSlotEquip::SetItemAttribute(short nNewAttribute)
{
    __sub_000F6410(this, nullptr, nNewAttribute);
}

short GW_ItemSlotEquip::GetItemAttribute()
{
    return this->item._ZtlSecureGet_nAttribute();
}

void GW_ItemSlotEquip::SetLevel(unsigned char nNewLevel)
{
    __sub_000F6430(this, nullptr, nNewLevel);
}

void GW_ItemSlotEquip::SetEXP(long nNewEXP)
{
    __sub_000F6450(this, nullptr, nNewEXP);
}

int32_t GW_ItemSlotEquip::IsReleased()
{
    return __sub_000F61D0(this, nullptr);
}

void GW_ItemSlotEquip::SetReleased(int32_t bReleased)
{
    __sub_000F6470(this, nullptr, bReleased);
}

unsigned char GW_ItemSlotEquip::GetItemGrade()
{
    return __sub_000F61F0(this, nullptr);
}

long GW_ItemSlotEquip::GetIUCValue()
{
    return __sub_000F6210(this, nullptr);
}

void GW_ItemSlotEquip::SetIUCValue(long nValue)
{
    __sub_000F64C0(this, nullptr, nValue);
}

long GW_ItemSlotEquip::GetIUCAdd()
{
    return __sub_000F6230(this, nullptr);
}

void GW_ItemSlotEquip::SetIUCAdd(long nAdd)
{
    __sub_000F6500(this, nullptr, nAdd);
}

void GW_ItemSlotEquip::BackwardUpdateCashItem(GW_ItemSlotBase* pSrc)
{
    __sub_000F5370(this, nullptr, pSrc);
}

ZXString<char> GW_ItemSlotEquip::DumpString()
{
    return __sub_000F6BF0(this, nullptr);
}

void GW_ItemSlotEquip::RawDecode(CInPacket& iPacket)
{
    __sub_000F8360(this, nullptr, iPacket);
}

void GW_ItemSlotEquip::RawEncode(COutPacket& oPacket)
{
    __sub_000F7F70(this, nullptr, oPacket);
}

int32_t GW_ItemSlotEquip::IsSameEquipItem(GW_ItemSlotEquip* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GW_ItemSlotEquip& GW_ItemSlotEquip::operator=(GW_ItemSlotEquip& arg0)
{
    return _op_assign_40(this, arg0);
}

GW_ItemSlotEquip& GW_ItemSlotEquip::_op_assign_40(GW_ItemSlotEquip* pThis, GW_ItemSlotEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GW_ItemSlotBundle::~GW_ItemSlotBundle()
{
}

void GW_ItemSlotBundle::_dtor_0()
{
    this->~GW_ItemSlotBundle();
}

GW_ItemSlotBundle::GW_ItemSlotBundle(const GW_ItemSlotBundle& arg0)
{
    _ctor_1(arg0);
}

void GW_ItemSlotBundle::_ctor_1(const GW_ItemSlotBundle& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GW_ItemSlotBundle::GW_ItemSlotBundle()
{
}

void GW_ItemSlotBundle::_ctor_0()
{
    new(this) GW_ItemSlotBundle();
}

_ZTL_SEC_GETSETI(uint16_t, GW_ItemSlotBundle, nNumber);
_ZTL_SEC_GETSETI(short, GW_ItemSlotBundle, nAttribute);

int32_t GW_ItemSlotBundle::IsProtectedItem()
{
    return __sub_000F6780(this, nullptr);
}

int32_t GW_ItemSlotBundle::IsPreventSlipItem()
{
    return __sub_000F66B0(this, nullptr);
}

int32_t GW_ItemSlotBundle::IsSupportWarmItem()
{
    return __sub_000F66C0(this, nullptr);
}

int32_t GW_ItemSlotBundle::IsBindedItem()
{
    return __sub_000F66D0(this, nullptr);
}

int32_t GW_ItemSlotBundle::IsPossibleTradingItem()
{
    return __sub_000F67A0(this, nullptr);
}

long GW_ItemSlotBundle::GetType()
{
    return 2;
}

long GW_ItemSlotBundle::GetDataSize()
{
    return 65;
}

long GW_ItemSlotBundle::GetItemNumber()
{
    return __sub_000F67C0(this, nullptr);
}

long GW_ItemSlotBundle::GetLevelUpType()
{
    return __sub_000F6700(this, nullptr);
}

long GW_ItemSlotBundle::GetLevel()
{
    return __sub_000F6710(this, nullptr);
}

long GW_ItemSlotBundle::GetEXP()
{
    return __sub_000F6720(this, nullptr);
}

void GW_ItemSlotBundle::SetItemNumber(short nNumber)
{
    __sub_000F6800(this, nullptr, nNumber);
}

ZXString<char> GW_ItemSlotBundle::GetItemTitle()
{
    return __sub_000F7E10(this, nullptr);
}

void GW_ItemSlotBundle::SetItemTitle(ZXString<char> sName)
{
    __sub_000F7490(this, nullptr, CreateNakedParam(sName));
}

void GW_ItemSlotBundle::SetProtected()
{
    __sub_000F6820(this, nullptr);
}

void GW_ItemSlotBundle::ResetProtected()
{
    __sub_000F6850(this, nullptr);
}

void GW_ItemSlotBundle::SetPreventSlip()
{
    __sub_000F6730(this, nullptr);
}

void GW_ItemSlotBundle::SetWarmSupport()
{
    __sub_000F6740(this, nullptr);
}

void GW_ItemSlotBundle::SetBinded()
{
    __sub_000F6750(this, nullptr);
}

void GW_ItemSlotBundle::SetPossibleTrading()
{
    __sub_000F6880(this, nullptr);
}

void GW_ItemSlotBundle::ResetPossibleTrading()
{
    __sub_000F68B0(this, nullptr);
}

void GW_ItemSlotBundle::SetItemAttribute(short nNewAttribute)
{
    __sub_000F68E0(this, nullptr, nNewAttribute);
}

short GW_ItemSlotBundle::GetItemAttribute()
{
    return __sub_000F67E0(this, nullptr);
}

void GW_ItemSlotBundle::SetLevel(unsigned char nNewLevel)
{
    __sub_000F6760(this, nullptr, nNewLevel);
}

void GW_ItemSlotBundle::SetEXP(long nNewEXP)
{
    __sub_000F6770(this, nullptr, nNewEXP);
}

void GW_ItemSlotBundle::BackwardUpdateCashItem(GW_ItemSlotBase* pSrc)
{
    __sub_000F5630(this, nullptr, pSrc);
}

ZXString<char> GW_ItemSlotBundle::DumpString()
{
    return __sub_000F6C10(this, nullptr);
}

void GW_ItemSlotBundle::RawDecode(CInPacket& iPacket)
{
    __sub_000F87A0(this, nullptr, iPacket);
}

void GW_ItemSlotBundle::RawEncode(COutPacket& oPacket)
{
    __sub_000F86C0(this, nullptr, oPacket);
}

GW_ItemSlotBundle& GW_ItemSlotBundle::operator=(GW_ItemSlotBundle& arg0)
{
    return _op_assign_36(this, arg0);
}

GW_ItemSlotBundle& GW_ItemSlotBundle::_op_assign_36(GW_ItemSlotBundle* pThis, GW_ItemSlotBundle& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
