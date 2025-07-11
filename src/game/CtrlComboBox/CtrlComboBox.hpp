// CtrlComboBox.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "Wnd/Wnd.hpp"

class CCtrlEdit;
class CCtrlScrollBar;

// Level: 1 0x30e2
class CCtrlComboBoxSelect;
// Level: 1 0x1ab0
class CCtrlComboBox;

class CCtrlComboBoxSelect : public CCtrlWnd
{
	// Nested
	// Fields
protected:
	long m_nSelect{};

protected:
	long m_nSelectMax{};

protected:
	int32_t m_bDeleteEnable{};

protected:
	FONT_TYPE m_fTypeSelect;

protected:
	FONT_TYPE m_fTypeSelectFocused;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayer;

protected:
	long m_nTextOffset_Y{};

protected:
	CCtrlComboBox *m_pComboBox{};
	// Methods
public:
	virtual ~CCtrlComboBoxSelect();

public:
	void _dtor_0();

public:
	CCtrlComboBoxSelect(const CCtrlComboBoxSelect &arg0);

public:
	void _ctor_1(const CCtrlComboBoxSelect &arg0);

public:
	CCtrlComboBoxSelect(CCtrlComboBox *pComboBox, long nSelect, long nSelectMax, FONT_TYPE fTypeSelect, FONT_TYPE fTypeSelectFocused, long nTextOffset_Y, int32_t bDeleteEnable);

public:
	void _ctor_0(CCtrlComboBox *pComboBox, long nSelect, long nSelectMax, FONT_TYPE fTypeSelect, FONT_TYPE fTypeSelectFocused, long nTextOffset_Y, int32_t bDeleteEnable);

public:
	virtual void Draw(long rx, long ry, const tagRECT *pRect);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual int32_t OnMouseWheel(long rx, long ry, long nDelta);
	CLASS_RTTI_(CCtrlComboBoxSelect, CCtrlWnd);

public:
	CCtrlComboBoxSelect &operator=(const CCtrlComboBoxSelect &arg0);

public:
	static CCtrlComboBoxSelect &_op_assign_13(CCtrlComboBoxSelect *pThis, const CCtrlComboBoxSelect &arg0);
};
STATIC_ASSERT_SIZE(CCtrlComboBoxSelect, 84);
class CCtrlComboBox : public CCtrlWnd
{
	// Nested
public:
	struct ITEM_INFO
	{
		// Nested
		// Fields
	public:
		ZXString<char> sItemName;

	public:
		unsigned long dwParam{};
		// Methods
	public:
		~ITEM_INFO();

	public:
		void _dtor_0();

	public:
		ITEM_INFO(const CCtrlComboBox::ITEM_INFO &arg0);

	public:
		void _ctor_1(const CCtrlComboBox::ITEM_INFO &arg0);

	public:
		ITEM_INFO();

	public:
		void _ctor_0();

	public:
		CCtrlComboBox::ITEM_INFO &operator=(const CCtrlComboBox::ITEM_INFO &arg0);

	public:
		static CCtrlComboBox::ITEM_INFO &_op_assign_3(CCtrlComboBox::ITEM_INFO *pThis, const CCtrlComboBox::ITEM_INFO &arg0);
	};

public:
	struct CREATEPARAM
	{
		// Nested
	public:
		enum POSITIONTYPE
		{
			POS_TOP = 0,
			POS_BOTTOM = 1
		};
		// Fields
	public:
		long nBackColor{};

	public:
		long nBackFocusedColor{};

	public:
		long nBorderColor{};

	public:
		long nBoxPosX{};

	public:
		long nBoxPosY{};

	public:
		long nBoxWidth{};

	public:
		long nBoxTextLeftOffset{};

	public:
		long nDesign{};

	public:
		long nMaxItem_Shown{};

	public:
		long nType_ScrollBar{};

	public:
		unsigned long Id_ScrollBar{};

	public:
		FONT_TYPE fType{};

	public:
		FONT_TYPE fTypeFocused{};

	public:
		FONT_TYPE fTypeSelect{};

	public:
		FONT_TYPE fTypeSelectFocused{};

	public:
		int32_t bButtonOnLeft{};

	public:
		int32_t bAlwayFocusOnText{};

	public:
		int32_t bDeleteEnable{};

	public:
		long nItemListPosType{};

	public:
		Ztl_bstr_t sButtonUOL;

	public:
		long nTextOffSet_Y{};
		// Methods
	public:
		~CREATEPARAM();

	public:
		void _dtor_0();

	public:
		CREATEPARAM(const CCtrlComboBox::CREATEPARAM &arg0);

	public:
		void _ctor_1(const CCtrlComboBox::CREATEPARAM &arg0);

		CTOR_DEFAULT(CREATEPARAM)
	public:
		CREATEPARAM();

	public:
		void _ctor_0();


	public:
		CCtrlComboBox::CREATEPARAM &operator=(const CCtrlComboBox::CREATEPARAM &arg0);

