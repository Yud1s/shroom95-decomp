// DraggableItem.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIKarma/UIKarma.hpp"
#include "UIUnreleaseDlg/UIUnreleaseDlg.hpp"
#include "CashTradingRoomDlg/CashTradingRoomDlg.hpp"
#include "ParcelDlg/ParcelDlg.hpp"
#include "UIEnchantDlg/UIEnchantDlg.hpp"
#include "PersonalShopDlg/PersonalShopDlg.hpp"
#include "ItemSpeakerDlg/ItemSpeakerDlg.hpp"
#include "UIGoldHammer/UIGoldHammer.hpp"
#include "GW/GW.hpp"
#include "UIItemMaker/UIItemMaker.hpp"
#include "UIItem/UIItem.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "TradingRoomDlg/TradingRoomDlg.hpp"
#include "UIRaiseManager/UIRaiseManager.hpp"
#include "UIEquip/UIEquip.hpp"
#include "UIIncubator/UIIncubator.hpp"
#include "UIItemProtector/UIItemProtector.hpp"

class CUIItemProtector;
class CItemSpeakerDlg;
class CUIVega;
class CUIItemUpgrade;
class CUIKarmaDlg;
class CParcelDlg;
class CUIEnchantDlg;
class CUIUnreleaseDlg;
class CUIIncubator;

// Level: 1 0x19153
struct IDraggable;
// Level: 2 0x14bd0
class CDraggableItem;

struct IDraggable : public ZRefCounted
{
	// Nested
	// Fields
public:
	_x_com_ptr<IWzGr2DLayer> m_pLayer;

public:
	FUNCKEY_MAPPED m_OldIcon{};
	// Methods
public:
	IDraggable() {}

public:
	virtual ~IDraggable();

public:
	void _dtor_0();

public:
	IDraggable(const IDraggable &arg0);

public:
	void _ctor_1(const IDraggable &arg0);

public:
	IDraggable(IWzGr2DLayer *arg0);

public:
	void _ctor_0(IWzGr2DLayer *arg0);

public:
	virtual int32_t OnDropped(IUIMsgHandler *pFrom, IUIMsgHandler *pTo, long rx, long ry);

public:
	virtual int32_t OnDoubleClicked();

public:
	IDraggable &operator=(const IDraggable &arg0);

public:
	static IDraggable &_op_assign_5(IDraggable *pThis, const IDraggable &arg0);
};
STATIC_ASSERT_SIZE(IDraggable, 24);
class CDraggableItem : public IDraggable
{
	// Nested
public:
	enum MODIFYEQUIPTYPE_
	{
		MODIFYEQUIPTYPE_ENCHANTSKILL = 0,
		MODIFYEQUIPTYPE_USER = 1,
		MODIFYEQUIPTYPE_DRAGON = 2,
		MODIFYEQUIPTYPE_MECHANIC = 3,
		MODIFYEQUIPTYPE_PETEQUIP = 4
	};
	// Fields
protected:
	long m_nItemTI{};

protected:
	long m_nSlotPosition{};

protected:
	long m_nIdx{};

protected:
	IUIMsgHandler *m_pSource{};
	// Methods
public:
	virtual ~CDraggableItem();

public:
	void _dtor_0();

public:
	CDraggableItem(const CDraggableItem &arg0);

public:
	void _ctor_1(const CDraggableItem &arg0);

public:
	CDraggableItem(IWzGr2DLayer *pLayer, long nItemTI, long nSlotPosition, long nIdx, IUIMsgHandler *pSource);

public:
	void _ctor_0(IWzGr2DLayer *pLayer, long nItemTI, long nSlotPosition, long nIdx, IUIMsgHandler *pSource);

public:
	virtual int32_t OnDropped(IUIMsgHandler *pFrom, IUIMsgHandler *pTo, long rx, long ry);

public:
	virtual int32_t OnDoubleClicked();

protected:
	int32_t GetOffEquipItem(CUIEquip *pUIEquip, CUIItem *pUIItem, long x, long y);

	int32_t GetOffEquipItem_1(CUIEquip *pUIEquip, CUIItem *pUIItem, long x, long y)
	{
		return GetOffEquipItem(pUIEquip, pUIItem, x, y);
	}

protected:
	int32_t GetOffEquipItem();
	int32_t GetOffEquipItem_0()
	{
		return GetOffEquipItem();
	}

protected:
	int32_t WearEquipItem(long nItemID, long pPetItems);

	// TODO
	int32_t WearEquipItem_0(long nItemID, long pPetItems)
	{
		return WearEquipItem(nItemID, pPetItems);
	}

protected:
	int32_t WearEquipItem(CUIMechanicEquip *pUIMechanicEquip, CUIItem *pUIItem, long x, long y);
	int32_t WearEquipItem_1(CUIMechanicEquip *pUIMechanicEquip, CUIItem *pUIItem, long x, long y)
	{
		return WearEquipItem(pUIMechanicEquip, pUIItem, x, y);
	}

protected:
	int32_t WearEquipItem(CUIPetEquip *pUIPetEquip, CUIItem *pUIItem, long x, long y);
	int32_t WearEquipItem_2(CUIPetEquip *pUIPetEquip, CUIItem *pUIItem, long x, long y)
	{
		return WearEquipItem(pUIPetEquip, pUIItem, x, y);
	}

protected:
	int32_t WearEquipItem(CUIDragonEquip *pUIDragonEquip, CUIItem *pUIItem, long x, long y);

