#include "regen.hpp"
// VecCtrl.ipp
#include "VecCtrl.hpp"

// AbsPos::_ZtlSecurePut_x
__SUB_CLASS(00590B80, __fastcall, 23409,  AbsPos, double, double) {
__asm {

 Block0:
	fld qword ptr [esp+4]
	push esi
	sub esp,8
	fstp qword ptr [esp]
	mov esi,ecx
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+8]
	mov dword ptr [esi+0x10],eax
	pop esi
	ret 8
}
}
// CVecCtrl::DetachFromFoothold
__SUB_CLASS_THIS0(00590D90, __thiscall, 23263,  CVecCtrl, void) {
__asm {

 Block0:
	sub esp,0xC
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x1A0]
	test eax,eax
	je Block10

 Block1:
	fld qword ptr [eax+0x50]
	mov eax,dword ptr [edi+0x150]
	push ebx
	fstp qword ptr [esp+0xC]
	lea ebx,[edi+0x140]
	push esi
	push eax
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcom
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block3

 Block2:
	fstp st(1)
	jmp Block6

 Block3:
	fstp st(0)
	fld qword ptr [esp+0x10]
	fcom
	fnstsw ax
	test ah,5
	jp Block5

 Block4:
	fstp st(1)
	jmp Block6

 Block5:
	fstp st(0)

 Block6:
	sub esp,8
	mov ecx,ebx
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x10],eax
	mov ecx,dword ptr [edi+0x1A0]
	push ecx
	lea esi,[edi+0x20]
	push ebx
	mov ecx,esi
	call AbsPos::SetFromRelPos
	mov eax,dword ptr [edi+0x1A0]
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [eax+0x14]
	mov eax,dword ptr [eax+0xC]
	push ecx
	push esi
	mov dword ptr [esp+0x18],edx
	mov dword ptr [esp+0x14],eax
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esp+0x14]
	fild dword ptr [esp+0x18]
	add esp,8
	fxch st(2)
	fcom
	fnstsw ax
	test ah,5
	jp Block11

 Block7:
	fstp st(0)

 Block8:
	fstp st(1)

 Block9:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x10],eax
	mov edx,dword ptr [esi+0x28]
	push edx
	lea eax,[esi+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [__real_3ff0000000000000]
	fstp qword ptr [esp]
	call _floor
	lea ecx,[esi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	push 0
	mov dword ptr [esi+0x28],eax
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0
	mov ecx,edi
	call eax
	pop esi
	pop ebx

 Block10:
	pop edi
	add esp,0xC
	ret

 Block11:
	fstp st(1)
	fcom
	fnstsw ax
	test ah,0x41
	jne Block8

 Block12:
	fstp st(0)
	jmp Block9
}
}
// AbsPos::_ZtlSecureGet_vy
__SUB_CLASS0(0012A620, __fastcall, 23407,  AbsPos, double) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x58]
	push eax
	add ecx,0x48
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	ret
}
}
// CVecCtrl::Init
__SUB_CLASS_THIS(00590A00, __thiscall, 23267,  CVecCtrl, void, IVecCtrlOwner*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x14],eax
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov edx,dword ptr [eax+0x24]
	add eax,0x24
	add ecx,0x1C8
	mov dword ptr [ecx],edx
	mov edx,dword ptr [eax+4]
	mov dword ptr [ecx+4],edx
	mov edx,dword ptr [eax+8]
	mov dword ptr [ecx+8],edx
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [ecx+0xC],eax
	ret 4
}
}
// CVecCtrl::CollisionDetectFloat
_SUB_EXCEPTION_HANDLER(594740)
__SUB_CLASS_THIS(00594740, __thiscall, 23288,  CVecCtrl, int32_t, const AbsPos&, long&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_594740
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB4]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [esp+0xC8]
	mov ecx,dword ptr [eax]
	mov esi,dword ptr [esp+0xC4]
	push ecx
	push esi
	mov ecx,edi
	call CVecCtrl::BoundPosMapRange_0
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov dword ptr [esp+0x60],eax
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	mov dword ptr [esp+0x94],edx
	lea ebp,[edi+0x20]
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcomp
	add esp,8
	fnstsw ax
	test ah,0x41
	jp Block2

 Block1:
	fadd qword ptr [__real_3fe0000000000000]
	call __ftol2_sse
	mov ebx,eax
	mov dword ptr [esp+0x28],ebx
	jmp Block3

 Block2:
	fsub qword ptr [__real_3fdffffffeed1f41]
	call __ftol2_sse
	mov ebx,eax
	mov dword ptr [esp+0x28],eax

 Block3:
	mov ecx,dword ptr [esi+0x28]
	push ecx
	add esi,0x18
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcomp
	add esp,8
	fnstsw ax
	test ah,0x41
	jp Block5

 Block4:
	fadd qword ptr [__real_3fe0000000000000]
	call __ftol2_sse
	mov edi,eax
	mov dword ptr [esp+0x3C],edi
	jmp Block6

 Block5:
	fsub qword ptr [__real_3fdffffffeed1f41]
	call __ftol2_sse
	mov edi,eax
	mov dword ptr [esp+0x3C],eax

 Block6:
	mov edx,dword ptr [ebp+0x10]
	push edx
	push ebp
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcomp
	add esp,8
	fnstsw ax
	test ah,0x41
	jp Block8

 Block7:
	fadd qword ptr [__real_3fe0000000000000]
	call __ftol2_sse
	mov esi,eax
	mov dword ptr [esp+0x54],esi
	jmp Block9

 Block8:
	fsub qword ptr [__real_3fdffffffeed1f41]
	call __ftol2_sse
	mov esi,eax
	mov dword ptr [esp+0x54],eax

 Block9:
	mov eax,dword ptr [ebp+0x28]
	push eax
	add ebp,0x18
	push ebp
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
	mov ecx,esi
	sub ecx,ebx
	mov edx,eax
	sub edx,edi
	xor ebp,ebp
	mov dword ptr [esp+0x74],eax
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x58],ecx
	mov dword ptr [esp+0x80],edx
	mov dword ptr [esp+0x94],edx
	cmp ecx,ebp
	jne Block15

 Block13:
	cmp edx,ebp
	jne Block15

 Block14:
	mov edx,dword ptr [esp+0x60]
	mov eax,dword ptr [esp+0xC8]
	sub dword ptr [eax],edx
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x18]
	call edx
	jmp Block83

 Block15:
	mov dword ptr [esp+0x30],1
	mov dword ptr [esp+0x6C],2
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x78],ebp
	mov dword ptr [esp+0xA0],0
	mov dword ptr [esp+0xA8],ebp
	mov dword ptr [esp+0xAC],ebp
	mov dword ptr [esp+0xB0],ebp
	lea ecx,[esp+0xA0]
	push ecx
	mov ecx,dword ptr [esp+0x90]
	push eax
	push esi
	push edi
	push ebx
	mov dword ptr [esp+0xD0],ebp
	call CWvsPhysicalSpace2D::GetCrossCandidate
	mov eax,dword ptr [esp+0xAC]
	mov dword ptr [esp+0x90],eax
	cmp eax,ebp
	je Block82

 Block16:
	lea edx,[esp+0x90]
	push edx
	call ZList<ZRef<CStaticFoothold>>::GetNext
	mov edi,dword ptr [esp+0x18]
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [edi+0x1B0]
	add esp,4
	test eax,eax
	je Block18

 Block17:
	cmp eax,esi
	jne Block62

 Block18:
	cmp eax,esi
	jne Block21

 Block19:
	mov eax,dword ptr [edi+0x78]
	push eax
	lea ecx,[edi+0x68]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block21

 Block20:
	mov dword ptr [esp+0x78],1

 Block21:
	fld qword ptr [esi+0x40]
	fldz
	fcompp
	fnstsw ax
	test ah,1
	jne Block27

 Block22:
	mov eax,dword ptr [esi+0x30]
	mov edx,dword ptr [esp+0x8C]
	cmp eax,dword ptr [edx+0x40]
	je Block27

 Block23:
	cmp eax,dword ptr [edi+0x1C4]
	je Block27

 Block24:
	mov ecx,dword ptr [edi+0x14]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	call edx
	cmp eax,7
	jne Block62

 Block25:
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax+0x1A4]
	test eax,eax
	je Block27

 Block26:
	mov eax,dword ptr [eax+0x2C]
	cmp eax,dword ptr [esi+0x2C]
	jne Block62

 Block27:
	cmp dword ptr [esi+0x5C],0
	je Block62

 Block28:
	mov ebx,dword ptr [esi+0xC]
	mov edx,dword ptr [esi+0x14]
	mov edi,dword ptr [esi+0x10]
	mov ecx,dword ptr [esi+0x18]
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x70],ebx
	mov dword ptr [esp+0x68],edx
	sub edx,ebx
	neg ebx
	lea ebp,[ebx+eax]
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x64],ecx
	sub ecx,edi
	imul ebp,ecx
	mov dword ptr [esp+0x7C],edi
	neg edi
	add eax,edi
	imul eax,edx
	sub eax,ebp
	mov ebp,dword ptr [esp+0x54]
	add ebx,ebp
	mov ebp,dword ptr [esp+0x74]
	imul ebx,ecx
	mov dword ptr [esp+0x88],ecx
	lea ecx,[edi+ebp]
	imul ecx,edx
	sub ecx,ebx
	mov dword ptr [esp+0x5C],edx
	test eax,eax
	jg Block61

 Block29:
	test ecx,ecx
	jl Block61

 Block30:
	test eax,eax
	jne Block32

 Block31:
	test ecx,ecx
	je Block61

 Block32:
	mov ebx,dword ptr [esp+0x70]
	sub ebx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x3C]
	mov edi,dword ptr [esp+0x7C]
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x80]
	imul ebx,ecx
	sub edi,edx
	imul edi,eax
	sub edi,ebx
	mov ebx,dword ptr [esp+0x68]
	sub ebx,dword ptr [esp+0x28]
	imul ebx,ecx
	mov dword ptr [esp+0x2C],ebx
	mov ebx,dword ptr [esp+0x64]
	sub ebx,edx
	imul ebx,eax
	mov eax,dword ptr [esp+0x2C]
	sub ebx,eax
	test edi,edi
	jge Block35

 Block33:
	test ebx,ebx
	jl Block61

 Block34:
	test edi,edi

 Block35:
	jle Block37

 Block36:
	test ebx,ebx
	jg Block61

 Block37:
	mov eax,dword ptr [esp+0x14]
	cmp dword ptr [eax+0x1B0],esi
	jne Block47

 Block38:
	mov ecx,dword ptr [eax+0x78]
	add eax,0x20
	push ecx
	add eax,0x48
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block47

 Block39:
	mov dword ptr [esp+0x78],0

 Block40:
	mov dword ptr [esp+0x2C],esi

 Block41:
	mov dword ptr [esp+0x50],esi

 Block42:
	mov ebp,dword ptr [esp+0x88]
	mov edi,dword ptr [esp+0x5C]
	imul edi,dword ptr [esp+0x94]
	mov esi,dword ptr [esp+0x64]
	imul esi,dword ptr [esp+0x70]
	mov ebx,ebp
	imul ebp,dword ptr [esp+0x28]
	imul ebx,dword ptr [esp+0x58]
	mov eax,ebx
	sub eax,edi
	cdq
	mov ecx,eax
	mov eax,dword ptr [esp+0x5C]
	imul eax,dword ptr [esp+0x3C]
	xor ecx,edx
	sub ecx,edx
	mov edx,dword ptr [esp+0x68]
	imul edx,dword ptr [esp+0x7C]
	sub eax,ebp
	sub eax,edx
	add eax,esi
	mov dword ptr [esp+0x68],edx
	cdq
	mov dword ptr [esp+0x64],esi
	mov esi,eax
	xor esi,edx
	sub esi,edx
	mov eax,ecx
	imul dword ptr [esp+0x6C]
	mov ebp,eax
	mov eax,esi
	imul eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x38],edx
	cdq
	sub ebp,eax
	mov eax,dword ptr [esp+0x38]
	sbb eax,edx
	js Block56

 Block43:
	jg Block45

 Block44:
	test ebp,ebp
	jbe Block56

 Block45:
	mov edx,dword ptr [esp+0x54]
	imul edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esp+0x74]
	imul eax,dword ptr [esp+0x28]
	sub eax,edx
	imul dword ptr [esp+0x5C]
	mov dword ptr [esp+0x30],ecx
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr [esp+0x20],ecx
	mov ecx,eax
	mov eax,dword ptr [esp+0x68]
	sub eax,dword ptr [esp+0x64]
	mov ebp,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x6C],esi
	mov esi,edx
	imul dword ptr [esp+0x58]
	add ecx,eax
	adc esi,edx
	mov eax,edi
	sub eax,ebx
	cdq
	push edx
	push eax
	push esi
	push ecx
	mov dword ptr [esp+0x34],ebp
	call __alldiv
	cmp dword ptr [esp+0x58],0
	mov dword ptr [esp+0x48],eax
	mov dword ptr [esp+0x4C],edx
	fild qword ptr [esp+0x48]
	fst qword ptr [esp+0x40]
	je Block55

 Block46:
	fisub dword ptr [esp+0x28]
	fimul dword ptr [esp+0x94]
	fidiv dword ptr [esp+0x58]
	fiadd dword ptr [esp+0x3C]
	fstp qword ptr [esp+0x98]
	jmp Block62

 Block47:
	test edi,edi
	jne Block51

 Block48:
	mov edi,dword ptr [esi+0x64]
	test edi,edi
	je Block61

 Block49:
	mov edx,dword ptr [esp+0x54]
	push ebp
	push edx
	push esi
	push edi
	call is_blocked_area
	add esp,0x10
	test eax,eax
	je Block61

 Block50:
	mov dword ptr [esp+0x2C],edi
	jmp Block41

 Block51:
	test ebx,ebx
	jne Block40

 Block52:
	mov edi,dword ptr [esi+0x68]
	test edi,edi
	je Block61

 Block53:
	mov eax,dword ptr [esp+0x54]
	push ebp
	push eax
	push edi
	push esi
	call is_blocked_area
	add esp,0x10
	test eax,eax
	je Block61

 Block54:
	mov dword ptr [esp+0x50],edi
	mov dword ptr [esp+0x2C],esi
	jmp Block42

 Block55:
	fisub dword ptr [esp+0x70]
	fimul dword ptr [esp+0x88]
	fidiv dword ptr [esp+0x5C]
	fiadd dword ptr [esp+0x7C]
	fstp qword ptr [esp+0x98]
	jmp Block62

 Block56:
	or ebp,eax
	jne Block61

 Block57:
	mov esi,dword ptr [esp+0x50]
	mov ecx,dword ptr [esi+0x10]
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [esi+0xC]
	mov edi,dword ptr [eax+0x18]
	mov ebx,dword ptr [eax+0x14]
	mov ebp,dword ptr [eax+0x10]
	mov eax,dword ptr [eax+0xC]
	push ecx
	push edx
	push edi
	push ebx
	push ebp
	push eax
	call get_cross_product
	add esp,0x18
	test eax,eax
	jge Block59

 Block58:
	mov dword ptr [esp+0x20],esi

 Block59:
	mov esi,dword ptr [esp+0x2C]
	mov eax,dword ptr [esi+0x18]
	mov ebp,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi+0x14]
	mov edx,dword ptr [ebp+0x18]
	mov edi,dword ptr [ebp+0x14]
	mov ebx,dword ptr [ebp+0xC]
	push eax
	mov eax,dword ptr [ebp+0x10]
	push ecx
	push edx
	push edi
	push eax
	push ebx
	call get_cross_product
	add esp,0x18
	test eax,eax
	jge Block62

 Block60:
	mov ebp,esi
	mov dword ptr [esp+0x24],ebp
	jmp Block62

 Block61:
	mov ebp,dword ptr [esp+0x24]

 Block62:
	cmp dword ptr [esp+0x90],0
	jne Block16

 Block63:
	cmp dword ptr [esp+0x20],0
	je Block102

 Block64:
	test ebp,ebp
	je Block102

 Block65:
	fild dword ptr [esp+0x6C]
	fidiv dword ptr [esp+0x30]
	fst qword ptr [esp+0x48]
	fimul dword ptr [esp+0x60]
	call __ftol2_sse
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [esp+0xC4]
	mov edx,dword ptr [eax+0x40]
	lea esi,[eax+0x30]
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edi+0x60]
	lea ebx,[edi+0x20]
	lea eax,[ebx+0x30]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x44]
	mov edx,dword ptr [esp+0xD4]
	mov eax,dword ptr [edx+0x40]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x4C]
	mov eax,dword ptr [esp+0xDC]
	mov ecx,dword ptr [eax+0x58]
	fmul qword ptr [esp+0x60]
	lea esi,[eax+0x48]
	push ecx
	push esi
	fadd qword ptr [esp+0x38]
	fstp qword ptr [esp+0x38]
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [ebx+0x58]
	fstp qword ptr [esp+0xA0]
	lea eax,[ebx+0x48]
	push edx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x5C]
	mov eax,dword ptr [esp+0xEC]
	mov ecx,dword ptr [eax+0x58]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x64]
	mov edx,dword ptr [edi+0x168]
	lea esi,[edi+0x140]
	fmul qword ptr [esp+0x78]
	push edx
	lea eax,[esi+0x18]
	push eax
	fadd qword ptr [esp+0xB8]
	fstp qword ptr [esp+0x80]
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [esp+0x58]
	fstp qword ptr [esp+0x6C]
	add esp,0x38
	cmp ecx,ebp
	jne Block67

 Block66:
	mov edi,ecx
	fld qword ptr [edi+0x40]
	sub esp,8
	fld qword ptr [edi+0x48]
	lea ecx,[esi+0x18]
	fmul qword ptr [esp+0x50]
	fxch
	fmul qword ptr [esp+0x20]
	faddp st(1),st(0)
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x28],eax
	jmp Block79

 Block67:
	fld qword ptr [ecx+0x40]
	fld qword ptr [ecx+0x48]
	fld qword ptr [esp+0x48]
	fmul st(1),st
	fld qword ptr [esp+0x18]
	fmul st(3),st
	fxch st(2)
	faddp st(3),st
	fld qword ptr [ebp+0x40]
	fld qword ptr [ebp+0x48]
	fmulp st(2),st
	fmulp st(2),st
	faddp st(1),st(0)
	fld qword ptr [__real_3f50624dd2f1a9fc]
	fcom st(2)
	fnstsw ax
	test ah,5
	jp Block70

 Block68:
	fcomp
	fnstsw ax
	test ah,5
	jp Block71

 Block69:
	mov edi,dword ptr [esp+0x20]
	fstp st(0)
	jmp Block78

 Block70:
	fstp st(0)

 Block71:
	fld qword ptr [__real_bf50624dd2f1a9fc]
	fcom st(2)
	fnstsw ax
	fstp st(2)
	test ah,0x41
	jne Block74

 Block72:
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block75

 Block73:
	mov edi,ebp
	jmp Block78

 Block74:
	fstp st(0)

 Block75:
	mov eax,dword ptr [ecx+0xC]
	fstp st(0)
	cmp eax,dword ptr [ecx+0x14]
	mov edi,ebp
	jge Block77

 Block76:
	mov edi,dword ptr [esp+0x20]

 Block77:
	fldz

 Block78:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_v
	fstp st(0)

 Block79:
	mov ebp,dword ptr [esp+0x14]
	mov eax,dword ptr [ebp+0x1A8]
	test eax,eax
	je Block85

 Block80:
	cmp eax,edi
	jne Block85

 Block81:
	fld qword ptr [esp+0x34]
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_v
	fstp st(0)

 Block82:
	mov edx,dword ptr [esp+0x60]
	mov eax,dword ptr [esp+0xC8]
	sub dword ptr [eax],edx
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x18]
	call edx
	lea ecx,[esp+0xA0]
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	mov dword ptr [esp+0xA0], 0
	call ZList<ZRef<CStaticFoothold>>::RemoveAll

 Block83:
	xor eax,eax

 Block84:
	mov ecx,dword ptr [esp+0xB4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xAC
	ret 0xC

 Block85:
	mov eax,dword ptr [esp+0xC8]
	mov ecx,dword ptr [esp+0x30]
	sub dword ptr [eax],ecx
	fld qword ptr [edi+0x40]
	fabs
	fcomp qword ptr [__real_3fe0000000000000]
	fnstsw ax
	test ah,0x41
	jne Block87

 Block86:
	mov edx,dword ptr [edi+0xC]
	fld qword ptr [edi+0x40]
	mov dword ptr [esp+0x18],edx
	fild dword ptr [esp+0x18]
	fsubr qword ptr [esp+0x40]
	jmp Block88

 Block87:
	mov eax,dword ptr [edi+0x10]
	fld qword ptr [edi+0x48]
	mov dword ptr [esp+0x18],eax
	fild dword ptr [esp+0x18]
	fsubr qword ptr [esp+0x98]

 Block88:
	fdivrp st(1),st(0)
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov ecx,eax
	mov dword ptr [esi+0x10],eax
	fld qword ptr [edi+0x50]
	push ecx
	fstp qword ptr [esp+0x44]
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcom
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block90

 Block89:
	fstp st(1)
	jmp Block93

 Block90:
	fstp st(0)
	fld qword ptr [esp+0x40]
	fcom
	fnstsw ax
	test ah,5
	jp Block92

 Block91:
	fstp st(1)
	jmp Block93

 Block92:
	fstp st(0)

 Block93:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x10],eax
	fld qword ptr [edi+0x40]
	fldz
	fcompp
	fnstsw ax
	test ah,1
	jne Block97

 Block94:
	cmp dword ptr [esp+0xCC],0
	je Block96

 Block95:
	mov edx,dword ptr [ebx+0x40]
	push edx
	lea ebp,[ebx+0x30]
	push ebp
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x3C]
	mov eax,dword ptr [ebx+0x58]
	fld qword ptr [edi+0x40]
	push eax
	fstp qword ptr [esp+0x4C]
	lea eax,[ebx+0x48]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fmul qword ptr [edi+0x48]
	fld qword ptr [esp+0x50]
	mov ecx,dword ptr [esp+0xD8]
	fmul qword ptr [esp+0x44]
	add esp,8
	faddp st(1),st(0)
	fst qword ptr [esp+0x48]
	fild dword ptr [ecx]
	mov ecx,ebx
	fdiv qword ptr [__real_408f400000000000]
	fstp qword ptr [esp+0xA0]
	fmul qword ptr [edi+0x40]
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)
	sub esp,8
	fld qword ptr [edi+0x48]
	mov ecx,ebx
	fmul qword ptr [esp+0x48]
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vy
	mov eax,dword ptr [esi+0x10]
	fstp st(0)
	mov edx,dword ptr [edi+0xC]
	push eax
	push esi
	mov dword ptr [esp+0x20],edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x88]
	mov ecx,dword ptr [esi+0x28]
	fld qword ptr [edi+0x40]
	push ecx
	fstp qword ptr [esp+0x54]
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x44]
	mov eax,dword ptr [ebx+0x40]
	fld qword ptr [edi+0x40]
	push eax
	fstp qword ptr [esp+0x54]
	push ebp
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x58]
	fmul qword ptr [esp+0x4C]
	add esp,0x10
	mov ecx,ebx
	faddp st(1),st(0)
	fmul qword ptr [__real_3fe0000000000000]
	fmul qword ptr [esp+0xA0]
	fld qword ptr [esp+0x50]
	fmul qword ptr [esp+0x88]
	fiadd dword ptr [esp+0x20]
	faddp st(1),st(0)
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	mov edx,dword ptr [esi+0x10]
	fstp st(0)
	mov ecx,dword ptr [edi+0x10]
	push edx
	push esi
	mov dword ptr [esp+0x20],ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x88]
	fld qword ptr [edi+0x48]
	mov eax,dword ptr [esi+0x28]
	fstp qword ptr [esp+0x50]
	push eax
	add esi,0x18
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x44]
	mov ecx,dword ptr [ebx+0x58]
	fld qword ptr [edi+0x48]
	push ecx
	fstp qword ptr [esp+0x54]
	lea eax,[ebx+0x48]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x58]
	fmul qword ptr [esp+0x4C]
	add esp,0x10
	mov ecx,ebx
	faddp st(1),st(0)
	fmul qword ptr [__real_3fe0000000000000]
	fmul qword ptr [esp+0xA0]
	fld qword ptr [esp+0x50]
	fmul qword ptr [esp+0x88]
	fiadd dword ptr [esp+0x20]
	faddp st(1),st(0)
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	mov ebp,dword ptr [esp+0x14]
	fstp st(0)
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [esp+0x30]
	mov edx,dword ptr [edx+0x18]
	push eax
	mov ecx,ebp
	call edx
	jmp Block101

 Block96:
	push edi
	push esi
	mov ecx,ebx
	call AbsPos::SetFromRelPos
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [esp+0x30]
	mov edx,dword ptr [edx+0x18]
	push eax
	mov ecx,ebp
	call edx
	jmp Block101

 Block97:
	mov eax,dword ptr [ebp+0x1F0]
	push eax
	lea ecx,[ebp+0x1E8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x28]
	mov dword ptr [esp+0x20],eax
	push edx
	lea eax,[esi+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fimul dword ptr [esp+0x28]
	add esp,0x10
	fldz
	fcom
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block99

 Block98:
	sub esp,8
	jmp Block100

 Block99:
	mov ecx,dword ptr [esi+0x28]
	fstp st(0)
	push ecx
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fmul qword ptr [__real_3fe0000000000000]

 Block100:
	mov ecx,esi
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_v
	fstp st(0)
	push edi
	push esi
	mov ecx,ebx
	call AbsPos::SetFromRelPos
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x14]
	push ecx
	push 0
	push edi
	mov ecx,ebp
	call edx

 Block101:
	lea ecx,[esp+0xA0]
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	mov dword ptr [esp+0xA0],0
	call ZList<ZRef<CStaticFoothold>>::RemoveAll
	mov eax,1
	jmp Block84

 Block102:
	cmp dword ptr [esp+0x78],0
	je Block82

 Block103:
	mov ebx,dword ptr [esp+0x14]
	mov eax,dword ptr [ebx+0x30]
	mov edi,dword ptr [ebx+0x1B0]
	lea ebp,[ebx+0x20]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [edi+0xC]
	mov dword ptr [esp+0x20],ecx
	fild dword ptr [esp+0x20]
	lea esi,[ebx+0x140]
	mov ecx,esi
	fsubp st(1),st(0)
	fdiv qword ptr [edi+0x40]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov edx,eax
	mov dword ptr [esi+0x10],eax
	fld qword ptr [edi+0x50]
	push edx
	fstp qword ptr [esp+0x44]
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcom
	add esp,8
	fnstsw ax
	test ah,0x41
	je Block105

 Block104:
	fstp st(0)
	fld qword ptr [esp+0x40]
	fcom
	fnstsw ax
	test ah,5
	jp Block106

 Block105:
	fstp st(1)
	jmp Block107

 Block106:
	fstp st(0)

 Block107:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x18]
	mov dword ptr [esi+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	push edi
	push esi
	mov ecx,ebp
	mov dword ptr [esi+0x28],eax
	call AbsPos::SetFromRelPos
	mov esi,dword ptr [esp+0x60]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x14]
	push esi
	push 0
	push edi
	mov ecx,ebx
	call edx
	mov eax,dword ptr [esp+0xC8]
	sub dword ptr [eax],esi
	jmp Block101
}
}
// CVecCtrl::~CVecCtrl
_SUB_EXCEPTION_HANDLER(591720)
__SUB_CLASS_THIS0(00591720, __thiscall, 23263,  CVecCtrl, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_591720
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	int 3// TODO: 	mov dword ptr [esi],offset CVecCtrl::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CVecCtrl::`vftable'{for `IWzVector2D'}
	lea ecx,[esi+0x244]
	mov dword ptr [esp+0x1C],3
	call CMovePath::~CMovePath
	mov eax,dword ptr [esi+0x240]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x1C],2
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0x240]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0x240]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0x240],0

 Block5:
	mov eax,dword ptr [esi+0x1B0]
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block10

 Block6:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block9

 Block7:
	mov eax,dword ptr [esi+0x1B0]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0x1B0]
	test ecx,ecx
	je Block9

 Block8:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block9:
	mov dword ptr [esi+0x1B0],0

 Block10:
	mov eax,dword ptr [esi+0x1C]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x10
	ret
}
}
// CVecCtrl::GetFoothold
__SUB_CLASS_THIS0(00239F20, __thiscall, 23273,  CVecCtrl, CStaticFoothold*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1A0]
	ret
}
}
// CVecCtrl::get_flipX
__SUB_CLASS(00595840, __stdcall, 23341,  CVecCtrl, HRESULT, long*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [eax],0

 Block2:
	xor eax,eax
	ret 8
}
}
// CVecCtrl::put_flipX
__SUB_CLASS(00595860, __stdcall, 23342,  CVecCtrl, HRESULT, long) {
__asm {

 Block0:
	xor eax,eax
	ret 8
}
}
// CVecCtrl::CVecCtrl
_SUB_EXCEPTION_HANDLER(591380)
__SUB_CLASS_THIS0(00591380, __thiscall, 23261,  CVecCtrl, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_591380
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x68
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x40],esi
	xor eax,eax
	mov dword ptr [esi+4],eax
	xor edi,edi
	mov dword ptr [esi+8],eax
	int 3// TODO: 	mov dword ptr [esi+0xC],offset IWzVector2D::`vftable'
	int 3// TODO: 	mov dword ptr [esi],offset CVecCtrl::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CVecCtrl::`vftable'{for `IWzVector2D'}
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esi+0x14],edi
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esp+0x80],edi
	mov dword ptr [esi+0x1C],edi
	fldz
	lea ebx,[esi+0x140]
	sub esp,8
	mov ecx,ebx
	fstp qword ptr [esp]
	mov byte ptr [esp+0x88],1
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[ebx+0x18]
	mov dword ptr [ebx+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	fldz
	mov dword ptr [ebx+0x28],eax
	lea ebx,[esi+0x170]
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
	mov dword ptr [esi+0x1A0],edi
	mov dword ptr [esi+0x1A4],edi
	mov dword ptr [esi+0x1A8],edi
	mov dword ptr [esi+0x1B0],edi
	fldz
	mov dword ptr [esi+0x1C0],edi
	mov dword ptr [esi+0x1C4],edi
	mov dword ptr [esi+0x1DC],edi
	mov dword ptr [esi+0x200],edi
	mov dword ptr [esi+0x204],edi
	mov dword ptr [esi+0x210],edi
	mov dword ptr [esi+0x214],edi
	mov dword ptr [esi+0x218],edi
	fst qword ptr [esi+0x228]
	fstp qword ptr [esi+0x230]
	mov dword ptr [esi+0x220],edi
	mov dword ptr [esi+0x238],edi
	mov dword ptr [esi+0x240],edi
	lea ecx,[esi+0x244]
	mov byte ptr [esp+0x80],3
	call CMovePath::_ctor_default
	fldz
	lea edx,[esi+0x1B4]
	fstp qword ptr [esi+0x2E8]
	xor ecx,ecx
	mov byte ptr [esp+0x80],4
	mov dword ptr [esi+0x2E4],edi
	mov dword ptr [esi+0x2F0],edi
	call _ZtlSecureTearHelper<CLadderOrRope *>::call
	fldz
	lea ebx,[esi+0xE0]
	sub esp,8
	fstp qword ptr [esp]
	mov dword ptr [esi+0x1BC],eax
	mov dword ptr [esi+0x220],edi
	mov dword ptr [esi+0x208],edi
	mov ecx,ebx
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[ebx+0x18]
	mov dword ptr [ebx+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[ebx+0x30]
	mov dword ptr [ebx+0x28],eax
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[ebx+0x48]
	mov dword ptr [ebx+0x40],eax
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x58],eax
	mov dword ptr [esi+0x1E0],edi
	mov dword ptr [esi+0x1E4],edi
	mov eax,esi
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CVecCtrl::_ZtlSecureGet_m_pLadderOrRope
__SUB_CLASS0(000BB990, __fastcall, 23313,  CVecCtrl, CLadderOrRope*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1BC]
	push eax
	add ecx,0x1B4
	push ecx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	ret
}
}
// return_bound_range_double_
__SUB(005909D0, __cdecl, 80077,  double, double, double, double) {
__asm {

 Block0:
	fld qword ptr [esp+0xC]
	fld qword ptr [esp+4]
	fcom
	fnstsw ax
	test ah,5
	jnp Block3

 Block1:
	fstp st(1)
	fld qword ptr [esp+0x14]
	fcom
	fnstsw ax
	test ah,5
	jp Block3

 Block2:
	fstp st(1)
	ret

 Block3:
	fstp st(0)
	ret
}
}
// get_cross_product
__SUB(00590740, __cdecl, 80072,  long, long, long, long, long, long, long) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [esp+0x10]
	push esi
	mov esi,dword ptr [esp+0x18]
	sub eax,edx
	sub esi,ecx
	imul esi,eax
	mov eax,dword ptr [esp+0x10]
	sub eax,ecx
	mov ecx,dword ptr [esp+0x1C]
	sub ecx,edx
	imul eax,ecx
	sub eax,esi
	pop esi
	ret
}
}
// CVecCtrl::raw_Serialize
__SUB_CLASS(00595400, __stdcall, 23337,  CVecCtrl, HRESULT, IWzArchive*) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [esp+8],eax
	setne al
	lea eax,[eax+eax-0x7FFFBFFD]
	ret 8
}
}
// CVecCtrl::get_a
__SUB_CLASS(00595810, __stdcall, 23349,  CVecCtrl, HRESULT, double*) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 8
}
}
// CVecCtrl::get_ry
__SUB_CLASS(00595740, __stdcall, 23341,  CVecCtrl, HRESULT, long*) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	push esi
	push edi
	test edx,edx
	jne Block2

 Block1:
	mov eax,0x80004003
	pop edi
	pop esi
	ret 8

 Block2:
	mov edi,dword ptr [_D_VTMISSING]
	mov ecx,dword ptr [esp+0xC]
	mov esi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	push 0
	push 0
	push 0
	mov dword ptr [eax],edi
	mov edi,dword ptr [_D_VTMISSING+4]
	push 0
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [_D_VTMISSING+8]
	push edx
	push 0
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [_D_VTMISSING+12]
	push 0
	push 0
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [esi+0x8C]
	push ecx
	call eax
	pop edi
	pop esi
	ret 8
}
}
// CVecCtrl::InspectUpdateActive
__SUB_CLASS_THIS0(005909C0, __thiscall, 23263,  CVecCtrl, void) {
__asm {

 Block0:
	ret
}
}
// CVecCtrl::CreateInstance
_SUB_EXCEPTION_HANDLER(591830)
__SUB0(00591830, __cdecl, 23300,  CVecCtrl*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_591830
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
	call CVecCtrl::_ctor_default
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
// CVecCtrl::put_y2
__SUB_CLASS(005955D0, __stdcall, 23342,  CVecCtrl, HRESULT, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+4],eax
	mov eax,dword ptr [ecx+0x2C]
	jmp eax
}
}
// CVecCtrl::get_ra
__SUB_CLASS(00595820, __stdcall, 23349,  CVecCtrl, HRESULT, double*) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 8
}
}
// CVecCtrl::get_looseLevel
__SUB_CLASS(005958E0, __stdcall, 23340,  CVecCtrl, HRESULT, unsigned long*) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 8
}
}
// AbsPos::_ZtlSecureGet_x
__SUB_CLASS0(0012A5D0, __fastcall, 23407,  AbsPos, double) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x10]
	push eax
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	ret
}
}
// CVecCtrl::get_rx
__SUB_CLASS(00595670, __stdcall, 23341,  CVecCtrl, HRESULT, long*) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	push esi
	push edi
	test edx,edx
	jne Block2

 Block1:
	mov eax,0x80004003
	pop edi
	pop esi
	ret 8

 Block2:
	mov edi,dword ptr [_D_VTMISSING]
	mov ecx,dword ptr [esp+0xC]
	mov esi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	push 0
	push 0
	push 0
	mov dword ptr [eax],edi
	mov edi,dword ptr [_D_VTMISSING+4]
	push 0
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [_D_VTMISSING+8]
	push 0
	push edx
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [_D_VTMISSING+12]
	push 0
	push 0
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [esi+0x8C]
	push ecx
	call eax
	pop edi
	pop esi
	ret 8
}
}
// AbsPos::_ZtlSecureGet_y
__SUB_CLASS0(0012A5E0, __fastcall, 23407,  AbsPos, double) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x28]
	push eax
	add ecx,0x18
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	ret
}
}
// _ZtlSecureTear_CLadderOrRope__
__SUB(00591350, __fastcall, 80080,  uint32_t, CLadderOrRope*, CLadderOrRope**) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov ecx,offset _D_G_RAND
	mov esi,edx
	call CRand32::Random
	mov ecx,eax
	mov dword ptr [esi],eax
	xor ecx,edi
	ror ecx,5
	xor eax,0xBAADF00D
	ror eax,5
	pop edi
	mov dword ptr [esi+4],ecx
	add eax,ecx
	pop esi
	ret
}
}
// CVecCtrl::SetInput
__SUB_CLASS_THIS(00554300, __thiscall, 23290,  CVecCtrl, void, long, long) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	lea edx,[esi+0x1E8]
	mov ecx,edi
	call _ZtlSecureTearHelper<long>::call
	mov ebx,dword ptr [esp+0x14]
	lea edx,[esi+0x1F4]
	mov ecx,ebx
	mov dword ptr [esi+0x1F0],eax
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x1D8]
	mov ecx,dword ptr [esi+0x14]
	push esi
	push edx
	mov dword ptr [esi+0x1FC],eax
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+4]
	push ebx
	push edi
	call eax
	pop edi
	mov dword ptr [esi+0x1D8],eax
	pop esi
	pop ebx
	ret 8
}
}
// CVecCtrl::get_x
__SUB_CLASS(00595480, __stdcall, 23341,  CVecCtrl, HRESULT, long*) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	push esi
	push edi
	test edx,edx
	jne Block2

 Block1:
	mov eax,0x80004003
	pop edi
	pop esi
	ret 8

 Block2:
	mov edi,dword ptr [_D_VTMISSING]
	mov ecx,dword ptr [esp+0xC]
	mov esi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	push 0
	push 0
	push 0
	mov dword ptr [eax],edi
	mov edi,dword ptr [_D_VTMISSING+4]
	push 0
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [_D_VTMISSING+8]
	push 0
	push 0
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [_D_VTMISSING+12]
	push 0
	push edx
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [esi+0x8C]
	push ecx
	call eax
	pop edi
	pop esi
	ret 8
}
}
// CVecCtrl::CollisionDetectWalk
__SUB_CLASS_THIS(00592280, __thiscall, 23286,  CVecCtrl, int32_t, const RelPos&, long&, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0xF4
	fldz
	push ebx
	push esi
	mov ebx,ecx
	push edi
	lea edi,[ebx+0xE0]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[edi+0x18]
	mov dword ptr [edi+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	mov esi,dword ptr [ebp+8]
	mov dword ptr [edi+0x28],eax
	mov eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [eax]
	push ecx
	push esi
	mov ecx,ebx
	call CVecCtrl::BoundPosMapRange_1
	mov edx,dword ptr [esi+0x10]
	push edx
	push esi
	mov dword ptr [esp+0x14],eax
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	fnstsw ax
	test ah,0x41
	jp Block9

 Block1:
	mov ecx,dword ptr [ebx+0x150]
	lea eax,[ebx+0x140]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcom
	add esp,8
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block8

 Block2:
	mov ecx,dword ptr [ebx+0x1A0]
	mov eax,dword ptr [ecx+0x64]
	test eax,eax
	je Block17

 Block3:
	mov esi,dword ptr [eax+0x68]
	test esi,esi
	je Block17

 Block4:
	cmp esi,ecx
	je Block17

 Block5:
	fcom qword ptr [esi+0x40]
	sub esp,8
	fnstsw ax
	fstp qword ptr [esp]
	test ah,5
	jp Block7

 Block6:
	lea ecx,[ebx+0x140]
	call RelPos::_ZtlSecurePut_pos
	fstp st(0)
	push esi
	lea eax,[ebx+0x140]
	push eax
	lea ecx,[ebx+0x20]
	call AbsPos::SetFromRelPos
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0
	push esi
	mov ecx,ebx
	mov dword ptr [esp+0x18],0
	call eax
	jmp Block18

 Block7:
	lea esi,[ebx+0x140]
	mov ecx,esi
	call RelPos::_ZtlSecurePut_v
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_pos
	jmp Block17

 Block8:
	fstp st(0)

 Block9:
	mov ecx,dword ptr [esi+0x10]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [ebx+0x1A0]
	fcomp qword ptr [edx+0x50]
	add esp,8
	fnstsw ax
	test ah,1
	jne Block18

 Block10:
	mov ecx,dword ptr [ebx+0x150]
	lea eax,[ebx+0x140]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [ebx+0x1A0]
	fcomp qword ptr [ecx+0x50]
	add esp,8
	fnstsw ax
	test ah,5
	jp Block18

 Block11:
	mov eax,dword ptr [ecx+0x68]
	test eax,eax
	je Block18

 Block12:
	mov esi,dword ptr [eax+0x64]
	test esi,esi
	je Block18

 Block13:
	cmp esi,ecx
	je Block18

 Block14:
	fldz
	sub esp,8
	fcomp qword ptr [esi+0x40]
	fnstsw ax
	test ah,5
	jp Block16

 Block15:
	fld qword ptr [esi+0x50]
	lea ecx,[ebx+0x140]
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_pos
	push esi
	fstp st(0)
	lea eax,[ebx+0x140]
	push eax
	lea ecx,[ebx+0x20]
	call AbsPos::SetFromRelPos
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0
	push esi
	mov ecx,ebx
	mov dword ptr [esp+0x18],0
	call eax
	jmp Block18

 Block16:
	fld qword ptr [ecx+0x50]
	lea esi,[ebx+0x140]
	mov ecx,esi
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_pos
	fstp st(0)
	fldz
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_v

 Block17:
	fstp st(0)

 Block18:
	mov ecx,dword ptr [ebx+0x150]
	lea esi,[ebx+0x140]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	fnstsw ax
	test ah,1
	jne Block28

 Block19:
	mov edx,dword ptr [esi+0x10]
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [ebx+0x1A0]
	fcomp qword ptr [eax+0x50]
	add esp,8
	fnstsw ax
	test ah,0x41
	jp Block28

 Block20:
	mov ecx,dword ptr [ebx+0x30]
	lea esi,[ebx+0x20]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp]
	mov ecx,edi
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x10],eax
	mov edx,dword ptr [esi+0x28]
	push edx
	lea eax,[esi+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp]
	lea ecx,[edi+0x18]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x28],eax
	mov ecx,dword ptr [ebx+0x1A0]
	push ecx
	lea eax,[ebx+0x140]
	push eax
	mov ecx,esi
	call AbsPos::SetFromRelPos
	mov eax,dword ptr [ebp+0xC]
	mov esi,dword ptr [esp+0xC]
	sub dword ptr [eax],esi
	mov eax,dword ptr [ebx+0x1A0]
	mov edx,2
	cmp dword ptr [eax+0x5C],edx
	jne Block26

 Block21:
	cmp dword ptr [ebx+0x1DC],0
	je Block25

 Block22:
	mov ecx,dword ptr [ebx+0x1A4]
	test ecx,ecx
	je Block25

 Block23:
	cmp dword ptr [ecx+0x5C],edx
	jne Block25

 Block24:
	fldz
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	fstp st(0)
	fldz
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	fstp st(0)
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x18]
	push esi
	mov ecx,ebx
	mov dword ptr [ebx+0x1DC],0
	call eax
	xor eax,eax
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC

 Block25:
	push eax
	lea edx,[ebx+0x170]
	push edx
	lea ecx,[esp+0x48]
	call AbsPos::SetFromRelPos
	mov eax,dword ptr [ebx+0x1A0]
	push eax
	lea eax,[ebx+0x140]
	push eax
	lea ecx,[esp+0xA8]
	call AbsPos::SetFromRelPos
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x58]
	push edx
	lea eax,[esp+0x4C]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x20]
	add esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x10],eax
	mov ecx,dword ptr [edi+0x28]
	push ecx
	lea edx,[edi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x18]
	mov eax,dword ptr [esp+0xD0]
	push eax
	lea ecx,[esp+0xC4]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x20]
	add esp,8
	jmp Block27

 Block26:
	fldz
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	mov dword ptr [edi+0x10],eax
	sub esp,8

 Block27:
	lea ecx,[edi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x28],eax
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x18]
	push esi
	mov ecx,ebx
	call eax
	xor eax,eax
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC

 Block28:
	mov ecx,0xC
	lea edi,[esp+0x40]
	rep movsd
	mov ecx,dword ptr [esp+0x50]
	push ecx
	lea edx,[esp+0x44]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	test ah,5
	jp Block30

 Block29:
	mov esi,dword ptr [ebp+8]
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	mov dword ptr [esp+0x28],1
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x20]
	mov ecx,dword ptr [esi+0x10]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x60]
	push edx
	lea eax,[esp+0x54]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x28]
	mov ecx,dword ptr [ebx+0x1A0]
	mov edi,dword ptr [ecx+0x64]
	fdivr qword ptr [esp+0x30]
	mov dword ptr [esp+0x30],edi
	jmp Block31

 Block30:
	mov esi,dword ptr [ebp+8]
	mov eax,dword ptr [esi+0x10]
	mov edx,dword ptr [ebx+0x1A0]
	fld qword ptr [edx+0x50]
	push eax
	push esi
	fstp qword ptr [esp+0x18]
	mov dword ptr [esp+0x28],0
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x58]
	push ecx
	lea edx,[esp+0x4C]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x38]
	fld qword ptr [esp+0x20]
	mov eax,dword ptr [esi+0x10]
	fsub qword ptr [esp+0x28]
	push eax
	push esi
	fstp qword ptr [esp+0x28]
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x40]
	mov ecx,dword ptr [ebx+0x1A0]
	mov edx,dword ptr [ecx+0x68]
	mov dword ptr [esp+0x30],edx
	fdivr qword ptr [esp+0x28]
	mov edi,edx

 Block31:
	fst qword ptr [esp+0x28]
	add esp,0x18
	fimul dword ptr [esp+0xC]
	call __ftol2_sse
	mov ecx,dword ptr [ebp+0xC]
	sub dword ptr [ecx],eax
	mov dword ptr [esp+0x28],eax
	test edi,edi
	je Block48

 Block32:
	fldz
	fcom qword ptr [edi+0x40]
	fnstsw ax
	test ah,1
	jne Block38

 Block33:
	cmp dword ptr [esp+0x20],0
	je Block36

 Block34:
	fcom qword ptr [edi+0x48]
	fnstsw ax
	test ah,0x41
	je Block37

 Block35:
	sub esp,8
	lea esi,[ebx+0x140]
	fstp qword ptr [esp]
	mov ecx,esi
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x18]
	mov dword ptr [esi+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x28],eax
	mov ecx,dword ptr [ebx+0x1A0]
	push ecx
	push esi
	lea ecx,[ebx+0x20]
	call AbsPos::SetFromRelPos
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [esp+0x28]
	mov edx,dword ptr [edx+0x18]
	push eax
	mov ecx,ebx
	call edx
	mov eax,1
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC

 Block36:
	fcomp qword ptr [edi+0x48]
	fnstsw ax
	test ah,5
	mov eax,dword ptr [ebx+0x1A0]
	fld qword ptr [eax+0x50]
	jp Block35

 Block37:
	sub esp,8
	lea edi,[ebx+0x140]
	fstp qword ptr [esp]
	mov ecx,edi
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x10],eax
	mov ecx,dword ptr [esi+0x28]
	lea eax,[esi+0x18]
	push ecx
	push eax
	mov dword ptr [esp+0x14],eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x70]
	push edx
	lea eax,[esp+0x64]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x28]
	mov ecx,dword ptr [esi+0x28]
	mov edx,dword ptr [esp+0x1C]
	push ecx
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x30]
	fmul qword ptr [esp+0x28]
	fadd qword ptr [esp+0x38]
	jmp Block52

 Block38:
	cmp dword ptr [esp+0x20],0
	je Block40

 Block39:
	fstp st(0)
	fld qword ptr [edi+0x50]

 Block40:
	sub esp,8
	lea edi,[ebx+0x140]
	fstp qword ptr [esp]
	mov ecx,edi
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x10],eax
	mov ecx,dword ptr [esi+0x28]
	lea eax,[esi+0x18]
	push ecx
	push eax
	mov dword ptr [esp+0x14],eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x70]
	push edx
	lea eax,[esp+0x64]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov ecx,dword ptr [esi+0x28]
	mov edx,dword ptr [esp+0x1C]
	push ecx
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x48]
	add esp,0x10
	lea ecx,[edi+0x18]
	fmul qword ptr [esp+0x18]
	fadd qword ptr [esp+0x40]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	cmp dword ptr [esp+0x20],0
	mov dword ptr [edi+0x28],eax
	je Block46

 Block41:
	push eax
	lea ecx,[edi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcom
	add esp,8
	fnstsw ax
	fstp st(1)
	test ah,5
	jnp Block47

 Block42:
	fstp st(0)

 Block43:
	mov esi,dword ptr [esp+0x18]
	push esi
	push edi
	lea ecx,[ebx+0x20]
	call AbsPos::SetFromRelPos
	mov eax,dword ptr [esp+0x28]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x14]
	push eax
	push 0
	push esi
	mov ecx,ebx
	call edx
	cmp dword ptr [ebp+0x10],0
	jne Block53

 Block44:
	cmp dword ptr [esi+0x5C],2
	jne Block53

 Block45:
	mov dword ptr [ebx+0x1DC],1
	mov eax,1
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC

 Block46:
	mov edx,eax
	push edx
	lea eax,[edi+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcom
	add esp,8
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block42

 Block47:
	sub esp,8
	lea ecx,[edi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x28],eax
	jmp Block43

 Block48:
	cmp dword ptr [esp+0x20],0
	je Block50

 Block49:
	fldz
	jmp Block51

 Block50:
	mov eax,dword ptr [ebx+0x1A0]
	fld qword ptr [eax+0x50]

 Block51:
	sub esp,8
	lea edi,[ebx+0x140]
	fstp qword ptr [esp]
	mov ecx,edi
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x10],eax
	mov ecx,dword ptr [esi+0x28]
	lea eax,[esi+0x18]
	push ecx
	push eax
	mov dword ptr [esp+0x14],eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x70]
	push edx
	lea eax,[esp+0x64]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x48]
	mov ecx,dword ptr [esi+0x28]
	mov edx,dword ptr [esp+0x1C]
	push ecx
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x50]
	fmul qword ptr [esp+0x28]
	fadd qword ptr [esp+0x48]

 Block52:
	add esp,0x10
	lea ecx,[edi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x28],eax
	mov eax,dword ptr [ebx+0x1A0]
	push eax
	push edi
	lea ecx,[ebx+0x20]
	call AbsPos::SetFromRelPos
	mov eax,dword ptr [esp+0x28]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x14]
	push eax
	push 0
	push 0
	mov ecx,ebx
	call edx

 Block53:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// RelPos::_ZtlSecurePut_pos
