// Npc.cpp
#include "Npc.hpp"

#include <NpcPool/NpcPool.hpp>
#include <VecCtrlNpc/VecCtrlNpc.hpp>

#include "spdlog/spdlog.h"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

HRESULT __fastcall __QueryVecCtrlNpc(_x_com_ptr<IWzVector2D>* self, void* edx, CVecCtrlNpc* p)
{
    //return self->__QueryInterface<IWzVector2D*>((IWzVector2D*)p);
    self->Attach(p, true);
    return 0;
}

#include "Npc_regen.ipp"

CNpc::~CNpc()
{
}

void CNpc::_dtor_0()
{
    return __sub_00270C40(this, nullptr);
}

CNpc::CNpc(const CNpc& arg0)
{
    _ctor_1(arg0);
}

void CNpc::_ctor_1(const CNpc& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpc::CNpc(CNpcTemplate* pNpcTemplate, unsigned long dwID)
{
    m_dwNpcId = dwID;
    m_pTemplate = pNpcTemplate;
    m_nOneTimeAction = -1;

    auto act = m_pTemplate->aAct.GetCount();
    m_aAction.Alloc(act + 2);
    m_aClientAction.Alloc(act + 2);


    //TODO act/speak

    m_nQuestState = 6;
    m_nLastQuestState = -1;
    m_bEnabled = true;

    m_nClientActionIdx = -1;
    m_nClientActionIdx_Old = -1;
    m_bShowEtc = true;
    CQuestMan::GetInstance()->GetQuestByNpc(m_pTemplate->dwTemplateID, m_aQuest);

    auto stage = get_stage();
    auto field = dynamic_cast<CField*>(stage.op_arrow());
    auto time = field->GetCorrectTime();
    m_pTemplate->UpdateScript(time);

    if (m_pTemplate->dwTemplateID == 1300000)
    {
        m_ptBalloonOffset.x = 0;
        m_ptBalloonOffset.y = -20;
    }
}

void CNpc::_ctor_0(CNpcTemplate* pNpcTemplate, unsigned long dwID)
{
    new(this) CNpc(pNpcTemplate, dwID);
    //return __sub_00271320(this, nullptr, pNpcTemplate, dwID);
}

unsigned long CNpc::GetNpcId()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CNpc::Init(unsigned long dwNpcId, CInPacket& pkt)
{
    m_dwNpcId = dwNpcId;
    SetShoeAttr();
    m_ptPosPrev.x = pkt.Decode2();
    m_ptPosPrev.y = pkt.Decode2();
    m_ptPos = m_ptPosPrev;

    spdlog::info("npc x: {}, y: {}", m_ptPos.x, m_ptPos.y);


    m_nMoveAction = pkt.Decode1();
    auto phy2d = CWvsPhysicalSpace2D::GetInstance();
    auto fh = phy2d->GetFoothold(pkt.Decode2());


    auto ctrl = CVecCtrlNpc::CreateInstance();
    ctrl->Init(this, m_pTemplate->bMove, &m_rgHorz);
    ctrl->SetActive(false, m_ptPos.x, m_ptPos.y, 0, 0, m_nMoveAction, fh);

    // ctrl is CVecCtrl*
    auto dynP = dynamic_cast<IWzVector2D*>(ctrl);
    auto staticP = static_cast<IWzVector2D*>(ctrl);
    auto cP = (IWzVector2D*)ctrl;
    spdlog::info("Same: {} {} {} {}", (uint32_t)ctrl, (uint32_t)dynP, (uint32_t)staticP, (uint32_t)cP);
    m_pvc.Attach(dynamic_cast<IWzVector2D*>(ctrl), true);
    spdlog::info("pvc {}", (uint32_t)m_pvc.op_arrow());

    m_bEnabled = pkt.Decode1();

    if (m_pTemplate->bFloat)
    {
        auto org = G_PCOM.CreateVector2D();
        auto vec2 = G_PCOM.CreateVector2D();
        auto vec3 = G_PCOM.CreateVector2D();

        Z_CHECK_HR(org->Rotate(0., Ztl_variant_t(2000, 3)));
        vec2->Putorigin(Ztl_variant_t(org));
        Z_CHECK_HR(vec2->RelMove(
            5, 0, vtMissing, vtMissing));

        Z_CHECK_HR(vec3->Ratio(vec2, 100, 100, 0, 100));
        Z_CHECK_HR(vec3->RelMove(m_ptPos.x, m_ptPos.y, vtMissing, vtMissing));
    }

    ctrl = CVecCtrlNpc::CreateInstance();
    ctrl->Init(this, m_pTemplate->bMove, &m_rgHorz);
    ctrl->SetActive(false, 0, 0, 0, 0, 0, nullptr);
    m_pvcActive.Attach((IWzVector2D*)ctrl, true);


    auto& gr = get_gr();
    m_pLayerAction = gr->CreateLayer(0, 0, 0, 0, 0, Ztl_variant_t(0), vtMissing);
    m_pLayerAction->put_origin(Ztl_variant_t(m_pvc));
    m_pLayerAction->put_color(0xFFFFFFFF);
    SetLayerZ();
    PrepareActionLayer();

    if (m_bEnabled)
    {
        RestoreLayers();
    }

    m_ptBalloonOffset = {0, 0};

    if (m_pTemplate && m_pTemplate->dwTemplateID == 1300000)
    {
        this->m_ptBalloonOffset.x = 0;
        this->m_ptBalloonOffset.y = -20;
    }

    if (m_pTemplate->bHide)
    {
        ViewOrHide(false, false);
    }

    if (m_pTemplate->bMapleTV)
    {
        //TODO(npcgame)
        m_nMapleTVMessageID = 0;
        m_tMapleTVElapsedTime = 0;
        SetMapleTVMessage();
        CMapleTVMan::GetInstance()->LoadMapleTVMedia();
    }


    //__sub_00276770(this, nullptr, dwNpcId, iPacket);
}

void CNpc::SetActive(int32_t bActive)
{
    auto vec = (CVecCtrlNpc*)m_pvc.op_arrow();
    if (!bActive)
    {
        vec->SetActive(false, 0, 0, 0, 0, 0, nullptr);
        return;
    }

    auto fh = CWvsPhysicalSpace2D::GetInstance()->GetFoothold(vec->GetMovePath().GetLastFoothold());
    auto elemLast = vec->GetMovePath().GetElemLast();
    vec->SetActive(true, elemLast.x, elemLast.y, elemLast.vx, elemLast.vy, elemLast.bMoveAction, fh);
    m_bMovePathSent = false;
    m_tWaitTimeForNextActionOrChat = _D_G_RAND.Random() % 6000 + 3000;
    //__sub_002710B0(this, nullptr, bActive);
}

unsigned long CNpc::GetTemplateID()
{
    return m_pTemplate->dwTemplateID;
}

int32_t CNpc::IsQuestNpc()
{
    UNIMPLEMENTED;
}

long CNpc::GetQuestState()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CNpc::GetMoveAction()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CNpc::SetMoveAction(long nMA, int32_t bReload)
{
    return;
    auto& p = this->m_pImitatedLook;
    if (p)
        p->SetMoveAction(nMA, bReload);
    if (bReload || nMA != this->m_nMoveAction)
    {
        auto& imm = this->m_pImitatedLook;
        this->m_nMoveAction = nMA;
        bool v6 = false;
        if (imm)
            v6 = imm->GetOneTimeAction() > -1;
        else
            v6 = this->m_nOneTimeAction > -1;
        if (!v6)
            PrepareActionLayer();
    }
}

int32_t CNpc::IsOnPlayingOneTimeAction()
{
    return __sub_00270210(this, nullptr);
}

long CNpc::GetOneTimeAction()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CNpc::ResetOneTimeAction()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CNpc::GetCurrentAction(long* pnDir)
{
    return __sub_00270240(this, nullptr, pnDir);
}

ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>& CNpc::GetActionFrameList(long nAction)
{
    //return __sub_00270140(this, nullptr, nAction);
    auto& actions = m_nClientActionIdx >= 0 ? m_aClientAction : m_aAction;

    auto check = m_nClientActionIdx != m_nClientActionIdx_Old && m_nClientActionIdx >= 0;
    auto& action = actions[nAction];
    if (!action.GetCount() || check)
    {
        CActionMan::GetInstance()->LoadNpcAction(
            m_pTemplate,
            nAction,
            action,
            m_nClientActionIdx);
    }

    if (!action.GetCount())
    {
        CMSException(0x22000006).Throw();
    }

    return actions[nAction];
}

const tagRECT& CNpc::GetDCRange()
{
    //return __sub_0026FD00(this, nullptr);
    auto x = m_ptPos.x;
    auto y = m_ptPos.y;
    auto& rc = m_pTemplate->dcRange;
    m_rcNPC.left = x + rc.left;
    m_rcNPC.top = y + rc.top;
    m_rcNPC.right = x + rc.right;
    m_rcNPC.bottom = y + rc.bottom;


    return m_rcNPC;
}

const tagRECT& CNpc::GetQuestDCRange()
{
    return __sub_0026FFC0(this, nullptr);
}

void CNpc::SetShoeAttr()
{
    //__sub_00271180(this, nullptr);
    m_pAttrShoe = new CAttrShoe(0);

    auto speed = m_pTemplate->nSpeed;
    speed = speed > 10 ? speed >= 140 ? 140 : speed : 10;
    m_pAttrShoe->walkSpeed = (double)speed / 100.;
}

void CNpc::OnChat(Ztl_bstr_t bsText)
{
    __sub_00275520(this, nullptr, CreateNakedParam(bsText));
}

void CNpc::ShowQuestList()
{
    __sub_00272B50(this, nullptr);
}

void CNpc::Update()
{
    //__sub_00277B50(this, nullptr);


    if (m_pLayerEffect)
    {
        if (const auto animState = m_pLayerEffect->GetanimationState(); !animState)
        {
            m_pLayerEffect = 0;
        }
    }

    if (m_bEnabled)
    {
        if (m_pTemplate->m_dwImitate)
        {
            if (auto imm = m_pImitatedLook)
            {
                imm->Update();
            }
        }
    }


    CVecCtrlNpc* vec = GetVecCtrlNpc();
    auto* vecActive = dynamic_cast<CVecCtrl*>(m_pvcActive.op_arrow());
    auto ma = vec->GetMoveAction();
    auto updated = vec->UpdatePassive(0, 0);
    SetMoveAction(ma, false);
    if (vecActive->IsActive())
    {
        auto wait = m_tWaitTimeForNextActionOrChat;
        if (wait > 0)
        {
            m_tWaitTimeForNextActionOrChat = wait - 30;
        }

        if (!this->m_bMovePathSent)
        {
            long nAction{}, nChatIdx{};
            if (!this->m_pTemplate->bMove)
            {
                if (!DoActionOrChat(nAction, nChatIdx))
                    goto LABEL_29;
                goto LABEL_28;
            }
            if (updated == -1)
            {
                DoActionOrChat(nAction, nChatIdx);
            LABEL_28:
                GenerateMovePath(nAction, nChatIdx);
            }
        }
    }

LABEL_29:
    SetQuestList(false);
    SetClientActionByQuest();
    m_chatBalloon.CheckTimeOut(false);


    if (m_pLayerDcMark)
    {
        auto color = m_pLayerQuestInfo ? -1 : 0xFFFFFF;
        m_pLayerDcMark->Putcolor(color);
    }

    if (m_pTemplate->bMapleTV)
    {
        SetMapleTVMessage();
    }


    auto v17 = this->m_nMoveAction >> 1 == 2;
    auto v18 = this->m_pImitatedLook;
    auto v19 = v18 ? v18->GetOneTimeAction() > -1 : this->m_nOneTimeAction > -1;
    auto v20 = v19 ? this->m_nOneTimeAction : v17;

    if (m_pTemplate && m_pTemplate->m_dwImitate)
        goto LABEL_60;

    this->m_tFrameDelay -= 30;

    if (this->m_tFrameDelay > 0)
        goto LABEL_60;


    if (IsOnPlayingOneTimeAction())
    {
        if (!m_posFrame)
        {
            m_nOneTimeAction = -1;
            m_bSpecialAction = false;
        LABEL_60:
            PrepareActionLayer();


            m_ptPosPrev = m_ptPos;
            vec->_GetSnapshot((int*)&m_ptPos.x, (int*)&m_ptPos.y, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
                              vtMissing);
        }
        return;
    }

    auto actionList = GetActionFrameList(v20);
    if (!m_posFrame)
    {
        m_posFrame = (__POSITION*)actionList.GetHeadPosition();
    }

    auto cur = (ZRef<CActionMan::NPCACTIONFRAMEENTRY>*)m_posFrame;
    m_pLayerAction->ShiftCanvas(Ztl_variant_t(1));
    m_tFrameDelay = 16 + (*cur)->nDelay;
}

void CNpc::UpdateScript(_SYSTEMTIME st) const
{
    //__sub_0026FD50(this, nullptr, CreateNakedParam(st));
    m_pTemplate->UpdateScript(st);
}

void CNpc::SetMapleTVMessage()
{
    __sub_002757F0(this, nullptr);
}

void CNpc::DrawMapleTVMessage()
{
    __sub_00273C80(this, nullptr);
}

void CNpc::SetImitatedLook(AvatarLook& al)
{
    //__sub_002729D0(this, nullptr, al);
    m_pImitatedLook = new CAvatar();
    m_pImitatedLook->Init(al, 5, m_pvc, {}, 0, 0, 0, 100, 0);
    PrepareActionLayer();

    MakeNameTag(m_pTemplate->sName.c_str(), m_pLayerAction, m_pvc, 1001, 0, 0, 0, 0, 0);
    if (!m_pTemplate->sFuncName.IsEmpty())
    {
        MakeNameTag(m_pTemplate->sFuncName.c_str(), m_pLayerAction, m_pvc, 1002, 0, 0, 0, 0, 0);
    }

    SetLayerZ();
    SetQuestList(true);
}

int32_t CNpc::IsImitated() const
{
    //return __sub_00270210(this, nullptr);
    return static_cast<bool>(m_pImitatedLook);
}

int32_t CNpc::IsEnabled() const
{
    //return __sub_00270210(this, nullptr);
    return m_bEnabled;
}

int32_t CNpc::IsHideToLocalUser() const
{
    //return __sub_00270210(this, nullptr);
    return m_bHideToLocalUser;
}

void CNpc::RequestSpecialAction(ZXString<char> sAction)
{
    __sub_00273BC0(this, nullptr, CreateNakedParam(sAction));
}

void CNpc::SetQuestList(int32_t bReload)
{
    //__sub_00271980(this, nullptr, bReload);
}

void CNpc::SetAcceptQuestOnlyOne(uint16_t usQuestID)
{
    __sub_00272010(this, nullptr, usQuestID);
}

void CNpc::SetCompletedQuestOnlyOne(uint16_t usQuestID)
{
    __sub_002724F0(this, nullptr, usQuestID);
}

long CNpc::GetType()
{
    //return __sub_00270F60(this, nullptr);
    return 2;
}

long CNpc::OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl* pvc)
{
    //return __sub_0026FCB0(this, nullptr, nInputX, nInputY, nCurMoveAction, pvc);
    if (m_pTemplate->bMove)
    {
        if (nInputX)
            return (int)(nInputX < 0) | 2;
    }
    else if (nInputX)
    {
        return (int)(nInputX < 0) | 4;
    }
    return (int)nCurMoveAction & 1 | 4;
}

