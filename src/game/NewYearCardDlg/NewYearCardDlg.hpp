// NewYearCardDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "AdminShopDlg/AdminShopDlg.hpp"

// Level: 1 0x3ce0
class CUINewYearCardDlg;

class CUINewYearCardDlg : public CUniqueModeless
{
	// Nested
public:
	enum  ID_CTRL_
{
	ID_CTRL_BT_CLOSE = 0,
	ID_CTRL_EDIT_SENDER = 1,
	ID_CTRL_EDIT_TARGET = 2,
	ID_CTRL_MLEDIT_MEMO = 3
};

	// Fields
protected:
	ZXString<char> m_sSender;

protected:
	ZXString<char> m_sTarget;

protected:
	ZXString<char> m_sMemo;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZArray<ZXString<char>> m_aStrings;

protected:
	_x_com_ptr<IWzFont> m_pFont;
	// Methods
public:
	virtual ~CUINewYearCardDlg();

public:
	void _dtor_0();

public:
	CUINewYearCardDlg(const CUINewYearCardDlg &arg0);

public:
	void _ctor_1( const CUINewYearCardDlg &arg0);

public:
	CUINewYearCardDlg(ZXString<char> sFrom, ZXString<char> sTo, ZXString<char> sMemo);

public:
	void _ctor_0( ZXString<char> sFrom, ZXString<char> sTo, ZXString<char> sMemo);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	static void __cdecl ShowDlg(ZXString<char> sFrom, ZXString<char> sTo, ZXString<char> sMemo);

protected:
	void CloseDlg(int32_t nRetCode);

	CLASS_RTTI_(CUINewYearCardDlg, CUniqueModeless);

public:
	CUINewYearCardDlg &operator=(const CUINewYearCardDlg &arg0);

public:
	static CUINewYearCardDlg &_op_assign_12(CUINewYearCardDlg *pThis, const CUINewYearCardDlg &arg0);
};
STATIC_ASSERT_SIZE(CUINewYearCardDlg, 176);

