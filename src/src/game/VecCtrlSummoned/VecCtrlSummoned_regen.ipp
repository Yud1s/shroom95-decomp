#include "regen.hpp"
// VecCtrlSummoned.ipp
#include "VecCtrlSummoned.hpp"

// CVecCtrlSummoned::CollisionDetectFloat
__SUB_CLASS_THIS(0059F890, __thiscall, 79802,  CVecCtrlSummoned, int32_t, const AbsPos&, long&, int32_t) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x318]
	mov dword ptr [esp+4],esi
	cmp ecx,4
	je Block3

 Block1:
	cmp ecx,5
	je Block3

 Block2:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	push eax
	push ecx
	push edx
	mov ecx,esi
	call CVecCtrl::CollisionDetectFloat
	pop esi
	pop ecx
	ret 0xC

 Block3:
	push ebx
	push ebp
	push edi
	add esi,0x20
	lea edi,[eax+0x24]
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	xor ebx,ebx
	xor ebp,ebp
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [edi]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block5

 Block4:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x10],eax
	mov ebx,1
	jmp Block7

 Block5:
	mov ecx,dword ptr [esi+0x10]
	fstp st(0)
	push ecx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [edi+8]
	dec edx
	mov dword ptr [esp+0x28],edx
	fild dword ptr [esp+0x28]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jnp Block4

 Block6:
	fstp st(0)

 Block7:
	mov eax,dword ptr [esi+0x28]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [edi+4]
	lea eax,[edi+4]
	mov dword ptr [esp+0x24],eax
	fcom
	add esp,8
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block9

 Block8:
	sub esp,8
	lea ecx,[esi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x28],eax
	mov ebp,1
	jmp Block11

 Block9:
	mov edx,dword ptr [esi+0x28]
	fstp st(0)
	push edx
	lea eax,[esi+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [edi+0xC]
	dec ecx
	mov dword ptr [esp+0x28],ecx
	fild dword ptr [esp+0x28]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jnp Block8

 Block10:
	fstp st(0)

 Block11:
	test ebx,ebx
	je Block16

 Block12:
	mov edx,dword ptr [esi+0x10]
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [edi]
	add esp,8
	fucompp
	fnstsw ax
	test ah,0x44
	jp Block14

 Block13:
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [__real_403e000000000000]
	jmp Block15

 Block14:
	mov ecx,dword ptr [esi+0x10]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [__real_403e000000000000]

 Block15:
	add esp,8
	call __ftol2_sse
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [edx+0x328],eax

 Block16:
	pop edi
	test ebp,ebp
	pop ebp
	pop ebx
	je Block21

 Block17:
	mov eax,dword ptr [esi+0x28]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [esp+0x18]
	fild dword ptr [edx]
	add esp,8
	fucompp
	fnstsw ax
	test ah,0x44
	jp Block19

 Block18:
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fadd qword ptr [__real_403e000000000000]
	jmp Block20

 Block19:
	mov ecx,dword ptr [esi+0x28]
	push ecx
	add esi,0x18
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fsub qword ptr [__real_403e000000000000]

 Block20:
	add esp,8
	call __ftol2_sse
	mov edx,dword ptr [esp+4]
	mov dword ptr [edx+0x32C],eax

 Block21:
	xor eax,eax
	pop esi
	pop ecx
	ret 0xC
}
}
// CVecCtrlSummoned::EndUpdateActive
_SUB_EXCEPTION_HANDLER(5A0700)
__SUB_CLASS_THIS0(005A0700, __thiscall, 79798,  CVecCtrlSummoned, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A0700
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [edi+0x318]
	cmp eax,4
	je Block3

 Block1:
	cmp eax,5
	je Block3

 Block2:
	xor eax,eax
	jmp Block4

 Block3:
	mov eax,1

 Block4:
	push 0
	lea esi,[edi+0x244]
	push eax
	mov ecx,esi
	call CMovePath::IsTimeForFlush
	test eax,eax
	je Block8

 Block5:
	push 0xCF
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	mov eax,dword ptr [edi+0x308]
	push eax
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode4
	push 0
	push 0
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	call CMovePath::Flush
	test eax,eax
	jne Block7

 Block6:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0xC]
	push edx
	call CClientSocket::SendPacket

 Block7:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block8:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret
}
}
// CVecCtrlSummoned::CtrlUpdateActiveWalkFree
__SUB_CLASS_THIS0(0059FE80, __thiscall, 79798,  CVecCtrlSummoned, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x328],0
	jg Block2

 Block1:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x14
	div ecx
	add edx,ecx
	mov ecx,offset _D_G_RAND
	mov dword ptr [esi+0x328],edx
	call CRand32::Random
	mov ecx,eax
	mov eax,0xAAAAAAAB
	mul ecx
	shr edx,1
	lea edx,[edx+edx*2]
	sub ecx,edx
	lea eax,[ecx-1]
	push 0
	push eax
	mov ecx,esi
	mov dword ptr [esi+0x32C],eax
	call CVecCtrl::SetInput

 Block2:
	dec dword ptr [esi+0x328]
	pop esi
	ret
}
}
// CVecCtrlSummoned::CtrlUpdateActiveFly
__SUB_CLASS_THIS0(0059FA50, __thiscall, 79798,  CVecCtrlSummoned, void) {
__asm {

 Block0:
	sub esp,0x30
	push ebx
	push ebp
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x318],5
	push edi
	jne Block15

 Block1:
	cmp dword ptr [esi+0x330],0
	je Block14

 Block2:
	mov eax,dword ptr [esi+0x30]
	lea edi,[esi+0x20]
	push eax
	push edi
	xor ebx,ebx
	xor ebp,ebp
	call _ZtlSecureFuseHelper<double>::call
	fisubr dword ptr [esi+0x328]
	add esp,8
	fabs
	fcomp qword ptr [__real_4024000000000000]
	fnstsw ax
	test ah,1
	jne Block6

 Block3:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esi+0x328]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jp Block5

 Block4:
	or ebx,0xFFFFFFFF
	jmp Block6

 Block5:
	mov ebx,1

 Block6:
	mov edx,dword ptr [edi+0x28]
	push edx
	lea eax,[edi+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fisubr dword ptr [esi+0x32C]
	add esp,8
	fabs
	fcomp qword ptr [__real_4024000000000000]
	fnstsw ax
	test ah,5
	jp Block8

 Block7:
	or ebp,0xFFFFFFFF
	jmp Block10

 Block8:
	mov ecx,dword ptr [edi+0x28]
	push ecx
	lea edx,[edi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esi+0x32C]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jp Block10

 Block9:
	mov ecx,esi
	call CVecCtrl::Jump

 Block10:
	dec dword ptr [esi+0x338]
	push ebp
	push ebx
	mov ecx,esi
	call CVecCtrl::SetInput
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	call __ftol2_sse
	mov ecx,dword ptr [edi+0x28]
	push ecx
	add edi,0x18
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<double>::call
	add esp,0x10
	call __ftol2_sse
	mov edx,dword ptr [esi+0x32C]
	mov edi,eax
	mov eax,0xFFFFFFF6
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x14],eax
	mov eax,0xA
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [esi+0x328]
	push edx
	push eax
	lea ecx,[esp+0x18]
	push ecx
	call OffsetRect
	push edi
	push ebx
	lea edx,[esp+0x18]
	push edx
	call PtInRect
	test eax,eax
	jne Block12

 Block11:
	cmp dword ptr [esi+0x338],eax
	jne Block13

 Block12:
	mov dword ptr [esi+0x330],0

 Block13:
	cmp dword ptr [esi+0x330],0
	jne Block33

 Block14:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x3C
	div ecx
	add edx,ecx
	mov ecx,offset _D_G_RAND
	mov dword ptr [esi+0x338],edx
	call CRand32::Random
	xor edx,edx
	mov ecx,0x320
	div ecx
	mov eax,dword ptr [esi+0x33C]
	lea ecx,[edx+eax-0x190]
	mov dword ptr [esi+0x328],ecx
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	mov ecx,0x96
	xor edx,edx
	div ecx
	mov eax,dword ptr [esi+0x340]
	pop edi
	mov dword ptr [esi+0x334],0xFFFFFFFF
	mov dword ptr [esi+0x330],1
	lea ecx,[edx+eax-0x96]
	mov dword ptr [esi+0x32C],ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret

 Block15:
	cmp dword ptr [esi+0x330],0
	je Block29

 Block16:
	mov edx,dword ptr [esi+0x30]
	lea edi,[esi+0x20]
	push edx
	push edi
	xor ebx,ebx
	xor ebp,ebp
	call _ZtlSecureFuseHelper<double>::call
	fisubr dword ptr [esi+0x328]
	add esp,8
	fabs
	fcomp qword ptr [__real_4024000000000000]
	fnstsw ax
	test ah,1
	jne Block20

 Block17:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esi+0x328]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jp Block19

 Block18:
	or ebx,0xFFFFFFFF
	jmp Block20

 Block19:
	mov ebx,1

 Block20:
	mov ecx,dword ptr [edi+0x28]
	push ecx
	lea edx,[edi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fisubr dword ptr [esi+0x32C]
	add esp,8
	fabs
	fcomp qword ptr [__real_4024000000000000]
	fnstsw ax
	test ah,5
	jp Block22

 Block21:
	or ebp,0xFFFFFFFF
	jmp Block24

 Block22:
	mov eax,dword ptr [edi+0x28]
	push eax
	lea ecx,[edi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esi+0x32C]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jp Block24

 Block23:
	mov ecx,esi
	call CVecCtrl::Jump

 Block24:
	push ebp
	push ebx
	mov ecx,esi
	call CVecCtrl::SetInput
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	call __ftol2_sse
	mov ebx,eax
	mov eax,dword ptr [edi+0x28]
	push eax
	add edi,0x18
	push edi
	call _ZtlSecureFuseHelper<double>::call
	add esp,0x10
	call __ftol2_sse
	mov ecx,dword ptr [esi+0x32C]
	mov edx,dword ptr [esi+0x328]
	mov edi,eax
	mov eax,0xFFFFFFF6
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov eax,0xA
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x2C],eax
	mov eax,0xFFFFFF88
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x34],eax
	mov eax,0x78
	push ecx
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x40],eax
	push edx
	lea eax,[esp+0x28]
	push eax
	call OffsetRect
	mov ecx,dword ptr [esi+0x32C]
	mov edx,dword ptr [esi+0x328]
	push ecx
	push edx
	lea eax,[esp+0x38]
	push eax
	call OffsetRect
	push edi
	push ebx
	lea ecx,[esp+0x28]
	push ecx
	call PtInRect
	test eax,eax
	jne Block27

 Block25:
	mov ecx,dword ptr [esi+0x314]
	test ecx,ecx
	je Block28

 Block26:
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x10]
	push eax
	call edx
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	push ecx
	push edx
	lea eax,[esp+0x38]
	push eax
	call PtInRect
	test eax,eax
	jne Block28

 Block27:
	mov dword ptr [esi+0x330],0

 Block28:
	cmp dword ptr [esi+0x330],0
	jne Block33

 Block29:
	cmp dword ptr [esi+0x314],0
	je Block33

 Block30:
	cmp dword ptr [esi+0x338],0
	jne Block32

 Block31:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x3C
	div ecx
	add edx,ecx
	mov dword ptr [esi+0x338],edx

 Block32:
	mov ecx,dword ptr [esi+0x314]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x10]
	push eax
	call edx
	mov ecx,dword ptr [eax]
	mov dword ptr [esi+0x328],ecx
	mov edx,dword ptr [eax+4]
	mov ecx,offset _D_G_RAND
	mov dword ptr [esi+0x32C],edx
	call CRand32::Random
	xor edx,edx
	mov ecx,0x78
	div ecx
	mov ecx,offset _D_G_RAND
	sub edx,0x3C
	add dword ptr [esi+0x328],edx
	call CRand32::Random
	xor edx,edx
	mov ecx,0x3C
	div ecx
	or eax,0xFFFFFFFF
	mov dword ptr [esi+0x334],eax
	mov dword ptr [esi+0x330],1
	sub edx,0x1E
	add dword ptr [esi+0x32C],edx
	add dword ptr [esi+0x338],eax

 Block33:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret
}
}
// CVecCtrlSummoned::CreateInstance
_SUB_EXCEPTION_HANDLER(59F800)
__SUB0(0059F800, __cdecl, 79805,  CVecCtrlSummoned*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_59F800
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	push 0x348
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+8],esi
	mov dword ptr [esp+0x14],0
	test esi,esi
	je Block2

 Block1:
	mov ecx,esi
	call CVecCtrl::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CVecCtrlSummoned::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CVecCtrlSummoned::`vftable'{for `IWzVector2D'}
	mov eax,esi
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	jne Block5

 Block4:
	push eax
	push 0x8007000E
	call _com_raise_error

 Block5:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CVecCtrlSummoned::Init
