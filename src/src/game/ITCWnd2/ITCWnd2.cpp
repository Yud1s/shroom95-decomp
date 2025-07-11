// ITCWnd2.cpp
#include "ITCWnd2.hpp"
#include "ITCWnd2_regen.ipp"

 CITCWnd_SubTab::~CITCWnd_SubTab() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CITCWnd_SubTab::_dtor_0() {
	return __sub_00184EB0(this, nullptr);
}
 CITCWnd_SubTab::CITCWnd_SubTab(const CITCWnd_SubTab& arg0) {
	_ctor_1( arg0);
}
void CITCWnd_SubTab::_ctor_1( const CITCWnd_SubTab& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_SubTab::CITCWnd_SubTab() {
	UNIMPLEMENTED; //_ctor_0();
}
void CITCWnd_SubTab::_ctor_0() {
	return __sub_00172740(this, nullptr);
}
void CITCWnd_SubTab::OnCreate(void* arg0) {
	__sub_001865A0(this, nullptr, arg0);
}
void CITCWnd_SubTab::OnButtonClicked(uint32_t nId) {
	__sub_00184460(this, nullptr, nId);
}
void CITCWnd_SubTab::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_00184DC0(this, nullptr, msg, wParam, rx, ry);
}
void CITCWnd_SubTab::Draw(const tagRECT* pRect) {
	__sub_00184610(this, nullptr, pRect);
}
int32_t CITCWnd_SubTab::OnSetFocus(int32_t bFocus) {
	return __sub_00172820(this, nullptr, bFocus);
}
void CITCWnd_SubTab::SetSortInfo(long arg0, long arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CITCWnd_SubTab::ChangeSubCategory() {
	__sub_00184EB0(this, nullptr);
}
long CITCWnd_SubTab::GetSubTabIndex(long rx, long ry) {
	return __sub_00184990(this, nullptr, rx, ry);
}
CITCWnd_SubTab& CITCWnd_SubTab::operator=(const CITCWnd_SubTab& arg0) {
	return _op_assign_11(this, arg0);
}
CITCWnd_SubTab& CITCWnd_SubTab::_op_assign_11(CITCWnd_SubTab* pThis, const CITCWnd_SubTab& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_Tab::~CITCWnd_Tab() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CITCWnd_Tab::_dtor_0() {
	return __sub_00184390(this, nullptr);
}
 CITCWnd_Tab::CITCWnd_Tab(const CITCWnd_Tab& arg0) {
	_ctor_1( arg0);
}
void CITCWnd_Tab::_ctor_1( const CITCWnd_Tab& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_Tab::CITCWnd_Tab() {
	UNIMPLEMENTED; //_ctor_0();
}
void CITCWnd_Tab::_ctor_0() {
	return __sub_00172540(this, nullptr);
}
void CITCWnd_Tab::OnCreate(void* arg0) {
	__sub_00185B20(this, nullptr, arg0);
}
void CITCWnd_Tab::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_001848E0(this, nullptr, msg, wParam, rx, ry);
}
void CITCWnd_Tab::OnButtonClicked(uint32_t nId) {
	__sub_00184B10(this, nullptr, nId);
}
void CITCWnd_Tab::Draw(const tagRECT* pRect) {
	__sub_001844E0(this, nullptr, pRect);
}
int32_t CITCWnd_Tab::OnSetFocus(int32_t bFocus) {
	return __sub_001725E0(this, nullptr, bFocus);
}
void CITCWnd_Tab::ChangeCategory() {
	__sub_00184390(this, nullptr);
}
void CITCWnd_Tab::SetSearchEdit(ZXString<char> sMsg) {
	__sub_00172E00(this, nullptr, CreateNakedParam(sMsg));
}
long CITCWnd_Tab::GetTabIndex(long rx, long ry) {
	return __sub_001843B0(this, nullptr, rx, ry);
}
CITCWnd_Tab& CITCWnd_Tab::operator=(const CITCWnd_Tab& arg0) {
	return _op_assign_11(this, arg0);
}
CITCWnd_Tab& CITCWnd_Tab::_op_assign_11(CITCWnd_Tab* pThis, const CITCWnd_Tab& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

