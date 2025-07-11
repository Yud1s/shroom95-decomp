// Field_KillCount.cpp
#include "Field_KillCount.hpp"
#include "Field_KillCount_regen.ipp"

 CField_KillCount::~CField_KillCount() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CField_KillCount::_dtor_0() {
	return __sub_001540F0(this, nullptr);
}
 CField_KillCount::CField_KillCount(const CField_KillCount& arg0) {
	_ctor_1( arg0);
}
void CField_KillCount::_ctor_1( const CField_KillCount& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_KillCount::CField_KillCount() {
	UNIMPLEMENTED; //_ctor_0();
}
void CField_KillCount::_ctor_0() {
	return __sub_00154080(this, nullptr);
}
long CField_KillCount::GetFieldType() {
	return __sub_001540D0(this, nullptr);
}
void CField_KillCount::Init(void* pParam) {
	__sub_001541F0(this, nullptr, pParam);
}
void CField_KillCount::Update() {
	__sub_00154C80(this, nullptr);
}
void CField_KillCount::OnPacket(long nType, CInPacket& iPacket) {
	__sub_00154050(this, nullptr, nType, iPacket);
}
void CField_KillCount::OnKillCountInfo(CInPacket& iPacket) {
	__sub_00154030(this, nullptr, iPacket);
}
int32_t CField_KillCount::_SetKillCountInfo() {
	return __sub_00154010(this, nullptr);
}
void CField_KillCount::_UpdateCountInfo() {
	__sub_00154900(this, nullptr);
}
CField_KillCount& CField_KillCount::operator=(CField_KillCount& arg0) {
	return _op_assign_10(this, arg0);
}
CField_KillCount& CField_KillCount::_op_assign_10(CField_KillCount* pThis, CField_KillCount& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

