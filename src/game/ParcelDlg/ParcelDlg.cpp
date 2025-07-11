// ParcelDlg.cpp
#include "ParcelDlg.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

static ZRefCounted_AllocHelper<ZRefCountedDummy<PARCEL>> FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_PARCEL{};

#include "ParcelDlg_regen.ipp"

 CTabSend::~CTabSend() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CTabSend::_dtor_0() {
	return __sub_0028E860(this, nullptr);
}
 CTabSend::CTabSend(const CTabSend& arg0) {
	_ctor_1( arg0);
}
void CTabSend::_ctor_1( const CTabSend& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTabSend::CTabSend(CParcelDlg* pParent) {
	_ctor_0( pParent);
}
void CTabSend::_ctor_0( CParcelDlg* pParent) {
	return __sub_0028FF50(this, nullptr, pParent);
}
void CTabSend::Draw(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_002947B0(this, nullptr, CreateNakedParam(pCanvas));
}
int32_t CTabSend::OnMouseLButtonClk(long rx, long ry) {
	return __sub_00291400(this, nullptr, rx, ry);
}
void CTabSend::OnMouseMove(long rx, long ry) {
	__sub_0028DA70(this, nullptr, rx, ry);
}
int32_t CTabSend::HitTest(long rx, long ry) {
	return __sub_0028D8B0(this, nullptr, rx, ry);
}
void CTabSend::SendParcel() {
	__sub_00290140(this, nullptr);
}
void CTabSend::SetMoney() {
	__sub_002903A0(this, nullptr);
}
void CTabSend::PutItem(GW_ItemSlotBase* pItem, long nTI, long nPOS) {
	__sub_0028EC80(this, nullptr, pItem, nTI, nPOS);
}
void CTabSend::ResetSendInfo() {
	__sub_0028EE50(this, nullptr);
}
void CTabSend::ToggleTaxInfo() {
	__sub_0028E1A0(this, nullptr);
}
int32_t CTabSend::IsTaxShown() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CTabSend& CTabSend::operator=(const CTabSend& arg0) {
	return _op_assign_13(this, arg0);
}
CTabSend& CTabSend::_op_assign_13(CTabSend* pThis, const CTabSend& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTabQuickSend::~CTabQuickSend() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CTabQuickSend::_dtor_0() {
	return __sub_0028E940(this, nullptr);
}
 CTabQuickSend::CTabQuickSend(const CTabQuickSend& arg0) {
	_ctor_1( arg0);
}
void CTabQuickSend::_ctor_1( const CTabQuickSend& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTabQuickSend::CTabQuickSend(CParcelDlg* pParent) {
	_ctor_0( pParent);
}
void CTabQuickSend::_ctor_0( CParcelDlg* pParent) {
	return __sub_00291170(this, nullptr, pParent);
}
void CTabQuickSend::Draw(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_00294190(this, nullptr, CreateNakedParam(pCanvas));
}
int32_t CTabQuickSend::OnMouseLButtonClk(long rx, long ry) {
	return __sub_00291360(this, nullptr, rx, ry);
}
void CTabQuickSend::OnMouseMove(long rx, long ry) {
	__sub_0028D9E0(this, nullptr, rx, ry);
}
int32_t CTabQuickSend::HitTest(long rx, long ry) {
	return __sub_0028D840(this, nullptr, rx, ry);
}
void CTabQuickSend::SendQuickDelivery() {
	__sub_0028F7D0(this, nullptr);
}
void CTabQuickSend::SetMoney() {
	__sub_0028FB30(this, nullptr);
}
void CTabQuickSend::PutItem(GW_ItemSlotBase* pItem, long nTI, long nPOS) {
	__sub_0028EA20(this, nullptr, pItem, nTI, nPOS);
}
void CTabQuickSend::ResetSendInfo() {
	__sub_0028EBF0(this, nullptr);
}
void CTabQuickSend::ToggleTaxInfo() {
	__sub_0028E170(this, nullptr);
}
int32_t CTabQuickSend::IsTaxShown() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CTabQuickSend& CTabQuickSend::operator=(const CTabQuickSend& arg0) {
	return _op_assign_13(this, arg0);
}
CTabQuickSend& CTabQuickSend::_op_assign_13(CTabQuickSend* pThis, const CTabQuickSend& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTabReceive::~CTabReceive() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CTabReceive::_dtor_0() {
	return __sub_0028F240(this, nullptr);
}
 CTabReceive::CTabReceive(const CTabReceive& arg0) {
	_ctor_1( arg0);
}
void CTabReceive::_ctor_1( const CTabReceive& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTabReceive::CTabReceive(CParcelDlg* pParent) {
	_ctor_0( pParent);
}
void CTabReceive::_ctor_0( CParcelDlg* pParent) {
	return __sub_00290E30(this, nullptr, pParent);
}
void CTabReceive::Draw(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_002930E0(this, nullptr, CreateNakedParam(pCanvas));
}
int32_t CTabReceive::OnMouseLButtonClk(long rx, long ry) {
	return __sub_0028E060(this, nullptr, rx, ry);
}
void CTabReceive::OnMouseMove(long rx, long ry) {
	__sub_0028E0D0(this, nullptr, rx, ry);
}
int32_t CTabReceive::HitTest(long rx, long ry) {
	return __sub_0028D800(this, nullptr, rx, ry);
}
void CTabReceive::SetParcel(CInPacket& iPacket) {
	__sub_00292560(this, nullptr, iPacket);
}
void CTabReceive::RemoveParcel(long nParcelSN) {
	__sub_0028F2E0(this, nullptr, nParcelSN);
}
void CTabReceive::AddNewParcel(ZRef<PARCEL> p) {
	__sub_0028F360(this, nullptr, CreateNakedParam(p));
}
void CTabReceive::ReceiveParcel() {
	__sub_0028F470(this, nullptr);
}
void CTabReceive::DiscardParcel() {
	__sub_0028F5E0(this, nullptr);
}
CTabReceive& CTabReceive::operator=(const CTabReceive& arg0) {
	return _op_assign_12(this, arg0);
}
CTabReceive& CTabReceive::_op_assign_12(CTabReceive* pThis, const CTabReceive& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CParcelDlg::~CParcelDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CParcelDlg::_dtor_0() {
	return __sub_002909E0(this, nullptr);
}
 CParcelDlg::CParcelDlg(const CParcelDlg& arg0) {
	_ctor_1( arg0);
}
void CParcelDlg::_ctor_1( const CParcelDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CParcelDlg::CParcelDlg(long nMode) {
	_ctor_0( nMode);
}
void CParcelDlg::_ctor_0( long nMode) {
	return __sub_002907F0(this, nullptr, nMode);
}
void CParcelDlg::Draw(const tagRECT* pRect) {
	__sub_00294DB0(this, nullptr, pRect);
}
void CParcelDlg::OnCreate(void* arg0) {
	__sub_002914C0(this, nullptr, arg0);
}
void CParcelDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0028E2B0(this, nullptr, nId, param1, param2);
}
void CParcelDlg::OnButtonClicked(uint32_t nId) {
	__sub_00290C30(this, nullptr, nId);
}
void CParcelDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_002924F0(this, nullptr, msg, wParam, rx, ry);
}
int32_t CParcelDlg::OnMouseMove(long rx, long ry) {
	return __sub_0028E1D0(this, nullptr, rx, ry);
}
void CParcelDlg::Update() {
	__sub_0028D910(this, nullptr);
}
void CParcelDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00290D60(this, nullptr, wParam, lParam);
}
int32_t CParcelDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_0028D920(this, nullptr, rx, ry, ppCtrl);
}
void CParcelDlg::SetParcelDlg(CInPacket& iPacket) {
	__sub_00292960(this, nullptr, iPacket);
}
void CParcelDlg::RemoveParcel(long nParcelSN) {
	__sub_0028F6E0(this, nullptr, nParcelSN);
}
long CParcelDlg::GetCurrentTab() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CParcelDlg::SetCurrentTab(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CParcelDlg::PutItem(GW_ItemSlotBase* pItem, long nTI, long nPOS) {
	return __sub_0028EED0(this, nullptr, pItem, nTI, nPOS);
}
void CParcelDlg::SetScrollBar(long nCount, long nCurPos) {
	__sub_0028DE90(this, nullptr, nCount, nCurPos);
}
void CParcelDlg::SetMode(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CParcelDlg::OnTabChanged(long nTab) {
	__sub_0028E240(this, nullptr, nTab);
}
void CParcelDlg::SetMemo(ZXString<char> sMemo) {
	__sub_0028F170(this, nullptr, CreateNakedParam(sMemo));
}
void CParcelDlg::SetCtrl() {
	__sub_0028DB00(this, nullptr);
}
void CParcelDlg::SetCtrlEnabled(int32_t bEnable) {
	__sub_0028DDC0(this, nullptr, bEnable);
}
void CParcelDlg::CloseParcelDlg() {
	__sub_0028EF40(this, nullptr);
}
void CParcelDlg::ResetSendInfo() {
	__sub_0028F2C0(this, nullptr);
}
void CParcelDlg::AddNewParcel(ZRef<PARCEL> p) {
	__sub_0028F720(this, nullptr, CreateNakedParam(p));
}
void __cdecl CParcelDlg::OnPacket(CInPacket& iPacket) {
	__sub_00292970(iPacket);
}
void __cdecl CParcelDlg::NoticeResult(long nResult) {
	__sub_0028EFD0(nResult);
}
void CParcelDlg::DrawMainBg(const wchar_t* sUOL) {
	__sub_0028E350(this, nullptr, sUOL);
}
void CParcelDlg::DrawSubBg(const wchar_t* sUOL) {
	__sub_00292F40(this, nullptr, sUOL);
}
CParcelDlg& CParcelDlg::operator=(const CParcelDlg& arg0) {
	return _op_assign_33(this, arg0);
}
CParcelDlg& CParcelDlg::_op_assign_33(CParcelDlg* pThis, const CParcelDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

