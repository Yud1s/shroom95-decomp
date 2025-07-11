// Employee.cpp
#include "Employee.hpp"
#include "Employee_regen.ipp"

 CEmployee::~CEmployee() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CEmployee::_dtor_0() {
	return __sub_00118030(this, nullptr);
}
 CEmployee::CEmployee(const CEmployee& arg0) {
	_ctor_1( arg0);
}
void CEmployee::_ctor_1( const CEmployee& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CEmployee::CEmployee(unsigned long dwEmployerID, CEmployeeTemplate* pEmployeeTemplate) {
	_ctor_0( dwEmployerID, pEmployeeTemplate);
}
void CEmployee::_ctor_0( unsigned long dwEmployerID, CEmployeeTemplate* pEmployeeTemplate) {
	return __sub_00117E00(this, nullptr, dwEmployerID, pEmployeeTemplate);
}
unsigned long CEmployee::GetEmployerID() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
unsigned long CEmployee::GetTemplateID() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
unsigned long CEmployee::GetMiniRoomSN() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
unsigned long CEmployee::GetMiniRoomType() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZXString<char> CEmployee::GetNameTag() {
	return __sub_003F9520(this, nullptr);
}
void CEmployee::Init(CInPacket& iPacket) {
	__sub_001181E0(this, nullptr, iPacket);
}
void CEmployee::SetBalloon(CInPacket& iPacket) {
	__sub_00118560(this, nullptr, iPacket);
}
long CEmployee::GetMoveAction() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CEmployee::SetMoveAction(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CEmployee::IsOnPlayingOneTimeAction() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CEmployee::GetOneTimeAction() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CEmployee::ResetOneTimeAction() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CEmployee::GetCurrentAction(long* arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CEmployee::Update() {
	__sub_00117AA0(this, nullptr);
}
long CEmployee::GetType() {
	return __sub_00117F40(this, nullptr);
}
long CEmployee::OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl* pvc) {
	return __sub_00117F50(this, nullptr, nInputX, nInputY, nCurMoveAction, pvc);
}
void CEmployee::OnLayerZChanged(const CVecCtrl* pvc) {
	__sub_00117520(this, nullptr, pvc);
}
const ZRef<CAttrShoe> CEmployee::GetShoeAttr() {
	return __sub_00118000(this, nullptr);
}
const tagPOINT CEmployee::GetPos() {
	return __sub_00117F60(this, nullptr);
}
const tagPOINT CEmployee::GetPosPrev() {
	return __sub_00117F80(this, nullptr);
}
long CEmployee::GetZMass() {
	return __sub_00117FA0(this, nullptr);
}
void CEmployee::ClearActionLayer() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CEmployee::PrepareActionLayer() {
	__sub_00117690(this, nullptr);
}
void CEmployee::SetLayerZ() {
	__sub_001174B0(this, nullptr);
}
const CChatBalloon& CEmployee::GetChatBalloon() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CEmployee::GetMiniRoomBalloonRect(tagRECT& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CEmployee& CEmployee::operator=(const CEmployee& arg0) {
	return _op_assign_32(this, arg0);
}
CEmployee& CEmployee::_op_assign_32(CEmployee* pThis, const CEmployee& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

CEmployee* __cdecl CreateEmployee(unsigned long dwEmployerID, CEmployeeTemplate* pEmployeeTemplate) {
	return __sub_00118160(dwEmployerID, pEmployeeTemplate);
}
