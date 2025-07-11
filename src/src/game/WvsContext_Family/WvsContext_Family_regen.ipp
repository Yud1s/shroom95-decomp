#include "regen.hpp"
// WvsContext_Family.ipp
#include "WvsContext_Family.hpp"

// Privilege::Decode
__SUB_CLASS_THIS(00609780, __thiscall, 7942,  Privilege, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode1
	xor ecx,ecx
	mov byte ptr [esi+4],al
	cmp al,cl
	je Block2

 Block1:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+8],eax
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0xC],eax
	call CInPacket::Decode4
	push edi
	mov dword ptr [esi+0x10],eax
	call _anon_DecodeTime_1
	add esp,4
	pop edi
	mov dword ptr [esi],eax
	pop esi
	ret 4

 Block2:
	pop edi
	mov dword ptr [esi],ecx
	mov byte ptr [esi+4],cl
	mov dword ptr [esi+8],ecx
	mov dword ptr [esi+0xC],ecx
	mov dword ptr [esi+0x10],ecx
	pop esi
	ret 4
}
}
// PrivilegeItem::~PrivilegeItem
_SUB_EXCEPTION_HANDLER(609A70)
__SUB_CLASS_THIS0(00609A70, __thiscall, 45768,  PrivilegeItem, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_609A70
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
	mov eax,dword ptr [esi+0x1C]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x18]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
