// CtrlButton.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIToolTip/UIToolTip.hpp"
#include "Wnd/Wnd.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

// Level: 1 0x1976
class CCtrlCheckBox;
// Level: 1 0x18fc
class CCtrlButton;
// Level: 2 0x1999
class CCtrlButtonWithAniState;
// Level: 2 0x193f
class CCtrlOriginButton;

class CCtrlCheckBox : public CCtrlWnd
{
	// Nested
public:
	struct CREATEPARAM
	{
		// Nested
		// Fields
	public:
		int32_t bAcceptFocus{};

	public:
		long nBackColor{};

	public:
		ZXString<char> sText;

	public:
		Ztl_bstr_t sFont;

	public:
		long nFontHeight{};

	public:
		long nFontColor{};

	public:
		wchar_t *sStyleFont{};

	public:
		long nWidth{};

	public:
		long nHeight{};

	public:
		int32_t bDrawLineAtFocus{};

	public:
		int32_t nArrange{};

	public:
		long nTextOffsetX{};

	public:
		long nTextOffsetY{};
		// Methods
	public:
		~CREATEPARAM();

	public:
		void _dtor_0();

	public:
		CREATEPARAM(const CCtrlCheckBox::CREATEPARAM &arg0);

	public:
		void _ctor_1(const CCtrlCheckBox::CREATEPARAM &arg0) const;

		CTOR_DEFAULT(CREATEPARAM)
	public:
		CREATEPARAM();

	public:
		void _ctor_0();

	public:
		CCtrlCheckBox::CREATEPARAM &operator=(const CCtrlCheckBox::CREATEPARAM &arg0);

	public:
		static CCtrlCheckBox::CREATEPARAM &_op_assign_3(CCtrlCheckBox::CREATEPARAM *pThis, const CCtrlCheckBox::CREATEPARAM &arg0);
	};

public:
	enum CHECKBOX_
	{
		CHECKBOX_UNCHECKED = 0,
		CHECKBOX_CHECKED = 1,
		CHECKBOX_UNCHECKED_DISABLED = 2,
		CHECKBOX_CHECKED_DISABLED = 3
	};
	// Fields
protected:
	int32_t m_nCheckBoxState{};

protected:
	int32_t m_nArrange{};

protected:
	long m_nBackColor{};

protected:
	long m_nFontColor{};

protected:
	ZXString<char> m_sText;

protected:
	int32_t m_bChecked{};

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzFont> m_pFontDisabled;

protected:
	int32_t m_nFontHeight{};

protected:
	int32_t m_bDrawLineAtFocus{};

protected:
	std::array<_x_com_ptr<IWzCanvas>, 4> m_apCanvasCheckBox{};

private:
	long m_nTextOffsetX{};

private:
	long m_nTextOffsetY{};
	// Methods
public:
	virtual ~CCtrlCheckBox();

public:
	void _dtor_0();

public:
	CCtrlCheckBox(const CCtrlCheckBox &arg0);

public:
	void _ctor_1(const CCtrlCheckBox &arg0) const;

public:
	CCtrlCheckBox();

public:
	void _ctor_0();
	void _ctor_default()
	{
		new(this) CCtrlCheckBox();
	}

public:
	virtual void CreateCtrl(CWnd *pParent, uint32_t nId, long l, long t, void *pData);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseWheel(long rx, long ry, long nWheel);

public:
	virtual void Draw(long rx, long ry, const tagRECT *pRect);

public:
	virtual void SetEnable(int32_t bEnable);

public:
	void SetChecked(int32_t bChecked);

public:
	int32_t IsChecked() const;

public:
	void SetText(ZXString<char> arg0);

protected:
	void ChangeCheckBoxState();

protected:
	void MouseDown();

protected:
	void MouseUp();

	CLASS_RTTI_(CCtrlCheckBox, CCtrlWnd);

public:
	CCtrlCheckBox &operator=(const CCtrlCheckBox &arg0);

public:
	static CCtrlCheckBox &_op_assign_18(CCtrlCheckBox *pThis, const CCtrlCheckBox &arg0);
};
STATIC_ASSERT_SIZE(CCtrlCheckBox, 116);
class CCtrlButton : public CCtrlWnd
{
	// Nested
public:
	struct CREATEPARAM
	{
		// Nested
		// Fields
	public:
		int32_t bAcceptFocus{};

