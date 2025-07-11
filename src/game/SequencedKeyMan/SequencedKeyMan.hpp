// SequencedKeyMan.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 0 0xf8b8
struct KeySequence;
// Level: 1 0xee0f
class CSequencedKeyMan;
// Level: 1 0xede9
struct KeySequenceElement;
// Level: 2 0x20a09
class CCombatStepTrigger;
// Level: 2 0x209bc
class CFinalBlow;
// Level: 2 0x209cd
class CFinalToss;
// Level: 2 0xedf8
struct KeySequenceElementIgnoreUp;
// Level: 2 0x20a2b
class CFinishAttack;
// Level: 2 0x209ab
class CFinalCharge;
// Level: 2 0x2099a
class CTripleAttack;
// Level: 2 0x20989
class CDoubleAttack;
// Level: 2 0x20978
class CDashTrigger;
// Level: 3 0x209eb
class CComboSmash;
// Level: 3 0x209fa
class CComboDrain;
// Level: 3 0x209dc
class CWhirlWind;
// Level: 3 0x20a18
class CMassacre;

struct ActiveCandidateEntity
{
	// Nested
	// Fields
public:
	long nSequenceID{};

public:
	long nCurrentIndex{};

public:
	unsigned long dwStartTick{};

public:
	unsigned long dwAccumulatedExpire{};
	// Methods
};
STATIC_ASSERT_SIZE(ActiveCandidateEntity, 16);

struct KeySequence
{
	// Nested
	// Fields
public:
	ZArray<ZRef<KeySequenceElement>> m_apSequence;

public:
	ZArray<long> m_anNextSequenceID;
	// Methods
public:
	~KeySequence();

public:
	void _dtor_0();

public:
	KeySequence(const KeySequence &arg0);

public:
	void _ctor_1(const KeySequence &arg0);

public:
	KeySequence();

public:
	void _ctor_0();

public:
	KeySequence &operator=(const KeySequence &arg0);

public:
	static KeySequence &_op_assign_3(KeySequence *pThis, const KeySequence &arg0);


	void AddElem(KeySequenceElement* seq);
};
STATIC_ASSERT_SIZE(KeySequence, 8);
class CSequencedKeyMan : public TSingleton<CSequencedKeyMan>
{
	// Nested
	// Fields
private:
	ZMap<unsigned long, KeySequence, unsigned long> m_mSequence;

private:
	ZArray<long> m_aCandidatePool;

private:
	ZList<ActiveCandidateEntity> m_lActiveCandidate;

private:
	ZList<ZRef<KeySequenceElement>> m_lpReservedAction;

private:
	long m_nLastScancode{};

private:
	int32_t m_bLastDown{};
	// Methods
public:
	virtual ~CSequencedKeyMan();

public:
	void _dtor_0();

public:
	CSequencedKeyMan(const CSequencedKeyMan &arg0);

public:
	void _ctor_1(const CSequencedKeyMan &arg0);

public:
	CSequencedKeyMan();

public:
	void _ctor_0();

public:
	void Clear();

public:
	void Restore();

public:
	int32_t Process(long nScancode, int32_t bDown);

public:
	void ReserveAction(ZRef<KeySequenceElement> pAction, int32_t bForcedReserve);

public:
	long GetReservedCount();

public:
	void Update();

public:
	CSequencedKeyMan &operator=(const CSequencedKeyMan &arg0);

public:
	static CSequencedKeyMan &_op_assign_9(CSequencedKeyMan *pThis, const CSequencedKeyMan &arg0);
};
STATIC_ASSERT_SIZE(CSequencedKeyMan, 80);
struct KeySequenceElement : public ZRefCounted
{
	// Nested
	// Fields
public:
	long nScancode{};

public:
	int32_t bDown{};

public:
	long tExpire{};

private:
	unsigned long dwStartTick{};
	// Methods
public:
	KeySequenceElement()
	{
	}
	virtual ~KeySequenceElement();

public:
	void _dtor_0();

public:
	KeySequenceElement(const KeySequenceElement &arg0);

public:
	void _ctor_1(const KeySequenceElement &arg0);

public:
	KeySequenceElement(long scancode, long expire, int32_t down);

public:
	void _ctor_0(long scancode, long expire, int32_t down);

public:
	virtual int32_t Check(long scancode, int32_t down);

public:
	virtual int32_t DoAction(int32_t bNoReserve);

public:
	virtual int32_t NeedIgnore(long scancode, int32_t down);

public:
	virtual long GetSkillID(int32_t bDummy);

public:
	virtual int32_t CheckPreOrderSkill(long nPreSkillID);

public:
	unsigned long GetCreatedTime();

public:
	virtual unsigned long GetValidDuration();

public:
	KeySequenceElement &operator=(const KeySequenceElement &arg0);

public:
	static KeySequenceElement &_op_assign_10(KeySequenceElement *pThis, const KeySequenceElement &arg0);
};
STATIC_ASSERT_SIZE(KeySequenceElement, 28);
class CCombatStepTrigger : public KeySequenceElement
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CCombatStepTrigger();

