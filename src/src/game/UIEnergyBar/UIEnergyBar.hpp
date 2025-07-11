// UIEnergyBar.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "UIWnd/UIWnd.hpp"

// Level: 1 0x1128b
class CUIEnergyBar;

class CUIEnergyBar : public CUIWnd, public TSingleton<CUIEnergyBar>
{
	// Nested
public:
	enum  UI_ENERGYBAR_MINIMIZED
{
	UI_ENERGYBAR_MINIMIZED = 0
};
enum  MAX_STEP
{
	MAX_STEP = 78
};
	// Fields
private:
	long m_nEnergy{};

private:
	long m_nMaxEnergy{};
	// Methods
public:
	virtual ~CUIEnergyBar();

public:
	void _dtor_0();

public:
	CUIEnergyBar(const CUIEnergyBar &arg0);

public:
	void _ctor_1(const CUIEnergyBar &arg0);
	CTOR_DEFAULT(CUIEnergyBar);
public:
	CUIEnergyBar();

public:
	void _ctor_0();

public:
	virtual void Update();

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	long GetEnergy();

public:
	void SetEnergy(long arg0, long arg1);

public:
	CUIEnergyBar &operator=(const CUIEnergyBar &arg0);

public:
	static CUIEnergyBar &_op_assign_8(CUIEnergyBar *pThis, const CUIEnergyBar &arg0);
};
STATIC_ASSERT_SIZE(CUIEnergyBar, 2832);


