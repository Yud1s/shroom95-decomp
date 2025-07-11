// CtrlSlider.cpp
#include "CtrlSlider.hpp"
#include "CtrlSlider_regen.ipp"

 CCtrlSlider::~CCtrlSlider() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCtrlSlider::_dtor_0() {
	return __sub_000ECE50(this, nullptr);
}
 CCtrlSlider::CCtrlSlider(const CCtrlSlider& arg0) {
	_ctor_1( arg0);
}
void CCtrlSlider::_ctor_1( const CCtrlSlider& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlSlider::CCtrlSlider() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCtrlSlider::_ctor_0() {
	return __sub_000ECD80(this, nullptr);
}
void CCtrlSlider::CreateCtrl(CWnd* pParent, uint32_t nId, long l, long t, long length, void* pData) {
	__sub_000ED5E0(this, nullptr, pParent, nId, l, t, length, pData);
}
int32_t CCtrlSlider::OnMouseMove(long rx, long ry) {
	return __sub_000ECF60(this, nullptr, rx, ry);
}
void CCtrlSlider::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_000ED3A0(this, nullptr, msg, wParam, rx, ry);
}
void CCtrlSlider::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_000ECEE0(this, nullptr, wParam, lParam);
}
void CCtrlSlider::OnMouseEnter(int32_t bEnter) {
	__sub_000ECD00(this, nullptr, bEnter);
}
void CCtrlSlider::Draw(long rx, long ry, const tagRECT* pRect) {
	__sub_000ECFC0(this, nullptr, rx, ry, pRect);
}
long CCtrlSlider::GetCurPos() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CCtrlSlider::GetSliderRange() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCtrlSlider::SetCurPos(long nPos) {
	__sub_000ECC30(this, nullptr, nPos);
}
void CCtrlSlider::SetSliderRange(long nRange) {
	__sub_000ECC70(this, nullptr, nRange);
}
int32_t CCtrlSlider::IsEnabled() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long __cdecl CCtrlSlider::GetSliderHeight() {
	return __sub_000ED3E0();
}
void CCtrlSlider::MouseDown(long rx, long ry) {
	__sub_000ED230(this, nullptr, rx, ry);
}
void CCtrlSlider::MouseUp(long rx, long ry) {
	__sub_000ED2F0(this, nullptr, rx, ry);
}
long CCtrlSlider::GetPosByCoord(long rx) {
	return __sub_000ECCB0(this, nullptr, rx);
}
long CCtrlSlider::GetCoordByPos(long nPos) {
	return __sub_000ECC00(this, nullptr, nPos);
}
void CCtrlSlider::SetToNewPos(long nPos, int32_t bRedraw) {
	__sub_000ECD40(this, nullptr, nPos, bRedraw);
}
CCtrlSlider& CCtrlSlider::operator=(const CCtrlSlider& arg0) {
	return _op_assign_23(this, arg0);
}
CCtrlSlider& CCtrlSlider::_op_assign_23(CCtrlSlider* pThis, const CCtrlSlider& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlSlider::CREATEPARAM::CREATEPARAM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCtrlSlider::CREATEPARAM::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

