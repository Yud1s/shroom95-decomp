// SkillImp.cpp
#include "SkillImp.hpp"

#include <skills_ids.h>

#include "SkillImp_regen.ipp"

CSkill_HitAni::~CSkill_HitAni()
{
}

void CSkill_HitAni::_dtor_0()
{
    this->~CSkill_HitAni();
}

CSkill_HitAni::CSkill_HitAni(const CSkill_HitAni& arg0)
{
    _ctor_1(arg0);
}

void CSkill_HitAni::_ctor_1(const CSkill_HitAni& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSkill_HitAni::CSkill_HitAni(const SKILLENTRY* pSkill, unsigned char nCharLevel, long nSLV, long nWeaponItemID,
                             long nAction, long nMobCount, const ATTACKINFO* aAttackInfo, long nBulletItemID)
{
    //_ctor_0( pSkill, nCharLevel, nSLV, nWeaponItemID, nAction, nMobCount, aAttackInfo, nBulletItemID);
    if (!pSkill)
    {
        CreateDefault(pSkill, nCharLevel, nSLV, nWeaponItemID, nAction, nMobCount, nBulletItemID);
        return;
    }
    auto nSkillID = pSkill->nSkillID;
    if (pSkill->nSkillID <= BUCCANEER_BARRAGE)
    {
        if (pSkill->nSkillID != BUCCANEER_BARRAGE)
        {
            if (nSkillID <= CHIEFBANDIT_BAND_OF_THIEVES)
            {
                if (nSkillID == CHIEFBANDIT_BAND_OF_THIEVES)
                {
                    CreateShuffle(pSkill, nSLV, nMobCount, aAttackInfo);
                    return;
                }
                if (nSkillID == HUNTER_ARROW_BOMB_BOW || nSkillID == BOWMASTER_PHOENIX || nSkillID ==
                    MARKSMAN_FROSTPREY)
                {
                    CreateFirst(pSkill, nMobCount);
                    return;
                }
                CreateDefault(pSkill, nCharLevel, nSLV, nWeaponItemID, nAction, nMobCount, nBulletItemID);
                return;
            }
            auto v11 = nSkillID - 5101003;
            if (!v11)
            {
                CreateFirst(pSkill, 2);
                return;
            }
            if (v11 != 1)
            {
                CreateDefault(pSkill, nCharLevel, nSLV, nWeaponItemID, nAction, nMobCount, nBulletItemID);
                return;
            }
            CreateFirst(pSkill, nMobCount);
            return;
        }
        CreateMultipleLayer(pSkill, 1);
        return;
    }
    if (nSkillID <= TB3_BARRAGE)
    {
        if (nSkillID == TB3_BARRAGE)
        {
            CreateMultipleLayer(pSkill, 1);
            return;
        }
        if (nSkillID == OUTLAW_GAVIOTA || nSkillID == TB2_CORKSCREW_BLOW)
        {
            CreateFirst(pSkill, nMobCount);
            return;
        }
        CreateDefault(pSkill, nCharLevel, nSLV, nWeaponItemID, nAction, nMobCount, nBulletItemID);
        return;
    }
    if (nSkillID == WH2_JAGUAROSHI_2)
    {
        CreateFirst(pSkill, nMobCount);
        return;
    }
    if (nSkillID != WH4_EXPLODING_ARROWS)
    {
        CreateDefault(pSkill, nCharLevel, nSLV, nWeaponItemID, nAction, nMobCount, nBulletItemID);
        return;
    }
    CreateForFlashRain(pSkill, nMobCount);
}

void CSkill_HitAni::_ctor_0(const SKILLENTRY* pSkill, unsigned char nCharLevel, long nSLV, long nWeaponItemID,
                            long nAction, long nMobCount, const ATTACKINFO* aAttackInfo, long nBulletItemID)
{
    //return __sub_002ECA00(this, nullptr, pSkill, nCharLevel, nSLV, nWeaponItemID, nAction, nMobCount, aAttackInfo, nBulletItemID);
    new(this) CSkill_HitAni(pSkill, nCharLevel, nSLV, nWeaponItemID, nAction, nMobCount, aAttackInfo, nBulletItemID);
}

Ztl_bstr_t CSkill_HitAni::operator()(long nOrder)
{
    //return _op_call_3(this, nOrder);
    return m_absHitAni[nOrder];
}

Ztl_bstr_t CSkill_HitAni::_op_call_3(CSkill_HitAni* pThis, long nOrder)
{
    return pThis->m_absHitAni[nOrder];
}

Ztl_bstr_t CSkill_HitAni::GetSubHitAni(long nOrder)
{
    return m_absSubHitAni[nOrder];
}

void CSkill_HitAni::CreateDefault(const SKILLENTRY* pSkill, unsigned char nCharLevel, long nSLV, long nWeaponItemID,
                                  long nAction, long nMobCount, long nBulletItemID)
{
    __sub_002EC010(this, nullptr, pSkill, nCharLevel, nSLV, nWeaponItemID, nAction, nMobCount, nBulletItemID);
}

void CSkill_HitAni::CreateFirst(const SKILLENTRY* pSkill, long nMobCount)
{
    __sub_002EBD80(this, nullptr, pSkill, nMobCount);
}

void CSkill_HitAni::CreateShuffle(const SKILLENTRY* pSkill, long nSLV, long nMobCount, const ATTACKINFO* aAttackInfo)
{
    __sub_002EBE20(this, nullptr, pSkill, nSLV, nMobCount, aAttackInfo);
}

void CSkill_HitAni::CreateMultipleLayer(const SKILLENTRY* pSkill, long nIdx)
{
    __sub_002EC7D0(this, nullptr, pSkill, nIdx);
}

void CSkill_HitAni::CreateForFlashRain(const SKILLENTRY* pSkill, long nMobCount)
{
    __sub_002EBEF0(this, nullptr, pSkill, nMobCount);
}

CSkill_HitAni& CSkill_HitAni::operator=(const CSkill_HitAni& arg0)
{
    return _op_assign_10(this, arg0);
}

CSkill_HitAni& CSkill_HitAni::_op_assign_10(CSkill_HitAni* pThis, const CSkill_HitAni& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t __cdecl is_correct_bullet_cashitem(long nWeaponItemID, long nItemID)
{
    auto weapon_type = get_weapon_type(nWeaponItemID);
    switch ( weapon_type )
    {
    case '-':
    case '.':
      return nItemID / 1000 == 5020;
    case '/':
        return nItemID / 1000 == 5021;
    case '1':
        return nItemID / 1000 == 5022;
    default:
        return false;
    }
}
