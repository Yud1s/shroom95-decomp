// MobTemplate.cpp
#include "MobTemplate.hpp"

#include <Mob/Mob.hpp>

#include "ActionMan/ActionMan.hpp"

static ZMap<long, ZRef<CMobTemplate>, long> FAKE_ZMAP_MOB_TEMPLATE;
static ZRef<CActionMan::MOBIMGENTRY> FAKE_ZREF_MOBIMGENTRY;
static ZRef<MobSpeakInformation> FAKE_ZREF_MOBSPEAKINFORMATION;
static ZRef<CMobTemplate> FAKE_ZREF_CMOBTEMPLATE;
static ZMap<ZXString<char>, int, ZXString<char>> FAKE_ZMAP_ZXSTRING_INT;

static ZRefCounted_AllocHelper<MobSpeakCondition> FAKE_ZREFCOUNTED_ALLOCHELPER_MOBSPEAKCONDITION;

#include "MobTemplate_regen.ipp"

ZMap<long, ZRef<CMobTemplate>, long> CMobTemplate::ms_mMobTemplate{};

MobAttackInfo::~MobAttackInfo()
{
}

void MobAttackInfo::_dtor_0()
{
    this->~MobAttackInfo();
}

MobAttackInfo::MobAttackInfo(const MobAttackInfo& arg0)
{
    _ctor_1(arg0);
}

