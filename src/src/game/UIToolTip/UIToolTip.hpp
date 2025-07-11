// UIToolTip.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "ItemInfo/ItemInfo.hpp"

// Extternal
struct CS_COMMODITY;
struct CS_LIMITGOODS;
struct ADVER_COMMON;
struct ITCITEM;
struct WORLDMAP_ITEM;
struct WORLDMAP_USERINFO;
struct SETITEMINFO;

struct SKILLENTRY;

struct GW_ItemSlotBase;
struct GW_ItemSlotEquip;
struct GW_ItemSlotPet;
/*#include "ItemInfo/ItemInfo.hpp"
#include "PartyCommon/PartyCommon.hpp"
#include "CashShop/CashShop.hpp"
#include "SkillInfo/SkillInfo.hpp"
#include "GW/GW.hpp"
#include "WorldMapDlg/WorldMapDlg.hpp"*/

// Level: 0 0x184f
class CToolTipHelper;
// Level: 0 0x14ac8
struct ToolTip_SetItemList;
// Level: 0 0x16b3
class CUIToolTip;

class CToolTipHelper
{
    // Nested
public:
    struct TTH_INFO
    {
        // Nested
        // Fields
    public:
        tagRECT rect{};

    public:
        ZXString<char> sTitle;

    public:
        ZXString<char> sDesc;
        // Methods
    public:
        ~TTH_INFO();

    public:
        void _dtor_0();

    public:
        TTH_INFO(const CToolTipHelper::TTH_INFO& arg0);

    public:
        void _ctor_1(const CToolTipHelper::TTH_INFO& arg0);

    public:
        TTH_INFO();

    public:
        void _ctor_0();

    public:
        CToolTipHelper::TTH_INFO& operator=(const CToolTipHelper::TTH_INFO& __that);

    public:
        static CToolTipHelper::TTH_INFO& _op_assign_3(CToolTipHelper::TTH_INFO* pThis,
                                                      const CToolTipHelper::TTH_INFO& __that);
    };

    // Fields
protected:
    ZArray<CToolTipHelper::TTH_INFO> m_aTTH;

protected:
    ZMap<long, CToolTipHelper::TTH_INFO, long> m_mTTHChar;
    // Methods
public:
    virtual ~CToolTipHelper();

public:
    void _dtor_0();

public:
    CToolTipHelper(const CToolTipHelper& arg0);

public:
    void _ctor_1(const CToolTipHelper& arg0);

public:
    CToolTipHelper();

public:
    void _ctor_0();

public:
    void LoadToolTip(unsigned long dwField, _x_com_ptr<IWzProperty> pPropRect);

    void LoadToolTip_1(unsigned long dwField, _x_com_ptr<IWzProperty> pPropRect)
    {
        LoadToolTip(dwField, pPropRect);
    }

public:
    void LoadToolTip(const wchar_t* arg0);

    void LoadToolTip_0(const wchar_t* arg0)
    {
        LoadToolTip(arg0);
    }

public:
    int32_t CheckAndShow(CUIToolTip& uiToolTip, long rx, long ry, int32_t bObjectToolTip, long nMaxCount);

public:
    void GetCharToolTipInfo(long nIdx, tagPOINT& ptToolTipLT, ZXString<char>& sTitle, ZXString<char>& sDesc);

public:
    ZList<long> GetNearToolTip(tagPOINT ptUser);

public:
    CToolTipHelper& operator=(const CToolTipHelper& arg0);

public:
    static CToolTipHelper& _op_assign_8(CToolTipHelper* pThis, const CToolTipHelper& arg0);
};

STATIC_ASSERT_SIZE(CToolTipHelper, 32);

struct ToolTip_SetItemList
{
    // Nested
    // Fields
public:
    _x_com_ptr<IWzFont> pFontType;

public:
    ZXString<char> sItemName;

public:
    ZXString<char> sItemType;
    // Methods
public:
    ~ToolTip_SetItemList();

public:
    void _dtor_0();

public:
    ToolTip_SetItemList(const ToolTip_SetItemList& arg0);

public:
    void _ctor_1(const ToolTip_SetItemList& arg0);

public:
    ToolTip_SetItemList();

public:
    void _ctor_0();

public:
    ToolTip_SetItemList& operator=(const ToolTip_SetItemList& arg0);

public:
    static ToolTip_SetItemList& _op_assign_3(ToolTip_SetItemList* pThis, const ToolTip_SetItemList& arg0);
};

