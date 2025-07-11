// UIStatusBar.cpp
#include "UIStatusBar.hpp"

#include <ExpeditionIntermediary/ExpeditionIntermediary.hpp>
#include <UIScreenMsg/UIScreenMsg.hpp>

#include "MemoListDlg/MemoListDlg.hpp"
#include "UtilDlg/UtilDlg.hpp"
#include "UIUserList/UIUserList.hpp"
#include "WvsExtra.h"
#include "Stage/Stage.hpp"


CUIStatusBar* adj4(CUIStatusBar* self)
{
    char* v1 = (char*)self;
    v1 = &v1[4];
    return (CUIStatusBar*)v1;
}


static ZRef<CStage> FAKE_ZREF_STAGE{};

static ZArray<ZRef<CUIStatusBar::CChatLog>> FAKE_ZArray_ZRef_CUIStatusBar_CChatLog{};
static ZRef<CUIStatusBar::CChatLog> FAKE_ZRef_CUIStatusBar_CChatLog{};
static ZRef<CMemoListDlg> FAKE_ZRef_CMemoListDlg{};
static ZRef<CUtilDlg> FAKE_ZRef_CUtilDlg{};

static ExtractCharacterNameHelper<ZXString16> FAKE_ExtractCharacterNameHelper_ZXString_unsignedshort{};

static ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::NameDescComp>
FAKE_ZSortHelper_CTabGuildAlliance_GUILDITEM_NameDescComp{};

#include "UIStatusBar_regen.ipp"

ZArray<ZRef<CUIStatusBar::CChatLog>> CUIStatusBar::m_aChatLog;

CBitmapStrNumber::~CBitmapStrNumber()
{
}

void CBitmapStrNumber::_dtor_0()
{
    return __sub_004717B0(this, nullptr);
}

CBitmapStrNumber::CBitmapStrNumber(const CBitmapStrNumber& arg0)
{
    _ctor_1(arg0);
}

