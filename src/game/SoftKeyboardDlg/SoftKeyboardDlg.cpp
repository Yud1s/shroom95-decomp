// SoftKeyboardDlg.cpp
#include "SoftKeyboardDlg.hpp"

static ZRef<CSoftKeyboardDlg> FAKE_ZRef_CSoftKeyboardDlg{};

#include "SoftKeyboardDlg_regen.ipp"

 CSoftKeyboardDlg::~CSoftKeyboardDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CSoftKeyboardDlg::_dtor_0() {
	return __sub_003159F0(this, nullptr);
}
 CSoftKeyboardDlg::CSoftKeyboardDlg(const CSoftKeyboardDlg& arg0) {
	_ctor_1( arg0);
}
void CSoftKeyboardDlg::_ctor_1( const CSoftKeyboardDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CSoftKeyboardDlg::CSoftKeyboardDlg(long nMin, long nMax) {
	_ctor_0( nMin, nMax);
}
void CSoftKeyboardDlg::_ctor_0( long nMin, long nMax) {
	return __sub_00315C10(this, nullptr, nMin, nMax);
}
void CSoftKeyboardDlg::OnCreate(void* arg0) {
	__sub_003162C0(this, nullptr, arg0);
}
void CSoftKeyboardDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_003172B0(this, nullptr, nId, param1, param2);
}
void CSoftKeyboardDlg::OnButtonClicked(uint32_t nId) {
	__sub_00316C20(this, nullptr, nId);
}
void CSoftKeyboardDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00316E20(this, nullptr, wParam, lParam);
}
void CSoftKeyboardDlg::Update() {
     auto t = timeGetTime();
     if(m_tClearTooltip && (t- m_tClearTooltip) > 0) {
         ClearToolTip();
     }
     CWnd::Update();
	//__sub_00315880(this, nullptr);
}
void CSoftKeyboardDlg::SetTooltip(ZXString<char> sTooltip) {
	__sub_00315B60(this, nullptr, CreateNakedParam(sTooltip));
}
ZXString<char> CSoftKeyboardDlg::GetResult() {
	return __sub_001D5370(this, nullptr);
}
int32_t __cdecl CSoftKeyboardDlg::InitializeSecondaryPassword(ZXString<char>& sResult, ZRef<CDialog>* ppDialog) {
	return __sub_00315ED0(sResult, ppDialog);
}
void CSoftKeyboardDlg::OnTabChanged(long nTab) {
	//__sub_00317280(this, nullptr, nTab);
    m_nCurTab = nTab;
    m_pEditEx->EndSwitching();
    SetButton();

}
void CSoftKeyboardDlg::SetButton() {
	__sub_00316E60(this, nullptr);
}
int32_t CSoftKeyboardDlg::GetNextSwitchingChar(uint32_t nId, char& c, int32_t bHighCase) {
	return __sub_003158B0(this, nullptr, nId, c, bHighCase);
}
int32_t CSoftKeyboardDlg::CheckResultText() {
	return __sub_00315D60(this, nullptr);
}
CSoftKeyboardDlg& CSoftKeyboardDlg::operator=(CSoftKeyboardDlg& arg0) {
	return _op_assign_15(this, arg0);
}
CSoftKeyboardDlg& CSoftKeyboardDlg::_op_assign_15(CSoftKeyboardDlg* pThis, CSoftKeyboardDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