STATIC_ASSERT_SIZE(ToolTip_SetItemList, 12);

class CUIToolTip
{
    // Nested
public:
    class CLineInfo
    {
        // Nested
        // Fields
    public:
        long m_nWidth{};

    public:
        long m_nHeight{};

    public:
        long m_nType{};

    public:
        ZXString<char> m_sContext;

    public:
        long m_nAlign{};

    public:
        int32_t m_bMulti{};

    public:
        long m_nSubType{};

    public:
        ZXString<char> m_sSubContext;

    public:
        int32_t m_bUseDotImage{};
        // Methods
        CTOR_DEFAULT(CLineInfo)

    public:
        ~CLineInfo();

    public:
        void _dtor_0();

    public:
        CLineInfo(const CUIToolTip::CLineInfo& arg0);

    public:
        void _ctor_1(const CUIToolTip::CLineInfo& arg0);

    public:
        CLineInfo();

    public:
        void _ctor_0();

    public:
        void Clear();

    public:
        CUIToolTip::CLineInfo& operator=(const CUIToolTip::CLineInfo& arg0);

    public:
        static CUIToolTip::CLineInfo& _op_assign_4(CUIToolTip::CLineInfo* pThis, const CUIToolTip::CLineInfo& arg0);
    };

public:
    struct ItemToolTipParam
    {
        // Nested
        // Fields
    public:
        const char* sDonator{};

    public:
        CS_COMMODITY* pComm{};

    public:
        long nOriginalPrice{};

    public:
        int32_t bShowPetLife{};

    public:
        int32_t bShowPetSkill{};

    public:
        long nITCSalePrice{};

    public:
        _FILETIME ftITCDateExpired{};

    public:
        const char* sOrderComment{};

    public:
        ZRef<ITCITEM> pii;
        // Methods
    public:
        ~ItemToolTipParam();

    public:
        void _dtor_0();

    public:
        ItemToolTipParam(const CUIToolTip::ItemToolTipParam& arg0);

    public:
        void _ctor_1(const CUIToolTip::ItemToolTipParam& arg0);

        CTOR_DEFAULT(ItemToolTipParam)

    public:
        ItemToolTipParam();

    public:
        void _ctor_0();

    public:
        CUIToolTip::ItemToolTipParam& operator=(const CUIToolTip::ItemToolTipParam& arg0);

    public:
        static CUIToolTip::ItemToolTipParam& _op_assign_3(CUIToolTip::ItemToolTipParam* pThis,
                                                          const CUIToolTip::ItemToolTipParam& arg0);
    };

public:
    enum TT_LINEMAX
    {
        TT_LINEMAX = 32
    };

    enum eITCToolTip
    {
        ITCToolTip_None = 0,
        ITCToolTip_Normal = 1,
        ITCToolTip_Auction = 2
    };

