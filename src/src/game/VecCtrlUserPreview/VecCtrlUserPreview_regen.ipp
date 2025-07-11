#include "regen.hpp"
// VecCtrlUserPreview.ipp
#include "VecCtrlUserPreview.hpp"

// CVecCtrlUserPreview::CreateInstance
_SUB_EXCEPTION_HANDLER(5A20B0)
__SUB0(005A20B0, __cdecl, 79769,  CVecCtrlUserPreview*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A20B0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	push 0x2F8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+4],eax
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CVecCtrlUserPreview::_ctor_default
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
// CVecCtrlUserPreview::EndUpdateActive
__SUB_CLASS_THIS0(005A2150, __thiscall, 79766,  CVecCtrlUserPreview, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x34
	push ebx
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x30]
	mov ebx,dword ptr [edi+0x274]
	lea esi,[edi+0x20]
	push eax
	push esi
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
	mov dword ptr [esp+0x38],eax
	fild dword ptr [esp+0x38]
	sub esp,8
	mov ecx,esi
	fst qword ptr [esp+0x40]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x38]
	mov dword ptr [esi+0x10],eax
	call __ftol2_sse
	mov word ptr [ebx+2],ax
	mov ecx,dword ptr [esi+0x28]
	push ecx
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcomp
	add esp,8
	fnstsw ax
	test ah,0x41
	jp Block5

 Block4:
	fadd qword ptr [__real_3fe0000000000000]
	jmp Block6

 Block5:
	fsub qword ptr [__real_3fdffffffeed1f41]

 Block6:
	call __ftol2_sse
	mov dword ptr [esp+0x38],eax
	fild dword ptr [esp+0x38]
	sub esp,8
	lea ecx,[esi+0x18]
	fst qword ptr [esp+0x40]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x38]
	mov dword ptr [esi+0x28],eax
	call __ftol2_sse
	mov word ptr [ebx+4],ax
	mov eax,dword ptr [esi+0x40]
	push eax
	lea ecx,[esi+0x30]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcomp
	add esp,8
	fnstsw ax
	test ah,0x41
	jp Block8

 Block7:
	fadd qword ptr [__real_3fe0000000000000]
	jmp Block9

 Block8:
	fsub qword ptr [__real_3fdffffffeed1f41]

 Block9:
	call __ftol2_sse
	mov dword ptr [esp+0x38],eax
	fild dword ptr [esp+0x38]
	sub esp,8
	lea ecx,[esi+0x30]
	fst qword ptr [esp+0x40]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x38]
	mov dword ptr [esi+0x40],eax
	call __ftol2_sse
	mov word ptr [ebx+6],ax
	mov edx,dword ptr [esi+0x58]
	push edx
	lea eax,[esi+0x48]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcomp
	add esp,8
	fnstsw ax
	test ah,0x41
	jp Block11

 Block10:
	fadd qword ptr [__real_3fe0000000000000]
	jmp Block12

 Block11:
	fsub qword ptr [__real_3fdffffffeed1f41]

 Block12:
	call __ftol2_sse
	mov dword ptr [esp+0x38],eax
	fild dword ptr [esp+0x38]
	sub esp,8
	lea ecx,[esi+0x48]
	fst qword ptr [esp+0x40]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x38]
	mov dword ptr [esi+0x58],eax
	call __ftol2_sse
	mov word ptr [ebx+8],ax
	mov eax,dword ptr [edi+0x1A0]
	test eax,eax
	je Block14

 Block13:
	push eax
	push esi
	lea ecx,[edi+0x140]
	call RelPos::SetFromAbsPos

 Block14:
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CVecCtrlUserPreview::WorkUpdateActiveLadderOrRope
__SUB_CLASS_THIS0(005A22F0, __thiscall, 79766,  CVecCtrlUserPreview, void) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x200],0
	je Block2

 Block1:
	call CVecCtrl::Jump
	mov eax,dword ptr [esi+0x1F0]
	push eax
	lea ecx,[esi+0x1E8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [TSingleton<CUserPreview>::ms_pInstance]
	add esp,8
	mov dword ptr [edx+0x3A00],eax

 Block2:
	cmp dword ptr [esi+0x220],0
	je Block4

 Block3:
	mov ecx,esi
	call CVecCtrl::Impact

 Block4:
	mov ecx,dword ptr [esi+0x1BC]
	lea eax,[esi+0x1B4]
	push ecx
	push eax
	mov dword ptr [esp+0x14],eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	mov ebx,eax
	add esp,8
	test ebx,ebx
	je Block14

 Block5:
	mov edx,dword ptr [esi+0x48]
	push ebp
	push edi
	lea edi,[esi+0x20]
	push edx
	lea eax,[edi+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x20]
	mov ecx,dword ptr [esi+0x1FC]
	push ecx
	lea ebp,[esi+0x1F4]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x20],eax
	fild dword ptr [esp+0x20]
	add esp,8
	lea ecx,[edi+0x18]
	fmul qword ptr [__real_4008000000000000]
	fadd qword ptr [esp+0x20]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x28],eax
	mov edx,dword ptr [esi+0x1FC]
	push edx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jge Block10

 Block6:
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
	jne Block10

 Block7:
	cmp dword ptr [ebx+8],0
	je Block9

 Block8:
	add ecx,0xFFFFFFFB
	mov dword ptr [esp+0x10],ecx
	fild dword ptr [esp+0x10]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	mov edx,dword ptr [esi]
	fstp st(0)
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0
	push 0
	mov ecx,esi
	call eax
	pop edi
	pop ebp
	pop esi
	pop ebx
	add esp,0x10
	ret

 Block9:
	mov ecx,dword ptr [esi+0x1BC]
	mov edx,dword ptr [esp+0x14]
	push ecx
	push edx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	fild dword ptr [eax+0x10]
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	pop edi
	fstp st(0)
	pop ebp
	pop esi
	pop ebx
	add esp,0x10
	ret

 Block10:
	mov eax,dword ptr [esi+0x1FC]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block13

 Block11:
	mov ecx,dword ptr [edi+0x28]
	push ecx
	lea edx,[edi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	mov ebx,dword ptr [ebx+0x14]
	mov dword ptr [esp+0x1C],ebx
	fild dword ptr [esp+0x1C]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jp Block13

 Block12:
	inc ebx
	mov dword ptr [esp+0x14],ebx
	fild dword ptr [esp+0x14]
	sub esp,8
	lea ecx,[edi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	push 0
	mov dword ptr [edi+0x28],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push 0
	push 0
	mov ecx,esi
	call edx

 Block13:
	pop edi
	pop ebp

 Block14:
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// CVecCtrlUserPreview::IsStun
__SUB_CLASS_THIS0(005A2080, __thiscall, 79772,  CVecCtrlUserPreview, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUserPreview>::ms_pInstance]
	mov eax,dword ptr [eax+0x3AEC]
	ret
}
}
// CVecCtrlUserPreview::CVecCtrlUserPreview
__SUB_CLASS_THIS0(005A2030, __thiscall, 79764,  CVecCtrlUserPreview, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CVecCtrl::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CVecCtrlUserPreview::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CVecCtrlUserPreview::`vftable'{for `IWzVector2D'}
	mov eax,esi
	pop esi
	ret
}
}
// CVecCtrlUserPreview::WorkUpdateActive
__SUB_CLASS_THIS(005A24B0, __thiscall, 79771,  CVecCtrlUserPreview, int32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x34
	push ebx
	push esi
	push edi
	mov ebx,ecx
	call CVecCtrlUserPreview::IsStun
	test eax,eax
	jne Block39

 Block1:
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov ecx,dword ptr [eax+4]
	xor edi,edi
	xor esi,esi
	mov dword ptr [esp+0x2C],ecx
	call GetFocus
	cmp eax,dword ptr [esp+0x2C]
	jne Block13

 Block2:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWnd::IsFocused
	test eax,eax
	je Block13

 Block3:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],esi
	jne Block13

 Block4:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block7

 Block5:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea edi,[esi+4]
	push offset CCashShop::ms_RTTI_CCashShop
	mov ecx,edi
	call eax
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CCashShop::ms_RTTI_CCashShop
	mov ecx,edi
	call eax
	mov edi,eax
	neg edi
	sbb edi,edi
	and edi,esi
	jmp Block8

 Block7:
	xor edi,edi

 Block8:
	mov eax,dword ptr [TSingleton<CUserPreview>::ms_pInstance]
	lea esi,[eax+0x88]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jg Block12

 Block9:
	test edi,edi
	je Block11

 Block10:
	mov ecx,edi
	call CCashShop::IsControlingUserPreview
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0x27
	mov edi,ecx
	call CInputSystem::IsKeyPressed
	mov esi,eax
	neg esi
	sbb esi,esi
	push 0x25
	mov ecx,edi
	neg esi
	call CInputSystem::IsKeyPressed
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	mov edi,eax
	neg edi
	sbb edi,edi
	add edi,esi
	push 0x28
	mov esi,ecx
	call CInputSystem::IsKeyPressed
	neg eax
	sbb eax,eax
	neg eax
	push 0x26
	mov ecx,esi
	mov dword ptr [esp+0x30],eax
	call CInputSystem::IsKeyPressed
	mov esi,eax
	neg esi
	sbb esi,esi
	add esi,dword ptr [esp+0x2C]
	jmp Block13

 Block12:
	mov ecx,esi
	xor edi,edi
	call CAvatar::GetOneTimeAction
	push eax
	call is_pronestab_action
	add esp,4
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi

 Block13:
	push esi
	push edi
	mov ecx,ebx
	call CVecCtrl::SetInput
	mov ecx,dword ptr [ebx+0x1BC]
	push ecx
	lea edi,[ebx+0x1B4]
	push edi
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	mov ecx,ebx
	test eax,eax
	je Block15

 Block14:
	call CVecCtrlUserPreview::WorkUpdateActiveLadderOrRope
	mov eax,1
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4

 Block15:
	mov edx,dword ptr [ebp+8]
	push edx
	call CVecCtrl::WorkUpdateActive
	cmp dword ptr [ebx+0x1A0],0
	jne Block23

 Block16:
	mov eax,dword ptr [ebx+0x78]
	lea esi,[ebx+0x20]
	push eax
	lea ecx,[esi+0x48]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block22

 Block17:
	mov edx,dword ptr [ebx+0x1BC]
	push edx
	push edi
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block22

 Block18:
	mov ecx,ebx
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	test eax,eax
	jge Block22

 Block19:
	mov ecx,ebx
	call CVecCtrlUserPreview::IsAbleToClimbLadderOrRope
	test eax,eax
	je Block22

 Block20:
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x38]
	mov ecx,dword ptr [ebx+0x90]
	lea edi,[ebx+0x80]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x48]
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	add esp,0x10
	mov ecx,esi
	mov dword ptr [esp+0x2C],edx
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
	mov ecx,edi
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
	mov edi,eax
	test edi,edi
	je Block22

 Block21:
	fldz
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vy
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)
	fild dword ptr [edi+0xC]
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	jmp Block38

 Block22:
	cmp dword ptr [ebx+0x1A0],0
	je Block39

 Block23:
	mov eax,dword ptr [ebx+0x1BC]
	push eax
	lea eax,[ebx+0x1B4]
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block30

 Block24:
	mov ecx,dword ptr [ebx+0x1FC]
	push ecx
	lea edx,[ebx+0x1F4]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jge Block30

 Block25:
	mov ecx,ebx
	call CVecCtrlUserPreview::IsAbleToClimbLadderOrRope
	test eax,eax
	je Block30

 Block26:
	mov eax,dword ptr [ebx+0x30]
	lea esi,[ebx+0x20]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov ecx,dword ptr [esi+0x10]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov edi,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	add esp,0x10
	mov ecx,esi
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
	mov ecx,esi
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
	mov ecx,edi
	call CWvsPhysicalSpace2D::GetLadderOrRope
	mov edi,eax
	test edi,edi
	je Block30

 Block27:
	fldz
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vy
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)
	fild dword ptr [edi+0xC]
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	mov ecx,esi
	fstp st(0)
	call AbsPos::_ZtlSecureGet_y
	call __ftol2_sse
	mov ecx,dword ptr [edi+0x14]
	cmp ecx,eax
	mov dword ptr [esp+0x2C],ecx
	jl Block29

 Block28:
	mov dword ptr [esp+0x2C],eax

 Block29:
	fild dword ptr [esp+0x2C]
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	mov edx,dword ptr [ebx]
	fstp st(0)
	mov eax,dword ptr [edx+0x14]
	push 0
	push edi
	push 0
	mov ecx,ebx
	call eax
	mov eax,1
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4

 Block30:
	cmp dword ptr [ebx+0x1A0],0
	je Block39

 Block31:
	mov ecx,dword ptr [ebx+0x1BC]
	push ecx
	lea eax,[ebx+0x1B4]
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block39

 Block32:
	mov edx,dword ptr [ebx+0x1FC]
	push edx
	lea eax,[ebx+0x1F4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block39

 Block33:
	mov ecx,ebx
	call CVecCtrlUserPreview::IsAbleToClimbLadderOrRope
	test eax,eax
	je Block39

 Block34:
	mov ecx,dword ptr [ebx+0x30]
	lea esi,[ebx+0x20]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov edx,dword ptr [esi+0x10]
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov edi,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	add esp,0x10
	mov ecx,esi
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
	mov ecx,esi
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
	call CWvsPhysicalSpace2D::GetLadderOrRope
	mov edi,eax
	test edi,edi
	je Block39

 Block35:
	mov ecx,esi
	call AbsPos::_ZtlSecureGet_y
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add esp,8
	cmp eax,dword ptr [edi+0x10]
	jg Block39

 Block36:
	mov ecx,esi
	call AbsPos::_ZtlSecureGet_y
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add eax,0xA
	add esp,8
	cmp dword ptr [edi+0x10],eax
	jg Block39

 Block37:
	fldz
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vy
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)
	fild dword ptr [edi+0xC]
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	fstp st(0)
	sub esp,8
	fild dword ptr [edi+0x10]
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y

 Block38:
	mov eax,dword ptr [ebx]
	fstp st(0)
	mov edx,dword ptr [eax+0x14]
	push 0
	push edi
	push 0
	mov ecx,ebx
	call edx

 Block39:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CVecCtrlUserPreview::BeginUpdateActive
__SUB_CLASS_THIS0(005A2070, __thiscall, 79770,  CVecCtrlUserPreview, long) {
__asm {

 Block0:
	jmp  CVecCtrl::BeginUpdateActive
}
}
// CVecCtrlUserPreview::IsAbleToClimbLadderOrRope
__SUB_CLASS_THIS0(005A2130, __thiscall, 79772,  CVecCtrlUserPreview, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CUserPreview>::ms_pInstance]
	add ecx,0x88
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setle cl
	mov eax,ecx
	ret
}
}
// CVecCtrlUserPreview::~CVecCtrlUserPreview
__SUB_CLASS_THIS0(005A2050, __thiscall, 79766,  CVecCtrlUserPreview, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CVecCtrlUserPreview::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [ecx+0xC],offset CVecCtrlUserPreview::`vftable'{for `IWzVector2D'}
	jmp  CVecCtrl::~CVecCtrl
}
}
