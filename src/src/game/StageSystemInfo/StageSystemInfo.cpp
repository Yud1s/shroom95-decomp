// StageSystemInfo.cpp
#include "StageSystemInfo.hpp"

static ZRef<StageTheme> FAKE_ZRef_StageTheme{};
static ZRef<StagePeriodInfo> FAKE_ZRef_StagePeriodInfo{};
static ZRef<StageUnitEnable> FAKE_ZRef_StageUnitEnable{};

static ZMap<long, StageBackImg::StageBackObj, long> FAKE_ZMap_long_StageBackImg_StageBackObj_long{};

static ZRefCounted_AllocHelper<StageBackImg> FAKE_ZRefCounted_AllocHelper_StageBackImg{};
static ZRefCounted_AllocHelper<StageUnitEnable> FAKE_ZRefCounted_AllocHelper_StageUnitEnable{};

static ZRefCounted_AllocHelper<ZRefCountedDummy<ZMap<long, StageBackImg::StageBackObj, long>>> FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_ZMap_long_StageBackImg_StageBackObj_long{};

#include "StageSystemInfo_regen.ipp"

 StageBackImg::~StageBackImg() {
}
void StageBackImg::_dtor_0() {
	return __sub_0031C860(this, nullptr);
}
 StageBackImg::StageBackImg(const StageBackImg& arg0) {
	_ctor_1( arg0);
}
void StageBackImg::_ctor_1( const StageBackImg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 StageBackImg::StageBackImg() {
	//UNIMPLEMENTED; //_ctor_0();
}
void StageBackImg::_ctor_0() {
	return __sub_0031C7A0(this, nullptr);
}
StageBackImg& StageBackImg::operator=(const StageBackImg& arg0) {
	return _op_assign_3(this, arg0);
}
StageBackImg& StageBackImg::_op_assign_3(StageBackImg* pThis, const StageBackImg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 StageTheme::~StageTheme() {
}
void StageTheme::_dtor_0() {
	return __sub_0031DCE0(this, nullptr);
}
 StageTheme::StageTheme(const StageTheme& arg0) {
	_ctor_1( arg0);
}
void StageTheme::_ctor_1( const StageTheme& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 StageTheme::StageTheme() {
	//UNIMPLEMENTED; //_ctor_0();
}
void StageTheme::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
StageTheme& StageTheme::operator=(const StageTheme& arg0) {
	return _op_assign_3(this, arg0);
}
StageTheme& StageTheme::_op_assign_3(StageTheme* pThis, const StageTheme& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CStageSystem::~CStageSystem() {
}
void CStageSystem::_dtor_0() {
	return __sub_0031CB90(this, nullptr);
}
 CStageSystem::CStageSystem(const CStageSystem& arg0) {
	_ctor_1( arg0);
}
void CStageSystem::_ctor_1( const CStageSystem& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CStageSystem::CStageSystem() {
	//UNIMPLEMENTED; //_ctor_0();
}
void CStageSystem::_ctor_0() {
	return __sub_0031CAF0(this, nullptr);
}
int32_t CStageSystem::IterateStageSystem() {
	return __sub_00320090(this, nullptr);
}
int32_t CStageSystem::CleanUp() {
	//return __sub_0031C1A0(this, nullptr);
 	m_ulBackColor = -1;
 	m_aCurStageBackImg = nullptr;
 	m_mStageKeywordCache.RemoveAll();
 	m_mStageQuestCache.RemoveAll();
 	return 1;
}
int32_t CStageSystem::SetStagePeriod(ZXString<char> sStageTheme, long nStagePeriod, int32_t& bErrorOccur) {
	return __sub_0031EC40(this, nullptr, CreateNakedParam(sStageTheme), nStagePeriod, bErrorOccur);
}
ZMap<ZXString<char>,long,ZXString<char> >& CStageSystem::GetStagePeriodCache() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CStageSystem::CleanStage(ZXString<char> sStageTheme, long nStagePeriod) {
	__sub_0031D370(this, nullptr, CreateNakedParam(sStageTheme), nStagePeriod);
}
int32_t CStageSystem::BuildCacheData(ZXString<char> sStageTheme, long nStagePeriod, int32_t bReload) {
	return __sub_0031E740(this, nullptr, CreateNakedParam(sStageTheme), nStagePeriod, bReload);
}
int32_t CStageSystem::IterateStageSystemClient() {
	return __sub_0031EE40(this, nullptr);
}
int32_t CStageSystem::CheckKeywordEnable(ZXString<char> sKeyword, int32_t& bEnable) {
	return __sub_0031D390(this, nullptr, CreateNakedParam(sKeyword), bEnable);
}
int32_t CStageSystem::CheckQuestEnable(long nQuestID, int32_t& bEnable) {
	return __sub_0031CC70(this, nullptr, nQuestID, bEnable);
}
unsigned long CStageSystem::GetBackColor() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CStageSystem::GetBackImgCount() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CStageSystem::GetBackImgIdxList(_x_com_ptr<IWzProperty> arg0, ZArray<ZPair<long,_x_com_ptr<IWzProperty> > >& arg1, ZArray<tagPOINT>& arg2, ZArray<tagPOINT>& arg3) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CStageSystem::BuildFileTime(long arg0, long arg1, _FILETIME* arg2) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CStageSystem::GetDateTimeFromFileTime(long& arg0, long& arg1, _FILETIME* arg2) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZXString<char> CStageSystem::GetCurrentStagePeriod(ZXString<char> arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CStageSystem& CStageSystem::operator=(const CStageSystem& arg0) {
	return _op_assign_18(this, arg0);
}
CStageSystem& CStageSystem::_op_assign_18(CStageSystem* pThis, const CStageSystem& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 StagePeriodInfo::~StagePeriodInfo() {
}
void StagePeriodInfo::_dtor_0() {
	return __sub_0031DD50(this, nullptr);
}
 StagePeriodInfo::StagePeriodInfo(const StagePeriodInfo& arg0) {
	_ctor_1( arg0);
}
void StagePeriodInfo::_ctor_1( const StagePeriodInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 StagePeriodInfo::StagePeriodInfo() {
	//UNIMPLEMENTED; //_ctor_0();
}
void StagePeriodInfo::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
StagePeriodInfo& StagePeriodInfo::operator=(const StagePeriodInfo& arg0) {
	return _op_assign_3(this, arg0);
}
StagePeriodInfo& StagePeriodInfo::_op_assign_3(StagePeriodInfo* pThis, const StagePeriodInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 StageUnitEnable::~StageUnitEnable() {
}
void StageUnitEnable::_dtor_0() {
	return __sub_0031D4A0(this, nullptr);
}
 StageUnitEnable::StageUnitEnable(const StageUnitEnable& arg0) {
	_ctor_1( arg0);
}
void StageUnitEnable::_ctor_1( const StageUnitEnable& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 StageUnitEnable::StageUnitEnable() {
	//UNIMPLEMENTED; //_ctor_0();
}
void StageUnitEnable::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
StageUnitEnable& StageUnitEnable::operator=(const StageUnitEnable& arg0) {
	return _op_assign_3(this, arg0);
}
StageUnitEnable& StageUnitEnable::_op_assign_3(StageUnitEnable* pThis, const StageUnitEnable& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

void __cdecl LoadStageBackImgInfo(_x_com_ptr<IWzProperty> pProp, ZMap<ZXString<char>,ZRef<ZMap<long,StageBackImg::StageBackObj,long> >,ZXString<char> >& SBIL) {
	return __sub_0031DE80(CreateNakedParam(pProp), SBIL);
}
