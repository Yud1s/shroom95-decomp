// CakePieEvent.cpp
#include "CakePieEvent.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};
static ZRef<CAKEPIEEVENT_ITEMINFO> FAKE_ZREF_CAKEPIEEVENT_ITEMINFO{};

#include "CakePieEvent_regen.ipp"

 CClock::~CClock() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CClock::_dtor_0() {
	return __sub_000797F0(this, nullptr);
}
 CClock::CClock(const CClock& arg0) {
	_ctor_1( arg0);
}
void CClock::_ctor_1( const CClock& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CClock::CClock() {
	UNIMPLEMENTED; //_ctor_0();
}
void CClock::_ctor_0() {
	return __sub_00079790(this, nullptr);
}
void CClock::OnCreate(void* pData) {
	__sub_000B0BC0(this, nullptr, pData);
}
void CClock::Draw(const tagRECT* pRect) {
	__sub_000B0C50(this, nullptr, pRect);
}
int32_t CClock::OnSetFocus(int32_t bFocus) {
	return __sub_000797D0(this, nullptr, bFocus);
}
void CClock::Update() {
	__sub_000797F0(this, nullptr);
}
void CClock::SetTimer(long tDuration) {
	__sub_000B0A80(this, nullptr, tDuration);
}
void CClock::SetClock(long nHour, long nMin, long nSec) {
	__sub_000B0AB0(this, nullptr, nHour, nMin, nSec);
}
void CClock::Start() {
	__sub_000797F0(this, nullptr);
}
void CClock::Clear() {
	__sub_000797F0(this, nullptr);
}
int32_t CClock::IsEnd() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CClock::IsTimer() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CClock::GetRemainTime() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
_x_com_ptr<IWzProperty> CClock::GetFontTime() {
	return __sub_0007C4B0(this, nullptr);
}
void CClock::LoadClockCanvas(ZArray<_x_com_ptr<IWzCanvas> >& apClockCanvas, _x_com_ptr<IWzProperty> pClockDigit) {
	__sub_000B1BE0(this, nullptr, apClockCanvas, CreateNakedParam(pClockDigit));
}
CClock& CClock::operator=(const CClock& arg0) {
	return _op_assign_16(this, arg0);
}
CClock& CClock::_op_assign_16(CClock* pThis, const CClock& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CClock::INITPARAM::~INITPARAM() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CClock::INITPARAM::_dtor_0() {
	return __sub_000795C0(this, nullptr);
}
 CClock::INITPARAM::INITPARAM(const CClock::INITPARAM& arg0) {
	_ctor_1( arg0);
}
void CClock::INITPARAM::_ctor_1( const CClock::INITPARAM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CClock::INITPARAM::INITPARAM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CClock::INITPARAM::_ctor_0() {
	return __sub_00079670(this, nullptr);
}
CClock::INITPARAM& CClock::INITPARAM::operator=(const CClock::INITPARAM& arg0) {
	return _op_assign_3(this, arg0);
}
CClock::INITPARAM& CClock::INITPARAM::_op_assign_3(CClock::INITPARAM* pThis, const CClock::INITPARAM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CClock::CLOCKITEM::Set(long arg0, long arg1, long arg2) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CClock::CLOCKITEM::Set(CClock::CLOCKITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CClock::CLOCKITEM::IsSame(CClock::CLOCKITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CClock::CLOCKITEM::IsValid() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CClock::CLOCKITEM::Elapse(long tElapsed) {
	__sub_000B08E0(this, nullptr, tElapsed);
}
 CCakePieEvent::~CCakePieEvent() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCakePieEvent::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCakePieEvent::CCakePieEvent(const CCakePieEvent& arg0) {
	_ctor_1( arg0);
}
void CCakePieEvent::_ctor_1( const CCakePieEvent& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCakePieEvent::CCakePieEvent() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCakePieEvent::_ctor_0() {
	return __sub_005C4AC0(this, nullptr);
}
ZRef<CAKEPIEEVENT_ITEMINFO> CCakePieEvent::FindItemInfo(long nFieldID, long nItemID) {
	ZRef<CAKEPIEEVENT_ITEMINFO> ret;
	return *__sub_00079070(this, nullptr, &ret, nFieldID, nItemID);
}
void CCakePieEvent::OpenUI_ItemInfo() {
	__sub_0007C830(this, nullptr);
}
void CCakePieEvent::CloseUI_ItemInfo() {
	__sub_00079040(this, nullptr);
}
void CCakePieEvent::Update() {
	__sub_00078A20(this, nullptr);
}
void CCakePieEvent::SetEventItemInfo(long nFieldID, long nItemID, long nPercentage, long nEventStatus, long nWinnerTeam) {
	__sub_0007C8E0(this, nullptr, nFieldID, nItemID, nPercentage, nEventStatus, nWinnerTeam);
}
ZRef<CAKEPIEEVENT_ITEMINFO> CCakePieEvent::GetEventItemInfo(long nFieldID, long nItemID) {
	return FindItemInfo(nFieldID, nItemID);
	//return __sub_00079170(this, nullptr, nFieldID, nItemID);
}
CCakePieEvent& CCakePieEvent::operator=(const CCakePieEvent& arg0) {
	return _op_assign_9(this, arg0);
}
CCakePieEvent& CCakePieEvent::_op_assign_9(CCakePieEvent* pThis, const CCakePieEvent& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUICakePieEventItemInfo::~CUICakePieEventItemInfo() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUICakePieEventItemInfo::_dtor_0() {
	return __sub_0007A2B0(this, nullptr);
}
 CUICakePieEventItemInfo::CUICakePieEventItemInfo(const CUICakePieEventItemInfo& arg0) {
	_ctor_1( arg0);
}
void CUICakePieEventItemInfo::_ctor_1( const CUICakePieEventItemInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUICakePieEventItemInfo::CUICakePieEventItemInfo() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUICakePieEventItemInfo::_ctor_0() {
	return __sub_00079A30(this, nullptr);
}
void CUICakePieEventItemInfo::OnCreate(void* pData) {
	__sub_0007A3C0(this, nullptr, pData);
}
void CUICakePieEventItemInfo::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00078A30(this, nullptr, wParam, lParam);
}
void CUICakePieEventItemInfo::Draw(const tagRECT* pRect) {
	__sub_0007A4E0(this, nullptr, pRect);
}
void CUICakePieEventItemInfo::OnButtonClicked(uint32_t nId) {
	__sub_000791A0(this, nullptr, nId);
}
void CUICakePieEventItemInfo::Update() {
	__sub_000791C0(this, nullptr);
}
CUICakePieEventItemInfo& CUICakePieEventItemInfo::operator=(const CUICakePieEventItemInfo& arg0) {
	return _op_assign_8(this, arg0);
}
CUICakePieEventItemInfo& CUICakePieEventItemInfo::_op_assign_8(CUICakePieEventItemInfo* pThis, const CUICakePieEventItemInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTimerboard_CakePieEvent::~CTimerboard_CakePieEvent() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CTimerboard_CakePieEvent::_dtor_0() {
	return __sub_00079950(this, nullptr);
}
 CTimerboard_CakePieEvent::CTimerboard_CakePieEvent(const CTimerboard_CakePieEvent& arg0) {
	_ctor_1( arg0);
}
void CTimerboard_CakePieEvent::_ctor_1( const CTimerboard_CakePieEvent& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTimerboard_CakePieEvent::CTimerboard_CakePieEvent(long nTimerType) {
	_ctor_0( nTimerType);
}
void CTimerboard_CakePieEvent::_ctor_0( long nTimerType) {
	return __sub_000798D0(this, nullptr, nTimerType);
}
void CTimerboard_CakePieEvent::OnCreate(void* pData) {
	__sub_0007ABC0(this, nullptr, pData);
}
void CTimerboard_CakePieEvent::Draw(const tagRECT* pRect) {
	__sub_0007BAB0(this, nullptr, pRect);
}
_x_com_ptr<IWzProperty> CTimerboard_CakePieEvent::GetFontTime() {
	return __sub_0007C670(this, nullptr);
}
CTimerboard_CakePieEvent& CTimerboard_CakePieEvent::operator=(const CTimerboard_CakePieEvent& arg0) {
	return _op_assign_6(this, arg0);
}
CTimerboard_CakePieEvent& CTimerboard_CakePieEvent::_op_assign_6(CTimerboard_CakePieEvent* pThis, const CTimerboard_CakePieEvent& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

