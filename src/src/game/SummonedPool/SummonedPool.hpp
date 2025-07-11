// SummonedPool.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "Summoned/Summoned.hpp"

// Level: 1 0x119ae
class CSummonedPool;

class CSummonedPool: public TSingleton<CSummonedPool> {
// Nested
// Fields
	protected:  ZMap<unsigned long,ZRef<ZList<ZRef<CSummoned> > >,unsigned long> m_mpSummonedList;
// Methods
	public:  virtual  ~CSummonedPool();
		public: void _dtor_0();
	public:    CSummonedPool(const CSummonedPool& arg0);
		public: void _ctor_1( const CSummonedPool& arg0);
	public:    CSummonedPool();
		public: void _ctor_0();
	public:   void Update(long tCur);
		public:   void OnPacket(long nType, CInPacket& iPacket);
		protected:   void OnCreated(unsigned long dwCharacterID, CInPacket& iPacket);
		protected:   void OnRemoved(unsigned long dwSummonedID, CInPacket& pSummonedList);
		protected:   void OnMove(unsigned long dwCharacterID, CInPacket& iPacket);
		protected:   void OnAttack(unsigned long dwCharacterID, CInPacket& iPacket);
		protected:   void OnSkill(unsigned long dwCharacterID, CInPacket& iPacket);
		protected:   void OnHit(unsigned long dwCharacterID, CInPacket& iPacket);
		public:   CSummonedPool& operator=(const CSummonedPool& arg0);
		public: static CSummonedPool& _op_assign_11(CSummonedPool* pThis, const CSummonedPool& arg0);
};
STATIC_ASSERT_SIZE(CSummonedPool, 28);


