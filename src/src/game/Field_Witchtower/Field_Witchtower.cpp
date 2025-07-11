// Field_Witchtower.cpp
#include "Field_Witchtower.hpp"
#include "Field_Witchtower_regen.ipp"

 CScoreboard_Witchtower::~CScoreboard_Witchtower() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CScoreboard_Witchtower::_dtor_0() {
	return __sub_00164A00(this, nullptr);
}
 CScoreboard_Witchtower::CScoreboard_Witchtower(const CScoreboard_Witchtower& arg0) {
	_ctor_1( arg0);
}
void CScoreboard_Witchtower::_ctor_1( const CScoreboard_Witchtower& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CScoreboard_Witchtower::CScoreboard_Witchtower() {
	UNIMPLEMENTED; //_ctor_0();
}
void CScoreboard_Witchtower::_ctor_0() {
	return __sub_001649A0(this, nullptr);
}
void CScoreboard_Witchtower::OnCreate(void* pData) {
	__sub_00164E50(this, nullptr, pData);
}
void CScoreboard_Witchtower::Draw(const tagRECT* pRect) {
	__sub_00164BD0(this, nullptr, pRect);
}
int32_t CScoreboard_Witchtower::OnSetFocus(int32_t bFocus) {
	return __sub_001649E0(this, nullptr, bFocus);
}
void CScoreboard_Witchtower::SetScore(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CScoreboard_Witchtower& CScoreboard_Witchtower::operator=(const CScoreboard_Witchtower& arg0) {
	return _op_assign_7(this, arg0);
}
CScoreboard_Witchtower& CScoreboard_Witchtower::_op_assign_7(CScoreboard_Witchtower* pThis, const CScoreboard_Witchtower& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_Witchtower::~CField_Witchtower() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CField_Witchtower::_dtor_0() {
	return __sub_00164980(this, nullptr);
}
 CField_Witchtower::CField_Witchtower(const CField_Witchtower& arg0) {
	_ctor_1( arg0);
}
void CField_Witchtower::_ctor_1( const CField_Witchtower& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_Witchtower::CField_Witchtower() {
	UNIMPLEMENTED; //_ctor_0();
}
void CField_Witchtower::_ctor_0() {
	return __sub_0013F080(this, nullptr);
}
void CField_Witchtower::Close() {
	__sub_00164980(this, nullptr);
}
long CField_Witchtower::GetFieldType() {
	return __sub_0013F0C0(this, nullptr);
}
void CField_Witchtower::OnPacket(long nType, CInPacket& iPacket) {
	__sub_00164BA0(this, nullptr, nType, iPacket);
}
void CField_Witchtower::OnScoreUpdate(CInPacket& iPacket) {
	__sub_00164AD0(this, nullptr, iPacket);
}
CField_Witchtower& CField_Witchtower::operator=(CField_Witchtower& arg0) {
	return _op_assign_7(this, arg0);
}
CField_Witchtower& CField_Witchtower::_op_assign_7(CField_Witchtower* pThis, CField_Witchtower& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

