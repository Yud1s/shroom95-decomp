// DBBasic.hpp
#pragma once
#include "util/base.h"
#include "util/extra.h"
#include "pcom/wz.h"

#include "additional.hpp"
#include "Packet/Packet.hpp"
#include "GW/GW.hpp"

// Level: 0 0x1e8d4
class CharacterData;
// Level: 0 0x15513
struct PARTYMEMBER;
// Level: 0 0x1677f
struct SINGLEMACRO;
// Level: 0 0x3c99
struct GUILDMEMBER;
// Level: 0 0xad80
struct PARTYDATA;
// Level: 0 0x1bf9f
class CSimpleStrMap;
// Level: 0 0x1f0a5
struct MACROSYSDATA;
// Level: 0 0x234a1
struct CashItemEntry;
// Level: 1 0x1b286
struct PARCEL;

#pragma pack(push, 1)
struct EQUIPPED_SETITEM
{
	// Nested
	// Fields
public:
	long nSetItemID{};

public:
	long nPartsCount{};

public:
	ZArray<long> nItemID;
	// Methods
public:
	~EQUIPPED_SETITEM();

public:
	void _dtor_0();

public:
	EQUIPPED_SETITEM(const EQUIPPED_SETITEM &arg0);

public:
	void _ctor_1(const EQUIPPED_SETITEM &arg0);
	CTOR_DEFAULT(EQUIPPED_SETITEM)
public:
	EQUIPPED_SETITEM();

public:
	void _ctor_0();

public:
	EQUIPPED_SETITEM &operator=(const EQUIPPED_SETITEM &arg0);

public:
	static EQUIPPED_SETITEM &_op_assign_3(EQUIPPED_SETITEM *pThis, const EQUIPPED_SETITEM &arg0);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(EQUIPPED_SETITEM, 12);

#pragma pack(push, 1)
class CharacterData
{
// Nested
#pragma pack(push, 1)
public:
	struct SELECTEDMOB
	{
		// Nested
	public:
		enum MAX_ENTRY
		{
			MAX_ENTRY = 3
		};
		// Fields
	public:
		unsigned long dwMobID{};

	public:
		int32_t bAbs{};

	public:
		long dwBonusEXP{};
		// Methods
	public:
		SELECTEDMOB();
		SELECTEDMOB(const ZXString<char> &arg0);
		void Init();

	public:
		void _ctor_0(const ZXString<char> &arg0);

	public:
		SELECTEDMOB(unsigned long arg0, int32_t arg1, long arg2);
		void _ctor_0();

	public:
		void _ctor_1(unsigned long arg0, int32_t arg1, long arg2);

	public:
		ZXString<char> Encode();

