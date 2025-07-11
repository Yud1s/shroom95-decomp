// UISoftKeyboard.cpp
#include "UISoftKeyboard.hpp"
#include "UISoftKeyboard_regen.ipp"

 CUISoftKeyboard::~CUISoftKeyboard() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUISoftKeyboard::_dtor_0() {
	return __sub_00460320(this, nullptr);
}
 CUISoftKeyboard::CUISoftKeyboard(const CUISoftKeyboard& arg0) {
	_ctor_1( arg0);
}
void CUISoftKeyboard::_ctor_1( const CUISoftKeyboard& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISoftKeyboard::CUISoftKeyboard() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUISoftKeyboard::_ctor_0() {
	return __sub_00460220(this, nullptr);
}
void CUISoftKeyboard::OnCreate(void* pData) {
	__sub_004607D0(this, nullptr, pData);
}
int32_t CUISoftKeyboard::OnSetFocus(int32_t bFocus) {
	return __sub_00460300(this, nullptr, bFocus);
}
void CUISoftKeyboard::Draw(const tagRECT* pRect) {
	__sub_0045FFA0(this, nullptr, pRect);
}
int32_t CUISoftKeyboard::OnMouseMove(long rx, long ry) {
	return __sub_0045FBA0(this, nullptr, rx, ry);
}
void CUISoftKeyboard::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_004606A0(this, nullptr, msg, wParam, rx, ry);
}
void CUISoftKeyboard::OnButtonClicked(uint32_t nId) {
	__sub_00461150(this, nullptr, nId);
}
void CUISoftKeyboard::OnDestroy() {
	__sub_00460430(this, nullptr);
}
int32_t CUISoftKeyboard::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_0045FC50(this, nullptr, rx, ry, ppCtrl);
}
void CUISoftKeyboard::SetSoftKeyboard(CCtrlWnd* pCtrl, SOFTKEYBOARDPARAM* param) {
	__sub_00460540(this, nullptr, pCtrl, param);
}
const int32_t CUISoftKeyboard::IsSoftKeyboardSet() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUISoftKeyboard::ResetRandomKeyMap() {
	__sub_00460510(this, nullptr);
}
void CUISoftKeyboard::SetRandomKeyMap(long nDefaultOver) {
	__sub_0045FE70(this, nullptr, nDefaultOver);
}
void CUISoftKeyboard::SetKeyMode(long nModeID) {
	__sub_0045FC90(this, nullptr, nModeID);
}
void CUISoftKeyboard::UpdateKeyConstraint(long nLength) {
	__sub_0045FD70(this, nullptr, nLength);
}
long CUISoftKeyboard::GetKeyIndexFromPoint(long rx, long ry) {
	return __sub_0045FAA0(this, nullptr, rx, ry);
}
ZXString<char> CUISoftKeyboard::GetCharacterFromKeyIndex(long nIndex) {
	ZXString<char> ret{};
	auto key = m_aKeyMap[nIndex].nKey;
	if(key >= 10) {
		ret.Format("%C", key + 55);
	}
	else
	{
		ret.Format("%d", key);
	}
	return ret;
	//return __sub_00460620(this, nullptr, nIndex);
}
CUISoftKeyboard& CUISoftKeyboard::operator=(const CUISoftKeyboard& arg0) {
	return _op_assign_19(this, arg0);
}
CUISoftKeyboard& CUISoftKeyboard::_op_assign_19(CUISoftKeyboard* pThis, const CUISoftKeyboard& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