__SUB_CLASS(00590B40, __fastcall, 23400,  RelPos, double, double) {
__asm {

 Block0:
	fld qword ptr [esp+4]
	push esi
	sub esp,8
	fstp qword ptr [esp]
	mov esi,ecx
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+8]
	mov dword ptr [esi+0x10],eax
	pop esi
	ret 8
}
}
// CVecCtrl::put_y
__SUB_CLASS(00595570, __stdcall, 23342,  CVecCtrl, HRESULT, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+8]
	push ecx
	push esi
	call edx
	test eax,eax
	jl Block2

 Block1:
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0x40]
	push ecx
	push edx
	push esi
	call eax

 Block2:
	pop esi
	ret 8
}
}
// CVecCtrl::raw_Move
__SUB_CLASS(00595CD0, __stdcall, 23343,  CVecCtrl, HRESULT, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x34
	push ebx
	mov ebx,dword ptr [ebp+8]
	push esi
	lea esi,[ebx-0xC]
	push edi
	lea edx,[esi+0x1B4]
	xor ecx,ecx
	mov dword ptr [ebx+0x194],0
	mov dword ptr [esp+0x34],esi
	call _ZtlSecureTearHelper<CLadderOrRope *>::call
	fild dword ptr [ebp+0xC]
	mov dword ptr [esi+0x1BC],eax
	lea esi,[ebx+0x74]
	sub esp,8
	fst qword ptr [esp+0x40]
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x38]
	lea edi,[ebx+0x14]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	mov dword ptr [esi+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	fild dword ptr [ebp+0x10]
	sub esp,8
	lea ecx,[esi+0x18]
	fst qword ptr [esp+0x40]
	mov dword ptr [edi+0x10],eax
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x38]
	sub esp,8
	lea ecx,[edi+0x18]
	fstp qword ptr [esp]
	mov dword ptr [esi+0x28],eax
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x30]
	mov dword ptr [edi+0x28],eax
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[edi+0x30]
	mov dword ptr [esi+0x40],eax
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x48]
	mov dword ptr [edi+0x40],eax
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[edi+0x48]
	mov dword ptr [esi+0x58],eax
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x58],eax
	cmp dword ptr [ebx+0xC],0
	je Block2

 Block1:
	mov ecx,dword ptr [esp+0x34]
	push 3
	call CVecCtrl::SetMovePathAttribute

 Block2:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CVecCtrl::raw_RelMove
