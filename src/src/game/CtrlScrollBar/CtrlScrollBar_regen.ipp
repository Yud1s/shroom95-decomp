#include "regen.hpp"
// CtrlScrollBar.ipp
#include "CtrlScrollBar.hpp"

// CCtrlScrollBar::MouseDown
__SUB_CLASS_THIS(000E9D20, __thiscall, 12476,  CCtrlScrollBar, void, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x3C],1
	jle Block10

 Block1:
	cmp dword ptr [esi+0x48],0
	jne Block10

 Block2:
	push ebx
	push edi
	lea eax,[esi+4]
	mov dword ptr [esi+0x48],1
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetCaptureWnd
	mov edi,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0x10]
	push edi
	push ebx
	mov ecx,esi
	call CCtrlScrollBar::ScrHitTest
	mov dword ptr [esi+0x40],eax
	call timeGetTime
	mov dword ptr [esi+0x44],eax
	mov eax,dword ptr [esi+0x40]
	add eax,0xFFFFFF9B
	cmp eax,4
	ja Block9

 Block3:
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block5
cmp EAX, 2
je Block6
cmp EAX, 3
je Block7
cmp EAX, 4
je Block8


 Block4:
	push 0xFFFFFFFF
	mov ecx,esi
	call CCtrlScrollBar::DoPrevNext
	pop edi
	pop ebx
	pop esi
	ret 8

 Block5:
	push 1
	mov ecx,esi
	call CCtrlScrollBar::DoPrevNext
	pop edi
	pop ebx
	pop esi
	ret 8

 Block6:
	push 0xFFFFFFFF
	mov ecx,esi
	call CCtrlScrollBar::DoPrevNextBar
	pop edi
	pop ebx
	pop esi
	ret 8

 Block7:
	push 1
	mov ecx,esi
	call CCtrlScrollBar::DoPrevNextBar
	pop edi
	pop ebx
	pop esi
	ret 8

 Block8:
	push edi
	push ebx
	mov ecx,esi
	call CCtrlScrollBar::DoThumbStart

 Block9:
	pop edi
	pop ebx

 Block10:
	pop esi
	ret 8
}
}
// CCtrlScrollBar::~CCtrlScrollBar
_SUB_EXCEPTION_HANDLER(EA050)
__SUB_CLASS_THIS0(000EA050, __thiscall, 12461,  CCtrlScrollBar, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EA050
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
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlScrollBar::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlScrollBar::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlScrollBar::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x70]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CCtrlWnd::~CCtrlWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CCtrlScrollBar::OnMouseEnter
__SUB_CLASS_THIS(000E9BD0, __thiscall, 12466,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call CCtrlWnd::OnMouseEnter
	test edi,edi
	je Block6

 Block1:
	cmp dword ptr [esi+0x38],1
	jle Block6

 Block2:
	mov esi,dword ptr [esi+0x50]
	test esi,esi
	jne Block4

 Block3:
	pop edi
	pop esi
	mov dword ptr [esp+4],8
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	jmp  CInputSystem::SetCursorState

 Block4:
	cmp esi,1
	jne Block6

 Block5:
	pop edi
	pop esi
	mov dword ptr [esp+4],7
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	jmp  CInputSystem::SetCursorState

 Block6:
	pop edi
	pop esi
	ret 4
}
}
// CCtrlScrollBar::ValidatePosAndRange
__SUB_CLASS_THIS0(000E9820, __thiscall, 12461,  CCtrlScrollBar, void) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0x3C]
	cmp edx,1
	jg Block3

 Block1:
	mov dword ptr [ecx+0x3C],0

 Block2:
	mov dword ptr [ecx+0x38],0
	ret

 Block3:
	mov eax,dword ptr [ecx+0x38]
	test eax,eax
	jl Block2

 Block4:
	dec edx
	cmp eax,edx
	jle Block6

 Block5:
	mov dword ptr [ecx+0x38],edx

 Block6:
	ret
}
}
// CCtrlScrollBar::CreateCtrl
_SUB_EXCEPTION_HANDLER(EB430)
__SUB_CLASS_THIS(000EB430, __thiscall, 12462,  CCtrlScrollBar, void, CWnd*, uint32_t, long, long, long, long, long, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EB430
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edx,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esi+0x50],edx
	lea edx,[esi+0x70]
	push edx
	xor edi,edi
	push ecx
	push eax
	mov dword ptr [esi+0x54],eax
	mov dword ptr [esi+0x58],ecx
	mov dword ptr [esi+0x38],edi
	mov dword ptr [esi+0x3C],edi
	mov dword ptr [esi+0x40],0x64
	mov dword ptr [esi+0x44],edi
	mov dword ptr [esi+0x48],edi
	mov dword ptr [esi+0x68],edi
	call CCtrlScrollBar::GetScrollBarBaseUOL
	add esp,0xC
	push edi
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call CCtrlScrollBar::GetScrollBarCanvas
	mov eax,dword ptr [esi+0x54]
	sub eax,edi
	mov dword ptr [esp+0x18],edi
	je Block11

 Block1:
	sub eax,1
	jne Block21

 Block2:
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x2C]
	push edx
	mov ebx,eax
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [esp+0x34],edi
	call eax
	cmp eax,edi
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esi+0x4C],ecx
	cmp eax,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x40]
	lea ecx,[esp+0x2C]
	push ecx
	push eax
	mov ebx,eax
	mov dword ptr [esp+0x34],edi
	call edx
	cmp eax,edi
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block10:
	mov ecx,dword ptr [esi+0x50]
	mov edx,dword ptr [esp+0x2C]
	jmp Block20

 Block11:
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x2C]
	push edx
	mov ebx,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x34],edi
	call eax
	cmp eax,edi
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block15:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esi+0x4C],ecx
	cmp eax,edi
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x48]
	lea ecx,[esp+0x2C]
	push ecx
	push eax
	mov ebx,eax
	mov dword ptr [esp+0x34],edi
	call edx
	cmp eax,edi
	jge Block19

 Block18:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block19:
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esi+0x50]

 Block20:
	mov eax,dword ptr [esp+0x3C]
	push eax
	mov eax,dword ptr [esp+0x38]
	push ecx
	mov ecx,dword ptr [esp+0x38]
	push edx
	mov edx,dword ptr [esp+0x30]
	push eax
	mov eax,dword ptr [esp+0x30]
	push ecx
	push edx
	push eax
	mov ecx,esi
	call CCtrlWnd::CreateCtrl

 Block21:
	cmp dword ptr [esi+0x58],4
	jne Block23

 Block22:
	mov dword ptr [esi+0x6C],1

 Block23:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,edi
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0x20
}
}
// CCtrlScrollBar::OnMouseMove
__SUB_CLASS_THIS(000E9B90, __thiscall, 12463,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x38],1
	jg Block2

 Block1:
	xor eax,eax
	ret 8

 Block2:
	cmp dword ptr [ecx+0x44],0
	je Block1

 Block3:
	cmp dword ptr [ecx+0x3C],0x69
	jne Block1

 Block4:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push eax
	push edx
	add ecx,0xFFFFFFFC
	call CCtrlScrollBar::DoThumbMove
	mov eax,1
	ret 8
}
}
// CCtrlScrollBar::OnMouseWheel
__SUB_CLASS_THIS(000E9C30, __thiscall, 12465,  IUIMsgHandler, int32_t, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x30],0
	jge Block2

 Block1:
	xor eax,eax
	pop esi
	add esp,0x10
	ret 0xC

 Block2:
	mov eax,dword ptr [esi+0x1C]
	mov ecx,dword ptr [esi+0x18]
	push eax
	push ecx
	push 0
	push 0
	lea edx,[esp+0x14]
	push edx
	call SetRect
	mov eax,dword ptr [esi+0x50]
	sub eax,0
	je Block5

 Block3:
	sub eax,1
	jne Block6

 Block4:
	mov eax,dword ptr [esi+0x30]
	sub dword ptr [esp+4],eax
	jmp Block6

 Block5:
	mov ecx,dword ptr [esi+0x30]
	sub dword ptr [esp+8],ecx

 Block6:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x18]
	push ecx
	push eax
	lea edx,[esp+0xC]
	push edx
	call PtInRect
	test eax,eax
	je Block1

 Block7:
	mov eax,dword ptr [esp+0x20]
	push eax
	lea ecx,[esi-4]
	call CCtrlScrollBar::DoPrevNext
	mov eax,1
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CCtrlScrollBar::SetScrollRange
__SUB_CLASS_THIS(000E9B70, __thiscall, 12469,  CCtrlScrollBar, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x3C],eax
	call CCtrlScrollBar::ValidatePosAndRange
	call CCtrlWnd::InvalidateRect
	ret 4
}
}
// CCtrlScrollBar::MouseUp
__SUB_CLASS_THIS(000E9DE0, __thiscall, 12476,  CCtrlScrollBar, void, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x3C],1
	jle Block12

 Block1:
	cmp dword ptr [esi+0x48],0
	je Block12

 Block2:
	push ebx
	push edi
	lea eax,[esi+4]
	mov dword ptr [esi+0x48],0
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::ReleaseCaptureWnd
	mov edi,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0x10]
	push edi
	push ebx
	mov ecx,esi
	call CCtrlScrollBar::ScrHitTest
	mov ecx,dword ptr [esi+0x40]
	sub ecx,0x67
	je Block8

 Block3:
	sub ecx,1
	je Block6

 Block4:
	sub ecx,1
	jne Block11

 Block5:
	push edi
	push ebx
	mov ecx,esi
	call CCtrlScrollBar::DoThumbEnd
	mov ecx,esi
	mov dword ptr [esi+0x40],0x64
	call CCtrlWnd::InvalidateRect
	pop edi
	pop ebx
	pop esi
	ret 8

 Block6:
	cmp dword ptr [esi+0x44],eax
	jne Block11

 Block7:
	push 1
	jmp Block10

 Block8:
	cmp dword ptr [esi+0x44],eax
	jne Block11

 Block9:
	push 0xFFFFFFFF

 Block10:
	mov ecx,esi
	call CCtrlScrollBar::DoPrevNextBar

 Block11:
	mov ecx,esi
	mov dword ptr [esi+0x40],0x64
	call CCtrlWnd::InvalidateRect
	pop edi
	pop ebx

 Block12:
	pop esi
	ret 8
}
}
// CCtrlScrollBar::DoPrevNext
__SUB_CLASS_THIS(000E9950, __thiscall, 12469,  CCtrlScrollBar, void, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	add dword ptr [esi+0x38],edi
	call CCtrlScrollBar::ValidatePosAndRange
	call CCtrlWnd::InvalidateRect
	test edi,edi
	jge Block2

 Block1:
	mov edx,dword ptr [esi+0x38]
	mov ecx,dword ptr [esi+0x24]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	push edx
	mov edx,dword ptr [esi+0x14]
	push 0x12C
	push edx
	call eax
	pop edi
	pop esi
	ret 4

 Block2:
	jle Block4

 Block3:
	mov eax,dword ptr [esi+0x38]
	mov ecx,dword ptr [esi+0x24]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x1C]
	push eax
	mov eax,dword ptr [esi+0x14]
	push 0x12D
	push eax
	call edx

 Block4:
	pop edi
	pop esi
	ret 4
}
}
// CCtrlScrollBar::CCtrlScrollBar
__SUB_CLASS_THIS0(000E9FC0, __thiscall, 12459,  CCtrlScrollBar, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CCtrlWnd::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlScrollBar::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlScrollBar::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlScrollBar::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x70],eax
	mov dword ptr [esi+0x28],eax
	mov dword ptr [esi+0x6C],eax
	mov dword ptr [esi+0x34],0xFFFFFFFF
	mov eax,esi
	pop esi
	ret
}
}
// CCtrlScrollBar::DoThumbEnd
__SUB_CLASS_THIS(000E9A70, __thiscall, 12476,  CCtrlScrollBar, void, long, long) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x3C]
	cmp eax,1
	mov dword ptr [esp+4],eax
	jle Block6

 Block1:
	mov eax,dword ptr [esi+0x4C]
	mov ecx,dword ptr [esi+0x50]
	lea eax,[eax+eax*2]
	sub ecx,eax
	cmp dword ptr [esi+0x54],0
	mov dword ptr [esp+8],ecx
	jne Block3

 Block2:
	mov edx,dword ptr [esp+0x10]
	sub edx,dword ptr [esi+0x60]
	mov dword ptr [esp+0x10],edx
	jmp Block4

 Block3:
	mov eax,dword ptr [esp+0x14]
	sub eax,dword ptr [esi+0x64]
	mov dword ptr [esp+0x10],eax

 Block4:
	fild dword ptr [esp+4]
	push edi
	mov edi,dword ptr [esi+0x38]
	fimul dword ptr [esp+0x14]
	fidiv dword ptr [esp+0xC]
	call __ftol2_sse
	add eax,dword ptr [esi+0x5C]
	mov ecx,esi
	mov dword ptr [esi+0x38],eax
	call CCtrlScrollBar::ValidatePosAndRange
	call CCtrlWnd::InvalidateRect
	mov eax,dword ptr [esi+0x38]
	cmp eax,edi
	pop edi
	je Block6

 Block5:
	mov ecx,dword ptr [esi+0x24]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x1C]
	push eax
	mov eax,dword ptr [esi+0x14]
	push 0x130
	push eax
	call edx

 Block6:
	pop esi
	add esp,8
	ret 8
}
}
// CCtrlScrollBar::DoPrevNextBar
__SUB_CLASS_THIS(000E9CB0, __thiscall, 12469,  CCtrlScrollBar, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x3C]
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	cmp eax,0x10
	push edi
	jge Block2

 Block1:
	mov eax,0x10

 Block2:
	imul eax,dword ptr [esp+0xC]
	mov edi,eax
	add dword ptr [esi+0x38],edi
	call CCtrlScrollBar::ValidatePosAndRange
	call CCtrlWnd::InvalidateRect
	test edi,edi
	jge Block4

 Block3:
	mov edx,dword ptr [esi+0x38]
	mov ecx,dword ptr [esi+0x24]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	push edx
	mov edx,dword ptr [esi+0x14]
	push 0x12E
	push edx
	call eax
	pop edi
	pop esi
	ret 4

 Block4:
	jle Block6

 Block5:
	mov eax,dword ptr [esi+0x38]
	mov ecx,dword ptr [esi+0x24]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x1C]
	push eax
	mov eax,dword ptr [esi+0x14]
	push 0x12F
	push eax
	call edx

 Block6:
	pop edi
	pop esi
	ret 4
}
}
// CCtrlScrollBar::DoThumbStart
__SUB_CLASS_THIS(000E99B0, __thiscall, 12476,  CCtrlScrollBar, void, long, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x3C],1
	jle Block2

 Block1:
	mov eax,dword ptr [ecx+0x38]
	mov edx,dword ptr [esp+4]
	mov dword ptr [ecx+0x5C],eax
	mov eax,dword ptr [esp+8]
	mov dword ptr [ecx+0x60],edx
	mov dword ptr [ecx+0x64],eax
	call CCtrlWnd::InvalidateRect

 Block2:
	ret 8
}
}
// CCtrlScrollBar::IsEnabled
__SUB_CLASS_THIS0(000E9850, __thiscall, 12470,  IUIMsgHandler, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x3C],1
	jle Block5

 Block1:
	mov eax,dword ptr [esi+0x40]
	cmp eax,0x64
	je Block5

 Block2:
	cmp eax,0x69
	je Block5

 Block3:
	call timeGetTime
	mov ecx,eax
	sub ecx,dword ptr [esi+0x44]
	cmp ecx,0x32
	jbe Block5

 Block4:
	mov dword ptr [esi+0x44],eax
	mov eax,1
	pop esi
	ret

 Block5:
	xor eax,eax
	pop esi
	ret
}
}
// CCtrlScrollBar::GetRTTI
__SUB_CLASS_THIS0(000EA000, __thiscall, 12481,  CCtrlScrollBar, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCtrlScrollBar::ms_RTTI_CCtrlScrollBar
	ret
}
}
// CCtrlScrollBar::Draw
_SUB_EXCEPTION_HANDLER(EA940)
__SUB_CLASS_THIS(000EA940, __thiscall, 12467,  CCtrlScrollBar, void, long, long, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EA940
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x80]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor ebx,ebx
	push ebx
	lea eax,[esp+0x24]
	push eax
	mov dword ptr [esp+0x1C],ebx
	call CCtrlWnd::GetCanvas
	mov eax,dword ptr [ebp+0x54]
	sub eax,ebx
	mov edx,dword ptr [esp+0x94]
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr [esp+0x88],ebx
	je Block3

 Block1:
	sub eax,1
	jne Block5

 Block2:
	mov eax,dword ptr [ebp+0x50]
	mov dword ptr [esp+0x2C],edx
	mov dword ptr [esp+0x1C],edx
	add eax,edx
	jmp Block4

 Block3:
	mov eax,dword ptr [ebp+0x50]
	mov dword ptr [esp+0x2C],ecx
	mov dword ptr [esp+0x1C],ecx
	add eax,ecx

 Block4:
	mov dword ptr [esp+0x24],eax

 Block5:
	push ebx
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetCursorPos
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [edx+0x2C]
	lea esi,[ebp+4]
	mov ecx,esi
	call eax
	mov edi,dword ptr [esp+0x38]
	mov edx,dword ptr [esi]
	sub edi,eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x3C]
	sub ecx,eax
	push ecx
	push edi
	mov ecx,ebp
	call CCtrlScrollBar::ScrHitTest
	mov ecx,dword ptr [ebp+0x40]
	cmp ecx,0x65
	jne Block8

 Block6:
	cmp eax,ecx
	jne Block8

 Block7:
	lea edx,[ecx-0x64]
	jmp Block9

 Block8:
	xor edx,edx

 Block9:
	mov ebx,2
	cmp ecx,0x66
	jne Block11

 Block10:
	mov dword ptr [esp+0x28],3
	cmp eax,ecx
	je Block12

 Block11:
	mov dword ptr [esp+0x28],ebx

 Block12:
	xor eax,eax
	cmp ecx,0x69
	sete al
	mov dword ptr [esp+0x18],0
	add eax,5
	mov dword ptr [esp+0x34],eax
	cmp dword ptr [ebp+0x3C],1
	mov byte ptr [esp+0x88],1
	mov eax,edx
	jg Block14

 Block13:
	mov eax,7

 Block14:
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,ebp
	call CCtrlScrollBar::GetScrollBarCanvas
	mov eax,dword ptr [eax]
	test eax,eax
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	mov dword ptr [esp+0x18],eax
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block16:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [ebp+0x54]
	sub eax,0
	mov edi,dword ptr [esp+0x20]
	je Block35

 Block19:
	sub eax,1
	jne Block53

 Block20:
	cmp dword ptr [ebp+0x6C],eax
	je Block22

 Block21:
	mov esi,offset _D_VTMISSING
	jmp Block23

 Block22:
	mov eax,3
	mov word ptr [esp+0x40],ax
	mov dword ptr [esp+0x48],0xFF
	lea esi,[esp+0x40]
	mov byte ptr [esp+0x88],4
	mov dword ptr [esp+0x14],ebx

 Block23:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x50]
	push esi
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov dword ptr [esp+0x88],5
	test edi,edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x50]
	push eax
	mov eax,dword ptr [esp+0x94]
	push ecx
	push edx
	push eax
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],4
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov dword ptr [esp+0x88],1
	test byte ptr [esp+0x14],bl
	je Block53

 Block32:
	and dword ptr [esp+0x14],0xFFFFFFFD
	cmp word ptr [esp+0x40],8
	jne Block34

 Block33:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	jmp Block49

 Block34:
	lea ecx,[esp+0x40]
	push ecx
	jmp Block52

 Block35:
	cmp dword ptr [ebp+0x6C],0
	je Block37

 Block36:
	mov esi,offset _D_VTMISSING
	jmp Block38

 Block37:
	mov edx,3
	mov word ptr [esp+0x70],dx
	mov dword ptr [esp+0x78],0xFF
	lea esi,[esp+0x70]
	mov byte ptr [esp+0x88],bl
	mov dword ptr [esp+0x14],1

 Block38:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x60]
	push esi
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov dword ptr [esp+0x88],3
	test edi,edi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x94]
	lea edx,[esp+0x60]
	push edx
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	push edx
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x88],bl
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	test byte ptr [esp+0x14],1
	mov dword ptr [esp+0x88],1
	je Block53

 Block47:
	and dword ptr [esp+0x14],0xFFFFFFFE
	cmp word ptr [esp+0x70],8
	jne Block51

 Block48:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx

 Block49:
	test eax,eax
	je Block53

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block51:
	lea eax,[esp+0x70]
	push eax

 Block52:
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov ecx,dword ptr [ebp+0x4C]
	add dword ptr [esp+0x1C],ecx
	xor eax,eax
	cmp dword ptr [ebp+0x3C],1
	lea edx,[esp+0x30]
	setg al
	mov ecx,ebp
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFFB
	add eax,9
	push eax
	push edx
	call CCtrlScrollBar::GetScrollBarCanvas
	mov eax,dword ptr [eax]
	cmp dword ptr [esp+0x18],eax
	je Block58

 Block54:
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block56:
	test esi,esi
	je Block58

 Block57:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block58:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block60

 Block59:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block60:
	mov ecx,dword ptr [esp+0x24]
	mov ebx,dword ptr [esp+0x1C]
	mov edx,ecx
	sub edx,dword ptr [ebp+0x4C]
	cmp ebx,edx
	jge Block98

 Block61:
	nop

 Block62:
	mov eax,dword ptr [ebp+0x54]
	sub eax,0
	mov ecx,0xFF
	je Block79

 Block63:
	sub eax,1
	jne Block97

 Block64:
	cmp dword ptr [ebp+0x6C],eax
	je Block66

 Block65:
	mov esi,offset _D_VTMISSING
	jmp Block67

 Block66:
	mov eax,3
	mov word ptr [esp+0x70],ax
	mov dword ptr [esp+0x78],ecx
	or dword ptr [esp+0x14],8
	lea esi,[esp+0x70]
	mov byte ptr [esp+0x88],8

 Block67:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x40]
	push esi
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block24

 Block68:
	mov dword ptr [esp+0x88],9
	test edi,edi
	je Block26

 Block69:
	mov edx,dword ptr [esp+0x40]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0xA0]
	push eax
	mov eax,dword ptr [ecx+0x80]
	push ebx
	push edx
	push edi
	call eax
	test eax,eax
	jge Block71

 Block70:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block71:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x88],8
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	test byte ptr [esp+0x14],8
	mov dword ptr [esp+0x88],1
	je Block97

 Block76:
	and dword ptr [esp+0x14],0xFFFFFFF7
	cmp word ptr [esp+0x70],8
	jne Block78

 Block77:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	jmp Block93

 Block78:
	lea ecx,[esp+0x70]
	push ecx
	jmp Block96

 Block79:
	cmp dword ptr [ebp+0x6C],0
	je Block81

 Block80:
	mov esi,offset _D_VTMISSING
	jmp Block82

 Block81:
	mov edx,3
	mov word ptr [esp+0x60],dx
	mov dword ptr [esp+0x68],ecx
	or dword ptr [esp+0x14],4
	lea esi,[esp+0x60]
	mov byte ptr [esp+0x88],6

 Block82:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x50]
	push esi
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block24

 Block83:
	mov dword ptr [esp+0x88],7
	test edi,edi
	je Block26

 Block84:
	mov ecx,dword ptr [esp+0x50]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0xA4]
	push eax
	push ecx
	push ebx
	push edi
	call edx
	test eax,eax
	jge Block86

 Block85:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block86:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],6
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	test byte ptr [esp+0x14],4
	mov dword ptr [esp+0x88],1
	je Block97

 Block91:
	and dword ptr [esp+0x14],0xFFFFFFFB
	cmp word ptr [esp+0x60],8
	jne Block95

 Block92:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx

 Block93:
	test eax,eax
	je Block97

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block95:
	lea eax,[esp+0x60]
	push eax

 Block96:
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [ebp+0x4C]
	mov edx,ecx
	add ebx,eax
	sub edx,eax
	cmp ebx,edx
	jl Block62

 Block98:
	sub ecx,dword ptr [ebp+0x4C]
	cmp dword ptr [ebp+0x3C],1
	mov eax,dword ptr [esp+0x28]
	mov edi,ecx
	jg Block100

 Block99:
	mov eax,8

 Block100:
	push eax
	lea eax,[esp+0x34]
	push eax
	mov ecx,ebp
	call CCtrlScrollBar::GetScrollBarCanvas
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x18]
	cmp esi,eax
	je Block105

 Block101:
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block103

 Block102:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block103:
	test esi,esi
	je Block105

 Block104:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block105:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block107

 Block106:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block107:
	mov eax,dword ptr [ebp+0x54]
	sub eax,0
	je Block124

 Block108:
	sub eax,1
	jne Block142

 Block109:
	mov bl,0xC
	cmp dword ptr [ebp+0x6C],eax
	je Block111

 Block110:
	mov esi,offset _D_VTMISSING
	jmp Block112

 Block111:
	mov ecx,3
	mov word ptr [esp+0x60],cx
	mov dword ptr [esp+0x68],0xFF
	or dword ptr [esp+0x14],0x20
	lea esi,[esp+0x60]
	mov byte ptr [esp+0x88],bl

 Block112:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x70]
	push esi
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block114

 Block113:
	push eax
	call _com_issue_error

 Block114:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x88],0xD
	test ecx,ecx
	jne Block116

 Block115:
	push 0x80004003
	call _com_issue_error

 Block116:
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0x70]
	push edx
	mov edx,dword ptr [esp+0x94]
	push eax
	push edi
	push edx
	call IWzCanvas::Copy
	mov esi,8
	mov byte ptr [esp+0x88],bl
	cmp word ptr [esp+0x70],si
	jne Block119

 Block117:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	test byte ptr [esp+0x14],0x20
	mov dword ptr [esp+0x88],1
	je Block142

 Block121:
	and dword ptr [esp+0x14],0xFFFFFFDF
	cmp word ptr [esp+0x60],si
	jne Block123

 Block122:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	jmp Block138

 Block123:
	lea eax,[esp+0x60]
	jmp Block141

 Block124:
	cmp dword ptr [ebp+0x6C],0
	mov bl,0xA
	je Block126

 Block125:
	mov esi,offset _D_VTMISSING
	jmp Block127

 Block126:
	mov ecx,3
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],0xFF
	or dword ptr [esp+0x14],0x10
	lea esi,[esp+0x40]
	mov byte ptr [esp+0x88],bl

 Block127:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x50]
	push esi
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block129

 Block128:
	push eax
	call _com_issue_error

 Block129:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x88],0xB
	test ecx,ecx
	jne Block131

 Block130:
	push 0x80004003
	call _com_issue_error

 Block131:
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0x50]
	push edx
	mov edx,dword ptr [esp+0x98]
	push eax
	push edx
	push edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],bl
	jne Block134

 Block132:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block135:
	test byte ptr [esp+0x14],0x10
	mov dword ptr [esp+0x88],1
	je Block142

 Block136:
	and dword ptr [esp+0x14],0xFFFFFFEF
	cmp word ptr [esp+0x40],8
	jne Block140

 Block137:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx

 Block138:
	test eax,eax
	je Block142

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block140:
	lea eax,[esp+0x40]

 Block141:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block142:
	mov ebx,1
	cmp dword ptr [ebp+0x3C],ebx
	jle Block176

 Block143:
	cmp dword ptr [ebp+0x68],0
	jne Block176

 Block144:
	mov ecx,dword ptr [esp+0x34]
	push ecx
	lea edx,[esp+0x38]
	push edx
	mov ecx,ebp
	call CCtrlScrollBar::GetScrollBarCanvas
	mov eax,dword ptr [eax]
	cmp dword ptr [esp+0x18],eax
	je Block149

 Block145:
	mov esi,dword ptr [esp+0x18]
	mov edi,eax
	mov dword ptr [esp+0x18],edi
	test eax,eax
	je Block147

 Block146:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block147:
	test esi,esi
	je Block150

 Block148:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	jmp Block150

 Block149:
	mov edi,dword ptr [esp+0x18]

 Block150:
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block152

 Block151:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block152:
	cmp dword ptr [ebp+0x54],ebx
	jne Block156

 Block153:
	test edi,edi
	jne Block155

 Block154:
	push 0x80004003
	call _com_issue_error

 Block155:
	mov ecx,edi
	call IWzCanvas::Getheight
	jmp Block159

 Block156:
	test edi,edi
	jne Block158

 Block157:
	push 0x80004003
	call _com_issue_error

 Block158:
	mov ecx,edi
	call IWzCanvas::Getwidth

 Block159:
	mov ecx,dword ptr [ebp+0x4C]
	mov edx,eax
	lea eax,[ecx+ecx]
	mov esi,eax
	mov eax,dword ptr [ebp+0x50]
	sub eax,esi
	mov esi,dword ptr [ebp+0x3C]
	sub eax,edx
	imul eax,dword ptr [ebp+0x38]
	sub esi,ebx
	xor edx,edx
	div esi
	mov esi,eax
	mov eax,dword ptr [ebp+0x54]
	add esi,ecx
	add esi,dword ptr [esp+0x2C]
	sub eax,0
	je Block168

 Block160:
	sub eax,ebx
	jne Block176

 Block161:
	cmp dword ptr [ebp+0x6C],eax
	je Block163

 Block162:
	mov eax,offset _D_VTMISSING
	jmp Block164

 Block163:
	mov ecx,3
	mov word ptr [esp+0x70],cx
	mov dword ptr [esp+0x78],0xFF
	or dword ptr [esp+0x14],0x80
	lea eax,[esp+0x70]
	mov byte ptr [esp+0x88],0x10

 Block164:
	push eax
	lea ecx,[esp+0x54]
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x88],0x11
	test ecx,ecx
	jne Block166

 Block165:
	push 0x80004003
	call _com_issue_error

 Block166:
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0x50]
	push edx
	mov edx,dword ptr [esp+0x94]
	push eax
	push esi
	push edx
	call IWzCanvas::Copy
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	test byte ptr [esp+0x14],0x80
	mov dword ptr [esp+0x88],ebx
	je Block176

 Block167:
	lea ecx,[esp+0x70]
	jmp Block175

 Block168:
	cmp dword ptr [ebp+0x6C],0
	je Block170

 Block169:
	mov eax,offset _D_VTMISSING
	jmp Block171

 Block170:
	mov eax,3
	mov word ptr [esp+0x60],ax
	mov dword ptr [esp+0x68],0xFF
	or dword ptr [esp+0x14],0x40
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x88],0xE

 Block171:
	push eax
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x88],0xF
	test ecx,ecx
	jne Block173

 Block172:
	push 0x80004003
	call _com_issue_error

 Block173:
	mov eax,dword ptr [esp+0x94]
	lea edx,[esp+0x40]
	push edx
	push edi
	push eax
	push esi
	call IWzCanvas::Copy
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	test byte ptr [esp+0x14],0x40
	mov dword ptr [esp+0x88],ebx
	je Block176

 Block174:
	lea ecx,[esp+0x60]

 Block175:
	call _xvariant_t::~_xvariant_t

 Block176:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x88],0
	test eax,eax
	je Block178

 Block177:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block178:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x88],0xFFFFFFFF
	test eax,eax
	je Block180

 Block179:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block180:
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x78
	ret 0xC
}
}
// CCtrlScrollBar::IsKindOf
__SUB_CLASS_THIS(000EA020, __thiscall, 12482,  CCtrlScrollBar, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCtrlScrollBar::ms_RTTI_CCtrlScrollBar
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
// CCtrlScrollBar::Update
__SUB_CLASS_THIS0(000E9E80, __thiscall, 12461,  CCtrlScrollBar, void) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x3C],1
	jle Block16

 Block1:
	cmp dword ptr [esi+0x48],0
	je Block16

 Block2:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push ebx
	push edi
	push 0
	lea eax,[esp+0x10]
	push eax
	call CWndMan::GetCursorPos
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x2C]
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov ebx,dword ptr [esp+0xC]
	mov edx,dword ptr [edi]
	sub ebx,eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esp+0x10]
	sub ecx,eax
	push ecx
	push ebx
	mov ecx,esi
	call CCtrlScrollBar::ScrHitTest
	lea ecx,[eax-0x65]
	pop edi
	pop ebx
	cmp ecx,3
	ja Block16

 Block3:
	cmp ECX, 0
