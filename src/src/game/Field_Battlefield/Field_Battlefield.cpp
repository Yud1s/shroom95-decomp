// Field_Battlefield.cpp
#include "Field_Battlefield.hpp"

#include "Field_Battlefield_regen.ipp"

 CField_Battlefield::~CField_Battlefield() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CField_Battlefield::_dtor_0() {
	return __sub_00149E20(this, nullptr);
}
 CField_Battlefield::CField_Battlefield(const CField_Battlefield& arg0) {
	_ctor_1( arg0);
}
void CField_Battlefield::_ctor_1( const CField_Battlefield& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_Battlefield::CField_Battlefield() {
	UNIMPLEMENTED; //_ctor_0();
}
void CField_Battlefield::_ctor_0() {
	return __sub_00149BD0(this, nullptr);
}
void CField_Battlefield::Init(void* pParam) {
	__sub_00149960(this, nullptr, pParam);
}
long CField_Battlefield::GetFieldType() {
	return __sub_00149E00(this, nullptr);
}
void CField_Battlefield::DecodeFieldSpecificData(CUser* pUser, CInPacket& iPacket) {
	__sub_00149980(this, nullptr, pUser, iPacket);
}
void CField_Battlefield::OnPacket(long nType, CInPacket& iPacket) {
	__sub_00149A20(this, nullptr, nType, iPacket);
}
ZXString<char> CField_Battlefield::GetTeamMessageText(long nTeam) {
	ZXString<char> ret;
	return *__sub_00149EF0(this, nullptr, &ret, nTeam);
}
void CField_Battlefield::OnEnter(CInPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CField_Battlefield::OnScoreUpdate(CInPacket& iPacket) {
	__sub_001499A0(this, nullptr, iPacket);
}
void CField_Battlefield::OnTeamChanged(CInPacket& iPacket) {
	__sub_001499E0(this, nullptr, iPacket);
}
void CField_Battlefield::OnClock(CInPacket& iPacket) {
	__sub_00149AD0(this, nullptr, iPacket);
}
void CField_Battlefield::SetUserTeam(CUser* pUser, long nTeam) {
	__sub_00149870(this, nullptr, pUser, nTeam);
}
void CField_Battlefield::DrawScore() {
	__sub_001498D0(this, nullptr);
}
CField_Battlefield& CField_Battlefield::operator=(CField_Battlefield& arg0) {
	return _op_assign_14(this, arg0);
}
CField_Battlefield& CField_Battlefield::_op_assign_14(CField_Battlefield* pThis, CField_Battlefield& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

