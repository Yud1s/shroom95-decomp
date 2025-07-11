// UIPartySearchTab.cpp
#include "UIPartySearchTab.hpp"
#include "UIPartySearchTab_regen.ipp"

 TabPartySearch::~TabPartySearch() {
	 UNIMPLEMENTED; // _dtor_0();
}
void TabPartySearch::_dtor_0() {
	return __sub_0041A790(this, nullptr);
}
 TabPartySearch::TabPartySearch(const TabPartySearch& arg0) {
	_ctor_1( arg0);
}
void TabPartySearch::_ctor_1( const TabPartySearch& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 TabPartySearch::TabPartySearch(CWnd* pParent) {
	_ctor_0( pParent);
}
void TabPartySearch::_ctor_0( CWnd* pParent) {
	return __sub_0041A700(this, nullptr, pParent);
}
void TabPartySearch::OnCreate(void* nCharacterGrade) {
	__sub_0041A8E0(this, nullptr, nCharacterGrade);
}
void TabPartySearch::Draw(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_00418790(this, nullptr, CreateNakedParam(pCanvas));
}
void TabPartySearch::OnButtonClicked(uint32_t nId) {
	__sub_0041CA10(this, nullptr, nId);
}
void TabPartySearch::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0041A0A0(this, nullptr, nId, param1, param2);
}
void TabPartySearch::ActivateControls() {
	__sub_004190F0(this, nullptr);
}
void TabPartySearch::HideControls() {
	__sub_0041A840(this, nullptr);
}
void TabPartySearch::StartSearch() {
	__sub_0041C740(this, nullptr);
}
void TabPartySearch::HoldSearch() {
	__sub_00418740(this, nullptr);
}
void TabPartySearch::StopSearch() {
	__sub_0041C9C0(this, nullptr);
}
void TabPartySearch::SetControl_As_Setting() {
	__sub_00419DE0(this, nullptr);
}
unsigned long TabPartySearch::GetSearchingJob_From_CheckBox() {
	return __sub_00419980(this, nullptr);
}
int32_t TabPartySearch::IsValidSetting(PARTYSERACH_SETTING Setting, long nCharacterLevel) {
	return __sub_004199D0(this, nullptr, CreateNakedParam(Setting), nCharacterLevel);
}
void TabPartySearch::SetControl_As_Default() {
	__sub_00419C20(this, nullptr);
}
TabPartySearch& TabPartySearch::operator=(const TabPartySearch& arg0) {
	return _op_assign_16(this, arg0);
}
TabPartySearch& TabPartySearch::_op_assign_16(TabPartySearch* pThis, const TabPartySearch& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

