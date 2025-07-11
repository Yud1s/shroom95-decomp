// Field_Wedding.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "Field/Field.hpp"

class CUtilDlgEx;

// Level: 1 0x22e0f
class CField_Wedding;

class CField_Wedding: public CField {
// Nested
// Fields
	protected:  long m_tLastUpdate{};
	protected:  long m_nCurrentServerStep{};
	protected:  long m_nCurrentStep{};
	protected:  ZRef<CUtilDlgEx> m_pPreviousDlg;
	protected:  unsigned long m_dwGroomID{};
	protected:  unsigned long m_dwBrideID{};
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerBlessEffect;
// Methods
	public:  virtual  ~CField_Wedding();
		public: void _dtor_0();
	public:    CField_Wedding(const CField_Wedding& arg0);
		public: void _ctor_1( const CField_Wedding& arg0);
	public:    CField_Wedding();
		public: void _ctor_0();
	public:  virtual void OnPacket(long nType, CInPacket& iPacket);
		public:  virtual void Update();
		public:  virtual long GetFieldType();
		public:   void SetBlessEffect(int32_t bSet);
		public:   void OnWeddingProgress(CInPacket& iPacket);
		public:   void OnWeddingCeremonyEnd(CInPacket& iPacket);
		public:   CField_Wedding& operator=(CField_Wedding& arg0);
		public: static CField_Wedding& _op_assign_9(CField_Wedding* pThis, CField_Wedding& arg0);
};
STATIC_ASSERT_SIZE(CField_Wedding, 3520);


