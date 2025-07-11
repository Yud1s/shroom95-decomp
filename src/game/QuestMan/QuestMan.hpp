// QuestMan.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "GW/GW.hpp"
#include "Stat/Stat.hpp"
#include "Packet/Packet.hpp"
#include "DBBasic/DBBasic.hpp"

struct QuestRecord
{ /* Size=0x8 */
	/* 0x0000 */ public:
	uint16_t usQuestID{};
	/* 0x0004 */ public:
	int32_t nState{};
};

struct MobInfo
{
	// Nested
	// Fields
public:
	unsigned long dwMobID{};

public:
	long nCount{};
	// Methods
};
STATIC_ASSERT_SIZE(MobInfo, 8);

struct MBCardInfo
{
	// Nested
	// Fields
public:
	long nID{};

public:
	long nMin{};

public:
	long nMax{};
	// Methods
};
STATIC_ASSERT_SIZE(MBCardInfo, 12);

struct TimeKeepInfo
{
	// Nested
	// Fields
public:
	ZXString<char> sFieldSet;

public:
	long tKeepTime{};
};
STATIC_ASSERT_SIZE(TimeKeepInfo, 8);

// Level: 0 0xdf75
struct QuestDemand;
// Level: 0 0xe407
struct GradeEntity;
// Level: 1 0xdf59
class CQuestMan;

struct QuestDemand
{
	// Nested
	// Fields
public:
	long nWorldMin{};

public:
	long nWorldMax{};

public:
	long nTamingMobLevelMin{};

public:
	long nTamingMobLevelMax{};

public:
	long nPetTamenessMin{};

public:
	long nPetTamenessMax{};

public:
	unsigned long dwNpcTemplateID{};

public:
	unsigned long dwLevelMin{};

public:
	unsigned long dwLevelMax{};

public:
	unsigned long dwPop{};

public:
	unsigned long dwUserInteract{};

public:
	unsigned long dwFakeQuestID{};

public:
	long nRepeatInterval{};

public:
	unsigned long nEndMeso{};

public:
	_FILETIME ftStart{};

public:
	_FILETIME ftEnd{};

public:
	ZList<long> lDayOfWeek;

public:
	ZArray<ZXString<char>> aInfo;

public:
	ZArray<long> aInfoCond;

public:
	unsigned long nInfoNumber{};

public:
	ZArray<long> aJob;

public:
	unsigned long dwSubJobFlags{};

public:
	ZArray<QuestRecord> aPrecedeQuest;

public:
	ZArray<ItemInfo> aDemandItem;

public:
	ZArray<MobInfo> aDemandMob;

public:
	ZArray<SkillInfo> aDemandSkill;

public:
	ZMap<long, int, long> mDemandPet;

public:
	ZXString<char> sStartScript;

public:
	ZXString<char> sEndScript;

public:
	ZArray<long> aEquipAllNeed;

public:
	ZArray<long> aEquipSelectNeed;

public:
	ZArray<long> aFieldEnter;

public:
	int32_t bRepeatDayByDay{};

public:
	int32_t bRepeatWeekly{};

public:
	long nMonsterBookMin{};

public:
	long nMonsterBookMax{};

public:
	ZArray<MBCardInfo> aDemandMBCard;

public:
	int32_t bPetRecallLimit{};

public:
	int32_t bPetAutoSpeakingLimit{};

public:
	unsigned long dwDayOfWeek{};

public:
	long nMorphTemplateID{};

public:
	ZArray<long> aBuffItemID;

public:
	ZArray<long> aExceptBuffItemID;

public:
	int32_t bPremium{};

public:
	long nPartyQuest_S{};

public:
	long nPopularity{};

public:
	long nQuestComplete{};

public:
	long nLevel{};

public:
	ZRef<TimeKeepInfo> pTimeKeepInfo;
	// Methods
public:
	~QuestDemand();

public:
	void _dtor_0();

public:
	QuestDemand(const QuestDemand &arg0);

public:
	void _ctor_1(const QuestDemand &arg0);

public:
	QuestDemand();

public:
	void _ctor_0();

public:
	QuestDemand &operator=(const QuestDemand &arg0);

public:
	static QuestDemand &_op_assign_3(QuestDemand *pThis, const QuestDemand &arg0);
};
STATIC_ASSERT_SIZE(QuestDemand, 244);
struct GradeEntity
{
	// Nested
	// Fields
public:
	ZXString<char> sName;

public:
	ZMap<ZXString<char>, long, ZXString<char>> more;

public:
	ZMap<ZXString<char>, long, ZXString<char>> less;

public:
	ZMap<ZXString<char>, ZXString<char>, ZXString<char>> equal;
	// Methods
public:
	~GradeEntity();

public:
	void _dtor_0();

public:
	GradeEntity(const GradeEntity &__that);

public:
	void _ctor_1(const GradeEntity &__that);

public:
	GradeEntity();

public:
	void _ctor_0();

public:
	GradeEntity &operator=(const GradeEntity &arg0);

public:
	static GradeEntity &_op_assign_3(GradeEntity *pThis, const GradeEntity &arg0);
};
STATIC_ASSERT_SIZE(GradeEntity, 76);
class CQuestMan : public TSingleton<CQuestMan>
{
	// Nested
public:
	struct Rank
	{
		// Nested
		// Fields
	public:
		long nMinLevel{};

