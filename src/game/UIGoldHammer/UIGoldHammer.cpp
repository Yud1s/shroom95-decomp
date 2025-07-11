// UIGoldHammer.cpp
#include "UIGoldHammer.hpp"
#include "Stage/Stage.hpp"

static ZRef<CStage> FAKE_ZRef_CStage{};

static ZRef<CUIVegaResultPopup> FAKE_ZRef_CUIVegaResultPopup{};

#include "UIGoldHammer_regen.ipp"

 CUIItemUpgrade::~CUIItemUpgrade() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIItemUpgrade::_dtor_0() {
	return __sub_003BFF80(this, nullptr);
}
 CUIItemUpgrade::CUIItemUpgrade(const CUIItemUpgrade& arg0) {
	_ctor_1( arg0);
}
void CUIItemUpgrade::_ctor_1( const CUIItemUpgrade& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIItemUpgrade::CUIItemUpgrade(COutPacket oPacket, long nPOS, long nItemID) {
	_ctor_0( oPacket, nPOS, nItemID);
}
void CUIItemUpgrade::_ctor_0( COutPacket oPacket, long nPOS, long nItemID) {
	return __sub_003BFD40(this, nullptr, CreateNakedParam(oPacket), nPOS, nItemID);
}
void CUIItemUpgrade::OnCreate(void* pData) {
	__sub_003C06A0(this, nullptr, pData);
}
void CUIItemUpgrade::OnPacket(long nType, CInPacket& iPacket) {
	__sub_003C2E10(this, nullptr, nType, iPacket);
}
void CUIItemUpgrade::OnItemUpgradeResult(CInPacket& iPacket) {
	__sub_003C0FD0(this, nullptr, iPacket);
}
void CUIItemUpgrade::ShowResult() {
	__sub_003BEC20(this, nullptr);
}
void CUIItemUpgrade::Draw(const tagRECT* pRect) {
	__sub_003C0100(this, nullptr, pRect);
}
void CUIItemUpgrade::OnButtonClicked(uint32_t nId) {
	__sub_003C0CA0(this, nullptr, nId);
}
void CUIItemUpgrade::Update() {
	__sub_003BEF50(this, nullptr);
}
void CUIItemUpgrade::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_003BE290(this, nullptr, wParam, lParam);
}
int32_t CUIItemUpgrade::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_003BE2C0(this, nullptr, rx, ry, ppCtrl);
}
int32_t CUIItemUpgrade::OnMouseMove(long rx, long ry) {
	return __sub_003BEB50(this, nullptr, rx, ry);
}
void CUIItemUpgrade::ClearToolTip() {
	__sub_003BFF20(this, nullptr);
}
int32_t CUIItemUpgrade::PutItem(GW_ItemSlotBase* pItem, long nItemTI, long nSlotPosition) {
	return __sub_003BF040(this, nullptr, pItem, nItemTI, nSlotPosition);
}
void CUIItemUpgrade::DrawGaugeBar(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_003BF0F0(this, nullptr, CreateNakedParam(pCanvas));
}
CUIItemUpgrade& CUIItemUpgrade::operator=(const CUIItemUpgrade& arg0) {
	return _op_assign_19(this, arg0);
}
CUIItemUpgrade& CUIItemUpgrade::_op_assign_19(CUIItemUpgrade* pThis, const CUIItemUpgrade& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIVega::~CUIVega() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIVega::_dtor_0() {
	return __sub_003C0490(this, nullptr);
}
 CUIVega::CUIVega(const CUIVega& arg0) {
	_ctor_1( arg0);
}
void CUIVega::_ctor_1( const CUIVega& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIVega::CUIVega(COutPacket oPacket, long nId) {
	_ctor_0( oPacket, nId);
}
void CUIVega::_ctor_0( COutPacket oPacket, long nId) {
	return __sub_003C01F0(this, nullptr, CreateNakedParam(oPacket), nId);
}
void CUIVega::OnCreate(void* arg0) {
	__sub_003C1320(this, nullptr, arg0);
}
void CUIVega::OnPacket(long nType, CInPacket& iPacket) {
	__sub_003C0680(this, nullptr, nType, iPacket);
}
void CUIVega::OnVegaResult(CInPacket& iPacket) {
	__sub_003BF7B0(this, nullptr, iPacket);
}
void CUIVega::Draw(const tagRECT* pRect) {
	__sub_003C1DD0(this, nullptr, pRect);
}
void CUIVega::OnButtonClicked(uint32_t nId) {
	__sub_003BF4A0(this, nullptr, nId);
}
void CUIVega::Update() {
	__sub_003BE330(this, nullptr);
}
void CUIVega::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_003BE300(this, nullptr, wParam, lParam);
}
int32_t CUIVega::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_003BE350(this, nullptr, rx, ry, ppCtrl);
}
int32_t CUIVega::OnMouseMove(long rx, long ry) {
	return __sub_003BECE0(this, nullptr, rx, ry);
}
int32_t CUIVega::PutItem(GW_ItemSlotBase* pItem, long nItemTI, long nSlotPosition) {
	return __sub_003C2200(this, nullptr, pItem, nItemTI, nSlotPosition);
}
void CUIVega::DrawGaugeBar(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_003BE480(this, nullptr, CreateNakedParam(pCanvas));
}
void CUIVega::DrawCount(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_003BE6C0(this, nullptr, CreateNakedParam(pCanvas));
}
int32_t CUIVega::is_right_scroll(long nScrollID) {
	return __sub_003BE3E0(this, nullptr, nScrollID);
}
CUIVega& CUIVega::operator=(const CUIVega& arg0) {
	return _op_assign_19(this, arg0);
}
CUIVega& CUIVega::_op_assign_19(CUIVega* pThis, const CUIVega& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIVegaResultPopup::~CUIVegaResultPopup() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIVegaResultPopup::_dtor_0() {
	return __sub_003BFB80(this, nullptr);
}
 CUIVegaResultPopup::CUIVegaResultPopup(const CUIVegaResultPopup& arg0) {
	_ctor_1( arg0);
}
void CUIVegaResultPopup::_ctor_1( const CUIVegaResultPopup& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIVegaResultPopup::CUIVegaResultPopup(long nResult, ZRef<GW_ItemSlotBase> pSelectedEquipItem, int32_t nEquipItemTI, int32_t nEquipSlotPosition) {
	_ctor_0( nResult, pSelectedEquipItem, nEquipItemTI, nEquipSlotPosition);
}
void CUIVegaResultPopup::_ctor_0( long nResult, ZRef<GW_ItemSlotBase> pSelectedEquipItem, int32_t nEquipItemTI, int32_t nEquipSlotPosition) {
	return __sub_003BF9F0(this, nullptr, nResult, CreateNakedParam(pSelectedEquipItem), nEquipItemTI, nEquipSlotPosition);
}
void CUIVegaResultPopup::OnCreate(void* pData) {
	__sub_003C2BD0(this, nullptr, pData);
}
void CUIVegaResultPopup::OnButtonClicked(uint32_t nId) {
	__sub_003BE390(this, nullptr, nId);
}
void CUIVegaResultPopup::Draw(const tagRECT* pRect) {
	__sub_003BFC80(this, nullptr, pRect);
}
int32_t CUIVegaResultPopup::OnMouseMove(long rx, long ry) {
	return __sub_003BEE30(this, nullptr, rx, ry);
}
CUIVegaResultPopup& CUIVegaResultPopup::operator=(const CUIVegaResultPopup& arg0) {
	return _op_assign_7(this, arg0);
}
CUIVegaResultPopup& CUIVegaResultPopup::_op_assign_7(CUIVegaResultPopup* pThis, const CUIVegaResultPopup& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

