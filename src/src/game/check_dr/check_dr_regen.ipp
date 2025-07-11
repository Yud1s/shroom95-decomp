#include "regen.hpp"
// check_dr.ipp
#include "check_dr.hpp"

// DR_check
__SUB(000AB900, __cdecl, 145085,  int32_t, none*, unsigned long*, HINSTANCE__*) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// MS_GetModuleHandleA
__SUB(000AB040, __cdecl, 145076,  HINSTANCE__*, const char*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x20
	jmp Block2

 Block2:
	mov dword ptr [ebp-4],0
	cmp dword ptr [ebp+8],0
	je Block8

 Block3:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0x14],eax
	mov ecx,dword ptr [ebp-0x14]
	add ecx,1
	mov dword ptr [ebp-0x18],ecx

 Block4:
	mov edx,dword ptr [ebp-0x14]
	mov al,byte ptr [edx]
	mov byte ptr [ebp-0x19],al
	add dword ptr [ebp-0x14],1
	cmp byte ptr [ebp-0x19],0
	jne Block4

 Block5:
	mov ecx,dword ptr [ebp-0x14]
	sub ecx,dword ptr [ebp-0x18]
	mov dword ptr [ebp-0x20],ecx
	mov edx,dword ptr [ebp-0x20]
	add edx,1
	mov dword ptr [ebp-0xC],edx
	push 0
	push 0
	mov eax,dword ptr [ebp-0xC]
	push eax
	mov ecx,dword ptr [ebp+8]
	push ecx
	push 0
	push 0
	call dword ptr [ZImports::_MultiByteToWideChar]
	mov dword ptr [ebp-8],eax
	mov edx,dword ptr [ebp-8]
	shl edx,1
	push edx
	push 0
	call dword ptr [ZImports::_GetProcessHeap]
	push eax
	call dword ptr [ZImports::_HeapAlloc]
	mov dword ptr [ebp-0x10],eax
	cmp dword ptr [ebp-0x10],0
	jne Block7

 Block6:
	xor eax,eax
	jmp Block14

 Block7:
	mov eax,dword ptr [ebp-8]
	push eax
	mov ecx,dword ptr [ebp-0x10]
	push ecx
	mov edx,dword ptr [ebp-0xC]
	push edx
	mov eax,dword ptr [ebp+8]
	push eax
	push 0
	push 0
	call dword ptr [ZImports::_MultiByteToWideChar]
	mov ecx,dword ptr [ebp-0x10]
	push ecx
	call MS_GetModuleHandleW
	add esp,4
	mov dword ptr [ebp-4],eax
	mov edx,dword ptr [ebp-0x10]
	push edx
	push 0
	call dword ptr [ZImports::_GetProcessHeap]
	push eax
	call dword ptr [ZImports::_HeapFree]
	jmp Block9

 Block8:
	mov eax,dword ptr fs:[0x18]
	mov eax,dword ptr [eax+0x30]
	mov eax,dword ptr [eax+8]
	mov dword ptr [ebp-4],eax

 Block9:
	cmp dword ptr [ebp-4],0
	je Block11

 Block10:
	mov eax,dword ptr [ebp-4]
	jmp Block14

 Block11:
	jmp Block13

 Block13:
	xor eax,eax

 Block14:
	mov esp,ebp
	pop ebp
	ret
}
}
// MS_GetProcAddress
__SUB(000AB150, __cdecl, 145078,  void*, void*, const char*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x44
	mov dword ptr [ebp-4],0
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0x14],eax
	mov ecx,dword ptr [ebp-0x14]
	mov edx,dword ptr [ebp+8]
	add edx,dword ptr [ecx+0x3C]
	mov dword ptr [ebp-0x1C],edx
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [eax+0x78]
	mov dword ptr [ebp-8],ecx
	mov edx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [ebp-8]
	add eax,dword ptr [edx+0x7C]
	mov dword ptr [ebp-0x18],eax
	cmp dword ptr [ebp-8],0
	jne Block2

 Block1:
	mov eax,dword ptr [ebp-4]
	jmp Block28

 Block2:
	mov ecx,dword ptr [ebp+8]
	add ecx,dword ptr [ebp-8]
	mov dword ptr [ebp-0x10],ecx
	mov edx,dword ptr [ebp-0x10]
	mov eax,dword ptr [ebp+8]
	add eax,dword ptr [edx+0x1C]
	mov dword ptr [ebp-0x24],eax
	mov ecx,dword ptr [ebp-0x10]
	mov edx,dword ptr [ebp+8]
	add edx,dword ptr [ecx+0x20]
	mov dword ptr [ebp-0xC],edx
	mov eax,dword ptr [ebp-0x10]
	mov ecx,dword ptr [ebp+8]
	add ecx,dword ptr [eax+0x24]
	mov dword ptr [ebp-0x20],ecx
	mov dword ptr [ebp-0x28],0
	jmp Block4

 Block3:
	mov edx,dword ptr [ebp-0x28]
	add edx,1
	mov dword ptr [ebp-0x28],edx

 Block4:
	mov eax,dword ptr [ebp-0x10]
	mov ecx,dword ptr [ebp-0x28]
	cmp ecx,dword ptr [eax+0x14]
	jae Block27

 Block5:
	mov dword ptr [ebp-0x2C],0
	mov edx,dword ptr [ebp-0x28]
	mov eax,dword ptr [ebp-0x24]
	cmp dword ptr [eax+edx*4],0
	jne Block7

 Block6:
	jmp Block3

 Block7:
	mov dword ptr [ebp-0x30],0
	jmp Block9

 Block8:
	mov ecx,dword ptr [ebp-0x30]
	add ecx,1
	mov dword ptr [ebp-0x30],ecx

 Block9:
	mov edx,dword ptr [ebp-0x10]
	mov eax,dword ptr [ebp-0x30]
	cmp eax,dword ptr [edx+0x18]
	jae Block13

 Block10:
	mov ecx,dword ptr [ebp-0x30]
	mov edx,dword ptr [ebp-0x20]
	movzx eax,word ptr [edx+ecx*2]
	cmp eax,dword ptr [ebp-0x28]
	jne Block12

 Block11:
	mov ecx,dword ptr [ebp-0x30]
	mov edx,dword ptr [ebp-0xC]
	mov eax,dword ptr [ebp+8]
	add eax,dword ptr [edx+ecx*4]
	mov dword ptr [ebp-0x2C],eax
	jmp Block13

 Block12:
	jmp Block8

 Block13:
	cmp dword ptr [ebp-0x2C],0
	je Block26

 Block14:
	mov ecx,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x34],ecx
	mov edx,dword ptr [ebp-0x2C]
	mov dword ptr [ebp-0x38],edx

 Block15:
	mov eax,dword ptr [ebp-0x38]
	mov cl,byte ptr [eax]
	mov byte ptr [ebp-0x39],cl
	mov edx,dword ptr [ebp-0x34]
	cmp cl,byte ptr [edx]
	jne Block20

 Block16:
	cmp byte ptr [ebp-0x39],0
	je Block19

 Block17:
	mov eax,dword ptr [ebp-0x38]
	mov cl,byte ptr [eax+1]
	mov byte ptr [ebp-0x3A],cl
	mov edx,dword ptr [ebp-0x34]
	cmp cl,byte ptr [edx+1]
	jne Block20

 Block18:
	add dword ptr [ebp-0x38],2
	add dword ptr [ebp-0x34],2
	cmp byte ptr [ebp-0x3A],0
	jne Block15

 Block19:
	mov dword ptr [ebp-0x40],0
	jmp Block21

 Block20:
	sbb eax,eax
	sbb eax,0xFFFFFFFF
	mov dword ptr [ebp-0x40],eax

 Block21:
	mov ecx,dword ptr [ebp-0x40]
	mov dword ptr [ebp-0x44],ecx
	cmp dword ptr [ebp-0x44],0
	jne Block26

 Block22:
	mov edx,dword ptr [ebp-0x28]
	mov eax,dword ptr [ebp-0x24]
	mov ecx,dword ptr [eax+edx*4]
	cmp ecx,dword ptr [ebp-8]
	jb Block24

 Block23:
	mov edx,dword ptr [ebp-0x28]
	mov eax,dword ptr [ebp-0x24]
	mov ecx,dword ptr [eax+edx*4]
	cmp ecx,dword ptr [ebp-0x18]
	jb Block25

 Block24:
	mov edx,dword ptr [ebp-0x28]
	mov eax,dword ptr [ebp-0x24]
	mov ecx,dword ptr [ebp+8]
	add ecx,dword ptr [eax+edx*4]
	mov dword ptr [ebp-4],ecx

 Block25:
	jmp Block27

 Block26:
	jmp Block3

 Block27:
	mov eax,dword ptr [ebp-4]

 Block28:
	mov esp,ebp
	pop ebp
	ret
}
}
// MS_GetThreadContext
__SUB(000AB2E0, __cdecl, 145079,  int32_t, void*, _CONTEXT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,8
	jmp Block2

 Block2:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp dword ptr [_D_G_BISWOW64],0
	jne Block5

 Block3:
	cmp dword ptr [_D_G_NGTC_IDX],0
	je Block5

 Block4:
	push dword ptr [ebp+0xC]
	push dword ptr [ebp+8]
	mov eax,dword ptr [_D_G_NGTC_IDX]
	mov edx,esp
	int 0x2E
	add esp,8
	mov dword ptr [ebp-4],eax

 Block5:
	cmp dword ptr [ebp-4],0
	jl Block7

 Block6:
	mov eax,1
	jmp Block12

 Block7:
	mov eax,dword ptr [_D_PFN_NTGETCONTEXT]
	xor eax,dword ptr [_D_G_DWCRYPTKEY]
	mov dword ptr [ebp-8],eax
	mov ecx,dword ptr [ebp+0xC]
	push ecx
	mov edx,dword ptr [ebp+8]
	push edx
	call dword ptr [ebp-8]
	mov dword ptr [ebp-4],eax
	cmp dword ptr [ebp-4],0
	jl Block9

 Block8:
	mov eax,1
	jmp Block12

 Block9:
	jmp Block11

 Block11:
	xor eax,eax

 Block12:
	mov esp,ebp
	pop ebp
	ret
}
}