void CBitmapStrNumber::_ctor_1(const CBitmapStrNumber& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CBitmapStrNumber::CBitmapStrNumber(_x_com_ptr<IWzProperty> pProp, long nSpace, const char* sEtcChars)
{
    //_ctor_0(pProp, nSpace, sEtcChars);

    m_strEtcChars = sEtcChars;
    m_nSpace = nSpace;

    for (auto i = 0; i < 10; ++i)
    {
        wchar_t buf[32]{};
        _itow_s(i, buf, 10);

        auto num = pProp->GetItemT<IWzCanvas>(buf);
        m_apCanvasDigit[i] = _x_com_ptr<IWzCanvas>(num);
    }

    for (char c : m_strEtcChars.GetSpan())
    {
        wchar_t buf[2]{};
        buf[0] = c;
        auto num = pProp->GetItemT<IWzCanvas>(buf);
        m_apCanvasEtc.Insert(_x_com_ptr<IWzCanvas>(num));
    }
}

void CBitmapStrNumber::_ctor_0(_x_com_ptr<IWzProperty> pProp, long nSpace, const char* sEtcChars)
{
    return __sub_00476470(this, nullptr, CreateNakedParam(pProp), nSpace, sEtcChars);
}

void CBitmapStrNumber::Draw(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, const char* sNumber,
                            CBitmapStrNumber::Align align)
{
    __sub_004713C0(this, nullptr, CreateNakedParam(pCanvas), x, y, sNumber, align);
}

_x_com_ptr<IWzCanvas> CBitmapStrNumber::_GetDigit(char cDigit)
{
    char c = cDigit - '0';
    if (c < kNumber_Count && c >= 0)
    {
        return m_apCanvasDigit[c];
    }

    auto etcIx = m_strEtcChars.Find(cDigit, 0);
    if (etcIx != SIZE_MAX)
    {
        return m_apCanvasEtc[etcIx];
    }

    return _x_com_ptr<IWzCanvas>();
    //return __sub_0046D350(this, nullptr, cDigit);
}

CBitmapStrNumber& CBitmapStrNumber::operator=(const CBitmapStrNumber& arg0) = default;

CBitmapStrNumber& CBitmapStrNumber::_op_assign_5(CBitmapStrNumber* pThis, const CBitmapStrNumber& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::~CUIStatusBar()
{
    ms_pInstance = nullptr;
}

void CUIStatusBar::_dtor_0()
{
    this->~CUIStatusBar();
}

CUIStatusBar::CUIStatusBar(const CUIStatusBar& arg0)
{
    _ctor_1(arg0);
}

void CUIStatusBar::_ctor_1(const CUIStatusBar& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CUIStatusBar()
{
    ms_pInstance = this;
    m_nChatTarget = 8;
    m_nCurPtY = -1;

    auto gauge = get_rm()->GetObjectT<IWzProperty>(L"UI/StatusBar2.img/mainBar/gauge/number");
    _x_com_ptr<IWzProperty> pGauge(gauge);
    m_GougeNo = CBitmapStrNumber(pGauge, 0, "[]\\%.");

    m_nPastHP = -1;
    m_nPastMP = -1;
    m_tLastUpdateSkillCooltime = timeGetTime();
    m_uiItemToolTip.IgnoreWeddingInfo();
    CreateWnd(0, -578, 1024, 578, 0xC00615D0, true, nullptr, true, Origin_LB);
}


void CUIStatusBar::_ctor_0()
{
    new(this) CUIStatusBar();
}

void CUIStatusBar::OnCreate(void* pCanvas)
{
    /*m_lm.Init(this, 512, 577);
    m_nScrWidth = CCtrlScrollBar::GetScrollBarSize(1, 8);
    auto ftBlack = get_basic_font(FONT_BASIC_BLACK);*/


    __sub_0047B5F0(this, nullptr, pCanvas);
}

int32_t CUIStatusBar::OnSetFocus(int32_t bFocus)
{
    return 0;
}

void CUIStatusBar::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    //__sub_004803F0(this, nullptr, msg, wParam, rx, ry);
    switch (msg)
    {
    case 0x201u:
        m_uiToolTip.ClearToolTip();
        TryBeginDragFuncKeyMappedIcon(rx, ry);
        TryBeginChangeChatWnd(rx, ry);
        if (!TryBeginWhisper(rx, ry))
            TryBeginShowItemInfo(rx, ry);
        break;
    case 0x202u:
        if (this->m_nCurPtY)
            CWndMan::GetInstance()->ReleaseCaptureWnd(this);
        this->m_nCurPtY = 0;
        break;
    case 0x203u:
        TryShowMemoListDlg(rx, ry);
        TryUseTempExp(rx, ry);
        break;
    default:
        break;
    }
}

int32_t CUIStatusBar::OnMouseMove(long rx, long ry)
{
    return __sub_0047A7B0(this, nullptr, rx, ry);
}

void CUIStatusBar::OnKey(uint32_t wParam, int32_t lParam)
{
    auto wndMan = CWndMan::GetInstance();
    if (wndMan->GetFocus() != m_pEditChatInput.op_arrow() || lParam < 0)
        return;
    if (wParam == 9)
    {
        switch (m_nChatTarget)
        {
        case 0u:
            CUIStatusBar::SetChatTarget(6);
            m_pCBChatTarget->InvalidateRect();
            break;
        case 1u:
            CUIStatusBar::SetChatTarget(2);
            m_pCBChatTarget->InvalidateRect();
            break;
        case 2u:
            CUIStatusBar::SetChatTarget(3);
            m_pCBChatTarget->InvalidateRect();
            break;
        case 3u:
            CUIStatusBar::SetChatTarget(4);
            m_pCBChatTarget->InvalidateRect();
            break;
        case 4u:
            CUIStatusBar::SetChatTarget(5);
            m_pCBChatTarget->InvalidateRect();
            break;
        case 5u:
            if (!GetWhisperTarget().IsEmpty())
            {
                SetWhisperTarget(GetWhisperTarget(), false);
                StartChat(nullptr);
                m_pCBChatTarget->InvalidateRect();
            }
            this->m_ptChatWnd.y = 1;
            CUIStatusBar::SetChatTarget(7);
            m_pCBChatTarget->InvalidateRect();
            break;
        case 6u:
            CUIStatusBar::SetChatTarget(1);
            m_pCBChatTarget->InvalidateRect();
            break;
        case 7u:
            CUIStatusBar::SetChatTarget(8);
            m_pCBChatTarget->InvalidateRect();
            break;
        case 8u:
            CUIStatusBar::SetChatTarget(0);
            m_pCBChatTarget->InvalidateRect();
            break;
        default:
            m_pCBChatTarget->InvalidateRect();
            break;
        }
        return;
    }

    if (wParam != VK_RETURN) // VK_
    {
        if (wParam == VK_ESCAPE)
        {
            m_pEditChatInput->SetText(nullptr);
        }
        else
        {
            auto txt = m_pEditChatInput->GetText();
            if (txt.IsEmpty() || wParam != VK_LEFT && wParam != VK_RIGHT)
            {
            LABEL_75:
                if (wParam == VK_UP)
                {
                    auto old = m_chatHelper.HistoryUp();
                    if (!old.IsEmpty())
                        m_pEditChatInput->SetText(old.c_str());
                }
                else
                {
                    if (wParam != VK_DOWN)
                        return;
                    auto old = m_chatHelper.HistoryDown();
                    if (!old.IsEmpty())
                        m_pEditChatInput->SetText(old.c_str());
                }

                return;
            }
        }
        CUIStatusBar::EndChat();
        return;
    }


    auto ctx = CWvsContext::GetInstance();
    auto txt = m_pEditChatInput->GetText();
    EndChat();
    auto len = txt.GetLength();
    auto buf = txt.GetBuffer(1024, 1);
    buf[len] = 0; //TODO fix this
    while (*buf)
    {
        if (IsDBCSLeadByte(*buf))
        {
            buf[1] = ' ';
            *buf = ' ';
            buf += 2;
        }
        else
        {
            if (*buf < ' ' || *buf == 127)
                *buf = ' ';
            ++buf;
        }
    }
    txt.ReleaseBuffer();

    txt = txt.TrimRight();
    txt = txt.TrimLeft();

    auto& sp = StringPool::GetInstance();

    if (!txt.IsEmpty())
    {
        auto isCmd = txt[0] == '/';
        if (!isCmd && m_sWhisperTarget.IsEmpty() && m_nChatTarget == 7)
        {
            auto s = sp.GetString(0xAFD);
            ChatLogAdd(s.c_str(), 12, -1, 0, {});
        }

        StartChat(nullptr);
        m_pEditChatInput->SetText(nullptr);
        if (auto field = get_field())
        {
            if (isCmd)
            {
                field->SendChatMsgSlash(txt);
                m_chatHelper.HistoryAddforCommand(txt);
            }
            else if (m_chatHelper.TryChat(txt))
            {
                if (m_sWhisperTarget.IsEmpty())
                {
                    if (auto localUser = CUserLocal::GetInstance())
                    {
                        if (!ctx->IsPersonalShopOpen() && (localUser->GetMoveAction() & 0xFFFFFFFE) != 0x12)
                        {
                            //TODO(game) CPet::ParseCommand(m_Data->m_apPet.a[i].p, v27[0].p);
                        }


                        switch (m_nChatTarget)
                        {
                        case 0u:
                        case 1u:
                        case 2u:
                        case 3u:
                        case 4u:
                        case 5u:
                            SendGroupMessage(m_nChatWndHeight, txt);
                            break;
                        case 6u:
                            CUIStatusBar::SendCoupleMessage(txt);
                            break;
                        case 8u:
                            field->SendChatMsg(txt, 0);
                            if (m_dwChatFilterFlag)
                            {
                                auto msg = sp.GetString(6445);
                                CHATLOG_ADD(msg, 0xc);
                            }
                            break;
                        default:
                            break;
                        }

                        if (auto key = GetEmotionKey(txt))
                            ctx->SendEmotionChange(key - 111, false, -1);
                    }
                }
            }
            else
            {
                field->SendChatMsgWhisper(txt, m_sWhisperTarget);
            }
        }
    }
}

void CUIStatusBar::OnMouseEnter(int32_t bEnter)
{
    CWnd::OnMouseEnter(bEnter);
    m_uiToolTip.ClearToolTip();
}

void CUIStatusBar::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    if (nId == 1010)
    {
        if (param1 >= 0x12C && param1 <= 0x130)
        {
            ChatLogDraw();
            this->m_dwLastScrolled = timeGetTime();
        }
        goto LABEL_5;
    }
    if (nId == 1012)
    {
        if (param1 == 600)
        {
            SetChatTarget(param2);
            return;
        }
        goto LABEL_5;
    }
    if (nId - 2000 > 3)
    {
    LABEL_5:
        if (param1 == 100)
            this->OnButtonClicked(nId);
        return;
    }
    if (param1 == 100)
    {
        SetButtonBlink(nId - 2000, 0);
        this->OnButtonClicked(nId);
    }
}

void CUIStatusBar::OnButtonClicked(uint32_t nId)
{
    //__sub_00480540(this, nullptr, nId);

    auto ctx = CWvsContext::GetInstance();
    auto localUser = CUserLocal::GetInstance();
    if (localUser && localUser->IsKeyDownSkillUsing())
        localUser->OnKeyDownSkillEnd();

    if (nId > 0x7D0)
    {
        switch (nId)
        {
        case 0x7D1u:
            ctx->UI_Toggle(0, -1);
            SetButtonBlink(1, 0);
            break;
        case 0x7D2u:
            ctx->UI_Toggle(2, -1);
            SetButtonBlink(2, 0);
            break;
        case 0x7D3u:
            ctx->UI_Toggle(3, -1);
            SetButtonBlink(3, 0);
            break;
        case 0x7D4u:
            if (TSingleton<CUIUserInfo>::ms_pInstance)
                ctx->UI_Close(10);
            else
                ctx->SendCharacterInfoRequest(
                    ctx->GetCharacterId(),
                    1,
                    0);
            break;
        case 0x7D5u:
            ctx->UI_Toggle(6, -1);
            break;
        default:
            return;
        }
    }
    else if (nId == 2000)
    {
        ctx->UI_Toggle(1, -1);
        SetButtonBlink(0, 0);
    }
    else
    {
        switch (nId)
        {
        case 0x3E8u:
            ctx->SendMigrateToShopRequest(0);
            break;
        case 0x3E9u:
            ctx->SendMigrateToITCRequest();
            break;
        case 0x3EAu:
            ctx->UI_ShortCut();
            break;
        case 0x3EBu:
            SetChatType(1);
            break;
        case 0x3ECu:
            SetChatType(3);
            break;
        case 0x3EDu:
            ctx->UI_Toggle(5, -1);
            break;
        case 0x3EEu:
            ToggleQuickSlot();
            break;
        case 0x3EFu:
            ctx->UI_Menu();
            break;
        case 0x3F0u:
            SetChatTarget(7);
            break;
        case 0x3F1u:
            SendClaim();
            break;
        case 0x3F5u:
            ctx->ChannelShift();
            break;
        case 0x3F6u:
            m_dwChatFilterFlag = 0;
            _RefreshChatLog();
            _SetFilterButton();
            break;
        case 0x3F7u:
            m_dwChatFilterFlag ^= 8u;
            _RefreshChatLog();
            _SetFilterButton();
            break;
        case 0x3F8u:
            m_dwChatFilterFlag ^= 4u;
            _RefreshChatLog();
            _SetFilterButton();
            break;
        case 0x3F9u:
            m_dwChatFilterFlag ^= 0x10u;
            _RefreshChatLog();
            _SetFilterButton();
            break;
        case 0x3FAu:
            m_dwChatFilterFlag ^= 0x20u;
            _RefreshChatLog();
            _SetFilterButton();
            break;
        case 0x3FBu:
            m_dwChatFilterFlag ^= 0x4000000u;
            _RefreshChatLog();
            _SetFilterButton();
            break;
        default:
            return;
        }
    }
}

int32_t CUIStatusBar::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    //return __sub_0046D500(this, nullptr, rx, ry, ppCtrl);
    auto wndMan = CWndMan::GetInstance();
    auto isCapture = wndMan->GetCapture() == this;
    auto result = CWnd::HitTest(rx, ry, isCapture ? nullptr : ppCtrl);
    if (result != 2)
        return 2;

    auto v9 = 506;
    if (this->m_pCBChatTarget && m_pCBChatTarget->IsActivateComboBoxSelectWnd())
        v9 = -16 * m_pCBChatTarget->GetItemCount();
    auto v11 = 489 - m_nChatWndHeight;
    if (v9 < 489 - m_nChatWndHeight)
        v11 = v9;

    if ((rx >= 577 || this->m_nChatWndType != 1 || ry >= 506)
        && (rx >= 276 || ry >= v11 || this->m_bDragChatWnd)
        && ((rx - 277) > 0x12B || ry >= 506 - m_nChatWndHeight || this->m_bDragChatWnd)
        && ((rx <= m_QuickSlot.GetInitX())
            || (!this->m_QuickSlot.IsEnabled() || ry >= 439)
            && (rx <= m_QuickSlot.GetInitX() || m_QuickSlot.IsEnabled() || ry >= 506))
        && (rx <= 577 || rx >= m_QuickSlot.GetInitX() || ry >= 506))
    {
        return result;
    }
    else
    {
        return 0;
    }
}

