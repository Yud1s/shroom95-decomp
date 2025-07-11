// PersonalShopDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlButton/CtrlButton.hpp"

#include "CashTradingRoomDlg/CashTradingRoomDlg.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "Packet/Packet.hpp"
#include "Dialog/Dialog.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "UIToolTip/UIToolTip.hpp"

class CCtrlTab;
class CCtrlEdit;
class CCtrlMLEdit;

// Level: 1 0xeae9
class CPersonalShopDlg;

class CPersonalShopDlg : public CMiniRoomBaseDlg
{
	// Nested
public:
	class CPutItemDlg : public CDialog
	{
		// Nested
	public:
		enum ID_CTRL_
		{
			ID_CTRL_EDIT_COUNT = 1001,
			ID_CTRL_EDIT_PRICE = 1002,
			ID_CTRL_EDIT_SET = 1003,
			ID_CTRL_CHECKBOX_SET = 1004
		};
		// Fields
	protected:
		int32_t m_bSet{};

	protected:
		long m_nNumber{};

	protected:
		int32_t m_bCash{};

	protected:
		ZRef<CCtrlButton> m_pBtOK;

	protected:
		ZRef<CCtrlButton> m_pBtCancel;

	protected:
		ZRef<CCtrlCheckBox> m_pChkBoxSet;

	protected:
		ZRef<CCtrlEdit> m_pEditCount;

	protected:
		ZRef<CCtrlEdit> m_pEditPrice;

	protected:
		ZRef<CCtrlEdit> m_pEditSet;

	private:
		CLayoutMan m_lm;
		// Methods
	public:
		virtual ~CPutItemDlg();

	public:
		void _dtor_0();

	public:
		CPutItemDlg(const CPersonalShopDlg::CPutItemDlg &arg0);

	public:
		void _ctor_1(const CPersonalShopDlg::CPutItemDlg &arg0);

	public:
		CPutItemDlg(int32_t bSet, long nNumber, int32_t bCash);

	public:
		void _ctor_0(int32_t bSet, long nNumber, int32_t bCash);

	public:
		virtual void SetRet(long nRet);

	public:
		virtual void OnCreate(void *pData);

	public:
		virtual void OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2);

	public:
		virtual void Draw(const tagRECT *pRect);

	public:
		void GetResult(long &nCount, long &nPrice, long &nSet);

	private:
		int32_t IsNumber(ZRef<CCtrlEdit> pEdit, long nMin, long nMax);

	public:
		CPersonalShopDlg::CPutItemDlg &operator=(const CPersonalShopDlg::CPutItemDlg &arg0);

	public:
		static CPersonalShopDlg::CPutItemDlg &_op_assign_9(CPersonalShopDlg::CPutItemDlg *pThis, const CPersonalShopDlg::CPutItemDlg &arg0);
	};

public:
	class CSoldItemDlg : public CDialog
	{
		// Nested
	public:
		enum ID_CTRL_SB_SOLD_ITEM
		{
			ID_CTRL_SB_SOLD_ITEM = 2000
		};
		// Fields
	protected:
		CPersonalShopDlg *m_pDlg{};

	protected:
		ZRef<CCtrlButton> m_pBtClose;

	protected:
		ZRef<CCtrlScrollBar> m_pSB;

	protected:
		_x_com_ptr<IWzCanvas> m_pCashIcon;

	private:
		CLayoutMan m_lm;
		// Methods
	public:
		virtual ~CSoldItemDlg();

	public:
		void _dtor_0();

	public:
		CSoldItemDlg(const CPersonalShopDlg::CSoldItemDlg &arg0);

	public:
		void _ctor_1(const CPersonalShopDlg::CSoldItemDlg &arg0);

	public:
		CSoldItemDlg(CPersonalShopDlg *pDlg);

	public:
		void _ctor_0(CPersonalShopDlg *pDlg);

	public:
		virtual void OnCreate(void *pData);

	public:
		virtual void OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2);

	public:
		virtual void Draw(const tagRECT *pRect);

	public:
		virtual void SetRet(long nRet);

	public:
		void SetScrollBar();

	public:
		CPersonalShopDlg::CSoldItemDlg &operator=(const CPersonalShopDlg::CSoldItemDlg &arg0);

	public:
		static CPersonalShopDlg::CSoldItemDlg &_op_assign_8(CPersonalShopDlg::CSoldItemDlg *pThis, const CPersonalShopDlg::CSoldItemDlg &arg0);
	};

