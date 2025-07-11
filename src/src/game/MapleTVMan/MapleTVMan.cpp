// MapleTVMan.cpp
#include "MapleTVMan.hpp"
#include "MapleTVMan_regen.ipp"

 CMapleTVMan::~CMapleTVMan() {
}
void CMapleTVMan::_dtor_0() {
	return __sub_0020F470(this, nullptr);
}
 CMapleTVMan::CMapleTVMan(const CMapleTVMan& arg0) {
	_ctor_1( arg0);
}
void CMapleTVMan::_ctor_1( const CMapleTVMan& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMapleTVMan::CMapleTVMan() {
	//UNIMPLEMENTED; //_ctor_0();
}
void CMapleTVMan::_ctor_0() {
	return __sub_0020F360(this, nullptr);
}
void CMapleTVMan::Init() {
	__sub_0020FBC0(this, nullptr);
}
void CMapleTVMan::OnPacket(long nType, CInPacket& iPacket) {
	__sub_0020FE10(this, nullptr, nType, iPacket);
}
void CMapleTVMan::OnSetMessage(CInPacket& iPacket) {
	__sub_0020F870(this, nullptr, iPacket);
}
void CMapleTVMan::OnClearMessage(CInPacket& iPacket) {
	__sub_0020F2F0(this, nullptr, iPacket);
}
void CMapleTVMan::OnSendMessageResult(CInPacket& iPacket) {
	__sub_0020F5F0(this, nullptr, iPacket);
}
void CMapleTVMan::ShowDisplay() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMapleTVMan::ShowMessage() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMapleTVMan::QueueExists() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMapleTVMan::QueueDone() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMapleTVMan::IsMessageCleaned() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMapleTVMan::SetMessageCleaned() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMapleTVMan::SetMessageNotCleaned() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMapleTVMan::IsSelfMessage() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
AvatarLook CMapleTVMan::GetSenderAvartarLook() {
	return __sub_0026FDB0(this, nullptr);
}
AvatarLook CMapleTVMan::GetReceiverAvartarLook() {
	return __sub_0026FDD0(this, nullptr);
}
ZXString<char> CMapleTVMan::GetSenderName() {
	return __sub_00271830(this, nullptr);
}
ZXString<char> CMapleTVMan::GetReceivername() {
	return __sub_00271860(this, nullptr);
}
ZXString<char> CMapleTVMan::GetMessageStr1() {
	return __sub_00271890(this, nullptr);
}
ZXString<char> CMapleTVMan::GetMessageStr2() {
	return __sub_002718C0(this, nullptr);
}
ZXString<char> CMapleTVMan::GetMessageStr3() {
	return __sub_002718F0(this, nullptr);
}
ZXString<char> CMapleTVMan::GetMessageStr4() {
	return __sub_00271920(this, nullptr);
}
ZXString<char> CMapleTVMan::GetMessageStr5() {
	return __sub_00271950(this, nullptr);
}
void CMapleTVMan::SetFlashAbsLocation(long nX, long nY) {
	__sub_0020F310(this, nullptr, nX, nY);
}
void CMapleTVMan::LoadFlashMedia(ZXString<char> arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMapleTVMan::LoadMapleTVMedia() {
	__sub_0020F320(this, nullptr);
}
long CMapleTVMan::GetRandomMapleTVDefaultMedia() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMapleTVMan::ConfirmTimeRemaining() {
	return __sub_0020F760(this, nullptr);
}
const ZXString<char>& CMapleTVMan::GetCurAdvName() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
const ZXString<char>& CMapleTVMan::GetShortCurAdvName() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMapleTVMan::IsLoadFlash() {
	return __sub_0020F330(this, nullptr);
}
const unsigned char CMapleTVMan::GetMsgType() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMapleTVMan::IsAbleToUseFlash() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMapleTVMan::OnDownLoadFlashAfterWaiting(CInPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CMapleTVMan& CMapleTVMan::operator=(const CMapleTVMan& arg0) {
	return _op_assign_36(this, arg0);
}
CMapleTVMan& CMapleTVMan::_op_assign_36(CMapleTVMan* pThis, const CMapleTVMan& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

