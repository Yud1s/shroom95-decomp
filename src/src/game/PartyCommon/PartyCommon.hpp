// PartyCommon.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "DBBasic/DBBasic.hpp"

// Level: 0 0xa8c9
struct EXPEDITION;
// Level: 1 0x9306
struct ADVER_COMMON;
// Level: 2 0x20c3e
struct PARTYADVER;
// Level: 2 0x20c54
struct EXPEDITION_ADVER;

struct EXPEDITION
{
	// Nested
public:
	enum  MAX_PARTY_COUNT
{
	MAX_PARTY_COUNT = 5
};

	// Fields
public:
	long nPartyQuestID{};

public:
	long nMasterPartyIndex{};

public:
	std::array<PARTYMEMBER, 5> aParty{};
	// Methods
public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);

public:
	ZXString<char> GetMasterName();

public:
	unsigned long GetMasterID();

public:
	long GetMemberCount();

public:
	long GetMemberLimit();

public:
	long GetPartyIndex_1(ZXString<char> sCharacterName);

public:
	long GetPartyIndex_0(unsigned long dwCharacterID);

public:
	long GetMaxPartyIndex();

public:
	long GetPartyCount();

public:
	unsigned long GetCharacterID(ZXString<char> sCharacterName);

public:
	int32_t IsMember(ZXString<char> sCharacterName);

public:
	int32_t IsMember_(unsigned long arg0);
};
STATIC_ASSERT_SIZE(EXPEDITION, 900);

struct PacketExpNoti_Get
{
	// Nested
	// Fields
public:
	EXPEDITION expedition;
	// Methods
	// TODO
	/*public:    PacketExpNoti_Get(CInPacket& arg0);
		public: void _ctor_0( CInPacket& arg0);
	public:   void Encode(COutPacket& arg0);
		public:   void Decode(CInPacket& arg0);*/
};
STATIC_ASSERT_SIZE(PacketExpNoti_Get, 900);

struct PacketExpNoti_Removed
{
	// Nested
	// Fields
	// Methods
	//TODO
	/*public:    PacketExpNoti_Removed(CInPacket& arg0);
		public: void _ctor_0( CInPacket& arg0);
	public:   void Encode(COutPacket& arg0);
		public:   void Decode(CInPacket& arg0);*/
};
STATIC_ASSERT_SIZE(PacketExpNoti_Removed, 1);

struct ADVER_COMMON : public ZRefCounted
{
	// Nested
public:
	enum  PARTYADVER_NAMEMAX
{
	PARTYADVER_NAMEMAX = 60
};
	// Fields
public:
	long nGroupID{};

public:
	std::array<char, 61> sName{};
	// Methods
public:
	virtual ~ADVER_COMMON();

public:
	void _dtor_0();

public:
	ADVER_COMMON(const ADVER_COMMON &arg0);

public:
	void _ctor_1( const ADVER_COMMON &arg0);

	CTOR_DEFAULT(ADVER_COMMON)
public:
	ADVER_COMMON();

public:
	void _ctor_0();

public:
	virtual void Encode(COutPacket &arg0);

public:
	virtual void Decode(CInPacket &arg0);

public:
	virtual int32_t IsBossOnline();

public:
	virtual ZXString<char> GetBossName();

public:
	virtual long GetMemberCount();

public:
	virtual long GetMemberMax();

public:
	virtual long GetGroupID();

public:
	virtual unsigned long GetBossID();

public:
	virtual unsigned long GetMasterID();

public:
	virtual ZArray<PARTYMEMBER> GetPartyMember();

public:
	static ZRef<ADVER_COMMON> __cdecl CreateAdver(long nPartyQuestID);

public:
	ADVER_COMMON &operator=(const ADVER_COMMON &arg0);

public:
	static ADVER_COMMON &_op_assign_14(ADVER_COMMON *pThis, const ADVER_COMMON &arg0);
};
STATIC_ASSERT_SIZE(ADVER_COMMON, 80);
struct PARTYADVER : public ADVER_COMMON
{
	// Nested
	// Fields
public:
	PARTYMEMBER partyMember;
	// Methods
public:
	virtual ~PARTYADVER();

public:
	void _dtor_0();

public:
	PARTYADVER(const PARTYADVER &arg0);

public:
	void _ctor_1( const PARTYADVER &arg0);

	CTOR_DEFAULT(PARTYADVER)
public:
	PARTYADVER();

public:
	void _ctor_0();

public:
	virtual void Encode(COutPacket &oPacket);

public:
	virtual void Decode(CInPacket &iPacket);

public:
	virtual int32_t IsBossOnline();

public:
	virtual ZXString<char> GetBossName();

public:
	virtual long GetMemberCount();

public:
	virtual long GetMemberMax();

public:
	virtual unsigned long GetBossID();

public:
	virtual ZArray<PARTYMEMBER> GetPartyMember();

public:
	PARTYADVER &operator=(const PARTYADVER &arg0);

public:
	static PARTYADVER &_op_assign_11(PARTYADVER *pThis, const PARTYADVER &arg0);
};
STATIC_ASSERT_SIZE(PARTYADVER, 260);
struct EXPEDITION_ADVER : public ADVER_COMMON
{
	// Nested
	// Fields
public:
	EXPEDITION expedition;
	// Methods
public:
	virtual ~EXPEDITION_ADVER();

public:
	void _dtor_0();

public:
	EXPEDITION_ADVER(const EXPEDITION_ADVER &arg0);

public:
	void _ctor_1( const EXPEDITION_ADVER &arg0);

	CTOR_DEFAULT(EXPEDITION_ADVER)
public:
	EXPEDITION_ADVER();

public:
	void _ctor_0();

public:
	virtual void Encode(COutPacket &oPacket);

public:
	virtual void Decode(CInPacket &iPacket);

public:
	virtual int32_t IsBossOnline();

public:
	virtual ZXString<char> GetBossName();

public:
	virtual long GetMemberCount();

public:
	virtual long GetMemberMax();

public:
	virtual unsigned long GetBossID();

public:
	virtual ZArray<PARTYMEMBER> GetPartyMember();

public:
	virtual unsigned long GetMasterID();

public:
	EXPEDITION_ADVER &operator=(const EXPEDITION_ADVER &arg0);

public:
	static EXPEDITION_ADVER &_op_assign_12(EXPEDITION_ADVER *pThis, const EXPEDITION_ADVER &arg0);
};
STATIC_ASSERT_SIZE(EXPEDITION_ADVER, 980);

CInPacket &__op_shift_right_1(CInPacket &iPacket, EXPEDITION &val);
