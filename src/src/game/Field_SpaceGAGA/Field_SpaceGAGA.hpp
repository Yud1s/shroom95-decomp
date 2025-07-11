// Field_SpaceGAGA.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "CakePieEvent/CakePieEvent.hpp"
#include "Field/Field.hpp"

// Level: 1 0x22e7d
class CTimerboard_SpaceGAGA;
// Level: 1 0x22e8f
class CField_SpaceGAGA;

class CTimerboard_SpaceGAGA : public CClock
{
	// Nested
public:
	enum k
	{
		kWidth = 228,
		kHeight = 69
	};
	// Fields
protected:
	_x_com_ptr<IWzCanvas> m_pSrcCanvas;

protected:
	_x_com_ptr<IWzProperty> m_pTimerFont;
	// Methods
public:
	virtual ~CTimerboard_SpaceGAGA();

public:
	void _dtor_0();

public:
	CTimerboard_SpaceGAGA(const CTimerboard_SpaceGAGA &arg0);

public:
	void _ctor_1(const CTimerboard_SpaceGAGA &arg0);

public:
	CTimerboard_SpaceGAGA();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

protected:
	virtual _x_com_ptr<IWzProperty> GetFontTime();

protected:
	virtual void LoadClockCanvas(ZArray<_x_com_ptr<IWzCanvas>> &apClockCanvas, _x_com_ptr<IWzProperty> pClockDigit);

public:
	CTimerboard_SpaceGAGA &operator=(const CTimerboard_SpaceGAGA &arg0);

public:
	static CTimerboard_SpaceGAGA &_op_assign_7(CTimerboard_SpaceGAGA *pThis, const CTimerboard_SpaceGAGA &arg0);
};
STATIC_ASSERT_SIZE(CTimerboard_SpaceGAGA, 228);
class CField_SpaceGAGA : public CField
{
	// Nested
	// Fields
protected:
	ZRef<CTimerboard_SpaceGAGA> m_pTimerboard;
	// Methods
public:
	virtual ~CField_SpaceGAGA();

public:
	void _dtor_0();

public:
	CField_SpaceGAGA(const CField_SpaceGAGA &arg0);

public:
	void _ctor_1(const CField_SpaceGAGA &arg0);

public:
	CField_SpaceGAGA();

public:
	void _ctor_0();

public:
	virtual long GetFieldType();

protected:
	virtual void OnClock(CInPacket &iPacket);

public:
	CField_SpaceGAGA &operator=(CField_SpaceGAGA &arg0);

public:
	static CField_SpaceGAGA &_op_assign_5(CField_SpaceGAGA *pThis, CField_SpaceGAGA &arg0);
};
STATIC_ASSERT_SIZE(CField_SpaceGAGA, 3496);
