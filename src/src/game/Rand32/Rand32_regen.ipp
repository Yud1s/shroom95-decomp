#include "regen.hpp"
// Rand32.ipp
#include "Rand32.hpp"

// CRand32::CRand32
__SUB_CLASS_THIS0(002CBF80, __thiscall, 46419,  CRand32, void) {
__asm {

 Block0:
	push ecx
	push ebx
	push esi
	push edi
	mov edi,ecx
	lea ebx,[edi+0x18]
	mov dword ptr [ebx],0
	call timeGetTime
	mov esi,eax
	imul esi,0x343FD
	add esi,0x269EC3
	imul esi,0x343FD
	add esi,0x269EC3
	imul esi,0x343FD
	push ebx
	lea ecx,[esp+0x10]
	add esi,0x269EC3
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov eax,esi
	or eax,0x100000
	mov dword ptr [edi],eax
	mov dword ptr [edi+0xC],eax
	mov eax,esi
	or eax,0x1000
	or esi,0x10
	mov dword ptr [edi+4],eax
	mov dword ptr [edi+0x10],eax
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [edi+8],esi
	mov dword ptr [edi+0x14],esi
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block2

 Block1:
	mov dword ptr [eax],0

 Block2:
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret
}
}
// CRand32::Seed
__SUB_CLASS_THIS(00326420, __thiscall, 46421,  CRand32, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	lea eax,[esi+0x18]
	push eax
	lea ecx,[esp+8]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esi],eax
	mov dword ptr [esi+0xC],eax
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+0x10],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esi+8],eax
	mov dword ptr [esi+0x14],eax
	mov eax,dword ptr [esp+4]
	add dword ptr [eax+4],0xFFFFFFFF
	pop esi
	jne Block2

 Block1:
	mov dword ptr [eax],0

 Block2:
	pop ecx
	ret 0xC
}
}
// CRand32::Random
__SUB_CLASS_THIS0(00009A90, __thiscall, 46423,  CRand32, uint32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	push esi
	mov esi,ecx
	push edi
	lea eax,[esi+0x18]
	push eax
	lea ecx,[esp+0x10]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov eax,dword ptr [esi]
	mov edi,dword ptr [esi+4]
	mov ebx,dword ptr [esi+8]
	mov ecx,eax
	mov edx,eax
	shr edx,6
	mov dword ptr [esi+0xC],eax
	shl ecx,0xC
	xor ecx,edx
	mov edx,eax
	shl eax,0xC
	shr edx,0x13
	and ecx,0x1FFF
	xor ecx,edx
	xor ecx,eax
	mov edx,edi
	mov eax,edi
	shl eax,4
	shr edx,0x17
	xor edx,eax
	mov eax,edi
	shr eax,0x19
	mov dword ptr [esi+0x10],edi
	shl edi,4
	and edx,0x7F
	xor edx,eax
	xor edx,edi
	mov eax,ebx
	shl eax,0x11
	mov edi,ebx
	shr edi,8
	xor eax,edi
	and eax,0x1FFFFF
	mov edi,ebx
	mov dword ptr [esi+0x14],ebx
	shl edi,0x11
	xor eax,edi
	shr ebx,0xB
	xor eax,ebx
	mov dword ptr [esi+8],eax
	xor eax,edx
	mov dword ptr [esi],ecx
	xor eax,ecx
	mov ecx,dword ptr [esp+0xC]
	pop edi
	mov dword ptr [esi+4],edx
	add dword ptr [ecx+4],0xFFFFFFFF
	pop esi
	pop ebx
	jne Block2

 Block1:
	mov dword ptr [ecx],0

 Block2:
	pop ecx
	ret
}
}
