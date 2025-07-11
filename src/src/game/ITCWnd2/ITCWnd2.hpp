// ITCWnd2.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"

class CITC;
class CCtrlButton;
class CCtrlComboBox;
class CCtrlEdit;

// Level: 1 0x148ef
class CITCWnd_SubTab;
// Level: 1 0x148d8
class CITCWnd_Tab;

class CITCWnd_SubTab : public CWnd
{
	// Nested
public:
	enum ID_CTRL_BT_REGISTERWISHENTRY
	{
		ID_CTRL_BT_REGISTERWISHENTRY = 1000
	};
	enum ITC_SUBTAB_
	{
		ITC_SUBTAB_NO = 5,
		ITC_SUBTAB_MYPAGE_NO = 4
	};
	// Fields
protected:
	std::array<_x_com_ptr<IWzCanvas>, 5> m_pCanvasSubTab;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 4> m_pCanvasSubTabMyPage;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasSubTabHowTo;

protected:
	long m_nSubTab{};

protected:
	CITC *m_pITC{};

protected:
	ZRef<CCtrlButton> m_pBtRegister;

protected:
	std::array<std::array<_x_com_ptr<IWzCanvas>, 4>, 3> m_pCanvasSort;

protected:
	long m_nSortType{};

protected:
	long m_nSortColumn{};

protected:
	long m_tLastClickSort{};
	// Methods
public:
	virtual ~CITCWnd_SubTab();

public:
	void _dtor_0();

public:
	CITCWnd_SubTab(const CITCWnd_SubTab &arg0);

public:
	void _ctor_1(const CITCWnd_SubTab &arg0);

public:
	CITCWnd_SubTab();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	void SetSortInfo(long arg0, long arg1);

public:
	void ChangeSubCategory();

protected:
	long GetSubTabIndex(long rx, long ry);

public:
	CITCWnd_SubTab &operator=(const CITCWnd_SubTab &arg0);

public:
	static CITCWnd_SubTab &_op_assign_11(CITCWnd_SubTab *pThis, const CITCWnd_SubTab &arg0);
};
STATIC_ASSERT_SIZE(CITCWnd_SubTab, 244);
class CITCWnd_Tab : public CWnd
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_COMBOBOX_MAINCATEGORY = 1000,
		ID_CTRL_COMBOBOX_SUBCATEGORY = 1001,
		ID_CTRL_COMBOBOX_SEARCHOPTION = 1002,
		ID_CTRL_EDIT_SEARCH = 1003,
		ID_CTRL_BT_SEARCH = 1004
	};
	enum ID_CTRL_CB_MAIN_
	{
		ID_CTRL_CB_MAIN_SELL = 0,
		ID_CTRL_CB_MAIN_PURCHASE = 1,
		ID_CTRL_CB_MAIN_AUCTION = 2
	};
	enum ID_CTRL_CB_SUB_
	{
		ID_CTRL_CB_SUB_ALL = 0,
		ID_CTRL_CB_SUB_EQUIP = 1,
		ID_CTRL_CB_SUB_CONSUME = 2,
		ID_CTRL_CB_SUB_INSTALL = 3,
		ID_CTRL_CB_SUB_ETC = 4
	};
	enum ID_CTRL_CB_OP_
	{
		ID_CTRL_CB_OP_CHARACTERNAME = 0,
		ID_CTRL_CB_OP_ITEMNAME = 1
	};
	enum kUI_
	{
		kUI_ComboBox_MAIN_X = 6,
		kUI_ComboBox_MAIN_Y = 55,
		kUI_ComboBox_SUB_X = 82,
		kUI_ComboBox_SUB_Y = 55,
		kUI_ComboBox_OP_X = 217,
		kUI_ComboBox_OP_Y = 55,
		kUI_EDIT_SEARCH_X = 294,
		kUI_EDIT_SEARCH_Y = 55,
		kUI_Button_SEARCH_X = 462,
		kUI_Button_SEARCH_Y = 55
	};
	enum ITCW_TAB_NO
	{
		ITCW_TAB_NO = 5
	};

	// Fields
protected:
	ZRef<CCtrlComboBox> m_pCBSort;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 6> m_pCanvasTab;

protected:
	long m_nTab{};

protected:
	ZRef<CCtrlComboBox> m_pCBMainCategory;

protected:
	ZRef<CCtrlComboBox> m_pCBSubCategory;

protected:
	ZRef<CCtrlComboBox> m_pCBSearchOption;

protected:
	ZRef<CCtrlEdit> m_pEditSearch;

protected:
	ZRef<CCtrlButton> m_pBtSearch;

protected:
	unsigned char m_nMainCategory{};

protected:
	unsigned char m_nSubCategory{};

protected:
	unsigned char m_nSearchOption{};

protected:
	CITC *m_pITC{};
	// Methods
public:
	virtual ~CITCWnd_Tab();

public:
	void _dtor_0();

public:
	CITCWnd_Tab(const CITCWnd_Tab &arg0);

public:
	void _ctor_1(const CITCWnd_Tab &arg0);

public:
	CITCWnd_Tab();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	void ChangeCategory();

public:
	void SetSearchEdit(ZXString<char> sMsg);

protected:
	long GetTabIndex(long rx, long ry);

public:
	CITCWnd_Tab &operator=(const CITCWnd_Tab &arg0);

public:
	static CITCWnd_Tab &_op_assign_11(CITCWnd_Tab *pThis, const CITCWnd_Tab &arg0);
};
STATIC_ASSERT_SIZE(CITCWnd_Tab, 212);
