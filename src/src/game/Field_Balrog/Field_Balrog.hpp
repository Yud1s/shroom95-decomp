// Field_Balrog.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Field/Field.hpp"

// Level: 1 0x23297
class CField_Balrog;

class CField_Balrog: public CField {
// Nested
// Fields
// Methods
	public:  virtual  ~CField_Balrog();
		public: void _dtor_0();
	public:    CField_Balrog(const CField_Balrog& arg0);
		public: void _ctor_1( const CField_Balrog& arg0);
	public:    CField_Balrog();
		public: void _ctor_0();
	public:  virtual long GetFieldType();
		public:   CField_Balrog& operator=(CField_Balrog& arg0);
		public: static CField_Balrog& _op_assign_4(CField_Balrog* pThis, CField_Balrog& arg0);
};
STATIC_ASSERT_SIZE(CField_Balrog, 3488);


