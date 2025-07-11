// MemoryGameDlg.cpp
#include "MemoryGameDlg.hpp"

static ZRefCounted_AllocHelper<ZRefCountedDummy<GW_MiniGameRecord>> FAKE_ZRefCountedDummy_GW_MiniGameRecord{};

#include "MemoryGameDlg_regen.ipp"

 CMemoryGameDlg::~CMemoryGameDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMemoryGameDlg::_dtor_0() {
	return __sub_00227AD0(this, nullptr);
}
 CMemoryGameDlg::CMemoryGameDlg(const CMemoryGameDlg& arg0) {
	_ctor_1( arg0);
}
void CMemoryGameDlg::_ctor_1( const CMemoryGameDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMemoryGameDlg::CMemoryGameDlg() {
	UNIMPLEMENTED; //_ctor_0();
}
void CMemoryGameDlg::_ctor_0() {
	return __sub_0022E830(this, nullptr);
}
void CMemoryGameDlg::OnCreate(void* pData) {
	__sub_0022F3C0(this, nullptr, pData);
}
int32_t CMemoryGameDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_002274D0(this, nullptr, rx, ry, ppCtrl);
}
void CMemoryGameDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00228EA0(this, nullptr, wParam, lParam);
}
void CMemoryGameDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_0022FBC0(this, nullptr, msg, wParam, rx, ry);
}
int32_t CMemoryGameDlg::OnMouseMove(long rx, long ry) {
	return __sub_00227940(this, nullptr, rx, ry);
}
void CMemoryGameDlg::OnButtonClicked(uint32_t uId) {
	__sub_00228DF0(this, nullptr, uId);
}
void CMemoryGameDlg::Draw(const tagRECT* arg0) {
	__sub_00231CB0(this, nullptr, arg0);
}
void CMemoryGameDlg::GetActionPosition(long nSlot, long& nAction, tagPOINT& pt) {
	__sub_002274A0(this, nullptr, nSlot, nAction, pt);
}
void CMemoryGameDlg::OnPacket(long nType, CInPacket& iPacket) {
	__sub_00234020(this, nullptr, nType, iPacket);
}
void CMemoryGameDlg::OnEnterResult(CInPacket& iPacket) {
	__sub_00228610(this, nullptr, iPacket);
}
void CMemoryGameDlg::OnEnter(long nSlot, CInPacket& iPacket) {
	__sub_00228980(this, nullptr, nSlot, iPacket);
}
void CMemoryGameDlg::OnLeave(long nSlot, CInPacket& iPacket) {
	__sub_00228B20(this, nullptr, nSlot, iPacket);
}
void CMemoryGameDlg::Update() {
	__sub_00231880(this, nullptr);
}
void CMemoryGameDlg::DecodeMiniGameRecord(long nSlot, CInPacket& iPacket) {
	__sub_00228DC0(this, nullptr, nSlot, iPacket);
}
void CMemoryGameDlg::OnTurnUpCard(CInPacket& iPacket) {
	__sub_0022F060(this, nullptr, iPacket);
}
void CMemoryGameDlg::OnTieRequest(CInPacket& iPacket) {
	__sub_00227E60(this, nullptr, iPacket);
}
void CMemoryGameDlg::OnTieResult(CInPacket& iPacket) {
	__sub_00227F20(this, nullptr, iPacket);
}
void CMemoryGameDlg::OnGiveUpResult(CInPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMemoryGameDlg::OnGameResult(CInPacket& iPacket) {
	__sub_00227F60(this, nullptr, iPacket);
}
void CMemoryGameDlg::OnUserReady(CInPacket& iPacket) {
	__sub_002317B0(this, nullptr, iPacket);
}
void CMemoryGameDlg::OnUserCancelReady(CInPacket& iPacket) {
	__sub_00231840(this, nullptr, iPacket);
}
void CMemoryGameDlg::OnUserStart(CInPacket& iPacket) {
	__sub_0022F220(this, nullptr, iPacket);
}
void CMemoryGameDlg::OnTimeOver(CInPacket& iPacket) {
	__sub_0022F330(this, nullptr, iPacket);
}
void CMemoryGameDlg::SendTieRequest() {
	__sub_002281D0(this, nullptr);
}
void CMemoryGameDlg::SendClaimGiveUp() {
	__sub_00228110(this, nullptr);
}
void CMemoryGameDlg::OnClickStartButton() {
	__sub_00227A50(this, nullptr);
}
void CMemoryGameDlg::OnClickReadyButton() {
	__sub_002282B0(this, nullptr);
}
void CMemoryGameDlg::OnClickEndButton() {
	__sub_00228450(this, nullptr);
}
void CMemoryGameDlg::OnClickBanButton() {
	__sub_002283A0(this, nullptr);
}
void CMemoryGameDlg::SendTurnUpCard(long nIdx, int32_t bFirstCard) {
	__sub_002279B0(this, nullptr, nIdx, bFirstCard);
}
void CMemoryGameDlg::DrawEffect(long arg0, long arg1) {
	__sub_00228FF0(this, nullptr, arg0, arg1);
}
void CMemoryGameDlg::DrawScore() {
	__sub_0022A880(this, nullptr);
}
void CMemoryGameDlg::DrawGameResult(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_0022FCF0(this, nullptr, CreateNakedParam(pCanvas));
}
void CMemoryGameDlg::DrawReadyOrNot() {
	__sub_00230880(this, nullptr);
}
void CMemoryGameDlg::ResetMiniGameData() {
	__sub_002278E0(this, nullptr);
}
long CMemoryGameDlg::GetCardPositionFromPoint(long rx, long ry) {
	return __sub_00227530(this, nullptr, rx, ry);
}
void CMemoryGameDlg::TurnUpCard_Pic(long i, int32_t bTurnUpCard_Back) {
	__sub_0022B690(this, nullptr, i, bTurnUpCard_Back);
}
void CMemoryGameDlg::TurnUpCard_Back(long i, int32_t bTimeOver) {
	__sub_0022C980(this, nullptr, i, bTimeOver);
}
void CMemoryGameDlg::SetCard_Pic(long i) {
	__sub_0022C140(this, nullptr, i);
}
void CMemoryGameDlg::SetCard_Back(long i) {
	__sub_0022D920(this, nullptr, i);
}
void CMemoryGameDlg::SetCardSelected(long i) {
	__sub_002275E0(this, nullptr, i);
}
void CMemoryGameDlg::SetCardFree() {
	__sub_00227760(this, nullptr);
}
void CMemoryGameDlg::ArrangeCard() {
	__sub_0022E040(this, nullptr);
}
int32_t CMemoryGameDlg::IsUserTurn() {
	return __sub_002275C0(this, nullptr);
}
int32_t CMemoryGameDlg::IsRoomMaster() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMemoryGameDlg::IsWinnerLastTime() {
	return __sub_002275C0(this, nullptr);
}
void CMemoryGameDlg::AnimateRoundEffect(long arg0) {
	__sub_00230E70(this, nullptr, arg0);
}
CMemoryGameDlg& CMemoryGameDlg::operator=(const CMemoryGameDlg& arg0) {
	return _op_assign_50(this, arg0);
}
CMemoryGameDlg& CMemoryGameDlg::_op_assign_50(CMemoryGameDlg* pThis, const CMemoryGameDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

