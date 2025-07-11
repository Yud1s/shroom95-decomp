// BattleRecordMan.cpp
#include "BattleRecordMan.hpp"
#include "BattleRecordMan_regen.ipp"

 CBattleRecordMan::~CBattleRecordMan() {
}
void CBattleRecordMan::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CBattleRecordMan::CBattleRecordMan(const CBattleRecordMan& arg0) {
	_ctor_1( arg0);
}
void CBattleRecordMan::_ctor_1( const CBattleRecordMan& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CBattleRecordMan::CBattleRecordMan() {
	//TODO UNIMPLEMENTED; //_ctor_0();
}
void CBattleRecordMan::_ctor_0() {
	return __sub_000706D0(this, nullptr);
}
void CBattleRecordMan::OnPacket(long nType, CInPacket& iPacket) {
	__sub_00070BA0(this, nullptr, nType, iPacket);
}
void CBattleRecordMan::RequestOnCalc(int32_t bOn) {
	__sub_00070BD0(this, nullptr, bOn);
}
void CBattleRecordMan::ClearInfo(long nInfo) {
	__sub_00070790(this, nullptr, nInfo);
}
void CBattleRecordMan::SetAdditionDamageInclude(int32_t bSet, long nOpt) {
	__sub_000701D0(this, nullptr, bSet, nOpt);
}
void CBattleRecordMan::SetBattleDamageInfo(long nDamage, int32_t bCritical, int32_t bSummon) {
	__sub_00070890(this, nullptr, nDamage, bCritical, bSummon);
}
void CBattleRecordMan::SetAttrDamageRateInfo(long nCurRate) {
	__sub_00070920(this, nullptr, nCurRate);
}
void CBattleRecordMan::SetBattleRecoveryInfo(long nHPRecovery, long nMPRecovery, long nBeforeHP, long nBeforeMP) {
	__sub_00070960(this, nullptr, nHPRecovery, nMPRecovery, nBeforeHP, nBeforeMP);
}
int32_t CBattleRecordMan::GetOnCalc() {
	return __sub_000701A0(this, nullptr);
}
ZXString<char> CBattleRecordMan::GetDamageInfoView(long nSelectInfo) {
	ZXString<char> ret;
	return *__sub_00070C50(this, nullptr, &ret, nSelectInfo);
}
ZXString<char> CBattleRecordMan::GetRecoveryInfoView(long nSelectInfo) {
	ZXString<char> ret;
	return *__sub_00070FC0(this, nullptr, &ret, nSelectInfo);
}
void CBattleRecordMan::SetForcedOffCalc() {
	__sub_00070870(this, nullptr);
}
void CBattleRecordMan::CheckTotalDamageOverflow() {
	__sub_000707D0(this, nullptr);
}
void CBattleRecordMan::CheckTotalRecoveryOverflow() {
	__sub_00070800(this, nullptr);
}
void CBattleRecordMan::OnDotDamageInfo(CInPacket& iPacket) {
	__sub_00070A60(this, nullptr, iPacket);
}
void CBattleRecordMan::OnServerOnCalcRequestResult(CInPacket& iPacket) {
	__sub_00070B40(this, nullptr, iPacket);
}
CBattleRecordMan& CBattleRecordMan::operator=(const CBattleRecordMan& arg0) {
	return _op_assign_18(this, arg0);
}
CBattleRecordMan& CBattleRecordMan::_op_assign_18(CBattleRecordMan* pThis, const CBattleRecordMan& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CBattleRecordMan::DamageInfo::DamageInfo() {
	//TODO UNIMPLEMENTED; //_ctor_0();
}
void CBattleRecordMan::DamageInfo::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CBattleRecordMan::DamageInfo::CalcAverageDamage() {
	__sub_00070200(this, nullptr);
}
void CBattleRecordMan::DamageInfo::CalcAverageAttrRate() {
	__sub_00070220(this, nullptr);
}
void CBattleRecordMan::DamageInfo::CalcAverageDamagePerSec(long nDamage, int32_t bDot, int32_t bSummon) {
	__sub_000702E0(this, nullptr, nDamage, bDot, bSummon);
}
void CBattleRecordMan::DamageInfo::ChoiceMaxOrMinDamage(int32_t bMax, long nCurDamage) {
	__sub_00070240(this, nullptr, bMax, nCurDamage);
}
void CBattleRecordMan::DamageInfo::ChoiceCriMaxOrMinDamage(int32_t bMax, long nCurDamage) {
	__sub_00070270(this, nullptr, bMax, nCurDamage);
}
void CBattleRecordMan::DamageInfo::IncTotalDamage(long nCurDamage) {
	__sub_000702A0(this, nullptr, nCurDamage);
}
void CBattleRecordMan::DamageInfo::IncTotalAttrRate(long nCurRate) {
	__sub_000702B0(this, nullptr, nCurRate);
}
void CBattleRecordMan::DamageInfo::IncTotalAttackNum() {
	__sub_000702C0(this, nullptr);
}
void CBattleRecordMan::DamageInfo::IncCriticalNum() {
	__sub_000702D0(this, nullptr);
}
void CBattleRecordMan::DamageInfo::IncMissNum() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CBattleRecordMan::DamageInfo::ClearAllValue() {
	__sub_000703C0(this, nullptr);
}
 CBattleRecordMan::RecoveryItemInfo::RecoveryItemInfo() {
	//TODO UNIMPLEMENTED; //_ctor_0();
}
void CBattleRecordMan::RecoveryItemInfo::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CBattleRecordMan::RecoveryItemInfo::IncTotalHPIncApply(long nIncHP) {
	__sub_00070400(this, nullptr, nIncHP);
}
void CBattleRecordMan::RecoveryItemInfo::IncTotalMPIncApply(long nIncMP) {
	__sub_00070410(this, nullptr, nIncMP);
}
void CBattleRecordMan::RecoveryItemInfo::IncTotalHPIncReq(long nHPIncOpt) {
	__sub_00070420(this, nullptr, nHPIncOpt);
}
void CBattleRecordMan::RecoveryItemInfo::IncTotalMPIncReq(long nMPIncOpt) {
	__sub_00070430(this, nullptr, nMPIncOpt);
}
void CBattleRecordMan::RecoveryItemInfo::CalcMeritRate() {
	__sub_00070480(this, nullptr);
}
void CBattleRecordMan::RecoveryItemInfo::IncTotalUseItem(long nItemType) {
	__sub_00070440(this, nullptr, nItemType);
}
void CBattleRecordMan::RecoveryItemInfo::CalcAverageHPInc() {
	__sub_00070520(this, nullptr);
}
void CBattleRecordMan::RecoveryItemInfo::CalcAverageMPInc() {
	__sub_00070570(this, nullptr);
}
void CBattleRecordMan::RecoveryItemInfo::CalcForeCastUsePerHour() {
	__sub_000705C0(this, nullptr);
}
void CBattleRecordMan::RecoveryItemInfo::ClearAllValue() {
	__sub_00070640(this, nullptr);
}