	public:
		bool Decode(const ZXString<char> &sQRValue);
	};
#pragma pack(pop)
	// Fields
public:
	GW_CharacterStat characterStat;

public:
	std::array<ZRef<GW_ItemSlotBase>, 60> aEquipped{};

public:
	std::array<ZRef<GW_ItemSlotBase>, 60> aEquipped2{};

public:
	std::array<ZRef<GW_ItemSlotBase>, 4> aDragonEquipped{};

public:
	std::array<ZRef<GW_ItemSlotBase>, 5> aMechanicEquipped{};

public:
	std::array<ZArray<ZRef<GW_ItemSlotBase>>, 6> aaItemSlot{};

public:
	std::array<_FILETIME, 1> aEquipExtExpire{};

public:
	ZMap<long, EQUIPPED_SETITEM, long> m_mEquippedSetItem;

public:
	long nCombatOrders{};

public:
	ZMap<long, long, long> mSkillRecord;

public:
	ZMap<long, long, long> mSkillRecordEx;

public:
	ZMap<long, long, long> mSkillMasterLev;

public:
	ZMap<long, _FILETIME, long> mSkillExpired;

public:
	ZMap<long, unsigned short, long> mSkillCooltime;

public:
	ZMap<unsigned short, _FILETIME, unsigned short> mQuestComplete;

public:
	ZMap<unsigned short, _FILETIME, unsigned short> mQuestCompleteOld;

public:
	ZMap<long, ZRef<GW_MiniGameRecord>, long> mMiniGameRecord;

public:
	long nFriendMax{};

public:
	ZList<GW_CoupleRecord> lCoupleRecord;

public:
	ZList<GW_FriendRecord> lFriendRecord;

public:
	ZList<GW_NewYearCardRecord> lNewYearCardRecord;

public:
	ZList<GW_MarriageRecord> lMarriageRecord;

public:
	std::array<unsigned long, 5> adwMapTransfer{};

public:
	std::array<unsigned long, 10> adwMapTransferEx{};

public:
	int32_t bReachMaxLevel{};

public:
	_FILETIME ftReachMaxLevelTime{};

public:
	std::array<long, 5> nItemTotalNumber{};

public:
	ZMap<long, long, long> mAdminShopCommodityCount;

public:
	ZXString<char> sLinkedCharacter;

public:
	ZRef<GW_WildHunterInfo> pWildHunterInfo;

public:
	ZMap<long, ZRef<GW_MonsterBookCard>, long> mpMonsterBookCard;

public:
	long nMonsterBookCoverID{};

public:
	long nMonsterCardNormal{};

public:
	long nMonsterCardSpecial{};

private:
	ZMap<unsigned short, ZXString<char>, unsigned short> mQuestRecord;

private:
	ZMap<unsigned short, CSimpleStrMap, unsigned short> mQuestRecordEx;

public:
	ZArray<Additional::SKILL> aSkill;

public:
	std::array<long, 9> aMobCategoryDamage{};

public:
	std::array<long, 8> aElemBoost{};

public:
	Additional::CRITICAL critical;

public:
	Additional::BOSS boss;

public:
	ZMap<ZXString<char>, ZPair<long, long>, ZXString<char>> aUpgradeCountByDamageTheme;

public:
	ZMap<long, long, long> m_mVisitorQuestLog;
	// Methods
public:
	~CharacterData();

public:
	void _dtor_0();

public:
	CharacterData(const CharacterData &arg0);

public:
	void _ctor_1(const CharacterData &arg0);

public:
	CharacterData();

public:
	void _ctor_0();

public:
	int32_t HasWhiteScroll();

public:
	ZRef<GW_WildHunterInfo> GetWildHunterInfo();

public:
	__POSITION *GetQuestHeadPosition();

public:
	const uint16_t &GetQuestNext(__POSITION *&arg0);

public:
	int32_t IsQuestInProgress(uint16_t usQuestID);

public:
	const ZXString<char> *GetQuest(uint16_t usQRKey, ZXString<char> &sQRValue);

public:
	const uint16_t &GetQuest_(__POSITION *arg0);

public:
	ZXString<char> GetQuestEx(uint16_t usQuestID, ZXString<char> &sKey);

public:
	ZXString<char> GetQuestExRawStr(uint16_t usQuestRecordKey);

public:
	ZXString<char> *SetQuest(uint16_t usQRKey, const ZXString<char> &sQRValue);

public:
	int32_t RemoveQuest(uint16_t usQRKey);

public:
	void RemoveAllQuest();

public:
	int32_t SetQuestEx(const uint16_t arg0, ZXString<char> &arg1, ZXString<char> &arg2);

public:
	int32_t InitQuestExFromRawStr(const uint16_t usQuestID, ZXString<char> &rawStr);

public:
	unsigned long GetQuestMobID(uint16_t arg0);

public:
	ZXString<char> GetQuestBonusEXP(uint16_t usQuestRecordKey);

public:
	_FILETIME GetQuestExpireTime(uint16_t usQuestRecordKey);

public:
	_FILETIME GetQuestExpireTimeFromStringDate(uint16_t usQuestRecordKey);

public:
	PlayTimeRecord GetQuestPlayTimeRecord(uint16_t usQuestID);

public:
	int32_t IsSuccessPlayTimeQuest(uint16_t usQuestID);

private:
	CharacterData::SELECTEDMOB _GetQuestValue(uint16_t usQuestRecordKey);

public:
	ZRef<GW_ItemSlotBase> GetItem_(long arg0, long arg1, _LARGE_INTEGER arg2, long &arg3);

	ZRef<GW_ItemSlotBase> GetItem_0(long arg0, long arg1, _LARGE_INTEGER arg2, long &arg3)
	{
		return GetItem_(arg0, arg1, arg2, arg3);
	}

public:
	ZRef<GW_ItemSlotBase> GetItem(long nTI, long nPos);

