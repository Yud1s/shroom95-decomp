// ITCWnd.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIToolTip/UIToolTip.hpp"
#include "Wnd/Wnd.hpp"
#include "Avatar/Avatar.hpp"

class CITC;
class CUserPreview;
class CWvsPhysicalSpace2D;
class CCtrlButton;
class CCtrlScrollBar;
class CCtrlTab;

// Level: 1 0x14862
class CITCWnd_SALE;
// Level: 1 0x14800
class CITCWnd_Char;
// Level: 1 0x148b1
class CITCWnd_Inventory;
// Level: 1 0x14887
class CITCWnd_PURCHASE;

class CITCWnd_SALE : public CWnd, public TSingleton<CITCWnd_SALE>
{
	// Nested
public:
	enum  ID_CTRL_
{
	ID_CTRL_BT_ITCWNDSALE_CANCEL = 1000,
	ID_CTRL_SB_ITCWNDSALE = 1001
};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtCancelSale;

protected:
	ZRef<CCtrlScrollBar> m_pScrollBar;

protected:
	CUIToolTip m_uiToolTip;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

protected:
	long m_nSelectedNo{};

protected:
	CITC *m_pITC{};
	// Methods
	CTOR_DEFAULT(CITCWnd_SALE);
public:
	virtual ~CITCWnd_SALE();

public:
	void _dtor_0();

public:
	CITCWnd_SALE(const CITCWnd_SALE &arg0);

public:
	void _ctor_1( const CITCWnd_SALE &arg0);

public:
	CITCWnd_SALE();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void ClearToolTip();

public:
	void SetSelectedNo(int32_t arg0);

public:
	long GetWndSaleIndex(long rx, long ry);

public:
	tagRECT GetWndSaleRect(long nIndex);

protected:
	void ResetScrollBar();

public:
	CITCWnd_SALE &operator=(const CITCWnd_SALE &arg0);

public:
	static CITCWnd_SALE &_op_assign_17(CITCWnd_SALE *pThis, const CITCWnd_SALE &arg0);
};
STATIC_ASSERT_SIZE(CITCWnd_SALE, 2788);
class CITCWnd_Char : public CWnd, public TSingleton<CITCWnd_Char>
{
	// Nested
public:
	struct WEAR_INFO
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long nCommSN{};
		// Methods
	};

public:
	
enum  ID_CTRL_
{
	ID_CTRL_EDIT_CHAT = 0,
	ID_CTRL_TAB_BACKGROUND = 1
};
	// Fields
protected:
	AvatarLook m_avatarLookInitial;

protected:
	std::array<CITCWnd_Char::WEAR_INFO, 60> m_aWearInfo;

protected:
	CITCWnd_Char::WEAR_INFO m_petInfo;

protected:
	ZRef<CWvsPhysicalSpace2D> m_pSpace2D;

protected:
	ZRef<CUserPreview> m_pUserPreview;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerBackground;

protected:
	CITC *m_pITC{};
	// Methods
	CTOR_DEFAULT(CITCWnd_Char);
public:
	virtual ~CITCWnd_Char();

public:
	void _dtor_0();

public:
	CITCWnd_Char(const CITCWnd_Char &arg0);

public:
	void _ctor_1( const CITCWnd_Char &arg0);

public:
	CITCWnd_Char();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void Update();

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	void OnDefaultAvatar();

public:
	void InitAvatar();

public:
	void InitPet();

public:
	long GetWeaponItemID(long nWT, long &nAttackType);

public:
	void InitActiveEffect();

public:
	void SetActiveEffectItem(long nItemID);

public:
	void InitRing();

public:
	void SetPet(long nItemID, long nCommSN, int32_t bPackage);

public:
	void SetRing(long nItemID, long nCommSN, int32_t bPackage);

public:
	CITCWnd_Char &operator=(const CITCWnd_Char &arg0);

