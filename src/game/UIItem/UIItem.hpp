// UIItem.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "LayoutMan/LayoutMan.hpp"
#include "UIWnd/UIWnd.hpp"

struct GW_ItemSlotBase;

class CCtrlTab;
class CCtrlScrollBar;

// Level: 1 0xd5c1
class CUIItem;

class CUIItem : public CUIWnd, public TSingleton<CUIItem>
{

  public: static int32_t ms_anItemScrollPos[6];
	// Nested
public:
	enum ID_CTRL_UIITEM_
{
	ID_CTRL_UIITEM_TAB = 2000,
	ID_CTRL_UIITEM_SCR_ITEM = 2001,
	ID_CTRL_UIITEM_BT_DROP_MONEY = 2002,
	ID_CTRL_UIITEM_BT_GATHER = 2003,
	ID_CTRL_UIITEM_BT_SORT = 2004,
	ID_CTRL_UIITEM_BT_EXTEND = 2005,
	ID_CTRL_UIITEM_BT_FOLD = 2006,
	ID_CTRL_UIITEM_BT_CASHSHOP = 2007
};
enum k
{
	kWidth = 172,
	kHeight = 293,
	kWidthExpanded = 594,
	kBtClose_X = 150,
	kBtClose_Y = 6,
	kBtClose_X_Expanded = 574,
	kScrItem_X = 152,
	kScrItem_Y = 51,
	kScrItem_Len = 207,
	kTab_X = 9,
	kTab_Y = 26,
	kTabWidth = 31,
	kMeso_X_RightEnd = 126,
	kMeso_Y = 268,
	kItemSlotNo = 24
};
enum BT_STATE_
{
	BT_STATE_GATHER = 0,
	BT_STATE_SORT = 1
};

	// Fields
private:
	ZRef<CCtrlTab> m_pTab;

private:
	ZRef<CCtrlScrollBar> m_pSBItem;

private:
	ZRef<CCtrlOriginButton> m_pBtArrange;

private:
	ZRef<CCtrlOriginButton> m_pBtExtend;

private:
	ZRef<CCtrlOriginButton> m_pBtCashShop;

private:
	long m_nFirstPosition{};

private:
	long m_nItemTI{};

private:
	std::array<long, 6> m_anSortBtState{};

private:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

private:
	int32_t m_bExtended{};

private:
	_x_com_ptr<IWzCanvas> m_pCanvasDisabled;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLastestItemTabEffectLayer;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLastestItemSlotEffectLayer;

private:
	long m_nLastestGetItemID{};

private:
	long m_nLastestGetItemPos{};

private:
	int32_t m_bTryToReleaseItem{};

private:
	long m_nReleaseUItemPos{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIItem();

public:
	void _dtor_0();

public:
	CUIItem(const CUIItem &arg0);

public:
	void _ctor_1( const CUIItem &arg0);

CTOR_DEFAULT(CUIItem);
public:
	CUIItem();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void Update();

public:
	void ResetInfo();

public:
	void ChangeTab(long nTab);

public:
	long GetSlotPositionFromPoint(long rx, long ry);

public:
	long GetItemTypeIndex();

public:
	void ToggleTab();

public:
	void SetArrangeButton(long nTI, long nState);

public:
	void ClearLastestGetItemInfo();

public:
	void SetTryToReleaseItem(int32_t bTryToReleaseItem, long nReleaseUItemPos);

public:
	int32_t IsTryToReleaseItem();

public:
	int32_t ItemRelease(long nSlotPosition, GW_ItemSlotBase *pItem);

public:
	void ShowItemReleaseEffect(long nPos);

protected:
	void OnTabChanged(long nTab);

protected:
	void OnDropMoney();

protected:
	void OnGather();

protected:
	void OnSort();

protected:
	int32_t GetItemSlotRect(long nSlotPosition, tagRECT *pRc);

protected:
	void Toggle();

protected:
	void SetItemTI(long nTab);

protected:
	long ItemTI_2_TabIndex(long nItemTI);

private:
	ZXString16 _GetBackgroundUOL();

private:
	void SetLastestGetItemEffect();

	CLASS_RTTI_(CUIItem, CUIWnd);

public:
	CUIItem &operator=(const CUIItem &arg0);

public:
	static CUIItem &_op_assign_35(CUIItem *pThis, const CUIItem &arg0);
};
STATIC_ASSERT_SIZE(CUIItem, 2952);

