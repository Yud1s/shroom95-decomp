// GW.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"

// Level: 0 0x1da88
struct GW_CharacterStat;
// Level: 0 0x1dfd9
struct GW_AdminShopCommodityAccumulatedCount;
// Level: 0 0x1fc7e
struct GW_GuildBBSComment;
// Level: 0 0x1b1ff
struct GW_GuildBBSEntryText;
// Level: 0 0x1973f
struct GW_ItemSlotEquipOpt;
// Level: 0 0x1d5bb
struct GW_WildHunterInfo;
// Level: 0 0x192a5
struct GW_MiniGameRecord;
// Level: 0 0x15ff2
struct GW_ParcelInfo;
// Level: 0 0x1d21d
struct GW_FuncKeyMapped;
// Level: 0 0x1823c
struct GW_CashItemInfo;
// Level: 0 0x1d4cb
struct GW_Memo;
// Level: 0 0x1d0c5
struct ExtendSP;
// Level: 0 0x17e7c
struct GW_WebShopOrder;
// Level: 0 0x1e956
struct GW_AdminShopCommodityDailyCount;
// Level: 0 0x104a0
struct GW_NewYearCardRecord;
// Level: 0 0x1537b
struct FUNCKEY_MAPPED;
// Level: 0 0x1b2de
struct GW_EquipExt;
// Level: 0 0x1fdb8
struct GW_GiftList;
// Level: 0 0x1a2f2
struct GW_FriendRecord;
// Level: 0 0x19cd4
struct GW_AdminShopCommodity;
// Level: 0 0x1ebcc
struct GW_RadioSchedule;
// Level: 0 0x1fa57
struct GW_WeddingReservation;
// Level: 0 0x1af78
struct SPSet;
// Level: 0 0x16793
struct GW_CoupleRecord;
// Level: 0 0x1fceb
struct GW_SkillRecord;
// Level: 0 0x18945
struct GW_MarriageRecord;
// Level: 0 0x17fb6
struct GW_QuestComplete;
// Level: 0 0x1fab3
struct GW_MonsterBookCardLess;
// Level: 0 0x186ff
struct GW_QuestRecordEx;
// Level: 0 0x1d535
struct GW_AdminShopLog;
// Level: 0 0x1c61d
struct GW_MonsterBookCard;
// Level: 0 0x1524d
struct GW_Friend;
// Level: 0 0x1692a
struct GW_QuestCompleteNew;
// Level: 0 0x1fadc
struct GW_MonsterBookCode;
// Level: 0 0x1ee4b
struct GW_MonsterBookCover;
// Level: 0 0x1d11a
struct GW_SkillCooltime;
// Level: 0 0x1ecea
struct GW_ItemSlotEquipBase;
// Level: 0 0x1ce36
struct GW_WeddingWishList;
// Level: 0 0x189c5
struct GW_GuildBBSEntryList;
// Level: 0 0x16243
struct GW_GuildSkillRecord;
// Level: 0 0x1f120
struct GW_QuestRecord;
// Level: 1 0x1dbde
struct GW_ItemSlotBase;
// Level: 2 0x1df0d
struct GW_ItemSlotPet;
// Level: 2 0x1a07e
struct GW_ItemSlotEquip;
// Level: 2 0x1bae2
struct GW_ItemSlotBundle;

#pragma pack(push, 1)
struct FUNCKEY_MAPPED
{
	// Nested
public:
	enum T_
	{
		T_NONE = 0,
		T_SKILL = 1,
		T_ITEM = 2,
		T_EMOTION = 3,
		T_MENU = 4,
		T_BASICACTION = 5,
		T_BASICEMOTION = 6,
		T_EFFECT = 7,
		T_MACROSKILL = 8,
		T_COUNT = 8
	};
	// Fields
public:
	unsigned char nType{};

	FUNCKEY_MAPPED() = default;

	FUNCKEY_MAPPED(unsigned char type, long id);

public:
	long nID{};
	// Methods
public:
	void Encode(COutPacket &oPacket);

public:
	void Decode(CInPacket &iPacket);

public:
	int32_t IsItemShortCut();

public:
	int32_t IsBasicShortCut();
};
#pragma pack(pop)

STATIC_ASSERT_SIZE(FUNCKEY_MAPPED, 5);

#pragma pack(push, 1)
struct ExtendSP
{
	// Nested
	// Fields
protected:
	ZList<SPSet> lSPSet;
	// Methods
public:
	~ExtendSP();

public:
	void _dtor_0();

public:
	ExtendSP(const ExtendSP &arg0);

public:
	void _ctor_1(const ExtendSP &arg0);

public:
	ExtendSP();

public:
	void _ctor_0();

public:
	unsigned char Get(unsigned char nJobLevel);

public:
	long GetTotalSP();

public:
	void Decode(CInPacket &iPacket);

public:
	void Encode(COutPacket &arg0);

public:
	void RemoveAll();

public:
	void Set(unsigned char arg0, unsigned char arg1);

public:
	int32_t MakeSPString(char *arg0, long arg1);

public:
	ExtendSP &operator=(const ExtendSP &arg0);

public:
	static ExtendSP &_op_assign_10(ExtendSP *pThis, const ExtendSP &arg0);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(ExtendSP, 20);

#pragma pack(push, 1)
struct GW_CharacterStat
{
	// Nested
	// Fields
public:
	unsigned long dwCharacterID{};

public:
	std::array<char, 13> sCharacterName{};

public:
	unsigned char nGender{};

public:
	unsigned char nSkin{};

public:
	long nFace{};

public:
	long nHair{};

public:
	std::array<_LARGE_INTEGER, 3> aliPetLockerSN{};

public:
	std::array<unsigned char, 2> _ZtlSecureTear_nLevel;

public:
	uint32_t _ZtlSecureTear_nLevel_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nJob{};

public:
	uint32_t _ZtlSecureTear_nJob_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nSTR{};

public:
	uint32_t _ZtlSecureTear_nSTR_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nDEX{};

public:
	uint32_t _ZtlSecureTear_nDEX_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nINT{};

public:
	uint32_t _ZtlSecureTear_nINT_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nLUK{};

public:
	uint32_t _ZtlSecureTear_nLUK_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nHP{};

public:
	uint32_t _ZtlSecureTear_nHP_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nMHP{};

public:
	uint32_t _ZtlSecureTear_nMHP_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nMP{};

public:
	uint32_t _ZtlSecureTear_nMP_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nMMP{};

public:
	uint32_t _ZtlSecureTear_nMMP_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nAP{};

public:
	uint32_t _ZtlSecureTear_nAP_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nSP{};

public:
	uint32_t _ZtlSecureTear_nSP_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nEXP{};

public:
	uint32_t _ZtlSecureTear_nEXP_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nPOP{};

public:
	uint32_t _ZtlSecureTear_nPOP_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nMoney{};

public:
	uint32_t _ZtlSecureTear_nMoney_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nTempEXP{};

public:
	uint32_t _ZtlSecureTear_nTempEXP_CS{};

public:
	ExtendSP extendSP;

public:
	std::array<unsigned long, 2> _ZtlSecureTear_dwPosMap;

public:
	uint32_t _ZtlSecureTear_dwPosMap_CS{};

public:
	unsigned char nPortal{};

public:
	long nCheckSum{};

public:
	unsigned char nItemCountCheckSum{};

public:
	long nPlaytime{};

public:
	short nSubJob{};
	// Methods
public:
	~GW_CharacterStat();

public:
	void _dtor_0();

public:
	GW_CharacterStat(const GW_CharacterStat &arg0);

public:
	void _ctor_1(const GW_CharacterStat &arg0);

