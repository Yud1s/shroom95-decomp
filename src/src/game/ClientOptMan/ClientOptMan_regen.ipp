#include "regen.hpp"
// ClientOptMan.ipp
#include "ClientOptMan.hpp"

// CClientOptMan::GetOpt
__SUB_CLASS_THIS(000AC700, __thiscall, 77883,  CClientOptMan, long, unsigned long) {
__asm {

 Block0:
	push ecx
	lea eax,[esp]
	push eax
	lea edx,[esp+0xC]
	push edx
	add ecx,4
	mov dword ptr [esp+8],0
	call ZMap<unsigned long, long, unsigned long>::GetAt
	neg eax
	sbb eax,eax
	and eax,dword ptr [esp]
	pop ecx
	ret 4
}
}
// CClientOptMan::~CClientOptMan
_SUB_EXCEPTION_HANDLER(ACAB0)
__SUB_CLASS_THIS0(000ACAB0, __thiscall, 77881,  CClientOptMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_ACAB0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+4],ecx
	int 3// TODO: 	mov dword ptr [ecx],offset CClientOptMan::`vftable'
	add ecx,4
	mov dword ptr [esp+0x10],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, long, unsigned long>::`vftable'
	call ZMap<unsigned long, long, unsigned long>::RemoveAll
	mov dword ptr [TSingleton<CClientOptMan>::ms_pInstance],0
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret
}
}
// CClientOptMan::DecodeOpt
__SUB_CLASS_THIS(000ACB30, __thiscall, 77882,  CClientOptMan, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	lea edi,[ecx+4]
	mov ecx,edi
	call ZMap<unsigned long, long, unsigned long>::RemoveAll
	mov esi,dword ptr [esp+0x10]
	mov ecx,esi
	call CInPacket::Decode2
	movzx eax,ax
	test ax,ax
	je Block6

 Block1:
	xor ecx,ecx
	cmp cx,ax
	jae Block6

 Block2:
	push ebx
	movzx ebx,ax
	jmp Block4

 Block4:
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0xC],eax
	call CInPacket::Decode4
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x14],eax
	push edx
	lea eax,[esp+0x10]
	push eax
	mov ecx,edi
	call ZMap<unsigned long, long, unsigned long>::Insert
	sub ebx,1
	jne Block4

 Block5:
	pop ebx

 Block6:
	pop edi
	pop esi
	pop ecx
	ret 4
}
}
// CClientOptMan::CClientOptMan
__SUB_CLASS_THIS0(000ACA70, __thiscall, 77879,  CClientOptMan, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+4]
	xor eax,eax
	cmp ecx,eax
	je Block2

 Block1:
	lea edx,[ecx-4]
	mov dword ptr [TSingleton<CClientOptMan>::ms_pInstance],edx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CClientOptMan>::ms_pInstance],eax

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CClientOptMan::`vftable'
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, long, unsigned long>::`vftable'
	mov dword ptr [ecx+4],eax
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],eax
	call ZMap<unsigned long, long, unsigned long>::_CalcAutoGrow
	mov eax,esi
	pop esi
	ret
}
}
