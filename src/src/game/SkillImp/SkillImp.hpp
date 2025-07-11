// SkillImp.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "SkillInfo/SkillInfo.hpp"

struct SKILLENTRY;
struct ATTACKINFO;

// Level: 1 0x13c65
class CSkill_HitAni;

class CSkill_HitAni : public ZRefCounted
{
    // Nested
    // Fields
private:
    std::array<Ztl_bstr_t, 15> m_absHitAni{};

private:
    std::array<Ztl_bstr_t, 15> m_absSubHitAni{};
    // Methods
public:
    virtual ~CSkill_HitAni();

public:
    void _dtor_0();

public:
    CSkill_HitAni(const CSkill_HitAni& arg0);

public:
    void _ctor_1(const CSkill_HitAni& arg0);

public:
    CSkill_HitAni(const SKILLENTRY* pSkill, unsigned char nCharLevel, long nSLV, long nWeaponItemID, long nAction,
                  long nMobCount, const ATTACKINFO* aAttackInfo, long nBulletItemID);

public:
    void _ctor_0(const SKILLENTRY* pSkill, unsigned char nCharLevel, long nSLV, long nWeaponItemID, long nAction,
                 long nMobCount, const ATTACKINFO* aAttackInfo, long nBulletItemID);

public:
    Ztl_bstr_t operator()(long nOrder);

public:
    static Ztl_bstr_t _op_call_3(CSkill_HitAni* pThis, long nOrder);

public:
    Ztl_bstr_t GetSubHitAni(long nOrder);

private:
    void CreateDefault(const SKILLENTRY* pSkill, unsigned char nCharLevel, long nSLV, long nWeaponItemID, long nAction,
                       long nMobCount, long nBulletItemID);

private:
    void CreateFirst(const SKILLENTRY* pSkill, long nMobCount);

private:
    void CreateShuffle(const SKILLENTRY* pSkill, long nSLV, long nMobCount, const ATTACKINFO* aAttackInfo);

private:
    void CreateMultipleLayer(const SKILLENTRY* pSkill, long nIdx);

private:
    void CreateForFlashRain(const SKILLENTRY* pSkill, long nMobCount);

public:
    CSkill_HitAni& operator=(const CSkill_HitAni& arg0);

public:
    static CSkill_HitAni& _op_assign_10(CSkill_HitAni* pThis, const CSkill_HitAni& arg0);
};

STATIC_ASSERT_SIZE(CSkill_HitAni, 132);

int32_t __cdecl is_correct_bullet_cashitem(long nWeaponItemID, long nItemID);