	public:
		long nMaxLevel{};

	public:
		ZArray<GradeEntity> aGradeEntity;
		// Methods
	public:
		~Rank();

	public:
		void _dtor_0();

	public:
		Rank(const CQuestMan::Rank &arg0);

	public:
		void _ctor_1(const CQuestMan::Rank &arg0);

	public:
		Rank();

	public:
		void _ctor_0();

	public:
		CQuestMan::Rank &operator=(const CQuestMan::Rank &arg0);

	public:
		static CQuestMan::Rank &_op_assign_3(CQuestMan::Rank *pThis, const CQuestMan::Rank &arg0);
	};

public:
	struct RankString
	{
		// Nested
		// Fields
	public:
		ZXString<char> sS;

	public:
		ZXString<char> sA;

	public:
		ZXString<char> sB;

	public:
		ZXString<char> sC;

	public:
		ZXString<char> sD;

	public:
		ZXString<char> sF;
		// Methods
	public:
		~RankString();

	public:
		void _dtor_0();

	public:
		RankString(const CQuestMan::RankString &arg0);

	public:
		void _ctor_1(const CQuestMan::RankString &arg0);

	public:
		RankString();

	public:
		void _ctor_0();

	public:
		CQuestMan::RankString &operator=(const CQuestMan::RankString &__that);

