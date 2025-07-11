#include "regen.hpp"
// StartUpWnd.ipp
#include "StartUpWnd.hpp"

// ShowStartUpWnd
__SUB(00320680, __cdecl, 132038,  int32_t, const StartUpWndParam&) {
__asm {

 Block0:
	sub esp,0x5C
	push ebp
	push esi
	xor ebp,ebp
	push ebp
	call OleInitialize
	mov esi,dword ptr [esp+0x68]
	mov dword ptr [_D_PSWP2],esi
	mov eax,dword ptr [esi+0x20C]
	lea ecx,[esp+0x34]
	push ecx
	mov dword ptr [esp+0x38],0x30
	mov dword ptr [esp+0x3C],0x28
	mov dword ptr [esp+0x40],offset StartUpWndProc
	mov dword ptr [esp+0x44],ebp
	mov dword ptr [esp+0x48],ebp
	mov dword ptr [esp+0x4C],eax
	mov dword ptr [esp+0x50],ebp
	mov dword ptr [esp+0x54],ebp
	mov dword ptr [esp+0x58],1
	mov dword ptr [esp+0x5C],ebp
	mov dword ptr [esp+0x60],offset _S_STARTUPDLGCLASS
	mov dword ptr [esp+0x64],ebp
	call RegisterClassExA
	test ax,ax
	jne Block2

 Block1:
	pop esi
	xor eax,eax
	pop ebp
	add esp,0x5C
	ret

 Block2:
	push ebx
	push edi
	push 7
	call GetSystemMetrics
	mov edx,dword ptr [esi+0x200]
	push 8
	lea edi,[edx+eax*2]
	call GetSystemMetrics
	mov ecx,dword ptr [esi+0x204]
	lea edx,[esp+0x10]
	push edx
	lea ebx,[ecx+eax*2]
	call GetDesktopWindow
	push eax
	call GetWindowRect
	mov eax,dword ptr [esi+0x20C]
	push ebp
	push eax
	mov eax,dword ptr [esp+0x24]
	push ebp
	sub eax,ebx
	push ebp
	cdq
	push ebx
	sub eax,edx
	push edi
	sar eax,1
	push eax
	mov eax,dword ptr [esp+0x34]
	sub eax,edi
	cdq
	sub eax,edx
	sar eax,1
	push eax
	push 0x80040000
	push offset _S_MAPLESTORY
	push offset _S_STARTUPDLGCLASS
	push ebp
	call CreateWindowExA
	mov esi,eax
	pop edi
	pop ebx
	cmp esi,ebp
	je Block1

 Block3:
	push 5
	push esi
	call ShowWindow
	push esi
	call UpdateWindow
	push ebp
	push ebp
	push ebp
	lea ecx,[esp+0x24]
	push ecx
	call GetMessageA
	test eax,eax
	je Block5

 Block4:
	lea edx,[esp+0x18]
	push edx
	call TranslateMessage
	lea eax,[esp+0x18]
	push eax
	call DispatchMessageA
	push ebp
	push ebp
	push ebp
	lea ecx,[esp+0x24]
	push ecx
	call GetMessageA
	test eax,eax
	jne Block4

 Block5:
	call OleUninitialize
	pop esi
	mov eax,1
	pop ebp
	add esp,0x5C
	ret
}
}
// StartUpWndProc
_SUB_EXCEPTION_HANDLER(320160)
// 720648
static uint8_t _SUB_320160_LOOKUP_TABLE_0[43] = {
0, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 
};
__SUB(00320160, __stdcall, 4421,  long, HWND__*, uint32_t, uint32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_320160
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x254
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x250],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x268]
	mov dword ptr fs:[0],eax
	mov ebx,dword ptr [esp+0x278]
	mov ebp,dword ptr [esp+0x284]
	mov ecx,0xF
	mov esi,offset _S_HTTPINGAMEWEBNEX__1
	lea edi,[esp+0x54]
	rep movsd
	movsw
	movsb
	xor edi,edi
	push edi
	mov dword ptr [esp+0x258],0x1CD
	mov dword ptr [esp+0x25C],0x59
	mov dword ptr [esp+0x260],edi
	call GetModuleHandleA
	mov dword ptr [esp+0x260],eax
	mov eax,dword ptr [esp+0x27C]
	cmp eax,0x84
	ja Block30

 Block1:
	je Block29

 Block2:
	lea ecx,[eax-1]
	cmp ecx,0x2A
	ja Block44

 Block3:
	movzx ecx,byte ptr [ecx+_SUB_320160_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block4
cmp ECX, 1
je Block24
cmp ECX, 2
je Block23
cmp ECX, 3
je Block11
cmp ECX, 4
je Block44


 Block4:
	mov ebp,dword ptr [ebp+4]
	mov esi,dword ptr [ZImports::_LoadBitmapA]
	push 0x75
	push ebp
	mov dword ptr [_D_HINSTANCE],ebp
	call esi
	mov edx,dword ptr [_D_HINSTANCE]
	push 0x76
	push edx
	mov dword ptr [_D_HBITMAP],eax
	call esi
	mov dword ptr [_D_HBITMAP+4],eax
	mov eax,dword ptr [_D_HINSTANCE]
	push 0x77
	push eax
	call esi
	mov ecx,dword ptr [_D_HINSTANCE]
	push 0x74
	push ecx
	mov dword ptr [_D_HBITMAP+8],eax
	call esi
	lea edx,[esp+0x3C]
	push edx
	mov dword ptr [_D_HINSTANCE],eax
	mov eax,dword ptr [_D_HBITMAP]
	push 0x18
	push eax
	call dword ptr [ZImports::_GetObjectA]
	mov ecx,dword ptr [_D_PSWP2]
	mov esi,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x40]
	push edi
	mov dword ptr [esp+0x20],edi
	mov eax,dword ptr [ecx+0x200]
	push edi
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x28],edi
	mov eax,dword ptr [ecx+0x204]
	push 0x2710
	sub eax,esi
	push ebx
	mov dword ptr [esp+0x38],eax
	mov ecx,dword ptr [ecx+0x204]
	mov dword ptr [_D_RECTBUTTON+12],ecx
	sub ecx,eax
	push ecx
	push edx
	push eax
	push 0x1CD
	push 0x5800000B
	push offset _S_PLAY
	push offset _S_BUTTON
	push edi
	mov dword ptr [_D_CXBACKGROUND],edx
	mov dword ptr [_D_CYBACKGROUND],esi
	mov dword ptr [_D_RECTBUTTON],edi
	mov dword ptr [_D_RECTBUTTON+8],edx
	mov dword ptr [_D_RECTBUTTON+4],eax
	call dword ptr [ZImports::_CreateWindowExA]
	xor ecx,ecx
	mov word ptr [_D_NSTATUS],cx
	push 0x144
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [_D_HWNDBUTTON],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x270],edi
	cmp eax,edi
	je Block6

 Block5:
	mov ecx,dword ptr [_D_PSWP2]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [ecx+0x20C]
	push edx
	push ebx
	mov ecx,eax
	call ADAD::BrowserControlPane::_ctor_0
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov ecx,dword ptr [_D_PSWP2]
	push ecx
	or ebp,0xFFFFFFFF
	mov ecx,eax
	mov dword ptr [esp+0x274],ebp
	mov dword ptr [_D_BCP2],eax
	call ADAD::BrowserControlPane::NavigateTo
	mov ecx,dword ptr [_D_BCP2]
	push edi
	call ADAD::BrowserControlPane::SetShowScrollBar
	mov ecx,dword ptr [_D_BCP2]
	mov esi,1
	push esi
	call ADAD::BrowserControlPane::ActivateWindow
	mov edx,dword ptr [_D_BCP2]
	mov dword ptr [edx+0x138],esi
	lea eax,[esp+0x54]
	push 0x144
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x30],edi
	mov dword ptr [esp+0x38],0x1CD
	mov dword ptr [esp+0x34],0x23B
	mov dword ptr [esp+0x3C],0x294
	mov dword ptr [_D_PSWP3],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x270],esi
	cmp eax,edi
	je Block9

 Block8:
	mov edx,dword ptr [_D_PSWP3]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [edx+0x20C]
	push ecx
	push ebx
	mov ecx,eax
	call ADAD::BrowserControlPane::_ctor_0
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov edx,dword ptr [_D_PSWP3]
	push edx
	mov ecx,eax
	mov dword ptr [esp+0x274],ebp
	mov dword ptr [_D_BCP3],eax
	call ADAD::BrowserControlPane::NavigateTo
	mov ecx,dword ptr [_D_BCP3]
	push edi
	call ADAD::BrowserControlPane::SetShowScrollBar
	mov ecx,dword ptr [_D_BCP3]
	push esi
	call ADAD::BrowserControlPane::ActivateWindow
	mov eax,dword ptr [_D_BCP3]
	mov dword ptr [eax+0x138],esi
	mov ecx,dword ptr [_D_PSWP2]
	mov edx,dword ptr [ecx+0x208]
	imul edx,0x3E8
	push edi
	push edx
	push 0xDD
	push ebx
	call SetTimer
	jmp Block38

 Block11:
	mov esi,dword ptr [ebp+0x28]
	mov ebx,dword ptr [ebp+0x24]
	sub esi,dword ptr [ebp+0x20]
	sub ebx,dword ptr [ebp+0x1C]
	cmp dword ptr [ebp+4],0x2710
	mov dword ptr [esp+0x14],esi
	jne Block38

 Block12:
	mov eax,dword ptr [ebp+0x10]
	test al,1
	je Block14

 Block13:
	mov eax,1
	mov word ptr [_D_NSTATUS],ax
	jmp Block17

 Block14:
	test al,4
	je Block16

 Block15:
	mov ecx,2
	mov word ptr [_D_NSTATUS],cx
	jmp Block17

 Block16:
	xor edx,edx
	mov word ptr [_D_NSTATUS],dx

 Block17:
	mov eax,dword ptr [ebp+0x18]
	push eax
	call dword ptr [ZImports::_CreateCompatibleDC]
	movsx ecx,word ptr [_D_NSTATUS]
	mov edx,dword ptr [ecx*4+_D_HBITMAP]
	push edx
	push eax
	mov dword ptr [esp+0x20],eax
	call dword ptr [ZImports::_SelectObject]
	test esi,esi
	jle Block22

 Block18:
	mov eax,dword ptr [_D_CXBACKGROUND]

 Block19:
	xor esi,esi
	test ebx,ebx
	jle Block21

 Block20:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [_D_CYBACKGROUND]
	push 0xCC0020
	push 0
	push 0
	push ecx
	push edx
	push eax
	mov eax,dword ptr [ebp+0x18]
	push edi
	push esi
	push eax
	call dword ptr [ZImports::_BitBlt]
	mov eax,dword ptr [_D_CXBACKGROUND]
	add esi,eax
	cmp esi,ebx
	jl Block20

 Block21:
	add edi,dword ptr [_D_CYBACKGROUND]
	cmp edi,dword ptr [esp+0x14]
	jl Block19

 Block22:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	call dword ptr [ZImports::_DeleteDC]
	jmp Block38

 Block23:
	mov edx,dword ptr [_D_BCP2]
	mov esi,1
	mov dword ptr [edx+0x138],esi
	mov ecx,dword ptr [_D_BCP2]
	push edi
	call ADAD::BrowserControlPane::ActivateWindow
	mov eax,dword ptr [_D_BCP3]
	mov dword ptr [eax+0x138],esi
	mov ecx,dword ptr [_D_BCP3]
	push edi
	call ADAD::BrowserControlPane::ActivateWindow
	jmp Block37

 Block24:
	mov ecx,dword ptr [_D_BCP2]
	cmp ecx,edi
	je Block26

 Block25:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax

 Block26:
	mov ecx,dword ptr [_D_BCP3]
	cmp ecx,edi
	je Block28

 Block27:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax

 Block28:
	push edi
	call PostQuitMessage
	jmp Block38

 Block29:
	mov eax,1
	jmp Block39

 Block30:
	cmp eax,0x113
	ja Block43

 Block31:
	je Block41

 Block32:
	mov ecx,eax
	sub ecx,0x100
	je Block40

 Block33:
	sub ecx,0x11
	jne Block44

 Block34:
	mov eax,dword ptr [esp+0x280]
	mov ecx,0x2710
	cmp ax,cx
	jne Block38

 Block35:
	shr eax,0x10
	test eax,eax

 Block36:
	jne Block38

 Block37:
	push ebx
	call DestroyWindow

 Block38:
	xor eax,eax

 Block39:
	mov ecx,dword ptr [esp+0x268]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x250]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x260
	ret 0x10

 Block40:
	cmp dword ptr [esp+0x280],0x1B
	jmp Block36

 Block41:
	cmp dword ptr [esp+0x280],0xDD
	jne Block38

 Block42:
	mov edx,dword ptr [_D_HWNDBUTTON]
	push 1
	push edx
	call dword ptr [ZImports::_EnableWindow]
	push 0xDD
	push ebx
	call KillTimer
	jmp Block38

 Block43:
	cmp eax,0x400
	je Block38

 Block44:
	mov ecx,dword ptr [esp+0x280]
	push ebp
	push ecx
	push eax
	push ebx
	call DefWindowProcA
	jmp Block39
}
}
