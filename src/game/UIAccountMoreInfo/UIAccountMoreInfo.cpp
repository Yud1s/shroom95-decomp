// UIAccountMoreInfo.cpp
#include "UIAccountMoreInfo.hpp"
#include "UIAccountMoreInfo_regen.ipp"

 CUIAccountMoreInfo::~CUIAccountMoreInfo() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIAccountMoreInfo::_dtor_0() {
	return __sub_0036AF90(this, nullptr);
}
 CUIAccountMoreInfo::CUIAccountMoreInfo(const CUIAccountMoreInfo& arg0) {
	_ctor_1( arg0);
}
void CUIAccountMoreInfo::_ctor_1( const CUIAccountMoreInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIAccountMoreInfo::CUIAccountMoreInfo() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIAccountMoreInfo::_ctor_0() {
	return __sub_0036AE10(this, nullptr);
}
void CUIAccountMoreInfo::LoadCountryName(ZXString<char> arg0, ZRef<CCtrlComboBox> arg1) {
	__sub_0036B950(this, nullptr, CreateNakedParam(arg0), CreateNakedParam(arg1));
}
void CUIAccountMoreInfo::OnCreate(void* pData) {
	__sub_0036C4C0(this, nullptr, pData);
}
void CUIAccountMoreInfo::OnDestroy() {
	__sub_0036B550(this, nullptr);
}
void CUIAccountMoreInfo::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0036C2A0(this, nullptr, nId, param1, param2);
}
void CUIAccountMoreInfo::OnButtonClicked(uint32_t nId) {
	__sub_0036B5A0(this, nullptr, nId);
}
int32_t CUIAccountMoreInfo::OnSetFocus(int32_t bFocus) {
	return __sub_0036AF30(this, nullptr, bFocus);
}
void CUIAccountMoreInfo::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0036AD20(this, nullptr, wParam, lParam);
}
void CUIAccountMoreInfo::SetAregComboBox(long nAregIndex) {
	__sub_0036C0B0(this, nullptr, nAregIndex);
}
void CUIAccountMoreInfo::SetBrithDayComboBox() {
	__sub_0036B670(this, nullptr);
}
void CUIAccountMoreInfo::SendLoadAccountMoreInfoRequest() {
	__sub_0036B190(this, nullptr);
}
void CUIAccountMoreInfo::SendSaveAccountMoreInfoRequest() {
	__sub_0036B210(this, nullptr);
}
void CUIAccountMoreInfo::OnLoadAccountMoreInfoResult(CInPacket& iPacket) {
	__sub_0036C2F0(this, nullptr, iPacket);
}
void CUIAccountMoreInfo::OnSaveAccountMoreInfoResult(CInPacket& iPacket) {
	__sub_0036B600(this, nullptr, iPacket);
}
void CUIAccountMoreInfo::SetMoreInfoFirst(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIAccountMoreInfo& CUIAccountMoreInfo::operator=(const CUIAccountMoreInfo& arg0) {
	return _op_assign_20(this, arg0);
}
CUIAccountMoreInfo& CUIAccountMoreInfo::_op_assign_20(CUIAccountMoreInfo* pThis, const CUIAccountMoreInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

