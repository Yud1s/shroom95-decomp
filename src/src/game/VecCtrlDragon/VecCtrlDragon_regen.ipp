#include "regen.hpp"
// VecCtrlDragon.ipp
#include "VecCtrlDragon.hpp"

// CVecCtrlDragon::WorkUpdateActive
__SUB_CLASS_THIS(00595FC0, __thiscall, 80058,  CVecCtrlDragon, int32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x34
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x2FC]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push edi
	push eax
	call CUserPool::GetUser
	mov ecx,dword ptr [esi+0x14]
	mov ebx,eax
	test ecx,ecx
	je Block2

 Block1:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push offset CDragon::ms_RTTI_CDragon
	call eax

 Block2:
	mov ecx,dword ptr [esi+0x48]
	lea edi,[esi+0x20]
	push ecx
	lea edx,[edi+0x18]
	push edx
	mov dword ptr [esp+0x38],0xFFFFFED4
	mov dword ptr [esp+0x3C],0xFFFFFF38
	mov dword ptr [esp+0x40],0x12C
	mov dword ptr [esp+0x44],0xC8
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
	lea ecx,[esp+0x38]
	push ecx
	call OffsetRect
	mov edx,dword ptr [ebx+4]
	mov edx,dword ptr [edx+0x10]
	add ebx,4
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebx
	call edx
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	push ecx
	push edx
	lea eax,[esp+0x38]
	push eax
	call PtInRect
	test eax,eax
	jne Block9

 Block3:
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0xC]
	mov dword ptr [esp+0x10],eax
	push edx
	mov edx,dword ptr [esp+0x14]
	lea eax,[esi+0xC]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x40]
	call eax
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	lea ecx,[esi+0xC]
	push ecx
	push eax
	call _com_issue_errorex

 Block5:
	push 4
	mov ecx,esi
	call CVecCtrl::SetMovePathAttribute
	mov eax,dword ptr [esi+0x14]
	test eax,eax
	je Block7

 Block6:
	lea ecx,[eax-4]
	jmp Block8

 Block7:
	xor ecx,ecx

 Block8:
	push 0
	call CDragon::CreateEffect
	xor eax,eax
	mov dword ptr [esi+0x304],eax
	mov dword ptr [esi+0x300],eax

 Block9:
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x20]
	mov dword ptr [esp+0x18],ecx
	push eax
	mov ecx,ebx
	call edx
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	call _ZtlSecureFuseHelper<double>::call
	call __ftol2_sse
	mov ecx,dword ptr [edi+0x28]
	push ecx
	lea edx,[edi+0x18]
	push edx
	mov ebx,eax
	call _ZtlSecureFuseHelper<double>::call
	call __ftol2_sse
	mov ecx,dword ptr [edi+0x28]
	mov dword ptr [esp+0x3C],eax
	xor eax,eax
	cmp dword ptr [esp+0x30],ebx
	push ecx
	setg al
	lea edx,[edi+0x18]
	push edx
	lea eax,[eax+eax-1]
	mov dword ptr [esp+0x24],eax
	call _ZtlSecureFuseHelper<double>::call
	add esp,0x18
	call __ftol2_sse
	mov ecx,dword ptr [esp+0x24]
	sub ecx,eax
	mov eax,ecx
	cdq
	xor eax,edx
	sub eax,edx
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fdiv qword ptr [__real_4024000000000000]
	fstp dword ptr [esp+0x14]
	fld dword ptr [__real_41880000]
	fld dword ptr [esp+0x14]
	fcom
	fnstsw ax
	test ah,5
	jp Block11

 Block10:
	fstp st(1)
	jmp Block12

 Block11:
	fstp st(0)

 Block12:
	fstp dword ptr [esp+0x10]
	fld dword ptr [esp+0x10]
	fadd dword ptr [__real_3f800000]
	call __ftol2_sse
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esi+0x308]
	lea edx,[eax+ebx]
	cmp ecx,edx
	jle Block16

 Block13:
	mov eax,dword ptr [edi+0x10]
	push eax
	push edi
	mov dword ptr [esp+0x14],1
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	mov ecx,dword ptr [esp+0x20]
	sub ecx,dword ptr [esi+0x308]
	add eax,7
	cmp ecx,eax
	mov dword ptr [esp+0x10],ecx
	jl Block15

 Block14:
	mov dword ptr [esp+0x10],eax

 Block15:
	fild dword ptr [esp+0x10]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld1
	mov dword ptr [edi+0x10],eax
	jmp Block21

 Block16:
	sub ebx,eax
	cmp ecx,ebx
	jge Block20

 Block17:
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	mov ecx,dword ptr [esi+0x308]
	add ecx,dword ptr [esp+0x20]
	sub eax,7
	cmp eax,ecx
	mov dword ptr [esp+0x10],ecx
	jl Block19

 Block18:
	mov dword ptr [esp+0x10],eax

 Block19:
	fild dword ptr [esp+0x10]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fld qword ptr [__real_bff0000000000000]
	mov dword ptr [edi+0x10],eax
	jmp Block21

 Block20:
	fldz

 Block21:
	sub esp,8
	lea ecx,[edi+0x30]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x40],eax
	cmp dword ptr [esi+0x300],0
	jne Block25

 Block22:
	mov edx,dword ptr [edi+0x28]
	push edx
	lea eax,[edi+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	mov ebx,dword ptr [esp+0x24]
	mov ecx,ebx
	sub ecx,eax
	mov eax,ecx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0x1E
	jle Block26

 Block23:
	mov eax,1
	add dword ptr [esi+0x304],eax
	cmp dword ptr [esi+0x304],5
	jl Block27

 Block24:
	mov dword ptr [esi+0x300],eax
	jmp Block26

 Block25:
	mov ebx,dword ptr [esp+0x24]

 Block26:
	mov dword ptr [esi+0x304],0

 Block27:
	mov ecx,dword ptr [esp+0x2C]
	cmp ebx,ecx
	jl Block42

 Block28:
	mov eax,dword ptr [esi+0x300]
	test eax,eax
	jne Block31

 Block29:
	lea edx,[ecx+0x64]
	cmp ebx,edx
	jle Block41

 Block30:
	test eax,eax

 Block31:
	jge Block34

 Block32:
	mov eax,dword ptr [edi+0x28]
	push eax
	lea ecx,[edi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	cmp eax,dword ptr [esp+0x24]
	jne Block34

 Block33:
	mov dword ptr [esi+0x300],0
	jmp Block57

 Block34:
	mov edx,dword ptr [edi+0x28]
	push edx
	lea eax,[edi+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	add eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,eax
	mov dword ptr [esp+0x10],ecx
	jl Block36

 Block35:
	mov dword ptr [esp+0x10],eax

 Block36:
	fild dword ptr [esp+0x10]
	sub esp,8
	lea ecx,[edi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov ecx,eax
	push ecx
	lea edx,[edi+0x18]
	push edx
	mov dword ptr [edi+0x28],eax
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esp+0x2C]
	add esp,8
	fucompp
	fnstsw ax
	test ah,0x44
	jp Block38

 Block37:
	mov dword ptr [esi+0x300],0xFFFFFFFF

 Block38:
	cmp dword ptr [esi+0x300],0
	jne Block40

 Block39:
	mov dword ptr [esi+0x300],1

 Block40:
	fld1
	jmp Block56

 Block41:
	cmp ebx,ecx
	jg Block55

 Block42:
	mov eax,dword ptr [esi+0x300]
	test eax,eax
	jne Block45

 Block43:
	add ecx,0xFFFFFF9C
	cmp ebx,ecx
	jge Block55

 Block44:
	test eax,eax

 Block45:
	jge Block48

 Block46:
	mov eax,dword ptr [edi+0x28]
	push eax
	lea ecx,[edi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	cmp eax,dword ptr [esp+0x24]
	jne Block48

 Block47:
	mov dword ptr [esi+0x300],0
	jmp Block57

 Block48:
	mov edx,dword ptr [edi+0x28]
	push edx
	lea eax,[edi+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	sub eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x24]
	cmp eax,ecx
	mov dword ptr [esp+0x14],ecx
	jl Block50

 Block49:
	mov dword ptr [esp+0x14],eax

 Block50:
	fild dword ptr [esp+0x14]
	sub esp,8
	lea ecx,[edi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov ecx,eax
	push ecx
	lea edx,[edi+0x18]
	push edx
	mov dword ptr [edi+0x28],eax
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [esp+0x2C]
	add esp,8
	fucompp
	fnstsw ax
	test ah,0x44
	jp Block52

 Block51:
	mov dword ptr [esi+0x300],0xFFFFFFFF

 Block52:
	cmp dword ptr [esi+0x300],0
	jne Block54

 Block53:
	mov dword ptr [esi+0x300],1

 Block54:
	fld qword ptr [__real_bff0000000000000]
	jmp Block56

 Block55:
	fldz

 Block56:
	sub esp,8
	lea ecx,[edi+0x48]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x58],eax

 Block57:
	mov eax,dword ptr [edi+0x40]
	push eax
	lea ecx,[edi+0x30]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	fnstsw ax
	test ah,0x44
	jnp Block59

 Block58:
	mov ebx,dword ptr [esp+0xC]
	jmp Block60

 Block59:
	xor ebx,ebx

 Block60:
	lea edx,[esi+0x1E8]
	mov ecx,ebx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1F4]
	xor ecx,ecx
	mov dword ptr [esi+0x1F0],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esi+0x14]
	mov dword ptr [esi+0x1FC],eax
	mov eax,dword ptr [esi+0x1D8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+4]
	push esi
	push eax
	push 0
	push ebx
	call edx
	mov dword ptr [esi+0x1D8],eax
	mov eax,dword ptr [edi+0x28]
	push eax
	lea ecx,[edi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x30]
	mov edx,dword ptr [edi+0x10]
	push edx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x38]
	add esp,0x10
	push 1
	push 0x7FFFFFFF
	push 0
	call __ftol2_sse
	push eax
	call __ftol2_sse
	mov ecx,dword ptr [esp+0x28]
	push eax
	call CWvsPhysicalSpace2D::GetFootholdUnderneath
	test eax,eax
	je Block64

 Block61:
	mov ecx,dword ptr [eax+0x2C]
	cmp dword ptr [esi+0x1C0],ecx
	jne Block63

 Block62:
	mov edx,dword ptr [esi+0x1C4]
	cmp edx,dword ptr [eax+0x30]
	je Block64

 Block63:
	mov dword ptr [esi+0x1C0],ecx
	mov eax,dword ptr [eax+0x30]
	mov ecx,dword ptr [esi+0x14]
	mov dword ptr [esi+0x1C4],eax
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block64:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [ebp+8]
	mov edx,dword ptr [edx+0x18]
	push eax
	mov ecx,esi
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
// CVecCtrlDragon::EndUpdateActive
_SUB_EXCEPTION_HANDLER(596570)
__SUB_CLASS_THIS0(00596570, __thiscall, 80052,  CVecCtrlDragon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_596570
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	lea esi,[ecx+0x244]
	push 0
	push 0
	mov ecx,esi
	call CMovePath::IsTimeForFlush
	test eax,eax
	je Block4

 Block1:
	push 0xD6
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0
	push 0
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x2C],0
	call CMovePath::Flush
	test eax,eax
	jne Block3

 Block2:
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket

 Block3:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block4:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CVecCtrlDragon::ChaseTarget
__SUB_CLASS_THIS(00595E40, __thiscall, 80055,  CVecCtrlDragon, void, int32_t, IVecCtrlOwner*) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	jne Block2

 Block1:
	mov dword ptr [ecx+0x2F8],0
	ret 8

 Block2:
	mov eax,dword ptr [esp+8]
	cmp dword ptr [ecx+0x2F8],eax
	je Block4

 Block3:
	mov dword ptr [ecx+0x2F8],eax

 Block4:
	ret 8
}
}
// CVecCtrlDragon::WorkUpdatePassive
__SUB_CLASS_THIS(00595E70, __thiscall, 80059,  CVecCtrlDragon, int, long) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [esp+0xC]
	push ebx
	push ebp
	push esi
	push edi
	push 0
	push 0
	push eax
	mov esi,ecx
	call CVecCtrl::WorkUpdatePassive
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	lea edi,[esi+0x20]
	mov ebp,edx
	mov edx,dword ptr [edi+0x28]
	mov ebx,eax
	push edx
	lea eax,[edi+0x18]
	push eax
	mov dword ptr [esp+0x24],ecx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x18]
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<double>::call
	fld qword ptr [esp+0x20]
	add esp,0x10
	push 1
	push 0x7FFFFFFF
	push 0
	call __ftol2_sse
	push eax
	call __ftol2_sse
	mov ecx,dword ptr [esp+0x2C]
	push eax
	call CWvsPhysicalSpace2D::GetFootholdUnderneath
	test eax,eax
	je Block4

 Block1:
	mov ecx,dword ptr [eax+0x2C]
	cmp dword ptr [esi+0x1C0],ecx
	jne Block3

 Block2:
	mov edx,dword ptr [esi+0x1C4]
	cmp edx,dword ptr [eax+0x30]
	je Block4

 Block3:
	mov dword ptr [esi+0x1C0],ecx
	mov eax,dword ptr [eax+0x30]
	mov ecx,dword ptr [esi+0x14]
	mov dword ptr [esi+0x1C4],eax
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block4:
	pop edi
	pop esi
	mov edx,ebp
	pop ebp
	mov eax,ebx
	pop ebx
	add esp,8
	ret 4
}
}
// CVecCtrlDragon::~CVecCtrlDragon
__SUB_CLASS_THIS0(00595DF0, __thiscall, 80052,  CVecCtrlDragon, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CVecCtrlDragon::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [ecx+0xC],offset CVecCtrlDragon::`vftable'{for `IWzVector2D'}
	jmp  CVecCtrl::~CVecCtrl
}
}
// CVecCtrlDragon::Init
__SUB_CLASS_THIS(00595E10, __thiscall, 80054,  CVecCtrlDragon, void, IVecCtrlOwner*, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CVecCtrl::Init
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [esi+0x2FC],ecx
	mov dword ptr [esi+0x308],5
	pop esi
	ret 8
}
}
// CVecCtrlDragon::CVecCtrlDragon
__SUB_CLASS_THIS0(00595DD0, __thiscall, 80050,  CVecCtrlDragon, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CVecCtrl::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CVecCtrlDragon::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CVecCtrlDragon::`vftable'{for `IWzVector2D'}
	mov eax,esi
	pop esi
	ret
}
}
// CVecCtrlDragon::CreateInstance
_SUB_EXCEPTION_HANDLER(595F20)
__SUB0(00595F20, __cdecl, 80057,  CVecCtrlDragon*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_595F20
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	push 0x310
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+4],eax
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CVecCtrlDragon::_ctor_default
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
