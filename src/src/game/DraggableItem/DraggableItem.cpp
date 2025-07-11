// DraggableItem.cpp
#include "DraggableItem.hpp"

static ZArray<ZRef<GW_ItemSlotPet>> FAKE_ZArray_GW_ItemSlotPet{};
static ZRef<GW_ItemSlotPet> FAKE_ZRef_GW_ItemSlotPet{};

#include "DraggableItem_regen.ipp"

IDraggable::~IDraggable()
{
}

void IDraggable::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

IDraggable::IDraggable(const IDraggable& arg0)
{
    _ctor_1(arg0);
}

void IDraggable::_ctor_1(const IDraggable& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

IDraggable::IDraggable(IWzGr2DLayer* arg0)
{
    m_pLayer = arg0;
}

void IDraggable::_ctor_0(IWzGr2DLayer* arg0)
{
    new(this) IDraggable(arg0);
}

int32_t IDraggable::OnDropped(IUIMsgHandler* pFrom, IUIMsgHandler* pTo, long rx, long ry)
{
    return 0;
}

int32_t IDraggable::OnDoubleClicked()
{
    return 0;
}

IDraggable& IDraggable::operator=(const IDraggable& arg0)
{
    return _op_assign_5(this, arg0);
}

IDraggable& IDraggable::_op_assign_5(IDraggable* pThis, const IDraggable& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDraggableItem::~CDraggableItem()
{
}

void CDraggableItem::_dtor_0()
{
    this->~CDraggableItem();
}

CDraggableItem::CDraggableItem(const CDraggableItem& arg0)
{
    _ctor_1(arg0);
}

void CDraggableItem::_ctor_1(const CDraggableItem& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDraggableItem::CDraggableItem(IWzGr2DLayer* pLayer, long nItemTI, long nSlotPosition, long nIdx,
                               IUIMsgHandler* pSource)
{
    m_nItemTI = nItemTI;
    m_nSlotPosition = nSlotPosition;
    m_nIdx = nIdx;
    m_pSource = pSource;
    m_pLayer = pLayer;
}

void CDraggableItem::_ctor_0(IWzGr2DLayer* pLayer, long nItemTI, long nSlotPosition, long nIdx, IUIMsgHandler* pSource)
{
    new(this) CDraggableItem(pLayer, nItemTI, nSlotPosition, nIdx, pSource);
}

int32_t CDraggableItem::OnDropped(IUIMsgHandler* pFrom, IUIMsgHandler* pTo, long rx, long ry)
{
    return __sub_00108700(this, nullptr, pFrom, pTo, rx, ry);
}

int32_t CDraggableItem::OnDoubleClicked()
{
    return __sub_00106E10(this, nullptr);
}

int32_t CDraggableItem::GetOffEquipItem(CUIEquip* pUIEquip, CUIItem* pUIItem, long x, long y)
{
    return __sub_00102E60(this, nullptr, pUIEquip, pUIItem, x, y);
}

int32_t CDraggableItem::GetOffEquipItem()
{
    return __sub_00102B90(this, nullptr);
}

int32_t CDraggableItem::WearEquipItem(long nItemID, long pPetItems)
{
    return __sub_001043E0(this, nullptr, nItemID, pPetItems);
}

int32_t CDraggableItem::WearEquipItem(CUIMechanicEquip* pUIMechanicEquip, CUIItem* pUIItem, long x, long y)
{
    return __sub_00108620(this, nullptr, pUIMechanicEquip, pUIItem, x, y);
}

int32_t CDraggableItem::WearEquipItem(CUIPetEquip* pUIPetEquip, CUIItem* pUIItem, long x, long y)
{
    return __sub_00108550(this, nullptr, pUIPetEquip, pUIItem, x, y);
}

int32_t CDraggableItem::WearEquipItem(CUIDragonEquip* pUIDragonEquip, CUIItem* pUIItem, long x, long y)
{
    return __sub_00108470(this, nullptr, pUIDragonEquip, pUIItem, x, y);
}

int32_t CDraggableItem::WearEquipItem(CUIEquip* pUIEquip, CUIItem* pUIItem, long x, long y)
{
    return __sub_001083A0(this, nullptr, pUIEquip, pUIItem, x, y);
}

int32_t CDraggableItem::MoveItemSlot(CUIItem* pUIItem, long x, long y)
{
    return __sub_00103840(this, nullptr, pUIItem, x, y);
}

int32_t CDraggableItem::ThrowItem(CUIEquip* pUIEquip, CUIItem* pUIItem)
{
    return __sub_00105BA0(this, nullptr, pUIEquip, pUIItem);
}

int32_t CDraggableItem::HyperModifyEquipItem(long x, long y, long nModifyEquipType)
{
    return __sub_00103F50(this, nullptr, x, y, nModifyEquipType);
}

int32_t CDraggableItem::ItemOptionModifyEquipItem(long x, long y, long nModifyEquipType)
{
    return __sub_00103A00(this, nullptr, x, y, nModifyEquipType);
}

int32_t CDraggableItem::ItemRelease(long x, long y)
{
    return __sub_00103D20(this, nullptr, x, y);
}

int32_t CDraggableItem::ModifyEquipItem(long x, long y, long nModifyEquipType)
{
    return __sub_00103A00(this, nullptr, x, y, nModifyEquipType);
}

int32_t CDraggableItem::CanPerformAction(int32_t bCheckAlert)
{
    return __sub_001028F0(this, nullptr, bCheckAlert);
}

int32_t CDraggableItem::MapFuncKey(long x, long y, int32_t bOnStatusBar)
{
    return __sub_001015F0(this, nullptr, x, y, bOnStatusBar);
}

int32_t CDraggableItem::UnmapFuncKey(int32_t bOnStatusBar)
{
    return __sub_00101960(this, nullptr, bOnStatusBar);
}

int32_t CDraggableItem::PutItem(CUIVega* pWnd)
{
    return __sub_00100AD0(this, nullptr, pWnd);
}

int32_t CDraggableItem::PutItem(CUIUnreleaseDlg* pUnrelease)
{
    return __sub_00102980(this, nullptr, pUnrelease);
}

int32_t CDraggableItem::PutItem(CUIItemUpgrade* pWnd)
{
    return __sub_001023B0(this, nullptr, pWnd);
}

int32_t CDraggableItem::PutItem(CUIKarmaDlg* pKarmaDlg)
{
    return __sub_00100DB0(this, nullptr, pKarmaDlg);
}

int32_t CDraggableItem::PutItem(CUIRaiseWndBase* pWnd)
{
    return __sub_001027D0(this, nullptr, pWnd);
}

int32_t CDraggableItem::PutItem(CItemSpeakerDlg* pItemSpeakerDlg)
{
    return __sub_000FFD40(this, nullptr, pItemSpeakerDlg);
}

int32_t CDraggableItem::PutItem(CParcelDlg* pParcelDlg)
{
    return __sub_001025E0(this, nullptr, pParcelDlg);
}

int32_t CDraggableItem::PutItem(CUIEnchantDlg* pWnd)
{
    return __sub_00100CB0(this, nullptr, pWnd);
}

int32_t CDraggableItem::PutItem(CUIIncubator* pWnd)
{
    return __sub_00100BC0(this, nullptr, pWnd);
}

int32_t CDraggableItem::PutItem(CUIItemProtector* pWnd)
{
    return __sub_001021A0(this, nullptr, pWnd);
}

int32_t CDraggableItem::PutItem(CPersonalShopDlg* pDlg, long x, long y)
{
    return __sub_00101F90(this, nullptr, pDlg, x, y);
}

int32_t CDraggableItem::PutItem(CCashTradingRoomDlg* pCTRDlg, long x, long y)
{
    return __sub_00101E20(this, nullptr, pCTRDlg, x, y);
}

int32_t CDraggableItem::PutItem(CTradingRoomDlg* pTRDlg, long x, long y)
{
    return __sub_00101C60(this, nullptr, pTRDlg, x, y);
}

int32_t CDraggableItem::PutItem(CUIItemMaker* pItemMakeDlg, long x, long y)
{
    return __sub_00101B70(this, nullptr, pItemMakeDlg, x, y);
}

int32_t CDraggableItem::MoveItemToInventory(CPersonalShopDlg* pPersonalShopDlg, CUIItem* pUIItem, long x, long y)
{
    return __sub_00103970(this, nullptr, pPersonalShopDlg, pUIItem, x, y);
}

long CDraggableItem::AskItemCount(const char* sMsg, long nMax)
{
    return __sub_00104270(this, nullptr, sMsg, nMax);
}

CDraggableItem& CDraggableItem::operator=(const CDraggableItem& arg0)
{
    return _op_assign_37(this, arg0);
}

CDraggableItem& CDraggableItem::_op_assign_37(CDraggableItem* pThis, const CDraggableItem& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t __cdecl is_treat_singly(GW_ItemSlotBase* p)
{
    return __sub_00101570(p);
}

long __cdecl to_petabil_item_bodypart(long nIdx, long nItemID)
{
    return __sub_000FEF60(nIdx, nItemID);
}
