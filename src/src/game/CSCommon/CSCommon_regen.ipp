#include "regen.hpp"
// CSCommon.ipp
#include "CSCommon.hpp"

// slashcmd_check_with_subcmd
_SUB_EXCEPTION_HANDLER(BAC10)
__SUB(000BAC10, __cdecl, 145047,  int32_t, NakedParam<ZXString<char>>, const char*, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BAC10
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
	mov edi,dword ptr [esp+0x38]
	xor ebx,ebx
	push offset _S_
	mov ecx,edi
	mov dword ptr [esp+0x2C],ebx
	call ZXString<char>::AssignCStr
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esp+0x34]
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x2C],2
	call ZXString<char>::AssignCStr
	push 1
	push offset _S___2
	lea ecx,[esp+0x20]
	call ZXString<char>::_Cat
	mov ebp,dword ptr [esp+0x18]
	cmp ebp,ebx
	je Block2

 Block1:
	mov esi,dword ptr [ebp-4]
	jmp Block3

 Block2:
	xor esi,esi

 Block3:
	mov ecx,dword ptr [esp+0x30]
	cmp ecx,ebx
	je Block5

 Block4:
	mov eax,dword ptr [ecx-4]
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	cmp eax,esi
	jg Block12

 Block7:
	mov byte ptr [esp+0x28],bl
	cmp ebp,ebx
	je Block9

 Block8:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	mov ecx,dword ptr [esp+0x34]
	add esp,4

 Block9:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp ecx,ebx
	je Block11

 Block10:
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	add esp,4

 Block11:
	xor eax,eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret

 Block12:
	push esi
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x38]
	call ZXString<char>::Left
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],2
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	push ebp
	lea ecx,[esp+0x18]
	call ZXString<char>::CompareNoCase
	test eax,eax
	je Block21

 Block15:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],1
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov byte ptr [esp+0x28],bl
	cmp ebp,ebx
	je Block19

 Block18:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block11

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret

 Block21:
	push 0xFFFFFFFF
	push esi
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esp+0x3C]
	call ZXString<char>::Mid
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x2C],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],2
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],1
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov byte ptr [esp+0x28],bl
	cmp ebp,ebx
	je Block27

 Block26:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov eax,1
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret
}
}
// ACTIONDATA::ACTIONDATA
_SUB_EXCEPTION_HANDLER(B88D0)
__SUB_CLASS_THIS(000B88D0, __thiscall, 117586,  ACTIONDATA, void, const ACTIONDATA&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B88D0
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
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	mov edi,dword ptr [esp+0x20]
	mov eax,dword ptr [edi]
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,dword ptr [edi+4]
	mov dword ptr [esi+4],eax
	mov ecx,dword ptr [edi+8]
	mov dword ptr [esi+8],ecx
	mov edx,dword ptr [edi+0xC]
	mov dword ptr [esi+0xC],edx
	mov eax,dword ptr [edi+0x10]
	add edi,0x14
	lea ecx,[esi+0x14]
	mov dword ptr [esi+0x10],eax
	push edi
	mov dword ptr [esp+0x1C],0
	mov dword ptr [ecx],0
	call ZArray<ACTIONDATA::PIECE>::operator=
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// slashcmd_check
_SUB_EXCEPTION_HANDLER(B8610)
__SUB(000B8610, __cdecl, 145042,  int32_t, NakedParam<ZXString<char>>, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B8610
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block5

 Block1:
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jne Block5

 Block2:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,1
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret

 Block5:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	xor eax,eax
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret
}
}
// ACTIONDATA::~ACTIONDATA
_SUB_EXCEPTION_HANDLER(B8870)
__SUB_CLASS_THIS0(000B8870, __thiscall, 117590,  ACTIONDATA, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B8870
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+8],esi
	lea ecx,[esi+0x14]
	mov dword ptr [esp+0x14],0
	call ZArray<ACTIONDATA::PIECE>::RemoveAll
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// slashcmd_check_with_subcmd3
_SUB_EXCEPTION_HANDLER(BB190)
__SUB(000BB190, __cdecl, 145051,  int32_t, NakedParam<ZXString<char>>, const char*, ZXString<char>&, ZXString<char>&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BB190
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	push 1
	push offset _S___2
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x3C],edi
	call ZXString<char>::_Cat
	push edi
	push 0x20
	lea ecx,[esp+0x44]
	call ZXString<char>::Find__1
	mov esi,eax
	cmp esi,edi
	jl Block23

 Block1:
	mov ebp,dword ptr [esp+0x4C]

 Block2:
	test edi,edi
	jne Block5

 Block3:
	push esi
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x44]
	call ZXString<char>::Left
	mov ecx,dword ptr [esp+0x40]
	or dword ptr [esp+0x14],1
	push ecx
	mov ecx,eax
	call ZXString<char>::Compare
	test eax,eax
	je Block5

 Block4:
	mov bl,1
	jmp Block6

 Block5:
	xor bl,bl

 Block6:
	test byte ptr [esp+0x14],1
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x18]
	and dword ptr [esp+0x14],0xFFFFFFFE
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	test bl,bl
	jne Block26

 Block10:
	cmp edi,1
	jne Block13

 Block11:
	push esi
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x44]
	call ZXString<char>::Left
	mov ecx,dword ptr [esp+0x44]
	push eax
	mov byte ptr [esp+0x38],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x34],bl
	test eax,eax
	je Block20

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block20

 Block13:
	cmp edi,2
	jne Block16

 Block14:
	push esi
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x44]
	call ZXString<char>::Left
	mov ecx,dword ptr [esp+0x48]
	push eax
	mov byte ptr [esp+0x38],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x34],0
	test eax,eax
	je Block20

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block20

 Block16:
	cmp edi,3
	jne Block19

 Block17:
	push esi
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esp+0x44]
	call ZXString<char>::Left
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x38],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x34],0
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block20

 Block19:
	cmp edi,4
	je Block26

 Block20:
	push 0xFFFFFFFF
	inc esi
	push esi
	lea edx,[esp+0x30]
	push edx
	lea ecx,[esp+0x48]
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x38],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x34],0
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	push 0
	push 0x20
	lea ecx,[esp+0x44]
	inc edi
	call ZXString<char>::Find__1
	mov esi,eax
	test esi,esi
	jge Block2

 Block23:
	xor eax,eax
	cmp edi,4
	sete al
	mov dword ptr [esp+0x34],0xFFFFFFFF
	mov esi,eax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov eax,esi
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block26:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	xor eax,eax
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// get_action_code_from_name
__SUB(000BA950, __cdecl, 145045,  long, NakedParam<Ztl_bstr_t>) {
__asm {

 Block0:
	push esi
	push edi
	xor edi,edi
	mov esi,offset ActionData::m_saCharacterActions
	lea esp,[esp]

 Block1:
	lea eax,[esp+0xC]
	push eax
	mov ecx,esi
	call _xbstr_t::operator==
	test al,al
	jne Block12

 Block2:
	add esi,0x18
	inc edi
	cmp esi,offset ActionData::m_saMorphActions
	jl Block1

 Block3:
	mov esi,dword ptr [esp+0xC]
	test esi,esi
	je Block11

 Block4:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block5:
	test esi,esi
	je Block11

 Block6:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block8:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block10

 Block9:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block10:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block11:
	pop edi
	or eax,0xFFFFFFFF
	pop esi
	ret

 Block12:
	mov esi,dword ptr [esp+0xC]
	test esi,esi
	je Block20

 Block13:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block20

 Block14:
	test esi,esi
	je Block20

 Block15:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block17:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block19

 Block18:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block19:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block20:
	mov eax,edi
	pop edi
	pop esi
	ret
}
}
// get_skill_root_from_job
__SUB(000BA830, __cdecl, 145043,  void, long, ZArray<long>&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push esi
	call get_job_name
	add esp,4
	test eax,eax
	je Block8

 Block1:
	mov eax,0x10624DD3
	imul esi
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,ecx
	imul eax,0x3E8
	mov edx,esi
	sub edx,eax
	mov eax,0x51EB851F
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	je Block8

 Block2:
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push edi
	lea ecx,[ecx+ecx*4]
	lea edi,[eax+ecx*2]
	push 0xFFFFFFFF
	imul edi,0x64
	mov ecx,ebp
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],edi
	mov eax,0x51EB851F
	imul esi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x64
	mov ecx,esi
	sub ecx,eax
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	je Block7

 Block3:
	lea ecx,[eax+eax*4]
	push ebx
	lea edi,[edi+ecx*2]
	push 0xFFFFFFFF
	mov ecx,ebp
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],edi
	mov eax,0x66666667
	imul esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*4]
	add edx,edx
	sub esi,edx
	mov ebx,1
	mov edi,edi

 Block4:
	cmp esi,ebx
	jl Block6

 Block5:
	push 0xFFFFFFFF
	mov ecx,ebp
	inc edi
	call ZArray<long>::InsertBefore
	inc ebx
	cmp ebx,8
	mov dword ptr [eax],edi
	jle Block4

 Block6:
	pop ebx

 Block7:
	pop edi
	pop ebp

 Block8:
	pop esi
	ret
}
}
// ACTIONDATA::operator=
__SUB_CLASS_THIS(00512360, __thiscall, 82617,  ACTIONDATA, ACTIONDATA&, const ACTIONDATA&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x18
	mov dword ptr [ebp-0x18],ecx
	mov eax,dword ptr [ebp+8]
	push eax
	mov ecx,dword ptr [ebp-0x18]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [ebp-0x18]
	mov edx,dword ptr [ebp+8]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ecx+4],eax
	mov ecx,dword ptr [ebp-0x18]
	mov edx,dword ptr [ebp+8]
	mov eax,dword ptr [edx+8]
	mov dword ptr [ecx+8],eax
	mov ecx,dword ptr [ebp-0x18]
	mov edx,dword ptr [ebp+8]
	mov eax,dword ptr [edx+0xC]
	mov dword ptr [ecx+0xC],eax
	mov ecx,dword ptr [ebp-0x18]
	mov edx,dword ptr [ebp+8]
	mov eax,dword ptr [edx+0x10]
	mov dword ptr [ecx+0x10],eax
	mov ecx,dword ptr [ebp+8]
	add ecx,0x14
	push ecx
	mov ecx,dword ptr [ebp-0x18]
	add ecx,0x14
	call ZArray<ACTIONDATA::PIECE>::operator=
	mov eax,dword ptr [ebp-0x18]
	mov esp,ebp
	pop ebp
	ret 4
}
}
// get_action_name_from_code
__SUB(000BA910, __cdecl, 145044,  Ztl_bstr_t*, Ztl_bstr_t*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	lea eax,[eax+eax*2]
	mov eax,dword ptr [eax*8+ActionData::m_saCharacterActions]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret
}
}
// slashcmd_check_with_subcmd2
_SUB_EXCEPTION_HANDLER(BAE30)
__SUB(000BAE30, __cdecl, 145049,  int32_t, NakedParam<ZXString<char>>, const char*, ZXString<char>&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BAE30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov ebp,dword ptr [esp+0x40]
	xor esi,esi
	push offset _S_
	mov ecx,ebp
	mov dword ptr [esp+0x34],esi
	call ZXString<char>::AssignCStr
	mov dword ptr [esp+0x20],esi
	mov dword ptr [esp+0x1C],esi
	mov dword ptr [esp+0x18],esi
	mov eax,dword ptr [esp+0x3C]
	mov bl,3
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x34],bl
	call ZXString<char>::AssignCStr
	push 1
	push offset _S___2
	lea ecx,[esp+0x28]
	call ZXString<char>::_Cat
	mov edi,dword ptr [esp+0x20]
	cmp edi,esi
	je Block2

 Block1:
	mov esi,dword ptr [edi-4]

 Block2:
	mov ecx,dword ptr [esp+0x38]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx-4]
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	cmp eax,esi
	jg Block13

 Block6:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],2
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov ecx,dword ptr [esp+0x3C]
	add esp,4

 Block8:
	mov byte ptr [esp+0x30],0
	test edi,edi
	je Block10

 Block9:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	mov ecx,dword ptr [esp+0x3C]
	add esp,4

 Block10:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test ecx,ecx
	je Block12

 Block11:
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	add esp,4

 Block12:
	xor eax,eax
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret

 Block13:
	push esi
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esp+0x40]
	call ZXString<char>::Left
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x34],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x30],bl
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	push edi
	lea ecx,[esp+0x20]
	call ZXString<char>::CompareNoCase
	test eax,eax
	je Block24

 Block16:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],2
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x30],1
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov byte ptr [esp+0x30],0
	test edi,edi
	je Block22

 Block21:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block12

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret

 Block24:
	push 0xFFFFFFFF
	push esi
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esp+0x44]
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x30],bl
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	push 0
	push 0
	lea ecx,[esp+0x20]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [ebp],0

 Block28:
	mov edi,dword ptr [esp+0x44]
	mov eax,dword ptr [edi]
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [edi],0

 Block30:
	mov ecx,dword ptr [esp+0x18]
	mov ebx,1
	xor esi,esi
	lea ecx,[ecx]

 Block31:
	test ecx,ecx
	je Block33

 Block32:
	mov eax,dword ptr [ecx-4]
	jmp Block34

 Block33:
	xor eax,eax

 Block34:
	cmp esi,eax
	jge Block40

 Block35:
	test ebx,ebx
	je Block39

 Block36:
	mov al,byte ptr [esi+ecx]
	cmp al,0x20
	jne Block38

 Block37:
	xor ebx,ebx
	inc esi
	jmp Block31

 Block38:
	mov byte ptr [esp+0x14],al
	push 1
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebp
	call ZXString<char>::_Cat
	mov ecx,dword ptr [esp+0x18]
	inc esi
	jmp Block31

 Block39:
	mov cl,byte ptr [esi+ecx]
	push 1
	lea edx,[esp+0x18]
	mov byte ptr [esp+0x18],cl
	push edx
	mov ecx,edi
	call ZXString<char>::_Cat
	mov ecx,dword ptr [esp+0x18]
	inc esi
	jmp Block31

 Block40:
	push 0
	push 0
	mov ecx,ebp
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push 0
	push 0
	mov ecx,edi
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block45

 Block41:
	cmp byte ptr [eax],0
	je Block45

 Block42:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block45

 Block43:
	cmp byte ptr [eax],0
	je Block45

 Block44:
	mov esi,1
	jmp Block46

 Block45:
	xor esi,esi

 Block46:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],2
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x30],1
	test eax,eax
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x30],0
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	mov eax,esi
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret
}
}
// is_not_capturable_mob
__SUB(000B7AC0, __cdecl, 129065,  int32_t, unsigned long) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	lea eax,[ecx-0x8DF7C0]
	cmp eax,5
	ja Block2

 Block1:
	xor eax,eax
	ret

 Block2:
	mov eax,0x4F8B588F
	mul ecx
	mov eax,ecx
	sub eax,edx
	shr eax,1
	add eax,edx
	shr eax,0x10
	cmp eax,0x5A
	jb Block6

 Block3:
	cmp eax,0x5F
	jbe Block5

 Block4:
	cmp eax,0x61
	jne Block6

 Block5:
	mov eax,1
	ret

 Block6:
	mov eax,0xD1B71759
	mul ecx
	shr edx,0xD
	xor eax,eax
	cmp edx,0x3E7
	sete al
	ret
}
}
// ACTIONDATA::ACTIONDATA
__SUB_CLASS_THIS(000BABC0, __thiscall, 117588,  ACTIONDATA, void, int32_t, int32_t, NakedParam<Ztl_bstr_t>) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [esi],ecx
	test ecx,ecx
	je Block2

 Block1:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x10]

 Block2:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+0xC]
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],edx
	mov dword ptr [esi+0xC],0
	mov dword ptr [esi+0x14],0
	test ecx,ecx
	je Block4

 Block3:
	call _xbstr_t::Data_t::Release

 Block4:
	mov eax,esi
	pop esi
	ret 0xC
}
}
// get_job_name
_SUB_EXCEPTION_HANDLER(B8960)
__SUB(000B8960, __cdecl, 141477,  const char*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B8960
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	or esi,0xFFFFFFFF
	cmp dword ptr [_D_S_MJOBNAME+12],0
	jne Block203

 Block1:
	lea eax,[esp+0xC]
	push 0xC
	push eax
	mov dword ptr [esp+0x10],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	lea edx,[esp+8]
	push 0x16
	push edx
	mov dword ptr [esp+0x14],0x64
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],1
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	lea ecx,[esp+8]
	push 0x17
	push ecx
	mov dword ptr [esp+0x14],0x6E
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],2
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	lea eax,[esp+8]
	push 0x18
	push eax
	mov dword ptr [esp+0x14],0x6F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],3
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	lea edx,[esp+8]
	push 0x19
	push edx
	mov dword ptr [esp+0x14],0x70
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],4
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	lea ecx,[esp+8]
	push 0x1A
	push ecx
	mov dword ptr [esp+0x14],0x78
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],5
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	lea eax,[esp+8]
	push 0x1B
	push eax
	mov dword ptr [esp+0x14],0x79
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],6
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	lea edx,[esp+8]
	push 0x1C
	push edx
	mov dword ptr [esp+0x14],0x7A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],7
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	lea ecx,[esp+8]
	push 0x1D
	push ecx
	mov dword ptr [esp+0x14],0x82
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],8
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	lea eax,[esp+8]
	push 0x1E
	push eax
	mov dword ptr [esp+0x14],0x83
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],9
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	lea edx,[esp+8]
	push 0x1F
	push edx
	mov dword ptr [esp+0x14],0x84
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0xA
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	lea ecx,[esp+8]
	push 0x1A4E
	push ecx
	mov dword ptr [esp+0x14],0xC8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0xB
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	lea eax,[esp+8]
	push 0x23
	push eax
	mov dword ptr [esp+0x14],0xD2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0xC
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	lea edx,[esp+8]
	push 0x24
	push edx
	mov dword ptr [esp+0x14],0xD3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0xD
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	lea ecx,[esp+8]
	push 0x25
	push ecx
	mov dword ptr [esp+0x14],0xD4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0xE
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	lea eax,[esp+8]
	push 0x26
	push eax
	mov dword ptr [esp+0x14],0xDC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0xF
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	lea edx,[esp+8]
	push 0x27
	push edx
	mov dword ptr [esp+0x14],0xDD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x10
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	lea ecx,[esp+8]
	push 0x28
	push ecx
	mov dword ptr [esp+0x14],0xDE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x11
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	lea eax,[esp+8]
	push 0x29
	push eax
	mov dword ptr [esp+0x14],0xE6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x12
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	lea edx,[esp+8]
	push 0x2A
	push edx
	mov dword ptr [esp+0x14],0xE7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x13
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	lea ecx,[esp+8]
	push 0x2B
	push ecx
	mov dword ptr [esp+0x14],0xE8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x14
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	lea eax,[esp+8]
	push 0x2C
	push eax
	mov dword ptr [esp+0x14],0x12C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x15
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	lea edx,[esp+8]
	push 0x2D
	push edx
	mov dword ptr [esp+0x14],0x136
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x16
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	lea ecx,[esp+8]
	push 0x2E
	push ecx
	mov dword ptr [esp+0x14],0x137
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x17
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	lea eax,[esp+8]
	push 0x2F
	push eax
	mov dword ptr [esp+0x14],0x138
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x18
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	lea edx,[esp+8]
	push 0x30
	push edx
	mov dword ptr [esp+0x14],0x140
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x19
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	lea ecx,[esp+8]
	push 0x31
	push ecx
	mov dword ptr [esp+0x14],0x141
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x1A
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	lea eax,[esp+8]
	push 0x32
	push eax
	mov dword ptr [esp+0x14],0x142
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x1B
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	lea edx,[esp+8]
	push 0x33
	push edx
	mov dword ptr [esp+0x14],0x190
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x1C
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	lea ecx,[esp+8]
	push 0x34
	push ecx
	mov dword ptr [esp+0x14],0x19A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x1D
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block61:
	lea eax,[esp+8]
	push 0x35
	push eax
	mov dword ptr [esp+0x14],0x19B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x1E
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block63:
	lea edx,[esp+8]
	push 0x36
	push edx
	mov dword ptr [esp+0x14],0x19C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x1F
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	lea ecx,[esp+8]
	push 0x37
	push ecx
	mov dword ptr [esp+0x14],0x1A4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x20
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block67

 Block66:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block67:
	lea eax,[esp+8]
	push 0x38
	push eax
	mov dword ptr [esp+0x14],0x1A5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x21
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block69:
	lea edx,[esp+8]
	push 0x39
	push edx
	mov dword ptr [esp+0x14],0x1A6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x22
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block71:
	lea ecx,[esp+8]
	push 0x1703
	push ecx
	mov dword ptr [esp+0x14],0x1AE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x23
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block73:
	lea eax,[esp+8]
	push 0x1704
	push eax
	mov dword ptr [esp+0x14],0x1AF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x24
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block75

 Block74:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block75:
	lea edx,[esp+8]
	push 0x1705
	push edx
	mov dword ptr [esp+0x14],0x1B0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x25
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block77:
	lea ecx,[esp+8]
	push 0x1706
	push ecx
	mov dword ptr [esp+0x14],0x1B1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x26
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	lea eax,[esp+8]
	push 0x1707
	push eax
	mov dword ptr [esp+0x14],0x1B2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x27
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block81:
	lea edx,[esp+8]
	push 0x10
	push edx
	mov dword ptr [esp+0x14],0x1F4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x28
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block83

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block83:
	lea ecx,[esp+8]
	push 0x3A
	push ecx
	mov dword ptr [esp+0x14],0x1FE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x29
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block85:
	lea eax,[esp+8]
	push 0x3B
	push eax
	mov dword ptr [esp+0x14],0x1FF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x2A
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block87:
	lea edx,[esp+8]
	push 0x3C
	push edx
	mov dword ptr [esp+0x14],0x200
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x2B
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block89:
	lea ecx,[esp+8]
	push 0x3D
	push ecx
	mov dword ptr [esp+0x14],0x208
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x2C
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	lea eax,[esp+8]
	push 0x3E
	push eax
	mov dword ptr [esp+0x14],0x209
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x2D
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	lea edx,[esp+8]
	push 0x3F
	push edx
	mov dword ptr [esp+0x14],0x20A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x2E
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	lea ecx,[esp+8]
	push 0x1A3D
	push ecx
	mov dword ptr [esp+0x14],0x384
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x2F
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block97

 Block96:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block97:
	lea eax,[esp+8]
	push 0x14
	push eax
	mov dword ptr [esp+0x14],0x38E
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x30
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block99

 Block98:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block99:
	lea edx,[esp+8]
	push 0x15
	push edx
	mov dword ptr [esp+0x14],0x398
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x31
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block101

 Block100:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block101:
	lea ecx,[esp+8]
	push 0x11
	push ecx
	mov dword ptr [esp+0x14],0x320
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x32
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block103

 Block102:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block103:
	lea eax,[esp+8]
	push 0x40
	push eax
	mov dword ptr [esp+0x14],0x3E8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x33
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block105

 Block104:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block105:
	lea edx,[esp+8]
	push 0x1A33
	push edx
	mov dword ptr [esp+0x14],0x44C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x34
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block107

 Block106:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block107:
	lea ecx,[esp+8]
	push 0x1A33
	push ecx
	mov dword ptr [esp+0x14],0x456
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x35
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block109

 Block108:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block109:
	lea eax,[esp+8]
	push 0x1A33
	push eax
	mov dword ptr [esp+0x14],0x457
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x36
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block111:
	lea edx,[esp+8]
	push 0x1A33
	push edx
	mov dword ptr [esp+0x14],0x458
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x37
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block113

 Block112:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block113:
	lea ecx,[esp+8]
	push 0x1A29
	push ecx
	mov dword ptr [esp+0x14],0x4B0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x38
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block115

 Block114:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block115:
	lea eax,[esp+8]
	push 0x1A29
	push eax
	mov dword ptr [esp+0x14],0x4BA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x39
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block117

 Block116:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block117:
	lea edx,[esp+8]
	push 0x1A29
	push edx
	mov dword ptr [esp+0x14],0x4BB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x3A
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block119

 Block118:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block119:
	lea ecx,[esp+8]
	push 0x1A29
	push ecx
	mov dword ptr [esp+0x14],0x4BC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x3B
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block121

 Block120:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block121:
	lea eax,[esp+8]
	push 0x1A8A
	push eax
	mov dword ptr [esp+0x14],0x514
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x3C
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block123

 Block122:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block123:
	lea edx,[esp+8]
	push 0x1A8A
	push edx
	mov dword ptr [esp+0x14],0x51E
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x3D
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block125

 Block124:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block125:
	lea ecx,[esp+8]
	push 0x1A8A
	push ecx
	mov dword ptr [esp+0x14],0x51F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x3E
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block127

 Block126:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block127:
	lea eax,[esp+8]
	push 0x1A8A
	push eax
	mov dword ptr [esp+0x14],0x520
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x3F
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block129

 Block128:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block129:
	lea edx,[esp+8]
	push 0x1A53
	push edx
	mov dword ptr [esp+0x14],0x578
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x40
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block131

 Block130:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block131:
	lea ecx,[esp+8]
	push 0x1A53
	push ecx
	mov dword ptr [esp+0x14],0x582
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x41
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block133

 Block132:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block133:
	lea eax,[esp+8]
	push 0x1A53
	push eax
	mov dword ptr [esp+0x14],0x583
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x42
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block135

 Block134:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block135:
	lea edx,[esp+8]
	push 0x1A53
	push edx
	mov dword ptr [esp+0x14],0x584
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x43
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block137

 Block136:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block137:
	lea ecx,[esp+8]
	push 0x1A6F
	push ecx
	mov dword ptr [esp+0x14],0x5DC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x44
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block139

 Block138:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block139:
	lea eax,[esp+8]
	push 0x1A6F
	push eax
	mov dword ptr [esp+0x14],0x5E6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x45
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block141

 Block140:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block141:
	lea edx,[esp+8]
	push 0x1A6F
	push edx
	mov dword ptr [esp+0x14],0x5E7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x46
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block143

 Block142:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block143:
	lea ecx,[esp+8]
	push 0x1A6F
	push ecx
	mov dword ptr [esp+0x14],0x5E8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x47
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block145

 Block144:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block145:
	lea eax,[esp+8]
	push 0x14A0
	push eax
	mov dword ptr [esp+0x14],0x7D0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x48
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block147

 Block146:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block147:
	lea edx,[esp+8]
	push 0x1A24
	push edx
	mov dword ptr [esp+0x14],0x834
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x49
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block149

 Block148:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block149:
	lea ecx,[esp+8]
	push 0x1A24
	push ecx
	mov dword ptr [esp+0x14],0x83E
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x4A
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block151

 Block150:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block151:
	lea eax,[esp+8]
	push 0x1A24
	push eax
	mov dword ptr [esp+0x14],0x83F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x4B
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block153

 Block152:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block153:
	lea edx,[esp+8]
	push 0x1A24
	push edx
	mov dword ptr [esp+0x14],0x840
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x4C
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block155

 Block154:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block155:
	lea ecx,[esp+8]
	push 0x1A39
	push ecx
	mov dword ptr [esp+0x14],0x7D1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x4D
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block157

 Block156:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block157:
	lea eax,[esp+8]
	push 0x1A39
	push eax
	mov dword ptr [esp+0x14],0x898
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x4E
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block159

 Block158:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block159:
	lea edx,[esp+8]
	push 0x1A39
	push edx
	mov dword ptr [esp+0x14],0x8A2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x4F
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block161

 Block160:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block161:
	lea ecx,[esp+8]
	push 0x1A39
	push ecx
	mov dword ptr [esp+0x14],0x8A3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x50
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block163

 Block162:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block163:
	lea eax,[esp+8]
	push 0x1A39
	push eax
	mov dword ptr [esp+0x14],0x8A4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x51
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block165

 Block164:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block165:
	lea edx,[esp+8]
	push 0x1A39
	push edx
	mov dword ptr [esp+0x14],0x8A5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x52
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block167

 Block166:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block167:
	lea ecx,[esp+8]
	push 0x1A39
	push ecx
	mov dword ptr [esp+0x14],0x8A6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x53
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block169

 Block168:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block169:
	lea eax,[esp+8]
	push 0x1A39
	push eax
	mov dword ptr [esp+0x14],0x8A7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x54
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block171

 Block170:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block171:
	lea edx,[esp+8]
	push 0x1A39
	push edx
	mov dword ptr [esp+0x14],0x8A8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x55
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block173

 Block172:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block173:
	lea ecx,[esp+8]
	push 0x1A39
	push ecx
	mov dword ptr [esp+0x14],0x8A9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x56
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block175

 Block174:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block175:
	lea eax,[esp+8]
	push 0x1A39
	push eax
	mov dword ptr [esp+0x14],0x8AA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x57
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block177

 Block176:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block177:
	lea edx,[esp+8]
	push 0x1708
	push edx
	mov dword ptr [esp+0x14],0xBB8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x58
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block179

 Block178:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block179:
	lea ecx,[esp+8]
	push 0x1A28
	push ecx
	mov dword ptr [esp+0x14],0xC80
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x59
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block181

 Block180:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block181:
	lea eax,[esp+8]
	push 0x1A28
	push eax
	mov dword ptr [esp+0x14],0xC8A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x5A
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block183

 Block182:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block183:
	lea edx,[esp+8]
	push 0x1A28
	push edx
	mov dword ptr [esp+0x14],0xC8B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x5B
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block185

 Block184:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block185:
	lea ecx,[esp+8]
	push 0x1A28
	push ecx
	mov dword ptr [esp+0x14],0xC8C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x5C
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block187

 Block186:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block187:
	lea eax,[esp+8]
	push 0x1A89
	push eax
	mov dword ptr [esp+0x14],0xCE4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x5D
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block189

 Block188:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block189:
	lea edx,[esp+8]
	push 0x1A89
	push edx
	mov dword ptr [esp+0x14],0xCEE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x5E
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block191

 Block190:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block191:
	lea ecx,[esp+8]
	push 0x1A89
	push ecx
	mov dword ptr [esp+0x14],0xCEF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x5F
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block193

 Block192:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block193:
	lea eax,[esp+8]
	push 0x1A89
	push eax
	mov dword ptr [esp+0x14],0xCF0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x60
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block195

 Block194:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block195:
	lea edx,[esp+8]
	push 0x1A50
	push edx
	mov dword ptr [esp+0x14],0xDAC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x61
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block197

 Block196:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block197:
	lea ecx,[esp+8]
	push 0x1A50
	push ecx
	mov dword ptr [esp+0x14],0xDB6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x10]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x62
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block199

 Block198:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block199:
	lea eax,[esp+8]
	push 0x1A50
	push eax
	mov dword ptr [esp+0x14],0xDB7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x63
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block201

 Block200:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block201:
	lea edx,[esp+0x10]
	push 0x1A50
	push edx
	mov dword ptr [esp+0x14],0xDB8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x64
	call ZMap<long, ZXString<char>, long>::Insert
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block203

 Block202:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block203:
	mov dword ptr [esp+8],0
	lea ecx,[esp+8]
	push ecx
	lea edx,[esp+0x28]
	push edx
	mov ecx,offset _D_S_MJOBNAME
	mov dword ptr [esp+0x24],0x65
	call ZMap<long, ZXString<char>, long>::GetAt
	mov dword ptr [esp+0x1C],esi
	mov esi,dword ptr [esp+8]
	test esi,esi
	je Block205

 Block204:
	lea eax,[esi-0xC]
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block205:
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret
}
}
// get_min_from_subtracting_two_filetime
__SUB(000B7B60, __cdecl, 145038,  long, _FILETIME*, _FILETIME*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [esp+8]
	mov ecx,dword ptr [ecx+4]
	push esi
	mov esi,dword ptr [edx]
	mov edx,dword ptr [edx+4]
	push 0
	sub eax,esi
	push 0x23C34600
	sbb ecx,edx
	push ecx
	push eax
	call __aulldiv
	pop esi
	ret
}
}
// is_crossline
__SUB(000B80E0, __cdecl, 138148,  int32_t, tagPOINT&, tagPOINT&, tagPOINT&, tagPOINT&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x5C
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [eax]
	push ebx
	push esi
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [ebp+0xC]
	mov edx,dword ptr [eax]
	mov dword ptr [esp+0x1C],ecx
	fild dword ptr [esp+0x1C]
	mov dword ptr [esp+0x1C],esi
	fild dword ptr [esp+0x1C]
	mov dword ptr [esp+0x1C],edx
	fild dword ptr [esp+0x1C]
	push edi
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [ebp+0x10]
	mov ebx,dword ptr [eax]
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x20],edi
	fild dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [ebp+0x14]
	mov dword ptr [esp+0x10],ebx
	fld st(0)
	mov ebx,dword ptr [eax]
	fsub st,st(3)
	mov eax,dword ptr [eax+4]
	fld st(4)
	mov dword ptr [esp+0x20],ebx
	fsub st,st(3)
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x1C],1
	fstp qword ptr [esp+0x50]
	fld st(3)
	fsubrp st(2),st
	fxch
	fmul st,st(4)
	fxch st(2)
	fsubrp st(4),st
	fxch st(3)
	fmulp st(2),st
	faddp st(1),st(0)
	fstp qword ptr [esp+0x48]
	fild dword ptr [esp+0x10]
	fild dword ptr [esp+0x14]
	fild dword ptr [esp+0x20]
	fild dword ptr [esp+0x18]
	fld st(0)
	fsub st,st(3)
	fld st(4)
	fsub st,st(3)
	fld st(4)
	fsubrp st(3),st
	fxch st(2)
	fmul st,st(5)
	fxch st(3)
	fsubrp st(5),st
	fxch st(4)
	fmulp st(3),st
	fxch
	faddp st(2),st
	fxch
	fst qword ptr [esp+0x58]
	fld st(1)
	fmul st,st(4)
	fld st(3)
	fld qword ptr [esp+0x50]
	fmul st(1),st
	fld st(1)
	fucomp st(3)
	fnstsw ax
	test ah,0x44
	jp Block2

 Block1:
	mov dword ptr [esp+0x1C],0

 Block2:
	fldz
	fucomp st(6)
	fnstsw ax
	test ah,0x44
	jp Block4

 Block3:
	fldz
	jmp Block5

 Block4:
	fld st(6)
	fdiv st,st(6)

 Block5:
	fstp qword ptr [esp+0x28]
	fldz
	fucomp st(5)
	fnstsw ax
	test ah,0x44
	jp Block7

 Block6:
	fstp st(0)
	fldz
	fst qword ptr [esp+0x20]
	jmp Block8

 Block7:
	fdiv st,st(4)
	fstp qword ptr [esp+0x20]
	fldz

 Block8:
	fld st(0)
	fucomp st(4)
	fnstsw ax
	test ah,0x44
	jnp Block10

 Block9:
	fstp st(0)
	fld qword ptr [esp+0x48]
	fdiv st,st(3)

 Block10:
	fstp qword ptr [esp+0x38]
	fld qword ptr [esp+0x20]
	fcomp qword ptr [esp+0x28]
	fnstsw ax
	test ah,0x44
	jp Block12

 Block11:
	fld qword ptr [esp+0x38]
	fcomp qword ptr [esp+0x20]
	mov dword ptr [esp+0x20],1
	fnstsw ax
	test ah,0x44
	jnp Block13

 Block12:
	mov dword ptr [esp+0x20],0

 Block13:
	cmp ecx,edx
	mov eax,ecx
	jl Block15

 Block14:
	mov eax,edx

 Block15:
	dec eax
	cmp edx,ecx
	mov dword ptr [esp+0x28],eax
	jl Block17

 Block16:
	mov ecx,edx

 Block17:
	inc ecx
	cmp esi,edi
	mov dword ptr [esp+0x30],ecx
	mov eax,esi
	jl Block19

 Block18:
	mov eax,edi

 Block19:
	dec eax
	cmp edi,esi
	mov dword ptr [esp+0x2C],eax
	jl Block21

 Block20:
	mov esi,edi

 Block21:
	mov eax,dword ptr [esp+0x10]
	inc esi
	cmp eax,ebx
	mov dword ptr [esp+0x34],esi
	mov ecx,eax
	jl Block23

 Block22:
	mov ecx,ebx

 Block23:
	dec ecx
	cmp ebx,eax
	mov dword ptr [esp+0x38],ecx
	jl Block25

 Block24:
	mov eax,ebx

 Block25:
	mov edx,dword ptr [esp+0x18]
	inc eax
	mov dword ptr [esp+0x40],eax
	mov eax,dword ptr [esp+0x14]
	cmp eax,edx
	mov ecx,eax
	jl Block27

 Block26:
	mov ecx,edx

 Block27:
	dec ecx
	cmp edx,eax
	mov dword ptr [esp+0x3C],ecx
	jl Block29

 Block28:
	mov eax,edx

 Block29:
	inc eax
	cmp dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x44],eax
	je Block36

 Block30:
	fxch st(2)
	fmul st,st(5)
	fld st(4)
	fld qword ptr [esp+0x48]
	fmul st(1),st
	fxch st(2)
	fsubrp st(1),st(0)
	fxch st(3)
	fsubrp st(2),st
	fxch st(2)
	fdivrp st(1),st(0)
	fldz
	fucomp st(5)
	fnstsw ax
	test ah,0x44
	jp Block32

 Block31:
	fstp st(1)
	fstp st(3)
	fmul st,st(2)
	fchs
	fsub qword ptr [esp+0x58]
	fdivrp st(1),st(0)
	jmp Block33

 Block32:
	fstp st(3)
	fstp st(1)
	fld st(1)
	fmul qword ptr [esp+0x50]
	fchs
	fsubrp st(1),st(0)
	fdivrp st(2),st
	fxch

 Block33:
	call __ftol2_sse
	mov esi,eax
	call __ftol2_sse
	mov edi,eax
	push edi
	push esi
	lea ecx,[esp+0x30]
	push ecx
	call PtInRect
	test eax,eax
	je Block38

 Block34:
	push edi
	push esi
	lea edx,[esp+0x40]
	push edx
	call PtInRect
	test eax,eax
	je Block38

 Block35:
	mov eax,1
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block36:
	cmp dword ptr [esp+0x20],0
	fstp st(1)
	fstp st(0)
	fstp st(0)
	fstp st(2)
	fstp st(0)
	fstp st(0)
	je Block38

 Block37:
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x60]
	push edx
	call IntersectRect
	neg eax
	sbb eax,eax
	neg eax
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block38:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
