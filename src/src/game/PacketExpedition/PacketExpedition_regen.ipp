#include "regen.hpp"
// PacketExpedition.ipp
#include "PacketExpedition.hpp"

// operator___134506
__SUB(0028D6A0, __cdecl, 134506,  CInPacket&, CInPacket&, EXPEDITION&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	push esi
	mov esi,dword ptr [esp+8]
	push esi
	call EXPEDITION::Decode
	mov eax,esi
	pop esi
	ret
}
}
// operator___134510
_SUB_EXCEPTION_HANDLER(28D6E0)
__SUB(0028D6E0, __cdecl, 134510,  CInPacket&, CInPacket&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28D6E0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x18]
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,dword ptr [esp+0x1C]
	push eax
	mov dword ptr [esp+0x14],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret
}
}
// operator___134503
__SUB(0028D680, __cdecl, 134503,  CInPacket&, CInPacket&, PARTYMEMBER&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	push esi
	mov esi,dword ptr [esp+8]
	push esi
	call PARTYMEMBER::Decode
	mov eax,esi
	pop esi
	ret
}
}
// operator___134508
__SUB(0028D6C0, __cdecl, 134508,  CInPacket&, CInPacket&, long&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [ecx],eax
	mov eax,esi
	pop esi
	ret
}
}
