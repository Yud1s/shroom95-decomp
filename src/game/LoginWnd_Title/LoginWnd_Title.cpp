// LoginWnd_Title.cpp
#include "LoginWnd_Title.hpp"

#include <ClientConfig.hpp>

#include "LoginWnd_Title_regen.ipp"

CLicenseDlg::~CLicenseDlg()
{

	ms_pInstance = nullptr;
	//_dtor_0();
}
void CLicenseDlg::_dtor_0()
{
	this->~CLicenseDlg();
	//return __sub_00201FB0(this, nullptr);
}
CLicenseDlg::CLicenseDlg(const CLicenseDlg &arg0)
{

	//_ctor_1(arg0);
}
void CLicenseDlg::_ctor_1(const CLicenseDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CLicenseDlg::CLicenseDlg(void *pData)
{
	CreateDlg(184, 47, 431, 426, 210, 1, pData, Origin_LT);
	//_ctor_0(pData);
}
void CLicenseDlg::_ctor_0(void *pData)
{
	new (this) CLicenseDlg(pData);
	//return __sub_00201EC0(this, nullptr, pData);
}
void CLicenseDlg::OnCreate(void *pData)
{
	__sub_00201530(this, nullptr, pData);
}
void CLicenseDlg::OnButtonClicked(uint32_t nId)
{
	__sub_001FF870(this, nullptr, nId);
}
void CLicenseDlg::OnKey(uint32_t wParam, int32_t lParam)
{
	if(wParam != VK_RETURN && wParam != VK_ESCAPE) {
		CDialog::OnKey(wParam, lParam);
	}
	//__sub_001FF5B0(this, nullptr, wParam, lParam);
}
int32_t CLicenseDlg::HitTest(long rx, long ry, CCtrlWnd **ppCtrl)
{
	return __sub_001FF570(this, nullptr, rx, ry, ppCtrl);
}
void CLicenseDlg::Draw(const tagRECT *pRect)
{
	__sub_002000F0(this, nullptr, pRect);
}
void CLicenseDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
	__sub_001FF6B0(this, nullptr, nId, param1, param2);
}
void CLicenseDlg::SetRet(long nRet)
{
	__sub_001FF5D0(this, nullptr, nRet);
}
void CLicenseDlg::LoadFont()
{
	__sub_00201130(this, nullptr);
}
CLicenseDlg &CLicenseDlg::operator=(const CLicenseDlg &arg0)
{
	return _op_assign_11(this, arg0);
}
CLicenseDlg &CLicenseDlg::_op_assign_11(CLicenseDlg *pThis, const CLicenseDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUITitle::~CUITitle()
{
	ms_pInstance = nullptr;
}
void CUITitle::_dtor_0()
{
	this->~CUITitle();
	// return __sub_001FFAE0(this, nullptr);
}
CUITitle::CUITitle(const CUITitle &arg0)
{
	_ctor_1(arg0);
}
void CUITitle::_ctor_1(const CUITitle &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUITitle::CUITitle(void *pData)
{
	//_ctor_0( pData);
	ms_pInstance = this;

	SetRectEmpty(&m_rcRMA);
	SetOption(0xff, 0xff, 0xff,
			  tagPOINT{-96, -44}, tagPOINT{-96, -44}, tagPOINT{-96, -44},
			  0, 0, 0);

	auto s = L"UI/Login.img/Title/signboard";
	CreateFadeWnd(243, 132, s, 10, 0, pData, 1, Origin_LT);

}
void CUITitle::_ctor_0(void *pData)
{
	new (this) CUITitle(pData);
	// return __sub_001FF940(this, nullptr, pData);
}
void CUITitle::OnCreate(void *pData)
{
	__sub_00200390(this, nullptr, pData);

	m_pEditID->SetText("admin_dec1");
	m_pEditPasswd->SetText(DEFAULT_LOGIN_PW);
}
void CUITitle::OnButtonClicked(uint32_t nId)
{
	switch (nId)
	{
	case ID_CTRL_TITLE_BT_LOGIN:
		if (IsRequestValid())
		{
			SetRet(1);
		}
		break;
	case ID_CTRL_TITLE_BT_EMAILSAVE:
		if (IsRequestValid())
		{
			ToggleRememberMailAddr();
		}
		break;
	case ID_CTRL_TITLE_BT_EMAILLOST:
		if (IsRequestValid())
		{
			// TODO open website str pool key 1
		}
		break;
	case ID_CTRL_TITLE_BT_PASSWDLOST:
		if (IsRequestValid())
		{
			// TODO open website str pool key 2
		}
		break;
	case ID_CTRL_TITLE_BT_NEW:
		if (IsRequestValid())
		{
			// TODO open website str pool key 0
		}
		break;
	case ID_CTRL_TITLE_BT_HOMEPAGE:
		if (IsRequestValid())
		{
			// TODO open website str pool key 0x1ab9
		}
		break;
	case ID_CTRL_TITLE_BT_QUIT:
		PostQuitMessage(0);
		break;
	case 1:
	case 2:
	case 8:
		SetRet(nId);
		break;
	default:
		break;
	}
	//__sub_001FFC90(this, nullptr, nId);
}
void CUITitle::Draw(const tagRECT *pRect)
{
	__sub_001FF730(this, nullptr, pRect);
}
void CUITitle::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
	if (msg == WM_LBUTTONUP)
	{
		POINT pt{rx, ry};
		if (PtInRect(&m_rcRMA, pt))
		{
			ToggleRememberMailAddr();
		}
	}
	//__sub_001FF620(this, nullptr, msg, wParam, rx, ry);
}
void CUITitle::SetRet(long nRet)
{
	__sub_001FFEC0(this, nullptr, nRet);
}
void CUITitle::EnableLoginCtrl(int32_t bEnable)
{
	m_pEditID->SetEnable(bEnable);
	m_pEditPasswd->SetEnable(bEnable);
	m_pBtLogin->SetEnable(bEnable);
	//__sub_001FF660(this, nullptr, bEnable);
}
int32_t CUITitle::OnMouseMove(long rx, long ry)
{
	return 1;
	// return __sub_001FF560(this, nullptr, rx, ry);
}
void CUITitle::ClearToolTip()
{
	__sub_001FFAC0(this, nullptr);
}
void CUITitle::ToggleRememberMailAddr()
{
	m_bRememberMailAddr = !m_bRememberMailAddr;
	InvalidateRect(nullptr);
	//__sub_001FF510(this, nullptr);
}
int32_t CUITitle::IsRequestValid()
{
	return !m_pLogin->IsRequestSent() && m_pLogin->GetLoginStep() == CLogin::LS_TITLE;
	//return __sub_001FF530(this, nullptr);
}
CUITitle &CUITitle::operator=(const CUITitle &arg0)
{
	return _op_assign_13(this, arg0);
}
CUITitle &CUITitle::_op_assign_13(CUITitle *pThis, const CUITitle &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