public:
	void _dtor_0();

public:
	CCombatStepTrigger(const CCombatStepTrigger &arg0);

public:
	void _ctor_1(const CCombatStepTrigger &arg0);

public:
	CCombatStepTrigger(long arg0);

public:
	void _ctor_0(long arg0);

public:
	virtual int32_t DoAction(int32_t bNoReserve);

public:
	CCombatStepTrigger &operator=(const CCombatStepTrigger &arg0);

public:
	static CCombatStepTrigger &_op_assign_4(CCombatStepTrigger *pThis, const CCombatStepTrigger &arg0);
};
STATIC_ASSERT_SIZE(CCombatStepTrigger, 28);
class CFinalBlow : public KeySequenceElement
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CFinalBlow();

public:
	void _dtor_0();

public:
	CFinalBlow(const CFinalBlow &arg0);

public:
	void _ctor_1(const CFinalBlow &arg0);

public:
	CFinalBlow(long scancode);

public:
	void _ctor_0(long scancode);

public:
	virtual int32_t DoAction(int32_t bNoReserve);

public:
	virtual int32_t CheckPreOrderSkill(long nPreSkillID);

public:
	virtual unsigned long GetValidDuration();

public:
	CFinalBlow &operator=(const CFinalBlow &arg0);

public:
	static CFinalBlow &_op_assign_6(CFinalBlow *pThis, const CFinalBlow &arg0);
};
STATIC_ASSERT_SIZE(CFinalBlow, 28);
class CFinalToss : public KeySequenceElement
{
	// Nested
	// Fields
protected:
	long m_nSkillID{};
	// Methods
public:
	virtual ~CFinalToss();

public:
	void _dtor_0();

public:
	CFinalToss(const CFinalToss &arg0);

public:
	void _ctor_1(const CFinalToss &arg0);

public:
	CFinalToss(long scancode);

public:
	void _ctor_0(long scancode);

public:
	virtual int32_t DoAction(int32_t bNoReserve);

public:
	virtual int32_t CheckPreOrderSkill(long nPreSkillID);

public:
	virtual unsigned long GetValidDuration();

public:
	CFinalToss &operator=(const CFinalToss &arg0);

public:
	static CFinalToss &_op_assign_6(CFinalToss *pThis, const CFinalToss &arg0);
};
STATIC_ASSERT_SIZE(CFinalToss, 32);
struct KeySequenceElementIgnoreUp : public KeySequenceElement
{
	// Nested
	// Fields
	// Methods
public:
	KeySequenceElementIgnoreUp()
	{
	}
	virtual ~KeySequenceElementIgnoreUp();

public:
	void _dtor_0();

public:
	KeySequenceElementIgnoreUp(const KeySequenceElementIgnoreUp &arg0);

public:
	void _ctor_1(const KeySequenceElementIgnoreUp &arg0);

public:
	KeySequenceElementIgnoreUp(long arg0, long arg1, int32_t arg2);

public:
	void _ctor_0(long arg0, long arg1, int32_t arg2);

public:
	virtual int32_t NeedIgnore(long scancode, int32_t down);

public:
	KeySequenceElementIgnoreUp &operator=(const KeySequenceElementIgnoreUp &arg0);

public:
	static KeySequenceElementIgnoreUp &_op_assign_4(KeySequenceElementIgnoreUp *pThis, const KeySequenceElementIgnoreUp &arg0);
};
STATIC_ASSERT_SIZE(KeySequenceElementIgnoreUp, 28);
class CFinishAttack : public KeySequenceElement
{
	// Nested
	// Fields
public:
	long m_nAction{};
	// Methods
public:
	virtual ~CFinishAttack();

public:
	void _dtor_0();

public:
	CFinishAttack(const CFinishAttack &arg0);

public:
	void _ctor_1(const CFinishAttack &arg0);

public:
	CFinishAttack(long scancode, long nAction);

public:
	void _ctor_0(long scancode, long nAction);

public:
	virtual int32_t DoAction(int32_t bNoReserve);

public:
	virtual long GetSkillID(int32_t bDummy);

public:
	long GetDummySkillID();

public:
	virtual int32_t CheckPreOrderSkill(long nPreSkillID);

public:
	virtual unsigned long GetValidDuration();

public:
	CFinishAttack &operator=(const CFinishAttack &arg0);

public:
	static CFinishAttack &_op_assign_8(CFinishAttack *pThis, const CFinishAttack &arg0);
};
STATIC_ASSERT_SIZE(CFinishAttack, 32);
class CFinalCharge : public KeySequenceElement
{
	// Nested
	// Fields
public:
	int32_t m_bLeft{};
	// Methods
public:
	virtual ~CFinalCharge();

public:
	void _dtor_0();

public:
	CFinalCharge(const CFinalCharge &arg0);

public:
	void _ctor_1(const CFinalCharge &arg0);

public:
	CFinalCharge(long scancode, int32_t bLeft);

public:
	void _ctor_0(long scancode, int32_t bLeft);

public:
	virtual int32_t DoAction(int32_t bNoReserve);

public:
	virtual int32_t CheckPreOrderSkill(long nPreSkillID);

public:
	virtual unsigned long GetValidDuration();

public:
	CFinalCharge &operator=(const CFinalCharge &arg0);

public:
	static CFinalCharge &_op_assign_6(CFinalCharge *pThis, const CFinalCharge &arg0);
};
STATIC_ASSERT_SIZE(CFinalCharge, 32);
class CTripleAttack : public KeySequenceElement
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CTripleAttack();