public:
	struct ITEM
	{
		// Nested
		// Fields
	public:
		long nNumber{};

	public:
		long nSet{};

	public:
		long nPrice{};

	public:
		ZRef<GW_ItemSlotBase> pItem;
		// Methods
	public:
		~ITEM();

	public:
		void _dtor_0();

	public:
		ITEM(const CPersonalShopDlg::ITEM &arg0);

	public:
		void _ctor_1(const CPersonalShopDlg::ITEM &arg0);

	public:
		ITEM();

	public:
		void _ctor_0();

	public:
		CPersonalShopDlg::ITEM &operator=(const CPersonalShopDlg::ITEM &arg0);

	public:
		static CPersonalShopDlg::ITEM &_op_assign_3(CPersonalShopDlg::ITEM *pThis, const CPersonalShopDlg::ITEM &arg0);
	};

public:
	struct SOLD_ITEM
	{
		// Nested
		// Fields
	public:
		TSecType<long> nItemID;

	public:
		long nNumber{};

	public:
		long nPrice{};

	public:
		ZXString<char> sBuyerName;
		// Methods
	public:
		~SOLD_ITEM();

	public:
		void _dtor_0();

	public:
		SOLD_ITEM(const CPersonalShopDlg::SOLD_ITEM &arg0);

	public:
		void _ctor_1(const CPersonalShopDlg::SOLD_ITEM &arg0);

	public:
		SOLD_ITEM();

	public:
		void _ctor_0();

	public:
		CPersonalShopDlg::SOLD_ITEM &operator=(CPersonalShopDlg::SOLD_ITEM &arg0);

	public:
		static CPersonalShopDlg::SOLD_ITEM &_op_assign_3(CPersonalShopDlg::SOLD_ITEM *pThis, CPersonalShopDlg::SOLD_ITEM &arg0);
	};

public:
	enum ID_CTRL_
	{
		ID_CTRL_BT_PERSONALSHOP_START = 1001,
		ID_CTRL_BT_PERSONALSHOP_CLOSE = 1002,
		ID_CTRL_BT_PERSONALSHOP_BUY = 1003,
		ID_CTRL_BT_PERSONALSHOP_INFO = 1004,
		ID_CTRL_BT_PERSONALSHOP_ITEM = 1005,
		ID_CTRL_BT_PERSONALSHOP_CHAT = 1006,
		ID_CTRL_BT_PERSONALSHOP_BAN1 = 1007,
		ID_CTRL_BT_PERSONALSHOP_BAN2 = 1008,
		ID_CTRL_BT_PERSONALSHOP_BAN3 = 1009,
		ID_CTRL_BT_PERSONALSHOP_EXIT = 1010,
		ID_CTRL_BT_CLAIM = 1011,
		ID_CTRL_SCR_CHAT = 1012,
		ID_CTRL_EDIT_CHAT = 1013,
		ID_CTRL_SB_SHOP_BUY = 1014,
		ID_CTRL_BT_ENTRUSTEDSHOP_ARRANGE = 1015,
		ID_CTRL_BT_ENTRUSTEDSHOP_COIN = 1016,
		ID_CTRL_BT_ENTRUSTEDSHOP_BLACKLIST = 1017,
		ID_CTRL_BT_ENTRUSTEDSHOP_VISITLOG = 1018
	};
	enum kSlotCount
	{
		kSlotCount = 5
	};
	enum MAX_CUSTOMERS
	{
		MAX_CUSTOMERS = 3
	};
	// Fields
protected:
	int64_t m_nTotSold;

protected:
	int64_t m_nTotReceived;

protected:
	long m_nInitMoney{};

protected:
	int32_t m_bOpen{};

protected:
	long m_nItem{};

protected:
	ZArray<CPersonalShopDlg::ITEM> m_aItem;

protected:
	ZArray<CPersonalShopDlg::SOLD_ITEM> m_aSoldItem;

