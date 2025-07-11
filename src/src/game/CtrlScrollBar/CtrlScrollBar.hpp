// CtrlScrollBar.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "Wnd/Wnd.hpp"

// Level: 1 0x30c8
class CCtrlScrollBar;

class CCtrlScrollBar : public CCtrlWnd
{
	// Nested
public:
	enum SCR_IMAGE_
{
	SCR_IMAGE_EN_PREV0 = 0,
	SCR_IMAGE_EN_PREV1 = 1,
	SCR_IMAGE_EN_NEXT0 = 2,
	SCR_IMAGE_EN_NEXT1 = 3,
	SCR_IMAGE_EN_BASE = 4,
	SCR_IMAGE_EN_THUMB0 = 5,
	SCR_IMAGE_EN_THUMB1 = 6,
	SCR_IMAGE_DIS_PREV = 7,
	SCR_IMAGE_DIS_NEXT = 8,
	SCR_IMAGE_DIS_BASE = 9
};
enum SCR_HITTEST_
{
	SCR_HITTEST_NONE = 100,
	SCR_HITTEST_PREV = 101,
	SCR_HITTEST_NEXT = 102,
	SCR_HITTEST_PREVBAR = 103,
	SCR_HITTEST_NEXTBAR = 104,
	SCR_HITTEST_THUMB = 105
};
enum SCR_AUTOREPEAT_DELAY
{
	SCR_AUTOREPEAT_DELAY = 50
};
	// Fields
protected:
	long m_nWheelRange{};

protected:
	long m_nCurPos{};

protected:
	long m_nScrollRange{};

protected:
	long m_nLastHT{};

protected:
	unsigned long m_dwLastHT{};

protected:
	int32_t m_bCapture{};

protected:
	long m_grid{};

protected:
	long m_length{};

protected:
	long m_hv{};

protected:
	long m_type{};

protected:
	long m_thumbPos{};

protected:
	long m_thumbX{};

protected:
	long m_thumbY{};

protected:
	int32_t m_bHideThumb{};

protected:
	int32_t m_bTranslucent{};

protected:
	ZXString16 m_sUOL;
	// Methods
public:
	virtual ~CCtrlScrollBar();

public:
	void _dtor_0();

public:
	CCtrlScrollBar(const CCtrlScrollBar &arg0);

public:
	void _ctor_1( const CCtrlScrollBar &arg0);

public:
	CCtrlScrollBar();

public:
	void _ctor_0();
	void _ctor_default();

public:
	virtual void CreateCtrl(CWnd *pParent, uint32_t nId, long hv, long type, long l, long t, long length, void *pData);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseWheel(long rx, long ry, long nDelta);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void Draw(long rx, long ry, const tagRECT *pRect);

public:
	virtual void Update();

public:
	long GetCurPos() const;

public:
	long GetScrollRange() const;

public:
	void SetCurPos(long nPos);

public:
	void SetScrollRange(long nRange);

public:
	int32_t IsEnabled();

public:
	void HideThumb(int32_t arg0);

public:
	void SetWheelRange(long arg0);

public:
	static long __cdecl GetScrollBarSize(long hv, long type);

public:
	int32_t SetScrollBarSize(long length);

protected:
	_x_com_ptr<IWzCanvas> GetScrollBarCanvas(long nImgType);

protected:
	void ValidatePosAndRange();

protected:
	long ScrHitTest(long rx, long ry);

protected:
	int32_t AutoRepeat();

protected:
	void MouseDown(long rx, long ry);

protected:
	void MouseUp(long rx, long ry);

protected:
	void DoPrevNext(long delta);

protected:
	void DoPrevNextBar(long delta);

protected:
	void DoThumbStart(long rx, long ry);

protected:
	void DoThumbMove(long rx, long ry);

protected:
	void DoThumbEnd(long rx, long ry);

protected:
	static void __cdecl GetScrollBarBaseUOL(long hv, long type, ZXString16 &sUOL);
	CLASS_RTTI_(CCtrlScrollBar, CCtrlWnd);

public:
	CCtrlScrollBar &operator=(const CCtrlScrollBar &arg0);

public:
	static CCtrlScrollBar &_op_assign_34(CCtrlScrollBar *pThis, const CCtrlScrollBar &arg0);
};
STATIC_ASSERT_SIZE(CCtrlScrollBar, 116);


