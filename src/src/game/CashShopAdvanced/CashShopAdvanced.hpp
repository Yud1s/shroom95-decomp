// CashShopAdvanced.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CashShop/CashShop.hpp"
#include "Packet/Packet.hpp"

// Level: 1 0xbdaa
struct CS_COMMODITY_EX;
// Level: 1 0xbe3a
class CWvsCommodityEx;

struct CS_COMMODITY_EX : public CS_COMMODITY
{
	// Nested
	// Fields
public:
	int32_t m_bMulti{};

public:
	ZArray<ZRef<CS_COMMODITY_EX>> aPackedCommodities;
	// Methods
public:
	virtual ~CS_COMMODITY_EX();

public:
	void _dtor_0();

public:
	CS_COMMODITY_EX(const CS_COMMODITY_EX &arg0);

public:
	void _ctor_1( const CS_COMMODITY_EX &arg0);
	CTOR_DEFAULT(CS_COMMODITY_EX)
public:
	CS_COMMODITY_EX();

public:
	void _ctor_0();

public:
	ZRef<CS_COMMODITY> ToOldData();

public:
	int32_t IsMulti();

public:
	uint32_t GetPackedCount();

public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &arg0);

public:
	void EncodeModifiedData(COutPacket &arg0);

public:
	void DecodeModifiedData(CInPacket &arg0);

public:
	CS_COMMODITY_EX &operator=(CS_COMMODITY_EX &arg0);

public:
	static CS_COMMODITY_EX &_op_assign_10(CS_COMMODITY_EX *pThis, CS_COMMODITY_EX &arg0);

public:
	CS_COMMODITY_EX &operator=(CS_COMMODITY &arg0);

public:
	static CS_COMMODITY_EX &_op_assign_11(CS_COMMODITY_EX *pThis, CS_COMMODITY &arg0);

public:
	long GetMinPrice();

public:
	long GetMaxPrice();
};
STATIC_ASSERT_SIZE(CS_COMMODITY_EX, 128);
class CWvsCommodityEx : public TSingleton<CWvsCommodityEx>
{
	// Nested
public:
	struct _CommItem
	{
		// Nested
		// Fields
	public:
		unsigned long nItemID{};

	public:
		ZRef<CS_COMMODITY_EX> pCommEx;
		// Methods
	public:
		~_CommItem();

	public:
		void _dtor_0();

	public:
		_CommItem(const CWvsCommodityEx::_CommItem &arg0);

	public:
		void _ctor_1( const CWvsCommodityEx::_CommItem &arg0);

	public:
		_CommItem();

	public:
		void _ctor_0();

	public:
		CWvsCommodityEx::_CommItem &operator=(const CWvsCommodityEx::_CommItem &arg0);

	public:
		static CWvsCommodityEx::_CommItem &_op_assign_3(CWvsCommodityEx::_CommItem *pThis, const CWvsCommodityEx::_CommItem &arg0);
	};
	// Fields
private:
	ZArray<ZRef<CS_COMMODITY_EX>> m_aCommodityEx;
	// Methods
public:
	~CWvsCommodityEx();

public:
	void _dtor_0();

public:
	CWvsCommodityEx(const CWvsCommodityEx &arg0);

public:
	void _ctor_1( const CWvsCommodityEx &arg0);

public:
	CWvsCommodityEx();

public:
	void _ctor_0();

public:
	void LoadCommodityEx();

public:
	ZArray<ZRef<CS_COMMODITY_EX>> &GetCommodityEx();

public:
	const ZRef<CS_COMMODITY_EX> GetCommodityExByIndex(long nIdx);

public:
	long GetCommodityExIndexBySN(long nSN);

public:
	const ZRef<CS_COMMODITY_EX> GetCommodityExBySN(long nSN);

protected:
	static void __cdecl _SortByPrice(ZArray<ZRef<CS_COMMODITY_EX>> &array, uint32_t start, uint32_t count, int32_t bAscending);

protected:
	static void __cdecl _SortBySN(ZArray<ZRef<CS_COMMODITY_EX>> &array, uint32_t start, uint32_t count, int32_t bAscending);

protected:
	static void __cdecl _SortByCategory(ZArray<ZRef<CS_COMMODITY_EX>> &arg0, uint32_t arg1, uint32_t arg2, int32_t arg3);

protected:
	static void __cdecl _UnpackByCategory(ZArray<ZRef<CS_COMMODITY_EX>> &arg0, long arg1, long arg2);

protected:
	static void __cdecl _ProcessItemsInMultipleCategory(ZArray<ZRef<CS_COMMODITY_EX>> &arg0);

protected:
	static void __cdecl __MakeShowOnOtherCategory(CWvsCommodityEx::_CommItem &arg0, CWvsCommodityEx::_CommItem &arg1);

protected:
	static void __cdecl __TryAddToPackedListIfDifferent(ZRef<CS_COMMODITY_EX> &arg0, ZRef<CS_COMMODITY_EX> &arg1);

public:
	CWvsCommodityEx &operator=(const CWvsCommodityEx &arg0);

public:
	static CWvsCommodityEx &_op_assign_15(CWvsCommodityEx *pThis, const CWvsCommodityEx &arg0);
};
STATIC_ASSERT_SIZE(CWvsCommodityEx, 4);
