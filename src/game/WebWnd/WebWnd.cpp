// WebWnd.cpp
#include "WebWnd.hpp"
#include "WebWnd_regen.ipp"

CWebWnd *CWebWnd::m_spBrowser = nullptr;
const int32_t CWebWnd::m_snSkipFrameMax = 30;
const int32_t CWebWnd::m_snSkipFrameMin = 10;

CWebWnd::~CWebWnd()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CWebWnd::_dtor_0() {
	return __sub_005A4EC0(this, nullptr);
}
 CWebWnd::CWebWnd(const CWebWnd& arg0) {
	_ctor_1( arg0);
}
void CWebWnd::_ctor_1( const CWebWnd& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWebWnd::CWebWnd(int32_t nUIType, long nLeftMargin, long nTopMargin, long nRightMargin, long nBottomMargin, int32_t closeType, int32_t closeX, int32_t closeY) {
	_ctor_0( nUIType, nLeftMargin, nTopMargin, nRightMargin, nBottomMargin, closeType, closeX, closeY);
}
void CWebWnd::_ctor_0( int32_t nUIType, long nLeftMargin, long nTopMargin, long nRightMargin, long nBottomMargin, int32_t closeType, int32_t closeX, int32_t closeY) {
	return __sub_005A4D20(this, nullptr, nUIType, nLeftMargin, nTopMargin, nRightMargin, nBottomMargin, closeType, closeX, closeY);
}
void CWebWnd::OnCreate(void* pData, ZXString16 sUOL) {
	__sub_005A5250(this, nullptr, pData, CreateNakedParam(sUOL));
}
void CWebWnd::Draw(const tagRECT* pRect) {
	__sub_005A5460(this, nullptr, pRect);
}
void CWebWnd::OnMoveWnd(long l, long t) {
	__sub_005A5A20(this, nullptr, l, t);
}
void CWebWnd::OnEndMoveWnd() {
	__sub_005A3D70(this, nullptr);
}
void CWebWnd::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_005A3CF0(this, nullptr, msg, wParam, rx, ry);
}
int32_t CWebWnd::OnSetFocus(int32_t bFocus) {
	return __sub_005A4370(this, nullptr, bFocus);
}
void CWebWnd::Update() {
	__sub_005A42C0(this, nullptr);
}
long CWebWnd::WindowProc(HWND__* hWindow, uint32_t iMessage, uint32_t wParam, long lParam) {
	return __sub_005A3DC0(this, nullptr, hWindow, iMessage, wParam, lParam);
}
long __stdcall CWebWnd::WindowProcEntry(HWND__* hWindow, uint32_t iMessage, uint32_t wParam, long lParam) {
	return __sub_005A3DD0(hWindow, iMessage, wParam, lParam);
}
HRESULT __stdcall CWebWnd::QueryInterface(const _GUID& riid, void** ppv) {
	return __sub_005A3E40(this, riid, ppv);
}
unsigned long __stdcall CWebWnd::AddRef() {
	return __sub_005A3FA0(this);
}
unsigned long __stdcall CWebWnd::Release() {
	return __sub_005A3FB0(this);
}
HRESULT __stdcall CWebWnd::SaveObject() {
	return __sub_005A3FC0(this);
}
HRESULT __stdcall CWebWnd::GetMoniker(unsigned long dwAssign, unsigned long dwWhichMoniker, IMoniker** ppmk) {
	return __sub_005A3FD0(this, dwAssign, dwWhichMoniker, ppmk);
}
HRESULT __stdcall CWebWnd::GetContainer(IOleContainer** ppContainer) {
	return __sub_005A3FE0(this, ppContainer);
}
HRESULT __stdcall CWebWnd::ShowObject() {
	return __sub_005A4000(this);
}
HRESULT __stdcall CWebWnd::OnShowWindow(int32_t fShow) {
	return __sub_005A4010(this, fShow);
}
HRESULT __stdcall CWebWnd::RequestNewObjectLayout() {
	return __sub_005A4020(this);
}
HRESULT __stdcall CWebWnd::GetWindow(HWND__** phwnd) {
	return __sub_005A4030(this, phwnd);
}
HRESULT __stdcall CWebWnd::ContextSensitiveHelp(int32_t fEnterMode) {
	return __sub_005A4050(this, fEnterMode);
}
HRESULT __stdcall CWebWnd::CanInPlaceActivate() {
	return __sub_005A4060(this);
}
HRESULT __stdcall CWebWnd::OnInPlaceActivate() {
	return __sub_005A4070(this);
}
HRESULT __stdcall CWebWnd::OnUIActivate() {
	return __sub_005A4080(this);
}
HRESULT __stdcall CWebWnd::GetWindowContext(IOleInPlaceFrame** ppFrame, IOleInPlaceUIWindow** ppDoc, tagRECT* lprcPosRect, tagRECT* lprcClipRect, tagOIFI* lpFrameInfo) {
	return __sub_005A4090(this, ppFrame, ppDoc, lprcPosRect, lprcClipRect, lpFrameInfo);
}
HRESULT __stdcall CWebWnd::Scroll(tagSIZE scrollExtent) {
	return __sub_005A40C0(this, CreateNakedParam(scrollExtent));
}
HRESULT __stdcall CWebWnd::OnUIDeactivate(int32_t fUndoable) {
	return __sub_005A40D0(this, fUndoable);
}
HRESULT __stdcall CWebWnd::OnInPlaceDeactivate() {
	return __sub_005A40E0(this);
}
HRESULT __stdcall CWebWnd::DiscardUndoState() {
	return __sub_005A40F0(this);
}
HRESULT __stdcall CWebWnd::DeactivateAndUndo() {
	return __sub_005A4100(this);
}
HRESULT __stdcall CWebWnd::OnPosRectChange(const tagRECT* lprcPosRect) {
	return __sub_005A4110(this, lprcPosRect);
}
HRESULT __stdcall CWebWnd::EnableModeless(int32_t fEnable) {
	return __sub_005A4120(this, fEnable);
}
HRESULT __stdcall CWebWnd::FilterDataObject(IDataObject* pDO, IDataObject** ppDORet) {
	return __sub_005A4130(this, pDO, ppDORet);
}
HRESULT __stdcall CWebWnd::GetDropTarget(IDropTarget* pDropTarget, IDropTarget** ppDropTarget) {
	return __sub_005A4140(this, pDropTarget, ppDropTarget);
}
HRESULT __stdcall CWebWnd::GetExternal(IDispatch** ppDispatch) {
	return __sub_005A4150(this, ppDispatch);
}
HRESULT __stdcall CWebWnd::GetHostInfo(DOCHOSTUIINFO* pInfo) {
	return __sub_005A4170(this, pInfo);
}
HRESULT __stdcall CWebWnd::GetOptionKeyPath(wchar_t** pchKey, unsigned long dwReserved) {
	return __sub_005A4190(this, pchKey, dwReserved);
}
HRESULT __stdcall CWebWnd::HideUI() {
	return __sub_005A41A0(this);
}
HRESULT __stdcall CWebWnd::OnDocWindowActivate(int32_t fActive) {
	return __sub_005A41B0(this, fActive);
}
HRESULT __stdcall CWebWnd::OnFrameWindowActivate(int32_t fActive) {
	return __sub_005A41C0(this, fActive);
}
HRESULT __stdcall CWebWnd::ResizeBorder(const tagRECT* prcBorder, IOleInPlaceUIWindow* pUIWindow, int32_t fFrameWindow) {
	return __sub_005A41D0(this, prcBorder, pUIWindow, fFrameWindow);
}
HRESULT __stdcall CWebWnd::ShowContextMenu(unsigned long dwID, tagPOINT* ppt, IUnknown* pcmdTarget, IDispatch* pdispObject) {
	return __sub_005A41E0(this, dwID, ppt, pcmdTarget, pdispObject);
}
HRESULT __stdcall CWebWnd::ShowUI(unsigned long dwID, IOleInPlaceActiveObject* pActiveObject, IOleCommandTarget* pCommandTarget, IOleInPlaceFrame* pFrame, IOleInPlaceUIWindow* pDoc) {
	return __sub_005A41F0(this, dwID, pActiveObject, pCommandTarget, pFrame, pDoc);
}
HRESULT __stdcall CWebWnd::TranslateAcceleratorA(tagMSG* lpMsg, const _GUID* pguidCmdGroup, unsigned long nCmdID) {
	return __sub_005A4200(this, lpMsg, pguidCmdGroup, nCmdID);
}
HRESULT __stdcall CWebWnd::TranslateUrl(unsigned long dwTranslate, wchar_t* pchURLIn, wchar_t** ppchURLOut) {
	return __sub_005A4210(this, dwTranslate, pchURLIn, ppchURLOut);
}
HRESULT __stdcall CWebWnd::UpdateUI() {
	return __sub_005A4220(this);
}
HRESULT __stdcall CWebWnd::ShowHelp(HWND__* hwnd, wchar_t* pszHelpFile, uint32_t uCommand, unsigned long dwData, tagPOINT ptMouse, IDispatch* pDispatchObjectHit) {
	return __sub_005A4230(this, hwnd, pszHelpFile, uCommand, dwData, CreateNakedParam(ptMouse), pDispatchObjectHit);
}
HRESULT __stdcall CWebWnd::ShowMessage(HWND__* hwnd, wchar_t* lpstrText, wchar_t* lpstrCaption, unsigned long dwType, wchar_t* lpstrHelpFile, unsigned long dwHelpContext, long* plResult) {
	return __sub_005A4240(this, hwnd, lpstrText, lpstrCaption, dwType, lpstrHelpFile, dwHelpContext, plResult);
}
HRESULT __stdcall CWebWnd::GetIDsOfNames(const _GUID& riid, wchar_t** rgszNames, uint32_t cNames, unsigned long lcid, long* rgDispId) {
	return __sub_005A4250(this, riid, rgszNames, cNames, lcid, rgDispId);
}
HRESULT __stdcall CWebWnd::GetTypeInfo(uint32_t iTInfo, unsigned long lcid, ITypeInfo** ppTInfo) {
	return __sub_005A4260(this, iTInfo, lcid, ppTInfo);
}
HRESULT __stdcall CWebWnd::GetTypeInfoCount(uint32_t* pctinfo) {
	return __sub_005A4270(this, pctinfo);
}
HRESULT __stdcall CWebWnd::Invoke(long dispIdMember, const _GUID& riid, unsigned long lcid, uint16_t wFlags, tagDISPPARAMS* pDispParams, tagVARIANT* pVarResult, tagEXCEPINFO* pExcepInfo, uint32_t* puArgErr) {
	return __sub_005A4420(this, dispIdMember, riid, lcid, wFlags, pDispParams, pVarResult, pExcepInfo, puArgErr);
}
int32_t CWebWnd::Run(void* pParam, ZThread::ZThreadResult* pResult) {
	return __sub_005A5AC0(this, nullptr, pParam, pResult);
}
void CWebWnd::NavigateUrl(const wchar_t* url) {
	__sub_005A6030(this, nullptr, url);
}
void CWebWnd::OnNavigateComplete(const char* arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CWebWnd::OnBeforeNavigate(const char* arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CWebWnd::CheckHanged() {
	return __sub_005A4790(this, nullptr);
}
int32_t CWebWnd::Init() {
	return __sub_005A4790(this, nullptr);
}
HRESULT CWebWnd::Navigate(const wchar_t* isURL) {
	return __sub_005A4550(this, nullptr, isURL);
}
CWebWnd& CWebWnd::operator=(const CWebWnd& arg0) {
	return _op_assign_64(this, arg0);
}
CWebWnd& CWebWnd::_op_assign_64(CWebWnd* pThis, const CWebWnd& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWebWnd::BrowserRequest::~BrowserRequest() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CWebWnd::BrowserRequest::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWebWnd::BrowserRequest::BrowserRequest(const CWebWnd::BrowserRequest& arg0) {
	_ctor_1( arg0);
}
void CWebWnd::BrowserRequest::_ctor_1( const CWebWnd::BrowserRequest& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWebWnd::BrowserRequest::BrowserRequest() {
	UNIMPLEMENTED; //_ctor_0();
}
void CWebWnd::BrowserRequest::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CWebWnd::BrowserRequest& CWebWnd::BrowserRequest::operator=(const CWebWnd::BrowserRequest& arg0) {
	return _op_assign_3(this, arg0);
}
CWebWnd::BrowserRequest& CWebWnd::BrowserRequest::_op_assign_3(CWebWnd::BrowserRequest* pThis, const CWebWnd::BrowserRequest& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

