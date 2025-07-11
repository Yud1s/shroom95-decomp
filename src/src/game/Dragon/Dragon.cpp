// Dragon.cpp
#include "Dragon.hpp"
#include "Dragon_regen.ipp"

 CAttrShoe::~CAttrShoe() {
}
void CAttrShoe::_dtor_0() {
	return __sub_0010B900(this, nullptr);
}
 CAttrShoe::CAttrShoe(const CAttrShoe& arg0) {
	_ctor_1( arg0);
}
void CAttrShoe::_ctor_1( const CAttrShoe& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CAttrShoe::CAttrShoe(int32_t bUserFlying) {
	//_ctor_0( arg0);
 	mass = 100.;
 	walkAcc = 1.;
 	walkSpeed = 1.;
 	walkDrag = 1.;
 	walkSlant = 0.9;
 	walkJump = 1.;
 	swimAcc = 1.;
 	swimSpeedH = 1.;
 	swimSpeedV = 1.;

 	if (bUserFlying)
 	{
 		flyAcc = 1.;
 		flySpeed = 1.;
 	}
 	else
 	{
 		flyAcc = 0.;
 		flySpeed = 0.;
 	}
}
void CAttrShoe::_ctor_0( int32_t arg0) {
	//return __sub_0010B710(this, nullptr, arg0);
 	new(this) CAttrShoe(arg0);
}
ZRef<CAttrShoe> CAttrShoe::CreateAlertAttribute() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CAttrShoe& CAttrShoe::operator=(CAttrShoe& arg0) {
	return _op_assign_4(this, arg0);
}
CAttrShoe& CAttrShoe::_op_assign_4(CAttrShoe* pThis, CAttrShoe& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CDragon::~CDragon() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CDragon::_dtor_0() {
	return __sub_0010DB30(this, nullptr);
}
 CDragon::CDragon(const CDragon& arg0) {
	_ctor_1( arg0);
}
void CDragon::_ctor_1( const CDragon& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CDragon::CDragon() {
	UNIMPLEMENTED; //_ctor_0();
}
void CDragon::_ctor_0() {
	return __sub_0010D8E0(this, nullptr);
}
int32_t CDragon::IsLeft() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CDragon::GetHeight() {
	return __sub_0010AF40(this, nullptr);
}
int32_t CDragon::GetBodyRect(tagRECT& rc, int32_t bContinuous) {
	return __sub_0010C150(this, nullptr, rc, bContinuous);
}
long CDragon::GetMoveAction() {
	return __sub_0010AE20(this, nullptr);
}
void CDragon::SetMoveAction(long nMA, int32_t bReload) {
	__sub_0010BE60(this, nullptr, nMA, bReload);
}
long CDragon::GetCurrentAction(long* pnDir) {
	return __sub_0010B370(this, nullptr, pnDir);
}
long CDragon::GetOneTimeAction() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CDragon::SetOneTimeAction(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CDragon::IsOnPlayingOneTimeAction() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CDragon::ResetOneTimeAction() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CDragon::SetAttackAction(long nSkillID, long tLastKeyDown) {
	__sub_0010D570(this, nullptr, nSkillID, tLastKeyDown);
}
long CDragon::GetAttackSpeed() {
	return __sub_00503AB0(this, nullptr);
}
long CDragon::MoveAction2RawAction(long arg0, long* arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CDragon::ProcessAction(long tCur) {
	__sub_0010BF00(this, nullptr, tCur);
}
void CDragon::ChaseTarget(int32_t bChase, IVecCtrlOwner* pTarget) {
	__sub_0010AD10(this, nullptr, bChase, pTarget);
}
void CDragon::CreateEffect(long nType) {
	__sub_0010D5E0(this, nullptr, nType);
}
void CDragon::DeleteEffect(long nType) {
	__sub_0010C430(this, nullptr, nType);
}
void CDragon::CreateKeyDownBar(long nSkillID) {
	__sub_0010E6D0(this, nullptr, nSkillID);
}
void CDragon::DestoryKeyDownBar() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CDragon::DrawKeyDownBar() {
	__sub_0010C530(this, nullptr);
}
void CDragon::UpdateKeyDownBar(long nSkillID, long tLastKeyDown) {
	__sub_0010D570(this, nullptr, nSkillID, tLastKeyDown);
}
long CDragon::GetLayerZ() {
	return __sub_00503AB0(this, nullptr);
}
void CDragon::SetLayerZ() {
	__sub_0010ACC0(this, nullptr);
}
int32_t CDragon::NeedToTalk(long x, long y) {
	return __sub_0010C250(this, nullptr, x, y);
}
void CDragon::OnCreated(CUser* pOwner, CInPacket& iPacket) {
	__sub_0010DC90(this, nullptr, pOwner, iPacket);
}
void CDragon::OnMove(CInPacket& iPacket) {
	__sub_0010AD30(this, nullptr, iPacket);
}
long CDragon::GetType() {
	return __sub_0010DA20(this, nullptr);
}
long CDragon::OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl* pvc) {
	return __sub_0010B3F0(this, nullptr, nInputX, nInputY, nCurMoveAction, pvc);
}
void CDragon::OnLayerZChanged(const CVecCtrl* pvc) {
	__sub_0010AE40(this, nullptr, pvc);
}
const ZRef<CAttrShoe> CDragon::GetShoeAttr() {
	return __sub_0010DAA0(this, nullptr);
}
const tagPOINT CDragon::GetPos() {
	return __sub_0010DAD0(this, nullptr);
}
const tagPOINT CDragon::GetPosPrev() {
	return __sub_0010DB00(this, nullptr);
}
long CDragon::GetZMass() {
	return __sub_0010DA50(this, nullptr);
}
_x_com_ptr<IWzVector2D> CDragon::GetVecCtrl() {
	return __sub_004DF310(this, nullptr);
}
void CDragon::Update() {
	__sub_0010EAF0(this, nullptr);
}
long __fastcall CDragon::_ZtlSecureGet_m_nMoveAction() const {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long __fastcall CDragon::_ZtlSecurePut_m_nMoveAction(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long __fastcall CDragon::_ZtlSecureGet_m_nOneTimeAction() const {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long __fastcall CDragon::_ZtlSecurePut_m_nOneTimeAction(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CDragon::PrepareActionLayer() {
	__sub_0010BA70(this, nullptr);
}
void CDragon::SetFrameInfo(ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY> >& l, __POSITION* pos) {
	__sub_0010AE70(this, nullptr, l, pos);
}
void CDragon::UpdateQuestInfo() {
	__sub_0010E100(this, nullptr);
}
CDragon& CDragon::operator=(const CDragon& arg0) {
	return _op_assign_48(this, arg0);
}
CDragon& CDragon::_op_assign_48(CDragon* pThis, const CDragon& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

