// MemoListDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Dialog/Dialog.hpp"
#include "LayoutMan/LayoutMan.hpp"

class CCtrlScrollBar;

// Level: 1 0x14c3c
class CMemoListDlg;

class CMemoListDlg: public CDialog {
// Nested
public: struct MEMO {
// Nested
// Fields
	public:  int32_t bCheck{};
	public:  long nYPos{};
	public:  unsigned long dwSN{};
	public:  Ztl_bstr_t bsSender;
	public:  ZXString<char> sTime;
	public:  ZArray<Ztl_bstr_t> absContent;
	public:  long nFlag{};
// Methods
	public:    ~MEMO();
		public: void _dtor_0();
	public:    MEMO(const CMemoListDlg::MEMO& arg0);
		public: void _ctor_1( const CMemoListDlg::MEMO& arg0);
	public:    MEMO();
		public: void _ctor_0();
	public:   CMemoListDlg::MEMO& operator=(const CMemoListDlg::MEMO& arg0);
		public: static CMemoListDlg::MEMO& _op_assign_3(CMemoListDlg::MEMO* pThis, const CMemoListDlg::MEMO& arg0);
};
// Fields
	protected:  ZRef<CCtrlScrollBar> m_pSBList;
	protected:  _x_com_ptr<IWzProperty> m_pProp;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasTop;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasCenter;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasBottom;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasLine;
	protected:  _x_com_ptr<IWzFont> m_pFontCount;
	protected:  _x_com_ptr<IWzFont> m_pFontCountBold;
	protected:  _x_com_ptr<IWzFont> m_pFontSender;
	protected:  _x_com_ptr<IWzFont> m_pFontContent;
	protected:  _x_com_ptr<IWzFont> m_pFontFlagMessage;
	protected:  ZArray<CMemoListDlg::MEMO> m_aMemo;
	private:  CLayoutMan m_lm;
// Methods
	public:  virtual  ~CMemoListDlg();
		public: void _dtor_0();
	public:    CMemoListDlg(const CMemoListDlg& arg0);
		public: void _ctor_1( const CMemoListDlg& arg0);
	public:    CMemoListDlg(const ZList<GW_Memo>& lMemo);
		public: void _ctor_0( const ZList<GW_Memo>& lMemo);
	public:  virtual void OnCreate(void* pData);
		public:  virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);
		public:  virtual void Draw(const tagRECT* pRect);
		public:  virtual void OnButtonClicked(uint32_t nId);
		public:  virtual void SetRet(long nRet);
		protected:   void DrawMemo(_x_com_ptr<IWzCanvas> pCanvas, const CMemoListDlg::MEMO& m, long y, int32_t bIsLast);
		public:   CMemoListDlg& operator=(const CMemoListDlg& arg0);
		public: static CMemoListDlg& _op_assign_9(CMemoListDlg* pThis, const CMemoListDlg& arg0);
};
STATIC_ASSERT_SIZE(CMemoListDlg, 216);


