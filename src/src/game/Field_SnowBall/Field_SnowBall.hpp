// Field_SnowBall.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Field/Field.hpp"
#include "Packet/Packet.hpp"

// Level: 1 0x22f0b
class CField_SnowBall;

class CField_SnowBall : public CField
{
	// Nested
public:
	struct DAMAGEINFO
	{
		// Nested
		// Fields
	public:
		long nTarget{};

	public:
		long nDamage{};

	public:
		long tStart{};
		// Methods
	};

public:
	static RANGE ms_rgBall;

public:
	enum  UnnamedEnum143051
{
	UNDEF = 255,
	STOP = 0,
	START = 1,
	END0 = 2,
	END1 = 3
};
	// Fields
protected:
	long m_nState{};

protected:
	std::array<CSnowBall, 2> m_aSnowBall{};

protected:
	std::array<CSnowMan, 2> m_aSnowMan{};

protected:
	long m_nDamageSnowBall{};

protected:
	std::array<long, 2> m_nDamageSnowMan{};

protected:
	ZList<CField_SnowBall::DAMAGEINFO> m_lDamageInfo;
	// Methods
public:
	virtual ~CField_SnowBall();

public:
	void _dtor_0();

public:
	CField_SnowBall(const CField_SnowBall &arg0);

public:
	void _ctor_1( const CField_SnowBall &arg0);

public:
	CField_SnowBall();

public:
	void _ctor_0();

public:
	virtual void Init(void *arg0);

public:
	virtual void Update();

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

public:
	virtual int32_t BasicActionAttack();

protected:
	void OnSnowBallState(CInPacket &iPacket);

protected:
	void OnSnowBallHit(CInPacket &iPacket);

protected:
	void OnSnowBallMsg(CInPacket &iPacket);

protected:
	void OnSnowBallTouch(CInPacket &iPacket);

protected:
	void SnowBallHit(long nTarget, long nDamage, long tDelay);

public:
	static int32_t __cdecl IsInRange(long arg0);

public:
	CField_SnowBall &operator=(CField_SnowBall &arg0);

public:
	static CField_SnowBall &_op_assign_13(CField_SnowBall *pThis, CField_SnowBall &arg0);
};
STATIC_ASSERT_SIZE(CField_SnowBall, 3720);