	public:
		static CCtrlComboBox::CREATEPARAM &_op_assign_3(CCtrlComboBox::CREATEPARAM *pThis, const CCtrlComboBox::CREATEPARAM &arg0);
	};

public:
	enum COMBOBOX_STATE_
	{
		COMBOBOX_STATE_NORMAL = 0,
		COMBOBOX_STATE_PRESSED = 1,
		COMBOBOX_STATE_DISABLED = 2,
		COMBOBOX_STATE_MOUSEOVER = 3,
		COMBOBOX_STATE_SELECTED = 4
	};
	enum COMBOBOX_SPACE
	{
		COMBOBOX_SPACE = 16
	};
	enum COMBOBOX_DESIGN_
	{
		COMBOBOX_DESIGN_BUTTONONLY = 0,
		COMBOBOX_DESIGN_READONLY = 1,
		COMBOBOX_DESIGN_EDITABLE = 2
	};
	enum COMBOBOX_SELECT_TYPING
	{
		COMBOBOX_SELECT_TYPING = 255
	};
	// Fields
protected:
	ZList<CCtrlComboBox::ITEM_INFO> m_lItemInfo;

protected:
	ZRef<CCtrlComboBoxSelect> m_pCtrlCBS;

protected:
	ZRef<CCtrlEdit> m_pCtrlEdit;

protected:
	ZRef<CCtrlScrollBar> m_pCtrlScrollBar;

protected:
	long m_nType{};

protected:
	long m_nComboBoxState{};

protected:
	long m_nSelect{};

protected:
	long m_nPrevSelect{};

protected:
	long m_tBtClicked{};

protected:
	long m_nBackColor{};

protected:
	long m_nBackFocusedColor{};

protected:
	long m_nBorderColor{};

protected:
	FONT_TYPE m_fType{};

protected:
	FONT_TYPE m_fTypeFocused{};

protected:
	FONT_TYPE m_fTypeSelect{};

protected:
	FONT_TYPE m_fTypeSelectFocused{};

protected:
	long m_nBoxPosX{};

protected:
	long m_nBoxPosY{};

protected:
	long m_nBoxWidth{};

protected:
	long m_nBoxHeight{};

protected:
	long m_nBoxTextLeftOffset{};

protected:
	long m_nTextOffset_Y{};

protected:
	long m_nDesign{};

protected:
	long m_nMaxItem_Shown{};

protected:
	long m_nType_ScrollBar{};

protected:
	unsigned long m_Id_ScrollBar{};

protected:
	int32_t m_bButtonOnLeft{};

protected:
	int32_t m_bAlwaysFocusOnText{};

protected:
	int32_t m_bDeleteEnable{};

protected:
	Ztl_bstr_t m_sUOL;

protected:
	long m_ItemListPos{};

protected:
	std::array<_x_com_ptr<IWzCanvas>, 5> m_pCanvasButton{};

protected:
	std::array<_x_com_ptr<IWzCanvas>, 5> m_pCanvasCbStart{};

protected:
	std::array<_x_com_ptr<IWzCanvas>, 5> m_pCanvasCbLine{};

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzFont> m_pFontFocused;
	// Methods
public:
	virtual ~CCtrlComboBox();

public:
	void _dtor_0();

public:
	CCtrlComboBox(const CCtrlComboBox &arg0);

public:
	void _ctor_1(const CCtrlComboBox &arg0);

public:
	CCtrlComboBox();

public:
	void _ctor_0();


	void _ctor_default()
	{
		new(this) CCtrlComboBox();
	}

public:
	virtual void CreateCtrl(CWnd *pParent, uint32_t nId, long nType, long l, long t, long w, long h, void *pData);

public:
	virtual void Draw(long rx, long ry, const tagRECT *pRect);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void Update();

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t HitTest(long rx, long ry);

public:
	virtual void SetAbove(CCtrlWnd *pCtrl);

public:
	void AddItem(const char *sItemName, unsigned long dwParam);

public:
	void RemoveAllItems();

public:
	void GetComboBoxUOL(long nType, Ztl_bstr_t &m_sUOL);

public:
	ZXString<char> GetText();

public:
	ZList<CCtrlComboBox::ITEM_INFO> GetItemList();

public:
	long GetItemCount();

public:
	long GetCurSelect();

public:
	unsigned long GetItemParam(long nIdx);

public:
	void SetSelect(long nSelect);

public:
	void SetForcedSelect(long arg0);

public:
	void Delete(long nSelect);

public:
	void DeleteByParam(unsigned long dwParam, int32_t bOpenSelectWnd);

public:
	int32_t IsActivateComboBoxSelectWnd();

public:
	long GetComboBoxItemTotalHeight();

public:
	void RemoveSelectWnd();

protected:
	void MakeSelectWnd();

protected:
	void MakeScrollBar();

protected:
	void BtClicked();

protected:
	_x_com_ptr<IWzCanvas> GetButtonCanvas();

protected:
	_x_com_ptr<IWzCanvas> GetStartCanvas();

protected:
	_x_com_ptr<IWzCanvas> GetLineCanvas();

protected:
	int32_t IsItemExist();

	CLASS_RTTI_(CCtrlComboBox, CCtrlWnd);

public:
	CCtrlComboBox &operator=(const CCtrlComboBox &arg0);

public:
	static CCtrlComboBox &_op_assign_39(CCtrlComboBox *pThis, const CCtrlComboBox &arg0);
};
STATIC_ASSERT_SIZE(CCtrlComboBox, 272);

ZXString<char> __cdecl operator__char_char__144860(const char *s1, const ZXString<char> &s2);
