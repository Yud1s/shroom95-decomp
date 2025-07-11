// Login.cpp
#include "Login.hpp"

#include <ClientConfig.hpp>

#include "SoftKeyboardDlg/SoftKeyboardDlg.hpp"
#include "spdlog/spdlog.h"

static ZRef<CSoftKeyboardDlg> FAKE_ZRef_CSoftKeyboardDlg;

#include "Login_regen.ipp"

AvatarData::~AvatarData()
{
    // UNIMPLEMENTED; // _dtor_0();
}

void AvatarData::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

AvatarData::AvatarData(const AvatarData& arg0)
{
    _ctor_1(arg0);
}

void AvatarData::_ctor_1(const AvatarData& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

AvatarData::AvatarData()
{
}

void AvatarData::_ctor_0()
{
    new(this) AvatarData();
    // return __sub_001D4870(this, nullptr);
}

void AvatarData::Encode(COutPacket& arg0)
{
    this->characterStat.Encode(arg0);
    this->avatarLook.Encode(arg0);
}

void AvatarData::Decode(CInPacket& arg0)
{
    this->characterStat.Decode(arg0, false);
    this->avatarLook.Decode(arg0);
}

AvatarData& AvatarData::operator=(const AvatarData& __that) = default;

AvatarData& AvatarData::_op_assign_5(AvatarData* pThis, const AvatarData& __that)
{
    *pThis = __that;
    return *pThis;
}

CLogin::~CLogin()
{
}

void CLogin::_dtor_0()
{
    this->~CLogin();
    // return __sub_001DB6F0(this, nullptr);
}

CLogin::CLogin(const CLogin& arg0)
 : CMapLoadable(arg0) {
    _ctor_1(arg0);
}

void CLogin::_ctor_1(const CLogin& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLogin::CLogin()
{
    m_nLatestConnectedWorldID = 0xf2;
    m_nCharSaleJob = 1;
    m_bCanHaveExtraChar = 1;
    // UNIMPLEMENTED; //_ctor_0();
}

void CLogin::_ctor_0()
{
    new(this) CLogin();
}

void CLogin::Init(void* pParam)
{
    CMapLoadable::Init(pParam);
    m_nMagLevel_Back = 0;
    m_nMagLevel_Obj = 0;
    auto rm = get_rm();

    m_pPropField = rm->GetObjectT<IWzProperty>(L"UI/MapLogin.img");
    m_pPropFieldInfo = m_pPropField->GetItemT<IWzProperty>(L"info");
    LoadMap();
    rm->raw_FlushCachedObjects(180000);

    auto frame = rm->GetObjectT<IWzCanvas>(L"UI/Login.img/Common/frame");

    auto font = G_PCOM.CreateWzFont();
    font->Create(L"Arial", 11, 0xff8b8172, Ztl_bstr_t("B"));

    auto fmt = ZXString<char>::FromFmt("Ver. %d.%d", 95, 1);
    Ztl_bstr_t verStr(fmt.c_str());
    auto txtW = font->CalcTextWidth(verStr, vtMissing);

    frame->DrawTextA(
        730 - txtW, 7, verStr, font, Ztl_variant_t(0xcc, VT_I4), vtMissing);

    auto gr = get_gr();
    m_pLayerBook = gr->CreateLayer(
        0,
        0,
        0,
        0,
        110,
        Ztl_variant_t((IUnknown*)frame),
        vtMissing);

    auto center = gr->Getcenter();
    m_pLayerBook->Putorigin(Ztl_variant_t((IUnknown*)center));
    m_pLayerBook->RelMove(-400, -300 - get_adjust_cy(), vtMissing, vtMissing);
    m_pLayerBook->Putcolor(0xffffffff);

    CLoginGradeWnd::CreateInstance();
    auto app = CWvsApp::GetInstance();
    auto ctx = CWvsContext::GetInstance();
    auto startMode = app->GetGameStartMode();
    auto cmdIx = startMode != CWvsApp::GSM::WEB ? 2 : 4;
    std::array<ZXString<char>, 5> cmd{};
    for (auto i = 0; i < 5; i++)
    {
        cmd[i] = app->GetCmdLine(i + cmdIx);
    }
    m_pLoginStart = new CUILoginStart(this);
    if (ctx->GetLoginBaseStep() != LS_WORLDSELECT)
    {
        new CUITitle(this);
    }
    else
    {
        m_nLoginStep = 1;
        m_nBaseStep = 1;
        auto ut = app->GetUpdateTime();
        m_tStepChanging = ut == -800 ? 1 : ut + 800;
        m_nCharSelected = -1;
        m_aAvatarData.Alloc(15);
        m_aRank.Alloc(15);
        m_abOnFamily.Alloc(15);
        m_aAvatarDataVAC.Alloc(60);
        m_aRankVAC.Alloc(60);
        CloseLoginDescWnd(nullptr);
        new CUIWorldSelect(this);

        CClientSocket::GetInstance()->SendPacket(COutPacket(Cp::Worldinforequest));
        m_pLoginStart->SetButton(34);
    }

    auto h = GetStepHeight(m_nLoginStep);
    center->RelMove(28, h, vtMissing, vtMissing);

    LoadNewCharInfo();
    PlayBGMFromMapInfo();
    FadeIn();


    // TODO azto login disable
    //SendCheckPasswordPacket(DEFAULT_LOGIN_ID, DEFAULT_LOGIN_PW);

    /*CClientSocket::GetInstance()
        ->SendPacket(COutPacket(Cp::Createsecurityhandle));*/

    //__sub_001D8010(this, nullptr, pParam);
}

void CLogin::Close()
{
    __sub_001D2DF0(this, nullptr);
}

void CLogin::Update()
{
    __sub_001DEE90(this, nullptr);
}

void CLogin::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    auto wndMan = CWndMan::GetInstance();
    if ( msg == 513 )
    {
        if ( this->m_tStartFadeOut == 1 )
        {
            if ( auto rec = TSingleton<CUIRecommendWorld>::ms_pInstance )
                wndMan->SetFocus(rec);
            else
                CloseChannelSelect();
        }
        else if ( this->m_tStartFadeOut == 2 )
        {
            if ( wndMan )
                wndMan->SetFocus(m_pFocusedUI);
        }
    }
}

void CLogin::OnPacket(long nType, CInPacket& iPacket)
{
    __sub_001DF940(this, nullptr, nType, iPacket);
}

void CLogin::ChangeStep(const long nStep)
{
    if (m_tStartFadeOut != 0)
    {
        ChangeStepImmediate(m_nLoginStep);
    }

    m_nFadeOutLoginStep = m_nLoginStep;
    m_nLoginStep = nStep < 0 ? (m_nLoginStep + 1) % LS_NO : nStep;

    if (m_nLoginStep == LS_VIEWALLCHAR || m_nFadeOutLoginStep == LS_VIEWALLCHAR)
    {
        ChangeStepImmediate(LS_VIEWALLCHAR);
        return;
    }

    if (m_nLoginStep == LS_WORLDSELECT && m_nFadeOutLoginStep == LS_CHARSELECT)
    {
        ChangeStepImmediate(LS_WORLDSELECT);
    }

    if (m_nFadeOutLoginStep == m_nLoginStep)
    {
        return;
    }

    CAnimationDisplayer::GetInstance()->RegisterFadeInOutAnimation(
        200,
        0,
        200,
        22,
        0xff);
    const auto t = CWvsApp::GetInstance()->GetUpdateTime();
    m_tStepChanging = std::max<long>(t + 400, 1);
    m_tStartFadeOut = std::max<long>(t + 200, 1);
    //__sub_001DA140(this, nullptr, nStep);
}

void CLogin::ChangeStepImmediate(const long nStep)
{
    /*if (m_nFadeOutLoginStep == m_nLoginStep)
        return;

    if (m_nLoginStep >= LS_NEWCHAR_RACE)
        m_pLoginStart->SetButton(1);


    auto loginOpt = 0;
    if (m_nLoginStep == LS_WORLDSELECT)
    {
        const auto startMode = CWvsApp::GetInstance()->GetGameStartMode();
        const auto isWeb = startMode == CWvsApp::GSM::WEB;
        loginOpt |= isWeb ? CUILoginStart::ENABLE_START : CUILoginStart::ENABLE_EXIT;
        if (!m_bRecommandWorld)
        {
            loginOpt |= CUILoginStart::ENABLE_VIEWALLCHAR;
        }
    }
    else
    {
        if (m_nLoginStep > m_nBaseStep && m_nLoginStep == LS_CHARSELECT)
        {
            if (m_bLoginOpt == 2)
            {
                loginOpt = CUILoginStart::ENABLE_ENABLESPW;
            }
            else if (m_bLoginOpt == 1)
            {
                loginOpt = CUILoginStart::ENABLE_DISABLESPW;
            }

            if (m_nLoginStep >= LS_CHARSELECT)
            {
                loginOpt |= CUILoginStart::ENABLE_CHANNELNAME;
            }

            if (m_nLoginStep == LS_CHARSELECT)
            {
                loginOpt |= CUILoginStart::ENABLE_START;
            }
        }
        else
        {
            loginOpt = m_nLoginStep != 0 ? CUILoginStart::ENABLE_START : CUILoginStart::ENABLE_NONE;
        }
    }

    m_pLoginStart->SetButton(loginOpt);

    const auto worldBtnOpt = m_nLoginStep == LS_WORLDSELECT ? CUILoginStart::BT_EXIT : CUILoginStart::BT_VIEWALLCHAR;
    m_pLoginStart->SetViewWorldButton(worldBtnOpt);
    m_pLoginStart->InvalidateRect(nullptr);


    if (m_pLoginDesc0)
    {

    }*/

    __sub_001D9730(this, nullptr, nStep);
}

void CLogin::OnStepChanged()
{
    __sub_001D30D0(this, nullptr);
}

void CLogin::SetSubStep(const long arg0)
{
    m_nSubStep = arg0;
}

void CLogin::OnNewCharStep(const int32_t bCharSale)
{
    if (m_nLoginStep == LS_NEWCHAR_RACE)
    {
        return;
    }

    m_bCharSale = bCharSale;
    m_nCharSaleJob = 1;
    if (const auto ctx = CWvsContext::GetInstance(); m_WorldItem[ctx->GetWorldID()].nBlockCharCreation)
    {
        CLoginUtilDlg::Notice(0x24, nullptr);
    }
    if (m_aAvatarData[m_nSlotCount - 1].characterStat.dwCharacterID)
    {
        CLoginUtilDlg::Error(9, &m_pChildModal);
        return;
    }

    ChangeStep(-1);

    //__sub_001DA210(this, nullptr, bCharSale);
}

void CLogin::SetCharSelected(long arg0)
{
    m_nCharSelected = arg0;
}

void CLogin::OnSelectedCharChanged(long nIdx)
{
    __sub_001D3DA0(this, nullptr, nIdx);
}

void CLogin::OnNewCharCanceled()
{
    __sub_001DB9B0(this, nullptr);
}

void CLogin::OnNewCharAvatarSelCanceled()
{
    __sub_001D1BD0(this, nullptr);
}

void CLogin::OnNewCharJobSel()
{
    __sub_001D1BF0(this, nullptr);
}

void CLogin::OnNewCharJobSelCanceled()
{
    __sub_001D1C10(this, nullptr);
}

void CLogin::OnAvatarChanged()
{
    __sub_001D9240(this, nullptr);
}

void CLogin::OnCancleRaceSelect()
{
    __sub_001DAAD0(this, nullptr);
}

long CLogin::GetWorldItemCount()
{
    return m_WorldItem.GetCount();
}

CLogin::WORLDITEM* CLogin::GetWorldItem(long arg0)
{
    return &m_WorldItem[arg0];
}

GW_CharacterStat& CLogin::GetCharacterStat()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GW_CharacterStat& CLogin::GetCharacterStatVAC()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CLogin::GetCharSelected()
{
    return m_nCharSelected;
    // return __sub_001D1C30(this, nullptr);
}

ZList<CLogin::NEWEQUIP>& CLogin::GetNewEquip()
{
    return m_lNewEquip;
}

CLogin::RANK& CLogin::GetRank(long arg0)
{
    return m_aRank[arg0];
}

CLogin::RANK& CLogin::GetRankVAC(long arg0)
{
    return m_aRankVAC[arg0];
}

int32_t CLogin::IsRequestSent() const
{
    return m_bRequestSent;
}


bool CLogin::CheckValidStep(const long ls) const
{
    return !m_bRequestSent && m_nLoginStep == ls;
}

long CLogin::GetLoginStep() const
{
    return m_nLoginStep;
}

long CLogin::GetBaseStep() const
{
    return m_nBaseStep;
}

ZXString<char> CLogin::GetEventCharacterID()
{
    return m_sEventCharacterID;
    // return __sub_001D5130(this, nullptr);
}

long CLogin::GetBalloonCount() const
{
    return m_nBalloonCount;
    // return __sub_001D1C30(this, nullptr);
}

ZArray<CLogin::BALLOON> CLogin::GetBalloonInfo()
{
    return m_aBalloon;
    // return __sub_00207370(this, nullptr);
}

int32_t CLogin::IsStepChanging() const
{
    return m_tStepChanging;
    // return __sub_001DFB40(this, nullptr);
}

ZArray<RECOMMENDWORLDMSG>& CLogin::GetRecommendWorldMsg()
{
    return m_aRecommendWorldMsg;
}

CUILoginStart* CLogin::GetUILoginStart()
{
    return m_pLoginStart.op_star();
}

void CLogin::SendRequest(COutPacket& oPacket)
{
    SendPacket(oPacket);
    m_bRequestSent = 1;
    //__sub_001D1DC0(this, nullptr, oPacket);
}

int32_t CLogin::SendCheckPasswordPacket(const char* sID, const char* sPasswd)
{
    if (m_bRequestSent)
    {
        return 0;
    }
    m_bRequestSent = 1;

    m_WorldItem.RemoveAll();
    m_aBalloon.RemoveAll();

    CSystemInfo sysInfo;
    sysInfo.Init();

    COutPacket p(Cp::Checkpassword);
    p.EncodeStr(ZXString(sID));
    p.EncodeStr(ZXString(sPasswd));
    p.EncodeBuffer(sysInfo.GetMachineId(), 16);
    p.Encode4(sysInfo.GetGameRoomClient());
    p.Encode1(static_cast<uint8_t>(CWvsApp::GetInstance()->GetGameStartMode()));
    p.Encode1(0);
    p.Encode1(0);
    p.Encode4(CConfig::GetInstance()->GetPartnerCode());
    SendPacket(p);

    if (const auto title = CUITitle::GetInstance())
    {
        title->ClearToolTip();
    }

    return 0;

    // return __sub_001DB9D0(this, nullptr, sID, sPasswd);
}

int32_t CLogin::SendGuestIDLoginPacket()
{
    return __sub_001DFB40(this, nullptr);
}

int32_t CLogin::SendLoginPacket(long nWorldID, long nChannelID)
{
    return __sub_001DBEF0(this, nullptr, nWorldID, nChannelID);
}

void CLogin::SendDeleteCharPacket()
{
    __sub_001D53A0(this, nullptr);
}

void CLogin::SendSelectCharPacket()
{
    __sub_001DA2A0(this, nullptr);
}

void CLogin::SendSelectCharPacketByVAC()
{
    __sub_001D7550(this, nullptr);
}

void CLogin::SendNewCharPacket()
{
    __sub_001D7BD0(this, nullptr);
}

void CLogin::SendNewCharPacket_Ex()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CLogin::SendCheckDuplicateIDPacket(const ZXString<char>& sCharName)
{
    //__sub_001D5690(this, nullptr, sCharName);
    if (m_bRequestSent)
        return;

    auto ctx = CWvsContext::GetInstance();
    if (!is_valid_character_name(sCharName, !ctx->IsManagerJob()))
    {
        CLoginUtilDlg::Error(10, nullptr);
        return;
    }


    COutPacket p(Cp::Checkduplicatedid);
    p.EncodeStr(sCharName);
    SendRequest(p);
}

void CLogin::GotoTitle(int32_t bAsk, IUIMsgHandler* pFocus)
{
    __sub_001DADC0(this, nullptr, bAsk, pFocus);
}

void CLogin::ExitGame(int32_t bAsk, IUIMsgHandler* pFocus)
{
    __sub_001D1E20(this, nullptr, bAsk, pFocus);
}

void CLogin::CloseChannelSelect()
{
    __sub_001D1E80(this, nullptr);
}

void CLogin::GotoWorldSelect(int32_t bFromVAC)
{
    __sub_001DAF20(this, nullptr, bFromVAC);
}

void CLogin::CloseLoginDescWnd(CFadeWnd* pWnd)
{
    //__sub_001D2C70(this, nullptr, pWnd);
    if (pWnd || pWnd == m_pLoginDesc0)
    {
        if (m_pLoginDesc0)
        {
            m_pLoginDesc0->Destroy();
            m_pLoginDesc0 = 0;
        }
    }

    if (pWnd || pWnd == m_pLoginDesc1)
    {
        if (m_pLoginDesc1)
        {
            m_pLoginDesc1->Destroy();
            m_pLoginDesc1 = 0;
        }
    }
}

long CLogin::GetSlotCount() const
{
    return m_nSlotCount;
    // return __sub_001D1C30(this, nullptr);
}

long CLogin::GetBuyCharacterCount() const
{
    return m_nBuyCharCount;
    // return __sub_001D1C30(this, nullptr);
}

void CLogin::SetFocusedUI(IUIMsgHandler* arg0)
{
    m_pFocusedUI = arg0;
}

IUIMsgHandler* CLogin::GetFocusedUI() const
{
    return m_pFocusedUI;
}

void CLogin::SendCheckUserLimitPacket(long nWorldIdx)
{
    __sub_001D43D0(this, nullptr, nWorldIdx);
}

void CLogin::SendSetGenderPacket(unsigned char nGender)
{
    __sub_001D4650(this, nullptr, nGender);
}

void CLogin::SendCancelGenderPacket()
{
    __sub_001D46E0(this, nullptr);
}

void CLogin::OnSetAccountResult(CInPacket& iPacket)
{
    __sub_001D5E80(this, nullptr, iPacket);
}

void CLogin::OnConfirmEULAResult(CInPacket& iPacket)
{
    __sub_001D4D00(this, nullptr, iPacket);
}

void CLogin::OnCheckPinCodeResult(CInPacket& iPacket)
{
    __sub_001DB000(this, nullptr, iPacket);
}

void CLogin::OnUpdatePinCodeResult(CInPacket& iPacket)
{
    auto status = iPacket.Decode1();
    if (status != 0)
    {
        CLoginUtilDlg::Error(0xf, nullptr);
    }
    else
    {
        CPinCodeDlg::Notice(8);
    }

    CUITitle::GetInstance()->EnableLoginCtrl(1);
    //__sub_001D2420(this, nullptr, iPacket);
}

ZXString<char> CLogin::GetCheckedName()
{
    return m_sCheckedName;
    // return __sub_001D5130(this, nullptr);
}

void CLogin::SetCheckedName(const ZXString<char>& sCharName)
{
    __sub_001D5690(this, nullptr, sCharName);
}

void CLogin::InitNewCharEquip()
{
    __sub_001D9530(this, nullptr);
}

ZXString<char> CLogin::GetNewCharEquipName(long nIdx)
{
    if (this->m_nGender != 0)
    {
        return this->m_aFemaleItem[nIdx][0].sItemName;
    }
    else
    {
        return this->m_aMaleItem[nIdx][0].sItemName;
    }

    // return __sub_001F4F90(this, nullptr, nIdx);
}

void CLogin::ShiftNewCharEquip(long item, long arg1)
{
    __sub_001D9280(this, nullptr, item, arg1);
}

long CLogin::ConvertSelectedRaceToUIRace() const
{
    switch (m_nCurSelectedRace)
    {
    case 0:
        return 4;
    case 1:
        return 1;
    case 2:
        return 0;
    case 4:
        return 2;
    default:
        return m_nCurSelectedRace;
    }

    // return __sub_001D1C30(this, nullptr);
}

void CLogin::OnCheckPasswordResult(CInPacket& arg0)
{
    __sub_001DC600(this, nullptr, arg0);
}

void CLogin::OnGuestIDLoginResult(CInPacket& iPacket)
{
    __sub_001DD1A0(this, nullptr, iPacket);
}

void CLogin::OnAccountInfoResult(CInPacket& iPacket)
{
    __sub_001DD600(this, nullptr, iPacket);
}

void CLogin::OnCheckUserLimitResult(CInPacket& iPacket)
{
    __sub_001D2250(this, nullptr, iPacket);
}

void CLogin::OnWorldInformation(CInPacket& iPacket)
{
    if (auto worldIdx = iPacket.Decode1(); worldIdx == 0xff)
    {
        if (auto worldSelect = CUIWorldSelect::GetInstance())
        {
            worldSelect->DrawWorldItems();
        }
        else
        {
            worldSelect = new CUIWorldSelect(this);
        }
        ChangeStep(LS_WORLDSELECT);
        return;
    }

    auto& world = m_WorldItem.InsertBefore();
    world.sName = iPacket.DecodeStr();
    world.nWorldState = iPacket.Decode1();
    world.sWorldEventDesc = iPacket.DecodeStr();
    world.nWorldEventEXP_WSE = iPacket.Decode2();
    world.nWorldEventDrop_WSE = iPacket.Decode2();
    world.nBlockCharCreation = iPacket.Decode1();

    const auto channels = iPacket.Decode1();
    for (auto i = 0; i < channels; i++)
    {
        auto& channel = world.ci.InsertBefore();
        channel.sName = iPacket.DecodeStr();
        channel.nUserNo = iPacket.Decode4();
        channel.nWorldID = iPacket.Decode1();
        channel.nChannelID = iPacket.Decode1();
        channel.bAdultChannel = iPacket.Decode1();
    }

    m_nBalloonCount = iPacket.Decode1();
    m_aBalloon.RemoveAll();
    for (auto i = 0; i < m_nBalloonCount; i++)
    {
        auto& balloon = m_aBalloon.InsertBefore();
        balloon.nX = iPacket.Decode2();
        balloon.nY = iPacket.Decode2();
        balloon.sMessage = iPacket.DecodeStr();
    }


    //spdlog::info("On world info");
    SendLoginPacket(0, 1);

    //__sub_001DA7F0(this, nullptr, iPacket);
}

void CLogin::OnSelectWorldResult(CInPacket& iPacket)
{
    m_bRequestSent = 0;

    auto licenseDlg = CLicenseDlg::GetInstance();
    if (licenseDlg)
    {
        delete licenseDlg;
    }

    auto uiChannel = CUIChannelSelect::GetInstance();
    if (uiChannel)
    {
        uiChannel->RemoveNoticeConnecting();
    }

    auto res = iPacket.Decode1();

    switch (res)
    {
    case 2:
    case 3:
        CLoginUtilDlg::Error(16, nullptr);
        break;
    case 4:
        CLoginUtilDlg::Error(3, nullptr);
        break;
    case 5:
        CLoginUtilDlg::Error(20, nullptr);
        break;
    case 6:
    case 8:
    case 9:
        CLoginUtilDlg::Error(15, nullptr);
        break;
    case 7:
        GotoTitle(false, nullptr);
        CLoginUtilDlg::Error(17, nullptr);
        break;
    case 10:
        CLoginUtilDlg::Error(19, nullptr);
        break;
    case 11:
        CLoginUtilDlg::Error(14, nullptr);
        break;
    case 13:
        CLoginUtilDlg::Error(21, nullptr);
        break;
    case 14:
        if (CLoginUtilDlg::YesNo2(27))
        {
            auto s = StringPool::GetInstance().GetStringA(0xb6c);
            open_web_site(s.c_str(), nullptr);
        }
        break;
    case 15:
        if (CLoginUtilDlg::YesNo2(26))
        {
            auto s = StringPool::GetInstance().GetStringA(0xb6c);
            open_web_site(s.c_str(), nullptr);
        }
        break;
    case 16:
    case 21:
        CLoginUtilDlg::Error(33, nullptr);
        break;
    case 17:
        CLoginUtilDlg::Error(27, nullptr);
        break;
    case 25:
        CLoginUtilDlg::Error(40, nullptr);
        break;

    default:
        break;
    }

    CWndMan::GetInstance()->SetFocus(uiChannel);

    if (res != 0 && res != 12)
    {
        return;
    }

    auto ctx = CWvsContext::GetInstance();
    auto cfg = CConfig::GetInstance();
    m_nLatestConnectedWorldID = ctx->GetWorldID();
    auto latestChar = cfg->LoadLastConnectedCharacterID(m_nLatestConnectedWorldID, ctx->GetAccountId());

    auto charCount = iPacket.Decode1();
    ctx->SetCharacterCountInfo(charCount);

    for (auto i = 0; i < 15; i++)
    {
        if (i >= charCount)
        {
            m_aAvatarData[i].characterStat.dwCharacterID = 0;
            continue;
        }

        m_aAvatarData[i].Decode(iPacket);
        m_abOnFamily[i] = iPacket.Decode1();
        if (iPacket.Decode1())
        {
            iPacket.DecodeBuffer(&m_aRank[i], sizeof(CLogin::RANK));
        }
        else
        {
            m_aRank[i] = {};
        }

        if (m_aAvatarData[i].characterStat.dwCharacterID == latestChar)
        {
            m_nCharSelected = i;
        }
    }

    if (m_nCharSelected == -1 && charCount > 0)
    {
        m_nCharSelected = 0;
    }

    m_bLoginOpt = iPacket.Decode1();
    m_nSlotCount = iPacket.Decode4();
    m_nBuyCharCount = iPacket.Decode4();
    ctx->SetSlotInfo(m_nSlotCount);

    new CUICharSelect(this);
    new CUIAvatar(this, m_aAvatarData._a);

    ChangeStep(-1);
    if (CWvsApp::GetInstance()->GetGameStartMode() == CWvsApp::GSM::WEB && !m_bLoginOpt)
    {
        COutPacket pkt(Lp::Selectcharacterbyvacresult);
        pkt.Encode1(1);
        pkt.Encode1(1);
        pkt.EncodeStr(ZXString(""));
        SendPacket(pkt);
    }

    //__sub_001DDA00(this, nullptr, iPacket);
}

void CLogin::OnCheckDuplicatedIDResult(CInPacket& iPacket)
{
    __sub_001D5790(this, nullptr, iPacket);
}

void CLogin::OnDeleteCharacterResult(CInPacket& iPacket)
{
    __sub_001D9E10(this, nullptr, iPacket);
}

void CLogin::OnCreateNewCharacterResult(CInPacket& iPacket)
{
    __sub_001DAB90(this, nullptr, iPacket);
}

void CLogin::OnSelectCharacterResult(CInPacket& iPacket)
{
    __sub_001DEA80(this, nullptr, iPacket);
}

void CLogin::OnEnableSPWResult(CInPacket& iPacket)
{
    __sub_001D2290(this, nullptr, iPacket);
}

void CLogin::OnCheckSPWResult(CInPacket& iPacket)
{
    __sub_001D23F0(this, nullptr, iPacket);
}

void CLogin::OnLatestConnectedWorld(CInPacket& iPacket)
{
    __sub_001D2200(this, nullptr, iPacket);
}

void CLogin::OnRecommendWorldMessage(CInPacket& iPacket)
{
    spdlog::info("Recommend world");
    if (m_nLoginStep != LS_WORLDSELECT)
    {
        return;
    }

    auto recWorlds = iPacket.Decode1();
    m_aRecommendWorldMsg.RemoveAll();
    for (auto i = 0; i < recWorlds; i++)
    {
        auto worldId = iPacket.Decode4();
        auto msg = iPacket.DecodeStr();
        m_aRecommendWorldMsg.Insert(RECOMMENDWORLDMSG{(long)worldId, msg});
    }
    m_bRecommendWorldMsgLoaded = true;
    ViewRecommendWorld(m_nLatestConnectedWorldID == 0xff);


    //__sub_001D7280(this, nullptr, iPacket);
}

void CLogin::OnViewAllCharResult(CInPacket& iPacket)
{
    __sub_001DE120(this, nullptr, iPacket);
}

void CLogin::OnSelectCharacterByVACResult(CInPacket& iPacket)
{
    __sub_001DE670(this, nullptr, iPacket);
}

void CLogin::DrawNoticeConnecting()
{
    __sub_001DE030(this, nullptr);
}

void CLogin::RemoveNoticeConnecting()
{
    __sub_001D1DF0(this, nullptr);
}

void CLogin::SetWaitingForVAC()
{
    m_bIsWaitingVAC = 1;
}

int32_t CLogin::SendViewAllCharPacket()
{
    return __sub_001DFB40(this, nullptr);
}

void CLogin::ResetVAC()
{
    __sub_001D7DC0(this, nullptr);
}

void CLogin::MakeVACDlg()
{
    __sub_001D44A0(this, nullptr);
}

void CLogin::EnableLoginStartCtrl(long nEnable)
{
    __sub_001D1E00(this, nullptr, nEnable);
}

void CLogin::SetRecommandWorld(int32_t arg0)
{
    m_bRecommandWorld = arg0;
}

long CLogin::GetVACCharCount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CLogin::SetVACCharCount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CLogin::VACCharacterDataReceived()
{
    return __sub_001D1C30(this, nullptr);
}

long CLogin::GetWorldIDfromCharIdx(long nStep)
{
    return __sub_001D1C80(this, nullptr, nStep);
}

ZXString<char> CLogin::GetWorldNamefromCharIdx(long nIdx)
{
    auto worldId = this->m_anWorldID[nIdx];
    for (const auto& wi : this->m_WorldItem)
    {
        if (wi.nWorldID == worldId)
        {
            return wi.sName;
        }
    }
    return ZXString<char>{};

    // return __sub_001F4F90(this, nullptr, nIdx);
}

long CLogin::GetStepHeight(long nStep)
{
    auto x = ConvertSelectedRaceToUIRace();
    x = (m_nLoginStep == LS_NEWCHAR_NAME) ? x : 0;
    auto n = 0;
    return (x + nStep) * -600 - 8;
    // return __sub_001D1C80(this, nullptr, nStep);
}

void CLogin::LoadNewCharInfo()
{
    __sub_001D5880(this, nullptr);
}

void CLogin::RecoverPassport()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CLogin::IsRecommendWorldMsgAvailable()
{
    return m_bRecommandWorld < m_WorldItem.GetCount();
    // return __sub_001DFB40(this, nullptr);
}

void CLogin::ViewRecommendWorld(int32_t bView)
{
    __sub_001D2470(this, nullptr, bView);
}

void CLogin::SetSelectedRace(long arg0)
{
    m_nCurSelectedRace = arg0;
}

long CLogin::GetSelectedRace() const
{
    return m_nCurSelectedRace;
    // return __sub_001D1C30(this, nullptr);
}

void CLogin::SetSelectedSubJob(short arg0)
{
    m_nCurSelectedSubJob = arg0;
}

short CLogin::GetSelectedSubJob() const
{
    return m_nCurSelectedSubJob;
}

void CLogin::ResetRaceAndSubJob()
{
    m_nCurSelectedRace = 0;
    m_nCurSelectedSubJob = 0;
    //__sub_001D1CB0(this, nullptr);
}

void CLogin::OnAcceptLicense()
{
    __sub_001D4540(this, nullptr);
}

void CLogin::OnDenyLicense()
{
    __sub_001D45D0(this, nullptr);
}

int32_t CLogin::CheckLicenseAgreement()
{
    return __sub_001DFB40(this, nullptr);
}

unsigned char CLogin::GetNewCharacterGender() const
{
    return m_nGender;
}

void CLogin::SetNewCharacterGender(unsigned char nGender)
{
    m_nGender = nGender;
    //__sub_001D4650(this, nullptr, nGender);
}

void CLogin::ChangeNewCharacterGender()
{
    m_nGender = m_nGender ? 0 : 1;
}

void CLogin::GetLocalMacAddress(ZXString<char>& sMacAddress)
{
    __sub_001D60F0(this, nullptr, sMacAddress);
}

void CLogin::GetLocalMacAddressWithHDDSerialNo(ZXString<char>& sMacAddressWithHDDSerial)
{
    __sub_001D62D0(this, nullptr, sMacAddressWithHDDSerial);
}

void CLogin::GetSelectedAL(AvatarLook& al)
{
    __sub_001D7ED0(this, nullptr, al);
}

long CLogin::GetSelectedAL(long nIdx)
{
    return __sub_001D74C0(this, nullptr, nIdx);
}

ZXString<char> CLogin::GetNewCharItemName(long nGender, long nType, long nItemID)
{
    ZXString<char> ret;
    return *__sub_001D6580(this, nullptr, &ret, nGender, nType, nItemID);
}

long CLogin::GetCharSaleJob()
{
    return __sub_001D1C30(this, nullptr);
}

void CLogin::ShiftCharSaleJob(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CLogin::ReSetExtraCharInfo()
{
    __sub_001D1CD0(this, nullptr);
}

int32_t CLogin::CanGetExtraChar(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CLogin::SendExtraCharInfoPacket()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CLogin::OnExtraCharInfoResult(CInPacket& iPacket)
{
    __sub_001D25A0(this, nullptr, iPacket);
}

CLogin& CLogin::operator=(const CLogin& arg0)
{
    return _op_assign_129(this, arg0);
}

CLogin& CLogin::_op_assign_129(CLogin* pThis, const CLogin& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLogin::CHANNELITEM::~CHANNELITEM()
{
}

void CLogin::CHANNELITEM::_dtor_0()
{
    this->~CHANNELITEM();
}

CLogin::CHANNELITEM::CHANNELITEM(const CLogin::CHANNELITEM& arg0) = default;

void CLogin::CHANNELITEM::_ctor_1(const CLogin::CHANNELITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLogin::CHANNELITEM::CHANNELITEM()
{
}

void CLogin::CHANNELITEM::_ctor_0()
{
    new(this) CLogin::CHANNELITEM();
}

CLogin::CHANNELITEM& CLogin::CHANNELITEM::operator=(const CLogin::CHANNELITEM& arg0)
{
    return _op_assign_3(this, arg0);
}

CLogin::CHANNELITEM& CLogin::CHANNELITEM::_op_assign_3(CLogin::CHANNELITEM* pThis, const CLogin::CHANNELITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLogin::WORLDITEM::~WORLDITEM()
{
}

void CLogin::WORLDITEM::_dtor_0()
{
    this->~WORLDITEM();
}

CLogin::WORLDITEM::WORLDITEM(const CLogin::WORLDITEM& arg0) = default;

void CLogin::WORLDITEM::_ctor_1(const CLogin::WORLDITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLogin::WORLDITEM::WORLDITEM()
{
}

void CLogin::WORLDITEM::_ctor_0()
{
    new(this) CLogin::WORLDITEM();
}

CLogin::WORLDITEM& CLogin::WORLDITEM::operator=(const CLogin::WORLDITEM& arg0)
{
    return _op_assign_3(this, arg0);
}

CLogin::WORLDITEM& CLogin::WORLDITEM::_op_assign_3(CLogin::WORLDITEM* pThis, const CLogin::WORLDITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLogin::BALLOON::~BALLOON()
{
}

void CLogin::BALLOON::_dtor_0()
{
    this->~BALLOON();
}

CLogin::BALLOON::BALLOON(const CLogin::BALLOON& arg0)
{
    _ctor_1(arg0);
}

void CLogin::BALLOON::_ctor_1(const CLogin::BALLOON& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLogin::BALLOON::BALLOON()
{
}

void CLogin::BALLOON::_ctor_0()
{
    new(this) CLogin::BALLOON();
}

CLogin::BALLOON& CLogin::BALLOON::operator=(const CLogin::BALLOON& arg0)
{
    return _op_assign_3(this, arg0);
}

CLogin::BALLOON& CLogin::BALLOON::_op_assign_3(CLogin::BALLOON* pThis, const CLogin::BALLOON& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLogin::ASITEM::~ASITEM()
{
}

void CLogin::ASITEM::_dtor_0()
{
    this->~ASITEM();
}

CLogin::ASITEM::ASITEM(const CLogin::ASITEM& arg0)
{
    nItemId = arg0.nItemId;
    sItemName = arg0.sItemName;
}

void CLogin::ASITEM::_ctor_1(const CLogin::ASITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLogin::ASITEM::ASITEM()
{
    // UNIMPLEMENTED; //_ctor_0();
}

void CLogin::ASITEM::_ctor_0()
{
    new(this) CLogin::ASITEM();
}

CLogin::ASITEM& CLogin::ASITEM::operator=(const CLogin::ASITEM& arg0)
{
    nItemId = arg0.nItemId;
    sItemName = arg0.sItemName;

    return *this;
}

CLogin::ASITEM& CLogin::ASITEM::_op_assign_3(CLogin::ASITEM* pThis, const CLogin::ASITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLoginGradeWnd::~CLoginGradeWnd()
{
    //_dtor_0();
}

void CLoginGradeWnd::_dtor_0()
{
    this->~CLoginGradeWnd();
}

CLoginGradeWnd::CLoginGradeWnd(const CLoginGradeWnd& arg0)
{
    _ctor_1(arg0);
}

void CLoginGradeWnd::_ctor_1(const CLoginGradeWnd& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLoginGradeWnd::CLoginGradeWnd()
{
    ms_pInstance = this;
    CreateWnd(0x2df, 0, 0x41, 0x4b, 0x6f, true, nullptr, false, Origin_LT);
}

void CLoginGradeWnd::_ctor_0()
{
    new(this) CLoginGradeWnd();
    // return __sub_001D1D10(this, nullptr);
}

void CLoginGradeWnd::OnCreate(void* pData)
{
}

CLoginGradeWnd& CLoginGradeWnd::operator=(const CLoginGradeWnd& arg0)
{
    return _op_assign_4(this, arg0);
}

CLoginGradeWnd& CLoginGradeWnd::_op_assign_4(CLoginGradeWnd* pThis, const CLoginGradeWnd& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CConnectionNoticeDlg::~CConnectionNoticeDlg()
{
    ms_pInstance = nullptr;
    //_dtor_0();
}

void CConnectionNoticeDlg::_dtor_0()
{
    this->~CConnectionNoticeDlg();
    // return __sub_001D4AD0(this, nullptr);
}

CConnectionNoticeDlg::CConnectionNoticeDlg(const CConnectionNoticeDlg& arg0)
{
    _ctor_1(arg0);
}

void CConnectionNoticeDlg::_ctor_1(const CConnectionNoticeDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CConnectionNoticeDlg::CConnectionNoticeDlg(CLogin* pLogin)
{
    ms_pInstance = this;
    m_pLogin = pLogin;
    auto s = StringPool::GetInstance().GetStringW(0x589);
    CDialog::CreateDlg((const wchar_t*)s.c_str(), true, nullptr, false);
    //_ctor_0(pLogin);
}

void CConnectionNoticeDlg::_ctor_0(CLogin* pLogin)
{
    new(this) CConnectionNoticeDlg(pLogin);
    // return __sub_001D49B0(this, nullptr, pLogin);
}

void CConnectionNoticeDlg::OnCreate(void* pData)
{
    __sub_001D4BC0(this, nullptr, pData);
}

void CConnectionNoticeDlg::Draw(const tagRECT* pRect)
{
    __sub_001D6A30(this, nullptr, pRect);
}

void CConnectionNoticeDlg::OnButtonClicked(uint32_t nId)
{
    if (nId == ID_CTRL_BT_CANCEL)
    {
        SetRet(3);
    }
    //__sub_001D4A90(this, nullptr, nId);
}

void CConnectionNoticeDlg::OnKey(uint32_t wParam, int32_t lParam)
{
    __sub_001D4AB0(this, nullptr, wParam, lParam);
}

CConnectionNoticeDlg& CConnectionNoticeDlg::operator=(const CConnectionNoticeDlg& arg0)
{
    return _op_assign_7(this, arg0);
}

CConnectionNoticeDlg& CConnectionNoticeDlg::_op_assign_7(CConnectionNoticeDlg* pThis, const CConnectionNoticeDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
