// WeddingWishListDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "LayoutMan/LayoutMan.hpp"
#include "Packet/Packet.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "UIToolTip/UIToolTip.hpp"

// Level: 1 0xf32c
class CWishListInputDlg;
// Level: 1 0xe9ab
class CWeddingWishListDlg;
// Level: 2 0xea06
class CWishListGiveDlg;
// Level: 2 0xea22
class CWishListRecvDlg;

class CWishListInputDlg : public CUniqueModeless
{
	// Nested
public:
	enum  ID_CTRL_
{
	ID_CTRL_EDIT_ITEMNAME = 1000,
	ID_CTRL_BT_OK = 2000,
	ID_CTRL_BT_DELETE = 2001,
	ID_CTRL_BT_ENTER = 2002,
	ID_CTRL_SCR = 3000
};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtDelete;

protected:
	ZRef<CCtrlButton> m_pBtEnter;

protected:
	ZRef<CCtrlEdit> m_pEditItemName;

protected:
	ZRef<CCtrlScrollBar> m_pSB;

protected:
	long m_nSelected{};

protected:
	long m_nListCount{};

protected:
	std::array<ZXString<char>, 10> m_asWishList;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasSelect;

protected:
	_x_com_ptr<IWzFont> m_pFontDimGray;

protected:
	_x_com_ptr<IWzFont> m_pFontWhite;

protected:
	_x_com_ptr<IWzFont> m_pFontSmallWhite;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CWishListInputDlg();

public:
	void _dtor_0();

public:
	CWishListInputDlg(const CWishListInputDlg &arg0);

public:
	void _ctor_1( const CWishListInputDlg &arg0);

public:
	CWishListInputDlg();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void Update();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

protected:
	void OnEnter();

protected:
	void OnDelete();

protected:
	void OnOK();

protected:
	int32_t GetIndexFromPoint(long rx, long ry);

public:
	CWishListInputDlg &operator=(const CWishListInputDlg &arg0);

public:
	static CWishListInputDlg &_op_assign_15(CWishListInputDlg *pThis, const CWishListInputDlg &arg0);
};
STATIC_ASSERT_SIZE(CWishListInputDlg, 272);
class CWeddingWishListDlg : public CUniqueModeless
{
	// Nested
public:
	struct ITEM
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long nStock{};

	public:
		long nIdx{};

	public:
		Ztl_bstr_t sItemName;

	public:
		_x_com_ptr<IWzCanvas> pIcon;

	public:
		ZRef<GW_ItemSlotBase> pItem;
		// Methods
	public:
		~ITEM();

	public:
		void _dtor_0();

	public:
		ITEM(const CWeddingWishListDlg::ITEM &arg0);

	public:
		void _ctor_1( const CWeddingWishListDlg::ITEM &arg0);

	public:
		ITEM();

	public:
		void _ctor_0();

	public:
		CWeddingWishListDlg::ITEM &operator=(const CWeddingWishListDlg::ITEM &__that);

	public:
		static CWeddingWishListDlg::ITEM &_op_assign_3(CWeddingWishListDlg::ITEM *pThis, const CWeddingWishListDlg::ITEM &__that);
	};

public:
	enum  ID_CTRL_
{
	ID_CTRL_TAB_WISHLIST = 1000,
	ID_CTRL_SB_WISHLIST_GET = 1001,
	ID_CTRL_SB_WISHLIST_PUT = 1002
};
	// Fields
public:
	ZRef<CCtrlButton> m_pBtExit;

public:
	ZRef<CCtrlButton> m_pBtPut;

public:
	ZRef<CCtrlTab> m_pTab;

public:
	ZRef<CCtrlScrollBar> m_pSBGet;

public:
	ZRef<CCtrlScrollBar> m_pSBPut;

public:
	ZRef<CCtrlScrollBar> m_pSBWishList;

protected:
	ZArray<CWeddingWishListDlg::ITEM> m_aGetItem;

protected:
	ZArray<CWeddingWishListDlg::ITEM> m_aPutItem;

protected:
	ZArray<CWeddingWishListDlg::ITEM> m_aSnapShot;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasSelect;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasEnable;

protected:
	long m_nGetSelected{};

protected:
	long m_nPutSelected{};

protected:
	long m_nSlotCount{};

protected:
	long m_nSnapshotTI{};

protected:
	int32_t m_bWishListRequestSent{};

protected:
	CUIToolTip m_uiToolTip;

protected:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CWeddingWishListDlg();

public:
	void _dtor_0();

public:
	CWeddingWishListDlg(const CWeddingWishListDlg &arg0);

public:
	void _ctor_1( const CWeddingWishListDlg &arg0);

public:
	CWeddingWishListDlg();

public:
	void _ctor_0();

public:
	virtual void SetWeddingWishListDlg(CInPacket &iPacket);

