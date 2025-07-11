// UIFindFriend.cpp
#include "UIFindFriend.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

static  ZRefCounted_AllocHelper<ZRefCountedDummy<SearchInfo>> _FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_SearchInfo{};

#include "UtilDlg/UtilDlg.hpp"

static ZRef<CUtilDlg> _FAKE_ZRef_CUtilDlg{};

#include "UIFindFriend_regen.ipp"

 CUIFindFriend::~CUIFindFriend() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIFindFriend::_dtor_0() {
	return __sub_003B7CB0(this, nullptr);
}
 CUIFindFriend::CUIFindFriend(const CUIFindFriend& arg0) {
	_ctor_1( arg0);
}
void CUIFindFriend::_ctor_1( const CUIFindFriend& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIFindFriend::CUIFindFriend() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIFindFriend::_ctor_0() {
	return __sub_003B7AD0(this, nullptr);
}
void CUIFindFriend::OnCreate(void* pData) {
	__sub_003BA180(this, nullptr, pData);
}
void CUIFindFriend::OnDestroy() {
	__sub_003B7E50(this, nullptr);
}
void CUIFindFriend::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_003BB630(this, nullptr, nId, param1, param2);
}
void CUIFindFriend::OnButtonClicked(uint32_t nId) {
	__sub_003BB980(this, nullptr, nId);
}
void CUIFindFriend::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_003BAD00(this, nullptr, msg, wParam, rx, ry);
}
int32_t CUIFindFriend::OnSetFocus(int32_t bFocus) {
	return __sub_003B7C30(this, nullptr, bFocus);
}
void CUIFindFriend::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_003B72B0(this, nullptr, wParam, lParam);
}
void CUIFindFriend::Draw(const tagRECT* pRect) {
	__sub_003B9450(this, nullptr, pRect);
}
void CUIFindFriend::OnMoveWnd(long l, long t) {
	__sub_003B7520(this, nullptr, l, t);
}
int32_t CUIFindFriend::IsMyAddon(CWnd* pWnd) {
	return __sub_003B7C60(this, nullptr, pWnd);
}
void CUIFindFriend::ListSorting(long nType) {
	__sub_003BADB0(this, nullptr, nType);
}
void CUIFindFriend::SendMyInfoRequest() {
	__sub_003B8000(this, nullptr);
}
void CUIFindFriend::SendSearchRequest() {
	__sub_003BB4C0(this, nullptr);
}
void CUIFindFriend::OnMyInfoResult(CInPacket& iPacket) {
	__sub_003BBA20(this, nullptr, iPacket);
}
void CUIFindFriend::OnSearchResult(CInPacket& iPacket) {
	__sub_003BBB50(this, nullptr, iPacket);
}
void CUIFindFriend::OnRequestError(long nErr) {
	__sub_003B8080(this, nullptr, nErr);
}
void CUIFindFriend::OnAddBuddy() {
	__sub_003BB690(this, nullptr);
}
void CUIFindFriend::OnWhisper() {
	__sub_003BA9B0(this, nullptr);
}
void CUIFindFriend::OnToggleDetail() {
	__sub_003BABC0(this, nullptr);
}
void CUIFindFriend::OnToggleDetailClose() {
	__sub_003B7EA0(this, nullptr);
}
CUIFindFriend& CUIFindFriend::operator=(const CUIFindFriend& arg0) {
	return _op_assign_26(this, arg0);
}
CUIFindFriend& CUIFindFriend::_op_assign_26(CUIFindFriend* pThis, const CUIFindFriend& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIFindFriendDetail::~CUIFindFriendDetail() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIFindFriendDetail::_dtor_0() {
	return __sub_003B99D0(this, nullptr);
}
 CUIFindFriendDetail::CUIFindFriendDetail(const CUIFindFriendDetail& arg0) {
	_ctor_1( arg0);
}
void CUIFindFriendDetail::_ctor_1( const CUIFindFriendDetail& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIFindFriendDetail::CUIFindFriendDetail(long lLeft, long lTop) {
	_ctor_0( lLeft, lTop);
}
void CUIFindFriendDetail::_ctor_0( long lLeft, long lTop) {
	return __sub_003B98A0(this, nullptr, lLeft, lTop);
}
void CUIFindFriendDetail::OnCreate(void* pData) {
	__sub_003B9D80(this, nullptr, pData);
}
void CUIFindFriendDetail::Draw(const tagRECT* pRect) {
	__sub_003B8290(this, nullptr, pRect);
}
void CUIFindFriendDetail::OnButtonClicked(uint32_t nId) {
	__sub_003B7FC0(this, nullptr, nId);
}
void CUIFindFriendDetail::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_003B7230(this, nullptr, nId, param1, param2);
}
int32_t CUIFindFriendDetail::OnSetFocus(int32_t bFocus) {
	return __sub_003B9970(this, nullptr, bFocus);
}
void CUIFindFriendDetail::SetDetailInfo(ZRef<SearchInfo> pSearchInfo) {
	__sub_003B8A80(this, nullptr, CreateNakedParam(pSearchInfo));
}
void CUIFindFriendDetail::OnDetailInfoResult(CInPacket& iPacket) {
	__sub_003B9340(this, nullptr, iPacket);
}
CUIFindFriendDetail& CUIFindFriendDetail::operator=(const CUIFindFriendDetail& arg0) {
	return _op_assign_13(this, arg0);
}
CUIFindFriendDetail& CUIFindFriendDetail::_op_assign_13(CUIFindFriendDetail* pThis, const CUIFindFriendDetail& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

