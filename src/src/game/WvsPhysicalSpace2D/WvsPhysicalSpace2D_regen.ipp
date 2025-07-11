#include "regen.hpp"
// WvsPhysicalSpace2D.ipp
#include "WvsPhysicalSpace2D.hpp"

// CStaticFoothold::GetForwardLink
__SUB_CLASS_THIS(00612B10, __thiscall, 17288,  CStaticFoothold, const CStaticFoothold*, double, double, double) {
__asm {

 Block0:
	fldz
	fld qword ptr [esp+4]
	fcom
	fnstsw ax
	test ah,5
	jnp Block3

 Block1:
	fcom
	fnstsw ax
	test ah,0x41
	jne Block6

 Block2:
	fld qword ptr [ecx+0x50]
	fsub qword ptr [esp+0xC]
	jmp Block4

 Block3:
	fld qword ptr [esp+0xC]

 Block4:
	fsubr qword ptr [esp+0x14]
	fcom st(2)
	fnstsw ax
	test ah,0x41
	je Block8

 Block5:
	fstp st(2)

 Block6:
	fstp st(1)
	mov eax,ecx
	fstp st(0)
	ret 0x18

 Block7:
	fxch st(2)

 Block8:
	fxch
	fcom st(2)
	fnstsw ax
	test ah,5
	jp Block10

 Block9:
	mov ecx,dword ptr [ecx+0x64]
	jmp Block11

 Block10:
	mov ecx,dword ptr [ecx+0x68]

 Block11:
	test ecx,ecx
	je Block20

 Block12:
	fxch st(2)
	fcom qword ptr [ecx+0x40]
	fnstsw ax
	test ah,5
	jp Block21

 Block13:
	fcom st(2)
	fnstsw ax
	test ah,0x41
	jne Block15

 Block14:
	fld qword ptr [ecx+0x50]
	jmp Block16

 Block15:
	fld st(0)

 Block16:
	fxch st(3)
	fcom
	fnstsw ax
	test ah,0x41
	jne Block18

 Block17:
	fld qword ptr [ecx+0x50]
	fsubrp st(4),st

 Block18:
	fxch st(2)
	fsubrp st(3),st
	fcom st(2)
	fnstsw ax
	test ah,5
	jnp Block7

 Block19:
	fstp st(0)
	mov eax,ecx
	fstp st(1)
	fstp st(0)
	ret 0x18

 Block20:
	fstp st(2)
	mov eax,ecx
	fstp st(0)
	fstp st(0)
	ret 0x18

 Block21:
	fstp st(0)
	mov eax,ecx
	fstp st(0)
	fstp st(0)
	ret 0x18
}
}
// CWvsPhysicalSpace2D::FootHoldMove
_SUB_EXCEPTION_HANDLER(61A580)
__SUB_CLASS_THIS(0061A580, __thiscall, 17405,  CWvsPhysicalSpace2D, void, unsigned long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61A580
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
	mov eax,dword ptr [esp+0x2C]
	push eax
	call CWvsPhysicalSpace2D::GetFoothold
	mov esi,eax
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block2

 Block1:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov dword ptr [esp+0x24],0
	test esi,esi
	je Block6

 Block3:
	mov eax,dword ptr [esi+0x18]
	mov ebx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [esi+0x14]
	mov edi,dword ptr [esi+0xC]
	add eax,ebx
	push eax
	mov eax,dword ptr [esp+0x34]
	add ecx,ebx
	push ecx
	add edx,eax
	push edx
	add edi,eax
	push edi
	mov ecx,esi
	call CStaticFoothold::SetPosition
	mov eax,dword ptr [esi+0x60]
	test eax,eax
	je Block5

 Block4:
	push eax
	lea ecx,[ebp+0x44]
	call FHTree::Delete
	mov dword ptr [esi+0x60],0

 Block5:
	mov eax,dword ptr [esi+0x18]
	mov ecx,dword ptr [esi+0x14]
	mov edx,dword ptr [esi+0x10]
	mov edi,dword ptr [esi+0xC]
	lea ebx,[esp+0x14]
	push ebx
	push eax
	push ecx
	push edx
	push edi
	lea ecx,[ebp+0x44]
	call FHTree::InsertData
	mov dword ptr [esi+0x60],eax

 Block6:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test esi,esi
	je Block9

 Block7:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block8:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block9:
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
// CWvsPhysicalSpace2D::CanWalkThrough
_SUB_EXCEPTION_HANDLER(615010)
__SUB_CLASS_THIS(00615010, __thiscall, 17396,  CWvsPhysicalSpace2D, int32_t, NakedParam<ZRef<CStaticFoothold>>, NakedParam<ZRef<CStaticFoothold>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_615010
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
	xor ebx,ebx
	mov dword ptr [esp+0x20],ebx
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x34]
	cmp ecx,ebx
	je Block23

 Block1:
	cmp edx,ebx
	je Block23

 Block2:
	fld qword ptr [ecx+0x40]
	fldz
	fcom
	fnstsw ax
	fstp st(1)
	test ah,1
	je Block22

 Block3:
	fcomp qword ptr [edx+0x40]
	fnstsw ax
	test ah,1
	je Block12

 Block4:
	cmp ecx,edx
	je Block21

 Block5:
	mov eax,dword ptr [ecx+0x14]
	cmp eax,dword ptr [edx+0xC]
	jg Block14

 Block6:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x14]
	call ZRef<CStaticFoothold>::_ctor_copy
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],2
	cmp ecx,ebx
	je Block11

 Block7:
	lea ecx,[ecx]

 Block8:
	fld qword ptr [ecx+0x40]
	fldz
	fcompp
	fnstsw ax
	test ah,1
	je Block11

 Block9:
	cmp ecx,dword ptr [esp+0x34]
	je Block20

 Block10:
	mov ecx,dword ptr [ecx+0x68]
	push ecx
	lea ecx,[esp+0x14]
	call ZRef<CStaticFoothold>::op_assign_ptr
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	jne Block8

 Block11:
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x20],1
	call ZRef<CStaticFoothold>::~ZRef<CStaticFoothold>

 Block12:
	lea ecx,[esp+0x28]

 Block13:
	mov byte ptr [esp+0x20],bl
	call ZRef<CStaticFoothold>::~ZRef<CStaticFoothold>
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CStaticFoothold>::~ZRef<CStaticFoothold>
	jmp Block32

 Block14:
	mov edx,dword ptr [edx+0x14]
	cmp edx,dword ptr [ecx+0xC]
	lea ecx,[esp+0x28]
	jg Block13

 Block15:
	push ecx
	lea ecx,[esp+0x14]
	call ZRef<CStaticFoothold>::_ctor_copy
	mov esi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],3
	cmp esi,ebx
	je Block11

 Block16:
	mov ecx,esi
	call CStaticFoothold::IsVertical
	test eax,eax
	jne Block11

 Block17:
	cmp esi,dword ptr [esp+0x34]
	je Block20

 Block18:
	mov esi,dword ptr [esi+0x64]
	push esi
	lea ecx,[esp+0x14]
	call ZRef<CStaticFoothold>::op_assign_ptr
	mov esi,dword ptr [esp+0x14]
	cmp esi,ebx
	jne Block16

 Block19:
	jmp Block11

 Block20:
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x20],1
	call ZRef<CStaticFoothold>::~ZRef<CStaticFoothold>

 Block21:
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x20],bl
	call ZRef<CStaticFoothold>::~ZRef<CStaticFoothold>
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CStaticFoothold>::~ZRef<CStaticFoothold>
	mov eax,1
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 0x10

 Block22:
	fstp st(0)
	jmp Block12

 Block23:
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	mov esi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x20],bl
	cmp ecx,ebx
	je Block28

 Block24:
	add ecx,4
	push ecx
	call edi
	test eax,eax
	jne Block27

 Block25:
	mov edx,dword ptr [esp+0x2C]
	add edx,4
	push edx
	call esi
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	je Block27

 Block26:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block27:
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],ebx

 Block28:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp edx,ebx
	je Block32

 Block29:
	add edx,4
	push edx
	call edi
	test eax,eax
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x34]
	add eax,4
	push eax
	call esi
	mov ecx,dword ptr [esp+0x34]
	cmp ecx,ebx
	je Block32

 Block31:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block32:
	xor eax,eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 0x10
}
}
// CStaticFoothold::CStaticFoothold
__SUB_CLASS_THIS(00614E80, __thiscall, 17278,  CStaticFoothold, void, unsigned long, long, long, long, long, long, long, unsigned long, unsigned long, CAttrFoothold*) {
__asm {

 Block0:
	mov edx,dword ptr [esp+0x10]
	sub esp,0x10
	xor eax,eax
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+0x1C],eax
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esi+0x10],ecx
	mov dword ptr [esi+0x20],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [esi+0x2C],eax
	mov eax,dword ptr [esp+0x3C]
	push edi
	mov edi,dword ptr [esp+0x2C]
	int 3// TODO: 	mov dword ptr [esi],offset CStaticFoothold::`vftable'
	mov dword ptr [esi+0x14],edx
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esi+0x24],edx
	mov dword ptr [esi+0x28],edi
	mov dword ptr [esi+0x30],ecx
	mov dword ptr [esi+0x38],eax
	test eax,eax
	je Block2

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [esi+0x58],edx
	mov edx,dword ptr [esi+0x14]
	sub edx,dword ptr [esi+0xC]
	mov dword ptr [esi+0x64],eax
	mov eax,dword ptr [esi+0x18]
	sub eax,dword ptr [esi+0x10]
	mov dword ptr [esp+0x20],edx
	fild dword ptr [esp+0x20]
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esi+0x5C],1
	mov dword ptr [esi+0x60],0
	fst qword ptr [esp+8]
	mov dword ptr [esi+0x68],ecx
	fild dword ptr [esp+0x20]
	fst qword ptr [esp+0x10]
	fmul st(0),st
	fld st(1)
	fmulp st(2),st
	faddp st(1),st(0)
	call __CIsqrt
	fst qword ptr [esi+0x50]
	fld qword ptr [esp+8]
	pop edi
	fdiv st,st(1)
	mov eax,esi
	fstp qword ptr [esi+0x40]
	fdivr qword ptr [esp+0xC]
	fstp qword ptr [esi+0x48]
	pop esi
	add esp,0x10
	ret 0x28
}
}
// CWvsPhysicalSpace2D::GetFootholdUnderneath
_SUB_EXCEPTION_HANDLER(616430)
__SUB_CLASS_THIS(00616430, __thiscall, 17387,  CWvsPhysicalSpace2D, CStaticFoothold*, long, long, long*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_616430
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
	mov esi,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x3C]
	cmp esi,edx
	jge Block2

 Block1:
	xor eax,eax
	jmp Block13

 Block2:
	xor edi,edi
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x24],edi
	mov ebx,dword ptr [esp+0x38]
	lea eax,[esp+0x14]
	push eax
	mov eax,dword ptr [esp+0x4C]
	push esi
	lea ebp,[ebx+eax]
	dec edx
	push ebp
	push edx
	mov edx,ebx
	sub edx,eax
	push edx
	mov dword ptr [esp+0x44],edi
	call CWvsPhysicalSpace2D::GetCrossCandidate
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x48],edi
	mov dword ptr [esp+0x44],esi
	mov dword ptr [esp+0x38],eax
	cmp eax,edi
	je Block10

 Block3:
	lea eax,[esp+0x38]
	push eax
	call ZList<ZRef<CStaticFoothold>>::GetNext
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [ecx+0xC]
	mov esi,dword ptr [ecx+0x14]
	add esp,4
	cmp eax,esi
	jge Block9

 Block4:
	cmp eax,ebx
	jg Block9

 Block5:
	cmp esi,ebx
	jl Block9

 Block6:
	mov edx,dword ptr [ecx+0xC]
	mov edi,dword ptr [ecx+0x10]
	mov eax,dword ptr [ecx+0x18]
	sub eax,edi
	mov ebp,ebx
	sub ebp,edx
	imul eax,ebp
	sub esi,edx
	cdq
	idiv esi
	add eax,edi
	cmp eax,dword ptr [esp+0x3C]
	jl Block9

 Block7:
	cmp eax,dword ptr [esp+0x44]
	jge Block9

 Block8:
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x48],ecx

 Block9:
	xor edi,edi
	cmp dword ptr [esp+0x38],edi
	jne Block3

 Block10:
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block12

 Block11:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax],ecx

 Block12:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	mov dword ptr [esp+0x14],0
	call ZList<ZRef<CStaticFoothold>>::RemoveAll
	mov eax,dword ptr [esp+0x48]

 Block13:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0x14
}
}
// CStaticFoothold::IsVertical
__SUB_CLASS_THIS0(00612AF0, __thiscall, 17289,  CStaticFoothold, int32_t) {
__asm {

 Block0:
	fldz
	fcomp qword ptr [ecx+0x40]
	fnstsw ax
	test ah,1
	jne Block2

 Block1:
	mov eax,1
	ret

 Block2:
	xor eax,eax
	ret
}
}
// CWvsPhysicalSpace2D::Load
_SUB_EXCEPTION_HANDLER(618AA0)
__SUB_CLASS_THIS(00618AA0, __thiscall, 17376,  CWvsPhysicalSpace2D, void, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_618AA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor edi,edi
	mov dword ptr [ebp+0x58],edi
	test byte ptr [_D__S3__1],1
	mov dword ptr [ebp-4],2
	jne Block2

 Block1:
	or dword ptr [_D__S3__1],1
	mov byte ptr [ebp-4],3
	call CWvsPhysicalSpace2D::GetConstantCRC
	mov dword ptr [_D_DWCONSTANTCRC],eax
	mov byte ptr [ebp-4],2

 Block2:
	mov ecx,dword ptr [ebp+0x74]
	mov eax,dword ptr [_D_DWCONSTANTCRC]
	mov dword ptr [esi+0xC4],eax
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[ebp-0xD4]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],4
	mov dword ptr [ebp-0x24],edi
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	lea ecx,[ebp-0x24]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov eax,dword ptr [ebp-0xD4]
	mov byte ptr [ebp-4],6
	cmp eax,edi
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	lea eax,[ebp-0x70]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],7
	mov dword ptr [ebp-0xE4],edi

 Block12:
	mov eax,dword ptr [ebp-0x24]
	xor ebx,ebx
	cmp eax,ebx
	je Block3

 Block13:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0xE4]
	push edx
	lea edx,[ebp-0x70]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block222

 Block14:
	lea ecx,[ebp-0x70]
	push ecx
	lea edx,[ebp+0x34]
	push edx
	call DetachBSTR
	add esp,8
	mov edi,dword ptr [ebp+0x34]
	cmp edi,ebx
	je Block16

 Block15:
	mov eax,dword ptr [edi]
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	push eax
	call __wtoi
	add esp,4
	push ebx
	push ebx
	push ecx
	mov dword ptr [ebp+0x24],eax
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],edi
	cmp edi,ebx
	je Block19

 Block18:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block19:
	mov ecx,dword ptr [ebp+0x74]
	mov byte ptr [ebp-4],9
	cmp ecx,ebx
	je Block3

 Block20:
	lea eax,[ebp-0x150]
	push eax
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x38],edi
	cmp eax,ebx
	je Block23

 Block21:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0xD8]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0xD8]
	cmp eax,ebx
	mov edi,ecx
	mov dword ptr [ebp+0x38],edi
	jge Block23

 Block22:
	cmp eax,0x80004002
	jne Block8

 Block23:
	cmp word ptr [ebp-0x150],8
	mov byte ptr [ebp-4],0xC
	jne Block26

 Block24:
	mov eax,dword ptr [ebp-0x148]
	xor edx,edx
	mov word ptr [ebp-0x150],dx
	cmp eax,ebx
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[ebp-0x150]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	cmp edi,ebx
	je Block3

 Block28:
	lea ecx,[ebp-0xE0]
	push ecx
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0xD
	mov dword ptr [ebp-0x3C],ebx
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block30:
	lea ecx,[ebp-0x3C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block32

 Block31:
	cmp eax,0x80004002
	jne Block8

 Block32:
	mov eax,dword ptr [ebp-0xE0]
	mov byte ptr [ebp-4],0xF
	cmp eax,ebx
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	lea eax,[ebp-0x60]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0x10
	mov dword ptr [ebp-0xE8],ebx

 Block35:
	mov edi,dword ptr [ebp-0x3C]
	test edi,edi
	je Block3

 Block36:
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp-0xE8]
	push edx
	lea eax,[ebp-0x60]
	push eax
	push 1
	push edi
	call ecx
	test eax,eax
	jne Block205

 Block37:
	lea edx,[ebp-0x60]
	push edx
	lea eax,[ebp+0x10]
	push eax
	call DetachBSTR
	add esp,8
	mov ebx,dword ptr [ebp+0x10]
	test ebx,ebx
	je Block39

 Block38:
	mov eax,dword ptr [ebx]
	jmp Block40

 Block39:
	xor eax,eax

 Block40:
	push eax
	call __wtoi
	add esp,4
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x3C],eax
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block42

 Block41:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block42:
	mov ecx,dword ptr [ebp+0x38]
	lea edx,[ebp-0x140]
	mov byte ptr [ebp-4],0x12
	push edx
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x40],edi
	test eax,eax
	je Block45

 Block43:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0xF0]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0xF0]
	mov edi,ecx
	mov dword ptr [ebp+0x40],edi
	test eax,eax
	jge Block45

 Block44:
	cmp eax,0x80004002
	jne Block8

 Block45:
	cmp word ptr [ebp-0x140],8
	mov byte ptr [ebp-4],0x15
	jne Block48

 Block46:
	mov eax,dword ptr [ebp-0x138]
	xor edx,edx
	mov word ptr [ebp-0x140],dx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[ebp-0x140]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block49:
	test edi,edi
	je Block3

 Block50:
	lea ecx,[ebp-0xDC]
	push ecx
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	xor edi,edi
	mov ecx,esp
	mov byte ptr [ebp-4],0x16
	mov dword ptr [ebp+0x1C],edi
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block52

 Block51:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block52:
	lea ecx,[ebp+0x1C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block54

 Block53:
	cmp eax,0x80004002
	jne Block8

 Block54:
	mov eax,dword ptr [ebp-0xDC]
	mov byte ptr [ebp-4],0x18
	cmp eax,edi
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0x19
	mov dword ptr [ebp-0xEC],edi
	jmp Block58

 Block57:
	mov ebx,dword ptr [ebp+0x10]

 Block58:
	mov edi,dword ptr [ebp+0x1C]
	test edi,edi
	je Block3

 Block59:
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp-0xEC]
	push edx
	lea eax,[ebp-0x50]
	push eax
	push 1
	push edi
	call ecx
	test eax,eax
	jne Block188

 Block60:
	lea edx,[ebp-0x50]
	push edx
	lea eax,[ebp]
	push eax
	call DetachBSTR
	add esp,8
	mov edi,dword ptr [ebp]
	test edi,edi
	je Block62

 Block61:
	mov eax,dword ptr [edi]
	jmp Block63

 Block62:
	xor eax,eax

 Block63:
	push eax
	call __wtoi
	add esp,4
	mov dword ptr [ebp-0x14],eax
	test eax,eax
	jne Block66

 Block64:
	mov byte ptr [ebp-4],0x19
	test edi,edi
	je Block183

 Block65:
	lea ecx,[edi+8]
	push ecx
	jmp Block176

 Block66:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block68

 Block67:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block68:
	mov ecx,dword ptr [ebp+0x40]
	lea edx,[ebp-0x120]
	mov byte ptr [ebp-4],0x1B
	push edx
	mov byte ptr [ebp-4],0x1A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x54],edi
	test eax,eax
	je Block71

 Block69:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x30]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x30]
	mov edi,ecx
	mov dword ptr [ebp+0x54],edi
	test eax,eax
	jge Block71

 Block70:
	cmp eax,0x80004002
	jne Block8

 Block71:
	mov ebx,8
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x120],bx
	jne Block74

 Block72:
	mov eax,dword ptr [ebp-0x118]
	xor edx,edx
	mov word ptr [ebp-0x120],dx
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea eax,[ebp-0x120]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block75:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x937
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x1F
	test edi,edi
	je Block3

 Block76:
	lea edx,[ebp-0x130]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x20
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x1C],eax
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x130],bx
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [ebp-0x130],ax
	mov eax,dword ptr [ebp-0x128]
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[ebp-0x130]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x939
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x110]
	mov byte ptr [ebp-4],0x21
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x22
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x18],eax
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x110],bx
	jne Block83

 Block81:
	mov eax,dword ptr [ebp-0x108]
	xor ecx,ecx
	mov word ptr [ebp-0x110],cx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[ebp-0x110]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x938
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x100]
	push ecx
	mov byte ptr [ebp-4],0x23
	mov ecx,edi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x24
	call get_int32
	add esp,8
	mov dword ptr [ebp+4],eax
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x100],bx
	jne Block87

 Block85:
	mov eax,dword ptr [ebp-0xF8]
	xor edx,edx
	mov word ptr [ebp-0x100],dx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea eax,[ebp-0x100]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block88:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x93A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x80]
	mov byte ptr [ebp-4],0x25
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x26
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x20],eax
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x80],bx
	jne Block91

 Block89:
	xor eax,eax
	mov word ptr [ebp-0x80],ax
	mov eax,dword ptr [ebp-0x78]
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea ecx,[ebp-0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xBC6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0xA0]
	mov byte ptr [ebp-4],0x27
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x28
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x34],eax
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0xA0],bx
	jne Block95

 Block93:
	mov eax,dword ptr [ebp-0x98]
	xor ecx,ecx
	mov word ptr [ebp-0xA0],cx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[ebp-0xA0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0xBC7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0xC0]
	push ecx
	mov byte ptr [ebp-4],0x29
	mov ecx,edi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2A
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x28],eax
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0xC0],bx
	jne Block99

 Block97:
	mov eax,dword ptr [ebp-0xB8]
	xor edx,edx
	mov word ptr [ebp-0xC0],dx
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[ebp-0xC0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block100:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1152
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x90]
	mov byte ptr [ebp-4],0x2B
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2C
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [ebp-0x40],eax
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x90],bx
	jne Block103

 Block101:
	xor eax,eax
	mov word ptr [ebp-0x90],ax
	mov eax,dword ptr [ebp-0x88]
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea ecx,[ebp-0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_CANTTHROUGH
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0xB0]
	mov byte ptr [ebp-4],0x2D
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2E
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [ebp-0x38],eax
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0xB0],bx
	jne Block107

 Block105:
	xor eax,eax
	mov word ptr [ebp-0xB0],ax
	mov eax,dword ptr [ebp-0xA8]
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea ecx,[ebp-0xB0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block108:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x79F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0xD0]
	mov byte ptr [ebp-4],0x2F
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x30
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x10],eax
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0xD0],bx
	jne Block111

 Block109:
	mov eax,dword ptr [ebp-0xC8]
	xor ecx,ecx
	mov word ptr [ebp-0xD0],cx
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea edx,[ebp-0xD0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x7A0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x31
	mov ecx,edi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x32
	call get_int32
	add esp,8
	mov dword ptr [ebp+8],eax
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp+0x44],bx
	jne Block115

 Block113:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov eax,dword ptr [esi+0xC4]
	push 0
	push 0
	push 0
	push eax
	lea ecx,[ebp-0x1C]
	push 4
	push ecx
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push eax
	lea edx,[ebp-0x18]
	push 4
	push edx
	mov dword ptr [esi+0xC4],eax
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push eax
	mov dword ptr [esi+0xC4],eax
	lea eax,[ebp+4]
	push 4
	push eax
	call CCrc32::GetCrc32
	add esp,0x48
	push 0
	push 0
	push 0
	push eax
	lea ecx,[ebp-0x20]
	push 4
	push ecx
	mov dword ptr [esi+0xC4],eax
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push eax
	lea edx,[ebp-0x34]
	push 4
	push edx
	mov dword ptr [esi+0xC4],eax
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push eax
	mov dword ptr [esi+0xC4],eax
	lea eax,[ebp-0x28]
	push 4
	push eax
	call CCrc32::GetCrc32
	add esp,0x48
	push 0
	push 0
	push 0
	push eax
	lea ecx,[ebp-0x40]
	push 4
	push ecx
	mov dword ptr [esi+0xC4],eax
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push eax
	lea edx,[ebp-0x38]
	push 4
	push edx
	mov dword ptr [esi+0xC4],eax
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push eax
	mov dword ptr [esi+0xC4],eax
	push 4
	lea eax,[ebp-0x10]
	push eax
	call CCrc32::GetCrc32
	add esp,0x48
	push 0
	push 0
	push 0
	push eax
	lea ecx,[ebp+8]
	push 4
	push ecx
	mov dword ptr [esi+0xC4],eax
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push eax
	lea edx,[ebp-0x14]
	push 4
	push edx
	mov dword ptr [esi+0xC4],eax
	call CCrc32::GetCrc32
	add esp,0x30
	push 0x48
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esi+0xC4],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x64],eax
	mov byte ptr [ebp-4],0x33
	test eax,eax
	je Block118

 Block117:
	mov ecx,eax
	call CAttrFoothold::_ctor_default
	mov edi,eax
	mov dword ptr [ebp+0xC],eax
	jmp Block119

 Block118:
	xor edi,edi
	mov dword ptr [ebp+0xC],edi

 Block119:
	mov dword ptr [ebp-0x154],edi
	test edi,edi
	je Block121

 Block120:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block121:
	cmp dword ptr [ebp-0x34],0
	mov byte ptr [ebp-4],0x34
	je Block123

 Block122:
	fild dword ptr [ebp-0x34]
	sub esp,8
	lea ecx,[edi+0x18]
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp]
	call TSecType<double>::SetData

 Block123:
	cmp dword ptr [ebp-0x28],0
	je Block125

 Block124:
	fild dword ptr [ebp-0x28]
	sub esp,8
	lea ecx,[edi+0x24]
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp]
	call TSecType<double>::SetData

 Block125:
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block127

 Block126:
	lea ecx,[edi+0x30]
	push eax
	call TSecType<int>::SetData

 Block127:
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block129

 Block128:
	lea ecx,[edi+0x3C]
	push eax
	call TSecType<int>::SetData

 Block129:
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	test eax,eax
	je Block131

 Block130:
	mov ecx,dword ptr [ebp+8]
	mov edx,dword ptr [ebp-0x10]
	push edi
	push ecx
	mov ecx,dword ptr [ebp+0x3C]
	push edx
	mov edx,dword ptr [ebp+0x24]
	push ecx
	mov ecx,dword ptr [ebp-0x20]
	push edx
	mov edx,dword ptr [ebp+4]
	push ecx
	mov ecx,dword ptr [ebp-0x18]
	push edx
	mov edx,dword ptr [ebp-0x1C]
	push ecx
	mov ecx,dword ptr [ebp-0x14]
	push edx
	push ecx
	mov ecx,eax
	call CStaticFoothold::_ctor_0
	mov ebx,eax
	mov dword ptr [ebp+0x14],eax
	jmp Block132

 Block131:
	xor ebx,ebx
	mov dword ptr [ebp+0x14],ebx

 Block132:
	mov dword ptr [ebp-0x2C],ebx
	test ebx,ebx
	je Block134

 Block133:
	lea edx,[ebx+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block134:
	lea ecx,[esi+0x7C]
	mov byte ptr [ebp-4],0x35
	call ZList<ZRef<CStaticFoothold>>::AddTail_
	mov edi,eax
	test ebx,ebx
	je Block136

 Block135:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block136:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block141

 Block137:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block140

 Block138:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block140

 Block139:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block140:
	mov dword ptr [edi+4],0

 Block141:
	lea ecx,[ebp-0x30]
	push ecx
	lea edx,[ebp-0x14]
	push edx
	lea ecx,[esi+0x90]
	mov dword ptr [edi+4],ebx
	call ZMap<unsigned long, ZRef<CStaticFoothold>, unsigned long>::Insert
	mov ecx,dword ptr [ebp-0x20]
	mov edx,dword ptr [ebp+4]
	lea eax,[ebp-0x30]
	push eax
	mov eax,dword ptr [ebp-0x18]
	push ecx
	mov ecx,dword ptr [ebp-0x1C]
	push edx
	push eax
	push ecx
	lea ecx,[esi+0x44]
	call FHTree::InsertData
	lea edi,[esi+0x34]
	mov dword ptr [ebx+0x60],eax
	mov eax,dword ptr [edi]
	test eax,eax
	je Block143

 Block142:
	mov eax,dword ptr [eax-4]

 Block143:
	cmp eax,dword ptr [ebp+0x3C]
	mov dword ptr [ebp+0x28],eax
	jg Block146

 Block144:
	mov ebx,dword ptr [ebp+0x3C]
	lea edx,[ebp+0x5F]
	push edx
	push 0
	inc ebx
	push ebx
	mov ecx,edi
	call ZArray<RANGE>::_Realloc
	lea eax,[ebp+0x5F]
	push eax
	push 0
	push ebx
	lea ecx,[esi+0x3C]
	call ZArray<ZArray<unsigned long>>::_Realloc
	mov eax,dword ptr [ebp+0x28]
	mov edx,dword ptr [ebp+0x3C]
	mov ecx,0x80000000

 Block145:
	mov ebx,dword ptr [edi]
	mov dword ptr [ebx+eax*8],0x7FFFFFFF
	mov ebx,dword ptr [edi]
	mov dword ptr [ebx+eax*8+4],ecx
	inc eax
	cmp eax,edx
	jle Block145

 Block146:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ebp+0x3C]
	mov ebx,dword ptr [ebp-0x1C]
	lea eax,[ecx+edx*8]
	mov dword ptr [ebp+0x64],eax
	mov eax,dword ptr [ebp+4]
	cmp ebx,eax
	jge Block148

 Block147:
	mov dword ptr [ebp+0x28],ebx
	mov dword ptr [ebp+0x18],eax
	jmp Block149

 Block148:
	mov dword ptr [ebp+0x28],eax
	mov dword ptr [ebp+0x18],ebx

 Block149:
	mov eax,dword ptr [ebp-0x18]
	mov ecx,dword ptr [ebp-0x20]
	cmp eax,ecx
	jge Block151

 Block150:
	mov edi,eax
	mov eax,ecx
	jmp Block152

 Block151:
	mov edi,ecx

 Block152:
	mov edx,dword ptr [ebp+0x28]
	add edx,0x1E
	cmp dword ptr [esi+0x24],edx
	jle Block154

 Block153:
	mov dword ptr [esi+0x24],edx

 Block154:
	mov ecx,dword ptr [ebp+0x18]
	lea edx,[ecx-0x1E]
	cmp dword ptr [esi+0x2C],edx
	jge Block156

 Block155:
	mov dword ptr [esi+0x2C],edx

 Block156:
	lea edx,[edi-0x12C]
	cmp dword ptr [esi+0x28],edx
	jle Block158

 Block157:
	mov dword ptr [esi+0x28],edx

 Block158:
	cmp ebx,dword ptr [ebp+4]
	je Block161

 Block159:
	add eax,0xA
	cmp dword ptr [esi+0x30],eax
	jge Block161

 Block160:
	mov dword ptr [esi+0x30],eax

 Block161:
	mov eax,dword ptr [ebp+0x64]
	mov edx,dword ptr [ebp+0x28]
	cmp dword ptr [eax],edx
	jle Block163

 Block162:
	mov dword ptr [eax],edx

 Block163:
	cmp dword ptr [eax+4],ecx
	jge Block165

 Block164:
	mov dword ptr [eax+4],ecx

 Block165:
	mov edi,dword ptr [ebp+0x3C]
	mov eax,dword ptr [esi+0x3C]
	add edi,edi
	add edi,edi
	add eax,edi
	mov eax,dword ptr [eax]
	test eax,eax
	je Block167

 Block166:
	cmp dword ptr [eax-4],0
	jne Block168

 Block167:
	push 0xFFFFFFFF
	lea ecx,[esi+0x38]
	call ZArray<long>::InsertBefore
	mov ecx,dword ptr [ebp+0x3C]
	mov dword ptr [eax],ecx

 Block168:
	mov ecx,dword ptr [esi+0x3C]
	add ecx,edi
	push 0xFFFFFFFF
	call ZArray<unsigned long>::InsertBefore
	mov ebx,dword ptr [ebp+0x14]
	mov edx,dword ptr [ebp-0x14]
	lea edi,[ebx+4]
	push edi
	mov dword ptr [eax],edx
	mov byte ptr [ebp-4],0x34
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block170

 Block169:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block170:
	mov edi,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x2C],0
	mov byte ptr [ebp-4],0x1E
	test edi,edi
	je Block174

 Block171:
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block173

 Block172:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block173:
	mov dword ptr [ebp-0x154],0

 Block174:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x1A
	call edx
	cmp dword ptr [ebp],0
	mov byte ptr [ebp-4],0x19
	je Block183

 Block175:
	mov edi,dword ptr [ebp]
	lea eax,[edi+8]
	push eax

 Block176:
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block182

 Block177:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block179

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block179:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block181

 Block180:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block181:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block182:
	mov dword ptr [ebp],0

 Block183:
	cmp word ptr [ebp-0x50],8
	jne Block186

 Block184:
	mov eax,dword ptr [ebp-0x48]
	xor ecx,ecx
	mov word ptr [ebp-0x50],cx
	test eax,eax
	je Block57

 Block185:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block186:
	lea edx,[ebp-0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jl Block8

 Block187:
	jmp Block57

 Block188:
	cmp word ptr [ebp-0x50],8
	mov byte ptr [ebp-4],0x18
	jne Block191

 Block189:
	xor eax,eax
	mov word ptr [ebp-0x50],ax
	mov eax,dword ptr [ebp-0x48]
	test eax,eax
	je Block192

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block192

 Block191:
	lea ecx,[ebp-0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block192:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],0x15
	call eax
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x11
	call edx
	mov byte ptr [ebp-4],0x10
	test ebx,ebx
	je Block200

 Block193:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block199

 Block194:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block196

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block196:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block198

 Block197:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block198:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block199:
	mov dword ptr [ebp+0x10],0

 Block200:
	cmp word ptr [ebp-0x60],8
	jne Block203

 Block201:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	test eax,eax
	je Block35

 Block202:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block203:
	lea edx,[ebp-0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block35

 Block204:
	jmp Block8

 Block205:
	mov ebx,8
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x60],bx
	jne Block208

 Block206:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block209

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block209

 Block208:
	lea ecx,[ebp-0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block209:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],0xC
	call eax
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],bl
	call edx
	mov edi,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],7
	test edi,edi
	je Block217

 Block210:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block216

 Block211:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block213

 Block212:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block213:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block215

 Block214:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block215:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block216:
	mov dword ptr [ebp+0x34],0

 Block217:
	cmp word ptr [ebp-0x70],bx
	jne Block220

 Block218:
	mov eax,dword ptr [ebp-0x68]
	xor ecx,ecx
	mov word ptr [ebp-0x70],cx
	test eax,eax
	je Block12

 Block219:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block220:
	lea edx,[ebp-0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block12

 Block221:
	jmp Block8

 Block222:
	cmp dword ptr [ebp+0x7C],ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block266

 Block223:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x629
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x36
	test ecx,ecx
	jne Block225

 Block224:
	push 0x80004003
	call _com_issue_error

 Block225:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x37
	call get_int32
	add esp,8
	mov edi,eax
	neg edi
	sbb edi,edi
	neg edi
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],7
	jne Block228

 Block226:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block229

 Block227:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block229

 Block228:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block229:
	test edi,edi
	je Block266

 Block230:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x625
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x38
	test ecx,ecx
	jne Block232

 Block231:
	push 0x80004003
	call _com_issue_error

 Block232:
	lea eax,[ebp+0x44]
	push eax
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x39
	call get_int32
	mov edi,8
	add esp,8
	mov dword ptr [ebp+0x64],eax
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x44],di
	jne Block235

 Block233:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block236

 Block234:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block236

 Block235:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block236:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x24],esp
	push 0x626
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x3A
	test ecx,ecx
	jne Block238

 Block237:
	push 0x80004003
	call _com_issue_error

 Block238:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3B
	call get_int32
	add esp,8
	mov dword ptr [ebp+0x24],eax
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x44],di
	jne Block241

 Block239:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block242

 Block240:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block242

 Block241:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block242:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x30],esp
	push 0x627
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x3C
	test ecx,ecx
	jne Block244

 Block243:
	push 0x80004003
	call _com_issue_error

 Block244:
	lea eax,[ebp+0x44]
	push eax
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3D
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x44],8
	mov ebx,eax
	mov byte ptr [ebp-4],7
	jne Block247

 Block245:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block248

 Block246:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block248

 Block247:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block248:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x30],esp
	push 0x628
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x3E
	test ecx,ecx
	jne Block250

 Block249:
	push 0x80004003
	call _com_issue_error

 Block250:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3F
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x44],8
	mov edi,eax
	mov byte ptr [ebp-4],7
	jne Block253

 Block251:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block254

 Block252:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block254

 Block253:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block254:
	mov eax,dword ptr [ebp+0x64]
	test eax,eax
	je Block257

 Block255:
	add eax,0x14
	cmp dword ptr [esi+0x24],eax
	jge Block257

 Block256:
	mov dword ptr [esi+0x24],eax

 Block257:
	mov eax,dword ptr [ebp+0x24]
	test eax,eax
	je Block260

 Block258:
	add eax,0xFFFFFFEC
	cmp dword ptr [esi+0x2C],eax
	jle Block260

 Block259:
	mov dword ptr [esi+0x2C],eax

 Block260:
	test ebx,ebx
	je Block263

 Block261:
	lea eax,[ebx+0x41]
	cmp dword ptr [esi+0x28],eax
	jge Block263

 Block262:
	mov dword ptr [esi+0x28],eax

 Block263:
	test edi,edi
	je Block266

 Block264:
	cmp dword ptr [esi+0x30],edi
	jle Block266

 Block265:
	mov dword ptr [esi+0x30],edi

 Block266:
	mov dword ptr [esi+0x40],0
	xor edx,edx

 Block267:
	mov eax,dword ptr [esi+0x34]
	test eax,eax
	je Block269

 Block268:
	mov eax,dword ptr [eax-4]

 Block269:
	cmp edx,eax
	jge Block273

 Block270:
	mov eax,dword ptr [esi+0x34]
	mov ecx,dword ptr [eax+edx*8+4]
	cmp ecx,dword ptr [eax+edx*8]
	lea eax,[eax+edx*8]
	jge Block272

 Block271:
	inc edx
	jmp Block267

 Block272:
	mov dword ptr [esi+0x40],edx

 Block273:
	mov eax,dword ptr [esi+0x88]
	mov dword ptr [ebp+0x54],eax
	test eax,eax
	je Block299

 Block274:
	lea ecx,[ebp+0x54]
	push ecx
	call ZList<ZRef<CStaticFoothold>>::GetNext
	mov ebx,dword ptr [eax+4]
	xor eax,eax
	add esp,4
	mov dword ptr [ebp+0x30],eax
	mov dword ptr [ebp+0x24],eax
	lea edi,[ebx+0x64]
	mov byte ptr [ebp-4],0x41
	cmp dword ptr [edi],eax
	je Block276

 Block275:
	lea edx,[ebp+0x2C]
	push edx
	push edi
	lea ecx,[esi+0x90]
	call ZMap<unsigned long, ZRef<CStaticFoothold>, unsigned long>::GetAt
	lea eax,[ebp+0x2C]
	jmp Block277

 Block276:
	or dword ptr [ebp+0x58],1
	mov dword ptr [ebp+0x64],0
	lea eax,[ebp+0x60]

 Block277:
	test byte ptr [ebp+0x58],1
	mov eax,dword ptr [eax+4]
	mov dword ptr [edi],eax
	je Block282

 Block278:
	and dword ptr [ebp+0x58],0xFFFFFFFE
	cmp dword ptr [ebp+0x64],0
	je Block282

 Block279:
	mov edi,dword ptr [ebp+0x64]
	add edi,4
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block281

 Block280:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block281:
	mov dword ptr [ebp+0x64],0

 Block282:
	cmp dword ptr [ebx+0x68],0
	lea edi,[ebx+0x68]
	je Block284

 Block283:
	lea ecx,[ebp+0x20]
	push ecx
	push edi
	lea ecx,[esi+0x90]
	call ZMap<unsigned long, ZRef<CStaticFoothold>, unsigned long>::GetAt
	lea eax,[ebp+0x20]
	jmp Block285

 Block284:
	or dword ptr [ebp+0x58],2
	mov dword ptr [ebp-0x2C],0
	lea eax,[ebp-0x30]

 Block285:
	test byte ptr [ebp+0x58],2
	mov edx,dword ptr [eax+4]
	mov dword ptr [edi],edx
	je Block290

 Block286:
	mov ebx,dword ptr [ebp-0x2C]
	and dword ptr [ebp+0x58],0xFFFFFFFD
	test ebx,ebx
	je Block290

 Block287:
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block289

 Block288:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block289:
	mov dword ptr [ebp-0x2C],0

 Block290:
	mov ebx,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x40
	test ebx,ebx
	je Block294

 Block291:
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block293

 Block292:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block293:
	mov dword ptr [ebp+0x24],0

 Block294:
	mov ebx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],7
	test ebx,ebx
	je Block298

 Block295:
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block297

 Block296:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block297:
	mov dword ptr [ebp+0x30],0

 Block298:
	cmp dword ptr [ebp+0x54],0
	jne Block274

 Block299:
	mov eax,dword ptr [ebp+0x78]
	test eax,eax
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block344

 Block300:
	test eax,eax
	jne Block302

 Block301:
	push 0x80004003
	call _com_issue_error

 Block302:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x40]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp+0x40],0
	call eax
	test eax,eax
	jge Block304

 Block303:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block304:
	mov edi,dword ptr [ebp+0x40]
	lea edx,[ebp+0x5F]
	push edx
	lea eax,[edi+1]
	lea ecx,[esi+0xBC]
	push eax
	call ZArray<CLadderOrRope>::_Alloc
	mov ebx,1
	cmp edi,ebx
	mov dword ptr [ebp+0x34],ebx
	jl Block344

 Block305:
	mov dword ptr [ebp+0x38],0x1C

 Block306:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x42
	test ecx,ecx
	je Block3

 Block307:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x43
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x24],edi
	test eax,eax
	je Block310

 Block308:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x64]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x64]
	mov edi,ecx
	mov dword ptr [ebp+0x24],edi
	test eax,eax
	jge Block310

 Block309:
	cmp eax,0x80004002
	jne Block8

 Block310:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x45
	jne Block313

 Block311:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block314:
	test edi,edi
	sete al
	test al,al
	je Block317

 Block315:
	mov byte ptr [ebp-4],7
	test edi,edi
	je Block343

 Block316:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx
	jmp Block343

 Block317:
	mov ebx,dword ptr [esi+0xBC]
	add ebx,dword ptr [ebp+0x38]
	mov eax,dword ptr [ebp+0x34]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x30],esp
	push 0x93B
	push ecx
	mov dword ptr [ebx],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x46
	test edi,edi
	je Block3

 Block318:
	lea edx,[ebp-0xD0]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x45
	call IWzProperty::Getitem
	lea ecx,[ebx+4]
	push eax
	mov byte ptr [ebp-4],0x47
	mov dword ptr [ebp+0x54],ecx
	call get_int32
	mov edx,dword ptr [ebp+0x54]
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	cmp word ptr [ebp-0xD0],8
	mov dword ptr [edx],eax
	mov byte ptr [ebp-4],0x45
	jne Block321

 Block319:
	xor eax,eax
	mov word ptr [ebp-0xD0],ax
	mov eax,dword ptr [ebp-0xC8]
	test eax,eax
	je Block322

 Block320:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block322

 Block321:
	lea ecx,[ebp-0xD0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block322:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x30],esp
	push 0x93C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0xB0]
	mov byte ptr [ebp-4],0x48
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x45
	call IWzProperty::Getitem
	lea ecx,[ebx+8]
	push eax
	mov byte ptr [ebp-4],0x49
	mov dword ptr [ebp+0xC],ecx
	call get_int32
	mov edx,dword ptr [ebp+0xC]
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	cmp word ptr [ebp-0xB0],8
	mov dword ptr [edx],eax
	mov byte ptr [ebp-4],0x45
	jne Block325

 Block323:
	xor eax,eax
	mov word ptr [ebp-0xB0],ax
	mov eax,dword ptr [ebp-0xA8]
	test eax,eax
	je Block326

 Block324:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block326

 Block325:
	lea ecx,[ebp-0xB0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block326:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x30],esp
	push 0x3E5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x90]
	mov byte ptr [ebp-4],0x4A
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x45
	call IWzProperty::Getitem
	lea ecx,[ebx+0xC]
	push eax
	mov byte ptr [ebp-4],0x4B
	mov dword ptr [ebp+0x14],ecx
	call get_int32
	mov edx,dword ptr [ebp+0x14]
	add esp,8
	cmp word ptr [ebp-0x90],8
	mov dword ptr [edx],eax
	mov byte ptr [ebp-4],0x45
	jne Block329

 Block327:
	xor eax,eax
	mov word ptr [ebp-0x90],ax
	mov eax,dword ptr [ebp-0x88]
	test eax,eax
	je Block330

 Block328:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block330

 Block329:
	lea ecx,[ebp-0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block330:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x30],esp
	push 0x939
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0xC0]
	mov byte ptr [ebp-4],0x4C
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x45
	call IWzProperty::Getitem
	lea ecx,[ebx+0x10]
	push eax
	mov byte ptr [ebp-4],0x4D
	mov dword ptr [ebp+0x18],ecx
	call get_int32
	mov edx,dword ptr [ebp+0x18]
	add esp,8
	cmp word ptr [ebp-0xC0],8
	mov dword ptr [edx],eax
	mov byte ptr [ebp-4],0x45
	jne Block333

 Block331:
	xor eax,eax
	mov word ptr [ebp-0xC0],ax
	mov eax,dword ptr [ebp-0xB8]
	test eax,eax
	je Block334

 Block332:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block334

 Block333:
	lea ecx,[ebp-0xC0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block334:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x30],esp
	push 0x93A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0xA0]
	mov byte ptr [ebp-4],0x4E
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x45
	call IWzProperty::Getitem
	lea ecx,[ebx+0x14]
	push eax
	mov byte ptr [ebp-4],0x4F
	mov dword ptr [ebp-0x10],ecx
	call get_int32
	mov edx,dword ptr [ebp-0x10]
	add esp,8
	cmp word ptr [ebp-0xA0],8
	mov dword ptr [edx],eax
	mov byte ptr [ebp-4],0x45
	jne Block337

 Block335:
	xor eax,eax
	mov word ptr [ebp-0xA0],ax
	mov eax,dword ptr [ebp-0x98]
	test eax,eax
	je Block338

 Block336:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block338

 Block337:
	lea ecx,[ebp-0xA0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block338:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x30],esp
	push 0x6FD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x80]
	mov byte ptr [ebp-4],0x50
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x45
	call IWzProperty::Getitem
	lea ecx,[ebx+0x18]
	push eax
	mov byte ptr [ebp-4],0x51
	mov dword ptr [ebp+8],ecx
	call get_int32
	mov edx,dword ptr [ebp+8]
	add esp,8
	cmp word ptr [ebp-0x80],8
	mov dword ptr [edx],eax
	mov byte ptr [ebp-4],0x45
	jne Block341

 Block339:
	xor eax,eax
	mov word ptr [ebp-0x80],ax
	mov eax,dword ptr [ebp-0x78]
	test eax,eax
	je Block342

 Block340:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block342

 Block341:
	lea ecx,[ebp-0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block342:
	mov eax,dword ptr [esi+0xC4]
	push 0
	push 0
	push 0
	push eax
	push 4
	push ebx
	call CCrc32::GetCrc32
	mov edx,dword ptr [ebp+0x54]
	push 0
	push 0
	push 0
	push eax
	push 4
	push edx
	mov dword ptr [esi+0xC4],eax
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push eax
	mov dword ptr [esi+0xC4],eax
	mov eax,dword ptr [ebp+0xC]
	push 4
	push eax
	call CCrc32::GetCrc32
	mov ecx,dword ptr [ebp+0x14]
	add esp,0x48
	push 0
	push 0
	push 0
	push eax
	push 4
	push ecx
	mov dword ptr [esi+0xC4],eax
	call CCrc32::GetCrc32
	mov edx,dword ptr [ebp+0x18]
	push 0
	push 0
	push 0
	push eax
	push 4
	push edx
	mov dword ptr [esi+0xC4],eax
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push eax
	mov dword ptr [esi+0xC4],eax
	mov eax,dword ptr [ebp-0x10]
	push 4
	push eax
	call CCrc32::GetCrc32
	mov ecx,dword ptr [ebp+8]
	add esp,0x48
	push 0
	push 0
	push 0
	push eax
	push 4
	push ecx
	mov dword ptr [esi+0xC4],eax
	call CCrc32::GetCrc32
	mov dword ptr [esi+0xC4],eax
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	add esp,0x18
	push edi
	mov byte ptr [ebp-4],7
	call eax
	mov ebx,dword ptr [ebp+0x34]

 Block343:
	add dword ptr [ebp+0x38],0x1C
	inc ebx
	cmp ebx,dword ptr [ebp+0x40]
	mov dword ptr [ebp+0x34],ebx
	jle Block306

 Block344:
	cmp word ptr [ebp-0x70],8
	mov byte ptr [ebp-4],6
	jne Block347

 Block345:
	mov eax,dword ptr [ebp-0x68]
	xor ecx,ecx
	mov word ptr [ebp-0x70],cx
	test eax,eax
	je Block348

 Block346:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block348

 Block347:
	lea edx,[ebp-0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block348:
	mov eax,dword ptr [ebp-0x24]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],2
	call edx
	mov eax,dword ptr [ebp+0x74]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block350

 Block349:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block350:
	mov eax,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block352

 Block351:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block352:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block354

 Block353:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block354:
	lea esp,[ebp-0x168]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CWvsPhysicalSpace2D::GetFootholdClosest
__SUB_CLASS_THIS(00614270, __thiscall, 17388,  CWvsPhysicalSpace2D, CStaticFoothold*, long, long) {
__asm {

 Block0:
	sub esp,8
	mov ecx,dword ptr [ecx+0x88]
	xor eax,eax
	push edi
	mov dword ptr [esp+8],eax
	mov edi,0x7FFFFFFF
	mov dword ptr [esp+4],ecx
	test ecx,ecx
	je Block8

 Block1:
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push ebp
	mov ebp,dword ptr [esp+0x18]
	push esi
	jmp Block3

 Block3:
	lea eax,[esp+0x10]
	push eax
	call ZList<ZRef<CStaticFoothold>>::GetNext
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esi+0xC]
	mov ecx,dword ptr [esi+0x14]
	lea edx,[eax+8]
	add esp,4
	cmp edx,ecx
	jg Block6

 Block4:
	add eax,ecx
	cdq
	sub eax,edx
	mov ecx,eax
	mov eax,dword ptr [esi+0x18]
	add eax,dword ptr [esi+0x10]
	sar ecx,1
	cdq
	sub eax,edx
	sar eax,1
	sub ecx,ebp
	sub eax,ebx
	mov edx,ecx
	imul eax,eax
	imul edx,ecx
	add eax,edx
	cmp eax,edi
	jge Block6

 Block5:
	mov edi,eax
	mov dword ptr [esp+0x14],esi

 Block6:
	cmp dword ptr [esp+0x10],0
	jne Block3

 Block7:
	mov eax,dword ptr [esp+0x14]
	pop esi
	pop ebp
	pop ebx

 Block8:
	pop edi
	add esp,8
	ret 8
}
}
// CWvsPhysicalSpace2D::CWvsPhysicalSpace2D
_SUB_EXCEPTION_HANDLER(6173E0)
__SUB_CLASS_THIS0(006173E0, __thiscall, 17361,  CWvsPhysicalSpace2D, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6173E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x40],esi
	lea edi,[esi+4]
	xor ebp,ebp
	cmp edi,ebp
	je Block2

 Block1:
	lea eax,[edi-4]
	mov dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance],ebp

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CWvsPhysicalSpace2D::`vftable'
	mov dword ptr [esp+0xC0],ebp
	mov dword ptr [edi+4],ebp
	mov dword ptr [esi+0xC],ebp
	mov dword ptr [esi+0x10],ebp
	mov dword ptr [esi+0x14],ebp
	mov dword ptr [esi+0x18],ebp
	mov dword ptr [esi+0x1C],ebp
	mov dword ptr [esi+0x34],ebp
	mov dword ptr [esi+0x38],ebp
	mov dword ptr [esi+0x3C],ebp
	lea ecx,[esi+0x44]
	mov byte ptr [esp+0xC0],5
	call FHTree::_ctor_default
	int 3// TODO: 	mov dword ptr [esi+0x7C],offset ZList<ZRef<CStaticFoothold>>::`vftable'
	mov dword ptr [esi+0x84],ebp
	mov dword ptr [esi+0x88],ebp
	mov dword ptr [esi+0x8C],ebp
	lea ecx,[esi+0x90]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CStaticFoothold>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],ebp
	mov dword ptr [ecx+8],0x3E5
	mov dword ptr [ecx+0xC],ebp
	call ZMap<unsigned long, ZRef<CStaticFoothold>, unsigned long>::_CalcAutoGrow
	int 3// TODO: 	mov dword ptr [esi+0xA8],offset ZList<ZRef<__POSITION *>>::`vftable'
	mov dword ptr [esi+0xB0],ebp
	mov dword ptr [esi+0xB4],ebp
	mov dword ptr [esi+0xB8],ebp
	mov dword ptr [esi+0xBC],ebp
	push 0x80000000
	push 0x80000000
	push 0x7FFFFFFF
	push 0x7FFFFFFF
	lea ecx,[esi+0x24]
	push ecx
	mov byte ptr [esp+0xD4],0xA
	mov dword ptr [esi+0xC4],ebp
	call SetRect
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x54]
	push edx
	call ebx
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0xC4],0xB
	call ebx
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	push ebp
	push ebp
	lea eax,[esp+0x5C]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	push ecx
	mov dword ptr [esp+0x50],esp
	mov ecx,esp
	mov bl,0xC
	push offset _S_MAPPHYSICSIMG
	mov byte ptr [esp+0xD8],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xD4],0xD
	cmp dword ptr [_D_G_RM],ebp
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x78]
	mov byte ptr [esp+0xD4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC8],0xE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x3C],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block12

 Block10:
	cmp eax,0x80004002
	je Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	cmp word ptr [esp+0x64],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xC0],0x10
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x64]
	push ecx
	call ebx

 Block16:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xC0],0x11
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	cmp eax,ebp
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x44]
	push eax
	call ebx

 Block20:
	cmp word ptr [esp+0x54],8
	mov bl,0x12
	mov byte ptr [esp+0xC0],bl
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	cmp eax,ebp
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov ecx,edi
	call ZRef<CONSTANTS>::_Alloc
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_WALKFORCE
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [esp+0x44]
	mov byte ptr [esp+0xCC],0x13
	cmp edi,ebp
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[esp+0x80]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x14
	mov dword ptr [esp+0x48],ecx
	call get_double
	mov edx,dword ptr [esp+0x48]
	fstp qword ptr [edx]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_WALKSPEED
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x15
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x16
	mov dword ptr [esp+0x48],ecx
	call get_double
	mov edx,dword ptr [esp+0x48]
	fstp qword ptr [edx+8]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_WALKDRAG
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x17
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x18
	mov dword ptr [esp+0x48],ecx
	call get_double
	mov edx,dword ptr [esp+0x48]
	fstp qword ptr [edx+0x10]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_SLIPFORCE
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x19
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x1A
	mov dword ptr [esp+0x48],ecx
	call get_double
	mov edx,dword ptr [esp+0x48]
	fstp qword ptr [edx+0x18]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_SLIPSPEED
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x1B
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x1C
	mov dword ptr [esp+0x48],ecx
	call get_double
	mov edx,dword ptr [esp+0x48]
	fstp qword ptr [edx+0x20]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_FLOATDRAG1
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x1D
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x1E
	mov dword ptr [esp+0x48],ecx
	call get_double
	mov edx,dword ptr [esp+0x48]
	fstp qword ptr [edx+0x28]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_FLOATDRAG2
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x1F
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x20
	mov dword ptr [esp+0x48],ecx
	call get_double
	mov edx,dword ptr [esp+0x48]
	fstp qword ptr [edx+0x30]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_FLOATCOEFFICIENT
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x21
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x22
	mov dword ptr [esp+0x48],ecx
	call get_double
	mov edx,dword ptr [esp+0x48]
	fstp qword ptr [edx+0x38]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_SWIMFORCE
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x23
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x24
	mov dword ptr [esp+0x48],ecx
	call get_double
	mov edx,dword ptr [esp+0x48]
	fstp qword ptr [edx+0x40]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_SWIMSPEED
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x25
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x26
	mov dword ptr [esp+0x48],ecx
	call get_double
	mov edx,dword ptr [esp+0x48]
	fstp qword ptr [edx+0x48]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_FLYFORCE
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x27
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x28
	mov dword ptr [esp+0x48],ecx
	call get_double
	mov edx,dword ptr [esp+0x48]
	fstp qword ptr [edx+0x50]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_FLYSPEED
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x29
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x2A
	mov dword ptr [esp+0x48],ecx
	call get_double
	mov edx,dword ptr [esp+0x48]
	fstp qword ptr [edx+0x58]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block73

 Block71:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_GRAVITYACC
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x2B
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x2C
	mov dword ptr [esp+0x48],ecx
	call get_double
	mov edx,dword ptr [esp+0x48]
	fstp qword ptr [edx+0x60]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_FALLSPEED
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x2D
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x2E
	mov dword ptr [esp+0x48],ecx
	call get_double
	mov edx,dword ptr [esp+0x48]
	fstp qword ptr [edx+0x68]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_JUMPSPEED
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x2F
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ebp,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x30
	call get_double
	fstp qword ptr [ebp+0x70]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block85

 Block83:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_MAXFRICTION
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x31
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ebp,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x32
	call get_double
	fstp qword ptr [ebp+0x78]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_MINFRICTION
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x33
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ebp,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x34
	call get_double
	fstp qword ptr [ebp+0x80]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_SWIMSPEEDDEC
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x35
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ebp,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x36
	call get_double
	fstp qword ptr [ebp+0x88]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push offset _S_FLYJUMPDEC
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xCC],0x37
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xD0],bl
	call IWzProperty::Getitem
	mov ebp,dword ptr [esi+8]
	push eax
	mov byte ptr [esp+0xCC],0x38
	call get_double
	fstp qword ptr [ebp+0x90]
	add esp,0xC
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0xC4],0xA
	call eax
	mov eax,esi
	mov ecx,dword ptr [esp+0xB8]
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
// CAttrFoothold::~CAttrFoothold
_SUB_EXCEPTION_HANDLER(614DA0)
__SUB_CLASS_THIS0(00614DA0, __thiscall, 17136,  CAttrFoothold, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_614DA0
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
	int 3// TODO: 	mov dword ptr [esi],offset CAttrFoothold::`vftable'
	mov eax,dword ptr [esi+0x44]
	mov dword ptr [esp+0x14],4
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block2:
	mov eax,dword ptr [esi+0x38]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block4

 Block3:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block4:
	mov eax,dword ptr [esi+0x2C]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block6

 Block5:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block6:
	mov eax,dword ptr [esi+0x20]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block8

 Block7:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block8:
	mov eax,dword ptr [esi+0x14]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block10

 Block9:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block10:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CWvsPhysicalSpace2D::GetFootholdRange
_SUB_EXCEPTION_HANDLER(616550)
__SUB_CLASS_THIS(00616550, __thiscall, 17391,  CWvsPhysicalSpace2D, void, long, long, long, ZList<long>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_616550
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x24],0
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x34],eax
	mov ebx,dword ptr [esp+0x48]
	mov esi,dword ptr [esp+0x50]
	mov ebp,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x40],eax
	lea eax,[ebx+1]
	lea edx,[ebx-1]
	inc esi
	add ecx,0x44
	cmp edx,eax
	lea edi,[ebp-1]
	jge Block2

 Block1:
	mov dword ptr [esp+0x14],edx
	mov dword ptr [esp+0x1C],eax
	jmp Block3

 Block2:
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x1C],edx

 Block3:
	cmp edi,esi
	jge Block5

 Block4:
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x20],esi
	jmp Block6

 Block5:
	mov dword ptr [esp+0x18],esi
	mov dword ptr [esp+0x20],edi

 Block6:
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [ecx+0x1C]
	lea edx,[esp+0x18]
	push edx
	push eax
	call FHTree::raw_Search
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x48],eax
	test eax,eax
	je Block14

 Block7:
	lea ecx,[esp+0x48]
	push ecx
	call ZList<ZRef<CStaticFoothold>>::GetNext
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [ecx+0xC]
	mov esi,dword ptr [ecx+0x14]
	add esp,4
	cmp eax,esi
	jge Block13

 Block8:
	cmp eax,ebx
	jg Block13

 Block9:
	cmp esi,ebx
	jl Block13

 Block10:
	mov edi,dword ptr [ecx+0x10]
	mov eax,dword ptr [ecx+0x18]
	mov ecx,dword ptr [ecx+0xC]
	sub eax,edi
	mov edx,ebx
	sub edx,ecx
	imul eax,edx
	sub esi,ecx
	cdq
	idiv esi
	mov esi,eax
	add esi,edi
	cmp esi,ebp
	jl Block13

 Block11:
	cmp dword ptr [esp+0x50],esi
	jl Block13

 Block12:
	mov ecx,dword ptr [esp+0x54]
	call ZList<long>::AddTail_
	mov dword ptr [eax],esi

 Block13:
	cmp dword ptr [esp+0x48],0
	jne Block7

 Block14:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	mov dword ptr [esp+0x24],0
	call ZList<ZRef<CStaticFoothold>>::RemoveAll
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 0x10
}
}
// CWvsPhysicalSpace2D::CanGoThrough
_SUB_EXCEPTION_HANDLER(616680)
__SUB_CLASS_THIS(00616680, __thiscall, 17393,  CWvsPhysicalSpace2D, int32_t, long, long, long&, long&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_616680
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x70]
	mov edx,dword ptr [eax]
	mov esi,dword ptr [esp+0x74]
	mov esi,dword ptr [esi]
	mov ebx,dword ptr [esp+0x68]
	mov ebp,dword ptr [esp+0x6C]
	mov eax,edx
	sub eax,ebx
	mov edi,esi
	sub edi,ebp
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x3C],edi
	test eax,eax
	jne Block3

 Block1:
	cmp edi,eax
	jne Block4

 Block2:
	jmp Block43

 Block3:
	xor eax,eax

 Block4:
	mov dword ptr [esp+0x24],1
	mov dword ptr [esp+0x20],2
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x44],0
	mov dword ptr [esp+0x4C],eax
	mov dword ptr [esp+0x50],eax
	mov dword ptr [esp+0x54],eax
	mov dword ptr [esp+0x60],eax
	lea eax,[esp+0x44]
	push eax
	push esi
	push edx
	push ebp
	push ebx
	call CWvsPhysicalSpace2D::GetCrossCandidate
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x34],eax
	test eax,eax
	je Block42

 Block5:
	jmp Block7

 Block7:
	lea ecx,[esp+0x34]
	push ecx
	call ZList<ZRef<CStaticFoothold>>::GetNext
	mov ebx,dword ptr [eax+4]
	fld qword ptr [ebx+0x40]
	add esp,4
	fldz
	fcompp
	fnstsw ax
	test ah,1
	jne Block10

 Block8:
	mov eax,dword ptr [ebx+0x30]
	test eax,eax
	je Block10

 Block9:
	cmp eax,dword ptr [esp+0x78]
	jne Block38

 Block10:
	mov ebp,dword ptr [ebx+0x10]
	mov edx,dword ptr [ebx+0xC]
	mov esi,dword ptr [ebx+0x14]
	mov edi,dword ptr [ebx+0x18]
	mov ecx,dword ptr [esp+0x68]
	mov eax,dword ptr [esp+0x6C]
	sub ecx,edx
	sub eax,ebp
	mov dword ptr [esp+0x28],esi
	sub esi,edx
	mov dword ptr [esp+0x30],edi
	imul eax,esi
	sub edi,ebp
	imul ecx,edi
	sub eax,ecx
	mov ecx,dword ptr [esp+0x70]
	mov ecx,dword ptr [ecx]
	mov dword ptr [esp+0x14],ecx
	mov ecx,dword ptr [esp+0x74]
	mov ecx,dword ptr [ecx]
	sub ecx,ebp
	mov dword ptr [esp+0x2C],ebp
	imul ecx,esi
	mov ebp,dword ptr [esp+0x14]
	sub ebp,edx
	imul ebp,edi
	sub ecx,ebp
	mov dword ptr [esp+0x40],edx
	test eax,eax
	jg Block38

 Block11:
	test ecx,ecx
	jl Block38

 Block12:
	test eax,eax
	jne Block14

 Block13:
	test ecx,ecx
	je Block38

 Block14:
	mov eax,dword ptr [esp+0x70]
	mov eax,dword ptr [eax]
	mov ebp,dword ptr [esp+0x68]
	mov ecx,dword ptr [esp+0x74]
	mov ecx,dword ptr [ecx]
	sub ecx,dword ptr [esp+0x6C]
	sub eax,ebp
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esp+0x2C]
	sub eax,dword ptr [esp+0x6C]
	sub edx,ebp
	imul eax,dword ptr [esp+0x14]
	imul edx,ecx
	sub eax,edx
	mov edx,dword ptr [esp+0x28]
	sub edx,ebp
	imul edx,ecx
	mov ecx,dword ptr [esp+0x30]
	sub ecx,dword ptr [esp+0x6C]
	imul ecx,dword ptr [esp+0x14]
	sub ecx,edx
	test eax,eax
	jge Block17

 Block15:
	test ecx,ecx
	jl Block38

 Block16:
	test eax,eax

 Block17:
	jle Block19

 Block18:
	test ecx,ecx
	jg Block38

 Block19:
	test eax,eax
	jne Block23

 Block20:
	mov ecx,dword ptr [ebx+0x64]
	mov dword ptr [esp+0x14],ecx
	test ecx,ecx
	je Block38

 Block21:
	mov eax,dword ptr [esp+0x74]
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x70]
	push eax
	mov eax,dword ptr [edx]
	push eax
	push ebx
	push ecx
	call is_blocked_area
	add esp,0x10
	test eax,eax
	je Block38

 Block22:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x14],eax
	jmp Block28

 Block23:
	test ecx,ecx
	jne Block27

 Block24:
	mov ebp,dword ptr [ebx+0x68]
	test ebp,ebp
	je Block38

 Block25:
	mov ecx,dword ptr [esp+0x74]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [esp+0x70]
	push eax
	mov eax,dword ptr [edx]
	push eax
	push ebp
	push ebx
	call is_blocked_area
	add esp,0x10
	test eax,eax
	je Block38

 Block26:
	mov dword ptr [esp+0x14],ebx
	jmp Block29

 Block27:
	mov dword ptr [esp+0x14],ebx

 Block28:
	mov ebp,ebx

 Block29:
	mov ecx,esi
	imul esi,dword ptr [esp+0x6C]
	imul ecx,dword ptr [esp+0x3C]
	mov eax,edi
	imul edi,dword ptr [esp+0x68]
	imul eax,dword ptr [esp+0x38]
	sub eax,ecx
	cdq
	mov ecx,eax
	mov eax,dword ptr [esp+0x30]
	imul eax,dword ptr [esp+0x40]
	xor ecx,edx
	sub ecx,edx
	mov edx,dword ptr [esp+0x28]
	imul edx,dword ptr [esp+0x2C]
	sub eax,edx
	sub eax,edi
	add eax,esi
	cdq
	mov esi,eax
	xor esi,edx
	sub esi,edx
	mov eax,ecx
	imul dword ptr [esp+0x20]
	mov edi,eax
	mov eax,esi
	imul eax,dword ptr [esp+0x24]
	mov ebx,edx
	cdq
	sub edi,eax
	sbb ebx,edx
	js Block33

 Block30:
	jg Block32

 Block31:
	test edi,edi
	jbe Block33

 Block32:
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x20],esi
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x1C],edx
	jmp Block38

 Block33:
	or edi,ebx
	jne Block38

 Block34:
	mov edi,dword ptr [esp+0x18]
	mov ebx,dword ptr [edi+0x10]
	mov esi,dword ptr [edi+0x18]
	mov eax,dword ptr [edi+0x14]
	mov edi,dword ptr [edi+0xC]
	mov edx,dword ptr [ebp+0x10]
	mov ecx,dword ptr [ebp+0xC]
	sub ecx,edi
	sub esi,ebx
	sub eax,edi
	imul ecx,esi
	sub edx,ebx
	imul eax,edx
	sub eax,ecx
	jns Block36

 Block35:
	mov dword ptr [esp+0x18],ebp

 Block36:
	mov ebx,dword ptr [esp+0x1C]
	mov ebp,dword ptr [esp+0x14]
	mov edi,dword ptr [ebx+0x10]
	mov esi,dword ptr [ebx+0x18]
	mov eax,dword ptr [ebx+0x14]
	mov ebx,dword ptr [ebx+0xC]
	mov edx,dword ptr [ebp+0x18]
	mov ecx,dword ptr [ebp+0x14]
	sub ecx,ebx
	sub esi,edi
	sub eax,ebx
	imul ecx,esi
	sub edx,edi
	imul eax,edx
	sub eax,ecx
	jns Block38

 Block37:
	mov dword ptr [esp+0x1C],ebp

 Block38:
	cmp dword ptr [esp+0x34],0
	jne Block7

 Block39:
	cmp dword ptr [esp+0x18],0
	je Block42

 Block40:
	cmp dword ptr [esp+0x1C],0
	je Block42

 Block41:
	fild dword ptr [esp+0x20]
	fidiv dword ptr [esp+0x24]
	fild dword ptr [esp+0x38]
	fmul st,st(1)
	fiadd dword ptr [esp+0x68]
	call __ftol2_sse
	fimul dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr [ecx],eax
	fiadd dword ptr [esp+0x6C]
	call __ftol2_sse
	mov edx,dword ptr [esp+0x74]
	lea ecx,[esp+0x44]
	mov dword ptr [edx],eax
	mov dword ptr [esp+0x60],0xFFFFFFFF
	mov dword ptr [esp+0x44],0
	call ZList<ZRef<CStaticFoothold>>::RemoveAll
	xor eax,eax
	jmp Block44

 Block42:
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	mov dword ptr [esp+0x44],0
	call ZList<ZRef<CStaticFoothold>>::RemoveAll

 Block43:
	mov eax,1

 Block44:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 0x14
}
}
// CWvsPhysicalSpace2D::FootHoldStateChange
__SUB_CLASS_THIS(00615220, __thiscall, 17406,  CWvsPhysicalSpace2D, void, unsigned long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push eax
	call CWvsPhysicalSpace2D::GetFoothold
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+8]
	mov dword ptr [eax+0x5C],ecx

 Block2:
	ret 8
}
}
// CStaticFoothold::SetPosition
__SUB_CLASS_THIS(00612C60, __thiscall, 17291,  CStaticFoothold, void, long, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x18]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esi+0x14],eax
	sub eax,edx
	mov dword ptr [esp+0x18],eax
	fild dword ptr [esp+0x18]
	push edi
	mov edi,dword ptr [esp+0x24]
	mov dword ptr [esi+0x18],ecx
	fst qword ptr [esp+8]
	sub ecx,edi
	mov dword ptr [esp+0x1C],ecx
	fild dword ptr [esp+0x1C]
	mov dword ptr [esi+0xC],edx
	mov dword ptr [esi+0x10],edi
	fst qword ptr [esp+0x10]
	fmul st(0),st
	fld st(1)
	fmulp st(2),st
	faddp st(1),st(0)
	call __CIsqrt
	fst qword ptr [esi+0x50]
	fld qword ptr [esp+8]
	pop edi
	fdiv st,st(1)
	fstp qword ptr [esi+0x40]
	fdivr qword ptr [esp+0xC]
	fstp qword ptr [esi+0x48]
	pop esi
	add esp,0x10
	ret 0x10
}
}
// CWvsPhysicalSpace2D::~CWvsPhysicalSpace2D
_SUB_EXCEPTION_HANDLER(615F90)
__SUB_CLASS_THIS0(00615F90, __thiscall, 17363,  CWvsPhysicalSpace2D, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_615F90
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
	int 3// TODO: 	mov dword ptr [esi],offset CWvsPhysicalSpace2D::`vftable'
	lea ecx,[esi+0xBC]
	mov dword ptr [esp+0x20],9
	call ZArray<CLadderOrRope>::RemoveAll
	lea ecx,[esi+0xA8]
	mov byte ptr [esp+0x20],8
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<__POSITION *>>::`vftable'
	call ZList<ZRef<__POSITION *>>::RemoveAll
	lea ecx,[esi+0x90]
	mov byte ptr [esp+0x20],7
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CStaticFoothold>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<CStaticFoothold>, unsigned long>::RemoveAll
	lea ecx,[esi+0x7C]
	mov byte ptr [esp+0x20],6
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CStaticFoothold>>::`vftable'
	call ZList<ZRef<CStaticFoothold>>::RemoveAll
	lea ecx,[esi+0x44]
	mov byte ptr [esp+0x20],5
	call FHTree::dtor
	lea ecx,[esi+0x3C]
	mov byte ptr [esp+0x20],4
	call ZArray<ZArray<unsigned long>>::RemoveAll
	lea ecx,[esi+0x38]
	mov byte ptr [esp+0x20],3
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x34]
	mov byte ptr [esp+0x20],2
	call ZArray<RANGE>::RemoveAll
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x20],1
	call Geometry::InclusionChecker::~InclusionChecker
	mov eax,dword ptr [esi+8]
	xor ebx,ebx
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
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
	cmp edi,ebx
	je Block4

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block4:
	mov dword ptr [esi+8],ebx

 Block5:
	mov dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance],ebx
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
// CWvsPhysicalSpace2D::GetCrossCandidate
__SUB_CLASS_THIS(00116610, __thiscall, 17380,  CWvsPhysicalSpace2D, void, long, long, long, long, ZList<ZRef<CStaticFoothold> >&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+0xC]
	sub esp,0x10
	add ecx,0x44
	cmp eax,edx
	jge Block2

 Block1:
	mov dword ptr [esp],eax
	mov dword ptr [esp+8],edx
	jmp Block3

 Block2:
	mov dword ptr [esp],edx
	mov dword ptr [esp+8],eax

 Block3:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x20]
	cmp eax,edx
	jge Block5

 Block4:
	mov dword ptr [esp+4],eax
	mov dword ptr [esp+0xC],edx
	jmp Block6

 Block5:
	mov dword ptr [esp+4],edx
	mov dword ptr [esp+0xC],eax

 Block6:
	mov eax,dword ptr [esp+0x24]
	push eax
	mov eax,dword ptr [ecx+0x1C]
	lea edx,[esp+4]
	push edx
	push eax
	call FHTree::raw_Search
	add esp,0x10
	ret 0x14
}
}
// CWvsPhysicalSpace2D::GetFootholdAboveForRocketBooster
_SUB_EXCEPTION_HANDLER(6161C0)
__SUB_CLASS_THIS(006161C0, __thiscall, 17385,  CWvsPhysicalSpace2D, CStaticFoothold*, long, long, long, long, long&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6161C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esp+0x24],offset ZList<ZRef<CStaticFoothold>>::`vftable'
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [esp+0x30],edi
	mov dword ptr [esp+0x34],edi
	mov eax,dword ptr [esp+0x4C]
	mov ebp,dword ptr [esp+0x48]
	mov ebx,eax
	sub eax,dword ptr [esp+0x54]
	sub ebx,dword ptr [esp+0x50]
	lea edx,[ebp+1]
	lea esi,[ebp-1]
	add ecx,0x44
	cmp esi,edx
	mov dword ptr [esp+0x40],edi
	mov dword ptr [esp+0x54],eax
	jge Block2

 Block1:
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x1C],edx
	jmp Block3

 Block2:
	mov dword ptr [esp+0x14],edx
	mov dword ptr [esp+0x1C],esi

 Block3:
	cmp eax,ebx
	jge Block5

 Block4:
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x20],ebx
	jmp Block6

 Block5:
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x20],eax

 Block6:
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [ecx+0x1C]
	lea edx,[esp+0x18]
	push edx
	push eax
	call FHTree::raw_Search
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x4C],edi
	mov dword ptr [esp+0x50],eax
	test eax,eax
	je Block19

 Block7:
	nop

 Block8:
	lea ecx,[esp+0x50]
	push ecx
	call ZList<ZRef<CStaticFoothold>>::GetNext
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [ecx+0xC]
	mov esi,dword ptr [ecx+0x14]
	add esp,4
	cmp eax,esi
	jge Block18

 Block9:
	cmp eax,ebp
	jg Block18

 Block10:
	cmp esi,ebp
	jl Block18

 Block11:
	mov edx,dword ptr [ecx+0xC]
	mov edi,dword ptr [ecx+0x10]
	mov eax,dword ptr [ecx+0x18]
	sub eax,edi
	sub ebp,edx
	imul eax,ebp
	sub esi,edx
	cdq
	idiv esi
	add eax,edi
	cmp eax,ebx
	jge Block16

 Block12:
	cmp eax,dword ptr [esp+0x54]
	jle Block16

 Block13:
	mov edi,dword ptr [esp+0x4C]
	test edi,edi
	je Block15

 Block14:
	mov edx,dword ptr [edi+0x10]
	cmp edx,dword ptr [ecx+0x10]
	jge Block17

 Block15:
	mov edx,dword ptr [esp+0x58]
	mov edi,ecx
	mov dword ptr [edx],eax
	mov dword ptr [esp+0x4C],edi
	jmp Block17

 Block16:
	mov edi,dword ptr [esp+0x4C]

 Block17:
	mov ebp,dword ptr [esp+0x48]

 Block18:
	cmp dword ptr [esp+0x50],0
	jne Block8

 Block19:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x24],offset ZList<ZRef<CStaticFoothold>>::`vftable'
	call ZList<ZRef<CStaticFoothold>>::RemoveAll
	mov eax,edi
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 0x14
}
}
// CWvsPhysicalSpace2D::GetCRC
__SUB_CLASS_THIS0(00612CD0, __thiscall, 17414,  CWvsPhysicalSpace2D, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x10
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0x14]
	push 4
	push eax
	mov dword ptr [esp+0x1C],0x5F
	call CCrc32::GetCrc32
	fnstcw word ptr [esp+0x1C]
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	fld qword ptr [eax]
	movzx eax,word ptr [esp+0x1C]
	or eax,0xC00
	mov dword ptr [esp+0x20],eax
	push 0
	fldcw word ptr [esp+0x24]
	push 0
	push 0
	push ecx
	lea eax,[esp+0x30]
	push 4
	fistp qword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x34]
	push eax
	mov dword ptr [esp+0x38],edx
	fldcw word ptr [esp+0x34]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	push 0
	fld qword ptr [eax+8]
	push 0
	fnstcw word ptr [esp+0x3C]
	push 0
	push ecx
	movzx eax,word ptr [esp+0x44]
	or eax,0xC00
	mov dword ptr [esp+0x48],eax
	lea eax,[esp+0x48]
	fldcw word ptr [esp+0x48]
	push 4
	push eax
	fistp qword ptr [esp+0x50]
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [esp+0x50],edx
	fldcw word ptr [esp+0x4C]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	add esp,0x48
	fld qword ptr [eax+0x10]
	push 0
	fnstcw word ptr [esp+8]
	push 0
	push 0
	movzx eax,word ptr [esp+0x10]
	or eax,0xC00
	mov dword ptr [esp+0x14],eax
	push ecx
	fldcw word ptr [esp+0x18]
	lea eax,[esp+0x18]
	push 4
	push eax
	fistp qword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x20],edx
	fldcw word ptr [esp+0x1C]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	fld qword ptr [eax+0x18]
	fnstcw word ptr [esp+0x1C]
	movzx eax,word ptr [esp+0x1C]
	or eax,0xC00
	mov dword ptr [esp+0x20],eax
	fldcw word ptr [esp+0x20]
	push 0
	push 0
	push 0
	push ecx
	lea eax,[esp+0x30]
	fistp qword ptr [esp+0x30]
	push 4
	push eax
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [esp+0x38],edx
	fldcw word ptr [esp+0x34]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	push 0
	fld qword ptr [eax+0x20]
	push 0
	fnstcw word ptr [esp+0x3C]
	push 0
	push ecx
	movzx eax,word ptr [esp+0x44]
	or eax,0xC00
	mov dword ptr [esp+0x48],eax
	lea eax,[esp+0x48]
	fldcw word ptr [esp+0x48]
	push 4
	push eax
	fistp qword ptr [esp+0x50]
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [esp+0x50],edx
	fldcw word ptr [esp+0x4C]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	add esp,0x48
	fld qword ptr [eax+0x28]
	push 0
	fnstcw word ptr [esp+8]
	push 0
	push 0
	movzx eax,word ptr [esp+0x10]
	or eax,0xC00
	mov dword ptr [esp+0x14],eax
	push ecx
	fldcw word ptr [esp+0x18]
	lea eax,[esp+0x18]
	push 4
	push eax
	fistp qword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x20],edx
	fldcw word ptr [esp+0x1C]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	push 0
	fld qword ptr [eax+0x38]
	push 0
	fnstcw word ptr [esp+0x24]
	push 0
	push ecx
	movzx eax,word ptr [esp+0x2C]
	or eax,0xC00
	mov dword ptr [esp+0x30],eax
	lea eax,[esp+0x30]
	fldcw word ptr [esp+0x30]
	push 4
	push eax
	fistp qword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [esp+0x38],edx
	fldcw word ptr [esp+0x34]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	fld qword ptr [eax+0x40]
	fnstcw word ptr [esp+0x34]
	movzx eax,word ptr [esp+0x34]
	or eax,0xC00
	mov dword ptr [esp+0x38],eax
	push 0
	fldcw word ptr [esp+0x3C]
	push 0
	push 0
	push ecx
	lea eax,[esp+0x48]
	push 4
	fistp qword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0x4C]
	push eax
	mov dword ptr [esp+0x50],edx
	fldcw word ptr [esp+0x4C]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	add esp,0x48
	fld qword ptr [eax+0x48]
	push 0
	fnstcw word ptr [esp+8]
	push 0
	push 0
	movzx eax,word ptr [esp+0x10]
	or eax,0xC00
	mov dword ptr [esp+0x14],eax
	push ecx
	fldcw word ptr [esp+0x18]
	lea eax,[esp+0x18]
	push 4
	push eax
	fistp qword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x20],edx
	fldcw word ptr [esp+0x1C]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	push 0
	fld qword ptr [eax+0x50]
	push 0
	fnstcw word ptr [esp+0x24]
	push 0
	push ecx
	movzx eax,word ptr [esp+0x2C]
	or eax,0xC00
	mov dword ptr [esp+0x30],eax
	lea eax,[esp+0x30]
	fldcw word ptr [esp+0x30]
	push 4
	push eax
	fistp qword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [esp+0x38],edx
	fldcw word ptr [esp+0x34]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	push 0
	fld qword ptr [eax+0x58]
	push 0
	fnstcw word ptr [esp+0x3C]
	push 0
	push ecx
	movzx eax,word ptr [esp+0x44]
	or eax,0xC00
	mov dword ptr [esp+0x48],eax
	lea eax,[esp+0x48]
	fldcw word ptr [esp+0x48]
	push 4
	push eax
	fistp qword ptr [esp+0x50]
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [esp+0x50],edx
	fldcw word ptr [esp+0x4C]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	fnstcw word ptr [esp+0x4C]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	fld qword ptr [eax+0x60]
	movzx eax,word ptr [esp+0x4C]
	add esp,0x48
	or eax,0xC00
	mov dword ptr [esp+8],eax
	push 0
	fldcw word ptr [esp+0xC]
	push 0
	push 0
	push ecx
	lea eax,[esp+0x18]
	push 4
	fistp qword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x1C]
	push eax
	mov dword ptr [esp+0x20],edx
	fldcw word ptr [esp+0x1C]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	push 0
	fld qword ptr [eax+0x68]
	push 0
	fnstcw word ptr [esp+0x24]
	push 0
	push ecx
	movzx eax,word ptr [esp+0x2C]
	or eax,0xC00
	mov dword ptr [esp+0x30],eax
	lea eax,[esp+0x30]
	fldcw word ptr [esp+0x30]
	push 4
	push eax
	fistp qword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [esp+0x38],edx
	fldcw word ptr [esp+0x34]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	push 0
	fld qword ptr [eax+0x70]
	push 0
	fnstcw word ptr [esp+0x3C]
	push 0
	push ecx
	movzx eax,word ptr [esp+0x44]
	or eax,0xC00
	mov dword ptr [esp+0x48],eax
	lea eax,[esp+0x48]
	fldcw word ptr [esp+0x48]
	push 4
	push eax
	fistp qword ptr [esp+0x50]
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [esp+0x50],edx
	fldcw word ptr [esp+0x4C]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	add esp,0x48
	fld qword ptr [eax+0x78]
	push 0
	fnstcw word ptr [esp+8]
	push 0
	push 0
	movzx eax,word ptr [esp+0x10]
	or eax,0xC00
	mov dword ptr [esp+0x14],eax
	fldcw word ptr [esp+0x14]
	fistp qword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x14],edx
	fldcw word ptr [esp+0x10]
	push ecx
	lea eax,[esp+0x18]
	push 4
	push eax
	call CCrc32::GetCrc32
	fnstcw word ptr [esp+0x1C]
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	fld qword ptr [eax+0x80]
	movzx eax,word ptr [esp+0x1C]
	or eax,0xC00
	mov dword ptr [esp+0x20],eax
	push 0
	fldcw word ptr [esp+0x24]
	push 0
	push 0
	push ecx
	lea eax,[esp+0x30]
	push 4
	fistp qword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x34]
	push eax
	mov dword ptr [esp+0x38],edx
	fldcw word ptr [esp+0x34]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	push 0
	fld qword ptr [eax+0x88]
	push 0
	fnstcw word ptr [esp+0x3C]
	push 0
	push ecx
	movzx eax,word ptr [esp+0x44]
	or eax,0xC00
	mov dword ptr [esp+0x48],eax
	lea eax,[esp+0x48]
	fldcw word ptr [esp+0x48]
	push 4
	push eax
	fistp qword ptr [esp+0x50]
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [esp+0x50],edx
	fldcw word ptr [esp+0x4C]
	call CCrc32::GetCrc32
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	add esp,0x48
	fld qword ptr [eax+0x90]
	push 0
	fnstcw word ptr [esp+8]
	push 0
	push 0
	movzx eax,word ptr [esp+0x10]
	or eax,0xC00
	mov dword ptr [esp+0x14],eax
	push ecx
	fldcw word ptr [esp+0x18]
	lea eax,[esp+0x18]
	push 4
	push eax
	fistp qword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x20],edx
	fldcw word ptr [esp+0x1C]
	call CCrc32::GetCrc32
	add esp,0x18
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsPhysicalSpace2D::SetFieldAttr
_SUB_EXCEPTION_HANDLER(616A20)
__SUB_CLASS_THIS0(00616A20, __thiscall, 17363,  CWvsPhysicalSpace2D, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_616A20
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	push 0x58
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CAttrField::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [ebx+0xC0],eax
	mov esi,dword ptr [_D_G_PSTAGE+4]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block19

 Block4:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block19

 Block5:
	mov eax,dword ptr [esi+0x220]
	push eax
	lea edi,[esi+0x210]
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	fnstsw ax
	test ah,0x44
	jnp Block7

 Block6:
	mov ecx,dword ptr [esi+0x220]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	jmp Block8

 Block7:
	fld1

 Block8:
	mov ecx,dword ptr [ebx+0xC0]
	sub esp,8
	fstp qword ptr [esp]
	call TSecType<double>::SetData
	mov edx,dword ptr [esi+0x220]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	fnstsw ax
	test ah,0x44
	jnp Block10

 Block9:
	mov eax,dword ptr [esi+0x220]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	jmp Block11

 Block10:
	fld1

 Block11:
	mov ecx,dword ptr [ebx+0xC0]
	sub esp,8
	add ecx,0xC
	fstp qword ptr [esp]
	call TSecType<double>::SetData
	cmp dword ptr [esi+0x190],0
	je Block13

 Block12:
	mov ecx,dword ptr [ebx+0xC0]
	push 1
	add ecx,0x30
	call TSecType<long>::SetData
	jmp Block16

 Block13:
	cmp dword ptr [esi+0x194],0
	je Block16

 Block14:
	mov ecx,dword ptr [ebx+0xC0]
	push 2
	add ecx,0x30
	call TSecType<long>::SetData
	cmp dword ptr [esi+0x198],0
	je Block16

 Block15:
	mov ecx,dword ptr [ebx+0xC0]
	mov dword ptr [ecx+0x3C],1

 Block16:
	mov eax,dword ptr [esi+0xD10]
	test eax,eax
	je Block18

 Block17:
	mov eax,dword ptr [eax-4]

 Block18:
	mov edx,dword ptr [esi+0xD10]
	mov ecx,dword ptr [ebx+0xC0]
	push eax
	push edx
	add ecx,0x40
	call Geometry::InclusionChecker::AddToArea

 Block19:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// CStaticFoothold::~CStaticFoothold
_SUB_EXCEPTION_HANDLER(614F60)
__SUB_CLASS_THIS0(00614F60, __thiscall, 17280,  CStaticFoothold, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_614F60
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
	int 3// TODO: 	mov dword ptr [esi],offset CStaticFoothold::`vftable'
	mov eax,dword ptr [esi+0x38]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0x38]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x38]
	test ecx,ecx
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov dword ptr [esi+0x38],0

 Block5:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CWvsPhysicalSpace2D::GetFootholdAbove
