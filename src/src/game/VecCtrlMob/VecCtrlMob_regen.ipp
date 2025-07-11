#include "regen.hpp"
// VecCtrlMob.ipp
#include "VecCtrlMob.hpp"

// CVecCtrlMob::CollisionDetectEscortBeforeTargetPosition
__SUB_CLASS_THIS0(00596AD0, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x300],0
	jne Block20

 Block1:
	cmp dword ptr [esi+0x75C],0
	jne Block20

 Block2:
	mov eax,dword ptr [esi+0x780]
	test eax,eax
	je Block20

 Block3:
	cmp dword ptr [eax-4],0
	je Block20

 Block4:
	cmp dword ptr [esi+0x1A0],0
	je Block20

 Block5:
	mov eax,dword ptr [esi+0x48]
	push ebx
	push ebp
	push edi
	lea edi,[esi+0x20]
	push eax
	lea ecx,[edi+0x18]
	push ecx
	xor ebp,ebp
	xor ebx,ebx
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [esi+0x768]
	add edx,0x19
	mov dword ptr [esp+0x18],edx
	fild dword ptr [esp+0x18]
	add esp,8
	fcompp
	fnstsw ax
	test ah,1
	jne Block8

 Block6:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	mov eax,dword ptr [esi+0x768]
	sub eax,0x19
	mov dword ptr [esp+0x10],eax
	fild dword ptr [esp+0x10]
	fcompp
	fnstsw ax
	test ah,0x41
	jp Block8

 Block7:
	lea ebx,[ebp+1]

 Block8:
	mov ecx,dword ptr [esi+0x1F0]
	lea eax,[esi+0x1E8]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block12

 Block9:
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [esi+0x764]
	mov dword ptr [esp+0x18],ecx
	fild dword ptr [esp+0x18]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jp Block12

 Block10:
	cmp dword ptr [esi+0x750],ecx
	jg Block12

 Block11:
	xor eax,eax
	test ebx,ebx
	setne al
	mov ebp,eax

 Block12:
	mov ecx,dword ptr [esi+0x1F0]
	push ecx
	lea eax,[esi+0x1E8]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jge Block17

 Block13:
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [esi+0x764]
	mov dword ptr [esp+0x18],ecx
	fild dword ptr [esp+0x18]
	add esp,8
	fcompp
	fnstsw ax
	test ah,1
	jne Block17

 Block14:
	cmp dword ptr [esi+0x750],ecx
	jl Block17

 Block15:
	test ebx,ebx
	jne Block18

 Block16:
	pop edi
	pop ebp
	pop ebx
	pop esi
	pop ecx
	ret

 Block17:
	test ebp,ebp
	je Block19

 Block18:
	mov dword ptr [esi+0x770],0

 Block19:
	pop edi
	pop ebp
	pop ebx

 Block20:
	pop esi
	pop ecx
	ret
}
}
// CVecCtrlMob::MoveMobOnLadderOrRopeX
__SUB_CLASS_THIS0(00596EB0, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x300],0
	jne Block22

 Block1:
	cmp dword ptr [esi+0x770],0
	jne Block22

 Block2:
	cmp dword ptr [esi+0x74C],0
	jne Block22

 Block3:
	mov eax,dword ptr [esi+0x780]
	test eax,eax
	je Block22

 Block4:
	cmp dword ptr [eax-4],0
	je Block22

 Block5:
	mov eax,dword ptr [esi+0x1BC]
	push eax
	lea ecx,[esi+0x1B4]
	push ecx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block22

 Block6:
	mov eax,dword ptr [esi+0x798]
	lea edx,[eax+eax*4]
	mov eax,dword ptr [esi+0x780]
	push ebp
	mov ebp,1
	cmp dword ptr [eax+edx*4+8],ebp
	jne Block21

 Block7:
	push edi
	cmp dword ptr [esi+0x78C],ebp
	jne Block11

 Block8:
	fild dword ptr [esi+0x784]
	lea edi,[esi+0x20]
	sub esp,8
	mov ecx,edi
	fadd qword ptr [__real_3fb999999999999a]
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	fstp st(0)
	sub esp,8
	fldz
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)
	fldz
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vy
	fstp st(0)
	mov eax,dword ptr [esi+0x1A0]
	test eax,eax
	je Block10

 Block9:
	push eax
	push edi
	lea ecx,[esi+0x140]
	call RelPos::SetFromAbsPos

 Block10:
	push 0x1F
	mov ecx,esi
	mov dword ptr [esi+0x74C],ebp
	call CVecCtrl::SetMovePathAttribute
	pop edi
	pop ebp
	pop esi
	ret

 Block11:
	push ebx
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	test eax,eax
	jle Block14

 Block12:
	mov eax,dword ptr [esi+0x798]
	mov edx,dword ptr [esi+0x780]
	lea ecx,[eax+eax*4]
	mov eax,dword ptr [esi+0x30]
	lea edi,[esi+0x20]
	push eax
	push edi
	lea ebx,[edx+ecx*4]
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebx]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jp Block14

 Block13:
	mov eax,dword ptr [esi+0x798]
	mov edx,dword ptr [esi+0x780]
	lea ecx,[eax+eax*4]
	fild dword ptr [edx+ecx*4]
	jmp Block17

 Block14:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	test eax,eax
	jge Block20

 Block15:
	mov edx,dword ptr [esi+0x30]
	mov eax,dword ptr [esi+0x798]
	mov ecx,dword ptr [esi+0x780]
	lea edi,[esi+0x20]
	push edx
	lea eax,[eax+eax*4]
	push edi
	lea ebx,[ecx+eax*4]
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebx]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block20

 Block16:
	mov eax,dword ptr [esi+0x798]
	mov ecx,dword ptr [esi+0x780]
	lea eax,[eax+eax*4]
	fild dword ptr [ecx+eax*4]

 Block17:
	fadd qword ptr [__real_3fb999999999999a]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	fstp st(0)
	sub esp,8
	fldz
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)
	fldz
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vy
	fstp st(0)
	mov eax,dword ptr [esi+0x1A0]
	test eax,eax
	je Block19

 Block18:
	push eax
	push edi
	lea ecx,[esi+0x140]
	call RelPos::SetFromAbsPos

 Block19:
	push 0x1F
	mov ecx,esi
	mov dword ptr [esi+0x74C],ebp
	call CVecCtrl::SetMovePathAttribute

 Block20:
	pop ebx
	pop edi

 Block21:
	pop ebp

 Block22:
	pop esi
	ret
}
}
// CVecCtrlMob::SetActive
__SUB_CLASS_THIS(005987F0, __thiscall, 79897,  CVecCtrlMob, void, int32_t, long, long, long, long, long, CStaticFoothold*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	mov eax,dword ptr [ebp+0x20]
	mov edx,dword ptr [ebp+0x18]
	sub esp,0x34
	push ebx
	mov ebx,dword ptr [ebp+0x10]
	push esi
	push edi
	push eax
	mov eax,dword ptr [ebp+0x14]
	mov esi,ecx
	mov ecx,dword ptr [ebp+0x1C]
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	push edx
	mov edx,dword ptr [ebp+8]
	push eax
	push ebx
	push ecx
	push edx
	mov ecx,esi
	call CVecCtrl::SetActive
	push 0
	lea ecx,[esi+0x304]
	mov dword ptr [esi+0x300],0
	call TSecType<int>::SetData
	push 0
	lea ecx,[esi+0x310]
	call TSecType<long>::SetData
	lea edi,[esi+0x734]
	push 0
	mov ecx,edi
	call TSecType<int>::SetData
	mov ecx,dword ptr [esi+0x14]
	xor eax,eax
	cmp ecx,eax
	je Block13

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push offset CMob::ms_RTTI_CMob
	call edx
	test eax,eax
	je Block12

 Block2:
	mov eax,dword ptr [esi+0x14]
	test eax,eax
	je Block11

 Block3:
	add eax,0xFFFFFFFC
	mov dword ptr [esp+0x3C],eax
	test eax,eax
	je Block5

 Block4:
	mov ecx,edi
	call TSecType<int>::GetData
	mov ecx,dword ptr [esp+0x3C]
	push eax
	add ecx,0x5A4
	call TSecType<int>::SetData

 Block5:
	xor eax,eax

 Block6:
	lea edi,[esi+0x6B4]
	push 0
	mov ecx,edi
	mov dword ptr [esi+0x31C],eax
	mov dword ptr [esi+0x200],eax
	mov dword ptr [esi+0x774],eax
	mov dword ptr [esi+0x778],eax
	mov dword ptr [esi+0x77C],eax
	call TSecType<long>::SetData
	push 0
	lea ecx,[edi+0xC]
	call TSecType<long>::SetData
	push 0
	lea ecx,[edi+0x18]
	call TSecType<long>::SetData
	push 0
	lea ecx,[edi+0x24]
	call TSecType<int>::SetData
	push 0
	lea ecx,[edi+0x3C]
	call TSecType<long>::SetData
	push 0
	lea ecx,[edi+0x30]
	call TSecType<long>::SetData
	cmp dword ptr [ebp+8],0
	je Block25

 Block7:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [eax+0x174]
	cmp dword ptr [ecx+0x234],1
	jne Block25

 Block8:
	mov ecx,esi
	call CVecCtrlMob::IsAbleToClimbLadderOrRope
	mov edi,dword ptr [ebp+0xC]
	test eax,eax
	je Block14

 Block9:
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push ebx
	push edi
	push ebx
	push edi
	call CWvsPhysicalSpace2D::GetLadderOrRope
	mov dword ptr [esp+0x3C],eax
	test eax,eax
	je Block14

 Block10:
	fldz
	lea edi,[esi+0x20]
	sub esp,8
	fstp qword ptr [esp]
	mov ecx,edi
	call AbsPos::_ZtlSecurePut_vy
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)
	mov ebx,dword ptr [esp+0x3C]
	fild dword ptr [ebx+0xC]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	push 0
	push ebx
	jmp Block24

 Block11:
	mov dword ptr [esp+0x3C],0
	jmp Block5

 Block12:
	xor eax,eax

 Block13:
	mov dword ptr [esp+0x3C],eax
	jmp Block6

 Block14:
	mov ecx,esi
	call CVecCtrlMob::IsAbleToClimbLadderOrRope
	test eax,eax
	je Block19

 Block15:
	push ebx
	push edi
	lea ecx,[ebx-0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push edi
	call CWvsPhysicalSpace2D::GetLadderOrRope
	mov dword ptr [esp+0x3C],eax
	test eax,eax
	je Block19

 Block16:
	fldz
	lea edi,[esi+0x20]
	sub esp,8
	fstp qword ptr [esp]
	mov ecx,edi
	call AbsPos::_ZtlSecurePut_vy
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)
	mov ebx,dword ptr [esp+0x3C]
	fild dword ptr [ebx+0xC]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	mov edx,dword ptr [edi+0x28]
	fstp st(0)
	push edx
	lea eax,[edi+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	mov ecx,dword ptr [ebx+0x14]
	cmp ecx,eax
	mov dword ptr [esp+0x3C],ecx
	jl Block18

 Block17:
	mov dword ptr [esp+0x3C],eax

 Block18:
	fild dword ptr [esp+0x3C]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	push 0
	push ebx
	jmp Block24

 Block19:
	mov ecx,esi
	call CVecCtrlMob::IsAbleToClimbLadderOrRope
	test eax,eax
	je Block25

 Block20:
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	lea eax,[ebx+0xA]
	push eax
	push edi
	push ebx
	push edi
	mov dword ptr [esp+0x4C],eax
	call CWvsPhysicalSpace2D::GetLadderOrRope
	mov edi,eax
	test edi,edi
	je Block25

 Block21:
	mov eax,dword ptr [edi+0x10]
	cmp ebx,eax
	jg Block25

 Block22:
	cmp eax,dword ptr [esp+0x3C]
	jg Block25

 Block23:
	fldz
	lea ebx,[esi+0x20]
	sub esp,8
	fstp qword ptr [esp]
	mov ecx,ebx
	call AbsPos::_ZtlSecurePut_vy
	sub esp,8
	mov ecx,ebx
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)
	fild dword ptr [edi+0xC]
	sub esp,8
	mov ecx,ebx
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	fstp st(0)
	sub esp,8
	fild dword ptr [edi+0x10]
	mov ecx,ebx
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	push 0
	push edi

 Block24:
	mov edx,dword ptr [esi]
	fstp st(0)
	mov eax,dword ptr [edx+0x14]
	push 0
	mov ecx,esi
	call eax

 Block25:
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x1C
}
}
// CVecCtrlMob::ClearEscortInfo
__SUB_CLASS_THIS0(00597120, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0x780]
	call ZArray<CVecCtrlMob::EscortDest>::RemoveAll
	xor eax,eax
	mov dword ptr [esi+0x74C],eax
	mov dword ptr [esi+0x798],eax
	mov dword ptr [esi+0x750],eax
	mov dword ptr [esi+0x754],eax
	mov dword ptr [esi+0x758],1
	mov dword ptr [esi+0x75C],eax
	mov dword ptr [esi+0x760],eax
	pop esi
	ret
}
}
// CMoveRandMan::~CMoveRandMan
__SUB_CLASS_THIS0(00596C20, __thiscall, 23418,  CMoveRandMan, void) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	mov esi,ecx
	push edi
	mov ecx,offset _D_G_RAND
	mov dword ptr [esi+0x24],0
	call CRand32::Random
	mov ecx,offset _D_G_RAND
	mov edi,eax
	call CRand32::Random
	mov ecx,offset _D_G_RAND
	mov ebx,eax
	call CRand32::Random
	mov ebp,eax
	lea eax,[esi+0x1C]
	push eax
	lea ecx,[esp+0x14]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov eax,ebp
	or eax,0x100000
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+0x10],eax
	mov eax,ebx
	or eax,0x1000
	mov dword ptr [esi+8],eax
	mov dword ptr [esi+0x14],eax
	mov eax,edi
	or eax,0x10
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+0x18],eax
	mov eax,dword ptr [esp+0x10]
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block2

 Block1:
	xor ecx,ecx
	pop edi
	mov dword ptr [eax],ecx
	mov dword ptr [esi+0x2C],ecx
	mov dword ptr [esi+0x28],ecx
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret

 Block2:
	xor eax,eax
	pop edi
	mov dword ptr [esi+0x2C],eax
	mov dword ptr [esi+0x28],eax
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret
}
}
// CVecCtrlMob::SaveFloatStateAfterCollision
__SUB_CLASS_THIS0(0059A450, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	push edi
	mov edi,dword ptr [esi+0x718]
	lea ecx,[edi+0xC]
	lea ebx,[esi+0x580]
	call TSecType<long>::GetData
	push eax
	lea ecx,[ebx+0xC]
	call TSecType<long>::SetData
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	mov ecx,ebx
	call TSecType<long>::SetData
	lea ecx,[esi+0x5C8]
	call TSecType<int>::GetData
	test eax,eax
	jne Block2

 Block1:
	push eax
	lea ecx,[esi+0x5D4]
	call TSecType<int>::SetData

 Block2:
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CVecCtrlMob::RiseByToss
__SUB_CLASS_THIS(0059B400, __thiscall, 79909,  CVecCtrlMob, void, double) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x1A0]
	test eax,eax
	je Block2

 Block1:
	push eax
	lea ecx,[esi+0x1AC]
	call ZRef<CStaticFoothold>::op_assign_ptr
	jmp Block3

 Block2:
	mov eax,dword ptr [esi+0x48]
	push edi
	lea edi,[esi+0x20]
	push eax
	lea ecx,[edi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x10]
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x18]
	add esp,0x10
	push 2
	push 0x7FFFFFFF
	push 0
	call __ftol2_sse
	push eax
	call __ftol2_sse
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push eax
	call CWvsPhysicalSpace2D::GetFootholdUnderneath
	push eax
	lea ecx,[esi+0x1AC]
	call ZRef<CStaticFoothold>::op_assign_ptr
	pop edi

 Block3:
	cmp dword ptr [esi+0x1B0],0
	je Block5

 Block4:
	mov ecx,esi
	call CVecCtrl::DetachFromFoothold
	fld qword ptr [esp+0x10]
	sub esp,8
	lea ecx,[esi+0x68]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x50]
	mov dword ptr [esi+0x78],eax
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x60],eax
	push 0x10
	mov ecx,esi
	mov dword ptr [esi+0x200],0
	call CVecCtrl::SetMovePathAttribute

 Block5:
	pop esi
	add esp,8
	ret 8
}
}
// CVecCtrlMob::SetRushAttack
__SUB_CLASS_THIS(00596DB0, __thiscall, 79921,  CVecCtrlMob, void, double, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0xC]
	fld qword ptr [esp+4]
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x1A0],0
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esi+0x774],1
	mov dword ptr [esi+0x778],eax
	mov dword ptr [esi+0x77C],ecx
	je Block2

 Block1:
	push edi
	lea edi,[esi+0x140]
	sub esp,8
	lea ecx,[edi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x28],eax
	mov edx,dword ptr [esi+0x1A0]
	push edx
	push edi
	lea ecx,[esi+0x20]
	call AbsPos::SetFromRelPos
	pop edi
	push 0x23
	mov ecx,esi
	call CVecCtrl::SetMovePathAttribute
	pop esi
	ret 0x10

 Block2:
	sub esp,8
	lea ecx,[esi+0x50]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x68]
	mov dword ptr [esi+0x60],eax
	call _ZtlSecureTearHelper<double>::call
	push 0x23
	mov ecx,esi
	mov dword ptr [esi+0x78],eax
	call CVecCtrl::SetMovePathAttribute
	pop esi
	ret 0x10
}
}
// CVecCtrlMob::FlyCtrlGuardingAfter
__SUB_CLASS_THIS0(0059A0E0, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x1F0]
	push edi
	lea eax,[esi+0x1E8]
	push ecx
	push eax
	mov dword ptr [esi+0x68C],1
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea ecx,[esi+0x6A8]
	call TSecType<long>::SetData
	lea ecx,[esi+0x5EC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [esi+0x718]
	add ecx,0xC
	mov edi,eax
	call TSecType<long>::GetData
	cmp edi,eax
	jne Block4

 Block1:
	lea ecx,[esi+0x5F8]
	call TSecType<long>::GetData
	mov ecx,dword ptr [esi+0x718]
	mov edi,eax
	call TSecType<long>::GetData
	cmp edi,eax
	jne Block4

 Block2:
	lea ecx,[esi+0x604]
	call TSecType<long>::GetData
	mov edx,dword ptr [esi+0x30]
	lea edi,[esi+0x20]
	push edx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	cmp ebx,eax
	jne Block4

 Block3:
	lea ecx,[esi+0x610]
	call TSecType<long>::GetData
	mov ebx,eax
	mov eax,dword ptr [edi+0x28]
	push eax
	add edi,0x18
	push edi
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	cmp ebx,eax
	je Block5

 Block4:
	xor ebx,ebx
	mov dword ptr [esi+0x648],ebx
	jmp Block6

 Block5:
	xor ebx,ebx

 Block6:
	cmp dword ptr [esi+0x640],ebx
	je Block25

 Block7:
	mov ecx,dword ptr [esi+0x718]
	push ebp
	add ecx,0xC
	xor ebp,ebp
	mov dword ptr [esp+0x10],ebx
	mov dword ptr [esi+0x644],1
	call TSecType<long>::GetData
	mov ecx,dword ptr [esi+0x30]
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	lea edi,[esi+0x20]
	push ecx
	push edi
	fstp qword ptr [esp+0x1C]
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x1C]
	add esp,8
	fabs
	fcomp qword ptr [__real_4024000000000000]
	fnstsw ax
	test ah,1
	jne Block11

 Block8:
	mov ecx,dword ptr [esi+0x718]
	add ecx,0xC
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0x10]
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	push edx
	push edi
	fstp qword ptr [esp+0x1C]
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [esp+0x1C]
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block10

 Block9:
	or ebx,0xFFFFFFFF
	jmp Block11

 Block10:
	mov ebx,1

 Block11:
	mov ecx,dword ptr [esi+0x718]
	call TSecType<long>::GetData
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [edi+0x28]
	fild dword ptr [esp+0x14]
	push eax
	lea ecx,[edi+0x18]
	push ecx
	fstp qword ptr [esp+0x1C]
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x1C]
	add esp,8
	fabs
	fcomp qword ptr [__real_4024000000000000]
	fnstsw ax
	test ah,5
	jp Block13

 Block12:
	or ebp,0xFFFFFFFF
	jmp Block15

 Block13:
	mov ecx,dword ptr [esi+0x718]
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0x28]
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	push edx
	add edi,0x18
	push edi
	fstp qword ptr [esp+0x1C]
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [esp+0x1C]
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block15

 Block14:
	mov dword ptr [esp+0x10],1

 Block15:
	lea edi,[esi+0x61C]
	mov ecx,edi
	call TSecType<long>::GetData
	cmp eax,ebx
	jne Block18

 Block16:
	lea ecx,[esi+0x628]
	call TSecType<long>::GetData
	cmp eax,ebp
	jne Block18

 Block17:
	lea ecx,[esi+0x634]
	call TSecType<int>::GetData
	cmp dword ptr [esp+0x10],eax
	je Block19

 Block18:
	xor ebx,ebx
	mov dword ptr [esi+0x648],ebx
	jmp Block20

 Block19:
	xor ebx,ebx

 Block20:
	mov ecx,edi
	call TSecType<long>::GetData
	mov edi,eax
	mov eax,dword ptr [esi+0x1F0]
	push eax
	lea eax,[esi+0x1E8]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	pop ebp
	cmp edi,eax
	jne Block22

 Block21:
	lea ecx,[esi+0x628]
	call TSecType<long>::GetData
	mov ecx,dword ptr [esi+0x1FC]
	push ecx
	lea edx,[esi+0x1F4]
	push edx
	mov edi,eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp edi,eax
	je Block23

 Block22:
	mov dword ptr [esi+0x648],ebx

 Block23:
	lea ecx,[esi+0x634]
	call TSecType<int>::GetData
	cmp eax,dword ptr [esi+0x204]
	mov dword ptr [esi+0x204],ebx
	je Block26

 Block24:
	pop edi
	mov dword ptr [esi+0x648],ebx
	pop esi
	pop ebx
	add esp,0xC
	ret

 Block25:
	mov dword ptr [esi+0x204],ebx

 Block26:
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret
}
}
// CVecCtrlMob::CtrlUpdateActiveMove
_SUB_EXCEPTION_HANDLER(59D090)
__SUB_CLASS_THIS0(0059D090, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_59D090
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
	mov esi,ecx
	mov eax,dword ptr [esi+0x1B0]
	test eax,eax
	je Block2

 Block1:
	push 0
	push 0
	call CVecCtrl::SetInput
	mov dword ptr [esi+0x650],1
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block2:
	mov ecx,dword ptr [esi+0x704]
	call TSecType<long>::GetData
	mov ebp,1
	test eax,eax
	jg Block21

 Block3:
	cmp dword ptr [esi+0x300],0
	je Block20

 Block4:
	lea ecx,[esi+0x324]
	call CRand32::Random
	mov ebx,eax
	mov eax,0x51EB851F
	mul ebx
	shr edx,7
	mov edi,2
	sub edi,edx
	imul edi,0x190
	add word ptr [esi+0x320],bp
	mov ecx,dword ptr [esi+0x704]
	add edi,ebx
	mov eax,0x6C16C16D
	mul edi
	sub edi,edx
	shr edi,1
	add edi,edx
	shr edi,6
	push edi
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x300]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push offset CUser::ms_RTTI_CUser
	call edx
	test eax,eax
	jne Block9

 Block5:
	mov ecx,dword ptr [esi+0x300]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push offset CMob::ms_RTTI_CMob
	call edx
	test eax,eax
	jne Block9

 Block6:
	mov ecx,dword ptr [esi+0x300]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push offset CSummoned::ms_RTTI_CSummoned
	call edx
	test eax,eax
	jne Block9

 Block7:
	mov ecx,dword ptr [esi+0x300]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push offset CUser::ms_RTTI_CUser
	call edx
	mov ecx,dword ptr [esi+0x300]
	mov edi,eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push offset CMob::ms_RTTI_CMob
	call edx
	mov ecx,dword ptr [esi+0x300]
	mov ebx,eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push offset CSummoned::ms_RTTI_CSummoned
	call edx
	mov ecx,dword ptr [esi+0x300]
	mov ebp,eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push offset IVecCtrlOwner::ms_RTTI_IVecCtrlOwner
	call edx
	xor ecx,ecx
	mov dword ptr [esp+0x14],ecx
	push eax
	push ebp
	push ebx
	push edi
	lea eax,[esp+0x24]
	push offset _S_R6025DDDD
	push eax
	mov dword ptr [esp+0x4C],ecx
	call ZXString<char>::Format
	lea ecx,[esp+0x2C]
	push ecx
	call save_error_log
	add esp,0x1C
	push 0
	push 0
	push 0
	mov ecx,esi
	call CVecCtrlMob::ChaseTarget
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block22

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block9:
	mov ecx,dword ptr [esi+0x700]
	call TSecType<long>::GetData
	test eax,eax
	je Block15

 Block10:
	mov edx,dword ptr [esi+0x30]
	lea edi,[esi+0x20]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x1C]
	mov ecx,dword ptr [esi+0x300]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	add esp,8
	lea edx,[esp+0x1C]
	push edx
	call eax
	fild dword ptr [eax]
	fsub qword ptr [esp+0x14]
	fabs
	fcomp qword ptr [__real_4059000000000000]
	fnstsw ax
	test ah,5
	jp Block15

 Block11:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esi+0x1C8]
	add esp,8
	fucompp
	fnstsw ax
	test ah,0x44
	jp Block13

 Block12:
	push ebp
	jmp Block18

 Block13:
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esi+0x1D0]
	add esp,8
	fucompp
	fnstsw ax
	test ah,0x44
	jp Block19

 Block14:
	push 0xFFFFFFFF
	jmp Block18

 Block15:
	mov ecx,dword ptr [esi+0x30]
	lea eax,[esi+0x20]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x1C]
	mov ecx,dword ptr [esi+0x300]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	add esp,8
	lea eax,[esp+0x24]
	push eax
	call edx
	fild dword ptr [eax]
	fcomp qword ptr [esp+0x14]
	fnstsw ax
	test ah,5
	mov eax,0xFFFFFFFF
	jnp Block17

 Block16:
	mov eax,ebp

 Block17:
	push eax

 Block18:
	mov ecx,dword ptr [esi+0x700]
	call TSecType<long>::SetData

 Block19:
	mov ecx,dword ptr [esi+0x700]
	push 0
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call CVecCtrl::SetInput
	jmp Block21

 Block20:
	lea ecx,[esi+0x388]
	mov dword ptr [esi+0x3AC],ebp
	call CRand32::Random
	mov ecx,eax
	mov eax,0x10624DD3
	mul ecx
	shr edx,7
	imul edx,0x7D0
	add word ptr [esi+0x384],bp
	sub ecx,edx
	add ecx,0x3E8
	mov eax,0x6C16C16D
	mul ecx
	sub ecx,edx
	shr ecx,1
	add ecx,edx
	shr ecx,6
	push ecx
	mov ecx,dword ptr [esi+0x704]
	call TSecType<long>::SetData
	lea ecx,[esi+0x388]
	call CRand32::Random
	add word ptr [esi+0x384],bp
	mov ecx,eax
	mov eax,0xAAAAAAAB
	mul ecx
	shr edx,1
	mov dword ptr [esi+0x3A8],ecx
	lea eax,[edx+edx*2]
	sub ecx,eax
	sub ecx,ebp
	mov dword ptr [esi+0x3B0],ebp
	push ecx
	mov ecx,dword ptr [esi+0x700]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x700]
	push 0
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call CVecCtrl::SetInput
	mov ecx,dword ptr [esi+0x1F0]
	push ecx
	lea edx,[esi+0x1E8]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esi+0x350],eax
	movzx eax,word ptr [esi+0x384]
	add esp,8
	mov word ptr [esi+0x298],ax
	mov word ptr [esi+0x29A],ax

 Block21:
	mov edi,dword ptr [esi+0x704]
	mov ecx,edi
	call TSecType<long>::GetData
	sub eax,ebp
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	mov dword ptr [esi+0x650],ebp

 Block22:
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
// CVecCtrlMob::GetHackedCode
__SUB_CLASS_THIS0(002417B0, __thiscall, 79907,  CVecCtrlMob, TSecType<long>) {
__asm {

 Block0:
	push ecx
	push esi
	add ecx,0x5E0
	mov dword ptr [esp+4],0
	call TSecType<long>::GetData
	mov esi,dword ptr [esp+0xC]
	push eax
	mov ecx,esi
	call TSecType<long>::_ctor_1
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CMoveRandMan::SetSeed
__SUB_CLASS_THIS(00596CB0, __thiscall, 23422,  CMoveRandMan, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	lea ecx,[esi+0x1C]
	xor eax,eax
	push ecx
	lea ecx,[esp+8]
	mov word ptr [esi],ax
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+0x10],eax
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esi+8],eax
	mov dword ptr [esi+0x14],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+0x18],eax
	mov eax,dword ptr [esp+4]
	xor ecx,ecx
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block2

 Block1:
	mov dword ptr [eax],ecx

 Block2:
	mov dword ptr [esi+0x28],ecx
	mov dword ptr [esi+0x2C],ecx
	pop esi
	pop ecx
	ret 0xC
}
}
// CVecCtrlMob::FlyCtrlGuardingBefore
__SUB_CLASS_THIS0(00599EC0, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x718]
	mov ebx,1
	push edi
	add ecx,0xC
	mov dword ptr [esi+0x648],ebx
	call TSecType<long>::GetData
	push eax
	lea ecx,[esi+0x5EC]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x718]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esi+0x5F8]
	call TSecType<long>::SetData
	mov eax,dword ptr [esi+0x30]
	lea edi,[esi+0x20]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	push eax
	lea ecx,[esi+0x604]
	call TSecType<long>::SetData
	mov ecx,dword ptr [edi+0x28]
	push ecx
	lea edx,[edi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	push eax
	lea ecx,[esi+0x610]
	call TSecType<long>::SetData
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp]
	lea ecx,[esi+0x690]
	call TSecType<double>::SetData
	mov ecx,dword ptr [edi+0x28]
	push ecx
	lea edx,[edi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp]
	lea ecx,[esi+0x69C]
	call TSecType<double>::SetData
	xor ebp,ebp
	lea ecx,[esi+0x634]
	push ebp
	mov dword ptr [esi+0x640],ebp
	mov dword ptr [esp+0x1C],ecx
	call TSecType<int>::SetData
	mov ecx,dword ptr [esi+0x71C]
	call TSecType<int>::GetData
	test eax,eax
	je Block9

 Block1:
	mov dword ptr [esi+0x640],ebx
	lea ebx,[esi+0x61C]
	push ebp
	mov ecx,ebx
	mov dword ptr [esi+0x644],ebp
	call TSecType<long>::SetData
	lea ebp,[esi+0x628]
	push 0
	mov ecx,ebp
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x718]
	add ecx,0xC
	call TSecType<long>::GetData
	mov dword ptr [esp+0x10],eax
	mov eax,dword ptr [edi+0x10]
	fild dword ptr [esp+0x10]
	push eax
	push edi
	fstp qword ptr [esp+0x18]
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x18]
	add esp,8
	fabs
	fcomp qword ptr [__real_4024000000000000]
	fnstsw ax
	test ah,1
	jne Block5

 Block2:
	mov ecx,dword ptr [esi+0x718]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0x10]
	mov dword ptr [esp+0x10],eax
	fild dword ptr [esp+0x10]
	push ecx
	push edi
	fstp qword ptr [esp+0x18]
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [esp+0x18]
	add esp,8
	fnstsw ax
	test ah,0x41
	mov eax,0xFFFFFFFF
	je Block4

 Block3:
	mov eax,1

 Block4:
	push eax
	mov ecx,ebx
	call TSecType<long>::SetData

 Block5:
	mov ecx,dword ptr [esi+0x718]
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0x28]
	mov dword ptr [esp+0x10],eax
	fild dword ptr [esp+0x10]
	push edx
	lea eax,[edi+0x18]
	push eax
	fstp qword ptr [esp+0x18]
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x18]
	add esp,8
	fabs
	fcomp qword ptr [__real_4024000000000000]
	fnstsw ax
	test ah,5
	jp Block7

 Block6:
	push 0xFFFFFFFF
	mov ecx,ebp
	call TSecType<long>::SetData
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret

 Block7:
	mov ecx,dword ptr [esi+0x718]
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0x28]
	mov dword ptr [esp+0x10],eax
	fild dword ptr [esp+0x10]
	push ecx
	add edi,0x18
	push edi
	fstp qword ptr [esp+0x18]
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [esp+0x18]
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block9

 Block8:
	mov ecx,dword ptr [esp+0x18]
	push 1
	call TSecType<int>::SetData

 Block9:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret
}
}
// CVecCtrlMob::ClearMoveContext
__SUB_CLASS_THIS0(00597190, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x6B4]
	push 0
	mov ecx,esi
	call TSecType<long>::SetData
	push 0
	lea ecx,[esi+0xC]
	call TSecType<long>::SetData
	push 0
	lea ecx,[esi+0x18]
	call TSecType<long>::SetData
	push 0
	lea ecx,[esi+0x24]
	call TSecType<int>::SetData
	push 0
	lea ecx,[esi+0x3C]
	call TSecType<long>::SetData
	push 0
	lea ecx,[esi+0x30]
	call TSecType<long>::SetData
	pop esi
	ret
}
}
// CVecCtrlMob::CVecCtrlMob
_SUB_EXCEPTION_HANDLER(597C60)
__SUB_CLASS_THIS0(00597C60, __thiscall, 79892,  CVecCtrlMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_597C60
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
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	call CVecCtrl::_ctor_default
	xor ebp,ebp
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x24],ebp
	int 3// TODO: 	mov dword ptr [esi],offset CVecCtrlMob::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CVecCtrlMob::`vftable'{for `IWzVector2D'}
	lea edi,[esi+0x304]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx ecx,byte ptr [edi]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+5],cl
	movzx eax,byte ptr [edi+4]
	mov edx,dword ptr [edi+8]
	push ebp
	mov ecx,edi
	mov byte ptr [edx+6],al
	call TSecType<int>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],1
	lea edi,[esi+0x310]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx edx,byte ptr [edi]
	mov ecx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov byte ptr [ecx+5],dl
	movzx ecx,byte ptr [edi+4]
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+6],cl
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	lea edi,[esi+0x320]
	lea ecx,[edi+4]
	mov byte ptr [esp+0x20],2
	call CRand32::_ctor_default
	mov ecx,edi
	call CMoveRandMan::Init
	lea edi,[esi+0x354]
	lea ecx,[edi+4]
	call CRand32::_ctor_default
	mov ecx,edi
	call CMoveRandMan::Init
	lea edi,[esi+0x384]
	lea ecx,[edi+4]
	call CRand32::_ctor_default
	mov ecx,edi
	call CMoveRandMan::Init
	lea edi,[esi+0x3BC]
	lea ecx,[edi+4]
	call CRand32::_ctor_default
	mov ecx,edi
	call CMoveRandMan::Init
	lea edi,[esi+0x3EC]
	lea ecx,[edi+4]
	call CRand32::_ctor_default
	mov ecx,edi
	call CMoveRandMan::Init
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea edi,[esi+0x41C]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	mov edx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	movzx eax,byte ptr [edi]
	mov byte ptr [edx+5],al
	movzx edx,byte ptr [edi+4]
	mov ecx,dword ptr [edi+8]
	mov byte ptr [ecx+6],dl
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],3
	lea edi,[esi+0x428]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx ecx,byte ptr [edi]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+5],cl
	movzx eax,byte ptr [edi+4]
	mov edx,dword ptr [edi+8]
	push ebp
	mov ecx,edi
	mov byte ptr [edx+6],al
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],4
	lea edi,[esi+0x434]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx edx,byte ptr [edi]
	mov ecx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov byte ptr [ecx+5],dl
	movzx ecx,byte ptr [edi+4]
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+6],cl
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],5
	lea edi,[esi+0x440]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	mov edx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	movzx eax,byte ptr [edi]
	mov byte ptr [edx+5],al
	mov ecx,dword ptr [edi+8]
	movzx edx,byte ptr [edi+4]
	mov byte ptr [ecx+6],dl
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	lea edi,[esi+0x44C]
	lea ecx,[edi+4]
	mov byte ptr [esp+0x20],6
	call CRand32::_ctor_default
	mov ecx,edi
	call CMoveRandMan::Init
	lea edi,[esi+0x47C]
	lea ecx,[edi+4]
	call CRand32::_ctor_default
	mov ecx,edi
	call CMoveRandMan::Init
	lea edi,[esi+0x4AC]
	lea ecx,[edi+4]
	call CRand32::_ctor_default
	mov ecx,edi
	call CMoveRandMan::Init
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	lea edi,[esi+0x4E4]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx ecx,byte ptr [edi]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+5],cl
	movzx eax,byte ptr [edi+4]
	mov edx,dword ptr [edi+8]
	push ebp
	mov ecx,edi
	mov byte ptr [edx+6],al
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],7
	lea edi,[esi+0x4F0]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx edx,byte ptr [edi]
	mov ecx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov byte ptr [ecx+5],dl
	movzx ecx,byte ptr [edi+4]
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+6],cl
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	lea ecx,[esi+0x504]
	mov byte ptr [esp+0x20],8
	call SECPOINT::_ctor_default
	lea ecx,[esi+0x580]
	mov byte ptr [esp+0x20],9
	call SECPOINT::_ctor_default
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0xA
	lea edi,[esi+0x598]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	mov edx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	movzx eax,byte ptr [edi]
	mov byte ptr [edx+5],al
	movzx edx,byte ptr [edi+4]
	mov ecx,dword ptr [edi+8]
	mov byte ptr [ecx+6],dl
	push ebp
	mov ecx,edi
	call TSecType<int>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0xB
	lea edi,[esi+0x5A4]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx ecx,byte ptr [edi]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+5],cl
	movzx eax,byte ptr [edi+4]
	mov edx,dword ptr [edi+8]
	push ebp
	mov ecx,edi
	mov byte ptr [edx+6],al
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0xC
	lea edi,[esi+0x5B0]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx edx,byte ptr [edi]
	mov ecx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov byte ptr [ecx+5],dl
	movzx ecx,byte ptr [edi+4]
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+6],cl
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0xD
	lea edi,[esi+0x5BC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	mov edx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	movzx eax,byte ptr [edi]
	mov byte ptr [edx+5],al
	mov ecx,dword ptr [edi+8]
	movzx edx,byte ptr [edi+4]
	mov byte ptr [ecx+6],dl
	push ebp
	mov ecx,edi
	call TSecType<int>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0xE
	lea edi,[esi+0x5C8]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx ecx,byte ptr [edi]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+5],cl
	movzx eax,byte ptr [edi+4]
	mov edx,dword ptr [edi+8]
	push ebp
	mov ecx,edi
	mov byte ptr [edx+6],al
	call TSecType<int>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0xF
	lea edi,[esi+0x5D4]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx edx,byte ptr [edi]
	mov ecx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov byte ptr [ecx+5],dl
	movzx ecx,byte ptr [edi+4]
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+6],cl
	push 1
	mov ecx,edi
	call TSecType<int>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x10
	lea edi,[esi+0x5E0]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	mov edx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	movzx eax,byte ptr [edi]
	mov byte ptr [edx+5],al
	movzx edx,byte ptr [edi+4]
	mov ecx,dword ptr [edi+8]
	mov byte ptr [ecx+6],dl
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x11
	lea edi,[esi+0x5EC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx ecx,byte ptr [edi]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+5],cl
	movzx eax,byte ptr [edi+4]
	mov edx,dword ptr [edi+8]
	push ebp
	mov ecx,edi
	mov byte ptr [edx+6],al
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x12
	lea edi,[esi+0x5F8]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx edx,byte ptr [edi]
	mov ecx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov byte ptr [ecx+5],dl
	movzx ecx,byte ptr [edi+4]
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+6],cl
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x13
	lea edi,[esi+0x604]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	mov edx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	movzx eax,byte ptr [edi]
	mov byte ptr [edx+5],al
	movzx edx,byte ptr [edi+4]
	mov ecx,dword ptr [edi+8]
	mov byte ptr [ecx+6],dl
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x14
	lea edi,[esi+0x610]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx ecx,byte ptr [edi]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+5],cl
	movzx eax,byte ptr [edi+4]
	mov edx,dword ptr [edi+8]
	mov byte ptr [edx+6],al
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x15
	lea edi,[esi+0x61C]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx edx,byte ptr [edi]
	mov ecx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov byte ptr [ecx+5],dl
	movzx ecx,byte ptr [edi+4]
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+6],cl
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x16
	lea edi,[esi+0x628]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	mov edx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	movzx eax,byte ptr [edi]
	mov byte ptr [edx+5],al
	movzx edx,byte ptr [edi+4]
	mov ecx,dword ptr [edi+8]
	mov byte ptr [ecx+6],dl
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x17
	lea edi,[esi+0x634]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx ecx,byte ptr [edi]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+5],cl
	movzx eax,byte ptr [edi+4]
	mov edx,dword ptr [edi+8]
	push ebp
	mov ecx,edi
	mov byte ptr [edx+6],al
	call TSecType<int>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x18
	mov dword ptr [esi+0x654],ebp
	lea edi,[esi+0x658]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx edx,byte ptr [edi]
	mov ecx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov byte ptr [ecx+5],dl
	movzx ecx,byte ptr [edi+4]
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+6],cl
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x19
	lea edi,[esi+0x664]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	mov edx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	movzx eax,byte ptr [edi]
	mov byte ptr [edx+5],al
	movzx edx,byte ptr [edi+4]
	mov ecx,dword ptr [edi+8]
	mov byte ptr [ecx+6],dl
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x1A
	lea edi,[esi+0x674]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx ecx,byte ptr [edi]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+5],cl
	movzx eax,byte ptr [edi+4]
	mov edx,dword ptr [edi+8]
	push ebp
	mov ecx,edi
	mov byte ptr [edx+6],al
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x1B
	lea edi,[esi+0x680]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx edx,byte ptr [edi]
	mov ecx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov byte ptr [ecx+5],dl
	movzx ecx,byte ptr [edi+4]
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+6],cl
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	lea ecx,[esi+0x690]
	mov byte ptr [esp+0x20],0x1C
	mov dword ptr [esi+0x68C],ebp
	call TSecType<double>::_ctor_default
	lea ecx,[esi+0x69C]
	mov byte ptr [esp+0x20],0x1D
	call TSecType<double>::_ctor_default
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x1E
	lea edi,[esi+0x6A8]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	mov edx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	movzx eax,byte ptr [edi]
	mov byte ptr [edx+5],al
	movzx edx,byte ptr [edi+4]
	mov ecx,dword ptr [edi+8]
	mov byte ptr [ecx+6],dl
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	lea ecx,[esi+0x6B4]
	mov byte ptr [esp+0x20],0x1F
	call CVecCtrlMob::MoveContext::_ctor_default
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x20
	lea edi,[esi+0x728]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx ecx,byte ptr [edi]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+5],cl
	movzx eax,byte ptr [edi+4]
	mov edx,dword ptr [edi+8]
	push ebp
	mov ecx,edi
	mov byte ptr [edx+6],al
	call TSecType<unsigned long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x21
	lea edi,[esi+0x734]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx edx,byte ptr [edi]
	mov ecx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov byte ptr [ecx+5],dl
	mov eax,dword ptr [edi+8]
	movzx ecx,byte ptr [edi+4]
	mov byte ptr [eax+6],cl
	push ebp
	mov ecx,edi
	call TSecType<int>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x22
	lea edi,[esi+0x740]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	mov edx,dword ptr [edi+8]
	add eax,ebx
	mov dword ptr [edi+4],eax
	movzx eax,byte ptr [edi]
	mov byte ptr [edx+5],al
	movzx edx,byte ptr [edi+4]
	mov ecx,dword ptr [edi+8]
	mov byte ptr [ecx+6],dl
	push ebp
	mov ecx,edi
	call TSecType<int>::SetData
	mov dword ptr [esi+0x74C],ebp
	mov dword ptr [esi+0x758],1
	mov dword ptr [esi+0x75C],ebp
	mov dword ptr [esi+0x760],ebp
	mov dword ptr [esi+0x76C],ebp
	mov dword ptr [esi+0x770],ebp
	mov dword ptr [esi+0x774],ebp
	mov dword ptr [esi+0x778],ebp
	mov dword ptr [esi+0x77C],ebp
	mov dword ptr [esi+0x780],ebp
	mov dword ptr [esi+0x78C],ebp
	mov dword ptr [esi+0x790],ebp
	mov dword ptr [esi+0x784],ebp
	mov dword ptr [esi+0x788],ebp
	mov dword ptr [esi+0x794],ebp
	mov dword ptr [esi+0x798],ebp
	mov dword ptr [esi+0x79C],ebp
	mov dword ptr [esi+0x7A0],ebp
	mov eax,esi
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
// CVecCtrlMob::IsCheatMobMoveRandImp
__SUB_CLASS_THIS0(0059A8C0, __thiscall, 79906,  CVecCtrlMob, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x70
	push ebx
	push ebp
	push esi
	mov esi,ecx
	push edi
	lea ebp,[esi+0x5E0]
	push 0
	mov ecx,ebp
	mov dword ptr [esp+0x54],ebp
	call TSecType<long>::SetData
	cmp dword ptr [esi+0x1E0],0
	je Block4

 Block1:
	cmp dword ptr [esi+0x654],0
	jne Block4

 Block2:
	push 0x1B
	mov ecx,ebp
	call TSecType<long>::SetData

 Block3:
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block4:
	cmp dword ptr [esi+0x14],0
	je Block10

 Block5:
	mov ecx,dword ptr [esi+0x14]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push offset CMob::ms_RTTI_CMob
	call edx
	test eax,eax
	je Block10

 Block6:
	mov eax,dword ptr [esi+0x14]
	test eax,eax
	je Block10

 Block7:
	lea edi,[eax-4]
	test edi,edi
	je Block10

 Block8:
	mov ecx,edi
	call CMob::IsImmovable
	test eax,eax
	jne Block13

 Block9:
	mov eax,dword ptr [edi+0x47C]
	push eax
	add edi,0x474
	push edi
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block13

 Block10:
	cmp dword ptr [esi+0x64C],0
	je Block13

 Block11:
	cmp dword ptr [esi+0x650],0
	jne Block13

 Block12:
	push 0x1C
	mov ecx,ebp
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block13:
	mov eax,dword ptr [esi+0x2F8]
	cmp eax,1
	je Block146

 Block14:
	cmp eax,3
	je Block146

 Block15:
	cmp eax,6
	je Block146

 Block16:
	cmp eax,4
	jne Block152

 Block17:
	cmp dword ptr [esi+0x14],0
	je Block24

 Block18:
	mov ecx,dword ptr [esi+0x14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push offset CMob::ms_RTTI_CMob
	call eax
	test eax,eax
	je Block24

 Block19:
	mov eax,dword ptr [esi+0x14]
	test eax,eax
	je Block24

 Block20:
	lea edi,[eax-4]
	test edi,edi
	je Block24

 Block21:
	mov ecx,edi
	call CMob::IsImmovable
	test eax,eax
	jne Block152

 Block22:
	cmp dword ptr [edi+0x28C],eax
	jne Block152

 Block23:
	mov ecx,edi
	call CMob::IsSuspended
	test eax,eax
	jne Block152

 Block24:
	mov ebx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov eax,dword ptr [ebx+0x38]
	mov edi,dword ptr [esi+0x378]
	test eax,eax
	je Block26

 Block25:
	mov eax,dword ptr [eax-4]

 Block26:
	dec eax
	cmp edi,eax
	jbe Block28

 Block27:
	push 2
	mov ecx,ebp
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block28:
	cmp dword ptr [esi+0x37C],0
	je Block39

 Block29:
	lea ecx,[esi+0x358]
	call CRand32::GetPastRand
	mov ecx,dword ptr [ebx+0x38]
	test ecx,ecx
	je Block34

 Block30:
	cmp dword ptr [ecx-4],0
	jle Block34

 Block31:
	test ecx,ecx
	je Block33

 Block32:
	mov ecx,dword ptr [ecx-4]

 Block33:
	xor edx,edx
	div ecx
	mov eax,edx

 Block34:
	cmp edi,eax
	je Block36

 Block35:
	push 0x13
	mov ecx,ebp
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block36:
	cmp dword ptr [esi+0x380],0
	je Block38

 Block37:
	mov ecx,dword ptr [ebx+0x38]
	mov edx,dword ptr [esi+0x350]
	cmp edx,dword ptr [ecx+edi*4]
	je Block39

 Block38:
	push 3
	mov ecx,ebp
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block39:
	lea ecx,[esi+0x5BC]
	call TSecType<int>::GetData
	test eax,eax
	je Block82

 Block40:
	mov eax,dword ptr [esi+0x3B4]
	cmp eax,dword ptr [esi+0x3B8]
	je Block42

 Block41:
	push 4
	mov ecx,ebp
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block42:
	mov ecx,dword ptr [esi+0x4FC]
	cmp ecx,dword ptr [esi+0x500]
	je Block44

 Block43:
	push 5
	mov ecx,ebp
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block44:
	test eax,eax
	je Block55

 Block45:
	cmp dword ptr [esi+0x3E4],0
	je Block54

 Block46:
	cmp dword ptr [esi+0x414],0
	je Block54

 Block47:
	lea ecx,[esi+0x3C0]
	call CRand32::GetPastRand
	xor edx,edx
	mov ecx,0xF0
	div ecx
	lea ecx,[esi+0x3F0]
	mov edi,edx
	call CRand32::GetPastRand
	xor edx,edx
	mov ecx,0x50
	div ecx
	cmp dword ptr [esi+0x3E0],edi
	je Block49

 Block48:
	push 0x19
	mov ecx,ebp
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block49:
	cmp dword ptr [esi+0x410],edx
	je Block51

 Block50:
	push 0x1A
	mov ecx,ebp
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block51:
	lea ecx,[esi+0x41C]
	call TSecType<long>::GetData
	mov ebp,dword ptr [esi+0x3E0]
	lea ecx,[esi+0x428]
	mov edi,eax
	call TSecType<long>::GetData
	mov edx,dword ptr [esi+0x410]
	lea ecx,[esi+0x434]
	mov dword ptr [esp+0x4C],eax
	mov dword ptr [esp+0x54],edx
	call TSecType<long>::GetData
	lea ecx,[edi+ebp-0x78]
	cmp eax,ecx
	jne Block53

 Block52:
	lea ecx,[esi+0x440]
	call TSecType<long>::GetData
	mov edx,dword ptr [esp+0x54]
	mov ecx,dword ptr [esp+0x4C]
	lea edx,[edx+ecx-0x28]
	cmp eax,edx
	je Block55

 Block53:
	mov ecx,dword ptr [esp+0x50]
	push 7
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block54:
	push 6
	mov ecx,ebp
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block55:
	cmp dword ptr [esi+0x4FC],0
	je Block82

 Block56:
	cmp dword ptr [esi+0x474],0
	je Block81

 Block57:
	cmp dword ptr [esi+0x4A4],0
	je Block81

 Block58:
	cmp dword ptr [esi+0x4D4],0
	je Block81

 Block59:
	mov ecx,dword ptr [esi+0x350]
	mov eax,dword ptr [esi+0x4A0]
	mov edx,dword ptr [ebx+0x3C]
	lea edi,[edx+ecx*4]
	mov ecx,dword ptr [edi]
	mov dword ptr [esp+0x54],eax
	mov eax,dword ptr [esi+0x470]
	mov ebp,dword ptr [ecx+eax*4]
	cmp dword ptr [esi+0x4DC],ebp
	je Block61

 Block60:
	mov ecx,dword ptr [esp+0x50]
	push 9
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block61:
	lea ecx,[esi+0x450]
	call CRand32::GetPastRand
	mov edi,dword ptr [edi]
	test edi,edi
	je Block64

 Block62:
	mov edi,dword ptr [edi-4]
	test edi,edi
	jbe Block64

 Block63:
	xor edx,edx
	div edi
	mov eax,edx

 Block64:
	cmp eax,dword ptr [esi+0x470]
	je Block66

 Block65:
	mov ecx,dword ptr [esp+0x50]
	push 0x15
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block66:
	mov edx,dword ptr [esp+0x54]
	cmp dword ptr [esi+0x4E0],edx
	je Block68

 Block67:
	mov ecx,dword ptr [esp+0x50]
	push 0xA
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block68:
	push ebp
	mov ecx,ebx
	call CWvsPhysicalSpace2D::GetFoothold
	lea ecx,[esi+0x4E4]
	mov edi,eax
	call TSecType<long>::GetData
	fild dword ptr [esp+0x54]
	mov ebp,eax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	jge Block70

 Block69:
	fadd qword ptr [__real_41f0000000000000]

 Block70:
	fst qword ptr [esp+0x68]
	fmul qword ptr [edi+0x40]
	fiadd dword ptr [edi+0xC]
	call __ftol2_sse
	cmp ebp,eax
	jne Block80

 Block71:
	lea ecx,[esi+0x4F0]
	call TSecType<long>::GetData
	fld qword ptr [edi+0x48]
	fmul qword ptr [esp+0x68]
	mov ecx,dword ptr [esi+0x4D0]
	mov ebp,eax
	fiadd dword ptr [edi+0x10]
	fild dword ptr [esi+0x4D0]
	test ecx,ecx
	jge Block73

 Block72:
	fadd qword ptr [__real_41f0000000000000]

 Block73:
	faddp st(1),st(0)
	fsub qword ptr [__real_4049000000000000]
	call __ftol2_sse
	cmp ebp,eax
	jne Block80

 Block74:
	lea ecx,[esi+0x480]
	call CRand32::GetPastRand
	fld qword ptr [edi+0x50]
	add edi,0x50
	mov ebp,eax
	call __ftol2_sse
	test eax,eax
	jle Block76

 Block75:
	fld qword ptr [edi]
	xor edx,edx
	fnstcw word ptr [esp+0x4C]
	movzx eax,word ptr [esp+0x4C]
	or eax,0xC00
	mov dword ptr [esp+0x58],eax
	mov eax,ebp
	fldcw word ptr [esp+0x58]
	fistp qword ptr [esp+0x68]
	mov ecx,dword ptr [esp+0x68]
	div ecx
	fldcw word ptr [esp+0x4C]
	mov ebp,edx

 Block76:
	cmp ebp,dword ptr [esp+0x54]
	je Block78

 Block77:
	mov ecx,dword ptr [esp+0x50]
	push 0x16
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block78:
	lea ecx,[esi+0x4B0]
	call CRand32::GetPastRand
	mov ecx,eax
	mov eax,0x88888889
	mul ecx
	shr edx,5
	mov eax,edx
	shl eax,4
	sub eax,edx
	add eax,eax
	add eax,eax
	sub ecx,eax
	cmp dword ptr [esi+0x4D0],ecx
	je Block82

 Block79:
	mov ecx,dword ptr [esp+0x50]
	push 0x17
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block80:
	mov ecx,dword ptr [esp+0x50]
	push 0xB
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block81:
	mov ecx,dword ptr [esp+0x50]
	push 8
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block82:
	lea ecx,[esi+0x5C8]
	call TSecType<int>::GetData
	test eax,eax
	je Block113

 Block83:
	lea ecx,[esi+0x598]
	call TSecType<int>::GetData
	test eax,eax
	je Block85

 Block84:
	mov ecx,dword ptr [esp+0x50]
	push 0xC
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block85:
	mov ecx,dword ptr [ebx+0x24]
	mov edx,dword ptr [ebx+0x28]
	mov ebp,dword ptr [ebx+0x2C]
	mov ebx,dword ptr [ebx+0x30]
	xor eax,eax
	lea edi,[esi+0x520]
	mov dword ptr [esp+0x4C],eax
	mov dword ptr [esp+0x54],eax
	mov eax,dword ptr [edi+0x10]
	mov dword ptr [esp+0x70],ecx
	fild dword ptr [esp+0x70]
	push eax
	push edi
	mov dword ptr [esp+0x7C],edx
	fstp qword ptr [esp+0x68]
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x68]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,0x41
	je Block87

 Block86:
	mov ecx,dword ptr [edi+0x10]
	fstp st(0)
	dec ebp
	mov dword ptr [esp+0x58],ebp
	fild dword ptr [esp+0x58]
	push ecx
	push edi
	fstp qword ptr [esp+0x70]
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x70]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block88

 Block87:
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	mov dword ptr [esp+0x4C],1

 Block88:
	fstp st(0)
	mov ecx,edi
	fild dword ptr [esp+0x74]
	fstp qword ptr [esp+0x68]
	call AbsPos::_ZtlSecureGet_y
	fld qword ptr [esp+0x68]
	mov ecx,edi
	fcom
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block90

 Block89:
	sub esp,8
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	mov ebp,1
	jmp Block93

 Block90:
	fstp st(0)
	dec ebx
	mov dword ptr [esp+0x58],ebx
	fild dword ptr [esp+0x58]
	fstp qword ptr [esp+0x58]
	call AbsPos::_ZtlSecureGet_y
	fld qword ptr [esp+0x58]
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block92

 Block91:
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	mov ebp,1
	jmp Block93

 Block92:
	mov ebp,dword ptr [esp+0x54]

 Block93:
	cmp dword ptr [esp+0x4C],0
	fstp st(0)
	je Block99

 Block94:
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [esp+0x68]
	add esp,8
	fnstsw ax
	test ah,0x44
	jp Block96

 Block95:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [__real_403e000000000000]
	jmp Block97

 Block96:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [__real_403e000000000000]

 Block97:
	add esp,8
	lea ebx,[esi+0x5A4]
	call __ftol2_sse
	push eax
	mov ecx,ebx
	call TSecType<long>::op_assign
	mov ecx,ebx
	call TSecType<long>::GetData
	lea ecx,[esi+0x58C]
	mov ebx,eax
	call TSecType<long>::GetData
	cmp ebx,eax
	je Block99

 Block98:
	mov ecx,dword ptr [esp+0x50]
	push 0xD
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block99:
	test ebp,ebp
	je Block105

 Block100:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	fcomp qword ptr [esp+0x68]
	fnstsw ax
	test ah,0x44
	jp Block102

 Block101:
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [__real_403e000000000000]
	add esp,8
	jmp Block103

 Block102:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	fsub qword ptr [__real_403e000000000000]

 Block103:
	lea edi,[esi+0x5B0]
	call __ftol2_sse
	push eax
	mov ecx,edi
	call TSecType<long>::op_assign
	mov ecx,edi
	call TSecType<long>::GetData
	lea ecx,[esi+0x580]
	mov edi,eax
	call TSecType<long>::GetData
	cmp edi,eax
	je Block105

 Block104:
	mov ecx,dword ptr [esp+0x50]
	push 0xE
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block105:
	cmp dword ptr [esp+0x4C],0
	jne Block113

 Block106:
	test ebp,ebp
	jne Block113

 Block107:
	lea ecx,[esi+0x510]
	call TSecType<long>::GetData
	lea edi,[esi+0x58C]
	mov ecx,edi
	mov ebx,eax
	call TSecType<long>::GetData
	cmp ebx,eax
	je Block110

 Block108:
	lea ecx,[esi+0x5A4]
	call TSecType<long>::GetData
	mov ecx,edi
	mov ebx,eax
	call TSecType<long>::GetData
	cmp ebx,eax
	je Block110

 Block109:
	mov ecx,dword ptr [esp+0x50]
	push 0xF
	call TSecType<long>::SetData
	lea eax,[ebp+1]
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block110:
	lea ecx,[esi+0x504]
	call TSecType<long>::GetData
	lea edi,[esi+0x580]
	mov ecx,edi
	mov ebx,eax
	call TSecType<long>::GetData
	cmp ebx,eax
	je Block113

 Block111:
	lea ecx,[esi+0x5B0]
	call TSecType<long>::GetData
	mov ecx,edi
	mov ebx,eax
	call TSecType<long>::GetData
	cmp ebx,eax
	je Block113

 Block112:
	mov ecx,dword ptr [esp+0x50]
	push 0x10
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block113:
	lea ecx,[esi+0x5D4]
	call TSecType<int>::GetData
	test eax,eax
	jne Block115

 Block114:
	mov ecx,dword ptr [esp+0x50]
	push 0x11
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block115:
	cmp dword ptr [esi+0x648],0
	jne Block117

 Block116:
	mov ecx,dword ptr [esp+0x50]
	push 0x12
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block117:
	cmp dword ptr [esi+0x640],0
	je Block120

 Block118:
	cmp dword ptr [esi+0x644],0
	jne Block120

 Block119:
	mov ecx,dword ptr [esp+0x50]
	push 0x14
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block120:
	lea ecx,[esi+0x5EC]
	call TSecType<long>::GetData
	lea ecx,[esi+0x674]
	mov edi,eax
	call TSecType<long>::GetData
	cmp edi,eax
	je Block122

 Block121:
	mov ecx,dword ptr [esp+0x50]
	push 0x1E
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block122:
	lea ecx,[esi+0x5F8]
	call TSecType<long>::GetData
	lea ebp,[esi+0x680]
	mov ecx,ebp
	mov edi,eax
	call TSecType<long>::GetData
	cmp edi,eax
	je Block124

 Block123:
	mov ecx,dword ptr [esp+0x50]
	push 0x1F
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block124:
	cmp dword ptr [esi+0x640],0
	je Block127

 Block125:
	cmp dword ptr [esi+0x68C],0
	jne Block127

 Block126:
	mov ecx,dword ptr [esp+0x50]
	push 0x20
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block127:
	lea ecx,[esi+0x674]
	call TSecType<long>::GetData
	mov dword ptr [esp+0x58],eax
	fild dword ptr [esp+0x58]
	lea ebx,[esi+0x690]
	mov ecx,ebx
	fstp qword ptr [esp+0x68]
	call TSecType<double>::GetData
	fsubr qword ptr [esp+0x68]
	call __ftol2_sse
	mov ecx,ebp
	mov edi,eax
	call TSecType<long>::GetData
	mov dword ptr [esp+0x58],eax
	fild dword ptr [esp+0x58]
	lea ecx,[esi+0x69C]
	fstp qword ptr [esp+0x68]
	call TSecType<double>::GetData
	fsubr qword ptr [esp+0x68]
	call __ftol2_sse
	mov ebp,eax
	test edi,edi
	jge Block129

 Block128:
	neg edi

 Block129:
	test ebp,ebp
	jge Block131

 Block130:
	neg ebp

 Block131:
	cmp dword ptr [esi+0x670],0
	je Block152

 Block132:
	cmp edi,0xA
	jl Block140

 Block133:
	lea ecx,[esi+0x674]
	call TSecType<long>::GetData
	mov dword ptr [esp+0x58],eax
	fild dword ptr [esp+0x58]
	mov ecx,ebx
	fstp qword ptr [esp+0x68]
	call TSecType<double>::GetData
	fcomp qword ptr [esp+0x68]
	fnstsw ax
	test ah,0x41
	jne Block135

 Block134:
	or edi,0xFFFFFFFF
	jmp Block136

 Block135:
	mov edi,1

 Block136:
	lea ecx,[esi+0x658]
	call TSecType<long>::GetData
	cmp eax,edi
	je Block138

 Block137:
	mov ecx,dword ptr [esp+0x50]
	push 0x21
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block138:
	lea ecx,[esi+0x6A8]
	call TSecType<long>::GetData
	cmp edi,eax
	je Block140

 Block139:
	mov ecx,dword ptr [esp+0x50]
	push 0x24
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block140:
	cmp ebp,0xA
	jge Block143

 Block141:
	lea ecx,[esi+0x664]
	call TSecType<long>::GetData
	cmp eax,0xFFFFFFFF
	je Block143

 Block142:
	mov ecx,dword ptr [esp+0x50]
	push 0x22
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block143:
	cmp dword ptr [esi+0x670],0
	je Block152

 Block144:
	cmp dword ptr [esi+0x68C],0
	jne Block152

 Block145:
	mov ecx,dword ptr [esp+0x50]
	push 0x23
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block146:
	mov edi,dword ptr [esi+0x3A8]
	lea ecx,[esi+0x388]
	call CRand32::GetPastRand
	cmp dword ptr [esi+0x3AC],0
	je Block149

 Block147:
	cmp edi,eax
	je Block149

 Block148:
	push 0x18
	mov ecx,ebp
	call TSecType<long>::SetData
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block149:
	push 1
	mov ecx,ebp
	call TSecType<long>::SetData
	cmp dword ptr [esi+0x3AC],0
	je Block152

 Block150:
	cmp dword ptr [esi+0x3B0],0
	je Block3

 Block151:
	mov eax,0xAAAAAAAB
	mul edi
	shr edx,1
	lea eax,[edx+edx*2]
	sub edi,eax
	dec edi
	cmp dword ptr [esi+0x350],edi
	jne Block3

 Block152:
	pop edi
	xor eax,eax
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CVecCtrlMob::ClearTemporaryValues
__SUB_CLASS_THIS0(00596A30, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	xor eax,eax
	mov dword ptr [ecx+0x774],eax
	mov dword ptr [ecx+0x778],eax
	mov dword ptr [ecx+0x77C],eax
	ret
}
}
// CVecCtrlMob::SaveFloatStateBeforeCollision
__SUB_CLASS_THIS0(0059A380, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	sub esp,8
	push ebx
	mov ebx,ecx
	push ebp
	push esi
	push edi
	lea ebp,[ebx+0x20]
	lea edi,[ebx+0x520]
	mov ecx,0x18
	mov esi,ebp
	rep movsd
	mov esi,dword ptr [ebx+0x718]
	lea ecx,[esi+0xC]
	lea edi,[ebx+0x504]
	call TSecType<long>::GetData
	push eax
	lea ecx,[edi+0xC]
	call TSecType<long>::SetData
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	mov eax,dword ptr [ebx+0x530]
	lea esi,[ebx+0x520]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x18]
	mov ecx,dword ptr [ebp+0x10]
	push ecx
	push ebp
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [esp+0x20]
	add esp,0x10
	fnstsw ax
	test ah,0x44
	jp Block3

 Block1:
	mov edx,dword ptr [esi+0x28]
	push edx
	add esi,0x18
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x18]
	mov eax,dword ptr [ebp+0x28]
	push eax
	add ebp,0x18
	push ebp
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [esp+0x20]
	add esp,0x10
	fnstsw ax
	test ah,0x44
	jp Block3

 Block2:
	push 0
	jmp Block4

 Block3:
	push 1

 Block4:
	lea ecx,[ebx+0x598]
	call TSecType<int>::SetData
	push 1
	lea ecx,[ebx+0x5C8]
	call TSecType<int>::SetData
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret
}
}
// CVecCtrlMob::CtrlUpdateActiveJump
__SUB_CLASS_THIS0(005998F0, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x30
	push ebx
	push ebp
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x1B0],0
	push edi
	je Block2

 Block1:
	push 0
	push 0
	call CVecCtrl::SetInput
	mov dword ptr [esi+0x650],1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block2:
	cmp dword ptr [esi+0x1A0],0
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov dword ptr [esp+0x30],eax
	je Block48

 Block3:
	mov ecx,dword ptr [esi+0x710]
	call TSecType<int>::GetData
	test eax,eax
	je Block7

 Block4:
	mov ecx,dword ptr [esi+0x710]
	push 0
	call TSecType<int>::SetData
	mov ecx,dword ptr [esi+0x1F0]
	push ecx
	lea edx,[esi+0x1E8]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block7

 Block5:
	mov ecx,dword ptr [esi+0x714]
	call TSecType<long>::GetData
	lea ecx,[esi+0x20]
	mov edi,eax
	call AbsPos::_ZtlSecureGet_y
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add esp,8
	cmp eax,edi
	jne Block7

 Block6:
	push 0
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	neg eax
	push eax
	mov ecx,esi
	call CVecCtrl::SetInput

 Block7:
	mov eax,dword ptr [esi+0x150]
	lea edi,[esi+0x140]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov ecx,dword ptr [esi+0x1F0]
	push ecx
	lea ebx,[esi+0x1E8]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	fld qword ptr [__real_4044000000000000]
	mov ecx,dword ptr [esi+0x1A0]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x48]
	mov dword ptr [esp+0x38],eax
	fstp qword ptr [esp]
	sub esp,8
	fild dword ptr [esp+0x40]
	fstp qword ptr [esp]
	call CStaticFoothold::GetForwardLink
	mov ebp,eax
	test ebp,ebp
	je Block23

 Block8:
	mov edx,dword ptr [esi+0x1F0]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block23

 Block9:
	fldz
	fcomp qword ptr [ebp+0x40]
	fnstsw ax
	test ah,1
	jne Block23

 Block10:
	fld qword ptr [ebp+0x48]
	mov ecx,esi
	fstp qword ptr [esp+0x38]
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	mov dword ptr [esp+0x28],eax
	fild dword ptr [esp+0x28]
	fmul qword ptr [esp+0x38]
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	test ah,5
	jp Block23

 Block11:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	test eax,eax
	jge Block13

 Block12:
	mov eax,dword ptr [esi+0x1A0]
	mov ecx,dword ptr [eax+0x64]
	jmp Block14

 Block13:
	mov ecx,dword ptr [esi+0x1A0]
	mov ecx,dword ptr [ecx+0x68]

 Block14:
	test ecx,ecx
	je Block22

 Block15:
	fldz
	fcomp qword ptr [ecx+0x40]
	fnstsw ax
	test ah,1
	jne Block22

 Block16:
	fld qword ptr [ecx+0x48]
	mov ecx,esi
	fstp qword ptr [esp+0x38]
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	mov dword ptr [esp+0x28],eax
	fild dword ptr [esp+0x28]
	fmul qword ptr [esp+0x38]
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	test ah,5
	jp Block22

 Block17:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	test eax,eax
	jge Block19

 Block18:
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_3ff0000000000000]
	add esp,8
	fnstsw ax
	test ah,5
	jnp Block21

 Block19:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	test eax,eax
	jle Block22

 Block20:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [esi+0x1A0]
	fld qword ptr [ecx+0x50]
	add esp,8
	fsub qword ptr [__real_3ff0000000000000]
	fcompp
	fnstsw ax
	test ah,5
	jp Block22

 Block21:
	push 0
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	neg eax
	push eax
	mov ecx,esi
	call CVecCtrl::SetInput
	jmp Block23

 Block22:
	mov ecx,dword ptr [esi+0x70C]
	call TSecType<long>::GetData
	test eax,eax
	jg Block31

 Block23:
	cmp dword ptr [esi+0x300],0
	mov ecx,dword ptr [esi+0x70C]
	je Block43

 Block24:
	call TSecType<long>::GetData
	test eax,eax
	jle Block32

 Block25:
	mov edx,dword ptr [esi+0x1A0]
	mov ecx,dword ptr [esi+0x300]
	mov eax,dword ptr [ecx]
	mov edi,dword ptr [edx+0x30]
	mov edx,dword ptr [eax+0x18]
	call edx
	cmp edi,eax
	je Block32

 Block26:
	mov ecx,dword ptr [esi+0x300]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0x28]
	push edx
	call eax
	fild dword ptr [eax+4]
	lea edi,[esi+0x20]
	mov ecx,edi
	fstp qword ptr [esp+0x38]
	call AbsPos::_ZtlSecureGet_y
	fcomp qword ptr [esp+0x38]
	fnstsw ax
	test ah,0x41
	jne Block32

 Block27:
	mov ecx,dword ptr [esi+0x300]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x18]
	call eax
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<double>::call
	mov ebp,dword ptr [esp+0x38]
	mov edx,dword ptr [ebp+0x34]
	fild dword ptr [edx+ebx*8]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jp Block32

 Block28:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [ebp+0x34]
	fild dword ptr [ecx+ebx*8+4]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block32

 Block29:
	lea ecx,[esi+0x324]
	call CRand32::Random
	inc word ptr [esi+0x320]
	mov ecx,eax
	mov eax,0xAAAAAAAB
	mul ecx
	shr edx,1
	lea edx,[edx+edx*2]
	sub ecx,edx
	jne Block32

 Block30:
	mov ecx,esi
	call CVecCtrlMob::ClearMoveContext

 Block31:
	push 1
	mov ecx,esi
	call CVecCtrlMob::SetJumpNext
	jmp Block48

 Block32:
	mov ecx,dword ptr [esi+0x70C]
	call TSecType<long>::GetData
	test eax,eax
	jg Block48

 Block33:
	lea ecx,[esi+0x324]
	call CRand32::Random
	mov edi,eax
	mov eax,0x51EB851F
	mul edi
	shr edx,7
	mov ecx,2
	sub ecx,edx
	imul ecx,0x190
	inc word ptr [esi+0x320]
	add ecx,edi
	mov eax,0x6C16C16D
	mul ecx
	sub ecx,edx
	shr ecx,1
	add ecx,edx
	shr ecx,6
	push ecx
	mov ecx,dword ptr [esi+0x70C]
	call TSecType<long>::op_assign
	mov ecx,dword ptr [esi+0x708]
	call TSecType<long>::GetData
	test eax,eax
	je Block39

 Block34:
	mov eax,dword ptr [esi+0x30]
	lea edi,[esi+0x20]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov ecx,dword ptr [esi+0x300]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	add esp,8
	lea eax,[esp+0x30]
	push eax
	call edx
	fild dword ptr [eax]
	fsub qword ptr [esp+0x38]
	fabs
	fcomp qword ptr [__real_4059000000000000]
	fnstsw ax
	test ah,5
	jp Block39

 Block35:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esi+0x1C8]
	add esp,8
	fucompp
	fnstsw ax
	test ah,0x44
	jp Block37

 Block36:
	mov ecx,dword ptr [esi+0x708]
	push 1
	call TSecType<long>::SetData
	jmp Block42

 Block37:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esi+0x1D0]
	add esp,8
	fucompp
	fnstsw ax
	test ah,0x44
	jp Block42

 Block38:
	mov ecx,dword ptr [esi+0x708]
	push 0xFFFFFFFF
	call TSecType<long>::SetData
	jmp Block42

 Block39:
	mov edx,dword ptr [esi+0x30]
	lea eax,[esi+0x20]
	push edx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov ecx,dword ptr [esi+0x300]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	add esp,8
	lea edx,[esp+0x30]
	push edx
	call eax
	fild dword ptr [eax]
	fcomp qword ptr [esp+0x38]
	fnstsw ax
	test ah,5
	mov eax,0xFFFFFFFF
	jnp Block41

 Block40:
	mov eax,1

 Block41:
	mov ecx,dword ptr [esi+0x708]
	push eax
	call TSecType<long>::op_assign

 Block42:
	mov ecx,dword ptr [esi+0x708]
	push 0
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call CVecCtrl::SetInput
	jmp Block48

 Block43:
	call TSecType<long>::GetData
	test eax,eax
	jg Block48

 Block44:
	lea ecx,[esi+0x324]
	call CRand32::Random
	mov ecx,eax
	mov eax,0xCCCCCCCD
	mul ecx
	shr edx,2
	mov edi,1
	add word ptr [esi+0x320],di
	lea edx,[edx+edx*4]
	sub ecx,edx
	jne Block46

 Block45:
	mov ecx,esi
	call CVecCtrl::Jump
	mov ax,word ptr [esi+0x320]
	jmp Block47

 Block46:
	lea ecx,[esi+0x324]
	mov dword ptr [esi+0x348],edi
	call CRand32::Random
	mov ecx,eax
	mov eax,0x10624DD3
	mul ecx
	shr edx,7
	imul edx,0x7D0
	add word ptr [esi+0x320],di
	sub ecx,edx
	add ecx,0x3E8
	mov eax,0x6C16C16D
	mul ecx
	sub ecx,edx
	shr ecx,1
	add ecx,edx
	shr ecx,6
	push ecx
	mov ecx,dword ptr [esi+0x70C]
	call TSecType<long>::op_assign
	lea ecx,[esi+0x324]
	call CRand32::Random
	add word ptr [esi+0x320],di
	mov ecx,eax
	mov eax,0xAAAAAAAB
	mul ecx
	shr edx,1
	mov dword ptr [esi+0x344],ecx
	lea edx,[edx+edx*2]
	sub ecx,edx
	sub ecx,edi
	mov dword ptr [esi+0x34C],edi
	push ecx
	mov ecx,dword ptr [esi+0x708]
	call TSecType<long>::op_assign
	mov ecx,dword ptr [esi+0x708]
	push 0
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call CVecCtrl::SetInput
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	mov dword ptr [esi+0x350],eax
	movzx eax,word ptr [esi+0x320]
	mov word ptr [esi+0x298],ax

 Block47:
	mov word ptr [esi+0x29A],ax

 Block48:
	mov edi,dword ptr [esi+0x70C]
	mov ecx,edi
	call TSecType<long>::GetData
	dec eax
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	pop edi
	mov dword ptr [esi+0x650],1
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CVecCtrlMob::SetJumpNext
__SUB_CLASS_THIS(005971E0, __thiscall, 79918,  CVecCtrlMob, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x710]
	push eax
	mov dword ptr [esi+0x200],1
	call TSecType<int>::SetData
	mov ecx,dword ptr [esi+0x48]
	push ecx
	lea edx,[esi+0x38]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcomp
	add esp,8
	fnstsw ax
	test ah,0x41
	jp Block2

 Block1:
	fadd qword ptr [__real_3fe0000000000000]
	jmp Block3

 Block2:
	fsub qword ptr [__real_3fdffffffeed1f41]

 Block3:
	call __ftol2_sse
	mov ecx,dword ptr [esi+0x714]
	push eax
	call TSecType<long>::SetData
	pop esi
	ret 4
}
}
// ReturnDecSpeed
__SUB(00596990, __cdecl, 80020,  double, double, double, double, double, double) {
__asm {

 Block0:
	fldz
	fld qword ptr [esp+0x1C]
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block2

 Block1:
	fstp st(0)
	fld qword ptr [esp+4]
	ret

 Block2:
	fld qword ptr [esp+4]
	fcom
	fnstsw ax
	test ah,0x41
	jne Block5

 Block3:
	fld qword ptr [esp+0xC]
	fdiv qword ptr [esp+0x14]
	fmul qword ptr [esp+0x24]
	fsubp st(1),st(0)
	fcom
	fnstsw ax
	test ah,5
	jp Block7

 Block4:
	fstp st(0)
	ret

 Block5:
	fxch
	fchs
	fcom
	fnstsw ax
	test ah,0x41
	jne Block4

 Block6:
	fld qword ptr [esp+0xC]
	fdiv qword ptr [esp+0x14]
	fmul qword ptr [esp+0x24]
	faddp st(2),st
	fcom
	fnstsw ax
	test ah,5
	jp Block4

 Block7:
	fstp st(1)
	ret
}
}
// CVecCtrlMob::WorkUpdateActiveLadderOrRope
__SUB_CLASS_THIS0(0059B4D0, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x1BC]
	lea eax,[esi+0x1B4]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	mov ebx,eax
	add esp,8
	test ebx,ebx
	je Block11

 Block1:
	mov edx,dword ptr [esi+0x48]
	push ebp
	push edi
	lea edi,[esi+0x20]
	push edx
	lea eax,[edi+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x1C]
	mov ecx,dword ptr [esi+0x1FC]
	push ecx
	lea ebp,[esi+0x1F4]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [esi+0x240]
	add esp,0x10
	lea ecx,[eax+0x24]
	call TSecType<double>::GetData
	fild dword ptr [esp+0x10]
	sub esp,8
	lea ecx,[edi+0x18]
	fmul qword ptr [__real_4008000000000000]
	fmulp st(1),st(0)
	fadd qword ptr [esp+0x1C]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x28],eax
	mov edx,dword ptr [esi+0x1FC]
	push edx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jge Block6

 Block2:
	mov eax,dword ptr [edi+0x28]
	push eax
	lea ecx,[edi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [ebx+0x10]
	mov dword ptr [esp+0x18],ecx
	fild dword ptr [esp+0x18]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block6

 Block3:
	cmp dword ptr [ebx+8],0
	je Block5

 Block4:
	add ecx,0xFFFFFFFB
	mov dword ptr [esp+0x10],ecx
	fild dword ptr [esp+0x10]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	fstp st(0)
	jmp Block9

 Block5:
	mov ecx,dword ptr [esi+0x1BC]
	push ecx
	lea eax,[esi+0x1B4]
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	fild dword ptr [eax+0x10]
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	mov edx,dword ptr [esi]
	fstp st(0)
	mov eax,dword ptr [edx+0x18]
	pop edi
	pop ebp
	push 0x1E
	mov ecx,esi
	call eax
	pop esi
	pop ebx
	add esp,0xC
	ret

 Block6:
	mov edx,dword ptr [esi+0x1FC]
	push edx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block10

 Block7:
	mov eax,dword ptr [edi+0x28]
	push eax
	lea ecx,[edi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	mov ebx,dword ptr [ebx+0x14]
	mov dword ptr [esp+0x18],ebx
	fild dword ptr [esp+0x18]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jp Block10

 Block8:
	inc ebx
	mov dword ptr [esp+0x10],ebx
	fild dword ptr [esp+0x10]
	sub esp,8
	lea ecx,[edi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x28],eax

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0
	push 0
	mov ecx,esi
	call eax

 Block10:
	pop edi
	pop ebp

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x18]
	push 0x1E
	mov ecx,esi
	call eax
	pop esi
	pop ebx
	add esp,0xC
	ret
}
}
// CVecCtrlMob::InspectUpdateActive
// 9998E4
static uint8_t _SUB_5996F0_LOOKUP_TABLE_0[7] = {
0, 0, 2, 0, 1, 2, 0, 
};
__SUB_CLASS_THIS0(005996F0, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	sub esp,0x18
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x14]
	xor ebp,ebp
	push edi
	cmp ecx,ebp
	je Block9

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push offset CMob::ms_RTTI_CMob
	call edx
	test eax,eax
	je Block9

 Block2:
	mov eax,dword ptr [esi+0x14]
	cmp eax,ebp
	je Block9

 Block3:
	lea edi,[eax-4]
	cmp edi,ebp
	je Block9

 Block4:
	cmp dword ptr [edi+0x21C],ebp
	jne Block27

 Block5:
	cmp dword ptr [edi+0x228],ebp
	jne Block27

 Block6:
	cmp dword ptr [edi+0x298],ebp
	jne Block27

 Block7:
	mov eax,dword ptr [edi+0x47C]
	push eax
	lea ebx,[edi+0x474]
	push ebx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	cmp eax,4
	je Block27

 Block8:
	mov ecx,dword ptr [edi+0x47C]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block27

 Block9:
	cmp dword ptr [esi+0x774],ebp
	jne Block27

 Block10:
	mov eax,dword ptr [esi+0x2F8]
	cmp eax,6
	ja Block27

 Block11:
	movzx edx,byte ptr [eax+_SUB_5996F0_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block12
cmp EDX, 1
je Block13
cmp EDX, 2
je Block27


 Block12:
	mov dword ptr [esi+0x64C],1
	jmp Block28

 Block13:
	mov ecx,dword ptr [esi+0x718]
	add ecx,0xC
	mov dword ptr [esi+0x64C],1
	mov dword ptr [esi+0x650],ebp
	call TSecType<long>::GetData
	mov ecx,dword ptr [esi+0x718]
	mov dword ptr [esp+0x14],eax
	call TSecType<long>::GetData
	lea edi,[esi+0x20]
	mov dword ptr [esp+0x10],eax
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x20]
	add esp,8
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	fstp qword ptr [esp+0x20]
	mov ecx,dword ptr [esi+0x71C]
	call TSecType<int>::GetData
	fild dword ptr [esp+0x14]
	mov ebx,eax
	fld st(0)
	fld qword ptr [esp+0x18]
	fsub st(1),st
	fxch
	call __ftol2_sse
	fild dword ptr [esp+0x10]
	mov edi,eax
	fsub qword ptr [esp+0x20]
	call __ftol2_sse
	cmp edi,ebp
	jge Block15

 Block14:
	neg edi

 Block15:
	mov ebp,edi
	test eax,eax
	jge Block17

 Block16:
	neg eax

 Block17:
	fcompp
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x10],0
	fnstsw ax
	test ah,0x41
	jne Block19

 Block18:
	mov dword ptr [esp+0x10],1

 Block19:
	mov dword ptr [esi+0x670],ebx
	test ebx,ebx
	je Block29

 Block20:
	lea ebx,[esi+0x658]
	push 0
	mov ecx,ebx
	call TSecType<long>::SetData
	lea edi,[esi+0x664]
	push 0
	mov ecx,edi
	call TSecType<long>::SetData
	cmp ebp,0xA
	jl Block25

 Block21:
	cmp dword ptr [esp+0x10],0
	mov ecx,ebx
	je Block23

 Block22:
	push 0xFFFFFFFF
	jmp Block24

 Block23:
	push 1

 Block24:
	call TSecType<long>::op_assign

 Block25:
	cmp dword ptr [esp+0x14],0xA
	jge Block29

 Block26:
	push 0xFFFFFFFF
	mov ecx,edi
	call TSecType<long>::op_assign
	jmp Block29

 Block27:
	mov dword ptr [esi+0x64C],ebp

 Block28:
	mov dword ptr [esi+0x650],ebp

 Block29:
	mov ecx,esi
	call CVecCtrl::InspectUpdateActive
	pop edi
	mov dword ptr [esi+0x654],1
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret
}
}
// CVecCtrlMob::CollisionDetectEscortDest
__SUB_CLASS_THIS0(00597630, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	sub esp,0xC
	push ebp
	push esi
	mov esi,ecx
	xor ebp,ebp
	cmp dword ptr [esi+0x300],ebp
	jne Block58

 Block1:
	cmp dword ptr [esi+0x75C],ebp
	jne Block58

 Block2:
	mov eax,dword ptr [esi+0x780]
	push ebx
	lea ebx,[esi+0x780]
	cmp eax,ebp
	je Block57

 Block3:
	cmp dword ptr [eax-4],ebp
	je Block57

 Block4:
	mov eax,dword ptr [esi+0x1BC]
	push edi
	push eax
	lea edi,[esi+0x1B4]
	push edi
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block6

 Block5:
	cmp dword ptr [esi+0x1A0],ebp
	je Block56

 Block6:
	mov ecx,dword ptr [esi+0x1BC]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x18],ebp
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	lea edi,[esi+0x20]
	test eax,eax
	je Block19

 Block7:
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [esi+0x798]
	mov ecx,dword ptr [ebx]
	lea eax,[eax+eax*4]
	mov edx,dword ptr [ecx+eax*4]
	sub edx,0x19
	mov dword ptr [esp+0x20],edx
	fild dword ptr [esp+0x20]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jp Block10

 Block8:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [esi+0x798]
	mov edx,dword ptr [ebx]
	lea ecx,[eax+eax*4]
	mov eax,dword ptr [edx+ecx*4]
	add eax,0x19
	mov dword ptr [esp+0x20],eax
	fild dword ptr [esp+0x20]
	add esp,8
	fcompp
	fnstsw ax
	test ah,1
	jne Block10

 Block9:
	mov dword ptr [esp+0x10],1

 Block10:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	test eax,eax
	jle Block14

 Block11:
	mov eax,dword ptr [esi+0x798]
	mov edx,dword ptr [ebx]
	lea ecx,[eax+eax*4]
	lea ebp,[edx+ecx*4]
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	fild dword ptr [ebp+4]
	fcompp
	fnstsw ax
	test ah,0x41
	jp Block14

 Block12:
	mov eax,dword ptr [esi+0x798]
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [esi+0x754]
	lea eax,[eax+eax*4]
	cmp edx,dword ptr [ecx+eax*4+4]
	jg Block14

 Block13:
	xor eax,eax
	cmp dword ptr [esp+0x10],eax
	setne al
	mov dword ptr [esp+0x14],eax

 Block14:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	test eax,eax
	jge Block31

 Block15:
	mov eax,dword ptr [esi+0x798]
	mov edx,dword ptr [ebx]
	lea ecx,[eax+eax*4]
	lea ebp,[edx+ecx*4]
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	fild dword ptr [ebp+4]
	fcompp
	fnstsw ax
	test ah,1
	jne Block31

 Block16:
	mov eax,dword ptr [esi+0x798]
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [esi+0x754]
	lea eax,[eax+eax*4]
	cmp edx,dword ptr [ecx+eax*4+4]
	jl Block31

 Block17:
	cmp dword ptr [esp+0x10],0
	jne Block32

 Block18:
	pop edi
	pop ebx
	pop esi
	pop ebp
	add esp,0xC
	ret

 Block19:
	mov eax,dword ptr [edi+0x28]
	push eax
	lea ecx,[edi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [esi+0x798]
	lea edx,[eax+eax*4]
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+edx*4+4]
	lea ebp,[eax+edx*4]
	add ecx,0x19
	mov dword ptr [esp+0x20],ecx
	fild dword ptr [esp+0x20]
	add esp,8
	fcompp
	fnstsw ax
	test ah,1
	jne Block21

 Block20:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	mov edx,dword ptr [ebp+4]
	sub edx,0x19
	mov dword ptr [esp+0x18],edx
	fild dword ptr [esp+0x18]
	mov ebp,1
	fcompp
	fnstsw ax
	test ah,0x41
	jnp Block22

 Block21:
	mov ebp,dword ptr [esp+0x10]

 Block22:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	test eax,eax
	jle Block26

 Block23:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [esi+0x798]
	mov edx,dword ptr [ebx]
	lea ecx,[eax+eax*4]
	mov ecx,dword ptr [edx+ecx*4]
	mov dword ptr [esp+0x18],ecx
	fild dword ptr [esp+0x18]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jp Block26

 Block24:
	cmp dword ptr [esi+0x750],ecx
	jg Block26

 Block25:
	xor eax,eax
	test ebp,ebp
	setne al
	mov dword ptr [esp+0x14],eax

 Block26:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	test eax,eax
	jge Block31

 Block27:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [esi+0x798]
	lea edx,[eax+eax*4]
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+edx*4]
	mov dword ptr [esp+0x18],ecx
	fild dword ptr [esp+0x18]
	add esp,8
	fcompp
	fnstsw ax
	test ah,1
	jne Block31

 Block28:
	cmp dword ptr [esi+0x750],ecx
	jl Block31

 Block29:
	test ebp,ebp
	jne Block32

 Block30:
	pop edi
	pop ebx
	pop esi
	pop ebp
	add esp,0xC
	ret

 Block31:
	cmp dword ptr [esp+0x14],0
	je Block56

 Block32:
	mov ecx,dword ptr [esi+0x798]
	mov eax,dword ptr [ebx]
	lea edx,[ecx+ecx*4]
	lea eax,[eax+edx*4]
	mov ebp,1
	mov dword ptr [esi+0x758],ebp
	mov edx,dword ptr [eax]
	mov dword ptr [esi+0x784],edx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+0x788],edx
	mov edx,dword ptr [eax+8]
	mov dword ptr [esi+0x78C],edx
	mov edx,dword ptr [eax+0xC]
	mov dword ptr [esi+0x790],edx
	mov eax,dword ptr [eax+0x10]
	inc ecx
	mov dword ptr [esi+0x794],eax
	mov dword ptr [esi+0x798],ecx
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block34

 Block33:
	mov eax,dword ptr [eax-4]

 Block34:
	cmp eax,ecx
	jne Block40

 Block35:
	mov ecx,ebx
	call ZArray<CVecCtrlMob::EscortDest>::RemoveAll
	mov ecx,dword ptr [esi+0x14]
	test ecx,ecx
	je Block39

 Block36:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push offset CMob::ms_RTTI_CMob
	call eax
	test eax,eax
	je Block39

 Block37:
	mov eax,dword ptr [esi+0x14]
	test eax,eax
	je Block39

 Block38:
	mov edx,dword ptr [esi+0x798]
	lea ecx,[eax-4]
	push edx
	call CMob::SendCollisionEscort
	pop edi
	pop ebx
	pop esi
	pop ebp
	add esp,0xC
	ret

 Block39:
	mov edx,dword ptr [esi+0x798]
	xor ecx,ecx
	push edx
	call CMob::SendCollisionEscort
	pop edi
	pop ebx
	pop esi
	pop ebp
	add esp,0xC
	ret

 Block40:
	mov ecx,esi
	call CVecCtrl::GetLadderOrRope
	test eax,eax
	je Block45

 Block41:
	mov eax,dword ptr [esi+0x798]
	mov ecx,dword ptr [ebx]
	lea eax,[eax+eax*4]
	mov edx,dword ptr [ecx+eax*4+4]
	cmp edx,dword ptr [esi+0x788]
	jle Block43

 Block42:
	push ebp
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	push eax
	mov ecx,esi
	call CVecCtrl::SetInput

 Block43:
	mov eax,dword ptr [esi+0x798]
	mov ecx,dword ptr [ebx]
	lea eax,[eax+eax*4]
	mov edx,dword ptr [ecx+eax*4+4]
	cmp edx,dword ptr [esi+0x788]
	jge Block45

 Block44:
	push 0xFFFFFFFF
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	push eax
	mov ecx,esi
	call CVecCtrl::SetInput

 Block45:
	cmp dword ptr [esi+0x78C],2
	jne Block51

 Block46:
	mov ecx,esi
	call CVecCtrl::GetLadderOrRope
	test eax,eax
	je Block48

 Block47:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push 0
	push 0
	push 0
	mov ecx,esi
	call edx

 Block48:
	call get_update_time
	fild dword ptr [esi+0x784]
	add eax,dword ptr [esi+0x794]
	sub esp,8
	fadd qword ptr [__real_3fb999999999999a]
	mov ecx,edi
	mov dword ptr [esi+0x75C],eax
	mov dword ptr [esi+0x760],ebp
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	fstp st(0)
	sub esp,8
	fldz
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)
	mov eax,dword ptr [esi+0x1A0]
	test eax,eax
	je Block50

 Block49:
	push eax
	push edi
	lea ecx,[esi+0x140]
	call RelPos::SetFromAbsPos

 Block50:
	push 0x21
	mov ecx,esi
	call CVecCtrl::SetMovePathAttribute

 Block51:
	mov ecx,dword ptr [esi+0x14]
	test ecx,ecx
	je Block55

 Block52:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push offset CMob::ms_RTTI_CMob
	call edx
	test eax,eax
	je Block55

 Block53:
	mov eax,dword ptr [esi+0x14]
	test eax,eax
	je Block55

 Block54:
	lea ecx,[eax-4]
	mov eax,dword ptr [esi+0x798]
	push eax
	call CMob::SendCollisionEscort
	pop edi
	pop ebx
	pop esi
	pop ebp
	add esp,0xC
	ret

 Block55:
	mov eax,dword ptr [esi+0x798]
	xor ecx,ecx
	push eax
	call CMob::SendCollisionEscort

 Block56:
	pop edi

 Block57:
	pop ebx

 Block58:
	pop esi
	pop ebp
	add esp,0xC
	ret
}
}
// CVecCtrlMob::ChaseTarget
__SUB_CLASS_THIS(0059B660, __thiscall, 79901,  CVecCtrlMob, void, int32_t, IVecCtrlOwner*, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	push edi
	lea edi,[esi+0x734]
	push eax
	mov ecx,edi
	call TSecType<int>::SetData
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x10]
	push ecx
	push edx
	mov ecx,edi
	call TSecType<int>::GetData
	push eax
	mov ecx,esi
	call CVecCtrlMob::ChaseTargetImp
	pop edi
	pop esi
	ret 0xC
}
}
// CVecCtrlMob::UpdateActiveInterrupted
__SUB_CLASS_THIS(00598C80, __thiscall, 79900,  CVecCtrlMob, void, long, long, long, long, long, long, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0xF4
	fild dword ptr [ebp+0x14]
	push ebx
	mov ebx,ecx
	mov ecx,dword ptr [ebx+0x14]
	mov eax,dword ptr [ecx]
	fstp qword ptr [esp+0x58]
	mov eax,dword ptr [eax+0xC]
	push esi
	push edi
	lea edx,[esp+0x68]
	push edx
	mov dword ptr [esp+0x28],ebx
	call eax
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x58],ecx
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov edx,dword ptr [esp+0x6C]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x6C]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esp+0x6C],0

 Block5:
	fild dword ptr [ebp+0xC]
	sub esp,8
	cmp dword ptr [ebx+0x1A0],0
	fstp qword ptr [esp]
	je Block7

 Block6:
	lea esi,[ebx+0x140]
	lea ecx,[esi+0x18]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x28],eax
	mov eax,dword ptr [ebx+0x1A0]
	push eax
	lea ecx,[ebx+0x20]
	push esi
	call AbsPos::SetFromRelPos
	jmp Block8

 Block7:
	lea ecx,[ebx+0x50]
	call _ZtlSecureTearHelper<double>::call
	fild dword ptr [ebp+0x10]
	sub esp,8
	lea ecx,[ebx+0x68]
	fstp qword ptr [esp]
	mov dword ptr [ebx+0x60],eax
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x78],eax

 Block8:
	push 2
	mov ecx,ebx
	call CVecCtrl::SetMovePathAttribute
	fild dword ptr [ebp+0x1C]
	mov ecx,dword ptr [ebx+0x30]
	lea eax,[ebx+0x20]
	push ecx
	fstp qword ptr [esp+0x44]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [esp+0x48]
	add esp,8
	call __ftol2_sse
	mov dword ptr [esp+0x54],eax
	mov eax,dword ptr [ebp+8]
	mov dword ptr [esp+0x5C],0
	test eax,eax
	jle Block79

 Block9:
	jmp Block13

 Block12:
	mov eax,dword ptr [ebp+8]

 Block13:
	cmp eax,0x1E
	mov dword ptr [esp+0x34],0x1E
	jg Block15

 Block14:
	mov dword ptr [esp+0x34],eax

 Block15:
	sub eax,dword ptr [esp+0x34]
	cmp dword ptr [ebx+0x1A0],0
	mov dword ptr [ebp+8],eax
	je Block61

 Block16:
	add ebx,0x140
	mov ecx,0xC
	mov esi,ebx
	lea edi,[esp+0x70]
	rep movsd
	mov edi,dword ptr [esp+0x24]
	mov edx,dword ptr [edi+0x30]
	add edi,0x20
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [ebp+0x18]
	add eax,0xFFFFFFFD
	fstp st(0)
	add esp,8
	cmp eax,7
	ja Block32

 Block17:
	cmp EAX, 0
