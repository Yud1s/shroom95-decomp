// Field_Tutorial.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Field/Field.hpp"
#include "User/User.hpp"
#include "Packet/Packet.hpp"

// Level: 1 0x22e30
class CField_Tutorial;

class CField_Tutorial: public CField {
// Nested
// Fields
// Methods
	public:  virtual  ~CField_Tutorial();
		public: void _dtor_0();
	public:    CField_Tutorial(const CField_Tutorial& arg0);
		public: void _ctor_1( const CField_Tutorial& arg0);
	public:    CField_Tutorial();
		public: void _ctor_0();
	public:    CField_Tutorial(_x_com_ptr<IWzProperty> arg0);
		public: void _ctor_3( _x_com_ptr<IWzProperty> arg0);
	public:  virtual void DecodeFieldSpecificData(CUser* pUser, CInPacket& iPacket);
		public:   CField_Tutorial& operator=(CField_Tutorial& arg0);
		public: static CField_Tutorial& _op_assign_5(CField_Tutorial* pThis, CField_Tutorial& arg0);
};
STATIC_ASSERT_SIZE(CField_Tutorial, 3488);