__SUB_CLASS(00595870, __stdcall, 23352,  CVecCtrl, HRESULT, long, long, NakedParam<tagVARIANT>, NakedParam<tagVARIANT>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+0xC]
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [eax]
	push edx
	mov edx,dword ptr [esp+0xC]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x40]
	call eax
	ret 0x2C
}
}
// CVecCtrl::get_origin
__SUB_CLASS(00595630, __stdcall, 23347,  CVecCtrl, HRESULT, tagVARIANT*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	jne Block2

 Block1:
	mov eax,0x80004003
	ret 8

 Block2:
	mov ecx,0xD
	mov word ptr [eax],cx
	mov dword ptr [eax+8],0
	xor eax,eax
	ret 8
}
}
// AbsPos::_ZtlSecurePut_y
__SUB_CLASS(00590BA0, __fastcall, 23409,  AbsPos, double, double) {
__asm {

 Block0:
	fld qword ptr [esp+4]
	push esi
	mov esi,ecx
	sub esp,8
	lea ecx,[esi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+8]
	mov dword ptr [esi+0x28],eax
	pop esi
	ret 8
}
}
// CVecCtrl::MakeContinuousMovePath
__SUB_CLASS_THIS(00591600, __thiscall, 23279,  CVecCtrl, void, long) {
__asm {

 Block0:
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x108]
	lea esi,[edi+0xE0]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x18]
	mov edx,dword ptr [esi+0x10]
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x28]
	mov eax,dword ptr [edi+0x78]
	mov ebx,dword ptr [edi+0x1D8]
	lea esi,[edi+0x20]
	push eax
	lea ecx,[esi+0x48]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x38]
	mov edx,dword ptr [esi+0x40]
	push edx
	lea eax,[esi+0x30]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x48]
	mov ecx,dword ptr [esi+0x28]
	push ecx
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x58]
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x68]
	mov ecx,dword ptr [edi+0x1BC]
	push ecx
	lea edx,[edi+0x1B4]
	push edx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	xor esi,esi
	add esp,0x38
	mov ebp,eax
	cmp dword ptr [edi+0x214],esi
	je Block2

 Block1:
	mov esi,0xE
	jmp Block4

 Block2:
	cmp dword ptr [edi+0x1A8],esi
	je Block4

 Block3:
	mov esi,0xC

 Block4:
	fld qword ptr [esp+0x10]
	call __ftol2_sse
	fld qword ptr [esp+0x18]
	push eax
	call __ftol2_sse
	fld qword ptr [esp+0x24]
	push eax
	mov eax,dword ptr [esp+0x4C]
	push eax
	push ebx
	call __ftol2_sse
	fld qword ptr [esp+0x38]
	push eax
	call __ftol2_sse
	fld qword ptr [esp+0x44]
	push eax
	call __ftol2_sse
	fld qword ptr [esp+0x50]
	push eax
	call __ftol2_sse
	mov ecx,dword ptr [edi+0x1A8]
	mov edx,dword ptr [edi+0x1A0]
	push eax
	push ebp
	push ecx
	push edx
	push esi
	lea ecx,[edi+0x244]
	call CMovePath::MakeMovePath
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 4
}
}
// CVecCtrl::JustJump
_SUB_EXCEPTION_HANDLER(593EA0)
__SUB_CLASS_THIS0(00593EA0, __thiscall, 23305,  CVecCtrl, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_593EA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+8]
	call edx
	test eax,eax
	jne Block5

 Block1:
	mov ecx,esi
	call CVecCtrl::IsSwimming
	test eax,eax
	jne Block5

 Block2:
	mov eax,dword ptr [esi+0x240]
	test eax,eax
	je Block4

 Block3:
	lea ecx,[eax+0x78]
	call TSecType<double>::GetData
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	test ah,0x41
	je Block5

 Block4:
	xor ebx,ebx
	jmp Block6

 Block5:
	mov ebx,1

 Block6:
	mov eax,dword ptr [esi+0x1BC]
	push eax
	lea ecx,[esi+0x1B4]
	push ecx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block14

 Block7:
	mov edx,dword ptr [esi+0x1F0]
	push edx
	lea ebp,[esi+0x1E8]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block40

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push 0
	push 0
	push 0
	mov ecx,esi
	call edx
	test ebx,ebx
	je Block10

 Block9:
	fld qword ptr [__real_3fd3333333333333]
	jmp Block11

 Block10:
	fld qword ptr [__real_3fe0000000000000]

 Block11:
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	fstp qword ptr [esp+0x2C]
	mov edi,dword ptr [eax+8]
	mov eax,dword ptr [esi+0x240]
	lea ecx,[eax+0x48]
	call TSecType<double>::GetData
	fstp qword ptr [esp+0x34]
	mov ecx,dword ptr [esi+0x238]
	add ecx,0x24
	call TSecType<double>::GetData
	fld qword ptr [edi+0x70]
	fmul qword ptr [esp+0x34]
	sub esp,8
	lea ecx,[esi+0x68]
	fdivrp st(1),st(0)
	fmul qword ptr [esp+0x34]
	fchs
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x78],eax
	cmp dword ptr [esi+0x2F0],0
	je Block13

 Block12:
	mov ecx,dword ptr [esi+0x1F0]
	push ecx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x2C],eax
	fild dword ptr [esp+0x2C]
	lea ecx,[esi+0x50]
	fmul qword ptr [__real_405f400000000000]
	fmul qword ptr [__real_3ff4cccccccccccd]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x60],eax
	mov eax,1
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block13:
	mov eax,dword ptr [esi+0x240]
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov edi,dword ptr [edx+8]
	lea ecx,[eax+0x24]
	call TSecType<double>::GetData
	fstp qword ptr [esp+0x34]
	mov eax,dword ptr [esi+0x1F0]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	fld qword ptr [edi+8]
	fmul qword ptr [esp+0x3C]
	mov dword ptr [esp+0x2C],eax
	lea ecx,[esi+0x50]
	fimul dword ptr [esp+0x2C]
	fmul qword ptr [__real_3ff4cccccccccccd]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x60],eax
	mov eax,1
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block14:
	mov ebp,dword ptr [esi+0x1A0]
	test ebp,ebp
	je Block32

 Block15:
	mov ecx,esi
	call CVecCtrl::DetachFromFoothold
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov eax,dword ptr [esi+0x240]
	mov edi,dword ptr [ecx+8]
	lea ecx,[eax+0x48]
	call TSecType<double>::GetData
	fstp qword ptr [esp+0x34]
	mov ecx,dword ptr [esi+0x238]
	add ecx,0x24
	call TSecType<double>::GetData
	fld qword ptr [edi+0x70]
	fmul qword ptr [esp+0x34]
	lea edi,[esi+0x20]
	sub esp,8
	lea ecx,[edi+0x48]
	fdivrp st(1),st(0)
	fchs
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x58],eax
	test ebx,ebx
	je Block17

 Block16:
	mov edx,eax
	push edx
	lea eax,[edi+0x48]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fmul qword ptr [__real_3fe6666666666666]
	lea ecx,[edi+0x48]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x58],eax

 Block17:
	mov ecx,dword ptr [esi+0x1F0]
	push ecx
	lea ebx,[esi+0x1E8]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block27

 Block18:
	mov edx,dword ptr [esi+0x1F0]
	fld qword ptr [ebp+0x48]
	push edx
	fstp qword ptr [esp+0x38]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x2C],eax
	fild dword ptr [esp+0x2C]
	add esp,8
	fmul qword ptr [esp+0x34]
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	test ah,5
	jp Block20

 Block19:
	or ecx,0xFFFFFFFF
	jmp Block21

 Block20:
	mov ecx,1

 Block21:
	mov eax,dword ptr [esi+0x240]
	push ecx
	push eax
	push ebp
	call max_walk_speed
	fstp qword ptr [esp+0x38]
	add esp,0xC
	cmp dword ptr [esi+0x2F0],0
	je Block23

 Block22:
	mov eax,dword ptr [esi+0x1F0]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x2C],eax
	fild dword ptr [esp+0x2C]
	mov ecx,edi
	fmul qword ptr [__real_405f400000000000]
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	jmp Block28

 Block23:
	mov ecx,dword ptr [edi+0x40]
	push ecx
	lea edx,[edi+0x30]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x44]
	fld qword ptr [esp+0x34]
	mov eax,dword ptr [esi+0x1F0]
	fmul qword ptr [__real_3fe999999999999a]
	push eax
	push ebx
	fstp qword ptr [esp+0x44]
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x34],eax
	fild dword ptr [esp+0x34]
	add esp,0x10
	fmul qword ptr [esp+0x3C]
	fcomp qword ptr [esp+0x34]
	fnstsw ax
	test ah,5
	jp Block25

 Block24:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	mov dword ptr [esp+0x24],eax
	fild dword ptr [esp+0x24]
	mov ecx,edi
	fmul qword ptr [esp+0x34]
	fstp qword ptr [esp+0x3C]
	call AbsPos::_ZtlSecureGet_vx
	fadd qword ptr [esp+0x3C]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)

 Block25:
	mov ecx,dword ptr [edi+0x40]
	push ecx
	lea edx,[edi+0x30]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x44]
	mov eax,dword ptr [esi+0x1F0]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x34],eax
	fild dword ptr [esp+0x34]
	add esp,0x10
	fmul qword ptr [esp+0x3C]
	fcomp qword ptr [esp+0x2C]
	fnstsw ax
	test ah,0x41
	jne Block29

 Block26:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	mov dword ptr [esp+0x24],eax
	fild dword ptr [esp+0x24]
	sub esp,8
	mov ecx,edi
	fmul qword ptr [esp+0x34]
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	jmp Block28

 Block27:
	mov ecx,dword ptr [edi+0x40]
	push ecx
	add edi,0x30
	push edi
	call _ZtlSecureFuseHelper<double>::call
	add esp,8

 Block28:
	fstp st(0)

 Block29:
	mov esi,dword ptr [esi+0x14]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	mov ecx,esi
	call eax
	test eax,eax
	jne Block40

 Block30:
	lea ecx,[esp+0x2C]
	push 0x907
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x88],0
	call play_game_sound
	mov eax,dword ptr [esp+0x34]
	add esp,8
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block40

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	mov eax,1
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block32:
	test ebx,ebx
	je Block42

 Block33:
	mov ecx,dword ptr [esi+0x238]
	add ecx,0x18
	call TSecType<double>::GetData
	fabs
	mov ecx,esi
	fstp qword ptr [esp+0x24]
	call CVecCtrl::IsSwimming
	test eax,eax
	je Block35

 Block34:
	mov eax,dword ptr [esi+0x240]
	lea ecx,[eax+0x6C]
	call TSecType<double>::GetData
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov eax,dword ptr [edx+8]
	fmul qword ptr [eax+0x48]
	fmul qword ptr [esp+0x24]
	fmul qword ptr [__real_4014000000000000]
	jmp Block39

 Block35:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	mov ecx,esi
	call eax
	test eax,eax
	mov eax,dword ptr [esi+0x240]
	lea ecx,[eax+0x84]
	je Block41

 Block36:
	call TSecType<double>::GetData
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov eax,dword ptr [ecx+8]
	fmul qword ptr [eax+0x58]
	mov ecx,esi
	fmul qword ptr [esp+0x24]
	fmul qword ptr [__real_4014000000000000]
	fmul qword ptr [eax+0x90]
	fstp qword ptr [esp+0x34]
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	test eax,eax
	je Block38

 Block37:
	lea edi,[esi+0x20]
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_vx
	fadd st(0),st
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)

 Block38:
	fld qword ptr [esp+0x34]

 Block39:
	sub esp,8
	fchs
	lea ecx,[esi+0x68]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x78],eax

 Block40:
	mov eax,1
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block41:
	call TSecType<double>::GetData
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov eax,dword ptr [edx+8]
	fmul qword ptr [eax+0x58]
	fmul qword ptr [esp+0x24]
	jmp Block39

 Block42:
	xor eax,eax
	mov ecx,dword ptr [esp+0x78]
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
// CVecCtrl::raw_Fly
__SUB_CLASS(00595900, __stdcall, 23357,  CVecCtrl, HRESULT, tagVARIANT*, long) {
__asm {

 Block0:
	mov eax,0x80004005
	ret 0xC
}
}
// CVecCtrl::put_origin
__SUB_CLASS(00595660, __stdcall, 23348,  CVecCtrl, HRESULT, NakedParam<tagVARIANT>) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0x14
}
}
// RelPos::_ZtlSecurePut_v
__SUB_CLASS(00590B60, __fastcall, 23400,  RelPos, double, double) {
__asm {

 Block0:
	fld qword ptr [esp+4]
	push esi
	mov esi,ecx
	sub esp,8
	lea ecx,[esi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+8]
	mov dword ptr [esi+0x28],eax
	pop esi
	ret 8
}
}
// CVecCtrl::get_y2
__SUB_CLASS(005955C0, __stdcall, 23341,  CVecCtrl, HRESULT, long*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+4],eax
	mov eax,dword ptr [ecx+0x28]
	jmp eax
}
}
// CVecCtrl::put_ra
__SUB_CLASS(00595830, __stdcall, 23350,  CVecCtrl, HRESULT, double) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0xC
}
}
// CVecCtrl::raw_Init
__SUB_CLASS(00595600, __stdcall, 23343,  CVecCtrl, HRESULT, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+4],eax
	mov eax,dword ptr [ecx+0x40]
	jmp eax
}
}
// CVecCtrl::GetInput
__SUB_CLASS_THIS(005049C0, __thiscall, 23289,  CVecCtrl, void, long&, long&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x1F0]
	push eax
	lea ecx,[esi+0x1E8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edx],eax
	mov eax,dword ptr [esi+0x1FC]
	push eax
	add esi,0x1F4
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x1C]
	add esp,0x10
	mov dword ptr [ecx],eax
	pop esi
	ret 8
}
}
// AbsPos::_ZtlSecureGet_vx
__SUB_CLASS0(0012A600, __fastcall, 23407,  AbsPos, double) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x40]
	push eax
	add ecx,0x30
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	ret
}
}
// CVecCtrl::raw_RelOffset
__SUB_CLASS(00595890, __stdcall, 23352,  CVecCtrl, HRESULT, long, long, NakedParam<tagVARIANT>, NakedParam<tagVARIANT>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+0xC]
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [eax]
	push edx
	mov edx,dword ptr [esp+0xC]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x44]
	call eax
	ret 0x2C
}
}
// CVecCtrl::MakeNewMovePathElem
__SUB_CLASS_THIS0(00590A30, __thiscall, 23263,  CVecCtrl, void) {
__asm {

 Block0:
	sub esp,0x20
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x78]
	mov ebx,dword ptr [edi+0x1D8]
	lea esi,[edi+0x20]
	push eax
	lea ecx,[esi+0x48]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x18]
	mov edx,dword ptr [esi+0x40]
	push edx
	lea eax,[esi+0x30]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x28]
	mov ecx,dword ptr [esi+0x28]
	push ecx
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x38]
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x48]
	mov ecx,dword ptr [edi+0x1BC]
	push ecx
	lea edx,[edi+0x1B4]
	push edx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	xor esi,esi
	add esp,0x28
	mov ebp,eax
	cmp dword ptr [edi+0x214],esi
	je Block2

 Block1:
	mov esi,0xE
	jmp Block4

 Block2:
	cmp dword ptr [edi+0x1A8],esi
	je Block4

 Block3:
	mov esi,0xC

 Block4:
	fld qword ptr [esp+0x10]
	push 0
	push 0
	push ebx
	call __ftol2_sse
	fld qword ptr [esp+0x24]
	push eax
	call __ftol2_sse
	fld qword ptr [esp+0x30]
	push eax
	call __ftol2_sse
	fld qword ptr [esp+0x3C]
	push eax
	call __ftol2_sse
	mov ecx,dword ptr [edi+0x1A0]
	push eax
	mov eax,dword ptr [edi+0x1A8]
	push ebp
	push eax
	push ecx
	push esi
	lea ecx,[edi+0x244]
	call CMovePath::AddNewElem
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret
}
}
// CVecCtrl::put_looseLevel
__SUB_CLASS(005958F0, __stdcall, 23356,  CVecCtrl, HRESULT, unsigned long) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 8
}
}
// CVecCtrl::IsActive
__SUB_CLASS_THIS0(00591570, __thiscall, 23271,  CVecCtrl, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CVecCtrl::SetImpactNext
__SUB_CLASS_THIS(00349070, __thiscall, 23293,  CVecCtrl, void, double, double) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x220],0
	fldz
	mov dword ptr [ecx+0x214],0
	jne Block2

 Block1:
	fst qword ptr [ecx+0x230]
	fst qword ptr [ecx+0x228]

 Block2:
	fld qword ptr [esp+4]
	mov dword ptr [ecx+0x220],1
	fcom
	fnstsw ax
	test ah,5
	jp Block6

 Block3:
	fcom qword ptr [ecx+0x228]
	fnstsw ax
	test ah,5
	jp Block6

 Block4:
	fld st(0)
	fadd qword ptr [ecx+0x228]
	fcom
	fnstsw ax
	test ah,5
	jp Block10

 Block5:
	fstp st(0)
	fstp qword ptr [ecx+0x228]
	jmp Block12

 Block6:
	fcom
	fnstsw ax
	test ah,0x41
	jne Block11

 Block7:
	fcom qword ptr [ecx+0x228]
	fnstsw ax
	test ah,0x41
	jne Block11

 Block8:
	fld st(0)
	fadd qword ptr [ecx+0x228]
	fcom
	fnstsw ax
	test ah,0x41
	jne Block10

 Block9:
	fstp st(0)
	fstp qword ptr [ecx+0x228]
	jmp Block12

 Block10:
	fstp st(1)
	fstp qword ptr [ecx+0x228]
	jmp Block12

 Block11:
	fstp st(0)

 Block12:
	fld qword ptr [esp+0xC]
	fcom
	fnstsw ax
	test ah,5
	jp Block16

 Block13:
	fcom qword ptr [ecx+0x230]
	fnstsw ax
	test ah,5
	jp Block16

 Block14:
	fstp st(1)
	fld qword ptr [ecx+0x230]
	fadd st,st(1)
	fcom
	fnstsw ax
	test ah,5
	jnp Block19

 Block15:
	fstp st(1)
	fstp qword ptr [ecx+0x230]
	ret 0x10

 Block16:
	fcom
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block20

 Block17:
	fcom qword ptr [ecx+0x230]
	fnstsw ax
	test ah,0x41
	jne Block20

 Block18:
	fld qword ptr [ecx+0x230]
	fadd st,st(1)
	fcom
	fnstsw ax
	test ah,0x41
	jne Block15

 Block19:
	fstp st(0)
	fstp qword ptr [ecx+0x230]
	ret 0x10

 Block20:
	fstp st(0)
	ret 0x10
}
}
// CVecCtrl::SaveFloatStateBeforeCollision
__SUB_CLASS_THIS0(00591580, __thiscall, 23263,  CVecCtrl, void) {
__asm {

 Block0:
	ret
}
}
// CVecCtrl::AddRef
__SUB_CLASS0(00595390, __stdcall, 23328,  CVecCtrl, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,4
	mov dword ptr [esp+4],eax
	jmp dword ptr [__InterlockedIncrement]
}
}
// CVecCtrl::EndUpdateActive
__SUB_CLASS_THIS0(005915A0, __thiscall, 23263,  CVecCtrl, void) {
__asm {

 Block0:
	ret
}
}
// CVecCtrl::get_value
__SUB_CLASS(005915B0, __stdcall, 23330,  CVecCtrl, HRESULT, NakedParam<tagVARIANT>, tagVARIANT*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+4]
	mov edx,dword ptr [ecx+0xC]
	push esi
	mov esi,dword ptr [esp+0xC]
	push eax
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [esp+0x24]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [esp+0x28]
	add ecx,0xC
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x2C]
	push ecx
	mov ecx,dword ptr [edx+0x14]
	mov dword ptr [eax+0xC],esi
	call ecx
	pop esi
	ret 0x18
}
}
// CVecCtrl::put_x
__SUB_CLASS(005954E0, __stdcall, 23342,  CVecCtrl, HRESULT, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esp+8]
	push ecx
	push esi
	call edx
	test eax,eax
	jl Block2

 Block1:
	mov ecx,dword ptr [esp+8]
	mov edx,dword ptr [esp+0xC]
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0x40]
	push ecx
	push edx
	push esi
	call eax

 Block2:
	pop esi
	ret 8
}
}
// CVecCtrl::get_currentTime
__SUB_CLASS(00595610, __stdcall, 23341,  CVecCtrl, HRESULT, long*) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 8
}
}
// CVecCtrl::WorkUpdateActive
__SUB_CLASS_THIS(00594460, __thiscall, 23321,  CVecCtrl, int32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0xB4
	push ebx
	mov ebx,ecx
	cmp dword ptr [ebx+0x200],0
	mov eax,dword ptr [ebx+0x214]
	push esi
	push edi
	mov dword ptr [ebx+0x218],eax
	je Block2

 Block1:
	call CVecCtrl::Jump

 Block2:
	cmp dword ptr [ebx+0x220],0
	je Block4

 Block3:
	mov ecx,ebx
	call CVecCtrl::Impact

 Block4:
	cmp dword ptr [ebx+0x208],0
	je Block6

 Block5:
	mov ecx,ebx
	call CVecCtrl::FallDown

 Block6:
	cmp dword ptr [ebx+0x210],0
	je Block8

 Block7:
	mov ecx,ebx
	call CVecCtrl::Wings

 Block8:
	cmp dword ptr [ebx+0x1A0],0
	je Block14

 Block9:
	lea esi,[ebx+0x140]
	mov ecx,0xC
	lea edi,[esp+0x30]
	rep movsd
	mov ecx,dword ptr [ebp+8]
	push ecx
	mov ecx,ebx
	call CVecCtrl::CalcWalk
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0xC]
	push 0
	lea eax,[ebp+8]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,ebx
	call edx
	test eax,eax
	je Block23

 Block10:
	cmp dword ptr [ebp+8],0
	jle Block23

 Block11:
	cmp dword ptr [ebx+0x1A0],0
	fild dword ptr [ebp+8]
	fdiv qword ptr [__real_408f400000000000]
	fstp qword ptr [esp+0x28]
	je Block13

 Block12:
	lea eax,[ebx+0x140]
	mov esi,eax
	mov ecx,0xC
	lea edi,[esp+0x30]
	rep movsd
	mov ecx,dword ptr [eax+0x10]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [esp+0x60]
	push edx
	fstp qword ptr [esp+0x2C]
	lea eax,[esp+0x54]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fmul qword ptr [esp+0x38]
	add esp,8
	lea ecx,[ebx+0x140]
	fadd qword ptr [esp+0x28]
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_pos
	mov edx,dword ptr [ebx]
	fstp st(0)
	mov edx,dword ptr [edx+0xC]
	push 0
	lea eax,[ebp+8]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,ebx
	call edx
	jmp Block23

 Block13:
	lea eax,[ebx+0x20]
	mov esi,eax
	mov ecx,0x18
	lea edi,[esp+0x60]
	rep movsd
	mov ecx,dword ptr [eax+0x10]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [esp+0xA8]
	push edx
	fstp qword ptr [esp+0x2C]
	lea eax,[esp+0x9C]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fmul qword ptr [esp+0x38]
	add esp,8
	lea esi,[ebx+0x20]
	mov ecx,esi
	fadd qword ptr [esp+0x28]
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	mov ecx,dword ptr [esi+0x28]
	fstp st(0)
	push ecx
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x28]
	mov eax,dword ptr [esp+0xC0]
	push eax
	lea ecx,[esp+0xB4]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fmul qword ptr [esp+0x38]
	add esp,8
	mov ecx,esi
	fadd qword ptr [esp+0x28]
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	mov edx,dword ptr [ebx]
	fstp st(0)
	mov edx,dword ptr [edx+0x10]
	push 0
	lea eax,[ebp+8]
	push eax
	lea ecx,[esp+0x68]
	push ecx
	mov ecx,ebx
	call edx
	jmp Block23

 Block14:
	mov eax,dword ptr [ebp+8]
	lea esi,[ebx+0x20]
	mov ecx,0x18
	lea edi,[esp+0x60]
	rep movsd
	push eax
	mov ecx,ebx
	call CVecCtrl::CalcFloat
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x1C]
	mov ecx,ebx
	call eax
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	push 1
	lea eax,[ebp+8]
	push eax
	lea ecx,[esp+0x68]
	push ecx
	mov ecx,ebx
	call edx
	test eax,eax
	je Block22

 Block15:
	cmp dword ptr [ebp+8],0
	jle Block22

 Block16:
	fild dword ptr [ebp+8]
	mov eax,dword ptr [ebx+0x1A0]
	fdiv qword ptr [__real_408f400000000000]
	fstp qword ptr [esp+0x20]
	test eax,eax
	je Block19

 Block17:
	cmp dword ptr [eax+0x5C],0
	jne Block19

 Block18:
	mov dword ptr [ebx+0x1A0],0

 Block19:
	cmp dword ptr [ebx+0x1A0],0
	je Block21

 Block20:
	lea eax,[ebx+0x140]
	mov esi,eax
	mov ecx,0xC
	lea edi,[esp+0x30]
	rep movsd
	mov ecx,dword ptr [eax+0x10]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [esp+0x60]
	push edx
	fstp qword ptr [esp+0x34]
	lea eax,[esp+0x54]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fmul qword ptr [esp+0x30]
	add esp,8
	lea ecx,[ebx+0x140]
	fadd qword ptr [esp+0x30]
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_pos
	mov edx,dword ptr [ebx]
	fstp st(0)
	mov edx,dword ptr [edx+0xC]
	push 1
	lea eax,[ebp+8]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,ebx
	call edx
	jmp Block22

 Block21:
	mov eax,dword ptr [ebx]
	mov eax,dword ptr [eax+0x10]
	push 0
	lea ecx,[ebp+8]
	push ecx
	lea edx,[esp+0x68]
	push edx
	mov ecx,ebx
	call eax

 Block22:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x20]
	mov ecx,ebx
	call eax

 Block23:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [ebp+8]
	mov edx,dword ptr [edx+0x18]
	push eax
	mov ecx,ebx
	call edx
	pop edi
	pop esi
	mov eax,1
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CVecCtrl::put_currentTime
__SUB_CLASS(00595620, __stdcall, 23342,  CVecCtrl, HRESULT, long) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 8
}
}
// CVecCtrl::CalcFloat
_SUB_EXCEPTION_HANDLER(5934C0)
__SUB_CLASS_THIS(005934C0, __thiscall, 23279,  CVecCtrl, void, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5934C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA8
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x1C],0
	mov eax,dword ptr [esi+0x240]
	lea ecx,[eax+0xC]
	call TSecType<double>::GetData
	fstp qword ptr [esp+0x3C]
	mov eax,dword ptr [esi+0x60]
	lea edi,[esi+0x20]
	push eax
	lea ecx,[edi+0x30]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x4C]
	mov edx,dword ptr [edi+0x58]
	push edx
	lea eax,[edi+0x48]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x3C]
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ebx,dword ptr [ecx+8]
	mov ecx,dword ptr [esi+0x238]
	add esp,0x10
	add ecx,0xC
	call TSecType<double>::GetData
	fmul qword ptr [ebx+0x28]
	mov ecx,dword ptr [esi+0x238]
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ebx,dword ptr [edx+8]
	fstp qword ptr [esp+0x4C]
	add ecx,0xC
	call TSecType<double>::GetData
	fmul qword ptr [ebx+0x30]
	cmp dword ptr [esi+0x1A0],0
	fstp qword ptr [esp+0x24]
	fild dword ptr [ebp+8]
	fdiv qword ptr [__real_408f400000000000]
	fstp qword ptr [esp+0x34]
	jne Block18

 Block1:
	mov ecx,esi
	call CVecCtrl::IsSwimming
	test eax,eax
	jne Block18

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+8]
	mov ecx,esi
	call edx
	test eax,eax
	jne Block18

 Block3:
	mov eax,dword ptr [esi+0x240]
	lea ecx,[eax+0x78]
	call TSecType<double>::GetData
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	test ah,0x41
	jp Block18

 Block4:
	mov ecx,dword ptr [esi+0x238]
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ebx,dword ptr [eax+8]
	add ecx,0x24
	call TSecType<double>::GetData
	fmul qword ptr [ebx+0x68]
	cmp dword ptr [esi+0x214],0
	mov ebx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov eax,dword ptr [ebx+8]
	fst qword ptr [esp+0x54]
	fld qword ptr [eax+8]
	fdiv qword ptr [eax]
	fld qword ptr [esp+0x24]
	fmul st(1),st
	fxch
	fstp qword ptr [esp+0x64]
	je Block8

 Block5:
	fstp st(1)
	fstp st(0)
	fldz
	fcomp qword ptr [esp+0x2C]
	fnstsw ax
	test ah,5
	jp Block7

 Block6:
	fild dword ptr [esi+0x21C]
	mov ecx,dword ptr [ebx+8]
	fmul qword ptr [ecx+0x70]
	fdiv qword ptr [__real_408f400000000000]
	fstp qword ptr [esp+0x2C]
	jmp Block13

 Block7:
	mov ecx,dword ptr [esi+0x238]
	mov ebx,dword ptr [ebx+8]
	add ecx,0x24
	call TSecType<double>::GetData
	fld qword ptr [esp+0x34]
	sub esp,0x20
	fstp qword ptr [esp+0x18]
	lea edx,[esp+0x4C]
	fld qword ptr [esp+0x74]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x5C]
	fst qword ptr [esp+8]
	fld qword ptr [ebx+0x60]
	fmulp st(2),st
	fmulp st(1),st(0)
	fstp qword ptr [esp]
	push edx
	jmp Block12

 Block8:
	fldz
	fcomp qword ptr [esp+0x2C]
	fnstsw ax
	test ah,5
	jp Block10

 Block9:
	fld qword ptr [esp+0x34]
	sub esp,0x20
	fstp qword ptr [esp+0x18]
	lea eax,[esp+0x4C]
	fxch
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x5C]
	fstp qword ptr [esp+8]
	fstp qword ptr [esp]
	push eax
	call DecSpeed
	add esp,0x24
	jmp Block11

 Block10:
	fstp st(1)
	fstp st(0)

 Block11:
	mov ecx,dword ptr [esi+0x238]
	mov ebx,dword ptr [ebx+8]
	add ecx,0x24
	call TSecType<double>::GetData
	fld qword ptr [esp+0x34]
	sub esp,0x20
	fstp qword ptr [esp+0x18]
	lea ecx,[esp+0x4C]
	fld qword ptr [esp+0x74]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x5C]
	fst qword ptr [esp+8]
	fld qword ptr [ebx+0x60]
	fmulp st(2),st
	fmulp st(1),st(0)
	fstp qword ptr [esp]
	push ecx

 Block12:
	call AccSpeed
	add esp,0x24

 Block13:
	mov edx,dword ptr [esi+0x1F0]
	push edx
	lea ebx,[esi+0x1E8]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block17

 Block14:
	fld qword ptr [esp+0x54]
	sub esp,0x20
	fcomp qword ptr [esp+0x4C]
	fnstsw ax
	fld qword ptr [esp+0x54]
	fstp qword ptr [esp+0x18]
	test ah,0x41
	fldz
	lea eax,[esp+0x64]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x5C]
	fstp qword ptr [esp+8]
	jp Block16

 Block15:
	fld qword ptr [esp+0x44]
	fstp qword ptr [esp]
	push eax
	call DecSpeed
	add esp,0x24
	jmp Block55

 Block16:
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov edx,dword ptr [ecx+8]
	fld qword ptr [edx+0x38]
	fmul qword ptr [esp+0x44]
	fstp qword ptr [esp]
	push eax
	call DecSpeed
	add esp,0x24
	jmp Block55

 Block17:
	fld qword ptr [esp+0x34]
	mov ecx,dword ptr [esi+0x1F0]
	sub esp,0x18
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x7C]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x54]
	fstp qword ptr [esp]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x3C],eax
	fild dword ptr [esp+0x3C]
	lea edx,[esp+0x64]
	fmul qword ptr [esp+0x44]
	fadd st(0),st
	fstp qword ptr [esp]
	push edx
	call AccSpeed
	add esp,0x24
	jmp Block55

 Block18:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+8]
	mov ecx,esi
	call edx
	test eax,eax
	je Block33

 Block19:
	mov eax,dword ptr [esi+0x238]
	mov ebx,1
	test eax,eax
	je Block23

 Block20:
	lea ecx,[eax+0x30]
	call TSecType<long>::GetData
	cmp eax,2
	jne Block23

 Block21:
	mov eax,dword ptr [esi+0x238]
	cmp dword ptr [eax+0x3C],0
	je Block23

 Block22:
	mov eax,dword ptr [esi+0x240]
	add eax,0x84
	jmp Block24

 Block23:
	fld1
	sub esp,8
	lea ecx,[esp+0x80]
	fstp qword ptr [esp]
	call TSecType<double>::_ctor_1
	mov dword ptr [esp+0xC0],0
	mov dword ptr [esp+0x1C],ebx

 Block24:
	mov ecx,eax
	call TSecType<double>::GetData
	fstp qword ptr [esp+0x5C]
	mov dword ptr [esp+0xC0],0xFFFFFFFF
	test byte ptr [esp+0x1C],bl
	je Block27

 Block25:
	mov eax,dword ptr [esp+0x80]
	test eax,eax
	je Block27

 Block26:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block27:
	mov ecx,dword ptr [esi+0x238]
	add ecx,0x18
	call TSecType<double>::GetData
	fabs
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	fst qword ptr [esp+0x64]
	mov edx,dword ptr [ecx+8]
	fld qword ptr [edx+0x58]
	mov eax,dword ptr [esi+0x1F0]
	fmul qword ptr [esp+0x5C]
	push eax
	lea ebx,[esi+0x1E8]
	push ebx
	fmulp st(1),st(0)
	fst qword ptr [esp+0x5C]
	fstp qword ptr [esp+0x64]
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov edx,dword ptr [ecx+8]
	mov ecx,dword ptr [esi+0x1FC]
	mov dword ptr [esp+0x24],eax
	fild dword ptr [esp+0x24]
	lea eax,[esi+0x1F4]
	push ecx
	fmul qword ptr [edx+0x50]
	push eax
	mov dword ptr [esp+0x34],eax
	fmul qword ptr [esp+0x74]
	fstp qword ptr [esp+0x7C]
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov dword ptr [esp+0x2C],eax
	fild dword ptr [esp+0x2C]
	mov eax,dword ptr [edx+8]
	sub esp,0x10
	fmul qword ptr [eax+0x50]
	lea ecx,[esp+0x64]
	fmul qword ptr [esp+0x84]
	fstp qword ptr [esp+0x84]
	fld qword ptr [esp+0x54]
	fstp qword ptr [esp+0x18]
	fld qword ptr [esp+0x7C]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x5C]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x6C]
	fstp qword ptr [esp]
	push ecx
	call DecSpeed
	mov edx,dword ptr [esi+0x1F0]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	fld qword ptr [esp+0x60]
	add esp,0x2C
	sub esp,0x20
	fstp qword ptr [esp+0x18]
	test eax,eax
	je Block29

 Block28:
	fld qword ptr [esp+0x7C]
	lea eax,[esp+0x64]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x5C]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x8C]
	fstp qword ptr [esp]
	push eax
	call AccSpeed
	jmp Block30

 Block29:
	fldz
	lea ecx,[esp+0x64]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x5C]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x6C]
	fstp qword ptr [esp]
	push ecx
	call DecSpeed

 Block30:
	fld qword ptr [esp+0x58]
	add esp,0x24
	sub esp,0x20
	fstp qword ptr [esp+0x18]
	lea edx,[esp+0x4C]
	fld qword ptr [esp+0x74]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x5C]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x6C]
	fstp qword ptr [esp]
	push edx
	call DecSpeed
	mov eax,dword ptr [esi+0x1FC]
	mov ecx,dword ptr [esp+0x48]
	push eax
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	fld qword ptr [esp+0x60]
	add esp,0x2C
	sub esp,0x20
	fstp qword ptr [esp+0x18]
	test eax,eax
	je Block32

 Block31:
	fld qword ptr [esp+0x74]
	lea edx,[esp+0x4C]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x5C]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x84]
	fstp qword ptr [esp]
	push edx
	call AccSpeed
	add esp,0x24
	jmp Block55

 Block32:
	fldz
	lea eax,[esp+0x4C]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x5C]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x6C]
	fstp qword ptr [esp]
	push eax
	call DecSpeed
	add esp,0x24
	jmp Block55

 Block33:
	mov ecx,dword ptr [esi+0x238]
	add ecx,0x18
	call TSecType<double>::GetData
	fabs
	mov ecx,esi
	fstp qword ptr [esp+0x54]
	call CVecCtrl::IsSwimming
	test eax,eax
	mov eax,dword ptr [esi+0x240]
	je Block35

 Block34:
	lea ecx,[eax+0x54]
	call TSecType<double>::GetData
	fstp qword ptr [esp+0x64]
	mov eax,dword ptr [esi+0x240]
	lea ecx,[eax+0x60]
	call TSecType<double>::GetData
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov edx,dword ptr [ecx+8]
	fmul qword ptr [edx+0x48]
	jmp Block36

 Block35:
	lea ecx,[eax+0x78]
	call TSecType<double>::GetData
	fstp qword ptr [esp+0x64]
	mov eax,dword ptr [esi+0x240]
	lea ecx,[eax+0x84]
	call TSecType<double>::GetData
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,dword ptr [eax+8]
	fmul qword ptr [ecx+0x58]

 Block36:
	fmul qword ptr [esp+0x54]
	mov ecx,esi
	fstp qword ptr [esp+0x1C]
	call CVecCtrl::IsSwimming
	test eax,eax
	je Block38

 Block37:
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov eax,dword ptr [edx+8]
	fld qword ptr [eax+0x40]
	jmp Block39

 Block38:
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov edx,dword ptr [ecx+8]
	fld qword ptr [edx+0x50]

 Block39:
	mov eax,dword ptr [esi+0x1F0]
	fstp qword ptr [esp+0x5C]
	push eax
	lea ebx,[esi+0x1E8]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x2C],eax
	fild dword ptr [esp+0x2C]
	sub esp,0x18
	lea ecx,[esp+0x64]
	fmul qword ptr [esp+0x7C]
	fmul qword ptr [esp+0x84]
	fmul qword ptr [esp+0x74]
	fstp qword ptr [esp+0x8C]
	fld qword ptr [esp+0x54]
	fstp qword ptr [esp+0x18]
	fld qword ptr [esp+0x3C]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x5C]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x6C]
	fstp qword ptr [esp]
	push ecx
	call DecSpeed
	mov edx,dword ptr [esi+0x1F0]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	fld qword ptr [esp+0x60]
	add esp,0x2C
	sub esp,0x20
	fstp qword ptr [esp+0x18]
	test eax,eax
	je Block41

 Block40:
	fld qword ptr [esp+0x3C]
	lea eax,[esp+0x64]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x5C]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x8C]
	fstp qword ptr [esp]
	push eax
	call AccSpeed
	jmp Block42

 Block41:
	fldz
	lea ecx,[esp+0x64]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x5C]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x6C]
	fstp qword ptr [esp]
	push ecx
	call DecSpeed

 Block42:
	fld qword ptr [esp+0x58]
	add esp,0x24
	sub esp,0x20
	fstp qword ptr [esp+0x18]
	lea edx,[esp+0x4C]
	fld qword ptr [esp+0x3C]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x5C]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x6C]
	fstp qword ptr [esp]
	push edx
	call DecSpeed
	fld qword ptr [esp+0x80]
	fdiv qword ptr [esp+0x60]
	mov eax,dword ptr [esi+0x1FC]
	push eax
	lea ebx,[esi+0x1F4]
	push ebx
	fdiv qword ptr [esp+0x80]
	fmul qword ptr [esp+0x90]
	fstp qword ptr [esp+0x78]
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x2C
	test eax,eax
	jge Block47

 Block43:
	fld qword ptr [esp+0x1C]
	fmul qword ptr [__real_3fd3333333333333]
	fld qword ptr [esp+0x2C]
	fcom
	fnstsw ax
	test ah,0x41
	je Block50

 Block44:
	fcom
	fnstsw ax
	test ah,5
	jp Block53

 Block45:
	fld qword ptr [esp+0x4C]
	fmul qword ptr [__real_3fe0000000000000]
	fmul qword ptr [esp+0x34]
	faddp st(1),st(0)
	fst qword ptr [esp+0x2C]
	fcomp
	fnstsw ax
	test ah,0x41
	jne Block54

 Block46:
	fstp qword ptr [esp+0x2C]
	jmp Block55

 Block47:
	mov ecx,dword ptr [esi+0x1FC]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block52

 Block48:
	fld qword ptr [esp+0x1C]
	fmul qword ptr [__real_3ff8000000000000]
	fld qword ptr [esp+0x2C]
	fcom
	fnstsw ax
	test ah,0x41
	je Block45

 Block49:
	fcom
	fnstsw ax
	test ah,5
	jp Block53

 Block50:
	fld qword ptr [esp+0x4C]
	fmul qword ptr [esp+0x34]
	fsubp st(1),st(0)
	fst qword ptr [esp+0x2C]
	fcomp
	fnstsw ax
	test ah,5
	jp Block54

 Block51:
	fstp qword ptr [esp+0x2C]
	jmp Block55

 Block52:
	fld qword ptr [esp+0x34]
	sub esp,0x20
	fstp qword ptr [esp+0x18]
	lea edx,[esp+0x4C]
	fld qword ptr [esp+0x3C]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0x5C]
	fst qword ptr [esp+8]
	fmul qword ptr [esp+0x6C]
	fstp qword ptr [esp]
	push edx
	call AccSpeed
	add esp,0x24
	jmp Block55

 Block53:
	fstp st(1)

 Block54:
	fstp st(0)

 Block55:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x74]
	mov ecx,dword ptr [edi+0x40]
	push ecx
	lea edx,[edi+0x30]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [esp+0x54]
	add esp,8
	mov ecx,edi
	fmul qword ptr [__real_3fe0000000000000]
	fmul qword ptr [esp+0x3C]
	fadd qword ptr [esp+0x74]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x10],eax
	mov eax,dword ptr [edi+0x28]
	push eax
	lea ecx,[edi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x74]
	mov edx,dword ptr [edi+0x58]
	push edx
	lea eax,[edi+0x48]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [esp+0x3C]
	add esp,8
	lea ecx,[edi+0x18]
	fmul qword ptr [__real_3fe0000000000000]
	fmul qword ptr [esp+0x3C]
	fadd qword ptr [esp+0x74]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x44]
	sub esp,8
	lea ecx,[edi+0x30]
	fstp qword ptr [esp]
	mov dword ptr [edi+0x28],eax
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x2C]
	sub esp,8
	lea ecx,[edi+0x48]
	fstp qword ptr [esp]
	mov dword ptr [edi+0x40],eax
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x58],eax
	mov ecx,dword ptr [esp+0xB8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CVecCtrl::Wings
__SUB_CLASS_THIS0(00594400, __thiscall, 23263,  CVecCtrl, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov dword ptr [esi+0x210],0
	call CVecCtrl::JustJump
	test eax,eax
	je Block2

 Block1:
	push 0xD
	mov ecx,esi
	mov dword ptr [esi+0x214],1
	call CVecCtrl::SetMovePathAttribute

 Block2:
	pop esi
	ret
}
}
// CVecCtrl::get_count
__SUB_CLASS(00595460, __stdcall, 23340,  CVecCtrl, HRESULT, unsigned long*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	jne Block2

 Block1:
	mov eax,0x80004003
	ret 8

 Block2:
	mov dword ptr [eax],0
	xor eax,eax
	ret 8
}
}
// CVecCtrl::raw_Ratio
__SUB_CLASS(005958B0, __stdcall, 23353,  CVecCtrl, HRESULT, IWzVector2D*, long, long, long, long) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0x18
}
}
// CVecCtrl::GetMPA
_SUB_EXCEPTION_HANDLER(591F90)
__SUB_CLASS_THIS0(00591F90, __thiscall, 23306,  CVecCtrl, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_591F90
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
	mov ebx,ecx
	lea esi,[ebx+0x20]
	lea edi,[ebx+0x80]
	mov ecx,0x18
	rep movsd
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov eax,dword ptr [eax+0xC0]
	mov ecx,dword ptr [ebx+0x14]
	mov dword ptr [ebx+0x238],eax
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0xC]
	lea eax,[esp+0x10]
	push eax
	call edx
	push eax
	lea ecx,[ebx+0x23C]
	mov dword ptr [esp+0x24],0
	call ZRef<CAttrShoe>::op_assign_copy
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block4

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esp+0x14]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov eax,0x1E
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
// CVecCtrl::Jump
__SUB_CLASS_THIS0(00594430, __thiscall, 23263,  CVecCtrl, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov dword ptr [esi+0x200],0
	mov dword ptr [esi+0x204],1
	call CVecCtrl::JustJump
	test eax,eax
	je Block2

 Block1:
	push 1
	mov ecx,esi
	call CVecCtrl::SetMovePathAttribute

 Block2:
	pop esi
	ret
}
}
// CVecCtrl::get_y
__SUB_CLASS(00595510, __stdcall, 23341,  CVecCtrl, HRESULT, long*) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	push esi
	push edi
	test edx,edx
	jne Block2

 Block1:
	mov eax,0x80004003
	pop edi
	pop esi
	ret 8

 Block2:
	mov edi,dword ptr [_D_VTMISSING]
	mov ecx,dword ptr [esp+0xC]
	mov esi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	push 0
	push 0
	push 0
	mov dword ptr [eax],edi
	mov edi,dword ptr [_D_VTMISSING+4]
	push 0
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [_D_VTMISSING+8]
	push 0
	push 0
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [_D_VTMISSING+12]
	push edx
	push 0
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [esi+0x8C]
	push ecx
	call eax
	pop edi
	pop esi
	ret 8
}
}
// AbsPos::_ZtlSecurePut_vx
__SUB_CLASS(00590BC0, __fastcall, 23409,  AbsPos, double, double) {
__asm {

 Block0:
	fld qword ptr [esp+4]
	push esi
	mov esi,ecx
	sub esp,8
	lea ecx,[esi+0x30]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+8]
	mov dword ptr [esi+0x40],eax
	pop esi
	ret 8
}
}
// CVecCtrl::Impact
__SUB_CLASS_THIS0(00592050, __thiscall, 23263,  CVecCtrl, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x3C
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x1A0],0
	fld qword ptr [esi+0x228]
	fstp qword ptr [esp+0x30]
	mov dword ptr [esi+0x220],0
	fld qword ptr [esi+0x230]
	fstp qword ptr [esp+0x38]
	je Block2

 Block1:
	call CVecCtrl::DetachFromFoothold
	jmp Block4

 Block2:
	mov eax,dword ptr [esi+0x1BC]
	push eax
	lea ecx,[esi+0x1B4]
	push ecx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0
	push 0
	mov ecx,esi
	call eax

 Block4:
	fldz
	fld qword ptr [esp+0x30]
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block8

 Block5:
	mov ecx,dword ptr [esi+0x60]
	fstp st(0)
	push ecx
	lea edx,[esi+0x50]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x38]
	fcom
	add esp,8
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block8

 Block6:
	mov eax,dword ptr [esi+0x60]
	fstp st(0)
	push eax
	lea ecx,[esi+0x50]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x38]
	fadd st(1),st
	add esp,8
	fcom
	fnstsw ax
	test ah,0x41
	jne Block12

 Block7:
	fstp st(1)
	jmp Block13

 Block8:
	fldz
	fcompp
	fnstsw ax
	test ah,5
	jp Block14

 Block9:
	mov edx,dword ptr [esi+0x60]
	push edx
	lea eax,[esi+0x50]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [esp+0x38]
	add esp,8
	fnstsw ax
	test ah,5
	jp Block14

 Block10:
	mov ecx,dword ptr [esi+0x60]
	push ecx
	lea edx,[esi+0x50]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x38]
	fadd st(1),st
	add esp,8
	fcom
	fnstsw ax
	test ah,5
	jp Block12

 Block11:
	fstp st(1)
	jmp Block13

 Block12:
	fstp st(0)

 Block13:
	sub esp,8
	lea ecx,[esi+0x50]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x60],eax

 Block14:
	fldz
	fld qword ptr [esp+0x38]
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block18

 Block15:
	mov eax,dword ptr [esi+0x78]
	fstp st(0)
	push eax
	lea ecx,[esi+0x68]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x40]
	fcom
	add esp,8
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block18

 Block16:
	mov edx,dword ptr [esi+0x78]
	fstp st(0)
	push edx
	lea eax,[esi+0x68]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x40]
	fadd st(1),st
	add esp,8
	fcom
	fnstsw ax
	test ah,0x41
	jne Block21

 Block17:
	fstp st(1)
	jmp Block22

 Block18:
	fldz
	fcompp
	fnstsw ax
	test ah,5
	jp Block23

 Block19:
	mov ecx,dword ptr [esi+0x78]
	push ecx
	lea edx,[esi+0x68]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [esp+0x40]
	add esp,8
	fnstsw ax
	test ah,5
	jp Block23

 Block20:
	mov eax,dword ptr [esi+0x78]
	push eax
	lea ecx,[esi+0x68]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x40]
	fadd st(1),st
	add esp,8
	fcom
	fnstsw ax
	test ah,5
	jnp Block17

 Block21:
	fstp st(0)

 Block22:
	sub esp,8
	lea ecx,[esi+0x68]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x78],eax

 Block23:
	mov edx,dword ptr [esi+0x60]
	push edx
	lea eax,[esi+0x50]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	call __ftol2_sse
	mov dword ptr [esp+0x38],eax
	fild dword ptr [esp+0x38]
	lea ecx,[esi+0x50]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x60],eax
	mov ecx,dword ptr [esi+0x78]
	push ecx
	lea edx,[esi+0x68]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	call __ftol2_sse
	mov dword ptr [esp+0x38],eax
	fild dword ptr [esp+0x38]
	lea ecx,[esi+0x68]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	push 2
	mov ecx,esi
	mov dword ptr [esi+0x78],eax
	call CVecCtrl::SetMovePathAttribute
	pop esi
	mov esp,ebp
	pop ebp
	ret
}
}
// CVecCtrl::_ZtlSecureGet_m_nInputY
__SUB_CLASS0(0023A670, __fastcall, 23316,  CVecCtrl, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1FC]
	push eax
	add ecx,0x1F4
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CVecCtrl::_ZtlSecureGet_m_nInputX
__SUB_CLASS0(0023A650, __fastcall, 23316,  CVecCtrl, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1F0]
	push eax
	add ecx,0x1E8
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CVecCtrl::raw_Remove
__SUB_CLASS(005955F0, __stdcall, 23338,  CVecCtrl, HRESULT, NakedParam<tagVARIANT>, tagVARIANT*) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0x18
}
}
// CVecCtrl::SaveFloatStateAfterCollision
__SUB_CLASS_THIS0(00591590, __thiscall, 23263,  CVecCtrl, void) {
__asm {

 Block0:
	ret
}
}
// CVecCtrl::raw_Scale
__SUB_CLASS(005959C0, __stdcall, 23345,  CVecCtrl, HRESULT, long, long, long, long, long, long) {
__asm {

 Block0:
	sub esp,8
	cmp dword ptr [esp+0x14],0
	je Block3

 Block1:
	cmp dword ptr [esp+0x1C],0
	je Block3

 Block2:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+0x3C]
	lea esi,[edi+0x14]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x10]
	mov edx,dword ptr [esi+0x10]
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esp+0x3C]
	fild dword ptr [esp+0x38]
	mov esi,dword ptr [edi]
	fld qword ptr [esp+0x18]
	add esp,0x10
	fsub st,st(2)
	fimul dword ptr [esp+0x20]
	fidiv dword ptr [esp+0x24]
	faddp st(2),st
	fxch
	call __ftol2_sse
	fsub st(1),st
	fild dword ptr [esp+0x18]
	push eax
	fmulp st(2),st
	fild dword ptr [esp+0x20]
	fdivp st(2),st
	faddp st(1),st(0)
	call __ftol2_sse
	push eax
	mov eax,dword ptr [esi+0x40]
	push edi
	call eax
	pop edi
	pop esi
	add esp,8
	ret 0x1C

 Block3:
	mov eax,0x80070057
	add esp,8
	ret 0x1C
}
}
// AbsPos::_ZtlSecurePut_vy
__SUB_CLASS(00590BE0, __fastcall, 23409,  AbsPos, double, double) {
__asm {

 Block0:
	fld qword ptr [esp+4]
	push esi
	mov esi,ecx
	sub esp,8
	lea ecx,[esi+0x48]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+8]
	mov dword ptr [esi+0x58],eax
	pop esi
	ret 8
}
}
// is_blocked_area
__SUB(00590770, __cdecl, 80074,  int32_t, CStaticFoothold*, CStaticFoothold*, long, long) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [esp+8]
	mov edx,dword ptr [esp+0xC]
	mov eax,dword ptr [edx+0x14]
	mov edx,dword ptr [edx+0x18]
	push ebx
	mov ebx,dword ptr [ecx+0x18]
	push ebp
	push esi
	mov esi,dword ptr [ecx+0xC]
	push edi
	mov edi,dword ptr [ecx+0x10]
	mov ecx,dword ptr [ecx+0x14]
	mov dword ptr [esp+0x18],ebx
	mov ebp,ecx
	sub ebp,esi
	mov ebx,edx
	sub ebx,edi
	imul ebx,ebp
	mov ebp,dword ptr [esp+0x18]
	sub ebp,edi
	mov dword ptr [esp+0x10],edi
	mov edi,eax
	sub edi,esi
	imul ebp,edi
	sub ebx,ebp
	mov ebp,dword ptr [esp+0x10]
	sub ecx,esi
	test ebx,ebx
	mov ebx,dword ptr [esp+0x24]
	mov edi,ebx
	jle Block4

 Block1:
	sub edi,ebp
	imul ecx,edi
	mov edi,dword ptr [esp+0x18]
	sub edi,ebp
	mov ebp,dword ptr [esp+0x20]
	sub ebp,esi
	imul edi,ebp
	sub ecx,edi
	test ecx,ecx
	jle Block3

 Block2:
	mov esi,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi+0x10]
	mov esi,dword ptr [esi+0xC]
	mov edi,dword ptr [esp+0x20]
	sub eax,esi
	sub edx,ecx
	sub edi,esi
	sub ebx,ecx
	imul edx,edi
	imul eax,ebx
	sub eax,edx
	test eax,eax
	jg Block6

 Block3:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	pop ecx
	ret

 Block4:
	sub edi,ebp
	imul ecx,edi
	mov edi,dword ptr [esp+0x18]
	sub edi,ebp
	mov ebp,dword ptr [esp+0x20]
	sub ebp,esi
	imul edi,ebp
	sub ecx,edi
	test ecx,ecx
	jg Block6

 Block5:
	mov esi,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi+0x10]
	mov esi,dword ptr [esi+0xC]
	mov edi,dword ptr [esp+0x20]
	sub eax,esi
	sub edx,ecx
	sub edi,esi
	sub ebx,ecx
	imul edx,edi
	imul eax,ebx
	sub eax,edx
	test eax,eax
	jle Block3

 Block6:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	pop ecx
	ret
}
}
// AccSpeed
__SUB(00590850, __cdecl, 80076,  void, double&, double, double, double, double) {
__asm {

 Block0:
	fldz
	fld qword ptr [esp+0x18]
	fcom
	fnstsw ax
	test ah,5
	jnp Block8

 Block1:
	fld qword ptr [esp+8]
	mov ecx,dword ptr [esp+4]
	fcom st(2)
	fnstsw ax
	fstp st(2)
	test ah,0x41
	jne Block5

 Block2:
	fcom qword ptr [ecx]
	fnstsw ax
	test ah,0x41
	jne Block8

 Block3:
	fxch
	fdiv qword ptr [esp+0x10]
	fmul qword ptr [esp+0x20]
	fadd qword ptr [ecx]
	fst qword ptr [ecx]
	fcomp
	fnstsw ax
	test ah,0x41
	jne Block9

 Block4:
	fstp qword ptr [ecx]
	ret

 Block5:
	fchs
	fcom qword ptr [ecx]
	fnstsw ax
	test ah,5
	jp Block8

 Block6:
	fxch
	fdiv qword ptr [esp+0x10]
	fmul qword ptr [esp+0x20]
	fadd qword ptr [ecx]
	fst qword ptr [ecx]
	fcomp
	fnstsw ax
	test ah,5
	jp Block9

 Block7:
	fstp qword ptr [ecx]
	ret

 Block8:
	fstp st(1)

 Block9:
	fstp st(0)
	ret
}
}
// CVecCtrl::BoundPosMapRange
__SUB_CLASS_THIS(005910C0, __thiscall, 23308,  CVecCtrl, long, const RelPos&, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x34
	mov eax,dword ptr [ebp+0xC]
	push ebx
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [edi+0x150]
	lea esi,[edi+0x140]
	push ecx
	push esi
	mov dword ptr [esp+0x30],eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x38]
	mov ebx,dword ptr [ebp+8]
	mov edx,dword ptr [ebx+0x10]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x40]
	mov eax,dword ptr [edi+0x1A0]
	mov edx,dword ptr [esi+0x10]
	mov ecx,dword ptr [eax+0xC]
	fstp qword ptr [esp+0x40]
	fld qword ptr [eax+0x40]
	push edx
	push esi
	fstp qword ptr [esp+0x50]
	mov dword ptr [esp+0x44],ecx
	call _ZtlSecureFuseHelper<double>::call
	fmul qword ptr [esp+0x50]
	mov ecx,dword ptr [edi+0x1C8]
	add esp,0x18
	fiadd dword ptr [esp+0x2C]
	mov dword ptr [esp+0x2C],ecx
	fild dword ptr [esp+0x2C]
	fcomp
	fnstsw ax
	test ah,0x41
	jne Block7

 Block1:
	mov edi,dword ptr [edi+0x1A0]
	fstp st(0)
	sub ecx,dword ptr [edi+0xC]
	sub esp,8
	mov dword ptr [esp+0x34],ecx
	fild dword ptr [esp+0x34]
	mov ecx,esi
	fdiv qword ptr [edi+0x40]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x18]
	mov dword ptr [esi+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	fldz
	fcomp qword ptr [esp+0x30]
	mov dword ptr [esi+0x28],eax
	fnstsw ax
	test ah,0x44
	jnp Block3

 Block2:
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov ecx,dword ptr [ebx+0x10]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x48]
	add esp,0x10
	fdiv qword ptr [esp+0x30]
	fimul dword ptr [ebp+0xC]
	call __ftol2_sse
	jmp Block4

 Block3:
	mov eax,dword ptr [esp+0x28]

 Block4:
	test eax,eax
	jl Block12

 Block5:
	mov ecx,dword ptr [ebp+0xC]
	cmp eax,ecx
	jle Block14

 Block6:
	mov eax,ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8

 Block7:
	mov ecx,dword ptr [edi+0x1D0]
	mov dword ptr [esp+0x2C],ecx
	fild dword ptr [esp+0x2C]
	fcompp
	fnstsw ax
	test ah,5
	jp Block13

 Block8:
	mov edi,dword ptr [edi+0x1A0]
	sub ecx,dword ptr [edi+0xC]
	sub esp,8
	mov dword ptr [esp+0x34],ecx
	fild dword ptr [esp+0x34]
	mov ecx,esi
	fdiv qword ptr [edi+0x40]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x18]
	mov dword ptr [esi+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	fldz
	fcomp qword ptr [esp+0x30]
	mov dword ptr [esi+0x28],eax
	fnstsw ax
	test ah,0x44
	jnp Block10

 Block9:
	mov edx,dword ptr [esi+0x10]
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov eax,dword ptr [ebx+0x10]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x48]
	add esp,0x10
	fdiv qword ptr [esp+0x30]
	fimul dword ptr [ebp+0xC]
	call __ftol2_sse
	jmp Block11

 Block10:
	mov eax,dword ptr [esp+0x28]

 Block11:
	test eax,eax
	jge Block5

 Block12:
	xor eax,eax
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8

 Block13:
	mov eax,dword ptr [esp+0x28]

 Block14:
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CVecCtrl::FallDown
_SUB_EXCEPTION_HANDLER(593D80)
__SUB_CLASS_THIS0(00593D80, __thiscall, 23263,  CVecCtrl, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_593D80
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
	mov ecx,dword ptr [esi+0x1BC]
	mov eax,dword ptr [esi+0x20C]
	push ecx
	lea edx,[esi+0x1B4]
	xor edi,edi
	push edx
	mov dword ptr [esi+0x208],edi
	mov dword ptr [esi+0x1A8],eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push edi
	push edi
	push edi
	mov ecx,esi
	call edx
	jmp Block6

 Block2:
	cmp dword ptr [esi+0x1A0],edi
	je Block7

 Block3:
	mov ecx,esi
	call CVecCtrl::DetachFromFoothold
	mov ecx,dword ptr [esi+0x14]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	call edx
	test eax,eax
	jne Block6

 Block4:
	lea eax,[esp+0xC]
	push 0x907
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x20],edi
	call play_game_sound
	mov eax,dword ptr [esp+0x14]
	add esp,8
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,edi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov edi,dword ptr [ecx+8]
	mov ecx,dword ptr [esi+0x238]
	add ecx,0x24
	call TSecType<double>::GetData
	fld qword ptr [edi+0x70]
	fmul qword ptr [__real_bfd6a09e65dc27df]
	sub esp,8
	lea ecx,[esi+0x68]
	fdivrp st(1),st(0)
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x50]
	mov dword ptr [esi+0x78],eax
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x60],eax

 Block7:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CVecCtrl::raw_Insert
