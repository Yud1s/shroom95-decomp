#include "regen.hpp"
// MY_UInt128.ipp
#include "UInt128.hpp"

#include "util/base.h"

// MY_UINT128::shiftLeft
__SUB_CLASS_THIS(00410530, __thiscall, 46373,  MY_UINT128, MY_UINT128&, uint32_t) {
__asm {

 Block0:
	sub esp,0x18
	mov edx,dword ptr [esp+0x1C]
	push ebx
	push esi
	xor ebx,ebx
	mov esi,ecx
	mov dword ptr [esp+8],esi
	cmp edx,ebx
	je Block4

 Block1:
	push ebx
	call MY_UINT128::compareTo_1
	test eax,eax
	je Block4

 Block2:
	cmp edx,0x7F
	jbe Block5

 Block3:
	push ebx
	mov ecx,esi
	call MY_UINT128::setValue_1

 Block4:
	mov eax,esi
	pop esi
	pop ebx
	add esp,0x18
	ret 4

 Block5:
	mov eax,edx
	cdq
	and edx,0x1F
	push ebp
	add eax,edx
	push edi
	mov edi,eax
	sar edi,5
	mov ebp,3
	xor esi,esi
	cmp edi,ebp
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	jg Block9

 Block6:
	mov ecx,dword ptr [esp+0x2C]
	lea eax,[edi*4]
	mov edx,eax
	and ecx,0x1F
	lea eax,[esp+0x24]
	sub eax,edx
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x2C],eax
	jmp Block8

 Block7:
	mov ecx,dword ptr [esp+0x14]

 Block8:
	mov eax,dword ptr [esp+0x10]
	mov eax,dword ptr [eax+ebp*4]
	xor edx,edx
	call __allshl
	add ebx,eax
	mov eax,dword ptr [esp+0x2C]
	adc esi,edx
	mov ecx,esi
	mov dword ptr [eax],ebx
	sar ecx,0x1F
	dec ebp
	sub eax,4
	cmp ebp,edi
	mov ebx,esi
	mov esi,ecx
	mov dword ptr [esp+0x2C],eax
	jge Block7

 Block9:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x1C]
	pop edi
	pop ebp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x1C]
	pop esi
	mov dword ptr [eax+8],edx
	mov dword ptr [eax+0xC],ecx
	pop ebx
	add esp,0x18
	ret 4
}
}
// MY_UINT128::operator!
__SUB_CLASS_THIS0(00410610, __thiscall, 46384,  MY_UINT128, bool) {
__asm {

 Block0:
	mov eax,3

 Block1:
	cmp dword ptr [ecx+eax*4],0
	jne Block4

 Block2:
	sub eax,1
	jns Block1

 Block3:
	mov al,1
	ret

 Block4:
	xor al,al
	ret
}
}
// MY_UINT128::setBitNumber
__SUB_CLASS_THIS(00410440, __thiscall, 46363,  MY_UINT128, MY_UINT128&, uint32_t, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov eax,ecx
	mov edx,esi
	and esi,0x1F
	mov ecx,0x1F
	sub ecx,esi
	mov esi,1
	shl esi,cl
	shr edx,5
	or dword ptr [eax+edx*4],esi
	cmp dword ptr [esp+0xC],0
	mov ecx,dword ptr [eax+edx*4]
	jne Block2

 Block1:
	xor ecx,esi
	mov dword ptr [eax+edx*4],ecx

 Block2:
	pop esi
	ret 8
}
}
// MY_UINT128::MY_UINT128
__SUB_CLASS_THIS(00410660, __thiscall, 46356,  MY_UINT128, void, const MY_UINT128&, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	mov esi,ebx
	shr esi,5
	push edi
	mov edi,ecx
	test esi,esi
	jbe Block4

 Block1:
	mov ecx,ebp
	mov eax,edi
	sub ecx,edi
	mov edx,esi
	nop

 Block2:
	mov ebp,dword ptr [ecx+eax]
	mov dword ptr [eax],ebp
	add eax,4
	sub edx,1
	jne Block2

 Block3:
	mov ebp,dword ptr [esp+0x14]

 Block4:
	shl esi,5
	cmp esi,ebx
	jae Block6

 Block5:
	push esi
	mov ecx,ebp
	call MY_UINT128::getBitNumber
	push eax
	push esi
	mov ecx,edi
	call MY_UINT128::setBitNumber
	inc esi
	cmp esi,ebx
	jb Block5

 Block6:
	mov esi,ebx
	cmp ebx,0x80
	jae Block10

 Block7:
	call _rand
	and eax,0x80000001
	jns Block9

 Block8:
	dec eax
	or eax,0xFFFFFFFE
	inc eax

 Block9:
	push eax
	push esi
	mov ecx,edi
	call MY_UINT128::setBitNumber
	inc esi
	cmp esi,0x80
	jb Block7

 Block10:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// MY_UINT128::operator&
__SUB_CLASS_THIS(004107B0, __thiscall, 46379,  MY_UINT128, MY_UINT128*, MY_UINT128*, const MY_UINT128&) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,ecx
	lea ecx,[esp+4]
	call MY_UINT128::_ctor_default
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi+0xC]
	and ecx,dword ptr [eax+0xC]
	mov edx,dword ptr [esi+8]
	and edx,dword ptr [eax+8]
	mov dword ptr [esp+0x10],ecx
	mov ecx,dword ptr [eax+4]
	and ecx,dword ptr [esi+4]
	mov dword ptr [esp+0xC],edx
	mov edx,dword ptr [eax]
	and edx,dword ptr [esi]
	mov esi,dword ptr [esp+0x18]
	push 0x80
	lea eax,[esp+8]
	mov dword ptr [esp+0xC],ecx
	push eax
	mov ecx,esi
	mov dword ptr [esp+0xC],edx
	call MY_UINT128::_ctor_2
	mov eax,esi
	pop esi
	add esp,0x10
	ret 8
}
}
// MY_UINT128::operator bool
__SUB_CLASS_THIS0(00410810, __thiscall, 46384,  MY_UINT128, bool) {
__asm {

 Block0:
	push 0
	call MY_UINT128::compareTo_1
	test eax,eax
	setne al
	ret
}
}
// MY_UINT128::setValue
__SUB_CLASS_THIS(004104A0, __thiscall, 46366,  MY_UINT128, MY_UINT128&, unsigned long) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+4]
	mov dword ptr [eax+0xC],ecx
	ret 4
}
}
// MY_UINT128::MY_UINT128
__SUB_CLASS_THIS0(00410630, __thiscall, 46358,  MY_UINT128, void) {
__asm {

 Block0:
	push 0
	mov edx,ecx
	call MY_UINT128::setValue_1
	mov eax,edx
	ret
}
}
// MY_UINT128::compareTo
__SUB_CLASS_THIS(004104C0, __thiscall, 46371,  MY_UINT128, int32_t, const MY_UINT128&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,ecx
	xor esi,esi
	sub edi,eax
	lea esp,[esp]

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [edi+eax]
	cmp ecx,edx
	jb Block5

 Block2:
	ja Block6

 Block3:
	inc esi
	add eax,4
	cmp esi,4
	jl Block1

 Block4:
	pop edi
	xor eax,eax
	pop esi
	ret 4

 Block5:
	pop edi
	or eax,0xFFFFFFFF
	pop esi
	ret 4

 Block6:
	pop edi
	mov eax,1
	pop esi
	ret 4
}
}
// MY_UINT128::setValue
__SUB_CLASS_THIS(00410480, __thiscall, 46368,  MY_UINT128, MY_UINT128&, const MY_UINT128&) {
__asm {

 Block0:
	mov eax,ecx
	mov ecx,dword ptr [esp+4]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax],edx
	mov edx,dword ptr [ecx+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ecx+8]
	mov dword ptr [eax+8],edx
	mov ecx,dword ptr [ecx+0xC]
	mov dword ptr [eax+0xC],ecx
	ret 4
}
}
// MY_UINT128::operator&=
__SUB_CLASS_THIS(00410780, __thiscall, 46368,  MY_UINT128, MY_UINT128&, const MY_UINT128&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov edx,ecx
	push 0
	mov ecx,esi
	call MY_UINT128::compareTo_1
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [esi+0xC]
	and dword ptr [edx+0xC],eax
	mov ecx,dword ptr [esi+8]
	and dword ptr [edx+8],ecx
	mov eax,dword ptr [esi+4]
	and dword ptr [edx+4],eax
	mov ecx,dword ptr [esi]
	and dword ptr [edx],ecx

 Block2:
	mov eax,edx
	pop esi
	ret 4
}
}
// MY_UINT128::operator|
__SUB_CLASS_THIS(00410720, __thiscall, 46379,  MY_UINT128, MY_UINT128*, MY_UINT128*, const MY_UINT128&) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,ecx
	lea ecx,[esp+4]
	call MY_UINT128::_ctor_default
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi+0xC]
	or ecx,dword ptr [eax+0xC]
	mov edx,dword ptr [esi+8]
	or edx,dword ptr [eax+8]
	mov dword ptr [esp+0x10],ecx
	mov ecx,dword ptr [eax+4]
	or ecx,dword ptr [esi+4]
	mov dword ptr [esp+0xC],edx
	mov edx,dword ptr [eax]
	or edx,dword ptr [esi]
	mov esi,dword ptr [esp+0x18]
	push 0x80
	lea eax,[esp+8]
	mov dword ptr [esp+0xC],ecx
	push eax
	mov ecx,esi
	mov dword ptr [esp+0xC],edx
	call MY_UINT128::_ctor_2
	mov eax,esi
	pop esi
	add esp,0x10
	ret 8
}
}
// MY_UINT128::MY_UINT128
__SUB_CLASS_THIS(00410640, __thiscall, 46357,  MY_UINT128, void, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push eax
	mov edx,ecx
	call MY_UINT128::setValue_1
	mov eax,edx
	ret 4
}
}
// MY_UINT128::operator|=
__SUB_CLASS_THIS(004106F0, __thiscall, 46368,  MY_UINT128, MY_UINT128&, const MY_UINT128&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov edx,ecx
	push 0
	mov ecx,esi
	call MY_UINT128::compareTo_1
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [esi+0xC]
	or dword ptr [edx+0xC],eax
	mov ecx,dword ptr [esi+8]
	or dword ptr [edx+8],ecx
	mov eax,dword ptr [esi+4]
	or dword ptr [edx+4],eax
	mov ecx,dword ptr [esi]
	or dword ptr [edx],ecx

 Block2:
	mov eax,edx
	pop esi
	ret 4
}
}
// MY_UINT128::getBitNumber
__SUB_CLASS_THIS(00410410, __thiscall, 46361,  MY_UINT128, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,ecx
	cmp eax,0x7F
	jbe Block2

 Block1:
	xor eax,eax
	ret 4

 Block2:
	push esi
	mov esi,eax
	shr eax,5
	mov eax,dword ptr [edx+eax*4]
	and esi,0x1F
	mov ecx,0x1F
	sub ecx,esi
	shr eax,cl
	pop esi
	and eax,1
	ret 4
}
}
// operator__86150
__SUB(00410820, __cdecl, 86150,  const MY_UINT128, const MY_UINT128) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	lea ecx,[esp+4]
	call MY_UINT128::_ctor_default
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x20]
	mov esi,dword ptr [esp+0x18]
	not eax
	not ecx
	mov dword ptr [esp+0x10],eax
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0xC],ecx
	push 0x80
	lea ecx,[esp+8]
	not edx
	not eax
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x10],edx
	mov dword ptr [esp+0xC],eax
	call MY_UINT128::_ctor_2
	mov eax,esi
	pop esi
	add esp,0x10
	ret
}
}
// MY_UINT128::compareTo
__SUB_CLASS_THIS(00410500, __thiscall, 46370,  MY_UINT128, int32_t, unsigned long) {
__asm {

 Block0:
	cmp dword ptr [ecx],0
	ja Block5

 Block1:
	cmp dword ptr [ecx+4],0
	ja Block5

 Block2:
	cmp dword ptr [ecx+8],0
	ja Block5

 Block3:
	mov ecx,dword ptr [ecx+0xC]
	mov eax,dword ptr [esp+4]
	cmp ecx,eax
	ja Block5

 Block4:
	sbb eax,eax
	ret 4

 Block5:
	mov eax,1
	ret 4
}
}
