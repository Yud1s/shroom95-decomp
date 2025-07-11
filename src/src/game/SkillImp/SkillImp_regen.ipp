#include "regen.hpp"
// SkillImp.ipp
#include "SkillImp.hpp"

// CSkill_HitAni::~CSkill_HitAni
_SUB_EXCEPTION_HANDLER(2ECBC0)
__SUB_CLASS_THIS0(002ECBC0, __thiscall, 80992,  CSkill_HitAni, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2ECBC0
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
	push offset Ztl_bstr_t::~Ztl_bstr_t
	push 0xF
	push 4
	lea eax,[esi+0x48]
	push eax
	mov dword ptr [esp+0x24],1
	call __eh_vector_dtor_iterator
	push offset Ztl_bstr_t::~Ztl_bstr_t
	push 0xF
	push 4
	lea ecx,[esi+0xC]
	push ecx
	mov byte ptr [esp+0x24],0
	call __eh_vector_dtor_iterator
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CSkill_HitAni::CreateFirst
__SUB_CLASS_THIS(002EBD80, __thiscall, 80988,  CSkill_HitAni, void, const SKILLENTRY*, long) {
__asm {

 Block0:
	push ebp
	xor ebp,ebp
	cmp dword ptr [esp+0xC],ebp
	jle Block16

 Block1:
	push ebx
	push esi
	push edi
	lea edi,[ecx+0xC]

 Block2:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx+0x228]
	xor eax,eax
	test ebp,ebp
	setne al
	lea ebx,[edx+eax*4]
	cmp edi,ebx
	je Block14

 Block3:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block12

 Block4:
	lea eax,[esi+8]
	push eax
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
	mov dword ptr [edi],0

 Block12:
	mov eax,dword ptr [ebx]
	mov dword ptr [edi],eax
	test eax,eax
	je Block14

 Block13:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	inc ebp
	add edi,4
	cmp ebp,dword ptr [esp+0x18]
	jl Block2

 Block15:
	pop edi
	pop esi
	pop ebx

 Block16:
	pop ebp
	ret 8
}
}
// CSkill_HitAni::CreateShuffle
__SUB_CLASS_THIS(002EBE20, __thiscall, 80990,  CSkill_HitAni, void, const SKILLENTRY*, long, long, const ATTACKINFO*) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	mov eax,dword ptr [eax+0x228]
	test eax,eax
	jne Block2

 Block1:
	mov dword ptr [esp],eax
	jmp Block3

 Block2:
	mov edx,dword ptr [eax-4]
	mov dword ptr [esp],edx

 Block3:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	jle Block22

 Block4:
	push ebx
	push ebp
	push esi
	push edi
	lea edi,[ecx+0xC]
	mov ebp,eax
	nop

 Block5:
	mov esi,dword ptr [esp+0x10]
	test esi,esi
	je Block7

 Block6:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div esi
	jmp Block8

 Block7:
	xor edx,edx

 Block8:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x228]
	lea ebx,[ecx+edx*4]
	cmp edi,ebx
	je Block20

 Block9:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block18

 Block10:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block11:
	test esi,esi
	je Block17

 Block12:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block14:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block16

 Block15:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block16:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block17:
	mov dword ptr [edi],0

 Block18:
	mov eax,dword ptr [ebx]
	mov dword ptr [edi],eax
	test eax,eax
	je Block20

 Block19:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block20:
	add edi,4
	sub ebp,1
	jne Block5

 Block21:
	pop edi
	pop esi
	pop ebp
	pop ebx

 Block22:
	pop ecx
	ret 0x10
}
}
// CSkill_HitAni::CreateForFlashRain
__SUB_CLASS_THIS(002EBEF0, __thiscall, 80988,  CSkill_HitAni, void, const SKILLENTRY*, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	jle Block29

 Block1:
	push ebx
	push esi
	push edi
	lea edi,[ecx+0x48]
	mov dword ptr [esp+0x14],eax
	jmp Block3

 Block3:
	mov eax,dword ptr [esp+0x10]
	mov ebx,dword ptr [eax+0x228]
	lea ecx,[edi-0x3C]
	cmp ecx,ebx
	je Block15

 Block4:
	mov esi,dword ptr [edi-0x3C]
	test esi,esi
	je Block13

 Block5:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block6:
	test esi,esi
	je Block12

 Block7:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block9:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block11

 Block10:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block11:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block12:
	mov dword ptr [edi-0x3C],0

 Block13:
	mov eax,dword ptr [ebx]
	mov dword ptr [edi-0x3C],eax
	test eax,eax
	je Block15

 Block14:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	mov eax,dword ptr [esp+0x10]
	mov ebx,dword ptr [eax+0x228]
	add ebx,4
	cmp edi,ebx
	je Block27

 Block16:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block25

 Block17:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block18:
	test esi,esi
	je Block24

 Block19:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block21:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block23

 Block22:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block23:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block24:
	mov dword ptr [edi],0

 Block25:
	mov eax,dword ptr [ebx]
	mov dword ptr [edi],eax
	test eax,eax
	je Block27

 Block26:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block27:
	add edi,4
	sub dword ptr [esp+0x14],1
	jne Block3

 Block28:
	pop edi
	pop esi
	pop ebx

 Block29:
	ret 8
}
}
// is_correct_bullet_cashitem
__SUB(002EBCF0, __cdecl, 82352,  int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push eax
	call get_weapon_type
	add esp,4
	cmp eax,0x2D
	je Block7

 Block1:
	cmp eax,0x2E
	je Block7

 Block2:
	cmp eax,0x2F
	jne Block4

 Block3:
	mov ecx,dword ptr [esp+8]
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	xor eax,eax
	cmp ecx,0x139D
	sete al
	ret

 Block4:
	cmp eax,0x31
	jne Block6

 Block5:
	mov ecx,dword ptr [esp+8]
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	xor ecx,ecx
	cmp eax,0x139E
	sete cl
	mov eax,ecx
	ret

 Block6:
	xor eax,eax
	ret

 Block7:
	mov ecx,dword ptr [esp+8]
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	xor ecx,ecx
	cmp eax,0x139C
	sete cl
	mov eax,ecx
	ret
}
}
// CSkill_HitAni::CSkill_HitAni
_SUB_EXCEPTION_HANDLER(2ECA00)
__SUB_CLASS_THIS(002ECA00, __thiscall, 80982,  CSkill_HitAni, void, const SKILLENTRY*, unsigned char, long, long, long, long, const ATTACKINFO*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2ECA00
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
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	push offset Ztl_bstr_t::~Ztl_bstr_t
	push offset Ztl_bstr_t::_ctor_default
	push 0xF
	mov dword ptr [esp+0x20],eax
	push 4
	lea eax,[esi+0xC]
	push eax
	int 3// TODO: 	mov dword ptr [esi],offset CSkill_HitAni::`vftable'
	call __eh_vector_ctor_iterator
	push offset Ztl_bstr_t::~Ztl_bstr_t
	push offset Ztl_bstr_t::_ctor_default
	push 0xF
	push 4
	lea ecx,[esi+0x48]
	push ecx
	mov byte ptr [esp+0x28],1
	call __eh_vector_ctor_iterator
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x14],2
	test ecx,ecx
	je Block23

 Block1:
	mov eax,dword ptr [ecx]
	cmp eax,0x4E23EF
	jg Block15

 Block2:
	je Block20

 Block3:
	cmp eax,0x40413C
	jg Block11

 Block4:
	je Block10

 Block5:
	cmp eax,0x2F514D
	je Block8

 Block6:
	cmp eax,0x2F9F6E
	je Block8

 Block7:
	cmp eax,0x31260D
	jne Block23

 Block8:
	mov edx,dword ptr [esp+0x30]
	push edx

 Block9:
	push ecx
	mov ecx,esi
	call CSkill_HitAni::CreateFirst
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x20

 Block10:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x30]
	push edx
	mov edx,dword ptr [esp+0x28]
	push eax
	push edx
	push ecx
	mov ecx,esi
	call CSkill_HitAni::CreateShuffle
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x20

 Block11:
	sub eax,0x4DD5CB
	je Block14

 Block12:
	sub eax,1
	je Block8

 Block13:
	jmp Block23

 Block14:
	push 2
	jmp Block9

 Block15:
	cmp eax,0xE6935C
	jg Block21

 Block16:
	je Block20

 Block17:
	cmp eax,0x4F837A
	je Block8

 Block18:
	cmp eax,0xE66C4B
	je Block8

 Block19:
	jmp Block23

 Block20:
	push 1
	push ecx
	mov ecx,esi
	call CSkill_HitAni::CreateMultipleLayer
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x20

 Block21:
	cmp eax,0x1F914CF
	je Block8

 Block22:
	cmp eax,0x1F962E9
	je Block24

 Block23:
	mov eax,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x30]
	push eax
	mov eax,dword ptr [esp+0x30]
	push edx
	mov edx,dword ptr [esp+0x30]
	push eax
	mov eax,dword ptr [esp+0x30]
	push edx
	mov edx,dword ptr [esp+0x30]
	push eax
	push edx
	push ecx
	mov ecx,esi
	call CSkill_HitAni::CreateDefault
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x20

 Block24:
	mov eax,dword ptr [esp+0x30]
	push eax
	push ecx
	mov ecx,esi
	call CSkill_HitAni::CreateForFlashRain
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x20
}
}
// CSkill_HitAni::CreateMultipleLayer
_SUB_EXCEPTION_HANDLER(2EC7D0)
__SUB_CLASS_THIS(002EC7D0, __thiscall, 80988,  CSkill_HitAni, void, const SKILLENTRY*, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2EC7D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor esi,esi
	xor ebx,ebx
	mov dword ptr [ebp-0x18],esi
	xor eax,eax
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x20],eax
	cmp dword ptr [ebp+0xC],ebx
	mov byte ptr [ebp-4],1
	mov dword ptr [ebp-0x24],ebx
	jle Block32

 Block1:
	add ecx,0xC
	mov dword ptr [ebp-0x14],ecx

 Block2:
	push ebx
	push 3
	lea ecx,[ebp-0x18]
	call ZXString16::GetBuffer
	mov ecx,dword ptr [_S_S__6]
	mov dword ptr [eax],ecx
	mov dx,word ptr [_S_S__6+4]
	push 3
	lea ecx,[ebp-0x18]
	mov word ptr [eax+4],dx
	call ZXString16::ReleaseBuffer
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	mov eax,dword ptr [ebp-0x24]
	push eax
	call __itow
	mov ecx,eax
	add esp,0xC
	lea esi,[ecx+2]
	jmp Block4

 Block4:
	mov dx,word ptr [ecx]
	add ecx,2
	cmp dx,bx
	jne Block4

 Block5:
	sub ecx,esi
	sar ecx,1
	push ecx
	push eax
	lea ecx,[ebp-0x18]
	call ZXString16::_Cat
	lea ecx,[ebp-0x28]
	push 0x3DA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [ebp+8]
	mov ecx,dword ptr [edx+0x224]
	mov byte ptr [ebp-4],2
	cmp ecx,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [ecx]
	jmp Block8

 Block7:
	xor ecx,ecx

 Block8:
	mov edx,dword ptr [ebp-0x18]
	mov eax,dword ptr [eax]
	push edx
	push ecx
	push eax
	lea eax,[ebp-0x20]
	push eax
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x28]
	add esp,0x10
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [ebp-0x20]
	push ecx
	lea ecx,[ebp-0x1C]
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [ebp-0x1C]
	lea edx,[ebp-0x1C]
	cmp dword ptr [ebp-0x14],edx
	je Block22

 Block11:
	mov eax,dword ptr [ebp-0x14]
	mov esi,dword ptr [eax]
	cmp esi,ebx
	je Block20

 Block12:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block19

 Block13:
	cmp esi,ebx
	je Block19

 Block14:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block16:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block18

 Block17:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block18:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block19:
	mov edx,dword ptr [ebp-0x14]
	mov dword ptr [edx],ebx

 Block20:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [eax],edi
	cmp edi,ebx
	je Block30

 Block21:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block22:
	cmp edi,ebx
	je Block30

 Block23:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block29

 Block24:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block26:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block28

 Block27:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block28:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block29:
	mov dword ptr [ebp-0x1C],ebx

 Block30:
	mov eax,dword ptr [ebp-0x24]
	add dword ptr [ebp-0x14],4
	inc eax
	cmp eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x24],eax
	jl Block2

 Block31:
	mov eax,dword ptr [ebp-0x20]
	mov esi,dword ptr [ebp-0x18]

 Block32:
	mov byte ptr [ebp-4],bl
	cmp eax,ebx
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp esi,ebx
	je Block36

 Block35:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block36:
	lea esp,[ebp-0x38]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CSkill_HitAni::operator()
