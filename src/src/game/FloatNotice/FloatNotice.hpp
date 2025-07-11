// FloatNotice.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 0 0x9373
class CFloatNotice;

class CFloatNotice
{
	// Nested
	// Fields
protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayer;

protected:
	_x_com_ptr<IWzFont> m_pFont;
	// Methods
	CTOR_DEFAULT(CFloatNotice);
public:
	virtual ~CFloatNotice();

public:
	void _dtor_0();

public:
	CFloatNotice(const CFloatNotice &arg0);

public:
	void _ctor_1(const CFloatNotice &arg0);

public:
	CFloatNotice();

public:
	void _ctor_0();

public:
	void CreateFloatNotice(const char *arg0, long arg1, long arg2, long arg3);

public:
	void DeleteFloatNotice();

public:
	int32_t IsNotice();

public:
	void CreateEffEvolRing();

public:
	CFloatNotice &operator=(const CFloatNotice &arg0);

public:
	static CFloatNotice &_op_assign_7(CFloatNotice *pThis, const CFloatNotice &arg0);
};
STATIC_ASSERT_SIZE(CFloatNotice, 12);
