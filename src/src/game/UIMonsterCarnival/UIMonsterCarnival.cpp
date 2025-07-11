// UIMonsterCarnival.cpp
#include "UIMonsterCarnival.hpp"
#include "UIMonsterCarnival_regen.ipp"

 CTabList::~CTabList() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CTabList::_dtor_0() {
	return __sub_0040ECA0(this, nullptr);
}
 CTabList::CTabList(const CTabList& arg0) {
	_ctor_1( arg0);
}
void CTabList::_ctor_1( const CTabList& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTabList::CTabList(CUIMonsterCarnival* arg0) {
	_ctor_0( arg0);
}
void CTabList::_ctor_0( CUIMonsterCarnival* arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CTabList::OnCreate() {
	__sub_0040ECA0(this, nullptr);
}
void CTabList::Draw(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_0040BF70(this, nullptr, CreateNakedParam(pCanvas));
}
void CTabList::SetData(long nIdx, ZXString<char> sName, long nSP, ZXString<char> sDesc) {
	__sub_0040E110(this, nullptr, nIdx, CreateNakedParam(sName), nSP, CreateNakedParam(sDesc));
}
ZXString<char> CTabList::GetDataName(long nIdx) {
	auto item = m_aTabItem.At(nIdx);
	if(item) {
		return item->sName;
	}
	return ZXString<char>();


	//return __sub_0040BEC0(this, nullptr, nIdx);
}
long CTabList::GetItemCount() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
unsigned long CTabList::GetSelectItemIdx_1(uint32_t wParam) {
	return __sub_0040AE00(this, nullptr, wParam);
}
unsigned long CTabList::GetSelectItemIdx_0(tagPOINT ptRel) {
	return __sub_0040ADA0(this, nullptr, CreateNakedParam(ptRel));
}
ZXString<char> CTabList::GetSelectItemDesc(tagPOINT ptRel) {
	ZXString<char> ret{};
	return *__sub_0040CAF0(this, nullptr, &ret, CreateNakedParam(ptRel));
}
CTabList& CTabList::operator=(const CTabList& arg0) {
	return _op_assign_11(this, arg0);
}
CTabList& CTabList::_op_assign_11(CTabList* pThis, const CTabList& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTabList::TAB_ITEM::~TAB_ITEM() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CTabList::TAB_ITEM::_dtor_0() {
	return __sub_0040B310(this, nullptr);
}
 CTabList::TAB_ITEM::TAB_ITEM(const CTabList::TAB_ITEM& arg0) {
	_ctor_1( arg0);
}
void CTabList::TAB_ITEM::_ctor_1( const CTabList::TAB_ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTabList::TAB_ITEM::TAB_ITEM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CTabList::TAB_ITEM::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CTabList::TAB_ITEM& CTabList::TAB_ITEM::operator=(const CTabList::TAB_ITEM& __that) {
	return _op_assign_3(this, __that);
}
CTabList::TAB_ITEM& CTabList::TAB_ITEM::_op_assign_3(CTabList::TAB_ITEM* pThis, const CTabList::TAB_ITEM& __that) {
	return __sub_0040BD00(pThis, nullptr, __that);
}
 CUIMonsterCarnival::~CUIMonsterCarnival() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMonsterCarnival::_dtor_0() {
	return __sub_0040EEB0(this, nullptr);
}
 CUIMonsterCarnival::CUIMonsterCarnival(const CUIMonsterCarnival& arg0) {
	_ctor_1( arg0);
}
void CUIMonsterCarnival::_ctor_1( const CUIMonsterCarnival& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIMonsterCarnival::CUIMonsterCarnival() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIMonsterCarnival::_ctor_0() {
	return __sub_0040ED20(this, nullptr);
}
void CUIMonsterCarnival::InsertSpelledData(ZXString<char> sName, long nCount) {
	__sub_0040E640(this, nullptr, CreateNakedParam(sName), nCount);
}
void CUIMonsterCarnival::UpdateSpelledData(ZXString<char> sName) {
	__sub_0040E700(this, nullptr, CreateNakedParam(sName));
}
void CUIMonsterCarnival::SetSpelledData(ZXString<char> sName, long nCount) {
	__sub_0040E640(this, nullptr, CreateNakedParam(sName), nCount);
}
void CUIMonsterCarnival::Draw(const tagRECT* pRect) {
	__sub_0040D250(this, nullptr, pRect);
}
void CUIMonsterCarnival::OnCreate(void* arg0) {
	__sub_0040F1C0(this, nullptr, arg0);
}
void CUIMonsterCarnival::OnDestroy() {
	__sub_0040AC40(this, nullptr);
}
void CUIMonsterCarnival::ToggleAddOn(int32_t bOn) {
	__sub_0040B3C0(this, nullptr, bOn);
}
void CUIMonsterCarnival::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_00410370(this, nullptr, nId, param1, param2);
}
void CUIMonsterCarnival::OnButtonClicked(uint32_t nId) {
	__sub_0040BB10(this, nullptr, nId);
}
void CUIMonsterCarnival::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_0040E840(this, nullptr, msg, wParam, rx, ry);
}
int32_t CUIMonsterCarnival::OnMouseMove(long rx, long ry) {
	return __sub_004103C0(this, nullptr, rx, ry);
}
void CUIMonsterCarnival::Update() {
	__sub_004101D0(this, nullptr);
}
void CUIMonsterCarnival::OnMoveWnd(long l, long t) {
	__sub_0040AF50(this, nullptr, l, t);
}
int32_t CUIMonsterCarnival::IsMyAddon(CWnd* pWnd) {
	return __sub_0040EE90(this, nullptr, pWnd);
}
void CUIMonsterCarnival::OnTabAutoOpen(int32_t bTabMove) {
	__sub_00410200(this, nullptr, bTabMove);
}
long CUIMonsterCarnival::GetCurrentTab() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterCarnival::SetCurrentTab(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterCarnival::RequestSend() {
	__sub_0040B4A0(this, nullptr);
}
void CUIMonsterCarnival::RequestResult(long nCategory, long nIdx, ZXString<char> sCharacterName) {
	__sub_0040EA80(this, nullptr, nCategory, nIdx, CreateNakedParam(sCharacterName));
}
void CUIMonsterCarnival::FuncKeyProcess(uint32_t wParam) {
	__sub_00410310(this, nullptr, wParam);
}
void CUIMonsterCarnival::SetUIData(long nCategory, long nIdx, ZXString<char> sName, long nCP, ZXString<char> sDesc) {
	__sub_0040E9B0(this, nullptr, nCategory, nIdx, CreateNakedParam(sName), nCP, CreateNakedParam(sDesc));
}
void CUIMonsterCarnival::ResetUI() {
	__sub_0040E060(this, nullptr);
}
void CUIMonsterCarnival::DrawListTooltip(long rx, long ry, tagPOINT ptMouse) {
	__sub_0040DF80(this, nullptr, rx, ry, CreateNakedParam(ptMouse));
}
int32_t CUIMonsterCarnival::DrawCPTooltip(long rx, long ry, tagPOINT ptRawMouse) {
	return __sub_0040FD90(this, nullptr, rx, ry, CreateNakedParam(ptRawMouse));
}
int32_t CUIMonsterCarnival::DrawLockTooltip(long rx, long ry, tagPOINT ptRawMouse) {
	return __sub_0040DE40(this, nullptr, rx, ry, CreateNakedParam(ptRawMouse));
}
void CUIMonsterCarnival::SetPersonalCP(long nRest, long nTotal) {
	__sub_0040AC60(this, nullptr, nRest, nTotal);
}
void CUIMonsterCarnival::SetTeamCP(long nTeam, long nRest, long nTotal) {
	__sub_0040AC80(this, nullptr, nTeam, nRest, nTotal);
}
void CUIMonsterCarnival::SetTeam(long nTeam) {
	__sub_0040ACB0(this, nullptr, nTeam);
}
ZXString<char> CUIMonsterCarnival::GetRecentSpell() {
	return __sub_0040BF40(this, nullptr);
}
void CUIMonsterCarnival::LoadAllTabInfo() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterCarnival::OnTabChanged(long nTab) {
	__sub_004102C0(this, nullptr, nTab);
}
void CUIMonsterCarnival::ToggleTabWindow(int32_t bOpen) {
	__sub_0040E960(this, nullptr, bOpen);
}
void CUIMonsterCarnival::SetButton() {
	__sub_0040BB60(this, nullptr);
}
void CUIMonsterCarnival::SetScrollBar() {
	__sub_0040AEB0(this, nullptr);
}
void CUIMonsterCarnival::SetLayer() {
	__sub_0040D1F0(this, nullptr);
}
void CUIMonsterCarnival::SetLayerSize(long w, long h) {
	__sub_0040B5E0(this, nullptr, w, h);
}
long CUIMonsterCarnival::CalcTabWindowHeight(long nItemCount) {
	return __sub_0040ACD0(this, nullptr, nItemCount);
}
CUIMonsterCarnival& CUIMonsterCarnival::operator=(const CUIMonsterCarnival& arg0) {
	return _op_assign_40(this, arg0);
}
CUIMonsterCarnival& CUIMonsterCarnival::_op_assign_40(CUIMonsterCarnival* pThis, const CUIMonsterCarnival& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIMonsterCarnival::SPELLED_ITEM::~SPELLED_ITEM() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMonsterCarnival::SPELLED_ITEM::_dtor_0() {
	return __sub_0040B3A0(this, nullptr);
}
 CUIMonsterCarnival::SPELLED_ITEM::SPELLED_ITEM(const CUIMonsterCarnival::SPELLED_ITEM& arg0) {
	_ctor_1( arg0);
}
void CUIMonsterCarnival::SPELLED_ITEM::_ctor_1( const CUIMonsterCarnival::SPELLED_ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIMonsterCarnival::SPELLED_ITEM::SPELLED_ITEM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIMonsterCarnival::SPELLED_ITEM::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterCarnival::SPELLED_ITEM& CUIMonsterCarnival::SPELLED_ITEM::operator=(const CUIMonsterCarnival::SPELLED_ITEM& arg0) {
	return _op_assign_3(this, arg0);
}
CUIMonsterCarnival::SPELLED_ITEM& CUIMonsterCarnival::SPELLED_ITEM::_op_assign_3(CUIMonsterCarnival::SPELLED_ITEM* pThis, const CUIMonsterCarnival::SPELLED_ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISummonedList::~CUISummonedList() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUISummonedList::_dtor_0() {
	return __sub_0040B1D0(this, nullptr);
}
 CUISummonedList::CUISummonedList(const CUISummonedList& arg0) {
	_ctor_1( arg0);
}
void CUISummonedList::_ctor_1( const CUISummonedList& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISummonedList::CUISummonedList(CUIMonsterCarnival* pUIMonsterCarnival, long lLeft, long lTop) {
	_ctor_0( pUIMonsterCarnival, lLeft, lTop);
}
void CUISummonedList::_ctor_0( CUIMonsterCarnival* pUIMonsterCarnival, long lLeft, long lTop) {
	return __sub_0040B0D0(this, nullptr, pUIMonsterCarnival, lLeft, lTop);
}
void CUISummonedList::OnCreate(void* pData) {
	__sub_0040E240(this, nullptr, pData);
}
void CUISummonedList::OnDestroy() {
	__sub_0040B190(this, nullptr);
}
int32_t CUISummonedList::OnSetFocus(int32_t bFocus) {
	return __sub_0040B1A0(this, nullptr, bFocus);
}
void CUISummonedList::Draw(const tagRECT* pRect) {
	__sub_0040CB90(this, nullptr, pRect);
}
void CUISummonedList::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0040AC10(this, nullptr, nId, param1, param2);
}
void CUISummonedList::ClearToolTip() {
	__sub_0040B1B0(this, nullptr);
}
void CUISummonedList::SetScrollBar() {
	__sub_0040AE40(this, nullptr);
}
void CUISummonedList::MoveScrollBarPos(long nInc) {
	__sub_0040AD10(this, nullptr, nInc);
}
CUISummonedList& CUISummonedList::operator=(const CUISummonedList& arg0) {
	return _op_assign_11(this, arg0);
}
CUISummonedList& CUISummonedList::_op_assign_11(CUISummonedList* pThis, const CUISummonedList& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

