// UIMedalQuestInfo.cpp
#include "UIMedalQuestInfo.hpp"

static ZSortHelper<ZRef<MedalQuestInfo>, QICategoryCompareFunc> Fake_ZSortHelperZRefMedalQuestInfoQICategoryCompareFunc{};
static ZSortHelper<ZRef<MedalQuestInfo>, QIBaseCompareFunc> Fake_ZSortHelperZRefMedalQuestInfoQIBaseCompareFunc{};

static InsertionSortHelper<ZRef<MedalQuestInfo>, QICategoryCompareFunc> Fake_InsertionSortHelperZRefMedalQuestInfoQICategoryCompareFunc{};
static InsertionSortHelper<ZRef<MedalQuestInfo>, QIBaseCompareFunc> Fake_InsertionSortHelperZRefMedalQuestInfoQIBaseCompareFunc{};

static IntroSortLoopHelper<ZRef<MedalQuestInfo>, int, QICategoryCompareFunc> FAKE_IntroSortLoopHelperZRefMedalQuestInfoQICategoryCompareFunc{};
static IntroSortLoopHelper<ZRef<MedalQuestInfo>, int, QIBaseCompareFunc> FAKE_IntroSortLoopHelperZRefMedalQuestInfoQIBaseCompareFunc{};




static ZArray<ZRef<MedalQuestInfo>> Fake_ZArrayZRefMedalQuestInfo{};

#include "UIMedalQuestInfo_regen.ipp"

