// LoginWnd_World.cpp
#include "LoginWnd_World.hpp"

#include "spdlog/spdlog.h"

static ZList<Ztl_bstr_t> FAKE_ZListZtl_bstr_t_{};

#include "LoginWnd_World_regen.ipp"

CUIChannelSelect::~CUIChannelSelect()
{
    ms_pInstance = nullptr;
}

void CUIChannelSelect::_dtor_0()
{
    return __sub_002030A0(this, nullptr);
}

CUIChannelSelect::CUIChannelSelect(const CUIChannelSelect& arg0)
{
    _ctor_1(arg0);
}

void CUIChannelSelect::_ctor_1(const CUIChannelSelect& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIChannelSelect::CUIChannelSelect(void* pData)
{
    ms_pInstance = this;
    SetOption(0xff, 0xff, 0xff,
              tagPOINT{-154, -914},
              tagPOINT{-154, -714},
              tagPOINT{-154, -914},
              300, 0, 200);

    CreateFadeWnd(
        448, 233, nullptr, 0xC0007D03, false, pData,
        true, Origin_LT);

    const auto dummyLayer = m_pLayerDummy;
    auto layer = GetLayer();
    const auto origin = layer.Cast<IWzVector2D>();

    auto layerUOL = StringPool::GetInstance().GetStringW(0x583);
    m_pLayerScroll = CAnimationDisplayer::LoadLayer(
        reinterpret_cast<const wchar_t*>(layerUOL.c_str()),
        false,
        origin,
        0, 0,
        dummyLayer,
        0, 0xff, 0);

    //_ctor_0( pData);
}

void CUIChannelSelect::_ctor_0(void* pData)
{
    new(this) CUIChannelSelect(pData);
    // return __sub_00202E60(this, nullptr, pData);
}

void CUIChannelSelect::OnCreate(void* pData)
{
    __sub_00206A10(this, nullptr, pData);
}

void CUIChannelSelect::OnButtonClicked(uint32_t nId)
{
    __sub_002035F0(this, nullptr, nId);
}

void CUIChannelSelect::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_00203620(this, nullptr, msg, wParam, rx, ry);
}

void CUIChannelSelect::OnKey(const uint32_t wParam, const int32_t lParam)
{
    __sub_002036B0(this, nullptr, wParam, lParam);
}

int32_t CUIChannelSelect::OnSetFocus(const int32_t bFocus)
{
    return __sub_002020F0(this, nullptr, bFocus);
}

void CUIChannelSelect::Draw(const tagRECT* pRect)
{
    __sub_002056D0(this, nullptr, pRect);
}

void CUIChannelSelect::OnPreFadeIn()
{
    CFadeWnd::OnPreFadeIn();
    //__sub_00202120(this, nullptr);
}

void CUIChannelSelect::OnPostFadeOut()
{
    CFadeWnd::OnPostFadeOut();
    //__sub_00202130(this, nullptr);
}

void CUIChannelSelect::Delete()
{
    //__sub_00202460(this, nullptr);
    if (ms_pInstance)
    {
        ms_pInstance->Destroy();
        ms_pInstance->DestroyInstance();
    }
}

void CUIChannelSelect::ResetInfo(const long nWorldIdx, const long bPopulateLevel, const int32_t bRedraw)
{
    __sub_00206210(this, nullptr, nWorldIdx, bPopulateLevel, bRedraw);
}

void CUIChannelSelect::DrawNoticeConnecting()
{
    m_pConnectionDlg = new CConnectionNoticeDlg(m_pLogin);
    m_pConnectionDlg->DoModal();
    m_pConnectionDlg = 0;
    //__sub_00202BA0(this, nullptr);
}

void CUIChannelSelect::RemoveNoticeConnecting()
{
    if (m_pConnectionDlg)
    {
        m_pConnectionDlg->SetRet(3);
    }
}

tagRECT CUIChannelSelect::GetRect(const long nIdx) const
{
    // TODO verify

    tagRECT ret{};
    const auto a = nIdx / 5;
    const auto b = nIdx % 5 * 0x21;

    ret.left = b * 2 + 0x17;
    ret.top = a * 0x1d + 0x5d;
    ret.right = b * 2 + 0x54;
    ret.bottom = a * 0x1d + 0x72;
    return ret;

    // return __sub_00202140(this, nullptr, nIdx);
}

