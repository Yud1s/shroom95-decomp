// Rand32.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 0 0xb55c
class CRand32;

class CRand32
{
	// Nested
	// Fields
public:
	uint32_t m_s1{};

public:
	uint32_t m_s2{};

public:
	uint32_t m_s3{};

public:
	uint32_t m_past_s1{};

public:
	uint32_t m_past_s2{};

public:
	uint32_t m_past_s3{};

public:
	ZFatalSection m_lock;
	// Methods
public:
	~CRand32();

public:
	void _dtor_0();

	CTOR_DEFAULT(CRand32);
public:
	CRand32(uint32_t arg0, uint32_t arg1, uint32_t arg2);

public:
	void _ctor_1( uint32_t arg0, uint32_t arg1, uint32_t arg2);

public:
	CRand32();

public:
	void _ctor_0();

public:
	void Seed(uint32_t s1, uint32_t s2, uint32_t s3);

public:
	void GetSeed(uint32_t &arg0, uint32_t &arg1, uint32_t &arg2);

public:
	void SetSeed(uint32_t s1, uint32_t s2, uint32_t s3);

public:
	uint32_t Random();

public:
	void RollBack();

public:
	uint32_t GetPastRand();

public:
	static unsigned long __cdecl CrtRand(unsigned long &arg0);
};
STATIC_ASSERT_SIZE(CRand32, 32);

static CRand32 _D_G_RAND{};
