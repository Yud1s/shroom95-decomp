// Scoreboard_Battlefield.cpp
#include "Scoreboard_Battlefield.hpp"
#include "Scoreboard_Battlefield_regen.ipp"

 CScoreboard_Battlefield::~CScoreboard_Battlefield() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CScoreboard_Battlefield::_dtor_0() {
	return __sub_002DA140(this, nullptr);
}
 CScoreboard_Battlefield::CScoreboard_Battlefield(const CScoreboard_Battlefield& arg0) {
	_ctor_1( arg0);
}
void CScoreboard_Battlefield::_ctor_1( const CScoreboard_Battlefield& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CScoreboard_Battlefield::CScoreboard_Battlefield() {
	UNIMPLEMENTED; //_ctor_0();
}
void CScoreboard_Battlefield::_ctor_0() {
	return __sub_002DA0D0(this, nullptr);
}
void CScoreboard_Battlefield::OnCreate(void* pData) {
	__sub_002DA8B0(this, nullptr, pData);
}
void CScoreboard_Battlefield::Draw(const tagRECT* pRect) {
	__sub_002DA1D0(this, nullptr, pRect);
}
void CScoreboard_Battlefield::SetScore(long arg0, long arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
_x_com_ptr<IWzProperty> CScoreboard_Battlefield::GetFontTime() {
	return __sub_002DA6F0(this, nullptr);
}
void CScoreboard_Battlefield::LoadClockCanvas(ZArray<_x_com_ptr<IWzCanvas> >& apClockCanvas, _x_com_ptr<IWzProperty> pClockDigit) {
	__sub_002DAE70(this, nullptr, apClockCanvas, CreateNakedParam(pClockDigit));
}
CScoreboard_Battlefield& CScoreboard_Battlefield::operator=(const CScoreboard_Battlefield& arg0) {
	return _op_assign_8(this, arg0);
}
CScoreboard_Battlefield& CScoreboard_Battlefield::_op_assign_8(CScoreboard_Battlefield* pThis, const CScoreboard_Battlefield& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

