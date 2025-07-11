// SequencedKeyMan.cpp
#include "SequencedKeyMan.hpp"

#include <complex>
#include <skills_ids.h>

#include "SequencedKeyMan_regen.ipp"

KeySequence::~KeySequence()
{
}

void KeySequence::_dtor_0()
{
    return __sub_002DFD00(this, nullptr);
}

KeySequence::KeySequence(const KeySequence& arg0)
{
    _ctor_1(arg0);
}

void KeySequence::_ctor_1(const KeySequence& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

KeySequence::KeySequence()
{
}

void KeySequence::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

KeySequence& KeySequence::operator=(const KeySequence& arg0)
{
    return _op_assign_3(this, arg0);
}

KeySequence& KeySequence::_op_assign_3(KeySequence* pThis, const KeySequence& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void KeySequence::AddElem(KeySequenceElement* seq)
{
    m_apSequence.InsertBefore() = ZRef(seq, true);
}

CSequencedKeyMan::~CSequencedKeyMan()
{
}

void CSequencedKeyMan::_dtor_0()
{
    return __sub_002DF6F0(this, nullptr);
}

CSequencedKeyMan::CSequencedKeyMan(const CSequencedKeyMan& arg0)
{
    _ctor_1(arg0);
}

void CSequencedKeyMan::_ctor_1(const CSequencedKeyMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSequencedKeyMan::CSequencedKeyMan()
{
    ms_pInstance = this;
    m_nLastScancode = -1;
}

void CSequencedKeyMan::_ctor_0()
{
    new(this) CSequencedKeyMan();
}

void CSequencedKeyMan::Clear()
{
    __sub_002DEF40(this, nullptr);
}

void CSequencedKeyMan::Restore()
{
    //__sub_002E11F0(this, nullptr);
    auto ctx = CWvsContext::GetInstance();
    auto cd = ctx->GetCharacterData();
    auto fMap = CFuncKeyMappedMan::GetInstance();
    auto skillInfo = CSkillInfo::GetInstance();


    m_mSequence.RemoveAll();
    m_aCandidatePool.RemoveAll();
    m_lActiveCandidate.RemoveAll();

    auto nNormalAttack = 0;
    auto nFinishAttack = 0;
    for (auto i = 0; i < 89; ++i)
    {
        auto& v6 = fMap->FuncKeyMapped(i);
        if (v6.nType == 1)
        {
            if (v6.nID == 32001001)
                nFinishAttack = i;
        }
        else if (v6.nType == 5 && v6.nID == 52)
        {
            nNormalAttack = i;
        }
    }



    {
        auto elem = m_mSequence.InsertPtrValue(0, nullptr);
        elem->AddElem(new KeySequenceElement(75, 300, true));
        elem->AddElem(new KeySequenceElement(75, 0, false));
        elem->AddElem(new CDashTrigger(75));
        elem->AddElem(new KeySequenceElement(75, 0, false));
    }

    {
        auto elem = m_mSequence.InsertPtrValue(1, nullptr);
        elem->AddElem(new KeySequenceElement(77, 300, true));
        elem->AddElem(new KeySequenceElement(77, 0, false));
        elem->AddElem(new CDashTrigger(77));
        elem->AddElem(new KeySequenceElement(77, 0, false));
    }


    auto elem2 = m_mSequence.InsertPtrValue(2, nullptr);
    elem2->AddElem(new KeySequenceElement(nNormalAttack, 480, true));
    elem2->AddElem(new KeySequenceElement(nNormalAttack, 0, false));
    elem2->AddElem(new CDoubleAttack(nNormalAttack));
    elem2->AddElem(new KeySequenceElement(nNormalAttack, 0, false));

    if (skillInfo->GetSkillLevel(*cd.op_arrow(), ARAN2_TRIPLE_SWING, nullptr) > 0 || skillInfo->GetSkillLevel(
        *cd.op_arrow(), ARAN2_TRIPLE_SWING, nullptr))
    {
        elem2->m_anNextSequenceID.Insert(3);
    }

    auto elem3 = m_mSequence.InsertPtrValue(3, nullptr);
    elem3->AddElem(new CTripleAttack(nNormalAttack));
    elem3->AddElem(new KeySequenceElement(nNormalAttack, 0, false));

    auto elem4 = m_mSequence.InsertPtrValue(4, nullptr);
    elem4->AddElem(new KeySequenceElementIgnoreUp(75, 600, true));
    elem4->AddElem(new CFinalCharge(nNormalAttack, true));
    elem4->AddElem(new KeySequenceElementIgnoreUp(77, 600, true));

    auto elem5 = m_mSequence.InsertPtrValue(5, nullptr);
    elem5->AddElem(new KeySequenceElementIgnoreUp(77, 600, true));
    elem5->AddElem(new CFinalCharge(nNormalAttack, false));
    elem5->AddElem(new KeySequenceElementIgnoreUp(80, 300, true));

    auto elem6 = m_mSequence.InsertPtrValue(6, nullptr);
    elem6->AddElem(new KeySequenceElementIgnoreUp(80, 300, true));
    elem6->AddElem(new CFinalBlow(nNormalAttack));

    auto elem7 = m_mSequence.InsertPtrValue(7, nullptr);
    elem7->AddElem(new KeySequenceElementIgnoreUp(72, 300, true));
    elem7->AddElem(new CFinalToss(nNormalAttack));

    auto elem8 = m_mSequence.InsertPtrValue(8, nullptr);
    elem8->AddElem(new KeySequenceElement(72, 700, true));
    elem8->AddElem(new KeySequenceElement(72, 0, false));
    elem8->AddElem(new KeySequenceElement(72, 0, true));
    elem8->AddElem(new CWhirlWind(nNormalAttack));

    auto elem9 = m_mSequence.InsertPtrValue(9, nullptr);
    elem9->AddElem(new KeySequenceElementIgnoreUp(80, 600, true));
    elem9->AddElem(new KeySequenceElementIgnoreUp(75, 0, true));
    elem9->AddElem(new CComboSmash(nNormalAttack, true));

    auto elem10 = m_mSequence.InsertPtrValue(10, nullptr);
    elem10->AddElem(new KeySequenceElementIgnoreUp(80, 600, true));
    elem10->AddElem(new KeySequenceElementIgnoreUp(77, 0, true));
    elem10->AddElem(new CComboSmash(nNormalAttack, false));

    auto elem11 = m_mSequence.InsertPtrValue(11, nullptr);
    elem11->AddElem(new KeySequenceElement(80, 600, true));
    elem11->AddElem(new KeySequenceElement(80, 0, false));
    elem11->AddElem(new KeySequenceElementIgnoreUp(80, 0, true));
    elem11->AddElem(new CComboDrain(nNormalAttack));

    auto elem12 = m_mSequence.InsertPtrValue(12, nullptr);
    elem12->AddElem(new KeySequenceElement(75, 300, true));
    elem12->AddElem(new KeySequenceElement(75, 0, false));
    elem11->AddElem(new CCombatStepTrigger(75));
    elem12->AddElem(new KeySequenceElement(75, 0, false));

    auto elem13 = m_mSequence.InsertPtrValue(13, nullptr);
    elem13->AddElem(new KeySequenceElement(77, 300, true));
    elem13->AddElem(new KeySequenceElement(77, 0, false));
    elem11->AddElem(new CCombatStepTrigger(77));
    elem13->AddElem(new KeySequenceElement(77, 0, false));


    auto elem14 = m_mSequence.InsertPtrValue(14, nullptr);
    elem14->AddElem(new KeySequenceElementIgnoreUp(80, 300, true));
    elem14->AddElem(new KeySequenceElementIgnoreUp(72, 0, true));
    elem14->AddElem(new CMassacre(nNormalAttack));

    auto elem15 = m_mSequence.InsertPtrValue(15, nullptr);
    elem15->AddElem(new KeySequenceElement(nFinishAttack, 480, true));
    elem15->AddElem(new CFinishAttack(nFinishAttack, -1));


    if (auto user = CUserLocal::GetInstance())
    {
        auto p_m_aCandidatePool = &m_aCandidatePool;
        auto v190 = p_m_aCandidatePool;
        auto& cd_ = *cd.op_arrow();
        if (skillInfo->GetSkillLevel(cd_, PIRATE_DASH, nullptr) <= 0
            && skillInfo->GetSkillLevel(cd_, TB1_DASH, nullptr) <= 0
            && skillInfo->GetSkillLevel(cd_, DB3_TORNADO_SPIN, nullptr) <= 0
            && skillInfo->GetSkillLevel(cd_, BEGINNER_SPACE_DASH_1, nullptr) <= 0
            && skillInfo->GetSkillLevel(cd_, NOBLESSE_SPACE_DASH_1, nullptr) <= 0
            && skillInfo->GetSkillLevel(cd_, LEGEND_SPACE_DASH, nullptr) <= 0
            && skillInfo->GetSkillLevel(cd_, EVANBEGINNER_SPACE_DASH, nullptr) <= 0)
        {
            v190 = p_m_aCandidatePool;
        }
        else
        {
            v190 = p_m_aCandidatePool;
            v190->InsertBefore() = 0;
            v190->InsertBefore() = 1;
        }

        auto job = user->GetJobCode();
        if ((job / 100 == 21 || job == 2000) && get_weapon_type(user->GetWeaponItemID()) == 44)
        {
            if (skillInfo->GetSkillLevel(cd_, ARAN1_DOUBLE_SWING, 0) > 0
                || skillInfo->GetSkillLevel(cd_, LEGEND_TUTORIAL_SKILL, 0) > 0)
            {
                v190->InsertBefore() = 2;
            }
            if (skillInfo->GetSkillLevel(cd_, ARAN2_FINAL_CHARGE, 0) > 0)
            {
                v190->InsertBefore() = 4;
                v190->InsertBefore() = 5;
            }
            if (skillInfo->GetSkillLevel(cd_, ARAN4_FINAL_BLOW, 0) > 0
                || skillInfo->GetSkillLevel(cd_, LEGEND_TUTORIAL_SKILL_2, 0) > 0)
            {
                v190->InsertBefore() = 6;
            }
            if (skillInfo->GetSkillLevel(cd_, ARAN3_FINAL_TOSS, 0) > 0)
                v190->InsertBefore() = 7;
            if (skillInfo->GetSkillLevel(cd_, ARAN3_ROLLING_SPIN, 0) > 0)
                v190->InsertBefore() = 8;
            if (skillInfo->GetSkillLevel(cd_, ARAN2_COMBO_SMASH, 0) > 0)
            {
                v190->InsertBefore() = 9;
                v190->InsertBefore() = 10;
            }
            if (skillInfo->GetSkillLevel(cd_, ARAN2_COMBO_DRAIN, 0) > 0)
                v190->InsertBefore() = 11;
        }

        auto slvl = 0;
        if (job / 100 == 21 || job == 2000)
        {
            slvl = skillInfo->GetSkillLevel(cd_, ARAN1_COMBAT_STEP, 0);
        }
        else
        {
            if (job / 100 != 35)
            {
            LABEL_456:
                v190->InsertBefore() = 14;
                if (job / 100 == 32
                    && get_weapon_type(user->GetWeaponItemID()) == 38
                    && skillInfo->GetSkillLevel(cd_, THE_FINISHER, 0) > 0)
                {
                    v190->InsertBefore() = 15;
                }
                return;
            }
            slvl = skillInfo->GetSkillLevel(cd_, CITIZEN_MECHANIC_DASH, 0);
        }
        if (slvl > 0)
        {
            v190->InsertBefore() = 12;
            v190->InsertBefore() = 13;
        }
        goto LABEL_456;
    }
}

int32_t CSequencedKeyMan::Process(long nScancode, int32_t bDown)
{
    return __sub_002E3400(this, nullptr, nScancode, bDown);
}

void CSequencedKeyMan::ReserveAction(ZRef<KeySequenceElement> pAction, int32_t bForcedReserve)
{
    __sub_002DFD60(this, nullptr, CreateNakedParam(pAction), bForcedReserve);
}

long CSequencedKeyMan::GetReservedCount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CSequencedKeyMan::Update()
{
    __sub_002DF980(this, nullptr);
}

CSequencedKeyMan& CSequencedKeyMan::operator=(const CSequencedKeyMan& arg0)
{
    return _op_assign_9(this, arg0);
}

CSequencedKeyMan& CSequencedKeyMan::_op_assign_9(CSequencedKeyMan* pThis, const CSequencedKeyMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

KeySequenceElement::~KeySequenceElement()
{
}

void KeySequenceElement::_dtor_0()
{
    this->~KeySequenceElement();
}

KeySequenceElement::KeySequenceElement(const KeySequenceElement& arg0)
{
    _ctor_1(arg0);
}

void KeySequenceElement::_ctor_1(const KeySequenceElement& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

KeySequenceElement::KeySequenceElement(long scancode, long expire, int32_t down)
{
    nScancode = scancode;
    bDown = down;
    tExpire = expire;
    dwStartTick = timeGetTime();
}

void KeySequenceElement::_ctor_0(long scancode, long expire, int32_t down)
{
    new(this) KeySequenceElement(scancode, expire, down);
}

int32_t KeySequenceElement::Check(long scancode, int32_t down)
{
    return this->nScancode == scancode && this->bDown == down;
}

int32_t KeySequenceElement::DoAction(int32_t bNoReserve)
{
    return 0;
}

int32_t KeySequenceElement::NeedIgnore(long scancode, int32_t down)
{
    return __sub_002DE4A0(this, nullptr, scancode, down);
}

long KeySequenceElement::GetSkillID(int32_t bDummy)
{
    return 0;
}

int32_t KeySequenceElement::CheckPreOrderSkill(long nPreSkillID)
{
    return 1;
}

unsigned long KeySequenceElement::GetCreatedTime()
{
    return __sub_002DE4F0(this, nullptr);
}

unsigned long KeySequenceElement::GetValidDuration()
{
    return 1000;
}

KeySequenceElement& KeySequenceElement::operator=(const KeySequenceElement& arg0)
{
    return _op_assign_10(this, arg0);
}

KeySequenceElement& KeySequenceElement::_op_assign_10(KeySequenceElement* pThis, const KeySequenceElement& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCombatStepTrigger::~CCombatStepTrigger()
{
}

void CCombatStepTrigger::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCombatStepTrigger::CCombatStepTrigger(const CCombatStepTrigger& arg0)
{
    _ctor_1(arg0);
}

void CCombatStepTrigger::_ctor_1(const CCombatStepTrigger& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCombatStepTrigger::CCombatStepTrigger(long arg0): KeySequenceElement(arg0, 0, true)
{
}

void CCombatStepTrigger::_ctor_0(long arg0)
{
    new(this) CCombatStepTrigger(arg0);
}

int32_t CCombatStepTrigger::DoAction(int32_t bNoReserve)
{
    return __sub_002E0C80(this, nullptr, bNoReserve);
}

CCombatStepTrigger& CCombatStepTrigger::operator=(const CCombatStepTrigger& arg0)
{
    return _op_assign_4(this, arg0);
}

CCombatStepTrigger& CCombatStepTrigger::_op_assign_4(CCombatStepTrigger* pThis, const CCombatStepTrigger& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalBlow::~CFinalBlow()
{
}

void CFinalBlow::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalBlow::CFinalBlow(const CFinalBlow& arg0)
{
    _ctor_1(arg0);
}

void CFinalBlow::_ctor_1(const CFinalBlow& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalBlow::CFinalBlow(long scancode): KeySequenceElement(scancode, 0, true)
{
}

void CFinalBlow::_ctor_0(long scancode)
{
    return __sub_002DE680(this, nullptr, scancode);
}

int32_t CFinalBlow::DoAction(int32_t bNoReserve)
{
    return __sub_002E0420(this, nullptr, bNoReserve);
}

int32_t CFinalBlow::CheckPreOrderSkill(long nPreSkillID)
{
    return __sub_002DE6B0(this, nullptr, nPreSkillID);
}

unsigned long CFinalBlow::GetValidDuration()
{
    return __sub_002DE6A0(this, nullptr);
}

CFinalBlow& CFinalBlow::operator=(const CFinalBlow& arg0)
{
    return _op_assign_6(this, arg0);
}

CFinalBlow& CFinalBlow::_op_assign_6(CFinalBlow* pThis, const CFinalBlow& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalToss::~CFinalToss()
{
}

void CFinalToss::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalToss::CFinalToss(const CFinalToss& arg0)
{
    _ctor_1(arg0);
}

void CFinalToss::_ctor_1(const CFinalToss& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalToss::CFinalToss(long scancode): KeySequenceElement(scancode, 0, true)
{
    m_nSkillID = ARAN3_FINAL_TOSS;
}

void CFinalToss::_ctor_0(long scancode)
{
    return __sub_002DE6E0(this, nullptr, scancode);
}

int32_t CFinalToss::DoAction(int32_t bNoReserve)
{
    return __sub_002E05F0(this, nullptr, bNoReserve);
}

int32_t CFinalToss::CheckPreOrderSkill(long nPreSkillID)
{
    return __sub_002DE710(this, nullptr, nPreSkillID);
}

unsigned long CFinalToss::GetValidDuration()
{
    return __sub_002DE720(this, nullptr);
}

CFinalToss& CFinalToss::operator=(const CFinalToss& arg0)
{
    return _op_assign_6(this, arg0);
}

CFinalToss& CFinalToss::_op_assign_6(CFinalToss* pThis, const CFinalToss& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

KeySequenceElementIgnoreUp::~KeySequenceElementIgnoreUp()
{
}

void KeySequenceElementIgnoreUp::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

KeySequenceElementIgnoreUp::KeySequenceElementIgnoreUp(const KeySequenceElementIgnoreUp& arg0)
{
    _ctor_1(arg0);
}

void KeySequenceElementIgnoreUp::_ctor_1(const KeySequenceElementIgnoreUp& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

KeySequenceElementIgnoreUp::KeySequenceElementIgnoreUp(long arg0, long arg1, int32_t arg2): KeySequenceElement(
    arg0, arg1, arg2)
{
}

void KeySequenceElementIgnoreUp::_ctor_0(long arg0, long arg1, int32_t arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t KeySequenceElementIgnoreUp::NeedIgnore(long scancode, int32_t down)
{
    return __sub_002DE500(this, nullptr, scancode, down);
}

KeySequenceElementIgnoreUp& KeySequenceElementIgnoreUp::operator=(const KeySequenceElementIgnoreUp& arg0)
{
    return _op_assign_4(this, arg0);
}

KeySequenceElementIgnoreUp& KeySequenceElementIgnoreUp::_op_assign_4(KeySequenceElementIgnoreUp* pThis,
                                                                     const KeySequenceElementIgnoreUp& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinishAttack::~CFinishAttack()
{
}

void CFinishAttack::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinishAttack::CFinishAttack(const CFinishAttack& arg0)
{
    _ctor_1(arg0);
}

void CFinishAttack::_ctor_1(const CFinishAttack& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinishAttack::CFinishAttack(long scancode, long nAction): KeySequenceElement(scancode, 1000, false)

{
    m_nAction = nAction;
}

void CFinishAttack::_ctor_0(long scancode, long nAction)
{
    return __sub_002DE730(this, nullptr, scancode, nAction);
}

int32_t CFinishAttack::DoAction(int32_t bNoReserve)
{
    return __sub_002E0F80(this, nullptr, bNoReserve);
}

long CFinishAttack::GetSkillID(int32_t bDummy)
{
    return __sub_002DE760(this, nullptr, bDummy);
}

long CFinishAttack::GetDummySkillID()
{
    return __sub_002DE770(this, nullptr);
}

int32_t CFinishAttack::CheckPreOrderSkill(long nPreSkillID)
{
    return __sub_002DE7B0(this, nullptr, nPreSkillID);
}

unsigned long CFinishAttack::GetValidDuration()
{
    return __sub_002DE7C0(this, nullptr);
}

CFinishAttack& CFinishAttack::operator=(const CFinishAttack& arg0)
{
    return _op_assign_8(this, arg0);
}

CFinishAttack& CFinishAttack::_op_assign_8(CFinishAttack* pThis, const CFinishAttack& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalCharge::~CFinalCharge()
{
}

void CFinalCharge::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalCharge::CFinalCharge(const CFinalCharge& arg0)
{
    _ctor_1(arg0);
}

void CFinalCharge::_ctor_1(const CFinalCharge& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalCharge::CFinalCharge(long scancode, int32_t bLeft): KeySequenceElement(scancode, 0, true)
{
    m_bLeft = bLeft;
}

void CFinalCharge::_ctor_0(long scancode, int32_t bLeft)
{
    return __sub_002DE610(this, nullptr, scancode, bLeft);
}

int32_t CFinalCharge::DoAction(int32_t bNoReserve)
{
    return __sub_002E0200(this, nullptr, bNoReserve);
}

int32_t CFinalCharge::CheckPreOrderSkill(long nPreSkillID)
{
    return __sub_002DE640(this, nullptr, nPreSkillID);
}

unsigned long CFinalCharge::GetValidDuration()
{
    return __sub_002DE650(this, nullptr);
}

CFinalCharge& CFinalCharge::operator=(const CFinalCharge& arg0)
{
    return _op_assign_6(this, arg0);
}

CFinalCharge& CFinalCharge::_op_assign_6(CFinalCharge* pThis, const CFinalCharge& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTripleAttack::~CTripleAttack()
{
}

void CTripleAttack::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTripleAttack::CTripleAttack(const CTripleAttack& arg0)
{
    _ctor_1(arg0);
}

void CTripleAttack::_ctor_1(const CTripleAttack& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTripleAttack::CTripleAttack(long scancode): KeySequenceElement(scancode, 660, true)
{
}

void CTripleAttack::_ctor_0(long scancode)
{
    return __sub_002DE590(this, nullptr, scancode);
}

int32_t CTripleAttack::DoAction(int32_t bNoReserve)
{
    return __sub_002E0050(this, nullptr, bNoReserve);
}

long CTripleAttack::GetSkillID(int32_t bDummy)
{
    return __sub_002DE5B0(this, nullptr, bDummy);
}

int32_t CTripleAttack::CheckPreOrderSkill(long nPreSkillID)
{
    return __sub_002DE5E0(this, nullptr, nPreSkillID);
}

CTripleAttack& CTripleAttack::operator=(const CTripleAttack& arg0)
{
    return _op_assign_6(this, arg0);
}

CTripleAttack& CTripleAttack::_op_assign_6(CTripleAttack* pThis, const CTripleAttack& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDoubleAttack::~CDoubleAttack()
{
}

void CDoubleAttack::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDoubleAttack::CDoubleAttack(const CDoubleAttack& arg0)
{
    _ctor_1(arg0);
}

void CDoubleAttack::_ctor_1(const CDoubleAttack& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDoubleAttack::CDoubleAttack(long scancode): KeySequenceElement(scancode, 420, true)
{
}

void CDoubleAttack::_ctor_0(long scancode)
{
    return __sub_002DE530(this, nullptr, scancode);
}

int32_t CDoubleAttack::DoAction(int32_t bNoReserve)
{
    return __sub_002DFEF0(this, nullptr, bNoReserve);
}

long CDoubleAttack::GetSkillID(int32_t bDummy)
{
    return __sub_002DE560(this, nullptr, bDummy);
}

int32_t CDoubleAttack::CheckPreOrderSkill(long nPreSkillID)
{
    return __sub_002DE550(this, nullptr, nPreSkillID);
}

CDoubleAttack& CDoubleAttack::operator=(const CDoubleAttack& arg0)
{
    return _op_assign_6(this, arg0);
}

CDoubleAttack& CDoubleAttack::_op_assign_6(CDoubleAttack* pThis, const CDoubleAttack& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDashTrigger::~CDashTrigger()
{
}

void CDashTrigger::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDashTrigger::CDashTrigger(const CDashTrigger& arg0)
{
    _ctor_1(arg0);
}

void CDashTrigger::_ctor_1(const CDashTrigger& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDashTrigger::CDashTrigger(long arg0): KeySequenceElement(arg0, 0, true)
{
}

void CDashTrigger::_ctor_0(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CDashTrigger::DoAction(int32_t bNoReserve)
{
    return __sub_002DF5F0(this, nullptr, bNoReserve);
}

CDashTrigger& CDashTrigger::operator=(const CDashTrigger& arg0)
{
    return _op_assign_4(this, arg0);
}

CDashTrigger& CDashTrigger::_op_assign_4(CDashTrigger* pThis, const CDashTrigger& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CComboSmash::~CComboSmash()
{
}

void CComboSmash::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CComboSmash::CComboSmash(const CComboSmash& arg0)
{
    _ctor_1(arg0);
}

void CComboSmash::_ctor_1(const CComboSmash& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CComboSmash::CComboSmash(long arg0, int32_t arg1): KeySequenceElementIgnoreUp(arg0, 0, true)
{
    m_bLeft = arg1;
}

void CComboSmash::_ctor_0(long arg0, int32_t arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CComboSmash::DoAction(int32_t bNoReserve)
{
    return __sub_002E08D0(this, nullptr, bNoReserve);
}

CComboSmash& CComboSmash::operator=(const CComboSmash& arg0)
{
    return _op_assign_4(this, arg0);
}

CComboSmash& CComboSmash::_op_assign_4(CComboSmash* pThis, const CComboSmash& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CComboDrain::~CComboDrain()
{
}

void CComboDrain::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CComboDrain::CComboDrain(const CComboDrain& arg0)
{
    _ctor_1(arg0);
}

void CComboDrain::_ctor_1(const CComboDrain& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CComboDrain::CComboDrain(long arg0): KeySequenceElementIgnoreUp(arg0, 0, true)
{
}

void CComboDrain::_ctor_0(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CComboDrain::DoAction(int32_t bNoReserve)
{
    return __sub_002E0B00(this, nullptr, bNoReserve);
}

CComboDrain& CComboDrain::operator=(const CComboDrain& arg0)
{
    return _op_assign_4(this, arg0);
}

CComboDrain& CComboDrain::_op_assign_4(CComboDrain* pThis, const CComboDrain& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWhirlWind::~CWhirlWind()
{
}

void CWhirlWind::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWhirlWind::CWhirlWind(const CWhirlWind& arg0)
{
    _ctor_1(arg0);
}

void CWhirlWind::_ctor_1(const CWhirlWind& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWhirlWind::CWhirlWind(long arg0): KeySequenceElementIgnoreUp(arg0, 0, false)
{
}

void CWhirlWind::_ctor_0(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWhirlWind::DoAction(int32_t bNoReserve)
{
    return __sub_002E0780(this, nullptr, bNoReserve);
}

CWhirlWind& CWhirlWind::operator=(const CWhirlWind& arg0)
{
    return _op_assign_4(this, arg0);
}

CWhirlWind& CWhirlWind::_op_assign_4(CWhirlWind* pThis, const CWhirlWind& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMassacre::~CMassacre()
{
}

void CMassacre::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMassacre::CMassacre(const CMassacre& arg0)
{
    _ctor_1(arg0);
}

void CMassacre::_ctor_1(const CMassacre& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMassacre::CMassacre(long arg0): KeySequenceElementIgnoreUp(arg0, 0, true)
{
}

void CMassacre::_ctor_0(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMassacre::DoAction(int32_t bNoReserve)
{
    return __sub_002E0E70(this, nullptr, bNoReserve);
}

CMassacre& CMassacre::operator=(const CMassacre& arg0)
{
    return _op_assign_4(this, arg0);
}

CMassacre& CMassacre::_op_assign_4(CMassacre* pThis, const CMassacre& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
