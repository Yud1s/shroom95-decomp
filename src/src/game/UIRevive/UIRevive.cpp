// UIRevive.cpp
#include "UIRevive.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};
#include "UIRevive_regen.ipp"

 CUIRevive::~CUIRevive() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIRevive::_dtor_0() {
	return __sub_0043D330(this, nullptr);
}
 CUIRevive::CUIRevive(const CUIRevive& arg0) {
	_ctor_1( arg0);
}
void CUIRevive::_ctor_1( const CUIRevive& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIRevive::CUIRevive() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIRevive::_ctor_0() {
	return __sub_0043D230(this, nullptr);
}
void CUIRevive::OnCreate(void* pData) {
	__sub_0043CEA0(this, nullptr, pData);
}
void CUIRevive::OnDestroy() {
	__sub_0043CD80(this, nullptr);
}
int32_t CUIRevive::OnSetFocus(int32_t bFocus) {
	return __sub_0043D310(this, nullptr, bFocus);
}
void CUIRevive::OnButtonClicked(uint32_t nId) {
	__sub_0043CE40(this, nullptr, nId);
}
void CUIRevive::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0043CD90(this, nullptr, wParam, lParam);
}
int32_t CUIRevive::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_0043CDA0(this, nullptr, rx, ry, ppCtrl);
}
void CUIRevive::Revive(int32_t bPremium) {
	__sub_0043CDE0(this, nullptr, bPremium);
}
void CUIRevive::Update() {
	__sub_0043CE70(this, nullptr);
}
CUIRevive& CUIRevive::operator=(const CUIRevive& arg0) {
	return _op_assign_11(this, arg0);
}
CUIRevive& CUIRevive::_op_assign_11(CUIRevive* pThis, const CUIRevive& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

