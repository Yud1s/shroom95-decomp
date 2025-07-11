#include "regen.hpp"
// NMInclude.ipp
#include "NMInclude.hpp"

// StringCopyWorkerA
__SUB(0026B0F0, __stdcall, 137769,  HRESULT, char*, uint32_t, uint32_t*, const char*, uint32_t) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push esi
	push edi
	mov edi,eax
	xor eax,eax
	xor esi,esi
	test ecx,ecx
	je Block6

 Block1:
	test ebp,ebp
	je Block5

 Block2:
	mov bl,byte ptr [edi]
	test bl,bl
	je Block5

 Block3:
	mov byte ptr [edx],bl
	dec ecx
	inc edx
	inc edi
	dec ebp
	inc esi
	test ecx,ecx
	jne Block1

 Block4:
	jmp Block6

 Block5:
	test ecx,ecx
	jne Block7

 Block6:
	dec edx
	dec esi
	mov eax,0x8007007A

 Block7:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [edx],0
	test ecx,ecx
	je Block9

 Block8:
	mov dword ptr [ecx],esi

 Block9:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// StringCchCopyA
__SUB(0026B720, __stdcall, 137773,  HRESULT, char*, uint32_t, const char*) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	xor eax,eax
	test edx,edx
	je Block2

 Block1:
	cmp edx,0x7FFFFFFF
	jbe Block3

 Block2:
	mov eax,0x80070057

 Block3:
	test eax,eax
	jl Block13

 Block4:
	mov ecx,dword ptr [esp+4]
	push ebx
	push esi
	xor eax,eax
	push edi
	mov esi,edx
	test edx,edx
	je Block11

 Block5:
	mov edi,dword ptr [esp+0x18]
	mov ebx,0x7FFFFFFE
	sub ebx,edx
	sub edi,ecx

 Block6:
	lea edx,[ebx+esi]
	test edx,edx
	je Block10

 Block7:
	mov dl,byte ptr [edi+ecx]
	test dl,dl
	je Block10

 Block8:
	mov byte ptr [ecx],dl
	inc ecx
	sub esi,1
	jne Block6

 Block9:
	pop edi
	dec ecx
	pop esi
	mov eax,0x8007007A
	mov byte ptr [ecx],0
	pop ebx
	ret 0xC

 Block10:
	test esi,esi
	jne Block12

 Block11:
	dec ecx
	mov eax,0x8007007A

 Block12:
	pop edi
	pop esi
	mov byte ptr [ecx],0
	pop ebx

 Block13:
	ret 0xC
}
}
