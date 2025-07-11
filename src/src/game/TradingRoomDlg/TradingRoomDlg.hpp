// TradingRoomDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "CashTradingRoomDlg/CashTradingRoomDlg.hpp"
#include "Packet/Packet.hpp"
#include "UIToolTip/UIToolTip.hpp"

// Level: 1 0x15911
class CTradingRoomDlg;

class CTradingRoomDlg : public CMiniRoomBaseDlg
{
	// Nested
public:
	struct ITEM
	{
		// Nested
		// Fields
	public:
		ZRef<GW_ItemSlotBase> pItem;

	public:
		_x_com_ptr<IWzCanvas> pIcon;

	public:
		long nNumber{};
		// Methods
	public:
		~ITEM();

	public:
		void _dtor_0();

	public:
		ITEM(const CTradingRoomDlg::ITEM &arg0);

	public:
		void _ctor_1(const CTradingRoomDlg::ITEM &arg0);

	public:
		ITEM();

	public:
		void _ctor_0();

	public:
		CTradingRoomDlg::ITEM &operator=(const CTradingRoomDlg::ITEM &arg0);

	public:
		static CTradingRoomDlg::ITEM &_op_assign_3(CTradingRoomDlg::ITEM *pThis, const CTradingRoomDlg::ITEM &arg0);
	};

public:
	enum ID_CTRL_
{
	ID_CTRL_BT_TRADE_LOCK = 1001,
	ID_CTRL_BT_TRADE_TRADE = 1002,
	ID_CTRL_BT_TRADE_COIN = 1003,
	ID_CTRL_BT_ENTER = 1004,
	ID_CTRL_BT_CLAIM = 1005,
	ID_CTRL_EDIT_CHAT = 1006
};
	// Fields
public:
	ZRef<CCtrlOriginButton> m_pBtTrade;

public:
	ZRef<CCtrlOriginButton> m_pBtCoin;

public:
	ZRef<CCtrlEdit> m_pEditChat;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzFont> m_pFontMoney;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

protected:
	int32_t m_bMyLock{};

protected:
	int32_t m_bPeerLock{};

protected:
	std::array<ZArray<CTradingRoomDlg::ITEM>, 2> m_aaItem;

protected:
	std::array<long, 2> m_anMoney{};

protected:
	long m_nInitMoney{};

protected:
	CUIToolTip m_uiToolTip;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CTradingRoomDlg();

public:
	void _dtor_0();

public:
	CTradingRoomDlg(const CTradingRoomDlg &arg0);

public:
	void _ctor_1(const CTradingRoomDlg &arg0);

public:
	CTradingRoomDlg();

public:
	void _ctor_0();

public:
	virtual void SetRet(long nRet);

public:
	virtual void OnCreate(void *pData);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void OnButtonClicked(uint32_t uId);

public:
	virtual void Draw(const tagRECT *pRect);

protected:
	virtual void GetActionPosition(long nSlot, long &nAction, tagPOINT &pt);

protected:
	virtual void OnPacket(long nType, CInPacket &iPacket);

protected:
	virtual void OnEnter(long nSlot, CInPacket &iPacket);

protected:
	virtual void OnLeave(long nSlot, CInPacket &iPacket);

protected:
	void OnPutItem(CInPacket &iPacket);

protected:
	void OnPutMoney(CInPacket &iPacket);

protected:
	void OnTrade(CInPacket &iPacket);

protected:
	void OnExceedLimit(CInPacket &iPacket);

public:
	int32_t PutItem(ZRef<GW_ItemSlotBase> pItem, long nItemTI, long nSlotPosition, long x, long y);

protected:
	void PutMoney();

protected:
	void Trade();

protected:
	void DrawItems(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	long GetItemIndexFromPoint(long rx, long ry);

protected:
	long GetRectIndexFromPoint(long rx, long ry);
	CLASS_RTTI_(CTradingRoomDlg, CMiniRoomBaseDlg);

public:
	CTradingRoomDlg &operator=(const CTradingRoomDlg &arg0);

public:
	static CTradingRoomDlg &_op_assign_28(CTradingRoomDlg *pThis, const CTradingRoomDlg &arg0);
};
STATIC_ASSERT_SIZE(CTradingRoomDlg, 3136);


