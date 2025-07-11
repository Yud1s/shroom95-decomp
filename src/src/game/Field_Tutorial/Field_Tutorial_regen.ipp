#include "regen.hpp"
// Field_Tutorial.ipp
#include "Field_Tutorial.hpp"

// CField_Tutorial::DecodeFieldSpecificData
__SUB_CLASS_THIS(00163830, __thiscall, 142890,  CField_Tutorial, void, CUser*, CInPacket&) {
__asm {

 Block0:
	sub esp,0xF0
	push edi
	push 0xF0
	lea eax,[esp+8]
	push 0
	push eax
	call _memset
	mov edx,dword ptr [esp+0x104]
	xor eax,eax
	mov ecx,0x3A
	lea edi,[esp+0x14]
	rep stosd
	mov ecx,dword ptr [edx+0xA5]
	mov eax,dword ptr [edx+0xD1]
	mov dword ptr [esp+0x10],ecx
	add esp,0xC
	lea ecx,[esp+4]
	push ecx
	push 1
	lea ecx,[edx+0x88]
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x20],0x100DB1
	mov dword ptr [esp+0x10],0xF4C42
	call CAvatar::ForcingAppearance
	pop edi
	add esp,0xF0
	ret 8
}
}
// CField_Tutorial::CField_Tutorial
__SUB_CLASS_THIS0(00163800, __thiscall, 142886,  CField_Tutorial, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CField_Tutorial::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_Tutorial::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_Tutorial::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_Tutorial::`vftable'{for `ZRefCounted'}
	mov eax,esi
	pop esi
	ret
}
}