long CUIChannelSelect::GetChannelIDFromPt(const tagPOINT& pt) const
{
    auto& ci = m_pWorldItem->ci;
    for (auto i = 0; i < ci.GetCount(); i++)
    {
        auto rc = GetRect(ci[i].nChannelID);
        if (PtInRect(&rc, pt))
        {
            return i;
        }
    }

    return -1;

    //return __sub_002029F0(this, nullptr, pt);
}

long CUIChannelSelect::GetCharCount(const char* arg0, ZXString<char> arg1) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUIChannelSelect::IsRequestValid() const
{
    //return __sub_00202190(this, nullptr);
    return !m_pLogin->IsRequestSent() && m_pLogin->GetLoginStep() == 1 && !m_bClose;
}

void CUIChannelSelect::CreateEventDescBalloon(ZXString<char> arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIChannelSelect::MakeBalloon(long arg0, long arg1, long arg2) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIChannelSelect::SetSelected(const long nChannelID)
{
    if (m_nSelect == nChannelID)
    {
        return;
    }

    m_nSelect = nChannelID;

    if (m_nSelect == -1)
    {
        m_pLayerSelect = 0;
        return;
    }

    auto rc = GetRect(nChannelID);


    auto layer = GetLayer();
    const auto origin = layer.Cast<IWzVector2D>();

    auto str586 = StringPool::GetInstance().GetStringW(0x586);
    const auto x = rc.left - 2;
    const auto y = rc.top - 3;
    m_pLayerSelect = CAnimationDisplayer::LoadLayer(
        reinterpret_cast<const wchar_t*>(str586.c_str()), false, origin, x, y, layer, -1, 0xff, 0);

    Z_CHECK_HR(m_pLayerSelect->Animate(GA_REPEAT, vtMissing, vtMissing));
    //__sub_00203200(this, nullptr, nChannelID);
}

void CUIChannelSelect::SelectChannel(const long nChannelID)
{
    SetSelected(nChannelID);
    auto str = StringPool::GetInstance().GetStringW(0x57F);
    play_ui_sound(reinterpret_cast<const wchar_t*>(str.c_str()));
    //__sub_002034E0(this, nullptr, nChannelID);
}

void CUIChannelSelect::EnterChannel(const long nChannelID)
{
    spdlog::info("Entering channel: {}", nChannelID);
    if (m_pLogin->IsStepChanging() || !m_pLogin->SendLoginPacket(m_pWorldItem->nWorldID, nChannelID))
        return;
    DrawNoticeConnecting();
    //__sub_00203570(this, nullptr, nChannelID);
}

CUIChannelSelect& CUIChannelSelect::operator=(const CUIChannelSelect& arg0)
{
    return _op_assign_24(this, arg0);
}

CUIChannelSelect& CUIChannelSelect::_op_assign_24(CUIChannelSelect* pThis, const CUIChannelSelect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIChannelSelect::DescInfo::~DescInfo()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIChannelSelect::DescInfo::_dtor_0() const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIChannelSelect::DescInfo::DescInfo(const CUIChannelSelect::DescInfo& arg0)
{
    _ctor_1(arg0);
}

void CUIChannelSelect::DescInfo::_ctor_1(const CUIChannelSelect::DescInfo& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIChannelSelect::DescInfo::DescInfo()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUIChannelSelect::DescInfo::_ctor_0() const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIChannelSelect::DescInfo& CUIChannelSelect::DescInfo::operator=(const CUIChannelSelect::DescInfo& arg0)
{
    return _op_assign_3(this, arg0);
}

CUIChannelSelect::DescInfo& CUIChannelSelect::DescInfo::_op_assign_3(CUIChannelSelect::DescInfo* pThis,
                                                                     const CUIChannelSelect::DescInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIRecommendWorld::~CUIRecommendWorld()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIRecommendWorld::_dtor_0()
{
    return __sub_002066A0(this, nullptr);
}

CUIRecommendWorld::CUIRecommendWorld(const CUIRecommendWorld& arg0)
{
    _ctor_1(arg0);
}

void CUIRecommendWorld::_ctor_1(const CUIRecommendWorld& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIRecommendWorld::CUIRecommendWorld(CLogin* pData)
{
    ms_pInstance = this;
    CreateDlg(0x12e, 0x98, 0xc8, 0xe4, 0xa, 1, pData, Origin_LT);
    //_ctor_0( pData);
}

void CUIRecommendWorld::_ctor_0(CLogin* pData)
{
    new(this) CUIRecommendWorld(pData);
    // return __sub_002065C0(this, nullptr, pData);
}

void CUIRecommendWorld::OnCreate(void* pData)
{
    __sub_002073A0(this, nullptr, pData);
}

void CUIRecommendWorld::OnButtonClicked(uint32_t nId)
{
    __sub_00207910(this, nullptr, nId);
}

void CUIRecommendWorld::Draw(const tagRECT* pRect)
{
    __sub_00203980(this, nullptr, pRect);
}

void CUIRecommendWorld::OnChildNotify(const uint32_t nId, const uint32_t param1, const uint32_t param2)
{
    __sub_002021F0(this, nullptr, nId, param1, param2);
}

void CUIRecommendWorld::SetRet(const long nRet)
{
    __sub_002024D0(this, nullptr, nRet);
}

int32_t CUIRecommendWorld::HitTest(const long rx, const long ry, CCtrlWnd** ppCtrl)
{
    return __sub_00202240(this, nullptr, rx, ry, ppCtrl);
}

int32_t CUIRecommendWorld::OnSetFocus(const int32_t bFocus)
{
    return __sub_00202280(this, nullptr, bFocus);
}

void CUIRecommendWorld::OnMouseButton(const uint32_t msg, const uint32_t wParam, const long rx, const long ry)
{
    __sub_00202570(this, nullptr, msg, wParam, rx, ry);
}

int32_t CUIRecommendWorld::IsRequestValid()
{
    return __sub_002021C0(this, nullptr);
}

void CUIRecommendWorld::SelectWorld()
{
    __sub_00202490(this, nullptr);
}

void CUIRecommendWorld::MoveWorld(const long nMovement)
{
    __sub_002078D0(this, nullptr, nMovement);
}

void CUIRecommendWorld::ViewWorldSelect() const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIRecommendWorld::ResetWorldAndMessage(int32_t bRedraw)
{
    __sub_00206E10(this, nullptr, bRedraw);
}

CUIRecommendWorld& CUIRecommendWorld::operator=(const CUIRecommendWorld& arg0)
{
    return _op_assign_16(this, arg0);
}

CUIRecommendWorld& CUIRecommendWorld::_op_assign_16(CUIRecommendWorld* pThis, const CUIRecommendWorld& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIWorldSelect::~CUIWorldSelect()
{
    ms_pInstance = nullptr;
}

void CUIWorldSelect::_dtor_0()
{
    this->~CUIWorldSelect();
    // return __sub_00202D70(this, nullptr);
}

CUIWorldSelect::CUIWorldSelect(const CUIWorldSelect& arg0)
{
    _ctor_1(arg0);
}

void CUIWorldSelect::_ctor_1(const CUIWorldSelect& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIWorldSelect::CUIWorldSelect(CLogin* pData)
{
    ms_pInstance = this;
    CreateDlg(-249, -862, 564, 156, 9, 0, pData, Origin_LT);
}

void CUIWorldSelect::_ctor_0(CLogin* pData)
{
    new(this) CUIWorldSelect(pData);
    // return __sub_00202C80(this, nullptr, pData);
}

void CUIWorldSelect::OnCreate(void* pData)
{
    m_pLogin = static_cast<CLogin*>(pData);

    auto gr = get_gr();
    m_pLayerWorldInfo = gr->CreateLayer(0, 0, 0x234, 0xB1, 10, vtMissing, vtMissing);

    auto layer = GetLayer();
    //TODO: check if this cast is correct
    Ztl_variant_t vOrigin(static_cast<IUnknown*>(layer));
    Z_CHECK_HR(m_pLayerWorldInfo->put_origin(vOrigin));
    Z_CHECK_HR(m_pLayerWorldInfo->RelMove(-10, -10, vtMissing, vtMissing));

    Ztl_variant_t vOverlay(static_cast<IUnknown*>(layer));
    Z_CHECK_HR(m_pLayerWorldInfo->put_overlay(vOverlay));



    //m_pLayerWorldInfo->

    m_pLayerWorldInfo->Putcolor(0xFFFFFFFF);
    nBalloonCount = 0;
    m_nKeyFocus = -1;
    m_apLayerBalloon.RemoveAll();
    DrawWorldItems();
    //__sub_0020B660(this, nullptr, pData);
}

void CUIWorldSelect::OnButtonClicked(uint32_t nId)
{
    if (!IsRequestValid())
    {
        return;
    }


    const long id = static_cast<long>(nId) - ID_CTRL_WORLDSELECT_BT;
    if (id  < 0 || id >= m_nWorld)
    {
        return;
    }

    m_nKeyFocus = id;
    EnableButtons(id);
    SetKeyFocus(-1);
    m_nWorldIdx = id;
    m_pLogin->SendCheckUserLimitPacket(id);

    if (const auto wndMan = CWndMan::GetInstance())
    {
        if (const auto recWrld = CUIRecommendWorld::GetInstance())
        {
            wndMan->SetFocus(recWrld);
        }
        else if (const auto chnSel = CUIChannelSelect::GetInstance())
        {
            wndMan->SetFocus(chnSel);
        }
    }
    //__sub_002025E0(this, nullptr, nId);
}

void CUIWorldSelect::OnKey(const uint32_t wParam, const int32_t lParam)
{
    __sub_00202670(this, nullptr, wParam, lParam);
}

int32_t CUIWorldSelect::OnSetFocus(const int32_t bFocus)
{
    if (!bFocus)
    {
        SetKeyFocus(-1);
    }
    else
    {
        SetKeyFocus(m_nWorld);
        m_pLogin->SetFocusedUI(this);
    }

    return CWnd::OnSetFocus(bFocus);
    //return __sub_00202990(this, nullptr, bFocus);
}

void CUIWorldSelect::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    return;
    //__sub_00202350(this, nullptr, msg, wParam, rx, ry);
}

void CUIWorldSelect::SetRet(long nRet)
{
    //__sub_002020B0(this, nullptr, nRet);
}

void CUIWorldSelect::ResetInfo(long arg0, int32_t arg1) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIWorldSelect::DrawWorldItems()
{
    const auto ctx = CWvsContext::GetInstance();
    for (auto balloons = m_pLogin->GetBalloonInfo(); auto &balloon : balloons)
    {
        MakeWSBalloon(
            Ztl_bstr_t(balloon.sMessage.c_str()),
            balloon.nX,
            balloon.nY);
    }

    m_nWorld = m_pLogin->GetWorldItemCount();
    m_apLayerWorldState.RemoveAll();

    auto &sp = StringPool::GetInstance();
    const auto prop = get_rm()->GetObjectT<IWzProperty>(sp.GetBSTR(0xc9e));

    // auto n = std::min<long>(m_nWorld, 36);
    const auto btnFD = L"UI/Login.img/WorldSelect/BtWorld/%d";
    const auto btnE = L"UI/Login.img/WorldSelect/BtWorld/e";
    for (auto i = 0; i < 36; ++i)
    {
        if (i >= m_nWorld)
        {
            m_pBtWS[i] = new CCtrlButton();
            CCtrlButton::CREATEPARAM cp;
            cp.sUOL = btnE;
            cp.bDrawBack = true;
            cp.bAnimateOnce = true;

            m_pBtWS[i]->CreateCtrl(this,
                            ID_CTRL_WORLDSELECT_BT + i,
                            (i % 6) * 96,
                            (i / 6) * 26,
                            false,
                            &cp);
            m_pBtWS[i]->SetEnable(false);
            continue;
        }

        auto uol = ZXString16::FromFmt(
            btnFD,
            i + 1);

        m_pBtWS[i] = new CCtrlButton();
        CCtrlButton::CREATEPARAM cp;
        cp.sUOL = uol;
        cp.bDrawBack = true;
        cp.bAnimateOnce = true;
        m_pBtWS[i]->CreateCtrl(this,
                        ID_CTRL_WORLDSELECT_BT + i,
                        i % 6 * 96,
                        i / 6 * 26,
                        false,
                        &cp);

        const auto wi = m_pLogin->GetWorldItem(i);

        if (!wi->nWorldState)
        {
            continue;
        }


        wchar_t buf[16]{};
        _itow_s(wi->nWorldState, buf, 10);

        auto state = prop->GetItemT<IWzProperty>(
            Ztl_bstr_t(buf));

        auto lt = m_pLayerWorldInfo->Getlt();

        const auto layer = CAnimationDisplayer::LoadLayer_0(
            _x_com_ptr<IWzProperty>(state),
            false,
            _x_com_ptr<IWzVector2D>(lt),
            i % 6 * 96 + 78,
            i / 6 * 26 + 6,
            m_pLayerWorldInfo,
            0,
            0xff,
            0);

        Z_CHECK_HR(layer->Animate(
            GA_REPEAT,
            vtMissing,
            vtMissing));

        m_apLayerWorldState.Insert(layer);
    }

    if (ctx && !ctx->GetTotalCharacterCount())
    {
        MakeAdvice();
    }
    InvalidateRect(nullptr);
    //__sub_0020AE10(this, nullptr);
}

void CUIWorldSelect::EnableButtons(long nSelIdx)
{
    __sub_00202360(this, nullptr, nSelIdx);
    spdlog::info("btn 0 enabled {}", m_pBtWS[0]->IsEnabled());
}

void CUIWorldSelect::SetFocusWorld(long nWorldID)
{
    //__sub_00202410(this, nullptr, nWorldID);
    for (auto i = 0; i < m_nWorld; ++i)
    {
        auto wi = m_pLogin->GetWorldItem(i);
        if (wi->nWorldID != nWorldID)
        {
            continue;
        }


        m_nKeyFocus = i;
        SetKeyFocus(i);
    }
}

void CUIWorldSelect::UserLimitResult(long bOverUserLimit, long bPopulateLevel)
{
    __sub_00206870(this, nullptr, bOverUserLimit, bPopulateLevel);
}

void CUIWorldSelect::MakeAdvice()
{
    __sub_002053B0(this, nullptr);
}

void CUIWorldSelect::SetKeyFocus(const long nIdx)
{
    for (auto i = 0; i < m_nWorld; i++)
    {
        m_pBtWS[i]->SetKeyFocus(false);
    }
    if (nIdx >= 0 && nIdx < m_nWorld)
    {
        m_pBtWS[nIdx]->SetKeyFocus(true);
    }
    //__sub_002023C0(this, nullptr, nIdx);
}

void CUIWorldSelect::ToggleScroll() const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUIWorldSelect::IsRequestValid()
{
    //return __sub_002020C0(this, nullptr);
    return !m_pLogin->IsRequestSent() && m_pLogin->GetLoginStep() == 1;
}

_x_com_ptr<IWzGr2DLayer> CUIWorldSelect::MakeBalloon(long nWidth, long nHeight, int32_t bArrowType)
{
    _x_com_ptr<IWzGr2DLayer> ret;
    return *__sub_00203D40(this, nullptr, &ret, nWidth, nHeight, bArrowType);
}

_x_com_ptr<IWzCanvas> CUIWorldSelect::CreateCanvas(Ztl_bstr_t bsText, uint32_t uFontColor,
                                                   _x_com_ptr<IWzProperty> pProp)
{
    _x_com_ptr<IWzCanvas> ret;
    return *__sub_00207970(this, nullptr, &ret, CreateNakedParam(bsText), uFontColor, CreateNakedParam(pProp));
}

void CUIWorldSelect::MakeWSBalloon(Ztl_bstr_t arg0, long arg1, long arg2)
{
    __sub_0020A0F0(this, nullptr, CreateNakedParam(arg0), arg1, arg2);
}

CUIWorldSelect& CUIWorldSelect::operator=(const CUIWorldSelect& arg0)
{
    return _op_assign_21(this, arg0);
}

CUIWorldSelect& CUIWorldSelect::_op_assign_21(CUIWorldSelect* pThis, const CUIWorldSelect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIWorldSelect::DescInfo::~DescInfo()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIWorldSelect::DescInfo::_dtor_0() const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIWorldSelect::DescInfo::DescInfo(const CUIWorldSelect::DescInfo& arg0)
{
    _ctor_1(arg0);
}

void CUIWorldSelect::DescInfo::_ctor_1(const CUIWorldSelect::DescInfo& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIWorldSelect::DescInfo::DescInfo()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUIWorldSelect::DescInfo::_ctor_0() const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIWorldSelect::DescInfo& CUIWorldSelect::DescInfo::operator=(const CUIWorldSelect::DescInfo& arg0)
{
    return _op_assign_3(this, arg0);
}

CUIWorldSelect::DescInfo& CUIWorldSelect::DescInfo::_op_assign_3(CUIWorldSelect::DescInfo* pThis,
                                                                 const CUIWorldSelect::DescInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
