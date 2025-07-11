// FadeWnd.cpp
#include "FadeWnd.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

#include "MemoListDlg/MemoListDlg.hpp"
#include "Util/Util.hpp"

static ZRef<CMemoListDlg> FAKE_ZRef_CMemoListDlg{};

#include "FadeWnd_regen.ipp"

CFadeWnd::~CFadeWnd() {
    //_dtor_0();
}

void CFadeWnd::_dtor_0() {
    this->~CFadeWnd();
    //return __sub_00123AA0(this, nullptr);
}

CFadeWnd::CFadeWnd(const CFadeWnd &arg0) {
    _ctor_1(arg0);
}

void CFadeWnd::_ctor_1(const CFadeWnd &arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFadeWnd::CFadeWnd() {
    m_bOK = true;
    m_nType = -1;
}

void CFadeWnd::_ctor_0() {
    new(this) CFadeWnd();
    //return __sub_00123A20(this, nullptr);
}

void CFadeWnd::SetOption(long a0, long a, long a1, tagPOINT pt0, tagPOINT pt, tagPOINT pt1, long t0, long t, long t1) {
    m_a0 = a0;
    m_a = a;
    m_a1 = a1;
    m_pt0 = pt0;
    m_pt = pt;
    m_pt1 = pt1;
    m_t0 = t0;
    m_t = t;
    m_t1 = t1;
    //__sub_00122C40(this, nullptr, a0, a, a1, CreateNakedParam(pt0), CreateNakedParam(pt), CreateNakedParam(pt1), t0, t, t1);
}

void CFadeWnd::CreateFadeWnd(long nWidth, long nHeight, const wchar_t *sUOL, long nZ, int32_t bScreenCoord, void *pData,
                             int32_t bSetFocus, CWnd::UIOrigin org) {
    if (sUOL) {
        SetBackgrnd(
                sUOL,
                0, 0, 0, 0, 0);
    }

    CreateWnd(m_pt0.x, m_pt0.y, nWidth, nHeight, nZ, bScreenCoord, pData, bSetFocus, org);
    auto alpha = GetLayer()->Getalpha();
    alpha->RelMove(m_a0, 0, vtMissing, vtMissing);
    ResetTime();
    //__sub_00123F90(this, nullptr, nWidth, nHeight, sUOL, nZ, bScreenCoord, pData, bSetFocus, org);
}

void CFadeWnd::ResetTime() {
    m_nPhase = 0;
    m_tTimeOver = get_update_time() + m_t;
    //__sub_00122CC0(this, nullptr);
}

void CFadeWnd::Close(int32_t bOK) {
    m_bClose = true;
    m_bOK = bOK;
    //__sub_00122CE0(this, nullptr, bOK);
}

int32_t CFadeWnd::IsShowingUp() const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CFadeWnd::Update() {
    auto ctx = CWvsContext::GetInstance();
    auto dirMode = ctx->GetDirectionMode();
    auto t = get_update_time();
    switch (m_nPhase) {
        case FW_START:
            if (!dirMode) {
                OnPreFadeIn();
            }
            break;
        case FW_PRE_FADEIN:
            if (t - m_tPhase > 0) {
                m_nPhase = FW_FADEIN;
            }
            break;
        case FW_FADEIN:
            if (dirMode) {
                Fade(true);
                ResetTime();
            } else if (m_bClose || (m_t && (t - m_tTimeOver) > 0)) {
                if (!m_bOK) {
                    SendCloseMessage();
                }
                Fade(true);
            }
            break;
        case FW_GENERAL:
            if (t - m_tPhase > 0) {
                m_nPhase = FW_FADEOUT;
            }
            break;
        case FW_FADEOUT:
            OnPostFadeOut();
            break;
        case FW_POST_FADEOUT:
            SetRet(1);
            Delete();
            return;
        default:
            UNIMPLEMENTED;
    }

    CWnd::Update();
    //__sub_001236C0(this, nullptr);
}

int32_t CFadeWnd::HitTest(long rx, long ry, CCtrlWnd **ppCtrl) {
    const auto ht = CWnd::HitTest(rx, ry, ppCtrl);
    if (ht && (!ppCtrl || *ppCtrl == nullptr)) {
        return 2;
    }
    return ht;
    //return __sub_00122D00(this, nullptr, rx, ry, ppCtrl);
}

void CFadeWnd::Delete() {
}

void CFadeWnd::OnPreFadeIn() {
    Fade(0);
}

void CFadeWnd::OnPostFadeOut() {
    m_nPhase = FW_POST_FADEOUT;
}

void CFadeWnd::SendCloseMessage() {
    __sub_00124180(this, nullptr);
}

unsigned long CFadeWnd::GetInviterID() {
    return 0;
    //return __sub_00123A80(this, nullptr);
}

void CFadeWnd::Fade(int32_t bFadeOut) {
    __sub_001230A0(this, nullptr, bFadeOut);
}

CFadeWnd &CFadeWnd::operator=(const CFadeWnd &arg0) {
    return _op_assign_16(this, arg0);
}

CFadeWnd &CFadeWnd::_op_assign_16(CFadeWnd *pThis, const CFadeWnd &arg0) {
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIFadeYesNo::~CUIFadeYesNo() {
    --ms_dwAlarmCounter; //TODO atomics
    //_dtor_0();
}

void CUIFadeYesNo::_dtor_0() const
{
    this->~CUIFadeYesNo();
}

CUIFadeYesNo::CUIFadeYesNo(const CUIFadeYesNo &arg0) {
    _ctor_1(arg0);
}

void CUIFadeYesNo::_ctor_1(const CUIFadeYesNo &arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIFadeYesNo::CUIFadeYesNo() {
    ++ms_dwAlarmCounter; //TODO atomics
}

void CUIFadeYesNo::_ctor_0() {
    new(this) CUIFadeYesNo();
    //return __sub_00123B20(this, nullptr);
}

void CUIFadeYesNo::OnCreate(void *pData) {
    __sub_001244C0(this, nullptr, pData);
}

void CUIFadeYesNo::Draw(const tagRECT *pRect) {
    __sub_001248B0(this, nullptr, pRect);
}

void CUIFadeYesNo::OnButtonClicked(uint32_t nId) {
    __sub_00129C60(this, nullptr, nId);
}

void CUIFadeYesNo::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
    //__sub_00123900(this, nullptr, msg, wParam, rx, ry);
    auto ctx = CWvsContext::GetInstance();
    auto dirMode = ctx->GetDirectionMode();
    if (dirMode || msg != 514)
        return;


    ZRef pWnd(this, true);
    if (m_nType == 7)
    {
        if (ctx->IsTopFadeWnd(pWnd))
        {
            if (ctx->GetQuestState(m_usQuestID) == 1)
            {
                ctx->ShowQuestInfoDetail(true, m_usQuestID);
            }
            Close(true);
        }

    }

    ctx->SetTopFadeWnd(pWnd);
}

void CUIFadeYesNo::Delete() {
    const auto ctx = CWvsContext::GetInstance();
    if (m_nType == NewYearCardArrived) {
        ctx->DeleteFadeWnd(
                m_nType,
                0,
                0,
                m_sSender,
                m_dwSN
        );
        return;
    }

    const ZRef pWnd(this, true);
    ctx->DeleteFadeWnd(pWnd);
    //__sub_00123DB0(this, nullptr);
}

int32_t CUIFadeYesNo::OnSetFocus(int32_t bFocus) {
    return 1;
}

void CUIFadeYesNo::OnKey(uint32_t wParam, int32_t lParam) {
    if(CWvsContext::GetInstance()->GetDirectionMode()) {
        return;
    }

    CWndMan::GetInstance()->SetFocus(nullptr);
    get_stage()->OnKey(wParam, lParam);


    //__sub_00122D80(this, nullptr, wParam, lParam);
}

void CUIFadeYesNo::SendCloseMessage() {
    __sub_00126B30(this, nullptr);
}

void CUIFadeYesNo::CreateMSMInvite(ZXString<char> sInviter, long nChannelID, unsigned long dwSN) {
    __sub_00126C40(this, nullptr, CreateNakedParam(sInviter), nChannelID, dwSN);
}

void CUIFadeYesNo::CreateFriendReg(ZXString<char> sFriend, long nLevel, long nJobCode, unsigned long dwFriendID) {
    __sub_00126F00(this, nullptr, CreateNakedParam(sFriend), nLevel, nJobCode, dwFriendID);
}

void CUIFadeYesNo::CreatePartyInvite(ZXString<char> sInviter, long nLevel, long nJobCode, unsigned long dwInviterID,
                                     int32_t bPartyOpt) {
    __sub_00127BA0(this, nullptr, CreateNakedParam(sInviter), nLevel, nJobCode, dwInviterID, bPartyOpt);
}

void
CUIFadeYesNo::CreatePartyApply(ZXString<char> sApplierName, long nLevel, long nJobCode, unsigned long dwApplierID) {
    __sub_00127E80(this, nullptr, CreateNakedParam(sApplierName), nLevel, nJobCode, dwApplierID);
}

void CUIFadeYesNo::CreateExpedtionInvite(ZXString<char> sInviter, long nLevel, long nJobCode, long nExpQuestID) {
    __sub_001278D0(this, nullptr, CreateNakedParam(sInviter), nLevel, nJobCode, nExpQuestID);
}

void
CUIFadeYesNo::CreateExpedtionApply(ZXString<char> sApplierName, long nLevel, long nJobCode, unsigned long dwApplierID) {
    __sub_00127600(this, nullptr, CreateNakedParam(sApplierName), nLevel, nJobCode, dwApplierID);
}

void CUIFadeYesNo::CreateTradeInvite(ZXString<char> sInviter, unsigned long dwSN, int32_t bCash) {
    __sub_001271D0(this, nullptr, CreateNakedParam(sInviter), dwSN, bCash);
}

void CUIFadeYesNo::CreateGuildInvite(ZXString<char> sInviter, long nLevel, long nJobCode, unsigned long dwInviterID,
                                     int32_t bGuildOpt) {
    __sub_00128480(this, nullptr, CreateNakedParam(sInviter), nLevel, nJobCode, dwInviterID, bGuildOpt);
}

void CUIFadeYesNo::CreateAllianceInvite(ZXString<char> sInviter, unsigned long dwInviterID) {
    __sub_00128750(this, nullptr, CreateNakedParam(sInviter), dwInviterID);
}

void CUIFadeYesNo::CreateQuestClear(uint16_t usQuestID) {
    __sub_00128150(this, nullptr, usQuestID);
}

void CUIFadeYesNo::CreateUserAlarm(ZXString<char> sUser, long nType) {
    __sub_00128A10(this, nullptr, CreateNakedParam(sUser), nType);
}

void CUIFadeYesNo::CreateNewMemo() {
    __sub_001274E0(this, nullptr);
}

void CUIFadeYesNo::CreateParcelAlarm(ZXString<char> sSender, int32_t bQuickDelivery) {
    __sub_00128D50(this, nullptr, CreateNakedParam(sSender), bQuickDelivery);
}

void CUIFadeYesNo::CreateNewYearCardArrived(ZXString<char> sSender, unsigned long dwSN) {
    __sub_00129020(this, nullptr, CreateNakedParam(sSender), dwSN);
}

void CUIFadeYesNo::CreatePartyQuestAlarm(uint16_t usQuestID) {
    __sub_00129840(this, nullptr, usQuestID);
}

void CUIFadeYesNo::CreateFamilyInvite(ZXString<char> sInviter, long nLevel, long nJobCode, unsigned long dwInviterID) {
    __sub_001292E0(this, nullptr, CreateNakedParam(sInviter), nLevel, nJobCode, dwInviterID);
}

void CUIFadeYesNo::CreateFollowRequest(ZXString<char> sRequester, long nJobCode, long nLevel) {
    __sub_001295B0(this, nullptr, CreateNakedParam(sRequester), nJobCode, nLevel);
}

long CUIFadeYesNo::GetType() const
{
    return m_nType;
}

unsigned long CUIFadeYesNo::GetFriendID() {
    return m_dwFriendID;
}

uint16_t CUIFadeYesNo::GetQuestID() const {
    return m_usQuestID;
}

unsigned long CUIFadeYesNo::GetRelatedValue(long nType) const {
    if (nType == PartyInvite) {
        return m_dwInviterID;
    }

    if (nType == PartyApply || nType == ExpeditionApply) {
        return m_dwApplierID;
    }

    return 0;
    //return __sub_00122D40(this, nullptr, nType);
}

ZXString<char> CUIFadeYesNo::GetRelatedName(long nType) {

    if (nType == ExpeditionInvite) {
        return this->m_sInviter;
    }
    return {};
}

unsigned long CUIFadeYesNo::GetNewYearCardSN() const
{
    return m_dwSN;
    //return __sub_00123BA0(this, nullptr);
}

void CUIFadeYesNo::MoveWndPosition() {
    m_pt.y += 5;
    m_pt1.y += 5;
    MoveWnd(m_pt0.x, m_pt0.y);
    //__sub_00123510(this, nullptr);
}

unsigned long CUIFadeYesNo::GetInviterID() {
    return m_dwInviterID;
    //return __sub_00123BA0(this, nullptr);
}

void CUIFadeYesNo::TryShowMemoListDlg(long rx, long ry) {
    __sub_00129B10(this, nullptr, rx, ry);
}

CUIFadeYesNo &CUIFadeYesNo::operator=(const CUIFadeYesNo &arg0) {
    return _op_assign_37(this, arg0);
}

CUIFadeYesNo &CUIFadeYesNo::_op_assign_37(CUIFadeYesNo *pThis, const CUIFadeYesNo &arg0) {
    // TODO: No module found for method
    UNIMPLEMENTED;
}
