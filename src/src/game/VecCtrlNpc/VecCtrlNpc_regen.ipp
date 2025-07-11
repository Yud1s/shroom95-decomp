#include "regen.hpp"
// VecCtrlNpc.ipp
#include "VecCtrlNpc.hpp"

// CVecCtrlNpc::SetActive
__SUB_CLASS_THIS(0059DDC0, __thiscall, 79869,  CVecCtrlNpc, void, int32_t, long, long, long, long, long, CStaticFoothold*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x14]
	push esi
	push eax
	mov eax,dword ptr [esp+0x18]
	mov esi,ecx
	mov ecx,dword ptr [esp+0x20]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push edx
	mov edx,dword ptr [esp+0x18]
	push eax
	mov eax,dword ptr [esp+0x18]
	push ecx
	push edx
	push eax
	mov ecx,esi
	call CVecCtrl::SetActive
	xor eax,eax
	mov dword ptr [esi+0x2FC],eax
	mov dword ptr [esi+0x300],eax
	mov dword ptr [esi+0x304],eax
	pop esi
	ret 0x1C
}
}
// CVecCtrlNpc::CreateInstance
_SUB_EXCEPTION_HANDLER(59DE70)
__SUB0(0059DE70, __cdecl, 79872,  CVecCtrlNpc*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_59DE70
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
	call CVecCtrlNpc::_ctor_default
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
// CVecCtrlNpc::CVecCtrlNpc
__SUB_CLASS_THIS0(0059DD40, __thiscall, 79864,  CVecCtrlNpc, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CVecCtrl::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CVecCtrlNpc::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CVecCtrlNpc::`vftable'{for `IWzVector2D'}
	mov eax,esi
	pop esi
	ret
}
}
// CVecCtrlNpc::Init
__SUB_CLASS_THIS(0059DD80, __thiscall, 79868,  CVecCtrlNpc, void, IVecCtrlOwner*, long, RANGE*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CVecCtrl::Init
	mov eax,dword ptr [esp+0x10]
	xor ecx,ecx
	cmp dword ptr [esp+0xC],1
	sete cl
	mov dword ptr [esi+0x2F8],ecx
	mov edx,dword ptr [eax]
	mov dword ptr [esi+0x1C8],edx
	mov eax,dword ptr [eax+4]
	mov dword ptr [esi+0x1D0],eax
	pop esi
	ret 0xC
}
}
// CVecCtrlNpc::UpdateActiveInterrupted
__SUB_CLASS_THIS(0059E020, __thiscall, 79870,  CVecCtrlNpc, void, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x74
	push ebx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x14]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0xC]
	push edi
	lea edx,[esp+0x30]
	push edx
	mov dword ptr [esp+0x2C],esi
	call eax
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov ecx,dword ptr [esp+0x34]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x34]
	test ecx,ecx
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov dword ptr [esp+0x34],0

 Block5:
	cmp dword ptr [esi+0x1A0],0
	je Block39

 Block6:
	fild dword ptr [ebp+0xC]
	lea ebx,[esi+0x140]
	sub esp,8
	lea ecx,[ebx+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x28],eax
	mov edx,dword ptr [esi+0x1A0]
	push edx
	lea ecx,[esi+0x20]
	push ebx
	call AbsPos::SetFromRelPos
	push 2
	mov ecx,esi
	call CVecCtrl::SetMovePathAttribute
	mov eax,dword ptr [ebp+8]
	test eax,eax
	jle Block39

 Block7:
	add edi,0xC
	mov dword ptr [esp+0x2C],edi
	jmp Block11

 Block10:
	mov eax,dword ptr [ebp+8]

 Block11:
	cmp eax,0x1E
	mov dword ptr [esp+0x24],0x1E
	jg Block13

 Block12:
	mov dword ptr [esp+0x24],eax

 Block13:
	sub eax,dword ptr [esp+0x24]
	mov ecx,0xC
	mov esi,ebx
	lea edi,[esp+0x50]
	rep movsd
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [ebp+8],eax
	call TSecType<double>::GetData
	mov eax,dword ptr [ebx+0x28]
	push eax
	fstp qword ptr [esp+0x3C]
	lea ecx,[ebx+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esp+0x2C]
	add esp,8
	fst qword ptr [esp+0x40]
	fdiv qword ptr [__real_408f400000000000]
	fldz
	fcom st(2)
	fnstsw ax
	test ah,5
	jp Block16

 Block14:
	fld qword ptr [_D_FDRAG]
	fdiv qword ptr [esp+0x38]
	fmulp st(2),st
	fxch st(2)
	fsubrp st(1),st(0)
	fcom
	fnstsw ax
	test ah,5
	jp Block18

 Block15:
	jmp Block20

 Block16:
	fstp st(0)
	fld qword ptr [__real_8000000000000000]
	fcom st(2)
	fnstsw ax
	test ah,0x41
	jne Block19

 Block17:
	fld qword ptr [_D_FDRAG]
	fdiv qword ptr [esp+0x38]
	fmulp st(2),st
	fxch
	faddp st(2),st
	fcom
	fnstsw ax
	test ah,5
	jp Block20

 Block18:
	fstp st(1)
	jmp Block21

 Block19:
	fstp st(1)

 Block20:
	fstp st(0)

 Block21:
	sub esp,8
	lea ecx,[ebx+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x28],eax
	mov edx,dword ptr [ebx+0x10]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x50]
	mov eax,dword ptr [ebx+0x28]
	push eax
	lea ecx,[ebx+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x48]
	mov edx,dword ptr [esp+0x88]
	push edx
	lea eax,[esp+0x7C]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [esp+0x50]
	add esp,0x10
	mov ecx,ebx
	fmul qword ptr [__real_3fe0000000000000]
	fmul qword ptr [esp+0x48]
	fdiv qword ptr [__real_408f400000000000]
	fadd qword ptr [esp+0x50]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov ecx,eax
	push ecx
	push ebx
	mov dword ptr [ebx+0x10],eax
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcom
	add esp,8
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block29

 Block22:
	mov esi,dword ptr [esp+0x28]
	mov edx,dword ptr [esi+0x1A0]
	mov eax,dword ptr [edx+0x64]
	test eax,eax
	je Block28

 Block23:
	fcom qword ptr [eax+0x40]
	fnstsw ax
	test ah,5
	jp Block28

 Block24:
	mov eax,dword ptr [ebx+0x10]
	fstp st(0)
	push eax
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [esi+0x1A0]
	mov edx,dword ptr [ecx+0x64]
	fadd qword ptr [edx+0x50]
	mov ecx,ebx
	fst qword ptr [esp+0x50]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	mov dword ptr [ebx+0x10],eax
	fcom qword ptr [esp+0x48]
	fnstsw ax
	test ah,0x41
	jne Block26

 Block25:
	sub esp,8
	mov ecx,ebx
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x10],eax
	jmp Block27

 Block26:
	fstp st(0)

 Block27:
	mov eax,dword ptr [esi+0x1A0]
	mov ecx,dword ptr [eax+0x64]
	push ecx
	push ebx
	lea ecx,[esi+0x20]
	call AbsPos::SetFromRelPos
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi+0x1A0]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x14]
	push eax
	mov eax,dword ptr [ecx+0x64]
	push 0
	push eax
	mov ecx,esi
	call edx
	jmp Block38

 Block28:
	sub esp,8
	mov ecx,ebx
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[ebx+0x18]
	mov dword ptr [ebx+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x28],eax
	jmp Block37

 Block29:
	mov eax,dword ptr [ebx+0x10]
	fstp st(0)
	push eax
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [esp+0x30]
	mov ecx,dword ptr [ecx+0x1A0]
	fcomp qword ptr [ecx+0x50]
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block36

 Block30:
	mov eax,dword ptr [ecx+0x68]
	test eax,eax
	je Block35

 Block31:
	fldz
	fcomp qword ptr [eax+0x40]
	fnstsw ax
	test ah,5
	jp Block35

 Block32:
	mov edx,dword ptr [ebx+0x10]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	mov esi,dword ptr [esp+0x30]
	mov eax,dword ptr [esi+0x1A0]
	fsub qword ptr [eax+0x50]
	mov ecx,ebx
	fst qword ptr [esp+0x50]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x10],eax
	mov ecx,dword ptr [esi+0x1A0]
	mov ecx,dword ptr [ecx+0x68]
	fld qword ptr [ecx+0x50]
	fcomp qword ptr [esp+0x48]
	fnstsw ax
	test ah,5
	jp Block34

 Block33:
	fld qword ptr [ecx+0x50]
	sub esp,8
	mov ecx,ebx
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x10],eax

 Block34:
	mov edx,dword ptr [esi+0x1A0]
	mov eax,dword ptr [edx+0x68]
	push eax
	push ebx
	lea ecx,[esi+0x20]
	call AbsPos::SetFromRelPos
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi+0x1A0]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x14]
	push eax
	mov eax,dword ptr [ecx+0x68]
	push 0
	push eax
	mov ecx,esi
	call edx
	jmp Block38

 Block35:
	fld qword ptr [ecx+0x50]
	sub esp,8
	mov ecx,ebx
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[ebx+0x18]
	mov dword ptr [ebx+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x28],eax

 Block36:
	mov esi,dword ptr [esp+0x28]

 Block37:
	mov eax,dword ptr [esi+0x1A0]
	push eax
	push ebx
	lea ecx,[esi+0x20]
	call AbsPos::SetFromRelPos
	mov edx,dword ptr [esi]
	mov eax,dword ptr [esp+0x24]
	mov edx,dword ptr [edx+0x18]
	push eax
	mov ecx,esi
	call edx

 Block38:
	cmp dword ptr [ebp+8],0
	jg Block10

 Block39:
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CVecCtrlNpc::~CVecCtrlNpc
__SUB_CLASS_THIS0(0059DD60, __thiscall, 79866,  CVecCtrlNpc, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CVecCtrlNpc::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [ecx+0xC],offset CVecCtrlNpc::`vftable'{for `IWzVector2D'}
	jmp  CVecCtrl::~CVecCtrl
}
}
// CVecCtrlNpc::WorkUpdateActive
__SUB_CLASS_THIS(0059DEF0, __thiscall, 79875,  CVecCtrlNpc, int32_t, long) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x300],0
	jg Block7

 Block1:
	call _rand
	cdq
	mov ecx,5
	idiv ecx
	test edx,edx
	je Block3

 Block2:
	call _rand
	cdq
	mov ecx,0x7D0
	idiv ecx
	mov eax,0xB60B60B7
	mov dword ptr [esi+0x2FC],0
	mov ecx,edx
	add ecx,0x3E8
	imul ecx
	add edx,ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [esi+0x300],eax
	jmp Block6

 Block3:
	call _rand
	cdq
	mov ecx,0x3E8
	idiv ecx
	mov eax,0xB60B60B7
	mov ecx,edx
	add ecx,0x1F4
	imul ecx
	add edx,ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [esi+0x300],eax
	call _rand
	and eax,0x80000001
	jns Block5

 Block4:
	dec eax
	or eax,0xFFFFFFFE
	inc eax

 Block5:
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFFE
	inc eax
	mov dword ptr [esi+0x2FC],eax

 Block6:
	mov ecx,dword ptr [esi+0x2FC]
	push 0
	push ecx
	mov ecx,esi
	call CVecCtrl::SetInput

 Block7:
	mov edx,dword ptr [esp+0x10]
	dec dword ptr [esi+0x300]
	push edx
	mov ecx,esi
	call CVecCtrl::WorkUpdateActive
	cmp dword ptr [esi+0x2FC],0
	je Block10

 Block8:
	mov ecx,dword ptr [esi+0x30]
	lea eax,[esi+0x20]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0xC]
	mov edx,dword ptr [esi+0x90]
	lea eax,[esi+0x80]
	push edx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [esp+0x14]
	add esp,0x10
	fnstsw ax
	test ah,0x44
	jp Block10

 Block9:
	mov eax,dword ptr [esi+0x2FC]
	neg eax
	push 0
	push eax
	mov ecx,esi
	mov dword ptr [esi+0x2FC],eax
	call CVecCtrl::SetInput

 Block10:
	mov eax,1
	pop esi
	add esp,8
	ret 4
}
}
// CVecCtrlNpc::BeginUpdateActive
__SUB_CLASS_THIS0(0059DE10, __thiscall, 79874,  CVecCtrlNpc, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CVecCtrl::BeginUpdateActive
	test eax,eax
	jne Block2

 Block1:
	xor eax,eax
	pop esi
	ret

 Block2:
	cmp dword ptr [esi+0x2F8],0
	je Block1

 Block3:
	add dword ptr [esi+0x304],eax
	mov eax,dword ptr [esi+0x304]
	cmp eax,0x5A
	jl Block1

 Block4:
	add eax,0xFFFFFFA6
	mov dword ptr [esi+0x304],eax
	mov eax,0x5A
	pop esi
	ret
}
}