je Block4
cmp ECX, 1
je Block7
cmp ECX, 2
je Block10
cmp ECX, 3
je Block13


 Block4:
	cmp dword ptr [esi+0x40],eax
	jne Block16

 Block5:
	mov ecx,esi
	call CCtrlScrollBar::AutoRepeat
	test eax,eax
	je Block16

 Block6:
	push 0xFFFFFFFF
	mov ecx,esi
	call CCtrlScrollBar::DoPrevNext
	pop esi
	add esp,8
	ret

 Block7:
	cmp dword ptr [esi+0x40],eax
	jne Block16

 Block8:
	mov ecx,esi
	call CCtrlScrollBar::AutoRepeat
	test eax,eax
	je Block16

 Block9:
	push 1
	mov ecx,esi
	call CCtrlScrollBar::DoPrevNext
	pop esi
	add esp,8
	ret

 Block10:
	cmp dword ptr [esi+0x40],eax
	jne Block16

 Block11:
	mov ecx,esi
	call CCtrlScrollBar::AutoRepeat
	test eax,eax
	je Block16

 Block12:
	push 0xFFFFFFFF
	mov ecx,esi
	call CCtrlScrollBar::DoPrevNextBar
	pop esi
	add esp,8
	ret

 Block13:
	cmp dword ptr [esi+0x40],eax
	jne Block16

 Block14:
	mov ecx,esi
	call CCtrlScrollBar::AutoRepeat
	test eax,eax
	je Block16

 Block15:
	push 1
	mov ecx,esi
	call CCtrlScrollBar::DoPrevNextBar

 Block16:
	pop esi
	add esp,8
	ret
}
}
// CCtrlScrollBar::ScrHitTest
__SUB_CLASS_THIS(000E9890, __thiscall, 12475,  CCtrlScrollBar, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x54]
	sub eax,0
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	mov edi,ebx
	jmp Block5

 Block3:
	mov edi,esi
	jmp Block5

 Block4:
	mov edi,dword ptr [esp+0x14]

 Block5:
	mov edx,dword ptr [ecx+0x3C]
	cmp edx,1
	jle Block20

 Block6:
	test esi,esi
	jl Block20

 Block7:
	cmp esi,dword ptr [ecx+0x1C]
	jge Block20

 Block8:
	test ebx,ebx
	jl Block20

 Block9:
	cmp ebx,dword ptr [ecx+0x20]
	jge Block20

 Block10:
	mov ebx,dword ptr [ecx+0x4C]
	cmp edi,ebx
	jg Block12

 Block11:
	pop edi
	pop esi
	mov eax,0x65
	pop ebx
	ret 8

 Block12:
	mov eax,dword ptr [ecx+0x50]
	mov esi,eax
	sub esi,ebx
	cmp edi,esi
	jl Block14

 Block13:
	pop edi
	pop esi
	mov eax,0x66
	pop ebx
	ret 8

 Block14:
	mov esi,ebx
	push ebp
	lea ebp,[esi+esi*2]
	sub eax,ebp
	imul eax,dword ptr [ecx+0x38]
	lea ecx,[edx-1]
	cdq
	idiv ecx
	pop ebp
	add eax,esi
	cmp eax,edi
	jg Block18

 Block15:
	add ebx,eax
	cmp edi,ebx
	jg Block17

 Block16:
	pop edi
	pop esi
	mov eax,0x69
	pop ebx
	ret 8

 Block17:
	cmp edi,eax
	jge Block19

 Block18:
	pop edi
	pop esi
	mov eax,0x67
	pop ebx
	ret 8

 Block19:
	pop edi
	pop esi
	mov eax,0x68
	pop ebx
	ret 8

 Block20:
	pop edi
	pop esi
	mov eax,0x64
	pop ebx
	ret 8
}
}
// CCtrlScrollBar::SetCurPos
__SUB_CLASS_THIS(000E9B50, __thiscall, 12469,  CCtrlScrollBar, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x38],eax
	call CCtrlScrollBar::ValidatePosAndRange
	call CCtrlWnd::InvalidateRect
	ret 4
}
}
// CCtrlScrollBar::OnMouseButton
__SUB_CLASS_THIS(000E9F80, __thiscall, 12464,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x201
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	push eax
	push edx
	add ecx,0xFFFFFFFC
	call CCtrlScrollBar::MouseUp
	ret 0x10

 Block3:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	push eax
	push edx
	add ecx,0xFFFFFFFC
	call CCtrlScrollBar::MouseDown

 Block4:
	ret 0x10
}
}
// CCtrlScrollBar::GetScrollBarBaseUOL
_SUB_EXCEPTION_HANDLER(EA0F0)
__SUB(000EA0F0, __cdecl, 12479,  void, long, long, ZXString16&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EA0F0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov edi,dword ptr [esp+0x20]
	mov esi,dword ptr [esp+0x28]
	mov eax,edi
	sub eax,0
	je Block3

 Block1:
	sub eax,1
	jne Block6

 Block2:
	lea eax,[esp+0x20]
	push 0x51A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x1C],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	jmp Block4

 Block3:
	lea ecx,[esp+0xC]
	push 0x519
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x1C],0
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0xC]

 Block4:
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x24]
	dec eax
	cmp eax,8
	ja Block20

 Block7:
	cmp EAX, 0
