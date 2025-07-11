// RPSGameDlg.cpp
#include "RPSGameDlg.hpp"
#include "RPSGameDlg_regen.ipp"

 CRPSGameDlg::~CRPSGameDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CRPSGameDlg::_dtor_0() {
	return __sub_002D6D80(this, nullptr);
}
 CRPSGameDlg::CRPSGameDlg(const CRPSGameDlg& arg0) {
	_ctor_1( arg0);
}
void CRPSGameDlg::_ctor_1( const CRPSGameDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRPSGameDlg::CRPSGameDlg(unsigned long dwNpcTemplateID) {
	_ctor_0( dwNpcTemplateID);
}
void CRPSGameDlg::_ctor_0( unsigned long dwNpcTemplateID) {
	return __sub_002D6BA0(this, nullptr, dwNpcTemplateID);
}
void CRPSGameDlg::OnCreate(void* pData) {
	__sub_002D7480(this, nullptr, pData);
}
int32_t CRPSGameDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_002D5310(this, nullptr, rx, ry, ppCtrl);
}
void CRPSGameDlg::Draw(const tagRECT* pRect) {
	__sub_002D5E00(this, nullptr, pRect);
}
void CRPSGameDlg::OnButtonClicked(uint32_t nId) {
	__sub_002D6F40(this, nullptr, nId);
}
void CRPSGameDlg::Update() {
	__sub_002D8E80(this, nullptr);
}
void CRPSGameDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_002D6D20(this, nullptr, wParam, lParam);
}
void CRPSGameDlg::ShowResult() {
	__sub_002D5350(this, nullptr);
}
void CRPSGameDlg::SetMainButton(long nType) {
	__sub_002D70E0(this, nullptr, nType);
}
void CRPSGameDlg::SetUserAvatar() {
	__sub_002D6FF0(this, nullptr);
}
void CRPSGameDlg::SetNpc() {
	__sub_002D5FB0(this, nullptr);
}
void CRPSGameDlg::OnBtStart() {
	__sub_002D6860(this, nullptr);
}
void CRPSGameDlg::OnBtContinue() {
	__sub_002D6900(this, nullptr);
}
void CRPSGameDlg::OnBtRetry() {
	__sub_002D69A0(this, nullptr);
}
void CRPSGameDlg::OnBtExit() {
	__sub_002D6A40(this, nullptr);
}
void CRPSGameDlg::SendSelection(long nRPS) {
	__sub_002D6AE0(this, nullptr, nRPS);
}
void CRPSGameDlg::ProcessPacket(long nType, CInPacket& iPacket) {
	__sub_002D72D0(this, nullptr, nType, iPacket);
}
void __cdecl CRPSGameDlg::OnPacket(CInPacket& iPacket) {
	__sub_002D9E00(iPacket);
}
CRPSGameDlg& CRPSGameDlg::operator=(const CRPSGameDlg& arg0) {
	return _op_assign_23(this, arg0);
}
CRPSGameDlg& CRPSGameDlg::_op_assign_23(CRPSGameDlg* pThis, const CRPSGameDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

