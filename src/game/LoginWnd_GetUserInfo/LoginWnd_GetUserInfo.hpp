// LoginWnd_GetUserInfo.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "FadeWnd/FadeWnd.hpp"
#include "Login/Login.hpp"
#include "CtrlComboBox/CtrlComboBox.hpp"

// Level: 1 0x221a5
class CUIGetUserInfo;

class CUIGetUserInfo : public CFadeWnd, public TSingleton<CUIGetUserInfo>
{
	// Nested
public:
	enum ID_CTRL_GETUSERINFO_
	{
		ID_CTRL_GETUSERINFO_EDIT_PASSWD = 8000,
		ID_CTRL_GETUSERINFO_EDIT_PASSWDCONFIRM = 8001,
		ID_CTRL_GETUSERINFO_BT_CONFIRM = 8002,
		ID_CTRL_GETUSERINFO_BT_CANCEL = 8003,
		ID_CTRL_GETUSERINFO_COMBOBOX_SETSEX = 8004
	};

	// Fields
protected:
	int32_t m_bCheck{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerScroll;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasSel;

protected:
	CLogin *m_pLogin{};

protected:
	ZRef<CCtrlButton> m_pBtConfirm;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	CCtrlComboBox::CREATEPARAM m_paramComboBox;

protected:
	ZRef<CCtrlComboBox> m_pCBSex;

protected:
	ZRef<CCtrlEdit> m_pEditPasswd;

protected:
	ZRef<CCtrlEdit> m_pEditPasswdReconfirm;

protected:
	unsigned char m_nGender{};

protected:
	int32_t m_bAccountAddSent{};
	// Methods
public:
	virtual ~CUIGetUserInfo();

public:
	void _dtor_0();

public:
	CUIGetUserInfo(const CUIGetUserInfo &arg0);

public:
	void _ctor_1(const CUIGetUserInfo &arg0);

public:
	CUIGetUserInfo(void *pData);

public:
	void _ctor_0(void *pData);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nID);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void Delete();

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void OnPreFadeIn();

public:
	void SetAccountAddSent(int32_t arg0);

protected:
	void CheckGenderForm();

protected:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

protected:
	void SetSex(long nTarget);

protected:
	void DrawSexTarget();

protected:
	int32_t GetAccountAddSend();

public:
	CUIGetUserInfo &operator=(const CUIGetUserInfo &arg0);

public:
	static CUIGetUserInfo &_op_assign_16(CUIGetUserInfo *pThis, const CUIGetUserInfo &arg0);
};
STATIC_ASSERT_SIZE(CUIGetUserInfo, 392);
