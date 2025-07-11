// Stage.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "IG/IG.hpp"

// Level: 1 0x1dfed
class CStage;

class CStage : public IGObj, public IUIMsgHandler, public INetMsgHandler, public ZRefCounted
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CStage();

public:
	void _dtor_0();

public:
	CStage(const CStage &arg0);

public:
	void _ctor_1( const CStage &arg0);

public:
	CStage();

public:
	void _ctor_0();

public:
	virtual void Init(void *pParam);

public:
	virtual void Close();

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseEnter(int32_t bEnter);

protected:
	void OnSetField(CInPacket &arg0);

protected:
	void OnSetCashShop(CInPacket &iPacket);

protected:
	void OnSetITC(CInPacket &iPacket);

public:
	long FadeIn();

public:
	void FadeOut();


	CLASS_RTTI_(CStage, IUIMsgHandler);

public:
	CStage &operator=(const CStage &arg0);

public:
	static CStage &_op_assign_16(CStage *pThis, const CStage &arg0);
};
STATIC_ASSERT_SIZE(CStage, 24);

// 86B638 8
extern ZRef<CStage> _D_G_PSTAGE;

void __cdecl set_stage(CStage *pStage, void *pParam);
ZRef<CStage> &__cdecl get_stage();