	public:
		int32_t bDrawBack{};

	public:
		int32_t bAnimateOnce{};

	public:
		ZXString16 sUOL;
		// Methods
		CTOR_DEFAULT(CREATEPARAM)
	public:
		~CREATEPARAM();

	public:
		void _dtor_0();

	public:
		CREATEPARAM(const CCtrlButton::CREATEPARAM &arg0);

	public:
		void _ctor_1(const CCtrlButton::CREATEPARAM &arg0) const;

	public:
		CREATEPARAM();

	public:
		void _ctor_0();

	public:
		CCtrlButton::CREATEPARAM &operator=(const CCtrlButton::CREATEPARAM &arg0);

	public:
		static CCtrlButton::CREATEPARAM &_op_assign_3(CCtrlButton::CREATEPARAM *pThis, const CCtrlButton::CREATEPARAM &arg0);
	};

protected:
	static CCtrlButton *m_pButtonEntered;

public:
	enum BUTTON_STATE_
	{
		BUTTON_STATE_NORMAL = 0,
		BUTTON_STATE_PRESSED = 1,
		BUTTON_STATE_DISABLED = 2,
		BUTTON_STATE_MOUSEOVER = 3,
		BUTTON_STATE_NO = 4
	};
	// Fields
protected:
	int32_t m_nDisplayState{};

protected:
	int32_t m_nDisplayFrame{};

protected:
	int32_t m_nAniCount{};

protected:
	int32_t m_nAniDelay{};

protected:
	unsigned long m_dwDisplayStarted{};

protected:
	int32_t m_bMouseEnter{};

protected:
	int32_t m_nDecClickArea{};

protected:
	int32_t m_bPressed{};

protected:
	int32_t m_bPressedByKey{};

protected:
	int32_t m_bKeyFocused{};

protected:
	int32_t m_bDrawBack{};

protected:
	int32_t m_bAnimateOnce{};

protected:
	_x_com_ptr<IWzProperty> m_pPropFocusFrame;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerFocusFrame;

protected:
	std::array<_x_com_ptr<IWzProperty>, 4> m_apPropButton{};

protected:
	int32_t m_bToolTip{};

protected:
	int32_t m_bToolTipUpDir{};

protected:
	ZXString<char> m_sToolTipTitle;

protected:
	ZXString<char> m_sToolTipDesc;

protected:
	CUIToolTip m_uiToolTip;

protected:
	ZXString<char> m_sToolTipFromData;

protected:
	int32_t m_bSelfDisable{};
	// Methods
public:
	virtual ~CCtrlButton();

	CTOR_DEFAULT(CCtrlButton)

public:
	void _dtor_0();

public:
	CCtrlButton(const CCtrlButton &arg0);

public:
	void _ctor_1(const CCtrlButton &arg0) const;

public:
	CCtrlButton();

public:
	void _ctor_0();

	void ForcedMouseEnter(bool enter);

public:
	virtual void CreateCtrl(CWnd *pParent, uint32_t nId, long l, long t, long decClickArea, void *pData);

public:
	virtual void Destroy();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void Draw(long rx, long ry, const tagRECT *pRect);

public:
	virtual void Update();

public:
	virtual void SetEnable(int32_t bEnable);

public:
	virtual void ClearToolTip();

public:
	virtual void SetShow(int32_t bShow);

public:
	virtual int32_t HitTest(long rx, long ry);

public:
	void EnableToolTip(int32_t arg0);

public:
	void LoadToolTip(const wchar_t *sUOL, int32_t bEnable, int32_t bUpDir);

public:
	void SetToolTip(const char *sTitle, const char *sDesc, int32_t bUpDir);

public:
	void SetSimpleToolTip(const ZXString<char>& sDesc, const ZXString<char>& sPosition, int32_t bMultiLine);

public:
	void LoadToolTipbyString(const char *sText, int32_t bEnable, int32_t bUpDir);

public:
	void LoadToolTipFromData(const wchar_t *sUOL);

public:
	void ForceToMouseEnter(int32_t arg0) const;

public:
	void SetKeyFocus(int32_t bFocus);

public:
	void SetButtonImage(ZXString16 sUOL);

public:
	void SetSelfDisable();

public:
	void ClearSelfDisable();

public:
	_x_com_ptr<IWzCanvas> GetButtonCanvas();

public:
	_x_com_ptr<IWzCanvas> GetKeyFocusedCanvas();

public:
	_x_com_ptr<IWzProperty> GetPropFocusFrame();

protected:
	void ChangeDisplayState(int32_t nState);

protected:
	void ChangeDisplayFrame();

protected:
	void MouseDown();

protected:
	void MouseUp();

protected:
	void MouseEnter(int32_t bEnter, int32_t bForced);

protected:
	int32_t IsEntered() const;

