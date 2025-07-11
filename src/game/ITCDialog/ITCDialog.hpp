// ITCDialog.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Dialog/Dialog.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "ITC/ITC.hpp"
#include "GW/GW.hpp"

// Level: 1 0x22999
class CSelectLoadWishSaleListDlg;
// Level: 1 0x2290f
class CRegisterWishEntrySearchDlg;
// Level: 1 0x229e8
class CRegisterAuctionEntryDlg;
// Level: 1 0x22935
class CRegisterSaleEntryDlg;
// Level: 1 0x22985
class CRegisterWishEntryDlg;

class CSelectLoadWishSaleListDlg: public CDialog {
// Nested
public: enum  ID_CTRL_SCR {
	ID_CTRL_SCR = 1000
};
// Fields
	protected:  CITC* m_pITC;
	protected:  long m_nCurrentSelect{};
	protected:  long m_nCurrentCursor{};
	protected:  ZRef<CCtrlScrollBar> m_pSB;
	protected:  ZRef<CCtrlButton> m_pBtClose;
	protected:  CUIToolTip m_uiToolTip;
// Methods
	public:  virtual  ~CSelectLoadWishSaleListDlg();
		public: void _dtor_0();
	public:    CSelectLoadWishSaleListDlg(const CSelectLoadWishSaleListDlg& arg0);
		public: void _ctor_1( const CSelectLoadWishSaleListDlg& arg0);
	public:    CSelectLoadWishSaleListDlg(void* pData);
		public: void _ctor_0( void* pData);
	public:  virtual void OnCreate(void* pData);
		public:  virtual void OnDestroy();
		public:  virtual void Draw(const tagRECT* pRect);
		public:  virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);
		public:  virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);
		public:  virtual int32_t OnMouseMove(long rx, long ry);
		public:  virtual void OnButtonClicked(uint32_t nId);
		public:   void SetScrollBar();
		public:   CSelectLoadWishSaleListDlg& operator=(const CSelectLoadWishSaleListDlg& arg0);
		public: static CSelectLoadWishSaleListDlg& _op_assign_11(CSelectLoadWishSaleListDlg* pThis, const CSelectLoadWishSaleListDlg& arg0);
};
STATIC_ASSERT_SIZE(CSelectLoadWishSaleListDlg, 2804);
class CRegisterWishEntrySearchDlg: public CDialog {
// Nested
public: enum  ID_CTRL_ {
	ID_CTRL_SCR = 1000,
	ID_CTRL_BT_SEARCH = 1001,
	ID_CTRL_EDIT_SEARCH = 1002,
	ID_CTRL_COMBOBOX_NTI = 1003
};
// Fields
	protected:  CITC* m_pITC;
	protected:  long m_nCurrentSelect{};
	protected:  long m_nCurrentCursor{};
	protected:  ZRef<CCtrlScrollBar> m_pSB;
	protected:  ZRef<CCtrlButton> m_pBtSearch;
	protected:  ZRef<CCtrlButton> m_pBtClose;
	protected:  ZRef<CCtrlEdit> m_pEditSearch;
	protected:  ZRef<CCtrlComboBox> m_pCBnTI;
	protected:  ZArray<long> m_anItemIDResult;
	protected:  CUIToolTip m_uiToolTip;
// Methods
	public:  virtual  ~CRegisterWishEntrySearchDlg();
		public: void _dtor_0();
	public:    CRegisterWishEntrySearchDlg(const CRegisterWishEntrySearchDlg& arg0);
		public: void _ctor_1( const CRegisterWishEntrySearchDlg& arg0);
	public:    CRegisterWishEntrySearchDlg(void* pData);
		public: void _ctor_0( void* pData);
	public:  virtual void OnCreate(void* pData);
		public:  virtual void OnDestroy();
		public:  virtual void Draw(const tagRECT* pRect);
		public:  virtual void OnKey(uint32_t wParam, int32_t lParam);
		public:  virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);
		public:  virtual void OnButtonClicked(uint32_t nId);
		public:  virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);
		public:  virtual int32_t OnMouseMove(long rx, long ry);
		public:   void SetScrollBar();
		public:   CRegisterWishEntrySearchDlg& operator=(const CRegisterWishEntrySearchDlg& arg0);
		public: static CRegisterWishEntrySearchDlg& _op_assign_12(CRegisterWishEntrySearchDlg* pThis, const CRegisterWishEntrySearchDlg& arg0);
};
STATIC_ASSERT_SIZE(CRegisterWishEntrySearchDlg, 2832);
class CRegisterAuctionEntryDlg: public CDialog {
// Nested
public: enum  ID_CTRL_ {
	ID_CTRL_COMBOBOX_REGISTRATIONFEE = 1000,
	ID_CTRL_EDIT_REGISTRATIONDURATION = 1001,
	ID_CTRL_EDIT_BEGIN_PRICE = 1002,
	ID_CTRL_EDIT_END_PRICE = 1003,
	ID_CTRL_EDIT_NUMBER = 1004,
	ID_CTRL_COMBOBOX_BIDRANGE = 1005
};
enum  ID_CTRL_CB_REGISTRATIONFEE_ {
	ID_CTRL_CB_REGISTRATIONFEE_NXCASH = 0,
	ID_CTRL_CB_REGISTRATIONFEE_MESO = 1
};
// Fields
	protected:  long m_nRegisterFee{};
	protected:  long m_nBeginPriceContractFee{};
	protected:  long m_nEndPriceContractFee{};
	protected:  long m_nCommissionRate{};
	protected:  long m_nCommissionBase{};
	protected:  long m_nAuctionDurationMin{};
	protected:  long m_nAuctionDurationMax{};
	protected:  ZRef<CCtrlButton> m_pBtOK;
	protected:  ZRef<CCtrlButton> m_pBtCancel;
	protected:  ZRef<CCtrlEdit> m_pEditBeginPrice;
	protected:  ZRef<CCtrlEdit> m_pEditEndPrice;
	protected:  ZRef<CCtrlEdit> m_pEditDuration;
	protected:  ZRef<CCtrlEdit> m_pEditCount;
	protected:  ZRef<CCtrlComboBox> m_pBidRange;
	protected:  CITC* m_pITC;
	protected:  GW_ItemSlotBase* m_pItem;
// Methods
	public:  virtual  ~CRegisterAuctionEntryDlg();
		public: void _dtor_0();
	public:    CRegisterAuctionEntryDlg(const CRegisterAuctionEntryDlg& arg0);
		public: void _ctor_1( const CRegisterAuctionEntryDlg& arg0);
	public:    CRegisterAuctionEntryDlg(long nTI, GW_ItemSlotBase* pItem, void* pData);
		public: void _ctor_0( long nTI, GW_ItemSlotBase* pItem, void* pData);
	public:  virtual void SetRet(long nRet);
		public:  virtual void OnCreate(void* pData);
		public:  virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);
		public:  virtual void Draw(const tagRECT* pRect);
		public:  virtual void OnKey(uint32_t wParam, int32_t lParam);
		public:  static int32_t __cdecl Confirm(long nTI, GW_ItemSlotBase* pItem, void* pData, long& nBeginPrice, long& nEndPrice, long& nSaleCount, unsigned char& bSaleDuration, unsigned char& bRegisterFeeType, long& nBidRange);
		public:   CRegisterAuctionEntryDlg& operator=(const CRegisterAuctionEntryDlg& arg0);
		public: static CRegisterAuctionEntryDlg& _op_assign_9(CRegisterAuctionEntryDlg* pThis, const CRegisterAuctionEntryDlg& arg0);
};
STATIC_ASSERT_SIZE(CRegisterAuctionEntryDlg, 236);
class CRegisterSaleEntryDlg: public CDialog {
// Nested
public: 
enum  ID_CTRL_ {
	ID_CTRL_COMBOBOX_REGISTRATIONFEE = 1000,
	ID_CTRL_COMBOBOX_REGISTRATIONDURATION = 1001,
	ID_CTRL_EDIT_PRICE = 1002,
	ID_CTRL_EDIT_NUMBER = 1003
};
enum  ID_CTRL_CB_REGISTRATIONFEE_ {
	ID_CTRL_CB_REGISTRATIONFEE_NXCASH = 0,
	ID_CTRL_CB_REGISTRATIONFEE_MESO = 1
};
// Fields
	protected:  long m_nFee{};
	protected:  long m_nContractFee{};
	protected:  long m_nCommissionRate{};
	protected:  long m_nCommissionBase{};
	protected:  ZRef<CCtrlButton> m_pBtOK;
	protected:  ZRef<CCtrlButton> m_pBtCancel;
	protected:  ZRef<CCtrlEdit> m_pEditPrice;
	protected:  ZRef<CCtrlEdit> m_pEditCount;
	protected:  CITC* m_pITC;
	protected:  GW_ItemSlotBase* m_pItem;
// Methods
	public:  virtual  ~CRegisterSaleEntryDlg();
		public: void _dtor_0();
	public:    CRegisterSaleEntryDlg(const CRegisterSaleEntryDlg& arg0);
		public: void _ctor_1( const CRegisterSaleEntryDlg& arg0);
	public:    CRegisterSaleEntryDlg(long nTI, GW_ItemSlotBase* pItem, void* pData);
		public: void _ctor_0( long nTI, GW_ItemSlotBase* pItem, void* pData);
	public:  virtual void SetRet(long nRet);
		public:  virtual void OnCreate(void* pData);
		public:  virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);
		public:  virtual void Draw(const tagRECT* pRect);
		public:  virtual void OnKey(uint32_t wParam, int32_t lParam);
		public:  static int32_t __cdecl Confirm(long nTI, GW_ItemSlotBase* pItem, void* pData, long& nSalePrice, long& nSaleCount, unsigned char& bSaleDuration, unsigned char& bRegisterFeeType);
		public:   CRegisterSaleEntryDlg& operator=(const CRegisterSaleEntryDlg& arg0);
		public: static CRegisterSaleEntryDlg& _op_assign_9(CRegisterSaleEntryDlg* pThis, const CRegisterSaleEntryDlg& arg0);
};
STATIC_ASSERT_SIZE(CRegisterSaleEntryDlg, 200);
class CRegisterWishEntryDlg: public CDialog {
// Nested
public:enum  ID_CTRL_ {
	ID_CTRL_COMBOBOX_REGISTRATIONFEE = 1000,
	ID_CTRL_COMBOBOX_REGISTRATIONDURATION = 1001,
	ID_CTRL_EDIT_PRICE = 1002,
	ID_CTRL_EDIT_NUMBER = 1003,
	ID_CTRL_EDIT_DESC = 1004
};
enum  ID_CTRL_CB_REGISTRATIONFEE_ {
	ID_CTRL_CB_REGISTRATIONFEE_NXCASH = 0,
	ID_CTRL_CB_REGISTRATIONFEE_MESO = 1
};
// Fields
	protected:  long m_nFee{};
	protected:  long m_nContractFee{};
	protected:  long m_nCommissionRate{};
	protected:  long m_nCommissionBase{};
	protected:  ZRef<CCtrlButton> m_pBtOK;
	protected:  ZRef<CCtrlButton> m_pBtCancel;
	protected:  ZRef<CCtrlEdit> m_pEditPrice;
	protected:  ZRef<CCtrlEdit> m_pEditCount;
	protected:  ZRef<CCtrlEdit> m_pEditDesc;
	protected:  CITC* m_pITC;
	protected:  long m_nItemID{};
// Methods
	public:  virtual  ~CRegisterWishEntryDlg();
		public: void _dtor_0();
	public:    CRegisterWishEntryDlg(const CRegisterWishEntryDlg& arg0);
		public: void _ctor_1( const CRegisterWishEntryDlg& arg0);
	public:    CRegisterWishEntryDlg(long nItemID, void* pData);
		public: void _ctor_0( long nItemID, void* pData);
	public:  virtual void SetRet(long nRet);
		public:  virtual void OnCreate(void* pData);
		public:  virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);
		public:  virtual void Draw(const tagRECT* pRect);
		public:  virtual void OnKey(uint32_t wParam, int32_t lParam);
		public:  static int32_t __cdecl Confirm(long nItemID, void* pData, long& nSalePrice, long& nSaleCount, unsigned char& bSaleDuration, unsigned char& bRegisterFeeType, ZXString<char>& sDesc);
		public:   CRegisterWishEntryDlg& operator=(const CRegisterWishEntryDlg& arg0);
		public: static CRegisterWishEntryDlg& _op_assign_9(CRegisterWishEntryDlg* pThis, const CRegisterWishEntryDlg& arg0);
};
STATIC_ASSERT_SIZE(CRegisterWishEntryDlg, 208);






int32_t __cdecl CheckNumber(ZRef<CCtrlEdit> pEdit, long nMin, long nMax);
int32_t __cdecl IsNumber(ZRef<CCtrlEdit> pEdit, long nMin, long nMax, ZRef<CDialog> pChild);