void CNpc::OnLayerZChanged(const CVecCtrl* pvc)
{
    //__sub_0026FF90(this, nullptr, pvc);
    if (m_pvc.op_arrow() == pvc)
        SetLayerZ();
}

const ZRef<CAttrShoe> CNpc::GetShoeAttr()
{
    //return __sub_002712F0(this, nullptr);
    return m_pAttrShoe;
}

const tagPOINT CNpc::GetPos()
{
    //return __sub_00270F70(this, nullptr);
    return m_ptPos;
}

const tagPOINT CNpc::GetPosPrev()
{
    //return __sub_00270F90(this, nullptr);
    return m_ptPosPrev;
}

long CNpc::GetZMass()
{
    //return __sub_00271000(this, nullptr);
    return GetVecCtrlNpc()->GetZMass();
}

void CNpc::OnMove(CInPacket& iPacket)
{
    __sub_00278060(this, nullptr, iPacket);
}

void CNpc::OnSetSpecialAction(CInPacket& iPacket)
{
    __sub_002750F0(this, nullptr, iPacket);
}

void CNpc::OnUpdateLimitedInfo(CInPacket& iPacket)
{
    __sub_00276340(this, nullptr, iPacket);
}

void CNpc::SetWaitTimeForNextActionOrChat()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CNpc::DoActionOrChat(long& nAction, long& nChatIdx)
{
    return __sub_002702B0(this, nullptr, nAction, nChatIdx);
}

