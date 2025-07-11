// UICharacterSale.cpp
#include "UICharacterSale.hpp"

#include "UtilDlgEx/UtilDlgEx.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

static ZRef<CTextAnalyzer> FAKE_CTextAnalyzer{};

#include "UICharacterSale_regen.ipp"

 CUICharacterSaleDlg::~CUICharacterSaleDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUICharacterSaleDlg::_dtor_0() {
	return __sub_00378590(this, nullptr);
}
 CUICharacterSaleDlg::CUICharacterSaleDlg(const CUICharacterSaleDlg& arg0) {
	_ctor_1( arg0);
}
void CUICharacterSaleDlg::_ctor_1( const CUICharacterSaleDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUICharacterSaleDlg::CUICharacterSaleDlg(long nPOS, long nItemID) {
	_ctor_0( nPOS, nItemID);
}
void CUICharacterSaleDlg::_ctor_0( long nPOS, long nItemID) {
	return __sub_00378270(this, nullptr, nPOS, nItemID);
}
void CUICharacterSaleDlg::OnCreate(void* arg0) {
	__sub_0037ADC0(this, nullptr, arg0);
}
void CUICharacterSaleDlg::OnButtonClicked(uint32_t nId) {
	__sub_0037EDC0(this, nullptr, nId);
}
void CUICharacterSaleDlg::Draw(const tagRECT* pRect) {
	__sub_00378DE0(this, nullptr, pRect);
}
ZXString<char> CUICharacterSaleDlg::GetNewCharEquipName(long nIdx) {
	ZXString<char> ret;
	return *__sub_00377310(this, nullptr, &ret, nIdx);
}
void CUICharacterSaleDlg::ShiftNewCharEquip(long item, long arg1) {
	__sub_0037A9F0(this, nullptr, item, arg1);
}
void CUICharacterSaleDlg::OnAvatarChanged() {
	__sub_0037A540(this, nullptr);
}
void CUICharacterSaleDlg::ChangeNewCharacterGender() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUICharacterSaleDlg::IsRequestSent() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUICharacterSaleDlg::InitNewCharEquip() {
	__sub_0037ABE0(this, nullptr);
}
_x_com_ptr<IWzGr2DLayer> CUICharacterSaleDlg::GetDlgLayer() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUICharacterSaleDlg::SendCheckDuplicateIDPacket(const ZXString<char>& sCharName) {
	__sub_00377D20(this, nullptr, sCharName);
}
void CUICharacterSaleDlg::SendRequest(COutPacket& oPacket) {
	__sub_003768F0(this, nullptr, oPacket);
}
void CUICharacterSaleDlg::OnPacket(long nType, CInPacket& iPacket) {
	__sub_00378C50(this, nullptr, nType, iPacket);
}
void CUICharacterSaleDlg::SendCreateNewCharacter() {
	__sub_0037A240(this, nullptr);
}
int32_t CUICharacterSaleDlg::ShowWindow() {
	return __sub_0037A970(this, nullptr);
}
int32_t CUICharacterSaleDlg::ShowClass() {
	return __sub_003761B0(this, nullptr);
}
int32_t CUICharacterSaleDlg::SetStep1(int32_t bSet) {
	return __sub_00377360(this, nullptr, bSet);
}
int32_t CUICharacterSaleDlg::SetStep2(int32_t bSet) {
	return __sub_00377480(this, nullptr, bSet);
}
int32_t CUICharacterSaleDlg::SetStep2_1(int32_t bSet) {
	return __sub_003775F0(this, nullptr, bSet);
}
int32_t CUICharacterSaleDlg::SetStep3(int32_t bSet) {
	return __sub_0037A570(this, nullptr, bSet);
}
int32_t CUICharacterSaleDlg::SetStep4(int32_t bSet) {
	return __sub_0037A6C0(this, nullptr, bSet);
}
int32_t CUICharacterSaleDlg::SetStep5(int32_t bSet) {
	return __sub_0037A7F0(this, nullptr, bSet);
}
int32_t CUICharacterSaleDlg::SetAvatar(int32_t bSet) {
	return __sub_0037A3C0(this, nullptr, bSet);
}
int32_t CUICharacterSaleDlg::ClearWindow() {
	return __sub_003769F0(this, nullptr);
}
int32_t CUICharacterSaleDlg::ClearCurrentStep(long nStep) {
	return __sub_0037A8D0(this, nullptr, nStep);
}
void CUICharacterSaleDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00377710(this, nullptr, wParam, lParam);
}
void CUICharacterSaleDlg::GetSelectedAL_1(AvatarLook& al) {
	__sub_00378D80(this, nullptr, al);
}
long CUICharacterSaleDlg::GetSelectedAL_0(long nIdx) {
	return __sub_00378CF0(this, nullptr, nIdx);
}
void CUICharacterSaleDlg::SetNewCharacterGender(unsigned char arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZList<CUICharacterSaleDlg::NEWEQUIP>& CUICharacterSaleDlg::GetNewEquip() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZXString<char> CUICharacterSaleDlg::GetNewCharItemName(long nGender, long nType, long nItemID) {
	ZXString<char> ret;
	return *__sub_00378980(this, nullptr, &ret, nGender, nType, nItemID);
}
void CUICharacterSaleDlg::LoadNewCharInfo() {
	__sub_00377790(this, nullptr);
}
void CUICharacterSaleDlg::LoadSPInfo() {
	__sub_00376D00(this, nullptr);
}
void CUICharacterSaleDlg::OnCheckDuplicatedIDResult(CInPacket& iPacket) {
	__sub_00377E40(this, nullptr, iPacket);
}
void CUICharacterSaleDlg::OnCreateNewCharacterResult(CInPacket& iPacket) {
	__sub_00377FC0(this, nullptr, iPacket);
}
CUICharacterSaleDlg& CUICharacterSaleDlg::operator=(const CUICharacterSaleDlg& arg0) {
	return _op_assign_41(this, arg0);
}
CUICharacterSaleDlg& CUICharacterSaleDlg::_op_assign_41(CUICharacterSaleDlg* pThis, const CUICharacterSaleDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUICharacterSaleDlg::ASITEM::~ASITEM() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUICharacterSaleDlg::ASITEM::_dtor_0() {
	return __sub_00376CE0(this, nullptr);
}
 CUICharacterSaleDlg::ASITEM::ASITEM(const CUICharacterSaleDlg::ASITEM& arg0) {
	_ctor_1( arg0);
}
void CUICharacterSaleDlg::ASITEM::_ctor_1( const CUICharacterSaleDlg::ASITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUICharacterSaleDlg::ASITEM::ASITEM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUICharacterSaleDlg::ASITEM::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUICharacterSaleDlg::ASITEM& CUICharacterSaleDlg::ASITEM::operator=(const CUICharacterSaleDlg::ASITEM& arg0) {
	return _op_assign_3(this, arg0);
}
CUICharacterSaleDlg::ASITEM& CUICharacterSaleDlg::ASITEM::_op_assign_3(CUICharacterSaleDlg::ASITEM* pThis, const CUICharacterSaleDlg::ASITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

