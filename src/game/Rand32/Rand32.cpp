// Rand32.cpp
#include "Rand32.hpp"
#include "Rand32_regen.ipp"

 CRand32::~CRand32() {
}
void CRand32::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRand32::CRand32(uint32_t arg0, uint32_t arg1, uint32_t arg2) {
	_ctor_1( arg0, arg1, arg2);
}
void CRand32::_ctor_1( uint32_t arg0, uint32_t arg1, uint32_t arg2) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRand32::CRand32() {
	//UNIMPLEMENTED; //_ctor_0();
     __sub_002CBF80(this, nullptr);
}
void CRand32::_ctor_0() {
	return __sub_002CBF80(this, nullptr);
}
void CRand32::Seed(uint32_t s1, uint32_t s2, uint32_t s3) {
	__sub_00326420(this, nullptr, s1, s2, s3);
}
void CRand32::GetSeed(uint32_t& arg0, uint32_t& arg1, uint32_t& arg2) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CRand32::SetSeed(uint32_t s1, uint32_t s2, uint32_t s3) {
	__sub_00326420(this, nullptr, s1, s2, s3);
}
uint32_t CRand32::Random() {
	return __sub_00009A90(this, nullptr);
}
void CRand32::RollBack() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
uint32_t CRand32::GetPastRand() {
	return __sub_00009A90(this, nullptr);
}
unsigned long __cdecl CRand32::CrtRand(unsigned long& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

