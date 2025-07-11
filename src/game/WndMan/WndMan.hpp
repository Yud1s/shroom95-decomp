// WndMan.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "UIWnd/UIWnd.hpp"

// Level: 0 0x15e6f
struct DRAGCTX;
// Level: 1 0x3d1d
class CWndMan;
class CUIWnd;

struct DRAGCTX
{
	// Nested
	// Fields
public:
	IUIMsgHandler *pContainer{};

public:
	ZRef<IDraggable> pObj;
	// Methods
public:
	~DRAGCTX();

public:
	void _dtor_0();

public:
	DRAGCTX(const DRAGCTX &arg0);

public:
	void _ctor_1( const DRAGCTX &arg0);

public:
	DRAGCTX();

public:
	void _ctor_0();

public:
	DRAGCTX &operator=(const DRAGCTX &arg0);

public:
	static DRAGCTX &_op_assign_3(DRAGCTX *pThis, const DRAGCTX &arg0);
};
STATIC_ASSERT_SIZE(DRAGCTX, 12);
class CWndMan : public CWnd, public TSingleton<CWndMan>
{

public:
  static ZList<CWnd *> ms_lpWindow;
  static ZList<CWnd *> ms_lpUpdateWindow;
  static ZList<CWnd *> ms_lpInvalidatedWindow;
  static int32_t ms_tLastMouseMessage;

	// Nested
	// Fields
protected:
	ZList<IUIMsgHandler *> m_lpCapture;

protected:
	CWnd *m_pActiveWnd{};

protected:
	CWnd *m_pDragWnd{};

protected:
	int32_t m_bDropByMouseUp{};

protected:
	IUIMsgHandler *m_pFocus{};

protected:
	IUIMsgHandler *m_pCursorHandler{};

protected:
	DRAGCTX m_ctxDrag;

protected:
	SECPOINT m_ptCursor;

protected:
	long m_tLastScrShot{};

protected:
	long m_nScrShotCount{};

protected:
	HWND__ *m_hWnd{};

protected:
	HIMC__ *m_hNewIMC{};

protected:
	HIMC__ *m_hOldIMC{};

protected:
	unsigned long m_dwIMEProperty{};

protected:
	int32_t m_bIMEActive{};

protected:
	ZArray<unsigned char> m_abIMECompAttr;

protected:
	ZArray<unsigned long> m_adwIMECompClause;

protected:
	ZArray<unsigned char> m_aIMECand;

protected:
	ZArray<char> m_sIMEResultStr;

protected:
	ZArray<char> m_sIMECompStr;

protected:
	int32_t m_nIMECursorPos{};

protected:
	int32_t m_bWndAttachEnabled{};

protected:
	std::array<_x_com_ptr<IWzVector2D>, 9> m_pOrgWindow{};

protected:
	ZList<CUIWnd *> m_lUIWnd;
	// Methods
public:
	virtual ~CWndMan();

public:
	void _dtor_0();

public:
	CWndMan(const CWndMan &arg0);

public:
	void _ctor_1( const CWndMan &arg0);

public:
	CWndMan(HWND__ *m_hWnd);

public:
	void _ctor_0( HWND__ *m_hWnd);

public:
	CWnd *GetActiveWnd() const;

public:
	IUIMsgHandler *GetFocus() const;

public:
	IUIMsgHandler *GetCapture();

public:
	int32_t SetActiveWnd(CWnd *pWnd);

public:
	void SetFocus(IUIMsgHandler *pHandler);

public:
	void SetCaptureWnd(IUIMsgHandler *pHandler);

public:
	void ReleaseCaptureWnd(IUIMsgHandler *pHandler);

public:
	void GetCursorPos(tagPOINT *lpPoint, int32_t bField) const;
	tagPOINT GetCursorPosPt(bool bField) const;

public:
	void SetCursorPos(tagPOINT pt, int32_t bField);

public:
	void BeginDragDrop(IUIMsgHandler *pContainer, IDraggable *pObj, int32_t bDropByMouseUp);

public:
	void EndDragDrop(long rx, long ry, int32_t bDblClk);

public:
	void ClearDragContext();

public:
	int32_t TranslateMessage(uint32_t &msg, uint32_t &wParam, long &lParam, long *plResult);

public:
	long ProcessMouse(uint32_t message, uint32_t wParam, long lParam);

public:
	long ProcessKey(uint32_t message, uint32_t wParam, long lParam);

public:
	long ProcessJoystick(uint32_t message, uint32_t wParam, long lParam);

public:
	static void __cdecl s_Update();

public:
	void DestroyAll();

public:
	void Unlink(IUIMsgHandler *pHandler);

public:
	IUIMsgHandler *GetHandlerFromPoint(long x, long y);

public:
	_x_com_ptr<IWzVector2D> GetOrgWindow(CWnd::UIOrigin org);

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
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void OnDraggableMove(long nState, IDraggable *pObj, long rx, long ry);

public:
	virtual void PreCreateWnd(long l, long t, long w, long h, long z, int32_t bScreenCoord, void *pData);

public:
	virtual int32_t OnActivate(int32_t bActive);

public:
	static void __cdecl RedrawInvalidatedWindows();

public:
	void ToggleWindow();

public:
	void SetFullScreen(int32_t bIsLarge);

private:
	int32_t SetActiveWndImp(CWnd *pWnd);

private:
	void SetFocusImp(IUIMsgHandler *pHandler);

public:
	static void __cdecl InsertWindow(CWnd *pWnd);

public:
	static int32_t __cdecl RemoveWindow(CWnd *pWnd);

protected:
	static void __cdecl UpdateWindowPosition(CWnd *pWnd);

protected:
	static void __cdecl RemoveUpdateWindow(CWnd *pWnd);

protected:
	static void __cdecl InsertInvalidatedWindow(CWnd *pWnd);

protected:
	static void __cdecl RemoveInvalidatedWindow(CWnd *pWnd);

protected:
	void ProcessIMENotify(uint32_t wParam);

protected:
	void ProcessIMEComposition(long lParam);

protected:
	void SendIMEComp();

protected:
	void SendIMEResult(const char *sComp);

protected:
	void SendIMEMode();

public:
	void ClearComposition();

public:
	void EnableIME(int32_t bEnable);

public:
	void NotifyIME(unsigned long dwAction, unsigned long dwIndex, unsigned long dwValue);

public:
	void OnEventChangeScreenResolution();

public:
	void RegisterUIWindow(CUIWnd *pWnd);

public:
	void UnregisterUIWindow(CUIWnd *pWnd);

private:
	void ResetOrgWindow();

private:
	void RelocateUIWindows(int32_t bIsLarge);

public:
	CWndMan &operator=(const CWndMan &arg0);

public:
	static CWndMan &_op_assign_57(CWndMan *pThis, const CWndMan &arg0);

    friend class CWnd;
};
STATIC_ASSERT_SIZE(CWndMan, 316);
