#include "regen.hpp"
// BattleRecordMan.ipp
#include "BattleRecordMan.hpp"

// CBattleRecordMan::SetAttrDamageRateInfo
__SUB_CLASS_THIS(00070920, __thiscall, 7564,  CBattleRecordMan, void, long) {
__asm {

 Block0:
	mov edx,ecx
	cmp dword ptr [edx+8],0
	je Block6

 Block1:
	cmp dword ptr [edx+0xC],0
	je Block6

 Block2:
	mov eax,dword ptr [esp+4]
	lea ecx,[edx+0x18]
	push eax
	call CBattleRecordMan::DamageInfo::IncTotalAttrRate
	mov eax,dword ptr [edx+0x64]
	cdq
	cmp edx,0xE8
	jl Block6

 Block3:
	jg Block5

 Block4:
	cmp eax,0xD4A50FFF
	jbe Block6

 Block5:
	call CBattleRecordMan::DamageInfo::ClearAllValue

 Block6:
	ret 4
}
}
// CBattleRecordMan::CBattleRecordMan
__SUB_CLASS_THIS0(000706D0, __thiscall, 7558,  CBattleRecordMan, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+8]
	xor eax,eax
	cmp ecx,eax
	je Block2

 Block1:
	lea edx,[ecx-8]
	mov dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance],edx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance],eax

 Block3:
	mov dword ptr [ecx],eax
	fldz
	int 3// TODO: 	mov dword ptr [esi],offset CBattleRecordMan::`vftable'
	mov dword ptr [esi+0xC],eax
	lea edx,[esi+0x70]
	mov ecx,1
	mov dword ptr [esi+0x10],ecx
	mov dword ptr [esi+0x14],ecx
	fst qword ptr [esi+0x40]
	fst qword ptr [esi+0x58]
	mov dword ptr [esi+0x18],eax
	mov dword ptr [esi+0x1C],eax
	mov dword ptr [esi+0x20],eax
	mov dword ptr [esi+0x24],eax
	mov dword ptr [esi+0x28],eax
	mov dword ptr [esi+0x30],eax
	mov dword ptr [esi+0x34],eax
	mov dword ptr [esi+0x38],eax
	mov dword ptr [esi+0x48],eax
	mov dword ptr [esi+0x4C],eax
	mov dword ptr [esi+0x50],eax
	mov dword ptr [esi+0x60],eax
	mov dword ptr [esi+0x64],eax
	mov dword ptr [esi+0x68],eax
	fstp qword ptr [edx+0x58]
	lea ecx,[esi+0x18]
	mov dword ptr [edx],eax
	mov dword ptr [edx+4],eax
	mov dword ptr [edx+8],eax
	mov dword ptr [edx+0xC],eax
	mov dword ptr [edx+0x10],eax
	mov dword ptr [edx+0x14],eax
	mov dword ptr [edx+0x18],eax
	mov dword ptr [edx+0x1C],eax
	mov dword ptr [edx+0x20],eax
	mov dword ptr [edx+0x24],eax
	mov dword ptr [edx+0x28],eax
	mov dword ptr [edx+0x2C],eax
	mov dword ptr [edx+0x30],eax
	mov dword ptr [edx+0x34],eax
	mov dword ptr [edx+0x38],eax
	mov dword ptr [edx+0x3C],eax
	mov dword ptr [edx+0x40],eax
	mov dword ptr [edx+0x44],eax
	mov dword ptr [edx+0x48],eax
	mov dword ptr [edx+0x4C],eax
	mov dword ptr [edx+0x50],eax
	mov dword ptr [edx+0x60],eax
	call CBattleRecordMan::DamageInfo::ClearAllValue
	mov ecx,edx
	call CBattleRecordMan::RecoveryItemInfo::ClearAllValue
	mov eax,esi
	pop esi
	ret
}
}
// CBattleRecordMan::DamageInfo::CalcAverageDamagePerSec
__SUB_CLASS_THIS(000702E0, __thiscall, 7590,  CBattleRecordMan::DamageInfo, void, long, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	call timeGetTime
	mov ecx,dword ptr [esi+0x38]
	mov edi,eax
	test ecx,ecx
	jne Block2

 Block1:
	fld1
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esi+0x38],edi
	fst qword ptr [esi+0x40]
	pop edi
	fstp qword ptr [esi+0x28]
	mov dword ptr [esi+0x48],eax
	pop esi
	ret 0xC

 Block2:
	fldz
	sub eax,ecx
	cmp eax,0x1964
	jae Block6

 Block3:
	mov dword ptr [esp+0xC],eax
	fild dword ptr [esp+0xC]
	test eax,eax
	jge Block5

 Block4:
	fadd qword ptr [__real_41f0000000000000]

 Block5:
	fdiv qword ptr [__real_408f400000000000]
	jmp Block16

 Block6:
	cmp dword ptr [esp+0x10],0
	je Block10

 Block7:
	cmp eax,0x1B58
	jae Block10

 Block8:
	mov dword ptr [esp+0xC],eax
	fild dword ptr [esp+0xC]
	test eax,eax
	jge Block5

 Block9:
	fadd qword ptr [__real_41f0000000000000]
	fdiv qword ptr [__real_408f400000000000]
	jmp Block16

 Block10:
	cmp dword ptr [esp+0x14],0
	je Block14

 Block11:
	cmp eax,0x1B58
	jae Block14

 Block12:
	mov dword ptr [esp+0xC],eax
	fild dword ptr [esp+0xC]
	test eax,eax
	jge Block5

 Block13:
	fadd qword ptr [__real_41f0000000000000]
	fdiv qword ptr [__real_408f400000000000]
	jmp Block16

 Block14:
	fcom qword ptr [esi+0x40]
	fnstsw ax
	test ah,0x44
	jnp Block17

 Block15:
	fld1
	fdiv qword ptr [esi+0x40]

 Block16:
	fadd qword ptr [esi+0x28]
	fstp qword ptr [esi+0x28]

 Block17:
	fcomp qword ptr [esi+0x40]
	fnstsw ax
	test ah,0x44
	jnp Block19

 Block18:
	fild qword ptr [esi+0x18]
	fdiv qword ptr [esi+0x28]
	call __ftol2_sse
	fild dword ptr [esi+0x20]
	mov dword ptr [esi+0x38],edi
	mov dword ptr [esi+0x48],eax
	fdiv qword ptr [esi+0x28]
	fstp qword ptr [esi+0x40]

 Block19:
	pop edi
	pop esi
	ret 0xC
}
}
// CBattleRecordMan::RecoveryItemInfo::IncTotalHPIncReq
__SUB_CLASS_THIS(00070420, __thiscall, 7597,  CBattleRecordMan::RecoveryItemInfo, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cdq
	add dword ptr [ecx+0x10],eax
	adc dword ptr [ecx+0x14],edx
	ret 4
}
}
// CBattleRecordMan::RecoveryItemInfo::IncTotalUseItem
__SUB_CLASS_THIS(00070440, __thiscall, 7597,  CBattleRecordMan::RecoveryItemInfo, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0
	mov edx,1
	je Block5

 Block1:
	sub eax,edx
	je Block4

 Block2:
	sub eax,edx
	jne Block6

 Block3:
	add dword ptr [ecx+0x30],edx
	add dword ptr [ecx+0x3C],edx
	ret 4

 Block4:
	add dword ptr [ecx+0x30],edx
	add dword ptr [ecx+0x38],edx
	ret 4

 Block5:
	add dword ptr [ecx+0x30],edx
	add dword ptr [ecx+0x34],edx

 Block6:
	ret 4
}
}
// CBattleRecordMan::DamageInfo::ChoiceMaxOrMinDamage
__SUB_CLASS_THIS(00070240, __thiscall, 7591,  CBattleRecordMan::DamageInfo, void, int32_t, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block7

 Block1:
	cmp dword ptr [esp+4],0
	je Block4

 Block2:
	cmp dword ptr [ecx+4],eax
	jge Block7

 Block3:
	mov dword ptr [ecx+4],eax
	ret 8

 Block4:
	mov edx,dword ptr [ecx+8]
	cmp edx,eax
	jg Block6

 Block5:
	test edx,edx
	jne Block7

 Block6:
	mov dword ptr [ecx+8],eax

 Block7:
	ret 8
}
}
// CBattleRecordMan::DamageInfo::IncTotalDamage
__SUB_CLASS_THIS(000702A0, __thiscall, 7592,  CBattleRecordMan::DamageInfo, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cdq
	add dword ptr [ecx+0x18],eax
	adc dword ptr [ecx+0x1C],edx
	ret 4
}
}
// CBattleRecordMan::RecoveryItemInfo::IncTotalMPIncReq
__SUB_CLASS_THIS(00070430, __thiscall, 7597,  CBattleRecordMan::RecoveryItemInfo, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cdq
	add dword ptr [ecx+0x18],eax
	adc dword ptr [ecx+0x1C],edx
	ret 4
}
}
// CBattleRecordMan::CheckTotalDamageOverflow
__SUB_CLASS_THIS0(000707D0, __thiscall, 7560,  CBattleRecordMan, void) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x34],0xE8
	jg Block4

 Block1:
	jl Block3

 Block2:
	cmp dword ptr [ecx+0x30],0xD4A50FFF
	ja Block4

 Block3:
	fld qword ptr [_D_MAX_DOUBLE_VALUE]
	fcomp qword ptr [ecx+0x40]
	fnstsw ax
	test ah,5
	jp Block5

 Block4:
	add ecx,0x18
	jmp  CBattleRecordMan::DamageInfo::ClearAllValue

 Block5:
	ret
}
}
// CBattleRecordMan::RecoveryItemInfo::CalcAverageHPInc
__SUB_CLASS_THIS0(00070520, __thiscall, 7598,  CBattleRecordMan::RecoveryItemInfo, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x3C]
	add eax,dword ptr [esi+0x34]
	mov ecx,dword ptr [esi]
	je Block2

 Block1:
	push ebx
	cdq
	push edi
	mov ebx,edx
	push ebx
	mov edi,eax
	mov eax,dword ptr [esi+4]
	push edi
	push eax
	push ecx
	call __alldiv
	mov edx,dword ptr [esi+0x14]
	push ebx
	push edi
	mov dword ptr [esi+0x40],eax
	mov eax,dword ptr [esi+0x10]
	push edx
	push eax
	call __alldiv
	pop edi
	pop ebx
	mov dword ptr [esi+0x48],eax
	pop esi
	ret

 Block2:
	mov edx,dword ptr [esi+0x10]
	mov dword ptr [esi+0x40],ecx
	mov dword ptr [esi+0x48],edx
	pop esi
	ret
}
}
// CBattleRecordMan::RecoveryItemInfo::ClearAllValue
__SUB_CLASS_THIS0(00070640, __thiscall, 7598,  CBattleRecordMan::RecoveryItemInfo, void) {
__asm {

 Block0:
	fldz
	xor eax,eax
	fstp qword ptr [ecx+0x58]
	mov dword ptr [ecx],eax
	mov dword ptr [ecx+4],eax
	mov dword ptr [ecx+8],eax
	mov dword ptr [ecx+0xC],eax
	mov dword ptr [ecx+0x10],eax
	mov dword ptr [ecx+0x14],eax
	mov dword ptr [ecx+0x18],eax
	mov dword ptr [ecx+0x1C],eax
	mov dword ptr [ecx+0x20],eax
	mov dword ptr [ecx+0x24],eax
	mov dword ptr [ecx+0x28],eax
	mov dword ptr [ecx+0x2C],eax
	mov dword ptr [ecx+0x30],eax
	mov dword ptr [ecx+0x34],eax
	mov dword ptr [ecx+0x38],eax
	mov dword ptr [ecx+0x3C],eax
	mov dword ptr [ecx+0x40],eax
	mov dword ptr [ecx+0x44],eax
	mov dword ptr [ecx+0x48],eax
	mov dword ptr [ecx+0x4C],eax
	mov dword ptr [ecx+0x50],eax
	mov dword ptr [ecx+0x60],eax
	ret
}
}
// CBattleRecordMan::CheckTotalRecoveryOverflow
__SUB_CLASS_THIS0(00070800, __thiscall, 7560,  CBattleRecordMan, void) {
__asm {

 Block0:
	mov eax,ecx
	lea ecx,[eax+0x70]
	mov edx,0xE8
	cmp dword ptr [ecx+4],edx
	jg Block13

 Block1:
	jl Block3

 Block2:
	cmp dword ptr [ecx],0xD4A50FFF
	ja Block13

 Block3:
	cmp dword ptr [eax+0x84],edx
	jg Block13

 Block4:
	jl Block6

 Block5:
	cmp dword ptr [eax+0x80],0xD4A50FFF
	ja Block13

 Block6:
	cmp dword ptr [eax+0x7C],edx
	jg Block13

 Block7:
	jl Block9

 Block8:
	cmp dword ptr [eax+0x78],0xD4A50FFF
	ja Block13

 Block9:
	cmp dword ptr [eax+0x8C],edx
	jg Block13

 Block10:
	jl Block12

 Block11:
	cmp dword ptr [eax+0x88],0xD4A50FFF
	ja Block13

 Block12:
	fld qword ptr [_D_MAX_DOUBLE_VALUE]
	fcomp qword ptr [eax+0xC8]
	fnstsw ax
	test ah,5
	jp Block14

 Block13:
	jmp  CBattleRecordMan::RecoveryItemInfo::ClearAllValue

 Block14:
	ret
}
}
// CBattleRecordMan::DamageInfo::IncTotalAttackNum
__SUB_CLASS_THIS0(000702C0, __thiscall, 7589,  CBattleRecordMan::DamageInfo, void) {
__asm {

 Block0:
	inc dword ptr [ecx+0x20]
	ret
}
}
// CBattleRecordMan::DamageInfo::CalcAverageAttrRate
__SUB_CLASS_THIS0(00070220, __thiscall, 7589,  CBattleRecordMan::DamageInfo, void) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [ecx+0x20]
	test esi,esi
	je Block2

 Block1:
	mov eax,dword ptr [ecx+0x4C]
	cdq
	idiv esi
	mov dword ptr [ecx+0x50],eax

 Block2:
	pop esi
	ret
}
}
// CBattleRecordMan::DamageInfo::IncTotalAttrRate
__SUB_CLASS_THIS(000702B0, __thiscall, 7592,  CBattleRecordMan::DamageInfo, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add dword ptr [ecx+0x4C],eax
	ret 4
}
}
// CBattleRecordMan::RequestOnCalc
_SUB_EXCEPTION_HANDLER(70BD0)
__SUB_CLASS_THIS(00070BD0, __thiscall, 7563,  CBattleRecordMan, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_70BD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x28]
	mov dword ptr [ecx+8],esi
	push 0x12B
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push esi
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CBattleRecordMan::SetBattleDamageInfo
__SUB_CLASS_THIS(00070890, __thiscall, 7566,  CBattleRecordMan, void, long, int32_t, int32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,ecx
	cmp dword ptr [ebx+8],0
	je Block10

 Block1:
	cmp dword ptr [ebx+0xC],0
	je Block10

 Block2:
	push ebp
	mov ebp,dword ptr [esp+0x14]
	test ebp,ebp
	je Block4

 Block3:
	cmp dword ptr [ebx+0x14],0
	je Block9

 Block4:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	push edi
	lea esi,[ebx+0x18]
	push 1
	mov ecx,esi
	call CBattleRecordMan::DamageInfo::ChoiceMaxOrMinDamage
	push edi
	push 0
	call CBattleRecordMan::DamageInfo::ChoiceMaxOrMinDamage
	cmp dword ptr [esp+0x18],0
	je Block6

 Block5:
	call CBattleRecordMan::DamageInfo::IncCriticalNum
	push edi
	push 1
	call CBattleRecordMan::DamageInfo::ChoiceCriMaxOrMinDamage
	push edi
	push 0
	call CBattleRecordMan::DamageInfo::ChoiceCriMaxOrMinDamage

 Block6:
	test edi,edi
	jne Block8

 Block7:
	inc dword ptr [esi+0x34]

 Block8:
	mov ecx,esi
	call CBattleRecordMan::DamageInfo::IncTotalAttackNum
	push edi
	call CBattleRecordMan::DamageInfo::IncTotalDamage
	call CBattleRecordMan::DamageInfo::CalcAverageDamage
	mov ecx,esi
	call CBattleRecordMan::DamageInfo::CalcAverageAttrRate
	push ebp
	push 0
	push edi
	call CBattleRecordMan::DamageInfo::CalcAverageDamagePerSec
	mov ecx,ebx
	call CBattleRecordMan::CheckTotalDamageOverflow
	pop edi
	pop esi

 Block9:
	pop ebp

 Block10:
	pop ebx
	ret 0xC
}
}
// CBattleRecordMan::SetAdditionDamageInclude
__SUB_CLASS_THIS(000701D0, __thiscall, 7565,  CBattleRecordMan, void, int32_t, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	sub eax,0
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x14],eax
	ret 8

 Block3:
	mov edx,dword ptr [esp+4]
	mov dword ptr [ecx+0x10],edx

 Block4:
	ret 8
}
}
// CBattleRecordMan::GetDamageInfoView
_SUB_EXCEPTION_HANDLER(70C50)
__SUB_CLASS_THIS(00070C50, __thiscall, 7569,  CBattleRecordMan, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_70C50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x3C],ebx
	mov esi,dword ptr [esp+0x50]
	mov dword ptr [esi],ebx
	mov eax,dword ptr [esp+0x54]
	mov edx,1
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x3C],edx
	cmp eax,0xD
	ja Block20

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5
cmp EAX, 4
je Block6
cmp EAX, 5
je Block7
cmp EAX, 6
je Block8
cmp EAX, 7
je Block9
cmp EAX, 8
je Block10
cmp EAX, 9
je Block20
cmp EAX, 10
je Block14
cmp EAX, 11
je Block15
cmp EAX, 12
je Block16
cmp EAX, 13
je Block17


 Block2:
	mov dword ptr [esp+0x54],ebx
	mov eax,dword ptr [ecx+0x18]
	push eax
	lea ecx,[esp+0x58]
	push offset _S_ADPHD
	push ecx
	mov dword ptr [esp+0x54],edx
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x54]
	jmp Block18

 Block3:
	mov dword ptr [esp+0xC],ebx
	mov edx,dword ptr [ecx+0x60]
	push edx
	lea eax,[esp+0x10]
	push offset _S_ADPSD
	push eax
	mov dword ptr [esp+0x54],2
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xC]
	jmp Block18

 Block4:
	mov dword ptr [esp+0x10],ebx
	mov ecx,dword ptr [ecx+0x1C]
	push ecx
	lea edx,[esp+0x14]
	push offset _S_MAXD
	push edx
	mov dword ptr [esp+0x54],3
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	jmp Block18

 Block5:
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [ecx+0x20]
	push eax
	lea ecx,[esp+0x18]
	push offset _S_MIND
	push ecx
	mov dword ptr [esp+0x54],4
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	jmp Block18

 Block6:
	mov dword ptr [esp+0x18],ebx
	mov edx,dword ptr [ecx+0x34]
	mov eax,dword ptr [ecx+0x30]
	push edx
	push eax
	lea ecx,[esp+0x20]
	push offset _S_TDI64D
	push ecx
	mov dword ptr [esp+0x58],5
	call ZXString<char>::Format
	add esp,0x10
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	jmp Block18

 Block7:
	mov dword ptr [esp+0x1C],ebx
	mov edx,dword ptr [ecx+0x38]
	push edx
	lea eax,[esp+0x20]
	push offset _S_THCD
	push eax
	mov dword ptr [esp+0x54],6
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	jmp Block18

 Block8:
	mov dword ptr [esp+0x20],ebx
	mov ecx,dword ptr [ecx+0x48]
	push ecx
	lea edx,[esp+0x24]
	push offset _S_CHCD
	push edx
	mov dword ptr [esp+0x54],7
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	jmp Block18

 Block9:
	mov dword ptr [esp+0x24],ebx
	fld qword ptr [ecx+0x58]
	sub esp,8
	fstp qword ptr [esp]
	lea eax,[esp+0x2C]
	push offset _S_AHPS2F
	push eax
	mov dword ptr [esp+0x58],8
	call ZXString<char>::Format
	add esp,0x10
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	jmp Block18

 Block10:
	mov eax,dword ptr [ecx+0x38]
	mov dword ptr [esp+0x54],eax
	cmp eax,ebx
	je Block12

 Block11:
	fild dword ptr [esp+0x54]
	fdivr qword ptr [ecx+0x40]
	jmp Block13

 Block12:
	fldz

 Block13:
	mov dword ptr [esp+0x28],ebx
	sub esp,0x10
	fstp qword ptr [esp+8]
	mov dword ptr [esp+0x58],9
	fld qword ptr [ecx+0x40]
	lea ecx,[esp+0x38]
	fstp qword ptr [esp]
	push offset _S_ATSEC2F2F
	push ecx
	call ZXString<char>::Format
	add esp,0x18
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	jmp Block18

 Block14:
	mov dword ptr [esp+0x2C],ebx
	mov edx,dword ptr [ecx+0x68]
	push edx
	lea eax,[esp+0x30]
	push offset _S_AARD
	push eax
	mov dword ptr [esp+0x54],0xA
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	jmp Block18

 Block15:
	mov dword ptr [esp+0x30],ebx
	mov ecx,dword ptr [ecx+0x24]
	push ecx
	lea edx,[esp+0x34]
	push offset _S_CRIMAXD
	push edx
	mov dword ptr [esp+0x54],0xB
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	jmp Block18

 Block16:
	mov dword ptr [esp+0x34],ebx
	mov eax,dword ptr [ecx+0x28]
	push eax
	lea ecx,[esp+0x38]
	push offset _S_CRIMIND
	push ecx
	mov dword ptr [esp+0x54],0xC
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	jmp Block18

 Block17:
	mov dword ptr [esp+0x38],ebx
	mov edx,dword ptr [ecx+0x4C]
	push edx
	lea eax,[esp+0x3C]
	push offset _S_MHCD
	push eax
	mov dword ptr [esp+0x54],0xD
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]

 Block18:
	mov byte ptr [esp+0x48],bl
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,esi
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x40
	ret 8
}
}
// CBattleRecordMan::GetRecoveryInfoView
_SUB_EXCEPTION_HANDLER(70FC0)
__SUB_CLASS_THIS(00070FC0, __thiscall, 7569,  CBattleRecordMan, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_70FC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x30],ebx
	mov esi,dword ptr [esp+0x44]
	mov dword ptr [esi],ebx
	mov eax,dword ptr [esp+0x48]
	mov edx,1
	mov dword ptr [esp+0x3C],ebx
	mov dword ptr [esp+0x30],edx
	cmp eax,9
	ja Block14

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5
cmp EAX, 4
je Block6
cmp EAX, 5
je Block7
cmp EAX, 6
je Block8
cmp EAX, 7
je Block9
cmp EAX, 8
je Block10
cmp EAX, 9
je Block11


 Block2:
	mov dword ptr [esp+0x48],ebx
	mov eax,dword ptr [ecx+0x74]
	mov ecx,dword ptr [ecx+0x70]
	push eax
	push ecx
	mov dword ptr [esp+0x44],edx
	lea edx,[esp+0x50]
	push offset _S_HAI64D
	push edx
	call ZXString<char>::Format
	add esp,0x10
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x48]
	jmp Block12

 Block3:
	mov dword ptr [esp+0xC],ebx
	mov eax,dword ptr [ecx+0x90]
	mov edx,dword ptr [ecx+0x84]
	push eax
	mov eax,dword ptr [ecx+0x80]
	push edx
	push eax
	lea ecx,[esp+0x18]
	push offset _S_HRI64DD
	push ecx
	mov dword ptr [esp+0x50],2
	call ZXString<char>::Format
	add esp,0x14
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xC]
	jmp Block12

 Block4:
	mov dword ptr [esp+0x10],ebx
	mov edx,dword ptr [ecx+0x7C]
	mov eax,dword ptr [ecx+0x78]
	push edx
	push eax
	lea ecx,[esp+0x18]
	push offset _S_MAI64D
	push ecx
	mov dword ptr [esp+0x4C],3
	call ZXString<char>::Format
	add esp,0x10
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	jmp Block12

 Block5:
	mov dword ptr [esp+0x14],ebx
	mov edx,dword ptr [ecx+0x94]
	mov eax,dword ptr [ecx+0x8C]
	mov ecx,dword ptr [ecx+0x88]
	push edx
	push eax
	push ecx
	lea edx,[esp+0x20]
	push offset _S_MRI64DD
	push edx
	mov dword ptr [esp+0x50],4
	call ZXString<char>::Format
	add esp,0x14
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	jmp Block12

 Block6:
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [ecx+0xB0]
	push eax
	lea ecx,[esp+0x1C]
	push offset _S_AHAD
	push ecx
	mov dword ptr [esp+0x48],5
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	jmp Block12

 Block7:
	mov dword ptr [esp+0x1C],ebx
	mov edx,dword ptr [ecx+0x98]
	mov eax,dword ptr [ecx+0xB8]
	push edx
	push eax
	lea ecx,[esp+0x24]
	push offset _S_AHRDD
	push ecx
	mov dword ptr [esp+0x4C],6
	call ZXString<char>::Format
	add esp,0x10
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	jmp Block12

 Block8:
	mov dword ptr [esp+0x20],ebx
	mov edx,dword ptr [ecx+0xB4]
	push edx
	lea eax,[esp+0x24]
	push offset _S_AMAD
	push eax
	mov dword ptr [esp+0x48],7
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	jmp Block12

 Block9:
	mov dword ptr [esp+0x24],ebx
	mov edx,dword ptr [ecx+0x9C]
	mov eax,dword ptr [ecx+0xBC]
	push edx
	push eax
	lea ecx,[esp+0x2C]
	push offset _S_AMRDD
	push ecx
	mov dword ptr [esp+0x4C],8
	call ZXString<char>::Format
	add esp,0x10
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	jmp Block12

 Block10:
	mov dword ptr [esp+0x28],ebx
	mov edx,dword ptr [ecx+0xAC]
	mov eax,dword ptr [ecx+0xA8]
	push edx
	mov edx,dword ptr [ecx+0xA4]
	push eax
	mov eax,dword ptr [ecx+0xA0]
	push edx
	push eax
	lea ecx,[esp+0x38]
	push offset _S_UCDHDMDHMD
	push ecx
	mov dword ptr [esp+0x54],9
	call ZXString<char>::Format
	add esp,0x18
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	jmp Block12

 Block11:
	mov dword ptr [esp+0x2C],ebx
	mov edx,dword ptr [ecx+0xD0]
	push edx
	lea eax,[esp+0x30]
	push offset _S_FUPHD
	push eax
	mov dword ptr [esp+0x48],0xA
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]

 Block12:
	mov byte ptr [esp+0x3C],bl
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,esi
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x34
	ret 8
}
}
// CBattleRecordMan::DamageInfo::IncCriticalNum
__SUB_CLASS_THIS0(000702D0, __thiscall, 7589,  CBattleRecordMan::DamageInfo, void) {
__asm {

 Block0:
	inc dword ptr [ecx+0x30]
	ret
}
}
// CBattleRecordMan::RecoveryItemInfo::IncTotalMPIncApply
__SUB_CLASS_THIS(00070410, __thiscall, 7597,  CBattleRecordMan::RecoveryItemInfo, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cdq
	add dword ptr [ecx+8],eax
	adc dword ptr [ecx+0xC],edx
	ret 4
}
}
// CBattleRecordMan::RecoveryItemInfo::CalcMeritRate
__SUB_CLASS_THIS0(00070480, __thiscall, 7598,  CBattleRecordMan::RecoveryItemInfo, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov ebx,dword ptr [esi+0x14]
	push edi
	mov edi,dword ptr [esi+0x10]
	mov eax,edi
	or eax,ebx
	jne Block2

 Block1:
	mov dword ptr [esi+0x20],eax
	jmp Block3

 Block2:
	mov ecx,dword ptr [esi+4]
	mov edx,dword ptr [esi]
	push 0
	push 0x64
	push ecx
	push edx
	call __allmul
	push ebx
	push edi
	push edx
	push eax
	call __alldiv
	mov dword ptr [esi+0x20],eax

 Block3:
	mov edi,dword ptr [esi+0x18]
	mov ebx,dword ptr [esi+0x1C]
	mov eax,edi
	or eax,ebx
	jne Block5

 Block4:
	mov dword ptr [esi+0x24],eax
	jmp Block6

 Block5:
	mov ecx,dword ptr [esi+0xC]
	mov edx,dword ptr [esi+8]
	push 0
	push 0x64
	push ecx
	push edx
	call __allmul
	push ebx
	push edi
	push edx
	push eax
	call __alldiv
	mov dword ptr [esi+0x24],eax

 Block6:
	mov ecx,dword ptr [esi+0x48]
	test ecx,ecx
	jne Block8

 Block7:
	mov dword ptr [esi+0x28],ecx
	jmp Block9

 Block8:
	mov eax,dword ptr [esi+0x40]
	imul eax,0x64
	cdq
	idiv ecx
	mov dword ptr [esi+0x28],eax

 Block9:
	mov ecx,dword ptr [esi+0x4C]
	test ecx,ecx
	jne Block11

 Block10:
	pop edi
	mov dword ptr [esi+0x2C],ecx
	pop esi
	pop ebx
	ret

 Block11:
	mov eax,dword ptr [esi+0x44]
	imul eax,0x64
	cdq
	idiv ecx
	pop edi
	mov dword ptr [esi+0x2C],eax
	pop esi
	pop ebx
	ret
}
}
// CBattleRecordMan::OnServerOnCalcRequestResult
__SUB_CLASS_THIS(00070B40, __thiscall, 7570,  CBattleRecordMan, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esi+0xC],eax
	test eax,eax
	jne Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0x23
	call CWvsContext::UI_Close
	mov dword ptr [esi+8],0

 Block2:
	pop esi
	ret 4
}
}
// CBattleRecordMan::ClearInfo
__SUB_CLASS_THIS(00070790, __thiscall, 7564,  CBattleRecordMan, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0
	mov edx,ecx
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,2
	jne Block6

 Block3:
	lea ecx,[edx+0x18]
	call CBattleRecordMan::DamageInfo::ClearAllValue

 Block4:
	lea ecx,[edx+0x70]
	call CBattleRecordMan::RecoveryItemInfo::ClearAllValue
	ret 4

 Block5:
	lea ecx,[edx+0x18]
	call CBattleRecordMan::DamageInfo::ClearAllValue

 Block6:
	ret 4
}
}
// CBattleRecordMan::SetForcedOffCalc
__SUB_CLASS_THIS0(00070870, __thiscall, 7560,  CBattleRecordMan, void) {
__asm {

 Block0:
	xor eax,eax
	mov dword ptr [ecx+8],eax
	mov dword ptr [ecx+0xC],eax
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0x23
	call CWvsContext::UI_Close
	ret
}
}
// CBattleRecordMan::OnDotDamageInfo
__SUB_CLASS_THIS(00070A60, __thiscall, 7570,  CBattleRecordMan, void, CInPacket&) {
__asm {

 Block0:
	sub esp,8
	push ebp
	mov ebp,ecx
	cmp dword ptr [ebp+8],0
	je Block15

 Block1:
	cmp dword ptr [ebp+0xC],0
	je Block15

 Block2:
	push ebx
	push esi
	mov esi,dword ptr [esp+0x18]
	push edi
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov edi,eax
	call CInPacket::Decode4
	mov ecx,esi
	mov ebx,eax
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,esi
	call CInPacket::Decode4
	mov dword ptr [esp+0x1C],eax
	jmp Block5

 Block4:
	mov dword ptr [esp+0x1C],0

 Block5:
	cmp dword ptr [ebp+0x10],0
	je Block14

 Block6:
	test ebx,ebx
	jle Block12

 Block7:
	lea esi,[ebp+0x18]
	mov dword ptr [esp+0x10],ebx
	jmp Block9

 Block9:
	push edi
	push 1
	mov ecx,esi
	call CBattleRecordMan::DamageInfo::ChoiceMaxOrMinDamage
	push edi
	push 0
	call CBattleRecordMan::DamageInfo::ChoiceMaxOrMinDamage
	call CBattleRecordMan::DamageInfo::IncTotalAttackNum
	cmp dword ptr [esp+0x14],0
	je Block11

 Block10:
	mov eax,dword ptr [esp+0x1C]
	push eax
	mov ecx,ebp
	call CBattleRecordMan::SetAttrDamageRateInfo

 Block11:
	sub dword ptr [esp+0x10],1
	jne Block9

 Block12:
	imul ebx,edi
	lea esi,[ebp+0x18]
	push ebx
	mov ecx,esi
	call CBattleRecordMan::DamageInfo::IncTotalDamage
	call CBattleRecordMan::DamageInfo::CalcAverageDamage
	push 0
	push 1
	push edi
	mov ecx,esi
	call CBattleRecordMan::DamageInfo::CalcAverageDamagePerSec
	mov ecx,ebp
	call CBattleRecordMan::CheckTotalDamageOverflow
	cmp dword ptr [esp+0x14],0
	je Block14

 Block13:
	mov ecx,esi
	call CBattleRecordMan::DamageInfo::CalcAverageAttrRate

 Block14:
	pop edi
	pop esi
	pop ebx

 Block15:
	pop ebp
	add esp,8
	ret 4
}
}
// CBattleRecordMan::RecoveryItemInfo::IncTotalHPIncApply
__SUB_CLASS_THIS(00070400, __thiscall, 7597,  CBattleRecordMan::RecoveryItemInfo, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cdq
	add dword ptr [ecx],eax
	adc dword ptr [ecx+4],edx
	ret 4
}
}
// CBattleRecordMan::OnPacket
__SUB_CLASS_THIS(00070BA0, __thiscall, 7562,  CBattleRecordMan, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x1A5
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	call CBattleRecordMan::OnServerOnCalcRequestResult
	ret 8

 Block3:
	mov edx,dword ptr [esp+8]
	push edx
	call CBattleRecordMan::OnDotDamageInfo

 Block4:
	ret 8
}
}
// CBattleRecordMan::DamageInfo::CalcAverageDamage
__SUB_CLASS_THIS0(00070200, __thiscall, 7589,  CBattleRecordMan::DamageInfo, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x20]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esi+0x18]
	cdq
	push edx
	push eax
	mov eax,dword ptr [esi+0x1C]
	push eax
	push ecx
	call __alldiv
	mov dword ptr [esi],eax

 Block2:
	pop esi
	ret
}
}
// CBattleRecordMan::RecoveryItemInfo::CalcAverageMPInc
__SUB_CLASS_THIS0(00070570, __thiscall, 7598,  CBattleRecordMan::RecoveryItemInfo, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x3C]
	add eax,dword ptr [esi+0x38]
	mov ecx,dword ptr [esi+8]
	je Block2

 Block1:
	push ebx
	cdq
	push edi
	mov ebx,edx
	push ebx
	mov edi,eax
	mov eax,dword ptr [esi+0xC]
	push edi
	push eax
	push ecx
	call __alldiv
	mov edx,dword ptr [esi+0x1C]
	push ebx
	push edi
	mov dword ptr [esi+0x44],eax
	mov eax,dword ptr [esi+0x18]
	push edx
	push eax
	call __alldiv
	pop edi
	pop ebx
	mov dword ptr [esi+0x4C],eax
	pop esi
	ret

 Block2:
	mov edx,dword ptr [esi+0x18]
	mov dword ptr [esi+0x44],ecx
	mov dword ptr [esi+0x4C],edx
	pop esi
	ret
}
}
// CBattleRecordMan::DamageInfo::ClearAllValue
__SUB_CLASS_THIS0(000703C0, __thiscall, 7589,  CBattleRecordMan::DamageInfo, void) {
__asm {

 Block0:
	fldz
	xor eax,eax
	fst qword ptr [ecx+0x40]
	mov dword ptr [ecx],eax
	fstp qword ptr [ecx+0x28]
	mov dword ptr [ecx+0x48],eax
	mov dword ptr [ecx+4],eax
	mov dword ptr [ecx+8],eax
	mov dword ptr [ecx+0x18],eax
	mov dword ptr [ecx+0x1C],eax
	mov dword ptr [ecx+0x20],eax
	mov dword ptr [ecx+0x30],eax
	mov dword ptr [ecx+0x38],eax
	mov dword ptr [ecx+0x50],eax
	mov dword ptr [ecx+0x4C],eax
	mov dword ptr [ecx+0xC],eax
	mov dword ptr [ecx+0x10],eax
	mov dword ptr [ecx+0x34],eax
	ret
}
}
// CBattleRecordMan::RecoveryItemInfo::CalcForeCastUsePerHour
__SUB_CLASS_THIS0(000705C0, __thiscall, 7598,  CBattleRecordMan::RecoveryItemInfo, void) {
__asm {

 Block0:
	sub esp,8
	push esi
	push edi
	mov esi,ecx
	call timeGetTime
	mov edi,eax
	mov eax,dword ptr [esi+0x50]
	test eax,eax
	jne Block2

 Block1:
	fld1
	mov dword ptr [esi+0x50],edi
	pop edi
	fstp qword ptr [esi+0x58]
	mov dword ptr [esi+0x60],1
	pop esi
	add esp,8
	ret

 Block2:
	mov ecx,edi
	sub ecx,eax
	je Block7

 Block3:
	mov eax,dword ptr [esi+0x30]
	mov dword ptr [esp+8],eax
	test eax,eax
	je Block7

 Block4:
	mov dword ptr [esp+0xC],ecx
	fild dword ptr [esp+0xC]
	test ecx,ecx
	jge Block6

 Block5:
	fadd qword ptr [__real_41f0000000000000]

 Block6:
	fdiv qword ptr [__real_408f400000000000]
	fadd qword ptr [esi+0x58]
	fst qword ptr [esi+0x58]
	fidivr dword ptr [esp+8]
	fld qword ptr [__real_404e000000000000]
	fmul st(1),st
	fmulp st(1),st(0)
	call __ftol2_sse
	mov dword ptr [esi+0x60],eax
	mov dword ptr [esi+0x50],edi

 Block7:
	pop edi
	pop esi
	add esp,8
	ret
}
}
// CBattleRecordMan::DamageInfo::ChoiceCriMaxOrMinDamage
__SUB_CLASS_THIS(00070270, __thiscall, 7591,  CBattleRecordMan::DamageInfo, void, int32_t, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block7

 Block1:
	cmp dword ptr [esp+4],0
	je Block4

 Block2:
	cmp dword ptr [ecx+0xC],eax
	jge Block7

 Block3:
	mov dword ptr [ecx+0xC],eax
	ret 8

 Block4:
	mov edx,dword ptr [ecx+0x10]
	cmp edx,eax
	jg Block6

 Block5:
	test edx,edx
	jne Block7

 Block6:
	mov dword ptr [ecx+0x10],eax

 Block7:
	ret 8
}
}
// CBattleRecordMan::SetBattleRecoveryInfo
__SUB_CLASS_THIS(00070960, __thiscall, 7567,  CBattleRecordMan, void, long, long, long, long) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [ecx+8],0
	mov dword ptr [esp],ecx
	je Block18

 Block1:
	cmp dword ptr [ecx+0xC],0
	je Block18

 Block2:
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	push edi
	lea edi,[ecx+0x70]
	push ebp
	mov ecx,edi
	call CBattleRecordMan::RecoveryItemInfo::IncTotalHPIncReq
	mov eax,dword ptr [esp+0x18]
	push eax
	call CBattleRecordMan::RecoveryItemInfo::IncTotalMPIncReq
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test esi,esi
	je Block17

 Block3:
	mov ecx,dword ptr [esi+0x2138]
	push ebx
	push ecx
	lea edx,[esi+0x2130]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	sub eax,dword ptr [esp+0x28]
	mov ebx,0
	sets bl
	add esi,0x213C
	dec ebx
	and ebx,eax
	mov eax,dword ptr [esi+8]
	push eax
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x10
	sub eax,dword ptr [esp+0x24]
	mov ecx,0
	sets cl
	dec ecx
	and ecx,eax
	cmp ebx,ebp
	mov esi,ecx
	mov ecx,edi
	jl Block5

 Block4:
	push ebp
	jmp Block6

 Block5:
	push ebx

 Block6:
	call CBattleRecordMan::RecoveryItemInfo::IncTotalHPIncApply
	mov ebx,dword ptr [esp+0x1C]
	cmp esi,ebx
	mov ecx,edi
	jl Block8

 Block7:
	push ebx
	jmp Block9

 Block8:
	push esi

 Block9:
	call CBattleRecordMan::RecoveryItemInfo::IncTotalMPIncApply
	test ebp,ebp
	je Block13

 Block10:
	mov ecx,edi
	test ebx,ebx
	je Block12

 Block11:
	push 2
	jmp Block15

 Block12:
	push 0
	jmp Block15

 Block13:
	test ebx,ebx
	je Block16

 Block14:
	push 1
	mov ecx,edi

 Block15:
	call CBattleRecordMan::RecoveryItemInfo::IncTotalUseItem

 Block16:
	mov ecx,edi
	call CBattleRecordMan::RecoveryItemInfo::CalcAverageHPInc
	mov ecx,edi
	call CBattleRecordMan::RecoveryItemInfo::CalcAverageMPInc
	mov ecx,edi
	call CBattleRecordMan::RecoveryItemInfo::CalcMeritRate
	mov ecx,edi
	call CBattleRecordMan::RecoveryItemInfo::CalcForeCastUsePerHour
	mov ecx,dword ptr [esp+0x10]
	call CBattleRecordMan::CheckTotalRecoveryOverflow
	pop ebx

 Block17:
	pop edi
	pop esi
	pop ebp

 Block18:
	pop ecx
	ret 0x10
}
}
// CBattleRecordMan::GetOnCalc
__SUB_CLASS_THIS0(000701A0, __thiscall, 7568,  CBattleRecordMan, int32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+8],0
	je Block3

 Block1:
	cmp dword ptr [ecx+0xC],0
	je Block3

 Block2:
	mov eax,1
	ret

 Block3:
	xor eax,eax
	ret
}
}
