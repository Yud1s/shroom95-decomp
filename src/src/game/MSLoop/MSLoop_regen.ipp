#include "regen.hpp"
// MSLoop.ipp
#include "MSLoop.hpp"

// GetMultiSzIndexArray
__SUB(00269EC0, __cdecl, 137844,  char**, char*) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [ZImports::_lstrlenA]
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	xor edi,edi
	cmp byte ptr [esi],0
	mov ebx,esi
	je Block2

 Block1:
	push ebx
	call ebp
	lea ebx,[ebx+eax+1]
	inc edi
	cmp byte ptr [ebx],0
	jne Block1

 Block2:
	xor ecx,ecx
	lea eax,[edi+2]
	mov edx,4
	mul edx
	seto cl
	neg ecx
	or ecx,eax
	push ecx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	test ebx,ebx
	jne Block4

 Block3:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret

 Block4:
	mov dword ptr [ebx],esi
	add ebx,4
	test edi,edi
	je Block8

 Block5:
	xor edi,edi
	cmp byte ptr [esi],0
	je Block8

 Block6:
	lea ecx,[ecx]

 Block7:
	push esi
	mov dword ptr [ebx+edi*4],esi
	call ebp
	lea esi,[esi+eax+1]
	inc edi
	cmp byte ptr [esi],0
	jne Block7

 Block8:
	mov dword ptr [ebx+edi*4],0
	pop edi
	pop esi
	pop ebp
	mov eax,ebx
	pop ebx
	ret
}
}
// DelMultiSz
__SUB(0026A020, __cdecl, 137846,  void, char**) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	test esi,esi
	je Block4

 Block1:
	mov eax,dword ptr [esi-4]
	sub esi,4
	test eax,eax
	je Block3

 Block2:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block3:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block4:
	pop esi
	ret
}
}
// _tcsicmp
__SUB(00269D20, __cdecl, 80878,  int32_t, const char*, const char*) {
__asm {

 Block0:
	jmp  __mbsicmp
}
}
// GetDevMultiSz
__SUB(00269F40, __cdecl, 137845,  char**, void*, _SP_DEVINFO_DATA*, unsigned long) {
__asm {

 Block0:
	sub esp,8
	push esi
	push 0x2002
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	test esi,esi
	jne Block2

 Block1:
	pop esi
	add esp,8
	ret

 Block2:
	mov edx,dword ptr [esp+0x10]
	push ebx
	mov ebx,dword ptr [esp+0x1C]
	push ebp
	mov ebp,dword ptr [esp+0x1C]
	push edi
	lea eax,[esp+0x10]
	push eax
	push 0x2000
	push esi
	lea ecx,[esp+0x20]
	push ecx
	push ebx
	push ebp
	push edx
	call dword ptr [_D_SETUPDIGETDEVICE__3]
	test eax,eax
	jne Block8

 Block3:
	lea ebx,[ebx]

 Block4:
	call dword ptr [ZImports::_GetLastError]
	cmp eax,0x7A
	jne Block9

 Block5:
	cmp dword ptr [esp+0x14],7
	jne Block9

 Block6:
	mov edi,dword ptr [esp+0x10]
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	lea eax,[edi+2]
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	test esi,esi
	je Block11

 Block7:
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0x10]
	push ecx
	push edi
	push esi
	lea edx,[esp+0x20]
	push edx
	push ebx
	push ebp
	push eax
	call dword ptr [_D_SETUPDIGETDEVICE__3]
	test eax,eax
	je Block4

 Block8:
	mov ecx,dword ptr [esp+0x10]
	lea eax,[ecx+esi]
	push esi
	mov byte ptr [eax],0
	mov byte ptr [eax+1],0
	call GetMultiSzIndexArray
	add esp,4
	test eax,eax
	jne Block12

 Block9:
	test esi,esi
	je Block11

 Block10:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block11:
	xor eax,eax

 Block12:
	pop edi
	pop ebp
	pop ebx
	pop esi
	add esp,8
	ret
}
}
// WildCompareHwIds
__SUB(00269E80, __cdecl, 137843,  int32_t, char**, const none&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	test esi,esi
	je Block5

 Block1:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block5

 Block2:
	mov edi,dword ptr [esp+0x10]

 Block3:
	push edi
	push eax
	call WildCardMatch
	add esp,8
	test eax,eax
	jne Block6

 Block4:
	mov eax,dword ptr [esi+4]
	add esi,4
	test eax,eax
	jne Block3

 Block5:
	pop edi
	xor eax,eax
	pop esi
	ret

 Block6:
	pop edi
	mov eax,1
	pop esi
	ret
}
}
// Remove
__SUB(00269530, __cdecl, 137830,  int32_t, void*, _SP_DEVINFO_DATA*, unsigned long) {
__asm {

 Block0:
	sub esp,0x1FC
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x1F8],eax
	push esi
	mov esi,dword ptr [esp+0x208]
	push edi
	mov edi,dword ptr [esp+0x208]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],0x11F
	call dword ptr [_D_SETUPDIGETDEVICE]
	test eax,eax
	je Block5

 Block1:
	mov ecx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esi+0x14]
	push ecx
	push 0
	push 0xC8
	lea edx,[esp+0x144]
	push edx
	push eax
	call dword ptr [_D_CM_GET_DEVICE_ID]
	test eax,eax
	jne Block5

 Block2:
	push 0x10
	lea ecx,[esp+0xC]
	push ecx
	push esi
	push edi
	mov dword ptr [esp+0x18],8
	mov dword ptr [esp+0x1C],5
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x24],eax
	call dword ptr [_D_SETUPDISETCLASSI]
	test eax,eax
	je Block4

 Block3:
	push esi
	push edi
	push 5
	call dword ptr [_D_SETUPDICALLCLASS]
	test eax,eax
	jne Block5

 Block4:
	pop edi
	xor eax,eax
	pop esi
	mov ecx,dword ptr [esp+0x1F8]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x1FC
	ret

 Block5:
	mov ecx,dword ptr [esp+0x200]
	pop edi
	pop esi
	xor ecx,esp
	mov eax,1
	call __xsecurity_check_cookie
	add esp,0x1FC
	ret
}
}
// WildCardMatch
__SUB(00269D30, __cdecl, 137841,  int32_t, const char*, const none&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	mov eax,dword ptr [ebx+4]
	test eax,eax
	jne Block2

 Block1:
	mov ebx,dword ptr [ebx]
	mov eax,dword ptr [esp+8]
	push ebx
	push eax
	call __mbsicmp
	add esp,8
	neg eax
	sbb eax,eax
	inc eax
	pop ebx
	ret

 Block2:
	mov ecx,dword ptr [ebx]
	push ebp
	mov ebp,dword ptr [esp+0xC]
	sub eax,ecx
	push eax
	push ecx
	push ebp
	call __mbsnbicmp
	add esp,0xC
	test eax,eax
	je Block4

 Block3:
	pop ebp
	xor eax,eax
	pop ebx
	ret

 Block4:
	push esi
	push edi
	mov edi,dword ptr [ebx+4]
	mov al,byte ptr [edi]
	mov esi,edi
	sub esi,dword ptr [ebx]
	add esi,ebp
	test al,al
	je Block22

 Block5:
	cmp al,0x2A
	jne Block7

 Block6:
	push edi
	call dword ptr [ZImports::_CharNextA]
	mov edi,eax
	jmp Block21

 Block7:
	push 0x2A
	push edi
	call __mbschr
	add esp,8
	test eax,eax
	je Block23

 Block8:
	movsx ecx,byte ptr [edi]
	sub eax,edi
	push ecx
	mov ebp,eax
	call __ismbcalpha
	add esp,4
	test eax,eax
	je Block16

 Block9:
	movsx edx,byte ptr [edi]
	push edx
	call __mbctoupper
	mov bl,al
	movsx eax,byte ptr [edi]
	push eax
	call __mbctolower
	mov byte ptr [esp+0x20],al
	mov al,byte ptr [esi]
	add esp,8
	test al,al
	je Block24

 Block10:
	nop

 Block11:
	cmp al,bl
	je Block15

 Block12:
	cmp al,byte ptr [esp+0x18]
	je Block15

 Block13:
	push esi
	call dword ptr [ZImports::_CharNextA]
	mov esi,eax
	mov al,byte ptr [esi]
	test al,al
	jne Block11

 Block14:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret

 Block15:
	cmp byte ptr [esi],0
	jmp Block17

 Block16:
	movsx eax,byte ptr [edi]
	push eax
	push esi
	call __mbschr
	mov esi,eax
	add esp,8
	test esi,esi

 Block17:
	je Block24

 Block18:
	push ebp
	push edi
	push esi
	call __mbsnbicmp
	add esp,0xC
	test eax,eax
	je Block20

 Block19:
	push esi
	call dword ptr [ZImports::_CharNextA]
	mov esi,eax
	jmp Block21

 Block20:
	add esi,ebp
	add edi,ebp

 Block21:
	mov al,byte ptr [edi]
	test al,al
	jne Block5

 Block22:
	xor eax,eax
	cmp byte ptr [edi],al
	pop edi
	pop esi
	pop ebp
	sete al
	pop ebx
	ret

 Block23:
	mov ebp,dword ptr [ZImports::_lstrlenA]
	push esi
	call ebp
	push edi
	mov ebx,eax
	call ebp
	cmp ebx,eax
	jae Block25

 Block24:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret

 Block25:
	sub ebx,eax
	push edi
	add ebx,esi
	push ebx
	call __mbsicmp
	add esp,8
	pop edi
	neg eax
	pop esi
	sbb eax,eax
	pop ebp
	inc eax
	pop ebx
	ret
}
}
