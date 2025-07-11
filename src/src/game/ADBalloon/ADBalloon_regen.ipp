#include "regen.hpp"
// ADBalloon.ipp
#include "ADBalloon.hpp"

// ShowADBalloon
_SUB_EXCEPTION_HANDLER(29000)
__SUB(00029000, __cdecl, 146339,  int32_t, const ADBalloonParam&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29000
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	push ebx
	call OleInitialize
	mov esi,dword ptr [esp+0x88]
	mov dword ptr [_D_PADP],esi
	mov eax,dword ptr [esi+0x20C]
	lea ecx,[esp+0x88]
	push 0x3CB
	push ecx
	mov dword ptr [esp+0x50],0x30
	mov dword ptr [esp+0x54],0x28
	mov dword ptr [esp+0x58],offset ADBallonProc
	mov dword ptr [esp+0x5C],ebx
	mov dword ptr [esp+0x60],ebx
	mov dword ptr [esp+0x64],eax
	mov dword ptr [esp+0x68],ebx
	mov dword ptr [esp+0x6C],ebx
	mov dword ptr [esp+0x70],1
	mov dword ptr [esp+0x74],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esp+0x88]
	mov dword ptr [esp+0x70],edx
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea eax,[esp+0x48]
	push eax
	mov dword ptr [esp+0x78],ebx
	call RegisterClassExA
	test ax,ax
	jne Block4

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret

 Block4:
	push 7
	call GetSystemMetrics
	mov ecx,dword ptr [esi+0x200]
	push 8
	lea edi,[ecx+eax*2]
	call GetSystemMetrics
	mov edx,dword ptr [esi+0x204]
	lea ebp,[edx+eax*2]
	lea eax,[esp+0x1C]
	push eax
	call GetDesktopWindow
	push eax
	call GetWindowRect
	lea ecx,[esp+0x18]
	push 0x3CD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x88],eax
	lea edx,[esp+0x14]
	push 0x3CB
	push edx
	mov dword ptr [esp+0x88],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esi+0x20C]
	mov ecx,dword ptr [esp+0x88]
	push ebx
	push eax
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [ecx]
	push ebx
	sub eax,ebp
	push ebx
	mov dword ptr [esp+0x98],edx
	cdq
	push ebp
	sub eax,edx
	push edi
	sar eax,1
	push eax
	mov eax,dword ptr [esp+0x40]
	sub eax,edi
	cdq
	sub eax,edx
	sar eax,1
	push eax
	push 0x80040000
	push ecx
	mov ecx,dword ptr [esp+0xB0]
	push ecx
	push 8
	mov byte ptr [esp+0xB0],1
	call CreateWindowExA
	mov esi,eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],bl
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	cmp esi,ebx
	je Block3

 Block9:
	push 5
	push esi
	call ShowWindow
	push esi
	call UpdateWindow
	push ebx
	push ebx
	push ebx
	lea edx,[esp+0x38]
	push edx
	call GetMessageA
	test eax,eax
	je Block11

 Block10:
	lea eax,[esp+0x2C]
	push eax
	call TranslateMessage
	lea ecx,[esp+0x2C]
	push ecx
	call DispatchMessageA
	push ebx
	push ebx
	push ebx
	lea edx,[esp+0x38]
	push edx
	call GetMessageA
	test eax,eax
	jne Block10

 Block11:
	call OleUninitialize
	mov eax,1
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret
}
}
