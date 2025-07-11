// VecCtrlPet.cpp
#include "VecCtrlPet.hpp"
#include "VecCtrlPet_regen.ipp"

 CVecCtrlPet::~CVecCtrlPet() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CVecCtrlPet::_dtor_0() {
	return __sub_0059E420(this, nullptr);
}
 CVecCtrlPet::CVecCtrlPet(const CVecCtrlPet& arg0) {
	_ctor_1( arg0);
}
void CVecCtrlPet::_ctor_1( const CVecCtrlPet& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CVecCtrlPet::CVecCtrlPet() {
	UNIMPLEMENTED; //_ctor_0();
}
void CVecCtrlPet::_ctor_0() {
	return __sub_0059E400(this, nullptr);
}
void CVecCtrlPet::Init(IVecCtrlOwner* pOwner, long nMoveAbility) {
	__sub_0059E440(this, nullptr, pOwner, nMoveAbility);
}
void CVecCtrlPet::SetActive(int32_t bActive, long x, long y, long vx, long vy, long nMoveAction, CStaticFoothold* pfh) {
	__sub_0059E470(this, nullptr, bActive, x, y, vx, vy, nMoveAction, pfh);
}
int32_t CVecCtrlPet::CollisionDetectWalk(const RelPos& p1, long& tElapse, int32_t bOffsetSkip) {
	return __sub_0059E4C0(this, nullptr, p1, tElapse, bOffsetSkip);
}
void CVecCtrlPet::SetPositionContext(long nPositionContext) {
	__sub_0059E4B0(this, nullptr, nPositionContext);
}
void CVecCtrlPet::SetNearDropDirection(long nPositionContext) {
	__sub_0059E4B0(this, nullptr, nPositionContext);
}
CVecCtrlPet* __cdecl CVecCtrlPet::CreateInstance() {
	return __sub_0059E730();
}
void CVecCtrlPet::ClearMoveContext() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CVecCtrlPet::WorkUpdateActive(long pPet) {
	return __sub_0059E960(this, nullptr, pPet);
}
void CVecCtrlPet::EndUpdateActive() {
	__sub_0059F5A0(this, nullptr);
}
void CVecCtrlPet::WorkUpdateActiveLadderOrRope() {
	__sub_0059E7B0(this, nullptr);
}
CVecCtrlPet& CVecCtrlPet::operator=(const CVecCtrlPet& arg0) {
	return _op_assign_13(this, arg0);
}
CVecCtrlPet& CVecCtrlPet::_op_assign_13(CVecCtrlPet* pThis, const CVecCtrlPet& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