__SUB_CLASS_THIS(0059F660, __thiscall, 79800,  CVecCtrlSummoned, void, IVecCtrlOwner*, unsigned long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CVecCtrl::Init
	mov ecx,dword ptr [esp+0xC]
	mov eax,dword ptr [esp+0x10]
	xor edx,edx
	mov dword ptr [esi+0x308],ecx
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esi+0x30C],eax
	mov dword ptr [esi+0x318],ecx
	mov dword ptr [esi+0x31C],edx
	mov dword ptr [esi+0x320],edx
	mov dword ptr [esi+0x324],edx
	cmp ecx,1
	jne Block8

 Block1:
	cmp eax,0xE4E5AC
	je Block7

 Block2:
	cmp eax,0xA7DCAC
	je Block7

 Block3:
	cmp eax,0xB71EEC
	je Block7

 Block4:
	cmp eax,0xC6612C
	je Block7

 Block5:
	cmp eax,0xD5A36D
	je Block7

 Block6:
	mov dword ptr [esi+0x324],0x46
	jmp Block8

 Block7:
	mov dword ptr [esi+0x324],0x2A

 Block8:
	mov dword ptr [esi+0x2F8],0xFFFFFED4
	mov dword ptr [esi+0x2FC],0xFFFFFF38
	mov dword ptr [esi+0x300],0x12C
	mov dword ptr [esi+0x304],0xC8
	pop esi
	ret 0x10
}
}
// CVecCtrlSummoned::SetActive
__SUB_CLASS_THIS(0059F710, __thiscall, 79801,  CVecCtrlSummoned, void, int32_t, long, long, long, long, long, CStaticFoothold*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x14]
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x18]
	push eax
	mov eax,dword ptr [esp+0x20]
	mov esi,ecx
	mov ecx,dword ptr [esp+0x28]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push edx
	push eax
	push edi
	push ebx
	push ecx
	mov ecx,esi
	call CVecCtrl::SetActive
	xor eax,eax
	mov dword ptr [esi+0x33C],ebx
	mov dword ptr [esi+0x340],edi
	mov dword ptr [esi+0x314],eax
	mov dword ptr [esi+0x310],eax
	mov dword ptr [esi+0x328],eax
	mov dword ptr [esi+0x32C],eax
	mov dword ptr [esi+0x330],eax
	mov dword ptr [esi+0x334],eax
	pop edi
	mov dword ptr [esi+0x338],eax
	pop esi
	pop ebx
	ret 0x1C
}
}
// CVecCtrlSummoned::CollisionDetectWalk
__SUB_CLASS_THIS(0059FEE0, __thiscall, 79803,  CVecCtrlSummoned, int32_t, const RelPos&, long&, int32_t) {
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
	mov eax,dword ptr [edi+0x150]
	lea esi,[edi+0x140]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x38]
	mov ebx,dword ptr [ebp+8]
	mov ecx,dword ptr [ebx+0x10]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x40]
	add esp,0x10
	fst qword ptr [esp+0x30]
	fldz
	fld st(0)
	fucomp st(2)
	fnstsw ax
	test ah,0x44
	jnp Block18

 Block1:
	cmp dword ptr [edi+0x318],2
	jne Block18

 Block2:
	mov ecx,dword ptr [edi+0x1A0]
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
	jne Block18

 Block7:
	fcom
	fnstsw ax
	test ah,5
	jp Block10

 Block8:
	mov edx,dword ptr [esi+0x10]
	fstp st(1)
	fstp st(0)
	push edx
	fld qword ptr [ecx+0x50]
	push esi
	fstp qword ptr [esp+0x40]
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x40]
	add esp,8
	fld qword ptr [__real_4034000000000000]
	fcom
	fnstsw ax
	fstp st(1)
	test ah,0x41
	je Block12

 Block9:
	fstp st(0)
	fld qword ptr [esp+0x30]
	fldz

 Block10:
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block20

 Block11:
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [__real_4034000000000000]
	fcom
	add esp,8
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block19

 Block12:
	fldz
	fcomp qword ptr [esp+0x30]
	fnstsw ax
	test ah,5
	jp Block14

 Block13:
	mov ecx,dword ptr [edi+0x1A0]
	fsubr qword ptr [ecx+0x50]

 Block14:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_pos
	fstp st(0)
	mov eax,dword ptr [esi+0x10]
	mov edx,dword ptr [edi+0x1A0]
	fld qword ptr [edx+0x50]
	push eax
	push esi
	fstp qword ptr [esp+0x40]
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x40]
	fstp qword ptr [esp]
	sub esp,0x10
	fldz
	fstp qword ptr [esp+8]
	fstp qword ptr [esp]
	call return_bound_rangeHelper<double>::call
	add esp,0x10
	mov ecx,esi
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_pos
	fstp st(0)
	fldz
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call RelPos::_ZtlSecurePut_v
	fstp st(0)
	cmp dword ptr [edi+0x32C],0
	je Block20

 Block15:
	fldz
	fcomp qword ptr [esp+0x30]
	fnstsw ax
	test ah,5
	mov eax,0xFFFFFFFF
	jnp Block17

 Block16:
	mov eax,1

 Block17:
	push 0
	push eax
	mov ecx,edi
	call CVecCtrl::SetInput
	jmp Block20

 Block18:
	fstp st(1)

 Block19:
	fstp st(0)

 Block20:
	mov ecx,dword ptr [ebp+0xC]
	push 0
	push ecx
	push ebx
	mov ecx,edi
	call CVecCtrl::CollisionDetectWalk
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CVecCtrlSummoned::WorkUpdateActive
_SUB_EXCEPTION_HANDLER(5A0090)
__SUB_CLASS_THIS(005A0090, __thiscall, 79811,  CVecCtrlSummoned, int32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A0090
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
	xor edi,edi
	cmp dword ptr [esi+0x318],edi
	jne Block2

 Block1:
	xor eax,eax
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4

 Block2:
	mov ebx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	lea ecx,[ebx+0x88]
	mov dword ptr [esp+0x20],ebx
	call CAvatar::GetFaceOrigin
	mov ecx,dword ptr [esi+0x14]
	mov dword ptr [esp+0x80],edi
	cmp ecx,edi
	je Block6

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push offset CSummoned::ms_RTTI_CSummoned
	call eax
	test eax,eax
	je Block6

 Block4:
	mov eax,dword ptr [esi+0x14]
	cmp eax,edi
	je Block6

 Block5:
	add eax,0xFFFFFFFC
	mov dword ptr [esp+0x10],eax
	jmp Block7

 Block6:
	mov dword ptr [esp+0x10],edi

 Block7:
	mov eax,dword ptr [esi+0x318]
	cmp eax,5
	je Block19

 Block8:
	cmp eax,2
	je Block19

 Block9:
	mov edx,dword ptr [esi+0x2FC]
	mov eax,dword ptr [esi+0x300]
	mov ecx,dword ptr [esi+0x2F8]
	lea edi,[esi+0x20]
	mov dword ptr [esp+0x38],edx
	mov edx,dword ptr [edi+0x28]
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x34],ecx
	mov ecx,dword ptr [esi+0x304]
	push edx
	lea eax,[edi+0x18]
	push eax
	mov dword ptr [esp+0x48],ecx
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	mov ecx,dword ptr [edi+0x10]
	push eax
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	push eax
	lea edx,[esp+0x3C]
	push edx
	call OffsetRect
	mov eax,dword ptr [ebx+4]
	mov edx,dword ptr [eax+0x10]
	lea edi,[ebx+4]
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call edx
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	push ecx
	push edx
	lea eax,[esp+0x3C]
	push eax
	call PtInRect
	test eax,eax
	jne Block19

 Block10:
	cmp dword ptr [esi+0x318],1
	jne Block12

 Block11:
	mov dword ptr [esp+0x14],eax
	jmp Block15

 Block12:
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	call IWzVector2D::Getry
	mov dword ptr [esp+0x14],eax

 Block15:
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	call edx
	mov ebx,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	add eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [ebx]
	push eax
	push ecx
	lea ecx,[esi+0xC]
	call IWzShape2D::Move
	push 4
	mov ecx,esi
	call CVecCtrl::SetMovePathAttribute
	mov eax,dword ptr [esi+0x14]
	xor edi,edi
	cmp eax,edi
	je Block17

 Block16:
	add eax,0xFFFFFFFC
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	push edi
	mov ecx,eax
	call CSummoned::ShowEffect
	mov ebx,dword ptr [esp+0x1C]
	mov dword ptr [esi+0x320],edi
	mov dword ptr [esi+0x31C],edi

 Block19:
	mov eax,dword ptr [esi+0x318]
	cmp eax,2
	jne Block25

 Block20:
	mov ecx,esi
	call CVecCtrlSummoned::CtrlUpdateActiveWalkFree
	mov edx,dword ptr [esp+0x10]
	cmp dword ptr [edx+0x168],0
	jne Block24

 Block21:
	mov eax,dword ptr [ebp+8]
	push eax
	mov ecx,esi
	call CVecCtrl::WorkUpdateActive
	mov esi,eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	mov eax,esi
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4

 Block24:
	fldz
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
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x60],eax
	call CVecCtrl::SetInput
	jmp Block83

 Block25:
	cmp eax,4
	je Block78

 Block26:
	cmp eax,5
	je Block78

 Block27:
	cmp eax,1
	jne Block83

 Block28:
	mov eax,dword ptr [ebx+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[ebx+4]
	lea edx,[esp+0x24]
	push edx
	call eax
	mov ecx,dword ptr [esi+0x30]
	lea edi,[esi+0x20]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	mov ecx,edi
	mov ebx,eax
	call AbsPos::_ZtlSecureGet_y
	call __ftol2_sse
	mov ecx,dword ptr [esp+0x10]
	xor edx,edx
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	setg dl
	cmp dword ptr [ecx+0x168],0
	lea edx,[edx+edx-1]
	mov dword ptr [esp+0x14],edx
	je Block30

 Block29:
	fldz
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vy
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	call __ftol2_sse
	mov dword ptr [esp+0x14],eax
	jmp Block75

 Block30:
	mov ecx,dword ptr [esi+0x324]
	lea edx,[ecx+ebx]
	cmp eax,edx
	jle Block34

 Block31:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	mov dword ptr [esp+0x1C],1
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	mov ecx,dword ptr [esp+0x24]
	sub ecx,dword ptr [esi+0x324]
	add eax,7
	cmp ecx,eax
	mov dword ptr [esp+0x10],ecx
	jl Block33

 Block32:
	mov dword ptr [esp+0x10],eax

 Block33:
	fild dword ptr [esp+0x10]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	fstp st(0)
	fld1
	jmp Block39

 Block34:
	sub ebx,ecx
	cmp eax,ebx
	jge Block38

 Block35:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	mov ecx,dword ptr [esi+0x324]
	add ecx,dword ptr [esp+0x24]
	sub eax,7
	cmp eax,ecx
	mov dword ptr [esp+0x10],ecx
	jl Block37

 Block36:
	mov dword ptr [esp+0x10],eax

 Block37:
	fild dword ptr [esp+0x10]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	fstp st(0)
	fld qword ptr [__real_bff0000000000000]
	jmp Block39

 Block38:
	fldz

 Block39:
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx
	fstp st(0)
	cmp dword ptr [esi+0x31C],0
	jne Block43

 Block40:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	call __ftol2_sse
	mov ebx,dword ptr [esp+0x28]
	mov ecx,ebx
	sub ecx,eax
	mov eax,ecx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0x14
	jle Block44

 Block41:
	mov eax,1
	add dword ptr [esi+0x320],eax
	cmp dword ptr [esi+0x320],0x1E
	jl Block45

 Block42:
	mov dword ptr [esi+0x31C],eax
	jmp Block44

 Block43:
	mov ebx,dword ptr [esp+0x28]

 Block44:
	mov dword ptr [esi+0x320],0

 Block45:
	mov ecx,dword ptr [esp+0x20]
	cmp ebx,ecx
	jl Block60

 Block46:
	mov eax,dword ptr [esi+0x31C]
	test eax,eax
	jne Block49

 Block47:
	lea edx,[ecx+0x64]
	cmp ebx,edx
	jle Block59

 Block48:
	test eax,eax

 Block49:
	jge Block52

 Block50:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	call __ftol2_sse
	cmp eax,dword ptr [esp+0x28]
	jne Block52

 Block51:
	mov dword ptr [esi+0x31C],0
	jmp Block75

 Block52:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	call __ftol2_sse
	mov ecx,dword ptr [esp+0x28]
	add eax,7
	cmp ecx,eax
	mov dword ptr [esp+0x10],ecx
	jl Block54

 Block53:
	mov dword ptr [esp+0x10],eax

 Block54:
	fild dword ptr [esp+0x10]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	mov ecx,edi
	fstp st(0)
	call AbsPos::_ZtlSecureGet_y
	fild dword ptr [esp+0x28]
	fucompp
	fnstsw ax
	test ah,0x44
	jp Block56

 Block55:
	mov dword ptr [esi+0x31C],0xFFFFFFFF

 Block56:
	cmp dword ptr [esi+0x31C],0
	jne Block58

 Block57:
	mov dword ptr [esi+0x31C],1

 Block58:
	fld1
	jmp Block74

 Block59:
	cmp ebx,ecx
	jg Block73

 Block60:
	mov eax,dword ptr [esi+0x31C]
	test eax,eax
	jne Block63

 Block61:
	add ecx,0xFFFFFF9C
	cmp ebx,ecx
	jge Block73

 Block62:
	test eax,eax

 Block63:
	jge Block66

 Block64:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	call __ftol2_sse
	cmp eax,dword ptr [esp+0x28]
	jne Block66

 Block65:
	mov dword ptr [esi+0x31C],0
	jmp Block75

 Block66:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	call __ftol2_sse
	mov ecx,dword ptr [esp+0x28]
	sub eax,7
	cmp eax,ecx
	mov dword ptr [esp+0x10],ecx
	jl Block68

 Block67:
	mov dword ptr [esp+0x10],eax

 Block68:
	fild dword ptr [esp+0x10]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	mov ecx,edi
	fstp st(0)
	call AbsPos::_ZtlSecureGet_y
	fild dword ptr [esp+0x28]
	fucompp
	fnstsw ax
	test ah,0x44
	jp Block70

 Block69:
	mov dword ptr [esi+0x31C],0xFFFFFFFF

 Block70:
	cmp dword ptr [esi+0x31C],0
	jne Block72

 Block71:
	mov dword ptr [esi+0x31C],1

 Block72:
	fld qword ptr [__real_bff0000000000000]
	jmp Block74

 Block73:
	fldz

 Block74:
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vy
	fstp st(0)

 Block75:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_vx
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	test ah,0x44
	jnp Block77

 Block76:
	mov eax,dword ptr [esp+0x14]
	push 0
	push eax
	mov ecx,esi
	call CVecCtrl::SetInput
	jmp Block83

 Block77:
	xor eax,eax
	push eax
	push eax
	mov ecx,esi
	call CVecCtrl::SetInput
	jmp Block83

 Block78:
	mov ecx,esi
	call CVecCtrlSummoned::CtrlUpdateActiveFly
	mov eax,dword ptr [esp+0x10]
	cmp dword ptr [eax+0x168],0
	jne Block82

 Block79:
	mov ecx,dword ptr [ebp+8]
	push ecx
	mov ecx,esi
	call CVecCtrl::WorkUpdateActive
	mov esi,eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block81

 Block80:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block81:
	mov eax,esi
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4

 Block82:
	fldz
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

 Block83:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [ebp+8]
	mov edx,dword ptr [edx+0x18]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block85

 Block84:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block85:
	mov eax,1
	mov ecx,dword ptr [esp+0x78]
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
// CVecCtrlSummoned::ChaseTarget
__SUB_CLASS_THIS(0059F780, __thiscall, 79806,  CVecCtrlSummoned, void, int32_t, IVecCtrlOwner*) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	jne Block2

 Block1:
	mov dword ptr [ecx+0x314],0
	ret 8

 Block2:
	mov eax,dword ptr [esp+8]
	cmp dword ptr [ecx+0x314],eax
	je Block4

 Block3:
	mov dword ptr [ecx+0x314],eax
	xor eax,eax
	mov dword ptr [ecx+0x328],eax
	mov dword ptr [ecx+0x32C],eax
	mov dword ptr [ecx+0x330],eax
	mov dword ptr [ecx+0x334],eax
	mov dword ptr [ecx+0x338],eax

 Block4:
	ret 8
}
}
