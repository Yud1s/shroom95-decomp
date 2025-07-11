// Field_DynamicFoothold.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Field/Field.hpp"

// Level: 1 0x23195
class CField_DynamicFoothold;

class CField_DynamicFoothold: public CField {
// Nested
// Fields
// Methods
	public:  virtual  ~CField_DynamicFoothold();
		public: void _dtor_0();
	public:    CField_DynamicFoothold(const CField_DynamicFoothold& arg0);
		public: void _ctor_1( const CField_DynamicFoothold& arg0);
	public:    CField_DynamicFoothold();
		public: void _ctor_0();
	public:  virtual long GetFieldType();
		public:  virtual void Init(void* pParam);
		public:   CField_DynamicFoothold& operator=(CField_DynamicFoothold& arg0);
		public: static CField_DynamicFoothold& _op_assign_5(CField_DynamicFoothold* pThis, CField_DynamicFoothold& arg0);
};
STATIC_ASSERT_SIZE(CField_DynamicFoothold, 3488);


