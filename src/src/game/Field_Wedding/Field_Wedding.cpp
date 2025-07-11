// Field_Wedding.cpp
#include "Field_Wedding.hpp"
#include "Field_Wedding_regen.ipp"

 CField_Wedding::~CField_Wedding() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CField_Wedding::_dtor_0() {
	return __sub_00163A20(this, nullptr);
}
 CField_Wedding::CField_Wedding(const CField_Wedding& arg0) {
	_ctor_1( arg0);
}
void CField_Wedding::_ctor_1( const CField_Wedding& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_Wedding::CField_Wedding() {
	UNIMPLEMENTED; //_ctor_0();
}
void CField_Wedding::_ctor_0() {
	return __sub_00163960(this, nullptr);
}
void CField_Wedding::OnPacket(long nType, CInPacket& iPacket) {
	__sub_00164940(this, nullptr, nType, iPacket);
}
void CField_Wedding::Update() {
	__sub_001638F0(this, nullptr);
}
long CField_Wedding::GetFieldType() {
	return __sub_00163A00(this, nullptr);
}
void CField_Wedding::SetBlessEffect(int32_t bSet) {
	__sub_00163B60(this, nullptr, bSet);
}
void CField_Wedding::OnWeddingProgress(CInPacket& iPacket) {
	__sub_001640F0(this, nullptr, iPacket);
}
void CField_Wedding::OnWeddingCeremonyEnd(CInPacket& iPacket) {
	__sub_001640A0(this, nullptr, iPacket);
}
CField_Wedding& CField_Wedding::operator=(CField_Wedding& arg0) {
	return _op_assign_9(this, arg0);
}
CField_Wedding& CField_Wedding::_op_assign_9(CField_Wedding* pThis, CField_Wedding& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

