#include "regen.hpp"
// Wvs.ipp
#include "Wvs.hpp"

// ZtlTaskMemReallocImp
__SUB(005BF470, __stdcall, 4611,  void*, void*, unsigned long) {
__asm {

 Block0:
	push edi
	mov edi,dword ptr [esp+8]
	test edi,edi
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0xC]
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	pop edi
	ret 8

 Block2:
	mov eax,dword ptr [edi-4]
	push ebx
	test eax,eax
	jge Block4

 Block3:
	not eax

 Block4:
	mov ebx,eax
	mov eax,dword ptr [esp+0x10]
	cmp ebx,eax
	jb Block6

 Block5:
	pop ebx
	mov eax,edi
	pop edi
	ret 8

 Block6:
	push esi
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push ebx
	mov esi,eax
	push edi
	push esi
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	mov eax,esi
	pop esi
	pop ebx
	pop edi
	ret 8
}
}
// WinMain
// CeTracer::~CeTracer
__SUB_CLASS_THIS0(005BF370, __thiscall, 78833,  CeTracer, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	test eax,eax
	jbe Block2

 Block1:
	mov ecx,dword ptr [ecx+4]
	push ecx
	push eax
	call Start_eTracer
	add esp,8

 Block2:
	ret
}
}
