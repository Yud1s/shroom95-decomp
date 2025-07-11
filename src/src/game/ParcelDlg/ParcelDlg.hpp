// ParcelDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "GW/GW.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "Packet/Packet.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

class CCtrlTab;
class CCtrlEdit;
class CCtrlMLEdit;

// Level: 0 0x20d10
class CTabSend;
// Level: 0 0x20d22
class CTabQuickSend;
// Level: 0 0x20c77
class CTabReceive;
// Level: 1 0x20ca2
class CParcelDlg;

class CTabSend
{
	// Nested
	// Fields
protected:
	ZRef<GW_ItemSlotBase> m_pItem;

protected:
	long m_nTI{};

protected:
	long m_nPOS{};

protected:
	long m_nNumber{};

protected:
	long m_nMoney{};

protected:
	int32_t m_bShowTax{};

protected:
	CParcelDlg *m_pParent{};

protected:
	CUIToolTip m_uiTooltip;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

protected:
	ZXString<char> m_sMoney;
	// Methods
public:
	~CTabSend();

public:
	void _dtor_0();

public:
	CTabSend(const CTabSend &arg0);

public:
	void _ctor_1(const CTabSend &arg0);

public:
	CTabSend(CParcelDlg *pParent);

public:
	void _ctor_0(CParcelDlg *pParent);

public:
	void Draw(_x_com_ptr<IWzCanvas> pCanvas);

public:
	int32_t OnMouseLButtonClk(long rx, long ry);

public:
	void OnMouseMove(long rx, long ry);

public:
	int32_t HitTest(long rx, long ry);

public:
	void SendParcel();

public:
	void SetMoney();

public:
	void PutItem(GW_ItemSlotBase *pItem, long nTI, long nPOS);

public:
	void ResetSendInfo();

public:
	void ToggleTaxInfo();

public:
	int32_t IsTaxShown();

public:
	CTabSend &operator=(const CTabSend &arg0);

public:
	static CTabSend &_op_assign_13(CTabSend *pThis, const CTabSend &arg0);
};
STATIC_ASSERT_SIZE(CTabSend, 2676);
class CTabQuickSend
{
	// Nested
	// Fields
protected:
	ZRef<GW_ItemSlotBase> m_pItem;

protected:
	long m_nTI{};

protected:
	long m_nPOS{};

protected:
	long m_nCashPOS{};

protected:
	long m_nNumber{};

protected:
	long m_nMoney{};

protected:
	int32_t m_bMemoBoxClicked{};

protected:
	int32_t m_bShowTax{};

protected:
	CParcelDlg *m_pParent{};

protected:
	CUIToolTip m_uiTooltip;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

protected:
	ZXString<char> m_sMoney;
	// Methods
public:
	~CTabQuickSend();

public:
	void _dtor_0();

public:
	CTabQuickSend(const CTabQuickSend &arg0);

public:
	void _ctor_1(const CTabQuickSend &arg0);

public:
	CTabQuickSend(CParcelDlg *pParent);

public:
	void _ctor_0(CParcelDlg *pParent);

public:
	void Draw(_x_com_ptr<IWzCanvas> pCanvas);

public:
	int32_t OnMouseLButtonClk(long rx, long ry);

public:
	void OnMouseMove(long rx, long ry);

public:
	int32_t HitTest(long rx, long ry);

public:
	void SendQuickDelivery();

public:
	void SetMoney();

public:
	void PutItem(GW_ItemSlotBase *pItem, long nTI, long nPOS);

public:
	void ResetSendInfo();

public:
	void ToggleTaxInfo();

public:
	int32_t IsTaxShown();

public:
	CTabQuickSend &operator=(const CTabQuickSend &arg0);

public:
	static CTabQuickSend &_op_assign_13(CTabQuickSend *pThis, const CTabQuickSend &arg0);
};
STATIC_ASSERT_SIZE(CTabQuickSend, 2684);
class CTabReceive
{
	// Nested
	// Fields
protected:
	ZArray<ZRef<PARCEL>> m_apParcel;

protected:
	long m_nSelect{};

protected:
	long m_nCurPos{};

protected:
	CParcelDlg *m_pParent{};

protected:
	CUIToolTip m_uiTooltip;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasEmpty;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;
	// Methods
public:
	~CTabReceive();

public:
	void _dtor_0();

public:
	CTabReceive(const CTabReceive &arg0);

public:
	void _ctor_1(const CTabReceive &arg0);

public:
	CTabReceive(CParcelDlg *pParent);

public:
	void _ctor_0(CParcelDlg *pParent);

public:
	void Draw(_x_com_ptr<IWzCanvas> pCanvas);

public:
	int32_t OnMouseLButtonClk(long rx, long ry);

public:
	void OnMouseMove(long rx, long ry);

public:
	int32_t HitTest(long rx, long ry);

public:
	void SetParcel(CInPacket &iPacket);

public:
	void RemoveParcel(long nParcelSN);

public:
	void AddNewParcel(ZRef<PARCEL> p);

public:
	void ReceiveParcel();

public:
	void DiscardParcel();

public:
	CTabReceive &operator=(const CTabReceive &arg0);

public:
	static CTabReceive &_op_assign_12(CTabReceive *pThis, const CTabReceive &arg0);
};
STATIC_ASSERT_SIZE(CTabReceive, 2656);
class CParcelDlg : public CUniqueModeless
{
	// Nested
public:
	enum UnnamedEnum134232
	{
		ID_CTRL_BT_CLOSE = 2000,
		ID_CTRL_TAB = 2001,
		ID_CTRL_EDIT_TARGET = 2002,
		ID_CTRL_MLEDIT_MEMO = 2003,
		ID_CTRL_SCR = 2004,
		BT_RECEIVE_NO = 2,
		ID_CTRL_BT_RECEIVE = 2010,
		ID_CTRL_BT_DISCARD = 2011,
		BT_SEND_NO = 4,
		ID_CTRL_BT_MONEY = 2020,
		ID_CTRL_BT_SEND = 2021,
		ID_CTRL_BT_TAX_SHOW = 2022,
		ID_CTRL_BT_TAX_HIDE = 2023,
		BT_QUICKSEND_NO = 4,
		ID_CTRL_BT_QUICK_MONEY = 2030,
		ID_CTRL_BT_QUICK_SEND = 2031,
		ID_CTRL_BT_QUICK_TAX_SHOW = 2032,
		ID_CTRL_BT_QUICK_TAX_HIDE = 2033
	};
	enum TAB_
	{
		TAB_RECEIVE = 0,
		TAB_SEND = 1,
		TAB_QUICKSEND = 2,
		TAB_NO = 3
	};
	enum MODE_
	{
		MODE_NPC = 0,
		MODE_QUICKSEND = 1,
		MODE_QUICKRECEIVE = 2
	};
	// Fields
protected:
	long m_nMode{};

protected:
	ZRef<CCtrlTab> m_pTab;

protected:
	long m_nCurTab{};

protected:
	ZRef<CCtrlOriginButton> m_pBtClose;

protected:
	std::array<ZRef<CCtrlOriginButton>, 2> m_pBtReceive;

protected:
	std::array<ZRef<CCtrlOriginButton>, 4> m_pBtSend;

protected:
	std::array<ZRef<CCtrlOriginButton>, 4> m_pBtQuickSend;

protected:
	ZRef<CCtrlEdit> m_pEditTarget;

protected:
	ZRef<CCtrlMLEdit> m_pMLEditMemo;

protected:
	ZRef<CCtrlScrollBar> m_pSB;

protected:
	int32_t m_bRequestSent{};

protected:
	CTabReceive *m_pTabReceive{};

protected:
	CTabSend *m_pTabSend{};

protected:
	CTabQuickSend *m_pTabQuickSend{};

protected:
	_x_com_ptr<IWzFont> m_pFontWhite;

protected:
	_x_com_ptr<IWzFont> m_pFontBlack;

protected:
	_x_com_ptr<IWzFont> m_pFontGray;

private:
	CLayoutMan m_lm;

private:
	CLayoutMan m_lmSub;
	// Methods
public:
	virtual ~CParcelDlg();

public:
	void _dtor_0();

public:
	CParcelDlg(const CParcelDlg &arg0);

public:
	void _ctor_1(const CParcelDlg &arg0);

public:
	CParcelDlg(long nMode);

public:
	void _ctor_0(long nMode);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void Update();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	void SetParcelDlg(CInPacket &iPacket);

public:
	void RemoveParcel(long nParcelSN);

public:
	long GetCurrentTab();

public:
	void SetCurrentTab(long arg0);

public:
	int32_t PutItem(GW_ItemSlotBase *pItem, long nTI, long nPOS);

public:
	void SetScrollBar(long nCount, long nCurPos);

public:
	void SetMode(long arg0);

protected:
	void OnTabChanged(long nTab);

protected:
	void SetMemo(ZXString<char> sMemo);

protected:
	void SetCtrl();

protected:
	void SetCtrlEnabled(int32_t bEnable);

protected:
	void CloseParcelDlg();

protected:
	void ResetSendInfo();

protected:
	void AddNewParcel(ZRef<PARCEL> p);

public:
	static void __cdecl OnPacket(CInPacket &iPacket);

public:
	static void __cdecl NoticeResult(long nResult);
	CLASS_RTTI_(CParcelDlg, CUniqueModeless);

public:
	void DrawMainBg(const wchar_t *sUOL);

public:
	void DrawSubBg(const wchar_t *sUOL);

public:
	CParcelDlg &operator=(const CParcelDlg &arg0);

public:
	static CParcelDlg &_op_assign_33(CParcelDlg *pThis, const CParcelDlg &arg0);
};
STATIC_ASSERT_SIZE(CParcelDlg, 344);