	int32_t WearEquipItem_3(CUIDragonEquip *pUIDragonEquip, CUIItem *pUIItem, long x, long y)
	{
		return WearEquipItem(pUIDragonEquip, pUIItem, x, y);
	}

protected:
	int32_t WearEquipItem(CUIEquip *pUIEquip, CUIItem *pUIItem, long x, long y);
	int32_t WearEquipItem_4(CUIEquip *pUIEquip, CUIItem *pUIItem, long x, long y)
	{
		return WearEquipItem(pUIEquip, pUIItem, x, y);
	}

protected:
	int32_t MoveItemSlot(CUIItem *pUIItem, long x, long y);

protected:
	int32_t ThrowItem(CUIEquip *pUIEquip, CUIItem *pUIItem);

protected:
	int32_t HyperModifyEquipItem(long x, long y, long nModifyEquipType);

protected:
	int32_t ItemOptionModifyEquipItem(long x, long y, long nModifyEquipType);

protected:
	int32_t ItemRelease(long x, long y);

protected:
	int32_t ModifyEquipItem(long x, long y, long nModifyEquipType);

protected:
	int32_t CanPerformAction(int32_t bCheckAlert);

protected:
	int32_t MapFuncKey(long x, long y, int32_t bOnStatusBar);

protected:
	int32_t UnmapFuncKey(int32_t bOnStatusBar);

	// TODO: verify
protected:
	int32_t PutItem(CUIVega *pWnd);
	int32_t PutItem_0(CUIVega *pWnd)
	{
		return PutItem(pWnd);
	}

protected:
	int32_t PutItem(CUIUnreleaseDlg *pUnrelease);
	int32_t PutItem_1(CUIUnreleaseDlg *pUnrelease)
	{
		return PutItem(pUnrelease);
	}

protected:
	int32_t PutItem(CUIItemUpgrade *pWnd);
	int32_t PutItem_2(CUIItemUpgrade *pWnd)
	{
		return PutItem(pWnd);
	}

protected:
	int32_t PutItem(CUIKarmaDlg *pKarmaDlg);
	int32_t PutItem_3(CUIKarmaDlg *pKarmaDlg)
	{
		return PutItem(pKarmaDlg);
	}

protected:
	int32_t PutItem(CUIRaiseWndBase *pWnd);
	int32_t PutItem_4(CUIRaiseWndBase *pWnd)
	{
		return PutItem(pWnd);
	}

protected:
	int32_t PutItem(CItemSpeakerDlg *pItemSpeakerDlg);
	int32_t PutItem_5(CItemSpeakerDlg *pItemSpeakerDlg)
	{
		return PutItem(pItemSpeakerDlg);
	}

protected:
	int32_t PutItem(CParcelDlg *pParcelDlg);
	int32_t PutItem_6(CParcelDlg *pParcelDlg)
	{
		return PutItem(pParcelDlg);
	}

protected:
	int32_t PutItem(CUIEnchantDlg *pWnd);
	int32_t PutItem_7(CUIEnchantDlg *pWnd)
	{
		return PutItem(pWnd);
	}

protected:
	int32_t PutItem(CUIIncubator *pWnd);
	int32_t PutItem_8(CUIIncubator *pWnd)
	{
		return PutItem(pWnd);
	}

protected:
	int32_t PutItem(CUIItemProtector *pWnd);
	int32_t PutItem_9(CUIItemProtector *pWnd)
	{
		return PutItem(pWnd);
	}

protected:
	int32_t PutItem(CPersonalShopDlg *pDlg, long x, long y);
	int32_t PutItem_10(CPersonalShopDlg *pDlg, long x, long y)
	{
		return PutItem(pDlg, x, y);
	}

protected:
	int32_t PutItem(CCashTradingRoomDlg *pCTRDlg, long x, long y);
	int32_t PutItem_11(CCashTradingRoomDlg *pCTRDlg, long x, long y)
	{
		return PutItem(pCTRDlg, x, y);
	}

protected:
	int32_t PutItem(CTradingRoomDlg *pTRDlg, long x, long y);
	int32_t PutItem_12(CTradingRoomDlg *pTRDlg, long x, long y)
	{
		return PutItem(pTRDlg, x, y);
	}

protected:
	int32_t PutItem(CUIItemMaker *pItemMakeDlg, long x, long y);
	int32_t PutItem_13(CUIItemMaker *pItemMakeDlg, long x, long y)
	{
		return PutItem(pItemMakeDlg, x, y);
	}

protected:
	int32_t MoveItemToInventory(CPersonalShopDlg *pPersonalShopDlg, CUIItem *pUIItem, long x, long y);

protected:
	long AskItemCount(const char *sMsg, long nMax);

public:
	CDraggableItem &operator=(const CDraggableItem &arg0);

public:
	static CDraggableItem &_op_assign_37(CDraggableItem *pThis, const CDraggableItem &arg0);
};
STATIC_ASSERT_SIZE(CDraggableItem, 40);

int32_t __cdecl is_treat_singly(GW_ItemSlotBase *p);
long __cdecl to_petabil_item_bodypart(long nIdx, long nItemID);
