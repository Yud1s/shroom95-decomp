// LoginWnd_Char.cpp
#include "LoginWnd_Char.hpp"
#include "LoginWnd_Char_regen.ipp"
#include "spdlog/spdlog.h"

CUIAvatarVAC::~CUIAvatarVAC()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIAvatarVAC::_dtor_0()
{
    return __sub_001E2790(this, nullptr);
}

CUIAvatarVAC::CUIAvatarVAC(const CUIAvatarVAC& arg0)
{
    _ctor_1(arg0);
}

void CUIAvatarVAC::_ctor_1(const CUIAvatarVAC& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIAvatarVAC::CUIAvatarVAC(CLogin* pLogin, void* pData)
{
    //_ctor_0(pLogin, pData);
    ms_pInstance = this;

    m_pLogin = pLogin;
    CWnd::CreateWnd(-250, -870, 582, 440, 10, 0, pData, 1, Origin_LT);
}

void CUIAvatarVAC::_ctor_0(CLogin* pLogin, void* pData)
{
    //return __sub_001E25E0(this, nullptr, pLogin, pData);
    new(this) CUIAvatarVAC(pLogin, pData);
}

void CUIAvatarVAC::OnCreate(void* arg0)
{
    __sub_001EDAC0(this, nullptr, arg0);
}

void CUIAvatarVAC::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_001ED430(this, nullptr, msg, wParam, rx, ry);
}

void CUIAvatarVAC::OnButtonClicked(uint32_t nId)
{
    __sub_001E0310(this, nullptr, nId);
}

void CUIAvatarVAC::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_001ED370(this, nullptr, nId, param1, param2);
}

int32_t CUIAvatarVAC::OnSetFocus(int32_t bFocus)
{
    return __sub_001E0170(this, nullptr, bFocus);
}

void CUIAvatarVAC::Update()
{
    __sub_001E2590(this, nullptr);
}

void CUIAvatarVAC::MakeCharacter(long nIdx, AvatarData& ad)
{
    __sub_001ED490(this, nullptr, nIdx, ad);
}

void CUIAvatarVAC::MakeSelectedCharacterNameTag()
{
    __sub_001E7A30(this, nullptr);
}

void CUIAvatarVAC::MakeWorldIcon(long nIdx)
{
    __sub_001E1B60(this, nullptr, nIdx);
}

void CUIAvatarVAC::ResetAvatarPosition()
{
    __sub_001EBDC0(this, nullptr);
}

void CUIAvatarVAC::SetSelection(long nIdx)
{
    __sub_001ED2A0(this, nullptr, nIdx);
}

long CUIAvatarVAC::GetScrollBarIdx()
{
    return __sub_001E0340(this, nullptr);
}