void CNpc::PrepareActionLayer()
{
    //__sub_00270580(this, nullptr);
    if (m_pTemplate && m_pTemplate->m_dwImitate)
    {
        if (auto look = this->m_pImitatedLook)
        {
            //look->PrepareActionLayer(6, 100, false);
            UNIMPLEMENTED;
            return;
        }


        m_pLayerAction->RemoveCanvas(Ztl_variant_t(-2));
        return;
    }

    if (!m_bEnabled)
    {
        m_pLayerAction->RemoveCanvas(Ztl_variant_t(-2));
    }

    long dir{};
    auto curAction = GetCurrentAction(&dir);
    auto actions = GetActionFrameList(curAction);
    m_pLayerAction->RemoveCanvas(Ztl_variant_t(-2));


    for (auto& action : actions)
    {
        m_pLayerAction->InsertCanvas(
            action->pCanvas,
            Ztl_variant_t(action->nDelay),
            vtMissing,
            vtMissing,
            vtMissing,
            vtMissing);
    }


    m_posFrame = (__POSITION*)actions.GetHeadPosition();
    m_tFrameDelay = (*actions.GetHeadPosition())->nDelay;
}

void CNpc::SetLayerZ()
{
    //__sub_0026FED0(this, nullptr);
    auto vec = GetVecCtrlNpc();
    auto zmass = vec->GetZMass();
    auto page = vec->GetPage();
    m_pLayerAction->Putz(10 * (3000 * page - zmass) - 0x3FFF8AD5);
    if (m_pImitatedLook)
    {
        m_pImitatedLook->SetLayerZ(m_pLayerAction->Getz());
    }
}

