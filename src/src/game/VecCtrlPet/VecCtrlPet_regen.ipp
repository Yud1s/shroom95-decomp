#include "regen.hpp"
// VecCtrlPet.ipp
#include "VecCtrlPet.hpp"

// CVecCtrlPet::WorkUpdateActive
_SUB_EXCEPTION_HANDLER(59E960)
__SUB_CLASS_THIS(0059E960, __thiscall, 79848,  CVecCtrlPet, int32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_59E960
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
	mov ebx,ecx
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [ebx+0x14]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFFC
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [eax+0x94]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call CUser::GetVecCtrl_0
	mov esi,dword ptr [eax]
	test esi,esi
	je Block5

 Block4:
	add esi,0xFFFFFFF4
	jmp Block6

 Block5:
	xor esi,esi

 Block6:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block8:
	mov ecx,dword ptr [esi+0x1BC]
	lea edi,[esi+0x1B4]
	push ecx
	push edi
	mov dword ptr [esp+0x38],edi
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block12

 Block9:
	mov edx,dword ptr [ebx+0x1BC]
	push edx
	lea eax,[ebx+0x1B4]
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block12

 Block10:
	fldz
	sub esp,8
	lea ecx,[ebx+0x68]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[ebx+0x50]
	mov dword ptr [ebx+0x78],eax
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [ebx+0x60],eax
	mov ecx,dword ptr [esi+0x1F0]
	push ecx
	lea edx,[esi+0x1E8]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	mov eax,dword ptr [esi+0x1FC]
	push eax
	add esi,0x1F4
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x10
	lea edx,[ebx+0x1E8]
	mov ecx,edi
	mov esi,eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,esi

 Block11:
	lea edx,[ebx+0x1F4]
	mov dword ptr [ebx+0x1F0],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,ebx
	mov dword ptr [ebx+0x1FC],eax
	call CVecCtrlPet::WorkUpdateActiveLadderOrRope
	jmp Block122

 Block12:
	mov ecx,dword ptr [esi+0x1BC]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block22

 Block13:
	mov edx,dword ptr [ebx+0x30]
	lea edi,[ebx+0x20]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	call __ftol2_sse
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [edi+0x28]
	push eax
	lea ecx,[edi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	call __ftol2_sse
	mov esi,dword ptr [esp+0x2C]
	add esi,0x20
	mov ecx,0x18
	rep movsd
	mov edx,dword ptr [ebx+0x30]
	lea esi,[ebx+0x20]
	push edx
	push esi
	mov dword ptr [esp+0x30],eax
	call _ZtlSecureFuseHelper<double>::call
	call __ftol2_sse
	mov dword ptr [esp+0x38],eax
	mov eax,dword ptr [esi+0x28]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	call __ftol2_sse
	mov edx,dword ptr [esi+0x58]
	mov edi,dword ptr [ebx+0x1D8]
	mov dword ptr [esp+0x44],eax
	push edx
	lea eax,[esi+0x48]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x64]
	mov ecx,dword ptr [esi+0x40]
	push ecx
	lea edx,[esi+0x30]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x74]
	mov eax,dword ptr [esi+0x28]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x84]
	mov edx,dword ptr [esi+0x10]
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x94]
	mov eax,dword ptr [ebx+0x1BC]
	add esp,0x40
	push eax
	lea ecx,[ebx+0x1B4]
	push ecx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	fld qword ptr [esp+0x44]
	add esp,8
	push 0
	push 0
	push 0
	push edi
	mov esi,eax
	call __ftol2_sse
	fld qword ptr [esp+0x54]
	push eax
	call __ftol2_sse
	fld qword ptr [esp+0x60]
	push eax
	call __ftol2_sse
	fld qword ptr [esp+0x6C]
	push eax
	call __ftol2_sse
	push eax
	push esi
	mov edx,dword ptr [ebx+0x1A0]
	push 0
	push edx
	push 5
	lea ecx,[ebx+0x244]
	call CMovePath::MakeMovePath
	mov eax,dword ptr [ebx+0x14]
	test eax,eax
	je Block15

 Block14:
	lea ecx,[eax-4]
	jmp Block16

 Block15:
	xor ecx,ecx

 Block16:
	mov eax,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x1C]
	push edx
	mov edx,dword ptr [esp+0x1C]
	push eax
	push edx
	push 2
	call CPet::ShowEffect_1
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax+0x1BC]
	mov edx,dword ptr [esp+0x30]
	push ecx
	push edx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	mov eax,dword ptr [eax]
	add esp,8
	cmp eax,1
	jb Block20

 Block17:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [edx+0xBC]
	test ecx,ecx
	je Block20

 Block18:
	cmp eax,dword ptr [ecx-4]
	jae Block20

 Block19:
	mov edx,dword ptr [edx+0xBC]
	lea ecx,[eax*8]
	sub ecx,eax
	lea eax,[edx+ecx*4]
	jmp Block21

 Block20:
	xor eax,eax

 Block21:
	mov edx,dword ptr [ebx]
	push 0
	push eax
	mov eax,dword ptr [edx+0x14]
	push 0
	mov ecx,ebx
	call eax
	mov dword ptr [ebx+0x2FC],0
	jmp Block121

 Block22:
	mov ecx,dword ptr [ebx+0x1BC]
	push ecx
	lea edx,[ebx+0x1B4]
	push edx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block26

 Block23:
	add dword ptr [ebx+0x2FC],0x1E
	cmp dword ptr [ebx+0x2FC],0xC8
	jge Block25

 Block24:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	call CVecCtrl::GetInput
	mov ecx,dword ptr [esp+0x30]
	lea edx,[ebx+0x1E8]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esp+0x28]
	jmp Block11

 Block25:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0x3A00]
	push 0
	push eax
	mov ecx,ebx
	call CVecCtrl::SetInput
	mov dword ptr [ebx+0x200],1
	jmp Block121

 Block26:
	cmp dword ptr [ebx+0x1A0],0
	jne Block28

 Block27:
	mov ecx,ebx
	call CVecCtrl::IsSwimming
	test eax,eax
	je Block121

 Block28:
	mov ecx,dword ptr [ebx+0x48]
	lea edi,[ebx+0x20]
	mov eax,0xFFFFFFCE
	mov dword ptr [esp+0x74],eax
	mov dword ptr [esp+0x78],eax
	mov eax,0x32
	push ecx
	lea edx,[edi+0x18]
	push edx
	mov dword ptr [esp+0x84],eax
	mov dword ptr [esp+0x88],eax
	mov dword ptr [esp+0x6C],0xFFFFFED4
	mov dword ptr [esp+0x70],0xFFFFFF38
	mov dword ptr [esp+0x74],0x12C
	mov dword ptr [esp+0x78],0xC8
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
	lea ecx,[esp+0x6C]
	push ecx
	call OffsetRect
	mov esi,dword ptr [esp+0x14]
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	add esi,4
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	call edx
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	push ecx
	push edx
	lea eax,[esp+0x6C]
	push eax
	call PtInRect
	test eax,eax
	jne Block35

 Block29:
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x20],eax
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	call edx
	mov edi,dword ptr [eax+4]
	sub edi,0xA
	mov ecx,ebx
	mov dword ptr [esp+0x28],edi
	call CVecCtrl::IsSwimming
	test eax,eax
	jne Block31

 Block30:
	mov ecx,dword ptr [esp+0x20]
	push 1
	push 0x7FFFFFFF
	lea eax,[esp+0x30]
	push eax
	push edi
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	call CWvsPhysicalSpace2D::GetFootholdUnderneath

 Block31:
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [esp+0x20]
	push edx
	push eax
	lea ecx,[esp+0x7C]
	push ecx
	call OffsetRect
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	call edx
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	push ecx
	push edx
	lea eax,[esp+0x7C]
	push eax
	call PtInRect
	test eax,eax
	je Block121

 Block32:
	mov ecx,dword ptr [esp+0x20]
	push edi
	push ecx
	lea ecx,[ebx+0xC]
	call IWzShape2D::Move
	push 4
	mov ecx,ebx
	call CVecCtrl::SetMovePathAttribute
	mov eax,dword ptr [ebx+0x14]
	test eax,eax
	je Block34

 Block33:
	lea ecx,[eax-4]
	push 1
	call CPet::ShowEffect_0
	jmp Block121

 Block34:
	xor ecx,ecx
	push 1
	call CPet::ShowEffect_0
	jmp Block121

 Block35:
	mov ecx,ebx
	call CVecCtrl::IsSwimming
	test eax,eax
	jne Block51

 Block36:
	mov edx,dword ptr [ebx+0x150]
	lea eax,[ebx+0x140]
	push edx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [__real_4044000000000000]
	fstp qword ptr [esp]
	sub esp,8
	mov ecx,ebx
	fstp qword ptr [esp]
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	mov ecx,dword ptr [ebx+0x1A0]
	mov dword ptr [esp+0x40],eax
	fild dword ptr [esp+0x40]
	sub esp,8
	fstp qword ptr [esp]
	call CStaticFoothold::GetForwardLink
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block51

 Block37:
	mov ecx,ebx
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	test eax,eax
	je Block51

 Block38:
	mov eax,dword ptr [esp+0x1C]
	fld qword ptr [eax+0x40]
	fldz
	fcompp
	fnstsw ax
	test ah,1
	jne Block51

 Block39:
	mov ecx,dword ptr [esp+0x1C]
	fld qword ptr [ecx+0x48]
	mov ecx,ebx
	fstp qword ptr [esp+0x54]
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	mov dword ptr [esp+0x30],eax
	fild dword ptr [esp+0x30]
	fmul qword ptr [esp+0x54]
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	test ah,5
	jp Block51

 Block40:
	mov ecx,ebx
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	test eax,eax
	jge Block42

 Block41:
	mov edx,dword ptr [ebx+0x1A0]
	mov ecx,dword ptr [edx+0x64]
	jmp Block43

 Block42:
	mov eax,dword ptr [ebx+0x1A0]
	mov ecx,dword ptr [eax+0x68]

 Block43:
	test ecx,ecx
	je Block85

 Block44:
	fld qword ptr [ecx+0x40]
	fldz
	fcompp
	fnstsw ax
	test ah,1
	jne Block85

 Block45:
	fld qword ptr [ecx+0x48]
	mov ecx,ebx
	fstp qword ptr [esp+0x54]
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	mov dword ptr [esp+0x30],eax
	fild dword ptr [esp+0x30]
	fmul qword ptr [esp+0x54]
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	test ah,5
	jp Block85

 Block46:
	mov ecx,ebx
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	test eax,eax
	jge Block48

 Block47:
	mov ecx,dword ptr [ebx+0x150]
	lea eax,[ebx+0x140]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_3ff0000000000000]
	add esp,8
	fnstsw ax
	test ah,5
	jnp Block50

 Block48:
	mov ecx,ebx
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	test eax,eax
	jle Block85

 Block49:
	mov edx,dword ptr [ebx+0x150]
	lea eax,[ebx+0x140]
	push edx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	mov eax,dword ptr [ebx+0x1A0]
	fld qword ptr [eax+0x50]
	add esp,8
	fsub qword ptr [__real_3ff0000000000000]
	fcompp
	fnstsw ax
	test ah,5
	jp Block85

 Block50:
	push 0
	mov ecx,ebx
	call CVecCtrl::_ZtlSecureGet_m_nInputX
	neg eax
	push eax
	mov ecx,ebx
	call CVecCtrl::SetInput

 Block51:
	mov ecx,ebx
	call CVecCtrl::IsSwimming
	test eax,eax
	je Block72

 Block52:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	fstp qword ptr [esp+0x54]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x4C]
	push eax
	mov ecx,esi
	call edx
	fild dword ptr [eax+4]
	fsubr qword ptr [esp+0x54]
	fcomp qword ptr [__real_4049000000000000]
	fnstsw ax
	test ah,0x41
	jne Block72

 Block53:
	mov dword ptr [ebx+0x200],1

 Block54:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x20],0x50
	call edx
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax+0x640]
	mov edx,0xA0
	test al,1
	je Block59

 Block55:
	mov ecx,dword ptr [ebx+0x310]
	cmp ecx,1
	je Block57

 Block56:
	cmp ecx,3
	jne Block58

 Block57:
	sub dword ptr [esp+0x34],edx

 Block58:
	test al,1
	jne Block62

 Block59:
	mov ecx,dword ptr [ebx+0x310]
	cmp ecx,2
	je Block61

 Block60:
	cmp ecx,4
	jne Block62

 Block61:
	add dword ptr [esp+0x34],edx

 Block62:
	mov ecx,0x46
	lea edx,[ecx-0x1E]
	test al,1
	jne Block66

 Block63:
	cmp dword ptr [ebx+0x310],3
	jne Block65

 Block64:
	sub dword ptr [esp+0x34],edx
	mov dword ptr [esp+0x1C],ecx

 Block65:
	test al,1
	je Block68

 Block66:
	cmp dword ptr [ebx+0x310],4
	jne Block68

 Block67:
	add dword ptr [esp+0x34],edx
	mov dword ptr [esp+0x1C],ecx

 Block68:
	cmp dword ptr [ebx+0x310],5
	jne Block70

 Block69:
	mov dword ptr [esp+0x1C],0x3C

 Block70:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fisubr dword ptr [esp+0x3C]
	add esp,8
	fabs
	call __ftol2_sse
	mov esi,dword ptr [esp+0x20]
	mov edx,dword ptr [esi+4]
	mov edi,dword ptr [esp+0x34]
	mov edx,dword ptr [edx+0x10]
	add esi,4
	mov dword ptr [esp+0x30],eax
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x30],edi
	call edx
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x14],eax
	cmp edi,dword ptr [ebx+0x300]
	jne Block86

 Block71:
	mov eax,dword ptr [ebx+0x304]
	jmp Block87

 Block72:
	mov eax,dword ptr [ebx+0x1A0]
	test eax,eax
	je Block54

 Block73:
	mov eax,dword ptr [eax+0x30]
	mov edx,dword ptr [esi]
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [edx+0x18]
	mov ecx,esi
	call eax
	cmp dword ptr [esp+0x30],eax
	je Block54

 Block74:
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x4C]
	push eax
	mov ecx,esi
	call edx
	fild dword ptr [eax+4]
	mov ecx,edi
	fstp qword ptr [esp+0x54]
	call AbsPos::_ZtlSecureGet_y
	fcomp qword ptr [esp+0x54]
	fnstsw ax
	test ah,0x41
	jne Block54

 Block75:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x18]
	mov ecx,esi
	call edx
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [esp+0x24]
	mov edx,dword ptr [ecx+0x34]
	fild dword ptr [edx+eax*8]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	jp Block54

 Block76:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [esp+0x30]
	mov eax,dword ptr [edx+0x34]
	mov ecx,dword ptr [esp+0x24]
	fild dword ptr [eax+ecx*8+4]
	add esp,8
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block54

 Block77:
	cmp dword ptr [ebx+0x31C],0
	jne Block84

 Block78:
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x5C]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	add esp,8
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,esi
	call edx
	fild dword ptr [eax]
	fcomp qword ptr [esp+0x54]
	fnstsw ax
	test ah,0x44
	jp Block80

 Block79:
	mov eax,dword ptr [esp+0x14]
	test byte ptr [eax+0x640],1
	mov ecx,0
	sete cl
	push 0
	lea ecx,[ecx+ecx-1]
	push ecx
	jmp Block83

 Block80:
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x5C]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	add esp,8
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,esi
	call edx
	fild dword ptr [eax]
	fcomp qword ptr [esp+0x54]
	fnstsw ax
	test ah,5
	mov eax,0xFFFFFFFF
	jnp Block82

 Block81:
	mov eax,1

 Block82:
	push 0
	push eax

 Block83:
	mov ecx,ebx
	call CVecCtrl::SetInput

 Block84:
	xor eax,eax
	mov dword ptr [ebx+0x31C],eax
	mov dword ptr [ebx+0x320],eax

 Block85:
	mov dword ptr [ebx+0x200],1
	jmp Block121

 Block86:
	call dword ptr [ZImports::_timeGetTime]

 Block87:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [ebx+0x304],eax
	call CPet::IsLongRange
	mov edi,eax
	neg edi
	sbb edi,edi
	and edi,0x5A
	add edi,0x3C
	cmp dword ptr [ebx+0x314],0
	jne Block100

 Block88:
	cmp dword ptr [ebx+0x310],0
	je Block93

 Block89:
	cmp dword ptr [ebx+0x30C],0
	jne Block93

 Block90:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,dword ptr [ebx+0x308]
	je Block93

 Block91:
	call _rand
	cdq
	mov ecx,0x3E8
	idiv ecx
	test edx,edx
	jne Block93

 Block92:
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xC]
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	call edx
	fld qword ptr [__real_4000000000000000]
	mov eax,dword ptr [eax+4]
	sub esp,8
	lea ecx,[eax+0x24]
	fstp qword ptr [esp]
	mov dword ptr [esp+0xC8],0
	call TSecType<double>::op_mul_assign
	fstp st(0)
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0xC0],0xFFFFFFFF
	call ZRef<CAttrShoe>::~ZRef<CAttrShoe>
	call dword ptr [ZImports::_timeGetTime]
	mov dword ptr [ebx+0x314],eax
	mov dword ptr [ebx+0x200],1

 Block93:
	cmp dword ptr [ebx+0x314],0
	jne Block100

 Block94:
	cmp dword ptr [ebx+0x310],0
	je Block99

 Block95:
	cmp dword ptr [ebx+0x30C],0
	jne Block99

 Block96:
	mov eax,dword ptr [esp+0x14]
	cmp eax,dword ptr [ebx+0x308]
	je Block99

 Block97:
	call _rand
	cdq
	mov ecx,0x2BC
	idiv ecx
	test edx,edx
	jne Block99

 Block98:
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xC]
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	call edx
	fld qword ptr [__real_4000000000000000]
	mov eax,dword ptr [eax+4]
	sub esp,8
	lea ecx,[eax+0x24]
	fstp qword ptr [esp]
	mov dword ptr [esp+0xC8],1
	call TSecType<double>::op_mul_assign
	fstp st(0)
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0xC0],0xFFFFFFFF
	call ZRef<CAttrShoe>::~ZRef<CAttrShoe>
	call dword ptr [ZImports::_timeGetTime]
	mov dword ptr [ebx+0x314],eax
	mov dword ptr [ebx+0x318],0x64

 Block99:
	cmp dword ptr [ebx+0x314],0
	je Block102

 Block100:
	call dword ptr [ZImports::_timeGetTime]
	mov ecx,dword ptr [ebx+0x314]
	add ecx,0x2BC
	cmp eax,ecx
	jbe Block102

 Block101:
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xC]
	lea eax,[esp+0x5C]
	push eax
	mov ecx,esi
	call edx
	fld qword ptr [__real_4000000000000000]
	mov eax,dword ptr [eax+4]
	sub esp,8
	lea ecx,[eax+0x24]
	fstp qword ptr [esp]
	mov dword ptr [esp+0xC8],2
	call TSecType<double>::operator/=
	fstp st(0)
	lea ecx,[esp+0x5C]
	mov dword ptr [esp+0xC0],0xFFFFFFFF
	call ZRef<CAttrShoe>::~ZRef<CAttrShoe>
	xor eax,eax
	mov dword ptr [ebx+0x314],eax
	mov dword ptr [ebx+0x318],eax

 Block102:
	mov eax,dword ptr [esp+0x30]
	add eax,dword ptr [ebx+0x318]
	mov ecx,dword ptr [esp+0x1C]
	cmp eax,ecx
	jge Block104

 Block103:
	mov dword ptr [ebx+0x31C],0
	jmp Block111

 Block104:
	cmp dword ptr [ebx+0x30C],0
	jne Block108

 Block105:
	mov edx,dword ptr [esp+0x14]
	cmp edx,dword ptr [ebx+0x308]
	jne Block107

 Block106:
	cmp eax,ecx
	jg Block108

 Block107:
	add edi,0x14
	cmp eax,edi
	jle Block111

 Block108:
	mov ecx,dword ptr [ebx+0x30]
	lea eax,[ebx+0x20]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esp+0x3C]
	add esp,8
	fcompp
	fnstsw ax
	test ah,5
	mov eax,0xFFFFFFFF
	jnp Block110

 Block109:
	mov eax,1

 Block110:
	mov dword ptr [ebx+0x31C],eax

 Block111:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block120

 Block112:
	mov edx,dword ptr [ecx+0x640]
	and edx,0xFFFFFFFE
	cmp edx,0x12
	je Block120

 Block113:
	call CUserLocal::GetPetSkill
	cmp dword ptr [ebx+0x30C],0
	je Block120

 Block114:
	call dword ptr [ZImports::_timeGetTime]
	mov ecx,dword ptr [ebx+0x304]
	add ecx,0x64
	cmp eax,ecx
	jbe Block120

 Block115:
	mov esi,dword ptr [esp+0x20]
	mov ecx,esi
	call CPet::IsInPickupForbiddenMap
	test eax,eax
	jne Block120

 Block116:
	mov ecx,esi
	call CPet::SweepForDrop
	test eax,eax
	je Block120

 Block117:
	mov ecx,esi
	call CPet::CanPickupItem
	test eax,eax
	jne Block119

 Block118:
	mov ecx,esi
	call CPet::CanPickupMeso
	test eax,eax
	je Block120

 Block119:
	mov edx,dword ptr [ebx+0x30C]
	mov dword ptr [ebx+0x31C],edx

 Block120:
	mov eax,dword ptr [ebx+0x31C]
	push 0
	push eax
	mov ecx,ebx
	call CVecCtrl::SetInput
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [ebx+0x300],ecx
	mov dword ptr [ebx+0x308],edx

 Block121:
	mov eax,dword ptr [ebp+8]
	push eax
	mov ecx,ebx
	call CVecCtrl::WorkUpdateActive

 Block122:
	mov eax,1
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
// CVecCtrlPet::CreateInstance
_SUB_EXCEPTION_HANDLER(59E730)
__SUB0(0059E730, __cdecl, 79846,  CVecCtrlPet*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_59E730
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	push 0x328
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+4],eax
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CVecCtrlPet::_ctor_default
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
// CVecCtrlPet::SetActive
__SUB_CLASS_THIS(0059E470, __thiscall, 79842,  CVecCtrlPet, void, int32_t, long, long, long, long, long, CStaticFoothold*) {
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
	dec ecx
	push ecx
	push edx
	push eax
	mov ecx,esi
	call CVecCtrl::SetActive
	xor eax,eax
	mov dword ptr [esi+0x31C],eax
	mov dword ptr [esi+0x320],eax
	pop esi
	ret 0x1C
}
}
// CVecCtrlPet::CVecCtrlPet
__SUB_CLASS_THIS0(0059E400, __thiscall, 79837,  CVecCtrlPet, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CVecCtrl::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CVecCtrlPet::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CVecCtrlPet::`vftable'{for `IWzVector2D'}
	mov eax,esi
	pop esi
	ret
}
}
// CVecCtrlPet::SetPositionContext
__SUB_CLASS_THIS(0059E4B0, __thiscall, 79844,  CVecCtrlPet, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x310],eax
	ret 4
}
}
// CVecCtrlPet::CollisionDetectWalk
__SUB_CLASS_THIS(0059E4C0, __thiscall, 79843,  CVecCtrlPet, int32_t, const RelPos&, long&, int32_t) {
__asm {

 Block0:
	sub esp,0x14
	push ebx
	push ebp
	mov ebp,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ebx,ecx
	mov ecx,dword ptr [ebx+0x150]
	push esi
	lea eax,[ebx+0x140]
	push edi
	push ecx
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x1C]
	mov esi,dword ptr [esp+0x30]
	mov edx,dword ptr [esi+0x10]
	push edx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fsubr qword ptr [esp+0x24]
	add esp,0x10
	fst qword ptr [esp+0x14]
	fldz
	fucompp
	fnstsw ax
	test ah,0x44
	jnp Block30

 Block1:
	mov eax,dword ptr [ebx+0x14]
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFFC
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	mov eax,dword ptr [eax+0x94]
	mov ecx,dword ptr [ebx+0x1A0]
	mov edx,dword ptr [ebp+0x34]
	mov ecx,dword ptr [ecx+0x30]
	mov dword ptr [esp+0x10],eax
	mov eax,dword ptr [edx+ecx*8]
	mov ecx,dword ptr [edx+ecx*8+4]
	mov edx,ecx
	sub edx,eax
	cmp edx,0x28
	mov esi,eax
	mov edi,ecx
	jle Block6

 Block5:
	lea esi,[eax+0x14]
	lea edi,[ecx-0x14]

 Block6:
	mov eax,dword ptr [ebx+0x150]
	lea ebp,[ebx+0x140]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<double>::call
	fstp st(0)
	fldz
	add esp,8
	fcom qword ptr [esp+0x14]
	fnstsw ax
	test ah,0x41
	jne Block10

 Block7:
	mov ecx,dword ptr [ebp+0x10]
	fstp st(0)
	push ecx
	push ebp
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcom
	add esp,8
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block10

 Block8:
	mov edx,dword ptr [ebx+0x1A0]
	mov ecx,dword ptr [edx+0x64]
	test ecx,ecx
	je Block21

 Block9:
	fcom qword ptr [ecx+0x40]
	fnstsw ax
	test ah,1
	je Block14

 Block10:
	fcomp qword ptr [esp+0x14]
	fnstsw ax
	test ah,5
	jp Block29

 Block11:
	mov eax,dword ptr [ebp+0x10]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [ebx+0x1A0]
	fcomp qword ptr [ecx+0x50]
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block29

 Block12:
	mov ecx,dword ptr [ecx+0x68]
	test ecx,ecx
	je Block22

 Block13:
	fldz
	fcom qword ptr [ecx+0x40]
	fnstsw ax
	test ah,1
	jne Block28

 Block14:
	fld qword ptr [ecx+0x48]
	fmul qword ptr [esp+0x14]
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block22

 Block15:
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x18]
	mov ebp,dword ptr [ebx+0x1C4]
	add ecx,4
	call eax
	cmp eax,ebp
	jne Block22

 Block16:
	fldz
	fld qword ptr [esp+0x14]
	fcom
	fnstsw ax
	test ah,5
	jp Block18

 Block17:
	mov ecx,dword ptr [ebx+0x1A0]
	cmp esi,dword ptr [ecx+0xC]
	jl Block27

 Block18:
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block22

 Block19:
	mov edx,dword ptr [ebx+0x1A0]
	cmp edi,dword ptr [edx+0x14]
	jg Block29

 Block20:
	jmp Block22

 Block21:
	fstp st(0)

 Block22:
	mov eax,dword ptr [ebx+0x48]
	push eax
	lea ecx,[ebx+0x38]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	add esp,8
	lea eax,[esp+0x1C]
	push eax
	call edx
	fild dword ptr [eax+4]
	fcomp qword ptr [esp+0x14]
	fnstsw ax
	test ah,0x41
	jne Block26

 Block23:
	call _rand
	and eax,0x80000001
	jns Block25

 Block24:
	dec eax
	or eax,0xFFFFFFFE
	inc eax

 Block25:
	jne Block29

 Block26:
	mov esi,dword ptr [esp+0x28]
	lea edi,[ebx+0x140]
	mov ecx,0xC
	rep movsd
	pop edi
	pop esi
	pop ebp
	mov dword ptr [ebx+0x200],1
	xor eax,eax
	pop ebx
	add esp,0x14
	ret 0xC

 Block27:
	fstp st(0)

 Block28:
	fstp st(0)

 Block29:
	mov esi,dword ptr [esp+0x28]

 Block30:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x2C]
	push eax
	push ecx
	push esi
	mov ecx,ebx
	call CVecCtrl::CollisionDetectWalk
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0xC
}
}
// CVecCtrlPet::Init
__SUB_CLASS_THIS(0059E440, __thiscall, 79841,  CVecCtrlPet, void, IVecCtrlOwner*, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CVecCtrl::Init
	mov ecx,dword ptr [esp+0xC]
	xor eax,eax
	mov dword ptr [esi+0x2F8],ecx
	mov dword ptr [esi+0x314],eax
	mov dword ptr [esi+0x318],eax
	pop esi
	ret 8
}
}
// CVecCtrlPet::~CVecCtrlPet
__SUB_CLASS_THIS0(0059E420, __thiscall, 79839,  CVecCtrlPet, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CVecCtrlPet::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [ecx+0xC],offset CVecCtrlPet::`vftable'{for `IWzVector2D'}
	jmp  CVecCtrl::~CVecCtrl
}
}
// CVecCtrlPet::EndUpdateActive
_SUB_EXCEPTION_HANDLER(59F5A0)
__SUB_CLASS_THIS0(0059F5A0, __thiscall, 79839,  CVecCtrlPet, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_59F5A0
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
	mov esi,ecx
	push 0
	lea edi,[esi+0x244]
	push 0
	mov ecx,edi
	call CMovePath::IsTimeForFlush
	test eax,eax
	je Block7

 Block1:
	push 0xC7
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	mov esi,dword ptr [esi+0x14]
	mov dword ptr [esp+0x24],0
	test esi,esi
	je Block3

 Block2:
	lea eax,[esi-4]
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	push 8
	add eax,0xA0
	push eax
	lea ecx,[esp+0x14]
	call COutPacket::EncodeBuffer
	push 0
	push 0
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CMovePath::Flush
	test eax,eax
	jne Block6

 Block5:
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket

 Block6:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block7:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret
}
}
// CVecCtrlPet::WorkUpdateActiveLadderOrRope
__SUB_CLASS_THIS0(0059E7B0, __thiscall, 79839,  CVecCtrlPet, void) {
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
	fild dword ptr [esp+0x20]
	add esp,8
	lea ecx,[edi+0x18]
	fmul qword ptr [__real_4008000000000000]
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
