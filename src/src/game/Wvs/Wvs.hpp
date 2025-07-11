// Wvs.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"


// Level: 0 0x133f6
class CeTracer;

class CeTracer {
// Nested
// Fields
	private:  unsigned long ET_ErrorCode{};
	private:  unsigned long ET_MaxErrorCnt{};
// Methods
	public:    ~CeTracer();
		public: void _dtor_0();
	public:    CeTracer(const char* arg0);
		public: void _ctor_1( const char* arg0);
	public:   void SetUser(const char* arg0);
		public:   void SetErrCode(unsigned long arg0, unsigned long arg1, int32_t arg2);
		public:   void Run();
	};
STATIC_ASSERT_SIZE(CeTracer, 8);


void* __stdcall ZtlTaskMemReallocImp(void* pv, unsigned long cb);
int32_t __stdcall WinMain(HINSTANCE__* arg0, HINSTANCE__* arg1, char* arg2, int32_t arg3);