void CUIStatusBar::Draw(const tagRECT* pRect)
{
    __sub_00476CD0(this, nullptr, pRect);
}

void CUIStatusBar::Update()
{
    static int nCounter_1 = 0;
    auto v2 = 0;
    if (!this->m_uiToolTip.m_nWidth || (++nCounter_1, !(nCounter_1 % 32)))
    {
        tagPOINT pt{};
        TSingleton<CWndMan>::ms_pInstance->GetCursorPos(&pt, this->m_origin);
        auto t = GetAbsTop();
        auto l = GetAbsLeft();
        ProcessToolTip(pt.x - l, pt.y - t);
    }
    if (this->m_dwFloatNotice && timeGetTime() > this->m_dwFloatNotice)
    {
        this->m_floatNotice.DeleteFloatNotice();
        this->m_dwFloatNotice = 0;
    }
    if (this->m_dwItemMsg && timeGetTime() > this->m_dwItemMsg)
    {
        this->m_itemMsg.DeleteFloatNotice();
        this->m_dwItemMsg = 0;
    }
    if (TSingleton<CInputSystem>::ms_pInstance->GetCursorState() != 9 && this->m_bDragChatWnd)
    {
        TSingleton<CWndMan>::ms_pInstance->ReleaseCaptureWnd(this);
        this->m_bDragChatWnd = 0;
    }
    m_bButtonAniPlayTime = this->m_bButtonAniPlayTime;

    auto i = 0;
    for (auto& t : m_bButtonAniPlayTime)
    {
        if (t + 90000 < timeGetTime() && t != -1)
            SetButtonBlink(i, 0);

        ++i;
    }
    if (timeGetTime() - this->m_tLastUpdateSkillCooltime > 0x3E8)
        this->m_QuickSlot.DrawSkillCooltime();
    if (auto user = TSingleton<CUserLocal>::ms_pInstance)
    {
        if (get_update_time() - user->GetConsumeItemUsingLastTime() > 1000)
            this->m_QuickSlot.DrawSkillCooltime();
    }
    CWnd::Update();
}

void CUIStatusBar::ClearToolTip()
{
    m_uiToolTip.ClearToolTip();
}

uint32_t CUIStatusBar::GetEmotionKey(ZXString<char>& sChat)
{
    return __sub_004706E0(this, nullptr, sChat);
}

void CUIStatusBar::StartChat(const char* sText)
{
    if (this->m_nChatWndType == 1)
    {
        SetChatType(2);
    }
    else if (!this->m_pEditChatInput)
    {
        return;
    }
    SetFocusChild(m_pEditChatInput.op_arrow());
    TSingleton<CWndMan>::ms_pInstance->SetFocus(m_pEditChatInput.op_arrow());
    m_pEditChatInput->SetText(sText);
}

void CUIStatusBar::EndChat()
{
    if (m_nChatWndType == 2)
        SetChatType(1);

    CWndMan::GetInstance()->SetFocus(nullptr);
}

