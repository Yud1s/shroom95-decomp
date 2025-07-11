// AvatarMegaphone.cpp
#include "AvatarMegaphone.hpp"
#include "AvatarMegaphone_regen.ipp"

 CAvatarMegaphone::~CAvatarMegaphone() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CAvatarMegaphone::_dtor_0() {
	return __sub_0006D9A0(this, nullptr);
}
 CAvatarMegaphone::CAvatarMegaphone(const CAvatarMegaphone& arg0) {
	_ctor_1( arg0);
}
void CAvatarMegaphone::_ctor_1( const CAvatarMegaphone& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CAvatarMegaphone::CAvatarMegaphone(long nItemID, const AvatarLook& al, ZXString<char> sName, ZXString<char> s1, ZXString<char> s2, ZXString<char> s3, ZXString<char> s4, long nChannel, int32_t bWhisper) {
	_ctor_0( nItemID, al, sName, s1, s2, s3, s4, nChannel, bWhisper);
}
void CAvatarMegaphone::_ctor_0( long nItemID, const AvatarLook& al, ZXString<char> sName, ZXString<char> s1, ZXString<char> s2, ZXString<char> s3, ZXString<char> s4, long nChannel, int32_t bWhisper) {
	return __sub_0006DBD0(this, nullptr, nItemID, al, CreateNakedParam(sName), CreateNakedParam(s1), CreateNakedParam(s2), CreateNakedParam(s3), CreateNakedParam(s4), nChannel, bWhisper);
}
void CAvatarMegaphone::OnCreate(void* pData) {
	__sub_0006EC60(this, nullptr, pData);
}
void CAvatarMegaphone::OnDestroy() {
	__sub_0006D4F0(this, nullptr);
}
void CAvatarMegaphone::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_0006D560(this, nullptr, msg, wParam, rx, ry);
}
int32_t CAvatarMegaphone::OnMouseMove(long rx, long ry) {
	return __sub_0006D5F0(this, nullptr, rx, ry);
}
void CAvatarMegaphone::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0006D500(this, nullptr, wParam, lParam);
}
void CAvatarMegaphone::ByeAvatarMegaphone() {
	__sub_0006D630(this, nullptr);
}
void CAvatarMegaphone::HelloAvatarMegaphone() {
	__sub_0006E3C0(this, nullptr);
}
void CAvatarMegaphone::Draw(const tagRECT* pRect) {
	__sub_0006DDE0(this, nullptr, pRect);
}
void CAvatarMegaphone::Update() {
	__sub_0006D510(this, nullptr);
}
CAvatarMegaphone& CAvatarMegaphone::operator=(const CAvatarMegaphone& arg0) {
	return _op_assign_12(this, arg0);
}
CAvatarMegaphone& CAvatarMegaphone::_op_assign_12(CAvatarMegaphone* pThis, const CAvatarMegaphone& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

