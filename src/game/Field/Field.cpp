// Field.cpp
#include "Field.hpp"

#include "ZTimeUtil.h"
#include "UtilDlg/UtilDlg.hpp"
#include "UIDialogEtc/UIDialogEtc.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

static ZRef<CField::UserLook> _FAKE_ZRef_CField_UserLook{};
static ZRef<CUIBlockUser> _FAKE_ZRef_CUIBlockUser{};
static ZRef<Field::UserCond> _FAKE_ZRef_Field_UserCond{};

static ZRefCounted_AllocHelper<ZRefCountedDummy<DYNAMIC_OBJ_INFO>>
_FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_DYNAMIC_OBJ_INFO{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<MOVING_OBJ_INFO>>
_FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_MOVING_OBJ_INFO{};

static ZRef<CMatchTableDlg> _FAKE_ZRef_CMatchTableDlg{};


static ZList<ZPair<unsigned long, ZXString<char>>> _FAKE_ZList_ZPair_unsigned_long_ZXString_char{};

#include "Field_regen.ipp"

//TODO
int32_t CSnowBall::ms_anDelay[10]{};
int32_t CSnowBall::ms_nDeltaX = 0;

DYNAMIC_OBJ_INFO::~DYNAMIC_OBJ_INFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void DYNAMIC_OBJ_INFO::_dtor_0()
{
    return __sub_0012E310(this, nullptr);
}

DYNAMIC_OBJ_INFO::DYNAMIC_OBJ_INFO(const DYNAMIC_OBJ_INFO& arg0)
{
    _ctor_1(arg0);
}

void DYNAMIC_OBJ_INFO::_ctor_1(const DYNAMIC_OBJ_INFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

DYNAMIC_OBJ_INFO::DYNAMIC_OBJ_INFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void DYNAMIC_OBJ_INFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

DYNAMIC_OBJ_INFO& DYNAMIC_OBJ_INFO::operator=(const DYNAMIC_OBJ_INFO& arg0)
{
    return _op_assign_3(this, arg0);
}

DYNAMIC_OBJ_INFO& DYNAMIC_OBJ_INFO::_op_assign_3(DYNAMIC_OBJ_INFO* pThis, const DYNAMIC_OBJ_INFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSnowBall::~CSnowBall()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CSnowBall::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSnowBall::CSnowBall(const CSnowBall& arg0)
{
    _ctor_1(arg0);
}

void CSnowBall::_ctor_1(const CSnowBall& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSnowBall::CSnowBall()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CSnowBall::_ctor_0()
{
    return __sub_0012E830(this, nullptr);
}

void CSnowBall::Init(long x, long y, const ZXString<char>& sPortalName, const wchar_t* sUOL)
{
    __sub_00161630(this, nullptr, x, y, sPortalName, sUOL);
}

void CSnowBall::Move(long dx)
{
    __sub_00160080(this, nullptr, dx);
}

void CSnowBall::Win()
{
    __sub_00160270(this, nullptr);
}

void CSnowBall::Update()
{
    __sub_00160400(this, nullptr);
}

void CSnowBall::SetPos(long x, long s, int32_t bReset)
{
    __sub_001603A0(this, nullptr, x, s, bReset);
}

const tagRECT& CSnowBall::GetRect()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const ZXString<char>& CSnowBall::GetPortalName()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl CSnowBall::SetDeltaX(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSnowBall& CSnowBall::operator=(const CSnowBall& arg0)
{
    return _op_assign_11(this, arg0);
}

CSnowBall& CSnowBall::_op_assign_11(CSnowBall* pThis, const CSnowBall& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSnowMan::~CSnowMan()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CSnowMan::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSnowMan::CSnowMan(const CSnowMan& arg0)
{
    _ctor_1(arg0);
}

void CSnowMan::_ctor_1(const CSnowMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSnowMan::CSnowMan()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CSnowMan::_ctor_0()
{
    return __sub_0012B110(this, nullptr);
}

void CSnowMan::Init(long x, long y, const wchar_t* sUOL)
{
    __sub_00160C10(this, nullptr, x, y, sUOL);
}

void CSnowMan::Hit()
{
    __sub_00160F50(this, nullptr);
}

void CSnowMan::DrawHPTag()
{
    __sub_00160600(this, nullptr);
}

const tagRECT& CSnowMan::GetRect()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSnowMan& CSnowMan::operator=(const CSnowMan& arg0)
{
    return _op_assign_7(this, arg0);
}

CSnowMan& CSnowMan::_op_assign_7(CSnowMan* pThis, const CSnowMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField::~CField()
{
}

void CField::_dtor_0()
{
    // return __sub_0013CCB0(this, nullptr);
    this->~CField();
}

CField::CField(const CField& arg0)
{
    _ctor_1(arg0);
}

void CField::_ctor_1(const CField& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField::CField()
{
    m_tLastUpdateQuestLayer = timeGetTime();
}

void CField::_ctor_0()
{
    new(this) CField();
}

CField::PROPERTY __cdecl CField::GetFieldProp(unsigned long arg0)
{
    return __sub_00132220(arg0);
}

ZRef<CField> __cdecl CField::FieldFactory(unsigned long dwFieldID)
{
    return __sub_0013F220(dwFieldID);
}

void CField::Init(void* pParam)
{
    //__sub_0013ACA0(this, nullptr, pParam);
    INITPARAM* param = static_cast<INITPARAM*>(pParam);

    CMapLoadable::Init(pParam);

    auto fieldId = param->pCharacterData->characterStat._ZtlSecureGet_dwPosMap();
    m_dwField = fieldId;
    m_bFieldKey = param->bFieldKey;

    auto prop = GetFieldProp(fieldId);
    m_pPropField = prop.pData;
    m_pPropFieldInfo = prop.pInfo;

    m_bField = true;
    LoadMap(fieldId);

    auto& rm = get_rm();
    Z_CHECK_HR(rm->raw_FlushCachedObjects(180000));

    FadeIn();

    SYSTEMTIME st{};
    GetLocalTime(&st);
    _FILETIME ft{};
    SystemTimeToFileTime(&st, &ft);
    m_ftRel = TimeUtil::ULL2FT(TimeUtil::FT2ULL(param->ftServer) - TimeUtil::FT2ULL(ft));

    auto ctx = CWvsContext::GetInstance();
    auto userPool = CUserPool::GetInstance();
    ctx->OnEnterField();
    userPool->CreateLocalUser(param->pCharacterData);
    _D_S_BCHASE = 0;
    ctx->ValidateStat();
    ApplyUserLook(userPool->GetLocalUser());

    if (!ctx->GetCharacterData())
        ctx->OnPostEnterGame();

    if (ctx->GetReceivedMemoCount())
    {
        if (!ctx->IsFadeWndExist(4, 0, {}))
        {
            auto fadeYesNo = new CUIFadeYesNo();
            fadeYesNo->CreateNewMemo();
            ctx->SetNewFadeWnd(fadeYesNo);
        }
    }

    UpdateQuestLayer();
    InitFearEffect();
    auto ftNow = Util::FTGetNow();
    auto isChristmas = false; // TODO compare ftXmas range

    SetMapObjectVisible(ZXString("xmas"), isChristmas);

    if (auto local = CUserLocal::GetInstance())
    {
        local->ResetNLCPQ();
    }
}

void CField::Close()
{
    CAnimationDisplayer::GetInstance()->m_FootHold.RemoveAll();
    m_lDynamicObjs.RemoveAll();
    m_mDynamicObjs.RemoveAll();
    if (m_pClock)
        m_pClock->Destroy();

    if (m_unWeatherSoundCookie)
        CSoundMan::GetInstance()->StopSE(m_unWeatherSoundCookie, false);

    CMapLoadable::Close();
}

void CField::Update()
{
    //__sub_00146580(this, nullptr);
    auto ctx = CWvsContext::GetInstance();
    auto t = timeGetTime();
    auto updateTime = get_update_time();
    CMapLoadable::Update();
    UpdateDynamicObject();
    ctx->Update();
    CCakePieEvent::GetInstance()->Update();


    if (m_bWhisperSent && t - m_tWhisperSent > 3000)
    {
        m_bWhisperSent = false;
        m_tWhisperSent = t;
    }

    //TODO weahter + bKillMobFromEnterField


    auto wndMan = CWndMan::GetInstance();
    tagPOINT pt{};
    wndMan->GetCursorPos(&pt, false);
    if (wndMan->GetHandlerFromPoint(pt.x, pt.y) == wndMan)
    {
        wndMan->GetCursorPos(&pt, true);
        auto inp = CInputSystem::GetInstance();
        auto npcPool = CNpcPool::GetInstance();
        auto npc = npcPool->FindNpc(pt);
        auto userPool = CUserPool::GetInstance();
        auto user = userPool->FindBalloon(pt);

        auto cursorState = inp->GetCursorState();
        switch (cursorState)
        {
        case 0:
            if (npc)
                cursorState = 1;
            if (user)
            {
                cursorState = 2;
                if (user->GetMiniRoomType() > 2)
                    cursorState = 3;
            }
            break;
        case 1:
            if (!npc)
                cursorState = 0;
            break;
        case 2:
        case 3:
            if (!user)
                cursorState = 0;
            break;
        default:
            break;
        }
        if (cursorState != inp->GetCursorState())
            inp->SetCursorState(cursorState);
    }


    if (auto portalList = CPortalList::GetInstance())
        portalList->UpdateHiddenPortal();

    if (updateTime - m_tLastUpdateQuestLayer > 5000)
    {
        UpdateQuestLayer();
        m_tLastUpdateQuestLayer = updateTime;
    }
    DrawFearEffect();
}

void CField::OnKey(uint32_t wParam, int32_t lParam)
{
    //__sub_0012A6B0(this, nullptr, wParam, lParam);
    auto ctx = CWvsContext::GetInstance();
    auto userLocal = CUserLocal::GetInstance();
    if (ctx->ProcessBasicUIKey(wParam, lParam))
        return;

    if (CUniqueModeless::GetInstance())
        return;

    if (!userLocal)
        return;


    if (CanUseSpecialArts() && ctx->GetEnergy() >= 10000)
        userLocal->OnKey(wParam, lParam);
    else if (!userLocal->PreprocessOnKey(wParam, lParam))
        userLocal->OnKey(wParam, lParam);
}

int32_t CField::OnSetFocus(int32_t bFocus)
{
    return 1;
}

void CField::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    if (CUniqueModeless::GetInstance())
        if (auto user = CUserLocal::GetInstance())
            user->OnMouseButton(msg, wParam, rx, ry);
}

int32_t CField::OnMouseMove(long rx, long ry)
{
    auto wndMan = CWndMan::GetInstance();
    //return __sub_0012B3D0(this, nullptr, rx, ry);
    if (m_pLayerHPTag)
    {
        auto org = wndMan->GetOrgWindow(CWnd::Origin_LT);
        auto x = org->Getx();
        auto y = org->Gety();

        auto hpX = m_pLayerHPTag->Getx();
        auto hpY = m_pLayerHPTag->Gety();

        auto xRange = hpX - x + 3 > rx;
        auto xRange2 = m_nMobIconWidth + x - hpX + 1 < rx;
        auto yRange = hpY + m_nMobIconHeight - y + 5 < ry;
        if (xRange || xRange2 || yRange)
        {
            m_uiTooltip.ClearToolTip();
        }
        else
        {
            m_uiTooltip.SetToolTip_String(
                hpX + m_nMobIconWidth - x + 10,
                ry,
                m_sMobName.c_str()
            );
        }
    }

    if (auto user = CUserLocal::GetInstance())
        user->OnMouseMove(rx, ry);

    return 1;
}

void CField::OnJoystickButton(uint32_t wButton, unsigned long dwData)
{
    if ( !TSingleton<CUniqueModeless>::ms_pInstance )
    {
        if ( auto user = TSingleton<CUserLocal>::ms_pInstance )
            user->OnJoystickButton(wButton, dwData);
    }
}

void CField::OnPacket(long nType, CInPacket& iPacket)
{
    __sub_00146D50(this, nullptr, nType, iPacket);
}

void CField::LoadMap(unsigned long dwField)
{
    //__sub_001469F0(this, nullptr, dwField);
    CMapLoadable::LoadMap();
    RestoreOption();
    RestoreHelpMsg(dwField);
    RestorePeculiarInfo();
    RestoreSeat();
    RestoreClock();
    RestoreToolTip();
    RestoreWeatherMsg();


    auto ctx = CWvsContext::GetInstance();
    auto cfg = CConfig::GetInstance();
    auto& sp = StringPool::GetInstance();
    if (!ctx->GetDirectionMode())
    {
        PlayBGMFromMapInfo();
    }

    auto miniMap = CUIMiniMap::GetInstance();
    if (cfg)
    {
        miniMap->SetMiniMapType(cfg->m_sysOpt.bSysOpt_Minimap_Normal, 0);
    }
    miniMap->LoadMiniMap(m_pPropFieldInfo, m_pPropField, dwField);


    auto prop = m_pPropField->GetItemT<IWzProperty>(sp.GetBSTR(0x5EE));
    CPortalList::GetInstance()->RestorePortal(this, _x_com_ptr<IWzProperty>(prop));

    if (dwField == 280030000 || dwField == 280030001)
    {
        auto zakumId = 8800100; //TODO(mob) chaos zakum
        for (auto i = 0; i <= 10; ++i)
        {
            if (i == 1 || i == 2)
            {
                continue;
            }

            auto mobId = zakumId + i;
            auto mob = CMobTemplate::GetMobTemplate(mobId);

            for (auto actIx = 0; actIx < 43; ++actIx)
            {
                MobAttackInfo* atkInfo = nullptr;
                if (actIx - 13 <= 8)
                {
                    atkInfo = mob->GetAttackInfo(actIx - 13);
                }
                ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>> l;
                CActionMan::GetInstance()->LoadMobAction(mobId, actIx, l);
            }
        }
    }


    if (_D_S_BAUTOULIST)
    {
        SendChatMsgSlash(sp.GetString(193));
    }

    m_dwCrc = m_pSpace2D->GetCRC();
    m_dwCrc ^= CPortalList::GetInstance()->GetCRC();
    m_dwCrc = CCrc32::GetCrc32((const uint8_t*)&m_bSwim, 4, m_dwCrc, 0, nullptr, 0);
    m_dwCrc = CCrc32::GetCrc32((const uint8_t*)&m_bFly, 4, m_dwCrc, 0, nullptr, 0);
    m_dwCrc = CCrc32::GetCrc32((const uint8_t*)&m_bPersonalShopAvailable, 4, m_dwCrc, 0, nullptr, 0);
    m_dwCrc = CCrc32::GetCrc32((const uint8_t*)&m_nPhase, 4, m_dwCrc, 0, nullptr, 0);
    LoadDynamicObject();
}

void CField::DecodeFieldSpecificData(CUser* pUser, CInPacket& iPacket)
{
    __sub_0013CB50(this, nullptr, pUser, iPacket);
}

int32_t CField::BasicActionAttack()
{
    return __sub_0013CAD0(this, nullptr);
}

long CField::GetFieldType()
{
    return 0;
}

void CField::OnFieldSetVariable(ZXString<char> sKey, ZXString<char> sVal)
{
    __sub_0013CB60(this, nullptr, CreateNakedParam(sKey), CreateNakedParam(sVal));
}

void CField::OnSessionValue(ZXString<char> sKey, ZXString<char> sVal)
{
    __sub_0013CBD0(this, nullptr, CreateNakedParam(sKey), CreateNakedParam(sVal));
}

void CField::OnPartyValue(ZXString<char> sKey, ZXString<char> sVal)
{
    __sub_0013CC40(this, nullptr, CreateNakedParam(sKey), CreateNakedParam(sVal));
}

void CField::SendChatMsg(const ZXString<char>& sText, int32_t bOnlyBalloon)
{
    //__sub_00134000(this, nullptr, sText, bOnlyBalloon);
    if (sText.IsEmpty())
        return;

    auto& sp = StringPool::GetInstance();
    if (auto dialog = CUniqueModeless::GetInstance())
    {
        if (auto statusBar = CUIStatusBar::GetInstance())
        {
            auto msg = sp.GetString(0x125);
            statusBar->ChatLogAdd(msg.c_str(), 12, -1, bOnlyBalloon, {});
        }
        return;
    }


    COutPacket pkt(Cp::Userchat);
    pkt.Encode4(get_update_time());
    pkt.EncodeStr(sText);
    pkt.Encode1(bOnlyBalloon);
    SendPacket(pkt);


}

void CField::SendChatMsgSlash(const ZXString<char>& arg0)
{
    __sub_001408E0(this, nullptr, arg0);
}

void CField::SendChatMsgWhisper(const ZXString<char>& sText, const ZXString<char>& sWhisperTarget)
{
    __sub_0013D3B0(this, nullptr, sText, sWhisperTarget);
}

void CField::SendLocationWhisper(const ZXString<char>& sWhisperTarget, int32_t bTabFriend)
{
    __sub_00134150(this, nullptr, sWhisperTarget, bTabFriend);
}

void CField::SendInviteTradingRoomMsg(const ZXString<char>& sTradeTarget, int32_t bCashTrade)
{
    __sub_0012E9E0(this, nullptr, sTradeTarget, bCashTrade);
}

void CField::SendCreateNewPartyMsg()
{
    __sub_0012EBC0(this, nullptr);
}

void CField::SendWithdrawPartyMsg()
{
    __sub_0012EDB0(this, nullptr);
}

void CField::SendJoinPartyMsg(const ZXString<char>& sTarget)
{
    __sub_00134310(this, nullptr, sTarget);
}

void CField::SendKickPartyMsg(const ZXString<char>& sTarget)
{
    __sub_00130140(this, nullptr, sTarget);
}

void CField::SendChangePartyBossMsg(const ZXString<char>& sTarget)
{
    __sub_00130370(this, nullptr, sTarget);
}

void CField::SendCreateExpeditionMsg(ZXString<char>& sExpeditionName)
{
    __sub_00130580(this, nullptr, sExpeditionName);
}

void CField::SendKickExpeditionMsg(const ZXString<char>& sTarget)
{
    __sub_00130850(this, nullptr, sTarget);
}

void CField::SendInviteExpeditionMsg(const ZXString<char>& sTarget)
{
    __sub_00130A30(this, nullptr, sTarget);
}

void CField::SendWithdrawExpeditionMsg()
{
    __sub_00130B60(this, nullptr);
}

void CField::InputGuildName()
{
    __sub_001347D0(this, nullptr);
}

void CField::SendCreateGuildAgreeMsg(int32_t bAgree)
{
    __sub_0012D780(this, nullptr, bAgree);
}

void CField::SendWithdrawGuildMsg()
{
    __sub_00134AD0(this, nullptr);
}

void CField::SendInviteGuildMsg(ZXString<char> sTarget)
{
    __sub_001348E0(this, nullptr, CreateNakedParam(sTarget));
}

void CField::SendKickGuildMsg(ZXString<char> sTarget)
{
    __sub_00134CB0(this, nullptr, CreateNakedParam(sTarget));
}

void CField::SendIncMaxMemberNumMsg(long nTargetChannel)
{
    __sub_0012EFA0(this, nullptr, nTargetChannel);
}

void CField::SendSetMemberGradeMsg(unsigned long dwCharacterID, long nGrade)
{
    __sub_0012D820(this, nullptr, dwCharacterID, nGrade);
}

void CField::SendSetGradeNameMsg(ZXString<char> sName1, ZXString<char> sName2, ZXString<char> sName3,
                                 ZXString<char> sName4, ZXString<char> sName5)
{
    __sub_00134FE0(this, nullptr, CreateNakedParam(sName1), CreateNakedParam(sName2), CreateNakedParam(sName3),
                   CreateNakedParam(sName4), CreateNakedParam(sName5));
}

void CField::SendSetGuildMarkMsg(uint16_t nMarkBg, unsigned char nMarkBgColor, uint16_t nMark, unsigned char nMarkColor)
{
    __sub_0012D8C0(this, nullptr, nMarkBg, nMarkBgColor, nMark, nMarkColor);
}

void CField::SendSetGuildNoticeMsg(ZXString<char> sNotice)
{
    __sub_00135180(this, nullptr, CreateNakedParam(sNotice));
}

int32_t CField::SendTransferFieldRequest(unsigned long dwTargetField, const char* sPortal, int32_t bPremium,
                                         long nTargetPosition_X, long nTargetPosition_Y)
{
    return __sub_001345C0(this, nullptr, dwTargetField, sPortal, bPremium, nTargetPosition_X, nTargetPosition_Y);
}

void CField::SendTransferChannelRequest(long nTargetChannel)
{
    __sub_0012EFA0(this, nullptr, nTargetChannel);
}

void CField::SendSetFriendMsg(ZXString<char> sTarget, ZXString<char> sFriendGroup, int32_t bVerbose)
{
    __sub_00135240(this, nullptr, CreateNakedParam(sTarget), CreateNakedParam(sFriendGroup), bVerbose);
}

void CField::SendDeleteFriendMsg(unsigned long dwFriendID)
{
    __sub_0012F170(this, nullptr, dwFriendID);
}

void CField::SendAcceptFriendMsg(unsigned long dwFriendID)
{
    __sub_0012F290(this, nullptr, dwFriendID);
}

void CField::AddBlackList(ZXString<char> sCharacterName)
{
    __sub_00139710(this, nullptr, CreateNakedParam(sCharacterName));
}

void CField::DeleteBlackList(ZXString<char> sCharacterName)
{
    __sub_001397D0(this, nullptr, CreateNakedParam(sCharacterName));
}

void CField::SendMapleTVRequest(unsigned char arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4,
                                const ZXString<char>& arg5, const ZXString<char>& arg6, const ZXString<char>& arg7,
                                const ZXString<char>& arg8, const ZXString<char>& arg9, const ZXString<char>& arg10)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned long CField::GetFieldID()
{
    return m_dwField;
}

unsigned char CField::GetFieldKey()
{
    //return __sub_0012A1E0(this, nullptr);
    return m_bFieldKey;
}

unsigned long CField::GetOption()
{
    return m_dwOption;
}

double CField::GetRecoveryRate()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CField::GetReduceHPAmount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const tagPOINT& CField::GetSeat(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CField::FindSeatByPosition(tagPOINT ptUser)
{
    return __sub_0012B6A0(this, nullptr, CreateNakedParam(ptUser));
}

int32_t CField::IsEventMap(int32_t bExceptETC)
{
    return __sub_0012F900(this, nullptr, bExceptETC);
}

ZXString16 CField::GetMapSpecificEffectUOL()
{
    //return __sub_004EAFC0(this, nullptr);
    return m_sMapSpecificEffectUOL;
}

void CField::OnTownPortalChanged(int32_t bParty, const PARTYDATA& rpd, const PARTYDATA::TOWNPORTAL& rtp,
                                 int32_t bOnlyPortalChange)
{
    __sub_001381F0(this, nullptr, bParty, rpd, rtp, bOnlyPortalChange);
}

void CField::OnOpenGate()
{
    __sub_0012A280(this, nullptr);
}

void CField::TryEnterTownPortal(tagPOINT pt)
{
    __sub_0012F970(this, nullptr, CreateNakedParam(pt));
}

tagPOINT CField::GetTownPortalPos(long nIdx)
{
    tagPOINT pt{};
    return *__sub_0012B720(this, nullptr, &pt, nIdx);
}

double CField::GetFs()
{
    return _ZtlSecureGet_m_fs();
}

int32_t CField::IsUnableToMigrate()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CField::IsTown()
{
    //return __sub_0023A040(this, nullptr);
    return m_bTown;
}

int32_t CField::IsSwimmingMap() const
{
    //return __sub_0023A040(this, nullptr);
    return m_bSwim;
}

int32_t CField::IsFlyingMap()
{
    //return __sub_0023A040(this, nullptr);
    return m_bFly;
}

int32_t CField::IsNeedSkillForFlying()
{
    //return __sub_0023A040(this, nullptr);
    return m_bNeedSkillForFly;
}

int32_t CField::IsPersonalShopAvailable()
{
    //return __sub_0023A040(this, nullptr);
    return m_bPersonalShopAvailable;
}

int32_t CField::IsUnableToOpenMiniGame()
{
    //return __sub_0023A040(this, nullptr);
    UNIMPLEMENTED;
}

int32_t CField::IsUnableToUsePortalScroll()
{
    //return __sub_0023A040(this, nullptr);
    UNIMPLEMENTED;
}

int32_t CField::IsUnableToUseSkill()
{
    return (this->m_dwOption >> 1) & 1;
}

int32_t CField::IsUnableToUseRocketBoost()
{
    //return __sub_0023A040(this, nullptr);
    UNIMPLEMENTED;
}

int32_t CField::IsUnableToUseMysticDoor()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsUnableToUseSummonItem()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsUnableToUseTeleportItem()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsUnableToJump()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsUnableToUseSpecificPortalScroll()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsUnableToUseTamingMob()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsUnableToUseWeddingInvitationItem()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsUnableToConsumeStatChangeItem()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsUnableToChangePartyBoss()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsUnableToUseCashWeatherItem()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsUnableToUseAntiMacroItem()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsUnableToFallDown()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsUnableToSummonNPC()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsNoDamageOnFalling()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsDropLimit()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsDropEverlast()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsForcedReturnMapExistent()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsExpeditionOnly()
{
    return __sub_0023A040(this, nullptr);
}

long CField::GetConsumeItemCoolTime()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CField::IsUnableToKickParty()
{
    return __sub_0012A340(this, nullptr);
}

int32_t CField::IsUnableToWithdrawParty()
{
    return __sub_0012A390(this, nullptr);
}

long CField::GetMaxMapPhase()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned long CField::GetPhaseAlpha()
{
    //TODO verify
    return m_nPhase;
}

long CField::GetPhaseAlphaBG(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CField::HasAllowedItem()
{
    return __sub_0023A040(this, nullptr);
}

int32_t CField::IsAllowedItem(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CField::ShowMobHPTag(unsigned long arg0, long arg1, long arg2, long arg3, long arg4)
{
    __sub_00135BA0(this, nullptr, arg0, arg1, arg2, arg3, arg4);
}

_FILETIME CField::FileTimeAdd(_FILETIME arg0, _FILETIME arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

_FILETIME CField::FileTimeSubtract(_FILETIME arg0, _FILETIME arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

_FILETIME CField::GetRelTime()
{
    return m_ftRel;
}

_SYSTEMTIME CField::GetCorrectTime()
{
    return __sub_0012A290(this, nullptr);
}

void CField::RestoreTownPortal(tagPOINT pt)
{
    m_aTownPortal.Insert(pt);
}

void CField::SetIUDlg(CUIItemUpgrade* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CField::ReSetIUDlg()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CField::SetCSDlg(CUICharacterSaleDlg* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CField::ReSetCSDlg()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CField::SetVegaDlg(CUIVega* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CField::ReSetVegaDlg()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

double __fastcall CField::_ZtlSecureGet_m_fs() const
{
    return __ZtlSecureFuse((double*)this->_ZtlSecureTear_m_fs.data(), _ZtlSecureTear_m_fs_CS);
}

double __fastcall CField::_ZtlSecurePut_m_fs(double arg0)
{
    this->_ZtlSecureTear_m_fs_CS = __ZtlSecureTear(arg0, this->_ZtlSecureTear_m_fs.data());
    return arg0;
}

void CField::RestoreOption()
{
    __sub_0013B070(this, nullptr);
}

void CField::RestorePeculiarInfo()
{
    //__sub_00146560(this, nullptr);
    RestoreSwinArea();
    RestoreUserInfo();
    RestoreForbiddenSkill();
}

void CField::RestoreSwinArea()
{
    __sub_001330E0(this, nullptr);
}

void CField::RestoreUserInfo()
{
    __sub_0013FA30(this, nullptr);
}

void CField::RestoreForbiddenSkill()
{
    auto propSkill = m_pPropField->GetItemT<IWzProperty>(L"noSkill");


    auto fieldTy = GetFieldType();
    m_siForbiddenSkill.SetFieldType(fieldTy);
    m_siForbiddenSkill.Parse(_x_com_ptr<IWzProperty>(propSkill));
    //__sub_00132FB0(this, nullptr);
}

void CField::RestoreHelpMsg(unsigned long dwField)
{
    __sub_0012FF40(this, nullptr, dwField);
}

void CField::RestoreSeat()
{
    __sub_00133820(this, nullptr);
}

void CField::RestoreClock()
{
    __sub_00133AB0(this, nullptr);
}

void CField::RestoreToolTip()
{
    __sub_00133EE0(this, nullptr);
}

void CField::RestoreWeatherMsg()
{
    __sub_0013CF80(this, nullptr);
}

void CField::RestoreAllowedItem()
{
    __sub_00132AB0(this, nullptr);
}

void CField::RestorePhaseBG()
{
    __sub_00132DD0(this, nullptr);
}

int32_t CField::IsWhisperSent()
{
    return __sub_0023A040(this, nullptr);
}

void CField::SetWhisperSent(int32_t bAgree)
{
    __sub_0012D780(this, nullptr, bAgree);
}

void CField::OnTransferFieldReqIgnored(CInPacket& iPacket)
{
    __sub_0012F3B0(this, nullptr, iPacket);
}

void CField::OnTransferChannelReqIgnored(CInPacket& iPacket)
{
    __sub_0012F5F0(this, nullptr, iPacket);
}

void CField::OnFieldSpecificData(CInPacket& iPacket)
{
    __sub_0012A7E0(this, nullptr, iPacket);
}

void CField::OnGroupMessage(CInPacket& iPacket)
{
    __sub_00135490(this, nullptr, iPacket);
}

void CField::OnCoupleMessage(CInPacket& iPacket)
{
    __sub_001357F0(this, nullptr, iPacket);
}

void CField::OnWhisper(CInPacket& iPacket)
{
    __sub_001448A0(this, nullptr, iPacket);
}

void CField::OnSummonItemInavailable(CInPacket& iPacket)
{
    __sub_0012F7B0(this, nullptr, iPacket);
}

void CField::OnFieldObstacleOnOff(CInPacket& iPacket)
{
    __sub_00135A80(this, nullptr, iPacket);
}

void CField::OnFieldObstacleOnOffStatus(CInPacket& iPacket)
{
    __sub_00135B00(this, nullptr, iPacket);
}

void CField::OnFieldObstacleAllReset(CInPacket& iPacket)
{
    __sub_0012C830(this, nullptr, iPacket);
}

void CField::OnFieldEffect(CInPacket& iPacket)
{
    __sub_0013B790(this, nullptr, iPacket);
}

void CField::OnBlowWeather(CInPacket& iPacket)
{
    __sub_001468F0(this, nullptr, iPacket);
}

void CField::OnPlayJukeBox(CInPacket& iPacket)
{
    __sub_00137940(this, nullptr, iPacket);
}

void CField::OnAdminResult(CInPacket& iPacket)
{
    __sub_0013BC20(this, nullptr, iPacket);
}

void CField::OnQuiz(CInPacket& arg0)
{
    __sub_00137A90(this, nullptr, arg0);
}

void CField::OnDesc(CInPacket& iPacket)
{
    __sub_001313D0(this, nullptr, iPacket);
}

void CField::OnSetQuestClear(CInPacket& iPacket)
{
    __sub_0012C870(this, nullptr, iPacket);
}

void CField::OnSetQuestTime(CInPacket& ftStart)
{
    __sub_0012B790(this, nullptr, ftStart);
}

void CField::OnSetObjectState(CInPacket& iPacket)
{
    __sub_00139890(this, nullptr, iPacket);
}

void CField::OnClock(CInPacket& iPacket)
{
    __sub_00131510(this, nullptr, iPacket);
}

void CField::OnMakeTimerParam(CClock::INITPARAM& param, long& nX, long& nY)
{
    __sub_0012F7F0(this, nullptr, param, nX, nY);
}

void CField::OnDestroyClock(CInPacket& iPacket)
{
    __sub_0012A7C0(this, nullptr, iPacket);
}

void CField::OnZakumTimer(CInPacket& iPacket)
{
    __sub_00130CC0(this, nullptr, iPacket);
}

void CField::OnChaosZakumTimer(CInPacket& iPacket)
{
    __sub_00131020(this, nullptr, iPacket);
}

void CField::OnHontaleTimer(CInPacket& iPacket)
{
    __sub_001311D0(this, nullptr, iPacket);
}

void CField::OnHontailTimer(CInPacket& iPacket)
{
    __sub_00130E70(this, nullptr, iPacket);
}

void CField::OnStalkResult(CInPacket& iPacket)
{
    __sub_00139910(this, nullptr, iPacket);
}

void CField::OnSetPortalUsable(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CField::OnFootHoldInfo(CInPacket& iPacket)
{
    __sub_0013A810(this, nullptr, iPacket);
}

void CField::OnRequestFootHoldInfo(CInPacket& iPacket)
{
    __sub_0012DDD0(this, nullptr, iPacket);
}

void CField::OnItemUpgrade(long nType, CInPacket& iPacket)
{
    __sub_0012A430(this, nullptr, nType, iPacket);
}

void CField::ShowScreenEffect(ZXString16 sName)
{
    __sub_001376D0(this, nullptr, CreateNakedParam(sName));
}

void CField::BlowWeather(long nItemID, ZXString<char> sMsg, int32_t bBlowWeatherByClient, long tDuration)
{
    __sub_0013DD50(this, nullptr, nItemID, CreateNakedParam(sMsg), bBlowWeatherByClient, tDuration);
}

void CField::BlowWeather(long nItemID, ZXString<char> sMsg, int32_t bBlowWeatherByClient)
{
    __sub_00145980(this, nullptr, nItemID, CreateNakedParam(sMsg), bBlowWeatherByClient);
}

void CField::BlowWeather(long nItemID, ZXString<char> sMsg)
{
    __sub_00146870(this, nullptr, nItemID, CreateNakedParam(sMsg));
}

void CField::OnWarnMessage(CInPacket& iPacket)
{
    __sub_00138160(this, nullptr, iPacket);
}

void CField::OnCharacterSale(long nType, CInPacket& iPacket)
{
    __sub_0012A3E0(this, nullptr, nType, iPacket);
}

void CField::OnVega(long nType, CInPacket& iPacket)
{
    __sub_0012A400(this, nullptr, nType, iPacket);
}

int32_t CField::IsSkillForbiden(long nSkillID)
{
    //return this->m_siForbiddenSkill.IsSkill(nSkillID) != false;
    return false; //TODO(game)
}

void CField::ApplyUserLook(CUser* pUser)
{
    __sub_0012DA50(this, nullptr, pUser);
}

int32_t CField::CanUseSpecialArts()
{
    return __sub_0013CB30(this, nullptr);
}

unsigned long CField::GetCrc()
{
    return __sub_005033A0(this, nullptr);
}

void CField::UpdateQuestLayer()
{
    __sub_00131940(this, nullptr);
}

void CField::LoadDynamicObject()
{
    __sub_00145A10(this, nullptr);
}

void CField::UpdateDynamicObject()
{
    __sub_0012DB40(this, nullptr);
}

void CField::InitFearEffect()
{
    __sub_001399F0(this, nullptr);
}

void CField::DrawFearEffect()
{
    //TODO(optgame) __sub_0013A470(this, nullptr);
}

void CField::OnFearEffect()
{
    __sub_0013A450(this, nullptr);
}

void CField::OffFearEffect()
{
    __sub_0012B810(this, nullptr);
}

int32_t CField::IsFearEffectOn()
{
    return __sub_0012A420(this, nullptr);
}

CField& CField::operator=(CField& arg0)
{
    return _op_assign_184(this, arg0);
}

CField& CField::_op_assign_184(CField* pThis, CField& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField::PROPERTY::~PROPERTY()
{
}

void CField::PROPERTY::_dtor_0()
{
    this->~PROPERTY();
}

CField::PROPERTY::PROPERTY(const CField::PROPERTY& __that)
{
    pInfo = __that.pInfo;
    pData = __that.pData;
}

void CField::PROPERTY::_ctor_1(const CField::PROPERTY& __that)
{
    pInfo = __that.pInfo;
    pData = __that.pData;
}

CField::PROPERTY::PROPERTY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CField::PROPERTY::_ctor_0()
{
}

CField::PROPERTY& CField::PROPERTY::operator=(const CField::PROPERTY& arg0)
{
    return _op_assign_3(this, arg0);
}

CField::PROPERTY& CField::PROPERTY::_op_assign_3(CField::PROPERTY* pThis, const CField::PROPERTY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField::INITPARAM::~INITPARAM()
{
}

void CField::INITPARAM::_dtor_0()
{
    this->~INITPARAM();
}

CField::INITPARAM::INITPARAM(const CField::INITPARAM& arg0)
{
    _ctor_1(arg0);
}

void CField::INITPARAM::_ctor_1(const CField::INITPARAM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField::INITPARAM::INITPARAM()
{
}

void CField::INITPARAM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField::INITPARAM& CField::INITPARAM::operator=(const CField::INITPARAM& arg0)
{
    return _op_assign_3(this, arg0);
}

CField::INITPARAM& CField::INITPARAM::_op_assign_3(CField::INITPARAM* pThis, const CField::INITPARAM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField::WEATHERMSGINFO::~WEATHERMSGINFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CField::WEATHERMSGINFO::_dtor_0()
{
    return __sub_0012D700(this, nullptr);
}

CField::WEATHERMSGINFO::WEATHERMSGINFO(const CField::WEATHERMSGINFO& arg0)
{
    _ctor_1(arg0);
}

void CField::WEATHERMSGINFO::_ctor_1(const CField::WEATHERMSGINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField::WEATHERMSGINFO::WEATHERMSGINFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CField::WEATHERMSGINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField::WEATHERMSGINFO& CField::WEATHERMSGINFO::operator=(const CField::WEATHERMSGINFO& arg0)
{
    return _op_assign_3(this, arg0);
}

CField::WEATHERMSGINFO& CField::WEATHERMSGINFO::_op_assign_3(CField::WEATHERMSGINFO* pThis,
                                                             const CField::WEATHERMSGINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField::UserLook::~UserLook()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CField::UserLook::_dtor_0()
{
    return __sub_0012D1D0(this, nullptr);
}

CField::UserLook::UserLook(const CField::UserLook& arg0)
{
    _ctor_1(arg0);
}

void CField::UserLook::_ctor_1(const CField::UserLook& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField::UserLook::UserLook()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CField::UserLook::_ctor_0()
{
    return __sub_0012D160(this, nullptr);
}

int32_t CField::UserLook::IsCondTrue(CUser* pUser)
{
    return __sub_0012D970(this, nullptr, pUser);
}

void CField::UserLook::ForceLook(CUser* pUser)
{
    __sub_0012A2F0(this, nullptr, pUser);
}

CField::UserLook& CField::UserLook::operator=(const CField::UserLook& arg0)
{
    return _op_assign_5(this, arg0);
}

CField::UserLook& CField::UserLook::_op_assign_5(CField::UserLook* pThis, const CField::UserLook& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CHealer::~CHealer()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CHealer::_dtor_0()
{
    return __sub_0012B1F0(this, nullptr);
}

CHealer::CHealer(const CHealer& arg0)
{
    _ctor_1(arg0);
}

void CHealer::_ctor_1(const CHealer& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CHealer::CHealer()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CHealer::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CHealer::Init(long x, long y, const wchar_t* sUOL)
{
    __sub_00151690(this, nullptr, x, y, sUOL);
}

void CHealer::Move(long y)
{
    __sub_00151250(this, nullptr, y);
}

CHealer& CHealer::operator=(const CHealer& arg0)
{
    return _op_assign_5(this, arg0);
}

CHealer& CHealer::_op_assign_5(CHealer* pThis, const CHealer& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_AranTutorial::~CField_AranTutorial()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CField_AranTutorial::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_AranTutorial::CField_AranTutorial(const CField_AranTutorial& arg0)
{
    _ctor_1(arg0);
}

void CField_AranTutorial::_ctor_1(const CField_AranTutorial& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_AranTutorial::CField_AranTutorial()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CField_AranTutorial::_ctor_0()
{
    return __sub_0013F190(this, nullptr);
}

long CField_AranTutorial::GetFieldType()
{
    return __sub_0013F1C0(this, nullptr);
}

CField_AranTutorial& CField_AranTutorial::operator=(CField_AranTutorial& arg0)
{
    return _op_assign_4(this, arg0);
}

CField_AranTutorial& CField_AranTutorial::_op_assign_4(CField_AranTutorial* pThis, CField_AranTutorial& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_Tournament::~CField_Tournament()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CField_Tournament::_dtor_0()
{
    return __sub_0013E7A0(this, nullptr);
}

CField_Tournament::CField_Tournament(const CField_Tournament& arg0)
{
    _ctor_1(arg0);
}

void CField_Tournament::_ctor_1(const CField_Tournament& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_Tournament::CField_Tournament()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CField_Tournament::_ctor_0()
{
    return __sub_0013E700(this, nullptr);
}

void CField_Tournament::OnPacket(long nType, CInPacket& iPacket)
{
    __sub_00163780(this, nullptr, nType, iPacket);
}

CField_Tournament::AvatarInfo CField_Tournament::GetAvatarInfo(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CField_Tournament::IsAvatarInfoExist()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CField_Tournament::OnTournament(CInPacket& iPacket)
{
    __sub_001631A0(this, nullptr, iPacket);
}

void CField_Tournament::OnTournamentMatchTable(CInPacket& iPacket)
{
    __sub_001630D0(this, nullptr, iPacket);
}

void CField_Tournament::OnTournamentSetPrize(CInPacket& iPacket)
{
    __sub_001633A0(this, nullptr, iPacket);
}

void CField_Tournament::OnTournamentUEW(CInPacket& iPacket)
{
    __sub_00163620(this, nullptr, iPacket);
}

void CField_Tournament::OnTournamentAvatarInfo(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_Tournament& CField_Tournament::operator=(CField_Tournament& arg0)
{
    return _op_assign_11(this, arg0);
}

CField_Tournament& CField_Tournament::_op_assign_11(CField_Tournament* pThis, CField_Tournament& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_Tournament::AvatarInfo::~AvatarInfo()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CField_Tournament::AvatarInfo::_dtor_0()
{
    return __sub_0012E900(this, nullptr);
}

CField_Tournament::AvatarInfo::AvatarInfo(const CField_Tournament::AvatarInfo& arg0)
{
    _ctor_1(arg0);
}

void CField_Tournament::AvatarInfo::_ctor_1(const CField_Tournament::AvatarInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_Tournament::AvatarInfo::AvatarInfo()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CField_Tournament::AvatarInfo::_ctor_0()
{
    return __sub_0012E8F0(this, nullptr);
}

CField_Tournament::AvatarInfo& CField_Tournament::AvatarInfo::operator=(const CField_Tournament::AvatarInfo& arg0)
{
    return _op_assign_3(this, arg0);
}

CField_Tournament::AvatarInfo& CField_Tournament::AvatarInfo::_op_assign_3(
    CField_Tournament::AvatarInfo* pThis, const CField_Tournament::AvatarInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_LimitedView::~CField_LimitedView()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CField_LimitedView::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_LimitedView::CField_LimitedView(const CField_LimitedView& arg0)
{
    _ctor_1(arg0);
}

void CField_LimitedView::_ctor_1(const CField_LimitedView& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_LimitedView::CField_LimitedView()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CField_LimitedView::_ctor_0()
{
    return __sub_0013EAF0(this, nullptr);
}

void CField_LimitedView::Init(void* pParam)
{
    __sub_001554A0(this, nullptr, pParam);
}

void CField_LimitedView::Update()
{
    __sub_00155F80(this, nullptr);
}

void CField_LimitedView::SetShareView(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CField_LimitedView::DrawViewrange()
{
    __sub_00154CA0(this, nullptr);
}

CField_LimitedView& CField_LimitedView::operator=(CField_LimitedView& arg0)
{
    return _op_assign_7(this, arg0);
}

CField_LimitedView& CField_LimitedView::_op_assign_7(CField_LimitedView* pThis, CField_LimitedView& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_GuildBoss::~CField_GuildBoss()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CField_GuildBoss::_dtor_0()
{
    return __sub_0013EA00(this, nullptr);
}

CField_GuildBoss::CField_GuildBoss(const CField_GuildBoss& arg0)
{
    _ctor_1(arg0);
}

void CField_GuildBoss::_ctor_1(const CField_GuildBoss& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_GuildBoss::CField_GuildBoss()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CField_GuildBoss::_ctor_0()
{
    return __sub_0013E980(this, nullptr);
}

void CField_GuildBoss::Init(void* pParam)
{
    __sub_00151900(this, nullptr, pParam);
}

void CField_GuildBoss::OnPacket(long nType, CInPacket& iPacket)
{
    __sub_00151650(this, nullptr, nType, iPacket);
}

int32_t CField_GuildBoss::BasicActionAttack()
{
    return __sub_001517D0(this, nullptr);
}

void CField_GuildBoss::OnHealerMove(CInPacket& iPacket)
{
    __sub_00151510(this, nullptr, iPacket);
}

void CField_GuildBoss::OnPulleyStateChange(CInPacket& iPacket)
{
    __sub_00151540(this, nullptr, iPacket);
}

CField_GuildBoss& CField_GuildBoss::operator=(CField_GuildBoss& arg0)
{
    return _op_assign_8(this, arg0);
}

CField_GuildBoss& CField_GuildBoss::_op_assign_8(CField_GuildBoss* pThis, CField_GuildBoss& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_WeddingPhoto::~CField_WeddingPhoto()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CField_WeddingPhoto::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_WeddingPhoto::CField_WeddingPhoto(const CField_WeddingPhoto& arg0)
{
    _ctor_1(arg0);
}

void CField_WeddingPhoto::_ctor_1(const CField_WeddingPhoto& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CField_WeddingPhoto::CField_WeddingPhoto()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CField_WeddingPhoto::_ctor_0()
{
    return __sub_0013EEB0(this, nullptr);
}

long CField_WeddingPhoto::GetFieldType()
{
    return __sub_0013EEE0(this, nullptr);
}

CField_WeddingPhoto& CField_WeddingPhoto::operator=(CField_WeddingPhoto& arg0)
{
    return _op_assign_4(this, arg0);
}

CField_WeddingPhoto& CField_WeddingPhoto::_op_assign_4(CField_WeddingPhoto* pThis, CField_WeddingPhoto& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

char* __stdcall _com_util__ZtlConvertBSTRToString(wchar_t* pSrc)
{
    return __sub_0012C670(pSrc);
}

unsigned long __cdecl GETCRC32Svr_long_(const long& a, unsigned long dwInit)
{
    return __sub_0012A550(a, dwInit);
}

double __cdecl _ZtlSecureFuse_double_(const double* at, uint32_t uCS)
{
    return __sub_0012A210(at, uCS);
}

uint32_t __fastcall _ZtlSecureTear_double_(double t, double* arg1)
{
    return __sub_0012B370(t, arg1);
}
