// LoginWnd_Pincode.cpp
#include "LoginWnd_Pincode.hpp"

#include "UISoftKeyboard/UISoftKeyboard.hpp"

static  ZRef<CPinCodeDlg> FAKE_ZRefCPinCodeDlg{};
static ZRef<CUISoftKeyboard> FAKE_ZRefCUISoftKeyboard{};

#include "LoginWnd_Pincode_regen.ipp"

CPinCodeDlg_MODAL_OWNER::~CPinCodeDlg_MODAL_OWNER()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CPinCodeDlg_MODAL_OWNER::_dtor_0()
{
	return __sub_001FD550(this, nullptr);
}
CPinCodeDlg_MODAL_OWNER::CPinCodeDlg_MODAL_OWNER(CPinCodeDlg *arg0)
{
	_ctor_1( arg0);
}
void CPinCodeDlg_MODAL_OWNER::_ctor_1( CPinCodeDlg *arg0)
{
	return __sub_001FD600(this, nullptr, arg0);
}
CPinCodeDlg::~CPinCodeDlg()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CPinCodeDlg::_dtor_0()
{
	return __sub_001FDDA0(this, nullptr);
}
CPinCodeDlg::CPinCodeDlg(const CPinCodeDlg &arg0)
{
	_ctor_1( arg0);
}
void CPinCodeDlg::_ctor_1( const CPinCodeDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CPinCodeDlg::CPinCodeDlg()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CPinCodeDlg::_ctor_0()
{
	return __sub_001FDD30(this, nullptr);
}
int32_t __cdecl CPinCodeDlg::YesNo(long nMsg, ZRef<CDialog> *ppDialog)
{
	return __sub_001FE020(nMsg, ppDialog);
}
void __cdecl CPinCodeDlg::Notice(long nMsg)
{
	__sub_001FDF00(nMsg);
}
long __cdecl CPinCodeDlg::CreatePinCode(ZRef<CDialog> *ppDialog)
{
	return __sub_001FEAF0(ppDialog);
}
long __cdecl CPinCodeDlg::ConfirmPinCode(ZRef<CDialog> *ppDialog)
{
	return __sub_001FE3C0(ppDialog);
}
long __cdecl CPinCodeDlg::AssignPinCode(ZRef<CDialog> *ppDialog, long nMsg)
{
	return __sub_001FE5D0(ppDialog, nMsg);
}
long __cdecl CPinCodeDlg::EnterPinCode(ZRef<CDialog> *ppDialog, long nMsg, long *nPinCode)
{
	return __sub_001FE1A0(ppDialog, nMsg, nPinCode);
}
void __cdecl CPinCodeDlg::ScrollNotice(ZXString16 arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CPinCodeDlg::Init_(long arg0, ZXString16 arg1)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CPinCodeDlg::Init(long nType, long nMsg)
{
	__sub_001FD560(this, nullptr, nType, nMsg);
}
void CPinCodeDlg::SetRet(long nRet)
{
	__sub_001FD6A0(this, nullptr, nRet);
}
long CPinCodeDlg::DoModal()
{
    return CDialog::DoModal();
	//return __sub_001FDB50(this, nullptr);
}
void CPinCodeDlg::OnCreate(void *pData)
{
	__sub_001FEB70(this, nullptr, pData);
}
void CPinCodeDlg::OnButtonClicked(uint32_t nId)
{
	__sub_001FE800(this, nullptr, nId);
}
void CPinCodeDlg::OnKey(uint32_t wParam, int32_t lParam)
{
	__sub_001FE900(this, nullptr, wParam, lParam);
}
void CPinCodeDlg::Draw(const tagRECT *pRect)
{
	__sub_001FDBD0(this, nullptr, pRect);
}
void CPinCodeDlg::Delete()
{
	__sub_001FD5B0(this, nullptr);
}
void CPinCodeDlg::OnPreFadeIn()
{
	__sub_001FD5F0(this, nullptr);
}
int32_t CPinCodeDlg::HitTest(long rx, long ry, CCtrlWnd **ppCtrl)
{
	return __sub_001FD5D0(this, nullptr, rx, ry, ppCtrl);
}
CPinCodeDlg &CPinCodeDlg::operator=(const CPinCodeDlg &arg0)
{
	return _op_assign_21(this, arg0);
}
CPinCodeDlg &CPinCodeDlg::_op_assign_21(CPinCodeDlg *pThis, const CPinCodeDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
