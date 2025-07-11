// Stage.cpp
#include "Stage.hpp"
#include "DBBasic/DBBasic.hpp"
#include "opcodes.h"

static ZRefCounted_AllocHelper<ZRefCountedDummy<CharacterData>>
FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_CharacterData{};

ZRef<CStage> _D_G_PSTAGE{};

#include "Stage_regen.ipp"

CStage::~CStage()
{
    if (const auto wndMan = CWndMan::GetInstance())
    {
        wndMan->Unlink(this);
    }
}

void CStage::_dtor_0()
{
    this->~CStage();
}

CStage::CStage(const CStage& arg0)
{
    _ctor_1(arg0);
}

void CStage::_ctor_1(const CStage& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CStage::CStage()
{
    // UNIMPLEMENTED; //_ctor_0();
}

void CStage::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CStage::Init(void* pParam)
{
}

void CStage::Close()
{
}

void CStage::OnPacket(long nType, CInPacket& iPacket)
{
    switch ((Lp)nType)
    {
    case Lp::Setfield:
        OnSetField(iPacket);
        break;
    case Lp::Setitc:
        OnSetITC(iPacket);
        break;
    case Lp::Setcashshop:
        OnSetCashShop(iPacket);
        break;
    default:
        return;
    }
    //__sub_0031B0B0(this, nullptr, nType, iPacket);
}

int32_t CStage::OnSetFocus(int32_t bFocus)
{
    return 0;
    //return __sub_0007DB90(this, nullptr, bFocus);
}

void CStage::OnMouseEnter(int32_t bEnter)
{
    //__sub_00318AD0(this, nullptr, bEnter);
    auto inp = CInputSystem::GetInstance();
    if (bEnter && inp->GetCursorState())
        inp->SetCursorState(0);
}

void CStage::OnSetField(CInPacket& pkt)
{
    CWndMan::ms_lpWindow.RemoveAll();
    CWndMan::ms_lpWindow.Insert(CWndMan::GetInstance());


    //__sub_0031A0A0(this, nullptr, arg0);
    CUtilDlgEx::ForcedRet();

    CClientOptMan::GetInstance()->DecodeOpt(pkt);

    auto ctx = CWvsContext::GetInstance();
    auto cfg = CConfig::GetInstance();
    auto& sp = StringPool::GetInstance();
    auto oldChannelId = ctx->GetChannelID();
    auto chId = pkt.Decode4();
    ctx->SetChannelID(chId);
    ctx->SetOldDriverID(pkt.Decode4());

    if (oldChannelId != chId)
        ctx->SetKeepPartySearch();

    auto fieldKey = pkt.Decode1();
    auto hasCharData = pkt.Decode1();


    auto notifCount = pkt.Decode2();
    ZXString<char> chatBlockReason;
    ZArray<ZXString<char>> notifContent;
    if (notifCount)
    {
        chatBlockReason = pkt.DecodeStr();
        for (auto i = 0; i < notifCount; ++i)
        {
            notifContent.Insert(pkt.DecodeStr());
        }
    }


    ZRef<CharacterData> charData;

    if (hasCharData)
    {
        auto s1 = pkt.Decode4();
        auto s2 = pkt.Decode4();
        auto s3 = pkt.Decode4();
        ctx->GetCalcDamage().SetSeed(s1, s2, s3);
        ctx->SetActionRndSeed(s1, s2, s2);

        //TODO alloc char data
        charData = new CharacterData();
        charData->Decode(pkt, false);
        //TODO set char
        ctx->OnSetLogoutGiftConfig(pkt);
    }
    else
    {
        auto revive = pkt.Decode1();
        auto userLocal = CUserLocal::GetInstance();
        if (userLocal->IsDead() || revive)
            ctx->OnRevive();

        charData = ctx->GetCharacterData();
        charData->ClearVisitorLog();
        auto& cs = charData->characterStat;
        cs._ZtlSecurePut_dwPosMap(pkt.Decode4());
        cs.nPortal = pkt.Decode1();
        cs._ZtlSecurePut_nHP(pkt.Decode4());
        ctx->m_bChaseEnable = pkt.Decode1();
        if (ctx->m_bChaseEnable)
        {
            ctx->m_nTargetPosition_X = pkt.Decode4();
            ctx->m_nTargetPosition_Y = pkt.Decode4();
        }
        userLocal->SetPhase(0);
    }


    if (!get_stage()->IsKindOf(&CInterStage::ms_RTTI_CInterStage))
    {
        set_stage(new CInterStage(), nullptr);
    }


    CField::INITPARAM param;
    param.bFieldKey = fieldKey;
    param.pCharacterData = charData;
    pkt.DecodeBuffer(&param.ftServer, 8);
    auto mapId = charData->characterStat._ZtlSecureGet_dwPosMap();
    auto field = CField::FieldFactory(mapId);


    set_stage(field.op_arrow(), &param);
    ctx->CloseShopScanner();

    if (hasCharData)
    {
        cfg->SaveSessionInfo();
        ctx->ClearCooltimeAll();

        ctx->CheckDarkForce(true);
        ctx->CheckDragonFury(true);
    }


    //TODO (stage_game) correct?
    if (ctx->IsSubGMAccount())
    {
        COutPacket pkt(Cp::Admin);
        pkt.Encode1(19);
        pkt.Encode1(15);
        CClientSocket::GetInstance()->SendPacket(pkt);
    }

    if (IsKindOf(&CLogin::ms_RTTI_CLogin))
    {
        auto lvl = charData->characterStat._ZtlSecureGet_nLevel();
        auto exp = charData->characterStat._ZtlSecureGet_nEXP();
        //TODO(game) make dialog
        /*if (lvl == 1 && !exp)
        {
            ZRef dlg(new CUtilDlgEx(), true);
            auto dlgTxt = sp.GetString(0x19ab);
            dlg->SetUtilDlgEx(0, 9010000, dlgTxt, false, false);
            dlg->SetUtilDlgEx_TEXT(false, false);
            dlg->CreateUtilDlgEx();
            dlg->DoModal();

        }*/
    }

    if (ctx->IsPremiumUser())
    {
        // TODO check if the global stage has to be used
        if (field->GetFieldID())
        {
            CUINoticePremium noticePremium;
            noticePremium.DoModal();
        }

        ctx->ShowPremiumArgument(ctx->GetPremiumArgument(), 0);
    }

    if (ctx->IsChatBlocked())
    {
        //TODO(game) chatblock msg
        UNIMPLEMENTED;
    }

    if (notifCount)
    {
        ZXString<char> notifMsg;
        for (auto& notif : notifContent)
        {
            notifMsg._Cat("\r\n\r\n");
            notifMsg._Cat(notif.c_str());
        }

        CUIEventAlarm* eventAlarm = new CUIEventAlarm();;
        eventAlarm->SetEventAlarm(notifMsg);
        eventAlarm->Layout_GEN();
        eventAlarm->CreateEventAlarm();
        CWndMan::GetInstance()->SetFocus(eventAlarm);


        //TODO(game) notif concat
        UNIMPLEMENTED;
    }

    if (ctx->IsPremiumUser())
    {
        // TODO check if the global stage has to be used
        if (field->GetFieldID() == 10000)
        {
            CUINoticePremium noticePremium;
            noticePremium.DoModal();
        }

        ctx->ShowPremiumArgument(ctx->GetPremiumArgument(), 0);
    }

    if (hasCharData)
        ctx->CheckNewQuestAvailable(true);

    //TODO(stagegame) verify
    if (field->GetFieldType() == 29)
    {
        COutPacket pkt(Cp::Requestfootholdinfo);
        CClientSocket::GetInstance()->SendPacket(pkt);
    }
}

void CStage::OnSetCashShop(CInPacket& iPacket)
{
    __sub_0031ADF0(this, nullptr, iPacket);
}

void CStage::OnSetITC(CInPacket& iPacket)
{
    __sub_0031AF60(this, nullptr, iPacket);
}

long CStage::FadeIn()
{
    //TODO(optgame) return __sub_00318CD0(this, nullptr);
    return 0;
}

void CStage::FadeOut()
{
    //TODO(optgame) __sub_003192B0(this, nullptr);
}

CStage& CStage::operator=(const CStage& arg0)
{
    return _op_assign_16(this, arg0);
}

CStage& CStage::_op_assign_16(CStage* pThis, const CStage& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl set_stage(CStage* pStage, void* pParam)
{
    auto anim = CAnimationDisplayer::GetInstance();
    auto ctx = CWvsContext::GetInstance();
    auto cfg = CConfig::GetInstance();
    anim->RemoveAll();


    auto oldStage = _D_G_PSTAGE.op_arrow();
    _D_G_PSTAGE = 0;
    if (oldStage && oldStage->ref_count.GetRefCount() != 0)
    {
        oldStage->Close();
    }

    if (!pStage)
    {
        if (auto cd = ctx->GetCharacterData())
        {
            ctx->OnLeaveGame();
        }
        return;
    }


    auto isField = pStage->IsKindOf(&CField::ms_RTTI_CField);
    if (pStage->IsKindOf(&CInterStage::ms_RTTI_CInterStage))
    {
        if (auto cd = ctx->GetCharacterData())
        {
            ctx->OnGameStageChanged();
        }
    }
    else if (isField || pStage->IsKindOf(&CCashShop::ms_RTTI_CCashShop) || pStage->IsKindOf(&CITC::ms_RTTI_CITC))
    {
        if (isField)
        {
            ctx->SetScreenResolution(ctx->IsLargeScreen(), false);
        }

        if (auto cd = ctx->GetCharacterData(); !cd)
        {
            ctx->OnEnterGame();
        }
    }
    else
    {
        if (auto cd = ctx->GetCharacterData())
        {
            ctx->OnLeaveGame();
        }
    }

    if (pStage->IsKindOf(&CLogo::ms_RTTI_CLogo) || pStage->IsKindOf(&CLogin::ms_RTTI_CLogin)
        || pStage->IsKindOf(&CCashShop::ms_RTTI_CCashShop) || pStage->IsKindOf(&CITC::ms_RTTI_CITC))
    {
        ctx->SetScreenResolution(false, false);
    }

    _D_G_PSTAGE = pStage;
    pStage->Init(pParam);


    //label28
    //return __sub_00319C30(pStage, pParam);
}

ZRef<CStage>& __cdecl get_stage()
{
    return _D_G_PSTAGE;
}
