// RepairDurabilityDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIToolTip/UIToolTip.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "GW/GW.hpp"

// Level: 1 0x13eef
class CRepairDurabilityDlg;

class CRepairDurabilityDlg: public CUniqueModeless {
// Nested
public: struct ITEM {
// Nested
// Fields
	public:  long nItemID{};
	public:  long nPOS{};
	public:  long nStock{};
	public:  long nIdx{};
	public:  Ztl_bstr_t sItemName;
	public:  _x_com_ptr<IWzCanvas> pIcon;
	public:  ZRef<GW_ItemSlotEquip> pEquip;
	public:  long nMaxDurability{};
// Methods
	public:    ~ITEM();
		public: void _dtor_0();
	public:    ITEM(const CRepairDurabilityDlg::ITEM& arg0);
		public: void _ctor_1( const CRepairDurabilityDlg::ITEM& arg0);
	public:    ITEM();
		public: void _ctor_0();
	public:   CRepairDurabilityDlg::ITEM& operator=(const CRepairDurabilityDlg::ITEM& __that);
		public: static CRepairDurabilityDlg::ITEM& _op_assign_3(CRepairDurabilityDlg::ITEM* pThis, const CRepairDurabilityDlg::ITEM& __that);
};
public: enum  ID_CTRL_ {
	ID_CTRL_BT_REPAIR_ALL = 1000,
	ID_CTRL_BT_REPAIR = 1001,
	ID_CTRL_SB = 1002
};
// Fields
	public:  ZRef<CCtrlButton> m_pBtRepairAll;
	public:  ZRef<CCtrlButton> m_pBtRepair;
	public:  ZRef<CCtrlButton> m_pBtClose;
	public:  ZRef<CCtrlScrollBar> m_pSB;
	private:  unsigned long m_dwNpcTemplateID{};
	private:  ZArray<CRepairDurabilityDlg::ITEM> m_aItem;
	private:  _x_com_ptr<IWzFont> m_pFont;
	private:  _x_com_ptr<IWzProperty> m_pImgFontNumber;
	private:  _x_com_ptr<IWzCanvas> m_pCanvasSelected;
	private:  long m_nItemCount{};
	private:  long m_nMoney{};
	private:  long m_nSelectedIdx{};
	private:  _x_com_ptr<IWzGr2DLayer> m_pLayerNPC;
	private:  _x_com_ptr<IWzCanvas> m_pCashIcon;
	private:  CUIToolTip m_uiToolTip;
	private:  CLayoutMan m_lm;
// Methods
	public:  virtual  ~CRepairDurabilityDlg();
		public: void _dtor_0();
	public:    CRepairDurabilityDlg(const CRepairDurabilityDlg& arg0);
		public: void _ctor_1( const CRepairDurabilityDlg& arg0);
	public:    CRepairDurabilityDlg(unsigned long dwNpcTemplateID);
		public: void _ctor_0( unsigned long dwNpcTemplateID);
	public:  virtual void ResetInfo();
		public:  virtual void OnCreate(void* pData);
		public:  virtual int32_t OnMouseMove(long rx, long ry);
		public:  virtual void OnMouseEnter(int32_t bEnter);
		public:  virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);
		public:  virtual int32_t HitTest(long rx, long ry, CCtrlWnd** ppCtrl);
		public:  virtual void Draw(const tagRECT* pRect);
		public:  virtual void ClearToolTip();
		public:  virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);
		public:  virtual void OnButtonClicked(uint32_t nId);
		private:   void SetItems();
		private:   void AddItem(GW_ItemSlotBase* pItem, long nPOS);
		private:   void ResetRepairPay();
		private:   void SetScrollBar();
		private:   void SetNPC();
		private:   void DrawItem(_x_com_ptr<IWzCanvas> pCanvas);
		private:   void DrawMoney(_x_com_ptr<IWzCanvas> pCanvas, long nMoney, long nLeft);
		private:   long GetItemIndexFromPoint(long rx, long ry);
		private:   void SendRepairDurabilityAll();
		private:   void SendRepairDurability();
		private:   void RemoveAll();
		CLASS_RTTI_(CRepairDurabilityDlg, CUniqueModeless);
		public:   CRepairDurabilityDlg& operator=(const CRepairDurabilityDlg& arg0);
		public: static CRepairDurabilityDlg& _op_assign_27(CRepairDurabilityDlg* pThis, const CRepairDurabilityDlg& arg0);
};
STATIC_ASSERT_SIZE(CRepairDurabilityDlg, 2872);



