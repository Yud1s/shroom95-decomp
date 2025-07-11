// MonsterBookMan.cpp
#include "MonsterBookMan.hpp"

#include "GW/GW.hpp"

static ZRef<GW_MonsterBookCard> FAKE_ZRef_GW_MonsterBookCard{};

#include "MonsterBookMan_regen.ipp"

 MonsterBookStr::~MonsterBookStr() {
}
void MonsterBookStr::_dtor_0() {
	return __sub_00262B70(this, nullptr);
}
 MonsterBookStr::MonsterBookStr(const MonsterBookStr& arg0) {
	_ctor_1( arg0);
}
void MonsterBookStr::_ctor_1( const MonsterBookStr& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 MonsterBookStr::MonsterBookStr() {
	//UNIMPLEMENTED; //_ctor_0();
}
void MonsterBookStr::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
MonsterBookStr& MonsterBookStr::operator=(const MonsterBookStr& arg0) {
	return _op_assign_3(this, arg0);
}
MonsterBookStr& MonsterBookStr::_op_assign_3(MonsterBookStr* pThis, const MonsterBookStr& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void __cdecl CMonsterBookAccessor::SetCover(CharacterData& arg0, long arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long __cdecl CMonsterBookAccessor::GetCover(const CharacterData& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void __cdecl CMonsterBookAccessor::SetCount(CharacterData& cd, long nCardID, long nCardCount) {
	__sub_005118F0(cd, nCardID, nCardCount);
}
long __cdecl CMonsterBookAccessor::GetCount(const CharacterData& cd, long nCardID) {
	return __sub_002B8620(cd, nCardID);
}
int32_t __cdecl CMonsterBookAccessor::IsCardFull(const CharacterData& arg0, long arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long __cdecl CMonsterBookAccessor::GetSize(const CharacterData& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void __cdecl CMonsterBookAccessor::UpdateInfo(CharacterData& cd) {
	__sub_00262A50(cd);
}
ZRef<MonsterBookInfo> __cdecl CMonsterBookAccessor::GetInfo(const CharacterData& cd) {
	return __sub_00263300(cd);
}
 MonsterBookInfo::~MonsterBookInfo() {
	 UNIMPLEMENTED; // _dtor_0();
}
void MonsterBookInfo::_dtor_0() {
	return __sub_002628D0(this, nullptr);
}
 MonsterBookInfo::MonsterBookInfo(const MonsterBookInfo& arg0) {
	_ctor_1( arg0);
}
void MonsterBookInfo::_ctor_1( const MonsterBookInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 MonsterBookInfo::MonsterBookInfo() {
	UNIMPLEMENTED; //_ctor_0();
}
void MonsterBookInfo::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void MonsterBookInfo::Decode(CInPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long __cdecl MonsterBookInfo::GetBookLevel(long nCount) {
	return __sub_002614D0(nCount);
}
MonsterBookInfo& MonsterBookInfo::operator=(const MonsterBookInfo& arg0) {
	return _op_assign_5(this, arg0);
}
MonsterBookInfo& MonsterBookInfo::_op_assign_5(MonsterBookInfo* pThis, const MonsterBookInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

