// Quest.cpp
#include "Quest.hpp"
#include "Quest_regen.ipp"

 ActSP::~ActSP() {
	 UNIMPLEMENTED; // _dtor_0();
}
void ActSP::_dtor_0() {
	return __sub_002AEBB0(this, nullptr);
}
 ActSP::ActSP(const ActSP& arg0) {
	_ctor_1( arg0);
}
void ActSP::_ctor_1( const ActSP& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 ActSP::ActSP() {
	UNIMPLEMENTED; //_ctor_0();
}
void ActSP::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ActSP& ActSP::operator=(const ActSP& arg0) {
	return _op_assign_3(this, arg0);
}
ActSP& ActSP::_op_assign_3(ActSP* pThis, const ActSP& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 ActSkill::~ActSkill() {
	 UNIMPLEMENTED; // _dtor_0();
}
void ActSkill::_dtor_0() {
	return __sub_002AEBA0(this, nullptr);
}
 ActSkill::ActSkill(const ActSkill& arg0) {
	_ctor_1( arg0);
}
void ActSkill::_ctor_1( const ActSkill& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 ActSkill::ActSkill() {
	UNIMPLEMENTED; //_ctor_0();
}
void ActSkill::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ActSkill& ActSkill::operator=(const ActSkill& arg0) {
	return _op_assign_3(this, arg0);
}
ActSkill& ActSkill::_op_assign_3(ActSkill* pThis, const ActSkill& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CQuest::~CQuest() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CQuest::_dtor_0() {
	return __sub_002AF240(this, nullptr);
}
 CQuest::CQuest(const CQuest& arg0) {
	_ctor_1( arg0);
}
void CQuest::_ctor_1( const CQuest& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CQuest::CQuest(uint16_t usQuestID, unsigned long dwNpcTemplateID) {
	_ctor_0( usQuestID, dwNpcTemplateID);
}
void CQuest::_ctor_0( uint16_t usQuestID, unsigned long dwNpcTemplateID) {
	return __sub_002B35F0(this, nullptr, usQuestID, dwNpcTemplateID);
}
void CQuest::StartQuest(int32_t bAutoStart) {
	__sub_002B40A0(this, nullptr, bAutoStart);
}
void CQuest::LoadSay(_x_com_ptr<IWzProperty> pSayProp, ZArray<ZXString<char> >& aSay) {
	__sub_002AEF90(this, nullptr, CreateNakedParam(pSayProp), aSay);
}
void CQuest::LoadReward() {
	__sub_002AF2E0(this, nullptr);
}
void CQuest::OnQuestRefuse() {
	__sub_002B0500(this, nullptr);
}
int32_t CQuest::SayNormal(ZArray<ZXString<char> >& aSay) {
	return __sub_002B0760(this, nullptr, aSay);
}
int32_t CQuest::AskQuestion(ZArray<ZXString<char> >& arg0) {
	return __sub_002B3790(this, nullptr, arg0);
}
long CQuest::ShowRewardList(ZArray<ZXString<char> >& aSay) {
	return __sub_002B09E0(this, nullptr, aSay);
}
void CQuest::OnCompleteQuestFailed(long arg0) {
	__sub_002B1FC0(this, nullptr, arg0);
}
CQuest& CQuest::operator=(const CQuest& arg0) {
	return _op_assign_11(this, arg0);
}
CQuest& CQuest::_op_assign_11(CQuest* pThis, const CQuest& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

