// Field_EscortResult.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Field/Field.hpp"

// Level: 1 0x23184
class CField_EscortResult;

class CField_EscortResult: public CField {
// Nested
// Fields
// Methods
	public:  virtual  ~CField_EscortResult();
		public: void _dtor_0();
	public:    CField_EscortResult(const CField_EscortResult& arg0);
		public: void _ctor_1( const CField_EscortResult& arg0);
	public:    CField_EscortResult();
		public: void _ctor_0();
	public:  virtual long GetFieldType();
		public:  virtual void Init(void* pParam);
		public:  virtual void OnSessionValue(ZXString<char> sKey, ZXString<char> sVal);
		public:   CField_EscortResult& operator=(CField_EscortResult& arg0);
		public: static CField_EscortResult& _op_assign_6(CField_EscortResult* pThis, CField_EscortResult& arg0);
};
STATIC_ASSERT_SIZE(CField_EscortResult, 3488);