__SUB_CLASS(005955E0, __stdcall, 23346,  CVecCtrl, HRESULT, NakedParam<tagVARIANT>, NakedParam<tagVARIANT>) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0x24
}
}
// CVecCtrl::raw__GetSnapshot
__SUB_CLASS(00595A50, __stdcall, 23351,  CVecCtrl, HRESULT, long*, long*, long*, long*, long*, long*, double*, double*, NakedParam<tagVARIANT>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x1C
	push ebx
	push esi
	mov esi,dword ptr [ebp+8]
	cmp dword ptr [esi+0x10],0
	push edi
	je Block5

 Block1:
	mov esi,dword ptr [esi+0x10]
	test esi,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov edx,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x34]
	push 0
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x38]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x18]
	mov edx,dword ptr [ebp+0x14]
	push 0
	push eax
	mov eax,dword ptr [ebp+0x10]
	push edx
	mov edx,dword ptr [ebp+0xC]
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block25

 Block4:
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x34

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	call CWvsApp::GetTimeGap
	mov dword ptr [esp+0x10],eax
	fild dword ptr [esp+0x10]
	mov ebx,dword ptr [ebp+0xC]
	fdiv qword ptr [__real_403e000000000000]
	fstp qword ptr [esp+0x10]
	test ebx,ebx
	je Block10

 Block6:
	mov ecx,dword ptr [esi+0x84]
	lea eax,[esi+0x74]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x20]
	mov edx,dword ptr [esi+0x24]
	lea edi,[esi+0x14]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x30]
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x30]
	fsub qword ptr [esp+0x38]
	add esp,0x18
	fmul qword ptr [esp+0x10]
	faddp st(1),st(0)
	fldz
	fcomp
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
	mov dword ptr [ebx],eax

 Block10:
	mov edi,dword ptr [ebp+0x10]
	test edi,edi
	je Block15

 Block11:
	mov ecx,dword ptr [esi+0x9C]
	push ecx
	lea edx,[esi+0x8C]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x28]
	mov eax,dword ptr [esi+0x3C]
	push eax
	lea ecx,[esi+0x2C]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x28]
	mov edx,dword ptr [esi+0x3C]
	push edx
	lea eax,[esi+0x2C]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x38]
	fsub qword ptr [esp+0x30]
	add esp,0x18
	fmul qword ptr [esp+0x10]
	faddp st(1),st(0)
	fldz
	fcomp
	fnstsw ax
	test ah,0x41
	jp Block13

 Block12:
	fadd qword ptr [__real_3fe0000000000000]
	jmp Block14

 Block13:
	fsub qword ptr [__real_3fdffffffeed1f41]

 Block14:
	call __ftol2_sse
	mov dword ptr [edi],eax

 Block15:
	mov ebx,dword ptr [ebp+0x14]
	test ebx,ebx
	je Block20

 Block16:
	mov ecx,dword ptr [esi+0x84]
	lea eax,[esi+0x74]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x28]
	mov edx,dword ptr [esi+0x24]
	lea edi,[esi+0x14]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x28]
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x38]
	fsub qword ptr [esp+0x30]
	add esp,0x18
	fmul qword ptr [esp+0x10]
	faddp st(1),st(0)
	fldz
	fcomp
	fnstsw ax
	test ah,0x41
	jp Block18

 Block17:
	fadd qword ptr [__real_3fe0000000000000]
	jmp Block19

 Block18:
	fsub qword ptr [__real_3fdffffffeed1f41]

 Block19:
	call __ftol2_sse
	mov dword ptr [ebx],eax

 Block20:
	mov edi,dword ptr [ebp+0x18]
	test edi,edi
	je Block25

 Block21:
	mov ecx,dword ptr [esi+0x9C]
	push ecx
	lea edx,[esi+0x8C]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x28]
	mov eax,dword ptr [esi+0x3C]
	push eax
	lea ecx,[esi+0x2C]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x28]
	mov edx,dword ptr [esi+0x3C]
	push edx
	add esi,0x2C
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x38]
	fsub qword ptr [esp+0x30]
	add esp,0x18
	fmul qword ptr [esp+0x10]
	faddp st(1),st(0)
	fldz
	fcomp
	fnstsw ax
	test ah,0x41
	jp Block23

 Block22:
	fadd qword ptr [__real_3fe0000000000000]
	jmp Block24

 Block23:
	fsub qword ptr [__real_3fdffffffeed1f41]

 Block24:
	call __ftol2_sse
	mov dword ptr [edi],eax

 Block25:
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block27

 Block26:
	mov dword ptr [eax],0

 Block27:
	mov eax,dword ptr [ebp+0x20]
	test eax,eax
	je Block29

 Block28:
	mov dword ptr [eax],0

 Block29:
	mov eax,dword ptr [ebp+0x24]
	test eax,eax
	je Block31

 Block30:
	fldz
	fstp qword ptr [eax]

 Block31:
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block33

 Block32:
	fldz
	fstp qword ptr [eax]

 Block33:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x34
}
}
// CVecCtrl::UpdateActive
__SUB_CLASS_THIS0(00590980, __thiscall, 23263,  CVecCtrl, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x24]
	push edi
	call edx
	mov edi,eax
	test edi,edi
	je Block3

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x38]
	mov ecx,esi
	mov dword ptr [esi+0x1E0],1
	call edx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x28]
	push edi
	mov ecx,esi
	call edx
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x2C]
	pop edi
	mov ecx,esi
	pop esi
	jmp edx

 Block3:
	pop edi
	pop esi
	ret
}
}
// CVecCtrl::raw_WrapClip
__SUB_CLASS(005958C0, __stdcall, 23354,  CVecCtrl, HRESULT, NakedParam<tagVARIANT>, long, long, unsigned long, unsigned long, NakedParam<tagVARIANT>) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0x34
}
}
// CVecCtrl::raw_Rotate
__SUB_CLASS(005958D0, __stdcall, 23355,  CVecCtrl, HRESULT, double, NakedParam<tagVARIANT>) {
__asm {

 Block0:
	mov eax,0x80004001
	ret 0x1C
}
}
// CVecCtrl::UpdatePassive
__SUB_CLASS_THIS(00590930, __thiscall, 23298,  CVecCtrl, int64_t, const long*, const long*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	call edx
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0x34]
	push ecx
	push edx
	push 0x1E
	mov ecx,esi
	call eax
	pop esi
	ret 8

 Block2:
	xor eax,eax
	xor edx,edx
	pop esi
	ret 8
}
}
// CVecCtrl::OnAttachedObjectChanged
__SUB_CLASS_THIS(005929E0, __thiscall, 23303,  CVecCtrl, void, CStaticFoothold*, CLadderOrRope*, long) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x18]
	push edi
	push ecx
	mov ecx,esi
	call edx
	mov edi,dword ptr [esp+0x14]
	mov ebx,dword ptr [esi+0x1C0]
	mov ebp,dword ptr [esi+0x1C4]
	xor ecx,ecx
	cmp edi,ecx
	je Block6

 Block1:
	mov ebx,dword ptr [edi+0x2C]
	mov ebp,dword ptr [edi+0x30]
	mov dword ptr [esi+0x1A4],edi
	mov dword ptr [esi+0x1A8],ecx
	mov eax,dword ptr [esi+0x1B0]
	cmp eax,ecx
	je Block8

 Block2:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	mov eax,dword ptr [esi+0x1B0]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x1B0]
	test ecx,ecx
	je Block5

 Block4:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block5:
	mov dword ptr [esi+0x1B0],0
	xor ecx,ecx
	jmp Block8

 Block6:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ecx
	je Block9

 Block7:
	mov dword ptr [esi+0x1A8],ecx
	mov ebx,dword ptr [eax+0x18]
	xor ebp,ebp
	mov dword ptr [esi+0x1E4],1

 Block8:
	mov dword ptr [esi+0x214],ecx

 Block9:
	cmp ebx,dword ptr [esi+0x1C0]
	jne Block11

 Block10:
	cmp ebp,dword ptr [esi+0x1C4]
	je Block12

 Block11:
	mov ecx,dword ptr [esi+0x14]
	mov dword ptr [esi+0x1C0],ebx
	mov dword ptr [esi+0x1C4],ebp
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block12:
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esi+0x1B4]
	mov dword ptr [esi+0x1A0],edi
	call _ZtlSecureTearHelper<CLadderOrRope *>::call
	mov ecx,dword ptr [esi+0x1FC]
	mov edi,dword ptr [esi+0x1D8]
	push ecx
	lea edx,[esi+0x1F4]
	push edx
	mov dword ptr [esi+0x1BC],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	mov eax,dword ptr [esi+0x1F0]
	push eax
	lea ecx,[esi+0x1E8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x14]
	mov edx,dword ptr [ecx]
	add esp,0x10
	push esi
	push edi
	push ebx
	push eax
	mov eax,dword ptr [edx+4]
	call eax
	mov ecx,esi
	mov dword ptr [esi+0x1D8],eax
	call CVecCtrl::MakeNewMovePathElem
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC
}
}
// CVecCtrl::QueryInterface
__SUB_CLASS(00595300, __stdcall, 23327,  CVecCtrl, HRESULT, const _GUID&, void**) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+0x10]
	test esi,esi
	jne Block2

 Block1:
	mov eax,0x80004003
	pop esi
	ret 0xC

 Block2:
	push edi
	mov edi,dword ptr [esp+0x10]
	push offset _D_IID_IUNKNOWN
	push edi
	call _IsEqualGUID
	add esp,8
	test eax,eax
	jne Block6

 Block3:
	push offset __GUID_01110bc6_d843_4ff1_918c_9cf64632fb15
	push edi
	call _IsEqualGUID
	add esp,8
	test eax,eax
	jne Block6

 Block4:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	call _IsEqualGUID
	add esp,8
	test eax,eax
	jne Block6

 Block5:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	call _IsEqualGUID
	add esp,8
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [esp+0xC]
	lea eax,[ecx-0xC]
	neg eax
	sbb eax,eax
	and eax,ecx
	mov dword ptr [esi],eax
	mov esi,eax
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx
	pop edi
	xor eax,eax
	pop esi
	ret 0xC

 Block7:
	pop edi
	mov dword ptr [esi],0
	mov eax,0x80004002
	pop esi
	ret 0xC
}
}
// CVecCtrl::get_persistentUOL
__SUB_CLASS(005953E0, __stdcall, 23335,  CVecCtrl, HRESULT, wchar_t**) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [esp+8],eax
	setne al
	lea eax,[eax+eax-0x7FFFBFFD]
	ret 8
}
}
// CVecCtrl::BeginUpdatePassive
__SUB_CLASS_THIS0(00590960, __thiscall, 23305,  CVecCtrl, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	lea esi,[ecx+0x20]
	lea edi,[ecx+0x80]
	mov ecx,0x18
	rep movsd
	pop edi
	mov eax,1
	pop esi
	ret
}
}
// CVecCtrl::get_x2
__SUB_CLASS(005955A0, __stdcall, 23341,  CVecCtrl, HRESULT, long*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+4],eax
	mov eax,dword ptr [ecx+0x20]
	jmp eax
}
}
// CVecCtrl::raw_Offset
__SUB_CLASS(00595960, __stdcall, 23343,  CVecCtrl, HRESULT, long, long) {
__asm {

 Block0:
	sub esp,8
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+0x3C]
	lea esi,[edi+0x14]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x10]
	mov edx,dword ptr [esi+0x10]
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esp+0x2C]
	mov esi,dword ptr [edi]
	add esp,0x10
	fadd qword ptr [esp+8]
	call __ftol2_sse
	fiadd dword ptr [esp+0x18]
	push eax
	call __ftol2_sse
	push eax
	mov eax,dword ptr [esi+0x40]
	push edi
	call eax
	pop edi
	pop esi
	add esp,8
	ret 0xC
}
}
// CVecCtrl::SetActive
_SUB_EXCEPTION_HANDLER(5918B0)
__SUB_CLASS_THIS(005918B0, __thiscall, 23269,  CVecCtrl, void, int32_t, long, long, long, long, long, CStaticFoothold*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5918B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x68
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov eax,dword ptr [ebp+8]
	mov edx,dword ptr [ebp+0xC]
	mov ecx,dword ptr [ebx+0x1D0]
	mov dword ptr [ebx+0x18],eax
	mov eax,dword ptr [ebx+0x1C8]
	cmp edx,eax
	jge Block2

 Block1:
	mov dword ptr [ebp+0xC],eax
	jmp Block4

 Block2:
	cmp edx,ecx
	jle Block4

 Block3:
	mov dword ptr [ebp+0xC],ecx

 Block4:
	mov eax,dword ptr [ebx+0x1CC]
	mov edx,dword ptr [ebp+0x10]
	cmp edx,eax
	mov ecx,dword ptr [ebx+0x1D4]
	jge Block6

 Block5:
	mov dword ptr [ebp+0x10],eax
	jmp Block8

 Block6:
	cmp edx,ecx
	jle Block8

 Block7:
	mov dword ptr [ebp+0x10],ecx

 Block8:
	fild dword ptr [ebp+0xC]
	lea esi,[ebx+0x20]
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fild dword ptr [ebp+0x10]
	sub esp,8
	lea ecx,[esi+0x18]
	mov dword ptr [esi+0x10],eax
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fild dword ptr [ebp+0x14]
	sub esp,8
	lea ecx,[esi+0x30]
	mov dword ptr [esi+0x28],eax
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fild dword ptr [ebp+0x18]
	sub esp,8
	lea ecx,[esi+0x48]
	mov dword ptr [esi+0x40],eax
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov edi,dword ptr [ebp+0x20]
	mov dword ptr [esi+0x58],eax
	mov ecx,dword ptr [ebx+0x14]
	mov dword ptr [ebx+0x1A4],edi
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	call eax
	cmp eax,7
	je Block10

 Block9:
	mov dword ptr [ebx+0x1A0],edi

 Block10:
	xor eax,eax
	mov dword ptr [ebx+0x1A8],eax
	cmp dword ptr [ebx+0x1A0],eax
	je Block12

 Block11:
	mov eax,dword ptr [edi+0x2C]
	mov dword ptr [ebx+0x1C0],eax
	mov eax,dword ptr [edi+0x30]
	push edi
	lea ecx,[ebx+0x140]
	push esi
	mov dword ptr [ebx+0x1C4],eax
	call RelPos::SetFromAbsPos
	push edi
	lea eax,[ebx+0x140]
	push eax
	mov ecx,esi
	call AbsPos::SetFromRelPos
	jmp Block13

 Block12:
	mov dword ptr [ebx+0x1C0],7
	mov dword ptr [ebx+0x1C4],eax

 Block13:
	lea edi,[ebx+0x80]
	mov ecx,0x18
	rep movsd
	mov edi,dword ptr [ebp+0x1C]
	test edi,0xFFFFFFFE
	jne Block15

 Block14:
	mov ecx,dword ptr [ebx+0x14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ebx
	and edi,1
	push edi
	push 0
	push 0
	call eax
	mov edi,eax

 Block15:
	mov ecx,dword ptr [ebx+0x14]
	mov dword ptr [ebx+0x1D8],edi
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	call eax
	test eax,eax
	je Block19

 Block16:
	mov ecx,dword ptr [ebx+0x14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	call eax
	cmp eax,3
	je Block19

 Block17:
	mov ecx,dword ptr [ebx+0x14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	call eax
	cmp eax,4
	je Block19

 Block18:
	mov ecx,dword ptr [ebx+0x14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	call eax
	mov dword ptr [esp+0x2C],0
	cmp eax,8
	jne Block20

 Block19:
	mov dword ptr [esp+0x2C],1

 Block20:
	mov ecx,dword ptr [ebx+0x78]
	lea esi,[ebx+0x20]
	push ecx
	lea edx,[esi+0x48]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x3C]
	mov eax,dword ptr [esi+0x40]
	push eax
	lea ecx,[esi+0x30]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x4C]
	mov edx,dword ptr [esi+0x28]
	push edx
	lea eax,[esi+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x4C]
	mov ecx,dword ptr [ebp+0x20]
	add esp,0x18
	push 0
	push ecx
	push edi
	call __ftol2_sse
	fld qword ptr [esp+0x48]
	push eax
	call __ftol2_sse
	push eax
	call __ftol2_sse
	mov edx,dword ptr [esi+0x10]
	push eax
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	mov edi,dword ptr [ebp+8]
	push eax
	mov eax,dword ptr [esp+0x48]
	push eax
	push edi
	lea ecx,[ebx+0x244]
	call CMovePath::Init
	lea edx,[ebx+0x1F4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[ebx+0x1E8]
	xor ecx,ecx
	mov dword ptr [ebx+0x1FC],eax
	call _ZtlSecureTearHelper<long>::call
	lea esi,[ebx+0x23C]
	mov dword ptr [ebx+0x1F0],eax
	mov dword ptr [ebx+0x238],0
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block25

 Block21:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block24

 Block23:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block24:
	mov dword ptr [esi+4],0

 Block25:
	test edi,edi
	je Block30

 Block26:
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov edx,dword ptr [ecx+0xC0]
	mov dword ptr [ebx+0x238],edx
	mov ebx,dword ptr [ebx+0x14]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0xC]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebx
	call edx
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x84],0
	call ZRef<CAttrShoe>::op_assign_copy
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block30

 Block27:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x30]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x30]
	test ecx,ecx
	je Block30

 Block29:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block30:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x1C
}
}
// max_walk_speed
__SUB(00592B20, __cdecl, 80082,  double, CStaticFoothold*, const CAttrShoe*, long) {
__asm {

 Block0:
	sub esp,8
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push esi
	mov esi,dword ptr [ecx+8]
	push edi
	mov edi,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+0x38]
	lea ecx,[eax+0xC]
	call TSecType<double>::GetData
	fstp qword ptr [esp+8]
	mov ecx,dword ptr [esp+0x18]
	add ecx,0x24
	call TSecType<double>::GetData
	fld qword ptr [esi+8]
	cmp dword ptr [esp+0x1C],0
	fmul qword ptr [esp+8]
	fmulp st(1),st(0)
	je Block2

 Block1:
	fld qword ptr [edi+0x48]
	fmul st(0),st
	fimul dword ptr [esp+0x1C]
	fadd qword ptr [__real_3ff0000000000000]
	fmulp st(1),st(0)

 Block2:
	pop edi
	pop esi
	add esp,8
	ret
}
}
// CVecCtrl::get__NewEnum
__SUB_CLASS(00595440, __stdcall, 23339,  CVecCtrl, HRESULT, IUnknown**) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [esp+8],eax
	setne al
	lea eax,[eax+eax-0x7FFFBFFD]
	ret 8
}
}
// CVecCtrl::put_x2
__SUB_CLASS(005955B0, __stdcall, 23342,  CVecCtrl, HRESULT, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+4],eax
	mov eax,dword ptr [ecx+0x24]
	jmp eax
}
}
// CVecCtrl::BoundPosMapRange
__SUB_CLASS_THIS(00590EA0, __thiscall, 23310,  CVecCtrl, long, const AbsPos&, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x34
	mov eax,dword ptr [ecx+0x30]
	push ebx
	push esi
	lea esi,[ecx+0x20]
	push edi
	mov edi,dword ptr [ebp+0xC]
	push eax
	push esi
	mov dword ptr [esp+0x28],ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x38]
	mov ebx,dword ptr [ebp+8]
	mov ecx,dword ptr [ebx+0x10]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x40]
	mov edx,dword ptr [esi+0x28]
	push edx
	lea eax,[esi+0x18]
	fstp qword ptr [esp+0x3C]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x48]
	mov ecx,dword ptr [ebx+0x28]
	lea eax,[ebx+0x18]
	push ecx
	push eax
	mov dword ptr [esp+0x44],eax
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x50]
	mov edx,dword ptr [esi+0x10]
	push edx
	push esi
	fstp qword ptr [esp+0x58]
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [esp+0x48]
	fild dword ptr [eax+0x1C8]
	add esp,0x28
	fcom
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block5

 Block1:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x30]
	mov dword ptr [esi+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	fldz
	fcomp qword ptr [esp+0x28]
	mov dword ptr [esi+0x40],eax
	fnstsw ax
	test ah,0x44
	jnp Block9

 Block2:
	mov ecx,dword ptr [esi+0x10]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [ebx+0x10]
	push edx
	jmp Block8

 Block3:
	mov eax,dword ptr [ebp+0xC]
	cmp edi,eax
	jle Block12

 Block4:
	mov edi,eax
	jmp Block12

 Block5:
	mov eax,dword ptr [esi+0x10]
	fstp st(0)
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [esp+0x28]
	fild dword ptr [ecx+0x1D0]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block11

 Block6:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x30]
	mov dword ptr [esi+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	fldz
	fcomp qword ptr [esp+0x28]
	mov dword ptr [esi+0x40],eax
	fnstsw ax
	test ah,0x44
	jnp Block9

 Block7:
	mov edx,dword ptr [esi+0x10]
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [ebx+0x10]
	push eax

 Block8:
	push ebx
	fstp qword ptr [esp+0x48]
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x48]
	add esp,0x10
	fdiv qword ptr [esp+0x28]
	fimul dword ptr [ebp+0xC]
	call __ftol2_sse
	mov edi,eax

 Block9:
	test edi,edi
	jge Block3

 Block10:
	xor edi,edi
	jmp Block12

 Block11:
	fstp st(0)

 Block12:
	mov ecx,dword ptr [esi+0x28]
	push ecx
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [esp+0x28]
	fild dword ptr [eax+0x1CC]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block16

 Block13:
	sub esp,8
	lea ecx,[esi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x48]
	mov dword ptr [esi+0x28],eax
	call _ZtlSecureTearHelper<double>::call
	fldz
	fcomp qword ptr [esp+0x30]
	mov dword ptr [esi+0x58],eax
	fnstsw ax
	test ah,0x44
	jnp Block17

 Block14:
	mov ecx,dword ptr [esi+0x28]
	push ecx
	add esi,0x18
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x40]
	mov edx,dword ptr [ebx+0x28]
	mov eax,dword ptr [esp+0x2C]
	push edx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x48]
	add esp,0x10
	fdiv qword ptr [esp+0x30]
	fimul dword ptr [ebp+0xC]
	call __ftol2_sse
	xor ecx,ecx
	test eax,eax
	setle cl
	dec ecx
	and eax,ecx
	cmp eax,edi
	jl Block18

 Block15:
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8

 Block16:
	fstp st(0)

 Block17:
	mov eax,edi

 Block18:
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8
}
}
// RelPos::SetFromAbsPos
__SUB_CLASS_THIS(00590C00, __thiscall, 23403,  RelPos, void, AbsPos&, CStaticFoothold*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x34
	push ebx
	mov ebx,dword ptr [ebp+0xC]
	fld qword ptr [ebx+0x40]
	push esi
	mov esi,dword ptr [ebp+8]
	fabs
	fcomp qword ptr [__real_3fe0000000000000]
	push edi
	mov edi,ecx
	fnstsw ax
	test ah,0x41
	jne Block2

 Block1:
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fisub dword ptr [ebx+0xC]
	fdiv qword ptr [ebx+0x40]
	jmp Block3

 Block2:
	mov ecx,dword ptr [esi+0x28]
	push ecx
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fisub dword ptr [ebx+0x10]
	fdiv qword ptr [ebx+0x48]

 Block3:
	add esp,8
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x10],eax
	mov eax,dword ptr [esi+0x40]
	push eax
	lea ecx,[esi+0x30]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x38]
	mov edx,dword ptr [esi+0x58]
	fld qword ptr [ebx+0x40]
	push edx
	fstp qword ptr [esp+0x44]
	add esi,0x48
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fmul qword ptr [ebx+0x48]
	fld qword ptr [esp+0x40]
	add esp,8
	fmul qword ptr [esp+0x40]
	lea ecx,[edi+0x18]
	faddp st(1),st(0)
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x28],eax
	fld qword ptr [ebx+0x50]
	mov eax,dword ptr [edi+0x10]
	fstp qword ptr [esp+0x38]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcom
	add esp,8
	fnstsw ax
	test ah,0x41
	je Block5

 Block4:
	fstp st(0)
	fld qword ptr [esp+0x38]
	fcom
	fnstsw ax
	test ah,5
	jp Block6

 Block5:
	fstp st(1)
	jmp Block7

 Block6:
	fstp st(0)

 Block7:
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x10],eax
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CVecCtrl::WorkUpdatePassive
__SUB_CLASS_THIS(00591BE0, __thiscall, 23323,  CVecCtrl, int, long, const long*, const long*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x74
	push ebx
	xor eax,eax
	push esi
	mov ebx,ecx
	lea esi,[ebx+0x20]
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x40],eax
	mov dword ptr [esp+0x38],eax
	mov eax,dword ptr [esi+0x10]
	push edi
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x50]
	mov ecx,dword ptr [esi+0x28]
	push ecx
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x60]
	mov eax,dword ptr [esi+0x40]
	push eax
	lea ecx,[esi+0x30]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x70]
	mov edx,dword ptr [esi+0x58]
	push edx
	lea eax,[esi+0x48]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x80]
	mov ecx,dword ptr [ebx+0xF0]
	lea edi,[ebx+0xE0]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x90]
	mov edx,dword ptr [edi+0x28]
	push edx
	lea eax,[edi+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0xA0]
	add esp,0x30
	lea ecx,[esp+0x70]
	push ecx
	lea edx,[esp+0x6C]
	push edx
	lea eax,[esp+0x48]
	push eax
	lea ecx,[ebx+0x1D8]
	push ecx
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x74]
	push eax
	lea ecx,[esp+0x70]
	push ecx
	lea edx,[esp+0x6C]
	push edx
	lea eax,[esp+0x68]
	push eax
	lea ecx,[ebx+0x244]
	call CMovePath::CalcPassivePos
	test eax,eax
	mov eax,dword ptr [ebp+0xC]
	jne Block6

 Block1:
	test eax,eax
	je Block3

 Block2:
	fild dword ptr [eax]
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x10],eax

 Block3:
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block5

 Block4:
	fild dword ptr [eax]
	sub esp,8
	lea ecx,[esi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x28],eax

 Block5:
	or eax,0xFFFFFFFF
	or edx,eax
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC

 Block6:
	test eax,eax
	je Block8

 Block7:
	fild dword ptr [eax]
	fstp qword ptr [esp+0x48]

 Block8:
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block10

 Block9:
	fild dword ptr [eax]
	fstp qword ptr [esp+0x50]

 Block10:
	fld qword ptr [esp+0x48]
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x50]
	sub esp,8
	lea ecx,[esi+0x18]
	fstp qword ptr [esp]
	mov dword ptr [esi+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x58]
	sub esp,8
	lea ecx,[esi+0x30]
	fstp qword ptr [esp]
	mov dword ptr [esi+0x28],eax
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x60]
	sub esp,8
	lea ecx,[esi+0x48]
	fstp qword ptr [esp]
	mov dword ptr [esi+0x40],eax
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x68]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	mov dword ptr [esi+0x58],eax
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x70]
	sub esp,8
	lea ecx,[edi+0x18]
	fstp qword ptr [esp]
	mov dword ptr [edi+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [edi+0x28],eax
	mov eax,edx
	and eax,8
	xor ecx,ecx
	xor edi,edi
	or eax,ecx
	je Block12

 Block11:
	lea edi,[ebx+0x80]
	mov ecx,0x18
	rep movsd
	xor edi,edi

 Block12:
	mov ecx,dword ptr [ebx+0x214]
	and edx,0x4000
	mov dword ptr [ebx+0x218],ecx
	mov eax,edx
	xor ecx,ecx
	or eax,ecx
	je Block14

 Block13:
	mov dword ptr [ebx+0x214],1
	jmp Block15

 Block14:
	mov dword ptr [ebx+0x214],edi

 Block15:
	mov ecx,dword ptr [esp+0x3C]
	cmp cx,di
	jle Block17

 Block16:
	movsx edx,cx
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push edx
	call CWvsPhysicalSpace2D::GetFoothold
	mov ecx,dword ptr [esp+0x3C]
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	cmp cx,di
	jge Block23

 Block19:
	movsx ecx,cx
	neg ecx
	cmp ecx,1
	jb Block23

 Block20:
	mov esi,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov edx,dword ptr [esi+0xBC]
	cmp edx,edi
	je Block23

 Block21:
	cmp ecx,dword ptr [edx-4]
	jae Block23

 Block22:
	lea edx,[ecx*8]
	sub edx,ecx
	mov ecx,dword ptr [esi+0xBC]
	lea edi,[ecx+edx*4]
	mov dword ptr [esp+0x38],edi
	jmp Block24

 Block23:
	mov dword ptr [esp+0x38],edi

 Block24:
	xor esi,esi
	cmp eax,esi
	jne Block26

 Block25:
	mov dword ptr [ebx+0x1A0],esi
	jmp Block28

 Block26:
	cmp eax,dword ptr [ebx+0x1A0]
	je Block28

 Block27:
	mov ecx,dword ptr [ebx+0x14]
	mov dword ptr [ebx+0x1A4],eax
	mov dword ptr [ebx+0x1A0],eax
	mov dword ptr [ebx+0x1A8],esi
	mov edx,dword ptr [eax+0x2C]
	mov dword ptr [ebx+0x1C0],edx
	mov eax,dword ptr [eax+0x30]
	mov dword ptr [ebx+0x1C4],eax
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block28:
	mov eax,dword ptr [ebx+0x1A0]
	cmp eax,esi
	je Block31

 Block29:
	cmp dword ptr [eax+0x5C],2
	jne Block31

 Block30:
	mov ecx,dword ptr [ebx+0x30]
	lea esi,[ebx+0x20]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x80]
	mov edx,dword ptr [ebx+0xF0]
	lea edi,[ebx+0xE0]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x88]
	add esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x10],eax
	mov eax,dword ptr [esi+0x28]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x80]
	mov edx,dword ptr [edi+0x28]
	push edx
	add edi,0x18
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x88]
	add esp,8
	lea ecx,[esi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov edi,dword ptr [esp+0x38]
	mov dword ptr [esi+0x28],eax

 Block31:
	test edi,edi
	jne Block33

 Block32:
	lea edx,[ebx+0x1B4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<CLadderOrRope *>::call
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [ebx+0x1BC],eax
	mov eax,dword ptr [esp+0x40]
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC

 Block33:
	mov eax,dword ptr [ebx+0x1BC]
	push eax
	lea esi,[ebx+0x1B4]
	push esi
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	cmp edi,eax
	je Block35

 Block34:
	mov edx,esi
	mov ecx,edi
	mov dword ptr [ebx+0x1A8],0
	call _ZtlSecureTearHelper<CLadderOrRope *>::call
	mov dword ptr [ebx+0x1BC],eax
	mov ecx,dword ptr [edi+0x18]
	mov dword ptr [ebx+0x1C0],ecx
	mov ecx,dword ptr [ebx+0x14]
	mov dword ptr [ebx+0x1C4],0
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block35:
	mov eax,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x44]
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CVecCtrl::put_value
__SUB_CLASS(005915F0, __stdcall, 23332,  CVecCtrl, HRESULT, NakedParam<tagVARIANT>, NakedParam<tagVARIANT>) {
__asm {

 Block0:
	mov eax,0x80004005
	ret 0x24
}
}
// AbsPos::SetFromRelPos
__SUB_CLASS_THIS(00590CF0, __thiscall, 23412,  AbsPos, void, RelPos&, CStaticFoothold*) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	mov eax,dword ptr [ebx+0xC]
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	mov dword ptr [esp+0x20],eax
	call _ZtlSecureFuseHelper<double>::call
	fmul qword ptr [ebx+0x40]
	mov ecx,esi
	fiadd dword ptr [esp+0x20]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x10],eax
	mov eax,dword ptr [edi+0x10]
	mov edx,dword ptr [ebx+0x10]
	push eax
	push edi
	mov dword ptr [esp+0x20],edx
	call _ZtlSecureFuseHelper<double>::call
	fmul qword ptr [ebx+0x48]
	lea ecx,[esi+0x18]
	fiadd dword ptr [esp+0x20]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x28],eax
	mov ecx,dword ptr [edi+0x28]
	push ecx
	lea ebp,[edi+0x18]
	push ebp
	call _ZtlSecureFuseHelper<double>::call
	fmul qword ptr [ebx+0x40]
	lea ecx,[esi+0x30]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x40],eax
	mov edx,dword ptr [edi+0x28]
	push edx
	push ebp
	call _ZtlSecureFuseHelper<double>::call
	fmul qword ptr [ebx+0x48]
	lea ecx,[esi+0x48]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	pop edi
	mov dword ptr [esi+0x58],eax
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// CVecCtrl::SetImpactNext
__SUB_CLASS_THIS(00505CD0, __thiscall, 23295,  CVecCtrl, void, long, double, double) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CVecCtrl::SetMovePathAttribute
	fld qword ptr [esp+0x14]
	sub esp,0x10
	fstp qword ptr [esp+8]
	mov ecx,esi
	fld qword ptr [esp+0x1C]
	fstp qword ptr [esp]
	call CVecCtrl::SetImpactNext_0
	pop esi
	ret 0x14
}
}
// CVecCtrl::put_ry
__SUB_CLASS(005957A0, __stdcall, 23342,  CVecCtrl, HRESULT, long) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x10]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	push edi
	lea ecx,[esp+0x14]
	push ecx
	push esi
	call edx
	test eax,eax
	jl Block2

 Block1:
	mov ecx,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+4]
	mov edi,dword ptr [_D_VTMISSING+8]
	mov ebx,dword ptr [_D_VTMISSING+12]
	mov ebp,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],edx
	mov dword ptr [eax+8],edi
	mov dword ptr [eax+0xC],ebx
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x90]
	mov dword ptr [eax+8],edi
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x38]
	push eax
	push ecx
	push esi
	call edx

 Block2:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// CVecCtrl::CalcWalk
