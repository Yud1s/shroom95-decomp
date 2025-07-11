#include "regen.hpp"
// Field_NoDragon.ipp
#include "Field_NoDragon.hpp"

// CField_NoDragon::CField_NoDragon
__SUB_CLASS_THIS0(0015C080, __thiscall, 143336,  CField_NoDragon, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CField_NoDragon::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_NoDragon::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_NoDragon::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_NoDragon::`vftable'{for `ZRefCounted'}
	mov eax,esi
	pop esi
	ret
}
}
// CField_NoDragon::GetFieldType
__SUB_CLASS_THIS0(0015C0B0, __thiscall, 143339,  CField_NoDragon, long) {
__asm {

 Block0:
	mov eax,0x1C
	ret
}
}
// CField_NoDragon::Init
__SUB_CLASS_THIS(0015C0E0, __thiscall, 143340,  CField_NoDragon, void, void*) {
__asm {

 Block0:
	jmp  CField::Init
}
}
// CField_NoDragon::~CField_NoDragon
__SUB_CLASS_THIS0(0015C0C0, __thiscall, 143338,  CField_NoDragon, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CField_NoDragon::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [ecx+4],offset CField_NoDragon::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [ecx+8],offset CField_NoDragon::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [ecx+0xC],offset CField_NoDragon::`vftable'{for `ZRefCounted'}
	jmp  CField::~CField
}
}
