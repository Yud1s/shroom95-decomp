// ItemInfo.cpp
#include "ItemInfo.hpp"

#include "WvsExtra.h"

static ZMap<char const*, ZXString<char>, ZXString<char>> FAKE_ZMap_char_const___ZXString_char__ZXString_char_{};
static ZRef<CItemInfo::BUNDLEITEM> FAKE_ZRefBundleItem_{};
static ZRef<CItemInfo::GACHAPONITEMINFO> FAKE_ZRefGachaponItemInfo_{};
static ZRef<CItemInfo::EQUIPEXTITEM> FAKE_ZRefEquipExtItem_{};
static ZRef<ItemOptionInfo> FAKE_ZRefItemOptionInfo_{};
static ZRef<CItemInfo::EQUIPITEM> FAKE_ZRefEquipItem_{};
static ZRef<DamageModifiedInfo> FAKE_ZRefDamageModifiedInfo_{};

static Additional::TCond<Additional::SKILL> FAKE_Additional_TCondAdditionalSKILL__{};
static Additional::TCond<Additional::MOBCATEGORY> FAKE_Additional_TCondAdditionalMOBCATEGORY_{};
static Additional::TCond<Additional::ELEMBOOST> FAKE_Additional_TCondAdditionalELEMBOOST_{};

static Additional::TCond<Additional::BOSS> FAKE_Additional_TCondAdditionalBOSS_{};
static Additional::TCond<Additional::MOBDIE> FAKE_Additional_TCondAdditionalMOBDIE_{};
static Additional::TCond<Additional::CRITICAL> FAKE_Additional_TCondAdditionalCRITICAL_{};

static Additional::TCond<Additional::HPMPCHANGE> FAKE_Additional_TCondAdditionalHPMPCHANGE_{};

static ZRef<CItemInfo::BRIDLEITEM> FAKE_RefBridleItem_{};
static ZRef<CItemInfo::LevelInfo> FAKE_RefLevelInfo_{};
static ZRef<CItemInfo::LevelInfo::RandomMHP> FAKE_RefRandomMHP_{};
static ZRef<CItemInfo::LevelInfo::RandomMMP> FAKE_RefRandomMMP_{};
static ZRef<CItemInfo::LevelInfo::RandomStat> FAKE_RefRandomStat_{};
static ZRef<CItemInfo::LevelInfo::RandomSTR> FAKE_RefRandomSTR_{};
static ZRef<CItemInfo::LevelInfo::RandomDEX> FAKE_RefRandomDEX_{};
static ZRef<CItemInfo::LevelInfo::RandomINT> FAKE_RefRandomINT_{};
static ZRef<CItemInfo::LevelInfo::RandomLUK> FAKE_RefRandomLUK_{};
static ZRef<CItemInfo::LevelInfo::RandomPAD> FAKE_RefRandomPAD_{};
static ZRef<CItemInfo::LevelInfo::RandomMAD> FAKE_RefRandomMAD_{};
static ZRef<CItemInfo::LevelInfo::RandomPDD> FAKE_RefRandomPDD_{};
static ZRef<CItemInfo::LevelInfo::RandomMDD> FAKE_RefRandomMDD_{};
static ZRef<CItemInfo::LevelInfo::RandomACC> FAKE_RefRandomACC_{};
static ZRef<CItemInfo::LevelInfo::RandomEVA> FAKE_RefRandomEVA_{};
static ZRef<CItemInfo::LevelInfo::RandomCraft> FAKE_RefRandomCraft_{};
static ZRef<CItemInfo::LevelInfo::RandomSpeed> FAKE_RefRandomSpeed_{};
static ZRef<CItemInfo::LevelInfo::RandomJump> FAKE_RefRandomJump_{};

static ZRef<CItemInfo::LevelInfo::Ability> FAKE_RefAbility_{};
static ZRef<CItemInfo::COUPLECHAIRITEM> FAKE_RefCoupleChairItem_{};
static ZRef<CItemInfo::PETFOODITEM> FAKE_RefPetFoodItem_{};
static ZRef<CItemInfo::LOTTERYITEM> FAKE_RefLotteryItem_{};
static ZRef<CItemInfo::SETITEMINFO> FAKE_RefSetItemInfo_{};
static ZRef<CItemInfo::KARMASCISSORSITEM> FAKE_RefKarmaScissorsItem_{};
static ZRef<CItemInfo::AREABUFFITEM> FAKE_RefAreaBuffItem_{};
static ZRef<ZArray<ZXString<char>>> FAKE_RefZArrayZXString_char_{};
static ZList<ZRef<CItemInfo::ItemSkill>> FAKE_ZListZRefCItemInfoItemSkill_{};
static ZRef<CItemInfo::ItemSkill> FAKE_RefItemSkill_{};
static ZRef<CItemInfo::INCLEVELITEM> FAKE_RefIncLevelItem_{};
static ZRef<CItemInfo::EXTENDEXPIREDATEITEM> FAKE_RefExtendExpireDateItem_{};