__SUB_CLASS_THIS(0034FC50, __thiscall, 80985,  CSkill_HitAni, Ztl_bstr_t*, Ztl_bstr_t*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	mov eax,dword ptr [ecx+eax*4+0xC]
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
	ret 8
}
}
// CSkill_HitAni::CreateDefault
_SUB_EXCEPTION_HANDLER(2EC010)
__SUB_CLASS_THIS(002EC010, __thiscall, 80987,  CSkill_HitAni, void, const SKILLENTRY*, unsigned char, long, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2EC010
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x3C],ecx
	cmp dword ptr [esp+0x68],0
	mov dword ptr [esp+0x14],0
	jle Block180

 Block1:
	mov ebp,dword ptr [esp+0x60]

 Block2:
	mov edi,dword ptr [esp+0x6C]
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x3C]
	mov esi,dword ptr [esp+0x54]
	lea ebx,[ecx+eax*4+0xC]
	test edi,edi
	je Block20

 Block3:
	push edi
	push ebp
	call is_correct_bullet_cashitem
	add esp,8
	test eax,eax
	je Block20

 Block4:
	xor eax,eax
	mov dword ptr [esp+0x1C],eax
	lea edx,[esp+0x18]
	push 0x959
	push edx
	mov dword ptr [esp+0x54],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x4C],1
	test esi,esi
	je Block8

 Block5:
	cmp dword ptr [esi+4],0
	jne Block7

 Block6:
	mov eax,dword ptr [esi]
	push eax
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block7:
	mov esi,dword ptr [esi+4]
	jmp Block9

 Block8:
	xor esi,esi

 Block9:
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	push edi
	add ecx,edx
	push ecx
	lea edx,[esp+0x24]
	push esi
	push edx
	call ZXString<char>::Format
	mov ecx,dword ptr [esp+0x28]
	add esp,0x10
	mov byte ptr [esp+0x4C],0
	test ecx,ecx
	je Block11

 Block10:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],0

 Block11:
	mov edi,dword ptr [esp+0x1C]
	push edi
	lea ecx,[esp+0x64]
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [esp+0x60]
	lea eax,[esp+0x60]
	cmp ebx,eax
	je Block16

 Block12:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block14

 Block13:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebx],0

 Block14:
	mov dword ptr [ebx],esi
	test esi,esi
	je Block18

 Block15:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block16:
	test esi,esi
	je Block18

 Block17:
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x60],0

 Block18:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test edi,edi
	je Block179

 Block19:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4
	jmp Block179

 Block20:
	test esi,esi
	je Block65

 Block21:
	mov eax,dword ptr [esi]
	cmp eax,0x312609
	jne Block32

 Block22:
	cmp dword ptr [esi+0x20C],0
	je Block24

 Block23:
	mov al,byte ptr [esp+0x5C]
	jmp Block25

 Block24:
	movzx eax,byte ptr [esp+0x58]

 Block25:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x5C]
	push edx
	push ecx
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov ecx,esi
	call SKILLENTRY::GetHitUOLByIndex
	mov esi,eax
	cmp ebx,esi
	je Block30

 Block26:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block28

 Block27:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebx],0

 Block28:
	mov eax,dword ptr [esi]
	mov dword ptr [ebx],eax
	test eax,eax
	je Block30

 Block29:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block30:
	mov ecx,dword ptr [esp+0x20]
	test ecx,ecx
	je Block61

 Block31:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x20],0
	jmp Block61

 Block32:
	cmp eax,0x4E23EF
	je Block51

 Block33:
	cmp eax,0xE6935C
	je Block51

 Block34:
	cmp eax,0x217C05A
	jne Block46

 Block35:
	cmp dword ptr [esp+0x64],1
	jne Block41

 Block36:
	cmp dword ptr [esi+0x20C],0
	je Block38

 Block37:
	mov al,byte ptr [esp+0x5C]
	jmp Block39

 Block38:
	movzx eax,byte ptr [esp+0x58]

 Block39:
	mov ecx,dword ptr [esp+0x5C]
	push 1
	push ecx
	push eax
	lea edx,[esp+0x30]
	push edx
	mov ecx,esi
	call SKILLENTRY::GetHitUOLByIndex
	push eax
	mov ecx,ebx
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block61

 Block40:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x24],0
	jmp Block61

 Block41:
	cmp dword ptr [esi+0x20C],0
	je Block43

 Block42:
	mov al,byte ptr [esp+0x5C]
	jmp Block44

 Block43:
	movzx eax,byte ptr [esp+0x58]

 Block44:
	mov ecx,dword ptr [esp+0x5C]
	push 0
	push ecx
	push eax
	lea edx,[esp+0x34]
	push edx
	mov ecx,esi
	call SKILLENTRY::GetHitUOLByIndex
	push eax
	mov ecx,ebx
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	je Block61

 Block45:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x28],0
	jmp Block61

 Block46:
	cmp dword ptr [esi+0x20C],0
	je Block48

 Block47:
	mov al,byte ptr [esp+0x5C]
	jmp Block49

 Block48:
	movzx eax,byte ptr [esp+0x58]

 Block49:
	mov ecx,dword ptr [esp+0x5C]
	push ecx
	push eax
	lea edx,[esp+0x34]
	push edx
	mov ecx,esi
	call SKILLENTRY::GetRandomHitUOL
	push eax
	mov ecx,ebx
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x2C]
	test ecx,ecx
	je Block61

 Block50:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x2C],0
	jmp Block61

 Block51:
	cmp dword ptr [esi+0x20C],0
	je Block53

 Block52:
	mov al,byte ptr [esp+0x5C]
	jmp Block54

 Block53:
	movzx eax,byte ptr [esp+0x58]

 Block54:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x5C]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x3C]
	push eax
	mov ecx,esi
	call SKILLENTRY::GetHitUOLByIndex
	mov esi,eax
	cmp ebx,esi
	je Block59

 Block55:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block57

 Block56:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebx],0

 Block57:
	mov eax,dword ptr [esi]
	mov dword ptr [ebx],eax
	test eax,eax
	je Block59

 Block58:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block59:
	mov ecx,dword ptr [esp+0x30]
	test ecx,ecx
	je Block61

 Block60:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x30],0

 Block61:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block77

 Block62:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block77

 Block63:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jne Block179

 Block64:
	jmp Block77

 Block65:
	cmp ebp,0x15B2CD
	jg Block117

 Block66:
	je Block150

 Block67:
	cmp ebp,0x14EF82
	jg Block103

 Block68:
	je Block150

 Block69:
	cmp ebp,0x142C46
	jg Block97

 Block70:
	je Block150

 Block71:
	cmp ebp,0x13DE7E
	jg Block95

 Block72:
	je Block150

 Block73:
	mov eax,ebp
	sub eax,0x13DE04
	je Block150

 Block74:
	sub eax,0xA
	je Block150

 Block75:
	sub eax,0x22

 Block76:
	je Block150

 Block77:
	push ebp
	call get_weapon_type
	add esp,4
	cmp eax,0x1E
	je Block164

 Block78:
	cmp eax,0x21
	je Block164

 Block79:
	cmp eax,0x28
	je Block164

 Block80:
	cmp eax,0x1F
	je Block164

 Block81:
	cmp eax,0x29
	je Block164

 Block82:
	cmp eax,0x2B
	je Block164

 Block83:
	cmp eax,0x2C
	je Block164

 Block84:
	cmp eax,0x20
	je Block94

 Block85:
	cmp eax,0x2A
	je Block94

 Block86:
	cmp eax,0x2D
	je Block94

 Block87:
	cmp eax,0x2E
	je Block94

 Block88:
	cmp eax,0x2F
	je Block94

 Block89:
	cmp eax,0x26
	je Block94

 Block90:
	cmp eax,0x25
	je Block94

 Block91:
	cmp eax,0x31
	je Block94

 Block92:
	cmp eax,0x30
	je Block94

 Block93:
	cmp eax,0x27
	jne Block179

 Block94:
	lea eax,[esp+0x40]
	push 0x6E5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	mov ecx,ebx
	call Ztl_bstr_t::op_assign
	lea ecx,[esp+0x40]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block171

 Block95:
	mov eax,ebp
	sub eax,0x140520
	je Block150

 Block96:
	sub eax,0x18
	jmp Block76

 Block97:
	cmp ebp,0x145358
	jg Block101

 Block98:
	cmp ebp,0x145357
	jge Block150

 Block99:
	cmp ebp,0x142C64
	je Block150

 Block100:
	cmp ebp,0x145339
	jmp Block76

 Block101:
	cmp ebp,0x145392
	je Block150

 Block102:
	cmp ebp,0x147A4C
	jmp Block76

 Block103:
	cmp ebp,0x1564B7
	jg Block111

 Block104:
	je Block150

 Block105:
	cmp ebp,0x15167C
	jg Block109

 Block106:
	je Block150

 Block107:
	cmp ebp,0x14EFA7
	je Block150

 Block108:
	cmp ebp,0x151679
	jmp Block76

 Block109:
	mov eax,ebp
	sub eax,0x151697
	je Block150

 Block110:
	sub eax,0x36
	jmp Block76

 Block111:
	cmp ebp,0x158BBB
	jg Block115

 Block112:
	je Block150

 Block113:
	cmp ebp,0x1564E5
	je Block150

 Block114:
	cmp ebp,0x158BAB
	jmp Block76

 Block115:
	cmp ebp,0x158BD7
	je Block150

 Block116:
	cmp ebp,0x15B2BE
	jmp Block76

 Block117:
	cmp ebp,0x164EFE
	jg Block133

 Block118:
	je Block150

 Block119:
	cmp ebp,0x160103
	jg Block127

 Block120:
	je Block150

 Block121:
	cmp ebp,0x15D9E8
	jg Block125

 Block122:
	je Block150

 Block123:
	cmp ebp,0x15B2E9
	je Block150

 Block124:
	cmp ebp,0x15D9CC
	jmp Block76

 Block125:
	cmp ebp,0x15DA0B
	je Block150

 Block126:
	cmp ebp,0x1600E8
	jmp Block76

 Block127:
	cmp ebp,0x1627F6
	jg Block131

 Block128:
	je Block150

 Block129:
	cmp ebp,0x160138
	je Block150

 Block130:
	cmp ebp,0x1627F0
	jmp Block76

 Block131:
	mov eax,ebp
	sub eax,0x16280D
	je Block150

 Block132:
	sub eax,0x37
	jmp Block76

 Block133:
	cmp ebp,0x167637
	jg Block141

 Block134:
	je Block150

 Block135:
	cmp ebp,0x164F45
	jg Block139

 Block136:
	je Block150

 Block137:
	mov eax,ebp
	sub eax,0x164F03
	je Block150

 Block138:
	sub eax,0x15
	jmp Block76

 Block139:
	mov eax,ebp
	sub eax,0x16761E
	je Block150

 Block140:
	sub eax,2
	jmp Block76

 Block141:
	cmp ebp,0x169D59
	jg Block147

 Block142:
	je Block150

 Block143:
	cmp ebp,0x16766F
	je Block150

 Block144:
	cmp ebp,0x169D23
	jle Block77

 Block145:
	cmp ebp,0x169D26
	jle Block150

 Block146:
	jmp Block77

 Block147:
	cmp ebp,0x16C434
	jl Block77

 Block148:
	cmp ebp,0x16C436
	jle Block150

 Block149:
	cmp ebp,0x16C469
	jne Block77

 Block150:
	lea ecx,[esp+0x34]
	push 0x9EF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,eax
	cmp ebx,esi
	je Block155

 Block151:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block153

 Block152:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebx],0

 Block153:
	mov eax,dword ptr [esi]
	mov dword ptr [ebx],eax
	test eax,eax
	je Block155

 Block154:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block155:
	mov esi,dword ptr [esp+0x34]
	test esi,esi
	je Block179

 Block156:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block163

 Block157:
	test esi,esi
	je Block163

 Block158:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block160

 Block159:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block160:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block162

 Block161:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block162:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block163:
	mov dword ptr [esp+0x34],0
	jmp Block179

 Block164:
	lea ecx,[esp+0x38]
	push 0x6E4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,eax
	cmp ebx,esi
	je Block169

 Block165:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block167

 Block166:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebx],0

 Block167:
	mov eax,dword ptr [esi]
	mov dword ptr [ebx],eax
	test eax,eax
	je Block169

 Block168:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block169:
	mov ecx,dword ptr [esp+0x38]
	test ecx,ecx
	je Block171

 Block170:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x38],0

 Block171:
	mov edx,dword ptr [esp+0x64]
	push edx
	call is_final_action
	add esp,4
	test eax,eax
	je Block173

 Block172:
	push offset _S_F__2
	jmp Block178

 Block173:
	call _rand
	and eax,0x80000001
	jns Block175

 Block174:
	dec eax
	or eax,0xFFFFFFFE
	inc eax

 Block175:
	mov eax,offset _S_1
	jne Block177

 Block176:
	mov eax,offset _S_2

 Block177:
	push eax

 Block178:
	mov ecx,ebx
	call Ztl_bstr_t::op_add_assign

 Block179:
	mov eax,dword ptr [esp+0x14]
	inc eax
	cmp eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x14],eax
	jl Block2

 Block180:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 0x1C
}
}
