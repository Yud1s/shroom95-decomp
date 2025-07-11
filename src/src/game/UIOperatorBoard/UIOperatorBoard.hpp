// UIOperatorBoard.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "WebWnd/WebWnd.hpp"
#include "UIWnd/UIWnd.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

// Level: 1 0x1145e
class CUIOperatorBoard;
// Level: 1 0x11474
class CUIOpBoardState;

class CUIOperatorBoard : public CWebWnd
{
	// Nested
public:
	enum  UnnamedEnum70730
{
	kWidth = 312,
	kHeight = 389,
	lm = 3,
	tm = 24,
	rm = 3,
	bm = 10
};
	// Fields
protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerLoading;

private:
	long m_rx{};

private:
	long m_ry{};
	// Methods
public:
	virtual ~CUIOperatorBoard();

public:
	void _dtor_0();

public:
	CUIOperatorBoard(const CUIOperatorBoard &arg0);

public:
	void _ctor_1( const CUIOperatorBoard &arg0);

public:
	CUIOperatorBoard();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void Update();

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnNavigateComplete(const char *url);

public:
	virtual void OnBeforeNavigate(const char *url);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

	CLASS_RTTI_(CUIOperatorBoard, CWebWnd);

public:
	CUIOperatorBoard &operator=(const CUIOperatorBoard &arg0);

public:
	static CUIOperatorBoard &_op_assign_13(CUIOperatorBoard *pThis, const CUIOperatorBoard &arg0);
};
STATIC_ASSERT_SIZE(CUIOperatorBoard, 2968);
class CUIOpBoardState : public CUIWnd
{
	// Nested
public:
	enum  k
{
	kWidth = 29,
	kHeight = 32
};

	// Fields
private:
	_x_com_ptr<IWzGr2DLayer> m_pLayer;
	// Methods
public:
	virtual ~CUIOpBoardState();

public:
	void _dtor_0();

public:
	CUIOpBoardState(const CUIOpBoardState &arg0);

public:
	void _ctor_1( const CUIOpBoardState &arg0);

public:
	CUIOpBoardState();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

	CLASS_RTTI_(CUIOpBoardState, CUIWnd);

public:
	CUIOpBoardState &operator=(const CUIOpBoardState &arg0);

public:
	static CUIOpBoardState &_op_assign_10(CUIOpBoardState *pThis, const CUIOpBoardState &arg0);
};
STATIC_ASSERT_SIZE(CUIOpBoardState, 2828);