void MobAttackInfo::_ctor_1(const MobAttackInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MobAttackInfo::MobAttackInfo()
{
    this->rcRang = {};
}

void MobAttackInfo::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MobAttackInfo& MobAttackInfo::operator=(const MobAttackInfo& arg0)
{
    return _op_assign_3(this, arg0);
}

MobAttackInfo& MobAttackInfo::_op_assign_3(MobAttackInfo* pThis, const MobAttackInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMobTemplate::~CMobTemplate()
{
}

void CMobTemplate::_dtor_0()
{
    this->~CMobTemplate();
}

CMobTemplate::CMobTemplate(const CMobTemplate& arg0)
{
    _ctor_1(arg0);
}

void CMobTemplate::_ctor_1(const CMobTemplate& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMobTemplate::CMobTemplate()
{
    //UNIMPLEMENTED; //_ctor_0();
}

void CMobTemplate::_ctor_0()
{
    //return __sub_0025A340(this, nullptr);
    new(this) CMobTemplate();
}

_ZTL_SEC_GETSETI(unsigned long, CMobTemplate, dwLinkedTemplateID)
_ZTL_SEC_GETSETI(unsigned long, CMobTemplate, dwMonsterBookID)
_ZTL_SEC_GETSETI(unsigned long, CMobTemplate, dwTemplateID)
_ZTL_SEC_GETSETI(long, CMobTemplate, nSpecies)
_ZTL_SEC_GETSETI(long, CMobTemplate, nMoveAbility)
_ZTL_SEC_GETSETI(int32_t, CMobTemplate, bRegenAction)
_ZTL_SEC_GETSETI(int32_t, CMobTemplate, bBodyAttack)
_ZTL_SEC_GETSETI(int32_t, CMobTemplate, bBoss)
_ZTL_SEC_GETSETI(long, CMobTemplate, nLevel)
_ZTL_SEC_GETSETI(long, CMobTemplate, nMaxHP)
_ZTL_SEC_GETSETI(long, CMobTemplate, nMaxMP)
_ZTL_SEC_GETSETI(long, CMobTemplate, nSpeed)
_ZTL_SEC_GETSETI(long, CMobTemplate, nFlySpeed)
_ZTL_SEC_GETSETI(long, CMobTemplate, nChaseSpeed)
_ZTL_SEC_GETSETI(long, CMobTemplate, nPAD)
_ZTL_SEC_GETSETI(long, CMobTemplate, nPDR)
_ZTL_SEC_GETSETI(long, CMobTemplate, nMAD)
_ZTL_SEC_GETSETI(long, CMobTemplate, nMDR)
_ZTL_SEC_GETSETI(long, CMobTemplate, nACC)
_ZTL_SEC_GETSETI(long, CMobTemplate, nEVA)
_ZTL_SEC_GETSETI(long, CMobTemplate, nEXP)
_ZTL_SEC_GETSETI(long, CMobTemplate, nPushedDamage)
_ZTL_SEC_GETSETI(int32_t, CMobTemplate, bUndead)
_ZTL_SEC_GETSETI(int32_t, CMobTemplate, bSelfDestruction)
_ZTL_SEC_GETSETI(int32_t, CMobTemplate, bFirstSelfDestruction)
_ZTL_SEC_GETSETI(int32_t, CMobTemplate, bPickUpDrop)
_ZTL_SEC_GETSETI(int32_t, CMobTemplate, bFirstAttack)
_ZTL_SEC_GETSETI(int32_t, CMobTemplate, bInvincible)
_ZTL_SEC_GETSETI(int32_t, CMobTemplate, bDisable)
_ZTL_SEC_GETSETI(int32_t, CMobTemplate, bNotAttack)
_ZTL_SEC_GETSETI(long, CMobTemplate, nFixedDamage)
_ZTL_SEC_GETSETI(long, CMobTemplate, nWeaponID)
_ZTL_SEC_GETSETI(long, CMobTemplate, bAngerGauge)
_ZTL_SEC_GETSETI(long, CMobTemplate, nChargeCount)
_ZTL_SEC_GETSETI(int32_t, CMobTemplate, bHPGaugeHide)
_ZTL_SEC_GETSETI(long, CMobTemplate, nHPTagColor)
_ZTL_SEC_GETSETI(long, CMobTemplate, nHPTagBgColor)

int32_t CMobTemplate::IsLevelVisible() const
{
    auto result = 0;
    if ( !this->bHideLevel
      && !this->bHideHP
      && !this->bHideName
      && !_ZtlSecureGet_bBoss() )
    {
        auto tmplId = _ZtlSecureGet_dwTemplateID();
        if ( tmplId
           / 1000000 != 9 )
            return 1;
        auto v3 = tmplId / 100000;
        if ( v3 == 94 || v3 == 96 )
            return 1;
    }
    return result;
}

int32_t CMobTemplate::IsDamagedBySelectedSkill() const
{
    //TODO
    return this->m_aDamagedBySelectedSkill.GetCount() > 0;
}

int32_t CMobTemplate::IsVulnerableTo(long nSkillID)
{
    //return __sub_00259260(this, nullptr, nSkillID);
    if (_ZtlSecureGet_bOnlyNormalAttack() && nSkillID > 0)
        return false;


    if (m_aDamagedBySelectedSkill.IsEmpty())
        return true;

    for (auto& skill: m_aDamagedBySelectedSkill)
    {
        if (skill == nSkillID)
            return true;
    }

    return false;
}

int32_t CMobTemplate::CanApplyCtrl()
{
    //TODO
    return false;
}

MobAttackInfo* CMobTemplate::GetAttackInfo(long nIdx)
{
    //return __sub_0012D550(this, nullptr, nIdx);
    if (nIdx < 0 || nIdx >= nAttackCount)
        return 0;

    if (!m_apAttackInfo[nIdx])
    {
        m_apAttackInfo[nIdx] = LoadAttackInfo(nIdx);
    }
    return m_apAttackInfo[nIdx].op_arrow();
}

const MobSkillInfo* CMobTemplate::GetSkillInfo(long nSkillID)
{
    //return __sub_0023C310(this, nullptr, nSkillID);
    for (auto& skill: m_aSkillInfo)
    {
        if (skill.nSkillID == nSkillID)
            return &skill;
    }

    return nullptr;
}

unsigned long CMobTemplate::CalcCrc(unsigned long dwKey)
{
    //return __sub_00260730(this, nullptr, dwKey);
    return 1337;
}

void __cdecl CMobTemplate::Load()
{
}

void __cdecl CMobTemplate::Unload()
{
    ms_mMobTemplate.RemoveAll();
}

CMobTemplate* __cdecl CMobTemplate::GetMobTemplate(unsigned long dwTemplateID)
{
    return __sub_002611F0(dwTemplateID);
}

ZRef<MobAttackInfo> CMobTemplate::LoadAttackInfo(long nIdx)
{
    ZRef<MobAttackInfo> ret;
    return *__sub_0025B890(this, nullptr, &ret, nIdx);
}

void CMobTemplate::LoadSkillInfo(_x_com_ptr<IWzProperty> pProp)
{
    __sub_0025AD60(this, nullptr, CreateNakedParam(pProp));
}

int32_t __cdecl CMobTemplate::RegisterMob(unsigned long arg0, _x_com_ptr<IWzProperty> arg1)
{
    return __sub_0025D510(arg0, CreateNakedParam(arg1));
}

void CMobTemplate::LoadSpeakInformation(_x_com_ptr<IWzProperty> pInformation, long nAction)
{
    __sub_0025B4B0(this, nullptr, CreateNakedParam(pInformation), nAction);
}

void CMobTemplate::LoadSpeakCondition(_x_com_ptr<IWzProperty> pConditions)
{
    __sub_0025A930(this, nullptr, CreateNakedParam(pConditions));
}
int32_t CMobTemplate::IsCantPassByTeleport()
{
    return bCantPassByTeleport;
}

_ZTL_SEC_GETSETI(int32_t, CMobTemplate, bOnlyNormalAttack);
_ZTL_SEC_GETSETI(int32_t, CMobTemplate, bCannotEvade);
_ZTL_SEC_GETSETI(long, CMobTemplate, nCategory);
_ZTL_SEC_GETSETI(int32_t, CMobTemplate, bUpperMostLayer);

CMobTemplate& CMobTemplate::operator=(const CMobTemplate& arg0)
{
    return _op_assign_101(this, arg0);
}

CMobTemplate& CMobTemplate::_op_assign_101(CMobTemplate* pThis, const CMobTemplate& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MobSpeakInformation::~MobSpeakInformation()
{
}

void MobSpeakInformation::_dtor_0()
{
    this->~MobSpeakInformation();
}

MobSpeakInformation::MobSpeakInformation(const MobSpeakInformation& arg0)
{
    _ctor_1(arg0);
}

void MobSpeakInformation::_ctor_1(const MobSpeakInformation& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MobSpeakInformation::MobSpeakInformation()
{
}

void MobSpeakInformation::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MobSpeakInformation& MobSpeakInformation::operator=(const MobSpeakInformation& arg0)
{
    return _op_assign_3(this, arg0);
}

MobSpeakInformation& MobSpeakInformation::_op_assign_3(MobSpeakInformation* pThis, const MobSpeakInformation& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Ztl_variant_t __cdecl GetVariantLinkData(_x_com_ptr<IWzProperty> pData, _x_com_ptr<IWzProperty> pLinkData,
                                         Ztl_bstr_t sName)
{
    return __sub_0025A7B0(CreateNakedParam(pData), CreateNakedParam(pLinkData), CreateNakedParam(sName));
}

int32_t __cdecl get_element_attribute_(const wchar_t* arg0, long* arg1)
{
    return __sub_00258E90(arg0, arg1);
}

_x_com_ptr<IWzProperty> __cdecl GetPropertyLinkData(_x_com_ptr<IWzProperty> pData, _x_com_ptr<IWzProperty> pLinkData,
                                                    Ztl_bstr_t sName)
{
    return __sub_0025A5B0(CreateNakedParam(pData), CreateNakedParam(pLinkData), CreateNakedParam(sName));
}
