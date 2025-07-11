// TrunkDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "AdminShopDlg/AdminShopDlg.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "Packet/Packet.hpp"
#include "UIToolTip/UIToolTip.hpp"

// Level: 1 0x158ab
class CTrunkDlg;

class CTrunkDlg: public CUniqueModeless {
// Nested
public: struct ITEM {
// Nested
// Fields
	public:  long nItemID{};
	public:  long nStock{};
	public:  long nIdx{};
	public:  Ztl_bstr_t sItemName;
	public:  _x_com_ptr<IWzCanvas> pIcon;
	public:  ZRef<GW_ItemSlotBase> pItem;
// Methods
	public:    ~ITEM();
		public: void _dtor_0();
	public:    ITEM(const CTrunkDlg::ITEM& arg0);
		public: void _ctor_1( const CTrunkDlg::ITEM& arg0);
	public:    ITEM();
		public: void _ctor_0();
	public:   CTrunkDlg::ITEM& operator=(const CTrunkDlg::ITEM& __that);
		public: static CTrunkDlg::ITEM& _op_assign_3(CTrunkDlg::ITEM* pThis, const CTrunkDlg::ITEM& __that);
};
public: enum  ID_CTRL_ {
	ID_CTRL_BT_TRUNK_GET_ITEM = 1000,
	ID_CTRL_BT_TRUNK_PUT_ITEM = 1001,
	ID_CTRL_BT_TRUNK_SORT_ITEM = 1002,
	ID_CTRL_BT_TRUNK_GET_MONEY = 1003,
	ID_CTRL_BT_TRUNK_PUT_MONEY = 1004,
	ID_CTRL_TAB_TRUNK = 1005,
	ID_CTRL_SB_TRUNK_GET = 1006,
	ID_CTRL_SB_TRUNK_PUT = 1007
};
// Fields
	public:  ZRef<CCtrlTab> m_pTab;
	public:  ZRef<CCtrlScrollBar> m_pSBGet;
	public:  ZRef<CCtrlScrollBar> m_pSBPut;
	protected:  unsigned long m_dwNpcTemplateID{};
	protected:  long m_nCost_Get{};
	protected:  long m_nCost_Put{};
	protected:  ZArray<CTrunkDlg::ITEM> m_aGetItem;
	protected:  ZArray<CTrunkDlg::ITEM> m_aPutItem;
	protected:  ZArray<CTrunkDlg::ITEM> m_aSnapShot;
	protected:  _x_com_ptr<IWzFont> m_pFont;
	protected:  _x_com_ptr<IWzProperty> m_pImgFontNumber;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasSelect;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasEnable;
	protected:  long m_nGetSelected{};
	protected:  long m_nPutSelected{};
	protected:  long m_nSlotCount{};
	protected:  long m_nMoney{};
	protected:  long m_nSnapshotTI{};
	protected:  int32_t m_bTrunkRequestSent{};
	protected:  ZRef<CAvatar> m_pAvatar;
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerNPC;
	protected:  CUIToolTip m_uiToolTip;
	private:  CLayoutMan m_lm;
// Methods
	public:  virtual  ~CTrunkDlg();
		public: void _dtor_0();
	public:    CTrunkDlg(const CTrunkDlg& arg0);
		public: void _ctor_1( const CTrunkDlg& arg0);
	public:    CTrunkDlg();
		public: void _ctor_0();
	public:   void SetTrunkDlg(CInPacket& iPacket);
		public:  virtual void SetRet(long nRet);
		public:  virtual void ResetInfo();
		public:  virtual void OnCreate(void* arg0);
		public:  virtual int32_t HitTest(long rx, long ry, CCtrlWnd** ppCtrl);
		public:  virtual void Draw(const tagRECT* pRect);
		public:  virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);
		public:  virtual int32_t OnMouseMove(long rx, long ry);
		public:  virtual void OnMouseEnter(int32_t bEnter);
		public:  virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);
		public:  virtual void OnButtonClicked(uint32_t nId);
		public:  virtual void ClearToolTip();
		protected:   void OnTabChanged(long nTab);
		protected:   void SetGetItems(CInPacket& iPacket);
		protected:   void SetPutItems(long nTI, ZArray<CTrunkDlg::ITEM>& aItem);
		protected:   void SetScrollBar();
		protected:   void SetAvatar();
		protected:   void SetNPC();
		protected:  virtual void Update();
		protected:   void DrawGetItem(_x_com_ptr<IWzCanvas> pCanvas);
		protected:   void DrawPutItem(_x_com_ptr<IWzCanvas> pCanvas);
		protected:   void DrawMoney(_x_com_ptr<IWzCanvas> pCanvas, long nMoney, long nLeft);
		protected:   int32_t GetItemIndexFromPoint(long rx, long ry, int32_t* pbBuy, long* pnIdx);
		protected:   void SendGetItemRequest();
		protected:   void SendPutItemRequest();
		protected:   void SendSortItemRequest();
		protected:   void SendGetMoneyRequest();
		protected:   void SendPutMoneyRequest();
		protected:   long AskItemCount(const char* sMsg, long nDefault, long nMax);
		protected:   long CmpPutItem();
		public:  static void __cdecl OnPacket(CInPacket& iPacket);


		CLASS_RTTI_(CTrunkDlg, CUniqueModeless);

		public:   CTrunkDlg& operator=(const CTrunkDlg& arg0);
		public: static CTrunkDlg& _op_assign_37(CTrunkDlg* pThis, const CTrunkDlg& arg0);
};
STATIC_ASSERT_SIZE(CTrunkDlg, 2900);