public:
	void _dtor_0();

public:
	CTripleAttack(const CTripleAttack &arg0);

public:
	void _ctor_1(const CTripleAttack &arg0);

public:
	CTripleAttack(long scancode);

public:
	void _ctor_0(long scancode);

public:
	virtual int32_t DoAction(int32_t bNoReserve);

public:
	virtual long GetSkillID(int32_t bDummy);

public:
	virtual int32_t CheckPreOrderSkill(long nPreSkillID);

public:
	CTripleAttack &operator=(const CTripleAttack &arg0);

public:
	static CTripleAttack &_op_assign_6(CTripleAttack *pThis, const CTripleAttack &arg0);
};
STATIC_ASSERT_SIZE(CTripleAttack, 28);
class CDoubleAttack : public KeySequenceElement
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CDoubleAttack();

public:
	void _dtor_0();

public:
	CDoubleAttack(const CDoubleAttack &arg0);

public:
	void _ctor_1(const CDoubleAttack &arg0);

public:
	CDoubleAttack(long scancode);

public:
	void _ctor_0(long scancode);

public:
	virtual int32_t DoAction(int32_t bNoReserve);

public:
	virtual long GetSkillID(int32_t bDummy);

public:
	virtual int32_t CheckPreOrderSkill(long nPreSkillID);