public:
	static CITCWnd_Char &_op_assign_20(CITCWnd_Char *pThis, const CITCWnd_Char &arg0);
};
STATIC_ASSERT_SIZE(CITCWnd_Char, 1160);
class CITCWnd_Inventory : public CWnd, public TSingleton<CITCWnd_Inventory>
{

public:
	static int32_t ms_anItemScrollPos[5];
	// Nested
public:
	enum  ID_CTRL_
{
	ID_CTRL_TAB_ITCINVENTORY = 1000,
	ID_CTRL_SB_ITCINVENTORY = 1001,
	ID_CTRL_BT_ITCINVENTORY_SELL = 1002,
	ID_CTRL_BT_ITCINVENTORY_REGAUCTION = 1003
};
enum  kItemSlotNo
{
	kItemSlotNo = 18
};
	// Fields
protected:
	ZRef<CCtrlTab> m_pTab;

protected:
	ZRef<CCtrlScrollBar> m_pScrollBar;

protected:
	ZRef<CCtrlButton> m_pBtRegisterSale;

protected:
	CUIToolTip m_uiToolTip;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

protected:
	long m_nFirstPosition{};

protected:
	long m_nItemTI{};

protected:
	long m_nSelectedNo{};

protected:
	CITC *m_pITC{};
	// Methods
	CTOR_DEFAULT(CITCWnd_Inventory);
public:
	virtual ~CITCWnd_Inventory();

public:
	void _dtor_0();

public:
	CITCWnd_Inventory(const CITCWnd_Inventory &arg0);

public:
	void _ctor_1( const CITCWnd_Inventory &arg0);

public:
	CITCWnd_Inventory();

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
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void ClearToolTip();

public:
	void ResetInfo();

public:
	long GetSlotPositionFromPoint(long rx, long ry);

public:
	long GetItemTypeIndex();

public:
	void SetInventoryTI(long arg0);

public:
	void SetSelectedNo(long nPos);

protected:
	void OnTabChanged(long nTab);

protected:
	int32_t GetItemSlotRect(long nSlotPosition, tagRECT *pRc);

public:
	CITCWnd_Inventory &operator=(const CITCWnd_Inventory &arg0);

public:
	static CITCWnd_Inventory &_op_assign_20(CITCWnd_Inventory *pThis, const CITCWnd_Inventory &arg0);
};
STATIC_ASSERT_SIZE(CITCWnd_Inventory, 2804);
class CITCWnd_PURCHASE : public CWnd, public TSingleton<CITCWnd_PURCHASE>
{
	// Nested
public:
	
enum  ID_CTRL_SB_ITCWNDPURCHASE
{
	ID_CTRL_SB_ITCWNDPURCHASE = 1000
};
	// Fields
protected:
	ZRef<CCtrlScrollBar> m_pScrollBar;

protected:
	CUIToolTip m_uiToolTip;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

protected:
	long m_nSelectedNo{};

protected:
	CITC *m_pITC{};
	// Methods
	CTOR_DEFAULT(CITCWnd_PURCHASE);
public:
	virtual ~CITCWnd_PURCHASE();

public:
	void _dtor_0();

public:
	CITCWnd_PURCHASE(const CITCWnd_PURCHASE &arg0);

public:
	void _ctor_1( const CITCWnd_PURCHASE &arg0);

public:
	CITCWnd_PURCHASE();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void ClearToolTip();

public:
	void SetSelectedNo(int32_t arg0);

public:
	long GetWndPurchaseIndex(long rx, long ry);

public:
	tagRECT GetWndPurchaseRect(long nIndex);

protected:
	void ResetScrollBar();

public:
	CITCWnd_PURCHASE &operator=(const CITCWnd_PURCHASE &arg0);

public:
	static CITCWnd_PURCHASE &_op_assign_16(CITCWnd_PURCHASE *pThis, const CITCWnd_PURCHASE &arg0);
};
STATIC_ASSERT_SIZE(CITCWnd_PURCHASE, 2780);