je Block21
cmp EAX, 1
je Block21
cmp EAX, 2
je Block24
cmp EAX, 3
je Block29
cmp EAX, 4
je Block24
cmp EAX, 5
je Block29
cmp EAX, 6
je Block29
cmp EAX, 7
je Block18


 Block18:
	cmp dword ptr [esp+0x5C],0
	jne Block20

 Block19:
	mov esi,dword ptr [esp+0x24]
	fld qword ptr [esp+0x40]
	mov eax,dword ptr [esi+0x1A0]
	fdiv qword ptr [eax+0x40]
	mov ecx,dword ptr [ebx+0x10]
	push ecx
	push ebx
	fstp qword ptr [esp+0x30]
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [esp+0x30]
	mov ecx,ebx
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x28]
	sub esp,8
	lea ecx,[ebx+0x18]
	fstp qword ptr [esp]
	mov dword ptr [ebx+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x28],eax
	mov dword ptr [esp+0x5C],1
	jmp Block43

 Block20:
	fldz
	sub esp,8
	lea ecx,[ebx+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x28],eax
	jmp Block42

 Block21:
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [esp+0x48]
	mov eax,dword ptr [ebp+0x24]
	add eax,0x28
	mov dword ptr [esp+0x30],eax
	fabs
	fild dword ptr [esp+0x30]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block24

 Block22:
	mov ecx,dword ptr [ebx+0x28]
	push ecx
	lea edx,[ebx+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fdiv qword ptr [__real_4008000000000000]
	lea ecx,[ebx+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	push eax
	lea ecx,[ebx+0x18]
	push ecx
	mov dword ptr [ebx+0x28],eax
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	fnstsw ax
	test ah,0x44
	jnp Block42

 Block23:
	mov edx,dword ptr [ebx+0x10]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [esp+0x50]
	mov ecx,dword ptr [ebx+0x28]
	push ecx
	lea edx,[ebx+0x18]
	fabs
	push edx
	fstp qword ptr [esp+0x60]
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov eax,dword ptr [ebx+0x28]
	push eax
	lea ecx,[ebx+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebp+0x24]
	mov edx,dword ptr [esp+0x44]
	mov eax,dword ptr [edx+0x1A0]
	fsubr qword ptr [esp+0x68]
	add esp,0x18
	fmul qword ptr [esp+0x30]
	fxch
	fabs
	fdivp st(1),st(0)
	fdiv qword ptr [eax+0x40]
	fadd qword ptr [esp+0x40]
	jmp Block41

 Block24:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [esp+0x48]
	add esp,8
	fabs
	fcomp qword ptr [__real_4024000000000000]
	fnstsw ax
	test ah,5
	jnp Block20

 Block25:
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [esp+0x48]
	add esp,8
	fimul dword ptr [esp+0x54]
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	test ah,0x41
	jnp Block20

 Block26:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [esp+0x48]
	add esp,8
	fabs
	fcomp qword ptr [__real_4044000000000000]
	fnstsw ax
	test ah,5
	jp Block29

 Block27:
	mov ecx,dword ptr [ebx+0x28]
	push ecx
	lea edx,[ebx+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fdiv qword ptr [__real_4008000000000000]
	lea ecx,[ebx+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	push eax
	lea ecx,[ebx+0x18]
	push ecx
	mov dword ptr [ebx+0x28],eax
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	fnstsw ax
	test ah,0x44
	jnp Block42

 Block28:
	mov edx,dword ptr [ebx+0x10]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x30]
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [esp+0x50]
	mov ecx,dword ptr [ebx+0x28]
	push ecx
	lea edx,[ebx+0x18]
	fabs
	push edx
	fstp qword ptr [esp+0x60]
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x50]
	mov eax,dword ptr [ebx+0x28]
	push eax
	lea ecx,[ebx+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x58]
	fmul qword ptr [esp+0x68]
	mov edx,dword ptr [esp+0x44]
	fxch
	mov eax,dword ptr [edx+0x1A0]
	fabs
	add esp,0x18
	fdivp st(1),st(0)
	mov ecx,ebx
	fdiv qword ptr [eax+0x40]
	fadd qword ptr [esp+0x30]
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_pos
	fstp st(0)
	jmp Block42

 Block29:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [esp+0x48]
	add esp,8
	fabs
	fcomp qword ptr [__real_4024000000000000]
	fnstsw ax
	test ah,5
	jnp Block20

 Block30:
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [esp+0x48]
	add esp,8
	fimul dword ptr [esp+0x54]
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	test ah,0x41
	jnp Block20

 Block31:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [esp+0x48]
	add esp,8
	fabs
	fcomp qword ptr [__real_4059000000000000]
	fnstsw ax
	test ah,5
	jnp Block27

 Block32:
	mov ecx,dword ptr [esp+0x58]
	add ecx,0xC
	call TSecType<double>::GetData
	fstp qword ptr [esp+0x48]
	mov ecx,dword ptr [ebx+0x28]
	push ecx
	lea edx,[ebx+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esp+0x3C]
	add esp,8
	fst qword ptr [esp+0x28]
	fdiv qword ptr [__real_408f400000000000]
	fldz
	fcom st(2)
	fnstsw ax
	test ah,5
	jp Block35

 Block33:
	fld qword ptr [esp+0x60]
	fdiv qword ptr [esp+0x48]
	fmulp st(2),st
	fxch st(2)
	fsubrp st(1),st(0)
	fcom
	fnstsw ax
	test ah,5
	jp Block37

 Block34:
	jmp Block39

 Block35:
	fstp st(0)
	fld qword ptr [__real_8000000000000000]
	fcom st(2)
	fnstsw ax
	test ah,0x41
	jne Block38

 Block36:
	fld qword ptr [esp+0x60]
	fdiv qword ptr [esp+0x48]
	fmulp st(2),st
	fxch
	faddp st(2),st
	fcom
	fnstsw ax
	test ah,5
	jp Block39

 Block37:
	fstp st(1)
	jmp Block40

 Block38:
	fstp st(1)

 Block39:
	fstp st(0)

 Block40:
	sub esp,8
	lea ecx,[ebx+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x28],eax
	mov eax,dword ptr [ebx+0x10]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x50]
	mov ecx,dword ptr [ebx+0x28]
	push ecx
	lea edx,[ebx+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x48]
	mov eax,dword ptr [esp+0xA8]
	push eax
	lea ecx,[esp+0x9C]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [esp+0x50]
	add esp,0x10
	fmul qword ptr [__real_3fe0000000000000]
	fmul qword ptr [esp+0x30]
	fdiv qword ptr [__real_408f400000000000]
	fadd qword ptr [esp+0x50]

 Block41:
	mov ecx,ebx
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x10],eax

 Block42:
	mov esi,dword ptr [esp+0x24]

 Block43:
	mov edx,dword ptr [ebx+0x10]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcom
	add esp,8
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block52

 Block44:
	mov eax,dword ptr [esi+0x1A0]
	mov eax,dword ptr [eax+0x64]
	test eax,eax
	je Block50

 Block45:
	fcomp qword ptr [eax+0x40]
	fnstsw ax
	test ah,5
	jp Block51

 Block46:
	mov ecx,dword ptr [ebx+0x10]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [esi+0x1A0]
	mov eax,dword ptr [edx+0x64]
	fadd qword ptr [eax+0x50]
	mov ecx,ebx
	fst qword ptr [esp+0x40]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	mov dword ptr [ebx+0x10],eax
	fcom qword ptr [esp+0x38]
	fnstsw ax
	test ah,0x41
	jne Block48

 Block47:
	sub esp,8
	mov ecx,ebx
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x10],eax
	jmp Block49

 Block48:
	fstp st(0)

 Block49:
	mov ecx,dword ptr [esi+0x1A0]
	mov edx,dword ptr [ecx+0x64]
	push edx
	push ebx
	mov ecx,edi
	call AbsPos::SetFromRelPos
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esi+0x1A0]
	mov eax,dword ptr [esi]
	push ecx
	mov ecx,dword ptr [edx+0x64]
	mov edx,dword ptr [eax+0x14]
	push 0
	push ecx
	mov ecx,esi
	call edx
	mov ebx,dword ptr [esp+0x24]
	jmp Block78

 Block50:
	fstp st(0)

 Block51:
	mov eax,dword ptr [ebx+0x28]
	push eax
	lea ecx,[ebx+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fdiv qword ptr [__real_4008000000000000]
	lea ecx,[ebx+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	mov dword ptr [ebx+0x28],eax
	jmp Block59

 Block52:
	mov edx,dword ptr [ebx+0x10]
	fstp st(0)
	push edx
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [esi+0x1A0]
	fcomp qword ptr [ecx+0x50]
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block60

 Block53:
	mov ecx,dword ptr [ecx+0x68]
	test ecx,ecx
	je Block58

 Block54:
	fldz
	fcomp qword ptr [ecx+0x40]
	fnstsw ax
	test ah,5
	jp Block58

 Block55:
	mov eax,dword ptr [ebx+0x10]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [esi+0x1A0]
	fsub qword ptr [ecx+0x50]
	mov ecx,ebx
	fst qword ptr [esp+0x40]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x10],eax
	mov edx,dword ptr [esi+0x1A0]
	mov ecx,dword ptr [edx+0x68]
	fld qword ptr [ecx+0x50]
	fcomp qword ptr [esp+0x38]
	fnstsw ax
	test ah,5
	jp Block57

 Block56:
	fld qword ptr [ecx+0x50]
	sub esp,8
	mov ecx,ebx
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x10],eax

 Block57:
	mov eax,dword ptr [esi+0x1A0]
	mov ecx,dword ptr [eax+0x68]
	push ecx
	push ebx
	mov ecx,edi
	call AbsPos::SetFromRelPos
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi+0x1A0]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x14]
	push eax
	mov eax,dword ptr [ecx+0x68]
	push 0
	push eax
	mov ecx,esi
	call edx
	mov ebx,dword ptr [esp+0x24]
	jmp Block78

 Block58:
	mov eax,dword ptr [ebx+0x28]
	push eax
	lea ecx,[ebx+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fdiv qword ptr [__real_4008000000000000]
	lea ecx,[ebx+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x28],eax
	mov edx,dword ptr [esi+0x1A0]
	fld qword ptr [edx+0x50]

 Block59:
	sub esp,8
	mov ecx,ebx
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x10],eax

 Block60:
	mov eax,dword ptr [esi+0x1A0]
	push eax
	push ebx
	mov ecx,edi
	call AbsPos::SetFromRelPos
	mov edx,dword ptr [esi]
	mov eax,dword ptr [esp+0x34]
	mov edx,dword ptr [edx+0x18]
	push eax
	mov ecx,esi
	call edx
	mov ebx,dword ptr [esp+0x24]
	jmp Block78

 Block61:
	cmp dword ptr [ebx+0x2F8],4
	jne Block77

 Block62:
	mov eax,dword ptr [ebp+0x18]
	add ebx,0x20
	add eax,0xFFFFFFFD
	mov ecx,0x18
	mov esi,ebx
	lea edi,[esp+0xA0]
	rep movsd
	cmp eax,6
	ja Block74

 Block63:
	cmp EAX, 0
