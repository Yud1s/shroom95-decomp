// ITC_DBBasic.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"
#include "util/extra.h"

#include "Packet/Packet.hpp"
#include "GW/GW.hpp"

// Level: 1 0x17b0
struct ITCITEM;

struct ITCITEM : public ZRefCounted, public ITCAuctionProperty
{
	// Nested
	// Fields
public:
	ZRef<GW_ItemSlotBase> pItem;

public:
	short nProcessStatus{};

public:
	long nITCSN{};

public:
	long nPrice{};

public:
	ZXString<char> sRollbackUsageID;

public:
	_FILETIME ftITCDateExpired;

public:
	std::array<char, 50> sUserID{};

public:
	std::array<char, 50> sGameID{};

public:
	std::array<char, 100> sComment{};

public:
	long nContractFee{};

public:
	ZXString<char> sContractFeeTxId;

public:
	long nMinPrice{};

public:
	long nMaxPrice{};

public:
	long nUnitPrice{};
	// Methods
public:
	virtual ~ITCITEM();

public:
	void _dtor_0();

public:
	ITCITEM(const ITCITEM &arg0);

public:
	void _ctor_1(const ITCITEM &arg0);

	CTOR_DEFAULT(ITCITEM)
public:
	ITCITEM();

public:
	void _ctor_0();

public:
	static ZRef<ITCITEM> __cdecl Decode(CInPacket &iPacket);

public:
	void Encode(COutPacket &arg0);

public:
	ITCITEM &operator=(const ITCITEM &arg0);

public:
	static ITCITEM &_op_assign_5(ITCITEM *pThis, const ITCITEM &arg0);
};
STATIC_ASSERT_SIZE(ITCITEM, 272);

int32_t __cdecl IsITCTradeLimitItem(const GW_ItemSlotBase *pSocket);
