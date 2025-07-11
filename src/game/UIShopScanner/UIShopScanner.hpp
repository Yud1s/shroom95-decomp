// UIShopScanner.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "LayoutMan/LayoutMan.hpp"
#include "UIWnd/UIWnd.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "Packet/Packet.hpp"
#include "Wnd/Wnd.hpp"

struct ITEMDATA;

// Level: 1 0xd64e
class CUIShopScannerCategory;
// Level: 1 0xd74b
class CUIShopScanResult;
// Level: 1 0xd62a
class CUIShopScannerHotList;
// Level: 1 0xd5f1
class CUIShopScannerSearchResult;
// Level: 1 0xd67c
class CUIShopScanner;

class CUIShopScannerCategory : public CWnd, public TSingleton<CUIShopScannerCategory>
{
	// Nested
public:
	enum  ID_CTRL_BT_CLOSE
{
	ID_CTRL_BT_CLOSE = 1000
};
enum  k
{
	kWidth = 189,
	kHeight = 249
};
	// Fields
protected:
	std::array<ZArray<ZXString<char>>, 5> m_asCategories;

protected:
	long m_nTI{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIShopScannerCategory();

public:
	void _dtor_0();

public:
	CUIShopScannerCategory(const CUIShopScannerCategory &arg0);

public:
	void _ctor_1( const CUIShopScannerCategory &arg0);

public:
	CUIShopScannerCategory(long lLeft, long lTop);

public:
	void _ctor_0( long lLeft, long lTop);

public:
	virtual void OnCreate(void *pData);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	void ClearList();

public:
	void AddtoList_1(long nBegin, long nEnd);

public:
	void AddtoList_0(long nItemCatagory);

public:
	void AddtoList2(long nItemCatagory);

public:
	CUIShopScannerCategory &operator=(const CUIShopScannerCategory &arg0);

public:
	static CUIShopScannerCategory &_op_assign_13(CUIShopScannerCategory *pThis, const CUIShopScannerCategory &arg0);
};
STATIC_ASSERT_SIZE(CUIShopScannerCategory, 172);
class CUIShopScanResult : public CUniqueModeless
{
	// Nested
public:
	enum  ID_CTRL_BT_
{
	ID_CTRL_BT_LINK0 = 3000,
	ID_CTRL_BT_RIGHT = 4000,
	ID_CTRL_BT_LEFT = 4001
};
	// Fields
protected:
	ZRef<CCtrlOriginButton> m_pBtOk;

protected:
	std::array<ZRef<CCtrlButton>, 8> m_pBtLink;

protected:
	ZRef<CCtrlOriginButton> m_pBtLeft;

protected:
	ZRef<CCtrlOriginButton> m_pBtRight;

protected:
	ZList<ZRef<ITEMDATA>> m_lItemData;

protected:
	ZArray<ZRef<ITEMDATA>> m_aCurPageItemData;

protected:
	ZRef<ITEMDATA> m_pShopLinkRequestedData;

protected:
	CUIToolTip m_uiToolTip;

protected:
	long m_nItemID{};

protected:
	long m_nCurPage{};

protected:
	long m_nCntPage{};

protected:
	_x_com_ptr<IWzFont> m_pFontCountBold;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIShopScanResult();

public:
	void _dtor_0();

public:
	CUIShopScanResult(const CUIShopScanResult &arg0);

public:
	void _ctor_1( const CUIShopScanResult &arg0);

public:
	CUIShopScanResult(long nItemID, ZList<ZRef<ITEMDATA>> &lItemData);

public:
	void _ctor_0( long nItemID, ZList<ZRef<ITEMDATA>> &lItemData);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	void LoadCurPageItemList();

public:
	void OnShopLinkResult(CInPacket &iPacket);

