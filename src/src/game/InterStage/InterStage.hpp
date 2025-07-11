// InterStage.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Stage/Stage.hpp"

// Level: 1 0x10b6d
class CInterStage;

class CInterStage : public CStage
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CInterStage();

public:
	void _dtor_0();

public:
	CInterStage(const CInterStage &arg0);

public:
	void _ctor_1(const CInterStage &arg0);

	CTOR_DEFAULT(CInterStage);
public:
	CInterStage();

public:
	void _ctor_0();

public:
	virtual void Init(void *pParam);

public:
	virtual void Close();
	CLASS_RTTI_(CInterStage, CStage);

public:
	CInterStage &operator=(const CInterStage &arg0);

public:
	static CInterStage &_op_assign_8(CInterStage *pThis, const CInterStage &arg0);
};
STATIC_ASSERT_SIZE(CInterStage, 24);