je Block64
cmp EAX, 1
je Block64
cmp EAX, 2
je Block69
cmp EAX, 3
je Block72
cmp EAX, 4
je Block69
cmp EAX, 5
je Block72
cmp EAX, 6
je Block72


 Block64:
	mov eax,dword ptr [ebx+0x10]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [esp+0x48]
	mov ecx,dword ptr [ebp+0x24]
	add ecx,0x28
	fabs
	mov dword ptr [esp+0x30],ecx
	fild dword ptr [esp+0x30]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block66

 Block65:
	mov edx,dword ptr [ebx+0x40]
	push edx
	lea eax,[ebx+0x30]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fdiv qword ptr [__real_4008000000000000]
	lea ecx,[ebx+0x30]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x40],eax

 Block66:
	mov ecx,dword ptr [ebx+0x28]
	push ecx
	lea edx,[ebx+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebp+0x20]
	add esp,8
	mov dword ptr [esp+0x28],0x64
	fcompp
	fnstsw ax
	test ah,0x41
	je Block68

 Block67:
	mov dword ptr [esp+0x28],0xFFFFFF9C

 Block68:
	fild dword ptr [esp+0x28]
	sub esp,8
	jmp Block75

 Block69:
	mov eax,dword ptr [ebx+0x10]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [esp+0x48]
	mov ecx,dword ptr [ebp+0x24]
	add ecx,0x28
	fabs
	mov dword ptr [esp+0x30],ecx
	fild dword ptr [esp+0x30]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block76

 Block70:
	mov edx,dword ptr [ebx+0x40]
	push edx
	lea eax,[ebx+0x30]
	push eax

 Block71:
	call _ZtlSecureFuseHelper<double>::call
	fdiv qword ptr [__real_4008000000000000]
	lea ecx,[ebx+0x30]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x40],eax
	jmp Block76

 Block72:
	mov ecx,dword ptr [ebx+0x10]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [esp+0x48]
	mov edx,dword ptr [ebp+0x24]
	add edx,0x64
	fabs
	mov dword ptr [esp+0x30],edx
	fild dword ptr [esp+0x30]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block76

 Block73:
	mov eax,dword ptr [ebx+0x40]
	push eax
	lea ecx,[ebx+0x30]
	push ecx
	jmp Block71

 Block74:
	mov esi,dword ptr [esp+0x58]
	add esi,0xC
	mov ecx,esi
	call TSecType<double>::GetData
	fild dword ptr [esp+0x34]
	mov edx,dword ptr [ebx+0x40]
	sub esp,0x20
	fdiv qword ptr [__real_408f400000000000]
	lea eax,[ebx+0x30]
	fst qword ptr [esp+0x58]
	fstp qword ptr [esp+0x18]
	fldz
	fstp qword ptr [esp+0x10]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x80]
	fstp qword ptr [esp]
	push edx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp]
	call ReturnDecSpeed
	fstp qword ptr [esp+0x20]
	add esp,0x20
	lea ecx,[ebx+0x30]
	call _ZtlSecureTearHelper<double>::call
	mov ecx,esi
	mov dword ptr [ebx+0x40],eax
	call TSecType<double>::GetData
	fld qword ptr [esp+0x38]
	mov ecx,dword ptr [ebx+0x58]
	sub esp,0x20
	fstp qword ptr [esp+0x18]
	lea edx,[ebx+0x48]
	fldz
	fstp qword ptr [esp+0x10]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x80]
	fstp qword ptr [esp]
	push ecx
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp]
	call ReturnDecSpeed
	add esp,0x20

 Block75:
	lea ecx,[ebx+0x48]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x58],eax

 Block76:
	mov eax,dword ptr [ebx+0x10]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x50]
	mov ecx,dword ptr [ebx+0x40]
	push ecx
	lea edx,[ebx+0x30]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x48]
	mov eax,dword ptr [esp+0xF0]
	fild dword ptr [esp+0x44]
	push eax
	lea ecx,[esp+0xE4]
	push ecx
	fstp qword ptr [esp+0x40]
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [esp+0x50]
	add esp,0x10
	mov ecx,ebx
	fmul qword ptr [__real_3fe0000000000000]
	fmul qword ptr [esp+0x30]
	fdiv qword ptr [__real_408f400000000000]
	fadd qword ptr [esp+0x50]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x10],eax
	mov edx,dword ptr [ebx+0x28]
	push edx
	lea eax,[ebx+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x50]
	mov ecx,dword ptr [ebx+0x58]
	push ecx
	lea edx,[ebx+0x48]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x48]
	mov eax,dword ptr [esp+0x108]
	push eax
	lea ecx,[esp+0xFC]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [esp+0x50]
	add esp,0x10
	lea ecx,[ebx+0x18]
	fmul qword ptr [__real_3fe0000000000000]
	fmul qword ptr [esp+0x30]
	fdiv qword ptr [__real_408f400000000000]
	fadd qword ptr [esp+0x50]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov ecx,dword ptr [esp+0x24]
	push 0
	lea edx,[esp+0xA4]
	push edx
	mov dword ptr [ebx+0x28],eax
	call CVecCtrl::BoundPosMapRange_0
	mov ebx,dword ptr [esp+0x24]

 Block77:
	mov ecx,dword ptr [esp+0x34]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x18]
	push ecx
	mov ecx,ebx
	call edx

 Block78:
	cmp dword ptr [ebp+8],0
	jg Block12

 Block79:
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x20
}
}
// CVecCtrlMob::ChaseTargetImp
__SUB_CLASS_THIS(00598AD0, __thiscall, 79901,  CVecCtrlMob, void, int32_t, IVecCtrlOwner*, int32_t) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	lea ecx,[esi+0x734]
	push edi
	mov dword ptr [esp+8],ecx
	call TSecType<int>::GetData
	mov edi,dword ptr [esp+0x10]
	xor ecx,ecx
	cmp eax,edi
	setne cl
	mov eax,ecx
	push eax
	lea ecx,[esi+0x740]
	call TSecType<int>::SetData
	test edi,edi
	jne Block6

 Block1:
	push edi
	lea ecx,[esi+0x304]
	mov dword ptr [esi+0x300],edi
	call TSecType<int>::SetData
	push edi
	lea ecx,[esi+0x310]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x14]
	test ecx,ecx
	je Block14

 Block2:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push offset CMob::ms_RTTI_CMob
	call eax
	test eax,eax
	je Block14

 Block3:
	mov eax,dword ptr [esi+0x14]
	test eax,eax
	je Block14

 Block4:
	add eax,0xFFFFFFFC
	je Block14

 Block5:
	push edi
	lea ecx,[eax+0x5A4]
	call TSecType<int>::SetData
	jmp Block14

 Block6:
	push ebx
	lea ebx,[esi+0x304]
	mov ecx,ebx
	call TSecType<int>::GetData
	test eax,eax
	jne Block13

 Block7:
	lea ecx,[esi+0x324]
	call CRand32::Random
	mov ecx,eax
	inc word ptr [esi+0x320]
	mov eax,0x45E7B273
	mul ecx
	shr edx,0xE
	mov eax,3
	sub eax,edx
	imul eax,0xEA60
	add eax,ecx
	push eax
	lea ecx,[esi+0x310]
	call TSecType<long>::SetData
	mov edi,dword ptr [esp+0x18]
	cmp dword ptr [esi+0x300],edi
	je Block9

 Block8:
	mov ecx,esi
	call CVecCtrlMob::ClearMoveContext

 Block9:
	mov ecx,dword ptr [esp+0x1C]
	push ecx
	mov ecx,ebx
	mov dword ptr [esi+0x300],edi
	call TSecType<int>::SetData
	mov eax,dword ptr [esi+0x780]
	test eax,eax
	je Block13

 Block10:
	cmp dword ptr [eax-4],0
	je Block13

 Block11:
	cmp dword ptr [esi+0x770],0
	jne Block13

 Block12:
	mov edx,dword ptr [esi+0x30]
	lea edi,[esi+0x20]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	call __ftol2_sse
	mov dword ptr [esi+0x764],eax
	mov eax,dword ptr [edi+0x28]
	push eax
	add edi,0x18
	push edi
	call _ZtlSecureFuseHelper<double>::call
	add esp,0x10
	call __ftol2_sse
	mov ecx,dword ptr [esi+0x1C4]
	mov dword ptr [esi+0x768],eax
	mov dword ptr [esi+0x770],1
	mov dword ptr [esi+0x76C],ecx

 Block13:
	pop ebx

 Block14:
	mov ecx,dword ptr [esi+0x14]
	test ecx,ecx
	je Block19

 Block15:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push offset CMob::ms_RTTI_CMob
	call eax
	test eax,eax
	je Block19

 Block16:
	mov esi,dword ptr [esi+0x14]
	test esi,esi
	je Block19

 Block17:
	lea eax,[esi-4]
	test eax,eax
	je Block19

 Block18:
	lea ecx,[eax+0x5A4]
	call TSecType<int>::GetData
	mov ecx,dword ptr [esp+8]
	push eax
	call TSecType<int>::SetData

 Block19:
	pop edi
	pop esi
	pop ecx
	ret 0xC
}
}
// CVecCtrlMob::CollisionDetectWalk
__SUB_CLASS_THIS(0059C650, __thiscall, 79910,  CVecCtrlMob, int32_t, const RelPos&, long&, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x34
	push ebx
	push esi
	mov esi,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push edi
	mov ebx,ecx
	mov eax,dword ptr [ebx+0x150]
	lea edi,[ebx+0x140]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [eax+0x10]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x48]
	add esp,0x10
	fst qword ptr [esp+0x38]
	fldz
	fld st(0)
	fucomp st(2)
	fnstsw ax
	test ah,0x44
	jnp Block111

 Block1:
	mov eax,dword ptr [ebx+0x2F8]
	cmp eax,1
	jne Block20

 Block2:
	mov ecx,dword ptr [ebx+0x1A0]
	fcom
	fnstsw ax
	test ah,5
	jp Block4

 Block3:
	mov eax,dword ptr [ecx+0x68]
	jmp Block5

 Block4:
	mov eax,dword ptr [ecx+0x64]

 Block5:
	test eax,eax
	je Block7

 Block6:
	fcom qword ptr [eax+0x40]
	fnstsw ax
	test ah,1
	jne Block111

 Block7:
	fcom
	fnstsw ax
	test ah,5
	jp Block10

 Block8:
	mov edx,dword ptr [edi+0x10]
	fstp st(1)
	fstp st(0)
	push edx
	fld qword ptr [ecx+0x50]
	push edi
	fstp qword ptr [esp+0x38]
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x38]
	add esp,8
	fld qword ptr [__real_4034000000000000]
	fcom
	fnstsw ax
	fstp st(1)
	test ah,0x41
	je Block12

 Block9:
	fstp st(0)
	fld qword ptr [esp+0x38]
	fldz

 Block10:
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block113

 Block11:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [__real_4034000000000000]
	fcom
	add esp,8
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block112

 Block12:
	fldz
	fcomp qword ptr [esp+0x38]
	fnstsw ax
	test ah,5
	jp Block14

 Block13:
	mov ecx,dword ptr [ebx+0x1A0]
	fsubr qword ptr [ecx+0x50]

 Block14:
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_pos
	fstp st(0)
	mov eax,dword ptr [edi+0x10]
	mov edx,dword ptr [ebx+0x1A0]
	fld qword ptr [edx+0x50]
	push eax
	push edi
	fstp qword ptr [esp+0x38]
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x38]
	fstp qword ptr [esp]
	sub esp,0x10
	fldz
	fstp qword ptr [esp+8]
	fstp qword ptr [esp]
	call return_bound_rangeHelper<double>::call
	add esp,0x10
	mov ecx,edi
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_pos
	fstp st(0)
	fldz
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_v
	mov ecx,dword ptr [ebx+0x700]

 Block15:
	fstp st(0)
	call TSecType<long>::GetData
	test eax,eax
	je Block19

 Block16:
	fldz
	fcomp qword ptr [esp+0x38]
	fnstsw ax
	test ah,5
	mov eax,0xFFFFFFFF
	jnp Block18

 Block17:
	mov eax,1

 Block18:
	push 0
	push eax
	mov ecx,ebx
	call CVecCtrl::SetInput

 Block19:
	mov ecx,ebx
	call CVecCtrlMob::DelayedGiveUpChasing
	jmp Block113

 Block20:
	fstp st(1)
	fstp st(0)
	cmp eax,3
	jne Block56

 Block21:
	mov eax,dword ptr [ebx+0x1A0]
	mov ecx,dword ptr [eax+0x30]
	mov eax,dword ptr [esi+0x34]
	mov esi,dword ptr [eax+ecx*8]
	mov ecx,dword ptr [eax+ecx*8+4]
	mov edx,dword ptr [ebx+0x2FC]
	mov dword ptr [esp+0x34],ecx
	mov ecx,dword ptr [eax+edx*8]
	cmp esi,ecx
	mov eax,dword ptr [eax+edx*8+4]
	mov dword ptr [esp+0x24],esi
	jl Block23

 Block22:
	mov dword ptr [esp+0x24],ecx

 Block23:
	mov ecx,dword ptr [esp+0x34]
	cmp eax,ecx
	jge Block25

 Block24:
	mov eax,ecx
	mov dword ptr [esp+0x28],ecx
	jmp Block26

 Block25:
	mov dword ptr [esp+0x28],eax

 Block26:
	mov edx,eax
	sub edx,dword ptr [esp+0x24]
	cmp edx,0x28
	jle Block28

 Block27:
	add dword ptr [esp+0x24],0x14
	sub eax,0x14
	mov dword ptr [esp+0x28],eax

 Block28:
	mov ecx,dword ptr [edi+0x10]
	mov eax,dword ptr [ebx+0x1A0]
	mov eax,dword ptr [eax+0xC]
	push ecx
	push edi
	mov dword ptr [esp+0x38],eax
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [ebx+0x1A0]
	fmul qword ptr [ecx+0x40]
	add esp,8
	fiadd dword ptr [esp+0x30]
	fild dword ptr [esp+0x28]
	fcom
	fnstsw ax
	test ah,5
	jnp Block53

 Block29:
	fild dword ptr [esp+0x24]
	fcomp st(2)
	fnstsw ax
	test ah,0x41
	je Block53

 Block30:
	fstp st(1)
	fstp st(0)
	fldz
	fcom qword ptr [esp+0x38]
	fnstsw ax
	test ah,0x41
	jne Block34

 Block31:
	mov edx,dword ptr [edi+0x10]
	fstp st(0)
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcom
	add esp,8
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block34

 Block32:
	mov eax,dword ptr [ebx+0x1A0]
	mov ecx,dword ptr [eax+0x64]
	test ecx,ecx
	je Block48

 Block33:
	fcom qword ptr [ecx+0x40]
	fnstsw ax
	test ah,1
	je Block38

 Block34:
	fcomp qword ptr [esp+0x38]
	fnstsw ax
	test ah,5
	jp Block113

 Block35:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [ebx+0x1A0]
	fcomp qword ptr [ecx+0x50]
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block113

 Block36:
	mov ecx,dword ptr [ecx+0x68]
	test ecx,ecx
	je Block49

 Block37:
	fldz
	fcom qword ptr [ecx+0x40]
	fnstsw ax
	test ah,1
	jne Block112

 Block38:
	fld qword ptr [ecx+0x48]
	fld qword ptr [esp+0x38]
	fmul st(1),st
	fxch
	fcomp st(2)
	fnstsw ax
	test ah,0x41
	jne Block47

 Block39:
	mov ecx,dword ptr [ebx+0x300]
	test ecx,ecx
	je Block42

 Block40:
	mov edx,dword ptr [ecx]
	fstp st(1)
	mov eax,dword ptr [edx+0x18]
	fstp st(0)
	mov esi,dword ptr [ebx+0x1C4]
	call eax
	cmp eax,esi
	jne Block49

 Block41:
	fldz
	fld qword ptr [esp+0x38]

 Block42:
	fcom
	fnstsw ax
	test ah,5
	jp Block44

 Block43:
	mov ecx,dword ptr [ebx+0x1A0]
	mov edx,dword ptr [esp+0x24]
	cmp edx,dword ptr [ecx+0xC]
	jl Block111

 Block44:
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block49

 Block45:
	mov eax,dword ptr [ebx+0x1A0]
	mov ecx,dword ptr [esp+0x28]
	cmp ecx,dword ptr [eax+0x14]
	jg Block113

 Block46:
	jmp Block49

 Block47:
	fstp st(1)

 Block48:
	fstp st(0)

 Block49:
	cmp dword ptr [ebx+0x300],0
	je Block52

 Block50:
	mov esi,dword ptr [ebx+0x300]
	lea ecx,[ebx+0x20]
	call AbsPos::_ZtlSecureGet_y
	fstp qword ptr [esp+0x38]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x30]
	push eax
	mov ecx,esi
	call edx
	fild dword ptr [eax+4]
	fcomp qword ptr [esp+0x38]
	fnstsw ax
	test ah,0x41
	jne Block52

 Block51:
	lea ecx,[ebx+0x324]
	call CRand32::Random
	inc word ptr [ebx+0x320]
	test al,1
	jne Block113

 Block52:
	mov esi,dword ptr [ebp+8]
	mov ecx,0xC
	rep movsd
	push 0
	mov ecx,ebx
	call CVecCtrlMob::SetJumpNext
	xor eax,eax
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC

 Block53:
	fcompp
	fnstsw ax
	test ah,5
	mov eax,dword ptr [esp+0x28]
	jnp Block55

 Block54:
	mov eax,dword ptr [esp+0x24]

 Block55:
	sub eax,dword ptr [ecx+0xC]
	sub esp,8
	mov dword ptr [esp+0x38],eax
	fild dword ptr [esp+0x38]
	fdiv qword ptr [ecx+0x40]
	mov ecx,edi
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_pos
	fstp st(0)
	fldz
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_v
	mov ecx,dword ptr [ebx+0x708]
	jmp Block15

 Block56:
	cmp eax,6
	jne Block113

 Block57:
	lea ecx,[ebx+0x780]
	call ZArray<CVecCtrlMob::EscortDest>::IsEmpty
	test eax,eax
	je Block59

 Block58:
	push 0
	push 0
	mov ecx,ebx
	call CVecCtrl::SetInput
	xor eax,eax
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC

 Block59:
	mov eax,dword ptr [ebx+0x30]
	add esi,0x24
	mov dword ptr [esp+0x28],esi
	lea esi,[ebx+0x20]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [esp+0x30]
	fild dword ptr [ecx]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block61

 Block60:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	fstp st(0)
	mov ecx,ebx
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	push 1
	mov ecx,ebx
	call CVecCtrl::SetInput
	jmp Block64

 Block61:
	mov edx,dword ptr [esi+0x10]
	fstp st(0)
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax+8]
	dec ecx
	mov dword ptr [esp+0x38],ecx
	fild dword ptr [esp+0x38]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block63

 Block62:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	fstp st(0)
	mov ecx,ebx
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	push 0xFFFFFFFF
	mov ecx,ebx
	call CVecCtrl::SetInput
	jmp Block64

 Block63:
	fstp st(0)

 Block64:
	fldz
	fcom qword ptr [esp+0x38]
	fnstsw ax
	test ah,0x41
	jne Block68

 Block65:
	mov edx,dword ptr [edi+0x10]
	fstp st(0)
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcom
	add esp,8
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block68

 Block66:
	mov edx,dword ptr [ebx+0x1A0]
	mov eax,dword ptr [edx+0x64]
	test eax,eax
	je Block72

 Block67:
	fcom qword ptr [eax+0x40]
	fnstsw ax
	test ah,1
	je Block72

 Block68:
	fcomp qword ptr [esp+0x38]
	fnstsw ax
	test ah,5
	jp Block113

 Block69:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [ebx+0x1A0]
	fcomp qword ptr [edx+0x50]
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block113

 Block70:
	mov eax,dword ptr [edx+0x68]
	fldz
	test eax,eax
	je Block72

 Block71:
	fcom qword ptr [eax+0x40]
	fnstsw ax
	test ah,1
	jne Block112

 Block72:
	mov ecx,dword ptr [ebx+0x300]
	test ecx,ecx
	je Block83

 Block73:
	mov edx,dword ptr [edx+0x30]
	fstp st(0)
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+0x30],edx
	mov edx,dword ptr [eax+0x18]
	call edx
	cmp dword ptr [esp+0x30],eax
	jne Block75

 Block74:
	mov ecx,dword ptr [ebx+0x300]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0x28]
	push edx
	call eax
	mov ecx,dword ptr [eax+4]
	add ecx,5
	mov dword ptr [esp+0x30],ecx
	fild dword ptr [esp+0x30]
	mov ecx,esi
	fstp qword ptr [esp+0x30]
	call AbsPos::_ZtlSecureGet_y
	fcomp qword ptr [esp+0x30]
	fnstsw ax
	test ah,0x41
	je Block52

 Block75:
	mov edx,dword ptr [ebx+0x1A0]
	mov eax,dword ptr [edx+0x30]
	mov ecx,dword ptr [ebx+0x300]
	mov edx,dword ptr [ecx]
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [edx+0x18]
	call eax
	cmp dword ptr [esp+0x30],eax
	je Block80

 Block76:
	fldz
	mov esi,dword ptr [ebp+8]
	fcomp qword ptr [esp+0x38]
	mov ecx,0xC
	rep movsd
	fnstsw ax
	mov ecx,ebx
	test ah,5
	jp Block78

 Block77:
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	push 0xFFFFFFFF
	jmp Block79

 Block78:
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	push 1

 Block79:
	mov ecx,ebx
	call CVecCtrl::SetInput
	push 0
	push 0
	push 0
	mov ecx,ebx
	call CVecCtrlMob::ChaseTarget
	xor eax,eax
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC

 Block80:
	mov ecx,dword ptr [ebx+0x300]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x28]
	push eax
	call edx
	mov eax,dword ptr [eax+4]
	add eax,5
	mov dword ptr [esp+0x30],eax
	fild dword ptr [esp+0x30]
	mov ecx,esi
	fstp qword ptr [esp+0x30]
	call AbsPos::_ZtlSecureGet_y
	fcomp qword ptr [esp+0x30]
	fnstsw ax
	test ah,0x41
	jp Block113

 Block81:
	mov ecx,dword ptr [ebx+0x300]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x28]
	push eax
	call edx
	mov eax,dword ptr [eax+4]
	sub eax,5
	mov dword ptr [esp+0x30],eax
	fild dword ptr [esp+0x30]
	mov ecx,esi
	fstp qword ptr [esp+0x30]
	call AbsPos::_ZtlSecureGet_y
	fcomp qword ptr [esp+0x30]
	fnstsw ax
	test ah,1
	jne Block113

 Block82:
	jmp Block76

 Block83:
	cmp dword ptr [ebx+0x770],0
	je Block86

 Block84:
	mov ecx,dword ptr [ebx+0x76C]
	cmp ecx,dword ptr [ebx+0x1C4]
	je Block86

 Block85:
	mov dword ptr [ebx+0x770],0

 Block86:
	mov ecx,dword ptr [ebx+0x770]
	test ecx,ecx
	je Block88

 Block87:
	lea eax,[ebx+0x764]
	jmp Block89

 Block88:
	mov eax,dword ptr [ebx+0x798]
	lea edx,[eax+eax*4]
	mov eax,dword ptr [ebx+0x780]
	lea eax,[eax+edx*4]

 Block89:
	mov edx,dword ptr [eax]
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x30],edx
	mov dword ptr [esp+0x34],eax
	test ecx,ecx
	je Block91

 Block90:
	mov ecx,dword ptr [ebx+0x76C]
	jmp Block92

 Block91:
	mov eax,dword ptr [ebx+0x798]
	lea edx,[eax+eax*4]
	mov eax,dword ptr [ebx+0x780]
	mov ecx,dword ptr [eax+edx*4+0xC]

 Block92:
	fcom qword ptr [esp+0x38]
	mov dword ptr [esp+0x28],ecx
	fnstsw ax
	test ah,5
	jp Block96

 Block93:
	mov edx,dword ptr [esi+0x10]
	fstp st(0)
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esp+0x38]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jp Block95

 Block94:
	mov esi,dword ptr [ebp+8]
	mov ecx,0xC
	rep movsd
	mov ecx,ebx
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	push 0xFFFFFFFF
	mov ecx,ebx
	call CVecCtrl::SetInput
	xor eax,eax
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC

 Block95:
	fldz

 Block96:
	fcom qword ptr [esp+0x38]
	fnstsw ax
	test ah,0x41
	jne Block102

 Block97:
	mov eax,dword ptr [esi+0x10]
	fstp st(0)
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esp+0x38]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block101

 Block98:
	mov esi,dword ptr [ebp+8]
	mov ecx,0xC
	rep movsd

 Block99:
	mov ecx,ebx
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	push 1
	mov ecx,ebx
	call CVecCtrl::SetInput

 Block100:
	xor eax,eax
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC

 Block101:
	fldz

 Block102:
	mov ecx,dword ptr [esp+0x30]
	cmp dword ptr [ebx+0x784],ecx
	jne Block107

 Block103:
	fcom qword ptr [esp+0x38]
	mov esi,dword ptr [ebp+8]
	mov ecx,0xC
	rep movsd
	fnstsw ax
	test ah,0x41
	jp Block105

 Block104:
	mov ecx,ebx
	fstp st(0)
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	push 0xFFFFFFFF
	mov ecx,ebx
	call CVecCtrl::SetInput
	fldz

 Block105:
	fcomp qword ptr [esp+0x38]
	fnstsw ax
	test ah,0x41
	jne Block100

 Block106:
	jmp Block99

 Block107:
	fstp st(0)
	mov ecx,esi
	fild dword ptr [esp+0x34]
	fstp qword ptr [esp+0x38]
	call AbsPos::_ZtlSecureGet_y
	fcomp qword ptr [esp+0x38]
	fnstsw ax
	test ah,1
	je Block52

 Block108:
	mov edx,dword ptr [esp+0x28]
	cmp dword ptr [ebx+0x1C4],edx
	je Block113

 Block109:
	mov ecx,esi
	call AbsPos::_ZtlSecureGet_y
	fcomp qword ptr [esp+0x38]
	fnstsw ax
	test ah,5
	jp Block113

 Block110:
	jmp Block52

 Block111:
	fstp st(1)

 Block112:
	fstp st(0)

 Block113:
	mov eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [ebp+8]
	push 0
	push eax
	push ecx
	mov ecx,ebx
	call CVecCtrl::CollisionDetectWalk
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CVecCtrlMob::MoveMobBeforeEscortCurDest
__SUB_CLASS_THIS0(0059CF00, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x79C]
	xor ebx,ebx
	cmp ecx,ebx
	jl Block11

 Block1:
	mov eax,dword ptr [esi+0x780]
	cmp eax,ebx
	jne Block3

 Block2:
	xor eax,eax
	jmp Block4

 Block3:
	mov eax,dword ptr [eax-4]

 Block4:
	cmp ecx,eax
	jae Block11

 Block5:
	mov eax,dword ptr [esi+0x780]
	cmp eax,ebx
	je Block11

 Block6:
	cmp dword ptr [eax-4],ebx
	je Block11

 Block7:
	push edi
	lea edi,[esi+0x734]
	push ebx
	mov ecx,edi
	call TSecType<int>::SetData
	push ebx
	push ebx
	mov ecx,edi
	call TSecType<int>::GetData
	push eax
	mov ecx,esi
	call CVecCtrlMob::ChaseTargetImp
	mov eax,dword ptr [esi+0x79C]
	mov dword ptr [esi+0x74C],ebx
	mov dword ptr [esi+0x758],1
	mov dword ptr [esi+0x75C],ebx
	mov dword ptr [esi+0x760],ebx
	mov dword ptr [esi+0x770],ebx
	cmp eax,ebx
	jne Block9

 Block8:
	mov eax,dword ptr [esi+0x780]
	mov dword ptr [esi+0x798],ebx
	mov ecx,dword ptr [eax]
	mov dword ptr [esi+0x784],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+0x788],edx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esi+0x78C],ecx
	mov edx,dword ptr [eax+0xC]
	mov dword ptr [esi+0x790],edx
	mov eax,dword ptr [eax+0x10]
	mov dword ptr [esi+0x794],eax
	add dword ptr [esi+0x784],0xFFFFFFF6
	jmp Block10

 Block9:
	mov edx,dword ptr [esi+0x780]
	mov dword ptr [esi+0x798],eax
	lea ecx,[eax+eax*4]
	lea eax,[edx+ecx*4-0x14]
	mov ecx,dword ptr [eax]
	mov dword ptr [esi+0x784],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+0x788],edx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esi+0x78C],ecx
	mov edx,dword ptr [eax+0xC]
	mov dword ptr [esi+0x790],edx
	mov eax,dword ptr [eax+0x10]
	mov dword ptr [esi+0x794],eax

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	push ebx
	push ebx
	push ebx
	mov ecx,esi
	call eax
	fild dword ptr [esi+0x784]
	lea edi,[esi+0x20]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x10],eax
	fild dword ptr [esi+0x788]
	sub esp,8
	lea ecx,[edi+0x18]
	fsub qword ptr [__real_4024000000000000]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	lea ecx,[edi+0x30]
	fstp qword ptr [esp]
	mov dword ptr [edi+0x28],eax
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[edi+0x48]
	mov dword ptr [edi+0x40],eax
	call _ZtlSecureTearHelper<double>::call
	push 0x22
	mov ecx,esi
	mov dword ptr [edi+0x58],eax
	call CVecCtrl::SetMovePathAttribute
	pop edi

 Block11:
	pop esi
	pop ebx
	ret
}
}
// CVecCtrlMob::CollisionDetectFloat
__SUB_CLASS_THIS(0059A4A0, __thiscall, 79911,  CVecCtrlMob, int32_t, const AbsPos&, long&, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x34
	push ebx
	mov ebx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push esi
	push edi
	mov edi,ecx
	cmp dword ptr [edi+0x2F8],3
	jne Block18

 Block1:
	mov eax,dword ptr [edi+0x1A4]
	mov edx,0x7FFFFFFF
	mov dword ptr [esp+0x3C],0x80000000
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [eax+0x30]
	mov ecx,dword ptr [ebx+0x34]
	mov edx,dword ptr [ecx+eax*8]
	mov eax,dword ptr [ecx+eax*8+4]
	mov dword ptr [esp+0x3C],eax

 Block3:
	mov eax,dword ptr [ebx+0x34]
	mov ecx,dword ptr [edi+0x2FC]
	mov esi,dword ptr [eax+ecx*8]
	cmp edx,esi
	mov eax,dword ptr [eax+ecx*8+4]
	jge Block5

 Block4:
	mov dword ptr [esp+0x2C],edx
	jmp Block6

 Block5:
	mov edx,esi
	mov dword ptr [esp+0x2C],esi

 Block6:
	mov ecx,dword ptr [esp+0x3C]
	cmp eax,ecx
	jge Block8

 Block7:
	mov eax,ecx
	mov dword ptr [esp+0x30],ecx
	jmp Block9

 Block8:
	mov dword ptr [esp+0x30],eax

 Block9:
	mov ecx,eax
	sub ecx,edx
	cmp ecx,0x28
	jle Block11

 Block10:
	add edx,0x14
	sub eax,0x14
	mov dword ptr [esp+0x2C],edx
	mov dword ptr [esp+0x30],eax

 Block11:
	mov edx,dword ptr [edi+0x30]
	fild dword ptr [esp+0x2C]
	lea esi,[edi+0x20]
	push edx
	push esi
	fstp qword ptr [esp+0x40]
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x40]
	fcom
	add esp,8
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block14

 Block12:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x10],eax
	mov ecx,dword ptr [edi+0x708]
	call TSecType<long>::GetData
	test eax,eax
	je Block18

 Block13:
	push 0
	push 1
	mov ecx,edi
	call CVecCtrl::SetInput
	jmp Block18

 Block14:
	mov eax,dword ptr [esi+0x10]
	fstp st(0)
	fild dword ptr [esp+0x30]
	push eax
	push esi
	fstp qword ptr [esp+0x40]
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x40]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block17

 Block15:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x10],eax
	mov ecx,dword ptr [edi+0x708]
	call TSecType<long>::GetData
	test eax,eax
	je Block18

 Block16:
	push 0
	push 0xFFFFFFFF
	mov ecx,edi
	call CVecCtrl::SetInput
	jmp Block18

 Block17:
	fstp st(0)

 Block18:
	mov eax,dword ptr [edi+0x2F8]
	cmp eax,4
	jne Block39

 Block19:
	mov ecx,dword ptr [edi+0x30]
	lea esi,[edi+0x20]
	xor eax,eax
	push ecx
	push esi
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x34],eax
	add ebx,0x24
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebx]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block21

 Block20:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x10],eax
	mov dword ptr [esp+0x30],1
	jmp Block23

 Block21:
	mov edx,dword ptr [esi+0x10]
	fstp st(0)
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [ebx+8]
	dec eax
	mov dword ptr [esp+0x3C],eax
	fild dword ptr [esp+0x3C]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jnp Block20

 Block22:
	fstp st(0)

 Block23:
	mov ecx,dword ptr [esi+0x28]
	push ecx
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebx+4]
	lea eax,[ebx+4]
	mov dword ptr [esp+0x40],eax
	fcom
	add esp,8
	lea ecx,[esi+0x18]
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block25

 Block24:
	sub esp,8
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x28],eax
	mov dword ptr [esp+0x2C],1
	jmp Block28

 Block25:
	mov eax,dword ptr [esi+0x28]
	fstp st(0)
	push eax
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [ebx+0xC]
	dec edx
	mov dword ptr [esp+0x3C],edx
	fild dword ptr [esp+0x3C]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block27

 Block26:
	lea ecx,[esi+0x18]
	jmp Block24

 Block27:
	fstp st(0)

 Block28:
	cmp dword ptr [esp+0x30],0
	je Block33

 Block29:
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebx]
	add esp,8
	fucompp
	fnstsw ax
	test ah,0x44
	jp Block31

 Block30:
	mov ecx,dword ptr [esi+0x10]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [__real_403e000000000000]
	jmp Block32

 Block31:
	mov edx,dword ptr [esi+0x10]
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [__real_403e000000000000]

 Block32:
	add esp,8
	call __ftol2_sse
	mov ecx,dword ptr [edi+0x718]
	push eax
	add ecx,0xC
	call TSecType<long>::SetData

 Block33:
	cmp dword ptr [esp+0x2C],0
	je Block38

 Block34:
	mov eax,dword ptr [esi+0x28]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [esp+0x40]
	fild dword ptr [edx]
	add esp,8
	fucompp
	fnstsw ax
	test ah,0x44
	jp Block36

 Block35:
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [__real_403e000000000000]
	jmp Block37

 Block36:
	mov ecx,dword ptr [esi+0x28]
	push ecx
	add esi,0x18
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [__real_403e000000000000]

 Block37:
	add esp,8
	call __ftol2_sse
	mov ecx,dword ptr [edi+0x718]
	push eax
	call TSecType<long>::SetData

 Block38:
	xor eax,eax
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC

 Block39:
	cmp eax,6
	jne Block45

 Block40:
	mov edx,dword ptr [edi+0x30]
	lea esi,[edi+0x20]
	push edx
	push esi
	add ebx,0x24
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebx]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block42

 Block41:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x10],eax
	mov eax,dword ptr [edi+0x1FC]
	push eax
	lea ecx,[edi+0x1F4]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	push 1
	mov ecx,edi
	call CVecCtrl::SetInput
	jmp Block45

 Block42:
	mov edx,dword ptr [esi+0x10]
	fstp st(0)
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [ebx+8]
	dec eax
	mov dword ptr [esp+0x40],eax
	fild dword ptr [esp+0x40]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block44

 Block43:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	fstp st(0)
	mov ecx,dword ptr [edi+0x1FC]
	push ecx
	lea edx,[edi+0x1F4]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	push 0xFFFFFFFF
	mov ecx,edi
	call CVecCtrl::SetInput
	jmp Block45

 Block44:
	fstp st(0)

 Block45:
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [ebp+0xC]
	mov edx,dword ptr [ebp+8]
	push eax
	push ecx
	push edx
	mov ecx,edi
	call CVecCtrl::CollisionDetectFloat
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CVecCtrlMob::MoveContext::~MoveContext
_SUB_EXCEPTION_HANDLER(596D00)
__SUB_CLASS_THIS0(00596D00, __thiscall, 79934,  CVecCtrlMob::MoveContext, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_596D00
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
	lea ecx,[esi+0x30]
	mov dword ptr [esp+0x14],3
	call SECPOINT::~SECPOINT
	mov eax,dword ptr [esi+0x2C]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block2:
	mov eax,dword ptr [esi+0x20]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block4

 Block3:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block4:
	mov eax,dword ptr [esi+0x14]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block6

 Block5:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block6:
	mov esi,dword ptr [esi+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block8

 Block7:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block8:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CVecCtrlMob::Init
__SUB_CLASS_THIS(00596A00, __thiscall, 79896,  CVecCtrlMob, void, IVecCtrlOwner*, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CVecCtrl::Init
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [esi+0x2F8],ecx
	mov dword ptr [esi+0x2FC],edx
	pop esi
	ret 0xC
}
}
// CVecCtrlMob::CreateInstance
_SUB_EXCEPTION_HANDLER(598770)
__SUB0(00598770, __cdecl, 79913,  CVecCtrlMob*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_598770
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	push 0x7A8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+4],eax
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CVecCtrlMob::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	jne Block5

 Block4:
	push eax
	push 0x8007000E
	call _com_raise_error

 Block5:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret
}
}
// CVecCtrlMob::WorkUpdateActive
__SUB_CLASS_THIS(0059D450, __thiscall, 79917,  CVecCtrlMob, int32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x34
	push ebx
	push esi
	push edi
	mov esi,ecx
	mov eax,dword ptr [esi+0x30]
	lea edi,[esi+0x20]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	call __ftol2_sse
	mov dword ptr [esi+0x750],eax
	mov ecx,dword ptr [edi+0x28]
	push ecx
	lea edx,[edi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	add esp,0x10
	call __ftol2_sse
	mov dword ptr [esi+0x754],eax
	mov eax,dword ptr [esi+0x780]
	test eax,eax
	je Block7

 Block1:
	cmp dword ptr [eax-4],0
	je Block7

 Block2:
	cmp dword ptr [esi+0x1A0],0
	je Block6

 Block3:
	mov eax,dword ptr [esi+0x1BC]
	push eax
	lea ecx,[esi+0x1B4]
	push ecx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block6

 Block4:
	cmp dword ptr [esi+0x200],eax
	jne Block6

 Block5:
	cmp dword ptr [esi+0x74C],eax
	je Block7

 Block6:
	lea ebx,[esi+0x734]
	push 0
	mov ecx,ebx
	call TSecType<int>::SetData
	push 0
	push 0
	mov ecx,ebx
	call TSecType<int>::GetData
	push eax
	mov ecx,esi
	call CVecCtrlMob::ChaseTargetImp

 Block7:
	cmp dword ptr [esi+0x774],0
	je Block14

 Block8:
	cmp dword ptr [esi+0x778],0
	je Block11

 Block9:
	mov edx,dword ptr [esi+0x248]
	lea eax,[esi+0x244]
	push edx
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ebx,ax
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	add esp,0x10
	call __ftol2_sse
	sub ebx,eax
	mov eax,ebx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,dword ptr [esi+0x778]
	jle Block11

 Block10:
	fldz
	lea ebx,[esi+0x140]
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[ebx+0x18]
	mov dword ptr [esi+0x778],0
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x28],eax
	mov ecx,dword ptr [esi+0x1A0]
	push ecx
	push ebx
	mov ecx,edi
	call AbsPos::SetFromRelPos
	push 0x24
	mov ecx,esi
	call CVecCtrl::SetMovePathAttribute

 Block11:
	mov eax,dword ptr [esi+0x77C]
	xor ecx,ecx
	cmp eax,ecx
	je Block14

 Block12:
	cmp dword ptr [esi+0x2BC],eax
	jle Block14

 Block13:
	mov dword ptr [esi+0x77C],ecx
	mov dword ptr [esi+0x774],ecx

 Block14:
	mov ecx,dword ptr [esi+0x14]
	test ecx,ecx
	je Block24

 Block15:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push offset CMob::ms_RTTI_CMob
	call eax
	test eax,eax
	je Block24

 Block16:
	mov ebx,dword ptr [esi+0x14]
	test ebx,ebx
	je Block24

 Block17:
	add ebx,0xFFFFFFFC
	je Block24

 Block18:
	cmp dword ptr [ebx+0x21C],0
	jne Block23

 Block19:
	cmp dword ptr [ebx+0x228],0
	jne Block23

 Block20:
	cmp dword ptr [ebx+0x298],0
	jne Block23

 Block21:
	mov ecx,dword ptr [ebx+0x47C]
	lea eax,[ebx+0x474]
	push ecx
	push eax
	mov dword ptr [esp+0x34],eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	cmp eax,4
	je Block23

 Block22:
	mov edx,dword ptr [ebx+0x47C]
	mov eax,dword ptr [esp+0x2C]
	push edx
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block24

 Block23:
	push 0
	jmp Block41

 Block24:
	cmp dword ptr [esi+0x760],0
	jne Block40

 Block25:
	cmp dword ptr [esi+0x75C],0
	je Block27

 Block26:
	call get_update_time
	cmp dword ptr [esi+0x75C],eax
	jg Block40

 Block27:
	cmp dword ptr [esi+0x774],0
	je Block33

 Block28:
	mov ecx,dword ptr [edi+0x40]
	push ecx
	lea edx,[edi+0x30]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	fnstsw ax
	test ah,5
	jp Block30

 Block29:
	push 0
	push 0xFFFFFFFF
	jmp Block42

 Block30:
	mov eax,dword ptr [edi+0x40]
	push eax
	lea ecx,[edi+0x30]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	push 0
	mov ecx,esi
	fnstsw ax
	test ah,0x41
	jne Block32

 Block31:
	push 1
	jmp Block43

 Block32:
	push 0
	jmp Block43

 Block33:
	mov eax,dword ptr [esi+0x2F8]
	cmp eax,6
	ja Block44

 Block34:
	cmp EAX, 0
je Block35
cmp EAX, 1
je Block36
cmp EAX, 2
je Block44
cmp EAX, 3
je Block37
cmp EAX, 4
je Block39
cmp EAX, 5
je Block44
cmp EAX, 6
je Block38


 Block35:
	mov ecx,esi
	call CVecCtrlMob::CtrlUpdateActiveStop
	jmp Block44

 Block36:
	mov ecx,esi
	call CVecCtrlMob::CtrlUpdateActiveMove
	jmp Block44

 Block37:
	mov ecx,esi
	call CVecCtrlMob::CtrlUpdateActiveJump
	jmp Block44

 Block38:
	mov ecx,esi
	call CVecCtrlMob::CtrlUpdateActiveEscort
	jmp Block44

 Block39:
	mov ecx,esi
	call CVecCtrlMob::FlyCtrlGuardingBefore
	mov ecx,esi
	call CVecCtrlMob::CtrlUpdateActiveFly
	jmp Block44

 Block40:
	mov edx,dword ptr [esi+0x1FC]
	push edx
	lea eax,[esi+0x1F4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax

 Block41:
	push 0

 Block42:
	mov ecx,esi

 Block43:
	call CVecCtrl::SetInput

 Block44:
	cmp dword ptr [esi+0x300],0
	je Block48

 Block45:
	lea ecx,[esi+0x304]
	call TSecType<int>::GetData
	test eax,eax
	jne Block48

 Block46:
	lea ecx,[esi+0x310]
	call TSecType<long>::GetData
	mov ebx,eax
	sub ebx,dword ptr [ebp+8]
	lea ecx,[esi+0x310]
	push ebx
	call TSecType<long>::SetData
	test ebx,ebx
	jge Block48

 Block47:
	lea ebx,[esi+0x734]
	push 0
	mov ecx,ebx
	call TSecType<int>::SetData
	push 0
	push 0
	mov ecx,ebx
	call TSecType<int>::GetData
	push eax
	mov ecx,esi
	call CVecCtrlMob::ChaseTargetImp

 Block48:
	cmp dword ptr [esi+0x2F8],6
	jne Block60

 Block49:
	mov ecx,dword ptr [esi+0x1BC]
	push ecx
	lea edx,[esi+0x1B4]
	push edx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block60

 Block50:
	cmp dword ptr [esi+0x760],0
	jne Block60

 Block51:
	cmp dword ptr [esi+0x770],0
	jne Block60

 Block52:
	mov ecx,esi
	call CVecCtrlMob::WorkUpdateActiveLadderOrRope
	mov ecx,esi
	call CVecCtrlMob::CollisionDetectEscortDest
	mov eax,dword ptr [esi+0x798]
	mov ecx,dword ptr [esi+0x780]
	lea eax,[eax+eax*4]
	cmp dword ptr [ecx+eax*4+8],1
	lea eax,[ecx+eax*4]
	je Block109

 Block53:
	mov edx,dword ptr [esi+0x788]
	cmp edx,dword ptr [eax+4]
	jge Block109

 Block54:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [esi+0x798]
	mov edx,dword ptr [esi+0x780]
	lea ecx,[eax+eax*4]
	fisub dword ptr [edx+ecx*4]
	lea ebx,[edx+ecx*4]
	add esp,8
	fabs
	fcomp qword ptr [__real_4056800000000000]
	fnstsw ax
	test ah,1
	jne Block109

 Block55:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebx]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block57

 Block56:
	push 0
	push 1
	mov ecx,esi
	call CVecCtrl::SetInput

 Block57:
	mov eax,dword ptr [esi+0x798]
	mov edx,dword ptr [esi+0x780]
	lea ecx,[eax+eax*4]
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	lea ebx,[edx+ecx*4]
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebx]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jp Block59

 Block58:
	push 0
	push 0xFFFFFFFF
	mov ecx,esi
	call CVecCtrl::SetInput

 Block59:
	push 0
	mov ecx,esi
	call CVecCtrlMob::SetJumpNext

 Block60:
	mov ecx,dword ptr [ebp+8]
	push ecx
	mov ecx,esi
	call CVecCtrl::WorkUpdateActive
	test eax,eax
	jne Block62

 Block61:
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4

 Block62:
	cmp dword ptr [esi+0x2F8],6
	jne Block74

 Block63:
	cmp dword ptr [esi+0x760],0
	jne Block73

 Block64:
	mov ebx,dword ptr [esi+0x75C]
	test ebx,ebx
	je Block75

 Block65:
	call get_update_time
	cmp ebx,eax
	jg Block73

 Block66:
	test ebx,ebx
	je Block75

 Block67:
	mov ecx,dword ptr [esi+0x14]
	test ecx,ecx
	je Block71

 Block68:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push offset CMob::ms_RTTI_CMob
	call eax
	test eax,eax
	je Block71

 Block69:
	mov eax,dword ptr [esi+0x14]
	test eax,eax
	je Block71

 Block70:
	lea ecx,[eax-4]
	jmp Block72

 Block71:
	xor ecx,ecx

 Block72:
	call CMob::SendEscortStopEndRequest
	mov dword ptr [esi+0x75C],0

 Block73:
	mov eax,1
	mov dword ptr [esi+0x650],eax

 Block74:
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4

 Block75:
	cmp dword ptr [esi+0x74C],0
	jne Block77

 Block76:
	mov ecx,esi
	call CVecCtrlMob::MoveMobOnLadderOrRopeX

 Block77:
	cmp dword ptr [esi+0x1A0],0
	jne Block85

 Block78:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_vy
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	test ah,0x41
	jne Block84

 Block79:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_pLadderOrRope
	test eax,eax
	jne Block84

 Block80:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	test eax,eax
	jge Block84

 Block81:
	mov ecx,esi
	call CVecCtrlMob::IsAbleToClimbLadderOrRope
	test eax,eax
	je Block84

 Block82:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x38]
	mov edx,dword ptr [esi+0x90]
	lea ebx,[esi+0x80]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x48]
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	add esp,0x10
	mov ecx,edi
	mov dword ptr [esp+0x2C],eax
	call AbsPos::_ZtlSecureGet_y
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	fld qword ptr [esp+0x38]
	add esp,8
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add esp,8
	push eax
	mov ecx,ebx
	call AbsPos::_ZtlSecureGet_y
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	fld qword ptr [esp+0x48]
	add esp,8
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	mov ecx,dword ptr [esp+0x40]
	add esp,8
	push eax
	call CWvsPhysicalSpace2D::GetLadderOrRope
	mov ebx,eax
	test ebx,ebx
	je Block84

 Block83:
	fldz
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vy
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)
	fild dword ptr [ebx+0xC]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	jmp Block100

 Block84:
	cmp dword ptr [esi+0x1A0],0
	je Block101

 Block85:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_pLadderOrRope
	test eax,eax
	jne Block92

 Block86:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	test eax,eax
	jge Block92

 Block87:
	mov ecx,esi
	call CVecCtrlMob::IsAbleToClimbLadderOrRope
	test eax,eax
	je Block92

 Block88:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov ebx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	add esp,0x10
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	fld qword ptr [esp+0x40]
	add esp,8
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add esp,8
	push eax
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	fld qword ptr [esp+0x40]
	add esp,8
	sub eax,0x14
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add esp,8
	push eax
	mov ecx,ebx
	call CWvsPhysicalSpace2D::GetLadderOrRope
	mov ebx,eax
	test ebx,ebx
	je Block92

 Block89:
	fldz
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vy
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)
	fild dword ptr [ebx+0xC]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	mov ecx,edi
	fstp st(0)
	call AbsPos::_ZtlSecureGet_y
	call __ftol2_sse
	mov ecx,dword ptr [ebx+0x14]
	cmp ecx,eax
	mov dword ptr [esp+0x2C],ecx
	jl Block91

 Block90:
	mov dword ptr [esp+0x2C],eax

 Block91:
	fild dword ptr [esp+0x2C]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	mov eax,dword ptr [esi]
	fstp st(0)
	mov edx,dword ptr [eax+0x14]
	push 0
	push ebx
	push 0
	mov ecx,esi
	call edx
	mov dword ptr [esi+0x74C],0
	jmp Block104

 Block92:
	cmp dword ptr [esi+0x1A0],0
	je Block101

 Block93:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_pLadderOrRope
	test eax,eax
	jne Block101

 Block94:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	test eax,eax
	jle Block101

 Block95:
	mov ecx,esi
	call CVecCtrlMob::IsAbleToClimbLadderOrRope
	test eax,eax
	je Block101

 Block96:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov ebx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	add esp,0x10
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	fld qword ptr [esp+0x40]
	add esp,8
	add eax,0xA
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add esp,8
	push eax
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	fld qword ptr [esp+0x40]
	add esp,8
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add esp,8
	push eax
	mov ecx,ebx
	call CWvsPhysicalSpace2D::GetLadderOrRope
	mov ebx,eax
	test ebx,ebx
	je Block101

 Block97:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add esp,8
	cmp eax,dword ptr [ebx+0x10]
	jg Block101

 Block98:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add eax,0xA
	add esp,8
	cmp dword ptr [ebx+0x10],eax
	jg Block101

 Block99:
	fldz
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vy
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)
	fild dword ptr [ebx+0xC]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	fstp st(0)
	sub esp,8
	fild dword ptr [ebx+0x10]
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y

 Block100:
	mov edx,dword ptr [esi]
	fstp st(0)
	mov eax,dword ptr [edx+0x14]
	push 0
	push ebx
	push 0
	mov ecx,esi
	call eax
	mov dword ptr [esi+0x74C],0
	jmp Block104

 Block101:
	cmp dword ptr [esi+0x74C],0
	je Block104

 Block102:
	cmp dword ptr [esi+0x1A0],0
	je Block104

 Block103:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	push 0
	mov ecx,esi
	call CVecCtrl::SetInput
	push 0
	mov ecx,esi
	call CVecCtrlMob::SetJumpNext

 Block104:
	xor edi,edi
	mov ecx,esi
	cmp dword ptr [esi+0x770],edi
	je Block106

 Block105:
	call CVecCtrlMob::CollisionDetectEscortBeforeTargetPosition
	jmp Block107

 Block106:
	call CVecCtrlMob::CollisionDetectEscortDest

 Block107:
	cmp dword ptr [esi+0x7A0],edi
	je Block109

 Block108:
	mov ecx,esi
	call CVecCtrlMob::MoveMobBeforeEscortCurDest
	mov dword ptr [esi+0x7A0],edi
	mov dword ptr [esi+0x79C],edi

 Block109:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CVecCtrlMob::CtrlUpdateActiveEscort
