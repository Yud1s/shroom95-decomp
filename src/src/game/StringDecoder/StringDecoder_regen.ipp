#include "regen.hpp"
// StringDecoder.ipp
#include "StringDecoder.hpp"

// StringPool::Key::~Key
__SUB_CLASS_THIS0(00346460, __thiscall, 88736,  StringPool::Key, void) {
__asm {

 Block0:
	jmp  ZArray<unsigned char>::RemoveAll
}
}
// rotatel_unsignedchar_
__SUB(00346270, __cdecl, 88725,  void, unsigned char*, uint32_t, uint32_t) {
__asm {

 Block0:
	sub esp,8
	push ebx
	mov ebx,dword ptr [esp+0x14]
	test ebx,ebx
	je Block26

 Block1:
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block26

 Block2:
	push esi
	mov esi,dword ptr [esp+0x14]
	push edi
	cmp ecx,8
	jb Block16

 Block3:
	mov eax,ecx
	shr eax,3
	xor edx,edx
	div ebx
	mov edi,edx
	test edi,edi
	jbe Block15

 Block4:
	push ebp
	push 1
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	test eax,eax
	je Block6

 Block5:
	mov ebp,eax
	mov byte ptr [eax],bl
	mov dword ptr [esp+0x20],ebp
	jmp Block7

 Block6:
	mov dword ptr [esp+0x20],0
	mov ebp,dword ptr [esp+0x20]

 Block7:
	test ebx,ebx
	jbe Block14

 Block8:
	mov ecx,ebp
	sub edi,ebp
	mov ebp,ebx
	jmp Block10

 Block10:
	lea eax,[edi+ecx]
	xor edx,edx
	div ebx
	inc ecx
	sub ebp,1
	mov al,byte ptr [edx+esi]
	mov byte ptr [ecx-1],al
	jne Block10

 Block11:
	mov ebp,dword ptr [esp+0x20]
	test ebx,ebx
	jbe Block14

 Block12:
	mov edi,ebp
	mov eax,esi
	sub edi,esi
	mov ecx,ebx

 Block13:
	mov dl,byte ptr [edi+eax]
	mov byte ptr [eax],dl
	inc eax
	sub ecx,1
	jne Block13

 Block14:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	mov ecx,dword ptr [esp+0x24]
	pop ebp

 Block15:
	and ecx,7
	mov dword ptr [esp+0x20],ecx
	je Block25

 Block16:
	mov ecx,8
	sub ecx,dword ptr [esp+0x20]
	xor dl,dl
	mov dword ptr [esp+0x10],ecx
	mov byte ptr [esp+0xF],dl
	cmp ebx,1
	jbe Block18

 Block17:
	mov dl,byte ptr [esi]
	shr dl,cl
	mov byte ptr [esp+0xF],dl

 Block18:
	xor eax,eax
	test ebx,ebx
	jbe Block24

 Block19:
	lea edi,[ebx-1]

 Block20:
	mov byte ptr [esp+0x1C],0
	cmp eax,edi
	je Block22

 Block21:
	mov dl,byte ptr [eax+esi+1]
	mov cl,byte ptr [esp+0x10]
	shr dl,cl
	mov byte ptr [esp+0x1C],dl

 Block22:
	mov dl,byte ptr [eax+esi]
	mov cl,byte ptr [esp+0x20]
	shl dl,cl
	inc eax
	or dl,byte ptr [esp+0x1C]
	mov byte ptr [eax+esi-1],dl
	cmp eax,ebx
	jb Block20

 Block23:
	mov dl,byte ptr [esp+0xF]

 Block24:
	or byte ptr [esi+ebx-1],dl

 Block25:
	pop edi
	pop esi

 Block26:
	pop ebx
	add esp,8
	ret
}
}
// _anon_Decode_char_
_SUB_EXCEPTION_HANDLER(346520)
__SUB(00346520, __cdecl, 88740,  void, ZXString<char>&, const unsigned char*, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_346520
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x28]
	push eax
	push ecx
	push edx
	lea ecx,[esp+0x1C]
	call StringPool::Key::_ctor_0
	mov ebx,dword ptr [esp+0x24]
	xor edi,edi
	push 1
	push edi
	mov ecx,ebx
	mov dword ptr [esp+0x24],edi
	call ZXString<char>::GetBuffer
	mov esi,eax
	cmp byte ptr [esi],0
	je Block6

 Block1:
	jmp Block3

 Block3:
	push edi
	lea ecx,[esp+0x14]
	call StringPool::Key::GetKey
	xor byte ptr [esi],al
	jne Block5

 Block4:
	mov byte ptr [esi],al

 Block5:
	inc esi
	inc edi
	cmp byte ptr [esi],0
	jne Block3

 Block6:
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// StringPool::GetString
__SUB_CLASS_THIS(00003B30, __thiscall, 107254,  StringPool, ZXString<char>*, ZXString<char>*, uint32_t) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	push esi
	mov esi,dword ptr [esp+0xC]
	push 0
	push eax
	push esi
	mov dword ptr [esp+0x10],0
	call StringPool::GetString_1
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// StringPool::StringPool
_SUB_EXCEPTION_HANDLER(3465D0)
__SUB_CLASS_THIS0(003465D0, __thiscall, 88751,  StringPool, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3465D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	lea eax,[esp+0x13]
	push eax
	push 0x1AE3
	mov dword ptr [esi],0
	call ZArray<ZXString<char> *>::_Alloc
	lea ecx,[esp+0x13]
	push ecx
	lea ebx,[esi+4]
	push 0x1AE3
	mov ecx,ebx
	mov dword ptr [esp+0x28],0
	mov dword ptr [ebx],0
	call ZArray<ZXString16 *>::_Alloc
	mov ecx,esi
	mov dword ptr [esi+8],0
	xor edi,edi
	call ZArray<ZXString<char> *>::GetCount
	test eax,eax
	jbe Block4

 Block1:
	jmp Block3

 Block3:
	mov edx,dword ptr [esi]
	mov dword ptr [edx+edi*4],0
	mov ecx,esi
	inc edi
	call ZArray<ZXString<char> *>::GetCount
	cmp edi,eax
	jb Block3

 Block4:
	xor eax,eax

 Block5:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block8

 Block6:
	cmp eax,dword ptr [ecx-4]
	jae Block8

 Block7:
	mov dword ptr [ecx+eax*4],0
	inc eax
	jmp Block5

 Block8:
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret
}
}
// StringPool::GetString
_SUB_EXCEPTION_HANDLER(346750)
__SUB_CLASS_THIS(00346750, __thiscall, 88755,  StringPool, ZXString<char>*, ZXString<char>*, uint32_t, char) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_346750
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	lea edi,[ebx+8]
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	mov ecx,edi
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x18],edi
	call ZFatalSection::Lock
	mov ebp,dword ptr [esp+0x34]
	mov eax,dword ptr [ebx]
	mov dword ptr [esp+0x28],esi
	cmp dword ptr [eax+ebp*4],esi
	jne Block8

 Block1:
	mov ecx,dword ptr [ebp*4+StringPool::ms_aString]
	movsx edx,byte ptr [ecx]
	push 4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x38],edx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x1C],esi
	mov byte ptr [esp+0x28],1
	test esi,esi
	je Block6

 Block2:
	mov ecx,dword ptr [ebp*4+StringPool::ms_aString]
	add ecx,1
	mov dword ptr [esi],0
	je Block7

 Block3:
	mov eax,ecx
	lea edi,[eax+1]

 Block4:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block4

 Block5:
	sub eax,edi
	mov edi,eax
	push edi
	push ecx
	push 0
	push edi
	mov ecx,esi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [esp+0x14]
	jmp Block7

 Block6:
	xor esi,esi

 Block7:
	mov eax,dword ptr [esp+0x34]
	push eax
	push 0x10
	push offset StringPool::ms_aKey
	push esi
	mov byte ptr [esp+0x38],0
	call _anon_DecodeHelper<char>::call
	mov ecx,dword ptr [ebx]
	add esp,0x10
	mov dword ptr [ecx+ebp*4],esi

 Block8:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+ebp*4]
	mov esi,dword ptr [esp+0x30]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	test edi,edi
	je Block11

 Block9:
	add dword ptr [edi+4],0xFFFFFFFF
	jne Block11

 Block10:
	mov dword ptr [edi],0

 Block11:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0xC
}
}
// StringPool::Key::Key
_SUB_EXCEPTION_HANDLER(346470)
__SUB_CLASS_THIS(00346470, __thiscall, 88738,  StringPool::Key, void, const unsigned char*, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_346470
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x10],edi
	mov ecx,dword ptr [esp+0x28]
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov ecx,edi
	mov dword ptr [edi],0
	call ZArray<unsigned char>::_Alloc
	mov ecx,edi
	mov dword ptr [esp+0x1C],0
	xor esi,esi
	call ZArray<unsigned char>::GetCount
	test eax,eax
	jbe Block3

 Block1:
	mov ebx,dword ptr [esp+0x24]
	lea ebx,[ebx]

 Block2:
	mov al,byte ptr [esi+ebx]
	mov edx,dword ptr [edi]
	mov byte ptr [esi+edx],al
	mov ecx,edi
	inc esi
	call ZArray<unsigned char>::GetCount
	cmp esi,eax
	jb Block2

 Block3:
	mov eax,dword ptr [edi]
	test eax,eax
	jne Block5

 Block4:
	xor ecx,ecx
	jmp Block6

 Block5:
	mov ecx,dword ptr [eax-4]

 Block6:
	mov edx,dword ptr [esp+0x2C]
	push edx
	push ecx
	push eax
	call rotatelHelper<unsigned char>::call
	add esp,0xC
	mov eax,edi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0xC
}
}
// StringPool::GetStringW
__SUB_CLASS_THIS(00003B60, __thiscall, 107256,  StringPool, ZXString16*, ZXString16*, uint32_t) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	push esi
	mov esi,dword ptr [esp+0xC]
	push 0
	push eax
	push esi
	mov dword ptr [esp+0x10],0
	call StringPool::GetString_2
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// StringPool::GetString
_SUB_EXCEPTION_HANDLER(346880)
__SUB_CLASS_THIS(00346880, __thiscall, 88770,  StringPool, ZXString16*, ZXString16*, uint32_t, wchar_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_346880
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
	mov esi,ecx
	lea ebp,[esi+8]
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	mov ecx,ebp
	mov dword ptr [esp+0x14],ebp
	call ZFatalSection::Lock
	mov ebx,dword ptr [esp+0x30]
	mov eax,dword ptr [esi+4]
	mov dword ptr [esp+0x24],edi
	cmp dword ptr [eax+ebx*4],edi
	jne Block6

 Block1:
	push edi
	push ebx
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,esi
	call StringPool::GetString_1
	push 4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x28],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	mov dword ptr [esp+0x18],edi
	mov byte ptr [esp+0x24],2
	test edi,edi
	je Block3

 Block2:
	mov edx,dword ptr [esp+0x30]
	push 0xFFFFFFFF
	push edx
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::AssignCharStr
	jmp Block4

 Block3:
	xor edi,edi

 Block4:
	mov eax,dword ptr [esi+4]
	mov dword ptr [eax+ebx*4],edi
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esi+4]
	mov ebx,dword ptr [ecx+ebx*4]
	mov esi,dword ptr [esp+0x2C]
	push ebx
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString16::op_assign
	mov eax,esi
	test ebp,ebp
	je Block9

 Block7:
	add dword ptr [ebp+4],0xFFFFFFFF
	jne Block9

 Block8:
	mov dword ptr [ebp],0

 Block9:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0xC
}
}
// StringPool::GetInstance
_SUB_EXCEPTION_HANDLER(3466A0)
__SUB0(003466A0, __cdecl, 88753,  StringPool&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3466A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov edi,dword ptr [ZImports::_InterlockedExchange]
	push 1
	push offset ClassLevelLockable<StringPool>::ms_nLocker
	call edi
	test eax,eax
	je Block2

 Block1:
	push 1
	call Sleep
	push 1
	push offset ClassLevelLockable<StringPool>::ms_nLocker
	call edi
	test eax,eax
	jne Block1

 Block2:
	mov esi,dword ptr [StringPool::ms_pInstance]
	mov dword ptr [esp+0x1C],0
	test esi,esi
	jne Block7

 Block3:
	push 0x10
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block5

 Block4:
	mov ecx,eax
	call StringPool::_ctor_0
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov esi,eax
	mov dword ptr [StringPool::ms_pInstance],esi

 Block7:
	push 0
	push offset ClassLevelLockable<StringPool>::ms_nLocker
	call edi
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// StringPool::GetBSTR
_SUB_EXCEPTION_HANDLER(4BB0)
__SUB_CLASS_THIS(00004BB0, __thiscall, 107257,  StringPool, Ztl_bstr_t*, Ztl_bstr_t*, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BB0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+8],0
	mov eax,dword ptr [esp+0x20]
	push eax
	lea edx,[esp+0x24]
	push edx
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x1C]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x18],1
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+8],1
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// StringPool::Key::GetKey
__SUB_CLASS_THIS(00346230, __thiscall, 88723,  StringPool::Key, unsigned char, uint32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx]
	push esi
	test ecx,ecx
	jne Block2

 Block1:
	mov eax,dword ptr [esp+8]
	xor esi,esi
	xor edx,edx
	div esi
	pop esi
	mov al,byte ptr [edx+ecx]
	ret 4

 Block2:
	mov esi,dword ptr [ecx-4]
	mov eax,dword ptr [esp+8]
	xor edx,edx
	div esi
	pop esi
	mov al,byte ptr [edx+ecx]
	ret 4
}
}