	CTOR_DEFAULT(GW_CharacterStat)
public:
	GW_CharacterStat();

public:
	void _ctor_0();

public:
	unsigned char __fastcall _ZtlSecureGet_nLevel() const;

public:
	unsigned char __fastcall _ZtlSecurePut_nLevel(unsigned char arg0);

public:
	short __fastcall _ZtlSecureGet_nJob() const;

public:
	short __fastcall _ZtlSecurePut_nJob(short arg0);

public:
	short __fastcall _ZtlSecureGet_nSTR() const;

public:
	short __fastcall _ZtlSecurePut_nSTR(short arg0);

public:
	short __fastcall _ZtlSecureGet_nDEX() const;

public:
	short __fastcall _ZtlSecurePut_nDEX(short arg0);

public:
	short __fastcall _ZtlSecureGet_nINT() const;

public:
	short __fastcall _ZtlSecurePut_nINT(short arg0);

public:
	short __fastcall _ZtlSecureGet_nLUK() const;

public:
	short __fastcall _ZtlSecurePut_nLUK(short arg0);

public:
	long __fastcall _ZtlSecureGet_nHP() const;

public:
	long __fastcall _ZtlSecurePut_nHP(long arg0);

public:
	long __fastcall _ZtlSecureGet_nMHP() const;

public:
	long __fastcall _ZtlSecurePut_nMHP(long arg0);

public:
	long __fastcall _ZtlSecureGet_nMP() const;

public:
	long __fastcall _ZtlSecurePut_nMP(long arg0);

public:
	long __fastcall _ZtlSecureGet_nMMP() const;

public:
	long __fastcall _ZtlSecurePut_nMMP(long arg0);

public:
	short __fastcall _ZtlSecureGet_nAP() const;

public:
	short __fastcall _ZtlSecurePut_nAP(short arg0);

public:
	short __fastcall _ZtlSecureGet_nSP() const;

public:
	short __fastcall _ZtlSecurePut_nSP(short arg0);

public:
	long __fastcall _ZtlSecureGet_nEXP() const;

public:
	long __fastcall _ZtlSecurePut_nEXP(long arg0);

public:
	short __fastcall _ZtlSecureGet_nPOP() const;

public:
	short __fastcall _ZtlSecurePut_nPOP(short arg0);

public:
	long __fastcall _ZtlSecureGet_nMoney() const;

public:
	long __fastcall _ZtlSecurePut_nMoney(long arg0);

public:
	long __fastcall _ZtlSecureGet_nTempEXP() const;

public:
	long __fastcall _ZtlSecurePut_nTempEXP(long arg0);

public:
	unsigned long __fastcall _ZtlSecureGet_dwPosMap() const;

public:
	unsigned long __fastcall _ZtlSecurePut_dwPosMap(unsigned long arg0);

public:
	void Encode(COutPacket &arg0);

public:
	void EncodeMoney(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket, int32_t bBackwardUpdate);

public:
	void DecodeMoney(CInPacket &iPacket);

public:
	void EncodeChangeStat(unsigned long arg0, COutPacket &arg1);

public:
	unsigned long DecodeChangeStat(CInPacket &iPacket);

public:
	ZXString<char> GetString();

public:
	GW_CharacterStat &operator=(const GW_CharacterStat &__that);

public:
	static GW_CharacterStat &_op_assign_44(GW_CharacterStat *pThis, const GW_CharacterStat &__that);
};
#pragma pack(pop)

STATIC_ASSERT_OFFSET_OF(GW_CharacterStat, aliPetLockerSN, 0x1b);
STATIC_ASSERT_OFFSET_OF(GW_CharacterStat, extendSP, 0xcd);
STATIC_ASSERT_OFFSET_OF(GW_CharacterStat, nPlaytime, 0xf3);
STATIC_ASSERT_SIZE(GW_CharacterStat, 249);

struct GW_AdminShopCommodityAccumulatedCount
{
	// Nested
	// Fields
public:
	long nSN{};

public:
	long nCount{};
	// Methods
};
STATIC_ASSERT_SIZE(GW_AdminShopCommodityAccumulatedCount, 8);
#pragma pack(push, 1)
struct GW_GuildBBSComment
{
	// Nested
	// Fields
public:
	long m_nSN{};

public:
	long m_nCharacterID{};

public:
	std::array<char, 26> m_sText{};

public:
	_FILETIME m_Date;
	// Methods
public:
	void *GetDataBlock();
};
#pragma pack(pop)

STATIC_ASSERT_SIZE(GW_GuildBBSComment, 42);
#pragma pack(push, 1)
struct GW_GuildBBSEntryText
{
	// Nested
	// Fields
public:
	std::array<char, 601> m_sText{};
	// Methods
public:
	void *GetDataBlock();
};
#pragma pack(pop)

STATIC_ASSERT_SIZE(GW_GuildBBSEntryText, 601);
#pragma pack(push, 1)
struct GW_ItemSlotEquipOpt
{
	// Nested
	// Fields
public:
	std::array<unsigned char, 2> _ZtlSecureTear_nGrade;

public:
	uint32_t _ZtlSecureTear_nGrade_CS{};

public:
	std::array<unsigned char, 2> _ZtlSecureTear_nCHUC;

public:
	uint32_t _ZtlSecureTear_nCHUC_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nOption1{};

public:
	uint32_t _ZtlSecureTear_nOption1_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nOption2{};

public:
	uint32_t _ZtlSecureTear_nOption2_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nOption3{};

public:
	uint32_t _ZtlSecureTear_nOption3_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nSocket1{};

public:
	uint32_t _ZtlSecureTear_nSocket1_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nSocket2{};

public:
	uint32_t _ZtlSecureTear_nSocket2_CS{};
	// Methods

