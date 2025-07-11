// LoginWnd_Etc.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlButton/CtrlButton.hpp"

#include "FadeWnd/FadeWnd.hpp"
#include "Dialog/Dialog.hpp"
#include "Login/Login.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "CtrlEdit/CtrlEdit.hpp"

class CLogin;

// Level: 0 0x221f1
// struct CLoginUtilDlg_MODAL_OWNER;
// Level: 1 0x13429
class CUILoginDesc;
// Level: 1 0x13412
class CUILoginStart;
// Level: 1 0x1344d
class CLoginUtilDlg;

struct CLoginUtilDlg_MODAL_OWNER
{
	// Nested
	// Fields
public:
	CLoginUtilDlg *m_pDlg{};
	// Methods
public:
	~CLoginUtilDlg_MODAL_OWNER();

public:
	void _dtor_0();

public:
	CLoginUtilDlg_MODAL_OWNER(CLoginUtilDlg *arg0);

public:
	void _ctor_1(CLoginUtilDlg *arg0);
};
STATIC_ASSERT_SIZE(CLoginUtilDlg_MODAL_OWNER, 4);

class CUILoginDesc : public CFadeWnd
{
	// Nested
	// Fields
protected:
	CLogin *m_pLogin{};

protected:
	long m_nStep{};

protected:
	_x_com_ptr<IWzFont> m_pChFont;
	// Methods
public:
	virtual ~CUILoginDesc();

public:
	void _dtor_0();

public:
	CUILoginDesc(const CUILoginDesc &arg0);

public:
	void _ctor_1(const CUILoginDesc &arg0);

public:
	CUILoginDesc(CLogin *pLogin, long nStep);

public:
	void _ctor_0(CLogin *pLogin, long nStep);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void Update();

public:
	virtual void Delete();

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual int32_t OnActivate(int32_t bActive);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	long GetStep();

public:
	int32_t IsWorldDesc();

public:
	CUILoginDesc &operator=(const CUILoginDesc &arg0);

public:
	static CUILoginDesc &_op_assign_12(CUILoginDesc *pThis, const CUILoginDesc &arg0);
};
STATIC_ASSERT_SIZE(CUILoginDesc, 256);
class CUILoginStart : public CDialog
{
	// Nested
public:
	enum ENABLE
	{
		ENABLE_NONE = 0,
		ENABLE_START = 1,
		ENABLE_EXIT = 2,
		ENABLE_ENABLESPW = 4,
		ENABLE_DISABLESPW = 8,
		ENABLE_CHANNELNAME = 16,
		ENABLE_VIEWALLCHAR = 32
	};
	enum UnnamedEnum78829
	{
		BT_START = 0,
		BT_EXIT = 1,
		BT_VIEWWORLDSELECT = 2,
		BT_VIEWRECOMMENDWORLD = 3,
		BT_VIEWALLCHAR = 4,
		BT_NO = 5,
		ID_CTRL_BT_START = 1000,
		ID_CTRL_BT_EXIT = 1001,
		ID_CTRL_BT_VIEWWORLDSELECT = 1002,
		ID_CTRL_BT_VIEWRECOMMENDWORLD = 1003,
		ID_CTRL_BT_VIEWALLCHAR = 1004
	};
	enum SWITCH_
	{
		SWITCH_VIEWALLWORLD = 0,
		SWITCH_RECOMMENDWORLD = 1,
		SWITCH_RECOMMENDWORLD_DISABLED = 2,
		SWITCH_RECOMMENDWORLD_ENABLED = 3,
		SWITCH_ALLOFF = 4
	};
	// Fields
protected:
	CLogin *m_pLogin{};

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasChannelName;

protected:
	std::array<CCtrlButton::CREATEPARAM, 5> m_aBtParam{};

protected:
	std::array<ZRef<CCtrlButton>, 5> m_apButton{};

protected:
	long m_nViewWorldButtonType{};

public:
	int32_t m_bRequestSent{};
	// Methods
public:
	virtual ~CUILoginStart();

public:
	void _dtor_0();

public:
	CUILoginStart(const CUILoginStart &arg0);

public:
	void _ctor_1(const CUILoginStart &arg0);

public:
	CUILoginStart(CLogin *pLogin);

public:
	void _ctor_0(CLogin *pLogin);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t OnActivate(int32_t bActive);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	void SetButton(long nOpt);

public:
	void SetViewWorldButton(long nType);

public:
	int32_t SendViewAllCharacterPacket();

public:
	void EnableLoginStartCtrl(long nEnable);

public:
	CUILoginStart &operator=(const CUILoginStart &arg0);

public:
	static CUILoginStart &_op_assign_14(CUILoginStart *pThis, const CUILoginStart &arg0);
};
STATIC_ASSERT_SIZE(CUILoginStart, 284);
class CLoginUtilDlg : public CFadeWnd
{
public:
	struct MODAL_OWNER
	{
	public:
		MODAL_OWNER()
		{
		}
		void _ctor_0()
		{
		}
		~MODAL_OWNER()
		{
		}
	};

	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_BT_OK = 1000,
		ID_CTRL_BT_CANCEL = 1001,
		ID_CTRL_EDIT_BIRTHDATE = 1002,
		ID_CTRL_BT_ACCEPT = 1003
	};
	enum LU_
	{
		LU_YESNO = 0,
		LU_YESNO2 = 1,
		LU_YESNO3 = 2,
		LU_YESNO4 = 3,
		LU_NOTICE = 4,
		LU_ERROR = 5,
		LU_BIRTHDATE = 6,
		LU_SCROLLNOTICE = 7
	};
	// Fields
protected:
	long m_nRet{};

protected:
	int32_t m_bTerminate{};

protected:
	long m_nType{};

protected:
	long m_nMsg{};

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasText;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlEdit> m_pEditBirthDate;

protected:
	int32_t m_bCheck{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerScroll;

protected:
	ZXString16 m_sScrollNotice;
	// Methods
public:
	virtual ~CLoginUtilDlg();

public:
	void _dtor_0();

public:
	CLoginUtilDlg(const CLoginUtilDlg &arg0);

public:
	void _ctor_1(const CLoginUtilDlg &arg0);

public:
	CLoginUtilDlg();

public:
	void _ctor_0();

public:
	static int32_t __cdecl YesNo(long nMsg, ZRef<CDialog> *ppDialog);

public:
	static int32_t __cdecl YesNo2(long nMsg);

public:
	static int32_t __cdecl YesNo3(long nMsg);

public:
	static int32_t __cdecl YesNo4(long nMsg, ZRef<CDialog> *ppDialog);

public:
	static void __cdecl Notice(long nMsg, ZRef<CDialog> *ppDialog);

public:
	static void __cdecl Error(long nMsg, ZRef<CDialog> *ppDialog);

public:
	static long __cdecl AskBirthDate(ZRef<CDialog> *arg0);

public:
	static void __cdecl ScrollNotice(ZXString16 arg0);

public:
	void Init_(long arg0, ZXString16 arg1);

public:
	void Init(long nType, long nMsg);

public:
	virtual void SetRet(long nRet);

public:
	long DoModal();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void Delete();

public:
	virtual void OnPreFadeIn();

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	CLoginUtilDlg &operator=(const CLoginUtilDlg &arg0);

public:
	static CLoginUtilDlg &_op_assign_22(CLoginUtilDlg *pThis, const CLoginUtilDlg &arg0);
};
STATIC_ASSERT_SIZE(CLoginUtilDlg, 300);