	CLASS_RTTI_(CCtrlButton, CCtrlWnd);

public:
	CCtrlButton &operator=(const CCtrlButton &arg0);

public:
	static CCtrlButton &_op_assign_38(CCtrlButton *pThis, const CCtrlButton &arg0);

	friend class CWnd;
};
STATIC_ASSERT_SIZE(CCtrlButton, 2780);
class CCtrlButtonWithAniState : public CCtrlButton
{
	// Nested
	// Fields
protected:
	_x_com_ptr<IWzProperty> m_pProp_Ani;

protected:
	_x_com_ptr<IWzProperty> m_pProp_Normal;

protected:
	_x_com_ptr<IWzProperty> m_pProp_MouseOver;

protected:
	int32_t m_bOnAnimate{};

protected:
	long m_tStopAnimation{};
	// Methods
public:
	virtual ~CCtrlButtonWithAniState();

public:
	void _dtor_0();

public:
	CCtrlButtonWithAniState(const CCtrlButtonWithAniState &arg0);

public:
	void _ctor_1(const CCtrlButtonWithAniState &arg0) const;

public:
	CCtrlButtonWithAniState();

public:
	void _ctor_0();

public:
	virtual void CreateCtrl(CWnd *pParent, uint32_t nId, long l, long t, long decClickArea, void *pData);

public:
	virtual void Update();

public:
	int32_t IsOnAnimate() const;

public:
	void Animate(int32_t bAnimate, long tDuration);

	CLASS_RTTI_(CCtrlButtonWithAniState, CCtrlButton);

public:
	CCtrlButtonWithAniState &operator=(const CCtrlButtonWithAniState &arg0);

public:
	static CCtrlButtonWithAniState &_op_assign_10(CCtrlButtonWithAniState *pThis, const CCtrlButtonWithAniState &arg0);
};
STATIC_ASSERT_SIZE(CCtrlButtonWithAniState, 2800);
class CCtrlOriginButton : public CCtrlButton
{
	// Nested
	// Fields
private:
	int32_t m_bChecked{};

private:
	_x_com_ptr<IWzProperty> m_pPropChecked;
	// Methods
public:
	virtual ~CCtrlOriginButton();

public:
	void _dtor_0();

public:
	CCtrlOriginButton(const CCtrlOriginButton &arg0);

public:
	void _ctor_1(const CCtrlOriginButton &arg0) const;

public:
	CCtrlOriginButton();

public:
	void _ctor_0();

public:
	virtual void CreateCtrl(CWnd *pParent, uint32_t nId, long l, long t, long decClickArea, void *pData);

public:
	virtual void Draw(long rx, long ry, const tagRECT *pRect);

public:
	virtual int32_t HitTest(long rx, long ry);

public:
	virtual tagRECT GetRect();

public:
	void SetCheck(int32_t arg0);

public:
	int32_t IsChecked() const;

public:
	CCtrlOriginButton &operator=(const CCtrlOriginButton &arg0);

public:
	static CCtrlOriginButton &_op_assign_9(CCtrlOriginButton *pThis, const CCtrlOriginButton &arg0);
};
STATIC_ASSERT_SIZE(CCtrlOriginButton, 2788);
