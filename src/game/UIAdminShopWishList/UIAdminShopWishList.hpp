// UIAdminShopWishList.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "Packet/Packet.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "UIToolTip/UIToolTip.hpp"

class CCtrlEdit;

// Level: 1 0x157da
class CUIAdminShopWishListCategory;
// Level: 1 0x157b8
class CUIAdminShopWishListSearchResult;
// Level: 1 0x15801
class CUIAdminShopWishList;

class CUIAdminShopWishListCategory : public CWnd, public TSingleton<CUIAdminShopWishListCategory>
{
	// Nested
public:
	enum ID_CTRL_BT_CLOSE
	{
		ID_CTRL_BT_CLOSE = 1000
	};
	enum k
	{
		kWidth = 205,
		kHeight = 271
	};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	std::array<ZArray<ZXString<char>>, 5> m_asCategories;

protected:
	long m_nTI{};
	// Methods
public:
	virtual ~CUIAdminShopWishListCategory();

public:
	void _dtor_0();

public:
	CUIAdminShopWishListCategory(const CUIAdminShopWishListCategory &arg0);

public:
	void _ctor_1(const CUIAdminShopWishListCategory &arg0);

public:
	CUIAdminShopWishListCategory(long lLeft, long lTop);

public:
	void _ctor_0(long lLeft, long lTop);

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
	CUIAdminShopWishListCategory &operator=(const CUIAdminShopWishListCategory &arg0);

public:
	static CUIAdminShopWishListCategory &_op_assign_13(CUIAdminShopWishListCategory *pThis, const CUIAdminShopWishListCategory &arg0);
};
STATIC_ASSERT_SIZE(CUIAdminShopWishListCategory, 160);
class CUIAdminShopWishListSearchResult : public CWnd, public TSingleton<CUIAdminShopWishListSearchResult>
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_BT_CLOSE = 1000,
		ID_CTRL_BT_LEFT = 1001,
		ID_CTRL_BT_RIGHT = 1002,
		ID_CTRL_BT_REGISTER = 1003,
		ID_CTRL_CB_DESCENDING = 1004
	};
	enum k
	{
		kWidth = 205,
		kHeight = 271
	};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZRef<CCtrlButton> m_pBtLeft;

protected:
	ZRef<CCtrlButton> m_pBtRight;

protected:
	ZRef<CCtrlButton> m_pBtRegister;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasIcon;

protected:
	long m_nSelect{};

protected:
	long m_nMouseOver{};

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
	CUIToolTip m_uiToolTip;

protected:
	ZList<ZRef<ITEMNAME>> m_lItemName;
	// Methods
public:
	virtual ~CUIAdminShopWishListSearchResult();

public:
	void _dtor_0();

public:
	CUIAdminShopWishListSearchResult(const CUIAdminShopWishListSearchResult &arg0);

public:
	void _ctor_1(const CUIAdminShopWishListSearchResult &arg0);

public:
	CUIAdminShopWishListSearchResult(long lLeft, long lTop);

public:
	void _ctor_0(long lLeft, long lTop);

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
	CUIAdminShopWishListSearchResult &operator=(const CUIAdminShopWishListSearchResult &arg0);

public:
	static CUIAdminShopWishListSearchResult &_op_assign_11(CUIAdminShopWishListSearchResult *pThis, const CUIAdminShopWishListSearchResult &arg0);
};
STATIC_ASSERT_SIZE(CUIAdminShopWishListSearchResult, 2900);
class CUIAdminShopWishList : public CWnd, public TSingleton<CUIAdminShopWishList>
{
	// Nested
public:
	enum ID_CTRL_
{
	ID_CTRL_BT_CATEGORY = 2000,
	ID_CTRL_BT_SEARCH = 2001,
	ID_CTRL_EDIT_SEARCH = 2002,
	ID_CTRL_BT_CLOSE = 2003
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
	ZRef<CCtrlButton> m_pBtCategory;

protected:
	ZRef<CCtrlButton> m_pBtSearch;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZRef<CCtrlEdit> m_pEditSearch;

protected:
	ZRef<CUIAdminShopWishListCategory> m_pUIAdminShopWishListCategory;

protected:
	ZRef<CUIAdminShopWishListSearchResult> m_pUIAdminShopWishListSearchResult;

protected:
	COutPacket m_oPacket;

protected:
	int32_t m_bCategoryShown{};

protected:
	int32_t m_bSearchResultShown{};

protected:
	long m_nToggleTime{};
	// Methods
public:
	virtual ~CUIAdminShopWishList();

public:
	void _dtor_0();

public:
	CUIAdminShopWishList(const CUIAdminShopWishList &arg0);

public:
	void _ctor_1(const CUIAdminShopWishList &arg0);

public:
	CUIAdminShopWishList();

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
	void SetOutPacket(COutPacket &arg0);

public:
	void SetHotList(ZArray<long> &arg0);

public:
	void SetLayer();

public:
	void SetCtrl();

public:
	void SendRegisterPacket(long nItemID);

public:
	void CloseAdminShopWishList();

protected:
	void ToggleAddOn(long nType);

protected:
	void OnToggleDetail(_x_com_ptr<IWzGr2DLayer> pDetailLayer, int32_t &bShown);

protected:
	void SearchItemName(ZXString<char> sItemName);

protected:
	int32_t CanAddList(long nItemID, ZXString<char> sItemName);

public:
	CUIAdminShopWishList &operator=(const CUIAdminShopWishList &arg0);

public:
	static CUIAdminShopWishList &_op_assign_21(CUIAdminShopWishList *pThis, const CUIAdminShopWishList &arg0);
};
STATIC_ASSERT_SIZE(CUIAdminShopWishList, 236);


