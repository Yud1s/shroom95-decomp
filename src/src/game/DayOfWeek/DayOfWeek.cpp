// DayOfWeek.cpp
#include "DayOfWeek.hpp"
#include "DayOfWeek_regen.ipp"

 CDayOfWeek::~CDayOfWeek() {
}
void CDayOfWeek::_dtor_0() {
	this->~CDayOfWeek();
}
 CDayOfWeek::CDayOfWeek(const CDayOfWeek& arg0) {
	_ctor_1( arg0);
}
void CDayOfWeek::_ctor_1( const CDayOfWeek& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CDayOfWeek::CDayOfWeek() {
}
void CDayOfWeek::_ctor_0() {
	new (this) CDayOfWeek();
}
uint16_t CDayOfWeek::GetCurrentDay() const
{
	if(m_bPassiveMode) {
		return m_wDayOfWeek;
	}
	SYSTEMTIME st{};
	GetLocalTime(&st);
	return st.wDayOfWeek;

	//return __sub_000F1B90(this, nullptr);
}
void CDayOfWeek::SetCurrentDay(uint16_t wDayOfWeek) {
	if(wDayOfWeek <= 6) {
		m_wDayOfWeek = wDayOfWeek;
		m_bPassiveMode = true;
	}
	//__sub_000F1BC0(this, nullptr, wDayOfWeek);
}
void CDayOfWeek::SetPassveModeOn() {
	m_bPassiveMode = true;
}
void CDayOfWeek::SetPassveModeOff() {
	m_bPassiveMode = false;
}
CDayOfWeek& CDayOfWeek::operator=(const CDayOfWeek& arg0) {
	return _op_assign_7(this, arg0);
}
CDayOfWeek& CDayOfWeek::_op_assign_7(CDayOfWeek* pThis, const CDayOfWeek& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

