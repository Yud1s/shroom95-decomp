// MessageBoxDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Dialog/Dialog.hpp"

// Level: 1 0x13fb1
class CMessageBoxDlg;

class CMessageBoxDlg: public CDialog {
// Nested
// Fields
	protected:  long m_nItemID{};
	protected:  ZXString<char> m_sHope;
	protected:  ZXString<char> m_sCharacterName;
	protected:  _x_com_ptr<IWzFont> m_pFontHope;
	protected:  _x_com_ptr<IWzFont> m_pFontName1;
	protected:  _x_com_ptr<IWzFont> m_pFontName2;
	protected:  ZRef<CCtrlButton> m_pBtClose;
// Methods
	public:  virtual  ~CMessageBoxDlg();
		public: void _dtor_0();
	public:    CMessageBoxDlg(const CMessageBoxDlg& arg0);
		public: void _ctor_1( const CMessageBoxDlg& arg0);
	public:    CMessageBoxDlg(ZXString<char> sHope, ZXString<char> sCharacterName, long nItemID);
		public: void _ctor_0( ZXString<char> sHope, ZXString<char> sCharacterName, long nItemID);
	public:  virtual void OnCreate(void* pData);
		public:  virtual void Draw(const tagRECT* pRect);
		public:  virtual void OnButtonClicked(uint32_t nId);
		public:   CMessageBoxDlg& operator=(const CMessageBoxDlg& arg0);
		public: static CMessageBoxDlg& _op_assign_6(CMessageBoxDlg* pThis, const CMessageBoxDlg& arg0);
};
STATIC_ASSERT_SIZE(CMessageBoxDlg, 176);