	CTOR_DEFAULT(GW_ItemSlotEquipOpt)
public:
	GW_ItemSlotEquipOpt();

public:
	void _ctor_0();

public:
	unsigned char __fastcall _ZtlSecureGet_nGrade() const;

public:
	unsigned char __fastcall _ZtlSecurePut_nGrade(unsigned char arg0);

public:
	unsigned char __fastcall _ZtlSecureGet_nCHUC() const;

public:
	unsigned char __fastcall _ZtlSecurePut_nCHUC(unsigned char arg0);

public:
	short __fastcall _ZtlSecureGet_nOption1() const;

public:
	short __fastcall _ZtlSecurePut_nOption1(short arg0);

public:
	short __fastcall _ZtlSecureGet_nOption2() const;

public:
	short __fastcall _ZtlSecurePut_nOption2(short arg0);

public:
	short __fastcall _ZtlSecureGet_nOption3() const;

public:
	short __fastcall _ZtlSecurePut_nOption3(short arg0);

public:
	short __fastcall _ZtlSecureGet_nSocket1() const;

public:
	short __fastcall _ZtlSecurePut_nSocket1(short arg0);

public:
	short __fastcall _ZtlSecureGet_nSocket2() const;

public:
	short __fastcall _ZtlSecurePut_nSocket2(short arg0);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_ItemSlotEquipOpt, 52);

#pragma pack(push, 1)
struct GW_WildHunterInfo
{
	// Nested
	// Fields
protected:
	unsigned char nRidingType{};

protected:
	std::array<unsigned long, 5> adwCapturedMob{};

protected:
	long nIdx{};
	// Methods
public:
	GW_WildHunterInfo();

public:
	void _ctor_0();

public:
	long GetRidingType();

public:
	long GetRidingItem();

public:
	void SetRidingType(unsigned char arg0);

public:
	int32_t CheckOverlapMob(unsigned long dwCapturedMob);

public:
	int32_t AddCapturedMob(unsigned long dwCapturedMob);

public:
	unsigned long GetRandomCapturedMob();

public:
	unsigned long *GetCaptureMobList();

public:
	long GetIdx();

public:
	void Decode(CInPacket &iPacket);

public:
	void Encode(COutPacket &arg0);

public:
	void Arrange();
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_WildHunterInfo, 25);

struct GW_MiniGameRecord
{
	// Nested
	// Fields
public:
	long nGameID{};

public:
	long nWin{};

public:
	long nDraw{};

public:
	long nLose{};

public:
	long nScore{};
	// Methods
public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);

public:
	void InitializeData(long arg0);
};
STATIC_ASSERT_SIZE(GW_MiniGameRecord, 20);

#pragma pack(push, 1)
struct GW_ParcelInfo
{
	// Nested
	// Fields
public:
	long nSN{};

public:
	std::array<char, 13> sSender{};

public:
	long nMoney{};

public:
	_FILETIME dateExpire_Parcel;

public:
	int32_t bQuickDelivery{};

public:
	std::array<char, 201> sMemo{};
	// Methods
};
#pragma pack(pop)

STATIC_ASSERT_OFFSET_OF(GW_ParcelInfo, nSN, 0x0);
STATIC_ASSERT_OFFSET_OF(GW_ParcelInfo, bQuickDelivery, 0x1d);
STATIC_ASSERT_OFFSET_OF(GW_ParcelInfo, sMemo, 0x21);
STATIC_ASSERT_SIZE(GW_ParcelInfo, 234);

struct GW_FuncKeyMapped
{
	// Nested
	// Fields
public:
	unsigned char nKeyID{};

public:
	FUNCKEY_MAPPED fkm;
	// Methods
};
STATIC_ASSERT_SIZE(GW_FuncKeyMapped, 6);

#pragma pack(push, 1)
struct GW_CashItemInfo
{
	// Nested
	// Fields
public:
	_LARGE_INTEGER liSN;

public:
	unsigned long dwAccountID{};

public:
	unsigned long dwCharacterID{};

public:
	long nItemID{};

public:
	long nCommodityID{};

public:
	uint16_t nNumber{};

public:
	std::array<char, 13> sBuyCharacterID{};

public:
	_FILETIME dateExpire;

public:
	long nPaybackRate{};

public:
	long nDiscountRate{};
	// Methods
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_CashItemInfo, 55);

#pragma pack(push, 1)
struct GW_Memo
{
	// Nested
	// Fields
public:
	unsigned long dwSN{};

public:
	std::array<char, 13> sSender{};

public:
	std::array<char, 201> sContent{};

public:
	_FILETIME dateSent;

public:
	long nFlag{};
	// Methods
public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_Memo, 230);

#pragma pack(push, 1)
struct GW_Products
{
public:
	std::array<char, 101> sProductName{};

public:
	std::array<char, 101> sProductDBID{};
};
#pragma pack(pop)

STATIC_ASSERT_SIZE(GW_Products, 202);

struct GW_WebShopOrder
{
	// Nested
	// Fields
public:
	unsigned long dwOrderNo{};

public:
	unsigned long dwPackageProductNo{};

public:
	unsigned long dwProductNo{};

public:
	GW_Products products;

public:
	unsigned long dwProductExpiredDay{};

public:
	unsigned long dwProductPieces{};

public:
	unsigned long dwOrderQuantity{};

public:
	unsigned long dwReceiveOrderQuantity{};

public:
	unsigned long dwRemainOrderQuantity{};

public:
	int32_t bIsOrderPackage{};

public:
	unsigned long dwSenderGameNo{};

public:
	unsigned long dwSenderGameSever{};

public:
	std::array<char, 101> sSenderGameID{};

public:
	std::array<char, 101> sPresentMessage{};

public:
	std::array<char, 65> sProductAttribute0{};

public:
	std::array<char, 65> sProductAttribute1{};

public:
	std::array<char, 65> sProductAttribute2{};

public:
	std::array<char, 65> sProductAttribute3{};

public:
	std::array<char, 65> sProductAttribute4{};

public:
	std::array<char, 10> sRegisterDate{};

public:
	unsigned long dwIsOrderRead{};

public:
	std::array<char, 3> sProductType{};

public:
	int32_t bPresent{};
	// Methods
};
STATIC_ASSERT_OFFSET_OF(GW_WebShopOrder, dwProductNo, 0x8);
STATIC_ASSERT_OFFSET_OF(GW_WebShopOrder, products, 0xc);
STATIC_ASSERT_OFFSET_OF(GW_WebShopOrder, dwProductExpiredDay, 0xd8);
STATIC_ASSERT_OFFSET_OF(GW_WebShopOrder, dwSenderGameSever, 0xf4);
STATIC_ASSERT_SIZE(GW_WebShopOrder, 800);

