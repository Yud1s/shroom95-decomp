// ShopDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "Packet/Packet.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "UIToolTip/UIToolTip.hpp"

// Level: 1 0x20915
class CShopDlg;

class CShopDlg : public CUniqueModeless
{
	// Nested
public:
	struct ITEM
	{
		// Nested
		// Fields
	public:
		TSecType<long> nItemID;

	public:
		long nPos{};

	public:
		Ztl_bstr_t sItemName;

	public:
		_x_com_ptr<IWzCanvas> pIcon;

	public:
		long nPrice{};

	public:
		long nDiscountRate{};

	public:
		long nTokenItemID{};

	public:
		long nTokenPrice{};

	public:
		long nItemPeriod{};

	public:
		long nLevelLimited{};

	public:
		double dUnitPrice{};

	public:
		long nMaxPerSlot{};

	public:
		long nStock{};

	public:
		long nQuantity{};

	public:
		ZRef<GW_ItemSlotBase> pItem;
		// Methods
	public:
		~ITEM();

	public:
		void _dtor_0();

	public:
		ITEM(const CShopDlg::ITEM &arg0);

	public:
		void _ctor_1( const CShopDlg::ITEM &arg0);

	public:
		ITEM();

	public:
		void _ctor_0();

	public:
		CShopDlg::ITEM &operator=(CShopDlg::ITEM &__that);

	public:
		static CShopDlg::ITEM &_op_assign_3(CShopDlg::ITEM *pThis, CShopDlg::ITEM &__that);
	};

public:
	enum  ID_CTRL_
{
	ID_CTRL_BT_SHOP_BUY = 1000,
	ID_CTRL_BT_SHOP_SELL = 1001,
	ID_CTRL_TAB_SHOP_BUY = 1002,
	ID_CTRL_TAB_SHOP_SELL = 1003,
	ID_CTRL_SB_SHOP_BUY = 1004,
	ID_CTRL_SB_SHOP_SELL = 1005,
	ID_CTRL_BT_SHOP_RECHARGE = 2000
};
	// Fields
public:
	ZRef<CCtrlButton> m_pBtExit;

public:
	ZRef<CCtrlButton> m_pBtBuy;

public:
	ZRef<CCtrlButton> m_pBtSell;

public:
	ZRef<CCtrlTab> m_pTabBuy;

public:
	ZRef<CCtrlTab> m_pTabSell;

public:
	ZArray<ZRef<CCtrlButton>> m_apBtRecharge;

public:
	ZRef<CCtrlScrollBar> m_pSBBuy;

public:
	ZRef<CCtrlScrollBar> m_pSBSell;

protected:
	long m_dwNpcTemplateID{};

protected:
	int32_t m_bCashNpc{};

protected:
	ZArray<CShopDlg::ITEM> m_aBuyItem;

protected:
	ZArray<CShopDlg::ITEM> m_aBuyItem_Recommended;

protected:
	ZArray<long> m_anOriginalIndex;

protected:
	ZArray<CShopDlg::ITEM> m_aRechargeItem;

protected:
	ZArray<CShopDlg::ITEM> m_aSellItem;

protected:
	ZArray<CShopDlg::ITEM> m_aSnapShot;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasSelect;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasMeso;

protected:
	long m_nBuySelected{};

protected:
	long m_nSellSelected{};

protected:
	long m_nSnapshotTI{};

protected:
	int32_t m_bShopRequestSent{};

protected:
	long m_nLastSellIdx{};

protected:
	long m_nLastTab_Buy{};

protected:
	std::array<long, 2> m_anBuyStartIdx{};

protected:
	ZRef<CAvatar> m_pAvatar;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerNPC;

protected:
	CUIToolTip m_uiToolTip;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CShopDlg();

public:
	void _dtor_0();

public:
	CShopDlg(const CShopDlg &arg0);

public:
	void _ctor_1( const CShopDlg &arg0);

public:
	CShopDlg();

public:
	void _ctor_0();

public:
	void SetShopDlg(CInPacket &arg0);

public:
	virtual void SetRet(long nRet);

public:
	virtual void ResetInfo();

public:
	virtual void OnCreate(void *arg0);

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
	void SetSellItems(long nTI, ZArray<CShopDlg::ITEM> &aItem);

protected:
	void SetScrollBar();

protected:
	void SetAvatar();

protected:
	void SetNPC();

protected:
	virtual void Update();

protected:
	void DrawBuyItem(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	void DrawSellItem(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	void DrawMoney(_x_com_ptr<IWzCanvas> pCanvas, long nMoney);

protected:
	int32_t GetItemIndexFromPoint(long rx, long ry, int32_t *pbBuy, long *pnIdx);

protected:
	void SendBuyRequest();

protected:
	void SendSellRequest();

protected:
	void SendRechargeRequest();

protected:
	long AskItemCount(const char *sMsg, long nDefault, long nMax);

protected:
	long CmpSellItem();

protected:
	ZArray<CShopDlg::ITEM> &GetCurBuyItem();

protected:
	long GetDiscountPrice(long nPrice, long nItemID);

protected:
	long GetDiscountPriceByItem(long nPrice, long nItemID);

protected:
	long GetDiscountPriceByGuildSkill(long nPrice);

protected:
	long GetOverchargePrice(long nPrice);

protected:
	long GetDiscountPriceByRate(long nPrice, long nDiscountRate);

public:
	static void __cdecl OnPacket(long nType, CInPacket &iPacket);

	CLASS_RTTI_(CShopDlg, CUniqueModeless);

public:
	CShopDlg &operator=(const CShopDlg &arg0);

public:
	static CShopDlg &_op_assign_41(CShopDlg *pThis, const CShopDlg &arg0);
};
STATIC_ASSERT_SIZE(CShopDlg, 2952);


