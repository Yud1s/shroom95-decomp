// VecCtrlUserPreview.cpp
#include "VecCtrlUserPreview.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};
#include "VecCtrlUserPreview_regen.ipp"

 CVecCtrlUserPreview::~CVecCtrlUserPreview() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CVecCtrlUserPreview::_dtor_0() {
	return __sub_005A2050(this, nullptr);
}
 CVecCtrlUserPreview::CVecCtrlUserPreview(const CVecCtrlUserPreview& arg0) {
	_ctor_1( arg0);
}
void CVecCtrlUserPreview::_ctor_1( const CVecCtrlUserPreview& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CVecCtrlUserPreview::CVecCtrlUserPreview() {
	UNIMPLEMENTED; //_ctor_0();
}
void CVecCtrlUserPreview::_ctor_0() {
	return __sub_005A2030(this, nullptr);
}
CVecCtrlUserPreview* __cdecl CVecCtrlUserPreview::CreateInstance() {
	return __sub_005A20B0();
}
long CVecCtrlUserPreview::BeginUpdateActive() {
	return __sub_005A2070(this, nullptr);
}
int32_t CVecCtrlUserPreview::WorkUpdateActive(long arg0) {
	return __sub_005A24B0(this, nullptr, arg0);
}
void CVecCtrlUserPreview::WorkUpdateActiveLadderOrRope() {
	__sub_005A22F0(this, nullptr);
}
void CVecCtrlUserPreview::EndUpdateActive() {
	__sub_005A2150(this, nullptr);
}
int32_t CVecCtrlUserPreview::IsAbleToClimbLadderOrRope() {
	return __sub_005A2130(this, nullptr);
}
int32_t CVecCtrlUserPreview::IsStun() {
	return __sub_005A2080(this, nullptr);
}
CVecCtrlUserPreview& CVecCtrlUserPreview::operator=(const CVecCtrlUserPreview& arg0) {
	return _op_assign_10(this, arg0);
}
CVecCtrlUserPreview& CVecCtrlUserPreview::_op_assign_10(CVecCtrlUserPreview* pThis, const CVecCtrlUserPreview& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

