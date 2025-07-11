#include "regen.hpp"
// Field_ShowaBath.ipp
#include "Field_ShowaBath.hpp"

// CField_ShowaBath::CField_ShowaBath
__SUB_CLASS_THIS0(0015FF40, __thiscall, 143260,  CField_ShowaBath, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CField_ShowaBath::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_ShowaBath::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_ShowaBath::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_ShowaBath::`vftable'{for `ZRefCounted'}
	mov eax,esi
	pop esi
	ret
}
}
// CField_ShowaBath::DecodeFieldSpecificData
__SUB_CLASS_THIS(0015FF70, __thiscall, 143264,  CField_ShowaBath, void, CUser*, CInPacket&) {
__asm {

 Block0:
	sub esp,0xF0
	push esi
	push edi
	push 0xF0
	lea eax,[esp+0xC]
	push 0
	push eax
	call _memset
	mov esi,dword ptr [esp+0x108]
	movzx edx,byte ptr [esi+0x98]
	mov ecx,dword ptr [esi+0xA5]
	add esp,0xC
	neg edx
	sbb edx,edx
	mov dword ptr [esp+8],ecx
	xor eax,eax
	and edx,0x3E6
	mov ecx,0x3A
	lea edi,[esp+0xC]
	rep stosd
	mov eax,dword ptr [esi+0xB9]
	add edx,0x1005F4
	cmp eax,edx
	jne Block2

 Block1:
	mov dword ptr [esp+0x1C],eax

 Block2:
	add esi,0x88
	mov ecx,esi
	call CAvatar::TakeOffWeapon
	lea edx,[esp+8]
	push edx
	push 1
	mov ecx,esi
	call CAvatar::ForcingAppearance
	pop edi
	pop esi
	add esp,0xF0
	ret 8
}
}
