#include "regen.hpp"
// VecCtrlGrenade.ipp
#include "VecCtrlGrenade.hpp"

// CVecCtrlGrenade::~CVecCtrlGrenade
__SUB_CLASS_THIS0(00596650, __thiscall, 80032,  CVecCtrlGrenade, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CVecCtrlGrenade::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [ecx+0xC],offset CVecCtrlGrenade::`vftable'{for `IWzVector2D'}
	jmp  CVecCtrl::~CVecCtrl
}
}
// CVecCtrlGrenade::CVecCtrlGrenade
__SUB_CLASS_THIS0(00596610, __thiscall, 80030,  CVecCtrlGrenade, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CVecCtrl::_ctor_default
	xor eax,eax
	mov dword ptr [esi+0x2F8],eax
	mov dword ptr [esi+0x2FC],eax
	mov dword ptr [esi+0x300],eax
	mov dword ptr [esi+0x304],eax
	int 3// TODO: 	mov dword ptr [esi],offset CVecCtrlGrenade::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CVecCtrlGrenade::`vftable'{for `IWzVector2D'}
	mov eax,esi
	pop esi
	ret
}
}
// CVecCtrlGrenade::CalcFloat
__SUB_CLASS_THIS(00596830, __thiscall, 80038,  CVecCtrlGrenade, void, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x38
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x240]
	lea ecx,[eax+0xC]
	call TSecType<double>::GetData
	fstp qword ptr [esp+0x38]
	mov eax,dword ptr [edi+0x60]
	lea esi,[edi+0x20]
	push eax
	lea ecx,[esi+0x30]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x30]
	mov edx,dword ptr [esi+0x58]
	push edx
	lea eax,[esi+0x48]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	fild dword ptr [ebp+8]
	sub esp,0x10
	lea ecx,[esp+0x50]
	fdiv qword ptr [__real_408f400000000000]
	fst qword ptr [esp+0x40]
	fstp qword ptr [esp+0x18]
	fldz
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x58]
	fstp qword ptr [esp+8]
	fild dword ptr [edi+0x304]
	fstp qword ptr [esp]
	push ecx
	call DecSpeed
	fld qword ptr [esp+0x44]
	fstp qword ptr [esp+0x1C]
	add esp,4
	fldz
	lea edx,[esp+0x48]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x58]
	fstp qword ptr [esp+8]
	fild dword ptr [edi+0x300]
	fstp qword ptr [esp]
	push edx
	call DecSpeed
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x64]
	mov ecx,dword ptr [esi+0x40]
	push ecx
	lea edx,[esi+0x30]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [esp+0x5C]
	add esp,0x2C
	mov ecx,esi
	fmul qword ptr [__real_3fe0000000000000]
	fmul qword ptr [esp+0x28]
	fadd qword ptr [esp+0x40]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x10],eax
	mov eax,dword ptr [esi+0x28]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov edx,dword ptr [esi+0x58]
	push edx
	lea eax,[esi+0x48]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [esp+0x40]
	lea ecx,[esi+0x18]
	fmul qword ptr [__real_3fe0000000000000]
	fmul qword ptr [esp+0x30]
	fadd qword ptr [esp+0x48]
	add esp,8
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x28]
	sub esp,8
	lea ecx,[esi+0x30]
	fstp qword ptr [esp]
	mov dword ptr [esi+0x28],eax
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x30]
	sub esp,8
	lea ecx,[esi+0x48]
	fstp qword ptr [esp]
	mov dword ptr [esi+0x40],eax
	call _ZtlSecureTearHelper<double>::call
	pop edi
	mov dword ptr [esi+0x58],eax
	pop esi
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CVecCtrlGrenade::CreateInstance
_SUB_EXCEPTION_HANDLER(5967B0)
__SUB0(005967B0, __cdecl, 80034,  CVecCtrlGrenade*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5967B0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	push 0x308
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+4],eax
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CVecCtrlGrenade::_ctor_default
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
// CVecCtrlGrenade::WorkUpdateActive
__SUB_CLASS_THIS(00596670, __thiscall, 80037,  CVecCtrlGrenade, int32_t, long) {
__asm {

 Block0:
	sub esp,0x60
	push ebx
	mov ebx,ecx
	cmp dword ptr [ebx+0x220],0
	push esi
	je Block2

 Block1:
	call CVecCtrl::Impact

 Block2:
	cmp dword ptr [ebx+0x1A0],0
	jne Block14

 Block3:
	cmp dword ptr [ebx+0x2F8],0
	push ebp
	push edi
	lea ebp,[ebx+0x20]
	mov ecx,0x18
	mov esi,ebp
	lea edi,[esp+0x10]
	rep movsd
	mov ecx,dword ptr [esp+0x74]
	push ecx
	mov esi,1
	mov ecx,ebx
	je Block9

 Block4:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x44]
	call edx
	mov eax,dword ptr [ebp+0x10]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebx+0x1C8]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	je Block8

 Block5:
	mov ecx,dword ptr [ebp+0x10]
	push ecx
	push ebp
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebx+0x1D0]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jnp Block8

 Block6:
	mov edx,dword ptr [ebp+0x28]
	push edx
	lea eax,[ebp+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebx+0x1CC]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	je Block8

 Block7:
	mov ecx,ebp
	call AbsPos::_ZtlSecureGet_y
	fild dword ptr [ebx+0x1D4]
	fcompp
	fnstsw ax
	test ah,5
	jp Block10

 Block8:
	mov dword ptr [ebx+0x2FC],esi
	jmp Block10

 Block9:
	call CVecCtrl::CalcFloat

 Block10:
	push esi
	lea edx,[esp+0x78]
	push edx
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebx
	call CVecCtrl::CollisionDetectFloat
	pop edi
	test eax,eax
	mov eax,dword ptr [esp+0x70]
	pop ebp
	je Block13

 Block11:
	test eax,eax
	jle Block13

 Block12:
	mov dword ptr [ebx+0x2FC],esi

 Block13:
	mov edx,dword ptr [ebx]
	push eax
	mov eax,dword ptr [edx+0x18]
	mov ecx,ebx
	call eax
	mov eax,esi
	pop esi
	pop ebx
	add esp,0x60
	ret 4

 Block14:
	mov esi,1
	mov dword ptr [ebx+0x2FC],esi
	mov eax,esi
	pop esi
	pop ebx
	add esp,0x60
	ret 4
}
}
