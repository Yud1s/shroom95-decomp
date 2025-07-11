// LoginWnd_New.cpp
#include "LoginWnd_New.hpp"

static ZRef<CConfirmRaceDlg> FAKE_ZRef_CConfirmRaceDlg{};

#include "LoginWnd_New_regen.ipp"

CUINewCharJobSelect::CUINewCharJobSelect()
{
}

CUINewCharJobSelect::~CUINewCharJobSelect()
{
    ms_pInstance = nullptr;
}

void CUINewCharJobSelect::_dtor_0()
{
    this->~CUINewCharJobSelect();
    // return __sub_001F4C20(this, nullptr);
}

CUINewCharJobSelect::CUINewCharJobSelect(const CUINewCharJobSelect& arg0)
{
    _ctor_1(arg0);
}

void CUINewCharJobSelect::_ctor_1(const CUINewCharJobSelect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharJobSelect::CUINewCharJobSelect(CLogin* pLogin)
{
    ms_pInstance = this;
    m_pLogin = pLogin;
    //_ctor_0( pLogin);
}

void CUINewCharJobSelect::_ctor_0(CLogin* pLogin)
{
    new(this) CUINewCharJobSelect(pLogin);
    // return __sub_001F4BA0(this, nullptr, pLogin);
}

void CUINewCharJobSelect::OnCreate(void* pData)
{
    __sub_001FA760(this, nullptr, pData);
}

void CUINewCharJobSelect::Draw(const tagRECT* pRect)
{
    __sub_001F38E0(this, nullptr, pRect);
}

void CUINewCharJobSelect::Delete()
{
    __sub_001F35A0(this, nullptr);
}

void CUINewCharJobSelect::OnButtonClicked(uint32_t nId)
{
    __sub_001F35D0(this, nullptr, nId);
}

void CUINewCharJobSelect::OnKey(const uint32_t wParam, const int32_t lParam)
{
    if ((lParam & 0x80000000) == 0)
    {
        if (wParam == VK_RETURN)
            m_pLogin->OnNewCharJobSel();
        else if (wParam == VK_ESCAPE)
            m_pLogin->OnNewCharJobSelCanceled();
    }

    //__sub_001F3430(this, nullptr, wParam, lParam);
}

int32_t CUINewCharJobSelect::IsRequestValid()
{
    return __sub_001F3460(this, nullptr);
}

CUINewCharJobSelect& CUINewCharJobSelect::operator=(const CUINewCharJobSelect& arg0)
{
    return _op_assign_9(this, arg0);
}

CUINewCharJobSelect& CUINewCharJobSelect::_op_assign_9(CUINewCharJobSelect* pThis, const CUINewCharJobSelect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelect::~CUINewCharAvatarSelect()
{
    ms_pInstance = nullptr;
}

void CUINewCharAvatarSelect::_dtor_0()
{
    this->~CUINewCharAvatarSelect();
    // return __sub_001F3BF0(this, nullptr);
}

CUINewCharAvatarSelect::CUINewCharAvatarSelect(const CUINewCharAvatarSelect& arg0)
{
    _ctor_1(arg0);
}

void CUINewCharAvatarSelect::_ctor_1(const CUINewCharAvatarSelect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelect::CUINewCharAvatarSelect(CLogin* pLogin)
{
    //_ctor_0(pLogin);
    ms_pInstance = this;
    m_pLogin = pLogin;
}

void CUINewCharAvatarSelect::_ctor_0(CLogin* pLogin)
{
    new(this) CUINewCharAvatarSelect(pLogin);
    // return __sub_001F3AF0(this, nullptr, pLogin);
}

void CUINewCharAvatarSelect::OnCreate(void* pData)
{
    __sub_001F3340(this, nullptr, pData);
}

void CUINewCharAvatarSelect::Draw(const tagRECT* pRect)
{
    __sub_001F51A0(this, nullptr, pRect);
}

void CUINewCharAvatarSelect::Delete()
{
    __sub_001F3680(this, nullptr);
}

void CUINewCharAvatarSelect::OnButtonClicked(uint32_t nId)
{
    __sub_001F36B0(this, nullptr, nId);
}

void CUINewCharAvatarSelect::OnKey(uint32_t wParam, int32_t lParam)
{
    __sub_001F3490(this, nullptr, wParam, lParam);
}

int32_t CUINewCharAvatarSelect::IsRequestValid()
{
    return __sub_001F34C0(this, nullptr);
}

CUINewCharAvatarSelect& CUINewCharAvatarSelect::operator=(const CUINewCharAvatarSelect& arg0)
{
    return _op_assign_9(this, arg0);
}

CUINewCharAvatarSelect& CUINewCharAvatarSelect::_op_assign_9(CUINewCharAvatarSelect* pThis,
                                                             const CUINewCharAvatarSelect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelect::~CUINewCharNameSelect()
{
    // UNIMPLEMENTED; // _dtor_0();
}

void CUINewCharNameSelect::_dtor_0()
{
    this->~CUINewCharNameSelect();
    // return __sub_001F3A10(this, nullptr);
}

CUINewCharNameSelect::CUINewCharNameSelect(const CUINewCharNameSelect& arg0)
{
    _ctor_1(arg0);
}

/*void CUINewCharNameSelect::_ctor_1(const CUINewCharNameSelect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}*/

CUINewCharNameSelect::CUINewCharNameSelect(CLogin* arg0)
{
    //_ctor_0(arg0);
    m_pLogin = arg0;
    /*const auto uiRace = m_pLogin->ConvertSelectedRaceToUIRace();
    CreateWnd(109, -2613 - uiRace * 600, 201, 224, 10, false, nullptr, true, Origin_LT);*/
}

/*void CUINewCharNameSelect::_ctor_0(CLogin* arg0)
{
    new(this) CUINewCharNameSelect(arg0);
}*/

/*void CUINewCharNameSelect::OnCreate(void* pData)
{
    __sub_001F3330(this, nullptr, pData);
}*/

void CUINewCharNameSelect::OnButtonClicked(uint32_t nId)
{
    __sub_001F4FE0(this, nullptr, nId);
}

void CUINewCharNameSelect::OnKey(uint32_t wParam, int32_t lParam)
{
    if (!lParam)
        return;

    if (wParam == VK_RETURN)
    {
        if (!IsRequestValid())
        {
            return;
        }

        if (const auto txt = m_pEditID->GetText(); !txt.IsEmpty())
        {
            m_pLogin->SendCheckDuplicateIDPacket(txt);
        }
    }
    else if (wParam == VK_ESCAPE)
    {
        m_pLogin->OnNewCharCanceled();
    }
    //__sub_001F5090(this, nullptr, wParam, lParam);
}

int32_t CUINewCharNameSelect::OnSetFocus(int32_t bFocus)
{
    return __sub_001F33D0(this, nullptr, bFocus);
}

int32_t CUINewCharNameSelect::IsRequestValid() const
{
    return m_pLogin->CheckValidStep(CLogin::LS_NEWCHAR_NAME);
    //return __sub_001F3400(this, nullptr);
}

CUINewCharNameSelect& CUINewCharNameSelect::operator=(const CUINewCharNameSelect& arg0)
{
    return _op_assign_8(this, arg0);
}

CUINewCharNameSelect& CUINewCharNameSelect::_op_assign_8(CUINewCharNameSelect* pThis, const CUINewCharNameSelect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharRaceSelect::~CUINewCharRaceSelect()
{
    ms_pInstance = nullptr;
}

void CUINewCharRaceSelect::_dtor_0()
{
    return __sub_001F3E70(this, nullptr);
}

CUINewCharRaceSelect::CUINewCharRaceSelect(const CUINewCharRaceSelect& arg0)
{
    _ctor_1(arg0);
}

void CUINewCharRaceSelect::_ctor_1(const CUINewCharRaceSelect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharRaceSelect::CUINewCharRaceSelect(CLogin* pLogin)
{
    ms_pInstance = this;
    m_pLogin = pLogin;
    m_nSelectedBtnIdx = 5;
    CreateWnd(-372, -2108, 800, 600, static_cast<long>(0xc0000000), false, nullptr, true, Origin_LT);
}

void CUINewCharRaceSelect::_ctor_0(CLogin* pLogin)
{
    new(this) CUINewCharRaceSelect(pLogin);
    // return __sub_001F3D30(this, nullptr, pLogin);
}

void CUINewCharRaceSelect::OnCreate(void* pData)
{
    /*auto& sp = StringPool::GetInstance();
    auto strDual = sp.GetStringW(0x1429);
    auto btNormal = sp.GetStringW(0x)*/

    __sub_001F81C0(this, nullptr, pData);
}

void CUINewCharRaceSelect::OnButtonClicked(const uint32_t nId)
{
    if (nId <= 5 && !m_pLogin->IsStepChanging())
    {
        SelectRaceButton(nId);
        OpenConfirmRaceDlg();
        m_pLogin->ReSetExtraCharInfo();
    }

    CWndMan::GetInstance()->SetFocus(m_pLogin->GetFocusedUI());
    //__sub_001F9470(this, nullptr, nId);
}

void CUINewCharRaceSelect::OnKey(uint32_t wParam, int32_t lParam)
{
    __sub_001F94D0(this, nullptr, wParam, lParam);
}

int32_t CUINewCharRaceSelect::OnSetFocus(int32_t bFocus)
{
    if (bFocus)
        m_pLogin->SetFocusedUI(this);
    return CWnd::OnSetFocus(bFocus);
    //return __sub_001F33A0(this, nullptr, bFocus);
}

void CUINewCharRaceSelect::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    if (param1 == 100)
    {
        OnButtonClicked(nId);
    }
    //__sub_001F3380(this, nullptr, nId, param1, param2);
}

void CUINewCharRaceSelect::Draw(const tagRECT* pRect)
{
    //__sub_001F37D0(this, nullptr, pRect);
    auto layer = GetLayer();
    const auto canvas = GetCanvas();

    const auto h = canvas->Getheight();
    const auto w = canvas->Getwidth();
    Z_CHECK_HR(canvas->DrawRectangle(0, 0, w, h, 0xFFFFFF));

    CWnd::Draw(pRect);
}

int32_t CUINewCharRaceSelect::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    //return __sub_001F3350(this, nullptr, rx, ry, ppCtrl);
    if (const auto res = CWnd::HitTest(rx, ry, ppCtrl); res && ppCtrl && !*ppCtrl)
    {
        return 0;
    }

    return 1;
}

void CUINewCharRaceSelect::SelectRaceButton(uint32_t nId)
{
    m_nSelectedBtnIdx = nId;
    m_nSelectedSubJob = 0;
    switch (nId)
    {
    case ID_CTRL_BT_RACE_DUAL:
        m_nSelectedSubJob = 1;
        m_nSelectedRace = 1;
        break;
    case ID_CTRL_BT_RACE_NORMAL:
        m_nSelectedRace = 1;
        break;
    case ID_CTRL_BT_RACE_CYGNUS:
        m_nSelectedRace = 2;
        break;
    case ID_CTRL_BT_RACE_ARAN:
        m_nSelectedRace = 3;
        break;
    case ID_CTRL_BT_RACE_EVAN:
        m_nSelectedRace = 4;
        break;
    case ID_CTRL_BT_RACE_RES:
        m_nSelectedRace = 0;
        break;


    default:
        UNIMPLEMENTED;
    }


    m_pLogin->SetSelectedRace(m_nSelectedRace);
    m_pLogin->SetSelectedSubJob(m_nSelectedSubJob);


    play_ui_sound_str(0x140C);
    SetKeyFocus(m_nSelectedBtnIdx);
    //__sub_001F4D60(this, nullptr, nId);
}

void CUINewCharRaceSelect::OpenConfirmRaceDlg() const
{
    //TODO in theory this should be ZRef
    const auto raceDlg = new CConfirmRaceDlg();
    raceDlg->SetOption(m_nSelectedRace, m_nSelectedSubJob);
    if (raceDlg->DoModal() == 1)
    {
        m_pLogin->ChangeStep(-1);
    }
    //raceDlg->Destroy();
    delete raceDlg;

    m_pLogin->GetUILoginStart()->OnActivate(1);


    //__sub_001F9370(this, nullptr);
}

void CUINewCharRaceSelect::SetKeyFocus(const long nIdx)
{
    //__sub_001F3560(this, nullptr, nIdx);
    for (auto& btn : m_apButton)
    {
        btn->SetKeyFocus(false);
    }

    if (nIdx < m_apButton.size())
    {
        m_apButton[nIdx]->SetKeyFocus(true);
    }
}

CUINewCharRaceSelect& CUINewCharRaceSelect::operator=(const CUINewCharRaceSelect& arg0)
{
    return _op_assign_16(this, arg0);
}

CUINewCharRaceSelect& CUINewCharRaceSelect::_op_assign_16(CUINewCharRaceSelect* pThis, const CUINewCharRaceSelect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CConfirmRaceDlg::~CConfirmRaceDlg()
{
}

void CConfirmRaceDlg::_dtor_0()
{
    return __sub_001F4AC0(this, nullptr);
}

CConfirmRaceDlg::CConfirmRaceDlg(const CConfirmRaceDlg& arg0)
{
    _ctor_1(arg0);
}

void CConfirmRaceDlg::_ctor_1(const CConfirmRaceDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CConfirmRaceDlg::CConfirmRaceDlg()
{
    auto uol = StringPool::GetInstance().GetStringW(0x15c5);
    CreateDlg(
        reinterpret_cast<const wchar_t*>(uol.c_str()),
        true,
        nullptr,
        false);
    // UNIMPLEMENTED; //_ctor_0();
}

void CConfirmRaceDlg::_ctor_0()
{
    new(this) CConfirmRaceDlg();
    // return __sub_001F49F0(this, nullptr);
}

void CConfirmRaceDlg::OnCreate(void* pData)
{
    __sub_001F7320(this, nullptr, pData);
    /*const auto h = m_pBackgrnd->Getheight();
    const auto w = m_pBackgrnd->Getwidth();
    MoveWnd(10 - w / 2, -40 - h / 2);

    const auto btOk = StringPool::GetInstance().GetStringW(0x15C6);
    CCtrlButton::CREATEPARAM param;
    param.bAcceptFocus = true;
    param.sUOL = btOk;
    const auto btn = new CCtrlButton();
    btn->CreateCtrl(this, 1, 42, 77, 0, &param);
    m_pBtOk = btn;

    const auto btCancel = StringPool::GetInstance().GetStringW(0x15C6);
    CCtrlButton::CREATEPARAM param2;
    param2.bAcceptFocus = true;
    param2.sUOL = btOk;
    const auto btn2 = new CCtrlButton();
    btn2->CreateCtrl(this, 2, 114, 77, 0, &param2);
    m_pBtCancel = btn2;*/
}

void CConfirmRaceDlg::SetOption(long nRace, long nSubJob)
{
    __sub_001F75B0(this, nullptr, nRace, nSubJob);
}

long CConfirmRaceDlg::GetSubJob()
{
    return m_nSubJob;
}

CConfirmRaceDlg& CConfirmRaceDlg::operator=(const CConfirmRaceDlg& arg0)
{
    return _op_assign_6(this, arg0);
}

CConfirmRaceDlg& CConfirmRaceDlg::_op_assign_6(CConfirmRaceDlg* pThis, const CConfirmRaceDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelectAran::~CUINewCharNameSelectAran()
{
    ms_pInstance = nullptr;
}

void CUINewCharNameSelectAran::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelectAran::CUINewCharNameSelectAran(const CUINewCharNameSelectAran& arg0)
{
    _ctor_1(arg0);
}

void CUINewCharNameSelectAran::_ctor_1(const CUINewCharNameSelectAran& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelectAran::CUINewCharNameSelectAran(CLogin* pLogin)
    : CUINewCharNameSelect(pLogin)
{
    ms_pInstance = this;
    //_ctor_0(pLogin);
}

void CUINewCharNameSelectAran::_ctor_0(CLogin* pLogin)
{
    new(this) CUINewCharNameSelectAran(pLogin);
    // return __sub_001F41B0(this, nullptr, pLogin);
}

void CUINewCharNameSelectAran::OnCreate(void* pData)
{
    __sub_001F9D80(this, nullptr, pData);
}

CUINewCharNameSelectAran& CUINewCharNameSelectAran::operator=(const CUINewCharNameSelectAran& arg0)
{
    return _op_assign_4(this, arg0);
}

CUINewCharNameSelectAran& CUINewCharNameSelectAran::_op_assign_4(CUINewCharNameSelectAran* pThis,
                                                                 const CUINewCharNameSelectAran& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharJobSelectNormal::~CUINewCharJobSelectNormal()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUINewCharJobSelectNormal::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharJobSelectNormal::CUINewCharJobSelectNormal(const CUINewCharJobSelectNormal& arg0)
{
    _ctor_1(arg0);
}

void CUINewCharJobSelectNormal::_ctor_1(const CUINewCharJobSelectNormal& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharJobSelectNormal::CUINewCharJobSelectNormal(CLogin* pLogin)
    : CUINewCharJobSelect(pLogin)
{
    ms_pInstance = this;
    CreateWnd(109, -2613 - pLogin->GetSelectedRace() * 600, 201, 224, 10, 0, nullptr, 1, Origin_LT);
    //_ctor_0(pLogin);
}

void CUINewCharJobSelectNormal::_ctor_0(CLogin* pLogin)
{
    new(this) CUINewCharJobSelectNormal(pLogin);
    // return __sub_001F4EA0(this, nullptr, pLogin);
}

void CUINewCharJobSelectNormal::OnCreate(void* pData)
{
    __sub_001FAA20(this, nullptr, pData);
}

CUINewCharJobSelectNormal& CUINewCharJobSelectNormal::operator=(const CUINewCharJobSelectNormal& arg0)
{
    return _op_assign_4(this, arg0);
}

CUINewCharJobSelectNormal& CUINewCharJobSelectNormal::_op_assign_4(CUINewCharJobSelectNormal* pThis,
                                                                   const CUINewCharJobSelectNormal& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelectEvan::~CUINewCharNameSelectEvan()
{
}

void CUINewCharNameSelectEvan::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelectEvan::CUINewCharNameSelectEvan(const CUINewCharNameSelectEvan& arg0)
{
    _ctor_1(arg0);
}

void CUINewCharNameSelectEvan::_ctor_1(const CUINewCharNameSelectEvan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelectEvan::CUINewCharNameSelectEvan(CLogin* pLogin) : CUINewCharNameSelect(pLogin)
{
    ms_pInstance = this;
}

void CUINewCharNameSelectEvan::_ctor_0(CLogin* pLogin)
{
    new(this) CUINewCharNameSelectEvan(pLogin);
    //return __sub_001F42E0(this, nullptr, pLogin);
}

void CUINewCharNameSelectEvan::OnCreate(void* pData)
{
    __sub_001FA0D0(this, nullptr, pData);
}

CUINewCharNameSelectEvan& CUINewCharNameSelectEvan::operator=(const CUINewCharNameSelectEvan& arg0)
{
    return _op_assign_4(this, arg0);
}

CUINewCharNameSelectEvan& CUINewCharNameSelectEvan::_op_assign_4(CUINewCharNameSelectEvan* pThis,
                                                                 const CUINewCharNameSelectEvan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelectAran::~CUINewCharAvatarSelectAran()
{
}

void CUINewCharAvatarSelectAran::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelectAran::CUINewCharAvatarSelectAran(const CUINewCharAvatarSelectAran& arg0)
{
    _ctor_1(arg0);
}

void CUINewCharAvatarSelectAran::_ctor_1(const CUINewCharAvatarSelectAran& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelectAran::CUINewCharAvatarSelectAran(CLogin* pLogin)
    : CUINewCharAvatarSelect(pLogin)
{
    CWnd::CreateWnd(109, (-2613 - (m_pLogin->ConvertSelectedRaceToUIRace() * 600)), 270, 372, 10, 0, nullptr, 1,
                    Origin_LT);
    //_ctor_0(pLogin);
}

void CUINewCharAvatarSelectAran::_ctor_0(CLogin* pLogin)
{
    return __sub_001F4720(this, nullptr, pLogin);
}

void CUINewCharAvatarSelectAran::OnCreate(void* arg0)
{
    __sub_001FC8C0(this, nullptr, arg0);
}

CUINewCharAvatarSelectAran& CUINewCharAvatarSelectAran::operator=(const CUINewCharAvatarSelectAran& arg0)
{
    return _op_assign_4(this, arg0);
}

CUINewCharAvatarSelectAran& CUINewCharAvatarSelectAran::_op_assign_4(CUINewCharAvatarSelectAran* pThis,
                                                                     const CUINewCharAvatarSelectAran& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelectRes::~CUINewCharAvatarSelectRes()
{
}

void CUINewCharAvatarSelectRes::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelectRes::CUINewCharAvatarSelectRes(const CUINewCharAvatarSelectRes& arg0)
{
    _ctor_1(arg0);
}

void CUINewCharAvatarSelectRes::_ctor_1(const CUINewCharAvatarSelectRes& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelectRes::CUINewCharAvatarSelectRes(CLogin* pLogin)
    : CUINewCharAvatarSelect(pLogin)
{
    CreateWnd(98, (-2616 - (m_pLogin->ConvertSelectedRaceToUIRace() * 600)), 225, 377, 10, 0, nullptr, 1, Origin_LT);
    //_ctor_0(pLogin);
}

void CUINewCharAvatarSelectRes::_ctor_0(CLogin* pLogin)
{
    new(this) CUINewCharAvatarSelectRes(pLogin);
    //return __sub_001F4900(this, nullptr, pLogin);
}

void CUINewCharAvatarSelectRes::OnCreate(void* arg0)
{
    __sub_001F63D0(this, nullptr, arg0);
}

CUINewCharAvatarSelectRes& CUINewCharAvatarSelectRes::operator=(const CUINewCharAvatarSelectRes& arg0)
{
    return _op_assign_4(this, arg0);
}

CUINewCharAvatarSelectRes& CUINewCharAvatarSelectRes::_op_assign_4(CUINewCharAvatarSelectRes* pThis,
                                                                   const CUINewCharAvatarSelectRes& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelectEvan::~CUINewCharAvatarSelectEvan()
{
}

void CUINewCharAvatarSelectEvan::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelectEvan::CUINewCharAvatarSelectEvan(const CUINewCharAvatarSelectEvan& arg0)
{
    _ctor_1(arg0);
}

void CUINewCharAvatarSelectEvan::_ctor_1(const CUINewCharAvatarSelectEvan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelectEvan::CUINewCharAvatarSelectEvan(CLogin* pLogin)
    : CUINewCharAvatarSelect(pLogin)
{
    CWnd::CreateWnd(109, (-2613 - (m_pLogin->ConvertSelectedRaceToUIRace() * 600)), 225, 377, 10, 0, nullptr, 1,
                    Origin_LT);
    //_ctor_0(pLogin);
}

void CUINewCharAvatarSelectEvan::_ctor_0(CLogin* pLogin)
{
    new(this) CUINewCharAvatarSelectEvan(pLogin);
    //return __sub_001F4810(this, nullptr, pLogin);
}

void CUINewCharAvatarSelectEvan::OnCreate(void* arg0)
{
    __sub_001F5670(this, nullptr, arg0);
}

CUINewCharAvatarSelectEvan& CUINewCharAvatarSelectEvan::operator=(const CUINewCharAvatarSelectEvan& arg0)
{
    return _op_assign_4(this, arg0);
}

CUINewCharAvatarSelectEvan& CUINewCharAvatarSelectEvan::_op_assign_4(CUINewCharAvatarSelectEvan* pThis,
                                                                     const CUINewCharAvatarSelectEvan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelectRes::~CUINewCharNameSelectRes()
{
}

void CUINewCharNameSelectRes::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelectRes::CUINewCharNameSelectRes(const CUINewCharNameSelectRes& arg0)
{
    _ctor_1(arg0);
}

void CUINewCharNameSelectRes::_ctor_1(const CUINewCharNameSelectRes& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelectRes::CUINewCharNameSelectRes(CLogin* pLogin)
    : CUINewCharNameSelect(pLogin)
{
    ms_pInstance = this;
    CreateWnd(0x62, -2616 - m_pLogin->ConvertSelectedRaceToUIRace() * 0x258, 0xd4, 0xf5, 0xa, 0, nullptr, 1,
              Origin_LT);
}

void CUINewCharNameSelectRes::_ctor_0(CLogin* pLogin)
{
    new(this) CUINewCharNameSelectRes(pLogin);
    //return __sub_001F4410(this, nullptr, pLogin);
}

void CUINewCharNameSelectRes::OnCreate(void* pData)
{
    __sub_001FA420(this, nullptr, pData);
}

CUINewCharNameSelectRes& CUINewCharNameSelectRes::operator=(const CUINewCharNameSelectRes& arg0)
{
    return _op_assign_4(this, arg0);
}

CUINewCharNameSelectRes& CUINewCharNameSelectRes::_op_assign_4(CUINewCharNameSelectRes* pThis,
                                                               const CUINewCharNameSelectRes& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelectCygnus::~CUINewCharAvatarSelectCygnus()
{
}

void CUINewCharAvatarSelectCygnus::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelectCygnus::CUINewCharAvatarSelectCygnus(const CUINewCharAvatarSelectCygnus& arg0)
{
    _ctor_1(arg0);
}

void CUINewCharAvatarSelectCygnus::_ctor_1(const CUINewCharAvatarSelectCygnus& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelectCygnus::CUINewCharAvatarSelectCygnus(CLogin* pLogin) : CUINewCharAvatarSelect(pLogin)
{
    //_ctor_0(pLogin);
    CWnd::CreateWnd(0x6d, (-2613 - (m_pLogin->ConvertSelectedRaceToUIRace() * 0x258)), 0xe4, 0x17a, 0xa, 0, nullptr, 1,
                    Origin_LT);
}

void CUINewCharAvatarSelectCygnus::_ctor_0(CLogin* pLogin)
{
    new(this) CUINewCharAvatarSelectCygnus(pLogin);
    //return __sub_001F4540(this, nullptr, pLogin);
}

void CUINewCharAvatarSelectCygnus::OnCreate(void* arg0)
{
    __sub_001FAE00(this, nullptr, arg0);
}

CUINewCharAvatarSelectCygnus& CUINewCharAvatarSelectCygnus::operator=(const CUINewCharAvatarSelectCygnus& arg0)
{
    return _op_assign_4(this, arg0);
}

CUINewCharAvatarSelectCygnus& CUINewCharAvatarSelectCygnus::_op_assign_4(
    CUINewCharAvatarSelectCygnus* pThis, const CUINewCharAvatarSelectCygnus& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelectCygnus::~CUINewCharNameSelectCygnus()
{
    //UNIMPLEMENTED; // _dtor_0();
}

void CUINewCharNameSelectCygnus::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelectCygnus::CUINewCharNameSelectCygnus(const CUINewCharNameSelectCygnus& arg0)
{
    _ctor_1(arg0);
}

void CUINewCharNameSelectCygnus::_ctor_1(const CUINewCharNameSelectCygnus& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelectCygnus::CUINewCharNameSelectCygnus(CLogin* pLogin)
    : CUINewCharNameSelect(pLogin)
{
    ms_pInstance = this;
    CWnd::CreateWnd(0x6d, (-2613 - (m_pLogin->ConvertSelectedRaceToUIRace() * 0x258)), 0xcb, 0xe2, 0xa, 0, nullptr, 1,
                    Origin_LT);
    //_ctor_0(pLogin);
}

void CUINewCharNameSelectCygnus::_ctor_0(CLogin* pLogin)
{
    new(this) CUINewCharNameSelectCygnus(pLogin);
    //return __sub_001F3F50(this, nullptr, pLogin);
}

void CUINewCharNameSelectCygnus::OnCreate(void* pData)
{
    __sub_001F96E0(this, nullptr, pData);
}

CUINewCharNameSelectCygnus& CUINewCharNameSelectCygnus::operator=(const CUINewCharNameSelectCygnus& arg0)
{
    return _op_assign_4(this, arg0);
}

CUINewCharNameSelectCygnus& CUINewCharNameSelectCygnus::_op_assign_4(CUINewCharNameSelectCygnus* pThis,
                                                                     const CUINewCharNameSelectCygnus& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelectNormal::~CUINewCharAvatarSelectNormal()
{
}

void CUINewCharAvatarSelectNormal::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelectNormal::CUINewCharAvatarSelectNormal(const CUINewCharAvatarSelectNormal& arg0)
{
    _ctor_1(arg0);
}

void CUINewCharAvatarSelectNormal::_ctor_1(const CUINewCharAvatarSelectNormal& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharAvatarSelectNormal::CUINewCharAvatarSelectNormal(CLogin* pLogin)
    : CUINewCharAvatarSelect(pLogin)
{
    CWnd::CreateWnd(0x6d, (-2613 - (m_pLogin->ConvertSelectedRaceToUIRace() * 0x258)), 0xe1, 0x179, 0xa, 0, nullptr, 1,
                    Origin_LT);
    //_ctor_0(pLogin);
}

void CUINewCharAvatarSelectNormal::_ctor_0(CLogin* pLogin)
{
    new(this) CUINewCharAvatarSelectNormal(pLogin);
    //return __sub_001F4630(this, nullptr, pLogin);
}

void CUINewCharAvatarSelectNormal::OnCreate(void* arg0)
{
    __sub_001FBB60(this, nullptr, arg0);
}

CUINewCharAvatarSelectNormal& CUINewCharAvatarSelectNormal::operator=(const CUINewCharAvatarSelectNormal& arg0)
{
    return _op_assign_4(this, arg0);
}

CUINewCharAvatarSelectNormal& CUINewCharAvatarSelectNormal::_op_assign_4(
    CUINewCharAvatarSelectNormal* pThis, const CUINewCharAvatarSelectNormal& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelectNormal::~CUINewCharNameSelectNormal()
{
}

void CUINewCharNameSelectNormal::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelectNormal::CUINewCharNameSelectNormal(const CUINewCharNameSelectNormal& arg0)
{
    _ctor_1(arg0);
}

void CUINewCharNameSelectNormal::_ctor_1(const CUINewCharNameSelectNormal& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUINewCharNameSelectNormal::CUINewCharNameSelectNormal(CLogin* pLogin)
    : CUINewCharNameSelect(pLogin)
{
    ms_pInstance = this;

    m_pLogin = pLogin;
    const auto uiRace = m_pLogin->ConvertSelectedRaceToUIRace();
    CreateWnd(109, -2613 - uiRace * 600, 201, 224, 10, false, nullptr, true, Origin_LT);
}

void CUINewCharNameSelectNormal::_ctor_0(CLogin* pLogin)
{
    new(this) CUINewCharNameSelectNormal(pLogin);
    //return __sub_001F4080(this, nullptr, pLogin);
}

void CUINewCharNameSelectNormal::OnCreate(void* pData)
{
    __sub_001F9A30(this, nullptr, pData);
}

CUINewCharNameSelectNormal& CUINewCharNameSelectNormal::operator=(const CUINewCharNameSelectNormal& arg0)
{
    return _op_assign_4(this, arg0);
}

CUINewCharNameSelectNormal& CUINewCharNameSelectNormal::_op_assign_4(CUINewCharNameSelectNormal* pThis,
                                                                     const CUINewCharNameSelectNormal& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
