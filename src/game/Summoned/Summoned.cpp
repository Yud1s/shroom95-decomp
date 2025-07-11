// Summoned.cpp
#include "Summoned.hpp"

#include <skills_ids.h>

static ZMap<unsigned long, ZRef<SummonedAttackInfo>, unsigned long>
FAKE_ZMap_unsigned_long_ZRef_SummonedAttackInfo_unsigned_long{};
static ZArray<ATTACKINFO> FAKE_ZArray_ATTACKINFO{};
static ZRef<SummonedAttackInfo> FAKE_ZRef_SummonedAttackInfo{};


HRESULT __fastcall __QueryVecCtrlSummoned(_x_com_ptr<IWzVector2D>* self, void* edx, CVecCtrlSummoned* p)
{
    //return self->__QueryInterface<IWzVector2D*>((IWzVector2D*)p);
    self->Attach(p, true);
    return 0;
}

#include "Summoned_regen.ipp"

ZMap<unsigned long, ZRef<SummonedAttackInfo>, unsigned long> CSummonedBase::ms_mSummonedAttackInfo{};

CSummonedBase::~CSummonedBase()
{
}

void CSummonedBase::_dtor_0()
{
    this->~CSummonedBase();
}

CSummonedBase::CSummonedBase(const CSummonedBase& arg0)
{
    _ctor_1(arg0);
}

