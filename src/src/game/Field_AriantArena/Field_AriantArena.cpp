// Field_AriantArena.cpp
#include "Field_AriantArena.hpp"


static InsertionSortHelperDefault<CField_AriantArena::UserScore> FAKE_InsertionSortHelper_CField_AriantArena_UserScore{};
static IntroSortLoopHelperDefault<CField_AriantArena::UserScore, int> FAKE_IntroSortLoopHelper_CField_AriantArena_UserScore_int{};
static ZSortHelperDefault<CField_AriantArena::UserScore> FAKE_ZSortHelper_CField_AriantArena_UserScore___DefaultEq{};


#include "Field_AriantArena_regen.ipp"

 CField_AriantArena::~CField_AriantArena() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CField_AriantArena::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_AriantArena::CField_AriantArena(const CField_AriantArena& arg0) {
	_ctor_1( arg0);
}
void CField_AriantArena::_ctor_1( const CField_AriantArena& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_AriantArena::CField_AriantArena() {
	UNIMPLEMENTED; //_ctor_0();
}
void CField_AriantArena::_ctor_0() {
	return __sub_0013ED70(this, nullptr);
}
long CField_AriantArena::GetFieldType() {
	return __sub_0013EDC0(this, nullptr);
}
void CField_AriantArena::OnPacket(long nType, CInPacket& iPacket) {
	__sub_001497A0(this, nullptr, nType, iPacket);
}
void CField_AriantArena::Update() {
	__sub_00148690(this, nullptr);
}
long CField_AriantArena::GetRank(ZXString<char>& sName) {
	return __sub_001473C0(this, nullptr, sName);
}
const char* CField_AriantArena::GetRankString(ZXString<char>& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CField_AriantArena::RemoveUserFromRank(ZXString<char>& sName) {
	__sub_001491C0(this, nullptr, sName);
}
void CField_AriantArena::OnUserScore(CInPacket& iPacket) {
	__sub_001492B0(this, nullptr, iPacket);
}
void CField_AriantArena::OnShowResult(CInPacket& iPacket) {
	__sub_00147630(this, nullptr, iPacket);
}
void CField_AriantArena::UpdateScoreAndRank() {
	__sub_00147C90(this, nullptr);
}
CField_AriantArena& CField_AriantArena::operator=(CField_AriantArena& arg0) {
	return _op_assign_12(this, arg0);
}
CField_AriantArena& CField_AriantArena::_op_assign_12(CField_AriantArena* pThis, CField_AriantArena& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_AriantArena::UserScore::~UserScore() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CField_AriantArena::UserScore::_dtor_0() {
	return __sub_0012E510(this, nullptr);
}
 CField_AriantArena::UserScore::UserScore(const CField_AriantArena::UserScore& arg0) {
	_ctor_1( arg0);
}
void CField_AriantArena::UserScore::_ctor_1( const CField_AriantArena::UserScore& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CField_AriantArena::UserScore::UserScore() {
	UNIMPLEMENTED; //_ctor_0();
}
void CField_AriantArena::UserScore::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
bool CField_AriantArena::UserScore::operator<(const CField_AriantArena::UserScore& arg0) const {
	return _op_lt_3((CField_AriantArena::UserScore*)this, arg0);
}
bool CField_AriantArena::UserScore::_op_lt_3(CField_AriantArena::UserScore* pThis, const CField_AriantArena::UserScore& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CField_AriantArena::UserScore& CField_AriantArena::UserScore::operator=(const CField_AriantArena::UserScore& arg0) {
	return _op_assign_4(this, arg0);
}
CField_AriantArena::UserScore& CField_AriantArena::UserScore::_op_assign_4(CField_AriantArena::UserScore* pThis, const CField_AriantArena::UserScore& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

void __cdecl ZSort_CField_AriantArena__UserScore_(ZArray<CField_AriantArena::UserScore>& a) {
	return __sub_00149270(a);
}
void __cdecl DownHeap_CField_AriantArena__UserScore_(ZArray<CField_AriantArena::UserScore>& a, int32_t nIdx, int32_t nLen, int32_t nFrom) {
	return __sub_00147AE0(a, nIdx, nLen, nFrom);
}
int32_t __cdecl Partition_CField_AriantArena__UserScore_(ZArray<CField_AriantArena::UserScore>& a, int32_t nFrom, int32_t nTo, const CField_AriantArena::UserScore& pivot) {
	return __sub_00147460(a, nFrom, nTo, pivot);
}
void __cdecl ZSort_CField_AriantArena__UserScore_(ZArray<CField_AriantArena::UserScore>& a, __POSITION* posFrom, __POSITION* posTo) {
	return __sub_00149210(a, posFrom, posTo);
}
void __cdecl InsertionSort_CField_AriantArena__UserScore_(ZArray<CField_AriantArena::UserScore>& a, int32_t nFrom, int32_t nTo) {
	return __sub_00147920(a, nFrom, nTo);
}