je Block8
cmp EAX, 1
je Block9
cmp EAX, 2
je Block10
cmp EAX, 3
je Block11
cmp EAX, 4
je Block12
cmp EAX, 5
je Block14
cmp EAX, 6
je Block16
cmp EAX, 7
je Block17
cmp EAX, 8
je Block18


 Block8:
	push offset _S_2
	jmp Block19

 Block9:
	push offset _S_3__1
	jmp Block19

 Block10:
	push offset _S_4__1
	jmp Block19

 Block11:
	push offset _S_5__1
	jmp Block19

 Block12:
	test edi,edi
	je Block20

 Block13:
	push offset _S_6__1
	jmp Block19

 Block14:
	test edi,edi
	je Block20

 Block15:
	push offset _S_7__1
	jmp Block19

 Block16:
	push offset _S_8__1
	jmp Block19

 Block17:
	push offset _S_9__1
	jmp Block19

 Block18:
	push offset _S_10

 Block19:
	mov ecx,esi
	call ZXString16::op_add_assign_t_0

 Block20:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CCtrlScrollBar::SetScrollBarSize
__SUB_CLASS_THIS(000E9B00, __thiscall, 12473,  CCtrlScrollBar, int32_t, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	cmp dword ptr [ecx+0x50],edx
	je Block6

 Block1:
	test edx,edx
	je Block6

 Block2:
	mov eax,dword ptr [ecx+0x54]
	sub eax,0
	je Block5

 Block3:
	sub eax,1
	jne Block6

 Block4:
	mov dword ptr [ecx+0x20],edx
	mov dword ptr [ecx+0x50],edx
	call CCtrlWnd::InvalidateRect
	mov eax,1
	ret 4

 Block5:
	mov dword ptr [ecx+0x1C],edx
	mov dword ptr [ecx+0x50],edx
	call CCtrlWnd::InvalidateRect
	mov eax,1
	ret 4

 Block6:
	xor eax,eax
	ret 4
}
}
// CCtrlScrollBar::DoThumbMove
__SUB_CLASS_THIS(000E99E0, __thiscall, 12476,  CCtrlScrollBar, void, long, long) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x3C]
	cmp eax,1
	mov dword ptr [esp+4],eax
	jle Block6

 Block1:
	mov eax,dword ptr [esi+0x4C]
	mov ecx,dword ptr [esi+0x50]
	lea eax,[eax+eax*2]
	sub ecx,eax
	cmp dword ptr [esi+0x54],0
	mov dword ptr [esp+8],ecx
	jne Block3

 Block2:
	mov edx,dword ptr [esp+0x10]
	sub edx,dword ptr [esi+0x60]
	mov dword ptr [esp+0x10],edx
	jmp Block4

 Block3:
	mov eax,dword ptr [esp+0x14]
	sub eax,dword ptr [esi+0x64]
	mov dword ptr [esp+0x10],eax

 Block4:
	fild dword ptr [esp+4]
	push edi
	mov edi,dword ptr [esi+0x38]
	fimul dword ptr [esp+0x14]
	fidiv dword ptr [esp+0xC]
	call __ftol2_sse
	add eax,dword ptr [esi+0x5C]
	mov ecx,esi
	mov dword ptr [esi+0x38],eax
	call CCtrlScrollBar::ValidatePosAndRange
	call CCtrlWnd::InvalidateRect
	mov eax,dword ptr [esi+0x38]
	cmp eax,edi
	pop edi
	je Block6

 Block5:
	mov ecx,dword ptr [esi+0x24]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x1C]
	push eax
	mov eax,dword ptr [esi+0x14]
	push 0x130
	push eax
	call edx

 Block6:
	pop esi
	add esp,8
	ret 8
}
}
// CCtrlScrollBar::GetScrollBarSize
_SUB_EXCEPTION_HANDLER(EA230)
__SUB(000EA230, __cdecl, 12472,  long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EA230
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov ecx,dword ptr [esp+0x60]
	mov ebp,dword ptr [esp+0x5C]
	lea eax,[esp+0x10]
	push eax
	push ecx
	push ebp
	mov dword ptr [esp+0x60],ebx
	call CCtrlScrollBar::GetScrollBarBaseUOL
	add esp,0xC
	lea edx,[esp+0x18]
	push 0x5D8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x54],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	shr ecx,1
	jmp Block3

 Block2:
	xor ecx,ecx

 Block3:
	push ecx
	push eax
	lea ecx,[esp+0x18]
	call ZXString16::_Cat
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],bl
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x58],2
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov eax,dword ptr [esp+0x10]
	push ebx
	push ebx
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x6C],3
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x68],4
	cmp dword ptr [_D_G_RM],ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x6C],3
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	cmp word ptr [esp+0x3C],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x54],7
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x3C]
	push eax
	call esi

 Block18:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x54],8
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x1C]
	push edx
	call esi

 Block22:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x54],9
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x2C]
	push ecx
	call esi

 Block26:
	mov eax,ebp
	sub eax,ebx
	je Block38

 Block27:
	sub eax,1
	je Block33

 Block28:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],bl
	cmp eax,ebx
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block30:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebx
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	xor eax,eax
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret

 Block33:
	mov esi,dword ptr [esp+0x14]
	cmp esi,ebx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block37

 Block36:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block37:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x58],bl
	call edx
	jmp Block43

 Block38:
	mov esi,dword ptr [esp+0x14]
	cmp esi,ebx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block42

 Block41:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block42:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x58],bl
	call ecx

 Block43:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebx
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block45:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret
}
}
// CCtrlScrollBar::GetScrollBarCanvas
_SUB_EXCEPTION_HANDLER(EA530)
__SUB_CLASS_THIS(000EA530, __thiscall, 12474,  CCtrlScrollBar, _x_com_ptr<IWzCanvas>*, _x_com_ptr<IWzCanvas>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EA530
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x6C]
	mov dword ptr fs:[0],eax
	add ecx,0x70
	push ecx
	mov dword ptr [esp+0x3C],0
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],0
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x80]
	mov edi,1
	mov dword ptr [esp+0x74],edi
	cmp eax,9
	ja Block14

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5
cmp EAX, 4
je Block6
cmp EAX, 5
je Block7
cmp EAX, 6
je Block8
cmp EAX, 7
je Block9
cmp EAX, 8
je Block10
cmp EAX, 9
je Block11


 Block2:
	lea eax,[esp+0x80]
	push 0x5D8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x78],2
	call ZXString16::op_add_assign_other_1
	mov eax,dword ptr [esp+0x80]
	jmp Block12

 Block3:
	lea ecx,[esp+0x14]
	push 0x5D9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x78],3
	call ZXString16::op_add_assign_other_1
	mov eax,dword ptr [esp+0x14]
	jmp Block12

 Block4:
	lea edx,[esp+0x18]
	push 0x5DA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x78],4
	call ZXString16::op_add_assign_other_1
	mov eax,dword ptr [esp+0x18]
	jmp Block12

 Block5:
	lea eax,[esp+0x1C]
	push 0x5DB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x78],5
	call ZXString16::op_add_assign_other_1
	mov eax,dword ptr [esp+0x1C]
	jmp Block12

 Block6:
	lea ecx,[esp+0x20]
	push 0x5DC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x78],6
	call ZXString16::op_add_assign_other_1
	mov eax,dword ptr [esp+0x20]
	jmp Block12

 Block7:
	lea edx,[esp+0x24]
	push 0x5DD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x78],7
	call ZXString16::op_add_assign_other_1
	mov eax,dword ptr [esp+0x24]
	jmp Block12

 Block8:
	lea eax,[esp+0x28]
	push 0x5DE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x78],8
	call ZXString16::op_add_assign_other_1
	mov eax,dword ptr [esp+0x28]
	jmp Block12

 Block9:
	lea ecx,[esp+0x2C]
	push 0x5DF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x78],9
	call ZXString16::op_add_assign_other_1
	mov eax,dword ptr [esp+0x2C]
	jmp Block12

 Block10:
	lea edx,[esp+0x30]
	push 0x5E0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x78],0xA
	call ZXString16::op_add_assign_other_1
	mov eax,dword ptr [esp+0x30]
	jmp Block12

 Block11:
	lea eax,[esp+0x34]
	push 0x5E1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x78],0xB
	call ZXString16::op_add_assign_other_1
	mov eax,dword ptr [esp+0x34]

 Block12:
	mov byte ptr [esp+0x74],1
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x4C]
	push ecx
	call esi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x78],0xC
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	push 0
	push 0
	lea edx,[esp+0x54]
	push edx
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov dword ptr [esp+0x94],esp
	mov ecx,esp
	mov bl,0xD
	push edx
	mov byte ptr [esp+0x8C],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x88],0xE
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea eax,[esp+0x70]
	mov byte ptr [esp+0x88],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x7C],0xF
	call Ztl_variant_t::GetUnknown
	mov esi,dword ptr [esp+0x7C]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block23

 Block21:
	cmp eax,0x80004002
	je Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov dword ptr [esp+0x38],edi
	mov edi,8
	mov byte ptr [esp+0x74],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x5C],di
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x5C]
	push edx
	call ebx

 Block27:
	mov byte ptr [esp+0x74],0xC
	cmp word ptr [esp+0x3C],di
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x3C]
	push ecx
	call ebx

 Block31:
	mov byte ptr [esp+0x74],1
	cmp word ptr [esp+0x4C],di
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[esp+0x4C]
	push eax
	call ebx

 Block35:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x74],0
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	mov eax,esi
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x68
	ret 8
}
}