struct GW_AdminShopCommodityDailyCount
{
	// Nested
	// Fields
public:
	long nSN{};

public:
	long nCount{};
	// Methods
};
STATIC_ASSERT_SIZE(GW_AdminShopCommodityDailyCount, 8);

#pragma pack(push, 1)
struct GW_NewYearCardRecord
{
	// Nested
	// Fields
public:
	unsigned long m_dwSN{};

public:
	unsigned long m_dwSenderID{};

public:
	std::array<char, 13> m_sSenderName{};

public:
	int32_t m_bSenderDiscardCard{};

public:
	_FILETIME m_dateSent;

public:
	unsigned long m_dwReceiverID{};

public:
	std::array<char, 13> m_sReceiverName{};

public:
	int32_t m_bReceiverDiscardCard{};

public:
	int32_t m_bReceiverReceivedCard{};

public:
	_FILETIME m_dateReceived;

public:
	std::array<char, 121> m_sContent{};
	// Methods
public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);

public:
	static void __cdecl SaveExtraData(long arg0, char *arg1);

public:
	static long __cdecl LoadExtraData(const char *arg0);

public:
	static bool __cdecl IsExtraDataSaved(const char *arg0);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_NewYearCardRecord, 187);

#pragma pack(push, 1)
struct GW_EquipExt
{
	// Nested
	// Fields
public:
	short nSlotIndex{};

public:
	_FILETIME dateExpire;
	// Methods
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_EquipExt, 10);

#pragma pack(push, 1)
struct GW_GiftList
{
	// Nested
	// Fields
public:
	_LARGE_INTEGER liSN;

public:
	long nItemID{};

public:
	std::array<char, 13> sBuyCharacterName{};

public:
	std::array<char, 73> sText{};
	// Methods
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_GiftList, 98);

#pragma pack(push, 1)
struct GW_FriendRecord
{
	// Nested
	// Fields
public:
	unsigned long dwPairCharacterID{};

public:
	std::array<char, 13> sPairCharacterName{};

public:
	_LARGE_INTEGER liSN;

public:
	_LARGE_INTEGER liPairSN;

public:
	unsigned long dwFriendItemID{};
	// Methods
public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);
};
#pragma pack(pop)

STATIC_ASSERT_SIZE(GW_FriendRecord, 37);

#pragma pack(push, 1)
struct GW_AdminShopCommodity
{
	// Nested
	// Fields
public:
	long nSN{};

public:
	long nItemID{};

public:
	long nPrice{};

public:
	long nPerPerson{};

public:
	long nPerDay{};

public:
	long nMaxStock{};

public:
	unsigned char nMinLevel{};

public:
	unsigned char nMaxLevel{};

public:
	_FILETIME ftPeriod;
	// Methods
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_AdminShopCommodity, 34);

struct GW_RadioSchedule
{
	// Nested
	// Fields
public:
	std::array<char, 50> sTrack{};

public:
	_FILETIME ftStart;

public:
	_FILETIME ftEnd;
	// Methods
public:
	static long __cdecl GetDataSize();

public:
	void *GetDataBlock();

public:
	ZXString<char> GetTrack();

public:
	int32_t IsEqual(const GW_RadioSchedule &arg0);

public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &arg0);
};
STATIC_ASSERT_SIZE(GW_RadioSchedule, 68);
struct GW_WeddingReservation
{
	// Nested
	// Fields
public:
	unsigned long dwReservationNo{};

public:
	unsigned long dwGroom{};

public:
	unsigned long dwBride{};

public:
	std::array<char, 13> sGroomName{};

public:
	std::array<char, 13> sBrideName{};

public:
	uint16_t usWeddingType{};
	// Methods
public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &arg0);
};
STATIC_ASSERT_SIZE(GW_WeddingReservation, 40);
#pragma pack(push, 1)
struct SPSet
{
	// Nested
	// Fields
public:
	std::array<unsigned char, 2> _ZtlSecureTear_nJobLevel{};

public:
	uint32_t _ZtlSecureTear_nJobLevel_CS{};

public:
	std::array<unsigned char, 2> _ZtlSecureTear_nSP{};

public:
	uint32_t _ZtlSecureTear_nSP_CS{};
	// Methods
public:
	SPSet(unsigned char arg0, unsigned char arg1);

public:
	void _ctor_0(unsigned char arg0, unsigned char arg1);

public:
	SPSet();

public:
	void _ctor_1();

public:
	unsigned char __fastcall _ZtlSecureGet_nJobLevel() const;

public:
	unsigned char __fastcall _ZtlSecurePut_nJobLevel(unsigned char arg0);

public:
	unsigned char __fastcall _ZtlSecureGet_nSP() const;

public:
	unsigned char __fastcall _ZtlSecurePut_nSP(unsigned char arg0);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(SPSet, 12);

#pragma pack(push, 1)
struct GW_CoupleRecord
{
	// Nested
	// Fields
public:
	unsigned long dwPairCharacterID{};

public:
	std::array<char, 13> sPairCharacterName{};

public:
	_LARGE_INTEGER liSN;

public:
	_LARGE_INTEGER liPairSN;
	// Methods
public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);
};
#pragma pack(pop)

STATIC_ASSERT_SIZE(GW_CoupleRecord, 33);
struct GW_SkillRecord
{
	// Nested
	// Fields
public:
	long nSkillID{};

public:
	long nInfo{};

public:
	long nMasterLevel{};

public:
	_FILETIME dateExpire;
	// Methods
};
STATIC_ASSERT_SIZE(GW_SkillRecord, 20);

