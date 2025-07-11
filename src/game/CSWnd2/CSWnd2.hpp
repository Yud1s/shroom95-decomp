// CSWnd2.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "Dialog/Dialog.hpp"

// Extra
class CCtrlSelector;
class CCtrlComboBox;
class CCtrlButton;
class CCtrlEdit;

class CCashShop;
struct CS_COMMODITY;
struct CS_COMMODITY_EX;

// Level: 1 0xbf28
class CCSWnd_Best;
// Level: 1 0xbe6f
class CCSWnd_Tab;
// Level: 1 0xbf3e
class CCSWnd_Status;
// Level: 1 0x235f8
class CItemSearchDlg;
// Level: 1 0x23641
class CShortcutHelpDialog;
// Level: 1 0xbed7
class CCSWnd_List;

class CCSWnd_Best : public CWnd
{
	// Nested
	// Fields
protected:
	std::array<long, 5> m_nBestCommodityIndex{};

protected:
	CCashShop *m_pCashShop{};
	// Methods
public:
	virtual ~CCSWnd_Best();

public:
	void _dtor_0();

public:
	CCSWnd_Best(const CCSWnd_Best &arg0);

public:
	void _ctor_1(const CCSWnd_Best &arg0);

public:
	CCSWnd_Best();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	tagRECT GetBestRect(long nBest);

public:
	void ChangeCategory();

public:
	void GoToCommoditySN(long nSN);

public:
	CCSWnd_Best &operator=(const CCSWnd_Best &arg0);

public:
	static CCSWnd_Best &_op_assign_10(CCSWnd_Best *pThis, const CCSWnd_Best &arg0);
};
STATIC_ASSERT_SIZE(CCSWnd_Best, 152);
class CCSWnd_Tab : public CWnd
{

protected:
	static uint32_t ms_KeyDownDelay;
	// Nested
public:
	enum ID_CTRL_ST_CSTAB
	{
		ID_CTRL_ST_CSTAB = 1000
	};
	enum CSW_TAB_NO
	{
		CSW_TAB_NO = 9
	};
	// Fields
protected:
	ZRef<CCtrlSelector> m_pSelector;

protected:
	ZRef<CCtrlComboBox> m_pCBSort;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 10> m_pCanvasTab;

protected:
	long m_nTab{};

protected:
	CCashShop *m_pCashShop{};

protected:
	unsigned long m_tLastKeyDown{};
	// Methods
public:
	virtual ~CCSWnd_Tab();

public:
	void _dtor_0();

public:
	CCSWnd_Tab(const CCSWnd_Tab &arg0);

public:
	void _ctor_1(const CCSWnd_Tab &arg0);

public:
	CCSWnd_Tab();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	int32_t OnKeyRet(uint32_t wParam, int32_t lParam);

public:
	void ChangeCategory();

public:
	void ChangeSubCategory();

protected:
	long GetTabIndex(long rx, long ry);

public:
	CCSWnd_Tab &operator=(const CCSWnd_Tab &arg0);

public:
	static CCSWnd_Tab &_op_assign_13(CCSWnd_Tab *pThis, const CCSWnd_Tab &arg0);
};
STATIC_ASSERT_SIZE(CCSWnd_Tab, 196);
class CCSWnd_Status : public CWnd
{
	// Nested
public:
	enum ID_CTRL_BT_CSSTATUS_
	{
		ID_CTRL_BT_CSSTATUS_CHARGE = 1000,
		ID_CTRL_BT_CSSTATUS_CHECK = 1001,
		ID_CTRL_BT_CSSTATUS_COUPON = 1002,
		ID_CTRL_BT_CSSTATUS_EXIT = 1003
	};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtCharge;

protected:
	ZRef<CCtrlButton> m_pBtCheck;

protected:
	ZRef<CCtrlButton> m_pBtCoupon;

protected:
	ZRef<CCtrlButton> m_pBtExit;

protected:
	CCashShop *m_pCashShop{};
	// Methods
public:
	virtual ~CCSWnd_Status();

public:
	void _dtor_0();

public:
	CCSWnd_Status(const CCSWnd_Status &arg0);

public:
	void _ctor_1(const CCSWnd_Status &arg0);

public:
	CCSWnd_Status();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	int32_t OnKeyRet(uint32_t wParam, int32_t lParam);

public:
	CCSWnd_Status &operator=(const CCSWnd_Status &arg0);

public:
	static CCSWnd_Status &_op_assign_10(CCSWnd_Status *pThis, const CCSWnd_Status &arg0);
};
STATIC_ASSERT_SIZE(CCSWnd_Status, 164);
class CItemSearchDlg : public CDialog
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_EDIT_ITEMNAME = 1000,
		ID_CTRL_COMBOBOX_PRICE = 2000
	};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtOk;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlEdit> m_pEditItemName;

