// StoreBankDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "AdminShopDlg/AdminShopDlg.hpp"
#include "Packet/Packet.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "LayoutMan/LayoutMan.hpp"

// Level: 1 0x15ae6
class CStoreBankDlg;

class CStoreBankDlg: public CUniqueModeless {
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
	public:    ITEM(const CStoreBankDlg::ITEM& arg0);
		public: void _ctor_1( const CStoreBankDlg::ITEM& arg0);
	public:    ITEM();
		public: void _ctor_0();
	public:   CStoreBankDlg::ITEM& operator=(const CStoreBankDlg::ITEM& __that);
		public: static CStoreBankDlg::ITEM& _op_assign_3(CStoreBankDlg::ITEM* pThis, const CStoreBankDlg::ITEM& __that);
};

public:
enum ID_CTRL_
{
	ID_CTRL_BT_STOREBANK_GET = 1000,
	ID_CTRL_SB_STOREBANK_GET = 1001
};
// Fields
	public:  ZRef<CCtrlButton> m_pBtGet;
	public:  ZRef<CCtrlScrollBar> m_pSBGet;
	protected:  unsigned long m_dwNpcTemplateID{};
	protected:  ZArray<CStoreBankDlg::ITEM> m_aItem;
	protected:  _x_com_ptr<IWzFont> m_pFont;
	protected:  _x_com_ptr<IWzProperty> m_pImgFontNumber;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasEnable;
	protected:  long m_nSlotCount{};
	protected:  long m_nMoney{};
	protected:  int32_t m_bRequestSent{};
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerNPC;
	protected:  _x_com_ptr<IWzCanvas> m_pCashIcon;
	private:  CLayoutMan m_lm;
// Methods
	public:  virtual  ~CStoreBankDlg();
		public: void _dtor_0();
	public:    CStoreBankDlg(const CStoreBankDlg& arg0);
		public: void _ctor_1( const CStoreBankDlg& arg0);
	public:    CStoreBankDlg();
		public: void _ctor_0();
	public:   void SetStoreBankDlg(CInPacket& iPacket);
		public:  virtual void SetRet(long nRet);
		public:  virtual void ResetInfo();
		public:  virtual void OnCreate(void* pData);
		public:  virtual int32_t HitTest(long rx, long ry, CCtrlWnd** ppCtrl);
		public:  virtual void Draw(const tagRECT* pRect);
		public:  virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);
		public:  virtual void OnButtonClicked(uint32_t nId);
		protected:   void OnTabChanged(long nRet);
		protected:   void SetItems(CInPacket& iPacket);
		protected:   void SetScrollBar();
		protected:   void SetNPC();
		protected:   void DrawGetItem(_x_com_ptr<IWzCanvas> pCanvas);
		protected:   void DrawMoney(_x_com_ptr<IWzCanvas> pCanvas, long nMoney, long nLeft);
		protected:   int32_t GetItemIndexFromPoint(long arg0, long arg1);
		protected:   void SendCalculateFeeRequest();
		protected:   void SendGetAllRequest(long nPassingDay, long nFee);
		protected:   void SendExitRequest();
		protected:   void RemoveAll();
		public:  static void __cdecl OnPacket(long nType, CInPacket& iPacket);


		CLASS_RTTI_(CStoreBankDlg, CUniqueModeless);

		public:   CStoreBankDlg& operator=(const CStoreBankDlg& arg0);
		public: static CStoreBankDlg& _op_assign_26(CStoreBankDlg* pThis, const CStoreBankDlg& arg0);
};
STATIC_ASSERT_SIZE(CStoreBankDlg, 224);