long CNpc::MoveAction2RawAction(long arg0, long* arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CNpc::GenerateMovePath(long nAction, long nChatIdx)
{
    __sub_00271590(this, nullptr, nAction, nChatIdx);
}

void CNpc::RestoreLayers()
{
    __sub_002751D0(this, nullptr);
}

void CNpc::ViewOrHide(int32_t bView, int32_t bViewNameTag)
{
    //__sub_0026FE00(this, nullptr, bView, bViewNameTag);
    m_bHideToLocalUser = !bView;
    m_pLayerAction->Putvisible(bView);
    if (m_pLayerDcMark)
    {
        m_pLayerDcMark->Putvisible(bView);
    }
    if (m_pLayerQuestInfo)
    {
        m_pLayerQuestInfo->Putvisible(bView);
    }

    ShowNameTag(bViewNameTag);
}

void CNpc::SetClientActionByQuest()
{
    //__sub_00271020(this, nullptr);
    auto clientActIx = this->m_nClientActionIdx;
    this->m_nClientActionIdx_Old = clientActIx;
    auto actId = m_pTemplate->CalcClientActionSetIdx(true);
    this->m_nClientActionIdx = actId;
    if (actId != this->m_nClientActionIdx_Old)
    {
        PrepareActionLayer();
        if (this->m_nClientActionIdx < 0)
        {
            if (!this->m_pTemplate->bHide)
            {
                ViewOrHide(true, !m_pTemplate->bHideName);
                return;
            }
        }
        else if (!m_pTemplate->m_lClientActionSet.FindIndex(
            m_nClientActionIdx)->bHide)
        {
            ViewOrHide(true, !m_pTemplate->bHideName);
            return;
        }
        ViewOrHide(false, false);
    }
}

CVecCtrlNpc* CNpc::GetVecCtrlNpc()
{
    return dynamic_cast<CVecCtrlNpc*>(m_pvc.op_arrow());
}

CNpc& CNpc::operator=(const CNpc& arg0)
{
    return _op_assign_55(this, arg0);
}

CNpc& CNpc::_op_assign_55(CNpc* pThis, const CNpc& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpc* __cdecl CreateNpc(CNpcTemplate* pNpcTemplate, unsigned long dwID)
{
    //return __sub_002717B0(pNpcTemplate, dwID);
    return new CNpc(pNpcTemplate, dwID);
}
