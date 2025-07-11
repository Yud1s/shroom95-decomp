// CashTradingRoomDlg.cpp
#include "CashTradingRoomDlg.hpp"

static ZArray<ZPair<long, unsigned long>> FAKE_ZArray_ZPair_long_unsigned_long{};

#include "CashTradingRoomDlg_regen.ipp"

 CMiniRoomBaseDlg::~CMiniRoomBaseDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMiniRoomBaseDlg::_dtor_0() {
	return __sub_0009FAA0(this, nullptr);
}
 CMiniRoomBaseDlg::CMiniRoomBaseDlg(const CMiniRoomBaseDlg& arg0) {
	_ctor_1( arg0);
}
void CMiniRoomBaseDlg::_ctor_1( const CMiniRoomBaseDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMiniRoomBaseDlg::CMiniRoomBaseDlg() {
	UNIMPLEMENTED; //_ctor_0();
}
void CMiniRoomBaseDlg::_ctor_0() {
	return __sub_00238770(this, nullptr);
}
void CMiniRoomBaseDlg::Update() {
	__sub_0009FAA0(this, nullptr);
}
void CMiniRoomBaseDlg::Draw(const tagRECT* pRect) {
	__sub_002390D0(this, nullptr, pRect);
}
void CMiniRoomBaseDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_00237190(this, nullptr, nId, param1, param2);
}
void CMiniRoomBaseDlg::OnSelfAvatarChanged(const AvatarLook& al) {
	__sub_00237240(this, nullptr, al);
}
void __cdecl CMiniRoomBaseDlg::OnPacketBase(CInPacket& iPacket) {
	__sub_00239E10(iPacket);
}
void __cdecl CMiniRoomBaseDlg::SendInviteResult(unsigned long dwSN, long nErrCode) {
	__sub_002376D0(dwSN, nErrCode);
}
void __cdecl CMiniRoomBaseDlg::SendCashInviteResult(unsigned long dwSN, long nErrCode) {
	__sub_00237BC0(dwSN, nErrCode);
}
void __cdecl CMiniRoomBaseDlg::OnEnterResultStatic(CInPacket& iPacket) {
	__sub_00239500(iPacket);
}
void __cdecl CMiniRoomBaseDlg::OnInviteStatic(CInPacket& iPacket) {
	__sub_00237A40(iPacket);
}
void __cdecl CMiniRoomBaseDlg::OnInviteResultStatic(CInPacket& iPacket) {
	__sub_00237D70(iPacket);
}
void __cdecl CMiniRoomBaseDlg::OnCheckSSN2Static(CInPacket& iPacket) {
	__sub_00237F70(iPacket);
}
void CMiniRoomBaseDlg::OnEnterBase(CInPacket& iPacket) {
	__sub_0009FA60(this, nullptr, iPacket);
}
void CMiniRoomBaseDlg::OnEnterResultBase(CInPacket& iPacket) {
	__sub_0009FA60(this, nullptr, iPacket);
}
void CMiniRoomBaseDlg::OnLeaveBase(CInPacket& iPacket) {
	__sub_0009FA60(this, nullptr, iPacket);
}
void CMiniRoomBaseDlg::OnAvatar(CInPacket& iPacket) {
	__sub_0009FA60(this, nullptr, iPacket);
}
void CMiniRoomBaseDlg::GetActionPosition(long nSlot, long& nAction, tagPOINT& pt) {
	__sub_00238860(this, nullptr, nSlot, nAction, pt);
}
void CMiniRoomBaseDlg::OnPacket(long nSlot, CInPacket& iPacket) {
	__sub_0009FA70(this, nullptr, nSlot, iPacket);
}
void CMiniRoomBaseDlg::OnEnter(long nSlot, CInPacket& iPacket) {
	__sub_0009FA70(this, nullptr, nSlot, iPacket);
}
void CMiniRoomBaseDlg::OnEnterResult(CInPacket& iPacket) {
	__sub_0009FA60(this, nullptr, iPacket);
}
void CMiniRoomBaseDlg::OnLeave(long nSlot, CInPacket& iPacket) {
	__sub_0009FA70(this, nullptr, nSlot, iPacket);
}
void CMiniRoomBaseDlg::OnChat(CInPacket& iPacket) {
	__sub_0009FA60(this, nullptr, iPacket);
}
void CMiniRoomBaseDlg::DrawCharacterName(long nSlot, ZXString<char> sID) {
	__sub_0009FB20(this, nullptr, nSlot, CreateNakedParam(sID));
}
void CMiniRoomBaseDlg::DecodeMiniGameRecord(long nSlot, CInPacket& iPacket) {
	__sub_0009FA70(this, nullptr, nSlot, iPacket);
}
int32_t CMiniRoomBaseDlg::IsEntrusted() {
	return __sub_0009FA80(this, nullptr);
}
void CMiniRoomBaseDlg::RegisterEmployer(unsigned long dwTemplateID) {
	__sub_0009FA90(this, nullptr, dwTemplateID);
}
void CMiniRoomBaseDlg::DrawEmployee() {
	__sub_0009FAA0(this, nullptr);
}
void CMiniRoomBaseDlg::OnCorrectSSN2(long nProc) {
	__sub_0009FAB0(this, nullptr, nProc);
}
long CMiniRoomBaseDlg::GetMaxUsers() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CMiniRoomBaseDlg::GetCurUsers() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CMiniRoomBaseDlg::GetMyPosition() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZRef<CAvatar> CMiniRoomBaseDlg::GetAvatar(long nSlot) {
	return m_apAvatar[nSlot];
	// return __sub_0009CB50(this, nullptr, nSlot);
}
ZRef<GW_MiniGameRecord> CMiniRoomBaseDlg::GetMiniGameRecord(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZXString<char> CMiniRoomBaseDlg::GetUserID(long nSlot) {
	return this->m_asUserID[nSlot];
	//return __sub_0009D680(this, nullptr, nSlot);
}
short CMiniRoomBaseDlg::GetJobCode(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMiniRoomBaseDlg::SetTournament(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMiniRoomBaseDlg::IsTournament() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMiniRoomBaseDlg::SetMiniRoomType(long nProc) {
	__sub_0009FAB0(this, nullptr, nProc);
}
int32_t CMiniRoomBaseDlg::GetMiniRoomType() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMiniRoomBaseDlg::EnableChat(long left, long top, long width, long height, int32_t bCreateScrollBar) {
	__sub_002377C0(this, nullptr, left, top, width, height, bCreateScrollBar);
}
void CMiniRoomBaseDlg::CheckAndSendChat(ZXString<char> strChatMsg) {
	__sub_002382A0(this, nullptr, CreateNakedParam(strChatMsg));
}
void CMiniRoomBaseDlg::AddChatText(ZXString16 sText, FONT_TYPE nFontColor) {
	__sub_00239130(this, nullptr, CreateNakedParam(sText), nFontColor);
}
void CMiniRoomBaseDlg::MakeGameMessage(ZXString<char>& sText, long nMessageCode, ZXString<char> sCharacterName) {
	__sub_00238380(this, nullptr, sText, nMessageCode, CreateNakedParam(sCharacterName));
}
long CMiniRoomBaseDlg::GetTextLineCount() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMiniRoomBaseDlg::DrawTextA() {
	__sub_0009FAA0(this, nullptr);
}
void CMiniRoomBaseDlg::DecodeAvatar(long nSlot, CInPacket& iPacket) {
	__sub_0009FA70(this, nullptr, nSlot, iPacket);
}
void CMiniRoomBaseDlg::DecodeEmployeeTemplate(long nSlot, CInPacket& iPacket) {
	__sub_0009FA70(this, nullptr, nSlot, iPacket);
}
CMiniRoomBaseDlg* __cdecl CMiniRoomBaseDlg::MiniRoomFactory(long nType) {
	return __sub_00237280(nType);
}
CMiniRoomBaseDlg& CMiniRoomBaseDlg::operator=(const CMiniRoomBaseDlg& arg0) {
	return _op_assign_53(this, arg0);
}
CMiniRoomBaseDlg& CMiniRoomBaseDlg::_op_assign_53(CMiniRoomBaseDlg* pThis, const CMiniRoomBaseDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMiniRoomBaseDlg::ChatTextInfo::~ChatTextInfo() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMiniRoomBaseDlg::ChatTextInfo::_dtor_0() {
	return __sub_002378B0(this, nullptr);
}
 CMiniRoomBaseDlg::ChatTextInfo::ChatTextInfo(const CMiniRoomBaseDlg::ChatTextInfo& arg0) {
	_ctor_1( arg0);
}
void CMiniRoomBaseDlg::ChatTextInfo::_ctor_1( const CMiniRoomBaseDlg::ChatTextInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMiniRoomBaseDlg::ChatTextInfo::ChatTextInfo() {
	UNIMPLEMENTED; //_ctor_0();
}
void CMiniRoomBaseDlg::ChatTextInfo::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CMiniRoomBaseDlg::ChatTextInfo& CMiniRoomBaseDlg::ChatTextInfo::operator=(const CMiniRoomBaseDlg::ChatTextInfo& arg0) {
	return _op_assign_3(this, arg0);
}
CMiniRoomBaseDlg::ChatTextInfo& CMiniRoomBaseDlg::ChatTextInfo::_op_assign_3(CMiniRoomBaseDlg::ChatTextInfo* pThis, const CMiniRoomBaseDlg::ChatTextInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCashTradingRoomDlg::~CCashTradingRoomDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCashTradingRoomDlg::_dtor_0() {
	return __sub_0009FB40(this, nullptr);
}
 CCashTradingRoomDlg::CCashTradingRoomDlg(const CCashTradingRoomDlg& arg0) {
	_ctor_1( arg0);
}
void CCashTradingRoomDlg::_ctor_1( const CCashTradingRoomDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCashTradingRoomDlg::CCashTradingRoomDlg() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCashTradingRoomDlg::_ctor_0() {
	return __sub_0009F900(this, nullptr);
}
void CCashTradingRoomDlg::SetRet(long nRet) {
	__sub_0009CD10(this, nullptr, nRet);
}
void CCashTradingRoomDlg::OnCreate(void* pData) {
	__sub_0009E8C0(this, nullptr, pData);
}
void CCashTradingRoomDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0009DBF0(this, nullptr, wParam, lParam);
}
int32_t CCashTradingRoomDlg::OnMouseMove(long rx, long ry) {
	return __sub_0009D9A0(this, nullptr, rx, ry);
}
void CCashTradingRoomDlg::OnMouseEnter(int32_t bEnter) {
	__sub_0009C5F0(this, nullptr, bEnter);
}
void CCashTradingRoomDlg::OnButtonClicked(uint32_t uId) {
	__sub_0009F030(this, nullptr, uId);
}
void CCashTradingRoomDlg::Draw(const tagRECT* pRect) {
	__sub_000A0300(this, nullptr, pRect);
}
void CCashTradingRoomDlg::ClearToolTip() {
	__sub_0009FAC0(this, nullptr);
}
void CCashTradingRoomDlg::GetActionPosition(long nSlot, long& nAction, tagPOINT& pt) {
	__sub_0009C5A0(this, nullptr, nSlot, nAction, pt);
}
void CCashTradingRoomDlg::OnPacket(long nType, CInPacket& iPacket) {
	__sub_0009D6B0(this, nullptr, nType, iPacket);
}
void CCashTradingRoomDlg::OnEnter(long nSlot, CInPacket& iPacket) {
	__sub_0009C5E0(this, nullptr, nSlot, iPacket);
}
void CCashTradingRoomDlg::OnLeave(long nSlot, CInPacket& iPacket) {
	__sub_0009D6F0(this, nullptr, nSlot, iPacket);
}
void CCashTradingRoomDlg::OnPutItem(CInPacket& iPacket) {
	__sub_0009CDD0(this, nullptr, iPacket);
}
void CCashTradingRoomDlg::OnPutMoney(CInPacket& iPacket) {
	__sub_0009C9D0(this, nullptr, iPacket);
}
void CCashTradingRoomDlg::OnTrade(CInPacket& iPacket) {
	__sub_0009CFD0(this, nullptr, iPacket);
}
void CCashTradingRoomDlg::GetTextMoney(long nMoney, ZXString<char>& sToolTip, ZXString<char>& sBox) {
	__sub_000A0190(this, nullptr, nMoney, sToolTip, sBox);
}
int32_t CCashTradingRoomDlg::CompressTextMoney(long nMoney, ZXString<char>& sToolTip, ZXString<char>& sBox) {
	return __sub_0009FCE0(this, nullptr, nMoney, sToolTip, sBox);
}
void CCashTradingRoomDlg::MakeTextMoney(long nMoney, ZXString<char>& sToolTip, ZXString<char>& sBox, int32_t bCompressed) {
	__sub_0009DD10(this, nullptr, nMoney, sToolTip, sBox, bCompressed);
}
void CCashTradingRoomDlg::DelTextLeadingZeroes(ZXString<char>& sToolTip, ZXString<char>& sBox, int32_t bCompressed) {
	__sub_0009FF60(this, nullptr, sToolTip, sBox, bCompressed);
}
int32_t CCashTradingRoomDlg::PutItem(ZRef<GW_ItemSlotBase> pItem, long nItemTI, long nSlotPosition, long x, long y) {
	return __sub_0009D210(this, nullptr, CreateNakedParam(pItem), nItemTI, nSlotPosition, x, y);
}
void CCashTradingRoomDlg::PutMoney() {
	__sub_0009D480(this, nullptr);
}
void CCashTradingRoomDlg::Trade() {
	__sub_0009E180(this, nullptr);
}
long CCashTradingRoomDlg::GetPeerGender() {
	return __sub_0009CC00(this, nullptr);
}
long CCashTradingRoomDlg::GetPeerJob() {
	return __sub_0009C610(this, nullptr);
}
void CCashTradingRoomDlg::DrawItems(_x_com_ptr<IWzCanvas> arg0) {
	__sub_0009F1B0(this, nullptr, CreateNakedParam(arg0));
}
long CCashTradingRoomDlg::GetItemIndexFromPoint(long rx, long ry) {
	return __sub_0009C640(this, nullptr, rx, ry);
}
long CCashTradingRoomDlg::GetRectIndexFromPoint(long rx, long ry) {
	return __sub_0009C840(this, nullptr, rx, ry);
}
CCashTradingRoomDlg& CCashTradingRoomDlg::operator=(const CCashTradingRoomDlg& arg0) {
	return _op_assign_33(this, arg0);
}
CCashTradingRoomDlg& CCashTradingRoomDlg::_op_assign_33(CCashTradingRoomDlg* pThis, const CCashTradingRoomDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCashTradingRoomDlg::ITEM::~ITEM() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCashTradingRoomDlg::ITEM::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCashTradingRoomDlg::ITEM::ITEM(const CCashTradingRoomDlg::ITEM& arg0) {
	_ctor_1( arg0);
}
void CCashTradingRoomDlg::ITEM::_ctor_1( const CCashTradingRoomDlg::ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCashTradingRoomDlg::ITEM::ITEM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCashTradingRoomDlg::ITEM::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CCashTradingRoomDlg::ITEM& CCashTradingRoomDlg::ITEM::operator=(const CCashTradingRoomDlg::ITEM& arg0) {
	return _op_assign_3(this, arg0);
}
CCashTradingRoomDlg::ITEM& CCashTradingRoomDlg::ITEM::_op_assign_3(CCashTradingRoomDlg::ITEM* pThis, const CCashTradingRoomDlg::ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

