// MobPool.cpp
#include "MobPool.hpp"

#include <Stat/TwoState.hpp>

#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

static ZArray<ZRef<CMob>> FAKE_ZArray_CMob{};
static ZArray<CMob*> FAKE_ZArray_CMobPtr{};

#include "MobPool_regen.ipp"

CMobPool::~CMobPool()
{
    ms_pInstance = nullptr;
}

void CMobPool::_dtor_0()
{
    return __sub_00256C50(this, nullptr);
}

CMobPool::CMobPool(const CMobPool& arg0)
{
    _ctor_1(arg0);
}

void CMobPool::_ctor_1(const CMobPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMobPool::CMobPool()
{
    ms_pInstance = this;
}

void CMobPool::_ctor_0()
{
    //return __sub_00256BD0(this, nullptr);
    new(this) CMobPool();
}

long CMobPool::FindHitMobInRect(const tagRECT& rc, CMob** apMob, long nMaxCount, CMob* pExcept, long nWishMobID,
                                long rPoison, unsigned long dwWishTemplateID, int32_t bIncludeDazzledMob,
                                int32_t bIncludeEscortMob)
{
    //return __sub_00257530(this, nullptr, rc, apMob, nMaxCount, pExcept, nWishMobID, rPoison, dwWishTemplateID,
    //                    bIncludeDazzledMob, bIncludeEscortMob);

    auto userPos = CUserLocal::GetInstance()->GetPos();
    spdlog::info("user pos: {} {}", userPos.x, userPos.y);
    auto vec = CUserLocal::GetInstance()->GetVecCtrlUser();
    auto x = vec->Getx();
    auto y = vec->Gety();
    spdlog::info("vec pos {} {}", x, y);


    auto count = 0;
    auto countPoison = 0;
    for (auto& mob : m_lMob)
    {
        if (count >= nMaxCount)
        {
            break;
        }


        if (!mob->IsInViewSplit() || mob->IsSuspended())
        {
            continue;
        }

        auto mobId = mob->GetMobID();
        if (pExcept && pExcept->GetMobID() == mobId)
        {
            continue;
        }

        if (nWishMobID && nWishMobID != mobId)
        {
            continue;
        }

        if (dwWishTemplateID && dwWishTemplateID != mob->GetTemplate()->_ZtlSecureGet_dwTemplateID())
        {
            continue;
        }

        if (mob->GetTemplate()->bDamagedByMob && !bIncludeEscortMob)
        {
            continue;
        }

        if (mob->IsMobOurTeam())
        {
            continue;
        }

        if (!bIncludeDazzledMob && mob->GetMobStat()->nDazzle_)
            continue;


        auto mobPos = mob->GetPos();
        //spdlog::info("mob pos: {} {}", mobPos.x, mobPos.y);

        ZArray<tagRECT> rcMulti;
        mob->GetMultiBodyRect(rcMulti, true);
        tagRECT rcBody{};
        mob->GetBodyRect(rcBody, true);
        rcMulti.Insert(rcBody);

        for (auto& rcMob : rcMulti)
        {
            tagRECT rcIntersect{};
            if (!IsRectEmpty(&rcMob) & IntersectRect(&rcIntersect, &rcMob, &rc))
            {
                apMob[count++] = mob.op_arrow();
                if (rPoison && mob->GetMobStat()->rPoison_ == rPoison)
                    countPoison++;
            }
        }
    }

    return count | (countPoison << 16);
}

long CMobPool::FindHitMobInManyRects(const ZArray<tagRECT>& arc, CMob** apMob, unsigned long* adwDropFlag,
                                     long nMaxCount, long& nMaxAttackCount)
{
    return __sub_00256230(this, nullptr, arc, apMob, adwDropFlag, nMaxCount, nMaxAttackCount);
}

long CMobPool::FindHitUndeadMobInRect(const tagRECT& rc, CMob** apMob, long nMaxCount)
{
    return __sub_002563B0(this, nullptr, rc, apMob, nMaxCount);
}

long CMobPool::FindHitMobByChainlightning(CMob* nCount, CMob** apMobNear, long nMobCount, int32_t pt, long rc)
{
    return __sub_00257770(this, nullptr, nCount, apMobNear, nMobCount, pt, rc);
}

long CMobPool::FindHitMobInTrapezoid_Plural(long pos1, long pMob, long nInsertIndex, long nSquareDistance, long pos2,
                                            ZArray<ZRef<CMob>>& arg5, long arg6, int32_t arg7)
{
    return __sub_00257AA0(this, nullptr, pos1, pMob, nInsertIndex, nSquareDistance, pos2, arg5, arg6, arg7);
}

long CMobPool::FindHitMobInTriangle(ZRef<Triangle> pTriangle, CMob** apMob, long nMaxCount, int32_t bIncludeDazzledMob,
                                    int32_t bIncludeEscortMob)
{
    return __sub_00257DC0(this, nullptr, CreateNakedParam(pTriangle), apMob, nMaxCount, bIncludeDazzledMob,
                          bIncludeEscortMob);
}

long CMobPool::FindHitDazzledMobInRect(const tagRECT& rc, CMob** apMob, long nMaxCount)
{
    return __sub_002581B0(this, nullptr, rc, apMob, nMaxCount);
}

CMob* CMobPool::FindHitMobInTrapezoid(long x0, long x1, long x2, long y, long r, int32_t bGuidedMob)
{
    //return __sub_00257930(this, nullptr, x0, x1, x2, y, r, bGuidedMob);
    auto dwGuidedMobID = 0;
    auto local = CUserLocal::GetInstance();
    //TODO
    bGuidedMob = false;
    if (bGuidedMob)
    {
        auto bullet = local->GetSecondaryStat()[5];
        if (!bullet->IsActivated())
            return nullptr;

        dwGuidedMobID = bullet->GetValue();
    }
    auto gt = x1 > x2;
    auto dx = x1 - x0;
    auto xd = x0 - x1;
    while (true)
    {
        tagRECT rcAttack{};
        auto v18 = 0;
        if ((gt ? x1 > x2 : x2 > x1)  == false)
            break;
        if (gt)
        {
            rcAttack.right = x1;
            v18 = xd;
            x1 -= 20;
            xd += 20;
            dx -= 20;
            rcAttack.left = std::max(x2, x1);
        }
        else
        {
            rcAttack.left = x1;
            x1 += 20;
            v18 = dx;
            xd -= 20;
            dx += 20;
            rcAttack.right = std::min(x1, x2);
        }
        auto v19 = std::abs(v18 / r);
        rcAttack.top = y - v19;
        rcAttack.bottom = y + v19;

        /*rcAttack.left -= 1000;
        rcAttack.right += 1000;
        rcAttack.bottom += 10000;
        rcAttack.top -= 10000;*/

        CMob* mob{};
        auto n = FindHitMobInRect(rcAttack, &mob, 1, nullptr, dwGuidedMobID, 0, 0, 0, 0);
        if (n)
            return mob;
    }
    return nullptr;
}

CMob* CMobPool::FindBodyAttackMob(const tagRECT& rc, int32_t bUserIsDarkSight)
{
    return __sub_00256DB0(this, nullptr, rc, bUserIsDarkSight);
}

CMob* CMobPool::FindNearestMob(tagPOINT pt, int32_t bDazzled)
{
    return __sub_00258320(this, nullptr, CreateNakedParam(pt), bDazzled);
}

CMob* CMobPool::FindMob(tagPOINT pt)
{
    return __sub_002564D0(this, nullptr, CreateNakedParam(pt));
}

CMob* CMobPool::FindBossMob()
{
    return __sub_00256570(this, nullptr);
}

int32_t CMobPool::CheckMobInTrapezoid(long x0, long x1, long x2, long y, long r, CMob* pMob)
{
    return __sub_00255F80(this, nullptr, x0, x1, x2, y, r, pMob);
}

CMob* CMobPool::GetMob(unsigned long dwMobID)
{
    //return __sub_000413F0(this, nullptr, dwMobID);
    ZRef<CMob>* pMob{};
    if (!m_mMob.GetAt(dwMobID, (__POSITION**)&pMob))
        return nullptr;

    return pMob->op_arrow();
}

CMob* CMobPool::GetMobDamagedByMob()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CMobPool::GetTimeLastHitMobDamagedByMob()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CMobPool::SetTimeLastHitMobDamagedByMob(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CMobPool::ResetGuidedMob(long nSkillID, unsigned long dwGuidedMobID)
{
    __sub_002572E0(this, nullptr, nSkillID, dwGuidedMobID);
}

void CMobPool::Update()
{
    //__sub_00258610(this, nullptr);
    auto field = get_field();
    field->UpdateObstacleInfo();

    for (auto& m : m_lMob)
        m->Update();

    auto head = m_lMobDelayedDead.GetHeadPosition();
    while (head)
    {
        auto cur = m_lMobDelayedDead.GetNext(head);
        auto mob = *cur;
        mob->Update();

        if (mob->GetRemainDamageInfoDelay() > 0)
            continue;

        m_lMobDelayedDead.RemoveAt(cur);
        switch (mob->GetDeadType())
        {
        case 0:
        case 1:
        case 5:
            mob->OnDie();
            break;
        case 2:
            mob->OnBomb();
            break;
        case 3:
            mob->OnDestructByMiss();
            break;
        case 4:
            mob->OnSwallowed();
            break;
        default:
            break;
        }
        m_lMobDeadProcess.AddTail(mob);
    }

    head = m_lMobDeadProcess.GetHeadPosition();
    while (head)
    {
        auto cur = m_lMobDeadProcess.GetNext(head);
        auto& mob = *cur;
        mob->Update();

        if (mob->GetOneTimeAction() <= -1)
        {
            m_lMobDeadProcess.RemoveAt(cur);
            //TODO
            /* auto& revives = mob->GetReviveList();
             for (auto revive: revives)
             {
                 if (auto reviveMob = GetMob(revive))
                 {
                     reviveMob->OnRevive();
                 }

             }*/
        }
    }
}

void CMobPool::OnPacket(long nType, CInPacket& iPacket)
{
    switch (nType)
    {
    case 284:
        OnMobEnterField(iPacket);
        break;
    case 285:
        OnMobLeaveField(iPacket);
        break;
    case 286:
        OnMobChangeController(iPacket);
        break;
    case 297:
        OnMobCrcKeyChanged(iPacket);
        break;
    default:
        if ((nType - 287) <= 0x16)
            OnMobPacket(nType, iPacket);
        break;
    }
}

void CMobPool::LetMobChasePuppet(int32_t bChase, IVecCtrlOwner* pTarget)
{
    __sub_00256670(this, nullptr, bChase, pTarget);
}

void CMobPool::CancelChaseTarget(CMob* pTarget)
{
    __sub_002565E0(this, nullptr, pTarget);
}

unsigned long CMobPool::GetMobCrcKey()
{
    return m_dwMobCrcKey;
}

void CMobPool::OnMobPacket(long nType, CInPacket& iPacket)
{
    __sub_002570B0(this, nullptr, nType, iPacket);
}

void CMobPool::OnMobEnterField(CInPacket& iPacket)
{
    //__sub_002589E0(this, nullptr, iPacket);
    auto mobId = iPacket.Decode4();
    auto dmgIx = iPacket.Decode1();
    auto tmplId = iPacket.Decode4();

    auto mob = GetMob(mobId);
    if (mob)
    {
        mob->SetInViewSplit(1);
        mob->SetTemporaryStat(iPacket, dmgIx);
    }
    else
    {
        auto tmpl = CMobTemplate::GetMobTemplate(tmplId);
        mob = CreateMob(tmpl);
        auto& pos = m_lMob.AddTail();
        pos = mob;
        m_mMob.Insert(mobId, reinterpret_cast<__POSITION*>(&pos));

        mob->SetInViewSplit(true);
        mob->SetTemporaryStat(iPacket, dmgIx);
        mob->Init(mobId, iPacket);
    }

    if (mob->GetTemplate()->bDamagedByMob)
    {
        m_pMobDamagedByMob = mob;
        m_tLastHitMobDamagedByMob = get_update_time();
    }
}

void CMobPool::OnMobLeaveField(CInPacket& pkt)
{
    //__sub_00258B90(this, nullptr, iPacket);
    auto id = pkt.Decode4();
    auto ty = pkt.Decode1();
    auto swallow = 0;
    if (ty == 4)
        swallow = pkt.Decode4();


    //TODO
    ZRef<CMob>* pMob{};
    if (!m_mMob.GetAt(id, (__POSITION**)&pMob))
        return;
    auto& mob = *pMob;


    if (ty)
    {
        if (ty == 4)
            mob->SetSwallowCharacter(swallow);

        mob->SetDeadType(ty);
        m_lMobDelayedDead.AddTail(mob);
    }
    else
    {
        if (mob->IsInViewSplit())
            mob->SetInViewSplit(false);
        if (mob->IsActive())
            return;
    }

    CancelChaseTarget(mob.op_arrow());
    if (mob->GetTemplate()->bDamagedByMob && m_pMobDamagedByMob == mob)
    {
        m_pMobDamagedByMob = 0;
    }

    CWvsContext::GetInstance()->OnMobDead();
    m_lMob.RemoveAt(pMob);
    m_mMob.RemoveKey(id);
}

void CMobPool::OnMobChangeController(CInPacket& iPacket)
{
    //__sub_00258D10(this, nullptr, iPacket);
    auto lvl = iPacket.Decode1();

    long s1 = 0, s2 = 0, s3 = 0;

    auto withSeed = CClientOptMan::GetInstance()->GetOpt(2);
    if (lvl && withSeed)
    {
        s1 = iPacket.Decode4();
        s2 = iPacket.Decode4();
        s3 = iPacket.Decode4();
    }

    auto id = iPacket.Decode4();
    if (lvl)
    {
        auto dmgIx = iPacket.Decode1();
        SetLocalMob(lvl, id, dmgIx, iPacket);
        if (withSeed)
        {
            auto mob = GetMob(id);
            auto vec = mob->GetActiveVecCtrlMob();
            if (vec)
                vec->SetMoveRandManSeed(s1, s2, s3);
        }
    }
    else
    {
        SetRemoteMob(id);
    }
}

void CMobPool::OnMobCrcKeyChanged(CInPacket& iPacket)
{
    __sub_00257230(this, nullptr, iPacket);
}

void CMobPool::SetLocalMob(long nLevel, unsigned long dwMobId, long nCalcDamageIndex, CInPacket& iPacket)
{
    __sub_00258490(this, nullptr, nLevel, dwMobId, nCalcDamageIndex, iPacket);
}

void CMobPool::SetRemoteMob(unsigned long dwMobId)
{
    __sub_00256D20(this, nullptr, dwMobId);
}

void CMobPool::RemoveAllMob()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMobPool& CMobPool::operator=(const CMobPool& arg0)
{
    return _op_assign_34(this, arg0);
}

CMobPool& CMobPool::_op_assign_34(CMobPool* pThis, const CMobPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t __cdecl in_triangle_1(tagPOINT& p, ZRef<Triangle> pTriangle)
{
    //return __sub_00256B80(p, CreateNakedParam(pTriangle));
    auto& pt = pTriangle->p;
    return in_triangle_0(&p, &pt[0], &pt[1], &pt[2]);
}

int32_t __cdecl in_triangle_0(struct tagPOINT* p, struct tagPOINT* a, struct tagPOINT* b, struct tagPOINT* c)
{
    LONG y; // edx
    int v5; // edi
    int v6; // esi
    LONG v7; // ecx
    LONG x; // eax
    int v9; // edx
    LONG v11; // edx
    int v12; // edi
    int v13; // esi
    int v14; // edx
    LONG v15; // edi
    int v16; // edx
    int v17; // eax
    int v18; // [esp+10h] [ebp-10h]
    int v19; // [esp+14h] [ebp-Ch]

    y = a->y;
    v5 = y - b->y;
    v19 = c->x - a->x;
    v18 = a->x - b->x;
    v6 = v5 * v19 - v18 * (c->y - y);
    v7 = p->y;
    x = p->x;
    v9 = v5 * (p->x - a->x) - v18 * (v7 - y);
    if (v6 < 0)
        goto LABEL_4;
    if (v9 <= 0)
        return 0;
    if (v6 <= 0)
    {
    LABEL_4:
        if (v9 >= 0)
            return 0;
    }
    v11 = b->y;
    v12 = v11 - c->y;
    v13 = v18 * v12 - (b->x - c->x) * (a->y - v11);
    v14 = v12 * (x - b->x) - (b->x - c->x) * (v7 - v11);
    if (v13 < 0)
        goto LABEL_9;
    if (v14 <= 0)
        return 0;
    if (v13 <= 0)
    {
    LABEL_9:
        if (v14 >= 0)
            return 0;
    }
    v15 = c->y;
    v16 = (b->x - c->x) * (v15 - a->y) - v19 * (b->y - v15);
    v17 = (v15 - a->y) * (x - c->x) - v19 * (v7 - v15);
    if (v16 < 0)
        goto LABEL_13;
    if (v17 <= 0)
        return 0;
    if (v16 <= 0)
    {
    LABEL_13:
        if (v17 >= 0)
            return 0;
    }
    return 1;
}