static ZRefCounted_AllocHelper<ZRefCountedDummy<ITEMNAME>> FAKE_ZRefCounted_AllocHelperZRefCountedDummyITEMNAME_{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<CItemInfo::GACHAPONITEMINFO>>
FAKE_ZRefCounted_AllocHelperZRefCountedDummyCItemInfoGACHAPONITEMINFO_{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<CItemInfo::SETITEMINFO>>
FAKE_ZRefCounted_AllocHelperZRefCountedDummyCItemInfoSETITEMINFO_{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<CItemInfo::SETEFFECT>>
FAKE_ZRefCounted_AllocHelperZRefCountedDummyCItemInfoSETEFFECT_{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<DamageModifiedInfo>>
FAKE_ZRefCounted_AllocHelperZRefCountedDummyDamageModifiedInfo_{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<ZArray<ZXString<char>>>>
FAKE_ZRefCounted_AllocHelperZRefCountedDummyZArrayZXString_char_{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<CItemInfo::ItemSkill>>
FAKE_ZRefCounted_AllocHelperZRefCountedDummyCItemInfoItemSkill_{};

static IntroSortLoopHelper<ZPair<long, long>, int, PairFirstLess> FAKE_IntroSortLoopHelperZPairlonglongintPairFirstLess_
    {};
static InsertionSortHelper<ZPair<long, long>, PairFirstLess> FAKE_InsertionSortHelperZPairlonglongPairFirstLess_{};

static IntroSortLoopHelper<ZPair<long, long>, int, PairSecondLess>
FAKE_IntroSortLoopHelperZPairlonglongintPairSecondLess_{};
static InsertionSortHelper<ZPair<long, long>, PairSecondLess> FAKE_InsertionSortHelperZPairlonglongPairSecondLess_{};

static ZSortHelper<ZPair<long, long>, PairSecondLess> FAKE_ZSortHelperZPairlonglongPairSecondLess_{};
static ZSortHelper<ZPair<long, long>, PairFirstLess> FAKE_ZSortHelperZPairlonglongPairFirstLess_{};
#include "ItemInfo_regen.ipp"

#include "pcom/xcom.hpp"

int32_t ItemOptionLevelData::LoadLevelData(long nItemOptionID, _x_com_ptr<IWzProperty> pLevelData, long nOptionLevel)
{
    return __sub_001A2890(this, nullptr, nItemOptionID, CreateNakedParam(pLevelData), nOptionLevel);
}

CItemInfo::~CItemInfo()
{
}

void CItemInfo::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::CItemInfo(const CItemInfo& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::_ctor_1(const CItemInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::CItemInfo() = default;

void CItemInfo::_ctor_0()
{
    return __sub_005C4CA0(this, nullptr);
}

int32_t CItemInfo::IterateItemInfo()
{
    return __sub_001C4C00(this, nullptr);
}

const CItemInfo::EQUIPITEM* CItemInfo::GetEquipItem(long nItemId)
{
    return __sub_001C0820(this, nullptr, nItemId);
}

int32_t CItemInfo::IsEquipItem(long nItemId)
{
    return GetEquipItem(nItemId) != nullptr;
}

long CItemInfo::GetKnockbockProp(long nItemId)
{
    auto eq = GetEquipItem(nItemId);
    return eq ? eq->_ZtlSecureGet_nKnockback() : 0;
}

int32_t CItemInfo::IsScannableItem(long nItemID, int32_t IsFromItemIgnore)
{
    return __sub_001A7AB0(this, nullptr, nItemID, IsFromItemIgnore);
}

int32_t CItemInfo::IsCashItem(GW_ItemSlotBase* pItem)
{
    //return __sub_001010D0(this, nullptr, pItem);
    return IsCashItem(pItem->nItemID.GetData()) || pItem->IsCashItem();
}

int32_t CItemInfo::IsCashItem(long nItemId)
{
    return GetIntItemProp(nItemId, 0x826) != 0;
}

int32_t CItemInfo::IsMovableToLocker(long nItemId)
{
    return GetIntItemProp(nItemId, 0x827) != 0;
}

int32_t CItemInfo::IsLimitedLifePet(long nItemId)
{
    return GetIntItemProp(nItemId, 0x781) != 0;
}

int32_t CItemInfo::IsQuestItem(long nItemId)
{
    return GetIntItemProp(nItemId, 0xBC8) != 0;
}

int32_t CItemInfo::IsPartyQuestItem(long nItemId)
{
    return GetIntItemProp(nItemId, 0xBC9) != 0;
}

int32_t CItemInfo::IsOnlyItem(long nItemId)
{
    return GetIntItemProp(nItemId, 0xC9F) != 0;
}

int32_t CItemInfo::IsOnlyEquipItem(long nItemId)
{
    return GetIntItemProp(nItemId, 0x1409) != 0;
}

int32_t CItemInfo::IsTradeBlockItem(GW_ItemSlotBase* pItem)
{
    return __sub_001010D0(this, nullptr, pItem);
}

int32_t CItemInfo::IsTradeBlockItem(long nItemId)
{
    return GetIntItemProp(nItemId, 0xca0) != 0;
}

int32_t CItemInfo::IsNoRollbackItem(long nItemId)
{
    UNIMPLEMENTED;
}

long CItemInfo::GetAppliableKarmaType(long nItemID)
{
    //return __sub_001C09F0(this, nullptr, nItemID);
    if (nItemID / 1000000 == 1)
    {
        auto item = CItemInfo::GetEquipItem(nItemID);
        return item ? item->nAppliableKarmaType : false;
    }
    else
    {
        auto item = CItemInfo::GetBundleItem(nItemID);
        return item ? item->nAppliableKarmaType : false;
    }
    return 0;
}

int32_t CItemInfo::IsNotSaleItem(long nItemId)
{
    return GetIntItemProp(nItemId, 0xca3) != 0;
}

int32_t CItemInfo::IsNoCancelMouse(long nItemId)
{
    return GetIntItemProp(nItemId, 0xfed) != 0;
}

int32_t CItemInfo::IsPickUpBlockItem(long nItemId)
{
    return GetIntItemProp(nItemId, 0xe70) != 0;
}

int32_t CItemInfo::IsAccountSharableItem(GW_ItemSlotBase* pItem)
{
    return pItem ? IsAccountSharableItem(pItem->nItemID) : 0;
}

int32_t CItemInfo::IsAccountSharableItem(long nItemId)
{
    return GetIntItemProp(nItemId, 0x13dd) != 0;
}

int32_t CItemInfo::IsSharableOnceItem_1(GW_ItemSlotBase* pItem)
{
    //return __sub_001010D0(this, nullptr, pItem);
    if (pItem)
        return IsSharableOnceItem_0(pItem->nItemID.GetData());

    return false;
}

int32_t CItemInfo::IsSharableOnceItem_0(long nItemId)
{
    return GetIntItemProp(nItemId, 0x168d) != 0;
}

int32_t CItemInfo::ExpireOnLogout(long nItemId)
{
    return GetIntItemProp(nItemId, 0xe2b) != 0;
}

int32_t CItemInfo::ConsumeOnPickup(long nItemId)
{
    UNIMPLEMENTED;
}

int32_t CItemInfo::OnlyPickup(long nItemId)
{
    UNIMPLEMENTED;
}

long CItemInfo::GetBulletPAD(long nItemID)
{
    return GetIntItemProp(nItemID, 0x817) != 0;
}

long CItemInfo::GetRequiredLEV(long nItemID)
{
    //return __sub_001ACA50(this, nullptr, nItemID);
    return GetIntItemProp(nItemID, 0x787) != 0;
}

long CItemInfo::GetPortableChairRecoveryRate(long nItemID, int32_t bHP)
{
    return __sub_001AC750(this, nullptr, nItemID, bHP);
}

int32_t CItemInfo::IsTherePortableChairStatUp(long nItemId)
{
    if (nItemId)
        return GetIntItemProp(nItemId, 0x928) != 0;

    return false;
}

int32_t CItemInfo::IsBigSizeItem(long nItemId)
{
    UNIMPLEMENTED;
}

int32_t CItemInfo::IsMonsterBookCardItem(long nItemId)
{
    UNIMPLEMENTED;
}

uint16_t CItemInfo::LoadPetSkillChangeInfo(_x_com_ptr<IWzProperty> arg0, int32_t& arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::GetIncRateByElemAttr(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CItemInfo::IsBindedWhenEquiped(long nItemId)
{
    //return __sub_000C6320(this, nullptr, nItemId);
    auto info = GetItemInfo(nItemId);
    if (!info)
    {
        return false;
    }

    auto v = info->Getitem(L"equipTradeBlock");
    return get_int32(v, 0) != 0;
}

int32_t CItemInfo::IsNotExtendItem(long nItemId)
{
    auto info = GetItemInfo(nItemId);
    if (!info)
    {
        return false;
    }

    auto v = info->Getitem(StringPool::GetInstance().GetBSTR(0x1408));
    return get_int32(v, 0) != 0;
}

int32_t CItemInfo::IsGrowthItem(long nItemId)
{
    return GetMaxLevel(nItemId) != 0;
}

int32_t CItemInfo::IsEpicItem(long nItemId)
{
    if (const EQUIPITEM* item{}; nItemId / 1000000 == 1 && (item = CItemInfo::GetEquipItem(nItemId)) != nullptr)
        return item->bEpic;
    else
        return 0;
}

long CItemInfo::GetSetItemID(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::GetMaxLevel(long nItemID)
{
    return __sub_001C09B0(this, nullptr, nItemID);
}

ZRef<CItemInfo::LevelInfo> CItemInfo::GetLevelInfo(long nItemID, long nLevel)
{
    ZRef<CItemInfo::LevelInfo> ret;
    return *__sub_001C39D0(this, nullptr, &ret, nItemID, nLevel);
}

ZRef<CItemInfo::LevelInfo::Ability> CItemInfo::GetLevelAbilityInfo(long nItemID, long nLevel, long nLevelUpType)
{
    ZRef<CItemInfo::LevelInfo::Ability> ret;
    return *__sub_001C3A60(this, nullptr, &ret, nItemID, nLevel, nLevelUpType);
}

void CItemInfo::LoadItemSkill(_x_com_ptr<IWzProperty> pProp, ZList<ZRef<CItemInfo::ItemSkill>>& lpItemSkill)
{
    __sub_001AA3C0(this, nullptr, CreateNakedParam(pProp), lpItemSkill);
}

void CItemInfo::LoadSkillBonus(_x_com_ptr<IWzProperty> pProp, ZMap<long, long, long>& mSkillLevelBonus)
{
    __sub_001A1570(this, nullptr, CreateNakedParam(pProp), mSkillLevelBonus);
}

ZRef<CItemInfo::Recovery> CItemInfo::LoadRecovery(_x_com_ptr<IWzProperty> pProp)
{
    ZRef<CItemInfo::Recovery> ret;
    return *__sub_001A1880(this, nullptr, &ret, CreateNakedParam(pProp));
}

long CItemInfo::GetItemGrade(unsigned char arg0, int32_t arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::GetItemGradePA()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CItemInfo::GetItemPotentialOptionPool(long arg0, ZArray<long>& arg1, long* arg2, long arg3)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CItemInfo::GetItemPotentialOption(long arg0, unsigned char arg1, short& arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Ztl_bstr_t CItemInfo::GetEquipItemUOL(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::CalcEquipItemQuality(ZRef<GW_ItemSlotBase> pItem)
{
    return __sub_001C2A30(this, nullptr, CreateNakedParam(pItem));
}

long CItemInfo::CalcMakerSkillDisassembleCost(ZRef<GW_ItemSlotBase> pItem, long nMakeCost)
{
    return __sub_001C3050(this, nullptr, CreateNakedParam(pItem), nMakeCost);
}

long CItemInfo::GetExclusiveEquipItemBodyPart(ZRef<GW_ItemSlotBase>* a, long nItemId)
{
    return __sub_00102B60(this, nullptr, a, nItemId);
}

long CItemInfo::GetExclusiveWeaponShieldBodyPart(ZRef<GW_ItemSlotBase>* a, long nItemId)
{
    return __sub_00101400(this, nullptr, a, nItemId);
}

long CItemInfo::GetExclusiveClothesBodyPart(ZRef<GW_ItemSlotBase>* a, long nItemId)
{
    return __sub_001014C0(this, nullptr, a, nItemId);
}

int32_t CItemInfo::IsAbleToEquip(long nGender, long nLevel, long nJob, short nSubJob, long nSTR, long nDEX, long nINT,
                                 long nLUK, long nPOP, ZRef<GW_ItemSlotPet> pPetItem, long nItemID, long CanUseBareHand,
                                 ZRef<GW_ItemSlotBase>* aRealEquip)
{
    return __sub_00101110(this, nullptr, nGender, nLevel, nJob, nSubJob, nSTR, nDEX, nINT, nLUK, nPOP,
                          CreateNakedParam(pPetItem), nItemID, CanUseBareHand, aRealEquip);
}

ZXString<char> CItemInfo::GetItemName(long nItemID)
{
    ZXString<char> ret;
    return *__sub_001B1640(this, nullptr, &ret, nItemID);
}

ZXString<char> CItemInfo::GetItemDesc(long nItemID)
{
    ZXString<char> ret;
    return *__sub_001B16E0(this, nullptr, &ret, nItemID);
}

ZXString<char> CItemInfo::GetItemString(long nItemID, const char* sKey)
{
    ZXString<char> ret;
    return *__sub_001A9BC0(this, nullptr, &ret, nItemID, sKey);
}

ZXString<char> CItemInfo::GetMapString(unsigned long dwFieldID, const char* sKey)
{
    ZXString<char> ret;
    return *__sub_001A9CA0(this, nullptr, &ret, dwFieldID, sKey);
}

ZXString<char> CItemInfo::GetItemTypeName(long nItemID)
{
    ZXString<char> ret;
    return *__sub_0019F140(this, nullptr, &ret, nItemID);
}

const CItemInfo::BUNDLEITEM* CItemInfo::GetBundleItem(long nItemID)
{
    return __sub_001B5200(this, nullptr, nItemID);
}

ZRef<CItemInfo::BUNDLEITEM> CItemInfo::GetBundleItemInfoData(long nItemID, _x_com_ptr<IWzProperty> pInfo)
{
    ZRef<CItemInfo::BUNDLEITEM> ret;
    return *__sub_001B3D90(this, nullptr, &ret, nItemID, CreateNakedParam(pInfo));
}

_x_com_ptr<IWzProperty> CItemInfo::GetItemProp(long nItemID)
{
    _x_com_ptr<IWzProperty> ret;
    return *__sub_001A72A0(this, nullptr, &ret, nItemID);
}

_x_com_ptr<IWzProperty> CItemInfo::GetItemInfo(long nItemID)
{
    _x_com_ptr<IWzProperty> ret;
    return *__sub_001A8F20(this, nullptr, &ret, nItemID);
}

_x_com_ptr<IWzCanvas> CItemInfo::GetItemIcon(long nItemId, int32_t bWithShadow, int32_t bPetDead)
{
    _x_com_ptr<IWzCanvas> ret;
    return *__sub_001AA990(this, nullptr, &ret, nItemId, bWithShadow, bPetDead);
}

unsigned long CItemInfo::GetItemIconCRC(long nItemID)
{
    return __sub_001ADB30(this, nullptr, nItemID);
}

unsigned long CItemInfo::GetItemCommonCRC(long nItemID)
{
    return __sub_001B3A60(this, nullptr, nItemID);
}

unsigned long CItemInfo::GetBundleItemCRC(ZRef<CItemInfo::BUNDLEITEM> p)
{
    return __sub_001B3BD0(this, nullptr, CreateNakedParam(p));
}

unsigned long CItemInfo::GetItemCRC(long nItemID)
{
    return __sub_001C2890(this, nullptr, nItemID);
}

long CItemInfo::CheckUseRequirement(long nItemID, unsigned long dwCharacterID)
{
    return __sub_001B6BA0(this, nullptr, nItemID, dwCharacterID);
}

ZList<ZPair<unsigned long, ZXString<char>>> CItemInfo::FindMapByName(ZXString<char> sMapName)
{
    return __sub_001B6EB0(this, nullptr, CreateNakedParam(sMapName));
}

const CItemInfo::PETFOODITEM* CItemInfo::GetPetFoodItem(long nItemID)
{
    return __sub_00081630(this, nullptr, nItemID);
}

const CItemInfo::AREABUFFITEM* CItemInfo::GetAreaBuffItem(long nItemID)
{
    return __sub_00035590(this, nullptr, nItemID);
}

const CItemInfo::BRIDLEITEM* CItemInfo::GetBridleItem(long nItemID)
{
    return __sub_005D3C10(this, nullptr, nItemID);
}

const CItemInfo::KARMASCISSORSITEM* CItemInfo::GetKarmaScissorsItem(long nItemID)
{
    return __sub_00081720(this, nullptr, nItemID);
}

ZXString<char> CItemInfo::GetKarmaScissorsName(long karmaType)
{
    ZXString<char> ret;
    return *__sub_001B4B20(this, nullptr, &ret, karmaType);
}

const CItemInfo::LOTTERYITEM* CItemInfo::GetLotteryItem(long nItemID)
{
    return __sub_001008F0(this, nullptr, nItemID);
}

const CItemInfo::LOTTERY_ENTITY* CItemInfo::GetLotteryEntityUseRandom(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const CItemInfo::EXTENDEXPIREDATEITEM* CItemInfo::GetExtendExpireDateItem(long nItemID)
{
    return __sub_001009E0(this, nullptr, nItemID);
}

const CItemInfo::EXPIREDPROTECTINGITEM* CItemInfo::GetExpiredProtectingItem(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const CItemInfo::PROTECTONDIEITEM* CItemInfo::GetProtectOnDieItem(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZRef<CItemInfo::EQUIPEXTITEM> CItemInfo::GetEquipExtItem(long nItemID)
{
    ZRef<CItemInfo::EQUIPEXTITEM> ret;
    return *__sub_001ACC90(this, nullptr, &ret, nItemID);
}

_x_com_ptr<IWzProperty> CItemInfo::GetSpecialProp(long nItemId)
{
    _x_com_ptr<IWzProperty> ret;
    return *__sub_001A6EE0(this, nullptr, &ret, nItemId);
}

long CItemInfo::GetSlotIncDelta(long nItemId)
{
    return __sub_001A7190(this, nullptr, nItemId);
}

void CItemInfo::GetHalloweenItem(ZList<long>& lHalloweenItem)
{
    __sub_001A6DE0(this, nullptr, lHalloweenItem);
}

long CItemInfo::GetIncLevel(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const ZRef<CItemInfo::QUESTDELIVERYITEM> CItemInfo::GetQuestDeliveryItem(long nItemID)
{
    return __sub_002AEBC0(this, nullptr, nItemID);
}

void CItemInfo::RegisterQuestDeliveryItem(long nItemID, _x_com_ptr<IWzProperty> pItem)
{
    __sub_001B2080(this, nullptr, nItemID, CreateNakedParam(pItem));
}

ZMap<long, ZRef<CItemInfo::SETITEMINFO>, long>& CItemInfo::GetSetItemInfo()
{
    //return __sub_00321590(this, nullptr);
    return m_mSetItemInfo;
}

void CItemInfo::RegisterSetItemInfo()
{
    __sub_001AF950(this, nullptr);
}

ZRef<CItemInfo::EQUIPITEM> CItemInfo::RegisterEquipItemInfo(long arg0, const wchar_t* arg1)
{
    ZRef<CItemInfo::EQUIPITEM> ret;
    return *__sub_001B8EF0(this, nullptr, &ret, arg0, arg1);
}

void CItemInfo::IterateItemString_0(_x_com_ptr<IWzProperty> pProp)
{
    __sub_001B5360(this, nullptr, CreateNakedParam(pProp));
}

void CItemInfo::IterateItemString_1()
{
    __sub_001B7340(this, nullptr);
}

void CItemInfo::IterateMapString_0(_x_com_ptr<IWzProperty> pProp)
{
    __sub_001B5980(this, nullptr, CreateNakedParam(pProp));
}

void CItemInfo::IterateMapString_1()
{
    __sub_001B7D50(this, nullptr);
}

void CItemInfo::RegisterPetFoodItem(long nItemID, _x_com_ptr<IWzProperty> pItem)
{
    __sub_001AA0A0(this, nullptr, nItemID, CreateNakedParam(pItem));
}

void CItemInfo::RegisterBridleItem(long nItemID, _x_com_ptr<IWzProperty> pItem)
{
    __sub_001B17D0(this, nullptr, nItemID, CreateNakedParam(pItem));
}

void CItemInfo::RegisterLotteryItem(long arg0, _x_com_ptr<IWzProperty> arg1)
{
    __sub_001C31B0(this, nullptr, arg0, CreateNakedParam(arg1));
}

void CItemInfo::RegisterExtendExpireDateItem(long nItemID, _x_com_ptr<IWzProperty> pItem)
{
    __sub_001A1310(this, nullptr, nItemID, CreateNakedParam(pItem));
}

void CItemInfo::RegisterExpiredProtectingItem(long arg0, _x_com_ptr<IWzProperty> arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CItemInfo::RegisterProtectDieItem(long arg0, _x_com_ptr<IWzProperty> arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CItemInfo::RegisterKarmaScissorsItem(long nItemID, _x_com_ptr<IWzProperty> pItem)
{
    __sub_001A1120(this, nullptr, nItemID, CreateNakedParam(pItem));
}

void CItemInfo::RegisterSetHalloweenItem()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CItemInfo::RegisterAreaBuffItem(long nItemID, _x_com_ptr<IWzProperty> pItem)
{
    __sub_001A0910(this, nullptr, nItemID, CreateNakedParam(pItem));
}

void CItemInfo::RegisterIncLevelItem(long nItemID, _x_com_ptr<IWzProperty> pItem)
{
    __sub_001A0F30(this, nullptr, nItemID, CreateNakedParam(pItem));
}

void CItemInfo::RegisterGachaponItemInfo()
{
    __sub_001BF040(this, nullptr);
}

void CItemInfo::GetGachaponItemIDByAggID(long nAggID, ZArray<long>& aGachaponItemID)
{
    __sub_0019DC50(this, nullptr, nAggID, aGachaponItemID);
}

void CItemInfo::GetGachaponItemTypeByAggType(long nAggID, ZArray<long>& aGachaponItemID)
{
    __sub_0019DC50(this, nullptr, nAggID, aGachaponItemID);
}

ZXString<char> CItemInfo::GetGachaponMsg(long nGachponItemID, long nType)
{
    ZXString<char> ret;
    return *__sub_001C0570(this, nullptr, &ret, nGachponItemID, nType);
}

int32_t CItemInfo::IsGachaponNoGradeResult(long nItemId)
{
    UNIMPLEMENTED;
}

void CItemInfo::GetGachaponItemRequireInven(long arg0, unsigned char& arg1, unsigned char& arg2, unsigned char& arg3,
                                            unsigned char& arg4)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CItemInfo::IsBonusGachapon(long nItemId)
{
    UNIMPLEMENTED;
}

long CItemInfo::GetGachaponSucessNpc(long nGachaponItemID)
{
    return __sub_001C06B0(this, nullptr, nGachaponItemID);
}

int32_t CItemInfo::GetItemPrice(long nItemID, long& nPrice, double& dUnitPrice)
{
    return __sub_001AAC90(this, nullptr, nItemID, nPrice, dUnitPrice);
}

int32_t CItemInfo::IsMsgItem(long nItemId)
{
    auto info = GetItemInfo(nItemId);
    if (!info)
    {
        return false;
    }

    auto v = info->Getitem(StringPool::GetInstance().GetBSTR(0x17de));
    return get_int32(v, 0) != 0;
}

void CItemInfo::IterateItemNameforScanner_0(_x_com_ptr<IWzProperty> pProp)
{
    __sub_001B2700(this, nullptr, CreateNakedParam(pProp));
}

void CItemInfo::IterateItemNameforScanner_1()
{
    __sub_001B5FA0(this, nullptr);
}

void CItemInfo::LoadNoScanItem(_x_com_ptr<IWzProperty> pProp)
{
    __sub_001A1E00(this, nullptr, CreateNakedParam(pProp));
}

int32_t CItemInfo::IsNoScanItem(long nItemId)
{
    UNIMPLEMENTED;
}

int32_t CItemInfo::IsNoRevive(long nItemId)
{
    auto info = GetItemInfo(nItemId);
    if (!info)
    {
        return false;
    }

    auto v = info->Getitem(StringPool::GetInstance().GetBSTR(0x780));
    return get_int32(v, 0) != 0;
}

ZRef<GW_ItemSlotBase> CItemInfo::GetItemSlot(long nItemID)
{
    ZRef<GW_ItemSlotBase> ret;
    return *__sub_001C3B20(this, nullptr, &ret, nItemID);
}

void CItemInfo::DrawGradeFrame(_x_com_ptr<IWzCanvas> pCanvas, GW_ItemSlotEquip* pItem, long left, long top, long right,
                               long bottom)
{
    __sub_00194D10(this, nullptr, CreateNakedParam(pCanvas), pItem, left, top, right, bottom);
}

void CItemInfo::DrawItemIconForSlot(_x_com_ptr<IWzCanvas> pCanvas, long nItemID, long x, long y, int32_t bProtectedItem,
                                    int32_t bMag2, int32_t bPetDead, int32_t bHideCashIcon, long nEquipItemQuality,
                                    int32_t bHideQualityIcon, long nMagSize)
{
    __sub_001C0A40(this, nullptr, CreateNakedParam(pCanvas), nItemID, x, y, bProtectedItem, bMag2, bPetDead,
                   bHideCashIcon, nEquipItemQuality, bHideQualityIcon, nMagSize);
}

_x_com_ptr<IWzCanvas> CItemInfo::GetSpecialIcon(long nItemId)
{
    _x_com_ptr<IWzCanvas> ret;
    return *__sub_001A87B0(this, nullptr, &ret, nItemId);
}

ZXString<char> CItemInfo::GetSpecialName(long nItemId)
{
    ZXString<char> ret;
    return *__sub_001A8460(this, nullptr, &ret, nItemId);
}

ZXString<char> CItemInfo::GetSpecialDesc(long nItemId)
{
    ZXString<char> ret;
    return *__sub_001A85B0(this, nullptr, &ret, nItemId);
}

void CItemInfo::DrawSpecialIconForSlot(_x_com_ptr<IWzCanvas> pCanvas, long nItemID, long x, long y, int32_t bMag2,
                                       int32_t bHideCashIcon)
{
    __sub_001A8920(this, nullptr, CreateNakedParam(pCanvas), nItemID, x, y, bMag2, bHideCashIcon);
}

long CItemInfo::GetMechanicSetItemEffect(CharacterData& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::GetSetItemEffect(long* aAvatarHairEquip, long nWeaponStickerID, long* anPetID)
{
    return __sub_00194ED0(this, nullptr, aAvatarHairEquip, nWeaponStickerID, anPetID);
}

void CItemInfo::GetSetItemArray(ZArray<long>& aSetItemArray)
{
    __sub_0019DDA0(this, nullptr, aSetItemArray);
}

ZList<ZRef<ITEMNAME>>& CItemInfo::GetScannerItemName()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CItemInfo::GetItemIDArrayByName(long nTI, const ZXString<char>& sWord, ZArray<long>& anResult)
{
    return __sub_001ABE60(this, nullptr, nTI, sWord, anResult);
}

int32_t CItemInfo::LoadNPTExceptionItem()
{
    return __sub_001A1B20(this, nullptr);
}

int32_t CItemInfo::IsNPTExceptionItem(long nItemId)
{
    long val{};
    m_mNPTItemException.GetAt(nItemId, &val);
    return val == 1;
}

long CItemInfo::GetMaxLEV(long nItemID)
{
    return __sub_001ACB70(this, nullptr, nItemID);
}

const CItemInfo::COUPLECHAIRITEM* CItemInfo::GetCoupleChairItem(long nItemID)
{
    return __sub_0054AEF0(this, nullptr, nItemID);
}

void CItemInfo::RegisterSetItemEffect()
{
    __sub_001ACE40(this, nullptr);
}

void CItemInfo::IterateCashBundleItem()
{
    __sub_001B2CA0(this, nullptr);
}

void CItemInfo::IterateBridleItem()
{
    __sub_001B3550(this, nullptr);
}

void CItemInfo::IterateLotteryItem()
{
    //__sub_001C41B0(this, nullptr);
}

void CItemInfo::IterateExtendExpireDateItem()
{
    __sub_001A2000(this, nullptr);
}

void CItemInfo::RegisterCoupleChairItem(long nItemID, _x_com_ptr<IWzProperty> pInfo)
{
    __sub_001A25B0(this, nullptr, nItemID, CreateNakedParam(pInfo));
}

ZRef<ZArray<ZXString<char>>> CItemInfo::GetItemAffectDamageTheme(long nItemID)
{
    return __sub_005D3D00(this, nullptr, nItemID);
}

ZRef<DamageModifiedInfo> CItemInfo::GetItemAffectDamageInfo(ZXString<char> sDamageTheme)
{
    ZRef<DamageModifiedInfo> ret;
    return *__sub_0019DB20(this, nullptr, &ret, CreateNakedParam(sDamageTheme));
}

ZXString<char> CItemInfo::GetMonsterAffectDamageInfo(long nMonsterID)
{
    ZXString<char> ret;
    return *__sub_001A0800(this, nullptr, &ret, nMonsterID);
}

int32_t __cdecl CItemInfo::IsDamageModifiedByEquipUpgrade(unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t __cdecl CItemInfo::CheckDamageModifiedByEquipUpgrade(const CharacterData& cd, unsigned long dwMobTemplateID,
                                                             int32_t bUserAttack, long& nFinalDamage, long nMaxHP)
{
    return __sub_001A44A0(cd, dwMobTemplateID, bUserAttack, nFinalDamage, nMaxHP);
}

void CItemInfo::IterateDamageByEquipUpgrade()
{
    __sub_001B7F30(this, nullptr);
}

int32_t CItemInfo::GetIntItemProp(int itemId, int spCode, int defaultValue)
{
    auto info = GetItemInfo(itemId);
    if (!info)
    {
        return defaultValue;
    }

    auto v = info->Getitem(StringPool::GetInstance().GetBSTR(spCode));
    return get_int32(v, defaultValue);
}

CItemInfo& CItemInfo::operator=(const CItemInfo& arg0)
{
    return _op_assign_153(this, arg0);
}

CItemInfo& CItemInfo::_op_assign_153(CItemInfo* pThis, const CItemInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::ItemSkill::ItemSkill()
{
}

void CItemInfo::ItemSkill::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::Recovery::~Recovery()
{
}

void CItemInfo::Recovery::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::Recovery::Recovery(const CItemInfo::Recovery& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::Recovery::_ctor_1(const CItemInfo::Recovery& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::Recovery::Recovery(long arg0, long arg1, long arg2)
{
    nHP = arg0;
    nMP = arg1;
    tInterval = arg2;
}

void CItemInfo::Recovery::_ctor_0(long arg0, long arg1, long arg2)
{
    new(this) Recovery(arg0, arg1, arg2);
}

CItemInfo::Recovery::Recovery()
{
    UNIMPLEMENTED; //_ctor_3();
}

void CItemInfo::Recovery::_ctor_3()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool CItemInfo::Recovery::operator==(const CItemInfo::Recovery& arg0)
{
    return _op_eq_4(this, arg0);
}

bool CItemInfo::Recovery::_op_eq_4(CItemInfo::Recovery* pThis, const CItemInfo::Recovery& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::Recovery& CItemInfo::Recovery::operator=(const CItemInfo::Recovery& arg0)
{
    return _op_assign_5(this, arg0);
}

CItemInfo::Recovery& CItemInfo::Recovery::_op_assign_5(CItemInfo::Recovery* pThis, const CItemInfo::Recovery& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::~LevelInfo()
{
}

void CItemInfo::LevelInfo::_dtor_0()
{
    return __sub_0019A230(this, nullptr);
}

CItemInfo::LevelInfo::LevelInfo(const CItemInfo::LevelInfo& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::_ctor_1(const CItemInfo::LevelInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::LevelInfo()
{
}

void CItemInfo::LevelInfo::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo& CItemInfo::LevelInfo::operator=(const CItemInfo::LevelInfo& arg0)
{
    return _op_assign_3(this, arg0);
}

CItemInfo::LevelInfo& CItemInfo::LevelInfo::_op_assign_3(CItemInfo::LevelInfo* pThis, const CItemInfo::LevelInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::Ability::~Ability()
{
}

void CItemInfo::LevelInfo::Ability::_dtor_0()
{
    return __sub_0019D070(this, nullptr);
}

CItemInfo::LevelInfo::Ability::Ability(const CItemInfo::LevelInfo::Ability& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::Ability::_ctor_1(const CItemInfo::LevelInfo::Ability& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::Ability::Ability()
{
}

void CItemInfo::LevelInfo::Ability::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::Ability& CItemInfo::LevelInfo::Ability::operator=(const CItemInfo::LevelInfo::Ability& arg0)
{
    return _op_assign_3(this, arg0);
}

CItemInfo::LevelInfo::Ability& CItemInfo::LevelInfo::Ability::_op_assign_3(
    CItemInfo::LevelInfo::Ability* pThis, const CItemInfo::LevelInfo::Ability& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomStat::~RandomStat()
{
}

void CItemInfo::LevelInfo::RandomStat::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomStat::RandomStat(const CItemInfo::LevelInfo::RandomStat& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomStat::_ctor_1(const CItemInfo::LevelInfo::RandomStat& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomStat::RandomStat()
{
}

void CItemInfo::LevelInfo::RandomStat::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomStat::GetRandomValue()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomStat::GetStatType()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomStat& CItemInfo::LevelInfo::RandomStat::operator=(
    const CItemInfo::LevelInfo::RandomStat& arg0)
{
    return _op_assign_5(this, arg0);
}

CItemInfo::LevelInfo::RandomStat& CItemInfo::LevelInfo::RandomStat::_op_assign_5(
    CItemInfo::LevelInfo::RandomStat* pThis, const CItemInfo::LevelInfo::RandomStat& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomMHP::~RandomMHP()
{
}

void CItemInfo::LevelInfo::RandomMHP::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomMHP::RandomMHP(const CItemInfo::LevelInfo::RandomMHP& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomMHP::_ctor_1(const CItemInfo::LevelInfo::RandomMHP& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomMHP::RandomMHP()
{
}

void CItemInfo::LevelInfo::RandomMHP::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomMHP::GetStatType()
{
    return __sub_001915E0(this, nullptr);
}

CItemInfo::LevelInfo::RandomMHP& CItemInfo::LevelInfo::RandomMHP::operator=(const CItemInfo::LevelInfo::RandomMHP& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomMHP& CItemInfo::LevelInfo::RandomMHP::_op_assign_4(
    CItemInfo::LevelInfo::RandomMHP* pThis, const CItemInfo::LevelInfo::RandomMHP& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomMMP::~RandomMMP()
{
}

void CItemInfo::LevelInfo::RandomMMP::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomMMP::RandomMMP(const CItemInfo::LevelInfo::RandomMMP& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomMMP::_ctor_1(const CItemInfo::LevelInfo::RandomMMP& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomMMP::RandomMMP()
{
}

void CItemInfo::LevelInfo::RandomMMP::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomMMP::GetStatType()
{
    return __sub_001915F0(this, nullptr);
}

CItemInfo::LevelInfo::RandomMMP& CItemInfo::LevelInfo::RandomMMP::operator=(const CItemInfo::LevelInfo::RandomMMP& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomMMP& CItemInfo::LevelInfo::RandomMMP::_op_assign_4(
    CItemInfo::LevelInfo::RandomMMP* pThis, const CItemInfo::LevelInfo::RandomMMP& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomSTR::~RandomSTR()
{
}

void CItemInfo::LevelInfo::RandomSTR::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomSTR::RandomSTR(const CItemInfo::LevelInfo::RandomSTR& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomSTR::_ctor_1(const CItemInfo::LevelInfo::RandomSTR& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomSTR::RandomSTR()
{
}

void CItemInfo::LevelInfo::RandomSTR::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomSTR::GetStatType()
{
    return __sub_00191600(this, nullptr);
}

CItemInfo::LevelInfo::RandomSTR& CItemInfo::LevelInfo::RandomSTR::operator=(const CItemInfo::LevelInfo::RandomSTR& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomSTR& CItemInfo::LevelInfo::RandomSTR::_op_assign_4(
    CItemInfo::LevelInfo::RandomSTR* pThis, const CItemInfo::LevelInfo::RandomSTR& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomDEX::~RandomDEX()
{
}

void CItemInfo::LevelInfo::RandomDEX::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomDEX::RandomDEX(const CItemInfo::LevelInfo::RandomDEX& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomDEX::_ctor_1(const CItemInfo::LevelInfo::RandomDEX& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomDEX::RandomDEX()
{
}

void CItemInfo::LevelInfo::RandomDEX::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomDEX::GetStatType()
{
    return __sub_00191610(this, nullptr);
}

CItemInfo::LevelInfo::RandomDEX& CItemInfo::LevelInfo::RandomDEX::operator=(const CItemInfo::LevelInfo::RandomDEX& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomDEX& CItemInfo::LevelInfo::RandomDEX::_op_assign_4(
    CItemInfo::LevelInfo::RandomDEX* pThis, const CItemInfo::LevelInfo::RandomDEX& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomINT::~RandomINT()
{
}

void CItemInfo::LevelInfo::RandomINT::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomINT::RandomINT(const CItemInfo::LevelInfo::RandomINT& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomINT::_ctor_1(const CItemInfo::LevelInfo::RandomINT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomINT::RandomINT()
{
}

void CItemInfo::LevelInfo::RandomINT::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomINT::GetStatType()
{
    return __sub_00191620(this, nullptr);
}

CItemInfo::LevelInfo::RandomINT& CItemInfo::LevelInfo::RandomINT::operator=(const CItemInfo::LevelInfo::RandomINT& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomINT& CItemInfo::LevelInfo::RandomINT::_op_assign_4(
    CItemInfo::LevelInfo::RandomINT* pThis, const CItemInfo::LevelInfo::RandomINT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomLUK::~RandomLUK()
{
}

void CItemInfo::LevelInfo::RandomLUK::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomLUK::RandomLUK(const CItemInfo::LevelInfo::RandomLUK& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomLUK::_ctor_1(const CItemInfo::LevelInfo::RandomLUK& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomLUK::RandomLUK()
{
}

void CItemInfo::LevelInfo::RandomLUK::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomLUK::GetStatType()
{
    return __sub_00191630(this, nullptr);
}

CItemInfo::LevelInfo::RandomLUK& CItemInfo::LevelInfo::RandomLUK::operator=(const CItemInfo::LevelInfo::RandomLUK& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomLUK& CItemInfo::LevelInfo::RandomLUK::_op_assign_4(
    CItemInfo::LevelInfo::RandomLUK* pThis, const CItemInfo::LevelInfo::RandomLUK& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomPAD::~RandomPAD()
{
}

void CItemInfo::LevelInfo::RandomPAD::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomPAD::RandomPAD(const CItemInfo::LevelInfo::RandomPAD& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomPAD::_ctor_1(const CItemInfo::LevelInfo::RandomPAD& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomPAD::RandomPAD()
{
}

void CItemInfo::LevelInfo::RandomPAD::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomPAD::GetStatType()
{
    return __sub_00191640(this, nullptr);
}

CItemInfo::LevelInfo::RandomPAD& CItemInfo::LevelInfo::RandomPAD::operator=(const CItemInfo::LevelInfo::RandomPAD& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomPAD& CItemInfo::LevelInfo::RandomPAD::_op_assign_4(
    CItemInfo::LevelInfo::RandomPAD* pThis, const CItemInfo::LevelInfo::RandomPAD& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomPDD::~RandomPDD()
{
}

void CItemInfo::LevelInfo::RandomPDD::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomPDD::RandomPDD(const CItemInfo::LevelInfo::RandomPDD& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomPDD::_ctor_1(const CItemInfo::LevelInfo::RandomPDD& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomPDD::RandomPDD()
{
}

void CItemInfo::LevelInfo::RandomPDD::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomPDD::GetStatType()
{
    return 7;
}

CItemInfo::LevelInfo::RandomPDD& CItemInfo::LevelInfo::RandomPDD::operator=(const CItemInfo::LevelInfo::RandomPDD& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomPDD& CItemInfo::LevelInfo::RandomPDD::_op_assign_4(
    CItemInfo::LevelInfo::RandomPDD* pThis, const CItemInfo::LevelInfo::RandomPDD& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomMAD::~RandomMAD()
{
}

void CItemInfo::LevelInfo::RandomMAD::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomMAD::RandomMAD(const CItemInfo::LevelInfo::RandomMAD& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomMAD::_ctor_1(const CItemInfo::LevelInfo::RandomMAD& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomMAD::RandomMAD()
{
}

void CItemInfo::LevelInfo::RandomMAD::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomMAD::GetStatType()
{
    return __sub_00191660(this, nullptr);
}

CItemInfo::LevelInfo::RandomMAD& CItemInfo::LevelInfo::RandomMAD::operator=(const CItemInfo::LevelInfo::RandomMAD& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomMAD& CItemInfo::LevelInfo::RandomMAD::_op_assign_4(
    CItemInfo::LevelInfo::RandomMAD* pThis, const CItemInfo::LevelInfo::RandomMAD& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomMDD::~RandomMDD()
{
}

void CItemInfo::LevelInfo::RandomMDD::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomMDD::RandomMDD(const CItemInfo::LevelInfo::RandomMDD& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomMDD::_ctor_1(const CItemInfo::LevelInfo::RandomMDD& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomMDD::RandomMDD()
{
}

void CItemInfo::LevelInfo::RandomMDD::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomMDD::GetStatType()
{
    return __sub_00191670(this, nullptr);
}

CItemInfo::LevelInfo::RandomMDD& CItemInfo::LevelInfo::RandomMDD::operator=(const CItemInfo::LevelInfo::RandomMDD& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomMDD& CItemInfo::LevelInfo::RandomMDD::_op_assign_4(
    CItemInfo::LevelInfo::RandomMDD* pThis, const CItemInfo::LevelInfo::RandomMDD& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomACC::~RandomACC()
{
}

void CItemInfo::LevelInfo::RandomACC::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomACC::RandomACC(const CItemInfo::LevelInfo::RandomACC& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomACC::_ctor_1(const CItemInfo::LevelInfo::RandomACC& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomACC::RandomACC()
{
}

void CItemInfo::LevelInfo::RandomACC::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomACC::GetStatType()
{
    return __sub_00191680(this, nullptr);
}

CItemInfo::LevelInfo::RandomACC& CItemInfo::LevelInfo::RandomACC::operator=(const CItemInfo::LevelInfo::RandomACC& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomACC& CItemInfo::LevelInfo::RandomACC::_op_assign_4(
    CItemInfo::LevelInfo::RandomACC* pThis, const CItemInfo::LevelInfo::RandomACC& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomEVA::~RandomEVA()
{
}

void CItemInfo::LevelInfo::RandomEVA::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomEVA::RandomEVA(const CItemInfo::LevelInfo::RandomEVA& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomEVA::_ctor_1(const CItemInfo::LevelInfo::RandomEVA& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomEVA::RandomEVA()
{
}

void CItemInfo::LevelInfo::RandomEVA::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomEVA::GetStatType()
{
    return __sub_00191690(this, nullptr);
}

CItemInfo::LevelInfo::RandomEVA& CItemInfo::LevelInfo::RandomEVA::operator=(const CItemInfo::LevelInfo::RandomEVA& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomEVA& CItemInfo::LevelInfo::RandomEVA::_op_assign_4(
    CItemInfo::LevelInfo::RandomEVA* pThis, const CItemInfo::LevelInfo::RandomEVA& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomCraft::~RandomCraft()
{
}

void CItemInfo::LevelInfo::RandomCraft::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomCraft::RandomCraft(const CItemInfo::LevelInfo::RandomCraft& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomCraft::_ctor_1(const CItemInfo::LevelInfo::RandomCraft& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomCraft::RandomCraft()
{
}

void CItemInfo::LevelInfo::RandomCraft::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomCraft::GetStatType()
{
    return __sub_001916A0(this, nullptr);
}

CItemInfo::LevelInfo::RandomCraft& CItemInfo::LevelInfo::RandomCraft::operator=(
    const CItemInfo::LevelInfo::RandomCraft& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomCraft& CItemInfo::LevelInfo::RandomCraft::_op_assign_4(
    CItemInfo::LevelInfo::RandomCraft* pThis, const CItemInfo::LevelInfo::RandomCraft& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomSpeed::~RandomSpeed()
{
}

void CItemInfo::LevelInfo::RandomSpeed::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomSpeed::RandomSpeed(const CItemInfo::LevelInfo::RandomSpeed& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomSpeed::_ctor_1(const CItemInfo::LevelInfo::RandomSpeed& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomSpeed::RandomSpeed()
{
}

void CItemInfo::LevelInfo::RandomSpeed::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomSpeed::GetStatType()
{
    return __sub_001916B0(this, nullptr);
}

CItemInfo::LevelInfo::RandomSpeed& CItemInfo::LevelInfo::RandomSpeed::operator=(
    const CItemInfo::LevelInfo::RandomSpeed& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomSpeed& CItemInfo::LevelInfo::RandomSpeed::_op_assign_4(
    CItemInfo::LevelInfo::RandomSpeed* pThis, const CItemInfo::LevelInfo::RandomSpeed& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomJump::~RandomJump()
{
}

void CItemInfo::LevelInfo::RandomJump::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomJump::RandomJump(const CItemInfo::LevelInfo::RandomJump& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomJump::_ctor_1(const CItemInfo::LevelInfo::RandomJump& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomJump::RandomJump()
{
}

void CItemInfo::LevelInfo::RandomJump::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomJump::GetStatType()
{
    return __sub_001916C0(this, nullptr);
}

CItemInfo::LevelInfo::RandomJump& CItemInfo::LevelInfo::RandomJump::operator=(
    const CItemInfo::LevelInfo::RandomJump& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomJump& CItemInfo::LevelInfo::RandomJump::_op_assign_4(
    CItemInfo::LevelInfo::RandomJump* pThis, const CItemInfo::LevelInfo::RandomJump& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomSMHP::~RandomSMHP()
{
}

void CItemInfo::LevelInfo::RandomSMHP::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomSMHP::RandomSMHP(const CItemInfo::LevelInfo::RandomSMHP& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomSMHP::_ctor_1(const CItemInfo::LevelInfo::RandomSMHP& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomSMHP::RandomSMHP()
{
}

void CItemInfo::LevelInfo::RandomSMHP::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomSMHP::GetStatType()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomSMHP& CItemInfo::LevelInfo::RandomSMHP::operator=(
    const CItemInfo::LevelInfo::RandomSMHP& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomSMHP& CItemInfo::LevelInfo::RandomSMHP::_op_assign_4(
    CItemInfo::LevelInfo::RandomSMHP* pThis, const CItemInfo::LevelInfo::RandomSMHP& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomSMMP::~RandomSMMP()
{
}

void CItemInfo::LevelInfo::RandomSMMP::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomSMMP::RandomSMMP(const CItemInfo::LevelInfo::RandomSMMP& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LevelInfo::RandomSMMP::_ctor_1(const CItemInfo::LevelInfo::RandomSMMP& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomSMMP::RandomSMMP()
{
}

void CItemInfo::LevelInfo::RandomSMMP::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::LevelInfo::RandomSMMP::GetStatType()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LevelInfo::RandomSMMP& CItemInfo::LevelInfo::RandomSMMP::operator=(
    const CItemInfo::LevelInfo::RandomSMMP& arg0)
{
    return _op_assign_4(this, arg0);
}

CItemInfo::LevelInfo::RandomSMMP& CItemInfo::LevelInfo::RandomSMMP::_op_assign_4(
    CItemInfo::LevelInfo::RandomSMMP* pThis, const CItemInfo::LevelInfo::RandomSMMP& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::EQUIPITEM::~EQUIPITEM()
{
}

void CItemInfo::EQUIPITEM::_dtor_0()
{
    return __sub_001A5CB0(this, nullptr);
}

CItemInfo::EQUIPITEM::EQUIPITEM(const CItemInfo::EQUIPITEM& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::EQUIPITEM::_ctor_1(const CItemInfo::EQUIPITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::EQUIPITEM::EQUIPITEM()
{
}

void CItemInfo::EQUIPITEM::_ctor_0()
{
    return __sub_001A6E10(this, nullptr);
}

_ZTL_SEC_GETSETI(long, CItemInfo::EQUIPITEM, nItemID)
_ZTL_SEC_GETSETI(long, CItemInfo::EQUIPITEM, nrSTR)
_ZTL_SEC_GETSETI(long, CItemInfo::EQUIPITEM, nrINT)
_ZTL_SEC_GETSETI(long, CItemInfo::EQUIPITEM, nrDEX)
_ZTL_SEC_GETSETI(long, CItemInfo::EQUIPITEM, nrLUK)
_ZTL_SEC_GETSETI(long, CItemInfo::EQUIPITEM, nrPOP)
_ZTL_SEC_GETSETI(long, CItemInfo::EQUIPITEM, nrJob)
_ZTL_SEC_GETSETI(long, CItemInfo::EQUIPITEM, nrLevel)
_ZTL_SEC_GETSETI(long, CItemInfo::EQUIPITEM, nrMobLevel)
_ZTL_SEC_GETSETI(long, CItemInfo::EQUIPITEM, nSellPrice)
_ZTL_SEC_GETSETI(int32_t, CItemInfo::EQUIPITEM, bCash)
_ZTL_SEC_GETSETI(unsigned char, CItemInfo::EQUIPITEM, nRUC)
_ZTL_SEC_GETSETI(unsigned char, CItemInfo::EQUIPITEM, nTUC)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niSTR)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niDEX)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niINT)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niLUK)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niMaxHP)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niMaxMP)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niPAD)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niMAD)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niPDD)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niMDD)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niACC)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niEVA)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niCraft)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niSpeed)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niJump)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niSwim)
_ZTL_SEC_GETSETI(short, CItemInfo::EQUIPITEM, niFatigue)
_ZTL_SEC_GETSETI(long, CItemInfo::EQUIPITEM, nKnockback)
_ZTL_SEC_GETSETI(double, CItemInfo::EQUIPITEM, dRecovery)
_ZTL_SEC_GETSETI(double, CItemInfo::EQUIPITEM, dFs)
_ZTL_SEC_GETSETI(long, CItemInfo::EQUIPITEM, nSwim)
_ZTL_SEC_GETSETI(long, CItemInfo::EQUIPITEM, nTamingMob)
_ZTL_SEC_GETSETI(long, CItemInfo::EQUIPITEM, nIUC)

int32_t CItemInfo::EQUIPITEM::IsSetItem()
{
    return this->nSetItemID != 0;
}

long CItemInfo::EQUIPITEM::GetSetItemID()
{
    //return __sub_00194C80(this, nullptr);
    return nSetItemID;
}

int32_t CItemInfo::EQUIPITEM::IsBonusExpItem()
{
    //return __sub_005CF920(this, nullptr);
    return !aBonusExpRate.IsEmpty();
}

long CItemInfo::EQUIPITEM::GetBonusExpRate(long nCurDurability)
{
    //return __sub_002D2C40(this, nullptr, nCurDurability);
    //TODO(game)
    return aBonusExpRate[nCurDurability].first;
}

int32_t CItemInfo::EQUIPITEM::IsPotionDiscount()
{
    //return __sub_005CF950(this, nullptr);
    return !aPotionDiscountRate.IsEmpty();
}

long CItemInfo::EQUIPITEM::GetPotionDiscountRate(long nCurDurability)
{
    //return __sub_002D2C40(this, nullptr, nCurDurability);
    return aPotionDiscountRate[nCurDurability].first;
}

int32_t CItemInfo::EQUIPITEM::IsItemSuitedForTamingMob(long nTamingMobID)
{
    //return __sub_000BC300(this, nullptr, nTamingMobID);
    auto id = _ZtlSecureGet_nItemID();
    if (id / 10000 == 191 && nTamingMobID / 10000 == 190)
    {
        for (auto& mid : aTamingMobItem)
            if (mid == nTamingMobID)
                return true;
    }

    return false;
}

int32_t CItemInfo::EQUIPITEM::IsAbleToStickWithWeapon(long nTamingMobID)
{
    //return __sub_000BC300(this, nullptr, nTamingMobID);
    auto id = _ZtlSecureGet_nItemID();
    if (id / 100000 != 17)
        return false;

    auto wt = get_weapon_type(id);

    auto ix = 0;
    for (auto i = 0; i < _D_G_ANWEAPONTYPE.size(); ++i)
    {
        if (_D_G_ANWEAPONTYPE[i] == wt)
        {
            ix = i;
            break;
        }
    }
    return (1 << ix & this->dwAfterimageFlag) != 0;
}

int32_t CItemInfo::EQUIPITEM::IsItemSuitedForPet(long nPetTemplateID)
{
    //return __sub_000BC300(this, nullptr, nTamingMobID);
    auto id = _ZtlSecureGet_nItemID();
    if (id / 10000 == 180
        && nPetTemplateID / 10000 == 500)
    {
        MY_UINT128 v7;
        v7.setBitNumber(nPetTemplateID % 1000, 1u);
        auto v5 = uPetTemplateFlag & v7;
        if (!!v5)
            return true;
    }
    return false;
}

long CItemInfo::EQUIPITEM::PickLevelUpType()
{
    //return __sub_00194C80(this, nullptr);
    auto n = anLevelUpTypePool.GetCount();
    if (anLevelUpTypePool.IsEmpty())
        return 0;

    return anLevelUpTypePool[_D_G_RAND.Random() % n];
}

long CItemInfo::EQUIPITEM::CalcRepairDurabilityPay(long nCurDurability)
{
    //return __sub_002D2C40(this, nullptr, nCurDurability);
    if (nDurability <= 0 || nCurDurability >= nDurability)
        return false;

    auto lvl = _ZtlSecureGet_nrLevel();
    auto sell = _ZtlSecureGet_nSellPrice();
    //TODO(game) double/long
    return ((100.0 - (100 * nCurDurability / this->nDurability))
            * ((lvl * lvl)
                * sell
                / 50.0)
            / (this->nDurability
                / 100.0))
        * ((this->bEpic != 0) * 0.25 + 1.0);
}

CItemInfo::EQUIPITEM& CItemInfo::EQUIPITEM::operator=(const CItemInfo::EQUIPITEM& arg0)
{
    return _op_assign_86(this, arg0);
}

CItemInfo::EQUIPITEM& CItemInfo::EQUIPITEM::_op_assign_86(CItemInfo::EQUIPITEM* pThis, const CItemInfo::EQUIPITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::EQUIPITEM::ADDITION::~ADDITION()
{
}

void CItemInfo::EQUIPITEM::ADDITION::_dtor_0()
{
    return __sub_0019A000(this, nullptr);
}

CItemInfo::EQUIPITEM::ADDITION::ADDITION(const CItemInfo::EQUIPITEM::ADDITION& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::EQUIPITEM::ADDITION::_ctor_1(const CItemInfo::EQUIPITEM::ADDITION& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::EQUIPITEM::ADDITION::ADDITION() = default;

void CItemInfo::EQUIPITEM::ADDITION::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZRef<CItemInfo::EQUIPITEM::ADDITION> __cdecl CItemInfo::EQUIPITEM::ADDITION::Load(_x_com_ptr<IWzProperty> pAddition)
{
    return __sub_001AF1C0(CreateNakedParam(pAddition));
}

ZXString<char> CItemInfo::EQUIPITEM::ADDITION::GetDesc()
{
    return __sub_001A6B90(this, nullptr);
}

CItemInfo::EQUIPITEM::ADDITION& CItemInfo::EQUIPITEM::ADDITION::operator=(const CItemInfo::EQUIPITEM::ADDITION& arg0)
{
    return _op_assign_5(this, arg0);
}

CItemInfo::EQUIPITEM::ADDITION& CItemInfo::EQUIPITEM::ADDITION::_op_assign_5(
    CItemInfo::EQUIPITEM::ADDITION* pThis, const CItemInfo::EQUIPITEM::ADDITION& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::SETEFFECT::~SETEFFECT()
{
    //_dtor_0();
}

void CItemInfo::SETEFFECT::_dtor_0()
{
    return __sub_0019A1C0(this, nullptr);
}

CItemInfo::SETEFFECT::SETEFFECT(const CItemInfo::SETEFFECT& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::SETEFFECT::_ctor_1(const CItemInfo::SETEFFECT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::SETEFFECT::SETEFFECT()
{
    //
}

void CItemInfo::SETEFFECT::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::SETEFFECT& CItemInfo::SETEFFECT::operator=(const CItemInfo::SETEFFECT& arg0)
{
    return _op_assign_3(this, arg0);
}

CItemInfo::SETEFFECT& CItemInfo::SETEFFECT::_op_assign_3(CItemInfo::SETEFFECT* pThis, const CItemInfo::SETEFFECT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::SETITEMINFO::~SETITEMINFO()
{
    //_dtor_0();
}

void CItemInfo::SETITEMINFO::_dtor_0()
{
    return __sub_0019D280(this, nullptr);
}

CItemInfo::SETITEMINFO::SETITEMINFO(const CItemInfo::SETITEMINFO& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::SETITEMINFO::_ctor_1(const CItemInfo::SETITEMINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::SETITEMINFO::SETITEMINFO()
{
    //
}

void CItemInfo::SETITEMINFO::_ctor_0()
{
    return __sub_0019D1F0(this, nullptr);
}

CItemInfo::SETITEMINFO& CItemInfo::SETITEMINFO::operator=(const CItemInfo::SETITEMINFO& arg0)
{
    return _op_assign_3(this, arg0);
}

CItemInfo::SETITEMINFO& CItemInfo::SETITEMINFO::_op_assign_3(CItemInfo::SETITEMINFO* pThis,
                                                             const CItemInfo::SETITEMINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::GACHAPONAGGSCOPE::GACHAPONAGGSCOPE()
{
    //
}

void CItemInfo::GACHAPONAGGSCOPE::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::GACHAPONITEMINFO::~GACHAPONITEMINFO()
{
}

void CItemInfo::GACHAPONITEMINFO::_dtor_0()
{
    return __sub_001A5E10(this, nullptr);
}

CItemInfo::GACHAPONITEMINFO::GACHAPONITEMINFO(const CItemInfo::GACHAPONITEMINFO& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::GACHAPONITEMINFO::_ctor_1(const CItemInfo::GACHAPONITEMINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::GACHAPONITEMINFO::GACHAPONITEMINFO()
{
    //
}

void CItemInfo::GACHAPONITEMINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::GACHAPONITEMINFO& CItemInfo::GACHAPONITEMINFO::operator=(const CItemInfo::GACHAPONITEMINFO& arg0)
{
    return _op_assign_3(this, arg0);
}

CItemInfo::GACHAPONITEMINFO& CItemInfo::GACHAPONITEMINFO::_op_assign_3(CItemInfo::GACHAPONITEMINFO* pThis,
                                                                       const CItemInfo::GACHAPONITEMINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::BUNDLEITEM::~BUNDLEITEM()
{
}

void CItemInfo::BUNDLEITEM::_dtor_0()
{
    return __sub_0019D160(this, nullptr);
}

CItemInfo::BUNDLEITEM::BUNDLEITEM(const CItemInfo::BUNDLEITEM& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::BUNDLEITEM::_ctor_1(const CItemInfo::BUNDLEITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::BUNDLEITEM::BUNDLEITEM()
{
}

void CItemInfo::BUNDLEITEM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::BUNDLEITEM& CItemInfo::BUNDLEITEM::operator=(const CItemInfo::BUNDLEITEM& arg0)
{
    return _op_assign_3(this, arg0);
}

CItemInfo::BUNDLEITEM& CItemInfo::BUNDLEITEM::_op_assign_3(CItemInfo::BUNDLEITEM* pThis,
                                                           const CItemInfo::BUNDLEITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::PETFOODITEM::~PETFOODITEM()
{
}

void CItemInfo::PETFOODITEM::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::PETFOODITEM::PETFOODITEM(const CItemInfo::PETFOODITEM& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::PETFOODITEM::_ctor_1(const CItemInfo::PETFOODITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::PETFOODITEM::PETFOODITEM()
{
    //
}

void CItemInfo::PETFOODITEM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::PETFOODITEM& CItemInfo::PETFOODITEM::operator=(const CItemInfo::PETFOODITEM& arg0)
{
    return _op_assign_3(this, arg0);
}

CItemInfo::PETFOODITEM& CItemInfo::PETFOODITEM::_op_assign_3(CItemInfo::PETFOODITEM* pThis,
                                                             const CItemInfo::PETFOODITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::BRIDLEITEM::~BRIDLEITEM()
{
}

void CItemInfo::BRIDLEITEM::_dtor_0()
{
    return __sub_0019CF80(this, nullptr);
}

CItemInfo::BRIDLEITEM::BRIDLEITEM(const CItemInfo::BRIDLEITEM& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::BRIDLEITEM::_ctor_1(const CItemInfo::BRIDLEITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::BRIDLEITEM::BRIDLEITEM()
{
    //
}

void CItemInfo::BRIDLEITEM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::BRIDLEITEM& CItemInfo::BRIDLEITEM::operator=(const CItemInfo::BRIDLEITEM& arg0)
{
    return _op_assign_3(this, arg0);
}

CItemInfo::BRIDLEITEM& CItemInfo::BRIDLEITEM::_op_assign_3(CItemInfo::BRIDLEITEM* pThis,
                                                           const CItemInfo::BRIDLEITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LOTTERY_ENTITY::~LOTTERY_ENTITY()
{
}

void CItemInfo::LOTTERY_ENTITY::_dtor_0()
{
    return __sub_0019D860(this, nullptr);
}

CItemInfo::LOTTERY_ENTITY::LOTTERY_ENTITY(const CItemInfo::LOTTERY_ENTITY& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LOTTERY_ENTITY::_ctor_1(const CItemInfo::LOTTERY_ENTITY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LOTTERY_ENTITY::LOTTERY_ENTITY()
{
    //
}

void CItemInfo::LOTTERY_ENTITY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LOTTERY_ENTITY& CItemInfo::LOTTERY_ENTITY::operator=(const CItemInfo::LOTTERY_ENTITY& arg0)
{
    return _op_assign_3(this, arg0);
}

CItemInfo::LOTTERY_ENTITY& CItemInfo::LOTTERY_ENTITY::_op_assign_3(CItemInfo::LOTTERY_ENTITY* pThis,
                                                                   const CItemInfo::LOTTERY_ENTITY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LOTTERYITEM::~LOTTERYITEM()
{
}

void CItemInfo::LOTTERYITEM::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LOTTERYITEM::LOTTERYITEM(const CItemInfo::LOTTERYITEM& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::LOTTERYITEM::_ctor_1(const CItemInfo::LOTTERYITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LOTTERYITEM::LOTTERYITEM()
{
    //
}

void CItemInfo::LOTTERYITEM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::LOTTERYITEM& CItemInfo::LOTTERYITEM::operator=(const CItemInfo::LOTTERYITEM& arg0)
{
    return _op_assign_3(this, arg0);
}

CItemInfo::LOTTERYITEM& CItemInfo::LOTTERYITEM::_op_assign_3(CItemInfo::LOTTERYITEM* pThis,
                                                             const CItemInfo::LOTTERYITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::QUESTDELIVERYITEM::~QUESTDELIVERYITEM()
{
}

void CItemInfo::QUESTDELIVERYITEM::_dtor_0()
{
    return __sub_0019CFF0(this, nullptr);
}

CItemInfo::QUESTDELIVERYITEM::QUESTDELIVERYITEM(const CItemInfo::QUESTDELIVERYITEM& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::QUESTDELIVERYITEM::_ctor_1(const CItemInfo::QUESTDELIVERYITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::QUESTDELIVERYITEM::QUESTDELIVERYITEM()
{
    //
}

void CItemInfo::QUESTDELIVERYITEM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CItemInfo::QUESTDELIVERYITEM::GetType()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CItemInfo::QUESTDELIVERYITEM::IsAllowedDeliveryQuest(uint16_t usQuestID)
{
    return __sub_002AE900(this, nullptr, usQuestID);
}

CItemInfo::QUESTDELIVERYITEM& CItemInfo::QUESTDELIVERYITEM::operator=(const CItemInfo::QUESTDELIVERYITEM& arg0)
{
    return _op_assign_5(this, arg0);
}

CItemInfo::QUESTDELIVERYITEM& CItemInfo::QUESTDELIVERYITEM::_op_assign_5(
    CItemInfo::QUESTDELIVERYITEM* pThis, const CItemInfo::QUESTDELIVERYITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::SET_EFFECT::~SET_EFFECT()
{
    //TODO
}

void CItemInfo::SET_EFFECT::_dtor_0()
{
    return __sub_0019B1E0(this, nullptr);
}

CItemInfo::SET_EFFECT::SET_EFFECT(const CItemInfo::SET_EFFECT& arg0)
{
    _ctor_1(arg0);
}

void CItemInfo::SET_EFFECT::_ctor_1(const CItemInfo::SET_EFFECT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemInfo::SET_EFFECT::SET_EFFECT()
{
    //
}

void CItemInfo::SET_EFFECT::_ctor_0()
{
    return __sub_0019B150(this, nullptr);
}

CItemInfo::SET_EFFECT& CItemInfo::SET_EFFECT::operator=(const CItemInfo::SET_EFFECT& __that)
{
    return _op_assign_3(this, __that);
}

CItemInfo::SET_EFFECT& CItemInfo::SET_EFFECT::_op_assign_3(CItemInfo::SET_EFFECT* pThis,
                                                           const CItemInfo::SET_EFFECT& __that)
{
    return __sub_001A52D0(pThis, nullptr, __that);
}

CItemOptionInfo::~CItemOptionInfo()
{
}

void CItemOptionInfo::_dtor_0()
{
    return __sub_001B4C40(this, nullptr);
}

CItemOptionInfo::CItemOptionInfo(const CItemOptionInfo& arg0)
{
    _ctor_1(arg0);
}

void CItemOptionInfo::_ctor_1(const CItemOptionInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemOptionInfo::CItemOptionInfo()
{
    //
}

void CItemOptionInfo::_ctor_0()
{
    return __sub_005C4BA0(this, nullptr);
}

int32_t CItemOptionInfo::IterateItemOptionInfo()
{
    //return __sub_001B6D40(this, nullptr);
    IterateItemOption();
    return true;
}

ZRef<ItemOptionInfo> CItemOptionInfo::GetItemOption(long nItemOptionID)
{
    ZRef<ItemOptionInfo> ret;
    return *__sub_00175090(this, nullptr, &ret, nItemOptionID);
}

ZRef<SocketOptionInfo> CItemOptionInfo::GetSocketOption(long nSocketOptionID)
{
    ZRef<SocketOptionInfo> ret;
    return *__sub_001751A0(this, nullptr, &ret, nSocketOptionID);
}

int32_t CItemOptionInfo::IsValidOptionType(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CItemOptionInfo::IterateItemOption()
{
    //__sub_001B4C40(this, nullptr);
    auto prop = get_rm()->GetObjectT<IWzProperty>(_GetBSTR(0x176A));
    EnumVariantWrapper iter(prop);
    for (Ztl_variant_t& cur: iter)
    {
        auto key = cur.GetStr();
        auto nKey = key.ToInt();

        auto item = prop->GetItemT<IWzProperty>(key);
        auto opt = LoadItemOption(nKey, _x_com_ptr<IWzProperty>(item));
        m_mItemOption.Insert(nKey, opt);
    }
}

void CItemOptionInfo::IterateSocketOption()
{
    //__sub_001B4C40(this, nullptr);
    return;
    /*auto prop = get_rm()->GetObjectT<IWzProperty>(_GetBSTR(0x176A));
    EnumVariantWrapper iter(prop);
    for (Ztl_variant_t& cur: iter)
    {
        auto key = cur.GetStr();
        auto nKey = key.ToInt();

        auto item = prop->GetItemT<IWzProperty>(key);
        auto opt = LoadSocketOption(nKey, _x_com_ptr<IWzProperty>(item));
        m_mSocketOption.Insert(nKey, opt);
    }*/
}

ZRef<ItemOptionInfo> CItemOptionInfo::LoadItemOption(long nItemOptionID, _x_com_ptr<IWzProperty> pItemOption)
{
    ZRef<ItemOptionInfo> ret;
    return *__sub_001ADE40(this, nullptr, &ret, nItemOptionID, CreateNakedParam(pItemOption));
}

ZRef<SocketOptionInfo> CItemOptionInfo::LoadSocketOption(long arg0, _x_com_ptr<IWzProperty> arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CItemOptionInfo::LoadItemOptionLevelData(long nItemOptionID, ZArray<ItemOptionLevelData>& a,
                                                 _x_com_ptr<IWzProperty> p)
{
    return __sub_001A90C0(this, nullptr, nItemOptionID, a, CreateNakedParam(p));
}

int32_t CItemOptionInfo::LoadSocketOptionLevelData(long arg0, ZArray<SocketOptionLevelData>& arg1,
                                                   _x_com_ptr<IWzProperty> arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemOptionInfo& CItemOptionInfo::operator=(const CItemOptionInfo& arg0)
{
    return _op_assign_13(this, arg0);
}

CItemOptionInfo& CItemOptionInfo::_op_assign_13(CItemOptionInfo* pThis, const CItemOptionInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl DownHeap_ZPair_long_long__PairFirstLess_(ZArray<ZPair<long, long>>& a, int32_t nIdx, int32_t nLen,
                                                      int32_t nFrom, none& comp)
{
    return __sub_001917E0(a, nIdx, nLen, nFrom, comp);
}

void __cdecl InsertionSort_ZPair_long_long__PairFirstLess_(ZArray<ZPair<long, long>>& a, int32_t nFrom, int32_t nTo,
                                                           none& comp)
{
    return __sub_00194500(a, nFrom, nTo, comp);
}

void __cdecl ZSort_ZPair_long_long__PairFirstLess_(ZArray<ZPair<long, long>>& a, __POSITION* posFrom, __POSITION* posTo,
                                                   none comp)
{
    return __sub_0019AD00(a, posFrom, posTo, comp);
}

float __cdecl get_float(Ztl_variant_t& v, float fDefault)
{
    //return __sub_00190CA0(v, fDefault);
    Ztl_variant_t tmp;
    if (!v.vt || v.vt == VT_ERROR || ZComAPI::ZComVariantChangeType(&tmp, &v, 0, VT_R4) < 0)
        return fDefault;
    return tmp.fltVal;
}

int32_t __cdecl Partition_ZPair_long_long__PairFirstLess_(ZArray<ZPair<long, long>>& a, int32_t nFrom, int32_t nTo,
                                                          const ZPair<long, long>& pivot, none& comp)
{
    return __sub_00194AB0(a, nFrom, nTo, pivot, comp);
}

void __cdecl InsertionSort_ZPair_long_long__PairSecondLess_(ZArray<ZPair<long, long>>& a, int32_t nFrom, int32_t nTo,
                                                            none& comp)
{
    return __sub_00194490(a, nFrom, nTo, comp);
}

int32_t __cdecl GETCRC32_long_long_(const long& a)
{
    return __sub_001924F0(a);
}

_x_com_ptr<IWzNameSpace>&__cdecl get_root()
{
    return _D_G_ROOT;
}

void __cdecl ZSort_ZPair_long_long__PairSecondLess_(ZArray<ZPair<long, long>>& a, none comp)
{
    return __sub_0019C5E0(a, comp);
}

void __cdecl ZSort_ZPair_long_long__PairSecondLess_(ZArray<ZPair<long, long>>& a, __POSITION* posFrom,
                                                    __POSITION* posTo, none comp)
{
    return __sub_0019AC90(a, posFrom, posTo, comp);
}

ZXString<char> __cdecl get_weapon_category_name(long nItemID)
{
    //return __sub_0019ED10(nItemID);
    auto code = 0;
    switch (get_weapon_type(nItemID))
    {
    case 30:
        code = 618;
        break;
    case 31:
        code = 619;
        break;
    case 32:
        code = 620;
        break;
    case 33:
        code = 621;
        break;
    case 37:
        code = 622;
        break;
    case 38:
        code = 623;
        break;
    case 40:
        code = 624;
        break;
    case 41:
        code = 625;
        break;
    case 42:
        code = 626;
        break;
    case 43:
        code = 627;
        break;
    case 44:
        code = 628;
        break;
    case 45:
        code = 629;
        break;
    case 46:
        code = 630;
        break;
    case 47:
        code = 631;
        break;
    case 48:
        code = 632;
        break;
    case 49:
        code = 633;
        break;
    default:
        return {};
    }
    return StringPool::GetInstance().GetString(code);
}

void __cdecl DownHeap_ZPair_long_long__PairSecondLess_(ZArray<ZPair<long, long>>& a, int32_t nIdx, int32_t nLen,
                                                       int32_t nFrom, none& comp)
{
    return __sub_00191730(a, nIdx, nLen, nFrom, comp);
}

ZXString16 __cdecl get_weekly_data_path(long nItemID, uint16_t wDayOfWeek)
{
    //return __sub_001A65F0(nItemID, wDayOfWeek);
    auto path = get_equip_data_path(nItemID);
    if ((wDayOfWeek - 1) <= 5u)
    {
        auto str = StringPool::GetInstance().GetStringW(0x950u);
        return ZXString16::FromFmt(str.c_str(), path.c_str(), wDayOfWeek - 1);
    }
    return {};
}

uint32_t __fastcall _ZtlSecureTear_int_(int32_t arg0, int32_t* arg1)
{
    return __sub_00195300(arg0, arg1);
}

int32_t __cdecl Partition_ZPair_long_long__PairSecondLess_(ZArray<ZPair<long, long>>& a, int32_t nFrom, int32_t nTo,
                                                           const ZPair<long, long>& pivot, none& comp)
{
    return __sub_00194950(a, nFrom, nTo, pivot, comp);
}

ZXString16 __cdecl get_equip_data_path(long nItemID)
{
    //return __sub_001A6060(nItemID);
    auto code = 0;
    auto v3 = nItemID / 10000;
    auto sub = v3 / 10;
    switch (nItemID / 10000)
    {
    case 0:
    case 1:
        code = 0x93E;
        break;
    case 2:

        code = 0x93F;
        break;
    case 3:

        code = 0x940;
        break;
    case 100:

        code = 0x941;
        break;
    case 101:
    case 102:
    case 103:
    case 112:
    case 113:
    case 114:
    case 115:
        code = 0x942;
        break;
    case 104:

        code = 0x943;
        break;
    case 105:

        code = 0x944;
        break;
    case 106:

        code = 0x945;
        break;
    case 107:

        code = 0x946;
        break;
    case 108:

        code = 0x947;
        break;
    case 109:
    case 119:

        code = 0x948;
        break;
    case 110:

        code = 0x949;
        break;
    case 111:

        code = 0x94A;
        break;
    case 161:
    case 162:
    case 163:
    case 164:
    case 165:

        code = 0x18FA;
        break;
    case 180:
    case 181:
    case 182:
    case 183:

        code = 0x94B;
        break;
    case 190:
    case 191:
    case 193:
    case 198:

        code = 0x94D;
        break;
    case 194:
    case 195:
    case 196:
    case 197:

        code = 0x94F;
        break;
    default:
        if (v3 / 10 != 13 && sub != 14 && sub != 16 && sub != 17)
            return {};

        code = 0x94C;
        break;
    }

    auto s = StringPool::GetInstance().GetStringW(code);
    return ZXString16::FromFmt(s.c_str(), nItemID);
}

void __cdecl ZSort_ZPair_long_long__PairFirstLess_(ZArray<ZPair<long, long>>& a, none comp)
{
    return __sub_0019C620(a, comp);
}