    // Fields
protected:
    long m_nToolTipType{};

protected:
    long m_nHeight{};

protected:
    long m_nWidth{};

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayer;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerAdditional;

protected:
    long m_nLastX{};

protected:
    long m_nLastY{};

protected:
    long m_nLineNo{};

protected:
    std::array<CUIToolTip::CLineInfo, 32> m_aLineInfo{};

protected:
    long m_nLineSeparated{};

protected:
    long m_nOptionLineNo{};

protected:
    std::array<CUIToolTip::CLineInfo, 32> m_aOptionLineInfo{};

protected:
    _x_com_ptr<IWzFont> m_pFontHL_White;

protected:
    _x_com_ptr<IWzFont> m_pFontHL_Gold;

protected:
    _x_com_ptr<IWzFont> m_pFontHL_Orange;

protected:
    _x_com_ptr<IWzFont> m_pFontHL_Gray;

protected:
    _x_com_ptr<IWzFont> m_pFontHL_Green;

protected:
    _x_com_ptr<IWzFont> m_pFontHL_Blue;

protected:
    _x_com_ptr<IWzFont> m_pFontHL_Violet;

protected:
    _x_com_ptr<IWzFont> m_pFontHL_Green2;

protected:
    _x_com_ptr<IWzFont> m_pFontHL_Excellent;

protected:
    _x_com_ptr<IWzFont> m_pFontHL_Special;

protected:
    _x_com_ptr<IWzFont> m_pFontGen_White;

protected:
    _x_com_ptr<IWzFont> m_pFontGen_Gray;

protected:
    _x_com_ptr<IWzFont> m_pFontGen_Gray2;

protected:
    _x_com_ptr<IWzFont> m_pFontGen_Red;

protected:
    _x_com_ptr<IWzFont> m_pFontGen_Orange;

protected:
    _x_com_ptr<IWzFont> m_pFontGen_Gold;

protected:
    _x_com_ptr<IWzFont> m_pFontGen_Purple;

protected:
    _x_com_ptr<IWzFont> m_pFontGen_Green;

protected:
    _x_com_ptr<IWzFont> m_pFontGen_Yellow;

protected:
    _x_com_ptr<IWzFont> m_pFontGen_Blue;

protected:
    _x_com_ptr<IWzFont> m_pFontGen_Unknown;

protected:
    _x_com_ptr<IWzFont> m_pFontH_White;

protected:
    _x_com_ptr<IWzFont> m_pFontStan_Prp;

protected:
    _x_com_ptr<IWzFont> m_pFontStan_Dsc;

protected:
    _x_com_ptr<IWzFont> m_pFontStan_Num;

protected:
    _x_com_ptr<IWzFont> m_pFontSkill_Prp;

protected:
    _x_com_ptr<IWzFont> m_pFontSkill_Dsc;

protected:
    std::array<std::array<_x_com_ptr<IWzCanvas>, 2>, 6> m_pCanvasEquip_ReqItem{};

protected:
    _x_com_ptr<IWzProperty> m_pNumberCan;

protected:
    _x_com_ptr<IWzProperty> m_pNumberCannot;

protected:
    std::array<std::array<_x_com_ptr<IWzCanvas>, 2>, 6> m_pCanvasEquip_JobItem{};

protected:
    std::array<_x_com_ptr<IWzCanvas>, 3> m_pCanvasDot{};

protected:
    std::array<std::array<_x_com_ptr<IWzCanvas>, 2>, 4> m_pCanvasEquip_GrowthItem{};

protected:
    _x_com_ptr<IWzProperty> m_pNumberGrowthEnable;

protected:
    _x_com_ptr<IWzProperty> m_pNumberGrowthDisable;

protected:
    std::array<std::array<_x_com_ptr<IWzCanvas>, 2>, 2> m_pCanvasEquip_Durability{};

protected:
    int32_t m_bIngoreWeddingInfo{};
    // Methods
public:
    virtual ~CUIToolTip();

public:
    void _dtor_0();

