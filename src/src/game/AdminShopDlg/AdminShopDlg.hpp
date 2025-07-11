// AdminShopDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "DBBasic/DBBasic.hpp"
#include "Exception/Exception.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "Packet/Packet.hpp"
#include "Dialog/Dialog.hpp"
#include "GW/GW.hpp"
#include "DraggableItem/DraggableItem.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "UIToolTip/UIToolTip.hpp"

// Extra
class CCtrlButton;
class CCtrlTab;
class CCtrlScrollBar;
class CAvatar;



class CAdminShopDlg : public CUniqueModeless
{
	// Nested
public:
	struct AdminShopCommodity : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		TSecType<long> nSN;

	public:
		TSecType<long> nItemID;

	public:
		long nPos{};

	public:
		long nStock{};

	public:
		long nPrice{};

	public:
		long nAbsPrice{};

	public:
		long nMaxPerSlot{};

	public:
		unsigned char nSaleState{};

	public:
		ZXString<char> sItemName;

	public:
		_x_com_ptr<IWzCanvas> pItemIcon;

	public:
		_x_com_ptr<IWzCanvas> pItemNonSaleIcon;

	public:
		ZRef<GW_ItemSlotBase> pItem;
		// Methods
	public:
		virtual ~AdminShopCommodity();

	public:
		void _dtor_0();

	public:
		AdminShopCommodity(const CAdminShopDlg::AdminShopCommodity &arg0);

	public:
		void _ctor_1(const CAdminShopDlg::AdminShopCommodity &arg0);

	public:
		AdminShopCommodity();

	public:
		void _ctor_0();

	public:
		CAdminShopDlg::AdminShopCommodity &operator=(CAdminShopDlg::AdminShopCommodity &__that);

	public:
		static CAdminShopDlg::AdminShopCommodity &_op_assign_3(CAdminShopDlg::AdminShopCommodity *pThis, CAdminShopDlg::AdminShopCommodity &__that);
	};

public:
	enum ID_CTRL_
	{
		ID_CTRL_BT_SHOP_BUY = 1000,
		ID_CTRL_BT_SHOP_SELL = 1001,
		ID_CTRL_TAB_SHOP_NPC = 1002,
		ID_CTRL_TAB_SHOP_USER = 1003,
		ID_CTRL_SB_SHOP_NPC = 1004,
		ID_CTRL_SB_SHOP_USER = 1005
	};
	enum UnnamedEnum60737
	{
		NONE_PANNEL = 255,
		NPC_PANNEL = 0,
		USER_PANNEL = 1
	};
	enum AdminShopNpcID
	{
		AdminShopNpcID = 2084001
	};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtExit;

protected:
	ZRef<CCtrlButton> m_pBtBuy;

protected:
	ZRef<CCtrlButton> m_pBtSell;

protected:
	ZRef<CCtrlTab> m_pTabNPC;

protected:
	ZRef<CCtrlTab> m_pTabUser;

protected:
	ZRef<CCtrlScrollBar> m_pSBNPC;

protected:
	ZRef<CCtrlScrollBar> m_pSBUser;

protected:
	long m_dwNpcTemplateID{};

protected:
	ZRef<CAvatar> m_pAvatar;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerNPC;

protected:
	ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>> m_aNPCBuyItem;

protected:
	ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>> m_aNPCSellItem;

protected:
	ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>> m_aUserSellItem;

protected:
	ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>> m_aSnapShot;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzFont> m_pNonSaleFont;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasSelect;

protected:
	CUIToolTip m_uiToolTip;

protected:
	std::array<long, 2> m_anNPCStartIdx{};

protected:
	long m_nPannelSelected{};

protected:
	long m_nNPCSelected{};

protected:
	long m_nUserSelected{};

protected:
	long m_nSnapshotTI{};

protected:
	int32_t m_bShopRequestSent{};

protected:
	int32_t m_bAskItemWishList{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CAdminShopDlg();

public:
	void _dtor_0();

public:
	CAdminShopDlg(const CAdminShopDlg &arg0);

public:
	void _ctor_1(const CAdminShopDlg &arg0);

public:
	CAdminShopDlg();

public:
	void _ctor_0();

public:
	static void __cdecl OnPacket(long nType, CInPacket &iPacket);

public:
	void SetAdminShopDlg(CInPacket &iPacket, unsigned long dwNpcTemplateID, long nCommodityCount);

public:
	virtual void SetRet(long nRet);

public:
	virtual void ResetInfo();

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void ClearToolTip();

protected:
	void OnTabChanged(long nTab);

protected:
	void SetUserItems(long nTI, ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>> &aCommodity);

protected:
	void SetScrollBar();

protected:
	void SetAvatar();

protected:
	void SetNPC();

protected:
	virtual void Update();

protected:
	void DrawNPCItem(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	void DrawUserItem(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	void DrawMoney(_x_com_ptr<IWzCanvas> pCanvas, long nMoney);

protected:
	int32_t GetItemIndexFromPoint(long rx, long ry, int32_t *pbNPC, long *pnIdx);

protected:
	ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>> &GetCurNPCItem();

protected:
	long AskItemCount(const char *sMsg, long nDefault, long nMax);

protected:
	long CmpSellItem();

protected:
	void SendTradeRequest();
	CLASS_RTTI_(CAdminShopDlg, CUniqueModeless);

public:
	CAdminShopDlg &operator=(const CAdminShopDlg &arg0);

public:
	static CAdminShopDlg &_op_assign_34(CAdminShopDlg *pThis, const CAdminShopDlg &arg0);
};
STATIC_ASSERT_SIZE(CAdminShopDlg, 2936);

long __cdecl make_act_dir(long a, int32_t bLeft);
GW_ItemSlotEquip *__cdecl rc_equip(GW_ItemSlotBase *p);
