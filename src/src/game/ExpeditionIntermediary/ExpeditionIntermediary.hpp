// ExpeditionIntermediary.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "DBBasic/DBBasic.hpp"
#include "PartyCommon/PartyCommon.hpp"
#include "Packet/Packet.hpp"

// Level: 0 0xa8d9
struct PacketExpNoti_Notice;
// Level: 0 0xa8e0
struct PacketExpNoti_MasterChanged;
// Level: 0 0xa907
struct PacketExpNoti_ResponseInvite;
// Level: 0 0xa8f7
struct PacketExpNoti_Invite;
// Level: 0 0xa8e7
struct PacketExpNoti_Modified;
// Level: 1 0xa936
class ExpeditionIntermediary;

struct PacketExpNoti_Notice {
// Nested
// Fields
	public:  ZXString<char> sCharName;
// Methods
	public:    ~PacketExpNoti_Notice();
		public: void _dtor_0();
	public:    PacketExpNoti_Notice(const PacketExpNoti_Notice& arg0);
		public: void _ctor_1( const PacketExpNoti_Notice& arg0);
	public:    PacketExpNoti_Notice(CInPacket& iPacket);
		public: void _ctor_0( CInPacket& iPacket);
	public:   void Encode(COutPacket& arg0);
		public:   void Decode(CInPacket& arg0);
		public:   PacketExpNoti_Notice& operator=(const PacketExpNoti_Notice& arg0);
		public: static PacketExpNoti_Notice& _op_assign_5(PacketExpNoti_Notice* pThis, const PacketExpNoti_Notice& arg0);
};
STATIC_ASSERT_SIZE(PacketExpNoti_Notice, 4);
struct PacketExpNoti_MasterChanged {
// Nested
// Fields
	public:  long nMasterPartyIndex{};
// Methods
	public:    PacketExpNoti_MasterChanged(CInPacket& iPacket);
		public: void _ctor_0( CInPacket& iPacket);
	public:   void Encode(COutPacket& arg0);
		public:   void Decode(CInPacket& arg0);
	};
STATIC_ASSERT_SIZE(PacketExpNoti_MasterChanged, 4);
struct PacketExpNoti_ResponseInvite {
// Nested
// Fields
	public:  long nResponse{};
	public:  ZXString<char> sName;
// Methods
	public:    ~PacketExpNoti_ResponseInvite();
		public: void _dtor_0();
	public:    PacketExpNoti_ResponseInvite(const PacketExpNoti_ResponseInvite& arg0);
		public: void _ctor_1( const PacketExpNoti_ResponseInvite& arg0);
	public:    PacketExpNoti_ResponseInvite(CInPacket& iPacket);
		public: void _ctor_0( CInPacket& iPacket);
	public:   void Encode(COutPacket& arg0);
		public:   void Decode(CInPacket& arg0);
		public:   PacketExpNoti_ResponseInvite& operator=(const PacketExpNoti_ResponseInvite& arg0);
		public: static PacketExpNoti_ResponseInvite& _op_assign_5(PacketExpNoti_ResponseInvite* pThis, const PacketExpNoti_ResponseInvite& arg0);
};
STATIC_ASSERT_SIZE(PacketExpNoti_ResponseInvite, 8);
struct PacketExpNoti_Invite {
// Nested
// Fields
	public:  long nLevel{};
	public:  long nJobCode{};
	public:  ZXString<char> sName;
	public:  long nPartyQuestID{};
// Methods
	public:    ~PacketExpNoti_Invite();
		public: void _dtor_0();
	public:    PacketExpNoti_Invite(const PacketExpNoti_Invite& arg0);
		public: void _ctor_1( const PacketExpNoti_Invite& arg0);
	public:    PacketExpNoti_Invite(CInPacket& iPacket);
		public: void _ctor_0( CInPacket& iPacket);
	public:   void Encode(COutPacket& arg0);
		public:   void Decode(CInPacket& arg0);
		public:   PacketExpNoti_Invite& operator=(const PacketExpNoti_Invite& arg0);
		public: static PacketExpNoti_Invite& _op_assign_5(PacketExpNoti_Invite* pThis, const PacketExpNoti_Invite& arg0);
};
STATIC_ASSERT_SIZE(PacketExpNoti_Invite, 16);
struct PacketExpNoti_Modified {
// Nested
// Fields
	public:  long nMasterPartyIndex{};
	public:  long nPartyIndex{};
	public:  PARTYMEMBER partyMember;
// Methods
	public:    PacketExpNoti_Modified(CInPacket& iPacket);
		public: void _ctor_0( CInPacket& iPacket);
	public:   void Encode(COutPacket& arg0);
		public:   void Decode(CInPacket& arg0);
	};
STATIC_ASSERT_SIZE(PacketExpNoti_Modified, 188);
class ExpeditionIntermediary: public TSingleton<ExpeditionIntermediary> {
// Nested
// Fields
	private:  EXPEDITION* m_pExpedition;
// Methods
	public:  virtual  ~ExpeditionIntermediary();
		public: void _dtor_0();
	public:    ExpeditionIntermediary(const ExpeditionIntermediary& arg0);
		public: void _ctor_1( const ExpeditionIntermediary& arg0);
	public:    ExpeditionIntermediary();
		public: void _ctor_0();
	public:   void OnPacket(long nRetCode, CInPacket& iPacket);
		public:   EXPEDITION* GetExpedition();
		public:   int32_t AmIMaster();
		public:   void OnPacketExpNoti_Get(long nRetCode, PacketExpNoti_Get packet);
		public:   void SendExpCreatePacket(long nSelectQuestID);
		public:   void SendExpInvitePacket(ZXString<char> sName);
		public:   void SendExpKickPacket(unsigned long dwCharID);
		public:   void SendExpChangeMasterPacket(unsigned long dwCharID);
		public:   void SendExpChangeBossPacket(long nPartyIndex, unsigned long dwCharID);
		public:   void SendExpRelocatePartyPacket(unsigned long dwCharID, long nToIndex);
		public:   void OnPacketExpNoti_Notice(long nRetCode, PacketExpNoti_Notice packet);
		public:   void OnPacketExpNoti_MasterChanged(long nRetCode, PacketExpNoti_MasterChanged packet);
		public:   void OnPacketExpNoti_Modified(long nRetCode, PacketExpNoti_Modified packet);
		public:   void OnPacketExpNoti_Invite(long nRetCode, PacketExpNoti_Invite packet);
		public:   void OnPacketExpNoti_Removed(long nRetCode, PacketExpNoti_Removed packet);
		public:   void OnPacketExpNoti_ResponseInvite(long nRetCode, PacketExpNoti_ResponseInvite packet);
		public:   void SendWithdrawPacket();
		public:   void SendResponseInvitePacket(ZXString<char> sMasterName, int32_t bAccept);
		public:   ExpeditionIntermediary& operator=(const ExpeditionIntermediary& arg0);
		public: static ExpeditionIntermediary& _op_assign_21(ExpeditionIntermediary* pThis, const ExpeditionIntermediary& arg0);
};
STATIC_ASSERT_SIZE(ExpeditionIntermediary, 8);


void __cdecl swap(char* _X, char* _Y);
void __cdecl RearrangePartyMember(PARTYMEMBER& nMemberCount);
void __cdecl swap_ZXString_char__(ZXString<char>& _X, ZXString<char>& _Y);
