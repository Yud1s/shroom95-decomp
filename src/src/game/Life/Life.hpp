// Life.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "IG/IG.hpp"
#include "ChatBalloon/ChatBalloon.hpp"

// Extra
class CAttrShoe;
class CVecCtrl;

// Level: 0 0x5b9a
struct IVecCtrlOwner;
// Level: 1 0x5bd5
class CLife;

struct IVecCtrlOwner
{
	// Nested
public:
	enum UnnamedEnum16346
	{
		USER = 0,
		MOB = 1,
		NPC = 2,
		PET = 3,
		SUMMON = 4,
		TOWNPORTAL = 5,
		EMPLOYEE = 6,
		GRENADE = 7,
		DRAGON = 8
	};
	// Fields
	// Methods
public:
	IVecCtrlOwner(const IVecCtrlOwner &arg0);

public:
	void _ctor_0(const IVecCtrlOwner &arg0);

public:
	IVecCtrlOwner();

public:
	void _ctor_1();

public:
	virtual long GetType();

public:
	virtual long OnResolveMoveAction(long arg0, long arg1, long arg2, const CVecCtrl *arg3);

public:
	virtual void OnLayerZChanged(const CVecCtrl *arg0);

public:
	virtual const ZRef<CAttrShoe> GetShoeAttr();

public:
	virtual const tagPOINT GetPos();

public:
	virtual const tagPOINT GetPosPrev();

public:
	virtual long GetZMass();

	CLASS_RTTI(IVecCtrlOwner);

public:
	IVecCtrlOwner &operator=(const IVecCtrlOwner &arg0);

public:
	static IVecCtrlOwner &_op_assign_12(IVecCtrlOwner *pThis, const IVecCtrlOwner &arg0);
};
STATIC_ASSERT_SIZE(IVecCtrlOwner, 4);
class CLife : public IGObj, public IVecCtrlOwner, public ZRefCounted
{

	CLASS_RTTI_(CLife, IVecCtrlOwner);
	// Nested
public:
	enum NAMETAG_NO
	{
		NAMETAG_NO = 3
	};
	// Fields
protected:
	CChatBalloon m_chatBalloon;

protected:
	std::array<_x_com_ptr<IWzGr2DLayer>, 3> m_pLayerNameTag{};
	// Methods
public:
	virtual ~CLife();

	CTOR_DEFAULT(CLife)
public:
	void _dtor_0();

public:
	CLife(const CLife &arg0);

public:
	void _ctor_1(const CLife &arg0);

public:
	CLife();

public:
	void _ctor_0();

public:
	long MakeNameTag(const char *sName, _x_com_ptr<IWzGr2DLayer> pOverlay, _x_com_ptr<IWzVector2D> pvc, long nType, long nIdx, uint16_t nGuildMarkBg, unsigned char nGuildMarkBgColor, uint16_t nGuildMark, unsigned char nGuildMarkColor);

public:
	void ShowNameTag(int32_t bShow);

public:
	CLife &operator=(const CLife &arg0);

public:
	static CLife &_op_assign_8(CLife *pThis, const CLife &arg0);
};
STATIC_ASSERT_SIZE(CLife, 136);