_SUB_EXCEPTION_HANDLER(616320)
__SUB_CLASS_THIS(00616320, __thiscall, 17383,  CWvsPhysicalSpace2D, CStaticFoothold*, long, long, long*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_616320
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
	mov esi,dword ptr [esp+0x48]
	mov eax,dword ptr [esp+0x40]
	cmp esi,eax
	jle Block2

 Block1:
	xor eax,eax
	jmp Block11

 Block2:
	xor edi,edi
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esp+0x28],edi
	mov ebx,dword ptr [esp+0x3C]
	lea edx,[esp+0x18]
	push edx
	inc eax
	push eax
	lea eax,[ebx+1]
	push eax
	push esi
	lea edx,[ebx-1]
	push edx
	mov dword ptr [esp+0x48],edi
	call CWvsPhysicalSpace2D::GetCrossCandidate
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x48],esi
	mov dword ptr [esp+0x3C],eax
	cmp eax,edi
	je Block10

 Block3:
	lea eax,[esp+0x3C]
	push eax
	call ZList<ZRef<CStaticFoothold>>::GetNext
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [ecx+0xC]
	mov esi,dword ptr [ecx+0x14]
	add esp,4
	cmp eax,esi
	jge Block9

 Block4:
	cmp eax,ebx
	jg Block9

 Block5:
	cmp esi,ebx
	jl Block9

 Block6:
	mov edx,dword ptr [ecx+0xC]
	mov edi,dword ptr [ecx+0x10]
	mov eax,dword ptr [ecx+0x18]
	sub eax,edi
	mov ebp,ebx
	sub ebp,edx
	imul eax,ebp
	sub esi,edx
	cdq
	idiv esi
	add eax,edi
	cmp eax,dword ptr [esp+0x40]
	jg Block9

 Block7:
	cmp eax,dword ptr [esp+0x48]
	jle Block9

 Block8:
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [esp+0x48],eax
	mov dword ptr [edx],eax
	mov dword ptr [esp+0x14],ecx

 Block9:
	cmp dword ptr [esp+0x3C],0
	jne Block3

 Block10:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	mov dword ptr [esp+0x18],0
	call ZList<ZRef<CStaticFoothold>>::RemoveAll
	mov eax,dword ptr [esp+0x14]

 Block11:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 0x10
}
}
// CAttrFoothold::CAttrFoothold
_SUB_EXCEPTION_HANDLER(614C30)
__SUB_CLASS_THIS0(00614C30, __thiscall, 17134,  CAttrFoothold, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_614C30
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
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	lea ebp,[esi+0xC]
	mov ecx,ebp
	mov dword ptr [esp+0x20],eax
	int 3// TODO: 	mov dword ptr [esi],offset CAttrFoothold::`vftable'
	call TSecType<double>::_ctor_default
	lea ecx,[esi+0x18]
	mov byte ptr [esp+0x20],1
	call TSecType<double>::_ctor_default
	lea ecx,[esi+0x24]
	mov byte ptr [esp+0x20],2
	call TSecType<double>::_ctor_default
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],3
	lea edi,[esi+0x30]
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
	xor eax,eax
	push eax
	mov ecx,edi
	call TSecType<int>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],4
	lea ebx,[esi+0x3C]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebx+8],eax
	call _rand
	mov ecx,eax
	lea eax,[ebx-0x3FF8]
	add ecx,eax
	mov dword ptr [ebx],ecx
	call _rand
	movzx ecx,byte ptr [ebx]
	mov edx,eax
	lea eax,[ebx-0x3FF8]
	add edx,eax
	mov eax,dword ptr [ebx+8]
	mov dword ptr [ebx+4],edx
	mov byte ptr [eax+5],cl
	movzx eax,byte ptr [ebx+4]
	mov edx,dword ptr [ebx+8]
	mov byte ptr [edx+6],al
	xor eax,eax
	push eax
	mov ecx,ebx
	call TSecType<int>::SetData
	fld1
	sub esp,8
	mov ecx,ebp
	fstp qword ptr [esp]
	mov byte ptr [esp+0x28],5
	call TSecType<double>::SetData
	fld1
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x18]
	call TSecType<double>::SetData
	sub esp,8
	fldz
	lea ecx,[esi+0x24]
	fstp qword ptr [esp]
	call TSecType<double>::SetData
	push 0
	mov ecx,edi
	call TSecType<int>::SetData
	push 0
	mov ecx,ebx
	call TSecType<int>::SetData
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
// CWvsPhysicalSpace2D::GetFoothold
_SUB_EXCEPTION_HANDLER(117D10)
__SUB_CLASS_THIS(00117D10, __thiscall, 17381,  CWvsPhysicalSpace2D, CStaticFoothold*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_117D10
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
	xor ebx,ebx
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebx
	xor esi,esi
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x2C],esi
	cmp dword ptr [esp+0x34],esi
	je Block3

 Block1:
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x38]
	push edx
	add ecx,0x90
	call ZMap<unsigned long, ZRef<CStaticFoothold>, unsigned long>::GetAt
	mov ebp,dword ptr [esp+0x18]
	test eax,eax
	je Block3

 Block2:
	mov esi,dword ptr [esp+0x20]
	lea eax,[esp+0x14]
	jmp Block4

 Block3:
	mov dword ptr [esp+0x20],esi
	lea eax,[esp+0x1C]
	mov ebx,1

 Block4:
	mov edi,dword ptr [eax+4]
	test bl,1
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x34],edi
	je Block9

 Block5:
	test esi,esi
	je Block9

 Block6:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block7:
	push edi
	call ebx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block8:
	mov edi,dword ptr [esp+0x34]

 Block9:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test ebp,ebp
	je Block12

 Block10:
	lea esi,[ebp+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block11:
	push esi
	call ebx
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block12:
	mov eax,edi
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
// CWvsPhysicalSpace2D::GetLadderOrRope
__SUB_CLASS_THIS(00613860, __thiscall, 17401,  CWvsPhysicalSpace2D, CLadderOrRope*, long, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+0xC]
	cmp eax,edx
	push ebx
	push ebp
	push esi
	push edi
	jge Block2

 Block1:
	mov ebx,eax
	mov eax,edx
	jmp Block3

 Block2:
	mov ebx,edx

 Block3:
	mov edx,dword ptr [esp+0x20]
	add eax,0xA
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [esp+0x18]
	sub ebx,0xA
	cmp eax,edx
	jge Block5

 Block4:
	mov ebp,eax
	mov dword ptr [esp+0x14],edx
	jmp Block6

 Block5:
	mov ebp,edx
	mov dword ptr [esp+0x14],eax

 Block6:
	mov edi,1
	lea esi,[edi+0x1B]

 Block7:
	mov eax,dword ptr [ecx+0xBC]
	test eax,eax
	je Block14

 Block8:
	cmp edi,dword ptr [eax-4]
	jae Block14

 Block9:
	mov edx,dword ptr [eax+esi+0xC]
	add eax,esi
	cmp ebx,edx
	jg Block13

 Block10:
	cmp edx,dword ptr [esp+0x1C]
	jg Block13

 Block11:
	cmp ebp,dword ptr [eax+0x14]
	jg Block13

 Block12:
	mov edx,dword ptr [esp+0x14]
	cmp dword ptr [eax+0x10],edx
	jle Block15

 Block13:
	inc edi
	add esi,0x1C
	jmp Block7

 Block14:
	xor eax,eax

 Block15:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0x10
}
}
// CAttrField::CAttrField
_SUB_EXCEPTION_HANDLER(6160B0)
__SUB_CLASS_THIS0(006160B0, __thiscall, 17260,  CAttrField, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6160B0
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
	fld1
	sub esp,8
	fstp qword ptr [esp]
	call TSecType<double>::_ctor_1
	fld1
	sub esp,8
	fstp qword ptr [esp]
	xor ebx,ebx
	lea ecx,[esi+0xC]
	mov dword ptr [esp+0x28],ebx
	call TSecType<double>::_ctor_1
	fld1
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x18]
	mov byte ptr [esp+0x28],1
	call TSecType<double>::_ctor_1
	fld1
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x24]
	mov byte ptr [esp+0x28],2
	call TSecType<double>::_ctor_1
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],3
	lea edi,[esi+0x30]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebp,[edi-0x3FF8]
	call _rand
	add eax,ebp
	mov dword ptr [edi],eax
	call _rand
	mov cl,byte ptr [edi]
	add eax,ebp
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+5],cl
	mov edx,dword ptr [edi+8]
	mov al,byte ptr [edi+4]
	push ebx
	mov ecx,edi
	mov byte ptr [edx+6],al
	call TSecType<long>::SetData
	mov dword ptr [esi+0x3C],ebx
	mov dword ptr [esi+0x40],ebx
	mov dword ptr [esi+0x44],ebx
	mov dword ptr [esi+0x48],ebx
	mov dword ptr [esi+0x4C],ebx
	mov dword ptr [esi+0x50],ebx
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
