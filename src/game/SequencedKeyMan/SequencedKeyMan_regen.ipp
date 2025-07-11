#include "regen.hpp"
// SequencedKeyMan.ipp
#include "SequencedKeyMan.hpp"

// CComboSmash::DoAction
_SUB_EXCEPTION_HANDLER(2E08D0)
__SUB_CLASS_THIS(002E08D0, __thiscall, 133605,  CComboSmash, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E08D0
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
	mov ebp,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],esi
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov esi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x1C],0

 Block5:
	mov ebx,dword ptr [edi+0x4790]
	push 0x1424406
	call get_required_combo_count
	add esp,4
	cmp ebx,eax
	jl Block8

 Block6:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 0x1424406
	push esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block8

 Block7:
	mov esi,0x1424406
	jmp Block14

 Block8:
	push 0x1421CF4
	call get_required_combo_count
	add esp,4
	cmp ebx,eax
	jl Block11

 Block9:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 0x1421CF4
	push esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block11

 Block10:
	mov esi,0x1421CF4
	jmp Block14

 Block11:
	push 0x141F5E4
	call get_required_combo_count
	add esp,4
	cmp ebx,eax
	jl Block27

 Block12:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 0x141F5E4
	push esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block27

 Block13:
	mov esi,0x141F5E4

 Block14:
	cmp dword ptr [esp+0x30],0
	je Block21

 Block15:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [eax+0x944]
	push ecx
	add eax,0x93C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block17

 Block16:
	xor edx,edx
	cmp dword ptr [ebp+0x1C],edx
	sete dl
	mov ebp,edx
	jmp Block18

 Block17:
	mov ebp,dword ptr [ebp+0x1C]

 Block18:
	lea ecx,[edi+0x88]
	push 1
	test ebp,ebp
	je Block20

 Block19:
	mov edx,dword ptr [edi+0x640]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	or edx,1
	push edx
	call eax
	push 0
	push 0
	push esi
	mov ecx,edi
	call CUserLocal::DoActiveSkill
	jmp Block28

 Block20:
	mov eax,dword ptr [edi+0x640]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	and eax,0xFFFFFFFE
	push eax
	call edx
	push 0
	push 0
	push esi
	mov ecx,edi
	call CUserLocal::DoActiveSkill
	jmp Block28

 Block21:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x30],esi
	mov dword ptr [esp+0x28],0
	test esi,esi
	je Block23

 Block22:
	mov eax,dword ptr [ebp+0xC]
	mov edi,dword ptr [ebp+0x1C]
	push 1
	push 0
	push eax
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CComboSmash::`vftable'
	mov dword ptr [esi+0x1C],edi
	jmp Block24

 Block23:
	xor esi,esi

 Block24:
	push 0
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x34],0xFFFFFFFF
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block26

 Block25:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block26:
	mov ecx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	call CSequencedKeyMan::ReserveAction

 Block27:
	xor eax,eax

 Block28:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// CFinalToss::DoAction
_SUB_EXCEPTION_HANDLER(2E05F0)
__SUB_CLASS_THIS(002E05F0, __thiscall, 133573,  CFinalToss, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E05F0
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
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [edi+0x1C]
	mov eax,dword ptr [eax+4]
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	mov dword ptr [esp+0x30],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	mov eax,dword ptr [esp+0x18]
	sete bl
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0x24],esi
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x18],0
	or esi,0xFFFFFFFF

 Block5:
	test bl,bl
	je Block7

 Block6:
	xor eax,eax
	jmp Block24

 Block7:
	cmp dword ptr [esp+0x2C],0
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	je Block9

 Block8:
	mov edx,dword ptr [edi+0x1C]
	push 0
	push 0
	push edx
	call CUserLocal::DoActiveSkill
	jmp Block24

 Block9:
	add ecx,0x88
	call CAvatar::GetOneTimeAction
	sub eax,0x95
	je Block15

 Block10:
	sub eax,2
	je Block15

 Block11:
	sub eax,2
	je Block15

 Block12:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x24],2
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [edi+0xC]
	push ecx
	mov ecx,eax
	call CFinalToss::_ctor_0
	push 0
	jmp Block20

 Block14:
	xor eax,eax
	push eax
	jmp Block20

 Block15:
	mov edx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	cmp dword ptr [edx+0x3C],0
	jne Block23

 Block16:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x24],1
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [edi+0xC]
	push ecx
	mov ecx,eax
	call CFinalToss::_ctor_0
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	push 1

 Block20:
	sub esp,8
	mov ecx,esp
	mov dword ptr [ecx+4],eax
	mov dword ptr [esp+0x38],esp
	mov dword ptr [esp+0x30],esi
	test eax,eax
	je Block22

 Block21:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block22:
	mov ecx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	call CSequencedKeyMan::ReserveAction

 Block23:
	mov eax,1

 Block24:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4
}
}
// CFinalToss::CheckPreOrderSkill
__SUB_CLASS_THIS(002DE710, __thiscall, 133574,  CFinalToss, int32_t, long) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [esp+4],0x141F5E1
	sete al
	ret 4
}
}
// CTripleAttack::DoAction
_SUB_EXCEPTION_HANDLER(2E0050)
__SUB_CLASS_THIS(002E0050, __thiscall, 133522,  CTripleAttack, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E0050
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
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [esi]
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [edx+0x10]
	mov ebp,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 1
	mov ecx,esi
	mov dword ptr [esp+0x30],0
	call eax
	push eax
	push edi
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	mov eax,dword ptr [esp+0x1C]
	sete byte ptr [esp+0x17]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x28],edi
	test eax,eax
	je Block5

 Block1:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	mov dword ptr [esp+0x1C],0
	or edi,0xFFFFFFFF

 Block5:
	cmp byte ptr [esp+0x17],0
	jne Block22

 Block6:
	cmp dword ptr [esp+0x30],0
	je Block8

 Block7:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x10]
	push 0
	push 0
	push 1
	mov ecx,esi
	call eax
	push eax
	mov ecx,ebx
	call CUserLocal::DoActiveSkill
	jmp Block23

 Block8:
	lea ecx,[ebx+0x88]
	call CAvatar::GetOneTimeAction
	sub eax,0x94
	je Block14

 Block9:
	sub eax,2
	je Block14

 Block10:
	sub eax,2
	je Block14

 Block11:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x28],2
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [esi+0xC]
	push ecx
	mov ecx,eax
	call CTripleAttack::_ctor_0
	push 0
	jmp Block19

 Block13:
	xor eax,eax
	push eax
	jmp Block19

 Block14:
	mov edx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	cmp dword ptr [edx+0x3C],0
	jne Block22

 Block15:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x28],1
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [esi+0xC]
	push ecx
	mov ecx,eax
	call CTripleAttack::_ctor_0
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	push 1

 Block19:
	sub esp,8
	mov ecx,esp
	mov dword ptr [ecx+4],eax
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [esp+0x34],edi
	test eax,eax
	je Block21

 Block20:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov ecx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	call CSequencedKeyMan::ReserveAction

 Block22:
	xor eax,eax

 Block23:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// CTripleAttack::GetSkillID
__SUB_CLASS_THIS(002DE5B0, __thiscall, 133523,  CTripleAttack, long, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	sub eax,0x7D0
	neg eax
	sbb eax,eax
	and eax,0x10C8D2
	add eax,0x1312D0F
	ret 4
}
}
// CTripleAttack::CheckPreOrderSkill
__SUB_CLASS_THIS(002DE5E0, __thiscall, 133524,  CTripleAttack, int32_t, long) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	sub eax,0x7D0
	neg eax
	sbb eax,eax
	and eax,0xF4234
	add eax,0x1312D0E
	xor ecx,ecx
	cmp dword ptr [esp+4],eax
	sete cl
	mov eax,ecx
	ret 4
}
}
// KeySequenceElement::GetSkillID
__SUB_CLASS_THIS(002DE4D0, __thiscall, 60898,  KeySequenceElement, long, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CFinalBlow::GetValidDuration
__SUB_CLASS_THIS0(002DE6A0, __thiscall, 133558,  CFinalBlow, unsigned long) {
__asm {

 Block0:
	mov eax,0x7D0
	ret
}
}
// CFinishAttack::CFinishAttack
__SUB_CLASS_THIS(002DE730, __thiscall, 133663,  CFinishAttack, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push 0
	push 0x3E8
	push eax
	mov esi,ecx
	call KeySequenceElement::_ctor_0
	mov ecx,dword ptr [esp+0xC]
	int 3// TODO: 	mov dword ptr [esi],offset CFinishAttack::`vftable'
	mov dword ptr [esi+0x1C],ecx
	mov eax,esi
	pop esi
	ret 8
}
}
// CDoubleAttack::DoAction
_SUB_EXCEPTION_HANDLER(2DFEF0)
__SUB_CLASS_THIS(002DFEF0, __thiscall, 133505,  CDoubleAttack, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DFEF0
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
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [esi]
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [edx+0x10]
	mov ebp,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 1
	mov ecx,esi
	mov dword ptr [esp+0x30],0
	call eax
	push eax
	push edi
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	mov eax,dword ptr [esp+0x1C]
	sete byte ptr [esp+0x17]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block5

 Block1:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	mov dword ptr [esp+0x1C],0

 Block5:
	cmp byte ptr [esp+0x17],0
	jne Block15

 Block6:
	cmp dword ptr [esp+0x30],0
	je Block8

 Block7:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x10]
	push 0
	push 0
	push 1
	mov ecx,esi
	call eax
	push eax
	mov ecx,ebx
	call CUserLocal::DoActiveSkill
	jmp Block16

 Block8:
	lea ecx,[ebx+0x88]
	call CAvatar::GetOneTimeAction
	add eax,0xFFFFFF6F
	cmp eax,2
	ja Block15

 Block9:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x28],1
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [esi+0xC]
	push ecx
	mov ecx,eax
	call CDoubleAttack::_ctor_0
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	push 0
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x34],0xFFFFFFFF
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block14

 Block13:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov ecx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	call CSequencedKeyMan::ReserveAction

 Block15:
	xor eax,eax

 Block16:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// KeySequenceElement::Check