_SUB_EXCEPTION_HANDLER(592BA0)
__SUB_CLASS_THIS(00592BA0, __thiscall, 23279,  CVecCtrl, void, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_592BA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xE8
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xF8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor edi,edi
	mov dword ptr [esp+0x44],edi
	mov eax,dword ptr [esi+0x1A0]
	mov ebx,dword ptr [eax+0x38]
	mov eax,dword ptr [esi+0x240]
	lea ecx,[eax+0xC]
	mov dword ptr [esp+0x54],ebx
	call TSecType<double>::GetData
	fstp qword ptr [esp+0x94]
	mov eax,dword ptr [esi+0x1A0]
	fld qword ptr [eax+0x48]
	mov dword ptr [esp+0x50],1
	fabs
	fst qword ptr [esp+0xAC]
	fmul st(0),st
	fstp qword ptr [esp+0x9C]
	fld qword ptr [eax+0x48]
	fldz
	fcompp
	fnstsw ax
	test ah,0x41
	je Block2

 Block1:
	mov dword ptr [esp+0x50],0xFFFFFFFF

 Block2:
	mov ecx,dword ptr [esi+0x168]
	push ecx
	lea edx,[esi+0x158]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x7C]
	lea ecx,[ebx+0x18]
	add esp,8
	mov dword ptr [esp+0x6C],ecx
	call TSecType<double>::GetData
	fcomp qword ptr [__real_3ff0000000000000]
	fnstsw ax
	test ah,0x44
	jp Block5

 Block3:
	lea ecx,[ebx+0x24]
	call TSecType<double>::GetData
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	test ah,0x44
	jp Block5

 Block4:
	mov eax,dword ptr [esi+0x240]
	mov dword ptr [esp+0x5C],1
	lea ebx,[eax+0x18]
	jmp Block6

 Block5:
	fld1
	sub esp,8
	lea ecx,[esp+0x84]
	fstp qword ptr [esp]
	mov dword ptr [esp+0x64],edi
	call TSecType<double>::_ctor_1
	mov ebx,eax
	mov dword ptr [esp+0x100],edi
	mov dword ptr [esp+0x44],1

 Block6:
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,dword ptr [esp+0x54]
	mov edi,dword ptr [eax+8]
	add ecx,0xC
	call TSecType<double>::GetData
	fstp qword ptr [esp+0xA4]
	mov ecx,dword ptr [esi+0x238]
	call TSecType<double>::GetData
	fstp qword ptr [esp+0x8C]
	mov ecx,ebx
	call TSecType<double>::GetData
	fld qword ptr [edi]
	test byte ptr [esp+0x44],1
	fmul qword ptr [esp+0xA4]
	mov dword ptr [esp+0x100],0xFFFFFFFF
	fmul qword ptr [esp+0x8C]
	fmulp st(1),st(0)
	fstp qword ptr [esp+0xA4]
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x84]
	and dword ptr [esp+0x44],0xFFFFFFFE
	test eax,eax
	je Block9

 Block8:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block9:
	mov ecx,dword ptr [esi+0x1F0]
	push ecx
	lea edi,[esi+0x1E8]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x6C],eax
	fild dword ptr [esp+0x6C]
	add esp,8
	mov ecx,esi
	fmul qword ptr [esp+0xA4]
	fstp qword ptr [esp+0x7C]
	call CVecCtrl::IsSwimming
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov eax,dword ptr [edx+8]
	fld qword ptr [eax+0x88]
	fmul qword ptr [esp+0x7C]
	fstp qword ptr [esp+0x7C]

 Block11:
	mov ecx,dword ptr [esp+0x54]
	add ecx,0x24
	call TSecType<double>::GetData
	fst qword ptr [esp+0x8C]
	fldz
	fucompp
	fnstsw ax
	test ah,0x44
	jnp Block17

 Block12:
	mov eax,dword ptr [esi+0x1F0]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block16

 Block13:
	mov ecx,dword ptr [esi+0x1F0]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x6C],eax
	fild dword ptr [esp+0x6C]
	add esp,8
	fld qword ptr [esp+0x8C]
	fmul st(1),st
	fxch
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	fabs
	test ah,0x41
	jne Block15

 Block14:
	fadd st(0),st
	fmul qword ptr [esp+0x7C]
	jmp Block20

 Block15:
	fdivr qword ptr [__real_3fc999999999999a]
	fmul qword ptr [esp+0x7C]
	jmp Block20

 Block16:
	fld qword ptr [esp+0x8C]
	fmul qword ptr [esp+0xA4]
	jmp Block20

 Block17:
	mov edx,dword ptr [esi+0x1F0]
	push edx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x6C],eax
	fild dword ptr [esp+0x6C]
	add esp,8
	fld qword ptr [esp+0x7C]
	fmul st(1),st
	fldz
	fcom st(2)
	fnstsw ax
	fstp st(2)
	test ah,1
	jne Block19

 Block18:
	fstp st(0)
	jmp Block20

 Block19:
	fstp st(1)

 Block20:
	cmp dword ptr [esp+0x50],0
	jle Block22

 Block21:
	fld1
	fsub qword ptr [esp+0x9C]
	jmp Block23

 Block22:
	fld qword ptr [esp+0x9C]
	fadd qword ptr [__real_3ff0000000000000]

 Block23:
	mov eax,dword ptr [esi+0x1A0]
	fmulp st(1),st(0)
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov eax,dword ptr [eax+0x38]
	mov ebx,dword ptr [ecx+8]
	fstp qword ptr [esp+0x7C]
	mov edi,dword ptr [esi+0x240]
	lea ecx,[eax+0xC]
	call TSecType<double>::GetData
	fstp qword ptr [esp+0xA4]
	lea ecx,[edi+0x24]
	call TSecType<double>::GetData
	fld qword ptr [ebx+8]
	fmul qword ptr [esp+0xA4]
	mov ecx,esi
	fmulp st(1),st(0)
	fstp qword ptr [esp+0x54]
	call CVecCtrl::IsSwimming
	test eax,eax
	je Block25

 Block24:
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov eax,dword ptr [edx+8]
	fld qword ptr [eax+0x88]
	fmul qword ptr [esp+0x54]
	fstp qword ptr [esp+0x54]

 Block25:
	fldz
	fcomp qword ptr [esp+0x8C]
	fnstsw ax
	test ah,0x44
	jnp Block32

 Block26:
	mov eax,dword ptr [esi+0x1F0]
	push eax
	lea edi,[esi+0x1E8]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block30

 Block27:
	mov ecx,dword ptr [esi+0x1F0]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x6C],eax
	fild dword ptr [esp+0x6C]
	add esp,8
	fld qword ptr [esp+0x8C]
	fmul st(1),st
	fxch
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	fabs
	test ah,0x41
	jne Block29

 Block28:
	fadd st(0),st
	jmp Block31

 Block29:
	fdivr qword ptr [__real_3fc999999999999a]
	jmp Block31

 Block30:
	fld qword ptr [esp+0x8C]
	fabs

 Block31:
	fmul qword ptr [esp+0x54]
	fstp qword ptr [esp+0x54]

 Block32:
	cmp dword ptr [esp+0x5C],0
	mov ebx,2
	je Block34

 Block33:
	mov edi,dword ptr [esi+0x240]
	add edi,0x30
	jmp Block35

 Block34:
	fld1
	sub esp,8
	lea ecx,[esp+0xC0]
	fstp qword ptr [esp]
	call TSecType<double>::_ctor_1
	mov edi,eax
	or dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0x100],1

 Block35:
	mov ecx,dword ptr [esp+0x6C]
	call TSecType<double>::GetData
	fstp qword ptr [esp+0x6C]
	mov ecx,dword ptr [esi+0x238]
	add ecx,0xC
	call TSecType<double>::GetData
	fstp qword ptr [esp+0xA4]
	mov ecx,edi
	call TSecType<double>::GetData
	fld qword ptr [esp+0xA4]
	fmul qword ptr [esp+0x6C]
	mov dword ptr [esp+0x100],0xFFFFFFFF
	fmulp st(1),st(0)
	fst qword ptr [esp+0x6C]
	test byte ptr [esp+0x44],bl
	je Block38

 Block36:
	mov eax,dword ptr [esp+0xC0]
	test eax,eax
	je Block38

 Block37:
	push eax
	fstp st(0)
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	fld qword ptr [esp+0x6C]

 Block38:
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,dword ptr [edx+8]
	fcom qword ptr [ecx+0x78]
	fnstsw ax
	test ah,0x41
	jne Block40

 Block39:
	fstp st(0)
	fld qword ptr [ecx+0x78]
	fst qword ptr [esp+0x6C]

 Block40:
	fcom qword ptr [ecx+0x80]
	fnstsw ax
	test ah,5
	jp Block42

 Block41:
	fstp st(0)
	fld qword ptr [ecx+0x80]
	fst qword ptr [esp+0x6C]

 Block42:
	fld1
	fcom
	fnstsw ax
	test ah,0x41
	jne Block44

 Block43:
	fxch
	fmul qword ptr [__real_3fe0000000000000]
	fst qword ptr [esp+0x6C]
	fxch

 Block44:
	mov ecx,dword ptr [esi+0x2E4]
	test ecx,ecx
	jle Block48

 Block45:
	fld qword ptr [esi+0x2E8]
	fcom st(2)
	fnstsw ax
	test ah,5
	jp Block54

 Block46:
	fstp st(2)
	fxch
	fst qword ptr [esp+0x6C]
	fxch

 Block47:
	sub ecx,dword ptr [ebp+8]
	mov dword ptr [esi+0x2E4],ecx

 Block48:
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	fld st(1)
	mov ecx,dword ptr [eax+8]
	fmul qword ptr [ecx+0x10]
	fst qword ptr [esp+0xA4]
	fldz
	fld st(0)
	fucomp st(4)
	fnstsw ax
	fstp st(3)
	test ah,0x44
	jp Block50

 Block49:
	fstp st(0)
	fld qword ptr [ecx+0x10]
	fmul qword ptr [__real_3fc999999999999a]

 Block50:
	fst qword ptr [esp+0x44]
	fild dword ptr [ebp+8]
	fdiv qword ptr [__real_408f400000000000]
	fst qword ptr [esp+0x64]
	fld st(3)
	fcomp qword ptr [esp+0xAC]
	fnstsw ax
	test ah,0x44
	jp Block57

 Block51:
	fstp st(3)
	sub esp,0x20
	fstp st(1)
	lea ecx,[esp+0x94]
	fxch
	fstp qword ptr [esp+0x18]
	fld qword ptr [esp+0x74]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0xB4]
	fstp qword ptr [esp+8]
	fstp qword ptr [esp]
	push ecx
	call DecSpeed
	mov edx,dword ptr [esi+0x1F0]
	push edx
	lea eax,[esi+0x1E8]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x2C
	test eax,eax
	jne Block56

 Block52:
	fldz
	fcom qword ptr [esp+0x8C]
	fnstsw ax
	test ah,0x44
	jp Block55

 Block53:
	fld qword ptr [esp+0x64]
	sub esp,0x20
	fstp qword ptr [esp+0x18]
	lea eax,[esp+0x94]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0xB4]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0xC4]
	fstp qword ptr [esp]
	push eax
	call DecSpeed
	jmp Block86

 Block54:
	fstp st(0)
	jmp Block47

 Block55:
	fstp st(0)

 Block56:
	fld qword ptr [esp+0x64]
	sub esp,0x20
	fstp qword ptr [esp+0x18]
	lea ecx,[esp+0x94]
	fld qword ptr [esp+0x74]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0xB4]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x9C]
	fstp qword ptr [esp]
	push ecx
	jmp Block85

 Block57:
	fld qword ptr [esp+0x54]
	fld st(0)
	fst qword ptr [esp+0x5C]
	fxch
	fcom st(5)
	fnstsw ax
	test ah,5
	jp Block59

 Block58:
	fstp st(1)
	fld st(4)
	fst qword ptr [esp+0x5C]
	fxch

 Block59:
	fld qword ptr [esp+0x9C]
	faddp st(5),st
	fmulp st(4),st
	fxch st(3)
	fst qword ptr [esp+0x9C]
	fcom st(4)
	fnstsw ax
	test ah,5
	jp Block61

 Block60:
	fstp st(0)
	fld st(3)
	fst qword ptr [esp+0x9C]

 Block61:
	fild dword ptr [esp+0x50]
	fst qword ptr [esp+0x54]
	fmul qword ptr [esp+0x74]
	fcomp st(5)
	fnstsw ax
	fstp st(4)
	test ah,0x41
	jne Block63

 Block62:
	fstp st(3)
	jmp Block64

 Block63:
	fstp st(2)
	fxch
	fxch st(2)
	fxch

 Block64:
	sub esp,0x20
	fxch st(2)
	fstp qword ptr [esp+0x18]
	lea edx,[esp+0x94]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0xB4]
	fstp qword ptr [esp+8]
	fstp qword ptr [esp]
	push edx
	call DecSpeed
	mov eax,dword ptr [esi+0x240]
	add esp,0x24
	lea ecx,[eax+0x3C]
	call TSecType<double>::GetData
	fld qword ptr [esp+0xAC]
	fcom
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jp Block75

 Block65:
	fldz
	fcomp qword ptr [esp+0x6C]
	fnstsw ax
	test ah,0x44
	jp Block67

 Block66:
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,dword ptr [eax+8]
	fmul qword ptr [ecx+0x18]
	fmul qword ptr [esp+0x54]
	fsubr qword ptr [esp+0x7C]
	fstp qword ptr [esp+0x7C]
	jmp Block68

 Block67:
	fstp st(0)

 Block68:
	mov edx,dword ptr [esi+0x1F0]
	push edx
	lea eax,[esi+0x1E8]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	fldz
	add esp,8
	test eax,eax
	jne Block71

 Block69:
	fcom qword ptr [esp+0x6C]
	fnstsw ax
	test ah,0x44
	jnp Block71

 Block70:
	fcom qword ptr [esp+0x8C]
	fnstsw ax
	test ah,0x44
	jnp Block53

 Block71:
	fld qword ptr [esp+0x54]
	fld qword ptr [esp+0x7C]
	fmul st(1),st
	fxch
	fcomp st(2)
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block73

 Block72:
	fld qword ptr [esp+0x5C]
	jmp Block74

 Block73:
	fld qword ptr [esp+0x9C]

 Block74:
	fld qword ptr [esp+0x64]
	sub esp,0x20
	fstp qword ptr [esp+0x18]
	lea ecx,[esp+0x94]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0xB4]
	fstp qword ptr [esp+8]
	fstp qword ptr [esp]
	push ecx
	jmp Block85

 Block75:
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov eax,dword ptr [edx+8]
	mov ebx,dword ptr [esp+0x50]
	fld qword ptr [eax+0x18]
	mov edx,dword ptr [esi+0x1F0]
	fmul st,st(1)
	mov ecx,ebx
	neg ecx
	mov dword ptr [esp+0x6C],ecx
	fild dword ptr [esp+0x6C]
	push edx
	lea edi,[esi+0x1E8]
	push edi
	fmulp st(1),st(0)
	fstp qword ptr [esp+0x64]
	fmul qword ptr [eax+0x20]
	fstp qword ptr [esp+0x74]
	call _ZtlSecureFuseHelper<long>::call
	imul eax,ebx
	add esp,8
	test eax,eax
	jle Block77

 Block76:
	fld qword ptr [esp+0x5C]
	fld qword ptr [__real_3fe0000000000000]
	fmul st(1),st
	fxch
	fstp qword ptr [esp+0x5C]
	fmul qword ptr [esp+0x6C]
	jmp Block80

 Block77:
	mov eax,dword ptr [esi+0x1F0]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block79

 Block78:
	fldz
	fcomp qword ptr [esp+0x8C]
	fnstsw ax
	test ah,0x44
	jnp Block81

 Block79:
	fld qword ptr [esp+0x5C]
	fadd qword ptr [esp+0x7C]
	fstp qword ptr [esp+0x5C]
	fld qword ptr [esp+0x6C]
	fadd qword ptr [esp+0x9C]

 Block80:
	fstp qword ptr [esp+0x6C]

 Block81:
	fld qword ptr [esp+0x54]
	fmul qword ptr [esp+0x74]
	fldz
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block83

 Block82:
	fld qword ptr [esp+0x64]
	sub esp,0x20
	fstp qword ptr [esp+0x18]
	lea ecx,[esp+0x94]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0xB4]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x64]
	fstp qword ptr [esp]
	push ecx
	call DecSpeed
	add esp,0x24
	jmp Block84

 Block83:
	fstp st(0)

 Block84:
	fld qword ptr [esp+0x64]
	sub esp,0x20
	fstp qword ptr [esp+0x18]
	lea edx,[esp+0x94]
	fld qword ptr [esp+0x8C]
	fstp qword ptr [esp+0x10]
	fld qword ptr [esp+0xB4]
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x7C]
	fstp qword ptr [esp]
	push edx

 Block85:
	call AccSpeed

 Block86:
	mov eax,dword ptr [esi+0x150]
	lea edi,[esi+0x140]
	add esp,0x24
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp]
	add esi,0x170
	mov ecx,esi
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x10],eax
	mov ecx,dword ptr [edi+0x28]
	push ecx
	lea edx,[edi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp]
	lea ecx,[esi+0x18]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x28],eax
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0xB4]
	mov ecx,dword ptr [edi+0x28]
	push ecx
	lea edx,[edi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [esp+0x84]
	add esp,8
	mov ecx,edi
	fmul qword ptr [__real_3fe0000000000000]
	fmul qword ptr [esp+0x6C]
	fadd qword ptr [esp+0xB4]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [esp+0x74]
	sub esp,8
	lea ecx,[edi+0x18]
	fstp qword ptr [esp]
	mov dword ptr [edi+0x10],eax
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x28],eax
	mov ecx,dword ptr [esp+0xF8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CVecCtrl::get_item
__SUB_CLASS(00595420, __stdcall, 23338,  CVecCtrl, HRESULT, NakedParam<tagVARIANT>, tagVARIANT*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	jne Block2

 Block1:
	mov eax,0x80004003
	ret 0x18

 Block2:
	xor ecx,ecx
	mov word ptr [eax],cx
	xor eax,eax
	ret 0x18
}
}
// CVecCtrl::GetLadderOrRope
__SUB_CLASS_THIS0(000BBE80, __thiscall, 23274,  CVecCtrl, const CLadderOrRope*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1BC]
	push eax
	add ecx,0x1B4
	push ecx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	ret
}
}
// CVecCtrl::put_rx
__SUB_CLASS(005956D0, __stdcall, 23342,  CVecCtrl, HRESULT, long) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x10]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x70]
	push edi
	lea ecx,[esp+0x14]
	push ecx
	push esi
	call edx
	test eax,eax
	jl Block2

 Block1:
	mov ecx,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+4]
	mov edi,dword ptr [_D_VTMISSING+8]
	mov ebx,dword ptr [_D_VTMISSING+12]
	mov ebp,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],edx
	mov dword ptr [eax+8],edi
	mov dword ptr [eax+0xC],ebx
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x90]
	mov dword ptr [eax+8],edi
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x34]
	push eax
	push ecx
	push esi
	call edx

 Block2:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// CVecCtrl::Release
__SUB_CLASS0(005953B0, __stdcall, 23328,  CVecCtrl, unsigned long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	lea eax,[edi+4]
	push eax
	call __InterlockedDecrement
	mov esi,eax
	test esi,esi
	jne Block3

 Block1:
	lea ecx,[edi-0xC]
	test ecx,ecx
	je Block3

 Block2:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax
	mov eax,esi

 Block3:
	pop edi
	pop esi
	ret 4
}
}