    CTOR_DEFAULT(CUIToolTip)

public:
    CUIToolTip(const CUIToolTip& arg0);

public:
    void _ctor_1(const CUIToolTip& arg0);

public:
    CUIToolTip();

public:
    void _ctor_0();

public:
    void ClearToolTip();

public:
    void SetBasicInfo(long nToolTipType, long nWidth, long nHeight, long nLineSeparate);

public:
    void SetToolTip_String(long x, long y, const char* sToolTip);

public:
    void SetToolTip_String_MultiLine(long x, long y, ZXString<char> sToolTip, long nTy, int32_t bTrimLeft);

public:
    void SetToolTip_String2(long x, long y, ZXString<char> sToolTipTitle, ZXString<char> sToolTipDesc, int32_t bUpDir,
                            int32_t bLogin, int32_t bObjectToolTip, long width, int32_t bDoubleOutline,
                            int32_t bCharToolTip);

public:
    void SetToolTip_WorldMap(long x, long y, WORLDMAP_ITEM& wmi, ZArray<WORLDMAP_USERINFO>& aUser);

public:
    void SetToolTip_Equip(long x, long y, GW_ItemSlotEquip* pe, long nPeriod, const char* sDonator, long nOriginalPrice,
                          long nPrice, CS_LIMITGOODS* goodsInfo, long nBodyPart, int32_t bCashShop,
                          long nNpcShopTimeLimitedItemPeriod, long nCommodityID, long nITCSalePrice,
                          _FILETIME* ftITCDateExpired, const char* sOrderComment, ZRef<ITCITEM> pii,
                          CUIToolTip::eITCToolTip itcToolTip, int32_t bIsSetItemTooltipOn);

public:
    void SetToolTip_Ring(long x, long y, GW_ItemSlotEquip* pe, long nPeriod, long nOriginalPrice, long nPrice,
                         CS_LIMITGOODS* goodsInfo, int32_t bCashShop, long nCommodityID);

public:
    void SetToolTip_SetItem(long x, long y, GW_ItemSlotEquip* pe);

public:
    void AddToolTip_SetItem(long x, long y, GW_ItemSlotEquip* pe, _x_com_ptr<IWzGr2DLayer> pLayerEquip);

public:
    void SetToolTip_Equip2(long x, long y, GW_ItemSlotEquip* pe1, GW_ItemSlotEquip* pe2, int32_t bVertical,
                           long nNpcShopTimeLimitedItemPeriod, int32_t bSetItemView);

public:
    void SetToolTip_Bundle(long x, long y, long nItemID, _FILETIME* ft, int32_t bProtected, long nPeriod,
                           const char* sDonator, const char* sTitle, long nOriginalPrice, long nPrice,
                           CS_LIMITGOODS* goodsInfo, GW_ItemSlotEquip* pe, int32_t bCashShop,
                           long nNpcShopTimeLimitedItemPeriod, long nCommodityID, long nITCSalePrice,
                           _FILETIME* ftITCDateExpired, const char* sOrderComment, ZRef<ITCITEM> pii,
                           CUIToolTip::eITCToolTip itcToolTip);

public:
    void SetToolTip_Pet(long x, long y, GW_ItemSlotPet* pp, int32_t bShowLife, int32_t bShowSkill, const char* sDonator,
                        long nOriginalPrice, long nPrice, CS_LIMITGOODS* goodsInfo, int32_t bCashShop,
                        long nCommodityID);

public:
    void SetToolTip_Skill(long x, long y, const SKILLENTRY* p, int32_t bShowLevel);

public:
    void SetToolTip_MacroSysSkill(long x, long y, long nMacroIdx);

public:
    void SetToolTip_Package(long arg0, long arg1, ZRef<CS_COMMODITY> arg2, int32_t arg3, CS_LIMITGOODS* arg4);

public:
    void SetToolTip_SlotInc(long x, long y, ZRef<CS_COMMODITY> pComm, long nTrunkCount);

public:
    void SetToolTip_EquipExt(long x, long y, ZRef<CS_COMMODITY> pComm, long nSlotIndex);

public:
    void SetToolTip_PartyAdver(long x, long y, const ADVER_COMMON* pAdver, _x_com_ptr<IWzFont> pFont);

public:
    void SetToolTip_PartyQuestRankString(long x, long y, const char* sToolTip);

public:
    void MakingLimitInfo(ZArray<ZXString<char>>& asSchedule, CS_LIMITGOODS* goodsInfo);

public:
    void DrawLimitInfo(long y, ZArray<ZXString<char>>& asSchedule);

public:
    _x_com_ptr<IWzCanvas> MakePreviewPetNameTag(const char* sName, long nTemplateID);

public:
    void ShowItemToolTip(long x, long y, GW_ItemSlotBase* p, CUIToolTip::ItemToolTipParam* pParam,
                         CS_LIMITGOODS* pGoods, int32_t bCashShop, long nNpcShopTimeLimitedItemPeriod,
                         CUIToolTip::eITCToolTip itcToolTip);

public:
    int32_t IsToolTipVisible();

public:
    long GetToolTipType();

public:
    void IgnoreWeddingInfo();

public:
    void RelMove(long arg0, long arg1);

protected:
    void InitCanvas(_x_com_ptr<IWzCanvas> pCanvas, int32_t bDoubleOutline, unsigned long uColor);

protected:
    _x_com_ptr<IWzCanvas> MakeLayer(long nLeft, long nTop, int32_t bDoubleOutline, int32_t bLogin, int32_t bCharToolTip,
                                    unsigned long uColor, int32_t bAdditional);

protected:
    _x_com_ptr<IWzFont> GetFontByType(long nType);

protected:
    void AddInfo(long nType, ZXString<char> sContext, int32_t bUseDot, long nAlign, int32_t bMulti);

protected:
    void DrawReqSkill(long nReqSkillCount, const SKILLENTRY* p);

protected:
    void AddOptionInfo(long nType, ZXString<char> sContext, long nAlign);

protected:
    long DrawInfo(long y);

protected:
    long DrawOptionInfo(long y);

protected:
    void AddInfoEx(long nType, long nSubType, ZXString<char> sContext, ZXString<char> sSubContext, int32_t bUseDot,
                   long nAlign);

protected:
    void PrintValue(long nType, long nValue, ZXString<char> sProperty, int32_t bShowAlways);

protected:
    void DrawItemIcon(long x, long y, long nItemID, int32_t bProtected, int32_t bPetDead);

protected:
    void DrawCanvasIcon(long x, long y, _x_com_ptr<IWzCanvas> pIcon);

protected:
    void DrawTextCenter(long y, const char* sText, _x_com_ptr<IWzFont> pFont);

protected:
    void DrawTextLeft(long y, const char* sText, _x_com_ptr<IWzFont> pFont);

protected:
    void DrawTextRight(long y, const char* sText, _x_com_ptr<IWzFont> pFont);

protected:
    void DrawTextItemName(long y, const char* sText, _x_com_ptr<IWzFont> pFont);

protected:
    long DrawTextSepartedLine(long x1, long x2, long y, const char* sText, _x_com_ptr<IWzFont> pFont, int32_t bRealDraw,
                              long* pMaxWidth, int32_t bTrimLeft);

protected:
    void DrawTextEquip_Req(long nReq, long nCur, long nNo, long y, int32_t bNone, long x);

protected:
    void DrawTextEquip_Req_Level(long nReq, long nCur, long nIncLevel, long nNo, long y, int32_t bNone, long x);

protected:
    void DrawItemReqJob(long y, long nrJob);

protected:
    void DrawItemTitle(long y, const char* sText, int32_t bEquip);

protected:
    void DrawDiscount_Info(long y, long nOriginalPrice, long nPrice);

protected:
    void DrawDiscount_Rate(long arg0, long arg1, long arg2, long arg3);

protected:
    void GetItemName(GW_ItemSlotEquip* pe, ZXString<char>& sItemName, long& lType);

protected:
    void SetToolTip_Equip_Basic(GW_ItemSlotEquip* pe);

protected:
    long SetToolTip_SetItem_Basic(CItemInfo::SETITEMINFO* p);

protected:
    void DrawToolTip_Equip(long y, GW_ItemSlotEquip* pe);

protected:
    void GetItemExpireDate(_FILETIME* pExpire, long nPeriod, ZXString<char>& sDate, int32_t bCash, int32_t bProtected,
                           int32_t bIsHourItem, long nHour);

protected:
    void GetPetDeadDate(GW_ItemSlotPet* pp, int32_t bShowLife, ZXString<char>& sDate);

protected:
    void SetToolTip_ItemOption(long nItemOptionID, long nLevel);

protected:
    void DrawITCSaleInfo(long y, long nITCPrice, _FILETIME* ftITCExpiredDate, const char* sOrderComment,
                         ZRef<ITCITEM> pii, CUIToolTip::eITCToolTip itcToolTip);

private:
    void DrawNpcShopLimitedItemInfo(long y, long nNpcShopTimeLimitedItemPeriod);

public:
    CUIToolTip& operator=(const CUIToolTip& __that);

public:
    static CUIToolTip& _op_assign_63(CUIToolTip* pThis, const CUIToolTip& __that);

    friend class CWnd;
    friend class CUIStatusBar;
};

STATIC_ASSERT_SIZE(CUIToolTip, 2632);


long __cdecl DrawTextSepartedLine(_x_com_ptr<IWzCanvas> pCanvas, long x1, long x2, long y, long nLineSpace,
                                  const char* sText, _x_com_ptr<IWzFont> pFont, _x_com_ptr<IWzFont> pFont2,
                                  long* pMaxWidth, int32_t bTrimLeft);
