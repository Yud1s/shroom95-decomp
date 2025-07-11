// LoginWnd_Title.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "Dialog/Dialog.hpp"
#include "FadeWnd/FadeWnd.hpp"
#include "Login/Login.hpp"
#include "UIToolTip/UIToolTip.hpp"

struct CT_INFO;

// Level: 1 0x2209f
class CLicenseDlg;
// Level: 1 0x2207f
class CUITitle;

class CLicenseDlg : public CDialog, public TSingleton<CLicenseDlg>
{
	// Nested
public:
	enum ID_CTRL_SCROLLBAR
	{
		ID_CTRL_SCROLLBAR = 1000
	};
	enum k
	{
		kDialog_Width = 431,
		kDialog_Height = 426,
		kDialog_YPos_Adjustment = 216,
		kOKBtn_XPos = 266,
		kOKBtn_YPos = 374,
		kCancelBtn_XPos = 340,
		kCancelBtn_YPos = 374,
		kScroll_XPos = 390,
		kScroll_YPos = 40,
		kScroll_Height = 317,
		kScreen_Height = 310,
		kClipRectText_Left = 36,
		kClipRectText_Top = 41,
		kClipRectText_Width = 355
	};
	// Fields

	SINGLETON_PAD;

protected:
	CLogin *m_pLogin{};

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlScrollBar> m_pScrollBar;

protected:
	ZArray<CT_INFO> m_aCT;

protected:
	ZArray<_x_com_ptr<IWzFont>> m_apFont;

protected:
	long m_nScrollPos{};

protected:
	long m_nScrollRange{-1};
	// Methods
public:
	virtual ~CLicenseDlg();

public:
	void _dtor_0();

public:
	CLicenseDlg(const CLicenseDlg &arg0);

public:
	void _ctor_1(const CLicenseDlg &arg0);

public:
	CLicenseDlg(void *pData);

public:
	void _ctor_0(void *pData);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void SetRet(long nRet);

protected:
	void LoadFont();

public:
	CLicenseDlg &operator=(const CLicenseDlg &arg0);

public:
	static CLicenseDlg &_op_assign_11(CLicenseDlg *pThis, const CLicenseDlg &arg0);
};
STATIC_ASSERT_SIZE(CLicenseDlg, 192);
class CUITitle : public CFadeWnd, public TSingleton<CUITitle>
{
	// Nested
public:
	enum ID_CTRL_TITLE_
	{
		ID_CTRL_TITLE_BT_LOGIN = 1000,
		ID_CTRL_TITLE_BT_EMAILSAVE = 1001,
		ID_CTRL_TITLE_BT_EMAILLOST = 1002,
		ID_CTRL_TITLE_BT_PASSWDLOST = 1003,
		ID_CTRL_TITLE_BT_NEW = 1004,
		ID_CTRL_TITLE_BT_HOMEPAGE = 1005,
		ID_CTRL_TITLE_BT_QUIT = 1006,
		ID_CTRL_TITLE_EDIT_ID = 1007,
		ID_CTRL_TITLE_EDIT_PASSWD = 1008
	};
	// Fields
protected:
	CLogin *m_pLogin{};

protected:
	int32_t m_bRememberMailAddr{};

protected:
	std::array<_x_com_ptr<IWzCanvas>, 2> m_pCanvasRMA{};

protected:
	tagRECT m_rcRMA{};

protected:
	ZRef<CCtrlButton> m_pBtLogin;

protected:
	ZRef<CCtrlButton> m_pBtEmailSave;

protected:
	ZRef<CCtrlButton> m_pBtEmailLost;

protected:
	ZRef<CCtrlButton> m_pBtPasswdLost;

protected:
	ZRef<CCtrlButton> m_pBtNew;

protected:
	ZRef<CCtrlButton> m_pBtHomePage;

protected:
	ZRef<CCtrlButton> m_pBtQuit;

protected:
	ZRef<CCtrlEdit> m_pEditID;

protected:
	ZRef<CCtrlEdit> m_pEditPasswd;

protected:
	CUIToolTip m_uiToolTipTitle;
	// Methods
public:
	virtual ~CUITitle();

public:
	void _dtor_0();

public:
	CUITitle(const CUITitle &arg0);

public:
	void _ctor_1(const CUITitle &arg0);

public:
	CUITitle(void *pData);

public:
	void _ctor_0(void *pData);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void SetRet(long nRet);

public:
	void EnableLoginCtrl(int32_t bEnable);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void ClearToolTip();

protected:
	void ToggleRememberMailAddr();

protected:
	int32_t IsRequestValid();

public:
	CUITitle &operator=(const CUITitle &arg0);

public:
	static CUITitle &_op_assign_13(CUITitle *pThis, const CUITitle &arg0);
};
STATIC_ASSERT_SIZE(CUITitle, 2980);
