#include "regen.hpp"
// Field_DynamicFoothold.ipp
#include "Field_DynamicFoothold.hpp"

// CField_DynamicFoothold::GetFieldType
__SUB_CLASS_THIS0(00151020, __thiscall, 143758,  CField_DynamicFoothold, long) {
__asm {

 Block0:
	mov eax,0x1D
	ret
}
}
// CField_DynamicFoothold::~CField_DynamicFoothold
__SUB_CLASS_THIS0(00151030, __thiscall, 143757,  CField_DynamicFoothold, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CField_DynamicFoothold::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [ecx+4],offset CField_DynamicFoothold::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [ecx+8],offset CField_DynamicFoothold::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [ecx+0xC],offset CField_DynamicFoothold::`vftable'{for `ZRefCounted'}
	jmp  CField::~CField
}
}
// CField_DynamicFoothold::Init
__SUB_CLASS_THIS(00151050, __thiscall, 143759,  CField_DynamicFoothold, void, void*) {
__asm {

 Block0:
	jmp  CField::Init
}
}
// CField_DynamicFoothold::CField_DynamicFoothold
__SUB_CLASS_THIS0(00150FF0, __thiscall, 143755,  CField_DynamicFoothold, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CField_DynamicFoothold::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_DynamicFoothold::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_DynamicFoothold::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_DynamicFoothold::`vftable'{for `ZRefCounted'}
	mov eax,esi
	pop esi
	ret
}
}