__SUB_CLASS_THIS(002DE470, __thiscall, 60896,  KeySequenceElement, int32_t, long, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xC]
	cmp eax,dword ptr [esp+4]
	jne Block3

 Block1:
	mov ecx,dword ptr [ecx+0x10]
	cmp ecx,dword ptr [esp+8]
	jne Block3

 Block2:
	mov eax,1
	ret 8

 Block3:
	xor eax,eax
	ret 8
}
}
// CFinalBlow::CheckPreOrderSkill
__SUB_CLASS_THIS(002DE6B0, __thiscall, 133557,  CFinalBlow, int32_t, long) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	sub eax,0x7D0
	neg eax
	sbb eax,eax
	and eax,0x10C8D2
	add eax,0x1312D0F
	xor ecx,ecx
	cmp dword ptr [esp+4],eax
	sete cl
	mov eax,ecx
	ret 4
}
}
// KeySequence::~KeySequence
_SUB_EXCEPTION_HANDLER(2DFD00)
__SUB_CLASS_THIS0(002DFD00, __thiscall, 63668,  KeySequence, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DFD00
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
	lea ecx,[esi+4]
	mov dword ptr [esp+0x14],0
	call ZArray<long>::RemoveAll
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZArray<ZRef<KeySequenceElement>>::RemoveAll
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CFinalCharge::CheckPreOrderSkill
__SUB_CLASS_THIS(002DE640, __thiscall, 133540,  CFinalCharge, int32_t, long) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [esp+4],0x141F5E1
	sete al
	ret 4
}
}
// CComboDrain::DoAction
_SUB_EXCEPTION_HANDLER(2E0B00)
__SUB_CLASS_THIS(002E0B00, __thiscall, 133620,  CComboDrain, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E0B00
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
	mov dword ptr [esp+0x14],ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebp,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x1C],0

 Block5:
	mov esi,dword ptr [ebp+0x4790]
	push 0x1424407
	call get_required_combo_count
	add esp,4
	cmp esi,eax
	jl Block8

 Block6:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 0x1424407
	push ebx
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block8

 Block7:
	mov eax,0x1424407
	jmp Block11

 Block8:
	push 0x141F5E5
	call get_required_combo_count
	add esp,4
	cmp esi,eax
	jl Block19

 Block9:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 0x141F5E5
	push ebx
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block19

 Block10:
	mov eax,0x141F5E5

 Block11:
	cmp dword ptr [esp+0x30],0
	je Block13

 Block12:
	push 0
	push 0
	push eax
	mov ecx,ebp
	call CUserLocal::DoActiveSkill
	jmp Block20

 Block13:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x30],esi
	mov dword ptr [esp+0x28],0
	test esi,esi
	je Block15

 Block14:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx+0xC]
	push 1
	push 0
	push eax
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CComboDrain::`vftable'
	jmp Block16

 Block15:
	xor esi,esi

 Block16:
	push 0
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x34],0xFFFFFFFF
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block18

 Block17:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block18:
	mov ecx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	call CSequencedKeyMan::ReserveAction

 Block19:
	xor eax,eax

 Block20:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// CFinalBlow::DoAction
_SUB_EXCEPTION_HANDLER(2E0420)
__SUB_CLASS_THIS(002E0420, __thiscall, 133556,  CFinalBlow, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E0420
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x18],ecx
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov esi,eax
	sub esi,0x7D0
	neg esi
	sbb esi,esi
	lea eax,[esp+0x1C]
	and esi,0x1116F5
	push eax
	add esi,0x1312D10
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x38],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	mov eax,dword ptr [esp+0x20]
	sete byte ptr [esp+0x17]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block4

 Block1:
	lea ebp,[eax-0x10]
	lea ebx,[ebp+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block4

 Block3:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block4:
	cmp byte ptr [esp+0x17],0
	jne Block8

 Block5:
	cmp dword ptr [esp+0x34],0
	je Block9

 Block6:
	lea ecx,[esp+0x34]
	push ecx
	push 0
	push esi
	mov ecx,edi
	mov dword ptr [esp+0x40],0
	call CUserLocal::DoActiveSkill
	test eax,eax
	jne Block23

 Block7:
	cmp dword ptr [esp+0x34],3
	je Block23

 Block8:
	xor eax,eax
	jmp Block24

 Block9:
	lea ecx,[edi+0x88]
	call CAvatar::GetOneTimeAction
	sub eax,0x95
	je Block15

 Block10:
	sub eax,2
	je Block15

 Block11:
	sub eax,2
	je Block15

 Block12:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x2C],2
	test eax,eax
	je Block14

 Block13:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [edx+0xC]
	push ecx
	mov ecx,eax
	call CFinalBlow::_ctor_0
	push 0
	jmp Block20

 Block14:
	xor eax,eax
	push eax
	jmp Block20

 Block15:
	mov edx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	cmp dword ptr [edx+0x3C],0
	jne Block23

 Block16:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x2C],1
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx+0xC]
	push edx
	mov ecx,eax
	call CFinalBlow::_ctor_0
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	push 1

 Block20:
	sub esp,8
	mov ecx,esp
	mov dword ptr [ecx+4],eax
	mov dword ptr [esp+0x40],esp
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block22

 Block21:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block22:
	mov ecx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	call CSequencedKeyMan::ReserveAction

 Block23:
	mov eax,1

 Block24:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CSequencedKeyMan::ReserveAction
_SUB_EXCEPTION_HANDLER(2DFD60)
__SUB_CLASS_THIS(002DFD60, __thiscall, 60934,  CSequencedKeyMan, void, NakedParam<ZRef<KeySequenceElement>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DFD60
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
	mov edi,ecx
	xor esi,esi
	mov dword ptr [esp+0x24],0
	mov dword ptr [esp+0x18],esi
	mov byte ptr [esp+0x24],1
	cmp dword ptr [edi+0x3C],esi
	je Block2

 Block1:
	mov eax,dword ptr [edi+0x44]
	push eax
	lea ecx,[esp+0x18]
	call ZRef<KeySequenceElement>::op_assign_copy
	mov esi,dword ptr [esp+0x18]

 Block2:
	cmp dword ptr [esp+0x34],0
	jne Block7

 Block3:
	test esi,esi
	je Block5

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	push 1
	mov ecx,esi
	call edx
	jmp Block6

 Block5:
	or eax,0xFFFFFFFF

 Block6:
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x14]
	call eax
	test eax,eax
	je Block8

 Block7:
	lea ecx,[edi+0x34]
	call ZList<ZRef<KeySequenceElement>>::AddTail_
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy

 Block8:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0x24],0
	test esi,esi
	je Block11

 Block9:
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block11

 Block10:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block11:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block15

 Block12:
	add eax,4
	push eax
	call ebx
	test eax,eax
	jne Block15

 Block13:
	mov ecx,dword ptr [esp+0x30]
	add ecx,4
	push ecx
	call ebp
	mov ecx,dword ptr [esp+0x30]
	test ecx,ecx
	je Block15

 Block14:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block15:
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
// CFinalCharge::CFinalCharge
__SUB_CLASS_THIS(002DE610, __thiscall, 133537,  CFinalCharge, void, long, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push 1
	push 0
	push eax
	mov esi,ecx
	call KeySequenceElement::_ctor_0
	mov ecx,dword ptr [esp+0xC]
	int 3// TODO: 	mov dword ptr [esi],offset CFinalCharge::`vftable'
	mov dword ptr [esi+0x1C],ecx
	mov eax,esi
	pop esi
	ret 8
}
}
// CDoubleAttack::CheckPreOrderSkill
__SUB_CLASS_THIS(002DE550, __thiscall, 133507,  CDoubleAttack, int32_t, long) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [esp+4],0xFFFFFFFF
	sete al
	ret 4
}
}
// CMassacre::DoAction
_SUB_EXCEPTION_HANDLER(2E0E70)
__SUB_CLASS_THIS(002E0E70, __thiscall, 133650,  CMassacre, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E0E70
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	mov ecx,esi
	call edx
	push eax
	push 0x3FC
	call get_novice_skill_as_race
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add esp,8
	cmp dword ptr [ecx+0x4180],0
	jle Block9

 Block1:
	cmp dword ptr [esp+0x1C],0
	je Block3

 Block2:
	push 0
	push 0
	push eax
	mov ecx,esi
	call CUserLocal::DoActiveSkill
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4

 Block3:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x1C],esi
	mov dword ptr [esp+0x14],0
	test esi,esi
	je Block5

 Block4:
	mov eax,dword ptr [edi+0xC]
	push 1
	push 0
	push eax
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CMassacre::`vftable'
	jmp Block6

 Block5:
	xor esi,esi

 Block6:
	push 0
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x20],0xFFFFFFFF
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block8

 Block7:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov ecx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	call CSequencedKeyMan::ReserveAction
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4

 Block9:
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4
}
}
// KeySequenceElement::KeySequenceElement
_SUB_EXCEPTION_HANDLER(2DE400)
__SUB_CLASS_THIS(002DE400, __thiscall, 60893,  KeySequenceElement, void, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DE400
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
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esp+0x1C]
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElement::`vftable'
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+0x10],ecx
	mov dword ptr [esi+0x14],edx
	call timeGetTime
	mov dword ptr [esi+0x18],eax
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CFinalToss::GetValidDuration
__SUB_CLASS_THIS0(002DE720, __thiscall, 133575,  CFinalToss, unsigned long) {
__asm {

 Block0:
	mov eax,0x7D0
	ret
}
}
// KeySequenceElementIgnoreUp::NeedIgnore
__SUB_CLASS_THIS(002DE500, __thiscall, 60914,  KeySequenceElementIgnoreUp, int32_t, long, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block3

 Block1:
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+4]
	push eax
	mov eax,dword ptr [esp+8]
	push eax
	call edx
	test eax,eax
	jne Block3

 Block2:
	ret 8

 Block3:
	mov eax,1
	ret 8
}
}
// CSequencedKeyMan::Process
_SUB_EXCEPTION_HANDLER(2E3400)
__SUB_CLASS_THIS(002E3400, __thiscall, 60931,  CSequencedKeyMan, int32_t, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E3400
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	cmp eax,ebp
	je Block71

 Block1:
	mov eax,dword ptr [eax+0x640]
	and eax,0xFFFFFFFE
	cmp eax,0x12
	je Block71

 Block2:
	mov eax,dword ptr [esp+0x6C]
	cmp eax,0x2A
	jne Block4

 Block3:
	mov dword ptr [esp+0x6C],0x36
	mov eax,dword ptr [esp+0x6C]

 Block4:
	cmp dword ptr [edi+0x48],eax
	jne Block6

 Block5:
	mov ecx,dword ptr [esp+0x70]
	cmp ecx,dword ptr [edi+0x4C]
	je Block72

 Block6:
	mov edx,dword ptr [esp+0x70]
	mov dword ptr [edi+0x48],eax
	mov dword ptr [edi+0x4C],edx
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x48],0
	mov dword ptr [esp+0x50],ebp
	mov dword ptr [esp+0x54],ebp
	mov dword ptr [esp+0x58],ebp
	xor ebx,ebx
	mov dword ptr [esp+0x64],ebp
	mov dword ptr [esp+0x1C],ebx
	mov eax,dword ptr [edi+0x2C]
	mov byte ptr [esp+0x64],1
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block53

 Block7:
	lea esp,[esp]

 Block8:
	mov dword ptr [esp+0x20],eax
	lea eax,[esp+0x24]
	push eax
	call ZList<ActiveCandidateEntity>::GetNext
	add esp,4
	mov esi,eax
	mov ecx,dword ptr [esi]
	push ebp
	lea edx,[esp+0x30]
	mov dword ptr [esp+0x30],ecx
	push edx
	lea ecx,[edi+4]
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	mov ebp,eax
	mov eax,dword ptr [esi+4]
	test eax,eax
	jl Block10

 Block9:
	mov ecx,dword ptr [ebp+0xC]
	mov ebx,dword ptr [esp+0x44]
	lea eax,[ecx+eax*8]
	jmp Block11

 Block10:
	xor ebx,ebx
	or dword ptr [esp+0x18],1
	mov dword ptr [esp+0x44],ebx
	lea eax,[esp+0x40]

 Block11:
	mov edi,dword ptr [eax+4]
	mov dword ptr [esp+0x34],edi
	test edi,edi
	je Block13

 Block12:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	test byte ptr [esp+0x18],1
	mov byte ptr [esp+0x64],2
	je Block18

 Block14:
	and dword ptr [esp+0x18],0xFFFFFFFE
	test ebx,ebx
	je Block18

 Block15:
	add ebx,4
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block16:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x44]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block17:
	mov dword ptr [esp+0x44],0

 Block18:
	xor ebx,ebx
	cmp dword ptr [esi+4],ebx
	jl Block21

 Block19:
	mov ecx,dword ptr [esp+0x70]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [esp+0x6C]
	mov eax,dword ptr [eax+0xC]
	push ecx
	push edx
	mov ecx,edi
	call eax
	test eax,eax
	je Block21

 Block20:
	push 0xFFFFFFFF
	lea ecx,[esp+0x20]
	mov ebx,1
	call ZArray<long>::InsertBefore
	mov ecx,dword ptr [esi]
	mov dword ptr [eax],ecx

 Block21:
	cmp dword ptr [esi+0xC],0
	jbe Block23

 Block22:
	call timeGetTime
	mov edx,dword ptr [esi+8]
	add edx,dword ptr [esi+0xC]
	cmp edx,eax
	jb Block48

 Block23:
	test ebx,ebx
	je Block28

 Block24:
	mov byte ptr [esp+0x64],1
	test edi,edi
	je Block51

 Block25:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block26:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block27:
	mov dword ptr [esp+0x34],0
	jmp Block51

 Block28:
	inc dword ptr [esi+4]
	mov eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [esi+4]
	xor ebx,ebx
	test eax,eax
	je Block30

 Block29:
	mov edx,dword ptr [eax-4]
	cmp edx,ecx
	ja Block31

 Block30:
	mov ecx,dword ptr [esp+0x20]
	push ecx
	jmp Block49

 Block31:
	dec edx
	cmp edx,ecx
	jne Block40

 Block32:
	lea edx,[eax+ecx*8]
	push edx
	lea ecx,[esp+0x34]
	call ZRef<KeySequenceElement>::op_assign_copy
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block41

 Block33:
	cmp dword ptr [eax-4],0
	je Block41

 Block34:
	cmp dword ptr [esp+0x50],0
	jne Block41

 Block35:
	mov ebx,dword ptr [esp+0x34]
	xor edi,edi

 Block36:
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block39

 Block37:
	cmp edi,dword ptr [eax-4]
	jae Block39

 Block38:
	lea ecx,[esp+0x48]
	call ZList<ActiveCandidateEntity>::AddTail_
	mov dword ptr [eax+4],0xFFFFFFFF
	mov ecx,dword ptr [esi+8]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [ebp+0x10]
	mov ecx,dword ptr [edx+edi*4]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [ebx+0x14]
	add edx,dword ptr [esi+0xC]
	inc edi
	mov dword ptr [eax+0xC],edx
	jmp Block36

 Block39:
	mov ebx,1
	jmp Block41

 Block40:
	lea eax,[eax+ecx*8]
	push eax
	lea ecx,[esp+0x34]
	call ZRef<KeySequenceElement>::op_assign_copy

 Block41:
	mov ecx,dword ptr [esi+4]
	mov edx,dword ptr [ebp+0xC]
	lea eax,[edx+ecx*8]
	push eax
	lea ecx,[esp+0x34]
	call ZRef<KeySequenceElement>::op_assign_copy
	mov edi,dword ptr [esp+0x34]
	mov eax,dword ptr [edi+0x14]
	test eax,eax
	jl Block43

 Block42:
	add dword ptr [esi+0xC],eax
	jmp Block44

 Block43:
	mov dword ptr [esi+0xC],0

 Block44:
	mov eax,dword ptr [esp+0x70]
	mov ecx,dword ptr [esp+0x6C]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+4]
	push eax
	push ecx
	mov ecx,edi
	call edx
	test eax,eax
	je Block48

 Block45:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+8]
	push 0
	mov ecx,edi
	call edx
	test eax,eax
	je Block47

 Block46:
	mov dword ptr [esp+0x28],1

 Block47:
	test ebx,ebx
	je Block50

 Block48:
	mov eax,dword ptr [esp+0x20]
	push eax

 Block49:
	mov ecx,dword ptr [esp+0x18]
	add ecx,0x20
	call ZList<ActiveCandidateEntity>::RemoveAt

 Block50:
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x64],1
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>

 Block51:
	mov eax,dword ptr [esp+0x24]
	mov edi,dword ptr [esp+0x14]
	xor ebp,ebp
	test eax,eax
	jne Block8

 Block52:
	mov ebx,dword ptr [esp+0x1C]

 Block53:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	cmp dword ptr [esp+0x50],ebp
	je Block56

 Block54:
	lea esi,[edi+0x20]
	mov ecx,esi
	call ZList<ActiveCandidateEntity>::RemoveAll
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,esi
	call ZList<ActiveCandidateEntity>::AddHead_List

 Block55:
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x64],0
	call ZArray<long>::RemoveAll
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	mov dword ptr [esp+0x48],0
	call ZList<ActiveCandidateEntity>::RemoveAll
	mov eax,dword ptr [esp+0x28]
	jmp Block73

 Block56:
	call CUserLocal::IsDashing
	test eax,eax
	jne Block55

 Block57:
	mov eax,dword ptr [edi+0x1C]
	mov dword ptr [esp+0x24],ebp
	test eax,eax
	je Block55

 Block58:
	cmp ebp,dword ptr [eax-4]
	jae Block55

 Block59:
	lea ecx,[esp+0x1C]
	xor esi,esi
	call ZArray<long>::GetCount
	test eax,eax
	jbe Block63

 Block60:
	mov edx,dword ptr [edi+0x1C]
	mov ecx,dword ptr [edx+ebp*4]
	mov edi,edi

 Block61:
	cmp dword ptr [ebx+esi*4],ecx
	je Block70

 Block62:
	inc esi
	cmp esi,eax
	jb Block61

 Block63:
	mov eax,dword ptr [edi+0x1C]
	mov ecx,dword ptr [eax+ebp*4]
	push 0
	lea edx,[esp+0x30]
	mov dword ptr [esp+0x30],ecx
	push edx
	lea ecx,[edi+4]
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	mov eax,dword ptr [eax+0xC]
	mov esi,dword ptr [eax+4]
	mov dword ptr [esp+0x44],esi
	test esi,esi
	je Block65

 Block64:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block65:
	mov eax,dword ptr [esp+0x70]
	mov ecx,dword ptr [esp+0x6C]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+4]
	push eax
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x6C],3
	call edx
	test eax,eax
	je Block67

 Block66:
	call timeGetTime
	mov edx,dword ptr [esi+0x14]
	mov edi,eax
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0x1C]
	mov ebp,dword ptr [ecx+ebp*4]
	mov ecx,eax
	add ecx,0x20
	xor ebx,ebx
	mov dword ptr [esp+0x3C],edx
	call ZList<ActiveCandidateEntity>::AddTail_
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x24]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x1C]
	mov dword ptr [eax+8],edi
	mov dword ptr [eax+0xC],ecx

 Block67:
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x68],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block69

 Block68:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block69:
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x44],0

 Block70:
	inc ebp
	jmp Block57

 Block71:
	lea ecx,[edi+0x20]
	call ZList<ActiveCandidateEntity>::RemoveAll

 Block72:
	xor eax,eax

 Block73:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 8
}
}
// CFinishAttack::GetDummySkillID
__SUB_CLASS_THIS0(002DE770, __thiscall, 133667,  CFinishAttack, long) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x1C]
	lea eax,[ecx-0x19]
	cmp eax,3
	ja Block6

 Block1:
	cmp EAX, 0