public:
	CDoubleAttack &operator=(const CDoubleAttack &arg0);

public:
	static CDoubleAttack &_op_assign_6(CDoubleAttack *pThis, const CDoubleAttack &arg0);
};
STATIC_ASSERT_SIZE(CDoubleAttack, 28);
class CDashTrigger : public KeySequenceElement
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CDashTrigger();

public:
	void _dtor_0();

public:
	CDashTrigger(const CDashTrigger &arg0);

public:
	void _ctor_1(const CDashTrigger &arg0);

public:
	CDashTrigger(long arg0);

public:
	void _ctor_0(long arg0);

public:
	virtual int32_t DoAction(int32_t bNoReserve);

public:
	CDashTrigger &operator=(const CDashTrigger &arg0);

public:
	static CDashTrigger &_op_assign_4(CDashTrigger *pThis, const CDashTrigger &arg0);
};
STATIC_ASSERT_SIZE(CDashTrigger, 28);
class CComboSmash : public KeySequenceElementIgnoreUp
{
	// Nested
	// Fields
public:
	int32_t m_bLeft{};
	// Methods
public:
	virtual ~CComboSmash();

public:
	void _dtor_0();

public:
	CComboSmash(const CComboSmash &arg0);

public:
	void _ctor_1(const CComboSmash &arg0);

public:
	CComboSmash(long arg0, int32_t arg1);

public:
	void _ctor_0(long arg0, int32_t arg1);

public:
	virtual int32_t DoAction(int32_t bNoReserve);

public:
	CComboSmash &operator=(const CComboSmash &arg0);

public:
	static CComboSmash &_op_assign_4(CComboSmash *pThis, const CComboSmash &arg0);
};
STATIC_ASSERT_SIZE(CComboSmash, 32);
class CComboDrain : public KeySequenceElementIgnoreUp
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CComboDrain();

public:
	void _dtor_0();

public:
	CComboDrain(const CComboDrain &arg0);

public:
	void _ctor_1(const CComboDrain &arg0);

public:
	CComboDrain(long arg0);

public:
	void _ctor_0(long arg0);

public:
	virtual int32_t DoAction(int32_t bNoReserve);

public:
	CComboDrain &operator=(const CComboDrain &arg0);

public:
	static CComboDrain &_op_assign_4(CComboDrain *pThis, const CComboDrain &arg0);
};
STATIC_ASSERT_SIZE(CComboDrain, 28);
class CWhirlWind : public KeySequenceElementIgnoreUp
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CWhirlWind();

public:
	void _dtor_0();

public:
	CWhirlWind(const CWhirlWind &arg0);

public:
	void _ctor_1(const CWhirlWind &arg0);

public:
	CWhirlWind(long arg0);

public:
	void _ctor_0(long arg0);

public:
	virtual int32_t DoAction(int32_t bNoReserve);

public:
	CWhirlWind &operator=(const CWhirlWind &arg0);

public:
	static CWhirlWind &_op_assign_4(CWhirlWind *pThis, const CWhirlWind &arg0);
};
STATIC_ASSERT_SIZE(CWhirlWind, 28);
class CMassacre : public KeySequenceElementIgnoreUp
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CMassacre();

public:
	void _dtor_0();

public:
	CMassacre(const CMassacre &arg0);

public:
	void _ctor_1(const CMassacre &arg0);

public:
	CMassacre(long arg0);

public:
	void _ctor_0(long arg0);

public:
	virtual int32_t DoAction(int32_t bNoReserve);

public:
	CMassacre &operator=(const CMassacre &arg0);

public:
	static CMassacre &_op_assign_4(CMassacre *pThis, const CMassacre &arg0);
};
STATIC_ASSERT_SIZE(CMassacre, 28);
