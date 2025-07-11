// UIPartyAdverTab.cpp
#include "UIPartyAdverTab.hpp"

static ZRef<CCtrlWnd> FAKE_CCtrlWnd_{};
static ZRef<ADVER_COMMON> FAKE_ZRefADVER_COMMON_{};
static ZRef<CCtrlStatic> FAKE_ZRefCCtrlStatic_{};
static ZRef<CCtrlPQuestItem> FAKE_ZRefCCtrlPQuestItem_{};

#include "UIPartyAdverTab_regen.ipp"

 CCtrlSelectPartyQuest::~CCtrlSelectPartyQuest() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCtrlSelectPartyQuest::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlSelectPartyQuest::CCtrlSelectPartyQuest(const CCtrlSelectPartyQuest& arg0) {
	_ctor_1( arg0);
}
void CCtrlSelectPartyQuest::_ctor_1( const CCtrlSelectPartyQuest& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlSelectPartyQuest::CCtrlSelectPartyQuest() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCtrlSelectPartyQuest::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZXString16 CCtrlSelectPartyQuest::GetBackUOL() {
	return __sub_00414020(this, nullptr);
}
CCtrlSelectPartyQuest& CCtrlSelectPartyQuest::operator=(const CCtrlSelectPartyQuest& arg0) {
	return _op_assign_4(this, arg0);
}
CCtrlSelectPartyQuest& CCtrlSelectPartyQuest::_op_assign_4(CCtrlSelectPartyQuest* pThis, const CCtrlSelectPartyQuest& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 TabPartyAdver::~TabPartyAdver() {
	 UNIMPLEMENTED; // _dtor_0();
}
void TabPartyAdver::_dtor_0() {
	return __sub_00412D20(this, nullptr);
}
 TabPartyAdver::TabPartyAdver(const TabPartyAdver& arg0) {
	_ctor_1( arg0);
}
void TabPartyAdver::_ctor_1( const TabPartyAdver& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 TabPartyAdver::TabPartyAdver(CWnd* pParent) {
	_ctor_0( pParent);
}
void TabPartyAdver::_ctor_0( CWnd* pParent) {
	return __sub_00413DE0(this, nullptr, pParent);
}
void TabPartyAdver::OnCreate(void* pData) {
	__sub_00415FC0(this, nullptr, pData);
}
void TabPartyAdver::Draw(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_00415520(this, nullptr, CreateNakedParam(pCanvas));
}
void TabPartyAdver::OnButtonClicked(uint32_t nId) {
	__sub_00416AA0(this, nullptr, nId);
}
void TabPartyAdver::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_00415600(this, nullptr, nId, param1, param2);
}
void TabPartyAdver::ActivateControls() {
	__sub_00415310(this, nullptr);
}
void TabPartyAdver::HideControls() {
	__sub_00414830(this, nullptr);
}
void TabPartyAdver::OnMoveWnd(long l, long t) {
	__sub_004115F0(this, nullptr, l, t);
}
void TabPartyAdver::OnKey(uint32_t wParam, int32_t lParam) {
	//__sub_00411600(this, nullptr, wParam, lParam);
}
void TabPartyAdver::DoAction(long nAction, long nOption) {
	__sub_00412E60(this, nullptr, nAction, nOption);
}
void TabPartyAdver::OnPacket(long nRetCode, CInPacket& iPacket) {
	__sub_004162F0(this, nullptr, nRetCode, iPacket);
}
void TabPartyAdver::SetState(TabPartyAdver::ENUM_STATE nState) {
	__sub_00415F90(this, nullptr, nState);
}
void TabPartyAdver::InitState(TabPartyAdver::ENUM_STATE nState) {
	__sub_004158A0(this, nullptr, nState);
}
void TabPartyAdver::EndState(TabPartyAdver::ENUM_STATE nState) {
	__sub_004127F0(this, nullptr, nState);
}
void TabPartyAdver::AttachStatic(TabPartyAdver::ENUM_CTRL_ID nID, long x, long y, long width, long height) {
	__sub_00413EE0(this, nullptr, nID, x, y, width, height);
}
void TabPartyAdver::AttachBanner(TabPartyAdver::ENUM_CTRL_ID nID, long x, long y, ZRef<PartyQuestInfo> pInfo, int32_t bSelected) {
	__sub_00414090(this, nullptr, nID, x, y, CreateNakedParam(pInfo), bSelected);
}
void TabPartyAdver::AttachButton(TabPartyAdver::ENUM_CTRL_ID nID, ZXString16 sUOL) {
	__sub_00414230(this, nullptr, nID, CreateNakedParam(sUOL));
}
CCtrlComboBox* TabPartyAdver::AttachComboBox(TabPartyAdver::ENUM_CTRL_ID nID, long nType, long x, long y, long width, long height, void* paramCombo) {
	return __sub_00414330(this, nullptr, nID, nType, x, y, width, height, paramCombo);
}
void TabPartyAdver::SetControlEnable(TabPartyAdver::ENUM_CTRL_ID nID, int32_t bEnable) {
	__sub_00414960(this, nullptr, nID, bEnable);
}
void TabPartyAdver::SetControlVisible(TabPartyAdver::ENUM_CTRL_ID nID, int32_t bEnable) {
	__sub_004149A0(this, nullptr, nID, bEnable);
}
void TabPartyAdver::DetachCtrl(TabPartyAdver::ENUM_CTRL_ID nId) {
	__sub_004130B0(this, nullptr, nId);
}
void TabPartyAdver::Draw_QuestSelect(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_00415020(this, nullptr, CreateNakedParam(pCanvas));
}
long TabPartyAdver::GetQuestMaxPage() {
	return __sub_004115E0(this, nullptr);
}
long TabPartyAdver::GetSelectQuestID_0(long nIndex) {
	return __sub_00412480(this, nullptr, nIndex);
}
long TabPartyAdver::GetSelectQuestID_1() {
	return __sub_00412720(this, nullptr);
}
long TabPartyAdver::GetIndexFromQuestID(long nPartyQuestID) {
	return __sub_004125F0(this, nullptr, nPartyQuestID);
}
const PartyQuestInfo* TabPartyAdver::GetSelectPartyQuestInfo() {
	return __sub_00412900(this, nullptr);
}
void TabPartyAdver::SendPartyAdverRequestPacket() {
	__sub_00412B60(this, nullptr);
}
void TabPartyAdver::OnButton_QuestPrev() {
	__sub_00411750(this, nullptr);
}
void TabPartyAdver::OnButton_QuestNext() {
	__sub_00411780(this, nullptr);
}
void TabPartyAdver::Draw_PartySelect(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_00413620(this, nullptr, CreateNakedParam(pCanvas));
}
void TabPartyAdver::DrawPartyUnit(const ADVER_COMMON* adver, _x_com_ptr<IWzCanvas> pCanvas, long x, long y, int32_t bSelected) {
	__sub_004130E0(this, nullptr, adver, CreateNakedParam(pCanvas), x, y, bSelected);
}
void TabPartyAdver::RequestAdverRemoveFromNotiList() {
	__sub_00412CA0(this, nullptr);
}
void TabPartyAdver::SendPartyApplyPacketTo(long nPartyID) {
	__sub_00414460(this, nullptr, nPartyID);
}
void TabPartyAdver::SendPartyApplyPacket() {
	__sub_00414810(this, nullptr);
}
void TabPartyAdver::SendAdverDeletePacket() {
	__sub_00412E90(this, nullptr);
}
long TabPartyAdver::GetSelectedPartyID() {
	return __sub_004128D0(this, nullptr);
}
const ADVER_COMMON* TabPartyAdver::GetSelectedPartyAdver() {
	return __sub_00412970(this, nullptr);
}
long TabPartyAdver::FindQuickJoinParty() {
	return __sub_00411E40(this, nullptr);
}
void TabPartyAdver::OnButton_Whisper() {
	__sub_00412C00(this, nullptr);
}
long TabPartyAdver::GetPartyMaxPage() {
	return __sub_004117B0(this, nullptr);
}
void TabPartyAdver::ShowTooltip(long nSelectIndex) {
	__sub_00412730(this, nullptr, nSelectIndex);
}
void TabPartyAdver::Draw_Regist(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_00413A50(this, nullptr, CreateNakedParam(pCanvas));
}
void TabPartyAdver::SendPartyRegistCommitPacket() {
	__sub_00413C90(this, nullptr);
}
int32_t TabPartyAdver::IsTitleValid(ZXString<char>& msg) {
	return __sub_00412E10(this, nullptr, msg);
}
long TabPartyAdver::GetAdverPrice() {
	return __sub_00412960(this, nullptr);
}
int32_t TabPartyAdver::IsAbleToRegist() {
	return __sub_004149E0(this, nullptr);
}
TabPartyAdver& TabPartyAdver::operator=(const TabPartyAdver& arg0) {
	return _op_assign_49(this, arg0);
}
TabPartyAdver& TabPartyAdver::_op_assign_49(TabPartyAdver* pThis, const TabPartyAdver& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

int32_t __cdecl QuestFilter(ZRef<PartyQuestInfo> p) {
	return __sub_004123A0(CreateNakedParam(p));
}