je Block5
cmp EAX, 1
je Block4
cmp EAX, 2
je Block3
cmp EAX, 3
je Block2


 Block2:
	mov eax,0x1E84BF3
	ret

 Block3:
	mov eax,0x1E84BF2
	ret

 Block4:
	mov eax,0x1E84BF1
	ret

 Block5:
	mov eax,0x1E84BF0
	ret

 Block6:
	mov eax,0x1E84BEF
	ret
}
}
// CFinishAttack::GetValidDuration
__SUB_CLASS_THIS0(002DE7C0, __thiscall, 133669,  CFinishAttack, unsigned long) {
__asm {

 Block0:
	mov eax,0x7D0
	ret
}
}
// CSequencedKeyMan::Update
_SUB_EXCEPTION_HANDLER(2DF980)
__SUB_CLASS_THIS0(002DF980, __thiscall, 60930,  CSequencedKeyMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DF980
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
	mov ebx,ecx
	cmp dword ptr [ebx+0x3C],0
	je Block17

 Block1:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block16

 Block2:
	mov eax,dword ptr [ecx+0x640]
	and eax,0xFFFFFFFE
	cmp eax,0x12
	je Block16

 Block3:
	add ecx,0x88
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jg Block17

 Block4:
	cmp dword ptr [ebx+0x3C],0
	je Block17

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]

 Block6:
	mov eax,dword ptr [ebx+0x40]
	mov esi,dword ptr [eax+4]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block8

 Block7:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x18]
	mov edi,dword ptr [esi+0x18]
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call eax
	add edi,eax
	call timeGetTime
	cmp edi,eax
	ja Block13

 Block9:
	mov eax,dword ptr [ebx+0x40]
	lea ecx,[ebx+0x34]
	push eax
	call ZList<ZRef<KeySequenceElement>>::RemoveAt
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ebp
	test eax,eax
	jne Block11

 Block10:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block11:
	cmp dword ptr [ebx+0x3C],0
	mov dword ptr [esp+0x18],0
	jne Block6

 Block12:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push 1
	mov ecx,esi
	call eax
	test eax,eax
	je Block15

 Block14:
	mov eax,dword ptr [ebx+0x40]
	lea ecx,[ebx+0x34]
	push eax
	call ZList<ZRef<KeySequenceElement>>::RemoveAt

 Block15:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret

 Block16:
	lea ecx,[ebx+0x34]
	call ZList<ZRef<KeySequenceElement>>::RemoveAll

 Block17:
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
// CFinalCharge::DoAction
_SUB_EXCEPTION_HANDLER(2E0200)
__SUB_CLASS_THIS(002E0200, __thiscall, 133539,  CFinalCharge, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E0200
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
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 0x141F5E2
	push eax
	mov dword ptr [esp+0x30],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	mov eax,dword ptr [esp+0x18]
	sete bl
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block4

 Block1:
	lea esi,[eax-0x10]
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	test bl,bl
	jne Block29

 Block5:
	cmp dword ptr [esp+0x2C],0
	mov esi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	je Block15

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	mov ecx,esi
	call eax
	mov ecx,dword ptr [eax+0x944]
	push ecx
	add eax,0x93C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block8

 Block7:
	xor edx,edx
	cmp dword ptr [edi+0x1C],edx
	sete dl
	mov edi,edx
	jmp Block9

 Block8:
	mov edi,dword ptr [edi+0x1C]

 Block9:
	lea ecx,[esi+0x88]
	push 1
	test edi,edi
	je Block11

 Block10:
	mov edx,dword ptr [esi+0x640]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	or edx,1
	push edx
	call eax
	jmp Block12

 Block11:
	mov eax,dword ptr [esi+0x640]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	and eax,0xFFFFFFFE
	push eax
	call edx

 Block12:
	lea eax,[esp+0x2C]
	push eax
	push 0
	push 0x141F5E2
	mov ecx,esi
	mov dword ptr [esp+0x38],0
	call CUserLocal::DoActiveSkill
	test eax,eax
	jne Block14

 Block13:
	cmp dword ptr [esp+0x2C],3
	jne Block29

 Block14:
	mov eax,1
	jmp Block30

 Block15:
	lea ecx,[esi+0x88]
	call CAvatar::GetOneTimeAction
	sub eax,0x95
	je Block21

 Block16:
	sub eax,2
	je Block21

 Block17:
	sub eax,2
	je Block21

 Block18:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x24],2
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [edi+0xC]
	push ecx
	push edx
	mov ecx,eax
	call CFinalCharge::_ctor_0
	push 0
	jmp Block26

 Block20:
	xor eax,eax
	push eax
	jmp Block26

 Block21:
	mov eax,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	cmp dword ptr [eax+0x3C],0
	jne Block29

 Block22:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x24],1
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [edi+0xC]
	push ecx
	push edx
	mov ecx,eax
	call CFinalCharge::_ctor_0
	jmp Block25

 Block24:
	xor eax,eax

 Block25:
	push 1

 Block26:
	sub esp,8
	mov ecx,esp
	mov dword ptr [ecx+4],eax
	mov dword ptr [esp+0x38],esp
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block28

 Block27:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block28:
	mov ecx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	call CSequencedKeyMan::ReserveAction

 Block29:
	xor eax,eax

 Block30:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4
}
}
// CTripleAttack::CTripleAttack
__SUB_CLASS_THIS(002DE590, __thiscall, 133520,  CTripleAttack, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push 1
	push 0x294
	push eax
	mov esi,ecx
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CTripleAttack::`vftable'
	mov eax,esi
	pop esi
	ret 4
}
}
// KeySequenceElement::GetCreatedTime
__SUB_CLASS_THIS0(002DE4F0, __thiscall, 60900,  KeySequenceElement, unsigned long) {
__asm {

 Block0:
	mov eax,0x3E8
	ret
}
}
// KeySequenceElement::NeedIgnore
__SUB_CLASS_THIS(002DE4A0, __thiscall, 60896,  KeySequenceElement, int32_t, long, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block3

 Block1:
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+4]
	push eax
	mov eax,dword ptr [esp+8]
	push eax
	call edx
	test eax,eax
	je Block3

 Block2:
	mov eax,1
	ret 8

 Block3:
	xor eax,eax
	ret 8
}
}
// CDashTrigger::DoAction
__SUB_CLASS_THIS(002DF5F0, __thiscall, 133490,  CDashTrigger, int32_t, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	sub esp,8
	push ebp
	push esi
	push edi
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block5

 Block1:
	push ebx
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x14],0
	pop ebx

 Block5:
	mov ecx,edi
	call CUser::GetDashingSkill
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	mov esi,eax
	push esi
	push ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block7

 Block6:
	push 0
	push 0
	push esi
	mov ecx,edi
	call CUserLocal::DoActiveSkill

 Block7:
	pop edi
	pop esi
	mov eax,1
	pop ebp
	add esp,8
	ret 4
}
}
// CWhirlWind::DoAction
_SUB_EXCEPTION_HANDLER(2E0780)
__SUB_CLASS_THIS(002E0780, __thiscall, 133590,  CWhirlWind, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E0780
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
	mov ebp,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 0x1421CF6
	push eax
	mov dword ptr [esp+0x30],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	mov eax,dword ptr [esp+0x18]
	sete bl
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x18],0

 Block5:
	test bl,bl
	je Block7

 Block6:
	xor eax,eax
	jmp Block15

 Block7:
	cmp dword ptr [esp+0x2C],0
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	je Block9

 Block8:
	push 0
	push 0
	push 0x1421CF6
	call CUserLocal::DoActiveSkill
	jmp Block15

 Block9:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x24],1
	test esi,esi
	je Block11

 Block10:
	mov eax,dword ptr [ebp+0xC]
	push 1
	push 0
	push eax
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CWhirlWind::`vftable'
	jmp Block12

 Block11:
	xor esi,esi

 Block12:
	push 0
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x30],0xFFFFFFFF
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block14

 Block13:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov ecx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	call CSequencedKeyMan::ReserveAction
	mov eax,1

 Block15:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4
}
}
// CFinalCharge::GetValidDuration
__SUB_CLASS_THIS0(002DE650, __thiscall, 133541,  CFinalCharge, unsigned long) {
__asm {

 Block0:
	mov eax,0x7D0
	ret
}
}
// CFinalBlow::CFinalBlow
__SUB_CLASS_THIS(002DE680, __thiscall, 133554,  CFinalBlow, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push 1
	push 0
	push eax
	mov esi,ecx
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CFinalBlow::`vftable'
	mov eax,esi
	pop esi
	ret 4
}
}
// CSequencedKeyMan::~CSequencedKeyMan
_SUB_EXCEPTION_HANDLER(2DF6F0)
__SUB_CLASS_THIS0(002DF6F0, __thiscall, 60930,  CSequencedKeyMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DF6F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CSequencedKeyMan::`vftable'
	lea ecx,[esi+0x34]
	mov dword ptr [esp+0x14],3
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<KeySequenceElement>>::`vftable'
	call ZList<ZRef<KeySequenceElement>>::RemoveAll
	lea ecx,[esi+0x20]
	mov byte ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ActiveCandidateEntity>::`vftable'
	call ZList<ActiveCandidateEntity>::RemoveAll
	lea ecx,[esi+0x1C]
	mov byte ptr [esp+0x14],1
	call ZArray<long>::RemoveAll
	lea ecx,[esi+4]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, KeySequence, unsigned long>::`vftable'
	call ZMap<unsigned long, KeySequence, unsigned long>::RemoveAll
	mov dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CFinalToss::CFinalToss
__SUB_CLASS_THIS(002DE6E0, __thiscall, 133571,  CFinalToss, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push 1
	push 0
	push eax
	mov esi,ecx
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CFinalToss::`vftable'
	mov dword ptr [esi+0x1C],0x1421CF3
	mov eax,esi
	pop esi
	ret 4
}
}
// CSequencedKeyMan::CSequencedKeyMan
__SUB_CLASS_THIS0(002DF680, __thiscall, 60928,  CSequencedKeyMan, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esi+4]
	xor edi,edi
	cmp ecx,edi
	je Block2

 Block1:
	lea eax,[ecx-4]
	mov dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CSequencedKeyMan::`vftable'
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, KeySequence, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, KeySequence, unsigned long>::_CalcAutoGrow
	mov dword ptr [esi+0x1C],edi
	mov dword ptr [esi+0x28],edi
	mov dword ptr [esi+0x2C],edi
	mov dword ptr [esi+0x30],edi
	int 3// TODO: 	mov dword ptr [esi+0x20],offset ZList<ActiveCandidateEntity>::`vftable'
	mov dword ptr [esi+0x3C],edi
	mov dword ptr [esi+0x40],edi
	mov dword ptr [esi+0x44],edi
	int 3// TODO: 	mov dword ptr [esi+0x34],offset ZList<ZRef<KeySequenceElement>>::`vftable'
	mov dword ptr [esi+0x4C],edi
	pop edi
	mov dword ptr [esi+0x48],0xFFFFFFFF
	mov eax,esi
	pop esi
	ret
}
}
// KeySequenceElement::CheckPreOrderSkill
__SUB_CLASS_THIS(002DE4E0, __thiscall, 60899,  KeySequenceElement, int32_t, long) {
__asm {

 Block0:
	mov eax,1
	ret 4
}
}
// CSequencedKeyMan::Clear
__SUB_CLASS_THIS0(002DEF40, __thiscall, 60930,  CSequencedKeyMan, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0x1C]
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x20]
	call ZList<ActiveCandidateEntity>::RemoveAll
	lea ecx,[esi+4]
	pop esi
	jmp  ZMap<unsigned long, KeySequence, unsigned long>::RemoveAll
}
}
// CFinishAttack::GetSkillID
__SUB_CLASS_THIS(002DE760, __thiscall, 133666,  CFinishAttack, long, int32_t) {
__asm {

 Block0:
	mov eax,0x1E84BE9
	ret 4
}
}
// KeySequenceElement::DoAction
__SUB_CLASS_THIS(002DE490, __thiscall, 60897,  KeySequenceElement, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CDoubleAttack::CDoubleAttack
__SUB_CLASS_THIS(002DE530, __thiscall, 133503,  CDoubleAttack, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push 1
	push 0x1A4
	push eax
	mov esi,ecx
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CDoubleAttack::`vftable'
	mov eax,esi
	pop esi
	ret 4
}
}
// CDoubleAttack::GetSkillID
__SUB_CLASS_THIS(002DE560, __thiscall, 133506,  CDoubleAttack, long, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	sub eax,0x7D0
	neg eax
	sbb eax,eax
	and eax,0xF4234
	add eax,0x1312D0E
	ret 4
}
}
// CCombatStepTrigger::DoAction
_SUB_EXCEPTION_HANDLER(2E0C80)
__SUB_CLASS_THIS(002E0C80, __thiscall, 133635,  CCombatStepTrigger, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E0C80
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
	mov dword ptr [esp+0x14],ecx
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebp,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [esp+0x1C]
	mov edi,dword ptr [eax+4]
	test esi,esi
	je Block5

 Block1:
	add esi,0xFFFFFFF0
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x1C],0

 Block5:
	mov ecx,dword ptr [edi+0x3D]
	push ecx
	lea edx,[edi+0x39]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x51EB851F
	imul ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	mov esi,eax
	sub esi,0x23
	neg esi
	sbb esi,esi
	and esi,0xFF76AB7D
	push 0
	add esi,0x1C9C7AC
	push esi
	push edi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block18

 Block6:
	cmp dword ptr [esp+0x30],0
	je Block12

 Block7:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [ebx+0x2A8C]
	xor ecx,ecx
	cmp dword ptr [edx+0xC],0x4B
	push eax
	sete cl
	add ebx,0x2A84
	push ebx
	mov edi,ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block9

 Block8:
	xor ecx,ecx
	test edi,edi
	sete cl
	mov edi,ecx

 Block9:
	lea ecx,[ebp+0x88]
	push 1
	test edi,edi
	je Block11

 Block10:
	mov eax,dword ptr [ebp+0x640]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	or eax,1
	push eax
	call edx
	push 0
	push 0
	push esi
	mov ecx,ebp
	call CUserLocal::DoActiveSkill
	mov eax,1
	jmp Block19

 Block11:
	mov edx,dword ptr [ebp+0x640]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	and edx,0xFFFFFFFE
	push edx
	call eax
	push 0
	push 0
	push esi
	mov ecx,ebp
	call CUserLocal::DoActiveSkill
	mov eax,1
	jmp Block19

 Block12:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x30],esi
	mov dword ptr [esp+0x28],0
	test esi,esi
	je Block14

 Block13:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx+0xC]
	push 1
	push 0
	push eax
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CCombatStepTrigger::`vftable'
	jmp Block15

 Block14:
	xor esi,esi

 Block15:
	push 0
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x34],0xFFFFFFFF
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block17

 Block16:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov ecx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	call CSequencedKeyMan::ReserveAction
	mov eax,1
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// CSequencedKeyMan::Restore
_SUB_EXCEPTION_HANDLER(2E11F0)
__SUB_CLASS_THIS0(002E11F0, __thiscall, 60930,  CSequencedKeyMan, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E11F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea ecx,[esi+0x1C]
	mov dword ptr [esp+0x28],ecx
	call ZArray<long>::RemoveAll
	lea ecx,[esi+4]
	mov dword ptr [esp+0x18],ecx
	call ZMap<unsigned long, KeySequence, unsigned long>::RemoveAll
	lea ecx,[esi+0x20]
	call ZList<ActiveCandidateEntity>::RemoveAll
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x34]
	push eax
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x38]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],ecx
	cmp eax,ebx
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x38],ebx

 Block5:
	mov edi,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x20],ebx
	xor esi,esi
	mov ebp,0x1E84BE9
	nop

 Block6:
	push esi
	mov ecx,edi
	call CFuncKeyMappedMan::FuncKeyMapped
	movzx ecx,byte ptr [eax]
	sub ecx,1
	je Block10

 Block7:
	sub ecx,4
	jne Block12

 Block8:
	cmp dword ptr [eax+1],0x34
	jne Block12

 Block9:
	mov dword ptr [esp+0x14],esi
	jmp Block12

 Block10:
	cmp dword ptr [eax+1],ebp
	jne Block12

 Block11:
	mov dword ptr [esp+0x20],esi

 Block12:
	inc esi
	cmp esi,0x59
	jl Block6

 Block13:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	lea edx,[esp+0x30]
	mov dword ptr [esp+0x28],ecx
	mov ecx,dword ptr [esp+0x1C]
	push edx
	mov dword ptr [esp+0x34],ebx
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea ebp,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],ebx
	cmp esi,ebx
	je Block15

 Block14:
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x48],1
	mov dword ptr [esi],0
	mov dword ptr [esi+0xC],0x4B
	mov dword ptr [esi+0x10],1
	mov dword ptr [esi+0x14],0x12C
	call timeGetTime
	mov dword ptr [esi+0x18],eax
	jmp Block16

 Block15:
	xor esi,esi

 Block16:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block18

 Block17:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block18:
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x4C],2
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov edi,eax
	cmp esi,ebx
	je Block20

 Block19:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block20:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block25

 Block21:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebx
	je Block24

 Block23:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block24:
	mov dword ptr [edi+4],ebx

 Block25:
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block28

 Block26:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block27:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block28:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],3
	cmp esi,ebx
	je Block30

 Block29:
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x48],4
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElement::`vftable'
	mov dword ptr [esi+0xC],0x4B
	mov dword ptr [esi+0x10],ebx
	mov dword ptr [esi+0x14],ebx
	call timeGetTime
	mov dword ptr [esi+0x18],eax
	jmp Block31

 Block30:
	xor esi,esi

 Block31:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block33

 Block32:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block33:
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x4C],5
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov edi,eax
	cmp esi,ebx
	je Block35

 Block34:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block35:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block40

 Block36:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block37:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebx
	je Block39

 Block38:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block39:
	mov dword ptr [edi+4],ebx

 Block40:
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block43

 Block41:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block43

 Block42:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block43:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],6
	cmp esi,ebx
	je Block45

 Block44:
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x48],7
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElement::`vftable'
	mov dword ptr [esi+0xC],0x4B
	mov dword ptr [esi+0x10],1
	mov dword ptr [esi+0x14],ebx
	call timeGetTime
	mov dword ptr [esi+0x18],eax
	int 3// TODO: 	mov dword ptr [esi],offset CDashTrigger::`vftable'
	jmp Block46

 Block45:
	xor esi,esi

 Block46:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block48

 Block47:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block48:
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x4C],8
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov edi,eax
	cmp esi,ebx
	je Block50

 Block49:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block50:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block55

 Block51:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block54

 Block52:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebx
	je Block54

 Block53:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block54:
	mov dword ptr [edi+4],ebx

 Block55:
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block58

 Block56:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block58

 Block57:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block58:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],9
	cmp esi,ebx
	je Block60

 Block59:
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x48],0xA
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElement::`vftable'
	mov dword ptr [esi+0xC],0x4B
	mov dword ptr [esi+0x10],ebx
	mov dword ptr [esi+0x14],ebx
	call timeGetTime
	mov dword ptr [esi+0x18],eax
	jmp Block61

 Block60:
	xor esi,esi

 Block61:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block63

 Block62:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block63:
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x4C],0xB
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov edi,eax
	cmp esi,ebx
	je Block65

 Block64:
	lea edx,[esi+4]
	push edx
	call ebp

 Block65:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block70

 Block66:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block69

 Block67:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebx
	je Block69

 Block68:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block69:
	mov dword ptr [edi+4],ebx

 Block70:
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block73

 Block71:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block73

 Block72:
	push edi
	call ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block73:
	mov ecx,dword ptr [esp+0x18]
	push ebx
	lea eax,[esp+0x30]
	mov edi,1
	push eax
	mov dword ptr [esp+0x34],edi
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea ebp,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0xC
	cmp esi,ebx
	je Block75

 Block74:
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x48],0xD
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElement::`vftable'
	mov dword ptr [esi+0xC],0x4D
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esi+0x14],0x12C
	call timeGetTime
	mov dword ptr [esi+0x18],eax
	jmp Block76

 Block75:
	xor esi,esi

 Block76:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block78

 Block77:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block78:
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x4C],0xE
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov edi,eax
	cmp esi,ebx
	je Block80

 Block79:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block80:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block85

 Block81:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block84

 Block82:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebx
	je Block84

 Block83:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block84:
	mov dword ptr [edi+4],ebx

 Block85:
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block88

 Block86:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block88

 Block87:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block88:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0xF
	cmp esi,ebx
	je Block90

 Block89:
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x48],0x10
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElement::`vftable'
	mov dword ptr [esi+0xC],0x4D
	mov dword ptr [esi+0x10],ebx
	mov dword ptr [esi+0x14],ebx
	call timeGetTime
	mov dword ptr [esi+0x18],eax
	jmp Block91

 Block90:
	xor esi,esi

 Block91:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block93

 Block92:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block93:
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x4C],0x11
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov edi,eax
	cmp esi,ebx
	je Block95

 Block94:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block95:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block100

 Block96:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block99

 Block97:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebx
	je Block99

 Block98:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block99:
	mov dword ptr [edi+4],ebx

 Block100:
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block103

 Block101:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block103

 Block102:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block103:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x12
	cmp esi,ebx
	je Block105

 Block104:
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x48],0x13
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElement::`vftable'
	mov dword ptr [esi+0xC],0x4D
	mov dword ptr [esi+0x10],1
	mov dword ptr [esi+0x14],ebx
	call timeGetTime
	mov dword ptr [esi+0x18],eax
	int 3// TODO: 	mov dword ptr [esi],offset CDashTrigger::`vftable'
	jmp Block106

 Block105:
	xor esi,esi

 Block106:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block108

 Block107:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block108:
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x4C],0x14
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov edi,eax
	cmp esi,ebx
	je Block110

 Block109:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block110:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block115

 Block111:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block114

 Block112:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebx
	je Block114

 Block113:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block114:
	mov dword ptr [edi+4],ebx

 Block115:
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block118

 Block116:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block118

 Block117:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block118:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x15
	cmp esi,ebx
	je Block120

 Block119:
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x48],0x16
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElement::`vftable'
	mov dword ptr [esi+0xC],0x4D
	mov dword ptr [esi+0x10],ebx
	mov dword ptr [esi+0x14],ebx
	call timeGetTime
	mov dword ptr [esi+0x18],eax
	jmp Block121

 Block120:
	xor esi,esi

 Block121:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block123

 Block122:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block123:
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x4C],0x17
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov edi,eax
	cmp esi,ebx
	je Block125

 Block124:
	lea ecx,[esi+4]
	push ecx
	call ebp

 Block125:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block130

 Block126:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block129

 Block127:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebx
	je Block129

 Block128:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block129:
	mov dword ptr [edi+4],ebx

 Block130:
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block133

 Block131:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block133

 Block132:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block133:
	push ebx
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x34],2
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea ebp,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x48],0x18
	cmp eax,ebx
	je Block135

 Block134:
	mov edx,dword ptr [esp+0x14]
	push 1
	push 0x1E0
	push edx
	mov ecx,eax
	call KeySequenceElement::_ctor_0
	mov esi,eax
	jmp Block136

 Block135:
	xor esi,esi

 Block136:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block138

 Block137:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block138:
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x4C],0x19
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov edi,eax
	cmp esi,ebx
	je Block140

 Block139:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block140:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block145

 Block141:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block144

 Block142:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebx
	je Block144

 Block143:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block144:
	mov dword ptr [edi+4],ebx

 Block145:
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block148

 Block146:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block148

 Block147:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block148:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x48],0x1A
	cmp eax,ebx
	je Block150

 Block149:
	mov ecx,dword ptr [esp+0x14]
	push ebx
	push ebx
	push ecx
	mov ecx,eax
	call KeySequenceElement::_ctor_0
	mov esi,eax
	jmp Block151

 Block150:
	xor esi,esi

 Block151:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block153

 Block152:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block153:
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x4C],0x1B
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov edi,eax
	cmp esi,ebx
	je Block155

 Block154:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block155:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block160

 Block156:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block159

 Block157:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebx
	je Block159

 Block158:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block159:
	mov dword ptr [edi+4],ebx

 Block160:
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block163

 Block161:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block163

 Block162:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block163:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x1C
	cmp esi,ebx
	je Block165

 Block164:
	mov ecx,dword ptr [esp+0x14]
	push 1
	push 0x1A4
	push ecx
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CDoubleAttack::`vftable'
	jmp Block166

 Block165:
	xor esi,esi

 Block166:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block168

 Block167:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block168:
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x4C],0x1D
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov edi,eax
	cmp esi,ebx
	je Block170

 Block169:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block170:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block175

 Block171:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block174

 Block172:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebx
	je Block174

 Block173:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block174:
	mov dword ptr [edi+4],ebx

 Block175:
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block178

 Block176:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block178

 Block177:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block178:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x48],0x1E
	cmp eax,ebx
	je Block180

 Block179:
	mov ecx,dword ptr [esp+0x14]
	push ebx
	push ebx
	push ecx
	mov ecx,eax
	call KeySequenceElement::_ctor_0
	mov esi,eax
	jmp Block181

 Block180:
	xor esi,esi

 Block181:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block183

 Block182:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block183:
	lea eax,[esp+0x2C]
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x1F
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block186

 Block184:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block186

 Block185:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block186:
	mov edi,dword ptr [esp+0x1C]
	mov esi,dword ptr [esp+0x24]
	push ebx
	push 0x141F5E1
	push edi
	mov ecx,esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jg Block188

 Block187:
	push ebx
	push 0x1312D0F
	push edi
	mov ecx,esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block189

 Block188:
	push 0xFFFFFFFF
	lea ecx,[ebp+4]
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],3

 Block189:
	push ebx
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x34],3
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea ebp,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x20
	cmp esi,ebx
	je Block191

 Block190:
	mov edx,dword ptr [esp+0x14]
	push 1
	push 0x294
	push edx
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CTripleAttack::`vftable'
	jmp Block192

 Block191:
	xor esi,esi

 Block192:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block194

 Block193:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block194:
	lea ecx,[esp+0x2C]
	push ecx
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x21
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block197

 Block195:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block197

 Block196:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block197:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x48],0x22
	cmp eax,ebx
	je Block199

 Block198:
	mov ecx,dword ptr [esp+0x14]
	push ebx
	push ebx
	push ecx
	mov ecx,eax
	call KeySequenceElement::_ctor_0
	mov esi,eax
	jmp Block200

 Block199:
	xor esi,esi

 Block200:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block202

 Block201:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block202:
	lea eax,[esp+0x2C]
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x23
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block205

 Block203:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block205

 Block204:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block205:
	push ebx
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x34],4
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea ebp,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x24
	cmp esi,ebx
	je Block207

 Block206:
	push 1
	push 0x258
	push 0x4B
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElementIgnoreUp::`vftable'
	jmp Block208

 Block207:
	xor esi,esi

 Block208:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block210

 Block209:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block210:
	lea eax,[esp+0x2C]
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x25
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block213

 Block211:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block213

 Block212:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block213:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x26
	cmp esi,ebx
	je Block215

 Block214:
	mov ecx,dword ptr [esp+0x14]
	push 1
	push ebx
	push ecx
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CFinalCharge::`vftable'
	mov dword ptr [esi+0x1C],1
	jmp Block216

 Block215:
	xor esi,esi

 Block216:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block218

 Block217:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block218:
	lea eax,[esp+0x2C]
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x27
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block221

 Block219:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block221

 Block220:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block221:
	push ebx
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x34],5
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea ebp,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x28
	cmp esi,ebx
	je Block223

 Block222:
	push 1
	push 0x258
	push 0x4D
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElementIgnoreUp::`vftable'
	jmp Block224

 Block223:
	xor esi,esi

 Block224:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block226

 Block225:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block226:
	lea eax,[esp+0x2C]
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x29
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block229

 Block227:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block229

 Block228:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block229:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x2A
	cmp esi,ebx
	je Block231

 Block230:
	mov ecx,dword ptr [esp+0x14]
	push 1
	push ebx
	push ecx
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CFinalCharge::`vftable'
	mov dword ptr [esi+0x1C],ebx
	jmp Block232

 Block231:
	xor esi,esi

 Block232:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block234

 Block233:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block234:
	lea eax,[esp+0x2C]
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x2B
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block237

 Block235:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block237

 Block236:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block237:
	push ebx
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x34],6
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea ebp,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x2C
	cmp esi,ebx
	je Block239

 Block238:
	push 1
	push 0x12C
	push 0x50
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElementIgnoreUp::`vftable'
	jmp Block240

 Block239:
	xor esi,esi

 Block240:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block242

 Block241:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block242:
	lea eax,[esp+0x2C]
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x2D
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block245

 Block243:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block245

 Block244:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block245:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x2E
	cmp esi,ebx
	je Block247

 Block246:
	mov ecx,dword ptr [esp+0x14]
	push 1
	push ebx
	push ecx
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CFinalBlow::`vftable'
	jmp Block248

 Block247:
	xor esi,esi

 Block248:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block250

 Block249:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block250:
	lea eax,[esp+0x2C]
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x2F
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block253

 Block251:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block253

 Block252:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block253:
	push ebx
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x34],7
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea ebp,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x30
	cmp esi,ebx
	je Block255

 Block254:
	push 1
	push 0x12C
	push 0x48
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElementIgnoreUp::`vftable'
	jmp Block256

 Block255:
	xor esi,esi

 Block256:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block258

 Block257:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block258:
	lea eax,[esp+0x2C]
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x31
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block261

 Block259:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block261

 Block260:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block261:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x32
	cmp esi,ebx
	je Block263

 Block262:
	mov ecx,dword ptr [esp+0x14]
	push 1
	push ebx
	push ecx
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CFinalToss::`vftable'
	mov dword ptr [esi+0x1C],0x1421CF3
	jmp Block264

 Block263:
	xor esi,esi

 Block264:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block266

 Block265:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block266:
	lea eax,[esp+0x2C]
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x33
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block269

 Block267:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block269

 Block268:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block269:
	push ebx
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x34],8
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea ebp,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x48],0x34
	cmp eax,ebx
	je Block271

 Block270:
	push 1
	push 0x2BC
	push 0x48
	mov ecx,eax
	call KeySequenceElement::_ctor_0
	mov esi,eax
	jmp Block272

 Block271:
	xor esi,esi

 Block272:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block274

 Block273:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block274:
	lea eax,[esp+0x2C]
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x35
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block277

 Block275:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block277

 Block276:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block277:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x48],0x36
	cmp eax,ebx
	je Block279

 Block278:
	push ebx
	push ebx
	push 0x48
	mov ecx,eax
	call KeySequenceElement::_ctor_0
	mov esi,eax
	jmp Block280

 Block279:
	xor esi,esi

 Block280:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block282

 Block281:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block282:
	lea edx,[esp+0x2C]
	push edx
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x37
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block285

 Block283:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block285

 Block284:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block285:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x38
	cmp esi,ebx
	je Block287

 Block286:
	push 1
	push ebx
	push 0x48
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElementIgnoreUp::`vftable'
	jmp Block288

 Block287:
	xor esi,esi

 Block288:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block290

 Block289:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block290:
	lea ecx,[esp+0x2C]
	push ecx
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x39
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block293

 Block291:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block293

 Block292:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block293:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x3A
	cmp esi,ebx
	je Block295

 Block294:
	mov ecx,dword ptr [esp+0x14]
	push 1
	push ebx
	push ecx
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CWhirlWind::`vftable'
	jmp Block296

 Block295:
	xor esi,esi

 Block296:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block298

 Block297:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block298:
	lea eax,[esp+0x2C]
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x3B
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block301

 Block299:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block301

 Block300:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block301:
	push ebx
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x34],9
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea ebp,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x3C
	cmp esi,ebx
	je Block303

 Block302:
	push 1
	push 0x258
	push 0x50
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElementIgnoreUp::`vftable'
	jmp Block304

 Block303:
	xor esi,esi

 Block304:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block306

 Block305:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block306:
	lea eax,[esp+0x2C]
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x3D
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp esi,ebx
	je Block309

 Block307:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block309

 Block308:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block309:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x3E
	cmp esi,ebx
	je Block311

 Block310:
	push 1
	push ebx
	push 0x4B
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElementIgnoreUp::`vftable'
	jmp Block312

 Block311:
	xor esi,esi

 Block312:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block314

 Block313:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block314:
	lea ecx,[esp+0x2C]
	push ecx
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x3F
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x40
	cmp esi,ebx
	je Block316

 Block315:
	mov edx,dword ptr [esp+0x14]
	push 1
	push ebx
	push edx
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CComboSmash::`vftable'
	mov dword ptr [esi+0x1C],1
	jmp Block317

 Block316:
	xor esi,esi

 Block317:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block319

 Block318:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block319:
	lea eax,[esp+0x2C]
	push eax
	push 0xFFFFFFFF
	mov ecx,ebp
	mov dword ptr [esp+0x50],0x41
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push ebx
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x34],0xA
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea edi,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x42
	cmp esi,ebx
	je Block321

 Block320:
	push 1
	push 0x258
	push 0x50
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElementIgnoreUp::`vftable'
	jmp Block322

 Block321:
	xor esi,esi

 Block322:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block324

 Block323:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block324:
	lea edx,[esp+0x2C]
	push edx
	or ebp,0xFFFFFFFF
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x43
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x44
	cmp esi,ebx
	je Block326

 Block325:
	push 1
	push ebx
	push 0x4D
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElementIgnoreUp::`vftable'
	jmp Block327

 Block326:
	xor esi,esi

 Block327:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block329

 Block328:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block329:
	lea eax,[esp+0x2C]
	push eax
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x45
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x46
	cmp esi,ebx
	je Block331

 Block330:
	mov ecx,dword ptr [esp+0x14]
	push 1
	push ebx
	push ecx
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CComboSmash::`vftable'
	mov dword ptr [esi+0x1C],ebx
	jmp Block332

 Block331:
	xor esi,esi

 Block332:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block334

 Block333:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block334:
	lea edx,[esp+0x2C]
	push edx
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x47
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	mov ecx,dword ptr [esp+0x18]
	push ebx
	lea eax,[esp+0x30]
	push eax
	mov dword ptr [esp+0x34],0xB
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea edi,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x48],0x48
	cmp eax,ebx
	je Block336

 Block335:
	push 1
	push 0x258
	push 0x50
	mov ecx,eax
	call KeySequenceElement::_ctor_0
	jmp Block337

 Block336:
	xor eax,eax

 Block337:
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block339

 Block338:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block339:
	lea ecx,[esp+0x2C]
	push ecx
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x49
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x48],0x4A
	cmp eax,ebx
	je Block341

 Block340:
	push ebx
	push ebx
	push 0x50
	mov ecx,eax
	call KeySequenceElement::_ctor_0
	jmp Block342

 Block341:
	xor eax,eax

 Block342:
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block344

 Block343:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block344:
	lea edx,[esp+0x2C]
	push edx
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x4B
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x4C
	cmp esi,ebx
	je Block346

 Block345:
	push 1
	push ebx
	push 0x50
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElementIgnoreUp::`vftable'
	jmp Block347

 Block346:
	xor esi,esi

 Block347:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block349

 Block348:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block349:
	lea eax,[esp+0x2C]
	push eax
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x4D
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x4E
	cmp esi,ebx
	je Block351

 Block350:
	mov ecx,dword ptr [esp+0x14]
	push 1
	push ebx
	push ecx
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CComboDrain::`vftable'
	jmp Block352

 Block351:
	xor esi,esi

 Block352:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block354

 Block353:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block354:
	lea edx,[esp+0x2C]
	push edx
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x4F
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	mov ecx,dword ptr [esp+0x18]
	push ebx
	lea eax,[esp+0x30]
	push eax
	mov dword ptr [esp+0x34],0xC
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea edi,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x48],0x50
	cmp eax,ebx
	je Block356

 Block355:
	push 1
	push 0x12C
	push 0x4B
	mov ecx,eax
	call KeySequenceElement::_ctor_0
	jmp Block357

 Block356:
	xor eax,eax

 Block357:
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block359

 Block358:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block359:
	lea ecx,[esp+0x2C]
	push ecx
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x51
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x48],0x52
	cmp eax,ebx
	je Block361

 Block360:
	push ebx
	push ebx
	push 0x4B
	mov ecx,eax
	call KeySequenceElement::_ctor_0
	jmp Block362

 Block361:
	xor eax,eax

 Block362:
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block364

 Block363:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block364:
	lea edx,[esp+0x2C]
	push edx
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x53
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x54
	cmp esi,ebx
	je Block366

 Block365:
	push 1
	push ebx
	push 0x4B
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CCombatStepTrigger::`vftable'
	jmp Block367

 Block366:
	xor esi,esi

 Block367:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block369

 Block368:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block369:
	lea eax,[esp+0x2C]
	push eax
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x55
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x48],0x56
	cmp eax,ebx
	je Block371

 Block370:
	push ebx
	push ebx
	push 0x4B
	mov ecx,eax
	call KeySequenceElement::_ctor_0
	jmp Block372

 Block371:
	xor eax,eax

 Block372:
	mov esi,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block374

 Block373:
	add eax,4
	push eax
	call esi

 Block374:
	lea ecx,[esp+0x2C]
	push ecx
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x57
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	mov ecx,dword ptr [esp+0x18]
	push ebx
	lea edx,[esp+0x30]
	push edx
	mov dword ptr [esp+0x34],0xD
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea edi,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x48],0x58
	cmp eax,ebx
	je Block376

 Block375:
	push 1
	push 0x12C
	push 0x4D
	mov ecx,eax
	call KeySequenceElement::_ctor_0
	jmp Block377

 Block376:
	xor eax,eax

 Block377:
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block379

 Block378:
	add eax,4
	push eax
	call esi

 Block379:
	lea eax,[esp+0x2C]
	push eax
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x59
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x48],0x5A
	cmp eax,ebx
	je Block381

 Block380:
	push ebx
	push ebx
	push 0x4D
	mov ecx,eax
	call KeySequenceElement::_ctor_0
	jmp Block382

 Block381:
	xor eax,eax

 Block382:
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block384

 Block383:
	add eax,4
	push eax
	call esi

 Block384:
	lea ecx,[esp+0x2C]
	push ecx
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x5B
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x5C
	cmp esi,ebx
	je Block386

 Block385:
	push 1
	push ebx
	push 0x4D
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CCombatStepTrigger::`vftable'
	jmp Block387

 Block386:
	xor esi,esi

 Block387:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block389

 Block388:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block389:
	lea edx,[esp+0x2C]
	push edx
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x5D
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x48],0x5E
	cmp eax,ebx
	je Block391

 Block390:
	push ebx
	push ebx
	push 0x4D
	mov ecx,eax
	call KeySequenceElement::_ctor_0
	jmp Block392

 Block391:
	xor eax,eax

 Block392:
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block394

 Block393:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block394:
	lea eax,[esp+0x2C]
	push eax
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x5F
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push ebx
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x34],0xE
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea edi,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x60
	cmp esi,ebx
	je Block396

 Block395:
	push 1
	push 0x12C
	push 0x50
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElementIgnoreUp::`vftable'
	jmp Block397

 Block396:
	xor esi,esi

 Block397:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block399

 Block398:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block399:
	lea edx,[esp+0x2C]
	push edx
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x61
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x62
	cmp esi,ebx
	je Block401

 Block400:
	push 1
	push ebx
	push 0x48
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset KeySequenceElementIgnoreUp::`vftable'
	jmp Block402

 Block401:
	xor esi,esi

 Block402:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block404

 Block403:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block404:
	lea eax,[esp+0x2C]
	push eax
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x63
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x64
	cmp esi,ebx
	je Block406

 Block405:
	mov ecx,dword ptr [esp+0x14]
	push 1
	push ebx
	push ecx
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CMassacre::`vftable'
	jmp Block407

 Block406:
	xor esi,esi

 Block407:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block409

 Block408:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block409:
	lea edx,[esp+0x2C]
	push edx
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x65
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	mov ecx,dword ptr [esp+0x18]
	push ebx
	lea eax,[esp+0x30]
	push eax
	mov dword ptr [esp+0x34],0xF
	call ZMap<unsigned long, KeySequence, unsigned long>::Insert
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea edi,[eax+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x48],0x66
	cmp eax,ebx
	je Block411

 Block410:
	mov ecx,dword ptr [esp+0x20]
	push 1
	push 0x1E0
	push ecx
	mov ecx,eax
	call KeySequenceElement::_ctor_0
	jmp Block412

 Block411:
	xor eax,eax

 Block412:
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block414

 Block413:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block414:
	lea edx,[esp+0x2C]
	push edx
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x67
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x48],0x68
	cmp esi,ebx
	je Block416

 Block415:
	mov eax,dword ptr [esp+0x20]
	push ebx
	push 0x3E8
	push eax
	mov ecx,esi
	call KeySequenceElement::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CFinishAttack::`vftable'
	mov dword ptr [esi+0x1C],ebp
	jmp Block417

 Block416:
	xor esi,esi

 Block417:
	mov dword ptr [esp+0x30],esi
	cmp esi,ebx
	je Block419

 Block418:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block419:
	lea ecx,[esp+0x2C]
	push ecx
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x50],0x69
	call ZArray<ZRef<KeySequenceElement>>::InsertBefore
	mov ecx,eax
	call ZRef<KeySequenceElement>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x48],ebp
	call ZRef<KeySequenceElement>::~ZRef<KeySequenceElement>
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	cmp eax,ebx
	je Block459

 Block420:
	mov edi,dword ptr [esp+0x1C]
	mov ebp,dword ptr [esp+0x24]
	push ebx
	push 0x4C4F2D
	push edi
	mov ecx,ebp
	mov esi,eax
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jg Block427

 Block421:
	push ebx
	push 0xE4E5AB
	push edi
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jg Block427

 Block422:
	push ebx
	push 0x41EEE8
	push edi
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jg Block427

 Block423:
	push ebx
	push 0x417
	push edi
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jg Block427

 Block424:
	push ebx
	push 0x989A97
	push edi
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jg Block427

 Block425:
	push ebx
	push 0x1313117
	push edi
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jg Block427

 Block426:
	push ebx
	push 0x1315827
	push edi
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block428

 Block427:
	mov edi,dword ptr [esp+0x28]
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	push 0xFFFFFFFF
	mov ecx,edi
	mov dword ptr [eax],ebx
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],1
	jmp Block429

 Block428:
	mov edi,dword ptr [esp+0x28]

 Block429:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x40]
	mov ecx,esi
	call eax
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x15
	je Block431

 Block430:
	cmp ecx,0x7D0
	jne Block448

 Block431:
	mov eax,dword ptr [esi+0x58C]
	push eax
	call get_weapon_type
	add esp,4
	cmp eax,0x2C
	jne Block448

 Block432:
	mov ecx,dword ptr [esp+0x1C]
	push ebx
	push 0x1406F42
	push ecx
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jg Block434

 Block433:
	mov edx,dword ptr [esp+0x1C]
	push ebx
	push 0x1312D0E
	push edx
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block435

 Block434:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],2

 Block435:
	mov eax,dword ptr [esp+0x1C]
	push ebx
	push 0x141F5E2
	push eax
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block437

 Block436:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	push 0xFFFFFFFF
	mov ecx,edi
	mov dword ptr [eax],4
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],5

 Block437:
	mov ecx,dword ptr [esp+0x1C]
	push ebx
	push 0x1424405
	push ecx
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jg Block439

 Block438:
	mov edx,dword ptr [esp+0x1C]
	push ebx
	push 0x1312D10
	push edx
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block440

 Block439:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],6

 Block440:
	mov eax,dword ptr [esp+0x1C]
	push ebx
	push 0x1421CF3
	push eax
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block442

 Block441:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],7

 Block442:
	mov ecx,dword ptr [esp+0x1C]
	push ebx
	push 0x1421CF6
	push ecx
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block444

 Block443:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],8

 Block444:
	mov edx,dword ptr [esp+0x1C]
	push ebx
	push 0x141F5E4
	push edx
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block446

 Block445:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	push 0xFFFFFFFF
	mov ecx,edi
	mov dword ptr [eax],9
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],0xA

 Block446:
	mov eax,dword ptr [esp+0x1C]
	push ebx
	push 0x141F5E5
	push eax
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block448

 Block447:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],0xB

 Block448:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x40]
	mov ecx,esi
	call eax
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x15
	je Block450

 Block449:
	cmp ecx,0x7D0
	jne Block451

 Block450:
	mov ecx,dword ptr [esp+0x1C]
	push ebx
	push 0x1407329
	push ecx
	jmp Block453

 Block451:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x40]
	mov ecx,esi
	call eax
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x23
	jne Block455

 Block452:
	mov edx,dword ptr [esp+0x1C]
	push ebx
	push 0x1C9C7AC
	push edx

 Block453:
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block455

 Block454:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	push 0xFFFFFFFF
	mov ecx,edi
	mov dword ptr [eax],0xC
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],0xD

 Block455:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],0xE
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	mov ecx,esi
	call edx
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x20
	jne Block459

 Block456:
	mov esi,dword ptr [esi+0x58C]
	push esi
	call get_weapon_type
	add esp,4
	cmp eax,0x26
	jne Block459

 Block457:
	mov ecx,dword ptr [esp+0x1C]
	push ebx
	push 0x1E84BE9
	push ecx
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block459

 Block458:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],0xF

 Block459:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CFinishAttack::DoAction
_SUB_EXCEPTION_HANDLER(2E0F80)
__SUB_CLASS_THIS(002E0F80, __thiscall, 133665,  CFinishAttack, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E0F80
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
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [esi]
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [edx+0x10]
	mov ebp,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 1
	mov ecx,esi
	mov dword ptr [esp+0x30],0
	call eax
	push eax
	push edi
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	mov eax,dword ptr [esp+0x1C]
	sete byte ptr [esp+0x17]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block4

 Block1:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	cmp byte ptr [esp+0x17],0
	jne Block9

 Block5:
	cmp dword ptr [esp+0x30],0
	je Block11

 Block6:
	mov ecx,esi
	call CFinishAttack::GetDummySkillID
	cmp eax,0x1E84BEF
	je Block9

 Block7:
	lea ecx,[esp+0x30]
	push ecx
	push 0
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x3C],0
	call CUserLocal::DoActiveSkill
	test eax,eax
	jne Block20

 Block8:
	cmp dword ptr [esp+0x30],3
	je Block20

 Block9:
	xor eax,eax

 Block10:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4

 Block11:
	lea ecx,[ebx+0x88]
	call CAvatar::GetOneTimeAction
	mov edi,eax
	cmp edi,0x19
	jl Block9

 Block12:
	cmp edi,0x1C
	jg Block9

 Block13:
	mov edx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	cmp dword ptr [edx+0x3C],0
	jne Block20

 Block14:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x28],1
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [esi+0xC]
	push edi
	push ecx
	mov ecx,eax
	call CFinishAttack::_ctor_0
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	push 1
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x34],0xFFFFFFFF
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block19

 Block18:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block19:
	mov ecx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	call CSequencedKeyMan::ReserveAction

 Block20:
	mov eax,1
	jmp Block10
}
}
// CFinishAttack::CheckPreOrderSkill
__SUB_CLASS_THIS(002DE7B0, __thiscall, 133668,  CFinishAttack, int32_t, long) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [esp+4],0xFFFFFFFF
	sete al
	ret 4
}
}
