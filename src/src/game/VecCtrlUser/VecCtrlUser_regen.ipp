#include "regen.hpp"
// VecCtrlUser.ipp
#include "VecCtrlUser.hpp"

// CVecCtrlUser::~CVecCtrlUser
__SUB_CLASS_THIS0(005A0840, __thiscall, 42262,  CVecCtrlUser, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CVecCtrlUser::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [ecx+0xC],offset CVecCtrlUser::`vftable'{for `IWzVector2D'}
	jmp  CVecCtrl::~CVecCtrl
}
}
// CVecCtrlUser::GetImpactValidity
__SUB_CLASS_THIS0(005A0C30, __thiscall, 42268,  CVecCtrlUser, int32_t) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x14]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFFC
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	cmp dword ptr [eax+0x5EC],0
	jne Block12

 Block4:
	cmp dword ptr [eax+0x5F0],0
	jne Block12

 Block5:
	cmp dword ptr [eax+0x3B84],0
	jne Block12

 Block6:
	cmp dword ptr [eax+0x5E8],0x217E76D
	je Block12

 Block7:
	push esi
	lea esi,[eax+0x88]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block9

 Block8:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	cmp eax,0xCF
	jne Block11

 Block9:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+8]
	mov ecx,edi
	call edx
	test eax,eax
	jne Block11

 Block10:
	pop esi
	mov eax,1
	pop edi
	ret

 Block11:
	pop esi
	xor eax,eax
	pop edi
	ret

 Block12:
	xor eax,eax
	pop edi
	ret
}
}
// CVecCtrlUser::WorkUpdateActive
__SUB_CLASS_THIS(005A1390, __thiscall, 42274,  CVecCtrlUser, int32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x34
	push ebx
	push esi
	push edi
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov esi,ecx
	mov ecx,edi
	mov dword ptr [esp+0x2C],edi
	call CUserLocal::IsImmovable
	test eax,eax
	je Block7

 Block1:
	push 1
	push 1
	push 1
	push 1
	lea ecx,[esi+0x244]
	call CMovePath::SetKeyPadState
	push 0
	push 0
	mov ecx,esi
	call CVecCtrl::SetInput
	mov eax,dword ptr [ebp+8]
	push eax
	mov ecx,esi
	call CVecCtrl::WorkUpdateActive
	mov eax,dword ptr [edi+0x5E8]
	cmp eax,0x217C05C
	je Block3

 Block2:
	cmp eax,0x217E775
	jne Block82

 Block3:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0x25
	call CInputSystem::IsKeyPressed
	test eax,eax
	je Block5

 Block4:
	mov dword ptr [esi+0x1D8],5
	mov eax,1
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4

 Block5:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0x27
	call CInputSystem::IsKeyPressed
	test eax,eax
	je Block82

 Block6:
	mov dword ptr [esi+0x1D8],4
	mov eax,1
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4

 Block7:
	xor eax,eax
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x24],eax
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [eax+0x6B0]
	push ecx
	add eax,0x6A8
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block9

 Block8:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	call CUserLocal::SetAttractMove
	jmp Block48

 Block9:
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov ebx,dword ptr [ecx+4]
	call GetFocus
	cmp eax,ebx
	jne Block48

 Block10:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWnd::IsFocused
	test eax,eax
	je Block48

 Block11:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	jne Block48

 Block12:
	add edi,0x88
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block19

 Block13:
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x28],0
	cmp dword ptr [ebx+0x5D0],0
	je Block16

 Block14:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0x14
	je Block17

 Block15:
	cmp dword ptr [ebx+0x5D0],0
	jne Block18

 Block16:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	push eax
	call is_pronestab_action
	add esp,4
	test eax,eax
	je Block18

 Block17:
	mov dword ptr [esp+0x24],1
	jmp Block19

 Block18:
	mov dword ptr [esp+0x24],0

 Block19:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	mov ecx,edi
	mov ebx,eax
	call CAvatar::IsRidingWildHunterJaguar
	test eax,eax
	jne Block21

 Block20:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block26

 Block21:
	mov ecx,edi
	call CAvatar::IsRidingWildHunterJaguar
	test eax,eax
	je Block24

 Block22:
	mov edx,dword ptr [esp+0x2C]
	cmp dword ptr [edx+0x630],0xFFFFFFFF
	jg Block24

 Block23:
	cmp ebx,0xFC
	jne Block26

 Block24:
	cmp ebx,0xCD
	je Block26

 Block25:
	cmp ebx,0xCF
	jne Block47

 Block26:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	call CInputSystem::IsJoystickEnabled
	test eax,eax
	jne Block28

 Block27:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0x27
	mov ebx,ecx
	call CInputSystem::IsKeyPressed
	mov edi,eax
	neg edi
	sbb edi,edi
	push 0x25
	mov ecx,ebx
	neg edi
	call CInputSystem::IsKeyPressed
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	neg eax
	sbb eax,eax
	add eax,edi
	push 0x28
	mov dword ptr [esp+0x2C],eax
	mov ebx,ecx
	call CInputSystem::IsKeyPressed
	mov edi,eax
	neg edi
	sbb edi,edi
	push 0x26
	mov ecx,ebx
	neg edi
	call CInputSystem::IsKeyPressed
	neg eax
	sbb eax,eax
	add eax,edi
	jmp Block43

 Block28:
	mov edi,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0x25
	mov ecx,edi
	call CInputSystem::IsKeyPressed
	test eax,eax
	jne Block31

 Block29:
	push 2
	mov ecx,edi
	call CInputSystem::IsJoyBtnPressed
	test eax,eax
	jne Block31

 Block30:
	xor ebx,ebx
	jmp Block32

 Block31:
	or ebx,0xFFFFFFFF

 Block32:
	push 0x27
	mov ecx,edi
	call CInputSystem::IsKeyPressed
	test eax,eax
	jne Block34

 Block33:
	push 3
	mov ecx,edi
	call CInputSystem::IsJoyBtnPressed
	test eax,eax
	je Block35

 Block34:
	mov eax,1

 Block35:
	add eax,ebx
	push 0x26
	mov ecx,edi
	mov dword ptr [esp+0x2C],eax
	call CInputSystem::IsKeyPressed
	test eax,eax
	jne Block38

 Block36:
	push eax
	mov ecx,edi
	call CInputSystem::IsJoyBtnPressed
	test eax,eax
	jne Block38

 Block37:
	xor ebx,ebx
	jmp Block39

 Block38:
	or ebx,0xFFFFFFFF

 Block39:
	push 0x28
	mov ecx,edi
	call CInputSystem::IsKeyPressed
	test eax,eax
	jne Block41

 Block40:
	push 1
	mov ecx,edi
	call CInputSystem::IsJoyBtnPressed
	test eax,eax
	je Block42

 Block41:
	mov eax,1

 Block42:
	add eax,ebx

 Block43:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+8]
	call edx
	mov ecx,eax
	call SecondaryStat::_ZtlSecureGet_nReverseInput_
	mov ecx,dword ptr [esp+0x24]
	test eax,eax
	mov eax,dword ptr [esp+0x28]
	je Block45

 Block44:
	neg eax
	neg ecx
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x24],ecx

 Block45:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [edx+0x3850],0
	mov edi,dword ptr [esp+0x2C]
	je Block49

 Block46:
	xor ecx,ecx
	xor eax,eax
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x28],eax
	jmp Block49

 Block47:
	mov edi,dword ptr [esp+0x2C]

 Block48:
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x28]

 Block49:
	xor edx,edx
	test ecx,ecx
	setg dl
	push edx
	xor edx,edx
	test ecx,ecx
	setl dl
	xor ecx,ecx
	test eax,eax
	setg cl
	push edx
	xor edx,edx
	test eax,eax
	setl dl
	push ecx
	lea ecx,[esi+0x244]
	push edx
	call CMovePath::SetKeyPadState
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x28]
	push eax
	push ecx
	mov ecx,esi
	call CVecCtrl::SetInput
	mov edx,dword ptr [esi+0x1BC]
	push edx
	lea ebx,[esi+0x1B4]
	push ebx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	mov ecx,esi
	test eax,eax
	je Block54

 Block50:
	call CVecCtrlUser::WorkUpdateActiveLadderOrRope
	xor ecx,ecx
	cmp dword ptr [esi+0x1E4],ecx
	je Block82

 Block51:
	mov dword ptr [esi+0x1E4],ecx
	mov esi,dword ptr [esi+0x14]
	cmp esi,ecx
	je Block53

 Block52:
	lea ecx,[esi-4]

 Block53:
	call CUser::SetLayerZ
	mov eax,1
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4

 Block54:
	mov eax,dword ptr [ebp+8]
	push eax
	call CVecCtrl::WorkUpdateActive
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	mov ecx,edi
	call eax
	mov edi,eax
	mov ecx,edi
	call SecondaryStat::IsRidingSkillVehicle
	test eax,eax
	je Block58

 Block55:
	mov ecx,edi
	call SecondaryStat::IsEventVehicle
	test eax,eax
	jne Block58

 Block56:
	mov ecx,edi
	call SecondaryStat::IsWildhunterJaguarVehicle
	test eax,eax
	jne Block58

 Block57:
	mov ecx,edi
	call SecondaryStat::IsMechanicVehicle
	test eax,eax
	je Block82

 Block58:
	cmp dword ptr [esi+0x1A0],0
	jne Block66

 Block59:
	mov ecx,dword ptr [esi+0x78]
	lea edi,[esi+0x20]
	push ecx
	lea edx,[edi+0x48]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block65

 Block60:
	mov eax,dword ptr [esi+0x1BC]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block65

 Block61:
	mov ecx,esi
	call CVecCtrl::_ZtlSecureGet_m_nInputY
	test eax,eax
	jge Block65

 Block62:
	mov ecx,esi
	call CVecCtrlUser::IsAbleToClimbLadderOrRope
	test eax,eax
	je Block65

 Block63:
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
	je Block65

 Block64:
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
	jmp Block81

 Block65:
	cmp dword ptr [esi+0x1A0],0
	je Block82

 Block66:
	mov ecx,dword ptr [esi+0x1BC]
	push ecx
	lea eax,[esi+0x1B4]
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block73

 Block67:
	mov edx,dword ptr [esi+0x1FC]
	push edx
	lea eax,[esi+0x1F4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jge Block73

 Block68:
	mov ecx,esi
	call CVecCtrlUser::IsAbleToClimbLadderOrRope
	test eax,eax
	je Block73

 Block69:
	mov ecx,dword ptr [esi+0x30]
	lea edi,[esi+0x20]
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
	je Block73

 Block70:
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
	jl Block72

 Block71:
	mov dword ptr [esp+0x2C],eax

 Block72:
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
	mov eax,1
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4

 Block73:
	cmp dword ptr [esi+0x1A0],0
	je Block82

 Block74:
	mov eax,dword ptr [esi+0x1BC]
	push eax
	lea eax,[esi+0x1B4]
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block82

 Block75:
	mov ecx,dword ptr [esi+0x1FC]
	push ecx
	lea edx,[esi+0x1F4]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block82

 Block76:
	mov ecx,esi
	call CVecCtrlUser::IsAbleToClimbLadderOrRope
	test eax,eax
	je Block82

 Block77:
	mov eax,dword ptr [esi+0x30]
	lea edi,[esi+0x20]
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
	je Block82

 Block78:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add esp,8
	cmp eax,dword ptr [ebx+0x10]
	jg Block82

 Block79:
	mov ecx,edi
	call AbsPos::_ZtlSecureGet_y
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add eax,0xA
	add esp,8
	cmp dword ptr [ebx+0x10],eax
	jg Block82

 Block80:
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

 Block81:
	mov edx,dword ptr [esi]
	fstp st(0)
	mov eax,dword ptr [edx+0x14]
	push 0
	push ebx
	push 0
	mov ecx,esi
	call eax

 Block82:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CVecCtrlUser::WorkUpdateActiveLadderOrRope
__SUB_CLASS_THIS0(005A1180, __thiscall, 42262,  CVecCtrlUser, void) {
__asm {

 Block0:
	sub esp,0xC
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
	mov edx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	add esp,8
	mov dword ptr [edx+0x3A00],eax

 Block2:
	cmp dword ptr [esi+0x220],0
	je Block4

 Block3:
	mov ecx,esi
	call CVecCtrl::Impact

 Block4:
	cmp dword ptr [esi+0x208],0
	je Block6

 Block5:
	mov ecx,esi
	call CVecCtrl::FallDown

 Block6:
	cmp dword ptr [esi+0x210],0
	je Block8

 Block7:
	mov ecx,esi
	call CVecCtrl::Wings
	mov eax,dword ptr [esi+0x1F0]
	push eax
	lea ecx,[esi+0x1E8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	add esp,8
	mov dword ptr [edx+0x3A00],eax

 Block8:
	mov ecx,dword ptr [esi+0x1BC]
	lea eax,[esi+0x1B4]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	mov ebx,eax
	add esp,8
	test ebx,ebx
	je Block19

 Block9:
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
	jge Block14

 Block10:
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
	jne Block14

 Block11:
	cmp dword ptr [ebx+8],0
	je Block13

 Block12:
	add ecx,0xFFFFFFFB
	mov dword ptr [esp+0x10],ecx
	fild dword ptr [esp+0x10]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	fstp st(0)
	jmp Block17

 Block13:
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

 Block14:
	mov edx,dword ptr [esi+0x1FC]
	push edx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block18

 Block15:
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
	jp Block18

 Block16:
	inc ebx
	mov dword ptr [esp+0x10],ebx
	fild dword ptr [esp+0x10]
	sub esp,8
	lea ecx,[edi+0x18]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [edi+0x28],eax

 Block17:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0
	push 0
	mov ecx,esi
	call eax

 Block18:
	pop edi
	pop ebp

 Block19:
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
// CVecCtrlUser::MakeContinuousMovePath
__SUB_CLASS_THIS(005A08A0, __thiscall, 42276,  CVecCtrlUser, void, long) {
__asm {

 Block0:
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x14]
	xor ebp,ebp
	cmp eax,ebp
	je Block2

 Block1:
	lea esi,[eax-4]
	jmp Block3

 Block2:
	xor esi,esi

 Block3:
	mov eax,dword ptr [esi+0x640]
	and eax,0xFFFFFFFE
	cmp eax,0x12
	jne Block5

 Block4:
	mov dword ptr [esp+0x10],ebp
	jmp Block6

 Block5:
	mov ecx,dword ptr [edi+0x1BC]
	push ecx
	lea edx,[edi+0x1B4]
	push edx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	mov dword ptr [esp+0x10],eax

 Block6:
	mov eax,dword ptr [esi+0x640]
	and eax,0xFFFFFFFE
	cmp eax,0x12
	je Block8

 Block7:
	mov ebp,dword ptr [edi+0x1A0]

 Block8:
	mov ecx,dword ptr [edi+0x108]
	lea esi,[edi+0xE0]
	push ecx
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x1C]
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x2C]
	mov ecx,dword ptr [edi+0x78]
	mov ebx,dword ptr [edi+0x1D8]
	lea esi,[edi+0x20]
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
	fstp qword ptr [esp+0x5C]
	mov ecx,dword ptr [esi+0x10]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	xor esi,esi
	add esp,0x30
	cmp dword ptr [edi+0x214],esi
	je Block10

 Block9:
	mov esi,0xE
	jmp Block12

 Block10:
	cmp dword ptr [edi+0x1A8],esi
	je Block12

 Block11:
	mov esi,0xC

 Block12:
	fld qword ptr [esp+0x14]
	call __ftol2_sse
	fld qword ptr [esp+0x1C]
	push eax
	call __ftol2_sse
	fld qword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x44]
	push eax
	push edx
	push ebx
	call __ftol2_sse
	fld qword ptr [esp+0x3C]
	push eax
	call __ftol2_sse
	fld qword ptr [esp+0x48]
	push eax
	call __ftol2_sse
	push eax
	call __ftol2_sse
	mov ecx,dword ptr [edi+0x1A8]
	push eax
	mov eax,dword ptr [esp+0x30]
	push eax
	push ecx
	push ebp
	push esi
	lea ecx,[edi+0x244]
	call CMovePath::MakeMovePath
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CVecCtrlUser::IsFlyingSkillState
__SUB_CLASS_THIS0(005A0CB0, __thiscall, 42272,  CVecCtrlUser, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x238]
	test eax,eax
	je Block7

 Block1:
	lea ecx,[eax+0x30]
	call TSecType<long>::GetData
	cmp eax,2
	jne Block7

 Block2:
	mov eax,dword ptr [esi+0x238]
	cmp dword ptr [eax+0x3C],0
	je Block7

 Block3:
	test eax,eax
	je Block6

 Block4:
	lea ecx,[eax+0x30]
	call TSecType<long>::GetData
	cmp eax,2
	jne Block6

 Block5:
	cmp dword ptr [esi+0x2F8],0
	jne Block9

 Block6:
	xor eax,eax
	pop esi
	ret

 Block7:
	mov esi,dword ptr [esi+0x238]
	test esi,esi
	je Block6

 Block8:
	lea ecx,[esi+0x30]
	call TSecType<long>::GetData
	cmp eax,2
	jne Block6

 Block9:
	mov eax,1
	pop esi
	ret
}
}
// CVecCtrlUser::BeginUpdateActive
__SUB_CLASS_THIS0(005A0B40, __thiscall, 42273,  CVecCtrlUser, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	call CVecCtrl::BeginUpdateActive
	mov edi,eax
	mov eax,dword ptr [esi+0xD8]
	push eax
	lea ecx,[esi+0xC8]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov eax,dword ptr [edx+8]
	fcomp qword ptr [eax+0x68]
	add esp,8
	fnstsw ax
	test ah,1
	mov eax,edi
	jne Block2

 Block1:
	inc dword ptr [esi+0x2FC]
	pop edi
	pop esi
	ret

 Block2:
	pop edi
	mov dword ptr [esi+0x2FC],0
	pop esi
	ret
}
}
// CVecCtrlUser::OnAttachedObjectChanged
__SUB_CLASS_THIS(005A0FF0, __thiscall, 42275,  CVecCtrlUser, void, CStaticFoothold*, CLadderOrRope*, long) {
__asm {

 Block0:
	test byte ptr [_D__S3],1
	push edi
	mov edi,ecx
	jne Block2

 Block1:
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	fld qword ptr [__real_41224f8000000000]
	mov ecx,dword ptr [eax+8]
	fdiv qword ptr [ecx+0x68]
	or dword ptr [_D__S3],1
	fdiv qword ptr [__real_403e000000000000]
	call __ftol2_sse
	mov dword ptr [_D_S_NFREEFALLTICK],eax

 Block2:
	cmp dword ptr [esp+8],0
	je Block24

 Block3:
	cmp dword ptr [edi+0x1A0],0
	jne Block24

 Block4:
	mov ecx,edi
	call CVecCtrl::IsSwimming
	test eax,eax
	jne Block24

 Block5:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	mov ecx,edi
	call eax
	test eax,eax
	jne Block24

 Block6:
	mov eax,dword ptr [edi+0x240]
	lea ecx,[eax+0x78]
	call TSecType<double>::GetData
	fcomp qword ptr [__real_0000000000000000]
	fnstsw ax
	test ah,0x41
	jp Block24

 Block7:
	mov ecx,dword ptr [edi+0x2FC]
	cmp ecx,dword ptr [_D_S_NFREEFALLTICK]
	jle Block24

 Block8:
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block12

 Block9:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block12

 Block10:
	test dword ptr [esi+0x178],0x100000
	je Block12

 Block11:
	mov ebp,1
	jmp Block13

 Block12:
	xor ebp,ebp

 Block13:
	mov ecx,dword ptr [edi+0x2FC]
	sub ecx,0x12
	mov eax,0x150
	cdq
	idiv ecx
	mov ecx,0x24
	sub ecx,eax
	cmp ecx,1
	mov ebx,ecx
	jg Block15

 Block14:
	mov ebx,1

 Block15:
	mov eax,dword ptr [edi+0x238]
	test eax,eax
	je Block18

 Block16:
	lea ecx,[eax+0x30]
	call TSecType<long>::GetData
	cmp eax,2
	jne Block18

 Block17:
	imul ebx,0x64

 Block18:
	mov eax,dword ptr [edi+0x14]
	test eax,eax
	je Block23

 Block19:
	lea esi,[eax-4]
	test esi,esi
	je Block23

 Block20:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x20]
	lea ecx,[esi+4]
	push offset CUserLocal::ms_RTTI_CUserLocal
	call eax
	test eax,eax
	je Block23

 Block21:
	test ebp,ebp
	jne Block23

 Block22:
	mov eax,dword ptr [esi+0x640]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x48]
	push 1
	push 1
	push ebp
	push ebp
	and al,1
	push ebp
	movsx ecx,al
	neg ecx
	push ebp
	sbb ecx,ecx
	push ebp
	and ecx,0xFFFFFDE4
	push 0xFFFFFEF2
	add ecx,0x10E
	push ecx
	push ebx
	mov ecx,esi
	call edx

 Block23:
	pop esi
	pop ebp
	pop ebx

 Block24:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+8]
	push eax
	push ecx
	push edx
	mov ecx,edi
	call CVecCtrl::OnAttachedObjectChanged
	pop edi
	ret 0xC
}
}
// CVecCtrlUser::DoCombatStep
__SUB_CLASS_THIS(0053A7D0, __thiscall, 42269,  CVecCtrlUser, void, double, double) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x220],0
	jne Block2

 Block1:
	push 0x1A
	call CVecCtrl::SetMovePathAttribute
	fld qword ptr [esp+0x10]
	sub esp,0x10
	fstp qword ptr [esp+8]
	mov ecx,esi
	fld qword ptr [esp+0x18]
	fstp qword ptr [esp]
	call CVecCtrl::SetImpactNext_0

 Block2:
	pop esi
	ret 0x10
}
}
// CVecCtrlUser::CVecCtrlUser
_SUB_EXCEPTION_HANDLER(5A07D0)
__SUB_CLASS_THIS0(005A07D0, __thiscall, 42260,  CVecCtrlUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A07D0
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
	call CVecCtrl::_ctor_default
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	int 3// TODO: 	mov dword ptr [esi],offset CVecCtrlUser::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CVecCtrlUser::`vftable'{for `IWzVector2D'}
	mov dword ptr [esi+0x2F8],eax
	mov dword ptr [esi+0x2FC],eax
	mov dword ptr [esi+0x300],eax
	call get_update_time
	mov dword ptr [esi+0x304],eax
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CVecCtrlUser::OnSit
__SUB_CLASS_THIS(005A0860, __thiscall, 42266,  CVecCtrlUser, void, long, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [ecx+0xC]
	mov eax,dword ptr [eax+0x40]
	push esi
	lea esi,[ecx+0xC]
	mov ecx,dword ptr [esp+0xC]
	push ecx
	push edx
	push esi
	call eax
	test eax,eax
	jge Block2

 Block1:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block2:
	pop esi
	ret 8
}
}
// CVecCtrlUser::EndUpdateActive
_SUB_EXCEPTION_HANDLER(5A0D20)
__SUB_CLASS_THIS0(005A0D20, __thiscall, 42262,  CVecCtrlUser, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A0D20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x58],ecx
	call get_field
	mov dword ptr [ebp-0x5C],eax
	mov eax,dword ptr [ebp-0x5C]
	mov edx,dword ptr [eax]
	mov ecx,dword ptr [ebp-0x5C]
	mov eax,dword ptr [edx+0x1C]
	call eax
	xor ecx,ecx
	cmp eax,0x1D
	sete cl
	push ecx
	push 0
	mov ecx,dword ptr [ebp-0x58]
	add ecx,0x244
	call CMovePath::IsTimeForFlush
	test eax,eax
	je Block10

 Block1:
	mov dword ptr [ebp-0x30],0x19DEA1BD
	mov dword ptr [ebp-0x10],0xBE02FF0A
	push 0
	lea edx,[ebp-0x10]
	push edx
	lea eax,[ebp-0x40]
	push eax
	call DR_check
	add esp,0xC
	mov dword ptr [ebp-0x28],eax
	jmp Block3

 Block3:
	mov ecx,dword ptr [ebp-0x58]
	add ecx,0x244
	call CMovePath::GetLastElement
	mov dword ptr [ebp-0x2C],eax
	mov ecx,dword ptr [ebp-0x58]
	add ecx,0x20
	call AbsPos::_ZtlSecureGet_x
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add esp,8
	mov dword ptr [ebp-0x60],eax
	fild dword ptr [ebp-0x60]
	sub esp,8
	fstp qword ptr [esp]
	mov ecx,dword ptr [ebp-0x58]
	add ecx,0x20
	call AbsPos::_ZtlSecurePut_x
	call __ftol2_sse
	mov ecx,dword ptr [ebp-0x2C]
	mov word ptr [ecx+2],ax
	mov ecx,dword ptr [ebp-0x58]
	add ecx,0x20
	call AbsPos::_ZtlSecureGet_y
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add esp,8
	mov dword ptr [ebp-0x64],eax
	fild dword ptr [ebp-0x64]
	sub esp,8
	fstp qword ptr [esp]
	mov ecx,dword ptr [ebp-0x58]
	add ecx,0x20
	call AbsPos::_ZtlSecurePut_y
	call __ftol2_sse
	mov edx,dword ptr [ebp-0x2C]
	mov word ptr [edx+4],ax
	mov ecx,dword ptr [ebp-0x58]
	add ecx,0x20
	call AbsPos::_ZtlSecureGet_vx
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add esp,8
	mov dword ptr [ebp-0x68],eax
	fild dword ptr [ebp-0x68]
	sub esp,8
	fstp qword ptr [esp]
	mov ecx,dword ptr [ebp-0x58]
	add ecx,0x20
	call AbsPos::_ZtlSecurePut_vx
	call __ftol2_sse
	mov ecx,dword ptr [ebp-0x2C]
	mov word ptr [ecx+6],ax
	mov ecx,dword ptr [ebp-0x58]
	add ecx,0x20
	call AbsPos::_ZtlSecureGet_vy
	sub esp,8
	fstp qword ptr [esp]
	call tolong
	add esp,8
	mov dword ptr [ebp-0x6C],eax
	fild dword ptr [ebp-0x6C]
	sub esp,8
	fstp qword ptr [esp]
	mov ecx,dword ptr [ebp-0x58]
	add ecx,0x20
	call AbsPos::_ZtlSecurePut_vy
	call __ftol2_sse
	mov edx,dword ptr [ebp-0x2C]
	mov word ptr [edx+8],ax
	mov ecx,dword ptr [ebp-0x58]
	call CVecCtrl::GetFoothold
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [ebp-0x58]
	call CVecCtrl::GetFoothold
	push eax
	mov eax,dword ptr [ebp-0x58]
	add eax,0x20
	push eax
	mov ecx,dword ptr [ebp-0x58]
	add ecx,0x140
	call RelPos::SetFromAbsPos

 Block5:
	push 0x2C
	lea ecx,[ebp-0x20]
	call COutPacket::_ctor_1
	mov dword ptr [ebp-4],0
	mov ecx,dword ptr [ebp-0x40]
	not ecx
	push ecx
	lea ecx,[ebp-0x20]
	call COutPacket::Encode4
	mov edx,dword ptr [ebp-0x3C]
	not edx
	push edx
	lea ecx,[ebp-0x20]
	call COutPacket::Encode4
	call get_field
	mov ecx,eax
	call CField::GetFieldKey
	movzx eax,al
	push eax
	lea ecx,[ebp-0x20]
	call COutPacket::Encode1
	mov ecx,dword ptr [ebp-0x38]
	not ecx
	push ecx
	lea ecx,[ebp-0x20]
	call COutPacket::Encode4
	mov edx,dword ptr [ebp-0x34]
	not edx
	push edx
	lea ecx,[ebp-0x20]
	call COutPacket::Encode4
	call get_field
	mov ecx,eax
	call CField::GetCrc
	push eax
	lea ecx,[ebp-0x20]
	call COutPacket::Encode4
	push 0
	mov eax,dword ptr [ebp-0x40]
	push eax
	call get_rand_0
	add esp,8
	mov dword ptr [ebp-0x24],eax
	mov ecx,dword ptr [ebp-0x24]
	push ecx
	lea ecx,[ebp-0x20]
	call COutPacket::Encode4
	push 0
	push 0
	push 0
	mov edx,dword ptr [ebp-0x24]
	push edx
	push 4
	lea eax,[ebp-0x28]
	push eax
	call CCrc32::GetCrc32
	add esp,0x18
	push eax
	lea ecx,[ebp-0x20]
	call COutPacket::Encode4
	push 0
	push 0
	lea ecx,[ebp-0x20]
	push ecx
	mov ecx,dword ptr [ebp-0x58]
	add ecx,0x244
	call CMovePath::Flush
	test eax,eax
	jne Block7

 Block6:
	lea edx,[ebp-0x20]
	push edx
	call SendPacket
	add esp,4

 Block7:
	jmp Block9

 Block9:
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x20]
	call COutPacket::~COutPacket

 Block10:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov esp,ebp
	pop ebp
	ret
}
}
// CVecCtrlUser::CollisionDetectFloat
_SUB_EXCEPTION_HANDLER(5A1BA0)
__SUB_CLASS_THIS(005A1BA0, __thiscall, 42270,  CVecCtrlUser, int32_t, const AbsPos&, long&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A1BA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [edi]
	mov esi,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov edx,dword ptr [eax+8]
	mov dword ptr [esp+0x24],esi
	call edx
	test eax,eax
	je Block47

 Block1:
	mov eax,dword ptr [edi+0x238]
	test eax,eax
	je Block47

 Block2:
	lea ecx,[eax+0x30]
	call TSecType<long>::GetData
	cmp eax,2
	jne Block47

 Block3:
	cmp dword ptr [edi+0x2F8],0
	je Block47

 Block4:
	mov eax,dword ptr [edi+0x30]
	lea ebx,[esi+0x24]
	lea esi,[edi+0x20]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebx]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block6

 Block5:
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
	mov dword ptr [esi+0x40],eax
	jmp Block9

 Block6:
	mov ecx,dword ptr [esi+0x10]
	fstp st(0)
	push ecx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	mov edx,dword ptr [ebx+8]
	dec edx
	mov dword ptr [esp+0x74],edx
	fild dword ptr [esp+0x74]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block8

 Block7:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_x
	fstp st(0)
	fldz
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vx

 Block8:
	fstp st(0)

 Block9:
	mov eax,dword ptr [esi+0x28]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fild dword ptr [ebx+4]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,0x41
	jne Block11

 Block10:
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
	mov dword ptr [esi+0x58],eax
	jmp Block14

 Block11:
	mov edx,dword ptr [esi+0x28]
	fstp st(0)
	push edx
	lea eax,[esi+0x18]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	mov ecx,dword ptr [ebx+0xC]
	dec ecx
	mov dword ptr [esp+0x74],ecx
	fild dword ptr [esp+0x74]
	add esp,8
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block13

 Block12:
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_y
	fstp st(0)
	fldz
	sub esp,8
	mov ecx,esi
	fstp qword ptr [esp]
	call AbsPos::_ZtlSecurePut_vy

 Block13:
	fstp st(0)

 Block14:
	mov edx,dword ptr [esp+0x68]
	mov eax,dword ptr [edx]
	mov ebx,dword ptr [esp+0x64]
	push eax
	push ebx
	mov ecx,edi
	call CVecCtrl::BoundPosMapRange_0
	mov ecx,dword ptr [ebx+0x10]
	push ecx
	push ebx
	mov dword ptr [esp+0x30],eax
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcomp
	add esp,8
	fnstsw ax
	test ah,0x41
	jp Block16

 Block15:
	fadd qword ptr [__real_3fe0000000000000]
	call __ftol2_sse
	mov ebp,eax
	mov dword ptr [esp+0x6C],ebp
	jmp Block17

 Block16:
	fsub qword ptr [__real_3fdffffffeed1f41]
	call __ftol2_sse
	mov ebp,eax
	mov dword ptr [esp+0x6C],eax

 Block17:
	mov edx,dword ptr [ebx+0x28]
	push edx
	add ebx,0x18
	push ebx
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcomp
	add esp,8
	fnstsw ax
	test ah,0x41
	jp Block19

 Block18:
	fadd qword ptr [__real_3fe0000000000000]
	call __ftol2_sse
	mov ebx,eax
	mov dword ptr [esp+0x64],ebx
	jmp Block20

 Block19:
	fsub qword ptr [__real_3fdffffffeed1f41]
	call __ftol2_sse
	mov ebx,eax
	mov dword ptr [esp+0x64],eax

 Block20:
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fldz
	fcomp
	add esp,8
	fnstsw ax
	test ah,0x41
	jp Block22

 Block21:
	fadd qword ptr [__real_3fe0000000000000]
	call __ftol2_sse
	mov edi,eax
	mov dword ptr [esp+0x18],edi
	jmp Block23

 Block22:
	fsub qword ptr [__real_3fdffffffeed1f41]
	call __ftol2_sse
	mov edi,eax
	mov dword ptr [esp+0x18],eax

 Block23:
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
	jp Block25

 Block24:
	fadd qword ptr [__real_3fe0000000000000]
	jmp Block26

 Block25:
	fsub qword ptr [__real_3fdffffffeed1f41]

 Block26:
	call __ftol2_sse
	mov ecx,edi
	sub ecx,ebp
	mov edx,eax
	sub edx,ebx
	xor esi,esi
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x38],ecx
	mov dword ptr [esp+0x34],edx
	cmp ecx,esi
	jne Block29

 Block27:
	cmp edx,esi
	jne Block29

 Block28:
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [esp+0x68]
	sub dword ptr [eax],edx
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x18]
	call edx
	xor eax,eax
	jmp Block48

 Block29:
	int 3// TODO: 	mov dword ptr [esp+0x40],offset ZList<ZRef<CStaticFoothold>>::`vftable'
	mov dword ptr [esp+0x48],esi
	mov dword ptr [esp+0x4C],esi
	mov dword ptr [esp+0x50],esi
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	push eax
	push edi
	push ebx
	push ebp
	mov dword ptr [esp+0x70],esi
	call CWvsPhysicalSpace2D::GetCrossCandidate
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x24],eax
	cmp eax,esi
	je Block46

 Block30:
	jmp Block32

 Block32:
	lea edx,[esp+0x24]
	push edx
	call ZList<ZRef<CStaticFoothold>>::GetNext
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esi+0x38]
	add esp,4
	lea ecx,[eax+0x3C]
	call TSecType<int>::GetData
	test eax,eax
	je Block45

 Block33:
	mov ecx,dword ptr [esi+0xC]
	mov eax,dword ptr [esi+0x10]
	mov ebx,dword ptr [esi+0x14]
	mov esi,dword ptr [esi+0x18]
	mov edx,esi
	sub edx,eax
	mov dword ptr [esp+0x1C],edx
	mov edx,ecx
	neg edx
	add ebp,edx
	imul ebp,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x2C],edx
	mov edx,dword ptr [esp+0x64]
	mov dword ptr [esp+0x3C],ebx
	sub ebx,ecx
	mov edi,eax
	neg edi
	add edx,edi
	imul edx,ebx
	mov dword ptr [esp+0x30],ebx
	mov ebx,dword ptr [esp+0x2C]
	sub edx,ebp
	mov ebp,dword ptr [esp+0x18]
	add ebx,ebp
	mov ebp,dword ptr [esp+0x20]
	imul ebx,dword ptr [esp+0x1C]
	add edi,ebp
	imul edi,dword ptr [esp+0x30]
	sub edi,ebx
	test edx,edx
	jg Block44

 Block34:
	test edi,edi
	jl Block44

 Block35:
	test edx,edx
	jne Block37

 Block36:
	test edi,edi
	je Block44

 Block37:
	mov ebp,dword ptr [esp+0x6C]
	mov ebx,dword ptr [esp+0x64]
	mov edi,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x38]
	sub ecx,ebp
	imul ecx,edi
	sub eax,ebx
	imul eax,edx
	sub eax,ecx
	mov ecx,dword ptr [esp+0x3C]
	sub esi,ebx
	sub ecx,ebp
	imul esi,edx
	imul ecx,edi
	sub esi,ecx
	test eax,eax
	jge Block40

 Block38:
	test esi,esi
	jl Block45

 Block39:
	test eax,eax

 Block40:
	jle Block42

 Block41:
	test esi,esi
	jg Block45

 Block42:
	mov ebp,dword ptr [esp+0x14]
	fldz
	lea ebx,[ebp+0x20]
	lea esi,[ebp+0x80]
	mov ecx,0x18
	mov edi,ebx
	rep movsd
	sub esp,8
	lea ecx,[ebx+0x30]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	fldz
	sub esp,8
	lea ecx,[ebx+0x48]
	fstp qword ptr [esp]
	mov dword ptr [ebx+0x40],eax
	call _ZtlSecureTearHelper<double>::call
	push 0x11
	mov ecx,ebp
	mov dword ptr [ebx+0x58],eax
	call CVecCtrl::SetMovePathAttribute

 Block43:
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x40],offset ZList<ZRef<CStaticFoothold>>::`vftable'
	call ZList<ZRef<CStaticFoothold>>::RemoveAll
	xor eax,eax
	jmp Block48

 Block44:
	mov ebp,dword ptr [esp+0x6C]

 Block45:
	cmp dword ptr [esp+0x24],0
	jne Block32

 Block46:
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [esp+0x68]
	sub dword ptr [eax],edx
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x18]
	call edx
	jmp Block43

 Block47:
	mov eax,dword ptr [esp+0x6C]
	mov ecx,dword ptr [esp+0x68]
	mov edx,dword ptr [esp+0x64]
	push eax
	push ecx
	push edx
	mov ecx,edi
	call CVecCtrl::CollisionDetectFloat

 Block48:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 0xC
}
}
// CVecCtrlUser::CreateInstance
_SUB_EXCEPTION_HANDLER(5A0BB0)
__SUB0(005A0BB0, __cdecl, 42265,  CVecCtrlUser*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A0BB0
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
	call CVecCtrlUser::_ctor_default
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
// CVecCtrlUser::MakeNewMovePathElem
__SUB_CLASS_THIS0(005A09F0, __thiscall, 42262,  CVecCtrlUser, void) {
__asm {

 Block0:
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x14]
	xor ebp,ebp
	cmp eax,ebp
	je Block2

 Block1:
	lea esi,[eax-4]
	jmp Block3

 Block2:
	xor esi,esi

 Block3:
	mov eax,dword ptr [esi+0x640]
	and eax,0xFFFFFFFE
	cmp eax,0x12
	jne Block5

 Block4:
	mov dword ptr [esp+0x10],ebp
	jmp Block6

 Block5:
	mov ecx,dword ptr [edi+0x1BC]
	push ecx
	lea edx,[edi+0x1B4]
	push edx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	mov dword ptr [esp+0x10],eax

 Block6:
	mov eax,dword ptr [esi+0x640]
	and eax,0xFFFFFFFE
	cmp eax,0x12
	je Block8

 Block7:
	mov ebp,dword ptr [edi+0x1A0]

 Block8:
	mov ecx,dword ptr [edi+0x108]
	lea esi,[edi+0xE0]
	push ecx
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x1C]
	mov eax,dword ptr [esi+0x10]
	push eax
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [esp+0x2C]
	mov ecx,dword ptr [edi+0x78]
	mov ebx,dword ptr [edi+0x1D8]
	lea esi,[edi+0x20]
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
	fstp qword ptr [esp+0x5C]
	mov ecx,dword ptr [esi+0x10]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<double>::call
	xor esi,esi
	add esp,0x30
	cmp dword ptr [edi+0x214],esi
	je Block10

 Block9:
	mov esi,0xE
	jmp Block12

 Block10:
	cmp dword ptr [edi+0x1A8],esi
	je Block12

 Block11:
	mov esi,0xC

 Block12:
	fld qword ptr [esp+0x14]
	call __ftol2_sse
	fld qword ptr [esp+0x1C]
	push eax
	call __ftol2_sse
	fld qword ptr [esp+0x28]
	push eax
	push ebx
	call __ftol2_sse
	fld qword ptr [esp+0x38]
	push eax
	call __ftol2_sse
	fld qword ptr [esp+0x44]
	push eax
	call __ftol2_sse
	push eax
	call __ftol2_sse
	mov edx,dword ptr [esp+0x28]
	push eax
	mov eax,dword ptr [edi+0x1A8]
	push edx
	push eax
	push ebp
	push esi
	lea ecx,[edi+0x244]
	call CMovePath::AddNewElem
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret
}
}
