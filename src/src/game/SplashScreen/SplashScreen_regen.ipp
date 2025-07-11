#include "regen.hpp"
// SplashScreen.ipp
#include "SplashScreen.hpp"

// CSplashScreen::Log
__SUB_CLASS_THIS(003180B0, __thiscall, 77538,  CSplashScreen, void, const ZXString<char>&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+8]
	mov edx,dword ptr [ecx]
	push edx
	push 0
	push 0xC2
	push eax
	call dword ptr [ZImports::_SendMessageA]
	mov eax,dword ptr [esi]
	pop esi
	mov dword ptr [esp+4],eax
	jmp dword ptr [UpdateWindow]

 Block2:
	pop esi
	ret 4
}
}