public:
	virtual void SetRet(long nRet);

public:
	virtual void ResetInfo();

public:
	virtual void OnCreate(void *pData);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t uId);

public:
	virtual void ClearToolTip();

protected:
	void OnTabChanged(long nTab);

protected:
	void SetPutItems(long nTI, ZArray<CWeddingWishListDlg::ITEM> &aItem);

protected:
	virtual void SetScrollBar();

protected:
	virtual void DrawGetItem(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	virtual void DrawPutItem(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	virtual int32_t GetItemIndexFromPoint(long rx, long ry, int32_t *pbBuy, long *pnIdx);

protected:
	long AskItemCount(const char *sMsg, long nDefault, long nMax);

protected:
	long CmpPutItem();

public:
	static void __cdecl OnPacket(long arg0, CInPacket &arg1);

	CLASS_RTTI_(CWeddingWishListDlg, CUniqueModeless);

public:
	CWeddingWishListDlg &operator=(const CWeddingWishListDlg &arg0);

public:
	static CWeddingWishListDlg &_op_assign_27(CWeddingWishListDlg *pThis, const CWeddingWishListDlg &arg0);
};
STATIC_ASSERT_SIZE(CWeddingWishListDlg, 2896);
class CWishListGiveDlg : public CWeddingWishListDlg
{
	// Nested
public:
	enum  ID_CTRL_
{
	ID_CTRL_BT_WISHLISTGIVE_PUT_ITEM = 2000,
	ID_CTRL_SB_WISHLIST_WISHLIST = 2001
};
	// Fields
public:
	ZRef<CCtrlButton> m_pBtPut;

public:
	ZRef<CCtrlScrollBar> m_pSBWishList;

protected:
	ZArray<ZXString<char>> m_asWishList;
	// Methods
public:
	virtual ~CWishListGiveDlg();

public:
	void _dtor_0();

public:
	CWishListGiveDlg(const CWishListGiveDlg &arg0);

public:
	void _ctor_1( const CWishListGiveDlg &arg0);

public:
	CWishListGiveDlg();

public:
	void _ctor_0();

public:
	virtual void SetWeddingWishListDlg(CInPacket &iPacket);

public:
	virtual void SetRet(long nRet);

public:
	void SetGetItems(CInPacket &iPacket);

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t nId);

protected:
	void SetWishList(CInPacket &iPacket);

protected:
	virtual void SetScrollBar();

protected:
	virtual void DrawGetItem(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	virtual void DrawPutItem(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	void DrawWishList(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	virtual int32_t GetItemIndexFromPoint(long rx, long ry, int32_t *pbBuy, long *pnIdx);

protected:
	void SendPutItemRequest();

public:
	static void __cdecl OnPacket(long nType, CInPacket &iPacket);

	CLASS_RTTI_(CWishListGiveDlg, CWeddingWishListDlg);

public:
	CWishListGiveDlg &operator=(const CWishListGiveDlg &arg0);

public:
	static CWishListGiveDlg &_op_assign_22(CWishListGiveDlg *pThis, const CWishListGiveDlg &arg0);
};
STATIC_ASSERT_SIZE(CWishListGiveDlg, 2916);
class CWishListRecvDlg : public CWeddingWishListDlg
{
	// Nested
public:
	enum  ID_CTRL_BT_WISHLISTRECV_GET_ITEM
{
	ID_CTRL_BT_WISHLISTRECV_GET_ITEM = 2000
};

	// Fields
public:
	ZRef<CCtrlButton> m_pBtGet;
	// Methods
public:
	virtual ~CWishListRecvDlg();

public:
	void _dtor_0();

public:
	CWishListRecvDlg(const CWishListRecvDlg &arg0);

public:
	void _ctor_1( const CWishListRecvDlg &arg0);

public:
	CWishListRecvDlg();

public:
	void _ctor_0();

public:
	virtual void SetWeddingWishListDlg(CInPacket &iPacket);

public:
	virtual void SetRet(long nRet);

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnButtonClicked(uint32_t nId);

protected:
	void SetGetItems(CInPacket &iPacket);

protected:
	virtual void SetScrollBar();

protected:
	virtual void DrawGetItem(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	virtual void DrawPutItem(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	virtual int32_t GetItemIndexFromPoint(long rx, long ry, int32_t *pbBuy, long *pnIdx);

protected:
	void SendGetItemRequest();

public:
	static void __cdecl OnPacket(long nType, CInPacket &iPacket);

	CLASS_RTTI_(CWishListRecvDlg, CWeddingWishListDlg);

public:
	CWishListRecvDlg &operator=(const CWishListRecvDlg &arg0);

public:
	static CWishListRecvDlg &_op_assign_18(CWishListRecvDlg *pThis, const CWishListRecvDlg &arg0);
};
STATIC_ASSERT_SIZE(CWishListRecvDlg, 2904);




