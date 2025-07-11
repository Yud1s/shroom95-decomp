// UIShopScanner.cpp
#include "UIShopScanner.hpp"

static ZRef<ITEMNAME> _FAKE_ZRef_ITEMNAME{};

#include "UIShopScanner_regen.ipp"

 CUIShopScannerCategory::~CUIShopScannerCategory() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIShopScannerCategory::_dtor_0() {
	return __sub_00446B30(this, nullptr);
}
 CUIShopScannerCategory::CUIShopScannerCategory(const CUIShopScannerCategory& arg0) {
	_ctor_1( arg0);
}
void CUIShopScannerCategory::_ctor_1( const CUIShopScannerCategory& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIShopScannerCategory::CUIShopScannerCategory(long lLeft, long lTop) {
	_ctor_0( lLeft, lTop);
}
void CUIShopScannerCategory::_ctor_0( long lLeft, long lTop) {
	return __sub_00446A30(this, nullptr, lLeft, lTop);
}
void CUIShopScannerCategory::OnCreate(void* pData) {
	__sub_00441170(this, nullptr, pData);
}
int32_t CUIShopScannerCategory::OnSetFocus(int32_t bFocus) {
	return __sub_00446B10(this, nullptr, bFocus);
}
void CUIShopScannerCategory::Draw(const tagRECT* pRect) {
	__sub_00441D20(this, nullptr, pRect);
}
void CUIShopScannerCategory::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0043E410(this, nullptr, nId, param1, param2);
}
void CUIShopScannerCategory::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_00448720(this, nullptr, msg, wParam, rx, ry);
}
void CUIShopScannerCategory::OnButtonClicked(uint32_t nId) {
	__sub_00448B70(this, nullptr, nId);
}
void CUIShopScannerCategory::ClearList() {
	__sub_0043E5E0(this, nullptr);
}
void CUIShopScannerCategory::AddtoList_1(long nBegin, long nEnd) {
	__sub_0043E640(this, nullptr, nBegin, nEnd);
}
void CUIShopScannerCategory::AddtoList_0(long nItemCatagory) {
	__sub_0043E610(this, nullptr, nItemCatagory);
}
void CUIShopScannerCategory::AddtoList2(long nItemCatagory) {
	__sub_0043E670(this, nullptr, nItemCatagory);
}
CUIShopScannerCategory& CUIShopScannerCategory::operator=(const CUIShopScannerCategory& arg0) {
	return _op_assign_13(this, arg0);
}
CUIShopScannerCategory& CUIShopScannerCategory::_op_assign_13(CUIShopScannerCategory* pThis, const CUIShopScannerCategory& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIShopScanResult::~CUIShopScanResult() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIShopScanResult::_dtor_0() {
	return __sub_004499E0(this, nullptr);
}
 CUIShopScanResult::CUIShopScanResult(const CUIShopScanResult& arg0) {
	_ctor_1( arg0);
}
void CUIShopScanResult::_ctor_1( const CUIShopScanResult& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIShopScanResult::CUIShopScanResult(long nItemID, ZList<ZRef<ITEMDATA> >& lItemData) {
	_ctor_0( nItemID, lItemData);
}
void CUIShopScanResult::_ctor_0( long nItemID, ZList<ZRef<ITEMDATA> >& lItemData) {
	return __sub_00449840(this, nullptr, nItemID, lItemData);
}
void CUIShopScanResult::OnCreate(void* pData) {
	__sub_00443680(this, nullptr, pData);
}
void CUIShopScanResult::Draw(const tagRECT* pRect) {
	__sub_00443A60(this, nullptr, pRect);
}
void CUIShopScanResult::OnButtonClicked(uint32_t nId) {
	__sub_00448E80(this, nullptr, nId);
}
int32_t CUIShopScanResult::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_0043E460(this, nullptr, rx, ry, ppCtrl);
}
int32_t CUIShopScanResult::OnMouseMove(long rx, long ry) {
	return __sub_00446390(this, nullptr, rx, ry);
}
void CUIShopScanResult::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00449980(this, nullptr, wParam, lParam);
}
void CUIShopScanResult::LoadCurPageItemList() {
	__sub_00447AC0(this, nullptr);
}
void CUIShopScanResult::OnShopLinkResult(CInPacket& iPacket) {
	__sub_00447D60(this, nullptr, iPacket);
}
CUIShopScanResult& CUIShopScanResult::operator=(const CUIShopScanResult& arg0) {
	return _op_assign_14(this, arg0);
}
CUIShopScanResult& CUIShopScanResult::_op_assign_14(CUIShopScanResult* pThis, const CUIShopScanResult& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIShopScannerHotList::~CUIShopScannerHotList() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIShopScannerHotList::_dtor_0() {
	return __sub_0043FDF0(this, nullptr);
}
 CUIShopScannerHotList::CUIShopScannerHotList(const CUIShopScannerHotList& arg0) {
	_ctor_1( arg0);
}
void CUIShopScannerHotList::_ctor_1( const CUIShopScannerHotList& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIShopScannerHotList::CUIShopScannerHotList(long lLeft, long lTop) {
	_ctor_0( lLeft, lTop);
}
void CUIShopScannerHotList::_ctor_0( long lLeft, long lTop) {
	return __sub_0043FCE0(this, nullptr, lLeft, lTop);
}
void CUIShopScannerHotList::OnCreate(void* pData) {
	__sub_00446DE0(this, nullptr, pData);
}
int32_t CUIShopScannerHotList::OnSetFocus(int32_t bFocus) {
	return __sub_0043FDD0(this, nullptr, bFocus);
}
void CUIShopScannerHotList::Draw(const tagRECT* pRect) {
	__sub_004409A0(this, nullptr, pRect);
}
void CUIShopScannerHotList::OnButtonClicked(uint32_t nId) {
	__sub_00448670(this, nullptr, nId);
}
void CUIShopScannerHotList::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_00440EC0(this, nullptr, msg, wParam, rx, ry);
}
int32_t CUIShopScannerHotList::OnMouseMove(long rx, long ry) {
	return __sub_0043EFB0(this, nullptr, rx, ry);
}
void CUIShopScannerHotList::Reset() {
	__sub_0043E5A0(this, nullptr);
}
CUIShopScannerHotList& CUIShopScannerHotList::operator=(const CUIShopScannerHotList& arg0) {
	return _op_assign_10(this, arg0);
}
CUIShopScannerHotList& CUIShopScannerHotList::_op_assign_10(CUIShopScannerHotList* pThis, const CUIShopScannerHotList& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIShopScannerSearchResult::~CUIShopScannerSearchResult() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIShopScannerSearchResult::_dtor_0() {
	return __sub_0043FB40(this, nullptr);
}
 CUIShopScannerSearchResult::CUIShopScannerSearchResult(const CUIShopScannerSearchResult& arg0) {
	_ctor_1( arg0);
}
void CUIShopScannerSearchResult::_ctor_1( const CUIShopScannerSearchResult& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIShopScannerSearchResult::CUIShopScannerSearchResult(long lLeft, long lTop) {
	_ctor_0( lLeft, lTop);
}
void CUIShopScannerSearchResult::_ctor_0( long lLeft, long lTop) {
	return __sub_0043F9C0(this, nullptr, lLeft, lTop);
}
void CUIShopScannerSearchResult::OnCreate(void* pData) {
	__sub_00449060(this, nullptr, pData);
}
int32_t CUIShopScannerSearchResult::OnSetFocus(int32_t bFocus) {
	return __sub_0043FB20(this, nullptr, bFocus);
}
void CUIShopScannerSearchResult::Draw(const tagRECT* pRect) {
	__sub_0043FF10(this, nullptr, pRect);
}
void CUIShopScannerSearchResult::OnButtonClicked(uint32_t nId) {
	__sub_004480E0(this, nullptr, nId);
}
int32_t CUIShopScannerSearchResult::OnMouseMove(long rx, long ry) {
	return __sub_0043EEA0(this, nullptr, rx, ry);
}
void CUIShopScannerSearchResult::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_004406D0(this, nullptr, msg, wParam, rx, ry);
}
void CUIShopScannerSearchResult::Reset() {
	__sub_00446BF0(this, nullptr);
}
long CUIShopScannerSearchResult::GetIndexFromPoint(long rx, long ry) {
	return __sub_0043E510(this, nullptr, rx, ry);
}
CUIShopScannerSearchResult& CUIShopScannerSearchResult::operator=(const CUIShopScannerSearchResult& arg0) {
	return _op_assign_11(this, arg0);
}
CUIShopScannerSearchResult& CUIShopScannerSearchResult::_op_assign_11(CUIShopScannerSearchResult* pThis, const CUIShopScannerSearchResult& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIShopScanner::~CUIShopScanner() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIShopScanner::_dtor_0() {
	return __sub_0043F4F0(this, nullptr);
}
 CUIShopScanner::CUIShopScanner(const CUIShopScanner& arg0) {
	_ctor_1( arg0);
}
void CUIShopScanner::_ctor_1( const CUIShopScanner& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIShopScanner::CUIShopScanner() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIShopScanner::_ctor_0() {
	return __sub_004433F0(this, nullptr);
}
void CUIShopScanner::OnCreate(void* pData) {
	__sub_00448B90(this, nullptr, pData);
}
void CUIShopScanner::OnDestroy() {
	__sub_0043F140(this, nullptr);
}
void CUIShopScanner::OnMoveWnd(long l, long t) {
	__sub_0043E950(this, nullptr, l, t);
}
void CUIShopScanner::OnButtonClicked(uint32_t nId) {
	__sub_00448C40(this, nullptr, nId);
}
void CUIShopScanner::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00448DA0(this, nullptr, wParam, lParam);
}
void CUIShopScanner::Update() {
	__sub_0043F1E0(this, nullptr);
}
int32_t CUIShopScanner::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_0043E430(this, nullptr, rx, ry, ppCtrl);
}
int32_t CUIShopScanner::IsMyAddon(CWnd* pWnd) {
	return __sub_0043F630(this, nullptr, pWnd);
}
void CUIShopScanner::SetOutPacket(COutPacket& oPacket) {
	__sub_0043F670(this, nullptr, oPacket);
}
void CUIShopScanner::SetHotList(ZArray<long>& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIShopScanner::SetCtrl() {
	__sub_004473E0(this, nullptr);
}
void CUIShopScanner::ToggleAddOn(long nType) {
	__sub_004475B0(this, nullptr, nType);
}
void CUIShopScanner::OnToggleDetail(_x_com_ptr<IWzGr2DLayer> pDetailLayer, int32_t& bShown) {
	__sub_0043E880(this, nullptr, CreateNakedParam(pDetailLayer), bShown);
}
void CUIShopScanner::SearchItemName(ZXString<char> sItemName) {
	__sub_00447950(this, nullptr, CreateNakedParam(sItemName));
}
void CUIShopScanner::SendScanPacket(long nItemID, int32_t bDescendingOrder) {
	__sub_0043F6B0(this, nullptr, nItemID, bDescendingOrder);
}
int32_t CUIShopScanner::CanAddList(long nItemID, ZXString<char> sItemName) {
	return __sub_0043F7F0(this, nullptr, nItemID, CreateNakedParam(sItemName));
}
CUIShopScanner& CUIShopScanner::operator=(const CUIShopScanner& arg0) {
	return _op_assign_19(this, arg0);
}
CUIShopScanner& CUIShopScanner::_op_assign_19(CUIShopScanner* pThis, const CUIShopScanner& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

