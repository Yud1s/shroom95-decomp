#include "regen.hpp"
// WebWnd.ipp
#include "WebWnd.hpp"

// CWebWnd::GetDropTarget
__SUB_CLASS(005A4140, __stdcall, 39776,  CWebWnd, HRESULT, IDropTarget*, IDropTarget**) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0xC
}
}
// CWebWnd::ShowMessage
__SUB_CLASS(005A4240, __stdcall, 39802,  CWebWnd, HRESULT, HWND__*, wchar_t*, wchar_t*, unsigned long, wchar_t*, unsigned long, long*) {
__asm {

 Block0:
	xor eax,eax
	ret 0x20
}
}
// CWebWnd::CanInPlaceActivate
__SUB_CLASS0(005A4060, __stdcall, 39752,  CWebWnd, HRESULT) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CWebWnd::Update
__SUB_CLASS_THIS0(005A42C0, __thiscall, 39725,  CWebWnd, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB70]
	test eax,eax
	jne Block11

 Block1:
	call CWnd::Update
	inc dword ptr [esi+0xB88]
	mov eax,dword ptr [esi+0xB88]
	cmp eax,dword ptr [esi+0xB84]
	jle Block11

 Block2:
	cmp dword ptr [esi+0xB2C],0
	je Block11

 Block3:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov dword ptr [esi+0xB88],0
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	call IWzGr2D::Getfps100
	cmp eax,0xDAC
	ja Block8

 Block6:
	inc dword ptr [esi+0xB84]
	mov eax,dword ptr [esi+0xB84]
	cmp eax,0x10
	jl Block10

 Block7:
	mov eax,0x10
	mov dword ptr [esi+0xB84],eax
	pop esi
	ret

 Block8:
	dec dword ptr [esi+0xB84]
	mov eax,dword ptr [esi+0xB84]
	cmp eax,1
	jg Block10

 Block9:
	mov eax,1

 Block10:
	mov dword ptr [esi+0xB84],eax

 Block11:
	pop esi
	ret
}
}
// CWebWnd::Run
_SUB_EXCEPTION_HANDLER(5A5AC0)
__SUB_CLASS_THIS(005A5AC0, __thiscall, 39820,  CWebWnd, int32_t, void*, ZThread::ZThreadResult*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A5AC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x88
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x9C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0xB0]
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov edi,dword ptr [eax+0x10]
	mov dword ptr [eax+0x14],ebp
	mov eax,dword ptr [eax+0xC]
	push eax
	call SetEvent
	push 0xFFFFFFFF
	push edi
	call WaitForSingleObject
	push edi
	call CloseHandle
	push ebp
	call CoInitialize
	mov ecx,dword ptr [_D_G_HINSTANCE]
	lea edx,[esp+0x54]
	push edx
	mov dword ptr [esp+0x58],0x3080
	mov dword ptr [esp+0x5C],offset CWebWnd::WindowProcEntry
	mov dword ptr [esp+0x60],ebp
	mov dword ptr [esp+0x64],ebp
	mov dword ptr [esp+0x68],ecx
	mov dword ptr [esp+0x6C],ebp
	mov dword ptr [esp+0x70],ebp
	mov dword ptr [esp+0x74],ebp
	mov dword ptr [esp+0x78],ebp
	mov dword ptr [esp+0x7C],offset _D_SCLASSNAME
	call RegisterClassA
	lea eax,[esi+0x38]
	mov dword ptr [esp+0x7C],eax
	nop

 Block1:
	lea edi,[esi+0x38]
	mov ecx,edi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	je Block6

 Block2:
	mov ecx,edi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	je Block6

 Block3:
	jmp Block5

 Block5:
	push ebp
	call dword ptr [ZImports::_Sleep]
	mov ecx,edi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	jne Block5

 Block6:
	mov dword ptr [esp+0xA4],ebp
	cmp dword ptr [esi+0x48],ebp
	je Block27

 Block7:
	mov eax,dword ptr [esi+0x54]
	mov edi,dword ptr [esi+0x4C]
	test eax,eax
	jne Block27

 Block8:
	mov eax,dword ptr [edi]
	cmp eax,3
	ja Block26

 Block9:
	cmp EAX, 0
