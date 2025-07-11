// UIToolTip.cpp
#include "UIToolTip.hpp"
#include "Stage/Stage.hpp"

static ZRef<CStage> FAKE_ZREF_STAGE{};

static ZRef<CItemInfo::LevelInfo::Ability> FAKE_ZRef_CItemInfo_LevelInfo_Ability{};
static ZMap<long, ZRef<ToolTip_SetItemList>, long> FAKE_ZMap_long_ZRef_ToolTip_SetItemList_long{};
static ZList<ZRef<ToolTip_SetItemList>> FAKE_ZList_ZRef_ToolTip_SetItemList{};
static ZArray<PARTYMEMBER> FAKE_ZArray_PARTYMEMBER{};

static ZRefCounted_AllocHelper<ZRefCountedDummy<ToolTip_SetItemList>>
FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_ToolTip_SetItemList{};

#include "UIToolTip_regen.ipp"

CToolTipHelper::~CToolTipHelper()
{
}

void CToolTipHelper::_dtor_0()
{
    //return __sub_0013C770(this, nullptr);
    this->~CToolTipHelper();
}

CToolTipHelper::CToolTipHelper(const CToolTipHelper& arg0)
{
    _ctor_1(arg0);
}

void CToolTipHelper::_ctor_1(const CToolTipHelper& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CToolTipHelper::CToolTipHelper()
{
}

void CToolTipHelper::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CToolTipHelper::LoadToolTip(unsigned long dwField, _x_com_ptr<IWzProperty> pPropRect)
{
    __sub_0049F7F0(this, nullptr, dwField, CreateNakedParam(pPropRect));
}

void CToolTipHelper::LoadToolTip(const wchar_t* arg0)
{
    __sub_00494C00(this, nullptr, arg0);
}

int32_t CToolTipHelper::CheckAndShow(CUIToolTip& uiToolTip, long rx, long ry, int32_t bObjectToolTip, long nMaxCount)
{
    return __sub_004A0980(this, nullptr, uiToolTip, rx, ry, bObjectToolTip, nMaxCount);
}

void CToolTipHelper::GetCharToolTipInfo(long nIdx, tagPOINT& ptToolTipLT, ZXString<char>& sTitle, ZXString<char>& sDesc)
{
    __sub_00483710(this, nullptr, nIdx, ptToolTipLT, sTitle, sDesc);
}

ZList<long> CToolTipHelper::GetNearToolTip(tagPOINT ptUser)
{
    //return __sub_004A0AC0(this, nullptr, CreateNakedParam(ptUser));
    auto head = m_mTTHChar.GetHeadPosition();
    ZList<long> result;
    while (head)
    {
        TTH_INFO value{};
        auto cur = m_mTTHChar.GetNext(head, &value);
        if (PtInRect(&value.rect, ptUser))
        {
            result.Insert(cur);
        }
    }

    return result;
}

CToolTipHelper& CToolTipHelper::operator=(const CToolTipHelper& arg0)
{
    return _op_assign_8(this, arg0);
}

CToolTipHelper& CToolTipHelper::_op_assign_8(CToolTipHelper* pThis, const CToolTipHelper& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CToolTipHelper::TTH_INFO::~TTH_INFO()
{
}

void CToolTipHelper::TTH_INFO::_dtor_0()
{
    //return __sub_0012E430(this, nullptr);
    this->~TTH_INFO();
}

CToolTipHelper::TTH_INFO::TTH_INFO(const CToolTipHelper::TTH_INFO& arg0) = default;

void CToolTipHelper::TTH_INFO::_ctor_1(const CToolTipHelper::TTH_INFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CToolTipHelper::TTH_INFO::TTH_INFO()
{
}

void CToolTipHelper::TTH_INFO::_ctor_0()
{
    new(this) TTH_INFO();
}

CToolTipHelper::TTH_INFO& CToolTipHelper::TTH_INFO::operator=(const CToolTipHelper::TTH_INFO& __that)
{
    return _op_assign_3(this, __that);
}

CToolTipHelper::TTH_INFO& CToolTipHelper::TTH_INFO::_op_assign_3(CToolTipHelper::TTH_INFO* pThis,
                                                                 const CToolTipHelper::TTH_INFO& __that)
{
    return __sub_00483330(pThis, nullptr, __that);
}

ToolTip_SetItemList::~ToolTip_SetItemList()
{
    UNIMPLEMENTED; // _dtor_0();
}

void ToolTip_SetItemList::_dtor_0()
{
    return __sub_00482D00(this, nullptr);
}

ToolTip_SetItemList::ToolTip_SetItemList(const ToolTip_SetItemList& arg0)
{
    _ctor_1(arg0);
}

void ToolTip_SetItemList::_ctor_1(const ToolTip_SetItemList& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ToolTip_SetItemList::ToolTip_SetItemList()
{
    UNIMPLEMENTED; //_ctor_0();
}

void ToolTip_SetItemList::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ToolTip_SetItemList& ToolTip_SetItemList::operator=(const ToolTip_SetItemList& arg0)
{
    return _op_assign_3(this, arg0);
}

ToolTip_SetItemList& ToolTip_SetItemList::_op_assign_3(ToolTip_SetItemList* pThis, const ToolTip_SetItemList& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIToolTip::~CUIToolTip()
{
    //_dtor_0();
}

void CUIToolTip::_dtor_0()
{
    this->~CUIToolTip();
}

CUIToolTip::CUIToolTip(const CUIToolTip& arg0) = default;

void CUIToolTip::_ctor_1(const CUIToolTip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIToolTip::CUIToolTip()
{
    m_pFontHL_White = G_PCOM.CreateWzFont();
    m_pFontHL_Gold = G_PCOM.CreateWzFont();
    m_pFontHL_Orange = G_PCOM.CreateWzFont();
    m_pFontHL_Gray = G_PCOM.CreateWzFont();
    m_pFontHL_Green = G_PCOM.CreateWzFont();
    m_pFontHL_Blue = G_PCOM.CreateWzFont();
    m_pFontHL_Violet = G_PCOM.CreateWzFont();
    m_pFontHL_Green2 = G_PCOM.CreateWzFont();
    m_pFontHL_Excellent = G_PCOM.CreateWzFont();
    m_pFontHL_Special = G_PCOM.CreateWzFont();

    auto ba = Ztl_bstr_t(L"BA");
    auto arial = Ztl_bstr_t(L"Arial");

    m_pFontHL_White->Create(
        arial,
        12,
        0xFFFFFFFF,
        Ztl_variant_t(ba));

    m_pFontHL_Gold->Create(
        arial,
        12,
        0xfffdf514,
        Ztl_variant_t(ba));

    m_pFontHL_Orange->Create(
        arial,
        12,
        0xffff8a18,
        Ztl_variant_t(ba));

    m_pFontHL_Gray->Create(
        arial,
        12,
        0xffbcbcbc,
        Ztl_variant_t(ba));

    m_pFontHL_Green->Create(
        arial,
        12,
        0xff93e119,
        Ztl_variant_t(ba));

    m_pFontHL_Blue->Create(
        arial,
        12,
        0xff5ca1ff,
        Ztl_variant_t(ba));

    m_pFontHL_Violet->Create(
        arial,
        12,
        0xffc261ff,
        Ztl_variant_t(ba));

    m_pFontHL_Green2->Create(
        arial,
        12,
        0xfff7ff00,
        Ztl_variant_t(ba));

    m_pFontHL_Excellent->Create(
        arial,
        12,
        0xff37ff00,
        Ztl_variant_t(ba));

    m_pFontHL_Special->Create(
        arial,
        12,
        0xffff007f,
        Ztl_variant_t(ba));


    m_pFontGen_White = G_PCOM.CreateWzFont();
    m_pFontGen_Gray = G_PCOM.CreateWzFont();
    m_pFontGen_Gray2 = G_PCOM.CreateWzFont();
    m_pFontGen_Red = G_PCOM.CreateWzFont();
    m_pFontGen_Orange = G_PCOM.CreateWzFont();
    m_pFontGen_Gold = G_PCOM.CreateWzFont();
    m_pFontGen_Purple = G_PCOM.CreateWzFont();
    m_pFontGen_Yellow = G_PCOM.CreateWzFont();
    m_pFontGen_Blue = G_PCOM.CreateWzFont();
    m_pFontGen_Green = G_PCOM.CreateWzFont();
    m_pFontGen_Unknown = G_PCOM.CreateWzFont();

    auto styleGen = Ztl_variant_t(ba);

    m_pFontGen_White->Create(
        arial,
        12,
        0xFFFFFFFF,
        styleGen);
    m_pFontGen_Gray->Create(
        arial,
        12,
        0xFFB0B0B0,
        styleGen);

    m_pFontGen_Gray2->Create(
        arial,
        12,
        0xff7b8c91,
        styleGen);

    m_pFontGen_Red->Create(
        arial,
        12,
        0xFFF20303,
        styleGen);
    m_pFontGen_Orange->Create(
        arial,
        12,
        0xFFff8a18,
        styleGen);
    m_pFontGen_Gold->Create(
        arial,
        12,
        0xfffdf514,
        styleGen);
    m_pFontGen_Purple->Create(
        arial,
        12,
        0xffff99cc,
        styleGen);
    m_pFontGen_Yellow->Create(
        arial,
        12,
        0xfffff54d,
        styleGen);
    m_pFontGen_Blue->Create(
        arial,
        12,
        0xff77ccff,
        styleGen);
    m_pFontGen_Green->Create(
        arial,
        12,
        0xff7fff00,
        styleGen);
    m_pFontGen_Unknown->Create(
        arial,
        12,
        0xFFFF0066,
        styleGen);


    m_pFontH_White = G_PCOM.CreateWzFont();
    m_pFontH_White->Create(
        arial,
        12,
        0xFFFFFFFF,
        styleGen);

    m_pFontStan_Prp = G_PCOM.CreateWzFont();
    m_pFontStan_Prp->Create(
        arial,
        9,
        0xFFFAE8CB,
        styleGen);
    m_pFontStan_Dsc = G_PCOM.CreateWzFont();
    m_pFontStan_Dsc->Create(
        arial,
        9,
        0xFFFFFFFF,
        styleGen);
    m_pFontStan_Num = G_PCOM.CreateWzFont();
    m_pFontStan_Num->Create(
        arial,
        9,
        0xFFFFFFFF,
        styleGen);


    m_pFontSkill_Prp = G_PCOM.CreateWzFont();
    m_pFontSkill_Dsc = G_PCOM.CreateWzFont();
    m_pFontSkill_Prp->Create(
        arial,
        11,
        0xFFFAE8CB,
        styleGen);
    m_pFontSkill_Dsc->Create(
        arial,
        11,
        0xFFFFFFFF,
        styleGen);


    auto& sp = StringPool::GetInstance();
    m_pNumberCan = get_rm()->GetObjectT<IWzProperty>(sp.GetBSTR(2052));
    m_pNumberCannot = get_rm()->GetObjectT<IWzProperty>(sp.GetBSTR(2053));
    for (auto i = 0; i < 6; i++)
    {
        m_pCanvasEquip_ReqItem[i][0] = m_pNumberCan->GetItemT<IWzCanvas>(sp.GetBSTR(2056 + i));;
        m_pCanvasEquip_ReqItem[i][1] = m_pNumberCannot->GetItemT<IWzCanvas>(sp.GetBSTR(2056 + i));;
    }

    for (auto i = 0; i < 6; i++)
    {
        m_pCanvasEquip_JobItem[i][0] = m_pNumberCan->GetItemT<IWzCanvas>(sp.GetBSTR(718 + i));;
        m_pCanvasEquip_JobItem[i][1] = m_pNumberCannot->GetItemT<IWzCanvas>(sp.GetBSTR(718 + i));;
    }

    auto equipDot = get_rm()->GetObjectT<IWzProperty>(sp.GetBSTR(717));
    for (auto i = 0; i < m_pCanvasDot.size(); ++i)
    {
        wchar_t key[32]{};
        _itow_s(i, key, 10);
        m_pCanvasDot[i] = equipDot->GetItemT<IWzCanvas>(key);
    }


    m_pNumberGrowthEnable = get_rm()->GetObjectT<IWzProperty>(L"UI/UIWindow.img/ToolTip/Equip/GrowthEnabled");
    m_pNumberGrowthDisable = get_rm()->GetObjectT<IWzProperty>(L"UI/UIWindow.img/ToolTip/Equip/GrowthDisabled");


    m_pCanvasEquip_GrowthItem[0][0] = m_pNumberGrowthEnable->GetItemT<IWzCanvas>(L"itemLEV");
    m_pCanvasEquip_GrowthItem[1][0] = m_pNumberGrowthEnable->GetItemT<IWzCanvas>(L"itemEXP");
    m_pCanvasEquip_GrowthItem[2][0] = m_pNumberGrowthEnable->GetItemT<IWzCanvas>(sp.GetBSTR(1495));
    m_pCanvasEquip_GrowthItem[3][0] = m_pNumberGrowthEnable->GetItemT<IWzCanvas>(L"percent");

    m_pCanvasEquip_GrowthItem[0][1] = m_pNumberGrowthDisable->GetItemT<IWzCanvas>(L"itemLEV");
    m_pCanvasEquip_GrowthItem[1][1] = m_pNumberGrowthDisable->GetItemT<IWzCanvas>(L"itemEXP");
    m_pCanvasEquip_GrowthItem[2][1] = m_pNumberGrowthDisable->GetItemT<IWzCanvas>(sp.GetBSTR(1495));
    m_pCanvasEquip_GrowthItem[3][1] = m_pNumberGrowthDisable->GetItemT<IWzCanvas>(L"percent");


    m_pCanvasEquip_Durability[0][0] = m_pNumberCan->GetItemT<IWzCanvas>(L"durability");
    m_pCanvasEquip_Durability[1][0] = m_pNumberCan->GetItemT<IWzCanvas>(L"percent");
    m_pCanvasEquip_Durability[0][1] = m_pNumberCannot->GetItemT<IWzCanvas>(L"durability");
    m_pCanvasEquip_Durability[1][1] = m_pNumberCannot->GetItemT<IWzCanvas>(L"percent");


    // TODO
    //_ctor_0();
}

void CUIToolTip::_ctor_0()
{
    // return __sub_004839C0(this, nullptr);
    new(this) CUIToolTip();
}

void CUIToolTip::ClearToolTip()
{
    //__sub_00480F20(this, nullptr);
    this->m_nToolTipType = 0;
    this->m_nHeight = 0;
    this->m_nWidth = 0;
    m_pLayer = 0;
    m_pLayerAdditional = 0;
    this->m_nLineNo = 0;
    this->m_nOptionLineNo = 0;

    for (auto& line : m_aLineInfo)
    {
        line.Clear();
    }
}

void CUIToolTip::SetBasicInfo(long nToolTipType, long nWidth, long nHeight, long nLineSeparate)
{
    __sub_00480F90(this, nullptr, nToolTipType, nWidth, nHeight, nLineSeparate);
}

void CUIToolTip::SetToolTip_String(long x, long y, const char* sToolTip)
{
    __sub_00487140(this, nullptr, x, y, sToolTip);
}

void CUIToolTip::SetToolTip_String_MultiLine(long x, long y, ZXString<char> sToolTip, long nTy, int32_t bTrimLeft)
{
    __sub_00495250(this, nullptr, x, y, CreateNakedParam(sToolTip), nTy, bTrimLeft);
}

void CUIToolTip::SetToolTip_String2(long x, long y, ZXString<char> sToolTipTitle, ZXString<char> sToolTipDesc,
                                    int32_t bUpDir, int32_t bLogin, int32_t bObjectToolTip, long width,
                                    int32_t bDoubleOutline, int32_t bCharToolTip)
{
    __sub_004953B0(this, nullptr, x, y, CreateNakedParam(sToolTipTitle), CreateNakedParam(sToolTipDesc), bUpDir, bLogin,
                   bObjectToolTip, width, bDoubleOutline, bCharToolTip);
}

void CUIToolTip::SetToolTip_WorldMap(long x, long y, WORLDMAP_ITEM& wmi, ZArray<WORLDMAP_USERINFO>& aUser)
{
    __sub_00496980(this, nullptr, x, y, wmi, aUser);
}

void CUIToolTip::SetToolTip_Equip(long x, long y, GW_ItemSlotEquip* pe, long nPeriod, const char* sDonator,
                                  long nOriginalPrice, long nPrice, CS_LIMITGOODS* goodsInfo, long nBodyPart,
                                  int32_t bCashShop, long nNpcShopTimeLimitedItemPeriod, long nCommodityID,
                                  long nITCSalePrice, _FILETIME* ftITCDateExpired, const char* sOrderComment,
                                  ZRef<ITCITEM> pii, CUIToolTip::eITCToolTip itcToolTip, int32_t bIsSetItemTooltipOn)
{
    __sub_004A5670(this, nullptr, x, y, pe, nPeriod, sDonator, nOriginalPrice, nPrice, goodsInfo, nBodyPart, bCashShop,
                   nNpcShopTimeLimitedItemPeriod, nCommodityID, nITCSalePrice, ftITCDateExpired, sOrderComment,
                   CreateNakedParam(pii), itcToolTip, bIsSetItemTooltipOn);
}

void CUIToolTip::SetToolTip_Ring(long x, long y, GW_ItemSlotEquip* pe, long nPeriod, long nOriginalPrice, long nPrice,
                                 CS_LIMITGOODS* goodsInfo, int32_t bCashShop, long nCommodityID)
{
    __sub_004A3460(this, nullptr, x, y, pe, nPeriod, nOriginalPrice, nPrice, goodsInfo, bCashShop, nCommodityID);
}

void CUIToolTip::SetToolTip_SetItem(long x, long y, GW_ItemSlotEquip* pe)
{
    __sub_004A4090(this, nullptr, x, y, pe);
}

void CUIToolTip::AddToolTip_SetItem(long x, long y, GW_ItemSlotEquip* pe, _x_com_ptr<IWzGr2DLayer> pLayerEquip)
{
    __sub_004A4D10(this, nullptr, x, y, pe, CreateNakedParam(pLayerEquip));
}

void CUIToolTip::SetToolTip_Equip2(long x, long y, GW_ItemSlotEquip* pe1, GW_ItemSlotEquip* pe2, int32_t bVertical,
                                   long nNpcShopTimeLimitedItemPeriod, int32_t bSetItemView)
{
    __sub_004A8AA0(this, nullptr, x, y, pe1, pe2, bVertical, nNpcShopTimeLimitedItemPeriod, bSetItemView);
}

void CUIToolTip::SetToolTip_Bundle(long x, long y, long nItemID, _FILETIME* ft, int32_t bProtected, long nPeriod,
                                   const char* sDonator, const char* sTitle, long nOriginalPrice, long nPrice,
                                   CS_LIMITGOODS* goodsInfo, GW_ItemSlotEquip* pe, int32_t bCashShop,
                                   long nNpcShopTimeLimitedItemPeriod, long nCommodityID, long nITCSalePrice,
                                   _FILETIME* ftITCDateExpired, const char* sOrderComment, ZRef<ITCITEM> pii,
                                   CUIToolTip::eITCToolTip itcToolTip)
{
    __sub_00498F70(this, nullptr, x, y, nItemID, ft, bProtected, nPeriod, sDonator, sTitle, nOriginalPrice, nPrice,
                   goodsInfo, pe, bCashShop, nNpcShopTimeLimitedItemPeriod, nCommodityID, nITCSalePrice,
                   ftITCDateExpired, sOrderComment, CreateNakedParam(pii), itcToolTip);
}

void CUIToolTip::SetToolTip_Pet(long x, long y, GW_ItemSlotPet* pp, int32_t bShowLife, int32_t bShowSkill,
                                const char* sDonator, long nOriginalPrice, long nPrice, CS_LIMITGOODS* goodsInfo,
                                int32_t bCashShop, long nCommodityID)
{
    __sub_00498700(this, nullptr, x, y, pp, bShowLife, bShowSkill, sDonator, nOriginalPrice, nPrice, goodsInfo,
                   bCashShop, nCommodityID);
}

void CUIToolTip::SetToolTip_Skill(long x, long y, const SKILLENTRY* p, int32_t bShowLevel)
{
    __sub_004A2500(this, nullptr, x, y, p, bShowLevel);
}

void CUIToolTip::SetToolTip_MacroSysSkill(long x, long y, long nMacroIdx)
{
    __sub_0049E1F0(this, nullptr, x, y, nMacroIdx);
}

void CUIToolTip::SetToolTip_Package(long arg0, long arg1, ZRef<CS_COMMODITY> arg2, int32_t arg3, CS_LIMITGOODS* arg4)
{
    __sub_0049B0A0(this, nullptr, arg0, arg1, CreateNakedParam(arg2), arg3, arg4);
}

void CUIToolTip::SetToolTip_SlotInc(long x, long y, ZRef<CS_COMMODITY> pComm, long nTrunkCount)
{
    __sub_0049D5F0(this, nullptr, x, y, CreateNakedParam(pComm), nTrunkCount);
}

void CUIToolTip::SetToolTip_EquipExt(long x, long y, ZRef<CS_COMMODITY> pComm, long nSlotIndex)
{
    __sub_0049DCF0(this, nullptr, x, y, CreateNakedParam(pComm), nSlotIndex);
}

void CUIToolTip::SetToolTip_PartyAdver(long x, long y, const ADVER_COMMON* pAdver, _x_com_ptr<IWzFont> pFont)
{
    __sub_0048A540(this, nullptr, x, y, pAdver, CreateNakedParam(pFont));
}

void CUIToolTip::SetToolTip_PartyQuestRankString(long x, long y, const char* sToolTip)
{
    __sub_004957C0(this, nullptr, x, y, sToolTip);
}

void CUIToolTip::MakingLimitInfo(ZArray<ZXString<char>>& asSchedule, CS_LIMITGOODS* goodsInfo)
{
    __sub_00488370(this, nullptr, asSchedule, goodsInfo);
}

void CUIToolTip::DrawLimitInfo(long y, ZArray<ZXString<char>>& asSchedule)
{
    __sub_00488BE0(this, nullptr, y, asSchedule);
}

_x_com_ptr<IWzCanvas> CUIToolTip::MakePreviewPetNameTag(const char* sName, long nTemplateID)
{
    _x_com_ptr<IWzCanvas> ret;
    return *__sub_004873B0(this, nullptr, &ret, sName, nTemplateID);
}

void CUIToolTip::ShowItemToolTip(long x, long y, GW_ItemSlotBase* p, CUIToolTip::ItemToolTipParam* pParam,
                                 CS_LIMITGOODS* pGoods, int32_t bCashShop, long nNpcShopTimeLimitedItemPeriod,
                                 CUIToolTip::eITCToolTip itcToolTip)
{
    __sub_004A9300(this, nullptr, x, y, p, pParam, pGoods, bCashShop, nNpcShopTimeLimitedItemPeriod, itcToolTip);
}

int32_t CUIToolTip::IsToolTipVisible()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUIToolTip::GetToolTipType()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIToolTip::IgnoreWeddingInfo()
{
    m_bIngoreWeddingInfo = true;
}

void CUIToolTip::RelMove(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIToolTip::InitCanvas(_x_com_ptr<IWzCanvas> pCanvas, int32_t bDoubleOutline, unsigned long uColor)
{
    __sub_00480960(this, nullptr, CreateNakedParam(pCanvas), bDoubleOutline, uColor);
}

_x_com_ptr<IWzCanvas> CUIToolTip::MakeLayer(long nLeft, long nTop, int32_t bDoubleOutline, int32_t bLogin,
                                            int32_t bCharToolTip, unsigned long uColor, int32_t bAdditional)
{
    _x_com_ptr<IWzCanvas> ret;
    return *__sub_004814B0(this, nullptr, &ret, nLeft, nTop, bDoubleOutline, bLogin, bCharToolTip, uColor, bAdditional);
}

_x_com_ptr<IWzFont> CUIToolTip::GetFontByType(long nType)
{
    switch (nType)
    {
    case 1:
        return m_pFontHL_White;
    case 2:
        return m_pFontHL_Gold;
    case 3:
        return m_pFontHL_Orange;
    case 4:
        return m_pFontHL_Gray;
    case 5:
        return m_pFontHL_Blue;
    case 6:
        return m_pFontHL_Violet;
    case 7:
        return m_pFontHL_Green2;
    case 8:
        return m_pFontHL_Excellent;
    case 9:
        return m_pFontHL_Special;
    case 10:
        return m_pFontGen_White;
    case 11:
        return m_pFontGen_Gray;
    case 12:
        return m_pFontGen_Gray2;
    case 13:
        return m_pFontGen_Red;
    case 14:
        return m_pFontGen_Orange;
    case 15:
        return m_pFontGen_Purple;
    case 16:
        return m_pFontGen_Green;
    case 17:
        return m_pFontGen_Yellow;
    case 18:
        return m_pFontGen_Blue;
    case 19:
        return m_pFontGen_Unknown;
    case 20:
        return m_pFontH_White;
    case 21:
        return m_pFontStan_Prp;
    case 22:
        return m_pFontStan_Dsc;
    case 23:
        return m_pFontStan_Num;
    case 24:
        return m_pFontSkill_Prp;
    case 25:
        return m_pFontSkill_Dsc;
    default:
        return {};
    }
}

void CUIToolTip::AddInfo(long nType, ZXString<char> sContext, int32_t bUseDot, long nAlign, int32_t bMulti)
{
    __sub_0049E620(this, nullptr, nType, CreateNakedParam(sContext), bUseDot, nAlign, bMulti);
}

void CUIToolTip::DrawReqSkill(long nReqSkillCount, const SKILLENTRY* p)
{
    __sub_0048B320(this, nullptr, nReqSkillCount, p);
}

void CUIToolTip::AddOptionInfo(long nType, ZXString<char> sContext, long nAlign)
{
    __sub_0048BDA0(this, nullptr, nType, CreateNakedParam(sContext), nAlign);
}

long CUIToolTip::DrawInfo(long y)
{
    return __sub_0049E8B0(this, nullptr, y);
}

long CUIToolTip::DrawOptionInfo(long y)
{
    return __sub_0048BF80(this, nullptr, y);
}

void CUIToolTip::AddInfoEx(long nType, long nSubType, ZXString<char> sContext, ZXString<char> sSubContext,
                           int32_t bUseDot, long nAlign)
{
    __sub_0048BAC0(this, nullptr, nType, nSubType, CreateNakedParam(sContext), CreateNakedParam(sSubContext), bUseDot,
                   nAlign);
}

void CUIToolTip::PrintValue(long nType, long nValue, ZXString<char> sProperty, int32_t bShowAlways)
{
    __sub_00491230(this, nullptr, nType, nValue, CreateNakedParam(sProperty), bShowAlways);
}

void CUIToolTip::DrawItemIcon(long x, long y, long nItemID, int32_t bProtected, int32_t bPetDead)
{
    __sub_00482050(this, nullptr, x, y, nItemID, bProtected, bPetDead);
}

void CUIToolTip::DrawCanvasIcon(long x, long y, _x_com_ptr<IWzCanvas> pIcon)
{
    __sub_00482200(this, nullptr, x, y, CreateNakedParam(pIcon));
}

void CUIToolTip::DrawTextCenter(long y, const char* sText, _x_com_ptr<IWzFont> pFont)
{
    __sub_0048C360(this, nullptr, y, sText, CreateNakedParam(pFont));
}

void CUIToolTip::DrawTextLeft(long y, const char* sText, _x_com_ptr<IWzFont> pFont)
{
    __sub_0048C5E0(this, nullptr, y, sText, CreateNakedParam(pFont));
}

void CUIToolTip::DrawTextRight(long y, const char* sText, _x_com_ptr<IWzFont> pFont)
{
    __sub_0048C7C0(this, nullptr, y, sText, CreateNakedParam(pFont));
}

void CUIToolTip::DrawTextItemName(long y, const char* sText, _x_com_ptr<IWzFont> pFont)
{
    __sub_0048CA40(this, nullptr, y, sText, CreateNakedParam(pFont));
}

long CUIToolTip::DrawTextSepartedLine(long x1, long x2, long y, const char* sText, _x_com_ptr<IWzFont> pFont,
                                      int32_t bRealDraw, long* pMaxWidth, int32_t bTrimLeft)
{
    return __sub_00494A40(this, nullptr, x1, x2, y, sText, CreateNakedParam(pFont), bRealDraw, pMaxWidth, bTrimLeft);
}

void CUIToolTip::DrawTextEquip_Req(long nReq, long nCur, long nNo, long y, int32_t bNone, long x)
{
    __sub_0048D710(this, nullptr, nReq, nCur, nNo, y, bNone, x);
}

void CUIToolTip::DrawTextEquip_Req_Level(long nReq, long nCur, long nIncLevel, long nNo, long y, int32_t bNone, long x)
{
    __sub_0048DAB0(this, nullptr, nReq, nCur, nIncLevel, nNo, y, bNone, x);
}

void CUIToolTip::DrawItemReqJob(long y, long nrJob)
{
    __sub_00480FC0(this, nullptr, y, nrJob);
}

void CUIToolTip::DrawItemTitle(long y, const char* sText, int32_t bEquip)
{
    __sub_0048CCB0(this, nullptr, y, sText, bEquip);
}

void CUIToolTip::DrawDiscount_Info(long y, long nOriginalPrice, long nPrice)
{
    __sub_0048DEC0(this, nullptr, y, nOriginalPrice, nPrice);
}

void CUIToolTip::DrawDiscount_Rate(long arg0, long arg1, long arg2, long arg3)
{
    __sub_00489D80(this, nullptr, arg0, arg1, arg2, arg3);
}

void CUIToolTip::GetItemName(GW_ItemSlotEquip* pe, ZXString<char>& sItemName, long& lType)
{
    __sub_004899B0(this, nullptr, pe, sItemName, lType);
}

void CUIToolTip::SetToolTip_Equip_Basic(GW_ItemSlotEquip* pe)
{
    __sub_004A0BD0(this, nullptr, pe);
}

long CUIToolTip::SetToolTip_SetItem_Basic(CItemInfo::SETITEMINFO* p)
{
    return __sub_004A14B0(this, nullptr, p);
}

void CUIToolTip::DrawToolTip_Equip(long y, GW_ItemSlotEquip* pe)
{
    __sub_00493F60(this, nullptr, y, pe);
}

void CUIToolTip::GetItemExpireDate(_FILETIME* pExpire, long nPeriod, ZXString<char>& sDate, int32_t bCash,
                                   int32_t bProtected, int32_t bIsHourItem, long nHour)
{
    __sub_00489310(this, nullptr, pExpire, nPeriod, sDate, bCash, bProtected, bIsHourItem, nHour);
}

void CUIToolTip::GetPetDeadDate(GW_ItemSlotPet* pp, int32_t bShowLife, ZXString<char>& sDate)
{
    __sub_00489540(this, nullptr, pp, bShowLife, sDate);
}

void CUIToolTip::SetToolTip_ItemOption(long nItemOptionID, long nLevel)
{
    __sub_00491C80(this, nullptr, nItemOptionID, nLevel);
}

void CUIToolTip::DrawITCSaleInfo(long y, long nITCPrice, _FILETIME* ftITCExpiredDate, const char* sOrderComment,
                                 ZRef<ITCITEM> pii, CUIToolTip::eITCToolTip itcToolTip)
{
    __sub_0048E6A0(this, nullptr, y, nITCPrice, ftITCExpiredDate, sOrderComment, CreateNakedParam(pii), itcToolTip);
}

void CUIToolTip::DrawNpcShopLimitedItemInfo(long y, long nNpcShopTimeLimitedItemPeriod)
{
    __sub_00491530(this, nullptr, y, nNpcShopTimeLimitedItemPeriod);
}

CUIToolTip& CUIToolTip::operator=(const CUIToolTip& __that)
{
    return _op_assign_63(this, __that);
}

CUIToolTip& CUIToolTip::_op_assign_63(CUIToolTip* pThis, const CUIToolTip& __that)
{
    return __sub_005110A0(pThis, nullptr, __that);
}

CUIToolTip::CLineInfo::~CLineInfo()
{
    //UNIMPLEMENTED; // _dtor_0();
}

void CUIToolTip::CLineInfo::_dtor_0()
{
    return __sub_00482EC0(this, nullptr);
}

CUIToolTip::CLineInfo::CLineInfo(const CUIToolTip::CLineInfo& arg0) = default;

void CUIToolTip::CLineInfo::_ctor_1(const CUIToolTip::CLineInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIToolTip::CLineInfo::CLineInfo()
{
    // UNIMPLEMENTED; //_ctor_0();
}

void CUIToolTip::CLineInfo::_ctor_0()
{
    return __sub_00482EA0(this, nullptr);
}

void CUIToolTip::CLineInfo::Clear()
{
    m_bMulti = false;
    m_nAlign = 0;
    m_nWidth = 0;
    m_nHeight = 0;
    m_sSubContext.Clear();
    m_sContext.Clear();
    m_nType = 0;
    m_nSubType = 0;
    m_bUseDotImage = false;
}

CUIToolTip::CLineInfo& CUIToolTip::CLineInfo::operator=(const CUIToolTip::CLineInfo& arg0)
{
    return _op_assign_4(this, arg0);
}

CUIToolTip::CLineInfo& CUIToolTip::CLineInfo::_op_assign_4(CUIToolTip::CLineInfo* pThis,
                                                           const CUIToolTip::CLineInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIToolTip::ItemToolTipParam::~ItemToolTipParam()
{
}

void CUIToolTip::ItemToolTipParam::_dtor_0()
{
    return __sub_0009CBC0(this, nullptr);
}

CUIToolTip::ItemToolTipParam::ItemToolTipParam(const CUIToolTip::ItemToolTipParam& arg0)
{
    _ctor_1(arg0);
}

void CUIToolTip::ItemToolTipParam::_ctor_1(const CUIToolTip::ItemToolTipParam& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIToolTip::ItemToolTipParam::ItemToolTipParam()
{
    ftITCDateExpired = _D_DB_DATE_19000101;;
}

void CUIToolTip::ItemToolTipParam::_ctor_0()
{
    return __sub_0009CB90(this, nullptr);
}

CUIToolTip::ItemToolTipParam& CUIToolTip::ItemToolTipParam::operator=(const CUIToolTip::ItemToolTipParam& arg0)
{
    return _op_assign_3(this, arg0);
}

CUIToolTip::ItemToolTipParam& CUIToolTip::ItemToolTipParam::_op_assign_3(
    CUIToolTip::ItemToolTipParam* pThis, const CUIToolTip::ItemToolTipParam& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long __cdecl DrawTextSepartedLine(_x_com_ptr<IWzCanvas> pCanvas, long x1, long x2, long y, long nLineSpace,
                                  const char* sText, _x_com_ptr<IWzFont> pFont, _x_com_ptr<IWzFont> pFont2,
                                  long* pMaxWidth, int32_t bTrimLeft)
{
    return __sub_00490490(CreateNakedParam(pCanvas), x1, x2, y, nLineSpace, sText, CreateNakedParam(pFont),
                          CreateNakedParam(pFont2), pMaxWidth, bTrimLeft);
}
