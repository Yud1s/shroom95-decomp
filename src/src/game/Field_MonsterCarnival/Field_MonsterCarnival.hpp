// Field_MonsterCarnival.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "User/User.hpp"
#include "Field/Field.hpp"
#include "Packet/Packet.hpp"

// Level: 1 0x2305c
class CField_MonsterCarnivalRevive;
// Level: 1 0x2300b
class CField_MonsterCarnival;

class CField_MonsterCarnivalRevive : public CField
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CField_MonsterCarnivalRevive();

public:
	void _dtor_0();

public:
	CField_MonsterCarnivalRevive(const CField_MonsterCarnivalRevive &arg0);

public:
	void _ctor_1(const CField_MonsterCarnivalRevive &arg0);

public:
	CField_MonsterCarnivalRevive();

public:
	void _ctor_0();

public:
	virtual long GetFieldType();

public:
	virtual void DecodeFieldSpecificData(CUser *pUser, CInPacket &iPacket);

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

public:
	void OnEnter(CInPacket &iPacket);

public:
	void OnShowGameResult(CInPacket &iPacket);

public:
	CField_MonsterCarnivalRevive &operator=(CField_MonsterCarnivalRevive &arg0);

public:
	static CField_MonsterCarnivalRevive &_op_assign_8(CField_MonsterCarnivalRevive *pThis, CField_MonsterCarnivalRevive &arg0);
};
STATIC_ASSERT_SIZE(CField_MonsterCarnivalRevive, 3488);
class CField_MonsterCarnival : public CField
{
	// Nested
public:
	struct MCITEM_INFO
	{
		// Nested
		// Fields
	public:
		long nID{};

	public:
		ZXString<char> sName;

	public:
		long nSpendCP{};

	public:
		ZXString<char> sDesc;
		// Methods
	public:
		~MCITEM_INFO();

	public:
		void _dtor_0();

	public:
		MCITEM_INFO(const CField_MonsterCarnival::MCITEM_INFO &arg0);

	public:
		void _ctor_1(const CField_MonsterCarnival::MCITEM_INFO &arg0);

	public:
		MCITEM_INFO();

	public:
		void _ctor_0();

	public:
		CField_MonsterCarnival::MCITEM_INFO &operator=(const CField_MonsterCarnival::MCITEM_INFO &arg0);

	public:
		static CField_MonsterCarnival::MCITEM_INFO &_op_assign_3(CField_MonsterCarnival::MCITEM_INFO *pThis, const CField_MonsterCarnival::MCITEM_INFO &arg0);
	};

public:
	enum kMonsterCarnival_FadeOutTime
	{
		kMonsterCarnival_FadeOutTime = 5000
	};
	// Fields
protected:
	ZArray<CField_MonsterCarnival::MCITEM_INFO> m_aSummonedMob;

protected:
	ZArray<CField_MonsterCarnival::MCITEM_INFO> m_aSkillMob;

protected:
	ZArray<CField_MonsterCarnival::MCITEM_INFO> m_aGuardian;

protected:
	long m_tFadeRemain{};

protected:
	int32_t m_bFadeOut{};
	// Methods
public:
	virtual ~CField_MonsterCarnival();

public:
	void _dtor_0();

public:
	CField_MonsterCarnival(const CField_MonsterCarnival &arg0);

public:
	void _ctor_1(const CField_MonsterCarnival &arg0);

public:
	CField_MonsterCarnival();

public:
	void _ctor_0();

public:
	virtual void Init(void *arg0);

public:
	virtual long GetFieldType();

public:
	virtual void DecodeFieldSpecificData(CUser *pUser, CInPacket &iPacket);

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

public:
	void CreateUIWindow();

public:
	void OnEnter(CInPacket &iPacket);

public:
	void OnPersonalCP(CInPacket &iPacket);

public:
	void OnTeamCP(CInPacket &iPacket);

public:
	void OnRequestResult(int32_t bResult, CInPacket &iPacket);

public:
	void OnProcessForDeath(CInPacket &iPacket);

public:
	void OnShowMemberOutMsg(CInPacket &iPacket);

public:
	void OnShowGameResult(CInPacket &iPacket);

public:
	CField_MonsterCarnival &operator=(CField_MonsterCarnival &arg0);

public:
	static CField_MonsterCarnival &_op_assign_15(CField_MonsterCarnival *pThis, CField_MonsterCarnival &arg0);
};
STATIC_ASSERT_SIZE(CField_MonsterCarnival, 3512);

class CField_MonsterCarnivalS2_Game : public CField_MonsterCarnival
{
	// Nested
	// Fields
private:
	long m_nMapType{};
	// Methods
public:
	virtual ~CField_MonsterCarnivalS2_Game();

public:
	void _dtor_0();

public:
	CField_MonsterCarnivalS2_Game(const CField_MonsterCarnivalS2_Game &arg0);

public:
	void _ctor_1(const CField_MonsterCarnivalS2_Game &arg0);

public:
	CField_MonsterCarnivalS2_Game();

public:
	void _ctor_0();

public:
	virtual void Init(void *pParam);

public:
	virtual long GetFieldType();

public:
	long GetMCarnivalS2MapType();

public:
	CField_MonsterCarnivalS2_Game &operator=(CField_MonsterCarnivalS2_Game &arg0);

public:
	static CField_MonsterCarnivalS2_Game &_op_assign_6(CField_MonsterCarnivalS2_Game *pThis, CField_MonsterCarnivalS2_Game &arg0);
};
STATIC_ASSERT_SIZE(CField_MonsterCarnivalS2_Game, 3520);

class CField_MonsterCarnivalWaitingRoom : public CField
{
	// Nested
	// Fields
private:
	long m_nMapType{};
	// Methods
public:
	virtual ~CField_MonsterCarnivalWaitingRoom();

public:
	void _dtor_0();

public:
	CField_MonsterCarnivalWaitingRoom(const CField_MonsterCarnivalWaitingRoom &arg0);

public:
	void _ctor_1(const CField_MonsterCarnivalWaitingRoom &arg0);

public:
	CField_MonsterCarnivalWaitingRoom();

public:
	void _ctor_0();

public:
	virtual void Init(void *pParam);

public:
	virtual long GetFieldType();

public:
	long GetMCarnivalS2MapType();

public:
	CField_MonsterCarnivalWaitingRoom &operator=(CField_MonsterCarnivalWaitingRoom &arg0);

public:
	static CField_MonsterCarnivalWaitingRoom &_op_assign_6(CField_MonsterCarnivalWaitingRoom *pThis, CField_MonsterCarnivalWaitingRoom &arg0);
};
STATIC_ASSERT_SIZE(CField_MonsterCarnivalWaitingRoom, 3496);