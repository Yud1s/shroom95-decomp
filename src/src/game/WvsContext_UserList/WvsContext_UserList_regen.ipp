#include "regen.hpp"
// WvsContext_UserList.ipp
#include "WvsContext_UserList.hpp"

// PARTYSERACH_SETTING::PARTYSERACH_SETTING
__SUB_CLASS_THIS0(0060FDE0, __thiscall, 44403,  PARTYSERACH_SETTING, void) {
__asm {

 Block0:
	call PARTYSERACH_SETTING::Clear
	mov eax,ecx
	ret
}
}
// InsertionSort_ZXString_char__Friend_GroupAscComp_S_
_SUB_EXCEPTION_HANDLER(6109E0)
__SUB(006109E0, __cdecl, 44406,  void, ZArray<ZXString<char> >&, int32_t, int32_t, Friend_GroupAscComp_S&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6109E0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	mov ebp,dword ptr [esp+0x2C]
	cmp ebp,dword ptr [esp+0x30]
	mov dword ptr [esp+0x20],eax
	mov ebx,ebp
	jg Block7

 Block1:
	mov edi,dword ptr [esp+0x28]
	nop

 Block2:
	mov eax,dword ptr [edi]
	lea ecx,[eax+ebx*4]
	push ecx
	lea ecx,[esp+0x18]
	mov esi,ebx
	call ZXString<char>::op_assign
	cmp ebx,ebp
	jle Block5

 Block3:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [esp+0x34]
	lea eax,[edx+esi*4-4]
	push eax
	lea eax,[esp+0x18]
	push eax
	call Friend_GroupAscComp_S::operator()
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [edi]
	lea ecx,[ecx+esi*4]
	lea edx,[ecx-4]
	push edx
	call ZXString<char>::op_assign
	dec esi
	cmp esi,ebp
	jg Block3

 Block5:
	mov ecx,dword ptr [edi]
	lea eax,[esp+0x14]
	push eax
	lea ecx,[ecx+esi*4]
	call ZXString<char>::op_assign
	inc ebx
	cmp ebx,dword ptr [esp+0x30]
	jle Block2

 Block6:
	mov eax,dword ptr [esp+0x14]

 Block7:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret
}
}
// is_online
__SUB(0060FD30, __cdecl, 44400,  int32_t, const GW_Friend&, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	cmp dword ptr [ecx],0
	je Block7

 Block1:
	mov al,byte ptr [ecx+0x11]
	test al,al
	je Block4

 Block2:
	cmp al,3
	je Block4

 Block3:
	cmp al,4
	jne Block7

 Block4:
	cmp dword ptr [ecx+0x12],0
	jl Block7

 Block5:
	cmp dword ptr [esp+8],0
	jne Block7

 Block6:
	mov eax,1
	ret

 Block7:
	xor eax,eax
	ret
}
}
// PARTYSERACH_SETTING::Clear
__SUB_CLASS_THIS0(0060FD60, __thiscall, 44402,  PARTYSERACH_SETTING, void) {
__asm {

 Block0:
	xor eax,eax
	mov dword ptr [ecx],1
	mov dword ptr [ecx+4],eax
	mov dword ptr [ecx+8],eax
	mov dword ptr [ecx+0xC],eax
	mov dword ptr [ecx+0x10],eax
	ret
}
}
