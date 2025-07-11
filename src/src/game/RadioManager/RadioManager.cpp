// RadioManager.cpp
#include "RadioManager.hpp"
#include "RadioManager_regen.ipp"

 CUIRadio::~CUIRadio() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIRadio::_dtor_0() {
	return __sub_002C8270(this, nullptr);
}
 CUIRadio::CUIRadio(const CUIRadio& arg0) {
	_ctor_1( arg0);
}
void CUIRadio::_ctor_1( const CUIRadio& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIRadio::CUIRadio(int32_t bMute) {
	_ctor_0( bMute);
}
void CUIRadio::_ctor_0( int32_t bMute) {
	return __sub_002CB2B0(this, nullptr, bMute);
}
int32_t CUIRadio::OnSetFocus(int32_t bFocus) {
	return __sub_002C8350(this, nullptr, bFocus);
}
int32_t CUIRadio::OnMouseMove(long rx, long ry) {
	return __sub_002C8A50(this, nullptr, rx, ry);
}
void CUIRadio::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_002C8910(this, nullptr, msg, wParam, rx, ry);
}
void CUIRadio::OnMouseEnter(int32_t bEnter) {
	__sub_002C8160(this, nullptr, bEnter);
}
void CUIRadio::SetMute(int32_t bMute) {
	__sub_002C8370(this, nullptr, bMute);
}
void CUIRadio::CreateLayer(int32_t bLeft) {
	__sub_002C8E60(this, nullptr, bLeft);
}
CUIRadio& CUIRadio::operator=(const CUIRadio& arg0) {
	return _op_assign_9(this, arg0);
}
CUIRadio& CUIRadio::_op_assign_9(CUIRadio* pThis, const CUIRadio& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRadioManager::~CRadioManager() {
}
void CRadioManager::_dtor_0() {
	return __sub_002CBE60(this, nullptr);
}
 CRadioManager::CRadioManager(const CRadioManager& arg0) {
	_ctor_1( arg0);
}
void CRadioManager::_ctor_1( const CRadioManager& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRadioManager::CRadioManager() {
	//TODO UNIMPLEMENTED; //_ctor_0();
}
void CRadioManager::_ctor_0() {
	return __sub_002C8990(this, nullptr);
}
void CRadioManager::Update(unsigned long tCur) {
	__sub_002CBF20(this, nullptr, tCur);
}
void CRadioManager::Play(ZXString<char> sTrack, unsigned long tPassSec) {
	__sub_002CB940(this, nullptr, CreateNakedParam(sTrack), tPassSec);
}
void CRadioManager::Stop(int32_t bOnComplete) {
	__sub_002CBD20(this, nullptr, bOnComplete);
}
void CRadioManager::Stop_() {
	__sub_002C8230(this, nullptr);
}
void CRadioManager::Mute(int32_t bMute) {
	__sub_002C8840(this, nullptr, bMute);
}
void CRadioManager::ShowUI(int32_t bShow) {
	__sub_002CB870(this, nullptr, bShow);
}
void CRadioManager::SetVolume(uint32_t uiVolume) {
	__sub_002C8190(this, nullptr, uiVolume);
}
int32_t CRadioManager::IsPlaying() {
	return __sub_000B2000(this, nullptr);
}
int32_t CRadioManager::IsMute() {
	return __sub_000B2000(this, nullptr);
}
ZXString<char> CRadioManager::GetTrackName() {
	return __sub_002C8A20(this, nullptr);
}
void CRadioManager::MMS_Startup() {
	__sub_002C8100(this, nullptr);
}
void CRadioManager::MMS_Shutdown() {
	__sub_002C8120(this, nullptr);
}
int32_t CRadioManager::MMS_Play(ZXString<char> sTrack, unsigned long tPassSec) {
	return __sub_002C8B10(this, nullptr, CreateNakedParam(sTrack), tPassSec);
}
void CRadioManager::MMS_Stop() {
	__sub_002C8230(this, nullptr);
}
void CRadioManager::MMS_SetVolume(float fVolume) {
	__sub_002C8130(this, nullptr, fVolume);
}
CRadioManager& CRadioManager::operator=(const CRadioManager& arg0) {
	return _op_assign_18(this, arg0);
}
CRadioManager& CRadioManager::_op_assign_18(CRadioManager* pThis, const CRadioManager& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

