#include "regen.hpp"
// StrUtl.ipp
#include "StrUtl.hpp"

// Util__IsEndWithJongSung
_SUB_EXCEPTION_HANDLER(348580)
__SUB(00348580, __cdecl, 6714,  int32_t, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_348580
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block2

 Block1:
	cmp byte ptr [eax],0
	jne Block5

 Block2:
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret

 Block5:
	push 0
	push eax
	call _strrchr
	add esp,8
	push eax
	mov eax,dword ptr [esp+0x24]
	push eax
	call CharPrevA
	lea ecx,[esp+0x20]
	push ecx
	push 2
	lea ecx,[esp+0x14]
	mov esi,eax
	mov dword ptr [esp+0x14],0
	call ZArray<unsigned short>::_Alloc
	mov edi,dword ptr [esp+0xC]
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push esi
	push 0
	push 0
	mov byte ptr [esp+0x30],1
	call MultiByteToWideChar
	movzx edx,word ptr [edi]
	push edx
	call Util::IsHanGeulWithJongSung
	add esp,4
	lea ecx,[esp+0xC]
	mov esi,eax
	mov byte ptr [esp+0x18],0
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// Util__AddJosa_EUN
_SUB_EXCEPTION_HANDLER(348820)
__SUB(00348820, __cdecl, 88652,  ZXString<char>*, ZXString<char>*, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_348820
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0xC],0
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	lea eax,[esp+0x38]
	push eax
	mov dword ptr [esp+0x30],1
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call Util::IsEndWithJongSung
	add esp,4
	test eax,eax
	je Block2

 Block1:
	lea ecx,[esp+0x1C]
	push 0x1A0E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x30],2
	mov dword ptr [esp+0x14],1
	call ZXString<char>::op_add_1
	mov dword ptr [esp+0x28],3
	mov ebx,3
	jmp Block3

 Block2:
	lea eax,[esp+0x14]
	push 0x1ABB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x30],4
	mov dword ptr [esp+0x14],4
	call ZXString<char>::op_add_1
	mov dword ptr [esp+0x28],5
	mov ebx,0xC

 Block3:
	mov edi,dword ptr [esp+0x30]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x10],ebx
	mov dword ptr [edi],0
	call ZXString<char>::op_assign
	or ebx,0x10
	mov dword ptr [esp+0xC],ebx
	mov dword ptr [esp+0x28],4
	test bl,8
	je Block6

 Block4:
	mov eax,dword ptr [esp+0x10]
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0xC],ebx
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov dword ptr [esp+0x28],3
	test bl,4
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x14]
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0xC],ebx
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov dword ptr [esp+0x28],2
	test bl,2
	je Block12

 Block10:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0xC],ebx
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov dword ptr [esp+0x28],1
	test bl,1
	je Block15

 Block13:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0xC],ebx
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,edi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop ebx
	add esp,0x20
	ret
}
}
// Util__StrSplit
_SUB_EXCEPTION_HANDLER(348680)
__SUB(00348680, __cdecl, 88651,  void, const char*, const char*, ZArray<ZXString<char> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_348680
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x14],0
	test edx,edx
	je Block4

 Block1:
	mov eax,edx
	lea esi,[eax+1]
	lea esp,[esp]

 Block2:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block2

 Block3:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push 0
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer

 Block4:
	mov edi,dword ptr [esp+0x34]
	mov ebp,dword ptr [esp+0x30]
	mov dword ptr [esp+0x24],0
	mov bl,1

 Block5:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block16

 Block6:
	cmp byte ptr [eax],0
	je Block16

 Block7:
	push 0
	push 0
	push ebp
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	lea ecx,[esp+0x14]
	test esi,esi
	jl Block15

 Block8:
	push esi
	lea eax,[esp+0x30]
	push eax
	call ZXString<char>::Left
	push 0
	push 0
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x2C],bl
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [eax]
	test eax,eax
	je Block11

 Block9:
	cmp byte ptr [eax],0
	je Block11

 Block10:
	lea ecx,[esp+0x2C]
	push ecx
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block11:
	push 0xFFFFFFFF
	inc esi
	push esi
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x20]
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x28],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x24],bl
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block5

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block5

 Block15:
	push 0
	push 0
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block16:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret
}
}
// Util__IsHanGeulWithJongSung
__SUB(00348520, __cdecl, 88649,  int32_t, wchar_t) {
__asm {

 Block0:
	movzx eax,word ptr [esp+4]
	sub eax,0xAC00
	cdq
	mov ecx,0x1C
	idiv ecx
	xor eax,eax
	test edx,edx
	setg al
	ret
}
}
