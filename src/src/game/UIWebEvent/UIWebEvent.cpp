// UIWebEvent.cpp
#include "UIWebEvent.hpp"
#include "UIWebEvent_regen.ipp"

 CUIWebEvent::~CUIWebEvent() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIWebEvent::_dtor_0() {
	return __sub_004DC8A0(this, nullptr);
}
 CUIWebEvent::CUIWebEvent(const CUIWebEvent& arg0) {
	_ctor_1( arg0);
}
void CUIWebEvent::_ctor_1( const CUIWebEvent& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIWebEvent::CUIWebEvent() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIWebEvent::_ctor_0() {
	return __sub_004DCBA0(this, nullptr);
}
void CUIWebEvent::OnCreate(void* pData) {
	__sub_004DCDC0(this, nullptr, pData);
}
void CUIWebEvent::OnDestroy() {
	__sub_004DC980(this, nullptr);
}
void CUIWebEvent::OnButtonClicked(uint32_t nId) {
	__sub_004DC870(this, nullptr, nId);
}
void CUIWebEvent::OnNavigateComplete(const char* url) {
	__sub_004DC9A0(this, nullptr, url);
}
void CUIWebEvent::OnBeforeNavigate(const char* url) {
	__sub_004DCA40(this, nullptr, url);
}
void CUIWebEvent::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_004DC7D0(this, nullptr, msg, wParam, rx, ry);
}
void CUIWebEvent::Update() {
	__sub_004DD080(this, nullptr);
}
int32_t CUIWebEvent::CheckAuthKeyValid() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIWebEvent::SendRequestAuthKey() {
	__sub_004DCB10(this, nullptr);
}
CUIWebEvent& CUIWebEvent::operator=(const CUIWebEvent& arg0) {
	return _op_assign_15(this, arg0);
}
CUIWebEvent& CUIWebEvent::_op_assign_15(CUIWebEvent* pThis, const CUIWebEvent& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

ZXString16 __cdecl get_server_string() {
	return __sub_004DCCB0();
}
