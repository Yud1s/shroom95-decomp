// UIExpeditionTab.cpp
#include "UIExpeditionTab.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

static ZRef<CCtrlWnd> FAKE_ZRef_CCtrlWnd{};
static ZRef<CCtrlPQuestItem> FAKE_ZRef_CCtrlPQuestItem{};
static ZRef<CCtrlStatic> FAKE_ZRef_CCtrlStatic{};

#include "UIExpeditionTab_regen.ipp"

 TabDlgInterface::~TabDlgInterface() {
	 UNIMPLEMENTED; // _dtor_0();
}
void TabDlgInterface::_dtor_0() {
	return __sub_003AD780(this, nullptr);
}
 TabDlgInterface::TabDlgInterface(const TabDlgInterface& arg0) {
	_ctor_1( arg0);
}
void TabDlgInterface::_ctor_1( const TabDlgInterface& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 TabDlgInterface::TabDlgInterface(CWnd* arg0) {
	_ctor_0( arg0);
}
void TabDlgInterface::_ctor_0( CWnd* arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void TabDlgInterface::OnCreate(void* arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void TabDlgInterface::Draw(_x_com_ptr<IWzCanvas> arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void TabDlgInterface::OnButtonClicked(uint32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void TabDlgInterface::OnChildNotify(uint32_t arg0, uint32_t arg1, uint32_t arg2) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void TabDlgInterface::ActivateControls() {
	__sub_003AD780(this, nullptr);
}
void TabDlgInterface::HideControls() {
	__sub_003AD780(this, nullptr);
}
void TabDlgInterface::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	return;
	//__sub_003AD740(this, nullptr, msg, wParam, rx, ry);
}
void TabDlgInterface::OnMoveWnd(long l, long t) {
	__sub_003AD750(this, nullptr, l, t);
}
void TabDlgInterface::OnKey(uint32_t wParam, int32_t lParam) {
	//__sub_003AD760(this, nullptr, wParam, lParam);
}
void TabDlgInterface::DoAction(long nAction, long nOption) {
	__sub_003AD770(this, nullptr, nAction, nOption);
}
TabDlgInterface& TabDlgInterface::operator=(const TabDlgInterface& arg0) {
	return _op_assign_13(this, arg0);
}
TabDlgInterface& TabDlgInterface::_op_assign_13(TabDlgInterface* pThis, const TabDlgInterface& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 DragMember::~DragMember() {
	 UNIMPLEMENTED; // _dtor_0();
}
void DragMember::_dtor_0() {
	return __sub_003ADA00(this, nullptr);
}
 DragMember::DragMember(const DragMember& arg0) {
	_ctor_1( arg0);
}
void DragMember::_ctor_1( const DragMember& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 DragMember::DragMember(IWzGr2DLayer* pLayer, unsigned long dwCharID) {
	_ctor_0( pLayer, dwCharID);
}
void DragMember::_ctor_0( IWzGr2DLayer* pLayer, unsigned long dwCharID) {
	return __sub_003AD990(this, nullptr, pLayer, dwCharID);
}
int32_t DragMember::OnDropped(IUIMsgHandler* pFrom, IUIMsgHandler* pTo, long rx, long ry) {
	return __sub_003AE5B0(this, nullptr, pFrom, pTo, rx, ry);
}
DragMember& DragMember::operator=(const DragMember& arg0) {
	return _op_assign_4(this, arg0);
}
DragMember& DragMember::_op_assign_4(DragMember* pThis, const DragMember& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlStatic::~CCtrlStatic() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCtrlStatic::_dtor_0() {
	return __sub_003AD510(this, nullptr);
}
 CCtrlStatic::CCtrlStatic(const CCtrlStatic& arg0) {
	_ctor_1( arg0);
}
void CCtrlStatic::_ctor_1( const CCtrlStatic& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlStatic::CCtrlStatic() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCtrlStatic::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCtrlStatic::Draw(long rx, long ry, const tagRECT* pRect) {
	__sub_000EDE10(this, nullptr, rx, ry, pRect);
}
void CCtrlStatic::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_000EDDD0(this, nullptr, msg, wParam, rx, ry);
}
void CCtrlStatic::OnMouseEnter(int32_t bEnter) {
	__sub_000EDE20(this, nullptr, bEnter);
}
CCtrlStatic& CCtrlStatic::operator=(const CCtrlStatic& arg0) {
	return _op_assign_6(this, arg0);
}
CCtrlStatic& CCtrlStatic::_op_assign_6(CCtrlStatic* pThis, const CCtrlStatic& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlPQuestItem::~CCtrlPQuestItem() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCtrlPQuestItem::_dtor_0() {
	return __sub_003AE0E0(this, nullptr);
}
 CCtrlPQuestItem::CCtrlPQuestItem(const CCtrlPQuestItem& arg0) {
	_ctor_1( arg0);
}
void CCtrlPQuestItem::_ctor_1( const CCtrlPQuestItem& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlPQuestItem::CCtrlPQuestItem() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCtrlPQuestItem::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCtrlPQuestItem::Draw(long rx, long ry, const tagRECT* pRect) {
	__sub_00590690(this, nullptr, rx, ry, pRect);
}
void CCtrlPQuestItem::CreateCtrl(CWnd* pParent, uint32_t nId, long l, long t, ZRef<PartyQuestInfo> pInfo, int32_t bSelected) {
	__sub_0058F180(this, nullptr, pParent, nId, l, t, CreateNakedParam(pInfo), bSelected);
}
ZXString16 CCtrlPQuestItem::GetBackUOL() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CCtrlPQuestItem& CCtrlPQuestItem::operator=(const CCtrlPQuestItem& arg0) {
	return _op_assign_6(this, arg0);
}
CCtrlPQuestItem& CCtrlPQuestItem::_op_assign_6(CCtrlPQuestItem* pThis, const CCtrlPQuestItem& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 TabExpedition::~TabExpedition() {
	 UNIMPLEMENTED; // _dtor_0();
}
void TabExpedition::_dtor_0() {
	return __sub_003ADE20(this, nullptr);
}
 TabExpedition::TabExpedition(const TabExpedition& arg0) {
	_ctor_1( arg0);
}
void TabExpedition::_ctor_1( const TabExpedition& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 TabExpedition::TabExpedition(CWnd* pParent) {
	_ctor_0( pParent);
}
void TabExpedition::_ctor_0( CWnd* pParent) {
	return __sub_003AE520(this, nullptr, pParent);
}
void TabExpedition::OnCreate(void* pData) {
	__sub_003B08B0(this, nullptr, pData);
}
void TabExpedition::Draw(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_003B0790(this, nullptr, CreateNakedParam(pCanvas));
}
void TabExpedition::OnButtonClicked(uint32_t nId) {
	__sub_003AF5C0(this, nullptr, nId);
}
void TabExpedition::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_003AF940(this, nullptr, nId, param1, param2);
}
void TabExpedition::ActivateControls() {
	__sub_003B08F0(this, nullptr);
}
void TabExpedition::HideControls() {
	__sub_003AFE80(this, nullptr);
}
void TabExpedition::OnMoveWnd(long l, long t) {
	__sub_003AD500(this, nullptr, l, t);
}
void TabExpedition::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	return;
	//__sub_003AD5D0(this, nullptr, msg, wParam, rx, ry);
}
int32_t TabExpedition::OnMouseMove(long rx, long ry) {
	return __sub_003AD7F0(this, nullptr, rx, ry);
}
void TabExpedition::OnExpeditionChanged() {
	__sub_003B0870(this, nullptr);
}
void TabExpedition::OnStatChanged() {
	__sub_003AD5E0(this, nullptr);
}
void TabExpedition::SetState(TabExpedition::ENUM_STATE nState) {
	__sub_003B0840(this, nullptr, nState);
}
void TabExpedition::InitState(TabExpedition::ENUM_STATE nState) {
	__sub_003AFF90(this, nullptr, nState);
}
void TabExpedition::EndState(TabExpedition::ENUM_STATE nState) {
	__sub_003AE010(this, nullptr, nState);
}
void TabExpedition::AttachStatic(TabExpedition::ENUM_CTRL_ID nID, long x, long y, long width, long height) {
	__sub_003AE940(this, nullptr, nID, x, y, width, height);
}
void TabExpedition::AttachBanner(TabExpedition::ENUM_CTRL_ID nID, long x, long y, long width, long height, ZRef<PartyQuestInfo> pInfo, int32_t bSelected) {
	__sub_003AEC00(this, nullptr, nID, x, y, width, height, CreateNakedParam(pInfo), bSelected);
}
void TabExpedition::AttachButton(TabExpedition::ENUM_CTRL_ID nID, ZXString16 sUOL) {
	__sub_003AEA80(this, nullptr, nID, CreateNakedParam(sUOL));
}
void TabExpedition::SetControlEnable(TabExpedition::ENUM_CTRL_ID nID, int32_t bEnable) {
	__sub_003AEB80(this, nullptr, nID, bEnable);
}
void TabExpedition::SetControlVisible(TabExpedition::ENUM_CTRL_ID nID, int32_t bEnable) {
	__sub_003AEBC0(this, nullptr, nID, bEnable);
}
void TabExpedition::DetachCtrl(TabExpedition::ENUM_CTRL_ID nId) {
	__sub_003AEDA0(this, nullptr, nId);
}
void TabExpedition::Draw_Create(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_003B0220(this, nullptr, CreateNakedParam(pCanvas));
}
long TabExpedition::GetQuestMaxPage() {
	return __sub_003AD520(this, nullptr);
}
long TabExpedition::GetSelectQuestID_1() {
	return __sub_003AE000(this, nullptr);
}
long TabExpedition::GetSelectQuestID_0(long nIndex) {
	return __sub_003ADEA0(this, nullptr, nIndex);
}
void TabExpedition::Draw_Arrange(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_003B0510(this, nullptr, CreateNakedParam(pCanvas));
}
void TabExpedition::DrawMember(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, long nCharacterID, ZXString<char> sName, long nJob, long nLevel, TabExpedition::PARAM_SELECT_TYPE eSelectType, int32_t bOnline, TabExpedition::PARAM_MEMBER_TYPE eMemberType) {
	__sub_003AEE80(this, nullptr, CreateNakedParam(pCanvas), x, y, nCharacterID, CreateNakedParam(sName), nJob, nLevel, eSelectType, bOnline, eMemberType);
}
void TabExpedition::DrawParty(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, long nPartyIndex, PARTYMEMBER partyMember, long nMasterPartyIndex) {
	__sub_003AF1D0(this, nullptr, CreateNakedParam(pCanvas), x, y, nPartyIndex, CreateNakedParam(partyMember), nMasterPartyIndex);
}
void TabExpedition::OnInvite() {
	__sub_003AF3D0(this, nullptr);
}
long TabExpedition::GetSelectMemberID_0(long nIndex) {
	return __sub_003AD790(this, nullptr, nIndex);
}
long TabExpedition::GetSelectMemberID_1() {
	return __sub_003AD7E0(this, nullptr);
}
long TabExpedition::GetSelectMemberInfo(long nIndex, ZXString<char>& sName, long& nLevel, long& nJob, long& nChannel, int32_t& bPartyBoss, int32_t& bExpMaster) {
	return __sub_003AE3B0(this, nullptr, nIndex, sName, nLevel, nJob, nChannel, bPartyBoss, bExpMaster);
}
int32_t TabExpedition::HasMsgHandler(IUIMsgHandler* pHandler) {
	return __sub_003AE170(this, nullptr, pHandler);
}
long TabExpedition::GetPartyIndexOfRegion(long x, long y) {
	return __sub_003AD530(this, nullptr, x, y);
}
long TabExpedition::GetPartyRegionX(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long TabExpedition::GetPartyRegionY(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void TabExpedition::EndDragDrop() {
	__sub_003AD5F0(this, nullptr);
}
TabExpedition& TabExpedition::operator=(const TabExpedition& arg0) {
	return _op_assign_39(this, arg0);
}
TabExpedition& TabExpedition::_op_assign_39(TabExpedition* pThis, const TabExpedition& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlSelectQuest::~CCtrlSelectQuest() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCtrlSelectQuest::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlSelectQuest::CCtrlSelectQuest(const CCtrlSelectQuest& arg0) {
	_ctor_1( arg0);
}
void CCtrlSelectQuest::_ctor_1( const CCtrlSelectQuest& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlSelectQuest::CCtrlSelectQuest() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCtrlSelectQuest::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZXString16 CCtrlSelectQuest::GetBackUOL() {
	return __sub_003AE4B0(this, nullptr);
}
CCtrlSelectQuest& CCtrlSelectQuest::operator=(const CCtrlSelectQuest& arg0) {
	return _op_assign_4(this, arg0);
}
CCtrlSelectQuest& CCtrlSelectQuest::_op_assign_4(CCtrlSelectQuest* pThis, const CCtrlSelectQuest& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

ZXString16 __cdecl GetJobIcon(long bOnline, int32_t arg1) {
	return __sub_003AEDD0(bOnline, arg1);
}
