// UserPreview.cpp
#include "UserPreview.hpp"
#include "UserPreview_regen.ipp"

 CUserPreview::~CUserPreview() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUserPreview::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUserPreview::CUserPreview(const CUserPreview& arg0) {
	_ctor_1( arg0);
}
void CUserPreview::_ctor_1( const CUserPreview& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUserPreview::CUserPreview() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUserPreview::_ctor_0() {
	return __sub_000BBF00(this, nullptr);
}
void CUserPreview::Init_(long arg0, long arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUserPreview::Init() {
	__sub_0054E310(this, nullptr);
}
void CUserPreview::InitObjects() {
	__sub_0054E100(this, nullptr);
}
unsigned char CUserPreview::GetCharacterLevel() {
	return __sub_0054E090(this, nullptr);
}
const SecondaryStat& CUserPreview::GetSecondaryStat() {
	return __sub_0054DF60(this, nullptr);
}
int32_t CUserPreview::IsLocalUser() {
	return __sub_000BC070(this, nullptr);
}
int32_t CUserPreview::IsPreview() {
	return __sub_000BC080(this, nullptr);
}
int32_t CUserPreview::IsRemoteUser() {
	return __sub_000BC090(this, nullptr);
}
long CUserPreview::OnPetActivated(CInPacket& iPacket) {
	return __sub_000BC0A0(this, nullptr, iPacket);
}
long CUserPreview::GetJobCode() {
	return __sub_000BC0B0(this, nullptr);
}
void CUserPreview::SetPet(long nPetID) {
	__sub_0054E260(this, nullptr, nPetID);
}
void CUserPreview::SetRiding(long nTamingMobID) {
	__sub_0054DF40(this, nullptr, nTamingMobID);
}
void CUserPreview::Update() {
	__sub_00553730(this, nullptr);
}
void CUserPreview::OnChat(ZXString<char> sText) {
	__sub_0054E530(this, nullptr, CreateNakedParam(sText));
}
void CUserPreview::DoMeleeAttack(long nWeaponItemID, long nAttackActionType) {
	__sub_0054E620(this, nullptr, nWeaponItemID, nAttackActionType);
}
void CUserPreview::DoShootAttack(long nWeaponItemID, long nBulletItemID) {
	__sub_0054E9C0(this, nullptr, nWeaponItemID, nBulletItemID);
}
void CUserPreview::ShowMessageBox(long arg0, long arg1) {
	__sub_0054EF90(this, nullptr, arg0, arg1);
}
void CUserPreview::ShowPersonalShop(long arg0, long arg1) {
	__sub_0054FA90(this, nullptr, arg0, arg1);
}
void CUserPreview::ShowEntrustedShop(long arg0, long arg1) {
	__sub_00550110(this, nullptr, arg0, arg1);
}
void CUserPreview::ShowADBoard(long nItemID, long nCommSN) {
	__sub_0054E8A0(this, nullptr, nItemID, nCommSN);
}
void CUserPreview::ShowFireCrack(long arg0) {
	__sub_005524A0(this, nullptr, arg0);
}
void CUserPreview::DeleteFireCrack() {
	__sub_0054DFE0(this, nullptr);
}
long CUserPreview::GetMessageBoxSN() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUserPreview::GetPersonalShopSN() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUserPreview::GetEntrustedShopSN() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
const ZRef<CAttrShoe> CUserPreview::GetShoeAttr() {
	return __sub_0054E010(this, nullptr);
}
void CUserPreview::SetStun(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUserPreview::IsStun() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUserPreview::ShowMobHitByBullet() {
	__sub_00553150(this, nullptr);
}
CUserPreview& CUserPreview::operator=(CUserPreview& arg0) {
	return _op_assign_35(this, arg0);
}
CUserPreview& CUserPreview::_op_assign_35(CUserPreview* pThis, CUserPreview& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

