// OmokDlg.cpp
#include "OmokDlg.hpp"

static ZRefCounted_AllocHelper<ZRefCountedDummy<GW_MiniGameRecord>> FAKE_ZRefCountedDummy_GW_MiniGameRecord;

#include "OmokDlg_regen.ipp"

 STONELAYER::~STONELAYER() {
	 UNIMPLEMENTED; // _dtor_0();
}
void STONELAYER::_dtor_0() {
	return __sub_0027FAB0(this, nullptr);
}
 STONELAYER::STONELAYER(const STONELAYER& arg0) {
	_ctor_1( arg0);
}
void STONELAYER::_ctor_1( const STONELAYER& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 STONELAYER::STONELAYER() {
	UNIMPLEMENTED; //_ctor_0();
}
void STONELAYER::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
STONELAYER& STONELAYER::operator=(const STONELAYER& arg0) {
	return _op_assign_3(this, arg0);
}
STONELAYER& STONELAYER::_op_assign_3(STONELAYER* pThis, const STONELAYER& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 COmokDlg::~COmokDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void COmokDlg::_dtor_0() {
	return __sub_0027FEC0(this, nullptr);
}
 COmokDlg::COmokDlg(const COmokDlg& arg0) {
	_ctor_1( arg0);
}
void COmokDlg::_ctor_1( const COmokDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 COmokDlg::COmokDlg() {
	UNIMPLEMENTED; //_ctor_0();
}
void COmokDlg::_ctor_0() {
	return __sub_00281950(this, nullptr);
}
void COmokDlg::OnCreate(void* pData) {
	__sub_00281EC0(this, nullptr, pData);
}
int32_t COmokDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_0027F850(this, nullptr, rx, ry, ppCtrl);
}
void COmokDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00281800(this, nullptr, wParam, lParam);
}
void COmokDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_00280750(this, nullptr, msg, wParam, rx, ry);
}
void COmokDlg::OnButtonClicked(uint32_t uId) {
	__sub_00281750(this, nullptr, uId);
}
void COmokDlg::Draw(const tagRECT* arg0) {
	__sub_002867F0(this, nullptr, arg0);
}
void COmokDlg::GetActionPosition(long nSlot, long& nAction, tagPOINT& pt) {
	__sub_0027F820(this, nullptr, nSlot, nAction, pt);
}
void COmokDlg::OnPacket(long nType, CInPacket& iPacket) {
	__sub_00288B70(this, nullptr, nType, iPacket);
}
void COmokDlg::OnEnterResult(CInPacket& iPacket) {
	__sub_00280E70(this, nullptr, iPacket);
}
void COmokDlg::OnEnter(long nSlot, CInPacket& iPacket) {
	__sub_002812E0(this, nullptr, nSlot, iPacket);
}
void COmokDlg::OnLeave(long nSlot, CInPacket& iPacket) {
	__sub_00281480(this, nullptr, nSlot, iPacket);
}
void COmokDlg::Update() {
	__sub_00284AB0(this, nullptr);
}
void COmokDlg::DecodeMiniGameRecord(long nSlot, CInPacket& iPacket) {
	__sub_00281720(this, nullptr, nSlot, iPacket);
}
void COmokDlg::OnPutStoneChecker(CInPacket& iPacket) {
	__sub_002866A0(this, nullptr, iPacket);
}
void COmokDlg::OnPutStoneCheckerErr(CInPacket& iPacket) {
	__sub_00280360(this, nullptr, iPacket);
}
void COmokDlg::OnTieRequest(CInPacket& iPacket) {
	__sub_002803B0(this, nullptr, iPacket);
}
void COmokDlg::OnTieResult(CInPacket& iPacket) {
	__sub_00280470(this, nullptr, iPacket);
}
void COmokDlg::OnRetreatRequest(CInPacket& iPacket) {
	__sub_002804B0(this, nullptr, iPacket);
}
void COmokDlg::OnRetreatResult(CInPacket& iPacket) {
	__sub_00284620(this, nullptr, iPacket);
}
void COmokDlg::OnGiveUpResult(CInPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void COmokDlg::OnGameResult(CInPacket& iPacket) {
	__sub_00280570(this, nullptr, iPacket);
}
void COmokDlg::OnUserReady(CInPacket& iPacket) {
	__sub_00284930(this, nullptr, iPacket);
}
void COmokDlg::OnUserCancelReady(CInPacket& iPacket) {
	__sub_002849C0(this, nullptr, iPacket);
}
void COmokDlg::OnUserStart(CInPacket& iPacket) {
	__sub_00284A00(this, nullptr, iPacket);
}
void COmokDlg::OnTimeOver(CInPacket& iPacket) {
	__sub_0027FAC0(this, nullptr, iPacket);
}
void COmokDlg::PutStoneChecker(tagPOINT pt) {
	__sub_002801E0(this, nullptr, CreateNakedParam(pt));
}
void COmokDlg::SendTieRequest() {
	__sub_00280930(this, nullptr);
}
void COmokDlg::SendRetreatRequest() {
	__sub_00280A10(this, nullptr);
}
void COmokDlg::SendClaimGiveUp() {
	__sub_00280860(this, nullptr);
}
void COmokDlg::OnClickStartButton() {
	__sub_00280280(this, nullptr);
}
void COmokDlg::OnClickReadyButton() {
	__sub_00280B30(this, nullptr);
}
void COmokDlg::OnClickEndButton() {
	__sub_00280CD0(this, nullptr);
}
void COmokDlg::OnClickBanButton() {
	__sub_00280C20(this, nullptr);
}
void COmokDlg::DrawGameResult(_x_com_ptr<IWzCanvas> pCanvas, long nPlayerColor) {
	__sub_00284E20(this, nullptr, CreateNakedParam(pCanvas), nPlayerColor);
}
void COmokDlg::DrawReadyOrNot() {
	__sub_00282790(this, nullptr);
}
void COmokDlg::DrawStoneColor() {
	__sub_00282D80(this, nullptr);
}
void COmokDlg::ResetMiniGameData() {
	__sub_0027F980(this, nullptr);
}
void COmokDlg::AnimateTheLast() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
tagPOINT COmokDlg::GetStoneCheckerPositionFromPoint(long rx, long ry) {
	tagPOINT pt;
	return *__sub_0027F8B0(this, nullptr, &pt, rx, ry);
}
int32_t COmokDlg::IsUserTurn() {
	return __sub_0027F950(this, nullptr);
}
int32_t COmokDlg::IsRoomMaster() {
	return __sub_0027F950(this, nullptr);
}
int32_t COmokDlg::IsWinnerLastTime() {
	return __sub_0027F950(this, nullptr);
}
void COmokDlg::InsertStoneCheckerLayer(int32_t i, int32_t j, long nStoneColor) {
	__sub_00285C70(this, nullptr, i, j, nStoneColor);
}
void COmokDlg::AnimateRoundEffect(long arg0) {
	__sub_00283840(this, nullptr, arg0);
}
void COmokDlg::InsertStoneAnimateLayer(_x_com_ptr<IWzProperty> arg0, STONELAYER& arg1, long arg2) {
	__sub_00284180(this, nullptr, CreateNakedParam(arg0), arg1, arg2);
}
COmokDlg& COmokDlg::operator=(const COmokDlg& arg0) {
	return _op_assign_48(this, arg0);
}
COmokDlg& COmokDlg::_op_assign_48(COmokDlg* pThis, const COmokDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

