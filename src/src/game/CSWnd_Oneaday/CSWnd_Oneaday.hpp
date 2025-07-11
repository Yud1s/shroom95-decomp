// CSWnd_Oneaday.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIToolTip/UIToolTip.hpp"
#include "Wnd/Wnd.hpp"

struct CS_COMMODITY_EX;
class CCtrlSelector;
class CCtrlButton;
class CCashShop;

// Level: 1 0xbf64
class CCSWnd_OneADay;

class CCSWnd_OneADay : public CWnd
{
	// Nested
public:
	enum UnnamedEnum46661
{
	BT_BUY_PLATE = 0,
	BT_GIFT_PLATE = 1,
	BT_BUY_ORIGINAL_PLATE = 2,
	BT_NO_PER_PLATE = 12,
	ID_CTRL_ST_CSLIST = 1000,
	ID_CTRL_BT_PLATE_START = 2000,
	ID_CTRL_BT_ONEADAY_SELECTOR = 2001,
	STATE_TODAY = 0,
	STATE_PREV = 1
};
enum COUNTDOWN_
{
	COUNTDOWN_X = 145,
	COUNTDOWN_Y = 264,
	COUNTDOWN_NUMBER_WIDTH = 37,
	COUNTDOWN_NUMBER_HEIGHT = 33
};
	// Fields
protected:
	std::array<ZRef<CCtrlButton>, 12> m_pBtPlate;

protected:
	CCashShop *m_pCashShop{};

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasPlate;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasPlateBig;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasKeyFocus;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasNoItem;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 10> m_apCanvasNumber;

protected:
	CUIToolTip m_uiToolTip;

protected:
	int32_t m_bPopUpToolTip{};

protected:
	long m_nHour{};

protected:
	long m_nMin{};

protected:
	long m_nSec{};

protected:
	ZRef<CCtrlSelector> m_pSelector;

protected:
	uint32_t m_nState{};
	// Methods
public:
	virtual ~CCSWnd_OneADay();

public:
	void _dtor_0();

public:
	CCSWnd_OneADay(const CCSWnd_OneADay &arg0);

public:
	void _ctor_1( const CCSWnd_OneADay &arg0);

public:
	CCSWnd_OneADay();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void ClearToolTip();

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Update();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

protected:
	void DrawToday(_x_com_ptr<IWzCanvas> pCanvas, const tagRECT *pRect);

protected:
	void DrawPrev(_x_com_ptr<IWzCanvas> pCanvas, const tagRECT *pRect);

protected:
	void DrawCommodity(_x_com_ptr<IWzCanvas> arg0, const tagRECT &arg1, long arg2, long arg3);

protected:
	int32_t ShowItemToolTip(ZRef<CS_COMMODITY_EX> pComm, long rx, long ry);

protected:
	tagRECT GetPlateRect_1(long nPlate);

protected:
	tagRECT GetPlateRect_0();

protected:
	long GetOneADayItemSN();

protected:
	const ZArray<OneADayInfo> &GetPrevOneADayInfo();

protected:
	int32_t IsEmptyOneADayItem();

protected:
	void ChangeState(uint32_t state, int32_t bForce);

protected:
	void DisableTodayButtons();

public:
	CCSWnd_OneADay &operator=(const CCSWnd_OneADay &arg0);

public:
	static CCSWnd_OneADay &_op_assign_23(CCSWnd_OneADay *pThis, const CCSWnd_OneADay &arg0);
};
STATIC_ASSERT_SIZE(CCSWnd_OneADay, 2944);