void CSummonedBase::_ctor_1(const CSummonedBase& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSummonedBase::CSummonedBase()
{
}

void CSummonedBase::_ctor_0()
{
    new(this) CSummonedBase();
}

ZRef<SummonedAttackInfo> CSummonedBase::LoadAttackInfo(long nSkillID, long nIdx, long nSLV, long nAIType)
{
    ZRef<SummonedAttackInfo> ret;
    return *__sub_00358B20(this, nullptr, &ret, nSkillID, nIdx, nSLV, nAIType);
}

long CSummonedBase::AIType2Action(long nAIType)
{
    int result; // eax

    switch (nAIType)
    {
    case 0:
        result = 4;
        break;
    case 1:
        result = 16;
        break;
    case 2:
        result = 13;
        break;
    case 3:
        result = 6;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}

long CSummonedBase::Action2AIType(long nAction)
{
    int result; // eax

    switch (nAction)
    {
    case 6:
        result = 3;
        break;
    case 13:
        result = 2;
        break;
    case 16:
        result = 1;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}

CSummonedBase& CSummonedBase::operator=(const CSummonedBase& arg0)
{
    return _op_assign_6(this, arg0);
}

CSummonedBase& CSummonedBase::_op_assign_6(CSummonedBase* pThis, const CSummonedBase& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSummoned::~CSummoned()
{
}

void CSummoned::_dtor_0()
{
    this->~CSummoned();
}

CSummoned::CSummoned(const CSummoned& arg0) : m_dwSummonedID(arg0.m_dwSummonedID)
{
    _ctor_1(arg0);
}

void CSummoned::_ctor_1(const CSummoned& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSummoned::CSummoned(unsigned long dwCharacterID, unsigned long dwSummonedID, long nSkillID, unsigned char nCharLevel,
                     long nSLV) : m_dwSummonedID(dwSummonedID)
{
    m_dwCharacterID = dwCharacterID;
    m_nSkillID = nSkillID;
    m_nSLV = nSLV;
    m_nCharLevel = nCharLevel;

    m_aAction.Alloc(0x13);

    _ZtlSecurePut_m_nMoveAction(0);
    _ZtlSecurePut_m_nOneTimeAction(-1);
    _ZtlSecurePut_m_tHitPeriodRemain(0);
}

void CSummoned::_ctor_0(unsigned long dwCharacterID, unsigned long dwSummonedID, long nSkillID,
                        unsigned char nCharLevel, long nSLV)
{
    new(this) CSummoned(dwCharacterID, dwSummonedID, nSkillID, nCharLevel, nSLV);
}

int32_t CSummoned::Init(CInPacket& pkt)
{
    //return __sub_00355740(this, nullptr, iPacket);
    auto skillInfo = CSkillInfo::GetInstance();
    if (!skillInfo->GetSkill(m_nSkillID))
        return 0;

    auto pt = pkt.DecodePoint16();
    auto ma = pkt.Decode1();
    auto fh = pkt.Decode2();
    auto pFh = CWvsPhysicalSpace2D::GetInstance()->GetFoothold(fh);
    auto moveAbility = pkt.Decode1();
    auto assistType = pkt.Decode1();
    auto enterType = pkt.Decode1();

    AvatarLook al{};
    auto hasAvatar = pkt.Decode1();
    if (hasAvatar)
        al.Decode(pkt);

    if (m_nSkillID == MECH3_ROCK_N_SHOCK)
    {
        m_nTeslaCoilState = pkt.Decode1();
        if (m_nTeslaCoilState == 1)
        {
            m_pTriangle = new Triangle();
            for (auto& tpt : m_pTriangle->p)
                tpt = pkt.DecodePoint16();
        }
    }

    return Init(pt.x, pt.y, ma, fh, moveAbility, assistType, enterType, hasAvatar ? &al : nullptr);
}

int32_t CSummoned::Init(long x, long y, long nMoveAction, short nCurFoothold, long nMoveAbility, long nAssistType,
                        long nEnterType, AvatarLook* pAvatarLook)
{
    return __sub_00354E60(this, nullptr, x, y, nMoveAction, nCurFoothold, nMoveAbility, nAssistType, nEnterType,
                          pAvatarLook);
}

void CSummoned::SetActive(int32_t bLeader)
{
    //TODO(game)
}

int32_t CSummoned::IsLeft()
{
    return _ZtlSecureGet_m_nMoveAction() & 1;
}

int32_t CSummoned::IsPosFixed()
{
    UNIMPLEMENTED; //TODO(game)
}

unsigned long CSummoned::GetID()
{
    //return __sub_00348E70(this, nullptr);
    return m_dwSummonedID;
}

long CSummoned::GetMoveAction()
{
    return _ZtlSecureGet_m_nMoveAction();
}

void CSummoned::SetMoveAction(long nMA, int32_t bReload)
{
    //__sub_0034A630(this, nullptr, nMA, bReload);
    auto ma = GetMoveAction();
    if (bReload || ma == nMA)
    {
        _ZtlSecurePut_m_nMoveAction(nMA);
        if (GetOneTimeAction() <= -1)
            PrepareActionLayer();
    }
}

void CSummoned::SetAttackAction(long nAttackAction)
{
    //__sub_0034A0F0(this, nullptr, nAttackAction);
    _ZtlSecurePut_m_nOneTimeAction(nAttackAction);
    PrepareActionLayer();
}

long CSummoned::GetOneTimeAction()
{
    return _ZtlSecureGet_m_nOneTimeAction();
}

long CSummoned::GetOneTimeActionRemain()
{
    //TODO(game)
    return _ZtlSecureGet_m_tHitPeriodRemain();
}

int32_t CSummoned::IsOnPlayingOneTimeAction()
{
    return _ZtlSecureGet_m_nOneTimeAction() > -1;
}

void CSummoned::ResetOneTimeAction()
{
    _ZtlSecurePut_m_nOneTimeAction(-1);
}

long CSummoned::GetCurrentAction(long* pnDir)
{
    //return __sub_003494C0(this, nullptr, pnDir);
    auto ma = _ZtlSecureGet_m_nMoveAction();
    auto raw = MoveAction2RawAction(ma, nullptr);
    auto ota = _ZtlSecureGet_m_nOneTimeAction();
    if (ota <= -1)
        return raw;

    return ota;
}

int32_t CSummoned::GetBodyRect(tagRECT& rc, int32_t bContinuous)
{
    //return __sub_0034AAD0(this, nullptr, rc, bContinuous);
    if (m_pAvatar)
    {
        m_pAvatar->GetBodyRect(rc, bContinuous);
        return 1;
    }
    if (IsRectEmpty(&this->m_rcBody))
    {
        SetRectEmpty(&rc);
        return 0;
    }

    const auto isLeft = GetMoveAction() & 1;
    auto bodyRc = !isLeft ? m_rcBodyFlip : m_rcBody;
    rc = bodyRc;
    auto pos = GetPos();
    OffsetRect(&rc, pos.x, pos.y);
    if (bContinuous)
    {
        auto posPRev = GetPosPrev();
        OffsetRect(&bodyRc, posPRev.x, posPRev.y);
        UnionRect(&rc, &rc, &bodyRc);
    }
    return 1;
}

tagPOINT CSummoned::GetHitPoint(tagRECT arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CSummoned::GetHeight() const
{
    //return __sub_00349530(this, nullptr);
    if (auto avatar = m_pAvatar)
        return avatar->GetHeight();

    auto canvas = m_pLayerAction->Getcanvas(Ztl_variant_t(0));

    auto cy = canvas->Getcy();
    return cy <= 0 ? 0 : cy;
}

_x_com_ptr<IWzVector2D> CSummoned::GetVecCtrl()
{
    return m_pvc;
}

long CSummoned::GetSkillID()
{
    return m_nSkillID;
}

long CSummoned::GetSkillLevel()
{
    return m_nSLV;
}

CUser* CSummoned::GetOwnerUser()
{
    return CUserPool::GetInstance()->GetUser(m_dwCharacterID);
}

void CSummoned::SetShoeAttr()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CSummoned::AttackToTargetMob(CMob* pMob, long tCur)
{
    return __sub_003501D0(this, nullptr, pMob, tCur);
}

void CSummoned::TryDoingAttack(long tCur, long nAIType)
{
    __sub_00356860(this, nullptr, tCur, nAIType);
}

void CSummoned::TryDoingAttackTarget(long tCur)
{
    __sub_00352710(this, nullptr, tCur);
}

void CSummoned::TryDoingAttackManual(long tCur)
{
    __sub_00351240(this, nullptr, tCur);
}

int32_t CSummoned::TryDoingHeal(long tCur)
{
    return __sub_0034AD90(this, nullptr, tCur);
}

void CSummoned::TryDoingGiveBuff(long tCur)
{
    __sub_0034AF50(this, nullptr, tCur);
}

int32_t CSummoned::TryDoingHealingRobot(unsigned long dwLocalUserID, tagRECT& rectLocalUser)
{
    return __sub_0034B3E0(this, nullptr, dwLocalUserID, rectLocalUser);
}

void CSummoned::TryDoingSummon(long tCur)
{
    __sub_0034B640(this, nullptr, tCur);
}

void CSummoned::TryDoingTaslaCoilAttack(long tCur)
{
    __sub_00352780(this, nullptr, tCur);
}

void CSummoned::SetDamaged(long nDamage, long vx, long vy, CMob* pMob, long nAttackIdx, long nDir)
{
    __sub_0034B730(this, nullptr, nDamage, vx, vy, pMob, nAttackIdx, nDir);
}

void CSummoned::Update()
{
    __sub_00357F70(this, nullptr);
}

void CSummoned::ProcessAction(long tCur)
{
    __sub_0034A6A0(this, nullptr, tCur);
}

void CSummoned::ProcessAttack(long tCur)
{
    __sub_0034ABF0(this, nullptr, tCur);
}

void CSummoned::ChaseTarget(int32_t bChase, IVecCtrlOwner* pTarget)
{
    __sub_00349290(this, nullptr, bChase, pTarget);
}

int32_t CSummoned::IsActive()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CSummoned::IsInvulnerable()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CSummoned::SetSuspended(long nSuspend)
{
    m_nSuspend = nSuspend;
}

int32_t CSummoned::IsSuspended()
{
    return m_nSuspend;
}

void CSummoned::ShowEffect(long nType)
{
    __sub_0034C290(this, nullptr, nType);
}

void CSummoned::PreserveAction()
{
    __sub_0034BEF0(this, nullptr);
}

unsigned long CSummoned::GetTargetID()
{
    //return __sub_00348E70(this, nullptr);
    return m_nTargetID;
}

void CSummoned::SetTargetID(unsigned long nTargetID)
{
    m_nTargetID = nTargetID;
}

const long CSummoned::GetAssistType()
{
    return m_nAssistType;
}

void CSummoned::SetAssistAttackManual(int32_t bLeader)
{
    m_bAssistAttackManual = bLeader;
}

const int32_t CSummoned::IsAssistAttackManual()
{
    return m_bAssistAttackManual;
}

void CSummoned::SendRemove()
{
    __sub_0034C170(this, nullptr);
}

void CSummoned::ChangeEndTime(long arg0)
{
    m_tEndTime = arg0;
}

void CSummoned::SetTeslaCoilLeader(int32_t bLeader)
{
    //__sub_0034A120(this, nullptr, bLeader);
    m_nTeslaCoilState = 2 - (bLeader != 0);
    auto ma = GetMoveAction();
    _ZtlSecurePut_m_nMoveAction(ma & 1 | 0x2A);
    SetAttackAction(18);
    m_nSuspend = -1;
}

void CSummoned::SetTeslaCoilTriangle(ZRef<Triangle> pTriangle, ZRef<ZArray<unsigned long>> padwID)
{
    __sub_00354D30(this, nullptr, CreateNakedParam(pTriangle), CreateNakedParam(padwID));
}

void CSummoned::ShowTeslaCoilTriangle(ZRef<Triangle> pTriangle, long tStart, long tEnd, Ztl_bstr_t sEffectUOL)
{
    __sub_0034C6C0(this, nullptr, CreateNakedParam(pTriangle), tStart, tEnd, CreateNakedParam(sEffectUOL));
}

long CSummoned::GetType()
{
    return 4;
}

long CSummoned::OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl* pvc)
{
    //return __sub_00348F10(this, nullptr, nInputX, nInputY, nCurMoveAction, pvc);
    unsigned int m_uAutoGrowLimit; // ecx
    int result; // eax

    switch (this->m_nMoveAbility)
    {
    case 0:
        if (this->m_nSkillID == 35111002
            && (m_nTeslaCoilState == 1
                || m_nTeslaCoilState == 2))
        {
            result = static_cast<int>(nInputX < 0) | 0x2A;
        }
        else
        {
            if (!nInputX)
                result = nCurMoveAction & 1 | 4;
            else
                result = static_cast<int>(nInputX < 0) | 4;
        }
        break;
    case 1:
    case 2:
        if (!nInputX)
            result = nCurMoveAction & 1 | 4;
        else
            result = static_cast<int>(nInputX < 0) | 2;
        break;
    case 4:
    case 5:
        if (nInputX)
            result = static_cast<int>(nInputX < 0) | 0xC;
        else
            result = nCurMoveAction & 1 | 4;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}

void CSummoned::OnLayerZChanged(const CVecCtrl* pvc)
{
    //__sub_00349810(this, nullptr, pvc);
    auto vec = GetVecCtrlSummoned();
    if (vec == pvc)
        SetLayerZ();
}

const ZRef<CAttrShoe> CSummoned::GetShoeAttr()
{
    //return __sub_0034FF60(this, nullptr);
    return m_pAttrShoe;
}

const tagPOINT CSummoned::GetPos()
{
    return m_ptPos.op_tagpoint();
}

const tagPOINT CSummoned::GetPosPrev()
{
    return m_ptPosPrev.op_tagpoint();
}

long CSummoned::GetZMass()
{
    return GetVecCtrlSummoned()->GetZMass();
}

void CSummoned::OnRemoved(CInPacket& iPacket)
{
    __sub_0034C450(this, nullptr, iPacket);
}

void CSummoned::OnMove(CInPacket& iPacket)
{
    __sub_00349250(this, nullptr, iPacket);
}

void CSummoned::OnAttack(CInPacket& iPacket)
{
    __sub_00353340(this, nullptr, iPacket);
}

void CSummoned::OnSkill(CInPacket& iPacket)
{
    __sub_0034A940(this, nullptr, iPacket);
}

void CSummoned::OnHit(CInPacket& iPacket)
{
    __sub_0034BC80(this, nullptr, iPacket);
}

void CSummoned::PrepareActionLayer()
{
    //__sub_00349CD0(this, nullptr);
    auto actionMan = CActionMan::GetInstance();
    if (!m_pAvatar)
    {
        long dir{};
        auto actIx = GetCurrentAction(&dir);
        auto& act = m_aAction[actIx];
        if (act.IsEmpty())
        {
            actionMan->LoadSummonedAction(m_nSkillID, m_nSLV, actIx, act);
            if (act.IsEmpty())
            {
                auto ma = m_nMoveAbility == 4 || m_nMoveAbility == 5 ? 2 : 0;
                actionMan->LoadSummonedAction(m_nSkillID, m_nSLV, ma, act);
                if (act.IsEmpty())
                {
                    UNIMPLEMENTED;
                }
            }
        }

        m_pLayerAction->RemoveCanvas(Ztl_variant_t(-2));
        m_tActionDelay = 0;
        for (auto& frame : act)
        {
            m_tActionDelay += frame->tDelay;
            m_pLayerAction->InsertCanvas(frame->pCanvas, Ztl_variant_t(frame->tDelay), Ztl_variant_t(frame->a0),
                                         Ztl_variant_t(frame->a1), vtMissing, vtMissing);
        }

        m_posFrame = (__POSITION*)act.GetHeadPosition();
        m_pLayerAction->Putflip(dir == 0);
        SetFrameInfo(act, m_posFrame);
    }
}

long CSummoned::MoveAction2RawAction(long nMA, long* pnDir)
{
    int result; // eax

    if (pnDir)
        *pnDir = nMA & 1;
    switch (nMA >> 1)
    {
    case 1:
        result = 1;
        break;
    case 6:
        result = 2;
        break;
    case 21:
        result = 6;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}

void CSummoned::SetLayerZ()
{
    __sub_00349650(this, nullptr);
}

void CSummoned::SetFrameInfo(ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>& l, __POSITION* pos)
{
    __sub_003491A0(this, nullptr, l, pos);
}

void CSummoned::MakeIncDecHPEffect(long nDelta)
{
    //__sub_00349840(this, nullptr, nDelta);
    auto v2 = TSingleton<CAnimationDisplayer>::ms_pInstance;
    auto pos = GetPos();
    auto h = GetHeight();
    if (nDelta <= 0)
    {
        v2->Effect_Miss(pos.x, pos.y - h, 2);
    }
    else
    {
        v2->Effect_HP(pos.x, pos.y - h, nDelta, 2, 0);
    }
}

_ZTL_SEC_GETSETI(long, CSummoned, m_nMoveAction)
_ZTL_SEC_GETSETI(long, CSummoned, m_nOneTimeAction)
_ZTL_SEC_GETSETI(long, CSummoned, m_tHitPeriodRemain)

void CSummoned::_LoadEffect()
{
    __sub_00354050(this, nullptr);
}

void CSummoned::_UpdateEffect()
{
    __sub_00354970(this, nullptr);
}

CSummoned::ATTACKEFFECT::~ATTACKEFFECT()
{
}

void CSummoned::ATTACKEFFECT::_dtor_0()
{
    this->~ATTACKEFFECT();
}

CSummoned::ATTACKEFFECT::ATTACKEFFECT(const CSummoned::ATTACKEFFECT& arg0)
{
    _ctor_1(arg0);
}

void CSummoned::ATTACKEFFECT::_ctor_1(const CSummoned::ATTACKEFFECT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSummoned::ATTACKEFFECT::ATTACKEFFECT()
{
}

void CSummoned::ATTACKEFFECT::_ctor_0()
{
    new(this) CSummoned::ATTACKEFFECT();
}

void CSummoned::ATTACKEFFECT::SetAttackEffect(Ztl_bstr_t sEffect_, long tCur, long tEffectAfter, int32_t bLeft_,
                                              int32_t bSelfDestruct_)
{
    sEffect = sEffect_;
    bSelfDestruct = bSelfDestruct_;
    bLeft = bLeft_;
    tStart = tEffectAfter + tCur;
    if (!tStart)
        tStart = 1;
}

CSummoned::ATTACKEFFECT& CSummoned::ATTACKEFFECT::operator=(const CSummoned::ATTACKEFFECT& arg0)
{
    return _op_assign_4(this, arg0);
}

CSummoned::ATTACKEFFECT& CSummoned::ATTACKEFFECT::_op_assign_4(CSummoned::ATTACKEFFECT* pThis,
                                                               const CSummoned::ATTACKEFFECT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSummoned::SummonedBullet::~SummonedBullet()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CSummoned::SummonedBullet::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSummoned::SummonedBullet::SummonedBullet(const CSummoned::SummonedBullet& arg0)
{
    _ctor_1(arg0);
}

void CSummoned::SummonedBullet::_ctor_1(const CSummoned::SummonedBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSummoned::SummonedBullet::SummonedBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd,
                                          _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBallUOL,
                                          long nAttackIdx)
{
    _ctor_0(tStart, tEnd, ptStart, ptEnd, pVecTarget, z, sBallUOL, nAttackIdx);
}

void CSummoned::SummonedBullet::_ctor_0(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd,
                                        _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBallUOL,
                                        long nAttackIdx)
{
    return __sub_0034F3D0(this, nullptr, tStart, tEnd, CreateNakedParam(ptStart), CreateNakedParam(ptEnd),
                          CreateNakedParam(pVecTarget), z, CreateNakedParam(sBallUOL), nAttackIdx);
}

_x_com_ptr<IWzGr2DLayer> CSummoned::SummonedBullet::PrepareBulletLayer(_x_com_ptr<IWzVector2D> pOrigin,
                                                                       int32_t bClockwise)
{
    return __sub_0034F4F0(this, nullptr, CreateNakedParam(pOrigin), bClockwise);
}

CSummoned::SummonedBullet& CSummoned::SummonedBullet::operator=(const CSummoned::SummonedBullet& arg0)
{
    return _op_assign_4(this, arg0);
}

CSummoned::SummonedBullet& CSummoned::SummonedBullet::_op_assign_4(CSummoned::SummonedBullet* pThis,
                                                                   const CSummoned::SummonedBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CVecCtrlSummoned* CSummoned::GetVecCtrlSummoned()
{
    return dynamic_cast<CVecCtrlSummoned*>(m_pvc.op_arrow());
}

CSummoned::SummonedBullet::Container::~Container()
{
}

void CSummoned::SummonedBullet::Container::_dtor_0()
{
    return __sub_0034AA80(this, nullptr);
}

CSummoned::SummonedBullet::Container::Container(const CSummoned::SummonedBullet::Container& arg0)
{
    _ctor_1(arg0);
}

void CSummoned::SummonedBullet::Container::_ctor_1(const CSummoned::SummonedBullet::Container& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSummoned::SummonedBullet::Container::Container()
{
}

void CSummoned::SummonedBullet::Container::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CSummoned::SummonedBullet::Container::OnRemoved()
{
    CallUpdate<OnRemovedFunc>({});
}

CSummoned::SummonedBullet::Container& CSummoned::SummonedBullet::Container::operator=(
    const CSummoned::SummonedBullet::Container& arg0)
{
    return _op_assign_4(this, arg0);
}

CSummoned::SummonedBullet::Container& CSummoned::SummonedBullet::Container::_op_assign_4(
    CSummoned::SummonedBullet::Container* pThis, const CSummoned::SummonedBullet::Container& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CSummoned::SummonedBullet::OnRemovedFunc::operator()(CSummoned::SummonedBullet& arg0)
{
    arg0.OnRemoved();
    return 0;
}

int32_t CSummoned::SummonedBullet::OnRemovedFunc::_op_call_0(CSummoned::SummonedBullet::OnRemovedFunc* pThis,
                                                             CSummoned::SummonedBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTutor::~CTutor()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTutor::_dtor_0()
{
    return __sub_00356710(this, nullptr);
}

CTutor::CTutor(const CTutor& arg0)
{
    _ctor_1(arg0);
}

void CTutor::_ctor_1(const CTutor& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTutor::CTutor(unsigned long dwCharacterID, long nSkillID)
{
    _ctor_0(dwCharacterID, nSkillID);
}

void CTutor::_ctor_0(unsigned long dwCharacterID, long nSkillID)
{
    return __sub_00355980(this, nullptr, dwCharacterID, nSkillID);
}

void CTutor::Update()
{
    __sub_00358460(this, nullptr);
}

void CTutor::OnMessage(long nIdx, long nDuration)
{
    __sub_0034EEE0(this, nullptr, nIdx, nDuration);
}

void CTutor::OnMessage(ZXString<char>& sMsg, long nWidth, long nDuration)
{
    __sub_0034C880(this, nullptr, sMsg, nWidth, nDuration);
}