protected:
	ZRef<CCtrlComboBox> m_pCbPrice;

protected:
	ZArray<tagPOINT> &m_aPrices;
	// Methods
public:
	virtual ~CItemSearchDlg();

public:
	void _dtor_0();

public:
	CItemSearchDlg(const CItemSearchDlg &arg0);

public:
	void _ctor_1(const CItemSearchDlg &arg0);

public:
	CItemSearchDlg(ZArray<tagPOINT> &aPrices);

public:
	void _ctor_0(ZArray<tagPOINT> &aPrices);

public:
	virtual void OnCreate(void *pData);

public:
	void GetResult(ZXString<char> &sSearchName, long &nLowerPrice, long &nUpperPrice);
};
STATIC_ASSERT_SIZE(CItemSearchDlg, 180);
class CShortcutHelpDialog : public CDialog
{
	// Nested
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtClose;
	// Methods
public:
	virtual ~CShortcutHelpDialog();

public:
	void _dtor_0();

public:
	CShortcutHelpDialog(const CShortcutHelpDialog &arg0);

public:
	void _ctor_1(const CShortcutHelpDialog &arg0);

public:
	CShortcutHelpDialog();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	CShortcutHelpDialog &operator=(const CShortcutHelpDialog &arg0);

public:
	static CShortcutHelpDialog &_op_assign_4(CShortcutHelpDialog *pThis, const CShortcutHelpDialog &arg0);
};
STATIC_ASSERT_SIZE(CShortcutHelpDialog, 152);
class CCSWnd_List : public CWnd
{
public:
	static inline uint32_t ms_KeyDownDelay = 0; // TODO
public:
	static inline uint32_t ms_ToolTipPopUpDelay = 0; // TODO
													 // Nested
public:
	struct PICTURE_PLATE
	{
		// Nested
		// Fields
	public:
		long nX{};

	public:
		long nY{};

	public:
		ZXString16 sUOL;
		// Methods
	public:
		~PICTURE_PLATE();

	public:
		void _dtor_0();

	public:
		PICTURE_PLATE(const CCSWnd_List::PICTURE_PLATE &arg0);

	public:
		void _ctor_1(const CCSWnd_List::PICTURE_PLATE &arg0);

	public:
		PICTURE_PLATE();

	public:
		void _ctor_0();

	public:
		CCSWnd_List::PICTURE_PLATE &operator=(const CCSWnd_List::PICTURE_PLATE &arg0);