	ZRef<GW_ItemSlotBase> GetItem_1(long nTI, long nPos)
	{
		return GetItem(nTI, nPos);
	}

public:
	int32_t SetItem(long nTI, long nPos, ZRef<GW_ItemSlotBase> pItem);

public:
	GW_ItemSlotPet *GetActiveItemSlotPet(long nIndex);

public:
	uint64_t Decode(CInPacket &pkt, int32_t bBackwardUpdate);

public:
	void Encode(COutPacket &arg0, uint64_t arg1, int32_t arg2, TRADEINFO *arg3, int32_t arg4);

public:
	long GetItemCount(long nTI, long nItemID);

public:
	long GetItemSlotCount(long nTI);

public:
	long GetEmptySlotCount(long nTI);

public:
	long FindEmptySlotPosition(long nTI);

public:
	long FindGeneralItemSlotPosition(long arg0, long arg1, _FILETIME arg2, _LARGE_INTEGER arg3);

public:
	long FindCashItemSlotPosition(long nTI, long nItemID);
	long FindCashItemSlotPosition_1(long nTI, long nItemID)
	{
		return FindCashItemSlotPosition(nTI, nItemID);
	}

public:
	long FindCashItemSlotPosition(long nTI, _LARGE_INTEGER liSN);
	long FindCashItemSlotPosition_0(long nTI, _LARGE_INTEGER liSN)
	{
		return FindCashItemSlotPosition(nTI, liSN);
	}

public:
	int32_t IsEquipSlotExpired(long nPos, const _FILETIME &ftNow) const;

public:
	int32_t IsEquiped(long nItemID);

public:
	long GetIncLevel();

public:
	int32_t IsEquipedDualDagger();

public:
	void InitAdditionalItemEffect();

public:
	void ClearVisitorLog();

public:
	CharacterData &operator=(const CharacterData &arg0);

public:
	static CharacterData &_op_assign_43(CharacterData *pThis, const CharacterData &arg0);
};
#pragma pack(pop)

STATIC_ASSERT_OFFSET_OF(CharacterData, characterStat, 0);
STATIC_ASSERT_OFFSET_OF(CharacterData, aEquipped, 0xf9);
STATIC_ASSERT_OFFSET_OF(CharacterData, nMonsterCardNormal, 0x6ed);
STATIC_ASSERT_OFFSET_OF(CharacterData, aElemBoost, 0x74d);
STATIC_ASSERT_OFFSET_OF(CharacterData, critical, 0x076d);
STATIC_ASSERT_OFFSET_OF(CharacterData, boss, 0x775);
STATIC_ASSERT_OFFSET_OF(CharacterData, aUpgradeCountByDamageTheme, 0x77d);
STATIC_ASSERT_SIZE(CharacterData, 1965);

#pragma pack(push, 1)
struct PARTYMEMBER
{
	// Nested
	// Fields
public:
	std::array<unsigned long, 6> adwCharacterID;

public:
	std::array<std::array<char, 13>, 6> asCharacterName;

public:
	std::array<long, 6> anJob{};

public:
	std::array<long, 6> anLevel{};

public:
	std::array<long, 6> anChannelID{};

public:
	unsigned long dwPartyBossCharacterID{};
	// Methods
public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);

public:
	long FindIndex(ZXString<char> sName);

public:
	long FindIndex_(unsigned long arg0);

public:
	ZXString<char> GetName(unsigned long arg0);

public:
	unsigned long GetCharacterID(ZXString<char> sName);

public:
	ZXString<char> GetBossName();

public:
	long GetMemberCount();

public:
	int32_t IsFull();

public:
	int32_t IsBossOnline() const;
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(PARTYMEMBER, 178);

#pragma pack(push, 1)
struct SINGLEMACRO
{
	// Nested
	// Fields
public:
	std::array<long, 3> aSkill{};

public:
	std::array<char, 13> sName{};

public:
	int32_t bMute{};
	// Methods
public:
	void Encode(COutPacket &oPacket);

public:
	void Decode(CInPacket &iPacket);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(SINGLEMACRO, 29);

#pragma pack(push, 1)
struct GUILDMEMBER
{
	// Nested
public:
	enum UNKNOWN
	{
		UNKNOWN = 255
	};
	// Fields
public:
	std::array<char, 13> sCharacterName{};

public:
	long nJob{};

public:
	long nLevel{};

public:
	long nGrade{};

public:
	int32_t bOnLine{};

public:
	long nCommitment{};

public:
	long nAllianceGrade{};
	// Methods
public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);

public:
	void Set(const char *arg0, long arg1, long arg2, long arg3, int32_t arg4, long arg5);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GUILDMEMBER, 37);

#pragma pack(push, 1)
struct PARTYDATA
{
// Nested
#pragma pack(push, 1)
public:
	class TOWNPORTAL
	{
		// Nested
		// Fields
	private:
		unsigned long m_dwTownID = 999999999;

	private:
		unsigned long m_dwFieldID = 999999999;

	private:
		long m_nSKillID{};

	private:
		tagPOINT m_ptFieldPortal{-1, -1};
		// Methods
	public:
		unsigned long GetTownID();

	public:
		unsigned long GetFieldID();

	public:
		long GetSkillID();

	public:
		tagPOINT GetFieldPortalPos();

