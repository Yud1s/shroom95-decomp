// Quest.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

class ItemInfo;
// Level: 0 0xf26e
struct ActSP;
// Level: 0 0xf22f
struct ActSkill;
// Level: 1 0xf21a
class CQuest;

struct QUEST_CONDITION
{
	// Nested
	// Fields
public:
	long nQuestID{};

public:
	long nQuestState{};
	// Methods
public:
	QUEST_CONDITION() = default;
	QUEST_CONDITION(long arg0, long arg1)
	{
		nQuestID = arg0;
		nQuestState = arg1;
	}
};
STATIC_ASSERT_SIZE(QUEST_CONDITION, 8);

struct ActSP
{
	// Nested
	// Fields
public:
	long nSP{};

public:
	ZArray<long> aJob;
	// Methods
public:
	~ActSP();

public:
	void _dtor_0();

public:
	ActSP(const ActSP &arg0);

public:
	void _ctor_1( const ActSP &arg0);

public:
	ActSP();

public:
	void _ctor_0();

public:
	ActSP &operator=(const ActSP &arg0);

public:
	static ActSP &_op_assign_3(ActSP *pThis, const ActSP &arg0);
};
STATIC_ASSERT_SIZE(ActSP, 8);
struct ActSkill
{
	// Nested
	// Fields
public:
	long nSkillID{};

public:
	long nSkillLevel{};

public:
	long nMasterLevel{};

public:
	int32_t bOnlyMasterLevel{};

public:
	ZArray<long> aJob;
	// Methods
public:
	~ActSkill();

public:
	void _dtor_0();

public:
	ActSkill(const ActSkill &arg0);

public:
	void _ctor_1( const ActSkill &arg0);

public:
	ActSkill();

public:
	void _ctor_0();

public:
	ActSkill &operator=(const ActSkill &arg0);

public:
	static ActSkill &_op_assign_3(ActSkill *pThis, const ActSkill &arg0);
};
STATIC_ASSERT_SIZE(ActSkill, 20);
class CQuest : public ZRefCounted
{
	// Nested
	// Fields
protected:
	uint16_t m_usQuestID{};

protected:
	unsigned long m_dwNpcTemplateID{};

protected:
	long m_nState{};

protected:
	_x_com_ptr<IWzProperty> m_pSayProp;

protected:
	ZArray<ItemInfo> m_aBaseReward;

protected:
	ZArray<ItemInfo> m_aRandomReward;

protected:
	ZArray<ItemInfo> m_aSelectReward;

protected:
	ZArray<ActSkill> m_aSkill;

protected:
	ZArray<ActSP> m_aSP;
	// Methods
public:
	virtual ~CQuest();

public:
	void _dtor_0();

public:
	CQuest(const CQuest &arg0);

public:
	void _ctor_1( const CQuest &arg0);

public:
	CQuest(uint16_t usQuestID, unsigned long dwNpcTemplateID);

public:
	void _ctor_0( uint16_t usQuestID, unsigned long dwNpcTemplateID);

public:
	void StartQuest(int32_t bAutoStart);

protected:
	void LoadSay(_x_com_ptr<IWzProperty> pSayProp, ZArray<ZXString<char>> &aSay);

protected:
	void LoadReward();

protected:
	void OnQuestRefuse();

protected:
	int32_t SayNormal(ZArray<ZXString<char>> &aSay);

protected:
	int32_t AskQuestion(ZArray<ZXString<char>> &arg0);

protected:
	long ShowRewardList(ZArray<ZXString<char>> &aSay);

protected:
	void OnCompleteQuestFailed(long arg0);

public:
	CQuest &operator=(const CQuest &arg0);

public:
	static CQuest &_op_assign_11(CQuest *pThis, const CQuest &arg0);
};
STATIC_ASSERT_SIZE(CQuest, 48);
