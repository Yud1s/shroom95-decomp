// PartyQuestInfo.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 0 0x131c5
struct PartyQuestInfo;
// Level: 1 0x12df3
class CPartyQuestInfoManager;

struct PartyQuestInfo
{
	// Nested
public:
	enum PERIOD_MIN_DEFAULT
	{
		PERIOD_MIN_DEFAULT = 5
	};
	// Fields
public:
	long nPartyQuestID{};

public:
	ZXString<char> sName;

public:
	ZXString<char> sMark;

public:
	long nMinLevel{};

public:
	long nMaxLevel{};

public:
	long nCount{};

public:
	long nPrice{};

public:
	long nPeriodMin{};

public:
	long nUserCount{};

public:
	ZList<ZXString<char>> asTitle;
	// Methods
public:
	~PartyQuestInfo();

public:
	void _dtor_0();

public:
	PartyQuestInfo(const PartyQuestInfo &arg0);

public:
	void _ctor_1(const PartyQuestInfo &arg0);

public:
	PartyQuestInfo();

public:
	void _ctor_0();

public:
	void LoadData(_x_com_ptr<IWzProperty> prop);

public:
	int32_t IsPartyQuest();

public:
	int32_t IsExpeditionQuest();

public:
	int32_t HasTitle(ZXString<char> arg0);

public:
	int32_t IsAllowedLevel(long arg0, long arg1);

public:
	PartyQuestInfo &operator=(const PartyQuestInfo &arg0);

public:
	static PartyQuestInfo &_op_assign_8(PartyQuestInfo *pThis, const PartyQuestInfo &arg0);
};
STATIC_ASSERT_SIZE(PartyQuestInfo, 56);
class CPartyQuestInfoManager : public TSingleton<CPartyQuestInfoManager>
{
	// Nested
public:
	enum UnnamedEnum77274
	{
		PARTY_QUEST_START = 1000,
		EXPEDITION_QUEST_START = 2000
	};
	// Fields
private:
	ZMap<long, ZRef<PartyQuestInfo>, long> m_mapPartyQuest;

private:
	ZList<ZRef<PartyQuestInfo>> m_listPartyQuest;
	// Methods
public:
	~CPartyQuestInfoManager();

public:
	void _dtor_0();

public:
	CPartyQuestInfoManager(const CPartyQuestInfoManager &arg0);

public:
	void _ctor_1(const CPartyQuestInfoManager &arg0);

public:
	CPartyQuestInfoManager();

public:
	void _ctor_0();

public:
	int32_t Load();

public:
	const ZRef<PartyQuestInfo> Get(long nPartyQuestID);

public:
	const ZRef<PartyQuestInfo> GetByName(ZXString<char> sPartyQuestName);

public:
	const ZList<ZRef<PartyQuestInfo>> &GetAllPartyQuestInfo();

public:
	static int32_t __cdecl IsPartyQuestID(long nID);

public:
	static int32_t __cdecl IsExpeditionQuestID(long nID);

public:
	CPartyQuestInfoManager &operator=(const CPartyQuestInfoManager &arg0);

public:
	static CPartyQuestInfoManager &_op_assign_9(CPartyQuestInfoManager *pThis, const CPartyQuestInfoManager &arg0);
};
STATIC_ASSERT_SIZE(CPartyQuestInfoManager, 44);

int32_t __cdecl LoadData(ZXString<char> sUOL, ZMap<long, ZRef<PartyQuestInfo>, long> &targetMap, ZList<ZRef<PartyQuestInfo>> &targetList, long nStartID);
void __cdecl AddToListByMinLevel(ZList<ZRef<PartyQuestInfo>> &targetList, ZRef<PartyQuestInfo> pInfo);
