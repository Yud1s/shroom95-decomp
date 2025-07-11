// UIQuestDelivery.cpp
#include "UIQuestDelivery.hpp"

static ZRef<QuestDeliveryInfo> FAKE_QuestDeliveryInfo{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<QuestDeliveryInfo>> FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_QuestDeliveryInfo{};

#include "UIQuestDelivery_regen.ipp"

 CUIQuestDelivery::~CUIQuestDelivery() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIQuestDelivery::_dtor_0() {
	return __sub_0041FAC0(this, nullptr);
}
 CUIQuestDelivery::CUIQuestDelivery(const CUIQuestDelivery& arg0) {
	_ctor_1( arg0);
}
void CUIQuestDelivery::_ctor_1( const CUIQuestDelivery& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIQuestDelivery::CUIQuestDelivery(long nItemPos, long nItemID) {
	_ctor_0( nItemPos, nItemID);
}
void CUIQuestDelivery::_ctor_0( long nItemPos, long nItemID) {
	return __sub_0041F8B0(this, nullptr, nItemPos, nItemID);
}
void CUIQuestDelivery::OnCreate(void* pData) {
	__sub_00420500(this, nullptr, pData);
}
void CUIQuestDelivery::OnDestroy() {
	__sub_0041FA60(this, nullptr);
}
void CUIQuestDelivery::Draw(const tagRECT* pRect) {
	__sub_00420940(this, nullptr, pRect);
}
void CUIQuestDelivery::OnButtonClicked(uint32_t nId) {
	__sub_0041F4E0(this, nullptr, nId);
}
void CUIQuestDelivery::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0041EEC0(this, nullptr, nId, param1, param2);
}
void CUIQuestDelivery::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_0041F1E0(this, nullptr, msg, wParam, rx, ry);
}
void CUIQuestDelivery::ResetInfo() {
	__sub_0041F2E0(this, nullptr);
}
void CUIQuestDelivery::LoadData() {
	__sub_0041FC60(this, nullptr);
}
void CUIQuestDelivery::SyncScrollBarWithSelected() {
	__sub_0041EF10(this, nullptr);
}
long CUIQuestDelivery::GetQuestIdxFromMousePos(long rx, long ry) {
	return __sub_0041F0A0(this, nullptr, rx, ry);
}
int32_t CUIQuestDelivery::IsOpenFromQUI() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUIQuestDelivery::IsShowOnlyWorthyQuests() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIQuestDelivery::ResetShowOnlyWorthyQuests() {
	__sub_0041EF30(this, nullptr);
}
int32_t CUIQuestDelivery::IsWorthlessQuest(uint16_t usQuestID) {
	return __sub_0041F670(this, nullptr, usQuestID);
}
void CUIQuestDelivery::SetScrollBar() {
	__sub_0041F150(this, nullptr);
}
CUIQuestDelivery& CUIQuestDelivery::operator=(const CUIQuestDelivery& arg0) {
	return _op_assign_21(this, arg0);
}
CUIQuestDelivery& CUIQuestDelivery::_op_assign_21(CUIQuestDelivery* pThis, const CUIQuestDelivery& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