#pragma pack(push, 1)
struct GW_MarriageRecord
{
	// Nested
	// Fields
public:
	unsigned long dwMarriageNo{};

public:
	unsigned long dwGroomID{};

public:
	unsigned long dwBrideID{};

public:
	uint16_t usStatus{};

public:
	long nGroomItemID{};

public:
	long nBrideItemID{};

public:
	std::array<char, 13> sGroomName{};

public:
	std::array<char, 13> sBrideName{};
	// Methods
public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_MarriageRecord, 48);

struct GW_QuestComplete
{
	// Nested
	// Fields
public:
	int32_t usQRKey{};

public:
	long tEnd{};
	// Methods
};
STATIC_ASSERT_SIZE(GW_QuestComplete, 8);
#pragma pack(push, 1)
struct GW_MonsterBookCardLess
{
	// Nested
	// Fields
	// Methods
public:
	int32_t operator()(const ZRef<GW_MonsterBookCard> arg0, const ZRef<GW_MonsterBookCard> arg1);

public:
	static int32_t _op_call_0(GW_MonsterBookCardLess *pThis, const ZRef<GW_MonsterBookCard> arg0, const ZRef<GW_MonsterBookCard> arg1);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_MonsterBookCardLess, 1);

#pragma pack(push, 1)
struct GW_QuestRecordEx
{
	// Nested
	// Fields
public:
	int32_t usQRKey{};

public:
	std::array<char, 101> sQRValue{};
	// Methods
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_QuestRecordEx, 105);

struct GW_AdminShopLog
{
	// Nested
	// Fields
public:
	long nSN{};

public:
	long nCount{};
	// Methods
};
STATIC_ASSERT_SIZE(GW_AdminShopLog, 8);
#pragma pack(push, 1)
struct GW_MonsterBookCard
{
	// Nested
	// Fields
public:
	uint16_t usCardID{};

public:
	unsigned char nCardCount{};
	// Methods
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_MonsterBookCard, 3);

#pragma pack(push, 1)
struct GW_Friend
{
	// Nested
	// Fields
public:
	unsigned long dwFriendID{};

public:
	std::array<char, 13> sFriendName{};

public:
	unsigned char nFlag{};

public:
	long nChannelID{};

public:
	std::array<char, 17> sFriendGroup{};
	// Methods
public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_Friend, 39);

struct GW_QuestCompleteNew
{
	// Nested
	// Fields
public:
	int32_t sQRKey{};

public:
	_FILETIME ftFinishTime;
	// Methods
};
STATIC_ASSERT_SIZE(GW_QuestCompleteNew, 12);
struct GW_MonsterBookCode
{
	// Nested
	// Fields
	// Methods
public:
	static void __cdecl Encode(COutPacket &arg0, ZArray<ZRef<GW_MonsterBookCard>> &arg1);

public:
	static void __cdecl Decode(CInPacket &arg0, ZArray<ZRef<GW_MonsterBookCard>> &arg1);
};
STATIC_ASSERT_SIZE(GW_MonsterBookCode, 1);
struct GW_MonsterBookCover
{
	// Nested
	// Fields
public:
	long nCardID{};
	// Methods
};
STATIC_ASSERT_SIZE(GW_MonsterBookCover, 4);

#pragma pack(push, 1)
struct GW_SkillCooltime
{
	// Nested
	// Fields
public:
	long nSkillID{};

public:
	uint16_t usRemainSec{};
	// Methods
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_SkillCooltime, 6);

#pragma pack(push, 1)
struct GW_ItemSlotEquipBase
{
	// Nested
	// Fields
public:
	std::array<unsigned char, 2> _ZtlSecureTear_nRUC{};

public:
	uint32_t _ZtlSecureTear_nRUC_CS{};

public:
	std::array<unsigned char, 2> _ZtlSecureTear_nCUC{};

public:
	uint32_t _ZtlSecureTear_nCUC_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_niSTR{};

public:
	uint32_t _ZtlSecureTear_niSTR_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_niDEX{};

public:
	uint32_t _ZtlSecureTear_niDEX_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_niINT{};

public:
	uint32_t _ZtlSecureTear_niINT_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_niLUK{};

public:
	uint32_t _ZtlSecureTear_niLUK_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_niMaxHP{};

public:
	uint32_t _ZtlSecureTear_niMaxHP_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_niMaxMP{};

public:
	uint32_t _ZtlSecureTear_niMaxMP_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_niPAD{};

public:
	uint32_t _ZtlSecureTear_niPAD_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_niMAD{};

public:
	uint32_t _ZtlSecureTear_niMAD_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_niPDD{};

public:
	uint32_t _ZtlSecureTear_niPDD_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_niMDD{};

public:
	uint32_t _ZtlSecureTear_niMDD_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_niACC{};

public:
	uint32_t _ZtlSecureTear_niACC_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_niEVA{};

public:
	uint32_t _ZtlSecureTear_niEVA_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_niCraft{};

public:
	uint32_t _ZtlSecureTear_niCraft_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_niSpeed{};

public:
	uint32_t _ZtlSecureTear_niSpeed_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_niJump{};

public:
	uint32_t _ZtlSecureTear_niJump_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nAttribute{};

public:
	uint32_t _ZtlSecureTear_nAttribute_CS{};

public:
	std::array<unsigned char, 2> _ZtlSecureTear_nLevelUpType{};

public:
	uint32_t _ZtlSecureTear_nLevelUpType_CS{};

public:
	std::array<unsigned char, 2> _ZtlSecureTear_nLevel{};

public:
	uint32_t _ZtlSecureTear_nLevel_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nEXP{};

public:
	uint32_t _ZtlSecureTear_nEXP_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nDurability{};

public:
	uint32_t _ZtlSecureTear_nDurability_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nIUC{};

public:
	uint32_t _ZtlSecureTear_nIUC_CS{};
	// Methods
public:
	GW_ItemSlotEquipBase();

public:
	void _ctor_0();

public:
	unsigned char __fastcall _ZtlSecureGet_nRUC() const;

public:
	unsigned char __fastcall _ZtlSecurePut_nRUC(unsigned char arg0);

public:
	unsigned char __fastcall _ZtlSecureGet_nCUC() const;

public:
	unsigned char __fastcall _ZtlSecurePut_nCUC(unsigned char arg0);

public:
	short __fastcall _ZtlSecureGet_niSTR() const;

public:
	short __fastcall _ZtlSecurePut_niSTR(short arg0);

public:
	short __fastcall _ZtlSecureGet_niDEX() const;

public:
	short __fastcall _ZtlSecurePut_niDEX(short arg0);

public:
	short __fastcall _ZtlSecureGet_niINT() const;

public:
	short __fastcall _ZtlSecurePut_niINT(short arg0);

public:
	short __fastcall _ZtlSecureGet_niLUK() const;

public:
	short __fastcall _ZtlSecurePut_niLUK(short arg0);

public:
	short __fastcall _ZtlSecureGet_niMaxHP() const;

public:
	short __fastcall _ZtlSecurePut_niMaxHP(short arg0);

public:
	short __fastcall _ZtlSecureGet_niMaxMP() const;

public:
	short __fastcall _ZtlSecurePut_niMaxMP(short arg0);

public:
	short __fastcall _ZtlSecureGet_niPAD() const;

public:
	short __fastcall _ZtlSecurePut_niPAD(short arg0);

public:
	short __fastcall _ZtlSecureGet_niMAD() const;

public:
	short __fastcall _ZtlSecurePut_niMAD(short arg0);

public:
	short __fastcall _ZtlSecureGet_niPDD() const;

public:
	short __fastcall _ZtlSecurePut_niPDD(short arg0);

public:
	short __fastcall _ZtlSecureGet_niMDD() const;

public:
	short __fastcall _ZtlSecurePut_niMDD(short arg0);

public:
	short __fastcall _ZtlSecureGet_niACC() const;

public:
	short __fastcall _ZtlSecurePut_niACC(short arg0);

public:
	short __fastcall _ZtlSecureGet_niEVA() const;

public:
	short __fastcall _ZtlSecurePut_niEVA(short arg0);

public:
	short __fastcall _ZtlSecureGet_niCraft() const;

public:
	short __fastcall _ZtlSecurePut_niCraft(short arg0);

public:
	short __fastcall _ZtlSecureGet_niSpeed() const;

public:
	short __fastcall _ZtlSecurePut_niSpeed(short arg0);

public:
	short __fastcall _ZtlSecureGet_niJump() const;

public:
	short __fastcall _ZtlSecurePut_niJump(short arg0);

public:
	short __fastcall _ZtlSecureGet_nAttribute() const;

public:
	short __fastcall _ZtlSecurePut_nAttribute(short arg0);

public:
	unsigned char __fastcall _ZtlSecureGet_nLevelUpType() const;

public:
	unsigned char __fastcall _ZtlSecurePut_nLevelUpType(unsigned char arg0);

public:
	unsigned char __fastcall _ZtlSecureGet_nLevel() const;

public:
	unsigned char __fastcall _ZtlSecurePut_nLevel(unsigned char arg0);

public:
	long __fastcall _ZtlSecureGet_nEXP() const;

public:
	long __fastcall _ZtlSecurePut_nEXP(long arg0);

public:
	long __fastcall _ZtlSecureGet_nDurability() const;

public:
	long __fastcall _ZtlSecurePut_nDurability(long arg0);

public:
	long __fastcall _ZtlSecureGet_nIUC() const;

public:
	long __fastcall _ZtlSecurePut_nIUC(long arg0);
};
#pragma pack(pop)

