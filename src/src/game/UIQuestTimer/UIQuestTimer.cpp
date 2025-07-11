// UIQuestTimer.cpp
#include "UIQuestTimer.hpp"
#include "UIQuestTimer_regen.ipp"

 CUIQuestTimerAction::~CUIQuestTimerAction() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIQuestTimerAction::_dtor_0() {
	return __sub_00436580(this, nullptr);
}
 CUIQuestTimerAction::CUIQuestTimerAction(const CUIQuestTimerAction& arg0) {
	_ctor_1( arg0);
}
void CUIQuestTimerAction::_ctor_1( const CUIQuestTimerAction& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIQuestTimerAction::CUIQuestTimerAction(ZRef<CUIQuestTimer> arg0, ZRef<QuestTimerInfo> arg1, long arg2, long arg3) {
	_ctor_0( arg0, arg1, arg2, arg3);
}
void CUIQuestTimerAction::_ctor_0( ZRef<CUIQuestTimer> arg0, ZRef<QuestTimerInfo> arg1, long arg2, long arg3) {
	return __sub_00435CE0(this, nullptr, CreateNakedParam(arg0), CreateNakedParam(arg1), arg2, arg3);
}
void CUIQuestTimerAction::OnCreate(void* pData) {
	__sub_004352C0(this, nullptr, pData);
}
void CUIQuestTimerAction::OnDestroy() {
	__sub_004366A0(this, nullptr);
}
void CUIQuestTimerAction::Update() {
	__sub_00437950(this, nullptr);
}
void CUIQuestTimerAction::OnMoveWnd(long l, long t) {
	__sub_00435400(this, nullptr, l, t);
}
void CUIQuestTimerAction::OnMouseEnter(int32_t bEnter) {
	__sub_00437C70(this, nullptr, bEnter);
}
int32_t CUIQuestTimerAction::OnMouseMove(long rx, long ry) {
	return __sub_004352D0(this, nullptr, rx, ry);
}
int32_t CUIQuestTimerAction::OnSetFocus(int32_t bFocus) {
	return __sub_00436520(this, nullptr, bFocus);
}
int32_t CUIQuestTimerAction::IsMyAddon(CWnd* pWnd) {
	return __sub_00435320(this, nullptr, pWnd);
}
int32_t CUIQuestTimerAction::IsMoving() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUIQuestTimerAction::GetWidth() {
	return __sub_00436A20(this, nullptr);
}
long CUIQuestTimerAction::GetHeight() {
	return __sub_00436A20(this, nullptr);
}
long CUIQuestTimerAction::GetDestroyActionDelay() {
	return __sub_00436A20(this, nullptr);
}
void CUIQuestTimerAction::SetVisible(int32_t bVisible) {
	__sub_00435340(this, nullptr, bVisible);
}
CUIQuestTimerAction& CUIQuestTimerAction::operator=(const CUIQuestTimerAction& arg0) {
	return _op_assign_19(this, arg0);
}
CUIQuestTimerAction& CUIQuestTimerAction::_op_assign_19(CUIQuestTimerAction* pThis, const CUIQuestTimerAction& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIQuestTimer::~CUIQuestTimer() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIQuestTimer::_dtor_0() {
	return __sub_00436F30(this, nullptr);
}
 CUIQuestTimer::CUIQuestTimer(const CUIQuestTimer& arg0) {
	_ctor_1( arg0);
}
void CUIQuestTimer::_ctor_1( const CUIQuestTimer& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIQuestTimer::CUIQuestTimer(uint16_t usQuestID, long tRemain, long nX, long nY, int32_t bTimeKeepQuestTimer) {
	_ctor_0( usQuestID, tRemain, nX, nY, bTimeKeepQuestTimer);
}
void CUIQuestTimer::_ctor_0( uint16_t usQuestID, long tRemain, long nX, long nY, int32_t bTimeKeepQuestTimer) {
	return __sub_00436D00(this, nullptr, usQuestID, tRemain, nX, nY, bTimeKeepQuestTimer);
}
void CUIQuestTimer::OnCreate(void* pData) {
	__sub_00437030(this, nullptr, pData);
}
void CUIQuestTimer::OnDestroy() {
	__sub_00437610(this, nullptr);
}
void CUIQuestTimer::Update() {
	__sub_00437CA0(this, nullptr);
}
void CUIQuestTimer::Draw(const tagRECT* pRect) {
	__sub_00435700(this, nullptr, pRect);
}
void CUIQuestTimer::OnMoveWnd(long l, long t) {
	__sub_00435480(this, nullptr, l, t);
}
void CUIQuestTimer::OnMouseEnter(int32_t bEnter) {
	__sub_00437DB0(this, nullptr, bEnter);
}
int32_t CUIQuestTimer::OnMouseMove(long rx, long ry) {
	return __sub_00437D60(this, nullptr, rx, ry);
}
int32_t CUIQuestTimer::OnSetFocus(int32_t bFocus) {
	return __sub_00436E90(this, nullptr, bFocus);
}
int32_t CUIQuestTimer::IsMyAddon(CWnd* pWnd) {
	return __sub_00436EC0(this, nullptr, pWnd);
}
void CUIQuestTimer::SetScreenMode(bool bIsLarge, bool bNeedInvalidateTabs) {
	__sub_00435560(this, nullptr, bIsLarge, bNeedInvalidateTabs);
}
void CUIQuestTimer::SetToolTip() {
	__sub_004377E0(this, nullptr);
}
void CUIQuestTimer::ClearToolTip() {
	__sub_00436EE0(this, nullptr);
}
void CUIQuestTimer::SetToolTipVisible(int32_t bVisible) {
	__sub_00435510(this, nullptr, bVisible);
}
void CUIQuestTimer::SetMouse(long l, long t) {
	__sub_00435480(this, nullptr, l, t);
}
int32_t CUIQuestTimer::IsMoving() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUIQuestTimer::GetLeft() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUIQuestTimer::GetTop() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
uint16_t CUIQuestTimer::GetQuestID() {
	// TODO: No module found for method
	//UNIMPLEMENTED;
	return this->m_pInfo->usQuestID;
}
ZXString<char> CUIQuestTimer::GetRemainTimeString(int32_t bShort) {
	ZXString<char> ret;
	return *__sub_00435BC0(this, nullptr, &ret, bShort);
}
void CUIQuestTimer::SetRemainTime(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIQuestTimer::SetVisible(int32_t bVisible) {
	__sub_00435510(this, nullptr, bVisible);
}
int32_t CUIQuestTimer::IsTimeKeepQuestTimer() {
	return m_bTimeKeepQuestTimer;
}
CUIQuestTimer& CUIQuestTimer::operator=(const CUIQuestTimer& arg0) {
	return _op_assign_28(this, arg0);
}
CUIQuestTimer& CUIQuestTimer::_op_assign_28(CUIQuestTimer* pThis, const CUIQuestTimer& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