je Block10
cmp EAX, 1
je Block13
cmp EAX, 2
je Block34
cmp EAX, 3
je Block57


 Block10:
	lea ecx,[esi-0xB1C]
	call CWebWnd::Init
	test eax,eax
	jne Block12

 Block11:
	mov dword ptr [esi+0x54],1
	jmp Block26

 Block12:
	mov dword ptr [esi+0x58],1
	jmp Block26

 Block13:
	mov ecx,dword ptr [esi+0x58]
	test ecx,ecx
	je Block26

 Block14:
	lea edx,[esp+0x38]
	lea edi,[esi-0xB1C]
	push edx
	mov ecx,edi
	call CWnd::GetCanvas
	mov ebp,eax
	lea eax,[esp+0x30]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xA8],1
	call CWnd::GetCanvas
	mov ebx,eax
	mov edi,dword ptr [ebp]
	mov byte ptr [esp+0xA4],2
	test edi,edi
	je Block60

 Block15:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x20]
	push edx
	push edi
	mov dword ptr [esp+0x28],0
	call eax
	test eax,eax
	jge Block17

 Block16:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block17:
	mov ebp,dword ptr [ebx]
	mov edi,dword ptr [esp+0x20]
	test ebp,ebp
	je Block60

 Block18:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x28]
	push edx
	push ebp
	mov dword ptr [esp+0x30],0
	call eax
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block20:
	sub edi,dword ptr [esi+0x2C]
	mov ecx,dword ptr [esp+0x28]
	sub edi,dword ptr [esi+0x28]
	mov edx,dword ptr [esi-0xB18]
	mov eax,dword ptr [edx+0x30]
	push 1
	lea ebp,[esi-0xB18]
	push edi
	push ecx
	mov ecx,ebp
	call eax
	add eax,dword ptr [esi+0x28]
	mov edx,dword ptr [ebp]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,ebp
	call eax
	add eax,dword ptr [esi+0x30]
	mov ecx,dword ptr [esi+0xC]
	push eax
	push ecx
	call dword ptr [ZImports::_MoveWindow]
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xA4],1
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block22:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0xA4],0
	test eax,eax

 Block23:
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	xor ebp,ebp

 Block26:
	mov eax,dword ptr [esi+0x4C]
	lea ecx,[esi+0x40]
	push eax
	call ZList<CWebWnd::BrowserRequest>::RemoveAt
	cmp dword ptr [esi+0x48],ebp
	jne Block7

 Block27:
	or edi,0xFFFFFFFF
	add dword ptr [esi+0x3C],edi
	mov dword ptr [esp+0xA4],edi
	jne Block29

 Block28:
	mov dword ptr [esi+0x38],ebp

 Block29:
	mov ecx,dword ptr [esi+0x54]
	test ecx,ecx
	jne Block61

 Block30:
	mov edx,dword ptr [esi+0x54]
	test edx,edx
	jne Block1

 Block31:
	push 1
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x90]
	push eax
	call PeekMessageA
	test eax,eax
	je Block1

 Block32:
	lea ecx,[esp+0x80]
	push ecx
	call TranslateMessage
	lea edx,[esp+0x80]
	push edx
	call DispatchMessageA
	mov eax,dword ptr [esi+0x54]
	test eax,eax
	je Block31

 Block33:
	jmp Block1

 Block34:
	mov eax,dword ptr [esi+0x58]
	test eax,eax
	je Block37

 Block35:
	lea ecx,[esp+0x40]
	push ecx
	lea ecx,[esi-0xB1C]
	call CWnd::GetCanvas
	or dword ptr [esp+0x14],1
	cmp dword ptr [eax],ebp
	sete al
	test al,al
	sete al
	test al,al
	je Block37

 Block36:
	mov bl,1
	jmp Block38

 Block37:
	xor bl,bl

 Block38:
	test byte ptr [esp+0x14],1
	mov dword ptr [esp+0xA4],ebp
	je Block41

 Block39:
	mov eax,dword ptr [esp+0x40]
	and dword ptr [esp+0x14],0xFFFFFFFE
	cmp eax,ebp
	je Block41

 Block40:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block41:
	test bl,bl
	je Block26

 Block42:
	mov dword ptr [esp+0x44],ebp
	mov dword ptr [esp+0x48],ebp
	lea ecx,[esp+0x3C]
	lea ebp,[esi-0xB1C]
	push ecx
	mov ecx,ebp
	call CWnd::GetCanvas
	mov edi,dword ptr [eax]
	xor ebx,ebx
	mov byte ptr [esp+0xA4],4
	cmp edi,ebx
	je Block60

 Block43:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x24]
	push eax
	push edi
	mov dword ptr [esp+0x2C],ebx
	call ecx
	cmp eax,ebx
	jge Block45

 Block44:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block45:
	mov edx,dword ptr [esp+0x24]
	sub edx,dword ptr [esi+0x34]
	mov eax,dword ptr [esp+0x3C]
	sub edx,dword ptr [esi+0x30]
	mov byte ptr [esp+0xA4],0
	mov dword ptr [esp+0x4C],edx
	cmp eax,ebx
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	lea eax,[esp+0x34]
	push eax
	mov ecx,ebp
	call CWnd::GetCanvas
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0xA4],5
	cmp edi,ebx
	je Block60

 Block48:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x2C]
	push edx
	push edi
	mov dword ptr [esp+0x34],ebx
	call eax
	cmp eax,ebx
	jge Block50

 Block49:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block50:
	mov ecx,dword ptr [esp+0x2C]
	sub ecx,dword ptr [esi+0x2C]
	mov eax,dword ptr [esp+0x34]
	sub ecx,dword ptr [esi+0x28]
	mov byte ptr [esp+0xA4],0
	mov dword ptr [esp+0x50],ecx
	cmp eax,ebx
	je Block52

 Block51:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block52:
	mov ecx,dword ptr [esi+0x10]
	xor eax,eax
	mov dword ptr [esp+0x1C],eax
	cmp ecx,ebx
	je Block54

 Block53:
	mov edx,dword ptr [ecx]
	lea eax,[esp+0x1C]
	push eax
	push offset _D_IID_IVIEWOBJECT
	push ecx
	mov ecx,dword ptr [edx]
	call ecx
	mov eax,dword ptr [esp+0x1C]

 Block54:
	mov byte ptr [esp+0xA4],6
	cmp eax,ebx
	je Block56

 Block55:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0xC]
	push ebx
	push ebx
	push ebx
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,dword ptr [esi+0x24]
	push ecx
	push ebx
	push ebx
	push ebx
	push ebx
	push 1
	push eax
	call edx
	mov eax,dword ptr [esp+0x1C]

 Block56:
	mov byte ptr [esp+0xA4],0
	cmp eax,ebx
	jmp Block23

 Block57:
	mov eax,dword ptr [esi+0x60]
	test eax,eax
	je Block59

 Block58:
	lea ecx,[esi+0x40]
	call ZList<CWebWnd::BrowserRequest>::AddHead_
	add edi,4
	push edi
	lea ecx,[eax+4]
	mov dword ptr [eax],3
	call ZXString16::op_assign
	jmp Block26

 Block59:
	mov edi,dword ptr [edi+4]
	push edi
	lea ecx,[esi-0xB1C]
	call CWebWnd::Navigate
	jmp Block26

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	mov eax,dword ptr [esi+0x10]
	cmp eax,ebp
	je Block67

 Block62:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x7C]
	call eax
	test eax,eax
	jl Block65

 Block63:
	cmp word ptr [esp+0x18],di
	jne Block65

 Block64:
	mov eax,dword ptr [esi+0x10]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x38]
	push eax
	call edx

 Block65:
	mov eax,dword ptr [esi+0x10]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x80]
	push eax
	call edx
	mov eax,dword ptr [esi+0x14]
	mov ecx,dword ptr [esi+0x10]
	push eax
	push offset _D_DIID_DWEBBROWSER
	push ecx
	call _atl_AtlUnadvise
	mov eax,dword ptr [esi+0x10]
	cmp eax,ebp
	je Block67

 Block66:
	mov dword ptr [esi+0x10],ebp
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block67:
	mov ecx,dword ptr [esi+0x64]
	mov edx,dword ptr [esi+4]
	push ebp
	push ecx
	push edx
	call dword ptr [ZImports::_AttachThreadInput]
	mov eax,dword ptr [esi+0xC]
	cmp eax,ebp
	je Block69

 Block68:
	push eax
	call DestroyWindow
	mov dword ptr [esi+0xC],ebp

 Block69:
	mov eax,dword ptr [_D_G_HINSTANCE]
	push eax
	push offset _D_SCLASSNAME
	call UnregisterClassA
	call CoUninitialize
	mov dword ptr [esi+0x54],ebp
	xor eax,eax
	mov ecx,dword ptr [esp+0x9C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x94
	ret 8
}
}
// CWebWnd::OnInPlaceActivate
__SUB_CLASS0(005A4070, __stdcall, 39752,  CWebWnd, HRESULT) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CWebWnd::OnPosRectChange
__SUB_CLASS(005A4110, __stdcall, 39765,  CWebWnd, HRESULT, const tagRECT*) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 8
}
}
// CWebWnd::GetRTTI
__SUB_CLASS_THIS0(000ABE30, __thiscall, 39841,  CWebWnd, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CWebWnd::ms_RTTI_CWebWnd
	ret
}
}
// CWebWnd::RequestNewObjectLayout
__SUB_CLASS0(005A4020, __stdcall, 39736,  CWebWnd, HRESULT) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 4
}
}
// CWebWnd::CWebWnd
_SUB_EXCEPTION_HANDLER(5A4D20)
__SUB_CLASS_THIS(005A4D20, __thiscall, 39837,  CWebWnd, void, int32_t, long, long, long, long, int32_t, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A4D20
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x38]
	xor edi,edi
	push edi
	push edi
	push edi
	push eax
	mov eax,dword ptr [esp+0x34]
	push ecx
	push edx
	push eax
	mov ecx,esi
	call CUIWnd::_ctor_0
	lea ebx,[esi+0xB1C]
	mov dword ptr [esp+0x1C],edi
	int 3// TODO: 	mov dword ptr [ebx],offset ZThread::`vftable'
	mov dword ptr [ebx+4],edi
	mov dword ptr [ebx+8],edi
	int 3// TODO: 	mov dword ptr [esi],offset CWebWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWebWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWebWnd::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xB08],offset CWebWnd::`vftable'{for `IOleClientSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB0C],offset CWebWnd::`vftable'{for `IOleInPlaceSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB10],offset CWebWnd::`vftable'{for `IDocHostUIHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xB14],offset CWebWnd::`vftable'{for `IDocHostShowUI'}
	int 3// TODO: 	mov dword ptr [esi+0xB18],offset CWebWnd::`vftable'{for `DWebBrowserEvents2'}
	int 3// TODO: 	mov dword ptr [ebx],offset CWebWnd::`vftable'{for `ZThread'}
	mov dword ptr [esi+0xB28],edi
	mov dword ptr [esi+0xB2C],edi
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esi+0xB44],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [esi+0xB34],edi
	mov dword ptr [esi+0xB38],edi
	mov dword ptr [esi+0xB3C],edi
	mov dword ptr [esi+0xB40],edi
	mov dword ptr [esi+0xB48],edx
	mov dword ptr [esi+0xB4C],eax
	mov dword ptr [esi+0xB50],ecx
	mov dword ptr [esi+0xB54],edi
	int 3// TODO: 	mov dword ptr [esi+0xB5C],offset ZList<CWebWnd::BrowserRequest>::`vftable'
	mov dword ptr [esi+0xB64],edi
	mov dword ptr [esi+0xB68],edi
	mov dword ptr [esi+0xB6C],edi
	mov dword ptr [esi+0xB70],edi
	mov dword ptr [esi+0xB74],edi
	mov byte ptr [esp+0x1C],3
	mov dword ptr [esi+0xB78],1
	call dword ptr [ZImports::_GetCurrentThreadId]
	push edi
	push edi
	push edi
	push edi
	push edi
	mov ecx,ebx
	mov dword ptr [esi+0xB80],eax
	mov dword ptr [esi+0xB84],1
	mov dword ptr [esi+0xB88],edi
	call ZThread::BeginThread
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0x20
}
}
// CWebWnd::OnEndMoveWnd
__SUB_CLASS_THIS0(005A3D70, __thiscall, 39725,  CWebWnd, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB70]
	test eax,eax
	jne Block4

 Block1:
	push edi
	call CWnd::OnEndMoveWnd
	mov ecx,dword ptr [esi+0xB28]
	mov edi,dword ptr [ZImports::_EnableWindow]
	push 1
	push ecx
	call edi
	mov edx,dword ptr [esi+0xB28]
	mov esi,dword ptr [ZImports::_GetWindow]
	push 5
	push edx
	call esi
	push 5
	push eax
	call esi
	push 5
	push eax
	call esi
	test eax,eax
	je Block3

 Block2:
	push 1
	push eax
	call edi

 Block3:
	pop edi

 Block4:
	pop esi
	ret
}
}
// CWebWnd::Scroll
__SUB_CLASS(005A40C0, __stdcall, 39764,  CWebWnd, HRESULT, NakedParam<tagSIZE>) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0xC
}
}
// CWebWnd::EnableModeless
__SUB_CLASS(005A4120, __stdcall, 39766,  CWebWnd, HRESULT, int32_t) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 8
}
}
// CWebWnd::OnSetFocus
__SUB_CLASS_THIS(005A4370, __thiscall, 39731,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB6C]
	test eax,eax
	je Block2

 Block1:
	xor eax,eax
	pop esi
	ret 4

 Block2:
	cmp dword ptr [esp+8],0
	push edi
	mov edi,dword ptr [ZImports::_EnableWindow]
	je Block5

 Block3:
	mov ecx,dword ptr [esi+0xB24]
	push 1
	push ecx
	call edi
	mov edx,dword ptr [esi+0xB24]
	mov esi,dword ptr [ZImports::_GetWindow]
	push 5
	push edx
	call esi
	push 5
	push eax
	call esi
	push 5
	push eax
	call esi
	test eax,eax
	je Block8

 Block4:
	push 1
	push eax
	call edi
	pop edi
	mov eax,1
	pop esi
	ret 4

 Block5:
	mov eax,dword ptr [esi+0xB24]
	push 0
	push eax
	call edi
	mov ecx,dword ptr [esi+0xB24]
	mov esi,dword ptr [ZImports::_GetWindow]
	push 5
	push ecx
	call esi
	push 5
	push eax
	call esi
	push 5
	push eax
	call esi
	test eax,eax
	je Block7

 Block6:
	push 0
	push eax
	call edi

 Block7:
	mov edx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov eax,dword ptr [edx+4]
	push eax
	call SetFocus

 Block8:
	pop edi
	mov eax,1
	pop esi
	ret 4
}
}
// CWebWnd::GetHostInfo
__SUB_CLASS(005A4170, __stdcall, 39781,  CWebWnd, HRESULT, DOCHOSTUIINFO*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax],0x14
	mov dword ptr [eax+4],0x1001F
	xor eax,eax
	ret 8
}
}
// CWebWnd::ShowUI
__SUB_CLASS(005A41F0, __stdcall, 39794,  CWebWnd, HRESULT, unsigned long, IOleInPlaceActiveObject*, IOleCommandTarget*, IOleInPlaceFrame*, IOleInPlaceUIWindow*) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0x18
}
}
// CWebWnd::Invoke
__SUB_CLASS(005A4420, __stdcall, 39816,  CWebWnd, HRESULT, long, const _GUID&, unsigned long, uint16_t, tagDISPPARAMS*, tagVARIANT*, tagEXCEPINFO*, uint32_t*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-4],eax
	push ebx
	push esi
	mov esi,dword ptr [ebp+8]
	mov eax,dword ptr [esi+0x58]
	push edi
	test eax,eax
	jne Block7

 Block1:
	mov eax,dword ptr [ebp+0xC]
	sub eax,0xFA
	je Block6

 Block2:
	sub eax,1
	je Block5

 Block3:
	sub eax,1
	jne Block7

 Block4:
	mov eax,dword ptr [esi+0x14]
	mov ecx,dword ptr [eax]
	lea edx,[ebp-8]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x78]
	call eax
	mov ecx,dword ptr [ebp-8]
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push 0xFFFFFFFF
	push ecx
	push ebx
	push ebx
	call WideCharToMultiByte
	call __alloca_probe_16
	mov edx,dword ptr [ebp-8]
	mov edi,esp
	push ebx
	push ebx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push ebx
	push ebx
	call WideCharToMultiByte
	mov eax,dword ptr [esi-0xB18]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esi-0xB18]
	push edi
	call edx
	mov dword ptr [esi+0x60],ebx
	mov dword ptr [esi+0x64],ebx
	jmp Block7

 Block5:
	mov eax,dword ptr [ebp+0x1C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	mov eax,1
	mov word ptr [edx],ax
	xor eax,eax
	jmp Block8

 Block6:
	mov dword ptr [esi+0x60],1
	call timeGetTime
	mov ebx,dword ptr [ebp+0x1C]
	push 0
	push 0
	push 0
	mov dword ptr [esi+0x64],eax
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+0x58]
	mov eax,dword ptr [edx+8]
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	call __alloca_probe_16
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+0x58]
	mov edx,dword ptr [ecx+8]
	mov edi,esp
	push 0
	push 0
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call WideCharToMultiByte
	mov eax,dword ptr [esi-0xB18]
	mov edx,dword ptr [eax+0x44]
	lea ecx,[esi-0xB18]
	push edi
	call edx

 Block7:
	mov eax,0x80020003

 Block8:
	lea esp,[ebp-0x14]
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-4]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 0x24
}
}
// CWebWnd::OnMoveWnd
_SUB_EXCEPTION_HANDLER(5A5A20)
__SUB_CLASS_THIS(005A5A20, __thiscall, 39729,  CWebWnd, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A5A20
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0xB70]
	test eax,eax
	jne Block4

 Block1:
	mov ecx,dword ptr [esi+0xB28]
	push eax
	push ecx
	call dword ptr [ZImports::_EnableWindow]
	lea edx,[esi+0xB54]
	push edx
	lea ecx,[esp+0xC]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	lea ecx,[esi+0xB5C]
	mov dword ptr [esp+0x14],0
	call ZList<CWebWnd::BrowserRequest>::AddTail_
	mov dword ptr [eax],1
	mov eax,dword ptr [esp+8]
	or ecx,0xFFFFFFFF
	add dword ptr [eax+4],ecx
	mov dword ptr [esp+0x14],ecx
	jne Block3

 Block2:
	mov dword ptr [eax],0

 Block3:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::OnMoveWnd

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CWebWnd::ContextSensitiveHelp
__SUB_CLASS(005A4050, __stdcall, 39751,  CWebWnd, HRESULT, int32_t) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 8
}
}
// CWebWnd::DiscardUndoState
__SUB_CLASS0(005A40F0, __stdcall, 39752,  CWebWnd, HRESULT) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 4
}
}
// CWebWnd::OnCreate
_SUB_EXCEPTION_HANDLER(5A5250)
__SUB_CLASS_THIS(005A5250, __thiscall, 39727,  CWebWnd, void, void*, NakedParam<ZXString16>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A5250
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0
	push ecx
	mov ecx,esp
	lea eax,[ebp+0xC]
	mov dword ptr [ebp-0x1C],esp
	push eax
	mov dword ptr [ebp-4],0
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov ecx,dword ptr [ebp+8]
	push ecx
	mov ecx,esi
	call CUIWnd::OnCreate_1
	lea edx,[ebp-0x1C]
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x2C]
	lea edi,[esi+4]
	mov ecx,edi
	mov byte ptr [ebp-4],1
	call edx
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,edi
	call edx
	mov ebx,dword ptr [ebp-0x1C]
	xor edi,edi
	cmp ebx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[ebp-0x18]
	push ecx
	push ebx
	mov dword ptr [ebp-0x18],edi
	call edx
	cmp eax,edi
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[ebp-0x14]
	push ecx
	push ebx
	mov dword ptr [ebp-0x14],edi
	call edx
	cmp eax,edi
	jge Block6

 Block5:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block6:
	push edi
	call dword ptr [ZImports::_CreateCompatibleDC]
	mov dword ptr [esi+0xB40],eax
	cmp eax,edi
	je Block8

 Block7:
	mov eax,0x38
	call __chkstk
	mov edi,esp
	push 0x34
	push 0
	push edi
	call _memset
	mov eax,dword ptr [ebp-0x18]
	mov dword ptr [edi],0x28
	sub eax,dword ptr [esi+0xB50]
	add esp,0xC
	sub eax,dword ptr [esi+0xB4C]
	push 0
	mov dword ptr [edi+4],eax
	mov ecx,dword ptr [esi+0xB48]
	add ecx,dword ptr [esi+0xB44]
	mov eax,0x10
	sub ecx,dword ptr [ebp-0x14]
	mov word ptr [edi+0xE],ax
	mov dword ptr [edi+8],ecx
	mov dword ptr [edi+0x10],3
	mov edx,1
	mov word ptr [edi+0xC],dx
	mov dword ptr [edi+0x28],0xF00
	lea eax,[edi+0x28]
	push 0
	add eax,4
	mov dword ptr [eax],0xF0
	lea ecx,[esi+0xB34]
	push ecx
	add eax,4
	push 0
	mov dword ptr [eax],0xF
	mov edx,dword ptr [esi+0xB40]
	push edi
	push edx
	call dword ptr [ZImports::_CreateDIBSection]
	push eax
	mov dword ptr [esi+0xB38],eax
	mov eax,dword ptr [esi+0xB40]
	push eax
	call dword ptr [ZImports::_SelectObject]
	mov dword ptr [esi+0xB3C],eax

 Block8:
	lea ecx,[esi+0xB54]
	push ecx
	lea ecx,[ebp-0x14]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	lea ecx,[esi+0xB5C]
	mov byte ptr [ebp-4],2
	call ZList<CWebWnd::BrowserRequest>::AddTail_
	mov dword ptr [eax],0
	mov eax,dword ptr [ebp-0x14]
	or esi,0xFFFFFFFF
	add dword ptr [eax+4],esi
	jne Block10

 Block9:
	mov dword ptr [eax],0

 Block10:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [ebp-4],0
	call eax
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-4],esi
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	lea esp,[ebp-0x2C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CWebWnd::OnUIActivate
__SUB_CLASS0(005A4080, __stdcall, 39752,  CWebWnd, HRESULT) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 4
}
}
// CWebWnd::ResizeBorder
__SUB_CLASS(005A41D0, __stdcall, 39786,  CWebWnd, HRESULT, const tagRECT*, IOleInPlaceUIWindow*, int32_t) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0x10
}
}
// CWebWnd::TranslateUrl
__SUB_CLASS(005A4210, __stdcall, 39798,  CWebWnd, HRESULT, unsigned long, wchar_t*, wchar_t**) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0x10
}
}
// CWebWnd::ShowHelp
__SUB_CLASS(005A4230, __stdcall, 39800,  CWebWnd, HRESULT, HWND__*, wchar_t*, uint32_t, unsigned long, NakedParam<tagPOINT>, IDispatch*) {
__asm {

 Block0:
	xor eax,eax
	ret 0x20
}
}
// CWebWnd::GetWindow
__SUB_CLASS(005A4030, __stdcall, 39750,  CWebWnd, HRESULT, HWND__**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [eax+0x1C]
	mov edx,dword ptr [esp+8]
	mov dword ptr [edx],ecx
	xor eax,eax
	ret 8
}
}
// CWebWnd::QueryInterface
__SUB_CLASS(005A3E40, __stdcall, 39734,  CWebWnd, HRESULT, const _GUID&, void**) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+0xC]
	push offset _D_IID_IOLECLIENTSI
	push esi
	call _IsEqualGUID
	add esp,8
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+8]
	lea eax,[ecx-0xB08]
	neg eax
	sbb eax,eax
	and eax,ecx
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],eax
	xor eax,eax
	pop esi
	ret 0xC

 Block2:
	push offset _D_IID_IUNKNOWN
	push esi
	call _IsEqualGUID
	add esp,8
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [esp+8]
	mov edx,dword ptr [esp+0x10]
	lea eax,[ecx-0xB08]
	neg eax
	sbb eax,eax
	and eax,ecx
	mov dword ptr [edx],eax
	xor eax,eax
	pop esi
	ret 0xC

 Block4:
	push offset _D_IID_IOLEINPLACES
	push esi
	call _IsEqualGUID
	add esp,8
	test eax,eax
	je Block7

 Block5:
	mov eax,dword ptr [esp+8]
	lea ecx,[eax-0xB08]
	test ecx,ecx
	je Block17

 Block6:
	mov edx,dword ptr [esp+0x10]
	add eax,4
	mov dword ptr [edx],eax
	xor eax,eax
	pop esi
	ret 0xC

 Block7:
	push offset _D_IID_IOLEWINDOW
	push esi
	call _IsEqualGUID
	add esp,8
	test eax,eax
	jne Block5

 Block8:
	push offset _D_IID_IDOCHOSTUIHA
	push esi
	call _IsEqualGUID
	add esp,8
	test eax,eax
	je Block11

 Block9:
	mov eax,dword ptr [esp+8]
	lea ecx,[eax-0xB08]
	test ecx,ecx
	je Block17

 Block10:
	mov edx,dword ptr [esp+0x10]
	add eax,8
	mov dword ptr [edx],eax
	xor eax,eax
	pop esi
	ret 0xC

 Block11:
	push offset _D_IID_IDOCHOSTSHOW
	push esi
	call _IsEqualGUID
	add esp,8
	test eax,eax
	je Block14

 Block12:
	mov eax,dword ptr [esp+8]
	lea ecx,[eax-0xB08]
	test ecx,ecx
	je Block17

 Block13:
	mov edx,dword ptr [esp+0x10]
	add eax,0xC
	mov dword ptr [edx],eax
	xor eax,eax
	pop esi
	ret 0xC

 Block14:
	push offset _D_DIID_DWEBBROWSER
	push esi
	call _IsEqualGUID
	add esp,8
	test eax,eax
	je Block18

 Block15:
	mov eax,dword ptr [esp+8]
	lea ecx,[eax-0xB08]
	test ecx,ecx
	je Block17

 Block16:
	mov edx,dword ptr [esp+0x10]
	add eax,0x10
	mov dword ptr [edx],eax
	xor eax,eax
	pop esi
	ret 0xC

 Block17:
	mov edx,dword ptr [esp+0x10]
	xor eax,eax
	mov dword ptr [edx],eax
	pop esi
	ret 0xC

 Block18:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax],0
	mov eax,0x80004002
	pop esi
	ret 0xC
}
}
// CWebWnd::WindowProcEntry
__SUB(005A3DD0, __stdcall, 39733,  long, HWND__*, uint32_t, uint32_t, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push 0xFFFFFFEB
	push esi
	call GetWindowLongA
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x10]
	push ecx
	mov ecx,dword ptr [esp+0x10]
	push edx
	push ecx
	push esi
	mov ecx,eax
	call CWebWnd::WindowProc
	pop esi
	ret 0x10

 Block2:
	mov ecx,dword ptr [CWebWnd::m_spBrowser]
	test ecx,ecx
	je Block4

 Block3:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x10]
	push edx
	mov edx,dword ptr [esp+0x10]
	push eax
	push edx
	push esi
	call CWebWnd::WindowProc
	pop esi
	ret 0x10

 Block4:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	push eax
	push ecx
	push edx
	push esi
	call DefWindowProcA
	pop esi
	ret 0x10
}
}
// CWebWnd::FilterDataObject
__SUB_CLASS(005A4130, __stdcall, 39771,  CWebWnd, HRESULT, IDataObject*, IDataObject**) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0xC
}
}
// CWebWnd::AddRef
__SUB_CLASS0(005A3FA0, __stdcall, 39735,  CWebWnd, unsigned long) {
__asm {

 Block0:
	mov eax,2
	ret 4
}
}
// CWebWnd::GetWindowContext
__SUB_CLASS(005A4090, __stdcall, 39762,  CWebWnd, HRESULT, IOleInPlaceFrame**, IOleInPlaceUIWindow**, tagRECT*, tagRECT*, tagOIFI*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x10]
	push esi
	mov esi,dword ptr [esp+8]
	mov ecx,dword ptr [esi+0x1C]
	push eax
	push ecx
	call GetClientRect
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esi+0x1C]
	push edx
	push eax
	call GetClientRect
	xor eax,eax
	pop esi
	ret 0x18
}
}
// CWebWnd::NavigateUrl
_SUB_EXCEPTION_HANDLER(5A6030)
__SUB_CLASS_THIS(005A6030, __thiscall, 39821,  CWebWnd, void, const wchar_t*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A6030
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esi+0xB54]
	push eax
	lea ecx,[esp+0xC]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	lea ecx,[esi+0xB5C]
	mov dword ptr [esp+0x14],0
	call ZList<CWebWnd::BrowserRequest>::AddTail_
	mov ecx,dword ptr [esp+0x1C]
	push ecx
	lea ecx,[eax+4]
	mov dword ptr [eax],3
	call ZXString16::AssignCStr
	mov eax,dword ptr [esp+8]
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block2

 Block1:
	mov dword ptr [eax],0

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CWebWnd::OnInPlaceDeactivate
__SUB_CLASS0(005A40E0, __stdcall, 39752,  CWebWnd, HRESULT) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CWebWnd::Navigate
_SUB_EXCEPTION_HANDLER(5A4550)
__SUB_CLASS_THIS(005A4550, __thiscall, 39839,  CWebWnd, HRESULT, const wchar_t*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A4550
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov esi,ecx
	mov eax,dword ptr [esi+0xB70]
	mov ebx,1
	mov dword ptr [ebp-0x14],ebx
	test eax,eax
	jne Block11

 Block1:
	cmp dword ptr [esi+0xB2C],eax
	je Block11

 Block2:
	mov ecx,dword ptr [ebp+8]
	push ecx
	call ZComAPI::ZComSysAllocString
	mov edi,eax
	mov eax,dword ptr [esi+0xB2C]
	mov edx,3
	add esp,4
	mov dword ptr [ebp+8],edi
	mov dword ptr [ebp-4],0
	mov word ptr [ebp-0x24],dx
	mov dword ptr [ebp-0x1C],2
	mov ecx,dword ptr [eax]
	push 0
	push 0
	push 0
	lea edx,[ebp-0x24]
	push edx
	push edi
	push eax
	mov eax,dword ptr [ecx+0x2C]
	mov byte ptr [ebp-4],bl
	call eax
	cmp word ptr [ebp-0x24],8
	mov ebx,eax
	mov byte ptr [ebp-4],0
	jne Block5

 Block3:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov dword ptr [ebp-4],0xFFFFFFFF
	jmp Block9

 Block5:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov dword ptr [ebp-4],0xFFFFFFFF
	jmp Block9

 Block9:
	test edi,edi
	je Block11

 Block10:
	add edi,0xFFFFFFFC
	push edi
	call CoTaskMemFree

 Block11:
	mov eax,ebx
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CWebWnd::OnDocWindowActivate
__SUB_CLASS(005A41B0, __stdcall, 39766,  CWebWnd, HRESULT, int32_t) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 8
}
}
// CWebWnd::TranslateAcceleratorA
__SUB_CLASS(005A4200, __stdcall, 39796,  CWebWnd, HRESULT, tagMSG*, const _GUID*, unsigned long) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0x10
}
}
// CWebWnd::Release
__SUB_CLASS0(005A3FB0, __stdcall, 39735,  CWebWnd, unsigned long) {
__asm {

 Block0:
	mov eax,1
	ret 4
}
}
// CWebWnd::DeactivateAndUndo
__SUB_CLASS0(005A4100, __stdcall, 39752,  CWebWnd, HRESULT) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 4
}
}
// CWebWnd::GetIDsOfNames
__SUB_CLASS(005A4250, __stdcall, 39804,  CWebWnd, HRESULT, const _GUID&, wchar_t**, uint32_t, unsigned long, long*) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0x18
}
}
// CWebWnd::CheckHanged
_SUB_EXCEPTION_HANDLER(5A4790)
__SUB_CLASS_THIS0(005A4790, __thiscall, 39823,  CWebWnd, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A4790
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call timeGetTime
	lea edi,[esi+4]
	mov dword ptr [esi+0xB7C],eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,edi
	call edx
	mov dword ptr [esp+0x24],eax
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call CWnd::GetCanvas
	mov edi,dword ptr [eax]
	xor ebp,ebp
	mov dword ptr [esp+0x4C],ebp
	cmp edi,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x20]
	push edx
	push edi
	mov dword ptr [esp+0x28],ebp
	call eax
	cmp eax,ebp
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+0x2C]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x4C],ebx
	cmp eax,ebp
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	lea eax,[esp+0x30]
	push eax
	mov ecx,esi
	call CWnd::GetCanvas
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x4C],1
	cmp edi,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x1C]
	push edx
	push edi
	mov dword ptr [esp+0x24],ebp
	call eax
	cmp eax,ebp
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x4C],ebx
	cmp eax,ebp
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	xor ebx,ebx
	cmp dword ptr [CWebWnd::m_spBrowser],ebp
	jne Block14

 Block13:
	mov dword ptr [CWebWnd::m_spBrowser],esi
	mov ebx,1

 Block14:
	mov edi,dword ptr [_D_G_HINSTANCE]
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [esi+0xB44]
	mov ecx,dword ptr [esi+0xB4C]
	push ebp
	push edi
	mov edi,dword ptr [esp+0x24]
	push ebp
	mov ebp,dword ptr [esp+0x2C]
	push edx
	mov edx,edi
	sub edx,eax
	sub edx,dword ptr [esi+0xB48]
	push edx
	mov edx,ebp
	sub edx,ecx
	sub edx,dword ptr [esi+0xB50]
	push edx
	mov edx,dword ptr [esp+0x3C]
	add eax,edx
	push eax
	mov eax,dword ptr [esp+0x44]
	add ecx,eax
	push ecx
	push 0x44000000
	push offset _S_
	push offset _D_SCLASSNAME
	push 4
	call CreateWindowExA
	mov dword ptr [esi+0xB28],eax
	test ebx,ebx
	je Block16

 Block15:
	mov dword ptr [CWebWnd::m_spBrowser],0

 Block16:
	cmp dword ptr [esi+0xB28],0
	jne Block18

 Block17:
	call dword ptr [ZImports::_GetLastError]
	jmp Block35

 Block18:
	mov ecx,dword ptr [esi+0xB80]
	mov eax,dword ptr [esi+0xB20]
	push 1
	push ecx
	push eax
	call dword ptr [ZImports::_AttachThreadInput]
	mov edx,dword ptr [esi+0xB28]
	push esi
	push 0xFFFFFFEB
	push edx
	call SetWindowLongA
	test eax,eax
	jne Block35

 Block19:
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+0x14]
	push eax
	push offset _D_IID_IOLEOBJECT
	push 3
	push 0
	push offset _D_CLSID_WEBBROWSER
	mov dword ptr [esp+0x60],2
	call CoCreateInstance
	test eax,eax
	mov eax,dword ptr [esp+0x14]
	jl Block33

 Block20:
	test eax,eax
	je Block33

 Block21:
	lea ebx,[esi+0xB2C]
	push eax
	mov ecx,ebx
	call _atl_CComQIPtrIWebBrowser2IID_IWebBrowser2operator
	cmp dword ptr [ebx],0
	mov eax,dword ptr [esp+0x14]
	je Block33

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0xC]
	lea ebx,[esi+0xB08]
	push ebx
	push eax
	call edx
	test eax,eax
	jl Block32

 Block23:
	sub edi,dword ptr [esi+0xB48]
	sub ebp,dword ptr [esi+0xB50]
	sub edi,dword ptr [esi+0xB44]
	mov ecx,dword ptr [esp+0x24]
	sub ebp,dword ptr [esi+0xB4C]
	mov eax,dword ptr [esp+0x28]
	add edi,ecx
	push edi
	add ebp,eax
	push ebp
	push ecx
	push eax
	lea eax,[esp+0x44]
	push eax
	call SetRect
	test eax,eax
	je Block32

 Block24:
	mov eax,dword ptr [esi+0xB2C]
	lea ecx,[esi+0xB30]
	push ecx
	push offset _D_DIID_DWEBBROWSER
	push ebx
	push eax
	call _atl_AtlAdvise
	test eax,eax
	mov eax,dword ptr [esp+0x14]
	jge Block27

 Block25:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block35

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block35

 Block27:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x34]
	push edx
	mov edx,dword ptr [esi+0xB28]
	push edx
	push 0
	push ebx
	push 0
	push 0xFFFFFFFB
	push eax
	mov eax,dword ptr [ecx+0x2C]
	call eax
	test eax,eax
	jl Block32

 Block28:
	mov eax,dword ptr [esi+0xB2C]
	push eax
	lea ecx,[esp+0x1C]
	call _atl_CComQIPtrIOleInPlaceObjectIID_IOleInPlaceObjectCComQIPtrIOleInPlaceObjectIID_IOleInPlaceObject
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],3
	test eax,eax
	je Block32

 Block29:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x34]
	push edx
	push edx
	push eax
	mov eax,dword ptr [ecx+0x1C]
	call eax
	test eax,eax
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],2
	jge Block36

 Block30:
	test eax,eax
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	mov eax,dword ptr [esp+0x14]

 Block33:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	xor eax,eax
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret

 Block36:
	mov dword ptr [esi+0xB7C],0
	mov dword ptr [esi+0xB78],1
	test eax,eax
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	mov eax,1
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret
}
}
// CWebWnd::GetMoniker
__SUB_CLASS(005A3FD0, __stdcall, 39741,  CWebWnd, HRESULT, unsigned long, unsigned long, IMoniker**) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0x10
}
}
// CWebWnd::Draw
_SUB_EXCEPTION_HANDLER(5A5460)
__SUB_CLASS_THIS(005A5460, __thiscall, 39728,  CWebWnd, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A5460
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xB70]
	test eax,eax
	jne Block65

 Block1:
	mov ecx,dword ptr [esp+0x9C]
	push ecx
	mov ecx,ebx
	call CWnd::Draw
	lea esi,[ebx+0xB54]
	push esi
	lea ecx,[esp+0x58]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	lea ebp,[ebx+0xB5C]
	mov ecx,ebp
	mov dword ptr [esp+0x94],0
	call ZList<CWebWnd::BrowserRequest>::AddTail_
	mov dword ptr [eax],1
	mov eax,dword ptr [esp+0x54]
	or edi,0xFFFFFFFF
	add dword ptr [eax+4],edi
	mov dword ptr [esp+0x94],edi
	jne Block3

 Block2:
	mov dword ptr [eax],0

 Block3:
	mov edx,dword ptr [ebx+0xB74]
	test edx,edx
	je Block65

 Block4:
	mov eax,dword ptr [ebx+0xB70]
	test eax,eax
	jne Block65

 Block5:
	mov ecx,dword ptr [ebx+0xB78]
	test ecx,ecx
	jne Block65

 Block6:
	push esi
	lea ecx,[esp+0x44]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov ecx,ebp
	mov dword ptr [esp+0x94],1
	call ZList<CWebWnd::BrowserRequest>::AddTail_
	mov dword ptr [eax],2
	mov eax,dword ptr [esp+0x40]
	add dword ptr [eax+4],edi
	mov dword ptr [esp+0x94],edi
	jne Block8

 Block7:
	mov dword ptr [eax],0

 Block8:
	lea edx,[esp+0x58]
	push edx
	mov ecx,ebx
	call CWnd::GetCanvas
	mov ebp,dword ptr [esp+0x58]
	mov dword ptr [esp+0x94],2
	test ebp,ebp
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov ecx,ebp
	call IWzCanvas::Getheight
	mov ecx,ebp
	lea esi,[eax-1]
	call IWzCanvas::GettileHeight
	mov ecx,ebp
	add esi,eax
	call IWzCanvas::GettileHeight
	mov ecx,eax
	xor edx,edx
	mov eax,esi
	div ecx
	mov ecx,ebp
	mov edi,eax
	mov dword ptr [esp+0x68],edi
	call IWzCanvas::Getwidth
	mov ecx,ebp
	lea esi,[eax-1]
	call IWzCanvas::GettileWidth
	mov ecx,ebp
	add esi,eax
	call IWzCanvas::GettileWidth
	mov ecx,eax
	xor edx,edx
	mov eax,esi
	div ecx
	mov ecx,ebp
	mov dword ptr [esp+0x54],eax
	call IWzCanvas::Getwidth
	mov ecx,ebp
	mov dword ptr [esp+0x64],eax
	call IWzCanvas::Getheight
	mov dword ptr [esp+0x5C],eax
	mov dword ptr [esp+0x14],0
	test edi,edi
	jle Block64

 Block11:
	xor edi,edi
	cmp dword ptr [esp+0x54],edi
	mov dword ptr [esp+0x18],edi
	jle Block63

 Block12:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x3C]
	lea eax,[esp+0x28]
	push eax
	push ebp
	mov dword ptr [esp+0x30],0
	call ecx
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block14:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x38]
	mov esi,dword ptr [esp+0x28]
	lea eax,[esp+0x2C]
	push eax
	push ebp
	mov dword ptr [esp+0x34],0
	call ecx
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block16:
	mov edx,dword ptr [esp+0x2C]
	imul esi,dword ptr [esp+0x14]
	imul edx,edi
	push esi
	push edx
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebp
	call IWzCanvas::GetrawCanvas
	mov esi,dword ptr [esp+0x20]
	test esi,esi
	sete al
	mov byte ptr [esp+0x94],3
	test al,al
	je Block19

 Block17:
	mov byte ptr [esp+0x94],2
	test esi,esi
	je Block62

 Block18:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	jmp Block62

 Block19:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x30]
	push ecx
	push ebp
	mov dword ptr [esp+0x38],0
	call edx
	test eax,eax
	jge Block21

 Block20:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block21:
	mov eax,dword ptr [esp+0x30]
	sub eax,dword ptr [ebx+0xB50]
	sub eax,dword ptr [ebx+0xB4C]
	add eax,eax
	mov ecx,eax
	and ecx,0x80000003
	mov dword ptr [esp+0x40],eax
	jns Block23

 Block22:
	dec ecx
	or ecx,0xFFFFFFFC
	inc ecx

 Block23:
	je Block25

 Block24:
	mov edx,4
	sub edx,ecx
	add eax,edx
	mov dword ptr [esp+0x40],eax

 Block25:
	mov dword ptr [esp+0x3C],0
	test esi,esi
	je Block9

 Block26:
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x70]
	push ecx
	mov ecx,esi
	call IWzRawCanvas::_LockAddress
	cmp word ptr [esp+0x6C],8
	mov edi,dword ptr [eax+8]
	mov dword ptr [esp+0x60],edi
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	test edi,edi
	je Block61

 Block31:
	xor edi,edi

 Block32:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x18]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [esp+0x24],0
	call eax
	test eax,eax
	jge Block34

 Block33:
	push offset __GUID_312126f0_c399_4111_8eab_0f96a30b6b7c
	push esi
	push eax
	call _com_issue_errorex

 Block34:
	cmp edi,dword ptr [esp+0x1C]
	jae Block55

 Block35:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x3C]
	lea edx,[esp+0x34]
	push edx
	push ebp
	mov dword ptr [esp+0x3C],0
	call eax
	test eax,eax
	jge Block37

 Block36:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block37:
	mov ecx,dword ptr [esp+0x34]
	imul ecx,dword ptr [esp+0x14]
	add ecx,edi
	cmp ecx,dword ptr [ebx+0xB44]
	jb Block54

 Block38:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x3C]
	lea eax,[esp+0x38]
	push eax
	push ebp
	mov dword ptr [esp+0x40],0
	call ecx
	test eax,eax
	jge Block40

 Block39:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block40:
	mov eax,dword ptr [esp+0x38]
	imul eax,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x5C]
	sub edx,dword ptr [ebx+0xB48]
	add eax,edi
	cmp eax,edx
	jae Block54

 Block41:
	imul edi,dword ptr [esp+0x3C]
	add edi,dword ptr [esp+0x60]
	mov ecx,ebp
	call IWzCanvas::GettileHeight
	mov esi,eax
	imul esi,dword ptr [esp+0x14]
	sub esi,dword ptr [ebx+0xB44]
	mov ecx,ebp
	add esi,dword ptr [esp+0x24]
	imul esi,dword ptr [esp+0x40]
	call IWzCanvas::GettileWidth
	imul eax,dword ptr [esp+0x18]
	sub eax,dword ptr [ebx+0xB4C]
	mov ecx,dword ptr [ebx+0xB34]
	lea eax,[ecx+eax*2]
	add eax,esi
	xor esi,esi
	sub eax,edi
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x50],eax

 Block42:
	mov edi,dword ptr [esp+0x20]
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x14]
	lea eax,[esp+0x44]
	push eax
	push edi
	mov dword ptr [esp+0x4C],0
	call ecx
	test eax,eax
	jge Block44

 Block43:
	push offset __GUID_312126f0_c399_4111_8eab_0f96a30b6b7c
	push edi
	push eax
	call _com_issue_errorex

 Block44:
	cmp esi,dword ptr [esp+0x44]
	jae Block53

 Block45:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x38]
	lea eax,[esp+0x48]
	push eax
	push ebp
	mov dword ptr [esp+0x50],0
	call ecx
	test eax,eax
	jge Block47

 Block46:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block47:
	mov edx,dword ptr [esp+0x48]
	mov edi,dword ptr [esp+0x18]
	imul edx,edi
	add edx,esi
	cmp edx,dword ptr [ebx+0xB4C]
	jb Block52

 Block48:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x38]
	lea ecx,[esp+0x4C]
	push ecx
	push ebp
	mov dword ptr [esp+0x54],0
	call edx
	test eax,eax
	jge Block50

 Block49:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block50:
	mov eax,dword ptr [esp+0x4C]
	mov ecx,dword ptr [esp+0x64]
	imul eax,edi
	sub ecx,dword ptr [ebx+0xB50]
	add eax,esi
	cmp eax,ecx
	jae Block52

 Block51:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x50]
	mov edx,0xF000
	or dx,word ptr [ecx+eax]
	mov word ptr [eax],dx

 Block52:
	inc esi
	add dword ptr [esp+0x1C],2
	jmp Block42

 Block53:
	mov esi,dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x24]

 Block54:
	inc edi
	jmp Block32

 Block55:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x18]
	lea eax,[esp+0x24]
	push eax
	push esi
	mov dword ptr [esp+0x2C],0
	call ecx
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_312126f0_c399_4111_8eab_0f96a30b6b7c
	push esi
	push eax
	call _com_issue_errorex

 Block57:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x14]
	mov edi,dword ptr [esp+0x24]
	lea eax,[esp+0x50]
	push eax
	push esi
	mov dword ptr [esp+0x58],0
	call ecx
	test eax,eax
	jge Block59

 Block58:
	push offset __GUID_312126f0_c399_4111_8eab_0f96a30b6b7c
	push esi
	push eax
	call _com_issue_errorex

 Block59:
	mov edx,dword ptr [esp+0x50]
	push edi
	push edx
	push 0
	push 0
	lea eax,[esp+0x8C]
	push eax
	call SetRect
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x7C]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block61

 Block60:
	push offset __GUID_312126f0_c399_4111_8eab_0f96a30b6b7c
	push esi
	push eax
	call _com_issue_errorex

 Block61:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x98],2
	call edx
	mov edi,dword ptr [esp+0x18]

 Block62:
	inc edi
	cmp edi,dword ptr [esp+0x54]
	mov dword ptr [esp+0x18],edi
	jl Block12

 Block63:
	mov eax,dword ptr [esp+0x14]
	inc eax
	cmp eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x14],eax
	jl Block11

 Block64:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call ecx

 Block65:
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret 4
}
}
// CWebWnd::SaveObject
__SUB_CLASS0(005A3FC0, __stdcall, 39736,  CWebWnd, HRESULT) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 4
}
}
// CWebWnd::OnShowWindow
__SUB_CLASS(005A4010, __stdcall, 39747,  CWebWnd, HRESULT, int32_t) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 8
}
}
// CWebWnd::OnMouseButton
__SUB_CLASS_THIS(005A3CF0, __thiscall, 39730,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0xB6C]
	test eax,eax
	jne Block4

 Block1:
	lea ecx,[edi-4]
	call CWnd::IsFocused
	test eax,eax
	je Block4

 Block2:
	mov ecx,dword ptr [edi+0xB24]
	push esi
	mov esi,dword ptr [ZImports::_GetWindow]
	push 5
	push ecx
	call esi
	push 5
	push eax
	call esi
	push 5
	push eax
	call esi
	pop esi
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [esp+0x10]
	sub edx,dword ptr [edi+0xB48]
	mov ecx,dword ptr [esp+0x14]
	sub ecx,dword ptr [edi+0xB40]
	and edx,0xFFFF
	shl ecx,0x10
	xor edx,ecx
	pop edi
	mov dword ptr [esp+0x10],edx
	mov edx,dword ptr [esp+8]
	mov dword ptr [esp+0xC],edx
	mov ecx,dword ptr [esp+4]
	mov dword ptr [esp+8],ecx
	mov dword ptr [esp+4],eax
	jmp dword ptr [ZImports::_SendMessageA]

 Block4:
	pop edi
	ret 0x10
}
}
// CWebWnd::ShowObject
__SUB_CLASS0(005A4000, __stdcall, 39736,  CWebWnd, HRESULT) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 4
}
}
// CWebWnd::OnFrameWindowActivate
__SUB_CLASS(005A41C0, __stdcall, 39766,  CWebWnd, HRESULT, int32_t) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 8
}
}
// CWebWnd::ShowContextMenu
__SUB_CLASS(005A41E0, __stdcall, 39788,  CWebWnd, HRESULT, unsigned long, tagPOINT*, IUnknown*, IDispatch*) {
__asm {

 Block0:
	xor eax,eax
	ret 0x14
}
}
// CWebWnd::UpdateUI
__SUB_CLASS0(005A4220, __stdcall, 39784,  CWebWnd, HRESULT) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 4
}
}
// CWebWnd::GetTypeInfo
__SUB_CLASS(005A4260, __stdcall, 39809,  CWebWnd, HRESULT, uint32_t, unsigned long, ITypeInfo**) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0x10
}
}
// CWebWnd::HideUI
__SUB_CLASS0(005A41A0, __stdcall, 39784,  CWebWnd, HRESULT) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 4
}
}
// CWebWnd::GetExternal
__SUB_CLASS(005A4150, __stdcall, 39777,  CWebWnd, HRESULT, IDispatch**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax],0
	mov eax,0x80004001
	ret 8
}
}
// CWebWnd::GetOptionKeyPath
__SUB_CLASS(005A4190, __stdcall, 39783,  CWebWnd, HRESULT, wchar_t**, unsigned long) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0xC
}
}
// CWebWnd::GetContainer
__SUB_CLASS(005A3FE0, __stdcall, 39746,  CWebWnd, HRESULT, IOleContainer**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax],0
	mov eax,0x80004002
	ret 8
}
}
// CWebWnd::OnUIDeactivate
__SUB_CLASS(005A40D0, __stdcall, 39751,  CWebWnd, HRESULT, int32_t) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 8
}
}
// CWebWnd::~CWebWnd
_SUB_EXCEPTION_HANDLER(5A4EC0)
__SUB_CLASS_THIS0(005A4EC0, __thiscall, 39725,  CWebWnd, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A4EC0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+8],esi
	int 3// TODO: 	mov dword ptr [esi],offset CWebWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWebWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWebWnd::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xB08],offset CWebWnd::`vftable'{for `IOleClientSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB0C],offset CWebWnd::`vftable'{for `IOleInPlaceSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB10],offset CWebWnd::`vftable'{for `IDocHostUIHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xB14],offset CWebWnd::`vftable'{for `IDocHostShowUI'}
	int 3// TODO: 	mov dword ptr [esi+0xB18],offset CWebWnd::`vftable'{for `DWebBrowserEvents2'}
	int 3// TODO: 	mov dword ptr [esi+0xB1C],offset CWebWnd::`vftable'{for `ZThread'}
	mov dword ptr [esi+0xB70],1
	mov eax,dword ptr [esi+0xB70]
	mov dword ptr [esp+0x14],3
	test eax,eax
	je Block2

 Block1:
	push 0
	call Sleep
	mov ecx,dword ptr [esi+0xB70]
	test ecx,ecx
	jne Block1

 Block2:
	mov eax,dword ptr [esi+0xB40]
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [esi+0xB3C]
	push edx
	push eax
	call dword ptr [ZImports::_SelectObject]
	mov eax,dword ptr [esi+0xB38]
	push eax
	call dword ptr [ZImports::_DeleteObject]
	mov ecx,dword ptr [esi+0xB40]
	push ecx
	call dword ptr [ZImports::_DeleteDC]
	mov dword ptr [esi+0xB40],0

 Block4:
	mov edx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov eax,dword ptr [edx+4]
	push eax
	call SetFocus
	lea ecx,[esi+0xB5C]
	mov byte ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CWebWnd::BrowserRequest>::`vftable'
	call ZList<CWebWnd::BrowserRequest>::RemoveAll
	mov eax,dword ptr [esi+0xB2C]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	push 0
	lea eax,[esi+0xB24]
	push eax
	mov byte ptr [esp+0x1C],0
	int 3// TODO: 	mov dword ptr [esi+0xB1C],offset ZThread::`vftable'
	mov dword ptr [esi+0xB20],0
	call dword ptr [ZImports::_InterlockedExchange]
	test eax,eax
	je Block8

 Block7:
	push eax
	call CloseHandle

 Block8:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CUIWnd::~CUIWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CWebWnd::GetTypeInfoCount
__SUB_CLASS(005A4270, __stdcall, 39810,  CWebWnd, HRESULT, uint32_t*) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 8
}
}
// CWebWnd::IsKindOf
__SUB_CLASS_THIS(000ABF20, __thiscall, 39842,  CWebWnd, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CWebWnd::ms_RTTI_CWebWnd
	lea esp,[esp]

 Block1:
	cmp eax,ecx
	je Block4

 Block2:
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block1

 Block3:
	ret 4

 Block4:
	mov eax,1
	ret 4
}
}
// CWebWnd::WindowProc
__SUB_CLASS_THIS(005A3DC0, __thiscall, 39732,  CWebWnd, long, HWND__*, uint32_t, uint32_t, long) {
__asm {

 Block0:
	jmp dword ptr [DefWindowProcA]
}
}
