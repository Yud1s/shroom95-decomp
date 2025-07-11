// Field_ShowaBath.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "Field/Field.hpp"
#include "User/User.hpp"

// Level: 1 0x22fa6
class CField_ShowaBath;

class CField_ShowaBath: public CField {
// Nested
// Fields
// Methods
	public:  virtual  ~CField_ShowaBath();
		public: void _dtor_0();
	public:    CField_ShowaBath(const CField_ShowaBath& arg0);
		public: void _ctor_1( const CField_ShowaBath& arg0);
	public:    CField_ShowaBath();
		public: void _ctor_0();
	public:    CField_ShowaBath(_x_com_ptr<IWzProperty> arg0);
		public: void _ctor_3( _x_com_ptr<IWzProperty> arg0);
	public:  virtual void DecodeFieldSpecificData(CUser* pUser, CInPacket& iPacket);
		public:   CField_ShowaBath& operator=(CField_ShowaBath& arg0);
		public: static CField_ShowaBath& _op_assign_5(CField_ShowaBath* pThis, CField_ShowaBath& arg0);
};
STATIC_ASSERT_SIZE(CField_ShowaBath, 3488);


