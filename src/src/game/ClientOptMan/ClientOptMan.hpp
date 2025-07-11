// ClientOptMan.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"

// Level: 1 0x13040
class CClientOptMan;

class CClientOptMan : public TSingleton<CClientOptMan>
{
	// Nested
public:
	enum  TYPE_
{
	TYPE_FORCED_FLUSH_MOVEPATH = 1,
	TYPE_SYNC_MOB_MOVE_DIRECTION = 2
};

	// Fields
protected:
	ZMap<unsigned long, long, unsigned long> m_mOpt;
	// Methods
public:
	virtual ~CClientOptMan();

public:
	void _dtor_0();

public:
	CClientOptMan(const CClientOptMan &arg0);

public:
	void _ctor_1(const CClientOptMan &arg0);

	CTOR_DEFAULT(CClientOptMan);
public:
	CClientOptMan();

public:
	void _ctor_0();

public:
	void DecodeOpt(CInPacket &iPacket);

public:
	long GetOpt(unsigned long dwType);

public:
	CClientOptMan &operator=(const CClientOptMan &arg0);

public:
	static CClientOptMan &_op_assign_5(CClientOptMan *pThis, const CClientOptMan &arg0);
};
STATIC_ASSERT_SIZE(CClientOptMan, 28);