void CUIStatusBar::FloatNotice(const char* sNotice, long nType, unsigned long dwDuration)
{
    __sub_0046D430(this, nullptr, sNotice, nType, dwDuration);
}

void CUIStatusBar::SetProblem(const char* sProblem)
{
    if (sProblem)
    {
        CUIStatusBar::SetItemMsg(nullptr, 0, 0x1388u);
        this->m_quizPanel.CreateFloatNotice(sProblem, 0, 160, 0xC00616FD);
    }
    else
    {
        this->m_quizPanel.DeleteFloatNotice();
    }
}

int32_t CUIStatusBar::SetItemMsg(const char* sMsg, long nType, unsigned long dwDuration)
{
    if (sMsg)
    {
        if (this->m_quizPanel.IsNotice()
            || this->m_floatNotice.IsNotice()
            || this->m_itemMsg.IsNotice())
        {
            return 0;
        }
        else
        {
            this->m_dwItemMsg = dwDuration + timeGetTime();
            this->m_itemMsg.CreateFloatNotice(sMsg, nType, 160, -1073342722);
            return 1;
        }
    }
    else
    {
        this->m_itemMsg.DeleteFloatNotice();
        return 1;
    }
}

void CUIStatusBar::ChatLogAdd(const char* sChat, long lType, long nChannelID, int32_t bWhisperIcon,
                              ZRef<GW_ItemSlotBase> pItem)
{
    //__sub_0047AEC0(this, nullptr, sChat, lType, nChannelID, bWhisperIcon, CreateNakedParam(pItem));
    auto macrSysMen = CMacroSysMan::GetInstance();
    ZXString16 wChat;
    wChat.AssignCharStr(sChat);
    if (macrSysMen->IsOnPlayingMacro() && !macrSysMen->CanItShow(wChat))
        return;

    auto lineCnt = 0;
    while (true)
    {
        wChat = wChat.TrimLeft();
        wChat = wChat.TrimRight();

        if (wChat.IsEmpty())
            break;


        ++lineCnt;
        auto offset = 0;
        if ((lType == 14 || lType == 16 || lType == 19 || lType == 20) && lineCnt == 1)
            offset = -38;

        auto& font = m_pFontChatLog[lType];
        Ztl_bstr_t bStr(wChat.c_str());
        auto txtLen = font->CalcLongestText(bStr, 547 + offset - m_nScrWidth, vtMissing);


        auto line = wChat.Left(txtLen);
        wChat = wChat.Mid(txtLen);

        line = line.TrimLeft();
        if (!line.IsEmpty() && (lType < 7 || lType > 12))
            line = ZXString16::FromFmt(L"     %s", line.c_str());

        auto color = 0;
        switch (lType)
        {
        case 11:
            color = 0xB0FFFFFF;
            break;
        case 13:
            color = 0xB0CAE7FF;
            break;
        case 14:
            color = 0xCCFFBFDD;
            break;
        case 15:
            color = 0xFFF74B4B;
            break;
        case 16:
        case 21:
            color = 0xDDFFC600;
            break;
        case 18:
            color = 0x2C4D1AAD;
            break;
        case 19:
            color = nChannelID != -1 ? 0xFF99CC33 : 0x80FF5C59;
            break;
        case 20:
            color = 0x80FF5C59;
            break;
        case 22:
        case 23:
            color = 0xFF99CC33;
            break;
        default:
            color = 0;
            break;
        }


        m_aChatLog.InsertBefore(-1) = new CChatLog(line, lType, color, nChannelID, bWhisperIcon, lineCnt <= 1, pItem);
    }


    while (m_aChatLog.GetCount() > 64)
    {
        m_aChatLog.RemoveAtIx(0);
    }

    _RefreshChatLog();
}