	public:
		static CCSWnd_List::PICTURE_PLATE &_op_assign_3(CCSWnd_List::PICTURE_PLATE *pThis, const CCSWnd_List::PICTURE_PLATE &arg0);
	};

public:
	enum UI_PLATE_PER_ROW
	{
		UI_PLATE_PER_ROW = 2
	};
	enum UnnamedEnum46537
	{
		BT_BUY_PLATE = 0,
		BT_GIFT_PLATE = 1,
		BT_WISH_PLATE = 2,
		BT_NO_PER_PLATE = 3,
		ID_CTRL_ST_CSLIST = 1000,
		ID_CTRL_BT_PLATE_START = 2000,
		ID_CTRL_BT_SHORTCUT = 4000
	};
	enum ID_ICON_CLASS_
	{
		ID_ICON_CLASS_NEW = 0,
		ID_ICON_CLASS_SALE = 1,
		ID_ICON_CLASS_HOT = 2,
		ID_ICON_CLASS_EVENT = 3,
		ID_ICON_CLASS_LIMIT = 4
	};
	// Fields
protected:
	ZRef<CCtrlSelector> m_pSelector;

protected:
	std::array<std::array<ZRef<CCtrlButton>, 3>, 10> m_pBtPlate;

protected:
	ZRef<CCtrlButton> m_pBtShortcut;

protected:
	long m_nPlateNo{};

protected:
	long m_nPlateFocus{};

protected:
	long m_nButtonFocus{};

protected:
	std::array<long, 10> m_nCommodityIndex{};

protected:
	std::array<long, 10> m_nStockIndex{};

protected:
	std::array<long, 10> m_nLimitGoodsIndex{};

protected:
	std::array<long, 10> m_nGender{};

protected:
	std::array<int32_t, 10> m_bCannotBuy{};

protected:
	CCashShop *m_pCashShop{};

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasPlate;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 4> m_pCanvasState;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasKeyFocus;

protected:
	ZArray<_x_com_ptr<IWzGr2DLayer>> m_apClassLayer;

protected:
	ZArray<_x_com_ptr<IWzGr2DLayer>> m_apLimitLayer;

protected:
	CUIToolTip m_uiToolTip;

protected:
	ZArray<CCSWnd_List::PICTURE_PLATE> m_picturePlate;

protected:
	ZArray<long> m_aSetEffectItem;

protected:
	long m_nCurCategory{};

protected:
	long m_nCurCategorySub{};

protected:
	long m_nCurPage{};

protected:
	unsigned long m_tLastKeyDown{};

protected:
	int32_t m_bPopUpToolTip{};

protected:
	int32_t m_bNeedForcedUpdate{};

protected:
	long m_nMouseToolTipIndex{};

protected:
	int32_t m_bUpdateLayers{};
	// Methods
public:
	virtual ~CCSWnd_List();

public:
	void _dtor_0();

public:
	CCSWnd_List(const CCSWnd_List &arg0);

public:
	void _ctor_1(const CCSWnd_List &arg0);

public:
	CCSWnd_List();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual int32_t OnMouseWheel(long rx, long ry, long nWheel);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Update();

public:
	virtual void Draw(const tagRECT *arg0);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void ClearToolTip();

public:
	int32_t OnKeyRet(uint32_t wParam, int32_t lParam);

public:
	void SetCursorToPlate(long nPlate);

public:
	void SetUserPreviewControl(int32_t bControl);

public:
	tagRECT GetPlateRect(long nPlate);

public:
	void ChangeCategorySub();

public:
	void ChangePage();

public:
	void AddPicturePlate(long nX, long nY, const wchar_t *sUOL);

public:
	void ClearPicturePlate();

public:
	void AddClassIconLayer(long nX, long nY, long nClass);

public:
	void AddLimitIconLayer(long nX, long nY);

public:
	void SetUpdateLayers(int32_t bControl);

public:
	long GetCommodityGender(ZRef<CS_COMMODITY> pComm);

public:
	int32_t IsSameList();

public:
	void ResetSlotIncComm();

public:
	int32_t IsKeyNavigationMode();

protected:
	void SetPlateNo(long nPlateNo);

protected:
	void SetButtonKeyFocus(long nPlateIndx, long nBtnIndx);

protected:
	void WearCommodity(ZRef<CS_COMMODITY> pComm);

protected:
	int32_t WearItem(ZRef<CS_COMMODITY> pComm, int32_t bPackage);

protected:
	int32_t ShowItemToolTip(ZRef<CS_COMMODITY_EX> pComm, long rx, long ry);

public:
	CCSWnd_List &operator=(const CCSWnd_List &arg0);

public:
	static CCSWnd_List &_op_assign_36(CCSWnd_List *pThis, const CCSWnd_List &arg0);
};
STATIC_ASSERT_SIZE(CCSWnd_List, 3304);
