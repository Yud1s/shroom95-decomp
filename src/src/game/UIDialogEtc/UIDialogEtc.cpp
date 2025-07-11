// UIDialogEtc.cpp
#include "UIDialogEtc.hpp"


static ZRef<CUIArtSpeakerSample> FAKE_ZRefCUIArtSpeakerSample{};
static ZRef<CUITransferWorldSelectDlg> FAKE_ZRefCUITransferWorldSelectDlg{};
static ZRef<CUIChangingCharacterName> FAKE_ZRefCUIChangingCharacterName{};

#include "UIDialogEtc_regen.ipp"

 CUIAntiMacro::~CUIAntiMacro() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIAntiMacro::_dtor_0() {
	return __sub_0038B880(this, nullptr);
}
 CUIAntiMacro::CUIAntiMacro(const CUIAntiMacro& arg0) {
	_ctor_1( arg0);
}
void CUIAntiMacro::_ctor_1( const CUIAntiMacro& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIAntiMacro::CUIAntiMacro() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIAntiMacro::_ctor_0() {
	return __sub_0038B6B0(this, nullptr);
}
void CUIAntiMacro::OnCreate(void* pData) {
	__sub_0038B980(this, nullptr, pData);
}
void CUIAntiMacro::Draw(const tagRECT* pRect) {
	__sub_0038BB30(this, nullptr, pRect);
}
void CUIAntiMacro::SetRet(long nRet) {
	__sub_0038C940(this, nullptr, nRet);
}
int32_t CUIAntiMacro::OnSetFocus(int32_t bFocus) {
	return __sub_0038B860(this, nullptr, bFocus);
}
void CUIAntiMacro::Update() {
	__sub_0037F1F0(this, nullptr);
}
void CUIAntiMacro::SetValues(_x_com_ptr<IWzCanvas> pCanvas, long tRemain, int32_t bFirst) {
	__sub_0037F9C0(this, nullptr, CreateNakedParam(pCanvas), tRemain, bFirst);
}
CUIAntiMacro& CUIAntiMacro::operator=(const CUIAntiMacro& arg0) {
	return _op_assign_9(this, arg0);
}
CUIAntiMacro& CUIAntiMacro::_op_assign_9(CUIAntiMacro* pThis, const CUIAntiMacro& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISpeedQuiz::~CUISpeedQuiz() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUISpeedQuiz::_dtor_0() {
	return __sub_003903A0(this, nullptr);
}
 CUISpeedQuiz::CUISpeedQuiz(const CUISpeedQuiz& arg0) {
	_ctor_1( arg0);
}
void CUISpeedQuiz::_ctor_1( const CUISpeedQuiz& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISpeedQuiz::CUISpeedQuiz() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUISpeedQuiz::_ctor_0() {
	return __sub_003901A0(this, nullptr);
}
void CUISpeedQuiz::OnCreate(void* pData) {
	__sub_003904E0(this, nullptr, pData);
}
void CUISpeedQuiz::OnButtonClicked(uint32_t nId) {
	__sub_0037F2B0(this, nullptr, nId);
}
void CUISpeedQuiz::Draw(const tagRECT* pRect) {
	__sub_00390910(this, nullptr, pRect);
}
void CUISpeedQuiz::SetRet(long nRet) {
	__sub_0039C4C0(this, nullptr, nRet);
}
void CUISpeedQuiz::Update() {
	__sub_0039C670(this, nullptr);
}
void CUISpeedQuiz::SetValues(long nType, unsigned long dwAnswer, long nCorrect, long nRemain, long tRemain) {
	__sub_003919E0(this, nullptr, nType, dwAnswer, nCorrect, nRemain, tRemain);
}
long CUISpeedQuiz::GetRemainTime() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUISpeedQuiz::SendResult(ZXString<char> sMsg) {
	__sub_00391CF0(this, nullptr, CreateNakedParam(sMsg));
}
CUISpeedQuiz& CUISpeedQuiz::operator=(const CUISpeedQuiz& arg0) {
	return _op_assign_11(this, arg0);
}
CUISpeedQuiz& CUISpeedQuiz::_op_assign_11(CUISpeedQuiz* pThis, const CUISpeedQuiz& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIClaim::~CUIClaim() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIClaim::_dtor_0() {
	return __sub_00395270(this, nullptr);
}
 CUIClaim::CUIClaim(const CUIClaim& arg0) {
	_ctor_1( arg0);
}
void CUIClaim::_ctor_1( const CUIClaim& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIClaim::CUIClaim(ZArray<ZXString<char> >& characterList, int32_t bChatClaim) {
	_ctor_0( characterList, bChatClaim);
}
void CUIClaim::_ctor_0( ZArray<ZXString<char> >& characterList, int32_t bChatClaim) {
	return __sub_00395130(this, nullptr, characterList, bChatClaim);
}
void CUIClaim::OnCreate(void* pData) {
	__sub_003953E0(this, nullptr, pData);
}
void CUIClaim::SetRet(long nRet) {
	__sub_00395D40(this, nullptr, nRet);
}
void CUIClaim::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00382060(this, nullptr, wParam, lParam);
}
void CUIClaim::GetResult(ZXString<char>& sCharacterName, long& nType, ZXString<char>& sContext) {
	__sub_00381460(this, nullptr, sCharacterName, nType, sContext);
}
CUIClaim& CUIClaim::operator=(const CUIClaim& arg0) {
	return _op_assign_7(this, arg0);
}
CUIClaim& CUIClaim::_op_assign_7(CUIClaim* pThis, const CUIClaim& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISkillEffectChange::~CUISkillEffectChange() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUISkillEffectChange::_dtor_0() {
	return __sub_00380020(this, nullptr);
}
 CUISkillEffectChange::CUISkillEffectChange(const CUISkillEffectChange& arg0) {
	_ctor_1( arg0);
}
void CUISkillEffectChange::_ctor_1( const CUISkillEffectChange& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISkillEffectChange::CUISkillEffectChange() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUISkillEffectChange::_ctor_0() {
	return __sub_003921C0(this, nullptr);
}
void CUISkillEffectChange::OnCreate(void* pData) {
	__sub_00392310(this, nullptr, pData);
}
void CUISkillEffectChange::Draw(const tagRECT* pRect) {
	__sub_003924C0(this, nullptr, pRect);
}
void CUISkillEffectChange::SetRet(long nRet) {
	__sub_0037F600(this, nullptr, nRet);
}
int32_t CUISkillEffectChange::OnSetFocus(int32_t bFocus) {
	return __sub_003800D0(this, nullptr, bFocus);
}
void CUISkillEffectChange::SetValues(long nLevel, ZXString<char> sSkillName) {
	__sub_00381A40(this, nullptr, nLevel, CreateNakedParam(sSkillName));
}
CUISkillEffectChange& CUISkillEffectChange::operator=(const CUISkillEffectChange& arg0) {
	return _op_assign_8(this, arg0);
}
CUISkillEffectChange& CUISkillEffectChange::_op_assign_8(CUISkillEffectChange* pThis, const CUISkillEffectChange& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISendMemo::~CUISendMemo() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUISendMemo::_dtor_0() {
	return __sub_00382BD0(this, nullptr);
}
 CUISendMemo::CUISendMemo(const CUISendMemo& arg0) {
	_ctor_1( arg0);
}
void CUISendMemo::_ctor_1( const CUISendMemo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISendMemo::CUISendMemo() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUISendMemo::_ctor_0() {
	return __sub_00382B10(this, nullptr);
}
void CUISendMemo::OnCreate(void* pData) {
	__sub_00382CF0(this, nullptr, pData);
}
void CUISendMemo::Draw(const tagRECT* pRect) {
	__sub_0037F120(this, nullptr, pRect);
}
void CUISendMemo::SetRet(long nRet) {
	__sub_00395FD0(this, nullptr, nRet);
}
void CUISendMemo::SetReceiver(ZXString<char> sReceiver) {
	__sub_00380190(this, nullptr, CreateNakedParam(sReceiver));
}
void CUISendMemo::GetResult(ZXString<char>& sReceiver, ZXString<char>& sContent) {
	__sub_00382FC0(this, nullptr, sReceiver, sContent);
}
CUISendMemo& CUISendMemo::operator=(const CUISendMemo& arg0) {
	return _op_assign_8(this, arg0);
}
CUISendMemo& CUISendMemo::_op_assign_8(CUISendMemo* pThis, const CUISendMemo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIChangingLicenseNotice::~CUIChangingLicenseNotice() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIChangingLicenseNotice::_dtor_0() {
	return __sub_0039F430(this, nullptr);
}
 CUIChangingLicenseNotice::CUIChangingLicenseNotice(const CUIChangingLicenseNotice& arg0) {
	_ctor_1( arg0);
}
void CUIChangingLicenseNotice::_ctor_1( const CUIChangingLicenseNotice& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIChangingLicenseNotice::CUIChangingLicenseNotice(void* pData) {
	_ctor_0( pData);
}
void CUIChangingLicenseNotice::_ctor_0( void* pData) {
	return __sub_0039F360(this, nullptr, pData);
}
void CUIChangingLicenseNotice::OnCreate(void* pData) {
	__sub_0039C850(this, nullptr, pData);
}
void CUIChangingLicenseNotice::OnButtonClicked(uint32_t nId) {
	__sub_00380EC0(this, nullptr, nId);
}
void CUIChangingLicenseNotice::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0037F380(this, nullptr, wParam, lParam);
}
int32_t CUIChangingLicenseNotice::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_0037F340(this, nullptr, rx, ry, ppCtrl);
}
void CUIChangingLicenseNotice::Draw(const tagRECT* pRect) {
	__sub_00393920(this, nullptr, pRect);
}
void CUIChangingLicenseNotice::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0037F6B0(this, nullptr, nId, param1, param2);
}
void CUIChangingLicenseNotice::SetRet(long nRet) {
	__sub_0037F300(this, nullptr, nRet);
}
void CUIChangingLicenseNotice::SetBirthDate(long nBirthDate) {
	__sub_0037F330(this, nullptr, nBirthDate);
}
long CUIChangingLicenseNotice::GetBirthDate() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUIChangingLicenseNotice::GetCommSN() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIChangingLicenseNotice::LoadFont() {
	__sub_00393520(this, nullptr);
}
CUIChangingLicenseNotice& CUIChangingLicenseNotice::operator=(const CUIChangingLicenseNotice& arg0) {
	return _op_assign_14(this, arg0);
}
CUIChangingLicenseNotice& CUIChangingLicenseNotice::_op_assign_14(CUIChangingLicenseNotice* pThis, const CUIChangingLicenseNotice& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIInitialQuiz::~CUIInitialQuiz() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIInitialQuiz::_dtor_0() {
	return __sub_0038E5D0(this, nullptr);
}
 CUIInitialQuiz::CUIInitialQuiz(const CUIInitialQuiz& arg0) {
	_ctor_1( arg0);
}
void CUIInitialQuiz::_ctor_1( const CUIInitialQuiz& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIInitialQuiz::CUIInitialQuiz() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIInitialQuiz::_ctor_0() {
	return __sub_0038E3D0(this, nullptr);
}
void CUIInitialQuiz::OnCreate(void* pData) {
	__sub_0038E720(this, nullptr, pData);
}
void CUIInitialQuiz::Draw(const tagRECT* pRect) {
	__sub_0038E9A0(this, nullptr, pRect);
}
void CUIInitialQuiz::SetRet(long nRet) {
	__sub_0039C020(this, nullptr, nRet);
}
void CUIInitialQuiz::Update() {
	__sub_0039C390(this, nullptr);
}
void CUIInitialQuiz::SetValues(ZXString<char> sTitle, ZXString<char> sQuizText, ZXString<char> sHintText, long nMinInput, long nMaxInput, long tRemain) {
	__sub_003816C0(this, nullptr, CreateNakedParam(sTitle), CreateNakedParam(sQuizText), CreateNakedParam(sHintText), nMinInput, nMaxInput, tRemain);
}
long CUIInitialQuiz::GetRemainTime() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIInitialQuiz::SendResult(ZXString<char> sMsg) {
	__sub_003900D0(this, nullptr, CreateNakedParam(sMsg));
}
CUIInitialQuiz& CUIInitialQuiz::operator=(const CUIInitialQuiz& arg0) {
	return _op_assign_10(this, arg0);
}
CUIInitialQuiz& CUIInitialQuiz::_op_assign_10(CUIInitialQuiz* pThis, const CUIInitialQuiz& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CSlideNotice::~CSlideNotice() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CSlideNotice::_dtor_0() {
	return __sub_00380600(this, nullptr);
}
 CSlideNotice::CSlideNotice(const CSlideNotice& arg0) {
	_ctor_1( arg0);
}
void CSlideNotice::_ctor_1( const CSlideNotice& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CSlideNotice::CSlideNotice() {
	UNIMPLEMENTED; //_ctor_0();
}
void CSlideNotice::_ctor_0() {
	return __sub_00380530(this, nullptr);
}
void CSlideNotice::OnCreate(void* pData) {
	__sub_0037FBE0(this, nullptr, pData);
}
int32_t CSlideNotice::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_003805D0(this, nullptr, rx, ry, ppCtrl);
}
int32_t CSlideNotice::OnSetFocus(int32_t bFocus) {
	return __sub_003805E0(this, nullptr, bFocus);
}
void CSlideNotice::SetMsg(ZXString<char> sNotice) {
	__sub_00387070(this, nullptr, CreateNakedParam(sNotice));
}
CSlideNotice& CSlideNotice::operator=(const CSlideNotice& arg0) {
	return _op_assign_7(this, arg0);
}
CSlideNotice& CSlideNotice::_op_assign_7(CSlideNotice* pThis, const CSlideNotice& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIClaimPreNotice::~CUIClaimPreNotice() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIClaimPreNotice::_dtor_0() {
	return __sub_00381FD0(this, nullptr);
}
 CUIClaimPreNotice::CUIClaimPreNotice(const CUIClaimPreNotice& arg0) {
	_ctor_1( arg0);
}
void CUIClaimPreNotice::_ctor_1( const CUIClaimPreNotice& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIClaimPreNotice::CUIClaimPreNotice() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIClaimPreNotice::_ctor_0() {
	return __sub_00381F30(this, nullptr);
}
void CUIClaimPreNotice::OnCreate(void* pData) {
	__sub_0037FF70(this, nullptr, pData);
}
void CUIClaimPreNotice::OnButtonClicked(uint32_t nId) {
	__sub_0037F060(this, nullptr, nId);
}
CUIClaimPreNotice& CUIClaimPreNotice::operator=(const CUIClaimPreNotice& arg0) {
	return _op_assign_5(this, arg0);
}
CUIClaimPreNotice& CUIClaimPreNotice::_op_assign_5(CUIClaimPreNotice* pThis, const CUIClaimPreNotice& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIAdminAntiMacro::~CUIAdminAntiMacro() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIAdminAntiMacro::_dtor_0() {
	return __sub_0038CC90(this, nullptr);
}
 CUIAdminAntiMacro::CUIAdminAntiMacro(const CUIAdminAntiMacro& arg0) {
	_ctor_1( arg0);
}
void CUIAdminAntiMacro::_ctor_1( const CUIAdminAntiMacro& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIAdminAntiMacro::CUIAdminAntiMacro() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIAdminAntiMacro::_ctor_0() {
	return __sub_0038CAC0(this, nullptr);
}
void CUIAdminAntiMacro::OnCreate(void* pData) {
	__sub_0038CD90(this, nullptr, pData);
}
void CUIAdminAntiMacro::Draw(const tagRECT* pRect) {
	__sub_0038CF40(this, nullptr, pRect);
}
void CUIAdminAntiMacro::SetRet(long nRet) {
	__sub_0038DD80(this, nullptr, nRet);
}
int32_t CUIAdminAntiMacro::OnSetFocus(int32_t bFocus) {
	return __sub_0038CC70(this, nullptr, bFocus);
}
void CUIAdminAntiMacro::Update() {
	__sub_0037F250(this, nullptr);
}
void CUIAdminAntiMacro::SetValues(_x_com_ptr<IWzCanvas> pCanvas, long tRemain, int32_t bFirst) {
	__sub_0037FA70(this, nullptr, CreateNakedParam(pCanvas), tRemain, bFirst);
}
CUIAdminAntiMacro& CUIAdminAntiMacro::operator=(const CUIAdminAntiMacro& arg0) {
	return _op_assign_9(this, arg0);
}
CUIAdminAntiMacro& CUIAdminAntiMacro::_op_assign_9(CUIAdminAntiMacro* pThis, const CUIAdminAntiMacro& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUINoticePremium::~CUINoticePremium() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUINoticePremium::_dtor_0() {
	return __sub_003800F0(this, nullptr);
}
 CUINoticePremium::CUINoticePremium(const CUINoticePremium& arg0) {
	_ctor_1( arg0);
}
void CUINoticePremium::_ctor_1( const CUINoticePremium& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUINoticePremium::CUINoticePremium() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUINoticePremium::_ctor_0() {
	return __sub_003928A0(this, nullptr);
}
void CUINoticePremium::OnCreate(void* pData) {
	__sub_00392A60(this, nullptr, pData);
}
void CUINoticePremium::SetVisible(int32_t bVisible) {
	__sub_0037F670(this, nullptr, bVisible);
}
CUINoticePremium& CUINoticePremium::operator=(const CUINoticePremium& arg0) {
	return _op_assign_5(this, arg0);
}
CUINoticePremium& CUINoticePremium::_op_assign_5(CUINoticePremium* pThis, const CUINoticePremium& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIAvatarMegaphone::~CUIAvatarMegaphone() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIAvatarMegaphone::_dtor_0() {
	return __sub_00381330(this, nullptr);
}
 CUIAvatarMegaphone::CUIAvatarMegaphone(const CUIAvatarMegaphone& arg0) {
	_ctor_1( arg0);
}
void CUIAvatarMegaphone::_ctor_1( const CUIAvatarMegaphone& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIAvatarMegaphone::CUIAvatarMegaphone(long nItemID, int32_t bWhisper) {
	_ctor_0( nItemID, bWhisper);
}
void CUIAvatarMegaphone::_ctor_0( long nItemID, int32_t bWhisper) {
	return __sub_00381240(this, nullptr, nItemID, bWhisper);
}
void CUIAvatarMegaphone::OnCreate(void* pData) {
	__sub_0039E6B0(this, nullptr, pData);
}
void CUIAvatarMegaphone::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0037F4F0(this, nullptr, wParam, lParam);
}
void CUIAvatarMegaphone::Draw(const tagRECT* pRect) {
	__sub_0037F4E0(this, nullptr, pRect);
}
void CUIAvatarMegaphone::OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2) {
	__sub_0037FD70(this, nullptr, uId, param1, param2);
}
int32_t CUIAvatarMegaphone::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_0037F520(this, nullptr, rx, ry, ppCtrl);
}
void CUIAvatarMegaphone::GetText(ZXString<char>& sInput1, ZXString<char>& sInput2, ZXString<char>& sInput3, ZXString<char>& sInput4) {
	__sub_00394D10(this, nullptr, sInput1, sInput2, sInput3, sInput4);
}
int32_t CUIAvatarMegaphone::IsCheckWhisper() {
	return __sub_0037F7E0(this, nullptr);
}
CUIAvatarMegaphone& CUIAvatarMegaphone::operator=(const CUIAvatarMegaphone& arg0) {
	return _op_assign_10(this, arg0);
}
CUIAvatarMegaphone& CUIAvatarMegaphone::_op_assign_10(CUIAvatarMegaphone* pThis, const CUIAvatarMegaphone& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIReceiveGift::~CUIReceiveGift() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIReceiveGift::_dtor_0() {
	return __sub_00380B10(this, nullptr);
}
 CUIReceiveGift::CUIReceiveGift(const CUIReceiveGift& arg0) {
	_ctor_1( arg0);
}
void CUIReceiveGift::_ctor_1( const CUIReceiveGift& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIReceiveGift::CUIReceiveGift() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIReceiveGift::_ctor_0() {
	return __sub_00380A30(this, nullptr);
}
void CUIReceiveGift::OnCreate(void* pData) {
	__sub_0038B2F0(this, nullptr, pData);
}
void CUIReceiveGift::Draw(const tagRECT* pRect) {
	__sub_0039AA20(this, nullptr, pRect);
}
void CUIReceiveGift::SetRet(long nRet) {
	__sub_0038B500(this, nullptr, nRet);
}
void CUIReceiveGift::GetResult(ZXString<char>& sMsg) {
	__sub_00381600(this, nullptr, sMsg);
}
void CUIReceiveGift::SetValues(long nItemID, ZXString<char> sSendCharacterName, ZXString<char> sText) {
	__sub_00381620(this, nullptr, nItemID, CreateNakedParam(sSendCharacterName), CreateNakedParam(sText));
}
CUIReceiveGift& CUIReceiveGift::operator=(const CUIReceiveGift& arg0) {
	return _op_assign_8(this, arg0);
}
CUIReceiveGift& CUIReceiveGift::_op_assign_8(CUIReceiveGift* pThis, const CUIReceiveGift& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CSpeakerWorldDlgEx::~CSpeakerWorldDlgEx() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CSpeakerWorldDlgEx::_dtor_0() {
	return __sub_00386DE0(this, nullptr);
}
 CSpeakerWorldDlgEx::CSpeakerWorldDlgEx(const CSpeakerWorldDlgEx& arg0) {
	_ctor_1( arg0);
}
void CSpeakerWorldDlgEx::_ctor_1( const CSpeakerWorldDlgEx& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CSpeakerWorldDlgEx::CSpeakerWorldDlgEx(long nItemID) {
	_ctor_0( nItemID);
}
void CSpeakerWorldDlgEx::_ctor_0( long nItemID) {
	return __sub_00386CC0(this, nullptr, nItemID);
}
void CSpeakerWorldDlgEx::OnCreate(void* pData) {
	__sub_00398450(this, nullptr, pData);
}
void CSpeakerWorldDlgEx::GetResult(ZXString<char>& sResult1, ZXString<char>& sResult2, ZXString<char>& sResult3, int32_t& bCheckWhisper) {
	__sub_00386F70(this, nullptr, sResult1, sResult2, sResult3, bCheckWhisper);
}
void CSpeakerWorldDlgEx::OnButtonClicked(uint32_t arg0) {
	__sub_00398960(this, nullptr, arg0);
}
CSpeakerWorldDlgEx& CSpeakerWorldDlgEx::operator=(const CSpeakerWorldDlgEx& arg0) {
	return _op_assign_6(this, arg0);
}
CSpeakerWorldDlgEx& CSpeakerWorldDlgEx::_op_assign_6(CSpeakerWorldDlgEx* pThis, const CSpeakerWorldDlgEx& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIAntiMacroNotice::~CUIAntiMacroNotice() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIAntiMacroNotice::_dtor_0() {
	return __sub_00395030(this, nullptr);
}
 CUIAntiMacroNotice::CUIAntiMacroNotice(const CUIAntiMacroNotice& arg0) {
	_ctor_1( arg0);
}
void CUIAntiMacroNotice::_ctor_1( const CUIAntiMacroNotice& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIAntiMacroNotice::CUIAntiMacroNotice(long nType, long nAntiMacroType) {
	_ctor_0( nType, nAntiMacroType);
}
void CUIAntiMacroNotice::_ctor_0( long nType, long nAntiMacroType) {
	return __sub_0038E080(this, nullptr, nType, nAntiMacroType);
}
void CUIAntiMacroNotice::OnCreate(void* pData) {
	//TODO __sub_0039B370(this, nullptr, pData);
}
void CUIAntiMacroNotice::Draw(const tagRECT* pRect) {
	__sub_0038E150(this, nullptr, pRect);
}
CUIAntiMacroNotice& CUIAntiMacroNotice::operator=(const CUIAntiMacroNotice& arg0) {
	return _op_assign_5(this, arg0);
}
CUIAntiMacroNotice& CUIAntiMacroNotice::_op_assign_5(CUIAntiMacroNotice* pThis, const CUIAntiMacroNotice& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISendGift::~CUISendGift() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUISendGift::_dtor_0() {
	return __sub_003808D0(this, nullptr);
}
 CUISendGift::CUISendGift(const CUISendGift& arg0) {
	_ctor_1( arg0);
}
void CUISendGift::_ctor_1( const CUISendGift& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISendGift::CUISendGift() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUISendGift::_ctor_0() {
	return __sub_003807E0(this, nullptr);
}
void CUISendGift::OnCreate(void* pData) {
	__sub_0038A330(this, nullptr, pData);
}
void CUISendGift::Draw(const tagRECT* pRect) {
	__sub_0038AD00(this, nullptr, pRect);
}
void CUISendGift::SetRet(long nRet) {
	__sub_0039A4C0(this, nullptr, nRet);
}
void CUISendGift::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0038B100(this, nullptr, wParam, lParam);
}
void CUISendGift::GetResult(ZXString<char>& sReceiver, ZXString<char>& sContent) {
	__sub_0038B240(this, nullptr, sReceiver, sContent);
}
void CUISendGift::SetReceiver(ZXString<char> sReceiver) {
	__sub_00381560(this, nullptr, CreateNakedParam(sReceiver));
}
CUISendGift& CUISendGift::operator=(const CUISendGift& arg0) {
	return _op_assign_9(this, arg0);
}
CUISendGift& CUISendGift::_op_assign_9(CUISendGift* pThis, const CUISendGift& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIChangingCharacterName::~CUIChangingCharacterName() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIChangingCharacterName::_dtor_0() {
	return __sub_00380D90(this, nullptr);
}
 CUIChangingCharacterName::CUIChangingCharacterName(const CUIChangingCharacterName& arg0) {
	_ctor_1( arg0);
}
void CUIChangingCharacterName::_ctor_1( const CUIChangingCharacterName& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIChangingCharacterName::CUIChangingCharacterName(CCashShop* pCashShop) {
	_ctor_0( pCashShop);
}
void CUIChangingCharacterName::_ctor_0( CCashShop* pCashShop) {
	return __sub_00380C70(this, nullptr, pCashShop);
}
void CUIChangingCharacterName::OnCreate(void* pData) {
	__sub_00392BA0(this, nullptr, pData);
}
void CUIChangingCharacterName::OnButtonClicked(uint32_t nId) {
	__sub_00393260(this, nullptr, nId);
}
void CUIChangingCharacterName::Draw(const tagRECT* pRect) {
	__sub_0037FC80(this, nullptr, pRect);
}
void CUIChangingCharacterName::SetRet(long nRet) {
	__sub_00393000(this, nullptr, nRet);
}
void CUIChangingCharacterName::SetNameValues(ZXString<char> sCharacterName) {
	__sub_00381AC0(this, nullptr, CreateNakedParam(sCharacterName));
}
void CUIChangingCharacterName::SetBirthDate(long nBirthDate) {
	__sub_0037F2F0(this, nullptr, nBirthDate);
}
long CUIChangingCharacterName::GetBirthDate() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUIChangingCharacterName::GetCommSN() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIChangingCharacterName& CUIChangingCharacterName::operator=(const CUIChangingCharacterName& arg0) {
	return _op_assign_11(this, arg0);
}
CUIChangingCharacterName& CUIChangingCharacterName::_op_assign_11(CUIChangingCharacterName* pThis, const CUIChangingCharacterName& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUITransferWorldSelectDlg::~CUITransferWorldSelectDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUITransferWorldSelectDlg::_dtor_0() {
	return __sub_00381C70(this, nullptr);
}
 CUITransferWorldSelectDlg::CUITransferWorldSelectDlg(const CUITransferWorldSelectDlg& arg0) {
	_ctor_1( arg0);
}
void CUITransferWorldSelectDlg::_ctor_1( const CUITransferWorldSelectDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUITransferWorldSelectDlg::CUITransferWorldSelectDlg(CCashShop* pCashShop, ZXString<char> sCharacterName) {
	_ctor_0( pCashShop, sCharacterName);
}
void CUITransferWorldSelectDlg::_ctor_0( CCashShop* pCashShop, ZXString<char> sCharacterName) {
	return __sub_00381B40(this, nullptr, pCashShop, CreateNakedParam(sCharacterName));
}
void CUITransferWorldSelectDlg::OnCreate(void* pData) {
	__sub_0039D750(this, nullptr, pData);
}
void CUITransferWorldSelectDlg::Draw(const tagRECT* pRect) {
	__sub_003943D0(this, nullptr, pRect);
}
void CUITransferWorldSelectDlg::OnButtonClicked(uint32_t nId) {
	__sub_0037FB60(this, nullptr, nId);
}
void CUITransferWorldSelectDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0037FB20(this, nullptr, wParam, lParam);
}
void CUITransferWorldSelectDlg::GetResult(long& nTargetWorldID) {
	__sub_0037F440(this, nullptr, nTargetWorldID);
}
void CUITransferWorldSelectDlg::SetResult() {
	__sub_0037F7B0(this, nullptr);
}
CUITransferWorldSelectDlg& CUITransferWorldSelectDlg::operator=(const CUITransferWorldSelectDlg& arg0) {
	return _op_assign_9(this, arg0);
}
CUITransferWorldSelectDlg& CUITransferWorldSelectDlg::_op_assign_9(CUITransferWorldSelectDlg* pThis, const CUITransferWorldSelectDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIWeddingInvitation::~CUIWeddingInvitation() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIWeddingInvitation::_dtor_0() {
	return __sub_00381960(this, nullptr);
}
 CUIWeddingInvitation::CUIWeddingInvitation(const CUIWeddingInvitation& arg0) {
	_ctor_1( arg0);
}
void CUIWeddingInvitation::_ctor_1( const CUIWeddingInvitation& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIWeddingInvitation::CUIWeddingInvitation(ZXString<char> strGroomName, ZXString<char> strBrideName, long nType) {
	_ctor_0( strGroomName, strBrideName, nType);
}
void CUIWeddingInvitation::_ctor_0( ZXString<char> strGroomName, ZXString<char> strBrideName, long nType) {
	return __sub_003817B0(this, nullptr, CreateNakedParam(strGroomName), CreateNakedParam(strBrideName), nType);
}
void CUIWeddingInvitation::OnCreate(void* pData) {
	__sub_00391DC0(this, nullptr, pData);
}
void CUIWeddingInvitation::Draw(const tagRECT* pRect) {
	__sub_00391F00(this, nullptr, pRect);
}
CUIWeddingInvitation& CUIWeddingInvitation::operator=(const CUIWeddingInvitation& arg0) {
	return _op_assign_5(this, arg0);
}
CUIWeddingInvitation& CUIWeddingInvitation::_op_assign_5(CUIWeddingInvitation* pThis, const CUIWeddingInvitation& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISendGifts::~CUISendGifts() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUISendGifts::_dtor_0() {
	return __sub_0039ED70(this, nullptr);
}
 CUISendGifts::CUISendGifts(const CUISendGifts& arg0) {
	_ctor_1( arg0);
}
void CUISendGifts::_ctor_1( const CUISendGifts& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISendGifts::CUISendGifts() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUISendGifts::_ctor_0() {
	return __sub_0039EBC0(this, nullptr);
}
void CUISendGifts::OnCreate(void* pData) {
	__sub_003993D0(this, nullptr, pData);
}
void CUISendGifts::Draw(const tagRECT* pRect) {
	__sub_003892E0(this, nullptr, pRect);
}
void CUISendGifts::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_0039F1A0(this, nullptr, msg, wParam, rx, ry);
}
void CUISendGifts::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0037F1A0(this, nullptr, nId, param1, param2);
}
void CUISendGifts::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_003891A0(this, nullptr, wParam, lParam);
}
void CUISendGifts::OnButtonClicked(uint32_t nId) {
	__sub_0039F700(this, nullptr, nId);
}
void CUISendGifts::SetRet(long nRet) {
	__sub_00399D90(this, nullptr, nRet);
}
void CUISendGifts::SetState(long nState) {
	__sub_0039F030(this, nullptr, nState);
}
void CUISendGifts::SetLayer() {
	__sub_00387BE0(this, nullptr);
}
void CUISendGifts::SetScrollBar() {
	__sub_003806A0(this, nullptr);
}
void CUISendGifts::SetCtrl() {
	__sub_003881A0(this, nullptr);
}
void CUISendGifts::LoadData() {
	__sub_00399700(this, nullptr);
}
unsigned long CUISendGifts::GetMemberIDFromPoint(long rx, long ry, long nScrPos, int32_t bFlag) {
	return __sub_0037F920(this, nullptr, rx, ry, nScrPos, bFlag);
}
ZXString<char> CUISendGifts::GetCharacterNameFromPoint(long rx, long ry, long nScrPos, int32_t bFlag) {
	ZXString<char> ret;
	return *__sub_0038A220(this, nullptr, &ret, rx, ry, nScrPos, bFlag);
}
void CUISendGifts::AddReciever(ZXString<char> sSelect) {
	__sub_00399C40(this, nullptr, CreateNakedParam(sSelect));
}
void CUISendGifts::GetResult(ZArray<ZXString<char> >& saReceiver, ZXString<char>& sContent) {
	__sub_0039A490(this, nullptr, saReceiver, sContent);
}
CUISendGifts& CUISendGifts::operator=(const CUISendGifts& arg0) {
	return _op_assign_19(this, arg0);
}
CUISendGifts& CUISendGifts::_op_assign_19(CUISendGifts* pThis, const CUISendGifts& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISendGifts::FRIEND::~FRIEND() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUISendGifts::FRIEND::_dtor_0() {
	return __sub_003807A0(this, nullptr);
}
 CUISendGifts::FRIEND::FRIEND(const CUISendGifts::FRIEND& arg0) {
	_ctor_1( arg0);
}
void CUISendGifts::FRIEND::_ctor_1( const CUISendGifts::FRIEND& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISendGifts::FRIEND::FRIEND() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUISendGifts::FRIEND::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUISendGifts::FRIEND& CUISendGifts::FRIEND::operator=(const CUISendGifts::FRIEND& arg0) {
	return _op_assign_3(this, arg0);
}
CUISendGifts::FRIEND& CUISendGifts::FRIEND::_op_assign_3(CUISendGifts::FRIEND* pThis, const CUISendGifts::FRIEND& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISendGifts::GUILD::~GUILD() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUISendGifts::GUILD::_dtor_0() {
	return __sub_003807C0(this, nullptr);
}
 CUISendGifts::GUILD::GUILD(const CUISendGifts::GUILD& arg0) {
	_ctor_1( arg0);
}
void CUISendGifts::GUILD::_ctor_1( const CUISendGifts::GUILD& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUISendGifts::GUILD::GUILD() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUISendGifts::GUILD::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUISendGifts::GUILD& CUISendGifts::GUILD::operator=(const CUISendGifts::GUILD& arg0) {
	return _op_assign_3(this, arg0);
}
CUISendGifts::GUILD& CUISendGifts::GUILD::_op_assign_3(CUISendGifts::GUILD* pThis, const CUISendGifts::GUILD& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CSpeakerWorldDlg::~CSpeakerWorldDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CSpeakerWorldDlg::_dtor_0() {
	return __sub_00386B10(this, nullptr);
}
 CSpeakerWorldDlg::CSpeakerWorldDlg(const CSpeakerWorldDlg& arg0) {
	_ctor_1( arg0);
}
void CSpeakerWorldDlg::_ctor_1( const CSpeakerWorldDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CSpeakerWorldDlg::CSpeakerWorldDlg(unsigned long arg0) {
	_ctor_0( arg0);
}
void CSpeakerWorldDlg::_ctor_0( unsigned long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CSpeakerWorldDlg::CSpeakerWorldDlg(int32_t bIsPowerful) {
	_ctor_3( bIsPowerful);
}
void CSpeakerWorldDlg::_ctor_3( int32_t bIsPowerful) {
	return __sub_00386A00(this, nullptr, bIsPowerful);
}
void CSpeakerWorldDlg::OnCreate(void* pData) {
	__sub_00398110(this, nullptr, pData);
}
void CSpeakerWorldDlg::Draw(const tagRECT* pRect) {
	__sub_0037F190(this, nullptr, pRect);
}
void CSpeakerWorldDlg::GetResult(ZXString<char>& sResult, int32_t& bCheckWhisper) {
	__sub_00386C30(this, nullptr, sResult, bCheckWhisper);
}
CSpeakerWorldDlg& CSpeakerWorldDlg::operator=(const CSpeakerWorldDlg& arg0) {
	return _op_assign_7(this, arg0);
}
CSpeakerWorldDlg& CSpeakerWorldDlg::_op_assign_7(CSpeakerWorldDlg* pThis, const CSpeakerWorldDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMatchTableDlg::~CMatchTableDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMatchTableDlg::_dtor_0() {
	return __sub_00380380(this, nullptr);
}
 CMatchTableDlg::CMatchTableDlg(const CMatchTableDlg& arg0) {
	_ctor_1( arg0);
}
void CMatchTableDlg::_ctor_1( const CMatchTableDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMatchTableDlg::CMatchTableDlg(CInPacket& iPacket, CField_Tournament* pField) {
	_ctor_0( iPacket, pField);
}
void CMatchTableDlg::_ctor_0( CInPacket& iPacket, CField_Tournament* pField) {
	return __sub_00380210(this, nullptr, iPacket, pField);
}
void CMatchTableDlg::OnCreate(void* pData) {
	__sub_00384050(this, nullptr, pData);
}
void CMatchTableDlg::Draw(const tagRECT* pRect) {
	__sub_00397D20(this, nullptr, pRect);
}
void CMatchTableDlg::DrawLine() {
	__sub_003856A0(this, nullptr);
}
void CMatchTableDlg::DrawAvatar() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMatchTableDlg::DrawStateA() {
	__sub_00386050(this, nullptr);
}
void CMatchTableDlg::DrawCharacterName() {
	__sub_003862A0(this, nullptr);
}
void CMatchTableDlg::CreateAvatar() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CMatchTableDlg& CMatchTableDlg::operator=(const CMatchTableDlg& arg0) {
	return _op_assign_10(this, arg0);
}
CMatchTableDlg& CMatchTableDlg::_op_assign_10(CMatchTableDlg* pThis, const CMatchTableDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIHope::~CUIHope() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIHope::_dtor_0() {
	return __sub_003823B0(this, nullptr);
}
 CUIHope::CUIHope(const CUIHope& arg0) {
	_ctor_1( arg0);
}
void CUIHope::_ctor_1( const CUIHope& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIHope::CUIHope(long nItemID) {
	_ctor_0( nItemID);
}
void CUIHope::_ctor_0( long nItemID) {
	return __sub_003822E0(this, nullptr, nItemID);
}
void CUIHope::OnCreate(void* pData) {
	__sub_003824F0(this, nullptr, pData);
}
void CUIHope::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0037F0A0(this, nullptr, wParam, lParam);
}
void CUIHope::Draw(const tagRECT* pRect) {
	__sub_00382810(this, nullptr, pRect);
}
int32_t CUIHope::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_0037F0D0(this, nullptr, rx, ry, ppCtrl);
}
void CUIHope::GetText(ZXString<char>& sInput1, ZXString<char>& sInput2, ZXString<char>& sInput3) {
	__sub_00382A10(this, nullptr, sInput1, sInput2, sInput3);
}
CUIHope& CUIHope::operator=(const CUIHope& arg0) {
	return _op_assign_8(this, arg0);
}
CUIHope& CUIHope::_op_assign_8(CUIHope* pThis, const CUIHope& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIMapleTV::~CUIMapleTV() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMapleTV::_dtor_0() {
	return __sub_00381100(this, nullptr);
}
 CUIMapleTV::CUIMapleTV(const CUIMapleTV& arg0) {
	_ctor_1( arg0);
}
void CUIMapleTV::_ctor_1( const CUIMapleTV& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIMapleTV::CUIMapleTV(long nItemID, long nTVType, int32_t bWhisper) {
	_ctor_0( nItemID, nTVType, bWhisper);
}
void CUIMapleTV::_ctor_0( long nItemID, long nTVType, int32_t bWhisper) {
	return __sub_00380FC0(this, nullptr, nItemID, nTVType, bWhisper);
}
void CUIMapleTV::OnCreate(void* pData) {
	__sub_0039DBF0(this, nullptr, pData);
}
void CUIMapleTV::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0037F450(this, nullptr, wParam, lParam);
}
void CUIMapleTV::Draw(const tagRECT* pRect) {
	__sub_003945E0(this, nullptr, pRect);
}
void CUIMapleTV::OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2) {
	__sub_0037FCB0(this, nullptr, uId, param1, param2);
}
int32_t CUIMapleTV::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_0037F480(this, nullptr, rx, ry, ppCtrl);
}
void CUIMapleTV::GetText(ZXString<char>& sReceiver, ZXString<char>& sInput1, ZXString<char>& sInput2, ZXString<char>& sInput3, ZXString<char>& sInput4, ZXString<char>& sInput5) {
	__sub_003949C0(this, nullptr, sReceiver, sInput1, sInput2, sInput3, sInput4, sInput5);
}
long CUIMapleTV::GetDialogType() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUIMapleTV::IsCheckWhisper() {
	return __sub_0037F7C0(this, nullptr);
}
void CUIMapleTV::setDialogType(long nDialogType) {
	__sub_0037F4D0(this, nullptr, nDialogType);
}
CUIMapleTV& CUIMapleTV::operator=(const CUIMapleTV& arg0) {
	return _op_assign_12(this, arg0);
}
CUIMapleTV& CUIMapleTV::_op_assign_12(CUIMapleTV* pThis, const CUIMapleTV& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUITransferWorldLicenseNotice::~CUITransferWorldLicenseNotice() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUITransferWorldLicenseNotice::_dtor_0() {
	return __sub_0039F600(this, nullptr);
}
 CUITransferWorldLicenseNotice::CUITransferWorldLicenseNotice(const CUITransferWorldLicenseNotice& arg0) {
	_ctor_1( arg0);
}
void CUITransferWorldLicenseNotice::_ctor_1( const CUITransferWorldLicenseNotice& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUITransferWorldLicenseNotice::CUITransferWorldLicenseNotice(void* pData) {
	_ctor_0( pData);
}
void CUITransferWorldLicenseNotice::_ctor_0( void* pData) {
	return __sub_0039F530(this, nullptr, pData);
}
void CUITransferWorldLicenseNotice::OnCreate(void* pData) {
	__sub_0039CFD0(this, nullptr, pData);
}
void CUITransferWorldLicenseNotice::OnButtonClicked(uint32_t nId) {
	__sub_00393FC0(this, nullptr, nId);
}
void CUITransferWorldLicenseNotice::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0037F420(this, nullptr, wParam, lParam);
}
int32_t CUITransferWorldLicenseNotice::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_0037F3E0(this, nullptr, rx, ry, ppCtrl);
}
void CUITransferWorldLicenseNotice::Draw(const tagRECT* pRect) {
	__sub_00394130(this, nullptr, pRect);
}
void CUITransferWorldLicenseNotice::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0037F730(this, nullptr, nId, param1, param2);
}
void CUITransferWorldLicenseNotice::SetRet(long nRet) {
	__sub_0037F3A0(this, nullptr, nRet);
}
void CUITransferWorldLicenseNotice::SetBirthDate(long nBirthDate) {
	__sub_0037F3D0(this, nullptr, nBirthDate);
}
long CUITransferWorldLicenseNotice::GetBirthDate() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUITransferWorldLicenseNotice::GetCommSN() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUITransferWorldLicenseNotice::LoadFont() {
	__sub_00393BC0(this, nullptr);
}
CUITransferWorldLicenseNotice& CUITransferWorldLicenseNotice::operator=(const CUITransferWorldLicenseNotice& arg0) {
	return _op_assign_14(this, arg0);
}
CUITransferWorldLicenseNotice& CUITransferWorldLicenseNotice::_op_assign_14(CUITransferWorldLicenseNotice* pThis, const CUITransferWorldLicenseNotice& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

