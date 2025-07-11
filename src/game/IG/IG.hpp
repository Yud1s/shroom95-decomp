// IG.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

class CInPacket;

// Level: 0 0x16a8b
struct IGObj;
struct IUIMsgHandler;
// Level: 0 0x1e7ac
struct INetMsgHandler;

struct IDraggable;

struct IGObj
{
	// Nested
	// Fields
	// Methods
public:
	IGObj(const IGObj &arg0);

public:
	void _ctor_0( const IGObj &arg0);

public:
	IGObj();

public:
	void _ctor_1();

public:
	virtual void Update();

public:
	IGObj &operator=(const IGObj &arg0);

public:
	static IGObj &_op_assign_3(IGObj *pThis, const IGObj &arg0);
};
STATIC_ASSERT_SIZE(IGObj, 4);

struct IUIMsgHandler
{
	// Nested
	// Fields
	// Methods
public:
	IUIMsgHandler(const IUIMsgHandler &arg0);

public:
	void _ctor_0( const IUIMsgHandler &arg0);

public:
	IUIMsgHandler();

public:
	void _ctor_1();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual int32_t OnMouseWheel(long rx, long ry, long nWheel);

public:
	virtual void OnMouseEnter(int32_t arg0);

public:
	virtual void OnDraggableMove(long nState, IDraggable *pObj, long rx, long ry);

public:
	virtual void SetEnable(int32_t bEnable);

public:
	virtual int32_t IsEnabled();

public:
	virtual void SetShow(int32_t bShow);

public:
	virtual int32_t IsShown();

public:
	virtual long GetAbsLeft();

public:
	virtual long GetAbsTop();

public:
	virtual void ClearToolTip();

public:
	virtual void OnIMEModeChange(char cMode);

public:
	virtual void OnIMEResult(const char *sComp);

public:
	virtual void OnIMEComp(const char *sComp, ZArray<unsigned long> &adwCls, uint32_t nClsIdx, long nCursor, ZList<ZXString<char>> &lCand, long nBegin, long nPage, long nCur);


	CLASS_RTTI(IUIMsgHandler);

public:
	IUIMsgHandler &operator=(const IUIMsgHandler &arg0);

public:
	static IUIMsgHandler &_op_assign_22(IUIMsgHandler *pThis, const IUIMsgHandler &arg0);
};
STATIC_ASSERT_SIZE(IUIMsgHandler, 4);

struct INetMsgHandler
{
	// Nested
	// Fields
	// Methods
public:
	INetMsgHandler(const INetMsgHandler &arg0);

public:
	void _ctor_0( const INetMsgHandler &arg0);

public:
	INetMsgHandler();

public:
	void _ctor_1();

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

public:
	INetMsgHandler &operator=(const INetMsgHandler &arg0);

public:
	static INetMsgHandler &_op_assign_3(INetMsgHandler *pThis, const INetMsgHandler &arg0);
};
STATIC_ASSERT_SIZE(INetMsgHandler, 4);
