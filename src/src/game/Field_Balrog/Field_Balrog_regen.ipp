#include "regen.hpp"
// Field_Balrog.ipp
#include "Field_Balrog.hpp"

// CField_Balrog::CField_Balrog
__SUB_CLASS_THIS0(001497E0, __thiscall, 144014,  CField_Balrog, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CField_Balrog::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_Balrog::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_Balrog::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_Balrog::`vftable'{for `ZRefCounted'}
	mov eax,esi
	pop esi
	ret
}
}
// CField_Balrog::~CField_Balrog
__SUB_CLASS_THIS0(00149820, __thiscall, 144016,  CField_Balrog, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CField_Balrog::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [ecx+4],offset CField_Balrog::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [ecx+8],offset CField_Balrog::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [ecx+0xC],offset CField_Balrog::`vftable'{for `ZRefCounted'}
	jmp  CField::~CField
}
}
// CField_Balrog::GetFieldType
__SUB_CLASS_THIS0(00149810, __thiscall, 144017,  CField_Balrog, long) {
__asm {

 Block0:
	mov eax,0x12
	ret
}
}
