// UIEventAlarm.cpp
#include "UIEventAlarm.hpp"
#include "UIEventAlarm_regen.ipp"

 CUIEventAlarm::~CUIEventAlarm() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIEventAlarm::_dtor_0() {
	return __sub_003AD430(this, nullptr);
}
 CUIEventAlarm::CUIEventAlarm(const CUIEventAlarm& arg0) {
	_ctor_1( arg0);
}
void CUIEventAlarm::_ctor_1( const CUIEventAlarm& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIEventAlarm::CUIEventAlarm() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIEventAlarm::_ctor_0() {
	return __sub_003AC690(this, nullptr);
}
void CUIEventAlarm::SetEventAlarm(ZXString<char> sText) {
	__sub_003AAC30(this, nullptr, CreateNakedParam(sText));
}
void CUIEventAlarm::Layout_GEN() {
	__sub_003AAB70(this, nullptr);
}
void CUIEventAlarm::CreateEventAlarm() {
	__sub_003AABA0(this, nullptr);
}
void CUIEventAlarm::OnCreate(void* pData) {
	__sub_003AC4F0(this, nullptr, pData);
}
void CUIEventAlarm::Draw(const tagRECT* pRect) {
	__sub_003AAD90(this, nullptr, pRect);
}
void CUIEventAlarm::SetBackground() {
	__sub_003AB010(this, nullptr);
}
const wchar_t* CUIEventAlarm::MakeUOLByUIType(ZXString16& sOut, const wchar_t* sUOL, const wchar_t* sUOL2) {
	return __sub_003AAD40(this, nullptr, sOut, sUOL, sUOL2);
}
void CUIEventAlarm::Update() {
	__sub_003AAC00(this, nullptr);
}
CUIEventAlarm& CUIEventAlarm::operator=(const CUIEventAlarm& arg0) {
	return _op_assign_11(this, arg0);
}
CUIEventAlarm& CUIEventAlarm::_op_assign_11(CUIEventAlarm* pThis, const CUIEventAlarm& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