STATIC_ASSERT_SIZE(GW_ItemSlotEquipBase, 188);

#pragma pack(push, 1)
struct GW_WeddingWishList
{
	// Nested
	// Fields
public:
	unsigned long dwReservationNo{};

public:
	long nGender{};

public:
	std::array<char, 17> sItemName{};
	// Methods
public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &arg0);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_WeddingWishList, 25);
#pragma pack(push, 1)
struct GW_GuildBBSEntryList
{
	// Nested
	// Fields
public:
	long m_nSN{};

public:
	long m_nEntryID{};

public:
	long m_nCharacterID{};

public:
	std::array<char, 26> m_sTitle{};

public:
	_FILETIME m_Date;

public:
	long m_nEmoticon{};

public:
	long m_nCommentCount{};
	// Methods
public:
	void *GetDataBlock();
};
#pragma pack(pop)

STATIC_ASSERT_SIZE(GW_GuildBBSEntryList, 54);

#pragma pack(push, 1)
struct GW_GuildSkillRecord
{
	// Nested
	// Fields
public:
	long nSkillID{};

public:
	short nLevel{};

public:
	_FILETIME dateExpire;

public:
	std::array<char, 13> sBuyCharacterName{};
	// Methods
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_GuildSkillRecord, 27);

#pragma pack(push, 1)
struct GW_QuestRecord
{
	// Nested
	// Fields
public:
	int32_t usQRKey{};

public:
	std::array<char, 17> sQRValue{};
	// Methods
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_QuestRecord, 21);

#pragma pack(push, 1)
struct GW_ItemSlotBase : public ZRefCounted
{
	// Nested
	// Fields
public:
	TSecType<long> nItemID;

public:
	_LARGE_INTEGER liCashItemSN{};

public:
	_FILETIME dateExpire{};
	// Methods
public:
	virtual ~GW_ItemSlotBase();

public:
	void _dtor_0();

public:
	GW_ItemSlotBase(const GW_ItemSlotBase &arg0);

public:
	void _ctor_1(const GW_ItemSlotBase &arg0);

public:
	GW_ItemSlotBase();

	CTOR_DEFAULT(GW_ItemSlotBase);

public:
	void _ctor_0();

public:
	static ZRef<GW_ItemSlotBase> __cdecl CreateItem(long nType);

public:
	static ZRef<GW_ItemSlotBase> __cdecl Decode(CInPacket &iPacket);

public:
	void Encode(COutPacket &oPacket);

public:
	int32_t IsCashItem();

public:
	int32_t IsTimeLimitedItem();

public:
	long GetTypeIndex();

public:
	virtual int32_t IsProtectedItem();

public:
	virtual int32_t IsPreventSlipItem();

public:
	virtual int32_t IsSupportWarmItem();

public:
	virtual int32_t IsBindedItem();

public:
	virtual int32_t IsPossibleTradingItem();

public:
	int32_t IsSharedOnceItem();

public:
	virtual long GetType();

public:
	virtual long GetDataSize();

public:
	virtual long GetItemNumber();

public:
	virtual long GetLevelUpType();

public:
	virtual long GetLevel();

public:
	virtual long GetEXP();

public:
	virtual void SetItemNumber(short arg0);

public:
	virtual ZXString<char> GetItemTitle();

public:
	virtual void SetItemTitle(ZXString<char> arg0);

public:
	virtual void SetProtected();

public:
	virtual void ResetProtected();

public:
	virtual void SetPreventSlip();

public:
	virtual void SetWarmSupport();

public:
	virtual void SetBinded();

public:
	virtual void SetPossibleTrading();

public:
	void SetSharedOnce();

public:
	virtual void ResetPossibleTrading();

public:
	virtual void SetItemAttribute(short arg0);

public:
	int32_t IsSameItem(GW_ItemSlotBase *arg0);

public:
	virtual short GetItemAttribute();

public:
	virtual void SetLevel(unsigned char arg0);

public:
	virtual void SetEXP(long arg0);

public:
	virtual void BackwardUpdateCashItem(GW_ItemSlotBase *arg0);

public:
	virtual ZXString<char> DumpString();

protected:
	virtual void RawDecode(CInPacket &iPacket);

protected:
	virtual void RawEncode(COutPacket &oPacket);

public:
	GW_ItemSlotBase &operator=(GW_ItemSlotBase &arg0);

public:
	static GW_ItemSlotBase &_op_assign_41(GW_ItemSlotBase *pThis, GW_ItemSlotBase &arg0);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_ItemSlotBase, 40);

