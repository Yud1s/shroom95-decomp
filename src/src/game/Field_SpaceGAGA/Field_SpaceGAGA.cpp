// Field_SpaceGAGA.cpp
#include "Field_SpaceGAGA.hpp"
#include "Field_SpaceGAGA_regen.ipp"

 CTimerboard_SpaceGAGA::~CTimerboard_SpaceGAGA() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CTimerboard_SpaceGAGA::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTimerboard_SpaceGAGA::CTimerboard_SpaceGAGA(const CTimerboard_SpaceGAGA& arg0) {
	_ctor_1( arg0);
}
void CTimerboard_SpaceGAGA::_ctor_1( const CTimerboard_SpaceGAGA& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTimerboard_SpaceGAGA::CTimerboard_SpaceGAGA() {
	UNIMPLEMENTED; //_ctor_0();
}
void CTimerboard_SpaceGAGA::_ctor_0() {
	return __sub_001624C0(this, nullptr);
}
void CTimerboard_SpaceGAGA::OnCreate(void* pData) {
	__sub_00162BB0(this, nullptr, pData);
}
void CTimerboard_SpaceGAGA::Draw(const tagRECT* pRect) {
	__sub_001626C0(this, nullptr, pRect);
}
_x_com_ptr<IWzProperty> CTimerboard_SpaceGAGA::GetFontTime() {
	return __sub_001629F0(this, nullptr);
}
void CTimerboard_SpaceGAGA::LoadClockCanvas(ZArray<_x_com_ptr<IWzCanvas> >& apClockCanvas, _x_com_ptr<IWzProperty> pClockDigit) {
	__sub_00162DE0(this, nullptr, apClockCanvas, CreateNakedParam(pClockDigit));
}
CTimerboard_SpaceGAGA& CTimerboard_SpaceGAGA::operator=(const CTimerboard_SpaceGAGA& arg0) {
	return _op_assign_7(this, arg0);
}
CTimerboard_SpaceGAGA& CTimerboard_SpaceGAGA::_op_assign_7(CTimerboard_SpaceGAGA* pThis, const CTimerboard_SpaceGAGA& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_SpaceGAGA::~CField_SpaceGAGA() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CField_SpaceGAGA::_dtor_0() {
	return __sub_001623C0(this, nullptr);
}
 CField_SpaceGAGA::CField_SpaceGAGA(const CField_SpaceGAGA& arg0) {
	_ctor_1( arg0);
}
void CField_SpaceGAGA::_ctor_1( const CField_SpaceGAGA& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_SpaceGAGA::CField_SpaceGAGA() {
	UNIMPLEMENTED; //_ctor_0();
}
void CField_SpaceGAGA::_ctor_0() {
	return __sub_00162360(this, nullptr);
}
long CField_SpaceGAGA::GetFieldType() {
	return __sub_001623A0(this, nullptr);
}
void CField_SpaceGAGA::OnClock(CInPacket& iPacket) {
	__sub_001625D0(this, nullptr, iPacket);
}
CField_SpaceGAGA& CField_SpaceGAGA::operator=(CField_SpaceGAGA& arg0) {
	return _op_assign_5(this, arg0);
}
CField_SpaceGAGA& CField_SpaceGAGA::_op_assign_5(CField_SpaceGAGA* pThis, CField_SpaceGAGA& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

