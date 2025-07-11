// Field_KillCount.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Field/Field.hpp"
#include "Packet/Packet.hpp"

class CBitmapNumber;

// Level: 1 0x23125
class CField_KillCount;

class CField_KillCount: public CField {
// Nested
public: enum  k {
	kWidth = 300,
	kHeight = 300
};
// Fields
	public:  ZRef<CBitmapNumber> m_pBN;
	public:  _x_com_ptr<IWzGr2DLayer> m_pLayerClear;
	public:  _x_com_ptr<IWzGr2DLayer> m_pLayerCount;
	public:  long m_nKill{};
	public:  long m_nOnKill{};
// Methods
	public:  virtual  ~CField_KillCount();
		public: void _dtor_0();
	public:    CField_KillCount(const CField_KillCount& arg0);
		public: void _ctor_1( const CField_KillCount& arg0);
	public:    CField_KillCount();
		public: void _ctor_0();
	public:  virtual long GetFieldType();
		public:  virtual void Init(void* pParam);
		public:  virtual void Update();
		public:  virtual void OnPacket(long nType, CInPacket& iPacket);
		public:   void OnKillCountInfo(CInPacket& iPacket);
		private:   int32_t _SetKillCountInfo();
		private:   void _UpdateCountInfo();
		public:   CField_KillCount& operator=(CField_KillCount& arg0);
		public: static CField_KillCount& _op_assign_10(CField_KillCount* pThis, CField_KillCount& arg0);
};
STATIC_ASSERT_SIZE(CField_KillCount, 3512);