	public:
		static CQuestMan::RankString &_op_assign_3(CQuestMan::RankString *pThis, const CQuestMan::RankString &__that);
	};
	// Fields
public:
	ZMap<ZXString<char>, ZArray<unsigned short>, ZXString<char>> m_mSeriesQuest;

public:
	ZMap<unsigned short, ZXString<char>, unsigned short> m_mSeriesQuestName;

public:
	ZMap<unsigned short, ZXString<char>, unsigned short> m_mQuestName;

public:
	ZMap<unsigned short, int, unsigned short> m_mBlockedQuest;

protected:
	long m_nWorldID{};

protected:
	ZMap<unsigned short, ZRef<QuestDemand>, unsigned short> m_mStartDemand;

protected:
	ZMap<unsigned short, ZRef<QuestDemand>, unsigned short> m_mCompleteDemand;

protected:
	ZArray<unsigned short> m_aDisallowedDelivery;

protected:
	ZArray<ZXString<char>> m_asQuestCategoryName;

protected:
	ZArray<unsigned short> m_aQuest;

protected:
	ZMap<unsigned long, ZArray<unsigned short>, unsigned long> m_mNpcQuest;

protected:
	ZMap<long, ZArray<unsigned short>, long> m_mItemQuest;

protected:
	ZMap<long, ZArray<unsigned short>, long> m_mItemQuestDemand;

protected:
	ZArray<unsigned short> m_aMesoQuest;

protected:
	ZArray<unsigned short> m_aLevelQuest;

protected:
	ZMap<unsigned short, ZXString<char>, unsigned short> m_mPartyQuestIconPath;

protected:
	ZMap<unsigned short, long, unsigned short> m_mQuestSortKey;

protected:
	ZMap<ZXString<char>, unsigned short, ZXString<char>> m_mShowLayerTag;

protected:
	ZMap<unsigned short, ZXString<char>, unsigned short> m_mShowEffect;

protected:
	ZArray<MODQUESTTIME> m_aModifiedQuestTime;

protected:
	ZMap<unsigned short, ZArray<unsigned short>, unsigned short> m_mExclusive;

private:
	ZMap<unsigned short, int, unsigned short> m_mAutoStartQuest;

private:
	ZMap<unsigned short, int, unsigned short> m_mAutoAcceptQuest;

private:
	ZMap<unsigned short, int, unsigned short> m_mAutoCompleteQuest;

private:
	ZMap<unsigned short, int, unsigned short> m_mAutoCancelQuest;

private:
	ZMap<unsigned short, int, unsigned short> m_mOneShotQuest;

private:
	ZMap<unsigned short, long, unsigned short> m_mQuestTimeLimit;

private:
	ZMap<unsigned short, long, unsigned short> m_mQuestTimeLimit2;

private:
	ZMap<unsigned short, long, unsigned short> m_mQuestDailyPlay;

private:
	ZMap<long, ZArray<unsigned short>, long> m_mEquipOnAutoQuestStart;

private:
	ZMap<unsigned long, ZArray<unsigned short>, unsigned long> m_mFieldOnAutoQuestStart;

private:
	ZMap<long, int, long> m_mIsEquipAutoQuestStart;

private:
	ZMap<unsigned long, int, unsigned long> m_mIsFieldAutoQuestStart;

private:
	ZArray<unsigned short> m_aNormalAutoStartQuest;

private:
	ZList<unsigned short> m_lAutoCompletionAlertQuest;

private:
	ZList<unsigned short> m_lTimeKeepQuest;

private:
	ZMap<unsigned short, long, unsigned short> m_mQuestCategory;

private:
	ZList<unsigned short> m_lRecentlyUpdatedQuest;

private:
	uint16_t m_usRecentlyViewdQuest{};

private:
	ZMap<unsigned short, ZArray<CQuestMan::Rank>, unsigned short> m_mRankInfo;

private:
	ZMap<unsigned short, long, unsigned short> m_mQuestExpByLevel;

private:
	ZMap<unsigned short, long, unsigned short> m_mQuestPerformByDay;

private:
	ZMap<unsigned short, CQuestMan::RankString, unsigned short> m_mRankStringInfo;
	// Methods
public:
	virtual ~CQuestMan();

public:
	void _dtor_0();

public:
	CQuestMan(const CQuestMan &arg0);

public:
	void _ctor_1(const CQuestMan &arg0);

public:
	CQuestMan();

public:
	void _ctor_0();

public:
	int32_t LoadDemand();

public:
	QuestDemand *GetStartDemand(uint16_t usQuestID);

public:
	QuestDemand *GetCompleteDemand(uint16_t usQuestID);

public:
	int32_t CheckStartDemand(uint16_t usQuestId, unsigned long pStart, const CharacterData &st, const SecondaryStat &bIsEnable, long ftStart, long i, int32_t ft, long ftEnd);

public:
	long CheckCompleteDemand(uint16_t usQuestID, unsigned long dwNpcTemplateID, const CharacterData &cd, const SecondaryStat &ss);

public:
	void SetWorldID(long arg0);

public:
	void SetQuestClear();

public:
	void SetQuestTime(long nQuestID, _FILETIME ftStart, _FILETIME ftEnd);

public:
	int32_t IsStartScriptLinkedQuest(uint16_t usQuestID);

public:
	int32_t IsCompleteScriptLinkedQuest(uint16_t usQuestID);

public:
	int32_t IsAutoAlertQuest(uint16_t usQuestID);

public:
	int32_t IsAutoStartQuest(uint16_t usQuestID);

public:
	int32_t IsAutoAutoAcceptQuest(uint16_t usQuestID);

public:
	int32_t IsAutoCompleteQuest(uint16_t usQuestID);

public:
	int32_t IsAutoCancelQuest(uint16_t arg0);

public:
	int32_t IsAutoCompletionAlertQuest(uint16_t usQuestID);

public:
	int32_t IsOneShotQuest(uint16_t arg0);

public:
	int32_t IsTimeLimitQuest(uint16_t usQuestID);

public:
	int32_t IsTimeLimitQuest2(uint16_t usQuestID);

public:
	int32_t IsTimeKeepQuest(uint16_t arg0);

public:
	int32_t IsDailyPlayQuest(uint16_t usQuestID);

public:
	int32_t IsPartyQuest(uint16_t usQuestID);

public:
	int32_t IsEventQuest(uint16_t usQuestID);

public:
	int32_t IsMedalQuest(uint16_t usQuestID);

public:
	int32_t IsGuildSupplyQuest(uint16_t usQuestID);

public:
	int32_t IsEquipOnAutoStartQuest(long nItemID);

public:
	int32_t IsFieldOnAutoStartQuest(long nItemID);

public:
	int32_t IsAutoStartQuestOnLevelUp(uint16_t arg0);

public:
	uint16_t GetAutoStartQuestIDOnLevelUp();

public:
	ZMap<long, ZArray<unsigned short>, long> &GetAutoStartQuestOnEquip();

public:
	ZMap<unsigned long, ZArray<unsigned short>, unsigned long> &GetAutoStartQuestOnField();

public:
	long GetQuestCategory(uint16_t usQuestID);

public:
	long GetCompletedQuestCnt(const CharacterData &cd, int32_t bExcluseEvent);

public:
	void LoadPartyQuestInfo();

public:
	ZXString<char> GetPartyQuestRank(uint16_t arg0, CharacterData &arg1);

public:
	long GetPartyQuestRankCount(ZXString<char> &sRank, const CharacterData &cd);

public:
	void LoadExclusive();

public:
	int32_t CheckExclusive(uint16_t usQuestID, const CharacterData &cd);

public:
	int32_t IsDeliveryAcceptQuest(uint16_t usQuestID);

public:
	int32_t IsDeliveryCompleteQuest(uint16_t usQuestID);

public:
	int32_t IsDisallowedDeliveryQuest(uint16_t usQuestID);

public:
	int32_t GetQuestByNpc(unsigned long dwNpcTemplateID, ZArray<unsigned short> &aNpcQuest);

public:
	int32_t GetQuestByItem(long nItemID, ZArray<unsigned short> &aItemQuest);

public:
	int32_t GetQuestByItemDemand(long nItemID, ZArray<unsigned short> &aItemQuest);

public:
	int32_t GetQuestByMeso(ZArray<unsigned short> &aMesoQuest);

public:
	int32_t GetQuestByLevel(ZArray<unsigned short> &aLevelQuest);

public:
	ZArray<unsigned short> GetQuestArray();

public:
	long GetQuestCategoryCount();

public:
	ZXString<char> GetQuestCategoryName(long nIdx);

public:
	ZXString<char> GetPartyQuestRankString(uint16_t usQuestID, ZXString<char> sValue);

public:
	ZMap<unsigned short, int, unsigned short> &GetAutoStartQuest();

public:
	ZArray<unsigned short> GetNormalAutoStartQuest();

public:
	ZList<unsigned short> &GetAutoCompletionAlertQuest();

public:
	ZXString<char> GetPartyQuestIconPath(uint16_t usQuestID);

public:
	long GetQuestSortKey(uint16_t arg0);

public:
	long GetQuestDisplayMedal(uint16_t usQuestID);

public:
	uint16_t GetQuestIDByLayerTag(ZXString<char> arg0);

public:
	int32_t GetQuestStartingEffect(uint16_t arg0, ZXString<char> &arg1);

public:
	void DecodeDisallowedDeliveryList(CInPacket &iPacket);

public:
	void LoadQuestInfo();

public:
	ZXString<char> GetQuestName(uint16_t usQuestID);

public:
	ZArray<unsigned short> GetSeriesQuest(ZXString<char> sName);

public:
	ZXString<char> GetSeriesQuestName(uint16_t usQuestID);

public:
	long GetQuestTimeLimit(uint16_t usQuestID);

public:
	unsigned long GetQuestTimeLimit2(uint16_t usQuestID);

public:
	unsigned long GetQuestDailyPlayMinTime(uint16_t usQuestID);

public:
	ZList<unsigned short> GetTimeKeepQuestList();

public:
	long GetKeepTime(uint16_t usQuestID);

public:
	ZXString<char> GetKeepFieldSet(uint16_t arg0);

public:
	ZRef<TimeKeepInfo> GetTimeKeepInfo(uint16_t usQuestID);

protected:
	int32_t RegisterDemandItem(uint16_t usQuestID, long nQuestState, long nItemID, long nCount);

protected:
	int32_t RegisterDemand(uint16_t arg0, _x_com_ptr<IWzProperty> arg1);

public:
	void SetRecentlyUpdatedQuest(uint16_t usQuestID);

public:
	uint16_t GetRecentlyUpdatedQuest();

public:
	void RemoveRecentlyUpdatedQuest(uint16_t usQuestID);

public:
	void ClearRecentlyUpdatedQuest();

private:
	void LoadPartyQuestRank(uint16_t arg0, _x_com_ptr<IWzProperty> arg1);

private:
	void LoadPartyQuestRankString(uint16_t usQuestID, _x_com_ptr<IWzProperty> pRankString);

public:
	void LoadQuestExpByLevelInfo();

public:
	int32_t GetExpRateByLevel(uint16_t usQuestID, long &nReturnValue);

public:
	void LoadQuestPerformByDayInfo();

public:
	long GetQuestPerformCountByDay(uint16_t arg0);

public:
	CQuestMan &operator=(const CQuestMan &arg0);

public:
	static CQuestMan &_op_assign_85(CQuestMan *pThis, const CQuestMan &arg0);
};
STATIC_ASSERT_SIZE(CQuestMan, 844);

int32_t __cdecl _anon__CheckEquippedItemByIndex(GW_ItemSlotBase *pItem, long nItemID);
void __cdecl AddQuestList(ZArray<unsigned short> &aQuestList, ZXString<char> &sList, const ZArray<unsigned short> &aQuest, long nQuestState);
_FILETIME __cdecl GetStringToFileTime(ZXString<char> sDate, int32_t bStart);
ZXString<char> __cdecl operator__unsignedshort_char__134022(const uint16_t *s1, const ZXString<char> &s2);
