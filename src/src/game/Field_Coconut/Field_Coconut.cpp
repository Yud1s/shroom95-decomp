// Field_Coconut.cpp
#include "Field_Coconut.hpp"
#include "Field_Coconut_regen.ipp"

 CField_Coconut::~CField_Coconut() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CField_Coconut::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_Coconut::CField_Coconut(const CField_Coconut& arg0) {
	_ctor_1( arg0);
}
void CField_Coconut::_ctor_1( const CField_Coconut& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_Coconut::CField_Coconut() {
	UNIMPLEMENTED; //_ctor_0();
}
void CField_Coconut::_ctor_0() {
	return __sub_0013E850(this, nullptr);
}
void CField_Coconut::Init(void* arg0) {
	__sub_0014AF20(this, nullptr, arg0);
}
void CField_Coconut::Update() {
	__sub_0014BE80(this, nullptr);
}
void CField_Coconut::OnPacket(long nType, CInPacket& iPacket) {
	__sub_0014BFB0(this, nullptr, nType, iPacket);
}
void CField_Coconut::DecodeFieldSpecificData(CUser* pUser, CInPacket& iPacket) {
	__sub_0014A0A0(this, nullptr, pUser, iPacket);
}
int32_t CField_Coconut::BasicActionAttack() {
	return __sub_0014A5E0(this, nullptr);
}
void CField_Coconut::OnCoconutScore(CInPacket& iPacket) {
	__sub_0014BF70(this, nullptr, iPacket);
}
void CField_Coconut::OnCoconutHit(CInPacket& iPacket) {
	__sub_0014A470(this, nullptr, iPacket);
}
void CField_Coconut::OnClock(CInPacket& iPacket) {
	__sub_0014A100(this, nullptr, iPacket);
}
void CField_Coconut::HandleCtrlKeyDown() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CField_Coconut::DrawBoard() {
	__sub_0014A750(this, nullptr);
}
ZXString<char> __cdecl CField_Coconut::GetObjectName(long n) {
	return __sub_0014A510(n);
}
CField_Coconut& CField_Coconut::operator=(CField_Coconut& arg0) {
	return _op_assign_14(this, arg0);
}
CField_Coconut& CField_Coconut::_op_assign_14(CField_Coconut* pThis, CField_Coconut& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