long CUIAvatarVAC::GetViewingIdxFromRealIdx(long arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUIAvatarVAC::IsViewingIdxNow(long arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIAvatarVAC::ResetCharacter(long nIdx, AvatarData& ad)
{
    __sub_001E7EA0(this, nullptr, nIdx, ad);
}

int32_t CUIAvatarVAC::IsRequestValid()
{
    return __sub_001E01A0(this, nullptr);
}

long CUIAvatarVAC::GetSelectedIdx(tagPOINT pt)
{
    return __sub_001E1640(this, nullptr, CreateNakedParam(pt));
}

void CUIAvatarVAC::DrawNameTag(long nIdx, int32_t bSelected)
{
    __sub_001E2EC0(this, nullptr, nIdx, bSelected);
}

void CUIAvatarVAC::DrawSelectedNameTag(long nIdx)
{
    __sub_001E36E0(this, nullptr, nIdx);
}

void CUIAvatarVAC::DrawWorldIcon(long nIdx)
{
    __sub_001E17B0(this, nullptr, nIdx);
}

CUIAvatarVAC& CUIAvatarVAC::operator=(const CUIAvatarVAC& arg0)
{
    return _op_assign_23(this, arg0);
}

CUIAvatarVAC& CUIAvatarVAC::_op_assign_23(CUIAvatarVAC* pThis, const CUIAvatarVAC& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIAvatar::~CUIAvatar()
{
    ms_pInstance = nullptr;
}

void CUIAvatar::_dtor_0()
{
    this->~CUIAvatar();
    // return __sub_001E23D0(this, nullptr);
}

CUIAvatar::CUIAvatar(const CUIAvatar& arg0)
{
    _ctor_1(arg0);
}

void CUIAvatar::_ctor_1(const CUIAvatar& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIAvatar::CUIAvatar(CLogin* pLogin, void* pData)
{
    ms_pInstance = this;
    m_pLogin = pLogin;
    m_nSlotCount = pLogin->GetSlotCount();
    m_nBuyCharCount = pLogin->GetBuyCharacterCount();
    CreateWnd(-290, -1218, 600, 80, 10, false, pData, true, Origin_LT);
    //_ctor_0( pLogin, pData);
}

void CUIAvatar::_ctor_0(CLogin* pLogin, void* pData)
{
    new(this) CUIAvatar(pLogin, pData);
    // return __sub_001E21F0(this, nullptr, pLogin, pData);
}

void CUIAvatar::OnCreate(void* pData)
{
    __sub_001EBE10(this, nullptr, pData);
}

void CUIAvatar::OnKey(uint32_t wParam, int32_t lParam)
{
    //__sub_001ECEA0(this, nullptr, wParam, lParam);
    if (!lParam)
        return;
    auto selectedIx = m_pLogin->GetCharSelected();
    int v11 = 0;
    switch (wParam)
    {
    case VK_TAB:
        if (m_pLayerBallon)
        {
            m_nBallonDestroyTime = get_update_time() + 1000;
            m_pLayerBallon->Getalpha()->RelMove(0, 255, Ztl_variant_t(1), vtMissing);
        }
        if (auto wndMan = CWndMan::GetInstance())
        {
            if (auto charSelect = CUICharSelect::GetInstance())
                wndMan->SetFocus(charSelect);
        }
        break;
    case VK_RETURN:
        if (selectedIx >= 0)
        {
            if (selectedIx >= m_nCharCount)
            {
                if (selectedIx < m_nCharCount + m_nBuyCharCount)
                {
                    m_pLogin->OnNewCharStep(true);
                }
            }
            else
            {
                m_pLogin->SendSelectCharPacket();
            }
        }

        break;
    case VK_ESCAPE:
        m_pLogin->GotoTitle(true, this);
        break;
    case VK_LEFT:
        if (selectedIx == -1)
        {
            SelectCharacter(selectedIx);
        }
        else
        {
            if (selectedIx - 1 >= 0)
                SelectCharacter(selectedIx - 1);
        }
        break;
    case VK_RIGHT:
        v11  = selectedIx + 1;
        if (v11 < m_nSlotCount && v11 < m_nCharCount + m_nBuyCharCount)
        {
            SelectCharacter(v11);
        }
        break;
    default:
        break;;
    }
}


tagRECT rtPREV{
    0x1e, 0x0a, 0x6e, 0x32
};

tagRECT rtNEXT{
    0x1d6, 0x0a, 0x226, 0x32
};

void CUIAvatar::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    //__sub_001ED130(this, nullptr, msg, wParam, rx, ry);

    tagPOINT pt{rx, ry};

    if (msg == 513)
    {
        auto ix = GetPageSize() + 1;
        if (ix > 1)
        {
            if (PtInRect(&rtPREV, pt))
            {
                auto max = m_nBuyCharCount + m_nCharCount;
                auto v10 = 3
                    * ((GetPageSize() + this->m_nPageIndex)
                        % (GetPageSize() + 1));
                auto v9 = 2;
                auto v11 = v10 + 2;
                do
                {
                    if (v11 < max)
                        break;
                    --v9;
                    --v11;
                }
                while (v9 >= 0);
                SelectCharacter(v9 + v10);
                return;
            }

            if (PtInRect(&rtNEXT, pt))
            {
                SelectCharacter(3 * ((this->m_nPageIndex + 1) % ix));
                return;
            }
        }


        if (const auto selIx = GetSelectedIdx(pt); selIx >= 0)
            SelectCharacter(selIx);
    }
    else if (msg == 515)
    {
        if (auto selIx = GetSelectedIdx(pt); selIx >= 0)
        {
            if (selIx < m_nPageIndex)
            {
                m_pLogin->SendSelectCharPacket();
            }
            else if (selIx < m_nPageIndex + m_nCharCount)
            {
                m_pLogin->OnNewCharStep(true);
            }
        }
    }
}

int32_t CUIAvatar::OnMouseMove(long rx, long ry)
{
    //return __sub_001E07B0(this, nullptr, rx, ry);
    tagPOINT pt{rx, ry};
    if (GetPageSize() + 1  > 1)
    {
        if (PtInRect(&rtPREV, pt))
        {
            auto alpha = m_pLayerPrev->Getalpha();
            alpha->RelMove(0, 0, vtMissing, vtMissing);

            auto alphaNext = m_pLayerNext->Getalpha();
            alphaNext->RelMove(255, 0, vtMissing, vtMissing);

            auto alphaPrevOver = m_pLayerPrev_over->Getalpha();
            alphaPrevOver->RelMove(255, 0, vtMissing, vtMissing);

            auto alphaNextOver = m_pLayerPrev_over->Getalpha();
            alphaNextOver->RelMove(0, 0, vtMissing, vtMissing);
        }
        else if (PtInRect(&rtNEXT, pt))
        {
            auto alpha = m_pLayerPrev->Getalpha();
            alpha->RelMove(255, 0, vtMissing, vtMissing);

            auto alphaNext = m_pLayerNext->Getalpha();
            alphaNext->RelMove(0, 0, vtMissing, vtMissing);

            auto alphaPrevOver = m_pLayerPrev_over->Getalpha();
            alphaPrevOver->RelMove(0, 0, vtMissing, vtMissing);

            auto alphaNextOver = m_pLayerPrev_over->Getalpha();
            alphaNextOver->RelMove(255, 0, vtMissing, vtMissing);
        }
        else
        {
            auto alpha = m_pLayerPrev->Getalpha();
            alpha->RelMove(255, 0, vtMissing, vtMissing);

            auto alphaNext = m_pLayerNext->Getalpha();
            alphaNext->RelMove(255, 0, vtMissing, vtMissing);

            auto alphaPrevOver = m_pLayerPrev_over->Getalpha();
            alphaPrevOver->RelMove(0, 0, vtMissing, vtMissing);

            auto alphaNextOver = m_pLayerPrev_over->Getalpha();
            alphaNextOver->RelMove(0, 0, vtMissing, vtMissing);
        }
    }

    return 0;
}

int32_t CUIAvatar::OnSetFocus(int32_t bFocus)
{
    if (bFocus)
        m_pLogin->SetFocusedUI(this);
    return CWnd::OnSetFocus(bFocus);
}

void CUIAvatar::Update()
{
    //__sub_001E1AF0(this, nullptr);
    for (auto& avatar : m_apAvatar)
    {
        if (avatar)
            avatar->Update();
    }

    if (m_pLayerBallon && m_nBallonDestroyTime && get_update_time() > m_nBallonDestroyTime)
    {
        m_pLayerBallon = 0;
        m_nBallonDestroyTime = 0;
    }

    CWnd::Update();
}

void CUIAvatar::Refresh()
{
    m_nCharCount = 0;
    for (auto page = 0; page < 3; page++)
    {
        for (auto i = 0; i < 5; i++)
        {
            if (const auto chr = m_apAD[page * 5 + i]; chr && chr->characterStat.dwCharacterID)
            {
                m_nCharCount++;
            }
        }
    }

    for (auto i = 0; i < 3; i++)
    {
        const auto ix = m_nPageIndex + i + 2 * m_nPageIndex;
        const auto buyChar = ix >= m_nCharCount && ix < m_nBuyCharCount + m_nCharCount;
        ResetCharacter(i, *m_apAD[ix], buyChar);
    }
    //__sub_001EA1B0(this, nullptr);
}

void CUIAvatar::SelectCharacter(long nIdx)
{
    //__sub_001EA280(this, nullptr, nIdx);
    int v2 = nIdx;
    if ((unsigned int)nIdx > 0xE || nIdx >= this->m_nCharCount + this->m_nBuyCharCount)
    {
        this->m_pLogin->SetCharSelected(-1);
        this->m_pLogin->OnSelectedCharChanged(-1);
    }
    else
    {
        this->m_pLogin->SetCharSelected(nIdx);
        this->m_pLogin->OnSelectedCharChanged(nIdx);
    }
    if (this->m_nPageIndex != nIdx / 3)
    {
        this->m_nPageIndex = nIdx / 3;
        Refresh();
    }
    if (nIdx >= 0)
        v2 = nIdx % 3;
    auto i = 0;
    for (auto& avatar : m_apAvatar)
    {
        if (avatar)
        {
            avatar->SetMoveAction(2 * ((i != v2) + 1), false);
            DrawNameTag(i, i == v2);
        }


        ++i;
    }
    InvalidateRect(nullptr);
}

void CUIAvatar::EnterCharacter() const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIAvatar::ResetCharacter(const long nIdx, const AvatarData& ad, int32_t bBuyCharacter)
{
    /*if (ad.characterStat.dwCharacterID)
    {
        m_apAvatar[nIdx] = ZRef<CAvatar>(ZAllocHelper(1));
        const auto wndLayer = GetLayer();
        auto cur = m_apAvatar[nIdx];

        const _x_com_ptr<IWzVector2D> origin(wndLayer);

        cur->Init_1(
            ad.avatarLook,
            4,
            origin,
            wndLayer,
            1,
            125 * nIdx + 170,
            80,
            100,
            0);

        xbstr_t name(ad.characterStat.sCharacterName.data());
        auto textW = m_pFont[0]->CalcTextWidth(name, vtMissing);
        textW = std::min<unsigned long>(textW + 18, 58);

        auto gr = get_gr();
        auto nameLayer = gr->CreateLayer(
            -100,
            0,
            textW,
            22,
            0,
            vtMissing,
            vtMissing);

        m_apNameTag[nIdx] = nameLayer;
        nameLayer->Putcolor(0xFFFFFFFF);
        nameLayer->Putoverlay(Ztl_variant_t(static_cast<IUnknown*>(wndLayer)));
        nameLayer->Putz(1);
        nameLayer->Putorigin(Ztl_variant_t(static_cast<IUnknown*>(wndLayer)));

        auto w = 125 * nIdx;
        Z_CHECK_HR(nameLayer->RelMove(
            w / 2 + 176, // TODO (((char*)var_38 - ((eax_67 - edx_30) >> 1)) + 0xb0)
            80,
            vtMissing,
            vtMissing));
        DrawNameTag(nIdx, false);

        auto job = ad.characterStat._ZtlSecureGet_nJob();
        ZXString16 jobName;
        auto& sp = StringPool::GetInstance();
        if (is_cygnus_job(job))
        {
            jobName = sp.GetStringW(0x558);
        }
        else if (is_aran_job(job))
        {
            jobName = sp.GetStringW(0x1414);
        }
        else if (is_evan_job(job))
        {
            jobName = sp.GetStringW(0x15a8);
        }
        else if (is_resistance_job(job))
        {
            jobName = sp.GetStringW(0x1971);
        }
        else
        {
            jobName = sp.GetStringW(0x1415);
        }

        auto jname = reinterpret_cast<const wchar_t*>(jobName.c_str());
        _x_com_ptr<IWzVector2D> wndOrigin(wndLayer);
        const auto decLayer = CAnimationDisplayer::LoadLayer(
            jname,
            false,
            wndOrigin,
            w + 176,
            80,
            wndLayer,
            0,
            0xff,
            0);
        m_apPremiumDecoration[nIdx] = decLayer;
        decLayer->Putcolor(0xFFFFFFFF);
        m_apEmptySlotBase[nIdx] = 0;
    }
    else
    {
        //TODO
        m_apEmptySlotBase[nIdx] = 0;
    }*/

    __sub_001E6C60(this, nullptr, nIdx, (AvatarData&)ad, bBuyCharacter);
}

void CUIAvatar::NextPage() const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIAvatar::PrevPage() const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIAvatar::DrawNameTag(long nIdx, int32_t bSelected)
{
    __sub_001E2940(this, nullptr, nIdx, bSelected);
}

_x_com_ptr<IWzGr2DLayer> CUIAvatar::MakeBalloon(long nWidth, long nHeight)
{
    _x_com_ptr<IWzGr2DLayer> ret;
    return *__sub_001E58C0(this, nullptr, &ret, nWidth, nHeight);
}

long CUIAvatar::GetSelectedIdx(tagPOINT pt)
{
    return __sub_001E1120(this, nullptr, CreateNakedParam(pt));
}

long CUIAvatar::GetPageSize() const
{
    return (m_nSlotCount + 3) / 3;
}

long CUIAvatar::GetRealIndex(long arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUIAvatar::IsSlotEnable(long arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIAvatar& CUIAvatar::operator=(const CUIAvatar& arg0)
{
    return _op_assign_21(this, arg0);
}

CUIAvatar& CUIAvatar::_op_assign_21(CUIAvatar* pThis, const CUIAvatar& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUICharDetail::~CUICharDetail()
{
    //UNIMPLEMENTED; // _dtor_0();
}

void CUICharDetail::_dtor_0()
{
    return __sub_001E06F0(this, nullptr);
}

CUICharDetail::CUICharDetail(const CUICharDetail& arg0)
{
    _ctor_1(arg0);
}

void CUICharDetail::_ctor_1(const CUICharDetail& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUICharDetail::CUICharDetail(CLogin* pLogin, long nIdx)
{
    ms_pInstance = this;

    m_pLogin = pLogin;
    m_nIdx = nIdx;
    const auto& rank = m_pLogin->GetRank(m_nIdx);
    m_bRankInfo = rank.nWorldRank && rank.nJobRank;
    m_bCheck = 0;

    const tagPOINT pt{
        .x = 130 * (nIdx % 3) - 220,
        .y = m_bRankInfo ? 1384 : 1348
    };
    m_bCheck = false;
    SetOption(0, 255, 0, pt, pt, pt, 80, 0, 80);
    CreateFadeWnd(183, m_bRankInfo ? 151 : 115, nullptr, 10, 0, nullptr, 0, Origin_LT);
    //_ctor_0(pLogin, nIdx);
}

void CUICharDetail::_ctor_0(CLogin* pLogin, long nIdx)
{
    new(this) CUICharDetail(pLogin, nIdx);
    //return __sub_001E0590(this, nullptr, pLogin, nIdx);
}

void CUICharDetail::Draw(const tagRECT* arg0)
{
    __sub_001E8860(this, nullptr, arg0);
}

void CUICharDetail::Delete()
{
    //__sub_001E02B0(this, nullptr);
    if (auto charDetail = ms_pInstance)
    {
        charDetail->Destroy();
        delete charDetail;
    }
}

void CUICharDetail::OnPreFadeIn()
{
    //__sub_001E55A0(this, nullptr);

    if (m_bCheck)
    {
        auto aniState = m_pLayerAni->GetanimationState();
        if (aniState == 0)
        {
            CFadeWnd::OnPreFadeIn();
            m_bCheck = false;
        }
    }
    else
    {
        auto& sp = StringPool::GetInstance();
        auto uolFmt = sp.GetStringW(0xBCD);
        auto rankNum = m_bRankInfo ? 2 : 0;
        auto uol = ZXString16::FromFmt(uolFmt.c_str(), rankNum);

        auto layer = GetLayer();
        auto layerVec = layer.Cast<IWzVector2D>();

        m_pLayerAni = CAnimationDisplayer::LoadLayer(
            uol.c_str(),
            0,
            layerVec,
            -20,
            -25,
            layer,
            -1,
            255,
            0);
        Z_CHECK_HR(m_pLayerAni->Animate(GA_STOP, vtMissing, vtMissing));


        play_ui_sound_str(0x4FF);
        m_bCheck = true;
    }
}

long CUICharDetail::GetIdx() const
{
    return m_nIdx;
}

CUICharDetail& CUICharDetail::operator=(const CUICharDetail& arg0)
{
    return _op_assign_7(this, arg0);
}

CUICharDetail& CUICharDetail::_op_assign_7(CUICharDetail* pThis, const CUICharDetail& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUICharSelect::~CUICharSelect()
{
    ms_pInstance = nullptr;
}

void CUICharSelect::_dtor_0()
{
    this->~CUICharSelect();
    // return __sub_001E2130(this, nullptr);
}

CUICharSelect::CUICharSelect(const CUICharSelect& arg0)
{
    _ctor_1(arg0);
}

void CUICharSelect::_ctor_1(const CUICharSelect& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUICharSelect::CUICharSelect(CLogin* pData)
{
    ms_pInstance = this;
    m_pLogin = pData;
    CreateWnd(255, -1359, 101, 131, 10, false, pData, true, Origin_LT);
    //_ctor_0( pData);
}

void CUICharSelect::_ctor_0(CLogin* pData)
{
    new(this) CUICharSelect(pData);
    // return __sub_001E2040(this, nullptr, pData);
}

void CUICharSelect::OnCreate(void* pData)
{
    const auto btSelect = StringPool::GetInstance().GetStringW(0x553);
    m_apButton[0] = new CCtrlButton();
    CCtrlButton::CREATEPARAM paramSel;
    paramSel.bAcceptFocus = true;
    paramSel.sUOL = btSelect;
    m_apButton[0]->CreateCtrl(this, ID_CTRL_CHARSELECT_BT_SEL, 4, -2, 0, &paramSel);

    const auto btNew = StringPool::GetInstance().GetStringW(0x554);
    m_apButton[1] = new CCtrlButton();
    CCtrlButton::CREATEPARAM paramNew;
    paramNew.bAcceptFocus = true;
    paramNew.sUOL = btNew;
    m_apButton[1]->CreateCtrl(this, ID_CTRL_CHARSELECT_BT_NEW, 4, 36, 0, &paramNew);

    const auto btDel = StringPool::GetInstance().GetStringW(0x555);
    m_apButton[2] = new CCtrlButton();
    CCtrlButton::CREATEPARAM paramDel;
    paramDel.bAcceptFocus = true;
    paramDel.sUOL = btDel;
    m_apButton[2]->CreateCtrl(this, ID_CTRL_CHARSELECT_BT_DEL, 4, 85, 0, &paramDel);


    if (const auto ctx = CWvsContext::GetInstance(); ctx && !ctx->GetTotalCharacterCount() && ctx->
        GetJustCreatedCharacter())
    {
        MakeAdvice();
    }


    //__sub_001E8550(this, nullptr, pData);
}

void CUICharSelect::OnButtonClicked(uint32_t nId)
{
    //__sub_001E0350(this, nullptr, nId);
    if (!IsRequestValid())
    {
        return;
    }

    SetKeyFocus(-1);
    m_nBtIdx = nId - 1000;
    if (!m_pLogin->IsStepChanging())
    {
        switch (nId)
        {
        case ID_CTRL_CHARSELECT_BT_SEL:
            m_pLogin->SendSelectCharPacket();
            break;
        case ID_CTRL_CHARSELECT_BT_NEW:
            m_pLogin->OnNewCharStep(0);
            break;
        case ID_CTRL_CHARSELECT_BT_DEL:
            m_pLogin->SendDeleteCharPacket();
            break;
        default:
            UNIMPLEMENTED;
        }
    }


    if (const auto wndMan = CWndMan::GetInstance())
    {
        wndMan->SetFocus(this);
    }
}

void CUICharSelect::OnKey(uint32_t wParam, int32_t lParam)
{
    spdlog::info("Handling char select key");
    if (wParam == VK_F11)
    {
        m_pLogin->SetCharSelected(0);
        m_pLogin->SendSelectCharPacket();
    }
    __sub_001E03D0(this, nullptr, wParam, lParam);
}

int32_t CUICharSelect::OnSetFocus(int32_t bFocus)
{
    //return __sub_001E0530(this, nullptr, bFocus);
    if (bFocus)
    {
        SetKeyFocus(m_nBtIdx);
        m_pLogin->SetFocusedUI(this);
    }
    else
    {
        SetKeyFocus(-1);
    }


    return CWnd::OnSetFocus(bFocus);
}

void CUICharSelect::MakeAdvice()
{
    __sub_001E5280(this, nullptr);
}

void CUICharSelect::Update()
{
    auto selected = m_pLogin->GetCharSelected() >= 0;
    m_apButton[0]->SetEnable(selected);
    m_apButton[2]->SetEnable(selected);
    CWnd::Update();
    //__sub_001E0220(this, nullptr);
}

void CUICharSelect::SetKeyFocus(long nIdx)
{
    //__sub_001E0270(this, nullptr, nIdx);
    for (auto& btn : m_apButton)
    {
        btn->SetKeyFocus(0);
    }

    if (nIdx < m_apButton.size())
    {
        m_apButton[nIdx]->SetKeyFocus(1);
    }
}

int32_t CUICharSelect::IsRequestValid() const
{
    return !m_pLogin->IsRequestSent() && m_pLogin->GetLoginStep() == 2;
}

_x_com_ptr<IWzGr2DLayer> CUICharSelect::MakeBalloon(long nWidth, long nHeight, int32_t bArrowType)
{
    _x_com_ptr<IWzGr2DLayer> ret;
    return *__sub_001E3C10(this, nullptr, &ret, nWidth, nHeight, bArrowType);
}

CUICharSelect& CUICharSelect::operator=(const CUICharSelect& arg0)
{
    return _op_assign_12(this, arg0);
}

CUICharSelect& CUICharSelect::_op_assign_12(CUICharSelect* pThis, const CUICharSelect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUICharDetailVAC::~CUICharDetailVAC()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUICharDetailVAC::_dtor_0()
{
    return __sub_001E1580(this, nullptr);
}

CUICharDetailVAC::CUICharDetailVAC(const CUICharDetailVAC& arg0)
{
    _ctor_1(arg0);
}

void CUICharDetailVAC::_ctor_1(const CUICharDetailVAC& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUICharDetailVAC::CUICharDetailVAC(CLogin* pLogin, long nIdx)
{
    _ctor_0(pLogin, nIdx);
}

void CUICharDetailVAC::_ctor_0(CLogin* pLogin, long nIdx)
{
    return __sub_001E1440(this, nullptr, pLogin, nIdx);
}

void CUICharDetailVAC::Draw(const tagRECT* arg0)
{
    __sub_001EA350(this, nullptr, arg0);
}

void CUICharDetailVAC::Delete()
{
    __sub_001E02E0(this, nullptr);
}

void CUICharDetailVAC::OnPreFadeIn()
{
    __sub_001E0160(this, nullptr);
}

long CUICharDetailVAC::GetIdx() const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUICharDetailVAC& CUICharDetailVAC::operator=(const CUICharDetailVAC& arg0)
{
    return _op_assign_7(this, arg0);
}

CUICharDetailVAC& CUICharDetailVAC::_op_assign_7(CUICharDetailVAC* pThis, const CUICharDetailVAC& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t __cdecl _anon__PtInRect(tagRECT& rt, tagPOINT& pt)
{
    //return __sub_001E0100(rt, pt);
    return PtInRect(&rt, pt);
}
