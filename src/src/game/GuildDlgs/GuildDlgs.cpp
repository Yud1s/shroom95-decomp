// GuildDlgs.cpp
#include "GuildDlgs.hpp"
#include "GuildDlgs_regen.ipp"

 GUILDRANKING::~GUILDRANKING() {
	 UNIMPLEMENTED; // _dtor_0();
}
void GUILDRANKING::_dtor_0() {
	return __sub_0016AD50(this, nullptr);
}
 GUILDRANKING::GUILDRANKING(const GUILDRANKING& arg0) {
	_ctor_1( arg0);
}
void GUILDRANKING::_ctor_1( const GUILDRANKING& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 GUILDRANKING::GUILDRANKING() {
	UNIMPLEMENTED; //_ctor_0();
}
void GUILDRANKING::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
GUILDRANKING& GUILDRANKING::operator=(const GUILDRANKING& arg0) {
	return _op_assign_3(this, arg0);
}
GUILDRANKING& GUILDRANKING::_op_assign_3(GUILDRANKING* pThis, const GUILDRANKING& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CGuildRankDlg::~CGuildRankDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CGuildRankDlg::_dtor_0() {
	return __sub_0016CF40(this, nullptr);
}
 CGuildRankDlg::CGuildRankDlg(const CGuildRankDlg& arg0) {
	_ctor_1( arg0);
}
void CGuildRankDlg::_ctor_1( const CGuildRankDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CGuildRankDlg::CGuildRankDlg(ZArray<GUILDRANKING>& aGuildRanking) {
	_ctor_0( aGuildRanking);
}
void CGuildRankDlg::_ctor_0( ZArray<GUILDRANKING>& aGuildRanking) {
	return __sub_0016DB70(this, nullptr, aGuildRanking);
}
void CGuildRankDlg::OnCreate(void* pData) {
	__sub_0016A710(this, nullptr, pData);
}
void CGuildRankDlg::Draw(const tagRECT* pRect) {
	__sub_0016CDD0(this, nullptr, pRect);
}
void CGuildRankDlg::OnButtonClicked(uint32_t nId) {
	__sub_00169E90(this, nullptr, nId);
}
void CGuildRankDlg::DrawCurPage() {
	__sub_0016B990(this, nullptr);
}
ZArray<GUILDRANKING> __cdecl CGuildRankDlg::MakeDummyRank() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CGuildRankDlg::DrawRanking(long nRank, long ny, long nPoint, long nAlpha) {
	__sub_0016B380(this, nullptr, nRank, ny, nPoint, nAlpha);
}
CGuildRankDlg& CGuildRankDlg::operator=(const CGuildRankDlg& arg0) {
	return _op_assign_9(this, arg0);
}
CGuildRankDlg& CGuildRankDlg::_op_assign_9(CGuildRankDlg* pThis, const CGuildRankDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CSetGuildMarkDlg::~CSetGuildMarkDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CSetGuildMarkDlg::_dtor_0() {
	return __sub_0016A5A0(this, nullptr);
}
 CSetGuildMarkDlg::CSetGuildMarkDlg(const CSetGuildMarkDlg& arg0) {
	_ctor_1( arg0);
}
void CSetGuildMarkDlg::_ctor_1( const CSetGuildMarkDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CSetGuildMarkDlg::CSetGuildMarkDlg() {
	UNIMPLEMENTED; //_ctor_0();
}
void CSetGuildMarkDlg::_ctor_0() {
	return __sub_0016B240(this, nullptr);
}
void CSetGuildMarkDlg::OnCreate(void* pData) {
	__sub_0016D0B0(this, nullptr, pData);
}
void CSetGuildMarkDlg::Update() {
	__sub_0016ABC0(this, nullptr);
}
void CSetGuildMarkDlg::OnButtonClicked(uint32_t nId) {
	__sub_0016A360(this, nullptr, nId);
}
void CSetGuildMarkDlg::OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2) {
	__sub_0016A530(this, nullptr, uId, param1, param2);
}
void CSetGuildMarkDlg::SetRet(long nRet) {
	__sub_0016AFD0(this, nullptr, nRet);
}
void CSetGuildMarkDlg::GetResult(long& nMarkBg, long& nMarkBgColor, long& nMark, long& nMarkColor) {
	__sub_0060B230(this, nullptr, nMarkBg, nMarkBgColor, nMark, nMarkColor);
}
void CSetGuildMarkDlg::ShowAnimation() {
	__sub_00169FE0(this, nullptr);
}
void CSetGuildMarkDlg::InitGuildMark() {
	__sub_0016CE80(this, nullptr);
}
void CSetGuildMarkDlg::ShowGuildMark() {
	__sub_0016A1D0(this, nullptr);
}
void CSetGuildMarkDlg::InitLastMarkNumber() {
	__sub_0016C810(this, nullptr);
}
CSetGuildMarkDlg& CSetGuildMarkDlg::operator=(const CSetGuildMarkDlg& arg0) {
	return _op_assign_13(this, arg0);
}
CSetGuildMarkDlg& CSetGuildMarkDlg::_op_assign_13(CSetGuildMarkDlg* pThis, const CSetGuildMarkDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCreateGuildAgreeDlg::~CCreateGuildAgreeDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCreateGuildAgreeDlg::_dtor_0() {
	return __sub_0016AA50(this, nullptr);
}
 CCreateGuildAgreeDlg::CCreateGuildAgreeDlg(const CCreateGuildAgreeDlg& arg0) {
	_ctor_1( arg0);
}
void CCreateGuildAgreeDlg::_ctor_1( const CCreateGuildAgreeDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCreateGuildAgreeDlg::CCreateGuildAgreeDlg(ZXString<char> sMasterName, ZXString<char> sGuildName) {
	_ctor_0( sMasterName, sGuildName);
}
void CCreateGuildAgreeDlg::_ctor_0( ZXString<char> sMasterName, ZXString<char> sGuildName) {
	return __sub_0016B110(this, nullptr, CreateNakedParam(sMasterName), CreateNakedParam(sGuildName));
}
void CCreateGuildAgreeDlg::OnCreate(void* pData) {
	__sub_0016BAB0(this, nullptr, pData);
}
void CCreateGuildAgreeDlg::Update() {
	__sub_0016BD60(this, nullptr);
}
void CCreateGuildAgreeDlg::ShowAnimation() {
	__sub_0016ADB0(this, nullptr);
}
CCreateGuildAgreeDlg& CCreateGuildAgreeDlg::operator=(const CCreateGuildAgreeDlg& arg0) {
	return _op_assign_6(this, arg0);
}
CCreateGuildAgreeDlg& CCreateGuildAgreeDlg::_op_assign_6(CCreateGuildAgreeDlg* pThis, const CCreateGuildAgreeDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