void CUIStatusBar::NoticeMsgAdd(const char* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUIStatusBar::GetShortCutIndexByPos(long x, long y)
{
    //return __sub_0046D640(this, nullptr, x, y);
    auto layer = GetLayer();
    auto lx = layer->Getx();
    auto ly = layer->Gety();
    return m_QuickSlot.GetIndexByPos(x + lx, y + ly);
}

void CUIStatusBar::ResetButtonToolTip()
{
    //__sub_00132150(this, nullptr);
    auto ctx = CWvsContext::GetInstance();
    auto cd = ctx->GetCharacterData();
    m_pBtSystem->EnableToolTip(cd->characterStat._ZtlSecureGet_nLevel() <= 12);
}

ZXString<char> CUIStatusBar::GetWhisperTarget()
{
    return m_sWhisperTarget;
}

void CUIStatusBar::SetWhisperTarget(ZXString<char> sWhisperTarget, int32_t bResetIfEqual)
{
    m_sWhisperTarget = sWhisperTarget;
    if (!m_sWhisperTarget.IsEmpty())
        m_nChatTarget = 7;
}

void CUIStatusBar::SetChatTarget(long nTarget)
{
    if (!this->m_bDoNotAskTarget)
    {
        switch (nTarget)
        {
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 8:
            StartChat(nullptr);
            CUIStatusBar::SetWhisperTarget({}, false);
            break;
        case 1:
            if (CUIStatusBar::ChangeGroupWhisperTarget())
                break;
            return;
        case 7:
            if (CUIStatusBar::ChangeWhisperTarget())
                break;
            return;
        default:
            break;
        }
    }


    this->m_nChatTarget = nTarget;
    this->m_bDoNotAskTarget = false;
}

long CUIStatusBar::GetChatTarget()
{
    return m_nChatWndHeight;
}

void CUIStatusBar::SetWhisperTargetFromCandidate()
{
    //__sub_00132150(this, nullptr);
    auto target = m_lsWhisperCandidate.GetHeadPosition();
    SetWhisperTarget(target ? *target : ZXString<char>(), false);
}

void CUIStatusBar::AddWhisperCandidate(ZXString<char> sWhisperCandidate)
{
    m_lsWhisperCandidate.Insert(sWhisperCandidate);
}

int32_t CUIStatusBar::ChangeWhisperTarget()
{
    return __sub_0047EDA0(this, nullptr);
}

int32_t CUIStatusBar::ChangeGroupWhisperTarget()
{
    return __sub_0047F120(this, nullptr);
}

void CUIStatusBar::SetChatType(long nType)
{
    __sub_00479C00(this, nullptr, nType);
}

int32_t CUIStatusBar::GetChatType()
{
    //TODO verify
    return m_nChatWndType;
}

void CUIStatusBar::QuickSlotToggle()
{
    //__sub_00132150(this, nullptr);
    m_QuickSlot.Toggle();
}

void CUIStatusBar::ChangeChatWndSize(long rx, long ry, long nType)
{
    __sub_0047A540(this, nullptr, rx, ry, nType);
}

void __cdecl CUIStatusBar::RemoveChatLog()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIStatusBar::SetButtonBlink(long nIdx, int32_t bOn)
{
    __sub_0046DA90(this, nullptr, nIdx, bOn);
}

void CUIStatusBar::SetShortcutTooltip(long nIdx, char cKey)
{
    __sub_00474400(this, nullptr, nIdx, cKey);
}

ZArray<ZXString<char>> CUIStatusBar::GetChatLog()
{
    //return __sub_004775A0(this, nullptr);

    auto i = 0;
    ZArray<ZXString<char>> result;
    auto v25 = 0;
    auto v22 = 1;
    while (true)
    {
        if (m_aChatLog.GetCount() <= i)
            return result;
        auto ty = CUIStatusBar::m_aChatLog[i]->_ZtlSecureGet_m_nType();
        if (ty
            && ty != 1
            && ty != 2
            && ty != 3
            && ty != 13
            && ty != 14
            && ty != 16
            && ty != 23
            && ty != 4
            && ty != 24
            || ty == 25)
        {
            i++;
            continue;;
        }
        if (ty == 1)
        {
            auto res = ConvertWhisperToNormal(ZXString16(m_aChatLog[i]->m_sChat));

            ZXString<char> s;
            s.AssignWideStr((const wchar_t*)res.c_str());
            result.Insert(s);
        }
        else
        {
            ZXString<char> s;
            s.AssignWideStr((const wchar_t*)m_aChatLog[i]->m_sChat.c_str());
            result.Insert(s);
        }

        ++i;
    }
}

ZXString16 CUIStatusBar::ConvertWhisperToNormal(ZXString16 sChatLine)
{
    ZXString16 ret;
    return *__sub_004771C0(this, nullptr, &ret, CreateNakedParam(sChatLine));
}

void CUIStatusBar::EnableButtons(int32_t bEnable)
{
    m_pBtMenu->SetEnable(bEnable);
    m_pBtEquipKey->SetEnable(bEnable);
    m_pBtInvenKey->SetEnable(bEnable);
    m_pBtStatKey->SetEnable(bEnable);
    m_pBtSkillKey->SetEnable(bEnable);
}

void CUIStatusBar::ReDrawQuickslot()
{
    m_QuickSlot.CompareValidateFuncKeyMappedInfo();
    m_QuickSlot.Draw();
}

void CUIStatusBar::Eff_EvolRing()
{
    m_dwFloatNotice = timeGetTime() + 10000;
    m_floatNotice.CreateEffEvolRing();
}

void CUIStatusBar::SetStatusValue(long lv, long nJob, ZXString<char> sCharName)
{
    __sub_00473590(this, nullptr, lv, nJob, CreateNakedParam(sCharName));
}

void CUIStatusBar::SetNumberValue(long hp, long hpMax, long mp, long mpMax, long exp, long expMax, long tempExp)
{
    hpMax = std::max(hpMax, hp + 10);
    mpMax = std::max(mpMax, mp + 10);
    expMax = std::max(expMax, exp + 10);


    __sub_00473D50(this, nullptr, hp, hpMax, mp, mpMax, exp, expMax, tempExp);
}

void CUIStatusBar::ProcessToolTip(long rx, long ry)
{
    __sub_00473140(this, nullptr, rx, ry);
}

bool CUIStatusBar::IsChatLogFiltered(long ty)
{
    if (!m_dwChatFilterFlag || ty >= 12 && ty <= 24)
        return false;

    if ((1 << ty & m_dwChatFilterFlag) != 0)
        return false;

    return true;
}

void CUIStatusBar::DrawChatItem(IWzCanvas* canvas, CChatLog* chat, int ix)
{
    auto& sp = StringPool::GetInstance();
    auto ty = chat->_ZtlSecureGet_m_nType();
    auto& font = m_pFontChatLog[ty];
    if (chat->m_nBack != 0)
    {
        Ztl_bstr_t txt(chat->m_sChat.c_str());
        auto txtLen = canvas->DrawTextA(9, m_nChatWndHeight - 13 * ix - 13, txt, font, vtMissing, vtMissing);


        if (m_nChatWndType > 0)
        {
            if (m_nChatWndType <= 2)
            {
                canvas->DrawRectangle(0, m_nChatWndHeight - 13 * ix - 23, 563 - m_nScrWidth, m_nChatWndHeight,
                                      chat->m_nBack);
            }
            else if (m_nChatWndType == 3)
            {
                canvas->DrawRectangle(0, m_nChatWndHeight - 13 * ix - 15, 563 - m_nScrWidth, txtLen + 2,
                                      chat->m_nBack);
            }
        }
    }

    if (ty == 14 || ty == 16 || ty == 23 || ty == 24 && chat->m_bFirstLine)
    {
        auto nTop = m_nChatWndHeight + 13 * (-1 - ix) - (m_nChatWndType != 3 ? 5 : 0);
        auto colonIx = chat->m_sChat.Find(L':');

        auto name = chat->m_sChat.Left(colonIx - 1);
        auto chatLen = chat->m_sChat.GetLength();
        auto msg = chat->m_sChat.Right(chatLen - colonIx);

        Ztl_bstr_t bsName(reinterpret_cast<const wchar_t*>(name.c_str()));
        auto txtLen = font->CalcTextWidth(bsName, vtMissing);
        canvas->DrawTextA(9, nTop, bsName, font, vtMissing, vtMissing);


        Ztl_bstr_t bsMsg(reinterpret_cast<const wchar_t*>(msg.c_str()));
        canvas->DrawTextA(txtLen + 45, nTop, bsMsg, font, vtMissing, vtMissing);

        if (auto item = chat->m_pItem.op_arrow())
        {
            auto id = item->nItemID.GetData();
            auto itemInfo = CItemInfo::GetInstance();
            auto name = itemInfo->GetItemName(id);

            auto itemFmt = sp.GetStringW(4447);
            ZXString16 wName;
            wName.AssignCharStr(name.c_str());

            auto uol = ZXString16::FromFmt(itemFmt.c_str(), wName);
            //TODO render item name
            UNIMPLEMENTED;
        }


        if (ty == 23)
        {
            auto sCh = ZXString<wchar_t>::FromFmt(L"[W:%2d]", chat->m_nChannelID);

            canvas->DrawTextA(
                txtLen + 9,
                nTop,
                sCh.c_str(),
                font, vtMissing, vtMissing
            );
        }
        else
        {
            auto nn = 0;
            if (chat->m_nChannelID)
                nn = 3 - (chat->m_bWhisperIcon != 0);
            else
                nn = chat->m_bWhisperIcon == 0;

            auto fmtStr = sp.GetString(6581);
            auto uol = ZXString<char>::FromFmt(fmtStr.c_str(), nn);

            Ztl_bstr_t bUol(uol.c_str());
            auto iconCanvas = get_rm()->GetObjectT<IWzCanvas>(bUol);
            canvas->Copy(txtLen + 11, nTop - 1, iconCanvas, vtMissing);

            auto chId = chat->m_nChannelID;
            if (chId != 1)
            {
                if (!chId)
                    chId = 1;

                auto fmtStr_ = sp.GetString(6582);
                auto uol_ = ZXString<char>::FromFmt(fmtStr_.c_str(), chId / 10);
                Ztl_bstr_t bUol_(uol_.c_str());
                auto iconCanvas_ = get_rm()->GetObjectT<IWzCanvas>(bUol_);

                auto uolPt = ZXString<char>::FromFmt(fmtStr_.c_str(), chId - 10 * (chId / 10));
                Ztl_bstr_t bUolPt(uolPt.c_str());
                auto iconCanvasPt = get_rm()->GetObjectT<IWzCanvas>(bUolPt);


                canvas->Copy(txtLen + 22, nTop + 3, iconCanvas_, vtMissing);
                canvas->Copy(txtLen + 27, nTop + 3, iconCanvasPt, vtMissing);
            }
        }
    }
    else
    {
        auto nTop = m_nChatWndHeight + 13 * (-1 - ix) - (this->m_nChatWndType != 3 ? 5 : 0);
        if (ty != 10 || !chat->m_pItem)
        {
            canvas->DrawTextA(9, nTop, (const wchar_t*)chat->m_sChat.c_str(), font, vtMissing, vtMissing);
        }
        else
        {
            auto bracketOpen = chat->m_sChat.Find(L'{');
            auto bracketClose = chat->m_sChat.Find(L'}');
            if (bracketOpen == SIZE_MAX || bracketClose == SIZE_MAX)
            {
                canvas->DrawTextA(9, nTop, (const wchar_t*)chat->m_sChat.c_str(), font, vtMissing, vtMissing);
            }
            else
            {
                auto lTxt = chat->m_sChat.Left(bracketOpen);
                UNIMPLEMENTED; //TODO
            }
        }
    }
}


void CUIStatusBar::ChatLogDraw()
{
    //__sub_00132150(this, nullptr);
    auto& sp = StringPool::GetInstance();
    auto n = m_aChatLog.GetCount();
    auto scrollRange = m_pScrChatLog->GetScrollRange();
    int ix = n - 1;
    if (scrollRange > 0)
    {
        auto scrollH = scrollRange - m_pScrChatLog->GetCurPos() - 1;
        if (scrollH > 0)
        {
            while (ix > 0)
            {
                if (IsChatLogFiltered(m_aChatLog[ix]->_ZtlSecureGet_m_nType()))
                {
                    --scrollH;
                }
                --ix;
                if (scrollH <= 0)
                    break;
            }
        }
    }


    m_pLayerChatLog = get_gr()->CreateLayer(0, 0, m_nChatWndType != 1 ? 577 : 502,
                                            m_nChatWndHeight, 0, vtMissing, vtMissing);
    m_pLayerChatLog->Putcolor(0xFFFFFFFF);

    auto layer = GetLayer();
    m_pLayerChatLog->PutOrigin(layer);
    m_pLayerChatLog->PutOverlay(layer);
    m_pLayerChatLog->Putz(0xFFFFFFFF);
    m_pLayerChatLog->RelMove(0, m_ptChatWnd.y, vtMissing, vtMissing);

    auto canvas = m_pLayerChatLog->Getcanvas(Ztl_variant_t(0));
    canvas->DrawRectangle(0, 0, 577 - m_nScrWidth, m_nChatWndHeight, 0);
    if (m_nChatWndType != 1)
    {
        canvas->DrawRectangle(0, 0, 577 - m_nScrWidth, m_nChatWndHeight, 0x80000000);
    }

    if (m_nChatWndLineVisible > 0)
    {
        while (true)
        {
            if (ix < 0)
                break;

            while (true)
            {
                if (!IsChatLogFiltered(m_aChatLog[ix]->_ZtlSecureGet_m_nType()))
                    break;

                if (--ix < 0)
                {
                    break;
                }
            }

            if (ix < 0)
                break;

            auto& chat = m_aChatLog[ix];
            DrawChatItem(canvas, chat.op_arrow(), ix);

            --ix;
        }
    }

    if (m_pLayerChatBar)
        _ResetChatBarPos();

    InvalidateRect(nullptr);
}

void CUIStatusBar::SendGroupMessage(const long nChatTarget, const ZXString<char>& sText)
{
    __sub_0047F7F0(this, nullptr, nChatTarget, sText);
}

void CUIStatusBar::SendCoupleMessage(const ZXString<char>& sText)
{
    __sub_0047B3E0(this, nullptr, sText);
}

void CUIStatusBar::ToggleMaxMinButton()
{
    auto first = m_nChatWndType == 1;
    m_pBtMax->SetShow(first);
    m_pBtMin->SetShow(!first);
}

void CUIStatusBar::ToggleQuickSlot()
{
    if (!CWvsContext::GetInstance()->IsLargeScreen())
    {
        m_QuickSlot.Toggle();
        CUIScreenMsg::GetInstance()->MoveScrMsg();
    }
}

void CUIStatusBar::ToggleShortCutMenu()
{
    UNIMPLEMENTED;
}

void CUIStatusBar::MakeCtrlEdit(int32_t bCreate)
{
    __sub_00470BA0(this, nullptr, bCreate);
}

void CUIStatusBar::FlashHPBar()
{
    auto layer = m_lm.AddLayer(L"UI/StatusBar2.img/mainBar/aniHPGaug", 1, false);
    layer->Animate(GA_REPEAT, vtMissing, vtMissing);

    CAnimationDisplayer::GetInstance()->RegisterRepeatAnimation(layer, 500);
}

void CUIStatusBar::FlashMPBar()
{
    auto layer = m_lm.AddLayer(L"UI/StatusBar2.img/mainBar/aniMPGaug", 1, false);
    layer->Animate(GA_REPEAT, vtMissing, vtMissing);

    CAnimationDisplayer::GetInstance()->RegisterRepeatAnimation(layer, 500);
}

int32_t CUIStatusBar::TryBeginWhisper(long rx, long ry)
{
    //TODO(game) fix return __sub_0047F390(this, nullptr, rx, ry);
    return false;
}

void CUIStatusBar::TryBeginShowItemInfo(long rx, long ry)
{
    __sub_0046FBF0(this, nullptr, rx, ry);
}

void CUIStatusBar::SendClaim()
{
    auto chatLog = GetChatLog();
    CWvsContext::GetInstance()->SendClaimRequest(chatLog, ZXString<char>());
}

void CUIStatusBar::TryBeginChangeChatWnd(long rx, long ry)
{
    auto inp = CInputSystem::GetInstance();
    auto wndMan = CWndMan::GetInstance();
    if (this->m_nChatWndType == 3 && inp->GetCursorState() == 9)
    {
        if (this->m_nCurPtY == -1)
            this->m_nCurPtY = ry;
        this->m_bDragChatWnd = 1;
        wndMan->SetCaptureWnd(this);
    }
}

int32_t CUIStatusBar::IsQuickSlotEnabled()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUIStatusBar::IsQuickSlotSlideUp()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIStatusBar::ChangeDragFuncKeyMappedIcon(long rx, long ry, FUNCKEY_MAPPED& fkm)
{
    __sub_00476CB0(this, nullptr, rx, ry, fkm);
}

void CUIStatusBar::TryBeginDragFuncKeyMappedIcon(long rx, long ry)
{
    __sub_00476C60(this, nullptr, rx, ry);
}

void CUIStatusBar::DrawDragFuncKeyMappedIcon(long arg0, long arg1, FUNCKEY_MAPPED& arg2)
{
    __sub_00472050(this, nullptr, arg0, arg1, arg2);
}

void CUIStatusBar::TryShowMemoListDlg(long rx, long ry)
{
    __sub_004779F0(this, nullptr, rx, ry);
}

void CUIStatusBar::TryUseTempExp(long rx, long ry)
{
    __sub_00470AA0(this, nullptr, rx, ry);
}

void CUIStatusBar::ChangeScreenResolution()
{
    if (m_pLayerSkin)
    {
        auto large = CWvsContext::GetInstance()->IsLargeScreen();
        m_QuickSlot.ChangeScreenResolution(large, m_pLayerSkin);
        if (auto ui = CUIScreenMsg::GetInstance())
            ui->MoveScrMsg();
    }
}

void CUIStatusBar::_ResetChatBarPos()
{
    m_pLayerChatBar->RelMove(0, m_ptChatWnd.y - 2, vtMissing, vtMissing);
    auto ctx = CWvsContext::GetInstance();
    auto exp = ExpeditionIntermediary::GetInstance();
    auto flagOld = m_dwChatFilterFlag;
    auto x = 1;
    for (auto i = 0; i < 6; ++i)
    {
        this->m_apBtChatFilter[i]->SetShow(false);
        switch (i)
        {
        case 2:
            if (!ctx->GetPartyID())
            {
                this->m_dwChatFilterFlag &= ~4u;
                continue;
            }
            break;
        case 5:
            if (!exp
                || !exp->GetExpedition())
            {
                this->m_dwChatFilterFlag &= ~0x4000000u;
                continue;
            }
            break;
        case 3:
            if (!ctx->GetGuildID())
            {
                this->m_dwChatFilterFlag &= ~0x10u;
                continue;
            }
            break;
        default:
            if (i == 4 && !ctx->GetGuildAllianceID())
            {
                this->m_dwChatFilterFlag &= ~0x20u;
                continue;
            }
            break;
        }
        this->m_apBtChatFilter[i]->SetShow(true);
        this->m_apBtChatFilter[i]->Move(x, this->m_ptChatWnd.y - 19);
        x += 46;
    }

    if (flagOld != m_dwChatFilterFlag)
        _SetFilterButton();
}

void CUIStatusBar::_RefreshChatLog()
{
    auto v2 = _GetFilteredChatLogCount() + 1 - this->m_nChatWndLineVisible;
    if (v2 <= 2
        || this->m_pScrChatLog->GetCurPos() == this->m_pScrChatLog->GetScrollRange() - 1
        || timeGetTime() - this->m_dwLastScrolled > 0x1388)
    {
        this->m_pScrChatLog->SetScrollRange(v2);
        this->m_pScrChatLog->SetCurPos(v2 - 1);
        ChatLogDraw();
    }
    else
    {
        this->m_pScrChatLog->SetScrollRange(v2);
        this->m_pScrChatLog->SetCurPos(this->m_pScrChatLog->GetCurPos() - 1);
        ChatLogDraw();
    }
}

long CUIStatusBar::_GetFilteredChatLogCount()
{
    auto len = m_aChatLog.GetCount();

    if (m_dwChatFilterFlag)
        return len;


    if (m_dwChatFilterFlag)
    {
        auto v3 = 0;
        for (auto i = 0; i < len; i++)
        {
            if (auto& v5 = m_aChatLog[i])
            {
                if (v5->IsFiltered(m_dwChatFilterFlag))
                    ++v3;
            }
        }
        return v3;
    }
    return len;
}

void CUIStatusBar::_SetFilterButton()
{
    m_apBtChatFilter[0]->SetCheck(m_dwChatFilterFlag == 0);
    m_apBtChatFilter[1]->SetCheck(m_dwChatFilterFlag & 8);
    m_apBtChatFilter[2]->SetCheck(m_dwChatFilterFlag & 4);
    m_apBtChatFilter[3]->SetCheck(m_dwChatFilterFlag & 0x10);
    m_apBtChatFilter[4]->SetCheck(m_dwChatFilterFlag & 0x20);
    m_apBtChatFilter[5]->SetCheck(m_dwChatFilterFlag & 0x4000000);
}

CUIStatusBar& CUIStatusBar::operator=(const CUIStatusBar& arg0)
{
    return _op_assign_76(this, arg0);
}

CUIStatusBar& CUIStatusBar::_op_assign_76(CUIStatusBar* pThis, const CUIStatusBar& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CChatLog::~CChatLog()
{
}

void CUIStatusBar::CChatLog::_dtor_0()
{
    this->~CChatLog();
}

CUIStatusBar::CChatLog::CChatLog(const CUIStatusBar::CChatLog& arg0)
{
    _ctor_1(arg0);
}

void CUIStatusBar::CChatLog::_ctor_1(const CUIStatusBar::CChatLog& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CChatLog::CChatLog(ZXString16 sChat, long nType, long nBack, long nChannelID,
                                 int32_t bWhisperIcon, int32_t bFirstLine, ZRef<GW_ItemSlotBase> pItem)
{
    //_ctor_0(sChat, nType, nBack, nChannelID, bWhisperIcon, bFirstLine, pItem);
    m_nBack = nBack;
    m_sChat = sChat;
    m_nChannelID = nChannelID;
    this->_ZtlSecurePut_m_nType(nType);
    m_bFirstLine = bFirstLine;
    m_bWhisperIcon = bWhisperIcon;
    m_pItem = pItem;
}

void CUIStatusBar::CChatLog::_ctor_0(ZXString16 sChat, long nType, long nBack, long nChannelID,
                                     int32_t bWhisperIcon, int32_t bFirstLine, ZRef<GW_ItemSlotBase> pItem)
{
    /*return __sub_004718C0(this, nullptr, CreateNakedParam(sChat), nType, nBack, nChannelID, bWhisperIcon, bFirstLine,
                          CreateNakedParam(pItem));*/
    new(this) CChatLog(sChat, nType, nBack, nChannelID, bWhisperIcon, bFirstLine, pItem);
}

_ZTL_SEC_GETSETI(long, CUIStatusBar::CChatLog, m_nType)

int32_t CUIStatusBar::CChatLog::IsFiltered(unsigned long dwFilterFlag) const
{
    auto ty = _ZtlSecureGet_m_nType();
    return !dwFilterFlag
        || ty >= 12
        && ty <= 24
        || ((1 << ty) & dwFilterFlag) != 0;
}

CUIStatusBar::CChatLog& CUIStatusBar::CChatLog::operator=(const CUIStatusBar::CChatLog& arg0)
{
    return _op_assign_6(this, arg0);
}

CUIStatusBar::CChatLog& CUIStatusBar::CChatLog::_op_assign_6(CUIStatusBar::CChatLog* pThis,
                                                             const CUIStatusBar::CChatLog& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CGauge::~CGauge()
{
}

void CUIStatusBar::CGauge::_dtor_0()
{
    this->~CGauge();
}

CUIStatusBar::CGauge::CGauge(const CUIStatusBar::CGauge& arg0)
{
    _ctor_1(arg0);
}

void CUIStatusBar::CGauge::_ctor_1(const CUIStatusBar::CGauge& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CGauge::CGauge()
{
}

void CUIStatusBar::CGauge::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIStatusBar::CGauge::Create(_x_com_ptr<IWzGr2DLayer> pLayer, const wchar_t* sUOL, long nX, long nY, long nLength)
{
    __sub_004747A0(this, nullptr, CreateNakedParam(pLayer), sUOL, nX, nY, nLength);
}

void CUIStatusBar::CGauge::SetVal(double dVal)
{
    __sub_0046DEA0(this, nullptr, dVal);
}

CUIStatusBar::CGauge& CUIStatusBar::CGauge::operator=(const CUIStatusBar::CGauge& arg0)
{
    return _op_assign_5(this, arg0);
}

CUIStatusBar::CGauge& CUIStatusBar::CGauge::_op_assign_5(CUIStatusBar::CGauge* pThis, const CUIStatusBar::CGauge& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CQuickSlot::~CQuickSlot()
{
}

void CUIStatusBar::CQuickSlot::_dtor_0()
{
    return __sub_0046FAF0(this, nullptr);
}

CUIStatusBar::CQuickSlot::CQuickSlot(const CUIStatusBar::CQuickSlot& arg0)
{
    _ctor_1(arg0);
}

void CUIStatusBar::CQuickSlot::_ctor_1(const CUIStatusBar::CQuickSlot& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CQuickSlot::CQuickSlot()
{
    m_nConsumeItemCoolTimeState = -1;
    for (auto& cd : m_aFuncKeyMappedSkillCooltime)
    {
        cd = -1;
    }
}

void CUIStatusBar::CQuickSlot::_ctor_0()
{
    new(this) CQuickSlot();
}

void CUIStatusBar::CQuickSlot::Init(int32_t bShowSlide, CLayoutMan& lm)
{
    __sub_00474F10(this, nullptr, bShowSlide, lm);
}

void CUIStatusBar::CQuickSlot::ChangeScreenResolution(int32_t bLargeScreen, _x_com_ptr<IWzGr2DLayer> pParentLayer)
{
    __sub_0046F110(this, nullptr, bLargeScreen, CreateNakedParam(pParentLayer));
}

void CUIStatusBar::CQuickSlot::Draw()
{
    //TODO(game) __sub_00475750(this, nullptr);
}

static tagPOINT SHORTKEY_POS[8] = {
    {.x = 0x7, .y = 0x0F},
    {.x = 0x28, .y = 0x0F},
    {.x = 0x49, .y = 0x0F},
    {.x = 0x6A, .y = 0x0F},
    {.x = 0x7, .y = 0x30},
    {.x = 0x28, .y = 0x30},
    {.x = 0x49, .y = 0x30},
    {.x = 0x6A, .y = 0x30}
};

long CUIStatusBar::CQuickSlot::GetIndexByPos(long x, long y)
{
    //return __sub_0046D030(this, nullptr, x, y);
    auto bx = m_pLayerShortCut->Getx();
    auto by = m_pLayerShortCut->Gety();
    tagPOINT pt{.x = x, .y = y};
    for (auto i = 0; i < 8; ++i)
    {
        tagRECT rc{
            .left = bx + SHORTKEY_POS[i].x,
            .top = by + SHORTKEY_POS[i].y,
            .right = bx + SHORTKEY_POS[i].x + 32,
            .bottom = by + SHORTKEY_POS[i].y + 32,
        };
        if (PtInRect(&rc, pt))
        {
            return i;
        }
    }

    return -1;
}


void CUIStatusBar::CQuickSlot::GetPosByIndex(long nIdx, long& x, long& y)
{
    //__sub_0046CCA0(this, nullptr, nIdx, x, y);
    if (nIdx < 8)
    {
        x = SHORTKEY_POS[nIdx].x;
        y = SHORTKEY_POS[nIdx].y;
    }
    else
    {
        x = 0;
        y = 0;
    }
}

void CUIStatusBar::CQuickSlot::Toggle()
{
    __sub_0046D180(this, nullptr);
}

long CUIStatusBar::CQuickSlot::GetInitX()
{
    return m_nInitX;
}

int32_t CUIStatusBar::CQuickSlot::IsEnabled()
{
    return this->m_bShowSlide || !TSingleton<CWvsContext>::ms_pInstance->IsLargeScreen();
}

int32_t CUIStatusBar::CQuickSlot::IsSlideUp()
{
    return this->m_bShowSlide && !TSingleton<CWvsContext>::ms_pInstance->IsLargeScreen();
}

void CUIStatusBar::CQuickSlot::DrawConsumeItemCooltime()
{
    __sub_0046F5A0(this, nullptr);
}

void CUIStatusBar::CQuickSlot::DrawSkillCooltime()
{
    __sub_0046FF50(this, nullptr);
}

int32_t CUIStatusBar::CQuickSlot::CompareValidateFuncKeyMappedInfo()
{
    return __sub_00471000(this, nullptr);
}

const FUNCKEY_MAPPED& CUIStatusBar::CQuickSlot::GetFunckey(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CQuickSlot& CUIStatusBar::CQuickSlot::operator=(const CUIStatusBar::CQuickSlot& arg0)
{
    return _op_assign_16(this, arg0);
}

CUIStatusBar::CQuickSlot& CUIStatusBar::CQuickSlot::_op_assign_16(CUIStatusBar::CQuickSlot* pThis,
                                                                  const CUIStatusBar::CQuickSlot& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString16 __cdecl ExtractCharacterName_ZXString_unsignedshort__(ZXString16 sChat)
{
    return __sub_00477040(CreateNakedParam(sChat));
}
