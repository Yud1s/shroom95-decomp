// Field_Massacre.cpp
#include "Field_Massacre.hpp"
#include "Field_Massacre_regen.ipp"

 CField_MassacreResult::~CField_MassacreResult() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CField_MassacreResult::_dtor_0() {
	return __sub_00156850(this, nullptr);
}
 CField_MassacreResult::CField_MassacreResult(const CField_MassacreResult& arg0) {
	_ctor_1( arg0);
}
void CField_MassacreResult::_ctor_1( const CField_MassacreResult& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_MassacreResult::CField_MassacreResult() {
	UNIMPLEMENTED; //_ctor_0();
}
void CField_MassacreResult::_ctor_0() {
	return __sub_001567F0(this, nullptr);
}
long CField_MassacreResult::GetFieldType() {
	return __sub_00156830(this, nullptr);
}
void CField_MassacreResult::Init(void* pParam) {
	__sub_001591C0(this, nullptr, pParam);
}
void CField_MassacreResult::OnPacket(long nType, CInPacket& iPacket) {
	__sub_0015A1D0(this, nullptr, nType, iPacket);
}
void CField_MassacreResult::OnMassacreResult(CInPacket& iPacket) {
	__sub_001596C0(this, nullptr, iPacket);
}
CField_MassacreResult& CField_MassacreResult::operator=(CField_MassacreResult& arg0) {
	return _op_assign_7(this, arg0);
}
CField_MassacreResult& CField_MassacreResult::_op_assign_7(CField_MassacreResult* pThis, CField_MassacreResult& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_Massacre::~CField_Massacre() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CField_Massacre::_dtor_0() {
	return __sub_001565E0(this, nullptr);
}
 CField_Massacre::CField_Massacre(const CField_Massacre& arg0) {
	_ctor_1( arg0);
}
void CField_Massacre::_ctor_1( const CField_Massacre& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_Massacre::CField_Massacre() {
	UNIMPLEMENTED; //_ctor_0();
}
void CField_Massacre::_ctor_0() {
	return __sub_00156490(this, nullptr);
}
long CField_Massacre::GetFieldType() {
	return __sub_001565B0(this, nullptr);
}
void CField_Massacre::Init(void* pParam) {
	__sub_001579D0(this, nullptr, pParam);
}
void CField_Massacre::Update() {
	__sub_00157530(this, nullptr);
}
void CField_Massacre::OnPacket(long nType, CInPacket& iPacket) {
	__sub_00156460(this, nullptr, nType, iPacket);
}
void CField_Massacre::OnClock(CInPacket& iPacket) {
	__sub_00156AF0(this, nullptr, iPacket);
}
void CField_Massacre::OnMassacreIncGauge(CInPacket& iPacket) {
	__sub_00156200(this, nullptr, iPacket);
}
int32_t CField_Massacre::CanUseSpecialArts() {
	return __sub_001565C0(this, nullptr);
}
int32_t CField_Massacre::_SetMassacreInfo(const CWvsContext::Massacre& massacre_info) {
	return __sub_00155F90(this, nullptr, massacre_info);
}
void CField_Massacre::_UpdatePoint() {
	__sub_00156220(this, nullptr);
}
void CField_Massacre::_SetDecGauge(long nVal) {
	__sub_00156040(this, nullptr, nVal);
}
void CField_Massacre::UpdateKeyAnimation() {
	__sub_00156BF0(this, nullptr);
}
CField_Massacre& CField_Massacre::operator=(CField_Massacre& arg0) {
	return _op_assign_14(this, arg0);
}
CField_Massacre& CField_Massacre::_op_assign_14(CField_Massacre* pThis, CField_Massacre& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTimerboard_Massacre::~CTimerboard_Massacre() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CTimerboard_Massacre::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTimerboard_Massacre::CTimerboard_Massacre(const CTimerboard_Massacre& arg0) {
	_ctor_1( arg0);
}
void CTimerboard_Massacre::_ctor_1( const CTimerboard_Massacre& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTimerboard_Massacre::CTimerboard_Massacre() {
	UNIMPLEMENTED; //_ctor_0();
}
void CTimerboard_Massacre::_ctor_0() {
	return __sub_001569E0(this, nullptr);
}
void CTimerboard_Massacre::OnCreate(void* pData) {
	__sub_001575E0(this, nullptr, pData);
}
void CTimerboard_Massacre::Draw(const tagRECT* pRect) {
	__sub_00157100(this, nullptr, pRect);
}
long CTimerboard_Massacre::GetRemainSec() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
_x_com_ptr<IWzProperty> CTimerboard_Massacre::GetFontTime() {
	return __sub_00157810(this, nullptr);
}
void CTimerboard_Massacre::LoadClockCanvas(ZArray<_x_com_ptr<IWzCanvas> >& apClockCanvas, _x_com_ptr<IWzProperty> pClockDigit) {
	__sub_00157390(this, nullptr, apClockCanvas, CreateNakedParam(pClockDigit));
}
CTimerboard_Massacre& CTimerboard_Massacre::operator=(const CTimerboard_Massacre& arg0) {
	return _op_assign_8(this, arg0);
}
CTimerboard_Massacre& CTimerboard_Massacre::_op_assign_8(CTimerboard_Massacre* pThis, const CTimerboard_Massacre& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