#pragma pack(push, 1)
struct GW_ItemSlotPet : public GW_ItemSlotBase
{
	// Nested
	// Fields
public:
	std::array<char, 13> sPetName{};

public:
	std::array<unsigned char, 2> _ZtlSecureTear_nLevel;

public:
	uint32_t _ZtlSecureTear_nLevel_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nTameness{};

public:
	uint32_t _ZtlSecureTear_nTameness_CS{};

public:
	std::array<unsigned char, 2> _ZtlSecureTear_nRepleteness;

public:
	uint32_t _ZtlSecureTear_nRepleteness_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nPetAttribute{};

public:
	uint32_t _ZtlSecureTear_nPetAttribute_CS{};

public:
	std::array<uint16_t, 2> _ZtlSecureTear_usPetSkill{};

public:
	uint32_t _ZtlSecureTear_usPetSkill_CS{};

public:
	_FILETIME dateDead;

public:
	std::array<long, 2> _ZtlSecureTear_nRemainLife{};

public:
	uint32_t _ZtlSecureTear_nRemainLife_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nAttribute{};

public:
	uint32_t _ZtlSecureTear_nAttribute_CS{};
	// Methods
public:
	virtual ~GW_ItemSlotPet();

public:
	void _dtor_0();

public:
	GW_ItemSlotPet(const GW_ItemSlotPet &arg0);

public:
	void _ctor_1(const GW_ItemSlotPet &arg0);

public:
	GW_ItemSlotPet();

public:
	void _ctor_0();

public:
	unsigned char __fastcall _ZtlSecureGet_nLevel() const;

public:
	unsigned char __fastcall _ZtlSecurePut_nLevel(unsigned char arg0);

public:
	short __fastcall _ZtlSecureGet_nTameness() const;

public:
	short __fastcall _ZtlSecurePut_nTameness(short arg0);

public:
	unsigned char __fastcall _ZtlSecureGet_nRepleteness() const;

public:
	unsigned char __fastcall _ZtlSecurePut_nRepleteness(unsigned char arg0);

public:
	short __fastcall _ZtlSecureGet_nPetAttribute() const;

public:
	short __fastcall _ZtlSecurePut_nPetAttribute(short arg0);

public:
	uint16_t __fastcall _ZtlSecureGet_usPetSkill() const;

public:
	uint16_t __fastcall _ZtlSecurePut_usPetSkill(uint16_t arg0);

public:
	long __fastcall _ZtlSecureGet_nRemainLife() const;

public:
	long __fastcall _ZtlSecurePut_nRemainLife(long arg0);

public:
	short __fastcall _ZtlSecureGet_nAttribute() const;

public:
	short __fastcall _ZtlSecurePut_nAttribute(short arg0);

public:
	virtual int32_t IsProtectedItem();

public:
	virtual int32_t IsPreventSlipItem();

public:
	virtual int32_t IsSupportWarmItem();

public:
	virtual int32_t IsBindedItem();

public:
	virtual int32_t IsPossibleTradingItem();

public:
	virtual long GetType();

public:
	virtual long GetDataSize();

public:
	virtual long GetItemNumber();

public:
	virtual long GetLevelUpType();

public:
	virtual long GetLevel();

public:
	virtual long GetEXP();

public:
	virtual void SetItemNumber(short nNumber);

public:
	virtual ZXString<char> GetItemTitle();

public:
	virtual void SetItemTitle(ZXString<char> sName);

public:
	virtual void SetProtected();

public:
	virtual void ResetProtected();

public:
	virtual void SetPreventSlip();

public:
	virtual void SetWarmSupport();

public:
	virtual void SetBinded();

public:
	virtual void SetPossibleTrading();

public:
	virtual void ResetPossibleTrading();

public:
	virtual void SetItemAttribute(short nNewAttribute);

public:
	virtual short GetItemAttribute();

public:
	virtual void SetLevel(unsigned char nNewLevel);

public:
	virtual void SetEXP(long nNewEXP);

public:
	virtual _LARGE_INTEGER GetSN();

public:
	virtual void GetNewSN();

public:
	void SetSyncSpeed();

public:
	int32_t IsSyncSpeed();

public:
	int32_t IsDead();

public:
	int32_t IsDeadByDate();

public:
	int32_t IsPetSkillExist(uint16_t usSkillID);

public:
	virtual void BackwardUpdateCashItem(GW_ItemSlotBase *pSrc);

public:
	virtual ZXString<char> DumpString();

protected:
	virtual void RawDecode(CInPacket &iPacket);

protected:
	virtual void RawEncode(COutPacket &oPacket);

public:
	GW_ItemSlotPet &operator=(GW_ItemSlotPet &arg0);

public:
	static GW_ItemSlotPet &_op_assign_53(GW_ItemSlotPet *pThis, GW_ItemSlotPet &arg0);
};
#pragma pack(pop)
STATIC_ASSERT_OFFSET_OF(GW_ItemSlotPet, _ZtlSecureTear_nRepleteness, 0x43);
STATIC_ASSERT_OFFSET_OF(GW_ItemSlotPet, _ZtlSecureTear_usPetSkill_CS, 0x55);
STATIC_ASSERT_OFFSET_OF(GW_ItemSlotPet, dateDead, 0x59);
STATIC_ASSERT_OFFSET_OF(GW_ItemSlotPet, _ZtlSecureTear_nRemainLife, 0x61);
STATIC_ASSERT_OFFSET_OF(GW_ItemSlotPet, _ZtlSecureTear_nAttribute_CS, 0x71);
STATIC_ASSERT_SIZE(GW_ItemSlotPet, 117);