	public:
		void Set(unsigned long dwTownID, unsigned long dwFieldID, long nSkillId, tagPOINT ptFieldPortal);
	};
#pragma pack(pop)
	// Fields
public:
	PARTYMEMBER party;

public:
	std::array<unsigned long, 6> adwFieldID{};

public:
	std::array<PARTYDATA::TOWNPORTAL, 6> aTownPortal{};

public:
	std::array<long, 6> aPQReward{};

public:
	std::array<int32_t, 6> aPQRewardType{};

public:
	unsigned long dwPQRewardMobTemplateID{};

public:
	int32_t bPQReward{};
	// Methods
public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(PARTYDATA, 378);

class CSimpleStrMap
{
	// Nested
	// Fields
private:
	ZMap<ZXString<char>, ZXString<char>, ZXString<char>> m_mValues;
	// Methods
public:
	~CSimpleStrMap();

public:
	void _dtor_0();

public:
	CSimpleStrMap(const CSimpleStrMap &arg0);

public:
	void _ctor_1(const CSimpleStrMap &arg0);

public:
	CSimpleStrMap();

public:
	void _ctor_0();

public:
	ZXString<char> GetValue(ZXString<char> &key);

public:
	int32_t SetValue(ZXString<char> &arg0, ZXString<char> &arg1);

public:
	int32_t InitFromRawString(const char *strRaw);

public:
	ZXString<char> GetRawString();

public:
	CSimpleStrMap &operator=(const CSimpleStrMap &arg0);

public:
	static CSimpleStrMap &_op_assign_7(CSimpleStrMap *pThis, const CSimpleStrMap &arg0);
};
STATIC_ASSERT_SIZE(CSimpleStrMap, 24);
#pragma pack(push, 1)
struct MACROSYSDATA
{
	// Nested
	// Fields
public:
	ZArray<SINGLEMACRO> aMacroSkill;
	// Methods
public:
	~MACROSYSDATA();

public:
	void _dtor_0();

public:
	MACROSYSDATA(const MACROSYSDATA &arg0);

public:
	void _ctor_1(const MACROSYSDATA &arg0);

public:
	MACROSYSDATA();

public:
	void _ctor_0();

public:
	void Reset();

public:
	void Encode(COutPacket &oPacket);

public:
	void Decode(CInPacket &iPacket);

public:
	MACROSYSDATA &operator=(const MACROSYSDATA &arg0);

public:
	static MACROSYSDATA &_op_assign_6(MACROSYSDATA *pThis, const MACROSYSDATA &arg0);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(MACROSYSDATA, 4);
struct CashItemEntry
{
	// Nested
	// Fields
public:
	ZRef<GW_ItemSlotBase> pItem;

public:
	long nPOS{};
	// Methods
public:
	~CashItemEntry();

public:
	void _dtor_0();

public:
	CashItemEntry(const CashItemEntry &arg0);

public:
	void _ctor_1(const CashItemEntry &arg0);

public:
	CashItemEntry();

public:
	void _ctor_0();

public:
	void Set(ZRef<GW_ItemSlotBase> pItem, long nPOS);

public:
	CashItemEntry &operator=(const CashItemEntry &arg0);

public:
	static CashItemEntry &_op_assign_4(CashItemEntry *pThis, const CashItemEntry &arg0);
};
STATIC_ASSERT_SIZE(CashItemEntry, 12);

#pragma pack(push, 1)
struct PARCEL : public GW_ParcelInfo
{
	// Nested
	// Fields
public:
	ZRef<GW_ItemSlotBase> pItem;
	// Methods
public:
	~PARCEL();

public:
	void _dtor_0();

public:
	PARCEL(const PARCEL &arg0);

public:
	void _ctor_1(const PARCEL &arg0);

public:
	PARCEL();

public:
	void _ctor_0();

public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);

public:
	PARCEL &operator=(const PARCEL &arg0);

public:
	static PARCEL &_op_assign_5(PARCEL *pThis, const PARCEL &arg0);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(PARCEL, 242);

CInPacket &__op_shift_right_0(CInPacket &iPacket, PARTYMEMBER &val);

uint32_t __fastcall _ZtlSecureTear_unsignedlong_(unsigned long arg0, unsigned long *arg1);
ZRef<GW_ItemSlotBase> __cdecl get_equiped_from_item(long nItemID, const CharacterData &cd);
int64_t __cdecl SubTime(const _FILETIME &ftLhs, const _FILETIME &ftRhs);
uint32_t __fastcall _ZtlSecureTear_unsignedshort_(uint16_t arg0, uint16_t *arg1);
unsigned long __cdecl _ZtlSecureFuse_unsignedlong_(const unsigned long *at, uint32_t uCS);
uint32_t __fastcall _ZtlSecureTear_unsignedchar_(unsigned char arg0, unsigned char *arg1);
int32_t __cdecl _anon_IsExist_(ZArray<_LARGE_INTEGER> &aliSN, _LARGE_INTEGER &liFindSN);
uint32_t __fastcall _ZtlSecureTear_short_(short arg0, short *arg1);
uint16_t __cdecl _ZtlSecureFuse_unsignedshort_(const uint16_t *at, uint32_t uCS);
