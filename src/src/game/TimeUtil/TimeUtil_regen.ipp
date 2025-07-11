#include "regen.hpp"
// TimeUtil.ipp
#include "TimeUtil.hpp"

// Util__FT2DAY
__SUB(00360190, __cdecl, 88477,  long, NakedParam<_FILETIME>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esp+4]
	push eax
	push ecx
	call Util::FT2ULL
	add esp,8
	push 0xC9
	push 0x2A69C000
	push edx
	push eax
	call __aulldiv
	ret
}
}
// Util__FTSubtract
__SUB(00360030, __cdecl, 88474,  void, const _FILETIME&, const _FILETIME&, long*, long*, long*, long*) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	mov eax,dword ptr [ebx+4]
	push ebp
	mov ebp,dword ptr [esp+0x10]
	mov edx,dword ptr [ebp+4]
	push esi
	push edi
	xor ecx,ecx
	xor esi,esi
	push 1
	sub eax,edx
	push esi
	sbb ecx,esi
	push ecx
	push eax
	call __allmul
	mov esi,eax
	mov eax,dword ptr [ebp]
	xor ecx,ecx
	sub esi,eax
	mov edi,edx
	mov edx,dword ptr [ebx]
	mov ebx,dword ptr [esp+0x1C]
	sbb edi,ecx
	xor eax,eax
	add esi,edx
	adc edi,eax
	test ebx,ebx
	je Block2

 Block1:
	push 0xC9
	push 0x2A69C000
	push edi
	push esi
	call __aulldiv
	mov dword ptr [ebx],eax

 Block2:
	mov ebx,dword ptr [esp+0x20]
	test ebx,ebx
	je Block4

 Block3:
	push 8
	push 0x61C46800
	push edi
	push esi
	call __aulldiv
	push 0
	push 0x18
	push edx
	push eax
	call __aullrem
	mov dword ptr [ebx],eax

 Block4:
	mov ebx,dword ptr [esp+0x24]
	test ebx,ebx
	je Block6

 Block5:
	push 0
	push 0x23C34600
	push edi
	push esi
	call __aulldiv
	push 0
	push 0x3C
	push edx
	push eax
	call __aullrem
	mov dword ptr [ebx],eax

 Block6:
	mov ebx,dword ptr [esp+0x28]
	test ebx,ebx
	je Block8

 Block7:
	push 0
	push 0x989680
	push edi
	push esi
	call __aulldiv
	push 0
	push 0x3C
	push edx
	push eax
	call __aullrem
	mov dword ptr [ebx],eax

 Block8:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// Util__FTDateFromStr
__SUB(00360210, __cdecl, 88479,  _FILETIME, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	sub esp,0x18
	xor eax,eax
	push esi
	push edi
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x1C],eax
	lea eax,[esp+0x16]
	push eax
	mov eax,dword ptr [esp+0x28]
	lea ecx,[esp+0x16]
	push ecx
	lea edx,[esp+0x18]
	push edx
	push offset _S_04D02D02D
	push eax
	call _sscanf
	add esp,0x14
	lea ecx,[esp+8]
	push ecx
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_SystemTimeToFileTime]
	mov eax,dword ptr [esp+0x24]
	mov esi,dword ptr [esp+8]
	mov edi,dword ptr [esp+0xC]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov edx,edi
	pop edi
	mov eax,esi
	pop esi
	add esp,0x18
	ret
}
}
// Util__FTAddDay
__SUB(0035FFE0, __cdecl, 88472,  _FILETIME, const _FILETIME&, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push ebx
	imul eax,0x15180
	push esi
	push edi
	push 0
	cdq
	push 0x989680
	push edx
	push eax
	call __allmul
	mov ebx,dword ptr [esp+0x10]
	push 1
	push 0
	mov esi,eax
	mov eax,dword ptr [ebx+4]
	push 0
	push eax
	mov edi,edx
	call __allmul
	mov ecx,dword ptr [ebx]
	add esi,eax
	adc edi,edx
	xor edx,edx
	add esi,ecx
	adc edi,edx
	mov edx,edi
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	ret
}
}
// Util__STGetNow
__SUB0(00360120, __cdecl, 88476,  _SYSTEMTIME) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block3

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block3

 Block2:
	lea eax,[esp+4]
	push eax
	mov ecx,esi
	call CField::GetCorrectTime
	mov edx,dword ptr [eax]
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [ecx],edx
	mov edx,dword ptr [eax+4]
	mov dword ptr [ecx+4],edx
	mov edx,dword ptr [eax+8]
	mov dword ptr [ecx+8],edx
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [ecx+0xC],eax
	mov eax,ecx
	pop esi
	add esp,0x10
	ret

 Block3:
	mov esi,dword ptr [esp+0x18]
	push esi
	call dword ptr [ZImports::_GetLocalTime]
	mov eax,esi
	pop esi
	add esp,0x10
	ret
}
}
// Util__FT2ULL
__SUB(00360100, __cdecl, 88475,  uint64_t, NakedParam<_FILETIME>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	push 1
	push 0
	push 0
	push eax
	call __allmul
	mov ecx,dword ptr [esp+8]
	xor esi,esi
	add eax,ecx
	adc edx,esi
	pop esi
	ret
}
}
// Util__FTGetNow
__SUB0(003601C0, __cdecl, 88478,  _FILETIME) {
__asm {

 Block0:
	sub esp,0x28
	lea eax,[esp+0x18]
	push eax
	call Util::STGetNow
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0xC],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x10],edx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esp+0x14],ecx
	mov edx,dword ptr [eax+0xC]
	add esp,4
	lea eax,[esp]
	push eax
	lea ecx,[esp+0xC]
	push ecx
	mov dword ptr [esp+0x1C],edx
	call dword ptr [ZImports::_SystemTimeToFileTime]
	mov eax,dword ptr [esp]
	mov edx,dword ptr [esp+4]
	add esp,0x28
	ret
}
}