#pragma pack(push, 1)
struct GW_ItemSlotEquip : public GW_ItemSlotBase
{
	// Nested
	// Fields
public:
	_LARGE_INTEGER liSN{};

public:
	std::array<char, 13> sTitle{};

public:
	_FILETIME ftEquipped;

public:
	long nPrevBonusExpRate{};

public:
	GW_ItemSlotEquipBase item;

public:
	GW_ItemSlotEquipOpt option;
	// Methods
public:
	virtual ~GW_ItemSlotEquip();

public:
	void _dtor_0();

public:
	GW_ItemSlotEquip(const GW_ItemSlotEquip &arg0);

public:
	void _ctor_1(const GW_ItemSlotEquip &arg0);

public:
	GW_ItemSlotEquip();

	CTOR_DEFAULT(GW_ItemSlotEquip);

public:
	void _ctor_0();

public:
	virtual int32_t IsProtectedItem();

public:
	virtual int32_t IsPreventSlipItem();

public:
	virtual int32_t IsSupportWarmItem();

public:
	virtual int32_t IsBindedItem();

public:
	virtual int32_t IsPossibleTradingItem();

public:
	virtual long GetType();

public:
	virtual long GetDataSize();

public:
	virtual long GetItemNumber();

public:
	virtual long GetLevelUpType();

public:
	virtual long GetLevel();

public:
	virtual long GetEXP();

public:
	virtual void SetItemNumber(short nNumber);

public:
	virtual ZXString<char> GetItemTitle();

public:
	virtual void SetItemTitle(ZXString<char> sName);

public:
	virtual void SetProtected();

public:
	virtual void ResetProtected();

public:
	virtual void SetPreventSlip();

public:
	virtual void SetWarmSupport();

public:
	virtual void SetBinded();

public:
	virtual void SetPossibleTrading();

public:
	virtual void ResetPossibleTrading();

public:
	virtual void SetItemAttribute(short nNewAttribute);

public:
	virtual short GetItemAttribute();

public:
	virtual void SetLevel(unsigned char nNewLevel);

public:
	virtual void SetEXP(long nNewEXP);

public:
	virtual int32_t IsReleased();

public:
	virtual void SetReleased(int32_t bReleased);

public:
	virtual unsigned char GetItemGrade();

public:
	virtual long GetIUCValue();

public:
	virtual void SetIUCValue(long nValue);

public:
	virtual long GetIUCAdd();

public:
	virtual void SetIUCAdd(long nAdd);

public:
	virtual void BackwardUpdateCashItem(GW_ItemSlotBase *pSrc);

public:
	virtual ZXString<char> DumpString();

protected:
	virtual void RawDecode(CInPacket &iPacket);

protected:
	virtual void RawEncode(COutPacket &oPacket);

public:
	int32_t IsSameEquipItem(GW_ItemSlotEquip *arg0);

public:
	GW_ItemSlotEquip &operator=(GW_ItemSlotEquip &arg0);

public:
	static GW_ItemSlotEquip &_op_assign_40(GW_ItemSlotEquip *pThis, GW_ItemSlotEquip &arg0);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_ItemSlotEquip, 313);

#pragma pack(push, 1)
struct GW_ItemSlotBundle : public GW_ItemSlotBase
{
	// Nested
	// Fields
public:
	std::array<uint16_t, 2> _ZtlSecureTear_nNumber{};

public:
	uint32_t _ZtlSecureTear_nNumber_CS{};

public:
	std::array<short, 2> _ZtlSecureTear_nAttribute{};

public:
	uint32_t _ZtlSecureTear_nAttribute_CS{};

public:
	_LARGE_INTEGER liSN;

public:
	std::array<char, 13> sTitle{};
	// Methods
public:
	virtual ~GW_ItemSlotBundle();

public:
	void _dtor_0();

public:
	GW_ItemSlotBundle(const GW_ItemSlotBundle &arg0);

public:
	void _ctor_1(const GW_ItemSlotBundle &arg0);

public:
	GW_ItemSlotBundle();

public:
	void _ctor_0();

public:
	uint16_t __fastcall _ZtlSecureGet_nNumber() const;

public:
	uint16_t __fastcall _ZtlSecurePut_nNumber(uint16_t arg0);

public:
	short __fastcall _ZtlSecureGet_nAttribute() const;

public:
	short __fastcall _ZtlSecurePut_nAttribute(short arg0);

public:
	virtual int32_t IsProtectedItem();

public:
	virtual int32_t IsPreventSlipItem();

public:
	virtual int32_t IsSupportWarmItem();

public:
	virtual int32_t IsBindedItem();

public:
	virtual int32_t IsPossibleTradingItem();

public:
	virtual long GetType();

public:
	virtual long GetDataSize();

public:
	virtual long GetItemNumber();

public:
	virtual long GetLevelUpType();

public:
	virtual long GetLevel();

public:
	virtual long GetEXP();

public:
	virtual void SetItemNumber(short nNumber);

public:
	virtual ZXString<char> GetItemTitle();

public:
	virtual void SetItemTitle(ZXString<char> sName);

public:
	virtual void SetProtected();

public:
	virtual void ResetProtected();

public:
	virtual void SetPreventSlip();

public:
	virtual void SetWarmSupport();

public:
	virtual void SetBinded();

public:
	virtual void SetPossibleTrading();

public:
	virtual void ResetPossibleTrading();

public:
	virtual void SetItemAttribute(short nNewAttribute);

public:
	virtual short GetItemAttribute();

public:
	virtual void SetLevel(unsigned char nNewLevel);

public:
	virtual void SetEXP(long nNewEXP);

public:
	virtual void BackwardUpdateCashItem(GW_ItemSlotBase *pSrc);

public:
	virtual ZXString<char> DumpString();

protected:
	virtual void RawDecode(CInPacket &iPacket);

protected:
	virtual void RawEncode(COutPacket &oPacket);

public:
	GW_ItemSlotBundle &operator=(GW_ItemSlotBundle &arg0);

public:
	static GW_ItemSlotBundle &_op_assign_36(GW_ItemSlotBundle *pThis, GW_ItemSlotBundle &arg0);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GW_ItemSlotBundle, 77);

// 856910 445
static std::array<FUNCKEY_MAPPED, 445> _D_S_ADEFAULTFKM{};

// 8596B0 445
static std::array<FUNCKEY_MAPPED, 445> _D_S_ADEFAULTFKM__1{};