int32_t QIBaseCompareFunc::operator()(const ZRef<MedalQuestInfo> a, const ZRef<MedalQuestInfo> b) {
	return _op_call_0(this, a, b);
}
int32_t QIBaseCompareFunc::_op_call_0(QIBaseCompareFunc* pThis, const ZRef<MedalQuestInfo> a, const ZRef<MedalQuestInfo> b) {
	return __sub_003E1970(pThis, nullptr, CreateNakedParam(a), CreateNakedParam(b));
}
 MedalQuestInfo::~MedalQuestInfo() {
	 UNIMPLEMENTED; // _dtor_0();
}
void MedalQuestInfo::_dtor_0() {
	return __sub_003EA300(this, nullptr);
}
 MedalQuestInfo::MedalQuestInfo(const MedalQuestInfo& arg0) {
	_ctor_1( arg0);
}
void MedalQuestInfo::_ctor_1( const MedalQuestInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 MedalQuestInfo::MedalQuestInfo() {
	UNIMPLEMENTED; //_ctor_0();
}
void MedalQuestInfo::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
MedalQuestInfo& MedalQuestInfo::operator=(const MedalQuestInfo& arg0) {
	return _op_assign_3(this, arg0);
}
MedalQuestInfo& MedalQuestInfo::_op_assign_3(MedalQuestInfo* pThis, const MedalQuestInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t QICategoryCompareFunc::operator()(const ZRef<MedalQuestInfo> a, const ZRef<MedalQuestInfo> b) {
	return _op_call_0(this, a, b);
}
int32_t QICategoryCompareFunc::_op_call_0(QICategoryCompareFunc* pThis, const ZRef<MedalQuestInfo> a, const ZRef<MedalQuestInfo> b) {
	return __sub_003E1A80(pThis, nullptr, CreateNakedParam(a), CreateNakedParam(b));
}
 CUIMedalQuestInfo::~CUIMedalQuestInfo() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMedalQuestInfo::_dtor_0() {
	return __sub_005CCC50(this, nullptr);
}
 CUIMedalQuestInfo::CUIMedalQuestInfo(const CUIMedalQuestInfo& arg0) {
	_ctor_1( arg0);
}
void CUIMedalQuestInfo::_ctor_1( const CUIMedalQuestInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIMedalQuestInfo::CUIMedalQuestInfo(long nTab) {
	_ctor_0( nTab);
}
void CUIMedalQuestInfo::_ctor_0( long nTab) {
	return __sub_003E6500(this, nullptr, nTab);
}
void CUIMedalQuestInfo::OnCreate(void* arg0) {
	__sub_003EC630(this, nullptr, arg0);
}
void CUIMedalQuestInfo::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_003EE320(this, nullptr, nId, param1, param2);
}
void CUIMedalQuestInfo::OnButtonClicked(uint32_t nId) {
	__sub_003EC4F0(this, nullptr, nId);
}
void CUIMedalQuestInfo::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_003E9930(this, nullptr, msg, wParam, rx, ry);
}
int32_t CUIMedalQuestInfo::OnMouseMove(long rx, long ry) {
	return __sub_003E3060(this, nullptr, rx, ry);
}
void CUIMedalQuestInfo::Draw(const tagRECT* pRect) {
	__sub_003E6B50(this, nullptr, pRect);
}
void CUIMedalQuestInfo::OnDestroy() {
	__sub_005CCC50(this, nullptr);
}
void CUIMedalQuestInfo::Update() {
	__sub_005CCC50(this, nullptr);
}
int32_t CUIMedalQuestInfo::IsMyAddon(CWnd* pWnd) {
	return __sub_003E66F0(this, nullptr, pWnd);
}
int32_t CUIMedalQuestInfo::ShowQuestInfoDetail(long nMedalCategory, uint16_t usQuestID) {
	return __sub_003E9F90(this, nullptr, nMedalCategory, usQuestID);
}
void CUIMedalQuestInfo::ResetInfo(int32_t bLoadData) {
	__sub_003EC270(this, nullptr, bLoadData);
}
void CUIMedalQuestInfo::ResetWearedMedal() {
	__sub_005CCC50(this, nullptr);
}
void CUIMedalQuestInfo::ToggleDetail(int32_t bOpen) {
	__sub_003E8250(this, nullptr, bOpen);
}
ZRef<MedalQuestInfo> CUIMedalQuestInfo::GetQuestInfo() {
	return __sub_003E16E0(this, nullptr);
}
ZArray<ZXString<char> > CUIMedalQuestInfo::GetQuestDesc(long nState, _x_com_ptr<IWzProperty> pPropQuest) {
	return __sub_003E9AC0(this, nullptr, nState, CreateNakedParam(pPropQuest));
}
ZArray<ZXString<char> > CUIMedalQuestInfo::GetQuestSummary(_x_com_ptr<IWzProperty> pPropQuest) {
	return __sub_003E9CD0(this, nullptr, CreateNakedParam(pPropQuest));
}
ZArray<long> CUIMedalQuestInfo::GetResignedTogetherQuests(_x_com_ptr<IWzProperty> pPropQuest) {
	return __sub_003E6960(this, nullptr, CreateNakedParam(pPropQuest));
}
void __cdecl CUIMedalQuestInfo::ClearInfo_AboutReadQuest() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUIMedalQuestInfo::GetCurTab() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMedalQuestInfo::ToggleTab() {
	__sub_005CCC50(this, nullptr);
}
void CUIMedalQuestInfo::OnTabChanged(long nTab) {
	__sub_003EE2D0(this, nullptr, nTab);
}
void CUIMedalQuestInfo::LoadData() {
	__sub_005CCC50(this, nullptr);
}
void CUIMedalQuestInfo::LoadWearedMedal() {
	__sub_005CCC50(this, nullptr);
}
void CUIMedalQuestInfo::InsertQuestInfo(long nState, uint16_t usQuestID, _x_com_ptr<IWzProperty> pPropQuest, _FILETIME ftEnd) {
	__sub_003EA520(this, nullptr, nState, usQuestID, CreateNakedParam(pPropQuest), CreateNakedParam(ftEnd));
}
long CUIMedalQuestInfo::GetQuestState(uint16_t usQuestID, _FILETIME& ftEnd) {
	return __sub_003E1BC0(this, nullptr, usQuestID, ftEnd);
}
void CUIMedalQuestInfo::SetBackFont(int32_t bLast) {
	__sub_003E1490(this, nullptr, bLast);
}
void CUIMedalQuestInfo::SetScrollBar() {
	__sub_005CCC50(this, nullptr);
}
void CUIMedalQuestInfo::SetSelect(long nSelect) {
	__sub_003E1DB0(this, nullptr, nSelect);
}
long CUIMedalQuestInfo::GetMedalState(long nState) {
	return __sub_003E0F80(this, nullptr, nState);
}
long CUIMedalQuestInfo::GetMedalCategory(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUIMedalQuestInfo::IsMinimizedState(long nMedalCategory, long nMedalState) {
	return __sub_003E13B0(this, nullptr, nMedalCategory, nMedalState);
}
int32_t CUIMedalQuestInfo::IsStateButton(ZRef<MedalQuestInfo> pQuest) {
	return __sub_003E1CD0(this, nullptr, CreateNakedParam(pQuest));
}
void CUIMedalQuestInfo::ToggleState(long nMedalCategory, long nMedalState, int32_t bOpen) {
	__sub_003E1440(this, nullptr, nMedalCategory, nMedalState, bOpen);
}
void CUIMedalQuestInfo::DestroyButton(long nMedalCategory, long nMedalState) {
	__sub_003E1F10(this, nullptr, nMedalCategory, nMedalState);
}
void CUIMedalQuestInfo::SyncScrollBarWithSelected() {
	__sub_005CCC50(this, nullptr);
}
long CUIMedalQuestInfo::GetSelect(long ry) {
	return __sub_003E3280(this, nullptr, ry);
}
long CUIMedalQuestInfo::GetHeight(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUIMedalQuestInfo::TryShowRecentlyUpdatedQuest() {
	return __sub_003EA150(this, nullptr);
}
int32_t CUIMedalQuestInfo::TryShowRecentlyViewedQuest() {
	return __sub_003EA150(this, nullptr);
}
int32_t CUIMedalQuestInfo::TryShowSuitableLevelQuest(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUIMedalQuestInfo::TryShowTopQuest() {
	return __sub_003EA150(this, nullptr);
}
CUIMedalQuestInfo& CUIMedalQuestInfo::operator=(const CUIMedalQuestInfo& arg0) {
	return _op_assign_47(this, arg0);
}
CUIMedalQuestInfo& CUIMedalQuestInfo::_op_assign_47(CUIMedalQuestInfo* pThis, const CUIMedalQuestInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIMedalQuestInfoDetail::~CUIMedalQuestInfoDetail() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMedalQuestInfoDetail::_dtor_0() {
	return __sub_003E1740(this, nullptr);
}
 CUIMedalQuestInfoDetail::CUIMedalQuestInfoDetail(const CUIMedalQuestInfoDetail& arg0) {
	_ctor_1( arg0);
}
void CUIMedalQuestInfoDetail::_ctor_1( const CUIMedalQuestInfoDetail& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIMedalQuestInfoDetail::CUIMedalQuestInfoDetail(ZRef<CUIMedalQuestInfo> pUIQuestInfo, long l, long t) {
	_ctor_0( pUIQuestInfo, l, t);
}
void CUIMedalQuestInfoDetail::_ctor_0( ZRef<CUIMedalQuestInfo> pUIQuestInfo, long l, long t) {
	return __sub_003E3A50(this, nullptr, CreateNakedParam(pUIQuestInfo), l, t);
}
void CUIMedalQuestInfoDetail::OnCreate(void* pData) {
	__sub_003E8FC0(this, nullptr, pData);
}
void CUIMedalQuestInfoDetail::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_003E0F30(this, nullptr, nId, param1, param2);
}
void CUIMedalQuestInfoDetail::OnButtonClicked(uint32_t nId) {
	__sub_003E84D0(this, nullptr, nId);
}
void CUIMedalQuestInfoDetail::Draw(const tagRECT* pRect) {
	__sub_003E3BA0(this, nullptr, pRect);
}
void CUIMedalQuestInfoDetail::Update() {
	__sub_003E85C0(this, nullptr);
}
int32_t CUIMedalQuestInfoDetail::OnSetFocus(int32_t bFocus) {
	return __sub_003E1950(this, nullptr, bFocus);
}
int32_t CUIMedalQuestInfoDetail::OnMouseMove(long rx, long ry) {
	return __sub_003E6380(this, nullptr, rx, ry);
}
void CUIMedalQuestInfoDetail::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_003E1020(this, nullptr, msg, wParam, rx, ry);
}
void CUIMedalQuestInfoDetail::ResetInfo() {
	__sub_003E9830(this, nullptr);
}
void CUIMedalQuestInfoDetail::SetNPC() {
	__sub_003E42D0(this, nullptr);
}
void CUIMedalQuestInfoDetail::SetGauge_SeriesQuest() {
	__sub_003E4FF0(this, nullptr);
}
void CUIMedalQuestInfoDetail::SetButton() {
	__sub_003E35C0(this, nullptr);
}
void CUIMedalQuestInfoDetail::SetScrollBar() {
	__sub_003E12C0(this, nullptr);
}
void CUIMedalQuestInfoDetail::SetTimer() {
	__sub_003E8600(this, nullptr);
}
void CUIMedalQuestInfoDetail::SetLayout() {
	__sub_003E2F50(this, nullptr);
}
void CUIMedalQuestInfoDetail::DrawTimeText() {
	__sub_003E6090(this, nullptr);
}
void CUIMedalQuestInfoDetail::MarkNpcLocation_InWorldMap() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMedalQuestInfoDetail& CUIMedalQuestInfoDetail::operator=(const CUIMedalQuestInfoDetail& arg0) {
	return _op_assign_20(this, arg0);
}
CUIMedalQuestInfoDetail& CUIMedalQuestInfoDetail::_op_assign_20(CUIMedalQuestInfoDetail* pThis, const CUIMedalQuestInfoDetail& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

void __cdecl DownHeap_ZRef_MedalQuestInfo__QICategoryCompareFunc_(ZArray<ZRef<MedalQuestInfo> >& a, int32_t nIdx, int32_t nLen, int32_t nFrom, QICategoryCompareFunc& comp) {
	return __sub_003E2A90(a, nIdx, nLen, nFrom, comp);
}
void __cdecl ZSort_ZRef_MedalQuestInfo__QIBaseCompareFunc_(ZArray<ZRef<MedalQuestInfo> >& a, QIBaseCompareFunc comp) {
	return __sub_003E8F80(a, CreateNakedParam(comp));
}
int32_t __cdecl Partition_ZRef_MedalQuestInfo__QIBaseCompareFunc_(ZArray<ZRef<MedalQuestInfo> >& a, int32_t nFrom, int32_t nTo, const ZRef<MedalQuestInfo>& pivot, QIBaseCompareFunc& comp) {
	return __sub_003E2970(a, nFrom, nTo, pivot, comp);
}
void __cdecl ZSort_ZRef_MedalQuestInfo__QIBaseCompareFunc_(ZArray<ZRef<MedalQuestInfo> >& a, __POSITION* posFrom, __POSITION* posTo, QIBaseCompareFunc comp) {
	//TODO return __sub_003E8460(a, posFrom, posTo, comp);
}
void __cdecl ZSort_ZRef_MedalQuestInfo__QICategoryCompareFunc_(ZArray<ZRef<MedalQuestInfo> >& a, __POSITION* posFrom, __POSITION* posTo, QICategoryCompareFunc comp) {
	//TODO return __sub_003E83F0(a, posFrom, posTo, comp);
}
void __cdecl ZSort_ZRef_MedalQuestInfo__QICategoryCompareFunc_(ZArray<ZRef<MedalQuestInfo> >& a, QICategoryCompareFunc comp) {
	//TODO return __sub_003E8F40(a, comp);
}
int32_t __cdecl Partition_ZRef_MedalQuestInfo__QICategoryCompareFunc_(ZArray<ZRef<MedalQuestInfo> >& a, int32_t nFrom, int32_t nTo, const ZRef<MedalQuestInfo>& pivot, QICategoryCompareFunc& comp) {
	return __sub_003E2710(a, nFrom, nTo, pivot, comp);
}
const ZRef<MedalQuestInfo>& __cdecl Median_ZRef_MedalQuestInfo__QIBaseCompareFunc_(const ZRef<MedalQuestInfo>& a, const ZRef<MedalQuestInfo>& b, const ZRef<MedalQuestInfo>& c, QIBaseCompareFunc& comp) {
	return __sub_003E2830(a, b, c, comp);
}
const ZRef<MedalQuestInfo>& __cdecl Median_ZRef_MedalQuestInfo__QICategoryCompareFunc_(const ZRef<MedalQuestInfo>& a, const ZRef<MedalQuestInfo>& b, const ZRef<MedalQuestInfo>& c, QICategoryCompareFunc& comp) {
	return __sub_003E25D0(a, b, c, comp);
}
void __cdecl InsertionSort_ZRef_MedalQuestInfo__QICategoryCompareFunc_(ZArray<ZRef<MedalQuestInfo> >& a, int32_t nFrom, int32_t nTo, QICategoryCompareFunc& comp) {
	return __sub_003E21D0(a, nFrom, nTo, comp);
}
void __cdecl InsertionSort_ZRef_MedalQuestInfo__QIBaseCompareFunc_(ZArray<ZRef<MedalQuestInfo> >& a, int32_t nFrom, int32_t nTo, QIBaseCompareFunc& comp) {
	return __sub_003E23D0(a, nFrom, nTo, comp);
}
void __cdecl DownHeap_ZRef_MedalQuestInfo__QIBaseCompareFunc_(ZArray<ZRef<MedalQuestInfo> >& a, int32_t nIdx, int32_t nLen, int32_t nFrom, QIBaseCompareFunc& comp) {
	return __sub_003E2CA0(a, nIdx, nLen, nFrom, comp);
}
