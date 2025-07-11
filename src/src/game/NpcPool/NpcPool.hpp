// NpcPool.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "IG/IG.hpp"
#include "Npc/Npc.hpp"
#include "Packet/Packet.hpp"

// Level: 1 0xc4bb
class CNpcPool;

class CNpcPool : public IGObj, public TSingleton<CNpcPool>
{
	// Nested
public:
	struct NPCENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		ZRef<CNpc> pNpc;

	public:
		__POSITION *posList{};

	public:
		unsigned char bFlag{};
		// Methods
	public:
		virtual ~NPCENTRY();

	public:
		void _dtor_0();

	public:
		NPCENTRY(const CNpcPool::NPCENTRY &arg0);

	public:
		void _ctor_1( const CNpcPool::NPCENTRY &arg0);

	public:
		NPCENTRY();

	public:
		void _ctor_0();

	public:
		CNpcPool::NPCENTRY &operator=(const CNpcPool::NPCENTRY &arg0);

	public:
		static CNpcPool::NPCENTRY &_op_assign_3(CNpcPool::NPCENTRY *pThis, const CNpcPool::NPCENTRY &arg0);
	};

public:
	enum UnnamedEnum50353
{
	VIEWSPLIT = 1,
	LOCALNPC = 2
};
	// Fields
protected:
	ZMap<unsigned long, __POSITION *, unsigned long> m_mNpc;

protected:
	ZList<CNpcPool::NPCENTRY> m_lNpc;

protected:
	long m_nTickCount{};

protected:
	uint16_t m_wDay{};

private:
	ZMap<unsigned long, int, unsigned long> m_mDisabledNpc;
	// Methods
public:
	virtual ~CNpcPool();

public:
	void _dtor_0();

public:
	CNpcPool(const CNpcPool &arg0);

public:
	void _ctor_1( const CNpcPool &arg0);

public:
	CNpcPool();

public:
	void _ctor_0();

public:
	CNpc *FindNpc(const tagPOINT &pt, long nRadius);
	CNpc *FindNpc_1(const tagPOINT &pt, long nRadius) {
		return FindNpc(pt, nRadius);
	}

public:
	CNpc *FindNpc(const tagPOINT &pt);
	CNpc *FindNpc_0(const tagPOINT &pt) {
		return FindNpc(pt);
	}

public:
	virtual void Update();

public:
	void OnPacket(long nType, CInPacket &iPacket);

protected:
	void OnNpcPacket(long nType, CInPacket &iPacket);

protected:
	void OnNpcTemplatePacket(long nType, CInPacket &iPacket);

protected:
	void OnNpcEnterField(CInPacket &iPacket);

protected:
	void OnNpcLeaveField(CInPacket &iPacket);

protected:
	void OnNpcChangeController(CInPacket &iPacket);

protected:
	void OnNpcImitateData(CInPacket &iPacket);

protected:
	void OnUpdateLimitedDisableInfo(CInPacket &iPacket);

protected:
	void SetLocalNpc(unsigned long dwNpcId, CInPacket &iPacket);

protected:
	void SetRemoteNpc(unsigned long dwNpcId);

protected:
	void RemoveAllNpc();

protected:
	CNpc *GetNpc(unsigned long dwNpcId);

protected:
	CNpcPool::NPCENTRY *GetNpcEntry(unsigned long arg0);

public:
	CNpc *FindNpcByTemplateID(unsigned long dwTemplateID);

public:
	int32_t IsNpcEnabled(unsigned long dwTemplateID);

public:
	CNpcPool &operator=(const CNpcPool &arg0);

public:
	static CNpcPool &_op_assign_21(CNpcPool *pThis, const CNpcPool &arg0);
};
STATIC_ASSERT_SIZE(CNpcPool, 80);


