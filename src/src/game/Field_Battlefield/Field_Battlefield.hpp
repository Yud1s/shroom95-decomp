// Field_Battlefield.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Field/Field.hpp"
#include "User/User.hpp"
#include "Packet/Packet.hpp"

class CScoreboard_Battlefield;

// Level: 1 0x1432e
class CField_Battlefield;

class CField_Battlefield: public CField {
// Nested
// Fields
	protected:  long m_nWolves{};
	protected:  long m_nSheep{};
	protected:  ZRef<CScoreboard_Battlefield> m_pScoardboard;
	protected:  ZArray<ZXString<char> > m_asSheepMessageText;
	protected:  ZArray<ZXString<char> > m_asWolvesMessageText;
// Methods
	public:  virtual  ~CField_Battlefield();
		public: void _dtor_0();
	public:    CField_Battlefield(const CField_Battlefield& arg0);
		public: void _ctor_1( const CField_Battlefield& arg0);
	public:    CField_Battlefield();
		public: void _ctor_0();
	public:  virtual void Init(void* pParam);
		public:  virtual long GetFieldType();
		public:  virtual void DecodeFieldSpecificData(CUser* pUser, CInPacket& iPacket);
		public:  virtual void OnPacket(long nType, CInPacket& iPacket);
		public:   ZXString<char> GetTeamMessageText(long nTeam);
		protected:   void OnEnter(CInPacket& arg0);
		protected:   void OnScoreUpdate(CInPacket& iPacket);
		protected:   void OnTeamChanged(CInPacket& iPacket);
		protected:  virtual void OnClock(CInPacket& iPacket);
		protected:   void SetUserTeam(CUser* pUser, long nTeam);
		protected:   void DrawScore();
		public:   CField_Battlefield& operator=(CField_Battlefield& arg0);
		public: static CField_Battlefield& _op_assign_14(CField_Battlefield* pThis, CField_Battlefield& arg0);
};
STATIC_ASSERT_SIZE(CField_Battlefield, 3512);