	CLASS_RTTI_(CUIShopScanResult, CUniqueModeless);

public:
	CUIShopScanResult &operator=(const CUIShopScanResult &arg0);

public:
	static CUIShopScanResult &_op_assign_14(CUIShopScanResult *pThis, const CUIShopScanResult &arg0);
};
STATIC_ASSERT_SIZE(CUIShopScanResult, 2936);
class CUIShopScannerHotList : public CWnd, public TSingleton<CUIShopScannerHotList>
{
	// Nested
public:
	
enum  ID_CTRL_
{
	ID_CTRL_BT_CLOSE = 1000,
	ID_CTRL_BT_LEFT = 1001,
	ID_CTRL_BT_RIGHT = 1002,
	ID_CTRL_CB_DESCENDING = 1003
};
enum  k
{
	kWidth = 189,
	kHeight = 249,
	kItemPerPage = 5,
	kItemInfoX = 47,
	kItemInfoY = 31,
	kItemIconX = 12,
	kItemIconY = 64,
	kItemTextX = 51,
	kItemTextY = 44,
	kItemTextWidth = 120,
	kItemSlotTotalWidth = 169,
	kItemSlotTotalHeight = 35,
	kRankTextX = 78,
	kRankTextY = 227,
	kItemGap = 38
};
	// Fields
protected:
	ZRef<CCtrlOriginButton> m_pBtLeft;

protected:
	ZRef<CCtrlOriginButton> m_pBtRight;

protected:
	ZRef<CCtrlCheckBox> m_pCheckDescending;

protected:
	_x_com_ptr<IWzCanvas> m_pSelect;

protected:
	long m_nSelect{};

protected:
	long m_nMouseOver{};

protected:
	int32_t m_bShowingSecondPage{};

protected:
	CUIToolTip m_uiToolTip;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIShopScannerHotList();

public:
	void _dtor_0();

public:
	CUIShopScannerHotList(const CUIShopScannerHotList &arg0);

public:
	void _ctor_1( const CUIShopScannerHotList &arg0);

public:
	CUIShopScannerHotList(long lLeft, long lTop);

public:
	void _ctor_0( long lLeft, long lTop);

public:
	virtual void OnCreate(void *pData);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	void Reset();

public:
	CUIShopScannerHotList &operator=(const CUIShopScannerHotList &arg0);

public:
	static CUIShopScannerHotList &_op_assign_10(CUIShopScannerHotList *pThis, const CUIShopScannerHotList &arg0);
};
STATIC_ASSERT_SIZE(CUIShopScannerHotList, 2820);
class CUIShopScannerSearchResult : public CWnd, public TSingleton<CUIShopScannerSearchResult>
{
	// Nested
public:
	enum  ID_CTRL_
{
	ID_CTRL_BT_CLOSE = 1000,
	ID_CTRL_BT_LEFT = 1001,
	ID_CTRL_BT_RIGHT = 1002,
	ID_CTRL_BT_SEARCH = 1003,
	ID_CTRL_CB_DESCENDING = 1004
};
enum  k
{
	kWidth = 189,
	kHeight = 249,
	kTextLeft = 25,
	kTextTop = 33,
	kTextSelectX = 12,
	kTextSelectY = 29,
	kIconSelectX = 16,
	kIconSelectY = 34,
	kIconNotSelectX = 17,
	kIconNotSelectY = 36,
	kTextSelectWidth = 163,
	kTextSelectHeight = 16,
	kPageText_X = 70,
	kPageText_Y = 227,
	kTextYGab = 19
};
	// Fields
protected:
	ZRef<CCtrlOriginButton> m_pBtLeft;

protected:
	ZRef<CCtrlOriginButton> m_pBtRight;

protected:
	ZRef<CCtrlOriginButton> m_pBtSearch;

protected:
	ZRef<CCtrlCheckBox> m_pCheckDescending;

protected:
	_x_com_ptr<IWzCanvas> m_pNotSelectIcon;

protected:
	_x_com_ptr<IWzCanvas> m_pSelectIcon;

protected:
	long m_nSelect{};

protected:
	ZList<long> m_lPrev;

protected:
	ZList<long> m_lCur;

protected:
	ZList<long> m_lNext;

protected:
	__POSITION *m_posReservePrev{};

protected:
	__POSITION *m_posCur{};

protected:
	__POSITION *m_posReserveNext{};

protected:
	__POSITION *m_posToGoNext{};

protected:
	long m_nCurPage{};

protected:
	long m_nTotalPage{};

protected:
	CUIToolTip m_uiToolTip;

protected:
	ZList<ZRef<ITEMNAME>> m_lItemName;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIShopScannerSearchResult();

public:
	void _dtor_0();

public:
	CUIShopScannerSearchResult(const CUIShopScannerSearchResult &arg0);

public:
	void _ctor_1( const CUIShopScannerSearchResult &arg0);

public:
	CUIShopScannerSearchResult(long lLeft, long lTop);

public:
	void _ctor_0( long lLeft, long lTop);

public:
	virtual void OnCreate(void *pData);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	void Reset();

public:
	long GetIndexFromPoint(long rx, long ry);

public:
	CUIShopScannerSearchResult &operator=(const CUIShopScannerSearchResult &arg0);

public:
	static CUIShopScannerSearchResult &_op_assign_11(CUIShopScannerSearchResult *pThis, const CUIShopScannerSearchResult &arg0);
};
STATIC_ASSERT_SIZE(CUIShopScannerSearchResult, 2928);
class CUIShopScanner : public CUIWnd, public TSingleton<CUIShopScanner>
{
	// Nested
public:
	enum  kClose_
{
	kClose_X = 201,
	kClose_Y = 7
};
enum  ID_CTRL_
{
	ID_CTRL_BT_HOTLIST = 2000,
	ID_CTRL_BT_CATEGORY = 2001,
	ID_CTRL_BT_SEARCH = 2002,
	ID_CTRL_EDIT_SEARCH = 2003,
	ID_CTRL_BT_CLOSE = 2004
};
	// Fields
public:
	ZArray<long> m_anHotList;

public:
	int32_t m_bShowingCategoryResult{};

public:
	int32_t m_bCategoryResultExist{};

public:
	long m_nSearchBegin{};

public:
	long m_nSearchEnd{};

public:
	long m_nSearchBegin2{};

public:
	long m_nSearchEnd2{};

public:
	ZXString<char> m_sSearchItemName;

protected:
	ZRef<CCtrlEdit> m_pEditSearch;

protected:
	ZRef<CUIShopScannerHotList> m_pUIShopScannerHotList;

protected:
	ZRef<CUIShopScannerCategory> m_pUIShopScannerCategory;

protected:
	ZRef<CUIShopScannerSearchResult> m_pUIShopScannerSearchResult;

protected:
	COutPacket m_oPacket;

protected:
	int32_t m_bHotListShown{};

protected:
	int32_t m_bCategoryShown{};

protected:
	int32_t m_bSearchResultShown{};

protected:
	long m_nToggleTime{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIShopScanner();

public:
	void _dtor_0();

public:
	CUIShopScanner(const CUIShopScanner &arg0);

public:
	void _ctor_1( const CUIShopScanner &arg0);

public:
	CUIShopScanner();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnMoveWnd(long l, long t);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void Update();

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual int32_t IsMyAddon(CWnd *pWnd);

public:
	void SetOutPacket(COutPacket &oPacket);

public:
	void SetHotList(ZArray<long> &arg0);

public:
	void SetCtrl();

protected:
	void ToggleAddOn(long nType);

protected:
	void OnToggleDetail(_x_com_ptr<IWzGr2DLayer> pDetailLayer, int32_t &bShown);

protected:
	void SearchItemName(ZXString<char> sItemName);

protected:
	void SendScanPacket(long nItemID, int32_t bDescendingOrder);

protected:
	int32_t CanAddList(long nItemID, ZXString<char> sItemName);

public:
	CUIShopScanner &operator=(const CUIShopScanner &arg0);

public:
	static CUIShopScanner &_op_assign_19(CUIShopScanner *pThis, const CUIShopScanner &arg0);
};
STATIC_ASSERT_SIZE(CUIShopScanner, 2940);





