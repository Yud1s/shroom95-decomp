// Field_NoDragon.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Field/Field.hpp"

// Level: 1 0x22ff2
class CField_NoDragon;

class CField_NoDragon: public CField {
// Nested
// Fields
// Methods
	public:  virtual  ~CField_NoDragon();
		public: void _dtor_0();
	public:    CField_NoDragon(const CField_NoDragon& arg0);
		public: void _ctor_1( const CField_NoDragon& arg0);
	public:    CField_NoDragon();
		public: void _ctor_0();
	public:  virtual long GetFieldType();
		public:  virtual void Init(void* pParam);
		public:   CField_NoDragon& operator=(CField_NoDragon& arg0);
		public: static CField_NoDragon& _op_assign_5(CField_NoDragon* pThis, CField_NoDragon& arg0);
};
STATIC_ASSERT_SIZE(CField_NoDragon, 3488);


