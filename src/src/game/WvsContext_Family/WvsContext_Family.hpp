// WvsContext_Family.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"

// Level: 0 0x1f08
struct Privilege;
// Level: 1 0xb2cc
struct PrivilegeItem;

struct Privilege
{
	// Nested
public:
	enum Type_
	{
		Type_Exp = 2,
		Type_Drop = 3,
		Type_Family = 4
	};
	// Fields
public:
	unsigned long tEnd{};

public:
	unsigned char bType{};

public:
	long nIndex{};

public:
	unsigned long dwIncExpRate{};

public:
	unsigned long dwIncDropRate{};
	// Methods
public:
	Privilege();

public:
	void _ctor_0();

public:
	void Reset();

public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);
};
STATIC_ASSERT_SIZE(Privilege, 20);
struct PrivilegeItem : public ZRefCounted
{
	// Nested
public:
	enum Type
{
	SP_Jump = 0,
	SP_Summon = 1,
	SP_IncDropRate = 2,
	SP_IncExpRate = 3,
	SP_Family = 4
};
	// Fields
public:
	PrivilegeItem::Type type;

public:
	long nFame{};

public:
	unsigned long dwDayLimit{};

public:
	ZXString<char> strName;

public:
	ZXString<char> strDesc;
	// Methods
public:
	virtual ~PrivilegeItem();

public:
	void _dtor_0();

public:
	PrivilegeItem(const PrivilegeItem &arg0);

public:
	void _ctor_1(const PrivilegeItem &arg0);

public:
	PrivilegeItem();

public:
	void _ctor_0();

public:
	PrivilegeItem &operator=(const PrivilegeItem &arg0);

public:
	static PrivilegeItem &_op_assign_3(PrivilegeItem *pThis, const PrivilegeItem &arg0);
};
STATIC_ASSERT_SIZE(PrivilegeItem, 32);


