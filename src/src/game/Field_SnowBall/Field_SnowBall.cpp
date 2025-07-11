// Field_SnowBall.cpp
#include "Field_SnowBall.hpp"
#include "Field_SnowBall_regen.ipp"

RANGE CField_SnowBall::ms_rgBall{};

CField_SnowBall::~CField_SnowBall()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CField_SnowBall::_dtor_0() {
	return __sub_001612D0(this, nullptr);
}
 CField_SnowBall::CField_SnowBall(const CField_SnowBall& arg0) {
	_ctor_1( arg0);
}
void CField_SnowBall::_ctor_1( const CField_SnowBall& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_SnowBall::CField_SnowBall() {
	UNIMPLEMENTED; //_ctor_0();
}
void CField_SnowBall::_ctor_0() {
	return __sub_0013E410(this, nullptr);
}
void CField_SnowBall::Init(void* arg0) {
	__sub_00161A10(this, nullptr, arg0);
}
void CField_SnowBall::Update() {
	__sub_001612D0(this, nullptr);
}
void CField_SnowBall::OnPacket(long nType, CInPacket& iPacket) {
	__sub_00162290(this, nullptr, nType, iPacket);
}
int32_t CField_SnowBall::BasicActionAttack() {
	return __sub_001617B0(this, nullptr);
}
void CField_SnowBall::OnSnowBallState(CInPacket& iPacket) {
	__sub_00160AB0(this, nullptr, iPacket);
}
void CField_SnowBall::OnSnowBallHit(CInPacket& iPacket) {
	__sub_001619D0(this, nullptr, iPacket);
}
void CField_SnowBall::OnSnowBallMsg(CInPacket& iPacket) {
	__sub_00162040(this, nullptr, iPacket);
}
void CField_SnowBall::OnSnowBallTouch(CInPacket& iPacket) {
	__sub_00160510(this, nullptr, iPacket);
}
void CField_SnowBall::SnowBallHit(long nTarget, long nDamage, long tDelay) {
	__sub_001619A0(this, nullptr, nTarget, nDamage, tDelay);
}
int32_t __cdecl CField_SnowBall::IsInRange(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CField_SnowBall& CField_SnowBall::operator=(CField_SnowBall& arg0) {
	return _op_assign_13(this, arg0);
}
CField_SnowBall& CField_SnowBall::_op_assign_13(CField_SnowBall* pThis, CField_SnowBall& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

