// PartyQuestInfo.cpp
#include "PartyQuestInfo.hpp"

static ZRefCounted_AllocHelper<ZRefCountedDummy<PartyQuestInfo>> FAKE_ZRefCounedAllocHelperDummyPqInfo{};

#include "PartyQuestInfo_regen.ipp"

 PartyQuestInfo::~PartyQuestInfo() {
	 UNIMPLEMENTED; // _dtor_0();
}
void PartyQuestInfo::_dtor_0() {
	return __sub_00296540(this, nullptr);
}
 PartyQuestInfo::PartyQuestInfo(const PartyQuestInfo& arg0) {
	_ctor_1( arg0);
}
void PartyQuestInfo::_ctor_1( const PartyQuestInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 PartyQuestInfo::PartyQuestInfo() {
	//UNIMPLEMENTED; //_ctor_0();
}
void PartyQuestInfo::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void PartyQuestInfo::LoadData(_x_com_ptr<IWzProperty> prop) {
	__sub_00296B00(this, nullptr, CreateNakedParam(prop));
}
int32_t PartyQuestInfo::IsPartyQuest() {
	return __sub_00295C60(this, nullptr);
}
int32_t PartyQuestInfo::IsExpeditionQuest() {
	return __sub_00295C70(this, nullptr);
}
int32_t PartyQuestInfo::HasTitle(ZXString<char> arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t PartyQuestInfo::IsAllowedLevel(long arg0, long arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
PartyQuestInfo& PartyQuestInfo::operator=(const PartyQuestInfo& arg0) {
	return _op_assign_8(this, arg0);
}
PartyQuestInfo& PartyQuestInfo::_op_assign_8(PartyQuestInfo* pThis, const PartyQuestInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPartyQuestInfoManager::~CPartyQuestInfoManager() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CPartyQuestInfoManager::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPartyQuestInfoManager::CPartyQuestInfoManager(const CPartyQuestInfoManager& arg0) {
	_ctor_1( arg0);
}
void CPartyQuestInfoManager::_ctor_1( const CPartyQuestInfoManager& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPartyQuestInfoManager::CPartyQuestInfoManager() {
	//UNIMPLEMENTED; //_ctor_0();
}
void CPartyQuestInfoManager::_ctor_0() {
	return __sub_005C4050(this, nullptr);
}
int32_t CPartyQuestInfoManager::Load() {
	return __sub_00297880(this, nullptr);
}
const ZRef<PartyQuestInfo> CPartyQuestInfoManager::Get(long nPartyQuestID) {
	return __sub_00296670(this, nullptr, nPartyQuestID);
}
const ZRef<PartyQuestInfo> CPartyQuestInfoManager::GetByName(ZXString<char> sPartyQuestName) {
	return __sub_00296310(this, nullptr, CreateNakedParam(sPartyQuestName));
}
const ZList<ZRef<PartyQuestInfo> >& CPartyQuestInfoManager::GetAllPartyQuestInfo() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t __cdecl CPartyQuestInfoManager::IsPartyQuestID(long nID) {
	return __sub_00295C00(nID);
}
int32_t __cdecl CPartyQuestInfoManager::IsExpeditionQuestID(long nID) {
	return __sub_00295C30(nID);
}
CPartyQuestInfoManager& CPartyQuestInfoManager::operator=(const CPartyQuestInfoManager& arg0) {
	return _op_assign_9(this, arg0);
}
CPartyQuestInfoManager& CPartyQuestInfoManager::_op_assign_9(CPartyQuestInfoManager* pThis, const CPartyQuestInfoManager& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

int32_t __cdecl LoadData(ZXString<char> sUOL, ZMap<long,ZRef<PartyQuestInfo>,long>& targetMap, ZList<ZRef<PartyQuestInfo> >& targetList, long nStartID) {
	return __sub_002972A0(CreateNakedParam(sUOL), targetMap, targetList, nStartID);
}
void __cdecl AddToListByMinLevel(ZList<ZRef<PartyQuestInfo> >& targetList, ZRef<PartyQuestInfo> pInfo) {
	return __sub_00296980(targetList, CreateNakedParam(pInfo));
}
