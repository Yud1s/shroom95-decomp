// Field_Coconut.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "Field/Field.hpp"
#include "User/User.hpp"

// Level: 1 0x231fd
class CField_Coconut;

class CField_Coconut: public CField {
// Nested
public: struct HITINFO {
// Nested
// Fields
	public:  long nTarget{};
	public:  long nState{};
	public:  long tStart{};
// Methods
};
// Fields
	protected:  ZList<CField_Coconut::HITINFO> m_lHitInfo;
	protected:  long m_nCoconuts{};
	protected:  std::array<long, 2> m_anScore{};
	protected:  long m_tFinish{};
	protected:  long m_tLastUpdate{};
	protected:  std::array<std::array<std::array<long, 60>, 2>, 2> m_aaaAvatarHairEquip;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasBoard;
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerBoard;
// Methods
	public:  virtual  ~CField_Coconut();
		public: void _dtor_0();
	public:    CField_Coconut(const CField_Coconut& arg0);
		public: void _ctor_1( const CField_Coconut& arg0);
	public:    CField_Coconut();
		public: void _ctor_0();
	public:  virtual void Init(void* arg0);
		public:  virtual void Update();
		public:  virtual void OnPacket(long nType, CInPacket& iPacket);
		public:  virtual void DecodeFieldSpecificData(CUser* pUser, CInPacket& iPacket);
		public:  virtual int32_t BasicActionAttack();
		protected:   void OnCoconutScore(CInPacket& iPacket);
		protected:   void OnCoconutHit(CInPacket& iPacket);
		protected:  virtual void OnClock(CInPacket& iPacket);
		protected:   void HandleCtrlKeyDown();
		protected:   void DrawBoard();
		protected:  static ZXString<char> __cdecl GetObjectName(long n);
		public:   CField_Coconut& operator=(CField_Coconut& arg0);
		public: static CField_Coconut& _op_assign_14(CField_Coconut* pThis, CField_Coconut& arg0);
};
STATIC_ASSERT_SIZE(CField_Coconut, 4496);