protected:
	ZRef<CPersonalShopDlg::CSoldItemDlg> m_pSoldItem;

protected:
	ZXString<char> m_sTitle;

protected:
	ZXString<char> m_sTitleExt;

protected:
	long m_nType{};

protected:
	long m_nBuySelected{};

protected:
	long m_nItemMaxCount{};

protected:
	std::array<long, 3> m_anEnterTime{};

protected:
	ZRef<CCtrlOriginButton> m_pBtClose;

protected:
	ZRef<CCtrlOriginButton> m_pBtExit;

protected:
	ZRef<CCtrlOriginButton> m_pBtInfo;

protected:
	ZRef<CCtrlOriginButton> m_pBtItem;

protected:
	ZRef<CCtrlOriginButton> m_pBtStart;

protected:
	ZRef<CCtrlOriginButton> m_pBtBuy;

protected:
	std::array<ZRef<CCtrlOriginButton>, 3> m_pBtBan;

protected:
	ZRef<CCtrlOriginButton> m_pBtArrange;

protected:
	ZRef<CCtrlOriginButton> m_pBtCoin;

protected:
	ZRef<CCtrlOriginButton> m_pBtExit2;

protected:
	ZRef<CCtrlOriginButton> m_pBtBlackList;

protected:
	ZRef<CCtrlOriginButton> m_pBtVisitList;

protected:
	ZRef<CCtrlEdit> m_pEditChat;

protected:
	ZRef<CCtrlScrollBar> m_pSBBuy;

protected:
	CUIToolTip m_uiToolTip;

protected:
	_x_com_ptr<IWzCanvas> m_pSelect;

protected:
	_x_com_ptr<IWzCanvas> m_pSoldOut;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzFont> m_pFontName;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CPersonalShopDlg();

public:
	void _dtor_0();

public:
	CPersonalShopDlg(const CPersonalShopDlg &arg0);

public:
	void _ctor_1(const CPersonalShopDlg &arg0);

public:
	CPersonalShopDlg();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *paramButton);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2);

public:
	virtual void SetRet(long nRet);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Update();

public:
	virtual void ClearToolTip();

protected:
	virtual void GetActionPosition(long nSlot, long &nAction, tagPOINT &pt);

protected:
	virtual void OnPacket(long nType, CInPacket &iPacket);

protected:
	virtual void OnStart();

protected:
	virtual void OnRefresh(CInPacket &iPacket);

protected:
	virtual void OnEnterResult(CInPacket &iPacket);

protected:
	virtual void OnEnter(long nSlot, CInPacket &iPacket);

protected:
	virtual void OnLeave(long nSlot, CInPacket &iPacket);

protected:
	virtual void DrawCharacterName(long nSlot, ZXString<char> sID);

protected:
	virtual long GetMoney();

protected:
	virtual unsigned char GetMiniRoomType();

protected:
	virtual void OnCorrectSSN2(long nProc);

protected:
	void OnBuyResult(CInPacket &iPacket);

protected:
	void OnSoldItemResult(CInPacket &iPacket);

protected:
	void OnMoveItemToInventory(CInPacket &iPacket);

protected:
	void DestroySoldItemDlg();

protected:
	int32_t IsRoomMaster();

protected:
	void DeliverBlackList();

protected:
	void OnClickBanButton(long nSlot);

protected:
	int32_t CheckCashItemInList(int32_t &bHasCashItem, long nProc);

public:
	int32_t PutItem(ZRef<GW_ItemSlotBase> pItem, long nTI, long nPos);

public:
	int32_t MoveItemToInventory(long nIdx);

protected:
	void BuyItem(long nIdx);

protected:
	long GetItemIndexFromPoint(long rx, long ry);

protected:
	long GetRectIndexFromPoint(long rx, long ry);

protected:
	void SetScrollBar();
	CLASS_RTTI_(CPersonalShopDlg, CMiniRoomBaseDlg);

public:
	CPersonalShopDlg &operator=(const CPersonalShopDlg &arg0);

public:
	static CPersonalShopDlg &_op_assign_43(CPersonalShopDlg *pThis, const CPersonalShopDlg &arg0);
};
STATIC_ASSERT_SIZE(CPersonalShopDlg, 3304);
