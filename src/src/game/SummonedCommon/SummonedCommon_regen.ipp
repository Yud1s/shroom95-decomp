#include "regen.hpp"
// SummonedCommon.ipp
#include "SummonedCommon.hpp"

// GetTeslaCoilRect
__SUB(00358870, __cdecl, 88616,  tagRECT, NakedParam<ZRef<Triangle>>) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0x10]
	mov ecx,dword ptr [ebx+8]
	push esi
	mov esi,dword ptr [ebx]
	cmp esi,ecx
	push edi
	mov eax,esi
	jl Block2

 Block1:
	mov eax,ecx

 Block2:
	mov edx,dword ptr [ebx+0x10]
	cmp eax,edx
	push ebp
	mov ebp,eax
	jl Block4

 Block3:
	mov ebp,edx

 Block4:
	cmp ecx,esi
	mov eax,esi
	jl Block6

 Block5:
	mov eax,ecx

 Block6:
	cmp edx,eax
	jge Block8

 Block7:
	mov edx,eax

 Block8:
	mov edi,dword ptr [ebx+4]
	mov eax,dword ptr [ebx+0xC]
	cmp edi,eax
	mov ecx,edi
	jl Block10

 Block9:
	mov ecx,eax

 Block10:
	mov esi,dword ptr [ebx+0x14]
	cmp ecx,esi
	jl Block12

 Block11:
	mov ecx,esi

 Block12:
	cmp eax,edi
	jge Block14

 Block13:
	mov eax,edi

 Block14:
	cmp esi,eax
	jl Block16

 Block15:
	mov eax,esi

 Block16:
	mov esi,dword ptr [esp+0x14]
	sub ebp,0xA
	mov dword ptr [esi],ebp
	sub ecx,0xA
	lea edi,[ebx-0x10]
	add edx,0xA
	mov dword ptr [esi+4],ecx
	add eax,0xA
	lea ebx,[edi+4]
	mov dword ptr [esi+8],edx
	push ebx
	mov dword ptr [esi+0xC],eax
	call dword ptr [ZImports::_InterlockedDecrement]
	pop ebp
	test eax,eax
	jne Block19

 Block17:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block19

 Block18:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block19:
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	ret
}
}
