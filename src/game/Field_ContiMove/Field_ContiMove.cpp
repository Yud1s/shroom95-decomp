// Field_ContiMove.cpp
#include "Field_ContiMove.hpp"
#include "Field_ContiMove_regen.ipp"

 CField_ContiMove::~CField_ContiMove() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CField_ContiMove::_dtor_0() {
	return __sub_0014BFF0(this, nullptr);
}
 CField_ContiMove::CField_ContiMove(const CField_ContiMove& arg0) {
	_ctor_1( arg0);
}
void CField_ContiMove::_ctor_1( const CField_ContiMove& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_ContiMove::CField_ContiMove() {
	UNIMPLEMENTED; //_ctor_0();
}
void CField_ContiMove::_ctor_0() {
	return __sub_0013E5B0(this, nullptr);
}
void CField_ContiMove::Init(void* pParam) {
	__sub_0014D4C0(this, nullptr, pParam);
}
void CField_ContiMove::Update() {
	__sub_0014BFF0(this, nullptr);
}
void CField_ContiMove::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0014C520(this, nullptr, wParam, lParam);
}
void CField_ContiMove::OnPacket(long nType, CInPacket& iPacket) {
	__sub_0014D6E0(this, nullptr, nType, iPacket);
}
void CField_ContiMove::OnContiMove(CInPacket& iPacket) {
	__sub_0014D680(this, nullptr, iPacket);
}
void CField_ContiMove::OnContiState(CInPacket& iPacket) {
	__sub_0014D5A0(this, nullptr, iPacket);
}
void CField_ContiMove::OnStartField(CInPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CField_ContiMove::OnStartShipMoveField(CInPacket& iPacket) {
	__sub_0014C970(this, nullptr, iPacket);
}
void CField_ContiMove::OnWaitField(CInPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CField_ContiMove::OnMoveField(CInPacket& iPacket) {
	__sub_0014D640(this, nullptr, iPacket);
}
void CField_ContiMove::OnEndField(CInPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CField_ContiMove::OnEndShipMoveField(CInPacket& iPacket) {
	__sub_0014C9A0(this, nullptr, iPacket);
}
CField_ContiMove& CField_ContiMove::operator=(CField_ContiMove& arg0) {
	return _op_assign_15(this, arg0);
}
CField_ContiMove& CField_ContiMove::_op_assign_15(CField_ContiMove* pThis, CField_ContiMove& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CShip::~CShip() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CShip::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CShip::CShip(const CShip& arg0) {
	_ctor_1( arg0);
}
void CShip::_ctor_1( const CShip& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CShip::CShip() {
	UNIMPLEMENTED; //_ctor_0();
}
void CShip::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CShip::Init(_x_com_ptr<IWzProperty> pPropField) {
	__sub_0014C9C0(this, nullptr, CreateNakedParam(pPropField));
}
void CShip::Move(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CShip::LeaveShipMove() {
	__sub_0014C570(this, nullptr);
}
void CShip::EnterShipMove() {
	__sub_0014C770(this, nullptr);
}
void CShip::AppearShip() {
	__sub_0014D020(this, nullptr);
}
void CShip::DisappearShip() {
	__sub_0014C000(this, nullptr);
}
void CShip::MoveShip() {
	__sub_0014C2B0(this, nullptr);
}
CShip& CShip::operator=(const CShip& arg0) {
	return _op_assign_10(this, arg0);
}
CShip& CShip::_op_assign_10(CShip* pThis, const CShip& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

