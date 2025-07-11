// UserPool.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UserLocal/UserLocal.hpp"
#include "IG/IG.hpp"
#include "UserRemote/UserRemote.hpp"
#include "User/User.hpp"
#include "Packet/Packet.hpp"

// Level: 1 0xab6d
struct USERREMOTE_ENTRY;
// Level: 1 0xa157
class CUserPool;

struct USERREMOTE_ENTRY : public ZRefCounted
{
	// Nested
	// Fields
public:
	ZRef<CUserRemote> pUserRemote;

public:
	__POSITION *posList{};

public:
	__POSITION *posDelayedLoad{};
	// Methods
public:
	virtual ~USERREMOTE_ENTRY();

public:
	void _dtor_0();

public:
	USERREMOTE_ENTRY(const USERREMOTE_ENTRY &arg0);

public:
	void _ctor_1( const USERREMOTE_ENTRY &arg0);

public:
	USERREMOTE_ENTRY();

public:
	void _ctor_0();

public:
	USERREMOTE_ENTRY &operator=(const USERREMOTE_ENTRY &arg0);

public:
	static USERREMOTE_ENTRY &_op_assign_3(USERREMOTE_ENTRY *pThis, const USERREMOTE_ENTRY &arg0);
};
STATIC_ASSERT_SIZE(USERREMOTE_ENTRY, 28);
class CUserPool : public IGObj, public TSingleton<CUserPool>
{
	// Nested
public:
	struct COUPLEENTRY
	{
		// Nested
		// Fields
	public:
		unsigned long dwCharacterID{};

	public:
		unsigned long dwPairCharacterID{};

	public:
		_LARGE_INTEGER liSN;

	public:
		_LARGE_INTEGER liPairSN;

	public:
		long nItemID{};

	public:
		long nStatus{};
		// Methods
	};

public:
	struct FRIENDENTRY
	{
		// Nested
		// Fields
	public:
		unsigned long dwCharacterID{};

	public:
		unsigned long dwPairCharacterID{};

	public:
		_LARGE_INTEGER liSN;

	public:
		_LARGE_INTEGER liPairSN;

	public:
		long nItemID{};

	public:
		long nStatus{};
		// Methods
	};

public:
	struct NEWYEARCARDENTRY
	{
		// Nested
		// Fields
	public:
		unsigned long dwCharacterID{};

	public:
		unsigned long dwOtherCharacterID{};

	public:
		unsigned long dwSN{};

	public:
		long nItemID{};

	public:
		long nStatus{};
		// Methods
	};

public:
	struct MARRIAGEENTRY
	{
		// Nested
		// Fields
	public:
		unsigned long dwCharacterID{};

	public:
		unsigned long dwPairCharacterID{};

	public:
		long nWeddingRingID{};

	public:
		long nStatus{};
		// Methods
	};

public:
	struct COUPLECHAIRENTRY
	{
		// Nested
		// Fields
	public:
		unsigned long dwCharacterID{};

	public:
		unsigned long dwPairCharacterID{};

	public:
		long nItemID{};

	public:
		long nStatus{};
		// Methods
	};
	// Fields
protected:
	ZRef<CUserLocal> m_pUserLocal;

protected:
	ZMap<unsigned long, ZRef<USERREMOTE_ENTRY>, unsigned long> m_mUserRemote;

protected:
	ZList<ZRef<USERREMOTE_ENTRY>> m_lUserRemote;

protected:
	ZList<CUserPool::COUPLEENTRY> m_lCouple;

protected:
	long m_tLoadEnd{};

protected:
	long m_tCooltimeEnd{};

protected:
	ZList<ZRef<CUserRemote>> m_lDelayedLoad;

protected:
	ZList<CUserPool::FRIENDENTRY> m_lFriend;

protected:
	ZList<CUserPool::NEWYEARCARDENTRY> m_lNewYearCard;

protected:
	ZMap<unsigned long, ZList<unsigned long>, unsigned long> m_lAllNewYearCardEntry;

protected:
	ZList<CUserPool::MARRIAGEENTRY> m_lMarriage;

protected:
	ZList<CUserPool::COUPLECHAIRENTRY> m_lCoupleChair;
	// Methods
public:
	virtual ~CUserPool();

public:
	void _dtor_0();

public:
	CUserPool(const CUserPool &arg0);

public:
	void _ctor_1( const CUserPool &arg0);

public:
	CUserPool();

public:
	void _ctor_0();

public:
	CUserLocal *GetLocalUser();

public:
	void CreateLocalUser(ZRef<CharacterData> pDataUser);

public:
	CUserRemote *GetRemoteUser(unsigned long dwCharacterID);

public:
	ZList<ZRef<USERREMOTE_ENTRY>> &GetRemoteUserList();

public:
	long GetRemoteUserCount();

public:
	CUserRemote *FindRemoteUser(const tagPOINT &pt);

public:
	CUserRemote *FindRemoteUserByName(const char *sName);

public:
	CUserRemote *FindBalloon(const tagPOINT &pt);

public:
	CUser *FindPet(const tagPOINT &pt);

public:
	long FindHitUserInRect(const tagRECT &arg0, CUserRemote **arg1, long arg2);

public:
	long FindHitUserInManyRects(const ZArray<tagRECT> &arg0, CUserRemote **arg1, long arg2);

public:
	void DoHealNearHealingRobot();

public:
	long FindHitUserInRectWithReason(const tagRECT &rc, CUserRemote **apUser, long nMaxCount, long nReason);

public:
	CUser *GetUser(unsigned long dwCharacterID);

public:
	void RemoveAllUser();

public:
	virtual void Update();

public:
	void OnPacket(long nType, CInPacket &iPacket);

public:
	void OnCoupleRecordAdd(const _LARGE_INTEGER &liSN, CUser *pUser, long nItemID);

public:
	void OnCoupleRecordRemove(const _LARGE_INTEGER &liSN);

public:
	void OnFriendRecordAdd(const _LARGE_INTEGER &liSN, CUser *pUser, long nItemID);

public:
	void OnFriendRecordRemove(const _LARGE_INTEGER &liSN);

public:
	void OnMarriageRecordAdd(unsigned long dwCharacterID, CUser *pUser, long nRingID);

public:
	void OnMarriageRecordRemove(unsigned long dwCharacterId);

public:
	void OnNewYearCardRecordAdd(CUser *pUser, unsigned long dwSN);

public:
	void OnNewYearCardRecordRemove(unsigned long dwSN);

public:
	void OnNewYearCardRecordRemoveAll(unsigned long dwCharacterID);

public:
	void OnCoupleChairRecordAdd(unsigned long dwCharacterId, long nItemID);

public:
	void OnCoupleChairRecordRemove(unsigned long dwCharacterId);

protected:
	void OnUserEnterField(CInPacket &iPacket);

protected:
	void OnUserLeaveField(CInPacket &iPacket);

protected:
	void OnUserCommonPacket(long nType, CInPacket &iPacket);

protected:
	void OnUserRemotePacket(long nType, CInPacket &iPacket);

protected:
	void OnUserLocalPacket(long nType, CInPacket &iPacket);

public:
	CUserPool &operator=(const CUserPool &arg0);

public:
	static CUserPool &_op_assign_36(CUserPool *pThis, const CUserPool &arg0);
};
STATIC_ASSERT_SIZE(CUserPool, 208);
