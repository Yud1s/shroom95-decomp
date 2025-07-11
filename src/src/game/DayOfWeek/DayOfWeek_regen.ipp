#include "regen.hpp"
// DayOfWeek.ipp
#include "DayOfWeek.hpp"

// CDayOfWeek::SetCurrentDay
__SUB_CLASS_THIS(000F1BC0, __thiscall, 70670,  CDayOfWeek, void, uint16_t) {
__asm {

 Block0:
	mov ax,word ptr [esp+4]
	cmp ax,6
	ja Block2

 Block1:
	movzx eax,ax
	mov dword ptr [ecx+8],eax
	mov dword ptr [ecx+4],1

 Block2:
	ret 4
}
}
// CDayOfWeek::GetCurrentDay
__SUB_CLASS_THIS0(000F1B90, __thiscall, 70669,  CDayOfWeek, uint16_t) {
__asm {

 Block0:
	sub esp,0x10
	cmp dword ptr [ecx+4],0
	je Block2

 Block1:
	mov ax,word ptr [ecx+8]
	add esp,0x10
	ret

 Block2:
	lea eax,[esp]
	push eax
	call dword ptr [ZImports::_GetLocalTime]
	mov ax,word ptr [esp+4]
	add esp,0x10
	ret
}
}
