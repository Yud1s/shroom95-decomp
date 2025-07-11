// Field_ContiMove.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "Field/Field.hpp"

// Level: 1 0x231d5
class CField_ContiMove;
// Level: 1 0x231e4
class CShip;

class CShip : public ZRefCounted
{
	// Nested
	// Fields
public:
	long m_nShipKind{};

protected:
	long m_x{};

protected:
	long m_x0{};

protected:
	long m_y{};

protected:
	long m_z{};

protected:
	long m_tMove{};

protected:
	long m_f{};

protected:
	long m_tAppear{};

protected:
	long m_limit_x0{};

protected:
	long m_limit_x{};

protected:
	long m_limit_y{};

protected:
	long m_limit_y0{};

protected:
	Ztl_bstr_t m_sShipPath;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayer;

protected:
	_x_com_ptr<IWzVector2D> m_pVecOrg;
	// Methods
public:
	virtual ~CShip();

public:
	void _dtor_0();

public:
	CShip(const CShip &arg0);

public:
	void _ctor_1( const CShip &arg0);

public:
	CShip();

public:
	void _ctor_0();

public:
	void Init(_x_com_ptr<IWzProperty> pPropField);

public:
	void Move(long arg0);

public:
	void LeaveShipMove();

public:
	void EnterShipMove();

public:
	void AppearShip();

public:
	void DisappearShip();

public:
	void MoveShip();

public:
	CShip &operator=(const CShip &arg0);

public:
	static CShip &_op_assign_10(CShip *pThis, const CShip &arg0);
};
STATIC_ASSERT_SIZE(CShip, 72);

class CField_ContiMove : public CField
{
	// Nested
	// Fields
protected:
	CShip m_ship;

protected:
	long m_cnt{};
	// Methods
public:
	virtual ~CField_ContiMove();

public:
	void _dtor_0();

public:
	CField_ContiMove(const CField_ContiMove &arg0);

public:
	void _ctor_1( const CField_ContiMove &arg0);

public:
	CField_ContiMove();

public:
	void _ctor_0();

public:
	virtual void Init(void *pParam);

public:
	virtual void Update();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

public:
	void OnContiMove(CInPacket &iPacket);

public:
	void OnContiState(CInPacket &iPacket);

protected:
	void OnStartField(CInPacket &arg0);

protected:
	void OnStartShipMoveField(CInPacket &iPacket);

protected:
	void OnWaitField(CInPacket &arg0);

protected:
	void OnMoveField(CInPacket &iPacket);

protected:
	void OnEndField(CInPacket &arg0);

protected:
	void OnEndShipMoveField(CInPacket &iPacket);

public:
	CField_ContiMove &operator=(CField_ContiMove &arg0);

public:
	static CField_ContiMove &_op_assign_15(CField_ContiMove *pThis, CField_ContiMove &arg0);
};
STATIC_ASSERT_SIZE(CField_ContiMove, 3568);
