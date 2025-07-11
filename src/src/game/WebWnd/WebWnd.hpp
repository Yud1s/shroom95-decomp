// WebWnd.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIWnd/UIWnd.hpp"

#include <MsHtmHst.h>

// Level: 1 0x9ba9
class CWebWnd;

class DWebBrowserEvents2 : IUnknown
{
public:
	DWebBrowserEvents2() {}
};

class IWebBrowser2
{
public:
	IWebBrowser2() {}
};

class CWebWnd : public CUIWnd, public IOleClientSite, public IOleInPlaceSite, public IDocHostUIHandler, public IDocHostShowUI, public DWebBrowserEvents2, public ZThread
{
	// Nested
public:
	struct BrowserRequest
	{
		// Nested
		// Fields
	public:
		long nType{};

	public:
		ZXString16 url;
		// Methods
	public:
		~BrowserRequest();

	public:
		void _dtor_0();

	public:
		BrowserRequest(const CWebWnd::BrowserRequest &arg0);

	public:
		void _ctor_1(const CWebWnd::BrowserRequest &arg0);

	public:
		BrowserRequest();

	public:
		void _ctor_0();

	public:
		CWebWnd::BrowserRequest &operator=(const CWebWnd::BrowserRequest &arg0);

	public:
		static CWebWnd::BrowserRequest &_op_assign_3(CWebWnd::BrowserRequest *pThis, const CWebWnd::BrowserRequest &arg0);
	};

public:
	static CWebWnd *m_spBrowser;
	static const int32_t m_snSkipFrameMax;
	static const int32_t m_snSkipFrameMin;

public:
	enum BROWSER_REQUEST_
	{
		BROWSER_REQUEST_INIT = 0,
		BROWSER_REQUEST_MOVE = 1,
		BROWSER_REQUEST_DRAW = 2,
		BROWSER_REQUEST_NAVIGATE = 3
	};