__SUB_CLASS_THIS0(0059B8D0, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x300]
	push edi
	test ecx,ecx
	je Block4

 Block1:
	mov eax,dword ptr [esi+0x1A0]
	test eax,eax
	je Block4

 Block2:
	mov edi,dword ptr [eax+0x30]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x18]
	call edx
	cmp edi,eax
	je Block4

 Block3:
	lea edi,[esi+0x734]
	push 0
	mov ecx,edi
	call TSecType<int>::SetData
	push 0
	push 0
	mov ecx,edi
	call TSecType<int>::GetData
	push eax
	mov ecx,esi
	call CVecCtrlMob::ChaseTargetImp

 Block4:
	cmp dword ptr [esi+0x300],0
	je Block22

 Block5:
	mov eax,dword ptr [esi+0x30]
	lea ebx,[esi+0x20]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcomp
	add esp,8
	fnstsw ax
	test ah,0x41
	jp Block7

 Block6:
	fadd qword ptr [__real_3fe0000000000000]
	jmp Block8

 Block7:
	fsub qword ptr [__real_3fdffffffeed1f41]

 Block8:
	call __ftol2_sse
	mov ecx,dword ptr [esi+0x300]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	mov edi,eax
	lea eax,[esp+0x10]
	push eax
	call edx
	cmp dword ptr [eax],edi
	jle Block10

 Block9:
	push 0
	push 1
	mov ecx,esi
	call CVecCtrl::SetInput

 Block10:
	mov eax,dword ptr [ebx+0x10]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcomp
	add esp,8
	fnstsw ax
	test ah,0x41
	jp Block12

 Block11:
	fadd qword ptr [__real_3fe0000000000000]
	jmp Block13

 Block12:
	fsub qword ptr [__real_3fdffffffeed1f41]

 Block13:
	call __ftol2_sse
	mov ecx,dword ptr [esi+0x300]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	mov edi,eax
	lea eax,[esp+0x10]
	push eax
	call edx
	cmp dword ptr [eax],edi
	jge Block15

 Block14:
	push 0
	push 0xFFFFFFFF
	mov ecx,esi
	call CVecCtrl::SetInput

 Block15:
	mov eax,dword ptr [ebx+0x10]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcomp
	add esp,8
	fnstsw ax
	test ah,0x41
	jp Block17

 Block16:
	fadd qword ptr [__real_3fe0000000000000]
	jmp Block18

 Block17:
	fsub qword ptr [__real_3fdffffffeed1f41]

 Block18:
	call __ftol2_sse
	mov ecx,dword ptr [esi+0x300]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	mov edi,eax
	lea eax,[esp+0x10]
	push eax
	call edx
	cmp dword ptr [eax],edi
	jne Block21

 Block19:
	push 0
	push 0

 Block20:
	mov ecx,esi
	call CVecCtrl::SetInput

 Block21:
	pop edi
	mov dword ptr [esi+0x650],1
	pop esi
	pop ebx
	add esp,0xC
	ret

 Block22:
	cmp dword ptr [esi+0x770],0
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov dword ptr [esp+0xC],eax
	je Block25

 Block23:
	mov ecx,dword ptr [esi+0x1C4]
	cmp ecx,dword ptr [esi+0x76C]
	je Block38

 Block24:
	mov dword ptr [esi+0x770],0

 Block25:
	cmp dword ptr [esi+0x1A0],0
	je Block61

 Block26:
	cmp dword ptr [esi+0x74C],0
	jne Block61

 Block27:
	mov ecx,dword ptr [esi+0x710]
	call TSecType<int>::GetData
	test eax,eax
	je Block31

 Block28:
	mov ecx,dword ptr [esi+0x710]
	push 0
	call TSecType<int>::SetData
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	test eax,eax
	je Block31

 Block29:
	mov ecx,dword ptr [esi+0x714]
	call TSecType<long>::GetData
	lea ecx,[esi+0x20]
	mov edi,eax
	call AbsPos::_ZtlSecureGet_y
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add esp,8
	cmp eax,edi
	jne Block31

 Block30:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	neg eax
	push eax
	mov ecx,esi
	call CVecCtrl::SetInput

 Block31:
	lea ebx,[esi+0x780]
	push ebp
	mov ecx,ebx
	call ZArray<CVecCtrlMob::EscortDest>::IsEmpty
	test eax,eax
	jne Block58

 Block32:
	mov ecx,esi
	call CVecCtrl::GetLadderOrRope
	test eax,eax
	jne Block58

 Block33:
	cmp dword ptr [esi+0x1A0],eax
	je Block58

 Block34:
	mov eax,dword ptr [esi+0x798]
	mov edx,dword ptr [ebx]
	lea ecx,[eax+eax*4]
	mov eax,dword ptr [esi+0x784]
	cmp eax,dword ptr [edx+ecx*4]
	lea ebp,[edx+ecx*4]
	jne Block42

 Block35:
	mov ecx,dword ptr [esi+0x788]
	cmp ecx,dword ptr [ebp+4]
	jle Block42

 Block36:
	cmp dword ptr [esi+0x758],0
	je Block42

 Block37:
	mov ecx,esi
	call CVecCtrlMob::MoveMobOnRightAngleX
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	push 0
	mov ecx,esi
	call CVecCtrl::SetInput
	push 0
	mov ecx,esi
	call CVecCtrlMob::SetJumpNext
	mov dword ptr [esi+0x758],0
	jmp Block60

 Block38:
	mov edx,dword ptr [esi+0x30]
	lea edi,[esi+0x20]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esi+0x764]
	add esp,8
	fcompp
	fnstsw ax
	test ah,1
	jne Block40

 Block39:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	push 1
	mov ecx,esi
	call CVecCtrl::SetInput

 Block40:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esi+0x764]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jp Block21

 Block41:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	push 0xFFFFFFFF
	jmp Block20

 Block42:
	mov edx,dword ptr [esi+0x30]
	lea edi,[esi+0x20]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebp]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block44

 Block43:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	push 1
	mov ecx,esi
	call CVecCtrl::SetInput

 Block44:
	mov edx,dword ptr [edi+0x10]
	mov eax,dword ptr [esi+0x798]
	mov ecx,dword ptr [ebx]
	push edx
	lea eax,[eax+eax*4]
	push edi
	lea ebp,[ecx+eax*4]
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebp]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jp Block46

 Block45:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	call CVecCtrl::SetInput

 Block46:
	mov eax,dword ptr [esi+0x798]
	mov ecx,dword ptr [ebx]
	lea eax,[eax+eax*4]
	cmp dword ptr [ecx+eax*4+8],1
	lea eax,[ecx+eax*4]
	je Block58

 Block47:
	mov edx,dword ptr [esi+0x1A0]
	mov ecx,dword ptr [edx+0x30]
	cmp ecx,dword ptr [eax+0xC]
	je Block58

 Block48:
	fild dword ptr [eax+4]
	mov ecx,edi
	fstp qword ptr [esp+0x14]
	call AbsPos::_ZtlSecureGet_y
	fcomp qword ptr [esp+0x14]
	fnstsw ax
	test ah,0x41
	jne Block58

 Block49:
	mov eax,dword ptr [esi+0x798]
	mov ecx,dword ptr [edi+0x10]
	lea edx,[eax+eax*4]
	mov eax,dword ptr [ebx]
	mov ebp,dword ptr [eax+edx*4+0xC]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x34]
	fild dword ptr [eax+ebp*8]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jp Block58

 Block50:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x34]
	fild dword ptr [eax+ebp*8+4]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block58

 Block51:
	mov ecx,esi
	call CVecCtrlMob::ClearMoveContext
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [esi+0x798]
	lea edx,[eax+eax*4]
	mov eax,dword ptr [ebx]
	fild dword ptr [eax+edx*4]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jp Block54

 Block52:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	test eax,eax
	jle Block54

 Block53:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	call CVecCtrl::SetInput

 Block54:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [esi+0x798]
	lea edx,[eax+eax*4]
	mov eax,dword ptr [ebx]
	fild dword ptr [eax+edx*4]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block57

 Block55:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	test eax,eax
	jge Block57

 Block56:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	push eax
	push 1
	mov ecx,esi
	call CVecCtrl::SetInput

 Block57:
	push 1
	mov ecx,esi
	call CVecCtrlMob::SetJumpNext
	jmp Block60

 Block58:
	mov ecx,ebx
	call ZArray<CVecCtrlMob::EscortDest>::IsEmpty
	test eax,eax
	je Block60

 Block59:
	push 0
	push 0
	mov ecx,esi
	call CVecCtrl::SetInput

 Block60:
	pop ebp

 Block61:
	mov eax,dword ptr [esi+0x780]
	test eax,eax
	je Block64

 Block62:
	cmp dword ptr [eax-4],0
	je Block64

 Block63:
	mov ecx,dword ptr [esi+0x1BC]
	push ecx
	lea edx,[esi+0x1B4]
	push edx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block66

 Block64:
	mov eax,dword ptr [esi+0x1BC]
	push eax
	lea ecx,[esi+0x1B4]
	push ecx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block76

 Block65:
	mov edx,dword ptr [esi+0x1FC]
	push edx
	lea eax,[esi+0x1F4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block76

 Block66:
	mov eax,dword ptr [esi+0x798]
	mov edx,dword ptr [esi+0x780]
	lea ecx,[eax+eax*4]
	mov ebx,1
	cmp dword ptr [edx+ecx*4+8],ebx
	jne Block71

 Block67:
	mov eax,dword ptr [esi+0x48]
	push eax
	lea ecx,[esi+0x38]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [esi+0x798]
	lea edx,[eax+eax*4]
	mov eax,dword ptr [esi+0x780]
	fild dword ptr [eax+edx*4+4]
	add esp,8

 Block68:
	fcompp
	mov ecx,esi
	fnstsw ax
	test ah,0x41
	jp Block74

 Block69:
	push 0xFFFFFFFF

 Block70:
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	push eax
	mov ecx,esi
	call CVecCtrl::SetInput
	pop edi
	mov dword ptr [esi+0x650],ebx
	pop esi
	pop ebx
	add esp,0xC
	ret

 Block71:
	cmp dword ptr [esi+0x78C],ebx
	jne Block77

 Block72:
	mov ecx,esi
	call CVecCtrl::GetLadderOrRope
	test eax,eax
	je Block75

 Block73:
	mov eax,dword ptr [esi+0x798]
	mov edx,dword ptr [esi+0x780]
	lea ecx,[eax+eax*4]
	lea edi,[edx+ecx*4]
	lea ecx,[esi+0x20]
	call AbsPos::_ZtlSecureGet_y
	fild dword ptr [edi+4]
	jmp Block68

 Block74:
	push ebx
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	push eax
	mov ecx,esi
	call CVecCtrl::SetInput
	pop edi
	mov dword ptr [esi+0x650],ebx
	pop esi
	pop ebx
	add esp,0xC
	ret

 Block75:
	push 0
	mov ecx,esi
	jmp Block70

 Block76:
	mov ebx,1

 Block77:
	pop edi
	mov dword ptr [esi+0x650],ebx
	pop esi
	pop ebx
	add esp,0xC
	ret
}
}
// CVecCtrlMob::GetTargetX
__SUB_CLASS_THIS0(00597620, __thiscall, 79908,  CVecCtrlMob, long) {
__asm {

 Block0:
	call CVecCtrl::BeginUpdateActive
	mov eax,0x5A
	ret
}
}
// CVecCtrlMob::SetMoveRandManSeed
__SUB_CLASS_THIS(00597160, __thiscall, 79915,  CVecCtrlMob, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x2F8]
	sub eax,1
	je Block3

 Block1:
	sub eax,2
	jne Block4

 Block2:
	add ecx,0x320
	jmp  CMoveRandMan::SetSeed

 Block3:
	add ecx,0x384
	jmp  CMoveRandMan::SetSeed

 Block4:
	ret 0xC
}
}
// CVecCtrlMob::MoveContext::MoveContext
_SUB_EXCEPTION_HANDLER(597AB0)
__SUB_CLASS_THIS0(00597AB0, __thiscall, 79932,  CVecCtrlMob::MoveContext, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_597AB0
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
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esi+8],eax
	lea edi,[esi-0x3FF8]
	call _rand
	add eax,edi
	mov dword ptr [esi],eax
	call _rand
	movzx ecx,byte ptr [esi]
	add eax,edi
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [esi+8]
	mov byte ptr [eax+5],cl
	movzx eax,byte ptr [esi+4]
	mov edx,dword ptr [esi+8]
	mov byte ptr [edx+6],al
	xor eax,eax
	push eax
	mov ecx,esi
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x24],0
	lea ebx,[esi+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebx+8],eax
	lea edi,[ebx-0x3FF8]
	call _rand
	add eax,edi
	mov dword ptr [ebx],eax
	call _rand
	movzx edx,byte ptr [ebx]
	mov ecx,dword ptr [ebx+8]
	add eax,edi
	mov dword ptr [ebx+4],eax
	mov byte ptr [ecx+5],dl
	movzx ecx,byte ptr [ebx+4]
	mov eax,dword ptr [ebx+8]
	mov byte ptr [eax+6],cl
	xor eax,eax
	push eax
	mov ecx,ebx
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],1
	lea edi,[esi+0x18]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebp,[edi-0x3FF8]
	call _rand
	add eax,ebp
	mov dword ptr [edi],eax
	call _rand
	mov edx,dword ptr [edi+8]
	add eax,ebp
	mov dword ptr [edi+4],eax
	movzx eax,byte ptr [edi]
	mov byte ptr [edx+5],al
	movzx edx,byte ptr [edi+4]
	mov ecx,dword ptr [edi+8]
	xor eax,eax
	mov byte ptr [ecx+6],dl
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],2
	lea ebp,[esi+0x24]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+8],eax
	call _rand
	mov ecx,eax
	lea eax,[ebp-0x3FF8]
	add ecx,eax
	mov dword ptr [ebp],ecx
	call _rand
	movzx ecx,byte ptr [ebp]
	mov edx,eax
	lea eax,[ebp-0x3FF8]
	add edx,eax
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp+4],edx
	mov byte ptr [eax+5],cl
	movzx eax,byte ptr [ebp+4]
	mov edx,dword ptr [ebp+8]
	mov byte ptr [edx+6],al
	xor eax,eax
	push eax
	mov ecx,ebp
	call TSecType<int>::SetData
	lea ecx,[esi+0x30]
	mov byte ptr [esp+0x20],3
	call SECPOINT::_ctor_default
	mov dword ptr [esi+0x48],esi
	mov dword ptr [esi+0x4C],ebx
	mov dword ptr [esi+0x50],edi
	mov dword ptr [esi+0x54],esi
	mov dword ptr [esi+0x58],ebx
	mov dword ptr [esi+0x5C],ebp
	mov dword ptr [esi+0x60],edi
	lea eax,[esi+0x30]
	mov dword ptr [esi+0x64],eax
	mov dword ptr [esi+0x68],ebp
	mov dword ptr [esi+0x6C],esi
	mov dword ptr [esi+0x70],edi
	mov eax,esi
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
// CVecCtrlMob::DelayedGiveUpChasing
__SUB_CLASS_THIS0(0059A860, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x300],0
	je Block4

 Block1:
	push edi
	lea ecx,[esi+0x324]
	call CRand32::Random
	mov ecx,eax
	inc word ptr [esi+0x320]
	mov eax,0x57619F1
	mul ecx
	shr edx,6
	imul edx,0xBB8
	sub ecx,edx
	add ecx,0xBB8
	mov edi,ecx
	add esi,0x310
	mov ecx,esi
	call TSecType<long>::GetData
	cmp eax,edi
	jle Block3

 Block2:
	push edi
	mov ecx,esi
	call TSecType<long>::SetData

 Block3:
	pop edi

 Block4:
	pop esi
	ret
}
}
// CVecCtrlMob::CtrlUpdateActiveFly
__SUB_CLASS_THIS0(0059BEB0, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x40
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x71C]
	push edi
	call TSecType<int>::GetData
	mov ebp,1
	test eax,eax
	je Block14

 Block1:
	mov ecx,dword ptr [esi+0x718]
	xor ebx,ebx
	add ecx,0xC
	mov dword ptr [esp+0x10],ebx
	call TSecType<long>::GetData
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [esi+0x30]
	fild dword ptr [esp+0x1C]
	lea edi,[esi+0x20]
	push eax
	push edi
	fstp qword ptr [esp+0x28]
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x28]
	add esp,8
	fabs
	fcomp qword ptr [__real_4024000000000000]
	fnstsw ax
	test ah,1
	jne Block5

 Block2:
	mov ecx,dword ptr [esi+0x718]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0x10]
	mov dword ptr [esp+0x1C],eax
	fild dword ptr [esp+0x1C]
	push ecx
	push edi
	fstp qword ptr [esp+0x28]
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [esp+0x28]
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block4

 Block3:
	or ebx,0xFFFFFFFF
	jmp Block5

 Block4:
	mov ebx,ebp

 Block5:
	mov ecx,dword ptr [esi+0x718]
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0x28]
	mov dword ptr [esp+0x1C],eax
	fild dword ptr [esp+0x1C]
	push edx
	lea eax,[edi+0x18]
	push eax
	fstp qword ptr [esp+0x28]
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x28]
	add esp,8
	fabs
	fcomp qword ptr [__real_4024000000000000]
	fnstsw ax
	test ah,5
	jp Block7

 Block6:
	mov dword ptr [esp+0x10],0xFFFFFFFF
	jmp Block9

 Block7:
	mov ecx,dword ptr [esi+0x718]
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0x28]
	mov dword ptr [esp+0x1C],eax
	fild dword ptr [esp+0x1C]
	push ecx
	lea edx,[edi+0x18]
	push edx
	fstp qword ptr [esp+0x28]
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [esp+0x28]
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block9

 Block8:
	mov ecx,esi
	call CVecCtrl::Jump

 Block9:
	mov eax,dword ptr [esp+0x10]
	push eax
	push ebx
	mov ecx,esi
	call CVecCtrl::SetInput
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	call __ftol2_sse
	mov edx,dword ptr [edi+0x28]
	push edx
	add edi,0x18
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<double>::call
	add esp,0x10
	call __ftol2_sse
	mov ecx,dword ptr [esi+0x718]
	mov edi,eax
	mov eax,0xFFFFFFF5
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x34],eax
	mov eax,0xB
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x3C],eax
	mov eax,0xFFFFFF6A
	mov dword ptr [esp+0x40],eax
	mov dword ptr [esp+0x44],eax
	mov eax,0x96
	mov dword ptr [esp+0x48],eax
	mov dword ptr [esp+0x4C],eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [esi+0x718]
	add ecx,0xC
	push eax
	call TSecType<long>::GetData
	push eax
	lea eax,[esp+0x38]
	push eax
	call OffsetRect
	mov ecx,dword ptr [esi+0x718]
	call TSecType<long>::GetData
	mov ecx,dword ptr [esi+0x718]
	add ecx,0xC
	push eax
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x48]
	push ecx
	call OffsetRect
	push edi
	push ebx
	lea edx,[esp+0x38]
	push edx
	call PtInRect
	test eax,eax
	jne Block12

 Block10:
	mov ecx,dword ptr [esi+0x300]
	test ecx,ecx
	je Block13

 Block11:
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0x28]
	push edx
	call eax
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	push ecx
	push edx
	lea eax,[esp+0x48]
	push eax
	call PtInRect
	test eax,eax
	jne Block13

 Block12:
	mov ecx,dword ptr [esi+0x71C]
	push 0
	call TSecType<int>::SetData

 Block13:
	mov ecx,esi
	call CVecCtrlMob::FlyCtrlGuardingAfter

 Block14:
	mov ecx,dword ptr [esi+0x71C]
	xor edi,edi
	mov dword ptr [esi+0x3B8],edi
	call TSecType<int>::GetData
	test eax,eax
	jne Block17

 Block15:
	cmp dword ptr [esi+0x300],edi
	je Block17

 Block16:
	mov eax,ebp
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	mov ecx,dword ptr [esi+0x71C]
	mov dword ptr [esi+0x3B4],eax
	mov dword ptr [esi+0x500],edi
	call TSecType<int>::GetData
	test eax,eax
	jne Block21

 Block19:
	cmp dword ptr [esi+0x300],edi
	jne Block21

 Block20:
	mov eax,ebp
	jmp Block22

 Block21:
	xor eax,eax

 Block22:
	lea ecx,[esi+0x5BC]
	push ebp
	mov dword ptr [esi+0x4FC],eax
	call TSecType<int>::SetData
	mov ecx,dword ptr [esi+0x718]
	add ecx,0xC
	call TSecType<long>::GetData
	push eax
	lea ecx,[esi+0x674]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x718]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esi+0x680]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x71C]
	call TSecType<int>::GetData
	test eax,eax
	jne Block47

 Block23:
	mov ecx,dword ptr [esi+0x300]
	cmp ecx,edi
	je Block28

 Block24:
	mov dword ptr [esi+0x3B8],ebp
	mov dword ptr [esi+0x3E4],ebp
	mov dword ptr [esi+0x414],ebp
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x28]
	push eax
	call edx
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esi+0x41C]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x300]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0x28]
	push edx
	call eax
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x428]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x724]
	call TSecType<long>::GetData
	test eax,eax
	jne Block26

 Block25:
	lea ecx,[esi+0x324]
	call CRand32::Random
	mov ecx,eax
	add word ptr [esi+0x320],bp
	mov eax,0x88888889
	mul ecx
	shr edx,5
	mov eax,edx
	shl eax,4
	sub eax,edx
	add eax,eax
	add eax,eax
	sub ecx,eax
	add ecx,0x3C
	push ecx
	mov ecx,dword ptr [esi+0x724]
	call TSecType<long>::SetData

 Block26:
	mov ecx,dword ptr [esi+0x300]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x28]
	push eax
	call edx
	mov ebx,dword ptr [esi+0x718]
	mov edi,eax
	mov eax,dword ptr [edi]
	push eax
	lea ecx,[ebx+0xC]
	call TSecType<long>::SetData
	mov ecx,dword ptr [edi+4]
	push ecx
	mov ecx,ebx
	call TSecType<long>::SetData
	lea ecx,[esi+0x3C0]
	call CRand32::Random
	mov edi,eax
	add word ptr [esi+0x3BC],bp
	mov eax,0x88888889
	mul edi
	shr edx,7
	imul edx,0xFFFFFF10
	add edi,edx
	mov dword ptr [esi+0x3E0],edi
	mov dword ptr [esi+0x3E8],ebp
	mov ebx,dword ptr [esi+0x718]
	add ebx,0xC
	mov ecx,ebx
	call TSecType<long>::GetData
	lea edi,[eax+edi-0x78]
	push edi
	mov ecx,ebx
	call TSecType<long>::SetData
	lea ecx,[esi+0x3F0]
	call CRand32::Random
	mov edi,eax
	add word ptr [esi+0x3EC],bp
	mov eax,0xCCCCCCCD
	mul edi
	shr edx,6
	imul edx,0xFFFFFFB0
	add edi,edx
	mov dword ptr [esi+0x410],edi
	mov dword ptr [esi+0x418],ebp
	mov ebx,dword ptr [esi+0x718]
	mov ecx,ebx
	call TSecType<long>::GetData
	lea edi,[eax+edi-0x28]
	push edi
	mov ecx,ebx
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x71C]
	push ebp
	call TSecType<int>::SetData
	mov edi,dword ptr [esi+0x724]
	mov ecx,edi
	call TSecType<long>::GetData
	dec eax
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x720]
	push 0xFFFFFFFF
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x718]
	add ecx,0xC
	call TSecType<long>::GetData
	push eax
	lea ecx,[esi+0x434]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x718]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esi+0x440]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x724]
	call TSecType<long>::GetData
	test eax,eax
	jg Block28

 Block27:
	lea edi,[esi+0x734]
	push 0
	mov ecx,edi
	call TSecType<int>::SetData
	push 0
	push 0
	mov ecx,edi
	call TSecType<int>::GetData
	push eax
	mov ecx,esi
	call CVecCtrlMob::ChaseTargetImp

 Block28:
	mov eax,dword ptr [esi+0x300]
	xor edx,edx
	test eax,eax
	sete dl
	mov dword ptr [esi+0x4FC],edx
	test eax,eax
	jne Block47

 Block29:
	mov ecx,dword ptr [esi+0x724]
	mov dword ptr [esi+0x500],ebp
	mov dword ptr [esi+0x474],ebp
	mov dword ptr [esi+0x4A4],ebp
	mov dword ptr [esi+0x4D4],ebp
	mov edi,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	call TSecType<long>::GetData
	test eax,eax
	jle Block31

 Block30:
	mov ecx,dword ptr [esi+0x720]
	call TSecType<long>::GetData
	test eax,eax
	jge Block37

 Block31:
	mov dword ptr [esi+0x37C],ebp
	mov eax,dword ptr [edi+0x38]
	test eax,eax
	jne Block33

 Block32:
	xor ebx,ebx
	jmp Block34

 Block33:
	mov ebx,dword ptr [eax-4]

 Block34:
	lea ecx,[esi+0x358]
	call CRand32::Random
	test ebx,ebx
	jle Block36

 Block35:
	xor edx,edx
	div ebx
	mov eax,edx

 Block36:
	add word ptr [esi+0x354],bp
	mov dword ptr [esi+0x378],eax
	mov dword ptr [esi+0x380],ebp
	mov ecx,dword ptr [edi+0x38]
	mov edx,dword ptr [ecx+eax*4]
	mov ecx,dword ptr [esi+0x720]
	push edx
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x720]
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0x34]
	lea ebx,[ecx+eax*8]
	lea ecx,[esi+0x324]
	call CRand32::Random
	add word ptr [esi+0x320],bp
	mov ecx,eax
	mov eax,0x51EB851F
	mul ecx
	mov eax,dword ptr [ebx+4]
	shr edx,6
	imul edx,0xC8
	sub eax,edx
	sub eax,dword ptr [ebx]
	lea ecx,[eax+ecx+0x28]
	shr ecx,3
	push ecx
	mov ecx,dword ptr [esi+0x724]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x720]
	call TSecType<long>::GetData
	mov dword ptr [esi+0x350],eax

 Block37:
	mov ecx,dword ptr [esi+0x720]
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0x3C]
	lea ebx,[edx+eax*4]
	mov eax,dword ptr [ebx]
	test eax,eax
	jne Block39

 Block38:
	mov dword ptr [esp+0x10],eax
	jmp Block40

 Block39:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x10],eax

 Block40:
	lea ecx,[esi+0x450]
	call CRand32::Random
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	jle Block42

 Block41:
	xor edx,edx
	div ecx
	mov eax,edx

 Block42:
	add word ptr [esi+0x44C],bp
	mov dword ptr [esi+0x470],eax
	mov dword ptr [esi+0x478],ebp
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+eax*4]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x24],eax
	call CWvsPhysicalSpace2D::GetFoothold
	mov edi,eax
	fld qword ptr [edi+0x50]
	call __ftol2_sse
	lea ecx,[esi+0x480]
	mov dword ptr [esp+0x1C],eax
	call CRand32::Random
	mov ecx,dword ptr [esp+0x1C]
	mov ebx,eax
	mov dword ptr [esp+0x10],ebx
	test ecx,ecx
	jle Block44

 Block43:
	xor edx,edx
	div ecx
	mov ebx,edx
	mov dword ptr [esp+0x10],edx

 Block44:
	fild dword ptr [esp+0x10]
	add word ptr [esi+0x47C],bp
	mov dword ptr [esi+0x4A0],ebx
	mov dword ptr [esi+0x4A8],ebp
	fst qword ptr [esp+0x28]
	fmul qword ptr [edi+0x40]
	fiadd dword ptr [edi+0xC]
	call __ftol2_sse
	mov ecx,dword ptr [esi+0x718]
	push eax
	add ecx,0xC
	call TSecType<long>::SetData
	fld qword ptr [edi+0x48]
	mov edx,dword ptr [edi+0x10]
	fstp qword ptr [esp+0x10]
	lea ecx,[esi+0x4B0]
	mov dword ptr [esp+0x1C],edx
	call CRand32::Random
	fld qword ptr [esp+0x10]
	fmul qword ptr [esp+0x28]
	mov ecx,eax
	add word ptr [esi+0x4AC],bp
	mov eax,0x88888889
	fiadd dword ptr [esp+0x1C]
	mul ecx
	shr edx,5
	mov eax,edx
	shl eax,4
	sub eax,edx
	neg eax
	lea eax,[ecx+eax*4]
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esi+0x4D0],eax
	mov dword ptr [esi+0x4D8],ebp
	fild dword ptr [esp+0x1C]
	test eax,eax
	jge Block46

 Block45:
	fadd qword ptr [__real_41f0000000000000]

 Block46:
	faddp st(1),st(0)
	fsub qword ptr [__real_4049000000000000]
	call __ftol2_sse
	mov ecx,dword ptr [esi+0x718]
	push eax
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x71C]
	push ebp
	call TSecType<int>::SetData
	mov edi,dword ptr [esi+0x724]
	mov ecx,edi
	call TSecType<long>::GetData
	dec eax
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esi+0x4DC],ecx
	mov ecx,dword ptr [esi+0x718]
	add ecx,0xC
	mov dword ptr [esi+0x4E0],ebx
	call TSecType<long>::GetData
	push eax
	lea ecx,[esi+0x4E4]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esi+0x718]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esi+0x4F0]
	call TSecType<long>::SetData

 Block47:
	lea ecx,[esi+0x5BC]
	call TSecType<int>::GetData
	test eax,eax
	jne Block49

 Block48:
	push eax
	lea ecx,[esi+0x5D4]
	call TSecType<int>::SetData

 Block49:
	pop edi
	mov dword ptr [esi+0x650],ebp
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CVecCtrlMob::~CVecCtrlMob
_SUB_EXCEPTION_HANDLER(597240)
__SUB_CLASS_THIS0(00597240, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_597240
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
	int 3// TODO: 	mov dword ptr [esi],offset CVecCtrlMob::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CVecCtrlMob::`vftable'{for `IWzVector2D'}
	lea ecx,[esi+0x780]
	mov dword ptr [esp+0x14],0x23
	call ZArray<CVecCtrlMob::EscortDest>::RemoveAll
	mov eax,dword ptr [esi+0x748]
	mov byte ptr [esp+0x14],0x22
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block2:
	mov eax,dword ptr [esi+0x73C]
	mov byte ptr [esp+0x14],0x21
	test eax,eax
	je Block4

 Block3:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block4:
	mov eax,dword ptr [esi+0x730]
	mov byte ptr [esp+0x14],0x20
	test eax,eax
	je Block6

 Block5:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block6:
	lea ecx,[esi+0x6B4]
	mov byte ptr [esp+0x14],0x1F
	call CVecCtrlMob::MoveContext::~MoveContext
	mov eax,dword ptr [esi+0x6B0]
	mov byte ptr [esp+0x14],0x1E
	test eax,eax
	je Block8

 Block7:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block8:
	mov eax,dword ptr [esi+0x6A4]
	mov byte ptr [esp+0x14],0x1D
	test eax,eax
	je Block10

 Block9:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block10:
	mov eax,dword ptr [esi+0x698]
	mov byte ptr [esp+0x14],0x1C
	test eax,eax
	je Block12

 Block11:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block12:
	mov eax,dword ptr [esi+0x688]
	mov byte ptr [esp+0x14],0x1B
	test eax,eax
	je Block14

 Block13:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block14:
	mov eax,dword ptr [esi+0x67C]
	mov byte ptr [esp+0x14],0x1A
	test eax,eax
	je Block16

 Block15:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block16:
	mov eax,dword ptr [esi+0x66C]
	mov byte ptr [esp+0x14],0x19
	test eax,eax
	je Block18

 Block17:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block18:
	mov eax,dword ptr [esi+0x660]
	mov byte ptr [esp+0x14],0x18
	test eax,eax
	je Block20

 Block19:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block20:
	mov eax,dword ptr [esi+0x63C]
	mov byte ptr [esp+0x14],0x17
	test eax,eax
	je Block22

 Block21:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block22:
	mov eax,dword ptr [esi+0x630]
	mov byte ptr [esp+0x14],0x16
	test eax,eax
	je Block24

 Block23:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block24:
	mov eax,dword ptr [esi+0x624]
	mov byte ptr [esp+0x14],0x15
	test eax,eax
	je Block26

 Block25:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block26:
	mov eax,dword ptr [esi+0x618]
	mov byte ptr [esp+0x14],0x14
	test eax,eax
	je Block28

 Block27:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block28:
	mov eax,dword ptr [esi+0x60C]
	mov byte ptr [esp+0x14],0x13
	test eax,eax
	je Block30

 Block29:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block30:
	mov eax,dword ptr [esi+0x600]
	mov byte ptr [esp+0x14],0x12
	test eax,eax
	je Block32

 Block31:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block32:
	mov eax,dword ptr [esi+0x5F4]
	mov byte ptr [esp+0x14],0x11
	test eax,eax
	je Block34

 Block33:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block34:
	mov eax,dword ptr [esi+0x5E8]
	mov byte ptr [esp+0x14],0x10
	test eax,eax
	je Block36

 Block35:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block36:
	mov eax,dword ptr [esi+0x5DC]
	mov byte ptr [esp+0x14],0xF
	test eax,eax
	je Block38

 Block37:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block38:
	mov eax,dword ptr [esi+0x5D0]
	mov byte ptr [esp+0x14],0xE
	test eax,eax
	je Block40

 Block39:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block40:
	mov eax,dword ptr [esi+0x5C4]
	mov byte ptr [esp+0x14],0xD
	test eax,eax
	je Block42

 Block41:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block42:
	mov eax,dword ptr [esi+0x5B8]
	mov byte ptr [esp+0x14],0xC
	test eax,eax
	je Block44

 Block43:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block44:
	mov eax,dword ptr [esi+0x5AC]
	mov byte ptr [esp+0x14],0xB
	test eax,eax
	je Block46

 Block45:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block46:
	mov eax,dword ptr [esi+0x5A0]
	mov byte ptr [esp+0x14],0xA
	test eax,eax
	je Block48

 Block47:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block48:
	lea ecx,[esi+0x580]
	mov byte ptr [esp+0x14],9
	call SECPOINT::~SECPOINT
	lea ecx,[esi+0x504]
	mov byte ptr [esp+0x14],8
	call SECPOINT::~SECPOINT
	mov eax,dword ptr [esi+0x4F8]
	mov byte ptr [esp+0x14],7
	test eax,eax
	je Block50

 Block49:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block50:
	mov eax,dword ptr [esi+0x4EC]
	mov byte ptr [esp+0x14],6
	test eax,eax
	je Block52

 Block51:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block52:
	mov eax,dword ptr [esi+0x448]
	mov byte ptr [esp+0x14],5
	test eax,eax
	je Block54

 Block53:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block54:
	mov eax,dword ptr [esi+0x43C]
	mov byte ptr [esp+0x14],4
	test eax,eax
	je Block56

 Block55:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block56:
	mov eax,dword ptr [esi+0x430]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block58

 Block57:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block58:
	mov eax,dword ptr [esi+0x424]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block60

 Block59:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block60:
	mov eax,dword ptr [esi+0x318]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block62

 Block61:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block62:
	mov eax,dword ptr [esi+0x30C]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block64

 Block63:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block64:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CVecCtrl::~CVecCtrl
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CVecCtrlMob::IsCheatMobMoveRand
__SUB_CLASS_THIS0(0059CEB0, __thiscall, 79906,  CVecCtrlMob, int32_t) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	mov esi,ecx
	call CVecCtrlMob::IsCheatMobMoveRandImp
	lea ecx,[esi+0x5E0]
	mov edi,eax
	call TSecType<long>::GetData
	push 0
	push 0
	push 0
	push 0x5F
	mov dword ptr [esp+0x18],eax
	lea eax,[esp+0x18]
	push 4
	push eax
	call CCrc32::GetCrc32
	add esp,0x18
	push eax
	lea ecx,[esi+0x728]
	call TSecType<unsigned long>::SetData
	mov eax,edi
	pop edi
	pop esi
	pop ecx
	ret
}
}
// CVecCtrlMob::CtrlUpdateActiveStop
__SUB_CLASS_THIS0(0059B6A0, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	sub esp,0x18
	push ebx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x6FC]
	push edi
	call TSecType<long>::GetData
	test eax,eax
	jle Block2

 Block1:
	mov edi,dword ptr [esi+0x6FC]
	mov ecx,edi
	call TSecType<long>::GetData
	dec eax
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	pop edi
	mov dword ptr [esi+0x650],1
	pop esi
	pop ebx
	add esp,0x18
	ret

 Block2:
	cmp dword ptr [esi+0x300],0
	je Block20

 Block3:
	lea ecx,[esi+0x324]
	call CRand32::Random
	mov edi,eax
	mov eax,0x51EB851F
	mul edi
	shr edx,7
	mov ecx,2
	sub ecx,edx
	imul ecx,0x190
	inc word ptr [esi+0x320]
	add ecx,edi
	mov eax,0x6C16C16D
	mul ecx
	sub ecx,edx
	shr ecx,1
	add ecx,edx
	shr ecx,6
	push ecx
	mov ecx,dword ptr [esi+0x6FC]
	call TSecType<long>::SetData
	mov eax,dword ptr [esi+0x30]
	lea edi,[esi+0x20]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [esi+0x300]
	fstp qword ptr [esp+0x14]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	add esp,8
	lea eax,[esp+0x1C]
	push eax
	call edx
	fild dword ptr [eax]
	fcomp qword ptr [esp+0xC]
	fnstsw ax
	test ah,5
	mov eax,0xFFFFFFFF
	jnp Block5

 Block4:
	mov eax,1

 Block5:
	mov ebx,dword ptr [esi+0x1D8]
	mov ecx,dword ptr [esi+0x14]
	mov edx,dword ptr [ecx]
	push esi
	push ebx
	push 0
	push eax
	mov eax,dword ptr [edx+4]
	call eax
	lea ecx,[esi+0x304]
	mov dword ptr [esi+0x1D8],eax
	call TSecType<int>::GetData
	test eax,eax
	jne Block20

 Block6:
	mov ecx,dword ptr [esi+0x14]
	test ecx,ecx
	je Block17

 Block7:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push offset CMob::ms_RTTI_CMob
	call eax
	test eax,eax
	je Block17

 Block8:
	mov eax,dword ptr [esi+0x14]
	test eax,eax
	je Block17

 Block9:
	lea ebx,[eax-4]
	test ebx,ebx
	je Block17

 Block10:
	mov eax,dword ptr [ebx+0x174]
	test eax,eax
	je Block17

 Block11:
	cmp dword ptr [eax+0x218],0
	je Block17

 Block12:
	push 0
	push 0
	push 0
	push 0
	push 0
	mov ecx,ebx
	call CMob::IsTargetInAttackRange
	mov ecx,ebx
	mov edi,eax
	call CMob::IsDazzledMobByMe
	test eax,eax
	je Block15

 Block13:
	test edi,edi
	jne Block20

 Block14:
	push edi
	push edi
	push edi
	push edi
	push 1
	mov ecx,ebx
	call CMob::IsTargetInAttackRange
	jmp Block18

 Block15:
	test edi,edi
	jne Block20

 Block16:
	push edi
	push edi
	push edi
	push edi
	push 2
	mov ecx,ebx
	call CMob::IsTargetInAttackRange
	jmp Block18

 Block17:
	mov ecx,dword ptr [edi+0x28]
	push ecx
	lea edx,[edi+0x18]
	push edx
	mov dword ptr [esp+0x14],0xFFFFFC18
	mov dword ptr [esp+0x18],0xFFFFFDA8
	mov dword ptr [esp+0x1C],0x3E8
	mov dword ptr [esp+0x20],0x258
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	push eax
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	push eax
	lea ecx,[esp+0x14]
	push ecx
	call OffsetRect
	mov ecx,dword ptr [esi+0x300]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x1C]
	push eax
	call edx
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	push ecx
	push edx
	lea eax,[esp+0x14]
	push eax
	call PtInRect

 Block18:
	test eax,eax
	jne Block20

 Block19:
	push eax
	push eax
	push eax
	mov ecx,esi
	call CVecCtrlMob::ChaseTarget

 Block20:
	pop edi
	mov dword ptr [esi+0x650],1
	pop esi
	pop ebx
	add esp,0x18
	ret
}
}
// CVecCtrlMob::IsAbleToClimbLadderOrRope
__SUB_CLASS_THIS0(00596E50, __thiscall, 79906,  CVecCtrlMob, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x14],0
	je Block4

 Block1:
	mov ecx,dword ptr [esi+0x14]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push offset CMob::ms_RTTI_CMob
	call edx
	test eax,eax
	je Block4

 Block2:
	mov eax,dword ptr [esi+0x14]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFFC
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	cmp dword ptr [esi+0x2F8],6
	pop esi
	jne Block8

 Block6:
	mov ecx,dword ptr [eax+0x3E4]
	push ecx
	add eax,0x3DC
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jg Block8

 Block7:
	mov eax,1
	ret

 Block8:
	xor eax,eax
	ret
}
}
// CVecCtrlMob::MoveMobOnRightAngleX
__SUB_CLASS_THIS0(005970A0, __thiscall, 79894,  CVecCtrlMob, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x780]
	test eax,eax
	je Block7

 Block1:
	cmp dword ptr [eax-4],0
	je Block7

 Block2:
	cmp dword ptr [esi+0x300],0
	jne Block7

 Block3:
	cmp dword ptr [esi+0x770],0
	jne Block7

 Block4:
	fild dword ptr [esi+0x784]
	push edi
	lea edi,[esi+0x20]
	sub esp,8
	fadd qword ptr [__real_3fb999999999999a]
	mov ecx,edi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	lea ecx,[edi+0x30]
	fstp qword ptr [esp]
	mov dword ptr [edi+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x40],eax
	mov eax,dword ptr [esi+0x1A0]
	test eax,eax
	je Block6

 Block5:
	push eax
	push edi
	lea ecx,[esi+0x140]
	call RelPos::SetFromAbsPos

 Block6:
	push 0x20
	mov ecx,esi
	call CVecCtrl::SetMovePathAttribute
	pop edi

 Block7:
	pop esi
	ret
}
}
