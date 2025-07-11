// CtrlWnd.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "IG/IG.hpp"
#include "Wnd/Wnd.hpp"
#include "WndMan/WndMan.hpp"

// Level: 1 0x13d0
class CCtrlWnd;

class CCtrlWnd : public IGObj, public IUIMsgHandler, public ZRefCounted
{
	// Nested
	// Fields
protected:
	uint32_t m_nCtrlId{};
	_x_com_ptr<IWzVector2D> m_pLTCtrl;
	long m_width{};
	long m_height{};
	CWnd *m_pParent{};
	int32_t m_bAcceptFocus{};
	int32_t m_bEnabled{};
	int32_t m_bShown{};
	// Methods
public:
	virtual ~CCtrlWnd();

public:
	void _dtor_0();

	CTOR_DEFAULT(CCtrlWnd)
public:
	CCtrlWnd(const CCtrlWnd &arg0);

public:
	void _ctor_1( const CCtrlWnd &arg0) const;

public:
	CCtrlWnd();

public:
	void _ctor_0();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual int32_t OnDragDrop(long nState, DRAGCTX &ctx, long rx, long ry);

public:
	virtual long GetAbsLeft();

public:
	virtual long GetAbsTop();

public:
	virtual void Update();

public:
	virtual void CreateCtrl(CWnd *pParent, uint32_t nId, long l, long t, long w, long h, void *pData);

public:
	virtual void Destroy();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual int32_t HitTest(long rx, long ry);

public:
	virtual tagRECT GetRect();

public:
	virtual void SetAbove(CCtrlWnd *pCtrl);

public:
	void SetBelow(CCtrlWnd *pCtrl);

public:
	uint32_t GetCtrlId() const;

public:
	CWnd *GetParent() const;

public:
	_x_com_ptr<IWzCanvas> GetCanvas(long idx) const;

public:
	int32_t IsFocused() const;

public:
	void InvalidateRect();

public:
	virtual void Draw(long rx, long ry, const tagRECT *pRect);

public:
	virtual void SetEnable(int32_t bEnable);

public:
	virtual int32_t IsEnabled();

public:
	virtual void SetShow(int32_t bShow);

public:
	virtual int32_t IsShown();

public:
	void Move(long x, long y) const;

public:
	long GetX() const;

public:
	long GetY() const;

public:
	long GetWidth() const;

public:
	long GetHeight() const;

public:
	int32_t IsAcceptFocus() const;

protected:
	void NotifyToParent(uint32_t param1, uint32_t param2) const;


	CLASS_RTTI_(CCtrlWnd, IUIMsgHandler);

public:
	CCtrlWnd &operator=(const CCtrlWnd &arg0);

public:
	static CCtrlWnd &_op_assign_40(CCtrlWnd *pThis, const CCtrlWnd &arg0);
};
STATIC_ASSERT_SIZE(CCtrlWnd, 52);