	// Fields
	// TODO
public:
	HWND__ *m_hWnd{};
	// protected:  ATL::CComQIPtr<IWebBrowser2,&IID_IWebBrowser2> m_pBrowser;
protected:
	IWebBrowser2 *m_pBrowser{};

protected:
	unsigned long connCookie{};

protected:
	unsigned char *m_pBitmapBits{};

protected:
	HBITMAP__ *m_hBitmap{};

protected:
	HBITMAP__ *m_hBitmapOld{};

protected:
	HDC__ *m_hDC{};

protected:
	long m_nTopMargin{};

protected:
	long m_nBottomMargin{};

protected:
	long m_nLeftMargin{};

protected:
	long m_nRightMargin{};
	// TODO
public:
	ZFatalSection m_lock;

protected:
	ZList<CWebWnd::BrowserRequest> m_lRequest;

protected:
	volatile int32_t m_bTerminate{};

protected:
	volatile int32_t m_bInitialized{};

protected:
	volatile int32_t m_bNavigating{};

protected:
	volatile unsigned long m_dwLoadingStart{};

protected:
	unsigned long m_dwMainThreadID{};

protected:
	long m_nSkipFrameCurrent{};

protected:
	long m_nSkipFrameCount{};
	// Methods

public:
	CWebWnd() {}

public:
	virtual ~CWebWnd();

public:
	void _dtor_0();

public:
	CWebWnd(const CWebWnd &arg0);

public:
	void _ctor_1(const CWebWnd &arg0);

protected:
	CWebWnd(int32_t nUIType, long nLeftMargin, long nTopMargin, long nRightMargin, long nBottomMargin, int32_t closeType, int32_t closeX, int32_t closeY);

public:
	void _ctor_0(int32_t nUIType, long nLeftMargin, long nTopMargin, long nRightMargin, long nBottomMargin, int32_t closeType, int32_t closeX, int32_t closeY);

public:
	virtual void OnCreate(void *pData, ZXString16 sUOL);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnMoveWnd(long l, long t);

public:
	virtual void OnEndMoveWnd();

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void Update();

public:
	long WindowProc(HWND__ *hWindow, uint32_t iMessage, uint32_t wParam, long lParam);

public:
	static long __stdcall WindowProcEntry(HWND__ *hWindow, uint32_t iMessage, uint32_t wParam, long lParam);

public:
	virtual HRESULT __stdcall QueryInterface(const _GUID &riid, void **ppv);

public:
	virtual unsigned long __stdcall AddRef();

public:
	virtual unsigned long __stdcall Release();

public:
	virtual HRESULT __stdcall SaveObject();

public:
	virtual HRESULT __stdcall GetMoniker(unsigned long dwAssign, unsigned long dwWhichMoniker, IMoniker **ppmk);

public:
	virtual HRESULT __stdcall GetContainer(IOleContainer **ppContainer);

public:
	virtual HRESULT __stdcall ShowObject();

public:
	virtual HRESULT __stdcall OnShowWindow(int32_t fShow);

public:
	virtual HRESULT __stdcall RequestNewObjectLayout();

public:
	virtual HRESULT __stdcall GetWindow(HWND__ **phwnd);

public:
	virtual HRESULT __stdcall ContextSensitiveHelp(int32_t fEnterMode);

public:
	virtual HRESULT __stdcall CanInPlaceActivate();

public:
	virtual HRESULT __stdcall OnInPlaceActivate();

public:
	virtual HRESULT __stdcall OnUIActivate();

public:
	virtual HRESULT __stdcall GetWindowContext(IOleInPlaceFrame **ppFrame, IOleInPlaceUIWindow **ppDoc, tagRECT *lprcPosRect, tagRECT *lprcClipRect, tagOIFI *lpFrameInfo);

public:
	virtual HRESULT __stdcall Scroll(tagSIZE scrollExtent);

public:
	virtual HRESULT __stdcall OnUIDeactivate(int32_t fUndoable);

public:
	virtual HRESULT __stdcall OnInPlaceDeactivate();

public:
	virtual HRESULT __stdcall DiscardUndoState();

public:
	virtual HRESULT __stdcall DeactivateAndUndo();

public:
	virtual HRESULT __stdcall OnPosRectChange(const tagRECT *lprcPosRect);

public:
	virtual HRESULT __stdcall EnableModeless(int32_t fEnable);

public:
	virtual HRESULT __stdcall FilterDataObject(IDataObject *pDO, IDataObject **ppDORet);

public:
	virtual HRESULT __stdcall GetDropTarget(IDropTarget *pDropTarget, IDropTarget **ppDropTarget);

public:
	virtual HRESULT __stdcall GetExternal(IDispatch **ppDispatch);

public:
	virtual HRESULT __stdcall GetHostInfo(DOCHOSTUIINFO *pInfo);

public:
	virtual HRESULT __stdcall GetOptionKeyPath(wchar_t **pchKey, unsigned long dwReserved);

public:
	virtual HRESULT __stdcall HideUI();

public:
	virtual HRESULT __stdcall OnDocWindowActivate(int32_t fActive);

public:
	virtual HRESULT __stdcall OnFrameWindowActivate(int32_t fActive);

public:
	virtual HRESULT __stdcall ResizeBorder(const tagRECT *prcBorder, IOleInPlaceUIWindow *pUIWindow, int32_t fFrameWindow);

public:
	virtual HRESULT __stdcall ShowContextMenu(unsigned long dwID, tagPOINT *ppt, IUnknown *pcmdTarget, IDispatch *pdispObject);

public:
	virtual HRESULT __stdcall ShowUI(unsigned long dwID, IOleInPlaceActiveObject *pActiveObject, IOleCommandTarget *pCommandTarget, IOleInPlaceFrame *pFrame, IOleInPlaceUIWindow *pDoc);

public:
	virtual HRESULT __stdcall TranslateAcceleratorA(tagMSG *lpMsg, const _GUID *pguidCmdGroup, unsigned long nCmdID);

public:
	virtual HRESULT __stdcall TranslateUrl(unsigned long dwTranslate, wchar_t *pchURLIn, wchar_t **ppchURLOut);

public:
	virtual HRESULT __stdcall UpdateUI();

public:
	virtual HRESULT __stdcall ShowHelp(HWND__ *hwnd, wchar_t *pszHelpFile, uint32_t uCommand, unsigned long dwData, tagPOINT ptMouse, IDispatch *pDispatchObjectHit);

public:
	virtual HRESULT __stdcall ShowMessage(HWND__ *hwnd, wchar_t *lpstrText, wchar_t *lpstrCaption, unsigned long dwType, wchar_t *lpstrHelpFile, unsigned long dwHelpContext, long *plResult);

public:
	virtual HRESULT __stdcall GetIDsOfNames(const _GUID &riid, wchar_t **rgszNames, uint32_t cNames, unsigned long lcid, long *rgDispId);

public:
	virtual HRESULT __stdcall GetTypeInfo(uint32_t iTInfo, unsigned long lcid, ITypeInfo **ppTInfo);

public:
	virtual HRESULT __stdcall GetTypeInfoCount(uint32_t *pctinfo);

public:
	virtual HRESULT __stdcall Invoke(long dispIdMember, const _GUID &riid, unsigned long lcid, uint16_t wFlags, tagDISPPARAMS *pDispParams, tagVARIANT *pVarResult, tagEXCEPINFO *pExcepInfo, uint32_t *puArgErr);

public:
	virtual int32_t Run(void *pParam, ZThread::ZThreadResult *pResult);

public:
	void NavigateUrl(const wchar_t *url);

public:
	virtual void OnNavigateComplete(const char *arg0);

public:
	virtual void OnBeforeNavigate(const char *arg0);

public:
	int32_t CheckHanged();

protected:
	int32_t Init();

private:
	HRESULT Navigate(const wchar_t *isURL);

	CLASS_RTTI_(CWebWnd, CUIWnd);

public:
	CWebWnd &operator=(const CWebWnd &arg0);

public:
	static CWebWnd &_op_assign_64(CWebWnd *pThis, const CWebWnd &arg0);
};

STATIC_ASSERT_OFFSET_OF(CWebWnd, m_hWnd, 0x0b28);
STATIC_ASSERT_OFFSET_OF(CWebWnd, m_lock, 0x0b54);
STATIC_ASSERT_SIZE(CWebWnd, 2956);
