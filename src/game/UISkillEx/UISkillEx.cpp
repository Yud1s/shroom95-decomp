// UISkillEx.cpp
#include "UISkillEx.hpp"

static ZSortHelperDefault<CUISkillEx::RecommSkillPair> FAKE_ZSortHelper_CUISkillEx__RecommSkillPair{};
static InsertionSortHelperDefault<CUISkillEx::RecommSkillPair> FAKE_InsertionSortHelper_CUISkillEx__RecommSkillPair{};
static IntroSortLoopHelperDefault<CUISkillEx::RecommSkillPair, int> FAKE_IntroSortLoopHelper_CUISkillEx__RecommSkillPair_int{};

#include "UISkillEx_regen.ipp"

 CUIMacroSysEx::~CUIMacroSysEx() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMacroSysEx::_dtor_0() {
	return __sub_0045ABE0(this, nullptr);
}
 CUIMacroSysEx::CUIMacroSysEx(const CUIMacroSysEx& arg0) {
	_ctor_1( arg0);
}
void CUIMacroSysEx::_ctor_1( const CUIMacroSysEx& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIMacroSysEx::CUIMacroSysEx(long lLeft, long lTop) {
	_ctor_0( lLeft, lTop);
}
void CUIMacroSysEx::_ctor_0( long lLeft, long lTop) {
	return __sub_0045A9B0(this, nullptr, lLeft, lTop);
}
void CUIMacroSysEx::OnCreate(void* pData) {
	__sub_0045C420(this, nullptr, pData);
}
void CUIMacroSysEx::OnDestroy() {
	__sub_0045AAA0(this, nullptr);
}
int32_t CUIMacroSysEx::OnSetFocus(int32_t bFocus) {
	return __sub_0045AAB0(this, nullptr, bFocus);
}
void CUIMacroSysEx::OnMouseButton(uint32_t arg0, uint32_t arg1, long arg2, long arg3) {
	__sub_0045B550(this, nullptr, arg0, arg1, arg2, arg3);
}
int32_t CUIMacroSysEx::OnMouseMove(long rx, long ry) {
	return __sub_00459C20(this, nullptr, rx, ry);
}
void CUIMacroSysEx::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_004590D0(this, nullptr, wParam, lParam);
}
void CUIMacroSysEx::OnButtonClicked(uint32_t nId) {
	__sub_0045BDA0(this, nullptr, nId);
}
int32_t CUIMacroSysEx::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_00458EC0(this, nullptr, rx, ry, ppCtrl);
}
void CUIMacroSysEx::SetEnable(int32_t bEnable) {
	__sub_0045AAC0(this, nullptr, bEnable);
}
int32_t CUIMacroSysEx::IsEnabled() {
	return __sub_0045AAD0(this, nullptr);
}
void CUIMacroSysEx::SetShow(int32_t bShow) {
	__sub_0045AB40(this, nullptr, bShow);
}
int32_t CUIMacroSysEx::IsShown() {
	return __sub_0045AAE0(this, nullptr);
}
void CUIMacroSysEx::Draw(const tagRECT* pRect) {
	__sub_0045ACE0(this, nullptr, pRect);
}
int32_t CUIMacroSysEx::GetIndexByPos(long rx, long ry, int32_t bIncludeCombinationSkill, long& nMacroIdx, long& nSkillIdx) {
	return __sub_00458E30(this, nullptr, rx, ry, bIncludeCombinationSkill, nMacroIdx, nSkillIdx);
}
void CUIMacroSysEx::ResetInfo() {
	__sub_00459060(this, nullptr);
}
void CUIMacroSysEx::OnSelected(long nMacroIdx) {
	__sub_00459770(this, nullptr, nMacroIdx);
}
CUIMacroSysEx& CUIMacroSysEx::operator=(const CUIMacroSysEx& arg0) {
	return _op_assign_22(this, arg0);
}
CUIMacroSysEx& CUIMacroSysEx::_op_assign_22(CUIMacroSysEx* pThis, const CUIMacroSysEx& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISkillEx::~CUISkillEx() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUISkillEx::_dtor_0() {
	return __sub_0045C8C0(this, nullptr);
}
 CUISkillEx::CUISkillEx(const CUISkillEx& arg0) {
	_ctor_1( arg0);
}
void CUISkillEx::_ctor_1( const CUISkillEx& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISkillEx::CUISkillEx(int32_t bTip, long nTabOption) {
	_ctor_0( bTip, nTabOption);
}
void CUISkillEx::_ctor_0( int32_t bTip, long nTabOption) {
	return __sub_0045E1C0(this, nullptr, bTip, nTabOption);
}
void CUISkillEx::OnCreate(void* pData) {
	__sub_0045E5C0(this, nullptr, pData);
}
void CUISkillEx::OnDestroy() {
	__sub_004595B0(this, nullptr);
}
void CUISkillEx::OnMoveWnd(long l, long t) {
	__sub_00459370(this, nullptr, l, t);
}
int32_t CUISkillEx::OnMouseMove(long rx, long ry) {
	return __sub_00459F40(this, nullptr, rx, ry);
}
void CUISkillEx::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_00459FF0(this, nullptr, msg, wParam, rx, ry);
}
void CUISkillEx::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0045FA40(this, nullptr, nId, param1, param2);
}
void CUISkillEx::OnButtonClicked(uint32_t nId) {
	__sub_00459E10(this, nullptr, nId);
}
void CUISkillEx::Draw(const tagRECT* arg0) {
	__sub_0045D1F0(this, nullptr, arg0);
}
int32_t CUISkillEx::IsMyAddon(CWnd* pWnd) {
	return __sub_0045CB10(this, nullptr, pWnd);
}
void CUISkillEx::ResetInfo() {
	__sub_0045DC50(this, nullptr);
}
void CUISkillEx::ToggleTab() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUISkillEx::ShiftMacroUIState() {
	__sub_00459100(this, nullptr);
}
long CUISkillEx::GetMacroUIState() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUISkillEx::GetRecommendSKill(const SKILLROOT* arg0) {
	return __sub_0045CB60(this, nullptr, arg0);
}
void CUISkillEx::OnTabChanged(long nTab) {
	__sub_0045A880(this, nullptr, nTab);
}
void CUISkillEx::OnSkillLevelUpButton(long nIdx) {
	__sub_00459840(this, nullptr, nIdx);
}
void CUISkillEx::SetSkillRootList() {
	__sub_0045A8C0(this, nullptr);
}
void CUISkillEx::SetTabItems() {
	__sub_0045BE90(this, nullptr);
}
void CUISkillEx::SetScrollBar() {
	__sub_00459970(this, nullptr);
}
void CUISkillEx::SetButtons() {
	__sub_004599D0(this, nullptr);
}
void CUISkillEx::SetButton(long nX, long nY, int32_t bShow, int32_t bEnable) {
	__sub_00459160(this, nullptr, nX, nY, bShow, bEnable);
}
long CUISkillEx::GetSkillIndexFromPoint(long rx, long ry, int32_t bIcon) {
	return __sub_00459B20(this, nullptr, rx, ry, bIcon);
}
const SKILLROOT* CUISkillEx::GetSkillRootVisible(int32_t bReload) {
	return __sub_00459610(this, nullptr, bReload);
}
void CUISkillEx::CreateTip() {
	__sub_0045DC80(this, nullptr);
}
CUISkillEx& CUISkillEx::operator=(const CUISkillEx& arg0) {
	return _op_assign_30(this, arg0);
}
CUISkillEx& CUISkillEx::_op_assign_30(CUISkillEx* pThis, const CUISkillEx& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISkillEx::RecommSkillPair::RecommSkillPair(long arg0, long arg1) {
	_ctor_0( arg0, arg1);
}
void CUISkillEx::RecommSkillPair::_ctor_0( long arg0, long arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISkillEx::RecommSkillPair::RecommSkillPair() {
	UNIMPLEMENTED; //_ctor_1();
}
void CUISkillEx::RecommSkillPair::_ctor_1() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
bool CUISkillEx::RecommSkillPair::operator<(const CUISkillEx::RecommSkillPair& arg0) const {
	return _op_lt_2((CUISkillEx::RecommSkillPair*)this, arg0);
}
bool CUISkillEx::RecommSkillPair::_op_lt_2(CUISkillEx::RecommSkillPair* pThis, const CUISkillEx::RecommSkillPair& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

void __cdecl ZSort_CUISkillEx__RecommSkillPair_(ZArray<CUISkillEx::RecommSkillPair>& a) {
	return __sub_00459740(a);
}
void __cdecl ZSort_CUISkillEx__RecommSkillPair_(ZArray<CUISkillEx::RecommSkillPair>& a, __POSITION* posFrom, __POSITION* posTo) {
	return __sub_00459550(a, posFrom, posTo);
}
void __cdecl DownHeap_CUISkillEx__RecommSkillPair_(ZArray<CUISkillEx::RecommSkillPair>& a, int32_t nIdx, int32_t nLen, int32_t nFrom) {
	return __sub_00458FB0(a, nIdx, nLen, nFrom);
}
void __cdecl InsertionSort_CUISkillEx__RecommSkillPair_(ZArray<CUISkillEx::RecommSkillPair>& a, int32_t nFrom, int32_t nTo) {
	return __sub_00458F40(a, nFrom, nTo);
}
int32_t __cdecl Partition_CUISkillEx__RecommSkillPair_(ZArray<CUISkillEx::RecommSkillPair>& a, int32_t nFrom, int32_t nTo, const CUISkillEx::RecommSkillPair& pivot) {
	return __sub_004592D0(a, nFrom, nTo, pivot);
}
