// ScriptMan.cpp
#include "ScriptMan.hpp"
#include "GW/GW.hpp"

static ZArray<ZRef<GW_ItemSlotPet>> FAKE_ZArray_ZRef_GW_ItemSlotPet{};

#include "ScriptMan_regen.ipp"

 CScriptMan::~CScriptMan() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CScriptMan::_dtor_0() {
	return __sub_002DBC70(this, nullptr);
}
 CScriptMan::CScriptMan(const CScriptMan& arg0) {
	_ctor_1( arg0);
}
void CScriptMan::_ctor_1( const CScriptMan& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CScriptMan::CScriptMan() {
	//TODO(ctor) UNIMPLEMENTED; //_ctor_0();
}
void CScriptMan::_ctor_0() {
	return __sub_002DBC30(this, nullptr);
}
void CScriptMan::Init() {
	__sub_002DBD10(this, nullptr);
}
int32_t CScriptMan::IsDialogOpened() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CScriptMan::OnPacket(long nType, CInPacket& iPacket) {
	__sub_002DE360(this, nullptr, nType, iPacket);
}
void CScriptMan::Destroy() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CScriptMan::OnScriptMessage(CInPacket& iPacket) {
	__sub_002DE0F0(this, nullptr, iPacket);
}
void CScriptMan::OnSay(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket& iPacket, unsigned char bParam) {
	__sub_002DC110(this, nullptr, nSpeakerTypeID, nSpeakerTemplateID, iPacket, bParam);
}
void CScriptMan::OnSayImage(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket& iPacket, unsigned char bParam) {
	__sub_002DC310(this, nullptr, nSpeakerTypeID, nSpeakerTemplateID, iPacket, bParam);
}
void CScriptMan::OnAskYesNo(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket& iPacket, unsigned char bParam, int32_t bNoNpc, int32_t bQuest) {
	__sub_002DC5A0(this, nullptr, nSpeakerTypeID, nSpeakerTemplateID, iPacket, bParam, bNoNpc, bQuest);
}
void CScriptMan::OnAskText(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket& iPacket, unsigned char bParam) {
	__sub_002DC790(this, nullptr, nSpeakerTypeID, nSpeakerTemplateID, iPacket, bParam);
}
void CScriptMan::OnAskBoxText(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket& iPacket, unsigned char bParam) {
	__sub_002DC9C0(this, nullptr, nSpeakerTypeID, nSpeakerTemplateID, iPacket, bParam);
}
void CScriptMan::OnAskNumber(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket& iPacket, unsigned char bParam) {
	__sub_002DCC00(this, nullptr, nSpeakerTypeID, nSpeakerTemplateID, iPacket, bParam);
}
void CScriptMan::OnAskMenu(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket& iPacket, unsigned char bParam) {
	__sub_002DCE00(this, nullptr, nSpeakerTypeID, nSpeakerTemplateID, iPacket, bParam);
}
void CScriptMan::OnAskAvatar(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket& iPacket) {
	__sub_002DCFF0(this, nullptr, nSpeakerTypeID, nSpeakerTemplateID, iPacket);
}
void CScriptMan::OnAskMembershopAvatar(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket& iPacket) {
	__sub_002DD340(this, nullptr, nSpeakerTypeID, nSpeakerTemplateID, iPacket);
}
void CScriptMan::OnAskPet(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket& iPacket) {
	__sub_002DD6E0(this, nullptr, nSpeakerTypeID, nSpeakerTemplateID, iPacket);
}
void CScriptMan::OnAskPetAll(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket& iPacket) {
	__sub_002DDBE0(this, nullptr, nSpeakerTypeID, nSpeakerTemplateID, iPacket);
}
void CScriptMan::OnAskQuiz(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket& iPacket) {
	__sub_002DBAF0(this, nullptr, nSpeakerTypeID, nSpeakerTemplateID, iPacket);
}
void CScriptMan::OnAskSpeedQuiz(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket& iPacket) {
	__sub_002DBB10(this, nullptr, nSpeakerTypeID, nSpeakerTemplateID, iPacket);
}
void CScriptMan::OnAskSlideMenu(CInPacket& iPacket) {
	__sub_002DBE50(this, nullptr, iPacket);
}
CScriptMan& CScriptMan::operator=(const CScriptMan& arg0) {
	return _op_assign_22(this, arg0);
}
CScriptMan& CScriptMan::_op_assign_22(CScriptMan* pThis, const CScriptMan& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

