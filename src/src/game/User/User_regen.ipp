#include "regen.hpp"
// User.ipp
#include "User.hpp"

// CUser::SetAttackAction
_SUB_EXCEPTION_HANDLER(4E70B0)
__SUB_CLASS_THIS(004E70B0, __thiscall, 16596,  CUser, int32_t, long, long, const SKILLENTRY*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E70B0
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebx,dword ptr [esp+0x24]
	cmp ebx,0xFFFFFFFF
	je Block16

 Block1:
	lea ecx,[esi+0x88]
	mov dword ptr [esi+0x63C],0x1388
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jg Block16

 Block2:
	mov eax,dword ptr [esi+0x58C]
	push eax
	call get_weapon_type
	mov ecx,dword ptr [esp+0x34]
	mov edi,dword ptr [esp+0x30]
	mov edx,dword ptr [esi+0x5A0]
	push ecx
	push edi
	mov ebp,eax
	push ebx
	push ebp
	push edx
	call is_correct_normal_attack
	add esp,0x18
	test eax,eax
	jne Block17

 Block3:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi+0x5A0]
	push eax
	push edi
	push ebx
	push ebp
	push ecx
	call is_correct_magic_attack
	add esp,0x14
	test eax,eax
	jne Block17

 Block4:
	test edi,edi
	je Block6

 Block5:
	mov eax,dword ptr [edi]

 Block6:
	push eax
	push ebx
	call is_correct_siege_attack
	add esp,8
	test eax,eax
	jne Block17

 Block7:
	test edi,edi
	jne Block11

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x40]
	mov ecx,esi
	call eax
	push eax
	call is_aran_job
	add esp,4
	test eax,eax
	je Block11

 Block9:
	cmp ebx,0x91
	jl Block11

 Block10:
	cmp ebx,0x93
	jle Block17

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x40]
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x30]
	push eax
	push ecx
	push edi
	call is_not_depend_on_weapon_skill
	add esp,0xC
	test eax,eax
	jne Block17

 Block12:
	test edi,edi
	je Block16

 Block13:
	push 0xFFFFFFFF
	push ebp
	mov ecx,edi
	call SKILLENTRY::IsCorrectWeaponType
	test eax,eax
	jne Block16

 Block14:
	lea edx,[esp+0x30]
	push 0x1127
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x24],0
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x38]
	add esp,8
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	xor eax,eax
	jmp Block23

 Block17:
	mov eax,dword ptr [esi+0x88]
	mov ebp,dword ptr [esp+0x28]
	mov edx,dword ptr [eax+0x14]
	push 0
	push 0x64
	push ebp
	lea ecx,[esi+0x88]
	mov dword ptr [esi+0x644],ebx
	call edx
	cmp dword ptr [esi+0x2EAC],0
	je Block22

 Block18:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push ebx
	push eax
	call get_action_name_from_code
	add esp,8
	call get_dragon_action_code_from_name
	mov edi,eax
	add esp,4
	test edi,edi
	jl Block20

 Block19:
	cmp edi,0x1D
	jl Block21

 Block20:
	xor edi,edi

 Block21:
	mov eax,dword ptr [esi+0x2EAC]
	mov ecx,dword ptr [eax+0x94]
	mov ebx,dword ptr [esi+0x640]
	push ecx
	add eax,0x8C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x2EAC]
	mov edx,eax
	xor edx,ebx
	add esp,8
	and edx,1
	push 0
	xor edx,eax
	push edx
	call CDragon::SetMoveAction
	mov ecx,dword ptr [esi+0x2EAC]
	push ebp
	push edi
	call CDragon::SetAttackAction

 Block22:
	mov eax,1

 Block23:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 0x10
}
}
// CUser::GetAfterimageUOL
_SUB_EXCEPTION_HANDLER(4ED0C0)
__SUB(004ED0C0, __cdecl, 16726,  Ztl_bstr_t, const SKILLENTRY*, long, NakedParam<Ztl_bstr_t>, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4ED0C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor edi,edi
	mov dword ptr [ebp-0x18],edi
	mov eax,1
	mov dword ptr [ebp-4],edi
	test byte ptr [_D__S6__1],al
	jne Block2

 Block1:
	or dword ptr [_D__S6__1],eax
	push 0x9A7
	push offset _D_SHEAD
	mov byte ptr [ebp-4],al
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push 0xB12F60
	call _atexit
	add esp,4

 Block2:
	mov eax,2
	test byte ptr [_D__S6__1],al
	jne Block4

 Block3:
	or dword ptr [_D__S6__1],eax
	push offset _S___9
	mov ecx,offset _D_SSLASH
	mov byte ptr [ebp-4],al
	call _xbstr_t::_ctor_1
	push 0xB12F40
	call _atexit
	add esp,4

 Block4:
	mov dword ptr [ebp-0x14],edi
	mov ecx,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],3
	cmp ecx,edi
	je Block8

 Block5:
	cmp dword ptr [ecx],edi
	je Block8

 Block6:
	mov eax,dword ptr [ecx]
	cmp eax,edi
	je Block8

 Block7:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,edi
	jne Block9

 Block8:
	mov esi,dword ptr [ebp+8]
	mov dword ptr [esi],edi
	jmp Block38

 Block9:
	mov ecx,dword ptr [ebp+0xC]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	cmp ecx,edi
	je Block27

 Block10:
	mov eax,dword ptr [ebp+0x1C]
	push eax
	lea edx,[ebp-0x18]
	push edx
	call SKILLENTRY::GetAfterimageUOL
	mov esi,eax
	lea eax,[ebp-0x14]
	cmp eax,esi
	je Block15

 Block11:
	mov ecx,dword ptr [ebp-0x14]
	cmp ecx,edi
	je Block13

 Block12:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x14],edi

 Block13:
	mov eax,dword ptr [esi]
	mov dword ptr [ebp-0x14],eax
	cmp eax,edi
	je Block16

 Block14:
	add eax,8
	push eax
	call ebx

 Block15:
	mov eax,dword ptr [ebp-0x14]

 Block16:
	mov ecx,dword ptr [ebp-0x18]
	cmp ecx,edi
	je Block18

 Block17:
	call _xbstr_t::Data_t::Release
	mov eax,dword ptr [ebp-0x14]

 Block18:
	cmp eax,edi
	je Block27

 Block19:
	cmp dword ptr [eax],edi
	je Block23

 Block20:
	mov ecx,dword ptr [eax]
	cmp ecx,edi
	je Block23

 Block21:
	mov ecx,dword ptr [ecx-4]
	shr ecx,1
	cmp ecx,edi
	je Block23

 Block22:
	lea ecx,[ebp+0x14]
	push ecx
	push offset _D_SSLASH
	lea ecx,[ebp-0x14]
	call _xbstr_t::operator+=
	mov ecx,eax
	call _xbstr_t::operator+=
	mov eax,dword ptr [ebp-0x14]

 Block23:
	cmp eax,edi
	je Block27

 Block24:
	cmp dword ptr [eax],edi
	je Block27

 Block25:
	mov ecx,dword ptr [eax]
	cmp ecx,edi
	je Block27

 Block26:
	mov ecx,dword ptr [ecx-4]
	shr ecx,1
	cmp ecx,edi
	jne Block34

 Block27:
	mov eax,0x20
	call __chkstk
	mov eax,dword ptr [ebp+0x18]
	add eax,0xFFFFFFF6
	xor edx,edx
	cmp eax,edi
	setle dl
	mov ecx,esp
	push 0xA
	push ecx
	dec edx
	and edx,eax
	mov eax,0x66666667
	imul edx
	sar edx,1
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push eax
	call __itow
	add esp,0xC
	push eax
	lea ecx,[ebp-0x18]
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],4
	cmp ecx,edi
	je Block29

 Block28:
	call _xbstr_t::Data_t::Release

 Block29:
	mov eax,dword ptr [_D_SHEAD]
	mov dword ptr [ebp-0x14],eax
	cmp eax,edi
	je Block31

 Block30:
	add eax,8
	push eax
	call ebx

 Block31:
	lea ecx,[ebp+0x14]
	push ecx
	lea ecx,[ebp-0x14]
	call _xbstr_t::operator+=
	lea edx,[ebp-0x18]
	push edx
	push offset _D_SSLASH
	mov ecx,eax
	call _xbstr_t::operator+=
	mov ecx,eax
	call _xbstr_t::operator+=
	mov ecx,dword ptr [ebp-0x18]
	cmp ecx,edi
	je Block33

 Block32:
	call _xbstr_t::Data_t::Release

 Block33:
	mov eax,dword ptr [ebp-0x14]

 Block34:
	mov esi,dword ptr [ebp+8]
	mov dword ptr [esi],eax
	cmp eax,edi
	je Block37

 Block35:
	add eax,8
	push eax
	call ebx
	mov ecx,dword ptr [ebp-0x14]
	cmp ecx,edi
	je Block37

 Block36:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x14],edi

 Block37:
	mov ecx,dword ptr [ebp+0x14]

 Block38:
	cmp ecx,edi
	je Block40

 Block39:
	call _xbstr_t::Data_t::Release

 Block40:
	mov eax,esi
	lea esp,[ebp-0x28]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// CUser::UpdateMoreWildEffect
__SUB_CLASS_THIS(004FB4C0, __thiscall, 16618,  CUser, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x3A74]
	xor ebp,ebp
	push edi
	cmp eax,ebp
	je Block3

 Block1:
	mov ecx,dword ptr [esp+0x18]
	sub ecx,eax
	js Block3

 Block2:
	push ebp
	push ebp
	mov ecx,esi
	call CUser::LoadMoreWildEffect

 Block3:
	cmp dword ptr [esi+0x3A64],ebp
	je Block33

 Block4:
	mov eax,dword ptr [esi+0x19E4]
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov edx,dword ptr [eax+0x1BC]
	push edx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	cmp dword ptr [esi+0x3A78],eax
	je Block9

 Block8:
	push 1
	push ebp
	mov ecx,esi
	call CUser::LoadMoreWildEffect

 Block9:
	mov edi,dword ptr [esi+0x1960]
	cmp edi,ebp
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],ebp
	call edx
	cmp eax,ebp
	jge Block13

 Block12:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block13:
	mov edi,dword ptr [esi+0x3A64]
	mov ebx,dword ptr [esp+0x18]
	cmp edi,ebp
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x10]
	push ecx
	push edi
	mov dword ptr [esp+0x18],ebp
	call edx
	cmp eax,ebp
	jge Block17

 Block16:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block17:
	cmp ebx,dword ptr [esp+0x10]
	je Block33

 Block18:
	mov edi,dword ptr [esi+0x1960]
	cmp edi,ebp
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],ebp
	call edx
	cmp eax,ebp
	jge Block22

 Block21:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block22:
	mov edi,dword ptr [esi+0x3A64]
	cmp edi,ebp
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xD8]
	push ecx
	push edi
	call edx
	cmp eax,ebp
	jge Block26

 Block25:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block26:
	cmp dword ptr [esi+0x3A68],ebp
	je Block33

 Block27:
	mov ecx,dword ptr [esi+0x1960]
	cmp ecx,ebp
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov edi,dword ptr [esi+0x3A68]
	cmp edi,ebp
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	call IWzGr2DLayer::Getflip
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xD8]
	push eax
	push edi
	call edx
	cmp eax,ebp
	jge Block33

 Block32:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block33:
	cmp dword ptr [esi+0x3A6C],ebp
	je Block73

 Block34:
	mov eax,dword ptr [esi+0x19E4]
	cmp eax,ebp
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	jmp Block37

 Block36:
	xor eax,eax

 Block37:
	mov ecx,dword ptr [eax+0x1BC]
	push ecx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	cmp dword ptr [esi+0x3A78],eax
	je Block39

 Block38:
	mov ecx,esi
	call CUser::RemoveMoreWildFinishEffect

 Block39:
	cmp dword ptr [esi+0x3A6C],ebp
	je Block73

 Block40:
	mov edi,dword ptr [esi+0x1960]
	cmp edi,ebp
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xD4]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],ebp
	call ecx
	cmp eax,ebp
	jge Block44

 Block43:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block44:
	mov edi,dword ptr [esi+0x3A6C]
	mov ebx,dword ptr [esp+0x18]
	cmp edi,ebp
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xD4]
	lea eax,[esp+0x10]
	push eax
	push edi
	mov dword ptr [esp+0x18],ebp
	call ecx
	cmp eax,ebp
	jge Block48

 Block47:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block48:
	cmp ebx,dword ptr [esp+0x10]
	je Block64

 Block49:
	mov edi,dword ptr [esi+0x1960]
	cmp edi,ebp
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xD4]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],ebp
	call ecx
	cmp eax,ebp
	jge Block53

 Block52:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block53:
	mov edi,dword ptr [esi+0x3A6C]
	cmp edi,ebp
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xD8]
	push eax
	push edi
	call ecx
	cmp eax,ebp
	jge Block57

 Block56:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block57:
	cmp dword ptr [esi+0x3A70],ebp
	je Block64

 Block58:
	mov ecx,dword ptr [esi+0x1960]
	cmp ecx,ebp
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	mov edi,dword ptr [esi+0x3A70]
	cmp edi,ebp
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	call IWzGr2DLayer::Getflip
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0xD8]
	push edi
	call eax
	cmp eax,ebp
	jge Block64

 Block63:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block64:
	mov edi,dword ptr [esi+0x3A6C]
	cmp edi,ebp
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x114]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block68

 Block67:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block68:
	cmp dword ptr [esp+0x18],ebp
	jne Block73

 Block69:
	mov eax,dword ptr [esi+0x3A6C]
	cmp eax,ebp
	je Block71

 Block70:
	mov dword ptr [esi+0x3A6C],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	mov eax,dword ptr [esi+0x3A70]
	cmp eax,ebp
	je Block73

 Block72:
	pop edi
	mov dword ptr [esi+0x3A70],ebp
	mov ecx,dword ptr [eax]
	pop esi
	pop ebp
	pop ebx
	add esp,4
	mov dword ptr [esp+4],eax
	mov edx,dword ptr [ecx+8]
	jmp edx

 Block73:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4
}
}
// CUser::GetMirrorSrcLayer
__SUB_CLASS_THIS(004DF410, __thiscall, 16732,  CUser, _x_com_ptr<IWzGr2DLayer>*, _x_com_ptr<IWzGr2DLayer>*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	push esi
	mov dword ptr [esp+4],0
	cmp eax,4
	ja Block12

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block5
cmp EAX, 2
je Block9
cmp EAX, 3
je Block10
cmp EAX, 4
je Block11


 Block2:
	mov ecx,dword ptr [ecx+0x196C]
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],ecx
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx

 Block4:
	mov eax,esi
	pop esi
	pop ecx
	ret 8

 Block5:
	mov ecx,dword ptr [ecx+0x1968]

 Block6:
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],ecx
	test ecx,ecx
	je Block8

 Block7:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax

 Block8:
	mov eax,esi
	pop esi
	pop ecx
	ret 8

 Block9:
	mov ecx,dword ptr [ecx+0x1960]
	jmp Block6

 Block10:
	mov ecx,dword ptr [ecx+0x1958]
	jmp Block6

 Block11:
	mov ecx,dword ptr [ecx+0x195C]
	jmp Block6

 Block12:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],0
	pop esi
	pop ecx
	ret 8
}
}
// CGrenade::GetVecCtrl
__SUB_CLASS_THIS0(004DF4C0, __thiscall, 81208,  CGrenade, _x_com_ptr<IWzVector2D>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x14]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CUser::OnADBoard
_SUB_EXCEPTION_HANDLER(4ED310)
__SUB_CLASS_THIS(004ED310, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4ED310
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
	mov esi,ecx
	xor ebx,ebx
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebx
	cmp dword ptr [esi+0x638],ebp
	jne Block26

 Block1:
	mov edi,dword ptr [esp+0x34]
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,edi
	mov dword ptr [esp+0x14],eax
	call CInPacket::Decode1
	test al,al
	jne Block6

 Block2:
	mov eax,dword ptr [esi+0x1C]
	cmp eax,ebp
	je Block4

 Block3:
	mov dword ptr [esi+0x1C],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC]
	mov ecx,esi
	call edx
	test eax,eax
	je Block26

 Block5:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [eax+0x3868],ebp
	jmp Block26

 Block6:
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,edi
	call CInPacket::DecodeStr
	push ebp
	push ebp
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x34],ebp
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xC]
	mov ecx,esi
	call eax
	test eax,eax
	jne Block14

 Block7:
	push 1
	push ebp
	push 1
	push 0x400
	lea ecx,[esp+0x44]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x38]
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block10

 Block8:
	mov eax,dword ptr [eax-4]
	cmp eax,0x28
	jle Block10

 Block9:
	push 0x28
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x3C]
	call ZXString<char>::Left
	mov ebx,1
	mov byte ptr [esp+0x2C],1
	mov dword ptr [esp+0x18],ebx
	jmp Block11

 Block10:
	lea eax,[esp+0x34]

 Block11:
	push eax
	lea ecx,[esp+0x38]
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x2C],ebp
	test bl,1
	je Block14

 Block12:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov edx,dword ptr [esp+0x34]
	push edx
	lea ecx,[esp+0x1C]
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC]
	mov ecx,esi
	mov byte ptr [esp+0x2C],2
	call edx
	push eax
	mov eax,dword ptr [esi+0x1944]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	mov edi,dword ptr [esp+0x24]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [eax],edi
	cmp edi,ebp
	je Block20

 Block19:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block20:
	lea ecx,[esi+0x14]
	call CChatBalloon::MakeADBoardBalloon
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xC]
	mov ecx,esi
	call eax
	test eax,eax
	je Block22

 Block21:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x38]
	mov dword ptr [esp+0x24],esp
	push edx
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	mov esi,dword ptr [esp+0x18]
	mov ecx,esi
	call CWvsContext::SetADBoard
	mov dword ptr [esi+0x3868],1

 Block22:
	cmp edi,ebp
	je Block24

 Block23:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block24:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebp
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
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
// CUser::OnRevive
_SUB_EXCEPTION_HANDLER(4DFE40)
__SUB_CLASS_THIS0(004DFE40, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DFE40
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
	mov esi,ecx
	mov eax,dword ptr [esi+0x2F14]
	xor ebp,ebp
	cmp eax,ebp
	je Block2

 Block1:
	mov dword ptr [esi+0x2F14],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x19E4]
	mov dword ptr [esp+0x14],ebp
	cmp eax,ebp
	je Block4

 Block3:
	lea ecx,[eax-0xC]
	jmp Block5

 Block4:
	xor ecx,ecx

 Block5:
	mov eax,dword ptr [ecx+0x1C]
	mov dword ptr [esp+0x30],ebp
	cmp eax,ebp
	je Block7

 Block6:
	mov dword ptr [ecx+0x1C],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esi+0x19E4]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebp
	je Block9

 Block8:
	lea edi,[eax-0xC]
	jmp Block10

 Block9:
	xor edi,edi

 Block10:
	mov eax,dword ptr [esi+0x640]
	mov ecx,dword ptr [esi+0x2F1C]
	mov edx,dword ptr [esi]
	mov ebx,dword ptr [edi]
	push ebp
	push eax
	mov eax,dword ptr [esi+0x2F20]
	push ebp
	push ebp
	sub eax,5
	push eax
	mov eax,dword ptr [edx+0xC]
	push ecx
	mov ecx,esi
	call eax
	mov edx,dword ptr [ebx+4]
	push eax
	mov ecx,edi
	call edx
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esi+0x88]
	call CAvatar::GetBodyOrigin
	mov eax,dword ptr [eax]
	mov ebx,1
	mov ecx,0xD
	mov dword ptr [esp+0x30],ebx
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block12:
	mov esi,dword ptr [esi+0x1960]
	mov byte ptr [esp+0x30],2
	cmp esi,ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebp
	jge Block16

 Block15:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],bl
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebp
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret
}
}
// CUser::SetActiveEffectItem
_SUB_EXCEPTION_HANDLER(4F5500)
__SUB_CLASS_THIS(004F5500, __thiscall, 16618,  CUser, void, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F5500
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x20],edi
	xor ebx,ebx
	cmp dword ptr [edi+0x638],ebx
	je Block2

 Block1:
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [edi+0x39B4],eax
	jmp Block137

 Block2:
	push 3
	call CUser::GetAdditionalLayer
	mov dword ptr [ebp+0x28],eax
	mov eax,dword ptr [edi+0x5D0]
	xor ecx,ecx
	cmp eax,ebx
	je Block7

 Block3:
	push eax
	call CMorphTemplate::GetMorphTemplate
	add esp,4
	cmp eax,ebx
	je Block6

 Block4:
	cmp dword ptr [eax+0x30],ebx
	je Block6

 Block5:
	mov ecx,1
	jmp Block7

 Block6:
	xor ecx,ecx

 Block7:
	cmp dword ptr [edi+0x5E4],1
	je Block9

 Block8:
	cmp ecx,ebx
	je Block10

 Block9:
	mov esi,0x4C7637
	jmp Block11

 Block10:
	mov esi,dword ptr [ebp+0x78]

 Block11:
	mov dword ptr [ebp+0x44],esi
	mov dword ptr [ebp+0x68],ebx
	mov dword ptr [ebp+0x40],ebx
	mov dword ptr [ebp+0x48],1
	mov dword ptr [ebp+0x30],ebx
	mov dword ptr [ebp+0x34],0x64
	mov dword ptr [ebp+0x38],0x3E8
	mov byte ptr [ebp+0x2C],0x80
	mov dword ptr [ebp+0x4C],ebx
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov dword ptr [ebp-4],ebx
	cmp ecx,0x1AD
	jne Block13

 Block12:
	push esi
	lea edx,[ebp+0x4C]
	push offset _S_ITEMETC0429IMG08__1
	push edx
	call ZXString<char>::Format
	add esp,0xC
	jmp Block15

 Block13:
	lea eax,[ebp+0x64]
	push 0xC71
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],1
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x64]
	add esp,0xC
	mov byte ptr [ebp-4],0
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp]
	push edx
	call esi
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	lea ecx,[ebp+0x10]
	push ecx
	mov byte ptr [ebp-4],2
	call esi
	lea edx,[ebp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov eax,dword ptr [ebp+0x4C]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	mov byte ptr [ebp-4],3
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp+0x4C]
	mov esi,esp
	push ebx
	push ebx
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp+0x10]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],4
	cmp dword ptr [_D_G_RM],ebx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block24

 Block22:
	cmp eax,0x80004002
	je Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	mov ebx,8
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x1C],bx
	jne Block27

 Block25:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x10],bx
	jne Block31

 Block29:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp],bx
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov esi,dword ptr [ebp+0x64]
	test esi,esi
	je Block65

 Block37:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1A9A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x50]
	mov byte ptr [ebp-4],0xA
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x50],bx
	jne Block40

 Block38:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0xE2C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x50]
	push ecx
	mov byte ptr [ebp-4],0xC
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [ebp+0x40],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x50],bx
	jne Block44

 Block42:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xF12
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	lea edx,[ebp+0x50]
	mov byte ptr [ebp-4],0xE
	push edx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xF
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x50],bx
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x10D2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	lea eax,[ebp+0x50]
	mov byte ptr [ebp-4],0x10
	push eax
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [ebp+0x30],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x50],bx
	jne Block52

 Block50:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	push 0x64
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1ABA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x50]
	push ecx
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x12
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x13
	call get_int32
	add esp,8
	mov dword ptr [ebp+0x34],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x50],bx
	jne Block56

 Block54:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block57:
	push 0x3E8
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AA9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	lea edx,[ebp+0x50]
	mov byte ptr [ebp-4],0x14
	push edx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x15
	call get_int32
	add esp,8
	mov dword ptr [ebp+0x38],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x50],bx
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	push 0x80
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x10D3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	lea eax,[ebp+0x50]
	mov byte ptr [ebp-4],0x16
	push eax
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x17
	call get_int32
	add esp,8
	mov byte ptr [ebp+0x2C],al
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x50],bx
	jne Block64

 Block62:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block66

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block64:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block66

 Block65:
	mov esi,dword ptr [ebp+0x48]

 Block66:
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [ebp+0x78]
	mov dword ptr [edi+0x39C0],eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x1393
	je Block85

 Block67:
	cmp eax,0x10C3
	je Block85

 Block68:
	mov dword ptr [edi+0x39BC],ecx
	lea ecx,[edi+0x39C8]
	mov dword ptr [ebp+0x60],ecx
	call ZArray<long>::RemoveAll
	cmp dword ptr [ebp+0x44],0
	jle Block89

 Block69:
	cmp dword ptr [ebp+0x68],0
	je Block89

 Block70:
	test esi,esi
	jne Block72

 Block71:
	mov ecx,dword ptr [edi+0x5F8]
	push ecx
	call is_vehicle
	add esp,4
	test eax,eax
	jne Block89

 Block72:
	mov ecx,dword ptr [ebp+0x64]
	test ecx,ecx
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea edx,[ebp+0x48]
	push edx
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp+0x24]
	mov byte ptr [ebp-4],0x18
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x1A
	test eax,eax
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block76:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ebx,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x1B
	mov dword ptr [ebp+0x48],0
	test ebx,ebx
	je Block20

 Block77:
	mov ecx,dword ptr [ebx]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0x48]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	push 1
	push ebx
	call ecx
	test eax,eax
	jne Block84

 Block78:
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp+0x68]
	push eax
	call DetachBSTR
	mov esi,dword ptr [ebp+0x68]
	add esp,4
	mov eax,esp
	mov byte ptr [ebp-4],0x1C
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block80

 Block79:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block80:
	call get_action_code_from_name
	mov edi,eax
	add esp,4
	test edi,edi
	jl Block82

 Block81:
	mov ecx,dword ptr [ebp+0x60]
	push 0xFFFFFFFF
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],edi

 Block82:
	mov byte ptr [ebp-4],0x1B
	test esi,esi
	je Block77

 Block83:
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x68],0
	jmp Block77

 Block84:
	lea ecx,[ebp-0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [ebp-4],9
	call eax
	mov edi,dword ptr [ebp+0x20]
	jmp Block89

 Block85:
	mov eax,dword ptr [edi+0x39BC]
	test eax,eax
	je Block87

 Block86:
	neg eax
	jmp Block88

 Block87:
	or eax,0xFFFFFFFF

 Block88:
	mov dword ptr [edi+0x39BC],eax

 Block89:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xC]
	mov ecx,edi
	call eax
	test eax,eax
	je Block91

 Block90:
	mov eax,dword ptr [edi+0x39BC]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [ecx+0x3600],eax

 Block91:
	mov eax,dword ptr [edi+0x2E8C]
	test eax,eax
	je Block93

 Block92:
	push 0
	lea ecx,[edi+0x2E88]
	mov dword ptr [eax],1
	call ZRef<AnimationState>::op_assign_zero

 Block93:
	cmp dword ptr [ebp+0x30],0
	je Block126

 Block94:
	lea edx,[ebp+0x3F]
	push edx
	push 5
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp+0x68],0
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::_Alloc
	mov eax,dword ptr [ebp+0x68]
	mov ecx,dword ptr [edi+0x1958]
	mov esi,dword ptr [eax]
	mov bl,0x1D
	mov byte ptr [ebp-4],bl
	cmp esi,ecx
	je Block100

 Block95:
	mov dword ptr [eax],ecx
	mov eax,dword ptr [eax]
	test eax,eax
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block97:
	test esi,esi
	je Block99

 Block98:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block99:
	mov eax,dword ptr [ebp+0x68]

 Block100:
	mov ecx,dword ptr [edi+0x195C]
	mov esi,dword ptr [eax+4]
	cmp esi,ecx
	je Block106

 Block101:
	mov dword ptr [eax+4],ecx
	test ecx,ecx
	je Block103

 Block102:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax

 Block103:
	test esi,esi
	je Block105

 Block104:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block105:
	mov eax,dword ptr [ebp+0x68]

 Block106:
	mov ecx,dword ptr [edi+0x1960]
	mov esi,dword ptr [eax+8]
	cmp esi,ecx
	je Block112

 Block107:
	mov dword ptr [eax+8],ecx
	test ecx,ecx
	je Block109

 Block108:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx

 Block109:
	test esi,esi
	je Block111

 Block110:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block111:
	mov eax,dword ptr [ebp+0x68]

 Block112:
	mov ecx,dword ptr [edi+0x1968]
	mov esi,dword ptr [eax+0xC]
	cmp esi,ecx
	je Block118

 Block113:
	mov dword ptr [eax+0xC],ecx
	test ecx,ecx
	je Block115

 Block114:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax

 Block115:
	test esi,esi
	je Block117

 Block116:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block117:
	mov eax,dword ptr [ebp+0x68]

 Block118:
	mov ecx,dword ptr [edi+0x196C]
	mov esi,dword ptr [eax+0x10]
	cmp esi,ecx
	je Block123

 Block119:
	mov dword ptr [eax+0x10],ecx
	test ecx,ecx
	je Block121

 Block120:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx

 Block121:
	test esi,esi
	je Block123

 Block122:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block123:
	mov ecx,dword ptr [ebp+0x2C]
	mov edx,dword ptr [ebp+0x34]
	mov eax,dword ptr [ebp+0x38]
	push ecx
	push edx
	push eax
	mov eax,dword ptr [edi+0x1970]
	lea ecx,[ebp+0x68]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block125

 Block124:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block125:
	lea ecx,[ebp+0x58]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterMotionBlurAnimation
	push eax
	lea ecx,[edi+0x2E88]
	mov byte ptr [ebp-4],0x1E
	call ZRef<AnimationState>::op_assign_copy
	lea ecx,[ebp+0x58]
	mov byte ptr [ebp-4],bl
	call ZRef<AnimationState>::~ZRef<AnimationState>
	lea ecx,[ebp+0x68]
	mov byte ptr [ebp-4],9
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll

 Block126:
	cmp dword ptr [ebp+0x78],0
	jne Block130

 Block127:
	cmp dword ptr [edi+0x5D0],0
	jne Block130

 Block128:
	cmp dword ptr [edi+0x5E4],0
	jne Block130

 Block129:
	push 3
	mov ecx,edi
	call CUser::RemoveAdditionalLayer
	push 0xB
	mov ecx,edi
	call CUser::RemoveAdditionalLayer
	jmp Block133

 Block130:
	cmp dword ptr [ebp+0x40],0
	mov ecx,dword ptr [ebp+0x28]
	mov esi,dword ptr [ebp+0x44]
	mov dword ptr [ecx+8],esi
	mov ecx,edi
	jne Block132

 Block131:
	push 0xB
	call CUser::RemoveAdditionalLayer
	push esi
	mov ecx,edi
	call CUser::ShowEffectItem
	jmp Block133

 Block132:
	push 3
	call CUser::RemoveAdditionalLayer
	push esi
	mov ecx,edi
	call CUser::ShowFollowEffectItem

 Block133:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block135

 Block134:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block135:
	mov eax,dword ptr [ebp+0x4C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block137

 Block136:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block137:
	lea esp,[ebp-0x3C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x6C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x70
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CUser::GetDragon
__SUB_CLASS_THIS0(005F2860, __thiscall, 16676,  CUser, ZRef<CDragon>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x2EAC]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi+4],eax
	test eax,eax
	je Block2

 Block1:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CUser::SetCarryItemEffect
_SUB_EXCEPTION_HANDLER(4EDB90)
__SUB_CLASS_THIS(004EDB90, __thiscall, 16618,  CUser, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4EDB90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x190
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1A4]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x44],esi
	xor ebp,ebp
	cmp dword ptr [esi+0x638],ebp
	je Block2

 Block1:
	mov eax,dword ptr [esp+0x1B4]
	mov dword ptr [esi+0x39B8],eax
	jmp Block163

 Block2:
	push 4
	call CUser::RemoveAdditionalLayer
	mov dword ptr [esp+0x30],eax
	cmp dword ptr [esi+0x5D0],ebp
	jne Block163

 Block3:
	cmp dword ptr [esi+0x5E4],ebp
	jne Block163

 Block4:
	mov esi,dword ptr [esp+0x1B4]
	cmp esi,ebp
	je Block163

 Block5:
	mov dword ptr [esp+0x3C],ebp
	mov dword ptr [esp+0x1AC],ebp
	mov dword ptr [esp+0x2C],ebp
	lea ecx,[esp+0x18]
	push 0x9A9
	push ecx
	mov byte ptr [esp+0x1B4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push offset CCtrlEdit::GetRTTI
	push eax
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x1B8],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x1AC],1
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	lea eax,[esp+0x18]
	push 0x9AA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push offset CCtrlEdit::GetRTTI
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x1B8],3
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x1AC],1
	cmp eax,ebp
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	push offset _D_VTMISSING
	lea ecx,[esp+0x168]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x178]
	mov byte ptr [esp+0x1B0],4
	call Ztl_variant_t::_ctor_1
	push ebp
	push ebp
	lea edx,[esp+0x16C]
	push edx
	mov edx,dword ptr [esp+0x48]
	lea eax,[esp+0x180]
	push eax
	push ecx
	mov dword ptr [esp+0x54],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x1C4],5
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x1C0],6
	cmp dword ptr [_D_G_RM],ebp
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x198]
	mov byte ptr [esp+0x1C0],5
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x1B4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x3C]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[esp+0x184]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x174]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x164]
	mov byte ptr [esp+0x1AC],0xB
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x158]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x148]
	mov byte ptr [esp+0x1B0],0xC
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esp+0x2C]
	push ebp
	push ebp
	lea ecx,[esp+0x15C]
	push ecx
	lea edx,[esp+0x150]
	push edx
	push ecx
	mov dword ptr [esp+0x54],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x1C4],0xD
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x1C0],0xE
	cmp dword ptr [_D_G_RM],ebp
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea ecx,[esp+0x1A8]
	push ecx
	mov byte ptr [esp+0x1C4],0xD
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x1B4],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x38]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[esp+0x194]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x144]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x154]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,esi
	cdq
	mov ecx,0xA
	idiv ecx
	mov dword ptr [esp+0x28],ebp
	mov esi,eax
	lea edi,[esi+edx]
	mov dword ptr [esp+0x18],edx
	mov dword ptr [esp+0x94],esi
	mov dword ptr [esp+0x40],edi
	lea edx,[esp+0x1C]
	push 0x3D2
	mov bl,0x14
	push edx
	mov byte ptr [esp+0x1B4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x2C]
	push ecx
	push eax
	mov byte ptr [esp+0x1B8],0x15
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x1AC],bl
	cmp eax,ebp
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	mov edx,dword ptr [esp+0x44]
	mov eax,dword ptr [edx+0x1940]
	mov ecx,0xD
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],eax
	cmp eax,ebp
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block17:
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0x1AC],0x16
	cmp ecx,ebp
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea edx,[esp+0x48]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x48]
	call Ztl_variant_t::~Ztl_variant_t
	mov ebx,dword ptr [esp+0x38]
	cmp edi,ebp
	mov edi,dword ptr [esp+0x34]
	mov dword ptr [esp+0x1C],ebp
	jbe Block153

 Block20:
	mov bl,0x17
	jmp Block23

 Block22:
	mov esi,dword ptr [esp+0x94]

 Block23:
	mov dword ptr [esp+0x14],0
	lea eax,[esp+0x90]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x1B4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0x1B8],0x18
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x9C]
	add esp,0xC
	mov byte ptr [esp+0x1AC],bl
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x28]
	mov edx,0xD
	mov word ptr [esp+0x58],dx
	mov dword ptr [esp+0x60],eax
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x1AC],0x19
	test ecx,ecx
	je Block10

 Block28:
	mov ebp,dword ptr [esp+0x58]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x6C]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x70]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x74]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov edi,ecx
	call eax
	test eax,eax
	jge Block30

 Block29:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block30:
	mov byte ptr [esp+0x1AC],bl
	mov ebx,8
	cmp word ptr [esp+0x58],bx
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov dword ptr [esp+0x20],0
	lea eax,[esp+0x98]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x1B4],0x1A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x24]
	push ecx
	push eax
	mov byte ptr [esp+0x1B8],0x1B
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0xA4]
	add esp,0xC
	mov byte ptr [esp+0x1AC],0x1A
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	mov ebp,dword ptr [esp+0x18]
	mov edi,dword ptr [esp+0x1C]
	cmp edi,ebp
	jae Block43

 Block37:
	mov eax,0x66666667
	imul ebp
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*4]
	add edx,edx
	mov eax,ebp
	sub eax,edx
	cmp eax,5
	mov eax,0xCCCCCCCD
	jg Block39

 Block38:
	mul edi
	mov ecx,edx
	shr ecx,2
	lea edx,[ecx+ecx*4]
	sub edi,edx
	add edi,edi
	mov eax,edi
	jmp Block42

 Block39:
	mul edi
	shr edx,3
	lea eax,[edx+edx*4]
	add eax,eax
	mov ecx,edi
	sub ecx,eax
	mov eax,0xCCCCCCCD
	mul edi
	cmp ecx,5
	mov ecx,edx
	jae Block41

 Block40:
	shr ecx,2
	mov eax,edi
	lea edx,[ecx+ecx*4]
	sub eax,edx
	sub eax,2
	lea esi,[eax+eax*4]
	mov eax,0xFFFFFFFE
	sub eax,ecx
	lea edi,[eax+eax*4]
	add esi,esi
	add edi,edi
	jmp Block44

 Block41:
	shr ecx,2
	lea eax,[ecx+ecx]
	mov esi,eax
	mov eax,0x66666667
	imul ebp
	sar edx,1
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	sub eax,esi
	lea edx,[eax+eax*4]
	lea eax,[edx+edi*2]

 Block42:
	sub eax,ebp
	inc eax
	lea esi,[eax+eax*4]
	mov eax,0xFFFFFFFE
	sub eax,ecx
	lea edi,[eax+eax*4]
	add edi,edi
	jmp Block44

 Block43:
	xor edx,edx
	mov eax,edi
	sub eax,ebp
	mov ecx,5
	div ecx
	mov edi,eax
	mov ecx,edx
	mov eax,0x66666667
	imul esi
	sar edx,1
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,eax
	neg edx
	add edx,edx
	add edx,edx
	sub edx,eax
	mov eax,1
	sub eax,edx
	sub eax,esi
	lea esi,[eax*8]
	sub esi,eax
	mov eax,ecx
	shl eax,4
	sub eax,ecx
	add esi,eax
	lea ecx,[ebp-1]
	mov eax,0x66666667
	imul ecx
	sar edx,1
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,edi
	shl edx,4
	sub edx,edi
	neg edx
	lea ecx,[eax+eax*4]
	add ecx,ecx
	mov edi,edx
	sub edi,ecx
	sub edi,0x23

 Block44:
	mov dword ptr [esp+0x24],0
	lea eax,[esp+0x8C]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x1B4],0x1C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x28]
	push ecx
	push eax
	mov byte ptr [esp+0x1B8],0x1D
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x98]
	add esp,0xC
	mov byte ptr [esp+0x1AC],0x1C
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block46:
	lea edx,[esp+0x100]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x100]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block164

 Block47:
	mov ecx,offset _D_G_RAND
	mov byte ptr [esp+0x1AC],0x1E
	call CRand32::Random
	xor edx,edx
	mov ecx,0x168
	div ecx
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block10

 Block48:
	lea eax,[esp+0x100]
	mov dword ptr [esp+0x140],edx
	fild dword ptr [esp+0x140]
	push eax
	test edx,edx
	jge Block50

 Block49:
	fadd qword ptr [__real_41f0000000000000]

 Block50:
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	mov byte ptr [esp+0x1AC],0x1C
	cmp word ptr [esp+0x100],bx
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x108]
	xor ecx,ecx
	mov word ptr [esp+0x100],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x100]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov eax,0xD
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x80],eax
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block56:
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x1AC],0x1F
	test ecx,ecx
	je Block10

 Block57:
	mov ebx,dword ptr [esp+0x78]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x8C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x90]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x94]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov ebp,ecx
	call eax
	test eax,eax
	jge Block59

 Block58:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ebp
	push eax
	call _com_issue_errorex

 Block59:
	cmp word ptr [esp+0x78],8
	mov byte ptr [esp+0x1AC],0x1C
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x80]
	xor ecx,ecx
	mov word ptr [esp+0x78],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0x78]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	lea eax,[esp+0xA0]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xA0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block164

 Block64:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xC0]
	mov bl,0x20
	push edx
	mov byte ptr [esp+0x1B0],bl
	call ebp
	lea eax,[esp+0xC0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block164

 Block65:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x1AC],0x21
	test ecx,ecx
	je Block10

 Block66:
	lea edx,[esp+0xA0]
	push edx
	lea eax,[esp+0xC4]
	push eax
	push edi
	push esi
	call IWzVector2D::RelMove
	cmp word ptr [esp+0xC0],8
	mov byte ptr [esp+0x1AC],bl
	jne Block69

 Block67:
	mov eax,dword ptr [esp+0xC8]
	xor ecx,ecx
	mov word ptr [esp+0xC0],cx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea edx,[esp+0xC0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov edi,8
	mov byte ptr [esp+0x1AC],0x1C
	cmp word ptr [esp+0xA0],di
	jne Block73

 Block71:
	xor eax,eax
	mov word ptr [esp+0xA0],ax
	mov eax,dword ptr [esp+0xA8]
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea ecx,[esp+0xA0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block10

 Block75:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x98]
	push 5
	push 0
	push 5
	push 5
	push ecx
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block77

 Block76:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block77:
	lea eax,[esp+0x120]
	push eax
	call ebp
	lea ecx,[esp+0x120]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block164

 Block78:
	lea edx,[esp+0xE0]
	mov bl,0x22
	push edx
	mov byte ptr [esp+0x1B0],bl
	call ebp
	lea eax,[esp+0xE0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block164

 Block79:
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x1AC],0x23
	test ecx,ecx
	je Block10

 Block80:
	lea edx,[esp+0x120]
	push edx
	lea eax,[esp+0xE4]
	push eax
	push 0xFFFFFFFB
	push 0
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x1AC],bl
	cmp word ptr [esp+0xE0],di
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0xE8]
	xor ecx,ecx
	mov word ptr [esp+0xE0],cx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[esp+0xE0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov byte ptr [esp+0x1AC],0x1C
	cmp word ptr [esp+0x120],di
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [esp+0x120],ax
	mov eax,dword ptr [esp+0x128]
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[esp+0x120]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov edx,3
	mov word ptr [esp+0xB0],dx
	mov dword ptr [esp+0xB8],0x7D0
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1AC],0x24
	test ecx,ecx
	je Block10

 Block89:
	fldz
	lea eax,[esp+0xB0]
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	mov byte ptr [esp+0x1AC],0x1C
	cmp word ptr [esp+0xB0],di
	jne Block92

 Block90:
	mov eax,dword ptr [esp+0xB8]
	xor ecx,ecx
	mov word ptr [esp+0xB0],cx
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea edx,[esp+0xB0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov edi,dword ptr [esp+0x30]
	mov eax,dword ptr [esp+0x1C]
	add edi,0x14
	cmp eax,dword ptr [esp+0x18]
	jae Block107

 Block94:
	lea ecx,[esp+0xF0]
	push ecx
	call ebp
	lea edx,[esp+0xF0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block164

 Block95:
	mov eax,0xD
	mov word ptr [esp+0xD0],ax
	mov eax,dword ptr [esp+0x38]
	mov bl,0x25
	mov byte ptr [esp+0x1AC],bl
	mov dword ptr [esp+0xD8],eax
	test eax,eax
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block97:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x1AC],0x26
	test ecx,ecx
	je Block10

 Block98:
	lea eax,[esp+0xF0]
	push eax
	lea edx,[esp+0xD4]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0xA4]
	push eax
	call IWzGr2D::CreateLayer
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block100

 Block99:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block100:
	mov esi,8
	mov byte ptr [esp+0x1AC],bl
	cmp word ptr [esp+0xD0],si
	jne Block103

 Block101:
	xor eax,eax
	mov word ptr [esp+0xD0],ax
	mov eax,dword ptr [esp+0xD8]
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea ecx,[esp+0xD0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	mov byte ptr [esp+0x1AC],0x1C
	cmp word ptr [esp+0xF0],si
	jne Block106

 Block105:
	mov eax,dword ptr [esp+0xF8]
	xor edx,edx
	mov word ptr [esp+0xF0],dx
	jmp Block119

 Block106:
	lea eax,[esp+0xF0]
	jmp Block122

 Block107:
	lea ecx,[esp+0x130]
	push ecx
	call ebp
	lea edx,[esp+0x130]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block164

 Block108:
	mov eax,0xD
	mov word ptr [esp+0x110],ax
	mov eax,dword ptr [esp+0x34]
	mov bl,0x27
	mov byte ptr [esp+0x1AC],bl
	mov dword ptr [esp+0x118],eax
	test eax,eax
	je Block110

 Block109:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block110:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x1AC],0x28
	test ecx,ecx
	je Block10

 Block111:
	lea eax,[esp+0x130]
	push eax
	lea edx,[esp+0x114]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0xB8]
	push eax
	call IWzGr2D::CreateLayer
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x9C]
	test eax,eax
	je Block113

 Block112:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block113:
	mov esi,8
	mov byte ptr [esp+0x1AC],bl
	cmp word ptr [esp+0x110],si
	jne Block116

 Block114:
	xor eax,eax
	mov word ptr [esp+0x110],ax
	mov eax,dword ptr [esp+0x118]
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea ecx,[esp+0x110]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov byte ptr [esp+0x1AC],0x1C
	cmp word ptr [esp+0x130],si
	jne Block121

 Block118:
	mov eax,dword ptr [esp+0x138]
	xor edx,edx
	mov word ptr [esp+0x130],dx

 Block119:
	test eax,eax
	je Block123

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block121:
	lea eax,[esp+0x130]

 Block122:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block123:
	mov ecx,dword ptr [esp+0x44]
	mov eax,dword ptr [ecx+0x1960]
	mov edx,0xD
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],eax
	test eax,eax
	je Block125

 Block124:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block125:
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x1AC],0x29
	test ecx,ecx
	je Block10

 Block126:
	lea eax,[esp+0x48]
	push eax
	call IWzGr2DLayer::Putoverlay
	mov byte ptr [esp+0x1AC],0x1C
	cmp word ptr [esp+0x48],si
	jne Block129

 Block127:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block10

 Block131:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 5
	push esi
	call ecx
	test eax,eax
	jge Block133

 Block132:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block133:
	mov eax,dword ptr [esp+0x14]
	mov edx,0xD
	mov word ptr [esp+0x68],dx
	mov dword ptr [esp+0x70],eax
	test eax,eax
	je Block135

 Block134:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block135:
	mov esi,dword ptr [edi]
	mov byte ptr [esp+0x1AC],0x2A
	test esi,esi
	je Block10

 Block136:
	mov edx,dword ptr [esp+0x68]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x7C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x80]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x84]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block138

 Block137:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block138:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x1AC],0x1C
	jne Block141

 Block139:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	test eax,eax
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea edx,[esp+0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block142:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block10

 Block143:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block145

 Block144:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block145:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1AC],0x1A
	test eax,eax
	je Block147

 Block146:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block147:
	mov eax,dword ptr [esp+0x20]
	mov bl,0x17
	mov byte ptr [esp+0x1AC],bl
	test eax,eax
	je Block149

 Block148:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block149:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x1AC],0x14
	test eax,eax
	je Block151

 Block150:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block151:
	mov eax,dword ptr [esp+0x1C]
	add dword ptr [esp+0x30],0x24
	inc eax
	mov dword ptr [esp+0x1C],eax
	cmp eax,dword ptr [esp+0x40]
	jb Block22

 Block152:
	mov edi,dword ptr [esp+0x34]
	mov ebx,dword ptr [esp+0x38]
	xor ebp,ebp

 Block153:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x1AC],0x13
	cmp eax,ebp
	je Block155

 Block154:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block155:
	mov byte ptr [esp+0x1AC],0xB
	cmp edi,ebp
	je Block157

 Block156:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block157:
	mov byte ptr [esp+0x1AC],1
	cmp ebx,ebp
	je Block159

 Block158:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block159:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x1AC],0
	cmp eax,ebp
	je Block161

 Block160:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block161:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x1AC],0xFFFFFFFF
	cmp eax,ebp
	je Block163

 Block162:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block163:
	mov ecx,dword ptr [esp+0x1A4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x19C
	ret 4

 Block164:
	push eax
	call _com_issue_error
}
}
// CUser::SetSetItemBackground
_SUB_EXCEPTION_HANDLER(4ED540)
__SUB_CLASS_THIS(004ED540, __thiscall, 16710,  CUser, void, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4ED540
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	cmp dword ptr [esi+0x638],ebx
	jne Block73

 Block1:
	cmp dword ptr [esp+0x70],ebx
	je Block7

 Block2:
	mov dword ptr [esp+0x70],ebx
	mov eax,dword ptr [esi+0x2E48]
	push 3
	push eax
	lea ecx,[esp+0x78]
	push ebx
	push ecx
	mov dword ptr [esp+0x74],ebx
	call get_random_unique_array
	mov ebp,dword ptr [esp+0x80]
	add esp,0x10
	xor edi,edi
	jmp Block4

 Block4:
	mov edx,dword ptr [esi+0x2E44]
	mov ecx,dword ptr [edx+edi+4]
	cmp ecx,ebx
	je Block6

 Block5:
	mov eax,dword ptr [esp+0x6C]
	mov edx,dword ptr [ebp]
	push eax
	push edx
	call CPet::SetSetItemBackground
	add edi,8
	add ebp,4
	cmp edi,0x18
	jl Block4

 Block6:
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	call ZArray<long>::RemoveAll

 Block7:
	push 1
	mov ecx,esi
	call CUser::GetAdditionalLayer
	mov ebx,eax
	cmp dword ptr [ebx+0x14],0
	lea edi,[ebx+0x14]
	sete al
	mov dword ptr [esp+0x70],ebx
	test al,al
	jne Block73

 Block8:
	call get_update_time
	mov ebp,eax
	mov eax,dword ptr [esi+0x640]
	and eax,0xFFFFFFFE
	mov dword ptr [esp+0x28],ebp
	cmp eax,4
	jne Block38

 Block9:
	cmp dword ptr [esp+0x6C],0
	jne Block38

 Block10:
	mov eax,dword ptr [ebx+8]
	test eax,eax
	je Block73

 Block11:
	sub ebp,eax
	cmp ebp,0x5DC
	jle Block73

 Block12:
	mov ebp,dword ptr [ebx]
	test ebp,ebp
	jl Block23

 Block13:
	mov dword ptr [esp+0x14],0xFFFFFFFF
	mov dword ptr [esp+0x6C],0
	push 1
	mov ecx,esi
	mov dword ptr [esp+0x68],1
	call CUser::RemoveAdditionalLayer
	lea eax,[esp+0x24]
	push 0xBCA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea ecx,[esp+0x74]
	push ecx
	mov byte ptr [esp+0x70],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x64],1
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	mov ecx,dword ptr [esi+0x1960]
	lea edx,[esp+0x14]
	add ebx,0xC
	push edx
	push ebx
	test ecx,ecx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	call IWzGr2DLayer::Getflip
	push eax
	mov eax,dword ptr [esp+0x78]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CUser::LoadLayer
	test eax,eax
	je Block20

 Block18:
	push 0xFFFFFFFF
	mov ecx,edi
	mov dword ptr [ebx],1
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putz
	mov ecx,dword ptr [esp+0x70]
	mov eax,dword ptr [esp+0x14]
	mov edx,3
	mov dword ptr [ecx],ebp
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],eax
	push offset _D_VTMISSING
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x68],dl
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x30]
	push edx
	push 0x20
	mov ecx,edi
	mov byte ptr [esp+0x70],4
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x64],1
	call Ztl_variant_t::~Ztl_variant_t
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	push 0
	push 0
	mov ecx,eax
	mov byte ptr [esp+0x6C],5
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Move
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x64],1
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	mov ebx,dword ptr [esp+0x70]

 Block23:
	mov ebp,dword ptr [edi]
	mov dword ptr [esp+0x24],ebp
	test ebp,ebp
	je Block25

 Block24:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block25:
	mov edx,3
	mov dword ptr [esp+0x64],6
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],0
	mov byte ptr [esp+0x64],7
	test ebp,ebp
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x74]
	push ecx
	mov ecx,ebp
	call IWzGr2DLayer::Getcanvas
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x64],9
	call Ztl_variant_t::~Ztl_variant_t
	lea edx,[esp+0x6C]
	push edx
	lea ecx,[esi+0x88]
	call CAvatar::GetLayerUnderFace
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x64],0xA
	test ecx,ecx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	call IWzGr2DLayer::Getflip
	mov edi,eax
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],9
	test eax,eax
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	push edi
	mov ecx,ebp
	mov dword ptr [ebx+8],0
	call IWzGr2DLayer::Putflip
	mov ebx,dword ptr [esp+0x70]
	test ebx,ebx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x10]
	add esi,4
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	call edx
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	call edx
	mov esi,dword ptr [eax]
	mov ecx,ebx
	call IWzCanvas::Getcy
	sub edi,eax
	push edi
	mov ecx,ebx
	call IWzCanvas::Getcx
	sub esi,eax
	push esi
	mov ecx,ebp
	call IWzShape2D::Move
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esp+0x28]
	add eax,0x1F4
	mov ecx,3
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	lea edx,[esp+0x6C]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x68],0xC
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x64],0xD
	test ecx,ecx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea eax,[esp+0x4C]
	push eax
	lea edx,[esp+0x18]
	push edx
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],0xC
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	lea ecx,[esp+0x14]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4C]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [esp+0x68],6
	call ecx
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov dword ptr [esp+0x68],0xFFFFFFFF
	call eax
	jmp Block73

 Block38:
	cmp dword ptr [ebx+8],0
	jne Block70

 Block39:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x14],edi
	test edi,edi
	je Block41

 Block40:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block41:
	mov dword ptr [esp+0x64],0xE
	test edi,edi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getalpha
	mov esi,eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x68],0xF
	call IWzGr2DLayer::Getalpha
	mov ebx,eax
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x64],0x10
	test esi,esi
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[esp+0x6C]
	push eax
	push esi
	mov dword ptr [esp+0x74],0
	call ecx
	test eax,eax
	jge Block47

 Block46:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	mov esi,dword ptr [ebx]
	test esi,esi
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	mov eax,dword ptr [esp+0x6C]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	push 0
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block51

 Block50:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block51:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x64],0xF
	test eax,eax
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block53:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x64],0xE
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	lea eax,[ebp+0x1F4]
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],eax
	lea eax,[esp+0x28]
	mov bl,0x12
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x68],bl
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x64],0x13
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x64],bl
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x64],0x11
	cmp word ptr [esp+0x2C],bx
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[esp+0x2C]
	push ecx
	call esi

 Block65:
	mov byte ptr [esp+0x64],0xE
	cmp word ptr [esp+0x3C],bx
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[esp+0x3C]
	push eax
	call esi

 Block69:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x68],0xFFFFFFFF
	call edx
	mov ebx,dword ptr [esp+0x70]

 Block70:
	mov eax,ebp
	test ebp,ebp
	jne Block72

 Block71:
	mov eax,1

 Block72:
	mov dword ptr [ebx+8],eax

 Block73:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 8
}
}
// CUser::ShowEffectSiegeAttack
_SUB_EXCEPTION_HANDLER(4EF7F0)
__SUB_CLASS_THIS(004EF7F0, __thiscall, 16712,  CUser, void, const SKILLENTRY*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4EF7F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block13

 Block1:
	mov eax,dword ptr [esp+0x28]
	push eax
	lea edx,[esp+0x2C]
	push edx
	call SKILLENTRY::GetEffectUOL
	mov edi,dword ptr [esp+0x28]
	mov dword ptr [esp+0x1C],0
	test edi,edi
	je Block13

 Block2:
	cmp dword ptr [edi],0
	je Block12

 Block3:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block12

 Block4:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block12

 Block5:
	mov eax,dword ptr [esi+0x1960]
	push 0
	push 0
	push 0
	push 3
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x40],1
	call CUser::GetVecCtrl_0
	mov esi,dword ptr [esi+0x1960]
	mov byte ptr [esp+0x3C],2
	test esi,esi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[esp+0x44]
	push edx
	push esi
	mov dword ptr [esp+0x4C],0
	call eax
	test eax,eax
	jge Block11

 Block10:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block11:
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [edi]
	push ecx
	mov byte ptr [esp+0x40],0
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edx
	call CAnimationDisplayer::Effect_SkillUse

 Block12:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block13:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 8
}
}
// CUser::OnPetEvol
_SUB_EXCEPTION_HANDLER(4E5CE0)
__SUB_CLASS_THIS(004E5CE0, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E5CE0
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebx,dword ptr [esp+0x24]
	mov ecx,ebx
	call CInPacket::Decode1
	xor ecx,ecx
	test al,al
	setne cl
	mov ebp,ecx
	mov ecx,ebx
	call CInPacket::Decode1
	movzx edi,al
	cmp edi,2
	ja Block8

 Block1:
	test ebp,ebp
	jne Block3

 Block2:
	push ebp
	push edi
	mov ecx,esi
	call CUser::SetActivePet

 Block3:
	push 0x248
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block5

 Block4:
	mov ecx,eax
	call CPet::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push eax
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call CUser::SetActivePet
	mov edx,dword ptr [esi+0x2E44]
	mov ecx,dword ptr [edx+edi*8+4]
	push ebx
	push esi
	call CPet::Init_1
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC]
	mov ecx,esi
	call edx
	test eax,eax
	je Block8

 Block7:
	mov eax,dword ptr [esi+0x2E44]
	mov ecx,dword ptr [eax+edi*8+4]
	call CPet::UpdatePetAbility

 Block8:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4
}
}
// CGrenade::JustBomb
__SUB_CLASS_THIS0(00168DB0, __thiscall, 81203,  CGrenade, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x44]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	mov ecx,dword ptr [esi+0x48]
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [esi+0x10]
	push esi
	push 0x320
	push eax
	call CUser::ShowSkillSpecialEffect
	pop esi
	ret
}
}
// CUser::LoadLayer
_SUB_EXCEPTION_HANDLER(4E96D0)
__SUB_CLASS_THIS(004E96D0, __thiscall, 16698,  CUser, int32_t, NakedParam<Ztl_bstr_t>, int32_t, USERLAYER&, long*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E96D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x88]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x1C],ebx
	mov ecx,dword ptr [esp+0x98]
	xor esi,esi
	mov dword ptr [esp+0x90],esi
	cmp ecx,esi
	je Block78

 Block1:
	cmp dword ptr [ecx],esi
	je Block77

 Block2:
	mov eax,dword ptr [ecx]
	cmp eax,esi
	je Block77

 Block3:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,esi
	je Block77

 Block4:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x58]
	push eax
	call edi
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x94],1
	call edi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	push esi
	push esi
	lea ecx,[esp+0x60]
	push ecx
	lea edx,[esp+0x54]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0xAC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xAC]
	mov dword ptr [esp+0x38],esp
	cmp eax,esi
	je Block10

 Block9:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	mov byte ptr [esp+0xA4],3
	cmp dword ptr [_D_G_RM],esi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x8C]
	mov byte ptr [esp+0xA4],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x98],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block15

 Block13:
	cmp eax,0x80004002
	je Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov edi,8
	mov byte ptr [esp+0x90],6
	cmp word ptr [esp+0x78],di
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	cmp eax,esi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x78]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [esp+0x90],7
	cmp word ptr [esp+0x48],di
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,esi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov byte ptr [esp+0x90],8
	cmp word ptr [esp+0x58],di
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,esi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov edi,dword ptr [esp+0x18]
	cmp edi,esi
	sete al
	test al,al
	jne Block74

 Block28:
	cmp edi,esi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],esi
	call edx
	cmp eax,esi
	jge Block32

 Block31:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block32:
	cmp dword ptr [esp+0x14],esi
	je Block74

 Block33:
	mov eax,dword ptr [ebx+0x1944]
	mov dword ptr [esp+0x14],eax
	cmp eax,esi
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block35:
	push 1
	lea eax,[esp+0x6C]
	add ebx,0x88
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x98],9
	xor ebp,ebp
	call CAvatar::GetBodyRect
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x3E9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x40]
	mov byte ptr [esp+0x98],0xA
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x9C],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x98],0xB
	call get_int32
	mov ecx,dword ptr [esp+0xA8]
	add esp,8
	cmp word ptr [esp+0x38],8
	mov dword ptr [ecx],eax
	mov byte ptr [esp+0x90],9
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block39:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xAB1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x40]
	mov byte ptr [esp+0x98],0xC
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x9C],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x98],0xD
	call get_int32
	mov ecx,dword ptr [esp+0xA8]
	add esp,8
	cmp word ptr [esp+0x38],8
	mov dword ptr [ecx+4],eax
	mov byte ptr [esp+0x90],9
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov ecx,dword ptr [esp+0xA0]
	mov eax,dword ptr [ecx+4]
	sub eax,1
	je Block53

 Block44:
	sub eax,1
	je Block48

 Block45:
	sub eax,1
	jne Block55

 Block46:
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x20]
	push edx
	call CUser::GetVecCtrl_1
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block55

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block55

 Block48:
	lea eax,[esp+0x68]
	push eax
	call IsRectEmpty
	test eax,eax
	je Block52

 Block49:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x90],8
	test eax,eax
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x94],0
	call ecx
	lea ecx,[esp+0x98]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block78

 Block52:
	mov esi,dword ptr [esp+0x1C]
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	add esi,4
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call edx
	mov edx,dword ptr [esp+0x68]
	mov ecx,eax
	mov eax,dword ptr [esp+0x70]
	add eax,edx
	cdq
	sub eax,edx
	mov ebp,eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	sar ebp,1
	sub ebp,dword ptr [ecx]
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,esi
	call edx
	mov edx,dword ptr [esp+0x74]
	mov ecx,eax
	mov eax,dword ptr [esp+0x6C]
	add eax,edx
	cdq
	sub eax,edx
	mov esi,eax
	sar esi,1
	sub esi,dword ptr [ecx+4]
	jmp Block55

 Block53:
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,ebx
	call CAvatar::GetFaceOrigin
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block55

 Block54:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block55:
	push 0
	push 0xFF
	push 3
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push ecx
	mov ecx,ebx
	call CAvatar::GetLayerUnderFace
	mov ebx,dword ptr [esp+0x24]
	push esi
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block57

 Block56:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block57:
	mov ecx,dword ptr [esp+0xB8]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x44],esp
	push edi
	call eax
	lea ecx,[esp+0x48]
	push ecx
	call CAnimationDisplayer::LoadLayer_0
	mov esi,dword ptr [esp+0xC8]
	add esp,0x28
	add esi,8
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block59

 Block58:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block59:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1AD0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x40]
	mov byte ptr [esp+0x98],0xE
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x9C],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x98],0xF
	call get_int32
	add esp,8
	cmp word ptr [esp+0x38],8
	mov ebp,eax
	mov byte ptr [esp+0x90],9
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	test ebp,ebp
	je Block67

 Block64:
	push offset _D_VTMISSING
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x94],0x10
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x90],0x11
	test ecx,ecx
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x38]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x90],9
	call Ztl_variant_t::~Ztl_variant_t

 Block67:
	mov esi,dword ptr [esp+0xA4]
	test esi,esi
	je Block69

 Block68:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x12E2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x40]
	mov byte ptr [esp+0x98],0x12
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x9C],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x98],0x13
	call get_int32
	add esp,8
	lea ecx,[esp+0x38]
	mov dword ptr [esi],eax
	call Ztl_variant_t::~Ztl_variant_t

 Block69:
	mov byte ptr [esp+0x90],8
	test ebx,ebx
	je Block71

 Block70:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block71:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0x94],0
	call eax
	mov ecx,dword ptr [esp+0x98]
	test ecx,ecx
	je Block73

 Block72:
	call _xbstr_t::Data_t::Release

 Block73:
	mov eax,1
	jmp Block79

 Block74:
	mov byte ptr [esp+0x90],0
	cmp edi,esi
	je Block76

 Block75:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block76:
	mov ecx,dword ptr [esp+0x98]
	cmp ecx,esi
	je Block78

 Block77:
	call _xbstr_t::Data_t::Release

 Block78:
	xor eax,eax

 Block79:
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x80
	ret 0x10
}
}
// CGrenade::GetZMass
__SUB_CLASS_THIS0(004E2EC0, __thiscall, 81211,  CGrenade, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x14]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax+0x1B8]
	ret

 Block2:
	xor eax,eax
	mov eax,dword ptr [eax+0x1C4]
	ret
}
}
// CGrenade::CGrenade
_SUB_EXCEPTION_HANDLER(4E2DB0)
__SUB_CLASS_THIS0(004E2DB0, __thiscall, 81201,  CGrenade, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E2DB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+8],esi
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi+4],offset ZRefCounted::`vftable'
	mov dword ptr [esi+8],eax
	mov dword ptr [esi+0xC],eax
	int 3// TODO: 	mov dword ptr [esi],offset CGrenade::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CGrenade::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esi+0x14],eax
	mov dword ptr [esi+0x18],eax
	push 0x90
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x1C],2
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block2

 Block1:
	push 0
	mov ecx,eax
	call CAttrShoe::_ctor_0
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esi+0x20],eax
	test eax,eax
	je Block5

 Block4:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret
}
}
// CUser::OnMiniRoomBalloon
_SUB_EXCEPTION_HANDLER(4E8D30)
__SUB_CLASS_THIS(004E8D30, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E8D30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x3C]
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esi+0x2DF4],eax
	test eax,eax
	je Block18

 Block1:
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0x2DF8],eax
	lea eax,[esp+0x10]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	lea ebp,[esi+0x2DFC]
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x38],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esi+0x2E00],ecx
	mov ecx,edi
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,edi
	mov dword ptr [esi+0x2E04],edx
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,edi
	mov dword ptr [esi+0x2E0C],eax
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esi+0x2E08],ecx
	mov ecx,edi
	call CInPacket::Decode1
	cmp dword ptr [esi+0x638],0
	movzx eax,al
	mov dword ptr [esi+0x2E10],eax
	jne Block19

 Block4:
	mov edx,3
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],0
	mov ecx,dword ptr [esi+0x2E08]
	mov edx,dword ptr [esi+0x2E04]
	push eax
	mov eax,dword ptr [esi+0x2E0C]
	push eax
	mov eax,dword ptr [esi+0x2E00]
	push ecx
	push edx
	push eax
	mov eax,dword ptr [esi+0x19E4]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],1
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	mov ecx,dword ptr [esi+0x1960]
	mov byte ptr [esp+0x4C],2
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x34]
	push eax
	lea edx,[esp+0x30]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x4C],3
	test edi,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x54]
	push ecx
	push edi
	mov dword ptr [esp+0x5C],0
	call edx
	test eax,eax
	jge Block12

 Block11:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block12:
	mov eax,dword ptr [esp+0x54]
	push eax
	mov eax,dword ptr [ebp]
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x2DF4]
	push ecx
	lea ecx,[esi+0x14]
	mov byte ptr [esp+0x58],4
	call CChatBalloon::MakeMiniRoomBalloon
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block14:
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x34],0xFFFFFFFF
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block19

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x28
	ret 4

 Block17:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x28
	ret 4

 Block18:
	lea ecx,[esi+0x14]
	call CChatBalloon::DestroyMiniRoomBalloon

 Block19:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x28
	ret 4
}
}
// CUser::RegisterAfterimage
_SUB_EXCEPTION_HANDLER(502D90)
__SUB_CLASS_THIS(00502D90, __thiscall, 16718,  CUser, void, long, int32_t, long, NakedParam<Ztl_bstr_t>, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_502D90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	mov ecx,dword ptr [esp+0x3C]
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	cmp ecx,ebx
	je Block47

 Block1:
	cmp dword ptr [ecx],ebx
	je Block46

 Block2:
	mov eax,dword ptr [ecx]
	cmp eax,ebx
	je Block46

 Block3:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,ebx
	je Block46

 Block4:
	mov ebp,dword ptr [esp+0x48]
	cmp ebp,ebx
	je Block19

 Block5:
	mov dword ptr [esp+0x48],ebx
	lea eax,[esp+0x18]
	push 0xAC9
	push eax
	mov byte ptr [esp+0x30],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,eax
	mov esi,dword ptr [esi+0x5B0]
	mov byte ptr [esp+0x28],2
	cmp esi,ebx
	je Block9

 Block6:
	cmp dword ptr [esi+4],ebx
	jne Block8

 Block7:
	mov ecx,dword ptr [esi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block8:
	mov esi,dword ptr [esi+4]
	jmp Block10

 Block9:
	xor esi,esi

 Block10:
	mov edi,dword ptr [edi]
	push ebp
	call get_element_by_charged_skillid
	push eax
	push esi
	lea edx,[esp+0x54]
	push edi
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0x14
	mov byte ptr [esp+0x28],1
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov edi,dword ptr [esp+0x48]
	push edi
	lea ecx,[esp+0x1C]
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x3C]
	cmp ecx,ebx
	je Block14

 Block13:
	call _xbstr_t::Data_t::Release

 Block14:
	mov esi,dword ptr [esp+0x18]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x3C],esi
	cmp esi,ebx
	je Block16

 Block15:
	lea eax,[esi+8]
	push eax
	call ebp
	mov ecx,esi
	call _xbstr_t::Data_t::Release

 Block16:
	mov byte ptr [esp+0x28],bl
	cmp edi,ebx
	je Block18

 Block17:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov esi,dword ptr [esp+0x14]
	jmp Block20

 Block19:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]

 Block20:
	lea ecx,[esi+0x39F8]
	call ZRef<CUser::AFTERIMAGEINFO>::_Alloc
	mov ecx,dword ptr [esi+0x39FC]
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [ecx],edx
	mov eax,dword ptr [esi+0x39FC]
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],ecx
	mov edx,dword ptr [esi+0x39FC]
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [edx+8],eax
	mov esi,dword ptr [esi+0x39FC]
	add esi,0xC
	lea ecx,[esp+0x3C]
	cmp esi,ecx
	je Block25

 Block21:
	mov ecx,dword ptr [esi]
	cmp ecx,ebx
	je Block23

 Block22:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],ebx

 Block23:
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [esi],edx
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebx
	je Block25

 Block24:
	add eax,8
	push eax
	call ebp

 Block25:
	mov eax,dword ptr [esp+0x40]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	call CActionMan::GetCharacterImgEntry
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	je Block30

 Block26:
	add eax,4
	push eax
	call edi
	test eax,eax
	jne Block29

 Block27:
	mov edx,dword ptr [esp+0x1C]
	add edx,4
	push edx
	call ebp
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebx
	je Block29

 Block28:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block29:
	mov dword ptr [esp+0x1C],ebx

 Block30:
	cmp esi,ebx
	je Block35

 Block31:
	mov eax,dword ptr [esi+0x38]
	lea ecx,[esi+0x38]
	cmp eax,ebx
	je Block35

 Block32:
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block35

 Block33:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,ebx
	je Block35

 Block34:
	mov eax,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [eax+0x39FC]
	add ecx,0x10
	call Ztl_bstr_t::op_assign

 Block35:
	mov ecx,dword ptr [esp+0x44]
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	lea edx,[esp+0x1C]
	push edx
	call CActionMan::GetCharacterImgEntry
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block40

 Block36:
	add eax,4
	push eax
	call edi
	test eax,eax
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x1C]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebx
	je Block39

 Block38:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block39:
	mov dword ptr [esp+0x1C],ebx

 Block40:
	cmp esi,ebx
	je Block45

 Block41:
	mov eax,dword ptr [esi+0x38]
	lea ecx,[esi+0x38]
	cmp eax,ebx
	je Block45

 Block42:
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block45

 Block43:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,ebx
	je Block45

 Block44:
	push ecx
	mov ecx,dword ptr [esp+0x18]
	mov ecx,dword ptr [ecx+0x39FC]
	add ecx,0x10
	call Ztl_bstr_t::op_assign

 Block45:
	mov ecx,dword ptr [esp+0x3C]
	cmp ecx,ebx
	je Block47

 Block46:
	call _xbstr_t::Data_t::Release

 Block47:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0x1C
}
}
// CUser::SetLayerZ
__SUB_CLASS_THIS0(004DFC10, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	mov ebp,ecx
	mov eax,dword ptr [ebp+0x19E4]
	push esi
	push edi
	test eax,eax
	je Block2

 Block1:
	lea edi,[eax-0xC]
	jmp Block3

 Block2:
	xor edi,edi

 Block3:
	mov eax,dword ptr [edi+0x1C0]
	mov ecx,dword ptr [edi+0x18]
	imul eax,0xBB8
	sub eax,dword ptr [edi+0x1C4]
	neg ecx
	sbb ecx,ecx
	and ecx,5
	lea eax,[eax+eax*4]
	add ecx,2
	lea esi,[ecx+eax*2-0x3FFF8ADA]
	mov eax,dword ptr [ebp+0x2E9C]
	test eax,eax
	je Block18

 Block4:
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	mov ebx,eax
	test ebx,ebx
	je Block32

 Block5:
	mov edx,dword ptr [edi+0x1BC]
	push edx
	add edi,0x1B4
	push edi
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	mov ecx,ebp
	test eax,eax
	je Block11

 Block6:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0xC]
	call edx
	test eax,eax
	je Block9

 Block7:
	lea edi,[ebx+0x88]
	mov ecx,edi
	call CAvatar::GetLayerZ
	cmp eax,esi
	jge Block9

 Block8:
	lea eax,[esi+1]
	push eax
	mov ecx,edi
	call CAvatar::SetLayerZ
	push esi
	lea ecx,[ebp+0x88]
	call CAvatar::SetLayerZ
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret

 Block9:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0xC]
	mov ecx,ebx
	call eax
	test eax,eax
	je Block32

 Block10:
	add esi,4
	push esi
	lea ecx,[ebp+0x88]
	call CAvatar::SetLayerZ
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret

 Block11:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0xC]
	call eax
	test eax,eax
	je Block14

 Block12:
	lea edi,[ebx+0x88]
	mov ecx,edi
	call CAvatar::GetLayerZ
	cmp eax,esi
	jle Block14

 Block13:
	lea ecx,[esi-1]
	push ecx
	mov ecx,edi
	call CAvatar::SetLayerZ
	push esi
	lea ecx,[ebp+0x88]
	call CAvatar::SetLayerZ
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret

 Block14:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0xC]
	mov ecx,ebx
	call eax
	test eax,eax
	je Block16

 Block15:
	add esi,6
	push esi
	lea ecx,[ebp+0x88]
	call CAvatar::SetLayerZ
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret

 Block16:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0xC]
	mov ecx,ebp
	call eax
	test eax,eax
	jne Block32

 Block17:
	inc esi
	push esi
	lea ecx,[ebp+0x88]
	call CAvatar::SetLayerZ
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret

 Block18:
	mov eax,dword ptr [ebp+0x2E98]
	test eax,eax
	je Block32

 Block19:
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	mov ebx,eax
	test ebx,ebx
	je Block32

 Block20:
	mov ecx,dword ptr [edi+0x1BC]
	push ecx
	add edi,0x1B4
	push edi
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block24

 Block21:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0xC]
	mov ecx,ebp
	call eax
	test eax,eax
	jne Block32

 Block22:
	lea ecx,[ebx+0x88]

 Block23:
	call CAvatar::GetLayerZ
	mov esi,eax
	inc esi
	push esi
	lea ecx,[ebp+0x88]
	call CAvatar::SetLayerZ
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret

 Block24:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0xC]
	mov ecx,ebx
	call eax
	test eax,eax
	je Block32

 Block25:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,ebx
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	test eax,eax
	je Block27

 Block26:
	lea esi,[eax-0xC]
	jmp Block28

 Block27:
	xor esi,esi

 Block28:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block30:
	mov ecx,esi
	call CVecCtrl::GetLadderOrRope
	lea ecx,[ebx+0x88]
	test eax,eax
	jne Block23

 Block31:
	call CAvatar::GetLayerZ
	mov esi,eax
	dec esi

 Block32:
	push esi
	lea ecx,[ebp+0x88]
	call CAvatar::SetLayerZ
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret
}
}
// CUser::ShowEffectRocketBoosterAttack
_SUB_EXCEPTION_HANDLER(4EF920)
__SUB_CLASS_THIS(004EF920, __thiscall, 16712,  CUser, void, const SKILLENTRY*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4EF920
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
	mov edi,ecx
	mov ebx,dword ptr [esp+0x34]
	xor ebp,ebp
	cmp ebx,ebp
	je Block24

 Block1:
	lea esi,[edi+0x88]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	or ecx,0xFFFFFFFF
	cmp eax,ecx
	jle Block3

 Block2:
	mov dword ptr [esi+0x5BC],ecx
	mov dword ptr [esi+0x5A8],ecx
	push 1
	mov ecx,esi
	call CAvatar::ClearActionLayer

 Block3:
	mov eax,dword ptr [edi+0x5E8]
	sub eax,0x217E76D
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFCB
	add eax,0x108
	push ebp
	mov dword ptr [edi+0x644],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push 0x64
	push 6
	mov ecx,esi
	call edx
	push offset _S_0__1
	lea ecx,[esp+0x1C]
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x38]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0x34],ebp
	call SKILLENTRY::GetEffectUOL
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,eax
	mov byte ptr [esp+0x34],1
	call Ztl_bstr_t::op_add_0
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebp
	je Block5

 Block4:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,dword ptr [esp+0x34]
	cmp ecx,ebp
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x34],ebp

 Block7:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block9

 Block8:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],ebp

 Block9:
	mov ecx,dword ptr [esp+0x18]
	mov bl,4
	mov byte ptr [esp+0x2C],bl
	cmp ecx,ebp
	je Block11

 Block10:
	call _xbstr_t::Data_t::Release

 Block11:
	cmp esi,ebp
	je Block22

 Block12:
	cmp dword ptr [esi],ebp
	je Block22

 Block13:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block22

 Block14:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,ebp
	je Block22

 Block15:
	mov eax,dword ptr [edi+0x1960]
	push ebp
	push ebp
	push ebp
	push 3
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block17:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x50],5
	call CUser::GetVecCtrl_0
	mov edi,dword ptr [edi+0x1960]
	mov byte ptr [esp+0x4C],6
	cmp edi,ebp
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[esp+0x58]
	push edx
	push edi
	mov dword ptr [esp+0x60],ebp
	call eax
	cmp eax,ebp
	jge Block21

 Block20:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block21:
	mov ecx,dword ptr [esp+0x58]
	mov edx,dword ptr [esi]
	push ecx
	mov byte ptr [esp+0x50],bl
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edx
	call CAnimationDisplayer::Effect_SkillUse

 Block22:
	push ebp
	push 0x2B
	push 0x217994C
	call play_skill_sound
	add esp,0xC
	cmp esi,ebp
	je Block24

 Block23:
	mov ecx,esi
	call _xbstr_t::Data_t::Release

 Block24:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 8
}
}
// CUser::GetType
__SUB_CLASS_THIS0(000BC060, __thiscall, 16657,  CUser, long) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CUser::OnTemporaryStatChanged
_SUB_EXCEPTION_HANDLER(500CB0)
__SUB_CLASS_THIS(00500CB0, __thiscall, 16617,  CUser, void, NakedParam<MY_UINT128>, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_500CB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x130
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x144]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x2C],esi
	xor ebp,ebp
	mov dword ptr [esp+0x90],ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+8]
	call edx
	mov edi,eax
	push offset CTS_COMBO_COUNTER
	lea eax,[esp+0x98]
	push eax
	lea ecx,[esp+0x15C]
	mov dword ptr [esp+0x90],edi
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block371

 Block1:
	mov ecx,dword ptr [edi+0x3EC]
	push ecx
	add edi,0x3E4
	push edi
	call _ZtlSecureFuseHelper<long>::call
	dec eax
	add esp,8
	mov dword ptr [esp+0x48],eax
	cmp dword ptr [esp+0x168],ebp
	je Block3

 Block2:
	cmp eax,0xFFFFFFFF
	je Block440

 Block3:
	push 5
	mov ecx,esi
	call CUser::GetAdditionalLayer
	cmp dword ptr [eax+0x14],ebp
	mov dword ptr [esp+0x28],eax
	sete al
	test al,al
	je Block295

 Block4:
	mov edi,dword ptr [esp+0x28]
	mov dword ptr [esp+0x44],edi
	mov dword ptr [esp+0x50],ebp
	lea edx,[esp+0x14]
	push 0x3D2
	push edx
	mov dword ptr [esp+0x154],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x54]
	push ecx
	push eax
	mov byte ptr [esp+0x158],1
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x14C],0
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],0xFFFFF830
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x14C],2
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	fldz
	lea eax,[esp+0x18]
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	mov esi,8
	mov byte ptr [esp+0x14C],0
	cmp word ptr [esp+0x18],si
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov dword ptr [esp+0x4C],ebp
	lea eax,[esp+0x14]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x154],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x50]
	push ecx
	push eax
	mov byte ptr [esp+0x158],4
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x14C],3
	cmp eax,ebp
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[esp+0x14]
	push edx
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x14C],5
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block16:
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x14C],6
	cmp ecx,ebp
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[esp+0x18]
	push edx
	call IWzVector2D::Putorigin
	mov byte ptr [esp+0x14C],5
	cmp word ptr [esp+0x18],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x14C],3
	cmp eax,ebp
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block24:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push ecx
	call esi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea eax,[esp+0x18]
	mov bl,7
	push eax
	mov byte ptr [esp+0x150],bl
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x14C],8
	cmp ecx,ebp
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0xFFFFFFD8
	push ebp
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x14C],bl
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov ebx,8
	mov byte ptr [esp+0x14C],3
	cmp word ptr [esp+0x34],bx
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],0x3E8
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x14C],9
	cmp ecx,ebp
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	fldz
	lea eax,[esp+0x18]
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	mov byte ptr [esp+0x14C],3
	cmp word ptr [esp+0x18],bx
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov dword ptr [esp+0x6C],ebp
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x150],0xA
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea edx,[esp+0x18]
	mov bl,0xB
	push edx
	mov byte ptr [esp+0x150],bl
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	push ebp
	push ebp
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xA0],esp
	push 0x9AD
	push eax
	mov byte ptr [esp+0x168],0xC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x160],0xD
	cmp dword ptr [_D_G_RM],ebp
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea ecx,[esp+0x68]
	push ecx
	mov byte ptr [esp+0x164],0xC
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x154],0xE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x70]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block53

 Block51:
	cmp eax,0x80004002
	je Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x14C],0xC
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	cmp eax,ebp
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block57:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x14C],bl
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x14C],0xA
	jne Block67

 Block62:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block64

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block64:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block65:
	lea edx,[esp+0x34]
	push edx
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block68

 Block66:
	push eax
	call _com_issue_error

 Block67:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x34]
	push ecx
	call ebx
	jmp Block65

 Block68:
	mov eax,dword ptr [esp+0x6C]
	mov ecx,0xD
	mov byte ptr [esp+0x14C],0xF
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block70

 Block69:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block70:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x14C],0x10
	cmp ecx,ebp
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 4
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x30]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x14]
	cmp esi,eax
	je Block77

 Block73:
	mov dword ptr [edi+0x14],eax
	cmp eax,ebp
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block75:
	cmp esi,ebp
	je Block77

 Block76:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block77:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block79

 Block78:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block79:
	mov esi,8
	mov byte ptr [esp+0x14C],0xF
	cmp word ptr [esp+0x18],si
	jne Block82

 Block80:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block83:
	mov byte ptr [esp+0x14C],0xA
	cmp word ptr [esp+0x34],si
	jne Block86

 Block84:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block87:
	mov eax,dword ptr [esp+0x4C]
	mov edx,0xD
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block89

 Block88:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block89:
	mov ecx,dword ptr [edi+0x14]
	mov byte ptr [esp+0x14C],0x11
	cmp ecx,ebp
	jne Block91

 Block90:
	push 0x80004003
	call _com_issue_error

 Block91:
	lea eax,[esp+0x18]
	push eax
	call IWzVector2D::Putorigin
	mov byte ptr [esp+0x14C],0xA
	cmp word ptr [esp+0x18],si
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block95:
	mov edi,dword ptr [esp+0x2C]
	lea eax,[esp+0x14]
	add edi,0x88
	push eax
	mov ecx,edi
	call CAvatar::GetLayerUnderFace
	mov eax,dword ptr [eax]
	mov bl,0x12
	mov ecx,0xD
	mov byte ptr [esp+0x14C],bl
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block97

 Block96:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block97:
	mov ecx,dword ptr [esp+0x28]
	mov ecx,dword ptr [ecx+0x14]
	mov byte ptr [esp+0x14C],0x13
	cmp ecx,ebp
	jne Block99

 Block98:
	push 0x80004003
	call _com_issue_error

 Block99:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Putoverlay
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x14C],bl
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x14C],0xA
	cmp eax,ebp
	je Block105

 Block104:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block105:
	mov esi,dword ptr [ZImports::_VariantInit]
	add dword ptr [esp+0x28],0x24
	lea ecx,[esp+0x34]
	push ecx
	call esi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block107

 Block106:
	push eax
	call _com_issue_error

 Block107:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x150],0x14
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block109

 Block108:
	push eax
	call _com_issue_error

 Block109:
	push ebp
	push ebp
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x24]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xA0],esp
	push 0x9AF
	mov bl,0x15
	push ecx
	mov byte ptr [esp+0x168],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x160],0x16
	cmp dword ptr [_D_G_RM],ebp
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	lea edx,[esp+0x68]
	mov byte ptr [esp+0x160],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x154],0x17
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x70]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block114

 Block112:
	cmp eax,0x80004002
	je Block114

 Block113:
	push eax
	call _com_issue_error

 Block114:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x14C],bl
	jne Block117

 Block115:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block118:
	mov ebx,8
	mov byte ptr [esp+0x14C],0x14
	cmp word ptr [esp+0x18],bx
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	cmp eax,ebp
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov byte ptr [esp+0x14C],0xA
	cmp word ptr [esp+0x34],bx
	jne Block125

 Block123:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebp
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block126:
	lea eax,[esp+0x34]
	push eax
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block128

 Block127:
	push eax
	call _com_issue_error

 Block128:
	mov eax,dword ptr [esp+0x6C]
	mov bl,0x18
	mov edx,0xD
	mov byte ptr [esp+0x14C],bl
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block130

 Block129:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block130:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x14C],0x19
	cmp ecx,ebp
	jne Block132

 Block131:
	push 0x80004003
	call _com_issue_error

 Block132:
	lea eax,[esp+0x34]
	push eax
	lea edx,[esp+0x1C]
	push edx
	push 4
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0x14]
	cmp esi,eax
	je Block137

 Block133:
	mov edx,ecx
	mov dword ptr [edx+0x14],eax
	cmp eax,ebp
	je Block135

 Block134:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block135:
	cmp esi,ebp
	je Block137

 Block136:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block137:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block139

 Block138:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block139:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x14C],bl
	jne Block142

 Block140:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block143:
	mov ebx,8
	mov byte ptr [esp+0x14C],0xA
	cmp word ptr [esp+0x34],bx
	jne Block146

 Block144:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	mov eax,dword ptr [esp+0x4C]
	mov edx,0xD
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block149

 Block148:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block149:
	mov esi,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi+0x14]
	mov byte ptr [esp+0x14C],0x1A
	cmp ecx,ebp
	jne Block151

 Block150:
	push 0x80004003
	call _com_issue_error

 Block151:
	lea eax,[esp+0x18]
	push eax
	call IWzVector2D::Putorigin
	mov byte ptr [esp+0x14C],0xA
	cmp word ptr [esp+0x18],bx
	jne Block154

 Block152:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block155:
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CAvatar::GetLayerUnderFace
	mov eax,dword ptr [eax]
	mov bl,0x1B
	mov ecx,0xD
	mov byte ptr [esp+0x14C],bl
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block157

 Block156:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block157:
	mov ecx,dword ptr [esi+0x14]
	mov byte ptr [esp+0x14C],0x1C
	cmp ecx,ebp
	jne Block159

 Block158:
	push 0x80004003
	call _com_issue_error

 Block159:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Putoverlay
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x14C],bl
	jne Block162

 Block160:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block163:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x14C],0xA
	cmp eax,ebp
	je Block165

 Block164:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block165:
	add esi,0x24
	mov dword ptr [esp+0x28],esi
	mov dword ptr [esp+0x74],1

 Block166:
	mov edi,dword ptr [esp+0x74]
	cmp edi,5
	jle Block168

 Block167:
	add edi,0xFFFFFFFB

 Block168:
	mov dword ptr [esp+0x70],ebp
	mov dword ptr [esp+0x68],ebp
	lea ecx,[esp+0xE8]
	push 0x3D2
	push ecx
	mov byte ptr [esp+0x154],0x1E
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea edx,[esp+0x74]
	push edx
	push eax
	mov byte ptr [esp+0x158],0x1F
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0xF4]
	add esp,0xC
	mov byte ptr [esp+0x14C],0x1E
	cmp eax,ebp
	je Block170

 Block169:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block170:
	lea eax,[esp+0xD0]
	push 0x3D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x6C]
	push ecx
	push eax
	mov byte ptr [esp+0x158],0x20
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0xDC]
	add esp,0xC
	mov byte ptr [esp+0x14C],0x1E
	cmp eax,ebp
	je Block172

 Block171:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block172:
	mov eax,dword ptr [esp+0x50]
	mov edx,0xD
	mov word ptr [esp+0xAC],dx
	mov dword ptr [esp+0xB4],eax
	cmp eax,ebp
	je Block174

 Block173:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block174:
	mov ecx,dword ptr [esp+0x70]
	mov byte ptr [esp+0x14C],0x21
	cmp ecx,ebp
	je Block7

 Block175:
	mov ebx,dword ptr [esp+0xAC]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0xC0]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0xC4]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0xC8]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov esi,ecx
	call eax
	cmp eax,ebp
	jge Block177

 Block176:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block177:
	cmp word ptr [esp+0xAC],8
	mov byte ptr [esp+0x14C],0x1E
	jne Block180

 Block178:
	mov eax,dword ptr [esp+0xB4]
	xor ecx,ecx
	mov word ptr [esp+0xAC],cx
	cmp eax,ebp
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea edx,[esp+0xAC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block181:
	mov ecx,dword ptr [esp+0x2C]
	lea eax,[esp+0xE4]
	push eax
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x14C],0x22
	mov word ptr [esp+0xBC],cx
	mov dword ptr [esp+0xC4],eax
	cmp eax,ebp
	je Block183

 Block182:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block183:
	mov ecx,dword ptr [esp+0x68]
	mov byte ptr [esp+0x14C],0x23
	cmp ecx,ebp
	je Block7

 Block184:
	mov ebx,dword ptr [esp+0xBC]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0xD0]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0xD4]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0xD8]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov esi,ecx
	call eax
	cmp eax,ebp
	jge Block186

 Block185:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block186:
	mov esi,8
	mov byte ptr [esp+0x14C],0x22
	cmp word ptr [esp+0xBC],si
	jne Block189

 Block187:
	mov eax,dword ptr [esp+0xC4]
	xor ecx,ecx
	mov word ptr [esp+0xBC],cx
	cmp eax,ebp
	je Block190

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block190

 Block189:
	lea edx,[esp+0xBC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block190:
	mov eax,dword ptr [esp+0xE4]
	mov byte ptr [esp+0x14C],0x1E
	cmp eax,ebp
	je Block192

 Block191:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block192:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x124]
	push eax
	call ebx
	lea ecx,[esp+0x124]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block25

 Block193:
	lea edx,[esp+0x114]
	push edx
	mov byte ptr [esp+0x150],0x24
	call ebx
	lea eax,[esp+0x114]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block25

 Block194:
	mov ecx,dword ptr [esp+0x68]
	mov byte ptr [esp+0x14C],0x25
	cmp ecx,ebp
	je Block7

 Block195:
	lea edx,[esp+0x124]
	push edx
	lea eax,[esp+0x118]
	push eax
	push 0xFFFFFFD8
	push ebp
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x14C],0x24
	cmp word ptr [esp+0x114],si
	jne Block198

 Block196:
	mov eax,dword ptr [esp+0x11C]
	xor ecx,ecx
	mov word ptr [esp+0x114],cx
	cmp eax,ebp
	je Block199

 Block197:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block199

 Block198:
	lea edx,[esp+0x114]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block199:
	mov byte ptr [esp+0x14C],0x1E
	cmp word ptr [esp+0x124],si
	jne Block202

 Block200:
	xor eax,eax
	mov word ptr [esp+0x124],ax
	mov eax,dword ptr [esp+0x12C]
	cmp eax,ebp
	je Block203

 Block201:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block203

 Block202:
	lea ecx,[esp+0x124]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block203:
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebp
	je Block7

 Block204:
	mov ecx,dword ptr [esp+0x70]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x98]
	push 0x64
	push 0x64
	push 0x64
	push 0x64
	push ecx
	push eax
	mov esi,eax
	call edx
	cmp eax,ebp
	jge Block206

 Block205:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block206:
	lea eax,[esp+0xF4]
	push eax
	call ebx
	lea ecx,[esp+0xF4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block25

 Block207:
	lea edx,[esp+0x104]
	mov bl,0x26
	push edx
	mov byte ptr [esp+0x150],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x104]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block25

 Block208:
	mov esi,dword ptr [esp+0x70]
	mov byte ptr [esp+0x14C],0x27
	cmp esi,ebp
	je Block7

 Block209:
	fld qword ptr [_D_PI__44]
	lea ecx,[esp+0xF4]
	fadd st(0),st
	push ecx
	lea edx,[esp+0x108]
	push edx
	fimul dword ptr [esp+0x7C]
	fdiv qword ptr [__real_4014000000000000]
	fst qword ptr [esp+0xAC]
	call __CIsin
	fmul qword ptr [__real_4044000000000000]
	call __ftol2_sse
	fld qword ptr [esp+0xAC]
	push eax
	call __CIcos
	fmul qword ptr [__real_4044000000000000]
	call __ftol2_sse
	push eax
	mov ecx,esi
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x104],8
	mov byte ptr [esp+0x14C],bl
	jne Block212

 Block210:
	xor eax,eax
	mov word ptr [esp+0x104],ax
	mov eax,dword ptr [esp+0x10C]
	cmp eax,ebp
	je Block213

 Block211:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block213

 Block212:
	lea ecx,[esp+0x104]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block213:
	cmp word ptr [esp+0xF4],8
	mov byte ptr [esp+0x14C],0x1E
	jne Block216

 Block214:
	mov eax,dword ptr [esp+0xFC]
	xor edx,edx
	mov word ptr [esp+0xF4],dx
	cmp eax,ebp
	je Block217

 Block215:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block217

 Block216:
	lea eax,[esp+0xF4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block217:
	mov dword ptr [esp+0x64],ebp
	cmp dword ptr [esp+0x74],5
	mov byte ptr [esp+0x14C],0x28
	jg Block219

 Block218:
	lea ecx,[esp+0xCC]
	push 0x9AC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x6C]
	push edx
	mov byte ptr [esp+0x158],0x29
	call ZXString16::Format
	mov eax,dword ptr [esp+0xD8]
	jmp Block220

 Block219:
	lea eax,[esp+0xF0]
	push 0x9AE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x158],0x2A
	call ZXString16::Format
	mov eax,dword ptr [esp+0xFC]

 Block220:
	add esp,0xC
	mov byte ptr [esp+0x14C],0x28
	cmp eax,ebp
	je Block222

 Block221:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block222:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xD4]
	push edx
	call esi
	lea eax,[esp+0xD4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block25

 Block223:
	lea ecx,[esp+0x134]
	push ecx
	mov byte ptr [esp+0x150],0x2B
	call esi
	lea edx,[esp+0x134]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block25

 Block224:
	mov edi,dword ptr [esp+0x64]
	push ebp
	push ebp
	lea eax,[esp+0xDC]
	push eax
	lea ecx,[esp+0x140]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x2C
	push edi
	mov byte ptr [esp+0x164],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x160],0x2D
	cmp dword ptr [_D_G_RM],ebp
	je Block7

 Block225:
	lea edx,[esp+0xA8]
	mov byte ptr [esp+0x160],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x154],0x2E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block227

 Block226:
	cmp eax,0x80004002
	jne Block25

 Block227:
	mov esi,8
	mov byte ptr [esp+0x14C],0x30
	cmp word ptr [esp+0x94],si
	jne Block230

 Block228:
	xor eax,eax
	mov word ptr [esp+0x94],ax
	mov eax,dword ptr [esp+0x9C]
	cmp eax,ebp
	je Block231

 Block229:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block231

 Block230:
	lea ecx,[esp+0x94]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block231:
	mov byte ptr [esp+0x14C],0x31
	cmp word ptr [esp+0x134],si
	jne Block234

 Block232:
	mov eax,dword ptr [esp+0x13C]
	xor edx,edx
	mov word ptr [esp+0x134],dx
	cmp eax,ebp
	je Block235

 Block233:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block235

 Block234:
	lea eax,[esp+0x134]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block235:
	mov byte ptr [esp+0x14C],0x32
	cmp word ptr [esp+0xD4],si
	jne Block238

 Block236:
	mov eax,dword ptr [esp+0xDC]
	xor ecx,ecx
	mov word ptr [esp+0xD4],cx
	cmp eax,ebp
	je Block239

 Block237:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block239

 Block238:
	lea edx,[esp+0xD4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block239:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block25

 Block240:
	mov edx,3
	mov word ptr [esp+0x78],dx
	mov dword ptr [esp+0x80],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x14C],0x34
	cmp ecx,ebp
	je Block7

 Block241:
	lea eax,[esp+0x54]
	push eax
	lea edx,[esp+0x7C]
	push edx
	push 4
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x108]
	push eax
	call IWzGr2D::CreateLayer
	mov ebx,dword ptr [esp+0x28]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x14]
	cmp esi,eax
	je Block246

 Block242:
	mov dword ptr [ebx+0x14],eax
	cmp eax,ebp
	je Block244

 Block243:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block244:
	cmp esi,ebp
	je Block246

 Block245:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block246:
	mov eax,dword ptr [esp+0xEC]
	cmp eax,ebp
	je Block248

 Block247:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block248:
	mov esi,8
	mov byte ptr [esp+0x14C],0x33
	cmp word ptr [esp+0x78],si
	jne Block251

 Block249:
	mov eax,dword ptr [esp+0x80]
	xor ecx,ecx
	mov word ptr [esp+0x78],cx
	cmp eax,ebp
	je Block252

 Block250:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block252

 Block251:
	lea edx,[esp+0x78]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block252:
	mov byte ptr [esp+0x14C],0x32
	cmp word ptr [esp+0x54],si
	jne Block255

 Block253:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	je Block256

 Block254:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block256

 Block255:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block256:
	mov eax,dword ptr [esp+0x68]
	mov edx,0xD
	mov word ptr [esp+0x34],dx
	mov dword ptr [esp+0x3C],eax
	cmp eax,ebp
	je Block258

 Block257:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block258:
	mov esi,dword ptr [ebx+0x14]
	mov byte ptr [esp+0x14C],0x35
	cmp esi,ebp
	je Block7

 Block259:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebp
	jge Block261

 Block260:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block261:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x14C],0x32
	jne Block264

 Block262:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebp
	je Block265

 Block263:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block265

 Block264:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block265:
	mov ecx,dword ptr [esp+0x2C]
	lea eax,[esp+0x8C]
	push eax
	add ecx,0x88
	call CAvatar::GetLayerUnderFace
	mov eax,dword ptr [eax]
	mov bl,0x36
	mov ecx,0xD
	mov byte ptr [esp+0x14C],bl
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block267

 Block266:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block267:
	mov ecx,dword ptr [esp+0x28]
	mov esi,dword ptr [ecx+0x14]
	mov byte ptr [esp+0x14C],0x37
	cmp esi,ebp
	je Block7

 Block268:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x34]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,ebp
	jge Block270

 Block269:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block270:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x14C],bl
	jne Block273

 Block271:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block274

 Block272:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block274

 Block273:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block274:
	mov eax,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x14C],0x32
	cmp eax,ebp
	je Block276

 Block275:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block276:
	mov esi,dword ptr [esp+0x14]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xA8],esp
	mov dword ptr [eax],esi
	cmp esi,ebp
	je Block278

 Block277:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block278:
	mov eax,dword ptr [esp+0x2C]
	mov eax,dword ptr [eax+0x14]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xAC],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block280

 Block279:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block280:
	call CAnimationDisplayer::LoadCanvas
	add esp,8
	mov byte ptr [esp+0x14C],0x28
	cmp esi,ebp
	je Block282

 Block281:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block282:
	mov byte ptr [esp+0x14C],0x1E
	cmp edi,ebp
	je Block284

 Block283:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block284:
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x14C],0x1D
	cmp eax,ebp
	je Block286

 Block285:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block286:
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x14C],0xA
	cmp eax,ebp
	je Block288

 Block287:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block288:
	mov eax,dword ptr [esp+0x74]
	add dword ptr [esp+0x28],0x24
	inc eax
	cmp eax,0xA
	mov dword ptr [esp+0x74],eax
	jle Block166

 Block289:
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x14C],3
	cmp eax,ebp
	je Block291

 Block290:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block291:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x14C],0
	cmp eax,ebp
	je Block293

 Block292:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block293:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x14C],0xFFFFFFFF
	cmp eax,ebp
	je Block295

 Block294:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block295:
	mov eax,dword ptr [esp+0x48]
	cmp dword ptr [esp+0x168],ebp
	jne Block317

 Block296:
	cmp eax,ebp
	jne Block318

 Block297:
	mov edi,dword ptr [esp+0x28]
	mov esi,dword ptr [edi+0x14]
	add edi,0x14
	cmp esi,ebp
	jne Block299

 Block298:
	push 0x80004003
	call _com_issue_error

 Block299:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call edx
	cmp eax,ebp
	jge Block301

 Block300:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block301:
	mov ebx,dword ptr [esp+0x14]
	xor esi,esi
	lea ebp,[esi+0x38]

 Block302:
	lea eax,[esp+0x78]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x78]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block25

 Block303:
	mov eax,0x2AAAAAAB
	imul esi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	add edx,edx
	mov eax,esi
	sub eax,edx
	mov ecx,eax
	shl ecx,4
	sub ecx,eax
	lea eax,[ebx+ecx*4+0xC8]
	mov edx,3
	mov dword ptr [esp+0x14C],ebp
	mov word ptr [esp+0x54],dx
	mov dword ptr [esp+0x5C],eax
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x14C],0x39
	test ecx,ecx
	je Block7

 Block304:
	lea eax,[esp+0x44]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x14C],0x3A
	test ecx,ecx
	je Block7

 Block305:
	lea edx,[esp+0x78]
	push edx
	lea eax,[esp+0x58]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x14C],0x39
	test eax,eax
	je Block307

 Block306:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block307:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x14C],0x38
	jne Block310

 Block308:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block311

 Block309:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block311

 Block310:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block311:
	cmp word ptr [esp+0x78],8
	mov dword ptr [esp+0x14C],0xFFFFFFFF
	jne Block314

 Block312:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	test eax,eax
	je Block315

 Block313:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block315

 Block314:
	lea eax,[esp+0x78]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block315:
	inc esi
	add edi,0x24
	cmp esi,0xC
	jl Block302

 Block316:
	xor ebp,ebp
	jmp Block371

 Block317:
	cmp eax,ebp

 Block318:
	mov edi,dword ptr [esp+0x28]
	mov esi,dword ptr [edi+0x14]
	jg Block326

 Block319:
	cmp esi,ebp
	jne Block321

 Block320:
	push 0x80004003
	call _com_issue_error

 Block321:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFF
	push esi
	call edx
	cmp eax,ebp
	jge Block323

 Block322:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block323:
	mov esi,dword ptr [edi+0x38]
	add edi,0x24
	mov dword ptr [esp+0x28],edi
	cmp esi,ebp
	jne Block325

 Block324:
	push 0x80004003
	call _com_issue_error

 Block325:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFF
	push esi
	call ecx
	jmp Block341

 Block326:
	cmp eax,5
	jg Block334

 Block327:
	cmp esi,ebp
	jne Block329

 Block328:
	push 0x80004003
	call _com_issue_error

 Block329:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,ebp
	jge Block331

 Block330:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block331:
	mov esi,dword ptr [edi+0x38]
	add edi,0x24
	mov dword ptr [esp+0x28],edi
	cmp esi,ebp
	jne Block333

 Block332:
	push 0x80004003
	call _com_issue_error

 Block333:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFF
	push esi
	call edx
	jmp Block341

 Block334:
	cmp esi,ebp
	jne Block336

 Block335:
	push 0x80004003
	call _com_issue_error

 Block336:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block338

 Block337:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block338:
	mov esi,dword ptr [edi+0x38]
	add edi,0x24
	mov dword ptr [esp+0x28],edi
	cmp esi,ebp
	jne Block340

 Block339:
	push 0x80004003
	call _com_issue_error

 Block340:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax

 Block341:
	cmp eax,ebp
	jge Block343

 Block342:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block343:
	mov edi,dword ptr [esp+0x28]
	add edi,0x24
	mov ebx,1
	add edi,0x14

 Block344:
	cmp dword ptr [esp+0x48],ebx
	jne Block357

 Block345:
	cmp dword ptr [esp+0x168],ebp
	jne Block357

 Block346:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x78]
	push ecx
	call esi
	lea edx,[esp+0x78]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block25

 Block347:
	lea eax,[esp+0x54]
	push eax
	mov dword ptr [esp+0x150],0x3B
	call esi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block25

 Block348:
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x14C],0x3C
	cmp ecx,ebp
	je Block7

 Block349:
	lea edx,[esp+0x78]
	push edx
	lea eax,[esp+0x58]
	push eax
	push ebp
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x14C],0x3B
	cmp word ptr [esp+0x54],si
	jne Block352

 Block350:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	cmp eax,ebp
	je Block353

 Block351:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block353

 Block352:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block353:
	mov dword ptr [esp+0x14C],0xFFFFFFFF
	cmp word ptr [esp+0x78],si
	jne Block356

 Block354:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	cmp eax,ebp
	je Block357

 Block355:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block357

 Block356:
	lea ecx,[esp+0x78]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block357:
	mov eax,dword ptr [esp+0x48]
	lea edx,[ebx+5]
	cmp edx,eax
	jle Block361

 Block358:
	cmp ebx,eax
	jg Block361

 Block359:
	mov esi,dword ptr [edi]
	cmp esi,ebp
	je Block7

 Block360:
	push 0xFFFFFFFF
	jmp Block368

 Block361:
	mov esi,dword ptr [edi]
	cmp esi,ebp
	je Block7

 Block362:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x114]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],ebp
	call ecx
	cmp eax,ebp
	jge Block364

 Block363:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block364:
	cmp dword ptr [esp+0x14],ebp
	je Block366

 Block365:
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [edx+0x2EC4],1
	jmp Block370

 Block366:
	mov esi,dword ptr [edi]
	cmp esi,ebp
	je Block7

 Block367:
	push 0xFFFFFF

 Block368:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push esi
	call ecx
	cmp eax,ebp
	jge Block370

 Block369:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block370:
	inc ebx
	add edi,0x24
	cmp ebx,0xA
	jle Block344

 Block371:
	push offset CTS_SPEED
	lea edx,[esp+0x98]
	push edx
	lea ecx,[esp+0x15C]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block379

 Block372:
	mov esi,dword ptr [esp+0x2C]
	mov eax,dword ptr [esi+0x640]
	add esi,0x88
	push ebp
	push eax
	mov ecx,esi
	call CAvatar::MoveAction2RawAction
	mov ecx,esi
	mov edi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block374

 Block373:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	jmp Block375

 Block374:
	mov eax,edi

 Block375:
	cmp eax,ebp
	jl Block377

 Block376:
	cmp eax,1
	jle Block378

 Block377:
	cmp eax,0x7C
	jne Block379

 Block378:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push ebp
	push 0x64
	push 6
	mov ecx,esi
	call edx

 Block379:
	push offset CTS_SHADOW_PARTNER
	lea eax,[esp+0x98]
	push eax
	lea ecx,[esp+0x15C]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block384

 Block380:
	mov esi,dword ptr [esp+0x88]
	mov ecx,dword ptr [esi+0x4B8]
	push ecx
	lea edx,[esi+0x4B0]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x4215FA
	jne Block383

 Block381:
	mov eax,dword ptr [esi+0x4AC]
	push eax
	add esi,0x4A4
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block383

 Block382:
	call get_update_time
	mov ecx,dword ptr [esp+0x2C]
	add eax,0x3E8
	mov dword ptr [ecx+0x3A90],eax

 Block383:
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [ecx+0x88]
	mov eax,dword ptr [edx+0x14]
	push ebp
	add ecx,0x88
	push 0x64
	push 6
	call eax

 Block384:
	mov ebx,dword ptr [esp+0x88]
	mov ecx,dword ptr [ebx+0x2B4]
	mov edi,dword ptr [esp+0x2C]
	mov esi,dword ptr [edi+0x5E8]
	push ecx
	lea edx,[ebx+0x2AC]
	push edx
	add edi,0x88
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov ecx,edi
	call CAvatar::SetMechanicMode
	push offset CTS_MORPH
	lea eax,[esp+0x98]
	push eax
	lea ecx,[esp+0x15C]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block386

 Block385:
	push ebp
	mov ecx,edi
	call CAvatar::SetMechanicMode
	mov ecx,dword ptr [ebx+0x5A8]
	push ebp
	push ecx
	lea edx,[ebx+0x5A0]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x38]
	add esp,8
	push eax
	call CUser::SetMorphed

 Block386:
	push offset CTS_GHOST
	lea eax,[esp+0x98]
	push eax
	lea ecx,[esp+0x15C]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block388

 Block387:
	push ebp
	mov ecx,edi
	call CAvatar::SetMechanicMode
	mov ecx,dword ptr [ebx+0x5CC]
	push ebp
	push ecx
	add ebx,0x5C4
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [esp+0x38]
	add esp,8
	push eax
	mov ecx,ebx
	call CUser::SetGhostState
	jmp Block389

 Block388:
	mov ebx,dword ptr [esp+0x2C]

 Block389:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0xC]
	mov ecx,ebx
	call eax
	test eax,eax
	je Block391

 Block390:
	mov eax,dword ptr [ebx+0x5E8]
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push eax
	push esi
	call CUserLocal::ApplyMechanicMode

 Block391:
	push offset CTS_ENERGY_CHARGED
	lea ecx,[esp+0x98]
	push ecx
	lea ecx,[esp+0x15C]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	mov ebx,dword ptr [esp+0x2C]
	test al,al
	je Block430

 Block392:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x40]
	mov ecx,ebx
	call eax
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	dec ecx
	neg ecx
	sbb ecx,ecx
	and ecx,0xFF67908D
	add ecx,0xE66864
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	call CSkillInfo::GetSkill
	push 0xF
	mov ecx,ebx
	mov esi,eax
	call CUser::GetAdditionalLayer
	mov edx,dword ptr [esp+0x88]
	mov ecx,dword ptr [edx+0x13BC]
	mov ebp,eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+4]
	call edx
	test al,al
	je Block409

 Block393:
	cmp dword ptr [esp+0x168],0
	mov dword ptr [ebx+0x3A10],0
	jne Block430

 Block394:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+4]
	mov ecx,ebx
	call edx
	movzx eax,al
	push eax
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,esi
	call SKILLENTRY::GetEffectUOL
	push offset _S_0__2
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x150],0x3D
	call _xbstr_t::_ctor_0
	xor ebp,ebp
	push ebp
	push ebp
	push ebp
	push 3
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	mov edx,esp
	mov dword ptr [esp+0xC0],esp
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x16C],0x3E
	call CAvatar::GetLayerUnderFace
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x170],0x3F
	call CUser::GetVecCtrl_0
	lea ecx,[esp+0x68]
	push ecx
	lea edx,[esp+0x88]
	push edx
	lea ecx,[esp+0x78]
	mov byte ptr [esp+0x174],0x40
	call Ztl_bstr_t::op_add_0
	mov edi,eax
	mov esi,dword ptr [ebx+0x1960]
	mov byte ptr [esp+0x16C],0x41
	cmp esi,ebp
	jne Block396

 Block395:
	push 0x80004003
	call _com_issue_error

 Block396:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x34]
	push ecx
	push esi
	mov dword ptr [esp+0x3C],ebp
	call edx
	cmp eax,ebp
	jge Block398

 Block397:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block398:
	mov edi,dword ptr [edi]
	cmp edi,ebp
	je Block400

 Block399:
	mov edi,dword ptr [edi]
	jmp Block401

 Block400:
	xor edi,edi

 Block401:
	mov eax,dword ptr [esp+0x34]
	push eax
	mov byte ptr [esp+0x170],0x42
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edi
	call CAnimationDisplayer::Effect_SkillUse
	mov ecx,dword ptr [esp+0x64]
	cmp ecx,ebp
	je Block403

 Block402:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x64],ebp

 Block403:
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x14C],0x3D
	cmp ecx,ebp
	je Block405

 Block404:
	call _xbstr_t::Data_t::Release

 Block405:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x40]
	mov ecx,ebx
	call eax
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	dec ecx
	neg ecx
	sbb ecx,ecx
	push ebp
	and ecx,0xFF67908D
	add ecx,0xE66864
	push 0x2A
	push ecx
	call play_skill_sound
	add esp,0xC
	call get_update_time
	mov dword ptr [ebx+0x3A10],eax
	cmp eax,ebp
	jne Block407

 Block406:
	mov dword ptr [ebx+0x3A10],1

 Block407:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr [esp+0x14C],0xFFFFFFFF
	cmp ecx,ebp
	je Block430

 Block408:
	call _xbstr_t::Data_t::Release
	jmp Block430

 Block409:
	cmp dword ptr [ebp+0x14],0
	sete al
	test al,al
	sete al
	test al,al
	je Block417

 Block410:
	mov ecx,dword ptr [ebp+0x14]
	test ecx,ecx
	jne Block412

 Block411:
	push 0x80004003
	call _com_issue_error

 Block412:
	lea edx,[esp+0x44]
	push edx
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x14C],0x43
	mov dword ptr [esp+0x90],1
	test esi,esi
	jne Block414

 Block413:
	push 0x80004003
	call _com_issue_error

 Block414:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block416

 Block415:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block416:
	cmp dword ptr [esp+0x14],0
	mov byte ptr [esp+0x33],1
	jne Block418

 Block417:
	mov byte ptr [esp+0x33],0

 Block418:
	or edi,0xFFFFFFFF
	test byte ptr [esp+0x90],1
	mov dword ptr [esp+0x14C],edi
	je Block421

 Block419:
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block421

 Block420:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block421:
	cmp byte ptr [esp+0x33],0
	je Block430

 Block422:
	mov ecx,dword ptr [ebp+0x14]
	test ecx,ecx
	jne Block424

 Block423:
	push 0x80004003
	call _com_issue_error

 Block424:
	lea eax,[esp+0x44]
	push eax
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x14C],0x44
	test esi,esi
	jne Block426

 Block425:
	push 0x80004003
	call _com_issue_error

 Block426:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x40]
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block428

 Block427:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block428:
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x14C],edi
	test eax,eax
	je Block430

 Block429:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block430:
	push offset CTS_FLYING
	lea eax,[esp+0xD8]
	push eax
	lea ecx,[esp+0x15C]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block439

 Block431:
	mov eax,dword ptr [esp+0x88]
	mov ecx,dword ptr [eax+0xE10]
	push ecx
	add eax,0xE08
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	mov eax,dword ptr [ebx+0x19E4]
	je Block435

 Block432:
	test eax,eax
	je Block434

 Block433:
	add eax,0xFFFFFFF4
	mov dword ptr [eax+0x2F8],1
	jmp Block439

 Block434:
	xor eax,eax
	mov dword ptr [eax+0x2F8],1
	jmp Block439

 Block435:
	test eax,eax
	je Block437

 Block436:
	add eax,0xFFFFFFF4
	jmp Block438

 Block437:
	xor eax,eax

 Block438:
	mov dword ptr [eax+0x2F8],0

 Block439:
	mov ecx,ebx
	call CUser::UpdateFlyingWingEffect
	mov edx,dword ptr [esp+0x164]
	push 0
	push edx
	mov ecx,ebx
	call CUser::UpdateAffectedSkillList

 Block440:
	mov ecx,dword ptr [esp+0x144]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x13C
	ret 0x18
}
}
// CUser::PrepareMirrorActionLayer
_SUB_EXCEPTION_HANDLER(4DF7E0)
__SUB_CLASS_THIS0(004DF7E0, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DF7E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x84]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	cmp dword ptr [ebp+0x638],0
	jne Block37

 Block1:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	call edx
	mov ecx,eax
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x2B
	jne Block37

 Block2:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	mov ecx,ebp
	call eax
	lea esi,[ebp+0x88]
	lea ecx,[esp+0x20]
	mov edi,eax
	mov eax,dword ptr [esi+0x5B8]
	push ecx
	push eax
	mov ecx,esi
	call CAvatar::MoveAction2RawAction
	mov ecx,esi
	mov ebx,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block4

 Block3:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	mov esi,eax
	mov dword ptr [esp+0x14],esi
	jmp Block5

 Block4:
	mov dword ptr [esp+0x14],ebx
	mov esi,ebx

 Block5:
	mov edx,dword ptr [edi+0x4AC]
	push edx
	lea eax,[edi+0x4A4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block33

 Block6:
	mov ecx,dword ptr [edi+0x4B8]
	push ecx
	lea edx,[edi+0x4B0]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x4215FA
	jne Block33

 Block7:
	mov ecx,edi
	call SecondaryStat::IsRidingVehicle
	test eax,eax
	jne Block33

 Block8:
	cmp dword ptr [ebp+0x5D0],eax
	setne al
	push eax
	push esi
	call is_back_action
	add esp,8
	test eax,eax
	jne Block33

 Block9:
	push esi
	call is_alert_back_action
	add esp,4
	test eax,eax
	jne Block33

 Block10:
	cmp esi,0x30
	je Block33

 Block11:
	xor edi,edi
	mov dword ptr [esp+0x1C],edi
	lea esi,[ebp+0x3A94]

 Block12:
	push edi
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebp
	call CUser::GetMirrorSrcLayer
	cmp dword ptr [esi],0
	mov dword ptr [esp+0x8C],0
	sete al
	test al,al
	jne Block14

 Block13:
	lea ecx,[ebp+0x1960]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	mov ecx,esi
	mov ebx,eax
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	cmp eax,ebx
	je Block28

 Block14:
	mov eax,dword ptr [ebp+0x19B4]
	sub eax,0x64
	neg eax
	sbb eax,eax
	and eax,2
	mov edx,3
	mov word ptr [esp+0x34],dx
	mov dword ptr [esp+0x3C],eax
	mov eax,edx
	xor ebx,ebx
	mov word ptr [esp+0x24],ax
	mov dword ptr [esp+0x2C],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x8C],2
	cmp ecx,ebx
	je Block32

 Block15:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0xFFFFFFFE
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[esp+0x3C]
	push edx
	call IWzGr2D::CreateLayer
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	lea ecx,[esp+0x24]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x8C],0
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+0x1960]
	mov ecx,0xD
	mov word ptr [esp+0x44],cx
	mov dword ptr [esp+0x4C],eax
	cmp eax,ebx
	je Block19

 Block18:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block19:
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x90],3
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putoverlay
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x8C],0
	call Ztl_variant_t::~Ztl_variant_t
	push 0xD0808080
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putcolor
	xor edi,edi
	cmp dword ptr [ebp+0x5D0],edi
	jne Block22

 Block20:
	cmp dword ptr [ebp+0x5E4],edi
	jne Block22

 Block21:
	xor eax,eax
	jmp Block23

 Block22:
	mov eax,1

 Block23:
	mov edx,dword ptr [esp+0x14]
	push eax
	push edx
	call is_back_action
	add esp,8
	test eax,eax
	je Block25

 Block24:
	mov ebx,0x32
	jmp Block26

 Block25:
	mov eax,dword ptr [ebp+0x640]
	and al,1
	movsx edi,al
	neg edi
	sbb edi,edi
	and edi,0x64
	add edi,0xFFFFFFCE

 Block26:
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block32

 Block27:
	lea edx,[esp+0x74]
	push edx
	call IWzVector2D::Getorigin
	push offset _D_VTEMPTY
	mov ecx,esi
	mov byte ptr [esp+0x90],4
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Putorigin
	lea eax,[esp+0x74]
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Putorigin
	push offset _D_VTMISSING
	lea ecx,[esp+0x68]
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x8C],5
	call IWzVector2D::GetcurrentTime
	add eax,0xC8
	mov ecx,3
	mov word ptr [esp+0x54],cx
	mov dword ptr [esp+0x5C],eax
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x58]
	push eax
	push ebx
	push edi
	mov ecx,esi
	mov byte ptr [esp+0x9C],6
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x54]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x8C],4
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x1960]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putflip
	lea ecx,[esp+0x74]
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [esp+0x1C]

 Block28:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	inc edi
	add esi,4
	cmp edi,5
	mov dword ptr [esp+0x1C],edi
	jl Block12

 Block31:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x7C
	ret

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	add ebp,0x3A94
	mov esi,5
	lea ecx,[ecx]

 Block34:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block36

 Block35:
	mov dword ptr [ebp],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	add ebp,4
	sub esi,1
	jne Block34

 Block37:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x7C
	ret
}
}
// CGrenade::GetPos
__SUB_CLASS_THIS0(004E2E70, __thiscall, 81215,  CGrenade, const tagPOINT) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0x24]
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [ecx+0x28]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ecx
	ret 4
}
}
// CUser::LoadMoreWildEffect
_SUB_EXCEPTION_HANDLER(4F6310)
__SUB_CLASS_THIS(004F6310, __thiscall, 16615,  CUser, void, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F6310
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [ebp+0x3A74],eax
	cmp eax,edi
	jne Block2

 Block1:
	cmp dword ptr [ebp+0x3A64],edi
	sete al
	test al,al
	jne Block3

 Block2:
	cmp dword ptr [esp+0x60],edi
	je Block90

 Block3:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x1F962EE
	call CSkillInfo::GetSkill
	mov esi,eax
	mov eax,dword ptr [ebp+0x19E4]
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov ecx,dword ptr [eax+0x1BC]
	push ecx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block8

 Block7:
	lea edx,[esp+0x1C]
	push 0x9B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x54],edi
	mov ebx,1
	jmp Block16

 Block8:
	push edi
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call SKILLENTRY::GetSpecialUOL
	mov eax,dword ptr [eax]
	mov ebx,2
	mov dword ptr [esp+0x54],1
	mov dword ptr [esp+0x14],ebx
	cmp eax,edi
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	jmp Block11

 Block10:
	xor edx,edx

 Block11:
	mov dword ptr [esp+0x5C],edi
	cmp edx,edi
	je Block15

 Block12:
	mov eax,edx
	lea esi,[eax+2]

 Block13:
	mov cx,word ptr [eax]
	add eax,ebx
	cmp cx,di
	jne Block13

 Block14:
	sub eax,esi
	sar eax,1
	mov esi,eax
	lea ecx,[esi+esi]
	push ecx
	push edx
	push edi
	push esi
	lea ecx,[esp+0x6C]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x60]
	call ZXString16::ReleaseBuffer

 Block15:
	mov dword ptr [esp+0x54],ebx
	lea eax,[esp+0x5C]
	mov ebx,6

 Block16:
	push eax
	lea ecx,[esp+0x64]
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x64],edi
	call ZXString16::op_assign
	mov dword ptr [esp+0x54],4
	test bl,4
	je Block19

 Block17:
	mov eax,dword ptr [esp+0x5C]
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x14],ebx
	cmp eax,edi
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	test bl,2
	je Block22

 Block20:
	mov ecx,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFD
	cmp ecx,edi
	je Block22

 Block21:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],edi

 Block22:
	mov byte ptr [esp+0x54],6
	test bl,1
	je Block25

 Block23:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,edi
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [ebp+0x19E4]
	cmp eax,edi
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	jmp Block28

 Block27:
	xor eax,eax

 Block28:
	mov edx,dword ptr [eax+0x1BC]
	push edx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	neg eax
	push edi
	sbb eax,eax
	push 0xFF
	neg eax
	push edi
	mov dword ptr [ebp+0x3A78],eax
	mov eax,dword ptr [ebp+0x1968]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block30:
	push edi
	push edi
	lea ecx,[ebp+0x88]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push eax
	mov byte ptr [esp+0x74],7
	call CAvatar::GetTMNavelOrigin
	mov esi,dword ptr [ebp+0x1968]
	mov byte ptr [esp+0x70],8
	cmp esi,edi
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[esp+0x78]
	push edx
	push esi
	mov dword ptr [esp+0x80],edi
	call eax
	cmp eax,edi
	jge Block34

 Block33:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block34:
	mov ecx,dword ptr [esp+0x78]
	mov edx,dword ptr [esp+0x7C]
	push ecx
	push edx
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x7C],6
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x3A64]
	add esp,0x28
	cmp esi,eax
	je Block39

 Block35:
	mov dword ptr [ebp+0x3A64],eax
	cmp eax,edi
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block37:
	cmp esi,edi
	je Block39

 Block38:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block39:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block41

 Block40:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block41:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push ecx
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea eax,[esp+0x2C]
	mov bl,9
	push eax
	mov byte ptr [esp+0x58],bl
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	mov ecx,dword ptr [ebp+0x3A64]
	mov byte ptr [esp+0x54],0xA
	cmp ecx,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],si
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0x54],6
	cmp word ptr [esp+0x3C],si
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov eax,dword ptr [ebp+0x19E4]
	cmp eax,edi
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	jmp Block58

 Block57:
	xor eax,eax

 Block58:
	mov edx,dword ptr [eax+0x1BC]
	push edx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block92

 Block59:
	mov eax,dword ptr [ebp+0x1960]
	push edi
	push 0xFF
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block61:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push eax
	lea ecx,[ebp+0x88]
	mov byte ptr [esp+0x74],0xB
	call CAvatar::GetTMNavelOrigin
	push offset _S_0
	lea ecx,[esp+0x40]
	push ecx
	lea ecx,[esp+0x84]
	mov byte ptr [esp+0x78],0xC
	call ZXString16::op_add_0
	mov edi,eax
	mov esi,dword ptr [ebp+0x1960]
	mov byte ptr [esp+0x70],0xD
	test esi,esi
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xD4]
	lea eax,[esp+0x78]
	push eax
	push esi
	mov dword ptr [esp+0x80],0
	call ecx
	test eax,eax
	jge Block65

 Block64:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block65:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [esp+0x78]
	push edx
	push eax
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x7C],0xE
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x3A68]
	add esp,0x28
	cmp esi,eax
	je Block70

 Block66:
	mov dword ptr [ebp+0x3A68],eax
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block68:
	test esi,esi
	je Block70

 Block69:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block70:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block72

 Block71:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block72:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x54],6
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block74:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	lea eax,[esp+0x3C]
	mov bl,0xF
	push eax
	mov byte ptr [esp+0x58],bl
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	mov ecx,dword ptr [ebp+0x3A68]
	mov byte ptr [esp+0x54],0x10
	test ecx,ecx
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x3C],si
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov byte ptr [esp+0x54],6
	cmp word ptr [esp+0x2C],si
	jne Block91

 Block85:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block87

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block87:
	xor edi,edi

 Block88:
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [ebp+0x3A74],edi
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,edi
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block90:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 8

 Block91:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block87

 Block92:
	mov eax,dword ptr [ebp+0x3A68]
	cmp eax,edi
	je Block88

 Block93:
	mov dword ptr [ebp+0x3A68],edi
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block88
}
}
// CUser::SetConsumeItemEffect
_SUB_EXCEPTION_HANDLER(4EEB60)
__SUB_CLASS_THIS(004EEB60, __thiscall, 16618,  CUser, void, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4EEB60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xD0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x30],ebx
	xor edi,edi
	cmp dword ptr [ebx+0x638],edi
	jne Block147

 Block1:
	push 6
	call CUser::RemoveAdditionalLayer
	mov esi,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x60],eax
	cmp esi,edi
	jne Block3

 Block2:
	mov dword ptr [ebx+0x2EE0],edi
	jmp Block147

 Block3:
	cmp dword ptr [ebx+0x5D0],edi
	jne Block147

 Block4:
	cmp dword ptr [ebx+0x5E4],edi
	jne Block147

 Block5:
	mov dword ptr [ebp+0x3C],edi
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp-0xAC],edi
	lea eax,[ebp+0x58]
	push 0x9AB
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[ebp+0x3C]
	push ecx
	mov byte ptr [ebp-4],2
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x58]
	add esp,0xC
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	push offset _D_VTMISSING
	lea ecx,[ebp-0xBC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0xCC]
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::_ctor_1
	push edi
	push edi
	lea edx,[ebp-0xBC]
	push edx
	mov edx,dword ptr [ebp+0x3C]
	lea eax,[ebp-0xCC]
	push eax
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	mov bl,4
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],5
	cmp dword ptr [_D_G_RM],edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea eax,[ebp-0xDC]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0xDC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xCC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xBC]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [ebp+0x4C],edi
	lea ecx,[ebp+0x58]
	push 0x3D2
	push ecx
	mov byte ptr [ebp-4],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea edx,[ebp+0x4C]
	push edx
	push eax
	mov byte ptr [ebp-4],0xC
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp+0x58]
	add esp,0xC
	mov byte ptr [ebp-4],0xB
	cmp eax,edi
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [ebp+0x30]
	mov eax,dword ptr [eax+0x1940]
	mov ecx,0xD
	mov word ptr [ebp-0x1C],cx
	mov dword ptr [ebp-0x14],eax
	cmp eax,edi
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block13:
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0xD
	cmp ecx,edi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea edx,[ebp-0x1C]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [ebp+0x40]
	mov dword ptr [ebp+0x44],edi
	cmp esi,edi
	je Block8

 Block16:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x50]
	push ecx
	push esi
	mov dword ptr [ebp+0x50],edi
	call edx
	cmp eax,edi
	jge Block18

 Block17:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov eax,dword ptr [ebp+0x44]
	cmp eax,dword ptr [ebp+0x50]
	jae Block143

 Block19:
	mov dword ptr [ebp+0x5C],edi
	lea ecx,[ebp-0x28]
	push 0x3D2
	push ecx
	mov byte ptr [ebp-4],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea edx,[ebp+0x5C]
	push edx
	push eax
	mov byte ptr [ebp-4],0xF
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x28]
	add esp,0xC
	mov byte ptr [ebp-4],0xE
	cmp eax,edi
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block21:
	mov eax,0xD
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x4C]
	mov dword ptr [ebp+0x28],eax
	cmp eax,edi
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block23:
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x10
	cmp ecx,edi
	je Block8

 Block24:
	mov ebx,dword ptr [ebp+0x20]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x24]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp+0x28]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp+0x2C]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov esi,ecx
	call eax
	cmp eax,edi
	jge Block26

 Block25:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],0xE
	jne Block29

 Block27:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	cmp eax,edi
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[ebp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov dword ptr [ebp+0x54],edi
	lea eax,[ebp-0x20]
	push 0x3D2
	push eax
	mov byte ptr [ebp-4],0x11
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+0x54]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x12
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x20]
	add esp,0xC
	mov byte ptr [ebp-4],0x11
	cmp eax,edi
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0xA
	div ecx
	sub edx,5
	lea edx,[edx+edx*4]
	add edx,edx
	jns Block34

 Block33:
	sub edx,5
	jmp Block35

 Block34:
	add edx,5

 Block35:
	mov ecx,offset _D_G_RAND
	mov dword ptr [ebp+0x38],edx
	call CRand32::Random
	xor edx,edx
	mov ecx,0xA
	div ecx
	lea eax,[edx*8-0x28]
	cmp eax,edi
	jge Block37

 Block36:
	sub eax,5
	jmp Block38

 Block37:
	add eax,0xA

 Block38:
	mov dword ptr [ebp+0x50],eax
	mov dword ptr [ebp+0x48],edi
	lea edx,[ebp-0x24]
	push 0x3D2
	push edx
	mov byte ptr [ebp-4],0x13
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+0x48]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x14
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x24]
	add esp,0xC
	mov byte ptr [ebp-4],0x13
	cmp eax,edi
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block40:
	mov eax,dword ptr [ebp+0x48]
	mov edx,0xD
	mov word ptr [ebp+0x10],dx
	mov dword ptr [ebp+0x18],eax
	cmp eax,edi
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block42:
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x15
	cmp ecx,edi
	je Block8

 Block43:
	mov ebx,dword ptr [ebp+0x10]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x14]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp+0x18]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp+0x1C]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov esi,ecx
	call eax
	cmp eax,edi
	jge Block45

 Block44:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block45:
	mov esi,8
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp+0x10],si
	jne Block48

 Block46:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,edi
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x38]
	push eax
	call ebx
	lea ecx,[ebp-0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block142

 Block50:
	lea edx,[ebp-0x98]
	push edx
	mov byte ptr [ebp-4],0x16
	call ebx
	lea eax,[ebp-0x98]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block142

 Block51:
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x17
	cmp ecx,edi
	je Block8

 Block52:
	lea edx,[ebp-0x38]
	push edx
	mov edx,dword ptr [ebp+0x50]
	lea eax,[ebp-0x98]
	push eax
	mov eax,dword ptr [ebp+0x38]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp-0x98],si
	jne Block55

 Block53:
	mov eax,dword ptr [ebp-0x90]
	xor ecx,ecx
	mov word ptr [ebp-0x98],cx
	cmp eax,edi
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[ebp-0x98]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x38],si
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	cmp eax,edi
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,3
	div ecx
	mov eax,0xAAAAAAAB
	mov ecx,edx
	mul ecx
	shr edx,1
	lea edx,[edx+edx*2]
	sub ecx,edx
	je Block63

 Block61:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	and eax,3
	mov ecx,offset _D_G_RAND
	lea esi,[eax+2]
	call CRand32::Random
	mov ecx,dword ptr [ebp+0x5C]
	and eax,3
	add eax,2
	cmp ecx,edi
	je Block8

 Block62:
	push esi
	push eax
	mov eax,dword ptr [ebp+0x54]
	push 5
	push 5
	push eax
	call IWzVector2D::Ratio
	jmp Block66

 Block63:
	mov eax,dword ptr [ebp+0x5C]
	cmp eax,edi
	je Block8

 Block64:
	mov edx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax]
	push 5
	push edi
	push 5
	push 5
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x98]
	call eax
	cmp eax,edi
	jge Block66

 Block65:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block66:
	lea ecx,[ebp-0x78]
	push ecx
	call ebx
	lea edx,[ebp-0x78]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block142

 Block67:
	lea eax,[ebp-0x88]
	push eax
	mov byte ptr [ebp-4],0x18
	call ebx
	lea ecx,[ebp-0x88]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block142

 Block68:
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x19
	cmp ecx,edi
	je Block8

 Block69:
	lea edx,[ebp-0x78]
	push edx
	lea eax,[ebp-0x88]
	push eax
	push 0xFFFFFFFB
	push edi
	call IWzVector2D::RelMove
	cmp word ptr [ebp-0x88],8
	mov byte ptr [ebp-4],0x18
	jne Block76

 Block70:
	mov eax,dword ptr [ebp-0x80]
	xor ecx,ecx
	mov word ptr [ebp-0x88],cx
	cmp eax,edi
	je Block72

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block72:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block73:
	cmp word ptr [ebp-0x78],8
	mov byte ptr [ebp-4],0x13
	jne Block77

 Block74:
	xor eax,eax
	mov word ptr [ebp-0x78],ax
	mov eax,dword ptr [ebp-0x70]
	cmp eax,edi
	je Block78

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block76:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x88]
	push edx
	call esi
	jmp Block73

 Block77:
	lea ecx,[ebp-0x78]
	push ecx
	call esi

 Block78:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x3E8
	div ecx
	mov eax,3
	mov word ptr [ebp-0x58],ax
	add edx,ecx
	mov dword ptr [ebp-0x50],edx
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x1A
	cmp ecx,edi
	je Block8

 Block79:
	fldz
	lea edx,[ebp-0x58]
	push edx
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	cmp word ptr [ebp-0x58],8
	mov byte ptr [ebp-4],0x13
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	cmp eax,edi
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[ebp-0x58]
	push ecx
	call esi

 Block83:
	mov eax,0x20
	call __alloca_probe_8
	mov edx,dword ptr [ebp+0x44]
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x40]
	lea eax,[ebp-0x1C]
	mov byte ptr [ebp-4],0x1B
	push eax
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp+0x58],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block85

 Block84:
	cmp eax,0x80004002
	jne Block142

 Block85:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x1E
	jne Block88

 Block86:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,edi
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[ebp-0x1C]
	push edx
	call esi

 Block89:
	lea eax,[ebp-0x48]
	push eax
	call ebx
	lea ecx,[ebp-0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block142

 Block90:
	mov ebx,dword ptr [ebp+0x58]
	mov edx,0xD
	mov byte ptr [ebp-4],0x1F
	mov word ptr [ebp-0x68],dx
	mov dword ptr [ebp-0x60],ebx
	cmp ebx,edi
	je Block92

 Block91:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block92:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x20
	cmp ecx,edi
	je Block8

 Block93:
	lea edx,[ebp-0x48]
	push edx
	lea eax,[ebp-0x68]
	push eax
	push edi
	push edi
	push edi
	push edi
	push edi
	lea edx,[ebp+0x34]
	push edx
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [ebp+0x60]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0x14]
	cmp esi,eax
	je Block98

 Block94:
	mov edx,ecx
	mov dword ptr [edx+0x14],eax
	cmp eax,edi
	je Block96

 Block95:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block96:
	cmp esi,edi
	je Block98

 Block97:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block98:
	mov eax,dword ptr [ebp+0x34]
	cmp eax,edi
	je Block100

 Block99:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block100:
	cmp word ptr [ebp-0x68],8
	mov byte ptr [ebp-4],0x1F
	jne Block103

 Block101:
	mov eax,dword ptr [ebp-0x60]
	xor ecx,ecx
	mov word ptr [ebp-0x68],cx
	cmp eax,edi
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[ebp-0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	mov esi,8
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x48],si
	jne Block107

 Block105:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	cmp eax,edi
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea ecx,[ebp-0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block108:
	mov edx,dword ptr [ebp+0x30]
	mov eax,dword ptr [edx+0x1960]
	mov ecx,0xD
	mov word ptr [ebp-0xA8],cx
	mov dword ptr [ebp-0xA0],eax
	cmp eax,edi
	je Block110

 Block109:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block110:
	mov ecx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [ecx+0x14]
	mov byte ptr [ebp-4],0x21
	cmp ecx,edi
	je Block8

 Block111:
	lea edx,[ebp-0xA8]
	push edx
	call IWzGr2DLayer::Putoverlay
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0xA8],si
	jne Block114

 Block112:
	xor eax,eax
	mov word ptr [ebp-0xA8],ax
	mov eax,dword ptr [ebp-0xA0]
	cmp eax,edi
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea ecx,[ebp-0xA8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov eax,dword ptr [ebp+0x38]
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0x14
	jge Block117

 Block116:
	mov edx,dword ptr [ebp+0x50]
	add edx,4
	mov eax,0xFFFFFFFB
	cmp edx,0x17
	jbe Block118

 Block117:
	mov eax,5

 Block118:
	mov ecx,dword ptr [ebp+0x60]
	mov esi,dword ptr [ecx+0x14]
	cmp esi,edi
	je Block8

 Block119:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0xB4]
	push esi
	call eax
	cmp eax,edi
	jge Block121

 Block120:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block121:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,0xD
	mov word ptr [ebp],cx
	mov dword ptr [ebp+8],eax
	cmp eax,edi
	je Block123

 Block122:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block123:
	mov ecx,dword ptr [ebp+0x60]
	mov esi,dword ptr [ecx+0x14]
	mov byte ptr [ebp-4],0x22
	cmp esi,edi
	je Block8

 Block124:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0xC]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,edi
	jge Block126

 Block125:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block126:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x1E
	jne Block129

 Block127:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,edi
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	mov edx,dword ptr [ebp+0x60]
	mov esi,dword ptr [edx+0x14]
	cmp esi,edi
	je Block8

 Block131:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,edi
	jge Block133

 Block132:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block133:
	mov byte ptr [ebp-4],0x13
	cmp ebx,edi
	je Block135

 Block134:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block135:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x11
	cmp eax,edi
	je Block137

 Block136:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block137:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xE
	cmp eax,edi
	je Block139

 Block138:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block139:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0xB
	cmp eax,edi
	je Block141

 Block140:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block141:
	inc dword ptr [ebp+0x44]
	add dword ptr [ebp+0x60],0x24
	mov esi,dword ptr [ebp+0x40]
	jmp Block16

 Block142:
	push eax
	call _com_issue_error

 Block143:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0xA
	cmp eax,edi
	je Block145

 Block144:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block145:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],1
	call ecx
	mov eax,dword ptr [ebp+0x3C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block147

 Block146:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block147:
	lea esp,[ebp-0xEC]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CUser::GetCharacterId
__SUB_CLASS_THIS0(0010ABC0, __thiscall, 16577,  CUser, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x19E8]
	ret
}
}
// CUser::RemoveMagicShield
__SUB_CLASS_THIS0(004E1190, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3A88]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+0x3A88],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CUser::IsSneak
__SUB_CLASS_THIS0(00100010, __thiscall, 16581,  CUser, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+8]
	call edx
	mov ecx,dword ptr [eax+0x120C]
	push ecx
	add eax,0x1204
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	ret
}
}
// CGrenade::BombAndAttackMob
__SUB_CLASS_THIS0(00168E80, __thiscall, 81203,  CGrenade, void) {
__asm {

 Block0:
	sub esp,0xC
	push ebp
	push esi
	lea eax,[esp+0xC]
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block5

 Block1:
	push ebx
	push edi
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	pop edi
	mov dword ptr [esp+0x14],0
	pop ebx

 Block5:
	mov edx,dword ptr [esi+0x44]
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push edx
	push ebp
	mov dword ptr [esp+0x14],0
	call CSkillInfo::GetSkillLevel_0
	push 0
	mov ecx,dword ptr [esi+0x10]
	push 0
	push 0
	push 0
	push 0
	push esi
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [esp+0x34]
	push eax
	call CUserLocal::TryDoingMeleeAttack
	pop esi
	pop ebp
	add esp,0xC
	ret
}
}
// CUser::ShowItemUpgradeEffect
_SUB_EXCEPTION_HANDLER(4E7B00)
__SUB_CLASS_THIS(004E7B00, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E7B00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x24],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	cmp dword ptr [ecx+0x638],ebx
	jne Block84

 Block1:
	mov esi,dword ptr [esp+0x4C]
	mov ecx,esi
	call CInPacket::Decode1
	movsx eax,al
	mov ecx,esi
	mov dword ptr [esp+0x18],eax
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebp,al
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esp+0x1C],ecx
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0x20],eax
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode1
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [ecx]
	movzx esi,al
	mov eax,dword ptr [edx+0xC]
	call eax
	test eax,eax
	je Block61

 Block2:
	cmp dword ptr [esp+0x1C],ebx
	je Block8

 Block3:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block6

 Block4:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CUIEnchantDlg::ms_RTTI_CUIEnchantDlg
	call eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test ecx,ecx
	jne Block7

 Block6:
	push 0x21000003
	lea ecx,[esp+0x28]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	push offset CDisconnectException::THROW_INFO
	lea edx,[esp+0x24]
	push edx
	mov dword ptr [esp+0x28],ecx
	call _CxxThrowException

 Block7:
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x18]
	push esi
	push eax
	push ebp
	push edx
	call CUIEnchantDlg::SetResult
	jmp Block61

 Block8:
	mov esi,dword ptr [esp+0x18]
	test esi,esi
	je Block10

 Block9:
	lea eax,[esp+0x30]
	push 0x192
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x44],0
	mov ebx,1
	jmp Block13

 Block10:
	test ebp,ebp
	je Block12

 Block11:
	lea ecx,[esp+0x2C]
	push 0x194
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x44],1
	mov ebx,2
	jmp Block13

 Block12:
	lea edx,[esp+0x28]
	push 0x193
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x44],2
	mov ebx,4

 Block13:
	push eax
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x50],0
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x44],4
	test bl,4
	je Block16

 Block14:
	mov eax,dword ptr [esp+0x28]
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov byte ptr [esp+0x44],5
	test bl,2
	je Block19

 Block17:
	mov eax,dword ptr [esp+0x2C]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov byte ptr [esp+0x44],6
	test bl,1
	je Block22

 Block20:
	mov eax,dword ptr [esp+0x30]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	test esi,esi
	je Block31

 Block23:
	test edi,edi
	je Block25

 Block24:
	lea eax,[esp+0x38]
	push 0xFA7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x44],7
	or ebx,8
	jmp Block26

 Block25:
	lea ecx,[esp+0x34]
	push 0x192
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x44],8
	or ebx,0x10

 Block26:
	push eax
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x44],7
	test bl,0x10
	je Block29

 Block27:
	mov eax,dword ptr [esp+0x34]
	and ebx,0xFFFFFFEF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov dword ptr [esp+0x44],6
	test bl,8
	je Block44

 Block30:
	mov eax,dword ptr [esp+0x38]
	and ebx,0xFFFFFFF7
	jmp Block41

 Block31:
	test ebp,ebp
	je Block33

 Block32:
	lea edx,[esp+0x38]
	push 0x194
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x48],9
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x44],6
	jmp Block42

 Block33:
	test edi,edi
	je Block35

 Block34:
	lea eax,[esp+0x34]
	push 0xFA6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x44],0xA
	or ebx,0x20
	jmp Block36

 Block35:
	lea ecx,[esp+0x38]
	push 0x193
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x44],0xB
	or ebx,0x40

 Block36:
	push eax
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x44],0xA
	test bl,0x40
	je Block39

 Block37:
	mov eax,dword ptr [esp+0x38]
	and ebx,0xFFFFFFBF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov dword ptr [esp+0x44],6
	test bl,0x20
	je Block44

 Block40:
	mov eax,dword ptr [esp+0x34]
	and ebx,0xFFFFFFDF

 Block41:
	mov dword ptr [esp+0x14],ebx

 Block42:
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	test byte ptr [esp+0x20],2
	je Block59

 Block45:
	cmp dword ptr [esp+0x18],0
	mov esi,0xD
	je Block47

 Block46:
	lea edx,[esp+0x20]
	push 0x17F4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x44],0xC
	or ebx,0x80
	jmp Block50

 Block47:
	test ebp,ebp
	je Block49

 Block48:
	lea eax,[esp+0x34]
	push 0x17F6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x44],esi
	or ebx,0x100
	jmp Block50

 Block49:
	lea ecx,[esp+0x38]
	push 0x17F5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x44],0xE
	or ebx,0x200

 Block50:
	push eax
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x44],esi
	test ebx,0x200
	je Block53

 Block51:
	mov eax,dword ptr [esp+0x38]
	and ebx,0xFFFFFDFF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov dword ptr [esp+0x44],0xC
	test ebx,0x100
	je Block56

 Block54:
	mov eax,dword ptr [esp+0x34]
	and ebx,0xFFFFFEFF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	mov dword ptr [esp+0x44],6
	test bl,bl
	jns Block59

 Block57:
	mov eax,dword ptr [esp+0x20]
	and ebx,0xFFFFFF7F
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	lea edx,[esp+0x4C]
	push 0xC
	push edx
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x54]
	add esp,8
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block61:
	mov edi,dword ptr [esp+0x24]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xC]
	mov ecx,edi
	call edx
	test eax,eax
	je Block64

 Block62:
	cmp dword ptr [esp+0x1C],0
	jne Block84

 Block63:
	jmp Block65

 Block64:
	cmp dword ptr [esp+0x1C],0
	jne Block74

 Block65:
	mov ebp,dword ptr [esp+0x18]
	mov esi,0xF
	test ebp,ebp
	je Block67

 Block66:
	lea eax,[esp+0x34]
	push 0x507
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x44],esi
	or ebx,0x400
	jmp Block68

 Block67:
	lea ecx,[esp+0x38]
	push 0x508
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x44],0x10
	or ebx,0x800

 Block68:
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x1C],ebx
	call play_game_sound
	add esp,8
	mov dword ptr [esp+0x44],esi
	test ebx,0x800
	je Block71

 Block69:
	mov eax,dword ptr [esp+0x38]
	and ebx,0xFFFFF7FF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block71:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test ebx,0x400
	je Block77

 Block72:
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block77

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block77

 Block74:
	mov ebp,dword ptr [esp+0x18]
	mov eax,offset _S_ENCHANTSUCCESSDE
	test ebp,ebp
	jne Block76

 Block75:
	mov eax,offset _S_ENCHANTFAILUREDE

 Block76:
	push 0x64
	push eax
	call play_game_sound
	add esp,8

 Block77:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [edi+0x1960]
	push edx
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block79:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x58],0x11
	call CUser::GetVecCtrl_0
	mov esi,dword ptr [edi+0x1960]
	mov byte ptr [esp+0x54],0x12
	test esi,esi
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[esp+0x5C]
	push edx
	push esi
	mov dword ptr [esp+0x64],0
	call eax
	test eax,eax
	jge Block83

 Block82:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block83:
	mov ecx,dword ptr [esp+0x5C]
	push ecx
	mov dword ptr [esp+0x58],0xFFFFFFFF
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::Effect_ItemUpgrade

 Block84:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 4
}
}
// CUser::UpdateAffectedSkillList
_SUB_EXCEPTION_HANDLER(4FFAF0)
__SUB_CLASS_THIS(004FFAF0, __thiscall, 16615,  CUser, void, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4FFAF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+8]
	call edx
	xor edi,edi
	push 0x64
	lea ecx,[esp+0x20]
	mov esi,eax
	int 3// TODO: 	mov dword ptr [esp+0x20],offset ZMap<long, int, long>::`vftable'
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esp+0x28],0x1F
	mov dword ptr [esp+0x2C],edi
	call ZMap<long, int, long>::_CalcAutoGrow
	mov eax,dword ptr [esi+0x3A4]
	push eax
	lea ecx,[esi+0x39C]
	push ecx
	mov dword ptr [esp+0x44],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [esi+0x3B0]
	push edx
	lea eax,[esi+0x3A8]
	push eax
	mov dword ptr [esp+0x1C],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea ecx,[esp+0x14]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x20],eax
	call ZMap<long, int, long>::Insert

 Block2:
	mov eax,dword ptr [esi+0x35C]
	push eax
	lea ecx,[esi+0x354]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [esi+0x368]
	push edx
	lea eax,[esi+0x360]
	push eax
	mov dword ptr [esp+0x20],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x1C],eax
	call ZMap<long, int, long>::Insert

 Block4:
	mov eax,dword ptr [esi+0x53C]
	push eax
	lea ecx,[esi+0x534]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block6

 Block5:
	mov edx,dword ptr [esi+0x548]
	push edx
	lea eax,[esi+0x540]
	push eax
	mov dword ptr [esp+0x20],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x1C],eax
	call ZMap<long, int, long>::Insert

 Block6:
	mov eax,dword ptr [esi+0x560]
	push eax
	lea ecx,[esi+0x558]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [esi+0x56C]
	push edx
	lea eax,[esi+0x564]
	push eax
	mov dword ptr [esp+0x20],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x1C],eax
	call ZMap<long, int, long>::Insert

 Block8:
	mov eax,dword ptr [esi+0x3C8]
	push eax
	lea ecx,[esi+0x3C0]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [esi+0x3D4]
	push edx
	lea eax,[esi+0x3CC]
	push eax
	mov dword ptr [esp+0x20],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x1C],eax
	call ZMap<long, int, long>::Insert

 Block10:
	mov eax,dword ptr [esi+0x380]
	push eax
	lea ecx,[esi+0x378]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [esi+0x38C]
	push edx
	lea eax,[esi+0x384]
	push eax
	mov dword ptr [esp+0x20],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x1C],eax
	call ZMap<long, int, long>::Insert

 Block12:
	mov eax,dword ptr [esi+0x584]
	push eax
	lea ecx,[esi+0x57C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block14

 Block13:
	mov edx,dword ptr [esi+0x590]
	push edx
	lea eax,[esi+0x588]
	push eax
	mov dword ptr [esp+0x20],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x1C],eax
	call ZMap<long, int, long>::Insert

 Block14:
	mov eax,dword ptr [esi+0x6B0]
	push eax
	lea ecx,[esi+0x6A8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block16

 Block15:
	mov edx,dword ptr [esi+0x6BC]
	push edx
	lea eax,[esi+0x6B4]
	push eax
	mov dword ptr [esp+0x20],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x1C],eax
	call ZMap<long, int, long>::Insert

 Block16:
	mov eax,dword ptr [esi+0xD08]
	push eax
	lea ecx,[esi+0xD00]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block18

 Block17:
	mov edx,dword ptr [esi+0xD14]
	push edx
	lea eax,[esi+0xD0C]
	push eax
	mov dword ptr [esp+0x20],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x1C],eax
	call ZMap<long, int, long>::Insert

 Block18:
	mov eax,dword ptr [esi+0xD2C]
	push eax
	lea ecx,[esi+0xD24]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block20

 Block19:
	mov edx,dword ptr [esi+0xD38]
	push edx
	lea eax,[esi+0xD30]
	push eax
	mov dword ptr [esp+0x20],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x1C],eax
	call ZMap<long, int, long>::Insert

 Block20:
	mov eax,dword ptr [esi+0xD50]
	push eax
	lea ecx,[esi+0xD48]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [esi+0xD5C]
	push edx
	lea eax,[esi+0xD54]
	push eax
	mov dword ptr [esp+0x20],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x1C],eax
	call ZMap<long, int, long>::Insert

 Block22:
	mov eax,dword ptr [esi+0x7C4]
	push eax
	lea ecx,[esi+0x7BC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block24

 Block23:
	mov edx,dword ptr [esi+0x7D0]
	push edx
	lea eax,[esi+0x7C8]
	push eax
	mov dword ptr [esp+0x20],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x1C],eax
	call ZMap<long, int, long>::Insert

 Block24:
	mov eax,dword ptr [esi+0x944]
	push eax
	lea ecx,[esi+0x93C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block26

 Block25:
	mov edx,dword ptr [esi+0x950]
	push edx
	lea eax,[esi+0x948]
	push eax
	mov dword ptr [esp+0x20],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x1C],eax
	call ZMap<long, int, long>::Insert

 Block26:
	mov ebx,dword ptr [esi+0x13EC]
	lea edi,[ebx+0x18]
	mov ecx,edi
	call ZFatalSection::Lock
	test edi,edi
	je Block29

 Block27:
	add dword ptr [edi+4],0xFFFFFFFF
	jne Block29

 Block28:
	mov dword ptr [edi],0

 Block29:
	cmp dword ptr [ebx+0xC],0
	je Block34

 Block30:
	mov ebx,dword ptr [esi+0x13EC]
	lea edi,[ebx+0x18]
	mov ecx,edi
	mov dword ptr [esp+0x18],0
	call ZFatalSection::Lock
	lea eax,[ebx+0x10]
	test edi,edi
	je Block33

 Block31:
	add dword ptr [edi+4],0xFFFFFFFF
	jne Block33

 Block32:
	mov dword ptr [edi],0

 Block33:
	lea ecx,[esp+0x18]
	push ecx
	push eax
	lea ecx,[esp+0x24]
	call ZMap<long, int, long>::Insert

 Block34:
	mov edx,dword ptr [esi+0xE34]
	push edx
	lea eax,[esi+0xE2C]
	push eax
	xor ebx,ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [esi+0xE40]
	push ecx
	lea edx,[esi+0xE38]
	push edx
	mov dword ptr [esp+0x20],ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	lea ecx,[esp+0x24]
	call ZMap<long, int, long>::Insert

 Block36:
	mov edx,dword ptr [esi+0x86C]
	push edx
	lea edi,[esi+0x864]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block40

 Block37:
	mov eax,dword ptr [esi+0x89C]
	push eax
	lea ecx,[esi+0x894]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block40

 Block38:
	mov edx,dword ptr [esi+0x8CC]
	push edx
	lea eax,[esi+0x8C4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block40

 Block39:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x18],ebx
	push edx
	jmp Block56

 Block40:
	mov eax,dword ptr [esi+0x86C]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block43

 Block41:
	mov ecx,dword ptr [esi+0x89C]
	push ecx
	lea edx,[esi+0x894]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block43

 Block42:
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x18],1
	push ecx
	jmp Block56

 Block43:
	mov edx,dword ptr [esi+0x86C]
	push edx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block46

 Block44:
	mov eax,dword ptr [esi+0x8CC]
	push eax
	lea ecx,[esi+0x8C4]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block46

 Block45:
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x14],2
	jmp Block55

 Block46:
	mov ecx,dword ptr [esi+0x89C]
	push ecx
	lea ebx,[esi+0x894]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block49

 Block47:
	mov edx,dword ptr [esi+0x8CC]
	push edx
	lea eax,[esi+0x8C4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block49

 Block48:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x18],3
	push edx
	jmp Block56

 Block49:
	mov eax,dword ptr [esi+0x86C]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	xor edi,edi
	test eax,eax
	je Block51

 Block50:
	mov ecx,dword ptr [esi+0x878]
	push ecx
	lea edx,[esi+0x870]
	push edx
	mov dword ptr [esp+0x20],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	lea ecx,[esp+0x24]
	call ZMap<long, int, long>::Insert

 Block51:
	mov edx,dword ptr [esi+0x89C]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block53

 Block52:
	mov eax,dword ptr [esi+0x8A8]
	push eax
	lea ecx,[esi+0x8A0]
	push ecx
	mov dword ptr [esp+0x20],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x14],eax
	push edx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x24]
	call ZMap<long, int, long>::Insert

 Block53:
	mov ecx,dword ptr [esi+0x8CC]
	push ecx
	lea edx,[esi+0x8C4]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block57

 Block54:
	mov eax,dword ptr [esi+0x8D8]
	push eax
	lea ecx,[esi+0x8D0]
	push ecx
	mov dword ptr [esp+0x20],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [esp+0x14],eax

 Block55:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x18]
	push eax

 Block56:
	lea ecx,[esp+0x24]
	call ZMap<long, int, long>::Insert

 Block57:
	mov ecx,dword ptr [esi+0x968]
	push ecx
	lea edx,[esi+0x960]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block60

 Block58:
	mov eax,dword ptr [esi+0xCC0]
	push eax
	lea ecx,[esi+0xCB8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block60

 Block59:
	mov ecx,ebp
	call CUser::LoadDojangBerserkEffect
	jmp Block61

 Block60:
	mov ecx,ebp
	call CUser::RemoveDojangBerserkEffect

 Block61:
	mov edx,dword ptr [esi+0x98C]
	push edx
	lea eax,[esi+0x984]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ecx,ebp
	test eax,eax
	je Block63

 Block62:
	call CUser::LoadDojangInvincibleEffect
	jmp Block64

 Block63:
	call CUser::RemoveDojangInvincibleEffect

 Block64:
	mov ecx,dword ptr [esi+0x920]
	push ecx
	lea edx,[esi+0x918]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea edi,[ebp+0x88]
	mov ecx,edi
	test eax,eax
	je Block66

 Block65:
	call CAvatar::LoadBarrier
	jmp Block67

 Block66:
	call CAvatar::RemoveBarrier

 Block67:
	mov eax,dword ptr [esi+0xCC0]
	push eax
	lea ecx,[esi+0xCB8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block69

 Block68:
	mov edx,dword ptr [esi+0xCCC]
	push edx
	lea eax,[esi+0xCC4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	neg eax
	push eax
	mov ecx,ebp
	call CUser::_LoadItemRepeatEffect
	jmp Block70

 Block69:
	mov ecx,ebp
	call CUser::_RemoveItemRepeatEffect

 Block70:
	mov ecx,dword ptr [esi+0xD98]
	push ecx
	lea edx,[esi+0xD90]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ecx,ebp
	test eax,eax
	je Block72

 Block71:
	call CUser::LoadMagicShield
	jmp Block73

 Block72:
	call CUser::RemoveMagicShield

 Block73:
	mov eax,dword ptr [esi+0xEA0]
	push eax
	lea ecx,[esi+0xE98]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ecx,ebp
	test eax,eax
	je Block75

 Block74:
	call CUser::LoadSuddenDeathEffect
	jmp Block76

 Block75:
	call CUser::RemoveSuddenDeathEffect

 Block76:
	mov edx,dword ptr [esi+0xEF4]
	push edx
	lea eax,[esi+0xEEC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ecx,ebp
	test eax,eax
	je Block78

 Block77:
	call CUser::LoadFinalCutEffect
	jmp Block79

 Block78:
	call CUser::RemoveFinalCutEffect

 Block79:
	mov ecx,dword ptr [esi+0x12D0]
	push ecx
	lea edx,[esi+0x12C8]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ecx,ebp
	test eax,eax
	jle Block81

 Block80:
	call CUser::LoadBlessingArmor
	jmp Block82

 Block81:
	call CUser::RemoveBlessingArmor

 Block82:
	mov eax,dword ptr [esi+0x1104]
	push eax
	lea ecx,[esi+0x10FC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block88

 Block83:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0x14]
	mov ecx,ebp
	call eax
	mov ecx,edi
	test eax,eax
	jne Block87

 Block84:
	call CAvatar::GetOneTimeAction
	cmp eax,0xCD
	je Block91

 Block85:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0xCC
	je Block91

 Block86:
	mov ecx,edi

 Block87:
	or eax,0xFFFFFFFF
	mov dword ptr [edi+0x5A8],eax
	push 1
	mov dword ptr [edi+0x5BC],eax
	call CAvatar::ClearActionLayer
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0x64
	push 6
	mov ecx,edi
	mov dword ptr [ebp+0x644],0xCD
	call eax
	jmp Block91

 Block88:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0xCD
	je Block90

 Block89:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0xCC
	jne Block91

 Block90:
	mov ecx,ebp
	call CUser::TryDoingCycloneAfter

 Block91:
	mov ecx,dword ptr [esi+0xF60]
	push ecx
	add esi,0xF58
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block96

 Block92:
	cmp dword ptr [ebp+0x3A74],0
	jne Block97

 Block93:
	call get_update_time
	add eax,0x5A0
	jne Block95

 Block94:
	mov eax,1

 Block95:
	push 0
	push eax
	mov ecx,ebp
	call CUser::LoadMoreWildEffect
	jmp Block97

 Block96:
	mov ecx,ebp
	call CUser::RemoveMoreWildEffect

 Block97:
	mov eax,dword ptr [ebp+0x39DC]
	xor ebx,ebx
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block112

 Block98:
	lea edx,[esp+0x14]
	push edx
	mov edi,eax
	call ZList<CUser::AFFECTEDSKILLENTRY>::GetNext
	add esp,4
	mov esi,eax
	push ebx
	push esi
	lea ecx,[esp+0x24]
	call ZMap<long, int, long>::GetAt
	test eax,eax
	je Block100

 Block99:
	push esi
	lea ecx,[esp+0x20]
	call ZMap<long, int, long>::RemoveKey
	jmp Block111

 Block100:
	mov eax,dword ptr [esi+8]
	cmp eax,ebx
	je Block104

 Block101:
	cmp dword ptr [esi+0x10],1
	mov ecx,dword ptr [ebp+0x39E4]
	push eax
	je Block103

 Block102:
	add ecx,0x14

 Block103:
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAt

 Block104:
	mov esi,dword ptr [esi]
	cmp esi,ebx
	je Block108

 Block105:
	cmp esi,1
	je Block108

 Block106:
	cmp esi,2
	je Block108

 Block107:
	cmp esi,3
	jne Block110

 Block108:
	mov eax,dword ptr [ebp+0x2EA4]
	cmp eax,ebx
	je Block110

 Block109:
	mov dword ptr [ebp+0x2EA4],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block110:
	push edi
	lea ecx,[ebp+0x39D0]
	call ZList<CUser::AFFECTEDSKILLENTRY>::RemoveAt

 Block111:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	jne Block98

 Block112:
	call get_update_time
	lea ecx,[esp+0x1C]
	mov edi,eax
	call ZMap<long, int, long>::GetHeadPosition
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block121

 Block113:
	mov eax,dword ptr [esp+0x44]
	lea ebx,[ebp+0x39D0]
	add edi,eax

 Block114:
	mov ecx,ebx
	call ZList<CUser::AFFECTEDSKILLENTRY>::AddTail_
	push 0
	lea ecx,[esp+0x18]
	push ecx
	lea ecx,[esp+0x24]
	mov esi,eax
	call ZMap<long, int, long>::GetNext
	mov edx,dword ptr [eax]
	mov dword ptr [esi],edx
	mov dword ptr [esi+4],edi
	test edi,edi
	jne Block116

 Block115:
	mov dword ptr [esi+4],1

 Block116:
	mov eax,dword ptr [esp+0x48]
	mov ecx,edx
	and ecx,0x8000FFFF
	mov dword ptr [esi+8],0
	mov dword ptr [esi+0x18],eax
	jns Block118

 Block117:
	dec ecx
	or ecx,0xFFFF0000
	inc ecx

 Block118:
	cmp ecx,0xA2
	jne Block120

 Block119:
	mov dword ptr [ebp+0x3AAC],1
	mov dword ptr [ebp+0x3AB0],ecx

 Block120:
	cmp dword ptr [esp+0x14],0
	jne Block114

 Block121:
	push 1
	mov ecx,ebp
	call CUser::ShiftAffectedSkillAnimation
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x1C],offset ZMap<long, int, long>::`vftable'
	call ZMap<long, int, long>::RemoveAll
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 8
}
}
// CUser::GetZMass
__SUB_CLASS_THIS0(000BC120, __thiscall, 16657,  CUser, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x19E0]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax+0x1B8]
	ret

 Block2:
	xor eax,eax
	mov eax,dword ptr [eax+0x1C4]
	ret
}
}
// CUser::SetMorphed
__SUB_CLASS_THIS(004F5F90, __thiscall, 16652,  CUser, void, unsigned long, int32_t) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	push edi
	mov esi,ecx
	test ebp,ebp
	je Block12

 Block1:
	lea eax,[esp+0x14]
	push eax
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	test eax,eax
	je Block3

 Block2:
	lea ebx,[eax-0xC]
	jmp Block4

 Block3:
	xor ebx,ebx

 Block4:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	push ebp
	call CMorphTemplate::GetMorphTemplate
	mov edi,eax
	add esp,4
	test edi,edi
	je Block44

 Block7:
	cmp dword ptr [edi+0x2C],0
	jne Block9

 Block8:
	mov ecx,ebx
	call CVecCtrl::IsSwimming
	test eax,eax
	jne Block44

 Block9:
	cmp dword ptr [edi+0x2C],1
	jne Block11

 Block10:
	mov ecx,ebx
	call CVecCtrl::IsSwimming
	test eax,eax
	je Block44

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x38]
	push 0
	mov ecx,esi
	call edx

 Block12:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	test eax,eax
	je Block14

 Block13:
	lea edi,[eax-0xC]
	jmp Block15

 Block14:
	xor edi,edi

 Block15:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov eax,dword ptr [edi+0x1BC]
	push eax
	lea ebx,[edi+0x1B4]
	push ebx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [edi+0x1BC]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	cmp dword ptr [eax+4],0
	jne Block21

 Block19:
	mov ecx,edi
	call CVecCtrl::IsOnRope
	test eax,eax
	jne Block21

 Block20:
	xor ebx,ebx
	jmp Block22

 Block21:
	mov ebx,1

 Block22:
	cmp ebp,0x3EA
	je Block32

 Block23:
	cmp dword ptr [esi+0x5D0],0x3EA
	jne Block25

 Block24:
	test ebp,ebp
	je Block32

 Block25:
	cmp ebp,0x3E8
	je Block28

 Block26:
	cmp ebp,0x3E9
	je Block28

 Block27:
	mov edi,1
	jmp Block29

 Block28:
	xor edi,edi

 Block29:
	push ebp
	lea ecx,[esi+0x88]
	call CAvatar::SetMorphed
	cmp dword ptr [esp+0x18],0
	jne Block40

 Block30:
	test eax,eax
	je Block40

 Block31:
	push edi
	push ebx
	jmp Block39

 Block32:
	cmp dword ptr [esi+0x5D0],ebp
	je Block44

 Block33:
	mov edi,dword ptr [esp+0x18]
	xor ecx,ecx
	test ebp,ebp
	setne cl
	mov dword ptr [esi+0x2ED0],ecx
	test ebx,ebx
	jne Block36

 Block34:
	test edi,edi
	jne Block36

 Block35:
	mov ecx,esi
	call CUser::ShowOakCaskEffect
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block36:
	push ebp
	lea ecx,[esi+0x88]
	call CAvatar::SetMorphed
	test edi,edi
	jne Block40

 Block37:
	test eax,eax
	je Block40

 Block38:
	push 1
	push 1

 Block39:
	mov ecx,esi
	call CUser::ShowMorphEffect

 Block40:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xC]
	mov ecx,esi
	call eax
	test eax,eax
	je Block42

 Block41:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x3600]
	jmp Block43

 Block42:
	mov eax,dword ptr [esi+0x39BC]

 Block43:
	push eax
	mov ecx,esi
	call CUser::SetActiveEffectItem
	mov ecx,esi
	call CUser::SetSetItemEffect
	mov edx,dword ptr [esi+0x2EDC]
	push edx
	mov ecx,esi
	call CUser::SetCarryItemEffect
	mov eax,dword ptr [esi+0x2EE0]
	push eax
	mov ecx,esi
	call CUser::SetConsumeItemEffect_0

 Block44:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// CUser::~CUser
_SUB_EXCEPTION_HANDLER(4EB030)
__SUB_CLASS_THIS0(004EB030, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4EB030
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
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	int 3// TODO: 	mov dword ptr [esi],offset CUser::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUser::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUser::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0x88],offset CUser::`vftable'
	mov eax,dword ptr [esi+0x2E8C]
	xor ebx,ebx
	mov dword ptr [esp+0x24],0x2B
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [eax],1

 Block2:
	mov eax,dword ptr [esi+0x3A14]
	cmp eax,ebx
	je Block4

 Block3:
	push eax
	call stop_skill_sound
	add esp,4
	mov dword ptr [esi+0x3A14],ebx

 Block4:
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 5
	push 4
	lea eax,[esi+0x3A94]
	push eax
	mov byte ptr [esp+0x34],0x2A
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x3A8C]
	mov byte ptr [esp+0x24],0x29
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x3A88]
	mov byte ptr [esp+0x24],0x28
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x3A84]
	mov byte ptr [esp+0x24],0x27
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x3A7C]
	mov byte ptr [esp+0x24],0x26
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0x3A70]
	mov byte ptr [esp+0x24],0x25
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0x3A6C]
	mov byte ptr [esp+0x24],0x24
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esi+0x3A68]
	mov byte ptr [esp+0x24],0x23
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [esi+0x3A64]
	mov byte ptr [esp+0x24],0x22
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov eax,dword ptr [esi+0x3A60]
	mov byte ptr [esp+0x24],0x21
	cmp eax,ebx
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov eax,dword ptr [esi+0x3A5C]
	mov byte ptr [esp+0x24],0x20
	cmp eax,ebx
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov eax,dword ptr [esi+0x3A58]
	mov byte ptr [esp+0x24],0x1F
	cmp eax,ebx
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov eax,dword ptr [esi+0x3A54]
	mov byte ptr [esp+0x24],0x1E
	cmp eax,ebx
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov eax,dword ptr [esi+0x3A50]
	mov byte ptr [esp+0x24],0x1D
	cmp eax,ebx
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov eax,dword ptr [esi+0x3A4C]
	mov byte ptr [esp+0x24],0x1C
	cmp eax,ebx
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	lea edi,[esi+0x3A34]
	mov dword ptr [esp+0x18],edi
	mov eax,dword ptr [edi+0xC]
	mov byte ptr [esp+0x24],0x2E
	cmp eax,ebx
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov eax,dword ptr [edi+8]
	mov byte ptr [esp+0x24],0x2D
	cmp eax,ebx
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	mov eax,dword ptr [edi+4]
	mov byte ptr [esp+0x24],0x2C
	cmp eax,ebx
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	mov ecx,edi
	mov byte ptr [esp+0x24],0x1B
	call ZArray<ZRef<IItemEffect>>::RemoveAll
	lea edi,[esi+0x3A18]
	mov dword ptr [esp+0x18],edi
	mov eax,dword ptr [edi+0x18]
	mov byte ptr [esp+0x24],0x2F
	cmp eax,ebx
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	mov ecx,edi
	mov byte ptr [esp+0x24],0x1A
	int 3// TODO: 	mov dword ptr [edi],offset ZMap<ZXString<char>, ZRef<ZMap<long, _x_com_ptr<IWzProperty>, long>>, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, ZRef<ZMap<long, _x_com_ptr<IWzProperty>, long>>, ZXString<char>>::RemoveAll
	mov eax,dword ptr [esi+0x39FC]
	mov byte ptr [esp+0x24],0x19
	cmp eax,ebx
	je Block45

 Block41:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block44

 Block42:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block44

 Block43:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block44:
	mov dword ptr [esi+0x39FC],ebx

 Block45:
	mov eax,dword ptr [esi+0x39F0]
	mov byte ptr [esp+0x24],0x18
	cmp eax,ebx
	je Block47

 Block46:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block47:
	lea ecx,[esi+0x39E4]
	mov byte ptr [esp+0x24],0x17
	call ZArray<ZList<_x_com_ptr<IWzGr2DLayer>>>::RemoveAll
	lea ecx,[esi+0x39D0]
	mov byte ptr [esp+0x24],0x16
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CUser::AFFECTEDSKILLENTRY>::`vftable'
	call ZList<CUser::AFFECTEDSKILLENTRY>::RemoveAll
	lea ecx,[esi+0x39C8]
	mov byte ptr [esp+0x24],0x15
	call ZArray<long>::RemoveAll
	push offset CUser::ADDITIONALLAYER::~ADDITIONALLAYER
	push 0x4B
	push 0x24
	lea eax,[esi+0x2F24]
	push eax
	mov byte ptr [esp+0x34],0x14
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x2F14]
	mov byte ptr [esp+0x24],0x13
	cmp eax,ebx
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
	mov eax,dword ptr [esi+0x2F10]
	mov byte ptr [esp+0x24],0x12
	cmp eax,ebx
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	mov eax,dword ptr [esi+0x2EF8]
	mov byte ptr [esp+0x24],0x11
	cmp eax,ebx
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	lea ecx,[esi+0x2EE4]
	mov byte ptr [esp+0x24],0x10
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CGrenade>>::`vftable'
	call ZList<ZRef<CGrenade>>::RemoveAll
	mov eax,dword ptr [esi+0x2EC0]
	mov byte ptr [esp+0x24],0xF
	cmp eax,ebx
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	mov eax,dword ptr [esi+0x2EBC]
	mov byte ptr [esp+0x24],0xE
	cmp eax,ebx
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block57:
	lea edi,[esi+0x2EA8]
	mov byte ptr [esp+0x24],0xD
	cmp dword ptr [edi+4],ebx
	je Block59

 Block58:
	push ebx
	mov ecx,edi
	call ZRef<CDragon>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block59:
	mov eax,dword ptr [esi+0x2EA4]
	mov byte ptr [esp+0x24],0xC
	cmp eax,ebx
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov eax,dword ptr [esi+0x2E8C]
	mov byte ptr [esp+0x24],0xB
	cmp eax,ebx
	je Block66

 Block62:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block65

 Block63:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block65

 Block64:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block65:
	mov dword ptr [esi+0x2E8C],ebx

 Block66:
	lea ecx,[esi+0x2E64]
	mov byte ptr [esp+0x24],0xA
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CSummoned>>::`vftable'
	call ZList<ZRef<CSummoned>>::RemoveAll
	lea ecx,[esi+0x2E4C]
	mov byte ptr [esp+0x24],9
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CSummoned>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<CSummoned>, unsigned long>::RemoveAll
	lea ecx,[esi+0x2E44]
	mov byte ptr [esp+0x24],8
	call ZArray<ZRef<CPet>>::RemoveAll
	mov eax,dword ptr [esi+0x2E28]
	mov byte ptr [esp+0x24],7
	cmp eax,ebx
	je Block68

 Block67:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block68:
	mov eax,dword ptr [esi+0x2DFC]
	mov byte ptr [esp+0x24],6
	cmp eax,ebx
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block70:
	push offset ZRef<TemporaryStatBase<long>>::~ZRef<TemporaryStatBase<long>>
	push 7
	push 8
	lea eax,[esi+0x2DB8]
	push eax
	mov byte ptr [esp+0x34],5
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x19F0]
	mov byte ptr [esp+0x24],4
	cmp eax,ebx
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	mov eax,dword ptr [esi+0x19EC]
	mov byte ptr [esp+0x24],3
	cmp eax,ebx
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	mov eax,dword ptr [esi+0x19E4]
	mov byte ptr [esp+0x24],2
	cmp eax,ebx
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block76:
	lea ecx,[esi+0x19C8]
	mov byte ptr [esp+0x24],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, long, unsigned long>::`vftable'
	call ZMap<unsigned long, long, unsigned long>::RemoveAll
	lea ecx,[esi+0x88]
	mov byte ptr [esp+0x24],bl
	call CAvatar::~CAvatar
	mov ecx,esi
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call CLife::~CLife
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret
}
}
// CUser::LoadBlessingArmor
__SUB_CLASS_THIS0(004F3B10, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x3A5C],0
	push edi
	jne Block10

 Block1:
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xC],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	push 0x129DAD
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	call CUser::LoadSkillRepeatEffect
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x3A5C]
	cmp edi,eax
	je Block8

 Block4:
	mov dword ptr [esi+0x3A5C],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	test edi,edi
	je Block8

 Block7:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block8:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	pop edi
	pop esi
	pop ecx
	ret
}
}
// CUser::PetInterActWithUserAction
__SUB_CLASS_THIS(000BC040, __thiscall, 16626,  CUser, long, long, long) {
__asm {

 Block0:
	mov eax,1
	ret 8
}
}
// CUser::AddSummonedList
_SUB_EXCEPTION_HANDLER(4F4AB0)
__SUB_CLASS_THIS(004F4AB0, __thiscall, 16631,  CUser, void, NakedParam<ZRef<CSummoned>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F4AB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x30]
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	cmp eax,ebx
	je Block11

 Block1:
	mov eax,dword ptr [eax+0xB4]
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x18],ebx
	lea ecx,[esp+0x14]
	push ecx
	lea edx,[esp+0x14]
	lea edi,[esi+0x2E4C]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x2C],1
	call ZMap<unsigned long, ZRef<CSummoned>, unsigned long>::GetAt
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x164]
	push ecx
	lea ecx,[esi+0x2E64]
	call ZList<ZRef<CSummoned>>::RemoveAt
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CSummoned>::_ReleaseRaw
	mov dword ptr [esp+0x18],ebx

 Block3:
	lea ecx,[esi+0x2E64]
	call ZList<ZRef<CSummoned>>::AddTail_
	mov esi,eax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	cmp dword ptr [esi+4],ebx
	je Block7

 Block6:
	push ebx
	mov ecx,esi
	call ZRef<CSummoned>::_ReleaseRaw
	mov dword ptr [esi+4],ebx

 Block7:
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [esi+4],edx
	mov eax,dword ptr [esp+0x30]
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x14]
	push edx
	mov ecx,edi
	mov dword ptr [eax+0x164],esi
	call ZMap<unsigned long, ZRef<CSummoned>, unsigned long>::Insert
	mov byte ptr [esp+0x24],bl
	cmp dword ptr [esp+0x18],ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CSummoned>::_ReleaseRaw

 Block9:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp dword ptr [esp+0x30],ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x30]
	call ZRef<CSummoned>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret 8
}
}
// CUser::SetSetItemEffect
_SUB_EXCEPTION_HANDLER(4F4BD0)
__SUB_CLASS_THIS0(004F4BD0, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F4BD0
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
	mov dword ptr [esp+0x20],esi
	xor edi,edi
	cmp dword ptr [esi+0x638],edi
	jne Block105

 Block1:
	mov ecx,dword ptr [esi+0x2E44]
	xor eax,eax
	add ecx,4
	lea esp,[esp]

 Block2:
	mov edx,dword ptr [ecx]
	cmp edx,edi
	je Block4

 Block3:
	mov edx,dword ptr [edx+0x88]
	mov edx,dword ptr [edx]
	jmp Block5

 Block4:
	xor edx,edx

 Block5:
	mov dword ptr [esp+eax*4+0x68],edx
	inc eax
	add ecx,8
	cmp eax,3
	jl Block2

 Block6:
	mov ecx,dword ptr [esi+0xA1]
	lea eax,[esp+0x68]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esi+0xA5]
	push edx
	call CItemInfo::GetSetItemEffect
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x1C],edi
	cmp eax,edi
	mov dword ptr [esp+0x80],edi
	mov dword ptr [esp+0x24],edi
	jge Block33

 Block7:
	mov dword ptr [esp+0x30],edi
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC]
	mov ecx,esi
	mov byte ptr [esp+0x80],1
	call edx
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	je Block26

 Block8:
	mov dword ptr [esp+0x5C],edi
	mov dword ptr [esp+0x54],edi
	mov dword ptr [esp+0x58],edi
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x44]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [esp+0x48]
	add ebx,0x521
	mov ecx,ebx
	mov byte ptr [esp+0x80],3
	call ZMap<long, EQUIPPED_SETITEM, long>::GetHeadPosition
	mov dword ptr [esp+0x28],eax
	cmp eax,edi
	je Block21

 Block9:
	lea esp,[esp]

 Block10:
	lea ecx,[esp+0x54]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	mov ecx,ebx
	call ZMap<long, EQUIPPED_SETITEM, long>::GetNext
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x1C]
	push edx
	add ecx,0x9C
	mov dword ptr [esp+0x20],eax
	call ZMap<long, ZRef<CItemInfo::SETITEMINFO>, long>::GetAt
	test eax,eax
	je Block16

 Block11:
	mov dword ptr [esp+0x38],0
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	add ecx,0x9C
	mov byte ptr [esp+0x88],4
	call ZMap<long, ZRef<CItemInfo::SETITEMINFO>, long>::GetAt
	mov esi,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x58]
	cmp edx,dword ptr [esi+0x1EC]
	je Block18

 Block12:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x84],3
	call ebp
	test eax,eax
	jne Block15

 Block13:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block15

 Block14:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block15:
	mov dword ptr [esp+0x38],0

 Block16:
	cmp dword ptr [esp+0x28],0
	jne Block10

 Block17:
	jmp Block21

 Block18:
	mov eax,dword ptr [esi]
	lea ecx,[esi+0x1F0]
	push ecx
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x18],eax
	call ZXString16::op_assign
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x28],1
	mov byte ptr [esp+0x84],3
	call ebp
	test eax,eax
	jne Block21

 Block19:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block21

 Block20:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block21:
	mov esi,dword ptr [esp+0x48]
	mov byte ptr [esp+0x80],2
	test esi,esi
	je Block25

 Block22:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block25

 Block23:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block25

 Block24:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block25:
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x80],1
	call ZArray<long>::RemoveAll
	xor edi,edi
	jmp Block28

 Block26:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	add esi,0x39C4
	push esi
	add ecx,0x9C
	call ZMap<long, ZRef<CItemInfo::SETITEMINFO>, long>::GetAt
	test eax,eax
	je Block28

 Block27:
	mov eax,dword ptr [esp+0x30]
	mov edx,dword ptr [esi]
	add eax,0x1F0
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x18],edx
	call ZXString16::op_assign
	mov dword ptr [esp+0x24],1

 Block28:
	mov byte ptr [esp+0x80],0
	cmp dword ptr [esp+0x30],edi
	je Block32

 Block29:
	mov esi,dword ptr [esp+0x30]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block32

 Block30:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block32

 Block31:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block32:
	cmp dword ptr [esp+0x14],0
	jl Block99

 Block33:
	mov ecx,dword ptr [esp+0x20]
	cmp dword ptr [ecx+0x5D0],0
	jne Block99

 Block34:
	mov edx,ecx
	cmp dword ptr [edx+0x5E4],0
	jne Block99

 Block35:
	push 0
	mov edi,ecx
	call CUser::GetAdditionalLayer
	mov ebx,dword ptr [esp+0x14]
	mov esi,eax
	cmp dword ptr [esi+8],ebx
	je Block103

 Block36:
	mov dword ptr [esp+0x18],0
	lea eax,[esp+0x28]
	push 0x9A8
	push eax
	mov byte ptr [esp+0x88],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x8C],6
	call ZXString16::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x80],5
	test eax,eax
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block38:
	cmp dword ptr [esp+0x24],0
	je Block40

 Block39:
	lea edx,[esp+0x1C]
	neg ebx
	push edx
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x18],ebx
	call ZXString16::op_assign

 Block40:
	mov dword ptr [esi+8],ebx
	mov ecx,dword ptr [edi+0x1960]
	push 0
	lea eax,[esi+0xC]
	push eax
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	call IWzGr2DLayer::Getflip
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	mov ecx,edi
	call CUser::LoadLayer
	test eax,eax
	je Block46

 Block43:
	push offset _D_VTMISSING
	lea ecx,[esp+0x48]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x84],7
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi+0x14]
	mov byte ptr [esp+0x80],8
	test ecx,ecx
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	lea eax,[esp+0x44]
	push eax
	lea edx,[esp+0x58]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x54]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x80],5
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block47

 Block46:
	push 0
	mov ecx,edi
	call CUser::RemoveAdditionalLayer

 Block47:
	lea eax,[esp+0x28]
	push 0xBCA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x8C],9
	call ZXString16::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x80],5
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block49:
	mov ebp,dword ptr [esp+0x20]
	push 1
	mov ecx,ebp
	call CUser::GetAdditionalLayer
	mov ecx,dword ptr [ebp+0x1960]
	mov esi,eax
	lea edx,[esp+0x28]
	xor ebx,ebx
	push edx
	lea edi,[esi+0xC]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	push edi
	cmp ecx,ebx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	call IWzGr2DLayer::Getflip
	push eax
	mov eax,dword ptr [esp+0x24]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,ebp
	call CUser::LoadLayer
	cmp eax,ebx
	je Block62

 Block52:
	mov dword ptr [esi+8],ebx
	mov dword ptr [edi],1
	mov ecx,dword ptr [esi+0x14]
	cmp ecx,ebx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	push 0xFFFFFFFF
	call IWzGr2DLayer::Putz
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	jl Block58

 Block55:
	mov ecx,dword ptr [esp+0x14]
	mov edx,3
	mov dword ptr [esi],ecx
	mov word ptr [esp+0x54],dx
	mov dword ptr [esp+0x5C],eax
	push offset _D_VTMISSING
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x84],0xA
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi+0x14]
	mov byte ptr [esp+0x80],0xB
	cmp ecx,ebx
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea eax,[esp+0x54]
	push eax
	lea edx,[esp+0x48]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x44]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x54]
	jmp Block61

 Block58:
	push offset _D_VTMISSING
	lea ecx,[esp+0x48]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x84],0xC
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi+0x14]
	mov byte ptr [esp+0x80],0xD
	cmp ecx,ebx
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	lea eax,[esp+0x44]
	push eax
	lea edx,[esp+0x58]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x54]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x44]

 Block61:
	mov byte ptr [esp+0x80],5
	call Ztl_variant_t::~Ztl_variant_t
	push ebx
	push ebx
	mov ecx,ebp
	call CUser::SetSetItemBackground
	jmp Block63

 Block62:
	push 1
	mov ecx,ebp
	call CUser::RemoveAdditionalLayer

 Block63:
	mov dword ptr [esp+0x24],ebx
	lea eax,[esp+0x28]
	push 0x12E5
	push eax
	mov byte ptr [esp+0x88],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x8C],0xF
	call ZXString16::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x80],0xE
	cmp eax,ebx
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block65:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push eax
	call esi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	lea edx,[esp+0x54]
	push edx
	mov byte ptr [esp+0x84],0x10
	call esi
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	mov eax,dword ptr [esp+0x18]
	push 0
	push 0
	lea ecx,[esp+0x4C]
	push ecx
	lea edx,[esp+0x60]
	push edx
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0x11
	push eax
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0x12
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0x13
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block74

 Block72:
	cmp eax,0x80004002
	je Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x80],0x15
	cmp word ptr [esp+0x34],di
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[esp+0x34]
	push eax
	call esi

 Block78:
	mov byte ptr [esp+0x80],0x16
	cmp word ptr [esp+0x54],di
	jne Block81

 Block79:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea edx,[esp+0x54]
	push edx
	call esi

 Block82:
	mov byte ptr [esp+0x80],0x17
	cmp word ptr [esp+0x44],di
	jne Block85

 Block83:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea ecx,[esp+0x44]
	push ecx
	call esi

 Block86:
	mov ebx,dword ptr [esp+0x28]
	test ebx,ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block91

 Block87:
	test ebx,ebx
	jne Block89

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
	mov ecx,ebx
	call IWzProperty::Getcount
	test eax,eax
	je Block91

 Block90:
	mov ecx,ebx
	call IWzProperty::Getcount
	mov dword ptr [ebp+0x2E48],eax
	jmp Block92

 Block91:
	mov dword ptr [ebp+0x2E48],1

 Block92:
	mov edx,dword ptr [ebp+0x2E48]
	push 3
	push edx
	lea eax,[esp+0x2C]
	push 0
	push eax
	call get_random_unique_array
	mov edi,dword ptr [esp+0x34]
	add esp,0x10
	xor esi,esi
	lea ebx,[ebx]

 Block93:
	mov ecx,dword ptr [ebp+0x2E44]
	mov ecx,dword ptr [esi+ecx+4]
	test ecx,ecx
	je Block95

 Block94:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [esp+0x14]
	push edx
	push eax
	call CPet::SetSetItemEffect
	add esi,8
	add edi,4
	cmp esi,0x18
	jl Block93

 Block95:
	mov byte ptr [esp+0x80],0xE
	test ebx,ebx
	je Block97

 Block96:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block97:
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x80],5
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block103

 Block98:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block103

 Block99:
	mov edi,dword ptr [esp+0x20]
	push 0
	mov ecx,edi
	call CUser::RemoveAdditionalLayer
	push 1
	mov ecx,edi
	call CUser::RemoveAdditionalLayer
	mov ebx,dword ptr [esp+0x14]
	xor esi,esi
	jmp Block101

 Block101:
	mov eax,dword ptr [edi+0x2E44]
	mov ecx,dword ptr [eax+esi*8+4]
	test ecx,ecx
	je Block103

 Block102:
	push esi
	push ebx
	call CPet::SetSetItemEffect
	inc esi
	cmp esi,3
	jl Block101

 Block103:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block105

 Block104:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block105:
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
// CUser::ThrowGrenade
_SUB_EXCEPTION_HANDLER(4F2840)
__SUB_CLASS_THIS(004F2840, __thiscall, 16720,  CUser, void, long, long, long, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F2840
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
	push 0
	call ZRefCounted_AllocHelper<CGrenade>::call
	add esp,4
	test eax,eax
	je Block2

 Block1:
	lea ebx,[eax+4]
	jmp Block3

 Block2:
	xor ebx,ebx

 Block3:
	mov dword ptr [ebx+4],1
	add ebx,0xFFFFFFFC
	mov dword ptr [esp+0x40],ebx
	lea ecx,[esi+0x2EE4]
	mov dword ptr [esp+0x80],0
	call ZList<ZRef<CGrenade>>::AddTail_
	mov edi,eax
	test ebx,ebx
	je Block5

 Block4:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	cmp dword ptr [edi+4],0
	je Block7

 Block6:
	push 0
	mov ecx,edi
	call ZRef<CGrenade>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block7:
	cmp dword ptr [ebp+8],0x423D0B
	mov dword ptr [edi+4],ebx
	je Block20

 Block8:
	mov edi,dword ptr [esi+0x195C]
	test edi,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block12

 Block11:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block12:
	mov ecx,dword ptr [ebp+0x18]
	mov edx,dword ptr [ebp+0x14]
	mov eax,dword ptr [esp+0x14]
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	push edx
	mov edx,dword ptr [ebp+8]
	push eax
	push esi
	push ecx
	push edx
	mov ecx,ebx
	call CGrenade::Init
	fild dword ptr [ebp+0x10]
	fdiv qword ptr [__real_408f400000000000]
	fmul qword ptr [__real_4082c00000000000]
	call __ftol2_sse
	test byte ptr [esi+0x640],1
	mov edi,eax
	je Block14

 Block13:
	neg eax
	mov dword ptr [esp+0x18],eax
	jmp Block15

 Block14:
	mov dword ptr [esp+0x18],edi

 Block15:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,ebx
	call CGrenade::GetVecCtrl
	mov eax,dword ptr [eax]
	test eax,eax
	je Block17

 Block16:
	lea ecx,[eax-0xC]
	jmp Block18

 Block17:
	xor ecx,ecx

 Block18:
	neg edi
	mov dword ptr [esp+0x1C],edi
	fild dword ptr [esp+0x1C]
	sub esp,0x10
	fstp qword ptr [esp+8]
	fild dword ptr [esp+0x28]
	fstp qword ptr [esp]
	call CVecCtrl::SetImpactNext_0
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block35

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block35

 Block20:
	mov eax,dword ptr [ebp+0x10]
	cmp eax,0x1F4
	mov dword ptr [esp+0x18],0x1F4
	jl Block22

 Block21:
	mov dword ptr [esp+0x18],eax

 Block22:
	fild dword ptr [esp+0x18]
	push 0x423D0B
	fstp qword ptr [esp+0x30]
	call get_max_gauge_time
	mov dword ptr [esp+0x24],eax
	fild dword ptr [esp+0x24]
	add esp,4
	fdivr qword ptr [esp+0x2C]
	fmul qword ptr [__real_408c200000000000]
	call __ftol2_sse
	mov ecx,eax
	imul ecx,eax
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x20]
	fsubr qword ptr [__real_412967e800000000]
	call __CIsqrt
	call __ftol2_sse
	mov dword ptr [esp+0x1C],eax
	fild dword ptr [esp+0x1C]
	fst qword ptr [esp+0x2C]
	fild dword ptr [esp+0x14]
	fst qword ptr [esp+0x34]
	fdivp st(1),st(0)
	fabs
	call __CIatan
	fld qword ptr [__real_4066800000000000]
	fdiv qword ptr [_D_PI__44]
	fmulp st(1),st(0)
	call __ftol2_sse
	mov edi,dword ptr [esi+0x195C]
	mov dword ptr [esp+0x24],eax
	test edi,edi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xD4]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block26

 Block25:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block26:
	mov edx,dword ptr [esp+0x24]
	mov edi,dword ptr [esp+0x18]
	push edx
	call get_update_time
	add eax,0x3B6
	push eax
	call get_update_time
	mov ecx,dword ptr [ebp+0x14]
	mov edx,dword ptr [ebp+0xC]
	add eax,0x1C2
	push eax
	mov eax,dword ptr [ebp+0x18]
	push 1
	push 0
	push 0
	push eax
	push ecx
	push edi
	push esi
	push edx
	push 0x423D0B
	mov ecx,ebx
	call CGrenade::Init
	test byte ptr [esi+0x640],1
	je Block28

 Block27:
	mov eax,dword ptr [esp+0x14]
	neg eax
	mov dword ptr [esp+0x18],eax
	jmp Block29

 Block28:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x18],ecx

 Block29:
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebx
	call CGrenade::GetVecCtrl
	mov eax,dword ptr [eax]
	test eax,eax
	je Block31

 Block30:
	lea ecx,[eax-0xC]
	jmp Block32

 Block31:
	xor ecx,ecx

 Block32:
	fld qword ptr [esp+0x2C]
	sub esp,0x10
	fstp qword ptr [esp+8]
	fild dword ptr [esp+0x28]
	fstp qword ptr [esp]
	call CVecCtrl::SetImpactNext_0
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x1C]
	add eax,ecx
	mov dword ptr [esp+0x24],eax
	fild dword ptr [esp+0x24]
	fld qword ptr [esp+0x34]
	fdiv st,st(1)
	fld qword ptr [esp+0x2C]
	fdivrp st(2),st
	fld qword ptr [__real_40f86a0000000000]
	fmul st(2),st
	fxch st(2)
	call __ftol2_sse
	fmulp st(1),st(0)
	push eax
	call __ftol2_sse
	push eax
	mov ecx,ebx
	call CGrenade::SetDragValue
	mov edx,dword ptr [esi+0x19E8]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edx
	call CAnimationDisplayer::RemovePrepareAnimation

 Block35:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test ebx,ebx
	je Block37

 Block36:
	push 0
	lea ecx,[esp+0x40]
	call ZRef<CGrenade>::_ReleaseRaw

 Block37:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x14
}
}
// CUser::RemoveDojangBerserkEffect
__SUB_CLASS_THIS0(004E1130, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3A4C]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+0x3A4C],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CGrenade::OnLayerZChanged
__SUB_CLASS_THIS(00168D50, __thiscall, 81213,  CGrenade, void, const CVecCtrl*) {
__asm {

 Block0:
	ret 4
}
}
// CUser::SetDriverID
__SUB_CLASS_THIS(00503360, __thiscall, 16637,  CUser, void, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x2E14],eax
	ret 4
}
}
// CUser::ADDITIONALLAYER::ADDITIONALLAYER
_SUB_EXCEPTION_HANDLER(4E1630)
__SUB_CLASS_THIS0(004E1630, __thiscall, 24403,  CUser::ADDITIONALLAYER, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E1630
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
	mov dword ptr [esp+0xC],esi
	xor edi,edi
	mov dword ptr [esi],0xFFFFFFFF
	mov dword ptr [esi+8],0xFFFFFFFF
	mov dword ptr [esi+0x14],edi
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x20],edi
	mov dword ptr [esi+0xC],1
	mov eax,dword ptr [esi+0x14]
	mov byte ptr [esp+0x18],1
	cmp eax,edi
	je Block2

 Block1:
	mov dword ptr [esi+0x14],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov dword ptr [esi+0x18],1
	mov eax,dword ptr [esi+0x20]
	cmp eax,edi
	je Block4

 Block3:
	mov dword ptr [esi+0x20],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUser::MakeIncDecHPEffect
__SUB_CLASS_THIS(004DE750, __thiscall, 16615,  CUser, void, long, int32_t) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+8]
	push edi
	call edx
	mov ecx,dword ptr [eax+0x12D0]
	push ecx
	add eax,0x12C8
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [esp+0x2C]
	xor edx,edx
	add esp,8
	test eax,eax
	setg dl
	mov eax,edx
	test ebx,ebx
	jle Block2

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x10]
	mov ebp,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	lea edi,[esi+4]
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,edi
	call edx
	add eax,4
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call edx
	push 0
	push 1
	push ebx
	lea ecx,[esi+0x88]
	mov edi,eax
	call CAvatar::GetHeight
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [ecx]
	sub edx,eax
	mov eax,dword ptr [edi]
	push edx
	push eax
	mov ecx,ebp
	call CAnimationDisplayer::Effect_HP
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8

 Block2:
	jge Block4

 Block3:
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	mov ebp,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	lea edi,[esi+4]
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	call edx
	add eax,4
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,edi
	call edx
	push 0
	push 2
	neg ebx
	push ebx
	lea ecx,[esi+0x88]
	mov edi,eax
	call CAvatar::GetHeight
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [ecx]
	sub edx,eax
	mov eax,dword ptr [edi]
	push edx
	push eax
	mov ecx,ebp
	call CAnimationDisplayer::Effect_HP
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8

 Block4:
	cmp dword ptr [esp+0x28],0
	jne Block7

 Block5:
	test eax,eax
	jne Block7

 Block6:
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	mov ebx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	lea edi,[esi+4]
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	call edx
	lea ebp,[eax+4]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,edi
	call edx
	push 2
	lea ecx,[esi+0x88]
	mov edi,eax
	call CAvatar::GetHeight
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [edi]
	sub ecx,eax
	push ecx
	push edx
	mov ecx,ebx
	call CAnimationDisplayer::Effect_Miss
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8

 Block7:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x10]
	mov ebx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	lea edi,[esi+4]
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call edx
	lea ebp,[eax+4]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,edi
	call edx
	push 2
	lea ecx,[esi+0x88]
	mov edi,eax
	call CAvatar::GetHeight
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [edi]
	sub ecx,eax
	push ecx
	push edx
	mov ecx,ebx
	call CAnimationDisplayer::Effect_Guard
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CUser::OnSummonedAttack
_SUB_EXCEPTION_HANDLER(4E38F0)
__SUB_CLASS_THIS(004E38F0, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E38F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x24]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x10],0
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esi+0x2E4C]
	mov dword ptr [esp+0x24],0
	call ZMap<unsigned long, ZRef<CSummoned>, unsigned long>::GetAt
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block2

 Block1:
	push edi
	call CSummoned::OnAttack
	push 0
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CSummoned>::_ReleaseRaw

 Block2:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CUser::RegisterSerialBullet
_SUB_EXCEPTION_HANDLER(4EA300)
__SUB_CLASS_THIS(004EA300, __thiscall, 16686,  CUser, void, long, ATTACKINFO&, const tagPOINT&, const CMob*, unsigned long, unsigned long&, const Ztl_bstr_t&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4EA300
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	jne Block2

 Block1:
	mov ecx,dword ptr [ecx+0x640]
	mov eax,dword ptr [esp+0x48]
	mov ebp,dword ptr [eax]
	mov eax,dword ptr [eax+4]
	and cl,1
	movsx edx,cl
	neg edx
	sbb edx,edx
	and edx,0xFFFFFFCE
	add edx,0x19
	add ebp,edx
	jmp Block3

 Block2:
	push 1
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,eax
	call CMob::GetBodyRect
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]
	add eax,edx
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x2C]
	mov ebp,eax
	lea eax,[edx+ecx]
	cdq
	sub eax,edx
	sar ebp,1
	sar eax,1

 Block3:
	mov ecx,dword ptr [esp+0x44]
	mov ecx,dword ptr [ecx]
	mov dword ptr [esp+0x1C],eax
	push 1
	lea eax,[esp+0x24]
	push eax
	call CMob::GetBodyRect
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]
	add eax,edx
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x2C]
	mov esi,eax
	lea eax,[edx+ecx]
	cdq
	sub eax,edx
	mov edi,eax
	sar edi,1
	mov ecx,edi
	sub ecx,dword ptr [esp+0x1C]
	sar esi,1
	mov edx,ecx
	mov eax,esi
	imul edx,ecx
	sub eax,ebp
	mov ecx,eax
	imul ecx,eax
	add edx,ecx
	mov dword ptr [esp+0x4C],edx
	fild dword ptr [esp+0x4C]
	call __CIsqrt
	mov edx,dword ptr [esp+0x54]
	mov ebx,dword ptr [edx]
	mov eax,dword ptr [esp+0x40]
	add ebx,dword ptr [esp+0x50]
	cmp eax,0x4E23EA
	je Block12

 Block4:
	cmp eax,0xE6935E
	jne Block19

 Block5:
	fadd st(0),st
	call __ftol2_sse
	mov dword ptr [esp+0x4C],eax
	mov eax,dword ptr [esp+0x58]
	mov eax,dword ptr [eax]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block7

 Block6:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ecx+0x1960]
	mov dword ptr [esp+0x40],1
	mov dword ptr [esp+0x50],eax
	test eax,eax
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0xB0]
	lea ecx,[esp+0x60]
	push ecx
	push eax
	mov dword ptr [esp+0x68],0
	call edx
	test eax,eax
	jge Block11

 Block10:
	mov ecx,dword ptr [esp+0x50]
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ecx
	push eax
	call _com_issue_errorex

 Block11:
	mov edx,dword ptr [esp+0x60]
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x54]
	push edx
	push edi
	push esi
	push eax
	push ebp
	add ecx,ebx
	push ecx
	mov dword ptr [esp+0x58],0xFFFFFFFF
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push ebx
	call CAnimationDisplayer::RegisterChainlightningAnimation
	jmp Block20

 Block12:
	fmul qword ptr [__real_3ff4000000000000]
	call __ftol2_sse
	mov edx,dword ptr [esp+0x58]
	push 1
	push ecx
	mov dword ptr [esp+0x54],eax
	mov eax,dword ptr [edx]
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block14

 Block13:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov eax,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax+0x1960]
	xor ecx,ecx
	mov dword ptr [esp+0x40],ecx
	mov dword ptr [esp+0x50],eax
	cmp eax,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x60]
	mov dword ptr [esp+0x60],ecx
	mov ecx,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [ecx+0xB0]
	call eax
	test eax,eax
	jge Block18

 Block17:
	mov ecx,dword ptr [esp+0x50]
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ecx
	push eax
	call _com_issue_errorex

 Block18:
	mov edx,dword ptr [esp+0x60]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x54]
	mov ecx,dword ptr [ecx]
	mov eax,esp
	mov dword ptr [esp+0x58],esp
	push eax
	call CMob::GetVecCtrl
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x5C]
	push edi
	push esi
	push edx
	push ebp
	add eax,ebx
	push eax
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push ebx
	call CAnimationDisplayer::RegisterMagicBulletAnimation
	jmp Block20

 Block19:
	fstp st(0)

 Block20:
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esp+0x4C]
	add eax,edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [edx+0x10],eax
	mov dword ptr [ecx],eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 0x1C
}
}
// CUser::LoadMoreWildFinishEffect
_SUB_EXCEPTION_HANDLER(4F6910)
__SUB_CLASS_THIS0(004F6910, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F6910
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
	mov ebp,ecx
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x1F962EE
	call CSkillInfo::GetSkill
	mov esi,eax
	mov eax,dword ptr [ebp+0x19E4]
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ecx,dword ptr [eax+0x1BC]
	push ecx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block5

 Block4:
	lea edx,[esp+0x24]
	push 0x9B1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x5C],edi
	mov ebx,1
	jmp Block13

 Block5:
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call SKILLENTRY::GetFinishUOL
	mov eax,dword ptr [eax]
	mov ebx,2
	mov dword ptr [esp+0x5C],1
	mov dword ptr [esp+0x14],ebx
	cmp eax,edi
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	jmp Block8

 Block7:
	xor edx,edx

 Block8:
	mov dword ptr [esp+0x18],edi
	cmp edx,edi
	je Block12

 Block9:
	mov eax,edx
	lea esi,[eax+2]

 Block10:
	mov cx,word ptr [eax]
	add eax,ebx
	cmp cx,di
	jne Block10

 Block11:
	sub eax,esi
	sar eax,1
	mov esi,eax
	lea ecx,[esi+esi]
	push ecx
	push edx
	push edi
	push esi
	lea ecx,[esp+0x28]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x1C]
	call ZXString16::ReleaseBuffer

 Block12:
	mov dword ptr [esp+0x5C],ebx
	lea eax,[esp+0x18]
	mov ebx,6

 Block13:
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x20],edi
	call ZXString16::op_assign
	mov dword ptr [esp+0x5C],4
	test bl,4
	je Block16

 Block14:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x14],ebx
	cmp eax,edi
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
	test bl,2
	je Block19

 Block17:
	mov ecx,dword ptr [esp+0x20]
	and ebx,0xFFFFFFFD
	cmp ecx,edi
	je Block19

 Block18:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x20],edi

 Block19:
	mov byte ptr [esp+0x5C],6
	test bl,1
	je Block22

 Block20:
	mov eax,dword ptr [esp+0x24]
	cmp eax,edi
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [ebp+0x19E4]
	cmp eax,edi
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	jmp Block25

 Block24:
	xor eax,eax

 Block25:
	mov edx,dword ptr [eax+0x1BC]
	push edx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	neg eax
	push edi
	sbb eax,eax
	push 0xFF
	neg eax
	push edi
	mov dword ptr [ebp+0x3A78],eax
	mov eax,dword ptr [ebp+0x1968]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	push edi
	push edi
	lea ecx,[ebp+0x88]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push eax
	mov byte ptr [esp+0x7C],7
	call CAvatar::GetTMNavelOrigin
	mov esi,dword ptr [ebp+0x1968]
	mov byte ptr [esp+0x78],8
	cmp esi,edi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[esp+0x34]
	push edx
	push esi
	mov dword ptr [esp+0x3C],edi
	call eax
	cmp eax,edi
	jge Block31

 Block30:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block31:
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x38]
	push ecx
	push edx
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x84],6
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x3A6C]
	add esp,0x28
	cmp esi,eax
	je Block36

 Block32:
	mov dword ptr [ebp+0x3A6C],eax
	cmp eax,edi
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block34:
	cmp esi,edi
	je Block36

 Block35:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block36:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block38:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push ecx
	call esi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea eax,[esp+0x34]
	mov bl,9
	push eax
	mov byte ptr [esp+0x60],bl
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov ecx,dword ptr [ebp+0x3A6C]
	mov byte ptr [esp+0x5C],0xA
	cmp ecx,edi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x38]
	push eax
	push edi
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x34],si
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,edi
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov byte ptr [esp+0x5C],6
	cmp word ptr [esp+0x44],si
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,edi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov eax,dword ptr [ebp+0x19E4]
	cmp eax,edi
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	jmp Block55

 Block54:
	xor eax,eax

 Block55:
	mov edx,dword ptr [eax+0x1BC]
	push edx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block86

 Block56:
	mov eax,dword ptr [ebp+0x1960]
	push edi
	push 0xFF
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block58:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push eax
	lea ecx,[ebp+0x88]
	mov byte ptr [esp+0x7C],0xB
	call CAvatar::GetTMNavelOrigin
	push offset _S_0
	lea ecx,[esp+0x48]
	push ecx
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x80],0xC
	call ZXString16::op_add_0
	mov edi,eax
	mov esi,dword ptr [ebp+0x1960]
	mov byte ptr [esp+0x78],0xD
	test esi,esi
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xD4]
	lea eax,[esp+0x34]
	push eax
	push esi
	mov dword ptr [esp+0x3C],0
	call ecx
	test eax,eax
	jge Block62

 Block61:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block62:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [esp+0x34]
	push edx
	push eax
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x84],0xE
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x3A70]
	add esp,0x28
	cmp esi,eax
	je Block67

 Block63:
	mov dword ptr [ebp+0x3A70],eax
	test eax,eax
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block65:
	test esi,esi
	je Block67

 Block66:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block67:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block69

 Block68:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block69:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],6
	test eax,eax
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block71:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push ecx
	call esi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	lea eax,[esp+0x44]
	mov bl,0xF
	push eax
	mov byte ptr [esp+0x60],bl
	call esi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	mov ecx,dword ptr [ebp+0x3A70]
	mov byte ptr [esp+0x5C],0x10
	test ecx,ecx
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x44],si
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov byte ptr [esp+0x5C],6
	cmp word ptr [esp+0x34],si
	jne Block84

 Block82:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block85:
	xor edi,edi

 Block86:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp eax,edi
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block88:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret
}
}
// CUser::RemoveAdditionalLayer
__SUB_CLASS_THIS(004E06F0, __thiscall, 16690,  CUser, CUser::ADDITIONALLAYER*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	push ebx
	push ebp
	push edi
	mov dword ptr [esp+0xC],ecx
	cmp eax,0x12
	ja Block20

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block3
cmp EAX, 3
je Block5
cmp EAX, 4
je Block10
cmp EAX, 5
je Block8
cmp EAX, 6
je Block9
cmp EAX, 7
je Block6
cmp EAX, 8
je Block18
cmp EAX, 9
je Block11
cmp EAX, 10
je Block12
cmp EAX, 11
je Block13
cmp EAX, 12
je Block7
cmp EAX, 13
je Block14
cmp EAX, 14
je Block20
cmp EAX, 15
je Block15
cmp EAX, 16
je Block16
cmp EAX, 17
je Block17
cmp EAX, 18
je Block19


 Block2:
	xor ebp,ebp
	lea ebx,[ebp+2]
	jmp Block21

 Block3:
	mov ebp,2
	mov ebx,ebp
	jmp Block21

 Block4:
	mov ebp,1
	lea ebx,[ebp+1]
	jmp Block21

 Block5:
	mov ebp,2
	lea ebx,[ebp+2]
	jmp Block21

 Block6:
	mov ebp,4
	lea ebx,[ebp+1]
	jmp Block21

 Block7:
	mov ebp,5
	lea ebx,[ebp+2]
	jmp Block21

 Block8:
	mov ebp,7
	lea ebx,[ebp+0xC]
	jmp Block21

 Block9:
	mov ebp,0x13
	lea ebx,[ebp+0xC]
	jmp Block21

 Block10:
	mov ebp,0x1F
	lea ebx,[ebp+0x14]
	jmp Block21

 Block11:
	mov ebp,0x33
	lea ebx,[ebp+1]
	jmp Block21

 Block12:
	mov ebp,0x34
	lea ebx,[ebp+2]
	jmp Block21

 Block13:
	mov ebp,0x36
	lea ebx,[ebp+5]
	jmp Block21

 Block14:
	mov ebp,0x3B
	lea ebx,[ebp+1]
	jmp Block21

 Block15:
	mov ebp,0x3C
	lea ebx,[ebp+1]
	jmp Block21

 Block16:
	mov ebp,0x3D
	mov ebx,ebp
	jmp Block21

 Block17:
	mov ebp,0x3E
	lea ebx,[ebp+1]
	jmp Block21

 Block18:
	mov ebp,0x3F
	lea ebx,[ebp+0xA]
	jmp Block21

 Block19:
	mov ebp,0x49
	lea ebx,[ebp+2]
	jmp Block21

 Block20:
	mov ebp,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0x14]

 Block21:
	cmp ebp,ebx
	mov edi,ebp
	jge Block31

 Block22:
	push esi
	lea esp,[esp]

 Block23:
	lea eax,[edi+edi*8]
	lea esi,[ecx+eax*4+0x2F24]
	mov dword ptr [esi+8],0xFFFFFFFF
	mov dword ptr [esi+0xC],1
	mov eax,dword ptr [esi+0x14]
	test eax,eax
	je Block25

 Block24:
	mov dword ptr [esi+0x14],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x10]

 Block25:
	mov dword ptr [esi],0xFFFFFFFF
	mov dword ptr [esi+0x18],1
	mov eax,dword ptr [esi+0x20]
	test eax,eax
	je Block27

 Block26:
	mov dword ptr [esi+0x20],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x10]

 Block27:
	cmp edi,1
	jne Block29

 Block28:
	mov dword ptr [ecx+0x2F50],0

 Block29:
	inc edi
	cmp edi,ebx
	jl Block23

 Block30:
	pop esi

 Block31:
	pop edi
	lea eax,[ebp+ebp*8]
	pop ebp
	lea eax,[ecx+eax*4+0x2F24]
	pop ebx
	pop ecx
	ret 4
}
}
// CUser::OnSummonedRemoved
_SUB_EXCEPTION_HANDLER(4E3790)
__SUB_CLASS_THIS(004E3790, __thiscall, 16633,  CUser, int32_t, unsigned long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E3790
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
	mov esi,ecx
	mov dword ptr [esp+0x14],0
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x2C]
	lea edi,[esi+0x2E4C]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x28],0
	call ZMap<unsigned long, ZRef<CSummoned>, unsigned long>::GetAt
	mov ebx,dword ptr [esp+0x14]
	test ebx,ebx
	jne Block2

 Block1:
	xor eax,eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 8

 Block2:
	mov edx,dword ptr [esp+0x2C]
	push edx
	mov ecx,ebx
	call CSummoned::OnRemoved
	mov eax,dword ptr [ebx+0x164]
	push eax
	lea ecx,[esi+0x2E64]
	call ZList<ZRef<CSummoned>>::RemoveAt
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call ZMap<unsigned long, ZRef<CSummoned>, unsigned long>::RemoveKey
	push 0
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZRef<CSummoned>::_ReleaseRaw
	mov eax,1
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 8
}
}
// CUser::ShowRecoverUpgradeCountEffect
_SUB_EXCEPTION_HANDLER(4E0380)
__SUB_CLASS_THIS(004E0380, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E0380
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block4

 Block1:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIEnchantDlg::ms_RTTI_CUIEnchantDlg
	call edx
	test eax,eax
	je Block4

 Block2:
	mov ecx,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test ecx,ecx
	je Block4

 Block3:
	call CUIEnchantDlg::RefreshToolTip

 Block4:
	mov eax,dword ptr [esi+0x1960]
	push 0
	push 0xFF
	push 3
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x60],0
	call CUser::GetVecCtrl_0
	push 0
	lea ecx,[esp+0x2C]
	push offset _S_EFFECTITEMEFFIMG
	push ecx
	mov dword ptr [esp+0x68],0xFFFFFFFF
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x44],1
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x44],2
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov ecx,dword ptr [esp+0xC]
	mov byte ptr [esp+0x40],3
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x1C]
	push edx
	push 0
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x40],2
	cmp word ptr [esp+0x18],si
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x18]
	push ecx
	call edi

 Block16:
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x28],si
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x28]
	push eax
	call edi

 Block20:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [eax],0
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x18]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x20],esp
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block22:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x38
	ret 4
}
}
// CUser::ShowSkillPrepare
_SUB_EXCEPTION_HANDLER(4E8160)
__SUB_CLASS_THIS(004E8160, __thiscall, 16709,  CUser, void, const SKILLENTRY*, long, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E8160
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
	mov ebp,ecx
	cmp dword ptr [ebp+0x638],0
	jne Block86

 Block1:
	mov esi,dword ptr [esp+0x48]
	mov ebx,dword ptr [esi+0x240]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x14],ebx
	test ebx,ebx
	je Block3

 Block2:
	lea eax,[ebx+8]
	push eax
	call edi

 Block3:
	cmp dword ptr [esp+0x50],0
	mov dword ptr [esp+0x40],0
	je Block10

 Block4:
	add esi,0x244
	lea ecx,[esp+0x14]
	cmp ecx,esi
	je Block10

 Block5:
	test ebx,ebx
	je Block7

 Block6:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block7:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block9

 Block8:
	mov edx,esi
	add edx,8
	push edx
	call edi

 Block9:
	mov ebx,dword ptr [esp+0x14]

 Block10:
	cmp dword ptr [esp+0x54],0
	je Block16

 Block11:
	mov esi,dword ptr [esp+0x48]
	add esi,0x248
	lea eax,[esp+0x14]
	cmp eax,esi
	je Block16

 Block12:
	test ebx,ebx
	je Block14

 Block13:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block14:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block86

 Block15:
	add esi,8
	push esi
	call edi
	mov ebx,dword ptr [esp+0x14]

 Block16:
	test ebx,ebx
	je Block86

 Block17:
	cmp dword ptr [ebx],0
	je Block85

 Block18:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block85

 Block19:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block85

 Block20:
	mov ecx,dword ptr [esp+0x48]
	mov edi,dword ptr [ecx]
	cmp edi,0x21612A9
	je Block26

 Block21:
	cmp edi,0x2179951
	je Block26

 Block22:
	lea ecx,[ebp+0x88]
	xor esi,esi
	call CAvatar::IsRidingWildHunterJaguar
	test eax,eax
	je Block25

 Block23:
	cmp edi,0x1F962F1
	jne Block25

 Block24:
	lea ecx,[ebp+0x614]
	call TSecType<long>::GetData
	mov esi,eax

 Block25:
	mov eax,dword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0x50]
	add eax,0xA
	imul eax,0x3E8
	push esi
	push 0
	push edx
	cdq
	and edx,0xF
	add eax,edx
	push 0x7FFFFFFF
	sar eax,4
	push eax
	push ecx
	lea eax,[ebp+0x1960]
	mov ecx,esp
	mov dword ptr [esp+0x60],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x6C],esp
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x60],0xC
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [ebp+0x640]
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [ebp+0x19E8]
	not eax
	and eax,1
	push eax
	push edx
	push ecx
	mov byte ptr [esp+0x68],0
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::Effect_SkillPrepare
	jmp Block85

 Block26:
	xor esi,esi
	mov dword ptr [esp+0x48],esi
	lea eax,[esp+0x50]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x48],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	lea ecx,[esp+0x4C]
	push ecx
	push eax
	mov byte ptr [esp+0x4C],2
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x5C]
	add esp,0xC
	mov byte ptr [esp+0x40],1
	cmp eax,esi
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block28:
	lea edx,[esp+0x50]
	push edx
	mov ecx,ebp
	call CUser::GetVecCtrl_0
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x40],3
	cmp ecx,esi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[esp+0x28]
	push eax
	call IWzVector2D::Getorigin
	movzx ecx,word ptr [eax]
	cmp cx,9
	je Block36

 Block31:
	cmp cx,0xD
	je Block36

 Block32:
	mov edx,0x4009
	cmp cx,dx
	je Block34

 Block33:
	mov edx,0x400D
	cmp cx,dx
	jne Block37

 Block34:
	mov eax,dword ptr [eax+8]
	cmp eax,esi
	je Block37

 Block35:
	mov esi,dword ptr [eax]
	jmp Block37

 Block36:
	mov esi,dword ptr [eax+8]

 Block37:
	mov edi,8
	mov byte ptr [esp+0x40],3
	cmp word ptr [esp+0x28],di
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block43:
	test esi,esi
	je Block55

 Block44:
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,ebp
	call CUser::GetVecCtrl_0
	mov ecx,dword ptr [eax]
	mov bl,6
	mov byte ptr [esp+0x40],bl
	test ecx,ecx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea edx,[esp+0x28]
	push edx
	call IWzVector2D::Getorigin
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],7
	test ecx,ecx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	push eax
	call IWzVector2D::Putorigin
	mov byte ptr [esp+0x40],bl
	cmp word ptr [esp+0x28],di
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block54

 Block53:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block54:
	mov ebx,dword ptr [esp+0x14]

 Block55:
	cmp dword ptr [ebp+0x5F8],0x1D7AF0
	jne Block79

 Block56:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x44],8
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	lea edx,[esp+0x54]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x44],9
	call CUser::GetVecCtrl_0
	mov esi,eax
	lea eax,[esp+0x50]
	mov bl,0xA
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x44],bl
	call CUser::GetVecCtrl_0
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x40],0xB
	test ecx,ecx
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	mov edi,dword ptr [eax]
	test edi,edi
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	mov esi,dword ptr [esp+0x48]
	test esi,esi
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzVector2D::Getry
	push eax
	mov ecx,edi
	call IWzVector2D::Getrx
	push eax
	mov ecx,esi
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x40],bl
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x40],9
	test eax,eax
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block70:
	mov esi,8
	mov byte ptr [esp+0x40],8
	cmp word ptr [esp+0x18],si
	jne Block73

 Block71:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x28],si
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov ebx,dword ptr [esp+0x14]

 Block79:
	mov eax,dword ptr [esp+0x4C]
	add eax,0xA
	imul eax,0x3E8
	push 0
	push 0
	cdq
	push 0
	and edx,0xF
	push 3
	add eax,edx
	sar eax,4
	push 0x7FFFFFFF
	push eax
	mov eax,dword ptr [ebp+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block81

 Block80:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block81:
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x70],esp
	test eax,eax
	je Block83

 Block82:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block83:
	mov eax,dword ptr [ebp+0x640]
	mov ecx,dword ptr [ebx]
	not eax
	and eax,1
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::Effect_SkillUse
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block85

 Block84:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block85:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block86:
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
// CUser::OnResolveMoveAction
_SUB_EXCEPTION_HANDLER(4E5800)
// 8E5BE4
static uint8_t _SUB_4E5800_LOOKUP_TABLE_0[21] = {
0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 0, 0, 
};
__SUB_CLASS_THIS(004E5800, __thiscall, 16662,  CUser, long, long, long, long, const CVecCtrl*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E5800
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
	mov edi,ecx
	mov eax,dword ptr [edi+0x2E88]
	mov esi,dword ptr [esp+0x2C]
	test eax,eax
	je Block12

 Block1:
	mov eax,dword ptr [edi+0x63C]
	lea ebx,[edi+0x84]
	push 0
	push eax
	mov ecx,ebx
	call CAvatar::MoveAction2RawAction
	mov ecx,ebx
	mov ebp,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block3

 Block2:
	mov ecx,ebx
	call CAvatar::GetOneTimeAction
	jmp Block4

 Block3:
	mov eax,ebp

 Block4:
	sub eax,0x2D
	cmp eax,0x14
	ja Block12

 Block5:
	movzx eax,byte ptr [eax+_SUB_4E5800_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block12


 Block6:
	mov ecx,ebx
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jg Block10

 Block7:
	mov ecx,dword ptr [esp+0x34]
	call CVecCtrl::IsStopped
	test eax,eax
	je Block10

 Block8:
	test esi,esi
	jne Block10

 Block9:
	lea eax,[esi+1]
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	mov ecx,dword ptr [edi+0x2E88]
	mov dword ptr [ecx+4],eax

 Block12:
	mov ebp,dword ptr [esp+0x30]
	mov ebx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x34]
	and ebp,1
	test ebx,ebx
	jne Block17

 Block13:
	cmp dword ptr [ecx+0x1A0],ebx
	je Block33

 Block14:
	test esi,esi
	jle Block16

 Block15:
	lea esi,[ebx+5]
	jmp Block49

 Block16:
	xor ecx,ecx
	cmp dword ptr [edi+0x638],ecx
	setg cl
	lea ecx,[ecx+ecx+2]
	mov esi,ecx
	jmp Block49

 Block17:
	cmp dword ptr [ecx+0x1A0],0
	je Block33

 Block18:
	mov edx,dword ptr [edi-4]
	mov eax,dword ptr [edx+8]
	lea ebp,[edi-4]
	mov ecx,ebp
	call eax
	mov ecx,dword ptr [eax+0x13C4]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	call eax
	test al,al
	je Block21

 Block19:
	mov ecx,ebp
	call CUser::GetDashingSkill
	cmp eax,0x41EEE8
	jne Block21

 Block20:
	xor edx,edx
	test ebx,ebx
	setl dl
	mov esi,0x13
	mov ebp,edx
	jmp Block49

 Block21:
	cmp dword ptr [edi+0x2E8C],0x13
	mov esi,1
	jne Block32

 Block22:
	push 0x51
	lea ecx,[edi+0x84]
	call CAvatar::SetOneTimeAction
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebp
	call CUser::GetVecCtrl_0
	mov ebx,dword ptr [eax]
	test ebx,ebx
	je Block24

 Block23:
	add ebx,0xFFFFFFF4
	jmp Block25

 Block24:
	xor ebx,ebx

 Block25:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block27:
	push 0x12
	mov ecx,ebx
	call CVecCtrl::SetMovePathAttribute
	fld qword ptr [__real_3fd999999999999a]
	fstp qword ptr [ebx+0x2E8]
	mov dword ptr [ebx+0x2E4],0x190
	mov eax,dword ptr [edi+0x195C]
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block29:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x38],0
	call CUser::GetVecCtrl_0
	lea ecx,[esp+0x44]
	push 0x1686
	push ecx
	mov byte ptr [esp+0x3C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi+0x63C]
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x34],2
	not ecx
	and ecx,1
	push ecx
	mov byte ptr [esp+0x38],3
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block31:
	mov ebx,dword ptr [esp+0x28]

 Block32:
	xor edx,edx
	test ebx,ebx
	setl dl
	mov ebp,edx
	jmp Block49

 Block33:
	call CVecCtrl::IsOnLadder
	test eax,eax
	je Block38

 Block34:
	mov eax,dword ptr [edi+0x5F4]
	cmp eax,0x1D05D8
	je Block41

 Block35:
	cmp eax,0x1D05D9
	je Block41

 Block36:
	cmp eax,0x1D05DA
	je Block41

 Block37:
	mov esi,7
	jmp Block49

 Block38:
	mov ecx,dword ptr [esp+0x34]
	call CVecCtrl::IsOnRope
	test eax,eax
	je Block42

 Block39:
	lea ecx,[edi+0x84]
	call CAvatar::IsRidingEvanDragon
	test eax,eax
	jne Block41

 Block40:
	lea esi,[eax+8]
	jmp Block49

 Block41:
	neg esi
	sbb esi,esi
	add esi,2
	jmp Block49

 Block42:
	cmp dword ptr [edi+0x5EC],0
	mov esi,3
	je Block44

 Block43:
	mov esi,0x14

 Block44:
	mov ecx,dword ptr [esp+0x34]
	call CVecCtrl::IsSwimming
	test eax,eax
	je Block46

 Block45:
	mov esi,6

 Block46:
	test ebx,ebx
	jge Block48

 Block47:
	mov ebp,1
	jmp Block49

 Block48:
	xor eax,eax
	test ebx,ebx
	setg al
	dec eax
	and ebp,eax

 Block49:
	lea ebx,[edi+0x84]
	mov ecx,ebx
	call CAvatar::GetOneTimeAction
	cmp eax,0xCF
	jne Block55

 Block50:
	cmp esi,7
	je Block52

 Block51:
	cmp esi,8
	jne Block55

 Block52:
	mov eax,dword ptr [edi+0x3A78]
	test eax,eax
	je Block54

 Block53:
	mov dword ptr [edi+0x3A78],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	or eax,0xFFFFFFFF
	push 1
	mov ecx,ebx
	mov dword ptr [ebx+0x5BC],eax
	mov dword ptr [ebx+0x5A8],eax
	call CAvatar::ClearActionLayer
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x14]
	push 0
	push 0x64
	push 6
	mov ecx,ebx
	call edx

 Block55:
	mov ecx,dword ptr [esp+0x34]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+8]
	call edx
	test eax,eax
	je Block65

 Block56:
	mov eax,dword ptr [esp+0x34]
	cmp dword ptr [eax+0x1A0],0
	jne Block65

 Block57:
	mov ecx,ebx
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jg Block65

 Block58:
	mov ecx,dword ptr [edi+0x5F4]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0xC1
	mov ecx,dword ptr [esp+0x34]
	jne Block64

 Block59:
	call CVecCtrl::IsStopped
	test eax,eax
	jne Block63

 Block60:
	mov ecx,ebx
	call CAvatar::IsRidingWildHunterJaguar
	test eax,eax
	jne Block63

 Block61:
	cmp dword ptr [edi+0x5F4],0x1D7AF0
	je Block63

 Block62:
	lea esi,[eax+2]
	jmp Block65

 Block63:
	mov esi,6
	jmp Block65

 Block64:
	call CVecCtrl::IsStopped
	mov esi,eax
	neg esi
	sbb esi,esi
	add esi,0x12

 Block65:
	mov eax,ebp
	and eax,1
	lea edx,[esi+esi]
	mov dword ptr [edi+0x2E8C],esi
	or eax,edx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x10
}
}
// CUser::FixedPosTo
__SUB_CLASS_THIS(004E0190, __thiscall, 16636,  CUser, long, unsigned long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	mov ebp,ecx
	mov eax,dword ptr [ebp+0x19E4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	mov dword ptr [esp+0xC],eax
	jmp Block3

 Block2:
	mov dword ptr [esp+0xC],0

 Block3:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	mov ebx,eax
	test ebx,ebx
	jne Block5

 Block4:
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x10
	ret 0xC

 Block5:
	push esi
	push edi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebx
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	test eax,eax
	je Block7

 Block6:
	lea esi,[eax-0xC]
	jmp Block8

 Block7:
	xor esi,esi

 Block8:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	mov edi,dword ptr [esi+0x1D8]
	mov edx,dword ptr [ebx+4]
	mov edx,dword ptr [edx+0x10]
	lea esi,[ebx+4]
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x24],eax
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,edi
	sar ecx,1
	mov dword ptr [esp+0x10],eax
	cmp ecx,7
	je Block15

 Block11:
	cmp ecx,8
	je Block15

 Block12:
	test byte ptr [ebx+0x640],1
	mov eax,dword ptr [esp+0x28]
	jne Block14

 Block13:
	neg eax

 Block14:
	add dword ptr [esp+0x24],eax
	jmp Block16

 Block15:
	add eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x10],eax

 Block16:
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	call CVecCtrl::UpdatePassive
	mov esi,eax
	cmp esi,0xFFFFFFFF
	jne Block18

 Block17:
	xor esi,esi

 Block18:
	mov edx,dword ptr [ebp+0x88]
	mov eax,dword ptr [edx+0x10]
	lea ecx,[ebp+0x88]
	push 0
	push edi
	call eax
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0xC
}
}
// CUser::ShowEffectRocketBooster
_SUB_EXCEPTION_HANDLER(4EF660)
__SUB_CLASS_THIS(004EF660, __thiscall, 16712,  CUser, void, const SKILLENTRY*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4EF660
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ebp,dword ptr [esp+0x28]
	test ebp,ebp
	je Block15

 Block1:
	lea esi,[edi+0x88]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	or ecx,0xFFFFFFFF
	cmp eax,ecx
	jle Block3

 Block2:
	mov dword ptr [esi+0x5BC],ecx
	mov dword ptr [esi+0x5A8],ecx
	push 1
	mov ecx,esi
	call CAvatar::ClearActionLayer

 Block3:
	mov eax,dword ptr [edi+0x5E8]
	sub eax,0x217E76D
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFCA
	add eax,0x107
	push 0
	mov dword ptr [edi+0x644],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push 0x64
	push 6
	mov ecx,esi
	call edx
	mov eax,dword ptr [esp+0x2C]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebp
	call SKILLENTRY::GetEffectUOL
	mov esi,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x20],0
	test esi,esi
	je Block15

 Block4:
	cmp dword ptr [esi],0
	je Block14

 Block5:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block14

 Block6:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block14

 Block7:
	mov eax,dword ptr [edi+0x1960]
	push 0
	push 0
	push 0
	push 3
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block9:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x44],1
	call CUser::GetVecCtrl_0
	mov edi,dword ptr [edi+0x1960]
	mov byte ptr [esp+0x40],2
	test edi,edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xD4]
	lea eax,[esp+0x48]
	push eax
	push edi
	mov dword ptr [esp+0x50],0
	call ecx
	test eax,eax
	jge Block13

 Block12:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block13:
	mov edx,dword ptr [esp+0x48]
	mov eax,dword ptr [esi]
	push edx
	mov byte ptr [esp+0x44],0
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_SkillUse

 Block14:
	mov ecx,esi
	call _xbstr_t::Data_t::Release

 Block15:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x14
	ret 8
}
}
// CUser::SetMapSpecificEffect
_SUB_EXCEPTION_HANDLER(4F0460)
__SUB_CLASS_THIS0(004F0460, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F0460
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	cmp dword ptr [edi+0x638],0
	jne Block15

 Block1:
	mov ebx,dword ptr [_D_G_PSTAGE+4]
	test ebx,ebx
	je Block15

 Block2:
	mov eax,dword ptr [ebx+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[ebx+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block15

 Block3:
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebx
	call CField::GetMapSpecificEffectUOL
	mov ebp,dword ptr [esp+0x14]
	mov dword ptr [esp+0x44],0
	test ebp,ebp
	je Block5

 Block4:
	cmp word ptr [ebp],0
	jne Block7

 Block5:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test ebp,ebp
	je Block15

 Block6:
	jmp Block14

 Block7:
	push 9
	mov ecx,edi
	call CUser::GetAdditionalLayer
	lea ecx,[ebx+0x16C]
	mov esi,eax
	call TSecType<unsigned long>::GetData
	lea ecx,[esi+0xC]
	push 0
	mov dword ptr [esi+8],eax
	push ecx
	mov ecx,dword ptr [edi+0x1960]
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	call IWzGr2DLayer::Getflip
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push ebp
	call _xbstr_t::_ctor_1
	mov ecx,edi
	call CUser::LoadLayer
	test eax,eax
	je Block13

 Block10:
	push offset _D_VTMISSING
	lea ecx,[esp+0x30]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x48],1
	call Ztl_variant_t::_ctor_1
	mov esi,dword ptr [esi+0x14]
	mov byte ptr [esp+0x44],2
	test esi,esi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0x20
	mov ecx,esi
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::~Ztl_variant_t

 Block13:
	mov dword ptr [esp+0x44],0xFFFFFFFF

 Block14:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block15:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret
}
}
// CUser::OnShowPQReward
_SUB_EXCEPTION_HANDLER(4E6850)
__SUB_CLASS_THIS(004E6850, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E6850
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
	mov dword ptr [esp+0x10],0
	mov ebp,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0
	mov edi,6
	lea ecx,[ecx]

 Block1:
	mov ecx,ebp
	call CInPacket::Decode1
	push 0xFFFFFFFF
	lea ecx,[esp+0x14]
	movzx esi,al
	call ZArray<int>::InsertBefore
	sub edi,1
	mov dword ptr [eax],esi
	jne Block1

 Block2:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],edi
	jne Block6

 Block3:
	push 0xC3C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block5

 Block4:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,eax
	call CUIPQReward::_ctor_0

 Block5:
	mov byte ptr [esp+0x1C],0

 Block6:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	push 0
	call CWvsContext::UI_Open
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<int>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x10
	ret 4
}
}
// CUser::OnSummonedHit
_SUB_EXCEPTION_HANDLER(4E3A10)
__SUB_CLASS_THIS(004E3A10, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E3A10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x24]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x10],0
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esi+0x2E4C]
	mov dword ptr [esp+0x24],0
	call ZMap<unsigned long, ZRef<CSummoned>, unsigned long>::GetAt
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block2

 Block1:
	push edi
	call CSummoned::OnHit
	push 0
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CSummoned>::_ReleaseRaw

 Block2:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CUser::UpdateFlyingWingEffect
_SUB_EXCEPTION_HANDLER(4F3620)
__SUB_CLASS_THIS0(004F3620, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F3620
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+8]
	call edx
	mov ecx,dword ptr [eax+0xE10]
	push ecx
	add eax,0xE08
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block11

 Block1:
	cmp dword ptr [esi+0x3A8C],0
	sete al
	test al,al
	je Block11

 Block2:
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x40]
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call eax
	push eax
	push 0x402
	call get_novice_skill_as_race
	add esp,8
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call CUser::LoadSkillRepeatEffect
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x3A8C]
	cmp edi,eax
	je Block9

 Block5:
	mov dword ptr [esi+0x3A8C],eax
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block7:
	test edi,edi
	je Block9

 Block8:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block9:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block15

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+8]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [eax+0xE10]
	push ecx
	add eax,0xE08
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block15

 Block12:
	cmp dword ptr [esi+0x3A8C],eax
	je Block15

 Block13:
	mov eax,dword ptr [esi+0x3A8C]
	test eax,eax
	je Block15

 Block14:
	mov dword ptr [esi+0x3A8C],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block15:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CUser::_RemoveItemRepeatEffect
__SUB_CLASS_THIS0(004E1170, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3A84]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+0x3A84],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CUser::TryDoingCycloneAfter
_SUB_EXCEPTION_HANDLER(4F4380)
__SUB_CLASS_THIS0(004F4380, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F4380
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x1EA20AB
	call CSkillInfo::GetSkill
	push 0
	push 0xFF
	push 0
	push ecx
	mov esi,eax
	mov eax,dword ptr [edi+0x1968]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [edi+0x1938]
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	lea eax,[esp+0x30]
	push eax
	mov ecx,esi
	call SKILLENTRY::GetFinishUOL
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x60],0
	test eax,eax
	je Block6

 Block5:
	mov eax,dword ptr [eax]
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push 0
	push eax
	lea ecx,[esp+0x34]
	push ecx
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x197C]
	add esp,0x28
	cmp esi,eax
	je Block12

 Block8:
	mov dword ptr [edi+0x197C],eax
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block10:
	test esi,esi
	je Block12

 Block11:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block12:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test ecx,ecx
	je Block16

 Block15:
	call _xbstr_t::Data_t::Release

 Block16:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea edx,[esp+0x1C]
	mov ebx,1
	push edx
	mov dword ptr [esp+0x48],ebx
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [edi+0x197C]
	mov byte ptr [esp+0x44],2
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x44],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x1C],si
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x1C]
	push edx
	call ebx

 Block26:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp word ptr [esp+0x2C],si
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x2C]
	push ecx
	call ebx

 Block30:
	mov edx,dword ptr [edi+0x88]
	mov eax,dword ptr [edx+0x14]
	push 0
	lea ecx,[edi+0x88]
	push 0x64
	push 6
	mov dword ptr [edi+0x644],0xCE
	call eax
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x38
	ret
}
}
// CGrenade::GetPosPrev
__SUB_CLASS_THIS0(004E2E90, __thiscall, 81215,  CGrenade, const tagPOINT) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0x2C]
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [ecx+0x30]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ecx
	ret 4
}
}
// CUser::OnFollowCharacter
__SUB_CLASS_THIS(004E3220, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	sub esp,0x1C
	push ebx
	mov ebx,dword ptr [esp+0x24]
	push ebp
	push esi
	mov esi,ecx
	push edi
	mov ecx,ebx
	call CInPacket::Decode4
	mov edi,eax
	xor ebp,ebp
	mov dword ptr [esp+0x28],edi
	test edi,edi
	jne Block24

 Block1:
	mov ecx,ebx
	call CInPacket::Decode1
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	movzx eax,al
	lea edi,[esi+4]
	mov dword ptr [esp+0x10],eax
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	call edx
	mov ebp,dword ptr [eax]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call edx
	mov edi,dword ptr [esp+0x10]
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x24],eax
	test edi,edi
	je Block3

 Block2:
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov ebp,eax
	call CInPacket::Decode4
	mov dword ptr [esp+0x24],eax

 Block3:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov edx,dword ptr [eax+0x1A0]
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x30],edx
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x2E98]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	mov ebx,eax
	test ebx,ebx
	je Block15

 Block9:
	mov dword ptr [ebx+0x2E9C],0
	test edi,edi
	jne Block15

 Block10:
	mov edx,dword ptr [ebx+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[ebx+4]
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	call edx
	mov ebp,dword ptr [eax]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0x28],eax
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	jmp Block13

 Block12:
	xor eax,eax

 Block13:
	mov edx,dword ptr [eax+0x1A0]
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x30],edx
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov eax,dword ptr [esi+0x19E4]
	test eax,eax
	je Block17

 Block16:
	lea edi,[eax-0xC]
	jmp Block18

 Block17:
	xor edi,edi

 Block18:
	mov ebx,dword ptr [esp+0x24]
	mov eax,dword ptr [edi+0xC]
	mov ecx,dword ptr [eax+0x40]
	push ebx
	add edi,0xC
	push ebp
	push edi
	call ecx
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	lea edi,[esi+0x1984]
	push ebp
	lea ecx,[edi+0xC]
	call TSecType<long>::SetData
	push ebx
	mov ecx,edi
	call TSecType<long>::SetData
	mov edi,dword ptr [esi+0x19E4]
	test edi,edi
	je Block22

 Block21:
	add edi,0xFFFFFFF4
	jmp Block23

 Block22:
	xor edi,edi

 Block23:
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [esi+0x640]
	mov edx,dword ptr [edi]
	push ecx
	push eax
	push 0
	push 0
	mov dword ptr [esp+0x30],edx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xC]
	push ebx
	push ebp
	mov ecx,esi
	call eax
	mov edx,dword ptr [esp+0x38]
	push eax
	mov eax,dword ptr [edx+4]
	mov ecx,edi
	call eax
	mov edi,dword ptr [esp+0x28]
	mov ebp,dword ptr [esp+0x10]
	jmp Block30

 Block24:
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov eax,dword ptr [ecx+8]
	mov edx,dword ptr [eax+0x3BA0]
	push edx
	add eax,0x3B98
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 1
	push 0
	push 0
	call CWvsContext::SendFollowCharacterRequest
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4

 Block26:
	mov eax,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov eax,dword ptr [eax+8]
	cmp dword ptr [eax+0x19E8],edi
	jne Block28

 Block27:
	mov ecx,dword ptr [esi+0x19E8]
	mov dword ptr [eax+0x2E9C],ecx

 Block28:
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push edi
	call CUserPool::GetUser
	test eax,eax
	je Block30

 Block29:
	mov edx,dword ptr [esi+0x19E8]
	mov dword ptr [eax+0x2E9C],edx

 Block30:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC]
	mov ecx,esi
	call edx
	test eax,eax
	je Block33

 Block31:
	test ebp,ebp
	je Block33

 Block32:
	mov eax,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov ecx,dword ptr [eax+8]
	mov dword ptr [ecx+0x46E4],1

 Block33:
	mov ebx,dword ptr [esi+0x2E98]
	mov ecx,esi
	mov dword ptr [esi+0x2E98],edi
	call CUser::SetLayerZ
	test edi,edi
	ja Block35

 Block34:
	mov edi,ebx

 Block35:
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push edi
	call CUserPool::GetUser
	test eax,eax
	je Block37

 Block36:
	mov ecx,eax
	call CUser::SetLayerZ

 Block37:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CUser::RemoveSwallowingEffect
__SUB_CLASS_THIS0(004E1320, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3A60]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+0x3A60],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CUser::LoadDarkForceEffect
_SUB_EXCEPTION_HANDLER(4F3E10)
__SUB_CLASS_THIS0(004F3E10, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F3E10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x142446
	call CSkillInfo::GetSkill
	push 0xD
	mov ecx,esi
	mov edi,eax
	call CUser::GetAdditionalLayer
	xor ebx,ebx
	push ebx
	push 0xFF
	push 3
	push ecx
	mov ebp,eax
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push eax
	lea ecx,[esi+0x88]
	call CAvatar::GetLayerUnderFace
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x70],ebx
	call CUser::GetVecCtrl_0
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	mov byte ptr [esp+0x6C],1
	call eax
	movzx ecx,al
	push ecx
	lea edx,[esp+0x3C]
	push edx
	mov ecx,edi
	call SKILLENTRY::GetEffectUOL
	mov edi,eax
	mov esi,dword ptr [esi+0x1960]
	mov byte ptr [esp+0x6C],2
	cmp esi,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x30]
	push ecx
	push esi
	mov dword ptr [esp+0x38],ebx
	call edx
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block6

 Block5:
	mov eax,dword ptr [eax]
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov ecx,dword ptr [esp+0x30]
	push ecx
	push eax
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x78],3
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x14]
	add esp,0x28
	cmp esi,eax
	je Block12

 Block8:
	mov dword ptr [ebp+0x14],eax
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block10:
	cmp esi,ebx
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block12:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block14:
	mov ecx,dword ptr [esp+0x1C]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x50],edi
	cmp ecx,ebx
	je Block16

 Block15:
	call _xbstr_t::Data_t::Release

 Block16:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea eax,[esp+0x28]
	mov ebx,4
	push eax
	mov dword ptr [esp+0x54],ebx
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [ebp+0x14]
	mov byte ptr [esp+0x50],5
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x50],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x28],si
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x28]
	push edx
	call ebx

 Block26:
	mov dword ptr [esp+0x50],edi
	cmp word ptr [esp+0x38],si
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret

 Block29:
	lea ecx,[esp+0x38]
	push ecx
	call ebx

 Block30:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret
}
}
// CUser::SetActivePortableChair
_SUB_EXCEPTION_HANDLER(4EFF80)
__SUB_CLASS_THIS(004EFF80, __thiscall, 16618,  CUser, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4EFF80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	cmp dword ptr [esi+0x638],ebx
	jne Block49

 Block1:
	mov edi,dword ptr [esp+0x54]
	mov eax,0x10624DD3
	imul edi
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xBC4
	jne Block3

 Block2:
	mov ecx,dword ptr [esi+0x19E8]
	push edi
	push ecx
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	call CUserPool::OnCoupleChairRecordAdd
	jmp Block4

 Block3:
	mov edx,dword ptr [esi+0x19E8]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push edx
	call CUserPool::OnCoupleChairRecordRemove

 Block4:
	push 0xA
	mov ecx,esi
	call CUser::GetAdditionalLayer
	mov ebp,eax
	cmp edi,ebx
	jne Block7

 Block5:
	push 0xA
	call CUser::RemoveAdditionalLayer
	mov ecx,dword ptr [esi+0x5F8]
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x7BF
	jne Block49

 Block6:
	push ebx
	lea ecx,[esi+0x88]
	call CAvatar::SetRidingChair
	jmp Block49

 Block7:
	cmp dword ptr [ebp+8],edi
	je Block49

 Block8:
	push 0xA
	call CUser::RemoveAdditionalLayer
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x4C],ebx
	mov dword ptr [esp+0x14],ebx
	lea ecx,[esp+0x54]
	push 0x955
	push ecx
	mov byte ptr [esp+0x54],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x58],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x60]
	add esp,0xC
	mov byte ptr [esp+0x4C],1
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	lea eax,[esp+0x54]
	push 0x956
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x58],3
	call ZXString16::Format
	mov eax,dword ptr [esp+0x60]
	add esp,0xC
	mov byte ptr [esp+0x4C],1
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	mov dword ptr [ebp+8],edi
	mov ecx,dword ptr [esi+0x1960]
	push ebx
	lea edx,[ebp+0xC]
	push edx
	cmp ecx,ebx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	call IWzGr2DLayer::Getflip
	push eax
	mov eax,dword ptr [esp+0x24]
	push ecx
	mov dword ptr [esp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CUser::LoadLayer
	cmp eax,ebx
	je Block18

 Block15:
	push offset _D_VTMISSING
	lea ecx,[esp+0x38]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x50],4
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp+0x14]
	mov byte ptr [esp+0x4C],5
	cmp ecx,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x24]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x4C],1
	call Ztl_variant_t::~Ztl_variant_t

 Block18:
	lea ecx,[ebp+0x30]
	push ebx
	push ecx
	mov ecx,dword ptr [esi+0x1960]
	cmp ecx,ebx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	call IWzGr2DLayer::Getflip
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x64],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CUser::LoadLayer
	cmp eax,ebx
	je Block24

 Block21:
	push offset _D_VTMISSING
	lea ecx,[esp+0x28]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x50],6
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp+0x38]
	mov byte ptr [esp+0x4C],7
	cmp ecx,ebx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[esp+0x24]
	push eax
	lea edx,[esp+0x38]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x34]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x24]
	call Ztl_variant_t::~Ztl_variant_t

 Block24:
	mov dword ptr [esp+0x54],ebx
	lea eax,[esp+0x20]
	push 0x14CC
	push eax
	mov byte ptr [esp+0x54],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push edi
	add eax,edx
	push eax
	push ecx
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x5C],9
	call ZXString16::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0x10
	mov byte ptr [esp+0x4C],8
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block26:
	mov ecx,dword ptr [esi+0x1960]
	push ebx
	lea edx,[ebp+0x18]
	push edx
	cmp ecx,ebx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	call IWzGr2DLayer::Getflip
	push eax
	mov eax,dword ptr [esp+0x60]
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CUser::LoadLayer
	cmp eax,ebx
	je Block32

 Block29:
	push offset _D_VTMISSING
	lea ecx,[esp+0x28]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x50],0xA
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp+0x20]
	mov byte ptr [esp+0x4C],0xB
	cmp ecx,ebx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x34]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x4C],8
	call Ztl_variant_t::~Ztl_variant_t

 Block32:
	push edi
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemInfo
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xF12
	mov bl,0xC
	push edx
	mov byte ptr [esp+0x5C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x54],0xD
	test ecx,ecx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x58],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x54],0xE
	call get_int32
	add esp,8
	cmp word ptr [esp+0x24],8
	mov edi,eax
	mov byte ptr [esp+0x4C],bl
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	test edi,edi
	je Block41

 Block39:
	mov eax,0x10624DD3
	imul edi
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x7BF
	jne Block41

 Block40:
	push edi
	lea ecx,[esi+0x88]
	call CAvatar::SetRidingChair

 Block41:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],8
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],1
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block45:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block47:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block49:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 4
}
}
// CUser::ShowFollowEffectItem
_SUB_EXCEPTION_HANDLER(4E8F90)
__SUB_CLASS_THIS(004E8F90, __thiscall, 16618,  CUser, void, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E8F90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x4C],ecx
	cmp dword ptr [ecx+0x638],0
	jne Block96

 Block1:
	push 0xB
	call CUser::GetAdditionalLayer
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul dword ptr [ebp+0x70]
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	xor esi,esi
	add eax,edx
	add ecx,0x14
	mov dword ptr [ebp+0x48],esi
	mov dword ptr [ebp+0x38],eax
	mov dword ptr [ebp+0x54],ecx
	jmp Block5

 Block4:
	mov eax,dword ptr [ebp+0x38]

 Block5:
	xor ebx,ebx
	mov dword ptr [ebp+0x58],ebx
	mov dword ptr [ebp-4],ebx
	cmp eax,0x1AD
	jne Block7

 Block6:
	mov eax,dword ptr [ebp+0x70]
	push eax
	lea ecx,[ebp+0x58]
	push offset _S_ITEMETC0429IMG08
	push ecx
	call ZXString<char>::Format
	add esp,0xC
	jmp Block9

 Block7:
	lea edx,[ebp+0x3C]
	push 0xE2D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x70]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x58]
	push edx
	mov byte ptr [ebp-4],1
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x3C]
	add esp,0xC
	mov byte ptr [ebp-4],0
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push esi
	call _itoa
	mov ecx,eax
	add esp,0xC
	lea esi,[ecx+1]
	lea esp,[esp]

 Block10:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block10

 Block11:
	sub ecx,esi
	push ecx
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::_Cat
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1C]
	push eax
	call esi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block87

 Block12:
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],2
	call esi
	lea eax,[ebp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block87

 Block13:
	mov edi,dword ptr [ebp+0x58]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	mov byte ptr [ebp-4],3
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push ebx
	push ebx
	lea ecx,[ebp-0x1C]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],4
	cmp dword ptr [_D_G_RM],ebx
	je Block88

 Block14:
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x50],esi
	cmp eax,ebx
	je Block17

 Block15:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x34]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x34]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x50],esi
	jge Block17

 Block16:
	cmp eax,0x80004002
	jne Block87

 Block17:
	mov ebx,8
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x2C],bx
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x20],bx
	jne Block24

 Block22:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[ebp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x1C],bx
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	test esi,esi
	je Block93

 Block30:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xE2E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x3C]
	mov byte ptr [ebp-4],0xA
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	add esp,8
	mov dword ptr [ebp+0x60],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x3C],bx
	jne Block33

 Block31:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov dword ptr [ebp+0x5C],0
	lea eax,[ebp+0x40]
	push 0x3D2
	push eax
	mov byte ptr [ebp-4],0xC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[ebp+0x5C]
	push ecx
	push eax
	mov byte ptr [ebp-4],0xD
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp+0x40]
	add esp,0xC
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	mov ecx,dword ptr [ebp+0x4C]
	lea edx,[ebp+0x44]
	add ecx,0x88
	push edx
	call CAvatar::GetFaceOrigin
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0xE
	test ecx,ecx
	je Block88

 Block37:
	lea eax,[ebp-0x5C]
	push eax
	call IWzVector2D::Getorigin
	mov edx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0xF
	test edx,edx
	je Block88

 Block38:
	mov ebx,dword ptr [eax]
	mov edi,dword ptr [edx]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebx
	mov ebx,dword ptr [eax+4]
	mov dword ptr [ecx+4],ebx
	mov ebx,dword ptr [eax+8]
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],eax
	mov ecx,dword ptr [edi+0x64]
	push edx
	mov esi,edx
	call ecx
	test eax,eax
	jge Block40

 Block39:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block40:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0xE
	jne Block43

 Block41:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	je Block88

 Block47:
	mov edx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0xA8]
	call eax
	test eax,eax
	jge Block49

 Block48:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block49:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x3E9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x50]
	lea edx,[ebp-0x4C]
	mov byte ptr [ebp-4],0x10
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	mov ebx,dword ptr [ebp+0x54]
	add esp,8
	cmp word ptr [ebp-0x4C],8
	mov dword ptr [ebx-8],eax
	mov byte ptr [ebp-4],0xC
	jne Block52

 Block50:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov esi,dword ptr [ebp+0x4C]
	push 0
	push 0xFF
	push 3
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x64],esp
	push edx
	lea ecx,[esi+0x88]
	call CAvatar::GetLayerUnderFace
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x12
	mov dword ptr [ebp-0x60],esp
	test eax,eax
	je Block55

 Block54:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block55:
	mov esi,dword ptr [esi+0x1960]
	mov byte ptr [ebp-4],0x13
	test esi,esi
	je Block88

 Block56:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[ebp+0x60]
	push edx
	push esi
	mov dword ptr [ebp+0x60],0
	call eax
	test eax,eax
	jge Block58

 Block57:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block58:
	mov ecx,dword ptr [ebp+0x60]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x60],esp
	push edi
	call eax
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0xC
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx]
	add esp,0x28
	cmp esi,eax
	je Block63

 Block59:
	mov dword ptr [ebx],eax
	test eax,eax
	je Block61

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block61:
	test esi,esi
	je Block63

 Block62:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block63:
	mov eax,dword ptr [ebp+0x30]
	test eax,eax
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	cmp dword ptr [ebx],0
	sete al
	test al,al
	jne Block89

 Block66:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block87

 Block67:
	lea edx,[ebp]
	mov bl,0x14
	push edx
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block87

 Block68:
	mov eax,0x10624DD3
	imul dword ptr [ebp+0x70]
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov byte ptr [ebp-4],0x15
	cmp eax,0x1392
	je Block71

 Block69:
	cmp eax,0x10C2
	je Block71

 Block70:
	xor eax,eax
	jmp Block72

 Block71:
	mov eax,0x20

 Block72:
	mov ecx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ecx]
	test ecx,ecx
	je Block88

 Block73:
	lea edx,[ebp+0x10]
	push edx
	lea edx,[ebp]
	push edx
	push eax
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp],si
	jne Block76

 Block74:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp+0x10],si
	jne Block80

 Block78:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov eax,dword ptr [ebp+0x5C]
	add dword ptr [ebp+0x54],0x24
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block83

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block83:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,dword ptr [ebp+0x58]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block85:
	mov esi,dword ptr [ebp+0x48]
	inc esi
	cmp esi,5
	mov dword ptr [ebp+0x48],esi
	jl Block4

 Block86:
	jmp Block96

 Block87:
	push eax
	call _com_issue_error

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block91

 Block90:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block91:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x58]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block96

 Block92:
	add eax,0xFFFFFFF4
	push eax
	jmp Block95

 Block93:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block96

 Block94:
	add edi,0xFFFFFFF4
	push edi

 Block95:
	call ZXString<char>::_Release
	add esp,4

 Block96:
	lea esp,[ebp-0x74]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CUser::DrawGauge
_SUB_EXCEPTION_HANDLER(4E5FF0)
__SUB_CLASS_THIS0(004E5FF0, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E5FF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x7C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	cmp dword ptr [ecx+0x2EF8],0
	sete al
	test al,al
	jne Block85

 Block1:
	cmp dword ptr [ecx+0x638],0
	jne Block85

 Block2:
	mov dword ptr [esp+0x10],0
	lea eax,[esp+0x18]
	push 0x3D0
	push eax
	mov dword ptr [esp+0x8C],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x14]
	push ecx
	push eax
	mov byte ptr [esp+0x90],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x84],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x1C]
	mov ebx,2
	push ecx
	mov byte ptr [esp+0x88],bl
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [esp+0x10]
	mov byte ptr [esp+0x84],3
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x20]
	push edx
	push 0xA
	push 0x34
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x84],bl
	cmp word ptr [esp+0x1C],si
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov byte ptr [esp+0x84],0
	cmp word ptr [esp+0x2C],si
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFF000000
	push 0xA
	push 0x34
	push 0
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block22

 Block21:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block22:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFFFF
	push 8
	push 0x32
	push 1
	push 1
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block26

 Block25:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFF000000
	push 6
	push 0x30
	push ebx
	push ebx
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block30

 Block29:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov ebx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ebx+0x2EFC]
	mov edx,dword ptr [eax]
	push 0xFFFF0000
	push 4
	push ecx
	push 3
	push 3
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x8C]
	call eax
	test eax,eax
	jge Block34

 Block33:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block34:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov ecx,dword ptr [ebx+0x2EFC]
	mov edx,dword ptr [eax]
	push 0xFFA00300
	push 1
	push ecx
	push 6
	push 3
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x8C]
	call eax
	test eax,eax
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	mov ecx,3
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],0xFFFFFFFE
	mov ecx,dword ptr [ebx+0x2EF8]
	mov byte ptr [esp+0x84],4
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x84],0
	jne Block48

 Block43:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block45:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block46:
	lea edx,[esp+0x5C]
	push edx
	call edi
	lea eax,[esp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block49

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	jmp Block46

 Block49:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x88],5
	call edi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x88],6
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	lea edx,[esp+0x1C]
	mov bl,7
	push edx
	mov byte ptr [esp+0x88],bl
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x88],8
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0x2EF8]
	mov byte ptr [esp+0x84],9
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x50]
	push eax
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x20]
	lea edx,[esp+0x3C]
	push edx
	push eax
	lea edx,[esp+0x84]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [esp+0x6C],di
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x6C]
	push ecx
	call esi

 Block63:
	mov byte ptr [esp+0x84],8
	cmp word ptr [esp+0x2C],di
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[esp+0x2C]
	push eax
	call esi

 Block67:
	mov byte ptr [esp+0x84],bl
	cmp word ptr [esp+0x1C],di
	jne Block70

 Block68:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea edx,[esp+0x1C]
	push edx
	call esi

 Block71:
	mov byte ptr [esp+0x84],6
	cmp word ptr [esp+0x3C],di
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[esp+0x3C]
	push ecx
	call esi

 Block75:
	mov byte ptr [esp+0x84],5
	cmp word ptr [esp+0x4C],di
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea eax,[esp+0x4C]
	push eax
	call esi

 Block79:
	mov byte ptr [esp+0x84],0
	cmp word ptr [esp+0x5C],di
	jne Block82

 Block80:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea edx,[esp+0x5C]
	push edx
	call esi

 Block83:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	test eax,eax
	je Block85

 Block84:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block85:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x78
	ret
}
}
// CUser::RemoveMoreWildEffect
__SUB_CLASS_THIS0(004FB880, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	xor edi,edi
	cmp dword ptr [esi+0x3A64],edi
	je Block2

 Block1:
	call CUser::LoadMoreWildFinishEffect

 Block2:
	mov eax,dword ptr [esi+0x3A64]
	cmp eax,edi
	je Block4

 Block3:
	mov dword ptr [esi+0x3A64],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x3A68]
	cmp eax,edi
	je Block6

 Block5:
	mov dword ptr [esi+0x3A68],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov dword ptr [esi+0x3A74],edi
	pop edi
	pop esi
	ret
}
}
// CUser::_LoadItemRepeatEffect
_SUB_EXCEPTION_HANDLER(4F31A0)
__SUB_CLASS_THIS(004F31A0, __thiscall, 16618,  CUser, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F31A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x14],0
	lea eax,[esp+0x18]
	push 0x9AB
	push eax
	mov dword ptr [esp+0x4C],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x4C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x50],1
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [edi+0x1960]
	push 0
	push 0xFF
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x5C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [edi+0x193C]
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esp+0x30]
	push 0
	push eax
	lea ecx,[esp+0x34]
	push ecx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x44],2
	test eax,eax
	je Block22

 Block7:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea ecx,[esp+0x1C]
	mov bl,3
	push ecx
	mov byte ptr [esp+0x48],bl
	call esi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov ecx,dword ptr [esp+0x10]
	mov byte ptr [esp+0x44],4
	test ecx,ecx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x20]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x44],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x1C],si
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x1C]
	push ecx
	call ebx

 Block17:
	mov byte ptr [esp+0x44],2
	cmp word ptr [esp+0x2C],si
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x2C]
	push eax
	call ebx

 Block21:
	mov eax,dword ptr [esp+0x10]

 Block22:
	mov esi,dword ptr [edi+0x3A84]
	cmp esi,eax
	je Block27

 Block23:
	mov dword ptr [edi+0x3A84],eax
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov eax,dword ptr [esp+0x10]

 Block25:
	test esi,esi
	je Block27

 Block26:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	mov eax,dword ptr [esp+0x10]

 Block27:
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block29:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block31:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x38
	ret 4
}
}
// CUser::OnPetPacket
__SUB_CLASS_THIS(004E02A0, __thiscall, 16624,  CUser, void, long, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	mov esi,ecx
	cmp ebx,0xC6
	je Block14

 Block1:
	cmp ebx,0xC8
	je Block14

 Block2:
	cmp ebx,0xC7
	jne Block4

 Block3:
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x2C]
	push ecx
	mov ecx,esi
	call edx
	pop esi
	pop ebx
	ret 8

 Block4:
	push edi
	mov edi,dword ptr [esp+0x14]
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,dword ptr [esi+0x2E44]
	movzx eax,al
	mov ecx,dword ptr [ecx+eax*8+4]
	test ecx,ecx
	je Block8

 Block5:
	lea eax,[ebx-0xC9]
	cmp eax,4
	ja Block8

 Block6:
	cmp EAX, 0
je Block7
cmp EAX, 1
je Block10
cmp EAX, 2
je Block11
cmp EAX, 3
je Block13
cmp EAX, 4
je Block12


 Block7:
	push edi
	call CPet::OnMove

 Block8:
	pop edi

 Block9:
	pop esi
	pop ebx
	ret 8

 Block10:
	push edi
	call CPet::OnAction
	pop edi
	pop esi
	pop ebx
	ret 8

 Block11:
	push edi
	call CPet::OnNameChanged
	pop edi
	pop esi
	pop ebx
	ret 8

 Block12:
	push edi
	call CPet::OnActionCommand
	pop edi
	pop esi
	pop ebx
	ret 8

 Block13:
	push edi
	call CPet::OnLoadExceptionList
	pop edi
	pop esi
	pop ebx
	ret 8

 Block14:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [edx+0x24]
	push eax
	call edx
	cmp ebx,0xC6
	jne Block9

 Block15:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x28]
	push 0
	mov ecx,esi
	call eax
	pop esi
	pop ebx
	ret 8
}
}
// CUser::OnSummonedMove
_SUB_EXCEPTION_HANDLER(4E3860)
__SUB_CLASS_THIS(004E3860, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E3860
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x24]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x10],0
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esi+0x2E4C]
	mov dword ptr [esp+0x24],0
	call ZMap<unsigned long, ZRef<CSummoned>, unsigned long>::GetAt
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block2

 Block1:
	push edi
	call CSummoned::OnMove
	push 0
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CSummoned>::_ReleaseRaw

 Block2:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CGrenade::GetType
__SUB_CLASS_THIS0(004E2E60, __thiscall, 81211,  CGrenade, long) {
__asm {

 Block0:
	mov eax,7
	ret
}
}
// CUser::IsEvanJob
__SUB_CLASS_THIS0(000BC000, __thiscall, 16582,  CUser, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx-0x88]
	mov edx,dword ptr [eax+0x40]
	add ecx,0xFFFFFF78
	call edx
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x16
	je Block3

 Block1:
	cmp ecx,0x7D1
	je Block3

 Block2:
	xor eax,eax
	ret

 Block3:
	mov eax,1
	ret
}
}
// CUser::OnTeslaTriangle
_SUB_EXCEPTION_HANDLER(4F3770)
__SUB_CLASS_THIS(004F3770, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F3770
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor esi,esi
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x38],esi
	call ZRef<Triangle>::_Alloc
	mov dword ptr [esp+0x4C],esi
	mov dword ptr [esp+0x20],esi
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x4C],1
	mov dword ptr [esp+0x30],esi
	call ZRef<ZArray<unsigned long>>::_Alloc
	mov ebx,dword ptr [esp+0x30]
	lea eax,[esp+0x54]
	push eax
	push 3
	mov ecx,ebx
	mov byte ptr [esp+0x54],2
	call ZArray<unsigned long>::_Alloc
	add edi,0x2E4C
	mov dword ptr [esp+0x18],edi
	mov edi,dword ptr [esp+0x38]

 Block1:
	mov ecx,dword ptr [esp+0x54]
	call CInPacket::Decode4
	mov ebp,eax
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x28],0
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x54],3
	call ZMap<unsigned long, ZRef<CSummoned>, unsigned long>::GetAt
	test eax,eax
	je Block24

 Block2:
	mov eax,dword ptr [ebx]
	xor ecx,ecx
	test esi,esi
	sete cl
	mov dword ptr [eax+esi*4],ebp
	mov ebp,dword ptr [esp+0x28]
	push ecx
	mov ecx,ebp
	call CSummoned::SetTeslaCoilLeader
	test esi,esi
	jne Block8

 Block3:
	test ebp,ebp
	je Block5

 Block4:
	lea edx,[ebp+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	cmp dword ptr [esp+0x20],0
	je Block7

 Block6:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CSummoned>::_ReleaseRaw

 Block7:
	mov dword ptr [esp+0x20],ebp

 Block8:
	mov eax,dword ptr [ebp+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[ebp+4]
	lea edx,[esp+0x3C]
	push edx
	call eax
	mov ecx,dword ptr [eax]
	mov dword ptr [edi+esi*8],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [edi+esi*8+4],edx
	add dword ptr [edi+esi*8+4],0xFFFFFFE2
	push 0
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x50],2
	call ZRef<CSummoned>::_ReleaseRaw
	inc esi
	cmp esi,3
	mov dword ptr [esp+0x28],0
	jl Block1

 Block9:
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ebx
	lea esi,[ebx-0x10]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	lea eax,[esi+4]
	mov dword ptr [esp+0x5C],esp
	push eax
	call ebx
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	mov dword ptr [eax+4],edi
	test edi,edi
	je Block11

 Block10:
	lea ecx,[edi-0xC]
	push ecx
	call ebx

 Block11:
	mov ecx,dword ptr [esp+0x30]
	call CSummoned::SetTeslaCoilTriangle
	lea ebp,[esi+4]
	push ebp
	mov byte ptr [esp+0x50],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	push ebp
	call ebx
	test esi,esi
	je Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block14:
	mov esi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x4C],0
	test esi,esi
	je Block18

 Block15:
	add esi,8
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block16:
	lea edx,[esi+4]
	push edx
	call ebx
	test esi,esi
	je Block18

 Block17:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block18:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test edi,edi
	je Block23

 Block19:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block23

 Block20:
	push edi
	call ebx

 Block21:
	test esi,esi
	je Block23

 Block22:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block23:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 4

 Block24:
	cmp dword ptr [esp+0x28],0
	mov byte ptr [esp+0x4C],2
	je Block26

 Block25:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CSummoned>::_ReleaseRaw

 Block26:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0x4C],1
	test ebx,ebx
	je Block30

 Block27:
	lea esi,[ebx-0x10]
	lea ebx,[esi+4]
	push ebx
	call ebp
	test eax,eax
	jne Block30

 Block28:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block30

 Block29:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block30:
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0x4C],0
	je Block32

 Block31:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CSummoned>::_ReleaseRaw

 Block32:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test edi,edi
	je Block23

 Block33:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block23

 Block34:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block21
}
}
// CUser::GetShoeAttr
__SUB_CLASS_THIS0(004EB5C0, __thiscall, 16667,  CUser, const ZRef<CAttrShoe>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	xor ecx,ecx
	mov dword ptr [esp],ecx
	mov dword ptr [eax+4],ecx
	pop ecx
	ret 4
}
}
// CGrenade::PrepareAnimationLayer
_SUB_EXCEPTION_HANDLER(1694F0)
__SUB_CLASS_THIS(001694F0, __thiscall, 81207,  CGrenade, void, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1694F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x70]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [edi+0x44]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	xor esi,esi
	cmp eax,esi
	je Block70

 Block1:
	mov ebx,dword ptr [esp+0x80]
	push ebx
	push 1
	push 1
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,eax
	call SKILLENTRY::GetBallUOL
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push edx
	mov dword ptr [esp+0x7C],esi
	call ebp
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x7C],1
	call ebp
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	push esi
	push esi
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	push ecx
	mov ecx,dword ptr [esp+0x28]
	mov eax,esp
	mov dword ptr [esp+0x94],esp
	mov dword ptr [eax],ecx
	cmp ecx,esi
	je Block7

 Block6:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov byte ptr [esp+0x8C],3
	cmp dword ptr [_D_G_RM],esi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x74]
	mov byte ptr [esp+0x8C],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x80],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x84]
	mov dword ptr [esp+0x84],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block12

 Block10:
	cmp eax,0x80004002
	je Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov ebp,8
	mov byte ptr [esp+0x78],6
	cmp word ptr [esp+0x60],bp
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,esi
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov byte ptr [esp+0x78],7
	cmp word ptr [esp+0x20],bp
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,esi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov byte ptr [esp+0x78],8
	cmp word ptr [esp+0x30],bp
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,esi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov eax,dword ptr [esp+0x84]
	cmp eax,esi
	je Block30

 Block25:
	push 1
	push eax
	push esi
	push 0xFF
	push esi
	push ecx
	mov ecx,dword ptr [edi+0x10]
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push eax
	add ecx,0x88
	call CAvatar::GetLayerUnderFace
	mov eax,dword ptr [edi+0x14]
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	mov ebp,dword ptr [esp+0xA4]
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [eax],ebp
	cmp ebp,esi
	je Block29

 Block28:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block29:
	lea edx,[esp+0x44]
	push edx
	call CAnimationDisplayer::LoadRotateLayer
	add esp,0x30
	jmp Block35

 Block30:
	push esi
	push 0xFF
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push ecx
	mov ecx,dword ptr [edi+0x10]
	add ecx,0x88
	call CAvatar::GetLayerUnderFace
	mov eax,dword ptr [edi+0x14]
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block32:
	mov ebp,dword ptr [esp+0x9C]
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],ebp
	cmp ebp,esi
	je Block34

 Block33:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	push ebp
	call edx

 Block34:
	lea eax,[esp+0x3C]
	push eax
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28

 Block35:
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x18]
	cmp esi,eax
	je Block40

 Block36:
	mov dword ptr [edi+0x18],eax
	test eax,eax
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block38:
	test esi,esi
	je Block40

 Block39:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block40:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block42

 Block41:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block42:
	test ebx,ebx
	je Block47

 Block43:
	cmp dword ptr [esp+0x84],0
	je Block47

 Block44:
	mov ecx,dword ptr [edi+0x18]
	test ecx,ecx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov edx,dword ptr [edi+0x58]
	mov eax,dword ptr [edi+0x54]
	neg edx
	push edx
	neg eax
	push eax
	call IWzShape2D::Offset

 Block47:
	cmp dword ptr [edi+0x44],0x423D0B
	jne Block52

 Block48:
	mov esi,dword ptr [edi+0x18]
	test esi,esi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x44]
	neg ebx
	sbb ebx,ebx
	push 0
	and ebx,0x64
	add ebx,0xFFFFFFCE
	push ebx
	push esi
	call edx
	test eax,eax
	jge Block52

 Block51:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block52:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x50]
	push eax
	call esi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea edx,[esp+0x40]
	mov bl,9
	push edx
	mov byte ptr [esp+0x7C],bl
	call esi
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	mov ecx,dword ptr [edi+0x18]
	mov byte ptr [esp+0x78],0xA
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x78],bl
	cmp word ptr [esp+0x40],si
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov byte ptr [esp+0x78],8
	cmp word ptr [esp+0x50],si
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov byte ptr [esp+0x78],0
	test ebp,ebp
	je Block68

 Block67:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block68:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block70

 Block69:
	call _xbstr_t::Data_t::Release

 Block70:
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x68
	ret 8
}
}
// CUser::GetSummonedByID
_SUB_EXCEPTION_HANDLER(4E3670)
__SUB_CLASS_THIS(004E3670, __thiscall, 16634,  CUser, ZRef<CSummoned>*, ZRef<CSummoned>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E3670
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
	mov dword ptr [esp+0x1C],ecx
	xor ebx,ebx
	xor esi,esi
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x24],esi
	mov eax,dword ptr [ecx+0x2E70]
	mov dword ptr [esp+0x30],1
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block12

 Block1:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<CSummoned>>::GetNext
	mov edi,eax
	mov eax,dword ptr [edi+4]
	add esp,4
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xC
	push eax
	call ebp

 Block4:
	cmp esi,ebx
	je Block8

 Block5:
	add esi,8
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	lea edx,[esi+4]
	push edx
	call ebp
	cmp esi,ebx
	je Block8

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block8:
	mov esi,dword ptr [edi+4]
	mov dword ptr [esp+0x24],esi
	cmp esi,ebx
	je Block11

 Block9:
	mov eax,dword ptr [esp+0x3C]
	cmp dword ptr [esi+0xB4],eax
	jne Block11

 Block10:
	mov ecx,dword ptr [esp+0x1C]
	call CUser::IsSamePhaseWithLocalUser
	test eax,eax
	jne Block15

 Block11:
	cmp dword ptr [esp+0x14],ebx
	jne Block2

 Block12:
	mov edi,dword ptr [esp+0x38]
	mov dword ptr [edi+4],ebx
	mov dword ptr [esp+0x18],1
	mov byte ptr [esp+0x30],bl
	cmp esi,ebx
	je Block14

 Block13:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CSummoned>::_ReleaseRaw

 Block14:
	mov eax,edi
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 8

 Block15:
	mov edi,dword ptr [esp+0x38]
	mov dword ptr [edi+4],esi
	add esi,0xC
	push esi
	call ebp
	mov dword ptr [esp+0x18],1
	mov byte ptr [esp+0x30],bl
	jmp Block13
}
}
// CUser::SetWeddingRingEffect
_SUB_EXCEPTION_HANDLER(4F18E0)
__SUB_CLASS_THIS(004F18E0, __thiscall, 16646,  CUser, void, long, CUser*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F18E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov esi,dword ptr [esp+0x74]
	mov eax,dword ptr [esi+0x2E18]
	cmp eax,dword ptr [ebp+0x2E18]
	jne Block69

 Block1:
	call CUser::IsSamePhaseWithLocalUser
	test eax,eax
	je Block69

 Block2:
	mov eax,dword ptr [esp+0x70]
	and eax,2
	mov dword ptr [esp+0x28],eax
	mov ebx,0
	je Block44

 Block3:
	cmp dword ptr [ebp+0x2EBC],ebx
	lea edi,[ebp+0x2EBC]
	sete al
	cmp al,bl
	je Block44

 Block4:
	mov eax,dword ptr [ebp+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[ebp+4]
	lea edx,[esp+0x38]
	push edx
	call eax
	mov dword ptr [esp+0x14],ebx
	lea ecx,[esp+0x20]
	push 0x3D2
	push ecx
	mov dword ptr [esp+0x70],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea edx,[esp+0x18]
	push edx
	push eax
	mov byte ptr [esp+0x74],1
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x68],bl
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov dword ptr [esp+0x1C],ebx
	lea eax,[esp+0x20]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x70],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x20]
	push ecx
	push eax
	mov byte ptr [esp+0x74],3
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x68],2
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	lea edx,[esp+0x20]
	push edx
	mov ecx,ebp
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x68],4
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],eax
	cmp eax,ebx
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block10:
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],5
	cmp ecx,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x40]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x68],2
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x20]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x70],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov byte ptr [esp+0x74],7
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x68],6
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x68],8
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],eax
	cmp eax,ebx
	je Block18

 Block17:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block18:
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x68],9
	cmp ecx,ebx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[esp+0x40]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x68],6
	cmp eax,ebx
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov eax,dword ptr [esi+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[esi+4]
	lea edx,[esp+0x30]
	push edx
	call eax
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x3C]
	add eax,edx
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x30]
	sar eax,1
	sub eax,0x14
	push eax
	mov eax,dword ptr [esp+0x3C]
	add eax,edx
	cdq
	sub eax,edx
	sar eax,1
	push eax
	call IWzShape2D::Move
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov edx,dword ptr [esp+0x1C]
	push 1
	push 1
	push 2
	push 2
	push edx
	call IWzVector2D::Ratio
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov eax,dword ptr [esp+0x18]
	push 1
	push 1
	push 2
	push 2
	push eax
	call IWzVector2D::Ratio
	mov dword ptr [esp+0x20],ebx
	lea ecx,[esp+0x24]
	push 0x9AA
	push ecx
	mov byte ptr [esp+0x70],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esp+0x78]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x74],0xB
	call ZXString16::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x68],0xA
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block30:
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov dword ptr [esp+0x34],esp
	mov eax,esp
	push ebx
	mov dword ptr [eax],ebx
	push ebx
	push ecx
	mov ecx,dword ptr [esp+0x30]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x48],esp
	cmp eax,ebx
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block32:
	mov esi,dword ptr [esp+0x3C]
	push ebx
	lea ecx,[esp+0x44]
	push esi
	push ecx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block34:
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x6C],0xC
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x68],0xD
	cmp ecx,ebx
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	mov byte ptr [esp+0x68],6
	cmp esi,ebx
	je Block38

 Block37:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block38:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x68],2
	cmp eax,ebx
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],bl
	cmp eax,ebx
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp eax,ebx
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	cmp dword ptr [esp+0x28],ebx
	jne Block47

 Block45:
	mov eax,dword ptr [ebp+0x2EBC]
	cmp eax,ebx
	je Block47

 Block46:
	mov dword ptr [ebp+0x2EBC],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	mov eax,dword ptr [esp+0x70]
	and eax,1
	mov dword ptr [esp+0x24],eax
	je Block64

 Block48:
	mov dword ptr [esp+0x70],ebx
	lea eax,[esp+0x28]
	push 0x9A9
	push eax
	mov dword ptr [esp+0x70],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x78]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x78]
	push edx
	mov byte ptr [esp+0x74],0xF
	call ZXString16::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x68],0xE
	cmp eax,ebx
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block50:
	cmp dword ptr [ebp+0x2EC0],ebx
	mov edi,dword ptr [esp+0x70]
	lea esi,[ebp+0x2EC0]
	sete al
	cmp al,bl
	je Block56

 Block51:
	push ebx
	push 0xFF
	push 3
	push ecx
	lea eax,[ebp+0x1960]
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x88],0x10
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [ebp+0x640]
	not eax
	and eax,1
	push eax
	lea edx,[esp+0x98]
	push edi
	push edx
	mov byte ptr [esp+0x90],0xE
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x78]
	cmp eax,ebx
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x6C],0x11
	call Ztl_variant_t::_ctor_1
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x68],0x12
	cmp esi,ebx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	push 0x20
	mov ecx,esi
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t

 Block56:
	mov ecx,dword ptr [esp+0x74]
	cmp dword ptr [ecx+0x2EC0],ebx
	lea esi,[ecx+0x2EC0]
	sete al
	cmp al,bl
	je Block62

 Block57:
	push ebx
	push 0xFF
	push 3
	push ecx
	lea edx,[ecx+0x1960]
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ebx
	push ebx
	push ecx
	mov ecx,dword ptr [esp+0x90]
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push eax
	mov byte ptr [esp+0x88],0x13
	call CUser::GetVecCtrl_0
	mov ecx,dword ptr [esp+0x90]
	mov eax,dword ptr [ecx+0x640]
	not eax
	and eax,1
	push eax
	lea edx,[esp+0x98]
	push edi
	push edx
	mov byte ptr [esp+0x90],0xE
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x78]
	cmp eax,ebx
	je Block59

 Block58:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block59:
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x6C],0x14
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x68],0x15
	cmp ecx,ebx
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x54]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t

 Block62:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp edi,ebx
	je Block64

 Block63:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block64:
	cmp dword ptr [esp+0x24],ebx
	jne Block69

 Block65:
	mov eax,dword ptr [ebp+0x2EC0]
	cmp eax,ebx
	je Block67

 Block66:
	mov dword ptr [ebp+0x2EC0],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block67:
	mov ecx,dword ptr [esp+0x74]
	mov eax,dword ptr [ecx+0x2EC0]
	cmp eax,ebx
	je Block69

 Block68:
	mov dword ptr [ecx+0x2EC0],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block69:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 0xC
}
}
// CUser::UpdateAr01Effect
_SUB_EXCEPTION_HANDLER(4F4060)
__SUB_CLASS_THIS0(004F4060, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F4060
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	lea eax,[esp+0x14]
	push eax
	mov dword ptr [esp+0x5C],edi
	call CWvsContext::GetOnlinePartyMemberID
	mov ecx,dword ptr [TSingleton<CAffectedAreaPool>::ms_pInstance]
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	mov ebp,dword ptr [esi+0x2E18]
	mov ebx,dword ptr [esi+0x19E8]
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x20],edi
	lea edi,[esi+4]
	lea eax,[esp+0x30]
	mov dword ptr [esp+0x18],ecx
	push eax
	mov ecx,edi
	call edx
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x20]
	push ecx
	push edx
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push ebx
	call CAffectedAreaPool::GetAr01AreaPAD
	mov edx,dword ptr [TSingleton<CAffectedAreaPool>::ms_pInstance]
	mov eax,dword ptr [edi]
	mov ebx,dword ptr [esi+0x2E18]
	mov ebp,dword ptr [esi+0x19E8]
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x18],edx
	mov edx,dword ptr [eax+0x10]
	push ecx
	mov ecx,edi
	call edx
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x24]
	push ecx
	push edx
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push ebp
	call CAffectedAreaPool::GetAr01AreaMAD
	xor ebp,ebp
	cmp eax,ebp
	jne Block3

 Block1:
	mov eax,dword ptr [esi+0x1980]
	cmp eax,ebp
	je Block34

 Block2:
	mov dword ptr [esi+0x1980],ebp
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block34

 Block3:
	cmp dword ptr [esi+0x1980],ebp
	sete al
	test al,al
	je Block34

 Block4:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x217E772
	call CSkillInfo::GetSkill
	push ebp
	push 0xFF
	push 3
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push ecx
	lea ecx,[esi+0x88]
	mov edi,eax
	call CAvatar::GetLayerUnderFace
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x4C],esp
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x78],1
	call CUser::GetVecCtrl_0
	lea eax,[esp+0x44]
	push eax
	mov ecx,edi
	call SKILLENTRY::GetAffectedUOL
	mov ebx,eax
	mov edi,dword ptr [esi+0x1960]
	mov byte ptr [esp+0x74],3
	cmp edi,ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[esp+0x34]
	push edx
	push edi
	mov dword ptr [esp+0x3C],ebp
	call eax
	cmp eax,ebp
	jge Block8

 Block7:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,dword ptr [ebx]
	cmp eax,ebp
	je Block10

 Block9:
	mov eax,dword ptr [eax]
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	mov ecx,dword ptr [esp+0x34]
	push ecx
	push eax
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x80],4
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x1980]
	add esp,0x28
	cmp edi,eax
	je Block16

 Block12:
	mov dword ptr [esi+0x1980],eax
	cmp eax,ebp
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block14:
	cmp edi,ebp
	je Block16

 Block15:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block16:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block18

 Block17:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block18:
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0x58],0
	cmp ecx,ebp
	je Block20

 Block19:
	call _xbstr_t::Data_t::Release

 Block20:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x40]
	push ecx
	call edi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea eax,[esp+0x30]
	mov bl,5
	push eax
	mov byte ptr [esp+0x5C],bl
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	mov esi,dword ptr [esi+0x1980]
	mov byte ptr [esp+0x58],6
	cmp esi,ebp
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 0x20
	mov ecx,esi
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x30],si
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block30:
	mov byte ptr [esp+0x58],0
	cmp word ptr [esp+0x40],si
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebp
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x40]
	push ecx
	call edi

 Block34:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call ZArray<unsigned long>::RemoveAll
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret
}
}
// CUser::SetAbilityEquip
_SUB_EXCEPTION_HANDLER(4EB5E0)
__SUB_CLASS_THIS0(004EB5E0, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4EB5E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov eax,dword ptr [ebp+0x2E40]
	push eax
	lea esi,[ebp+0x2E38]
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea edx,[ebp+0x2E2C]
	xor ecx,ecx
	mov dword ptr [esp+0x20],eax
	call _ZtlSecureTearHelper<long>::call
	mov edx,esi
	xor ecx,ecx
	mov dword ptr [ebp+0x2E34],eax
	call _ZtlSecureTearHelper<long>::call
	xor ebx,ebx
	xor esi,esi
	mov dword ptr [ebp+0x2E40],eax
	mov dword ptr [esp+0x18],esi
	mov eax,offset _D_G_ANRINGBODYPART
	mov dword ptr [esp+0x50],ebx
	mov dword ptr [esp+0x14],eax
	lea ebx,[ebx]

 Block1:
	mov eax,dword ptr [eax]
	mov eax,dword ptr [ebp+eax*4+0xA5]
	cmp eax,ebx
	je Block23

 Block2:
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemInfo
	mov eax,dword ptr [eax]
	cmp esi,eax
	je Block7

 Block3:
	mov edi,esi
	mov esi,eax
	mov dword ptr [esp+0x18],esi
	cmp eax,ebx
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block5:
	cmp edi,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block7:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	cmp esi,ebx
	sete al
	cmp al,bl
	jne Block23

 Block10:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x99D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x58],1
	cmp esi,ebx
	je Block30

 Block11:
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x5C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x58],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x28],8
	mov edi,eax
	mov byte ptr [esp+0x50],bl
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	cmp edi,ebx
	je Block17

 Block16:
	lea edx,[ebp+0x2E2C]
	mov ecx,edi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [ebp+0x2E34],eax

 Block17:
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x99E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x40]
	mov byte ptr [esp+0x58],3
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x5C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x58],4
	call get_int32
	add esp,8
	cmp word ptr [esp+0x38],8
	mov edi,eax
	mov byte ptr [esp+0x50],bl
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	cmp edi,ebx
	je Block23

 Block22:
	lea edx,[ebp+0x2E38]
	mov ecx,edi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [ebp+0x2E40],eax

 Block23:
	mov eax,dword ptr [esp+0x14]
	add eax,4
	cmp eax,offset _D_G_ANPETABILBODYP
	mov dword ptr [esp+0x14],eax
	jl Block1

 Block24:
	mov edx,dword ptr [ebp+0x2E40]
	push edx
	lea eax,[ebp+0x2E38]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,dword ptr [esp+0x20]
	jne Block26

 Block25:
	mov eax,dword ptr [ebp+0x2E94]
	cmp eax,dword ptr [ebp+0x169]
	je Block27

 Block26:
	mov ecx,ebp
	call CUser::DrawNameTags

 Block27:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp esi,ebx
	je Block29

 Block28:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block29:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret

 Block30:
	push 0x80004003
	call _com_issue_error
}
}
// CUser::PetAutoSpeaking
__SUB_CLASS_THIS(004DEB10, __thiscall, 16618,  CUser, void, long) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov ebx,ecx
	xor esi,esi
	jmp Block2

 Block2:
	mov eax,dword ptr [ebx+0x2E44]
	mov ecx,dword ptr [eax+esi+4]
	test ecx,ecx
	je Block4

 Block3:
	push edi
	call CPet::AutoSpeakingByEvent
	add esi,8
	cmp esi,0x18
	jl Block2

 Block4:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CUser::GetVecCtrl
__SUB_CLASS_THIS0(000BBED0, __thiscall, 16585,  CUser, _x_com_ptr<IWzVector2D>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x19E4]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CUser::GetShootDelay
__SUB(004DE240, __cdecl, 16721,  long, const SKILLENTRY*, long) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	test ecx,ecx
	jne Block2

 Block1:
	mov eax,dword ptr [esp+8]
	ret

 Block2:
	mov eax,dword ptr [ecx]
	cmp eax,0xC80EDE
	jg Block14

 Block3:
	je Block13

 Block4:
	cmp eax,0x4F7F90
	jg Block9

 Block5:
	je Block8

 Block6:
	cmp eax,0x312609
	je Block21

 Block7:
	cmp eax,0x4C4F2B
	jne Block1

 Block8:
	mov eax,0x5A
	ret

 Block9:
	sub eax,0x4FAA8F
	je Block12

 Block10:
	sub eax,1
	jne Block1

 Block11:
	mov eax,0x258
	ret

 Block12:
	mov eax,0xB4
	ret

 Block13:
	mov eax,0x26A
	ret

 Block14:
	cmp eax,0x1F914C9
	jg Block20

 Block15:
	je Block21

 Block16:
	cmp eax,0xC80EDF
	je Block19

 Block17:
	cmp eax,0xE6935F
	jne Block1

 Block18:
	mov eax,0x1C1
	ret

 Block19:
	mov eax,0x231
	ret

 Block20:
	cmp eax,0x1F962ED
	jne Block1

 Block21:
	mov eax,dword ptr [ecx+0x30]
	ret
}
}
// CGrenade::GetShoeAttr
__SUB_CLASS_THIS0(004E2FA0, __thiscall, 81214,  CGrenade, const ZRef<CAttrShoe>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x20]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi+4],eax
	test eax,eax
	je Block2

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CUser::OnEffect
_SUB_EXCEPTION_HANDLER(4F9A70)
__SUB_CLASS_THIS(004F9A70, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F9A70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call CUser::IsSamePhaseWithLocalUser
	test eax,eax
	je Block239

 Block1:
	mov edi,dword ptr [ebp+0x7C]
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,0x20
	ja Block239

 Block2:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block8
cmp EAX, 2
je Block116
cmp EAX, 3
je Block120
cmp EAX, 4
je Block118
cmp EAX, 5
je Block127
cmp EAX, 6
je Block157
cmp EAX, 7
je Block122
cmp EAX, 8
je Block159
cmp EAX, 9
je Block167
cmp EAX, 10
je Block168
cmp EAX, 11
je Block174
cmp EAX, 12
je Block177
cmp EAX, 13
je Block179
cmp EAX, 14
je Block184
cmp EAX, 15
je Block196
cmp EAX, 16
je Block190
cmp EAX, 17
je Block200
cmp EAX, 18
je Block203
cmp EAX, 19
je Block211
cmp EAX, 20
je Block215
cmp EAX, 21
je Block239
cmp EAX, 22
je Block199
cmp EAX, 23
je Block218
cmp EAX, 24
je Block221
cmp EAX, 25
je Block224
cmp EAX, 26
je Block226
cmp EAX, 27
je Block230
cmp EAX, 28
je Block217
cmp EAX, 29
je Block178
cmp EAX, 30
je Block231
cmp EAX, 31
je Block234
cmp EAX, 32
je Block237


 Block3:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	mov ecx,esi
	mov dword ptr [ebp-4],0
	call CUser::GetVecCtrl_0
	lea ecx,[ebp+0x44]
	push 0x92C
	push ecx
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],2
	push 0
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [ebp+0x44]
	or edi,0xFFFFFFFF
	mov dword ptr [ebp-4],edi
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	lea edx,[ebp-0x38]
	push 0x1A4C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [ebp-4],4
	call play_game_sound
	mov eax,dword ptr [ebp-0x38]
	add esp,8
	mov dword ptr [ebp-4],edi
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	push 0
	mov ecx,esi
	call CUser::PetAutoSpeaking
	jmp Block239

 Block8:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov ebx,eax
	call CInPacket::Decode1
	mov byte ptr [ebp+0x53],al
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	mov ecx,esi
	call edx
	test eax,eax
	je Block10

 Block9:
	mov al,byte ptr [ebp+0x53]
	mov byte ptr [esi+0x3AC0],al

 Block10:
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [ebp+0x64],ecx
	mov dword ptr [ebp+0x6C],ebx
	cmp ebx,0x2179564
	jne Block12

 Block11:
	mov ebx,0x217994C
	jmp Block22

 Block12:
	cmp ebx,0x217BC74
	jne Block14

 Block13:
	mov ebx,0x217C05C
	jmp Block22

 Block14:
	cmp ebx,0x217E385
	jne Block16

 Block15:
	mov ebx,0x217E76D
	jmp Block22

 Block16:
	cmp ebx,0x217E38D
	jne Block18

 Block17:
	mov ebx,0x217E775
	jmp Block22

 Block18:
	cmp ebx,0x2160EC1
	jne Block20

 Block19:
	mov ebx,0x21612A9
	jmp Block22

 Block20:
	cmp ebx,0x2179569
	jne Block22

 Block21:
	mov ebx,0x2179951

 Block22:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	call CSkillInfo::GetSkill
	mov dword ptr [ebp+0x60],eax
	test eax,eax
	je Block239

 Block23:
	mov edx,dword ptr [ebp+0x64]
	push edx
	mov ecx,eax
	call SKILLENTRY::IsActionAppointed
	test eax,eax
	je Block40

 Block24:
	lea eax,[ebp-0x3C]
	push eax
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	jmp Block27

 Block26:
	xor eax,eax

 Block27:
	xor ecx,ecx
	cmp dword ptr [eax+0x1A0],ecx
	mov eax,dword ptr [ebp-0x3C]
	setne cl
	mov dword ptr [ebp+0x68],ecx
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block29:
	cmp dword ptr [ebp+0x68],0
	je Block35

 Block30:
	call _rand
	mov ecx,dword ptr [ebp+0x64]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	call SKILLENTRY::GetRandomAppointedAction
	mov dword ptr [esi+0x644],eax
	cmp ebx,0x217994C
	jne Block32

 Block31:
	mov dword ptr [esi+0x644],0xD2
	jmp Block34

 Block32:
	cmp ebx,0x423D0D
	jne Block34

 Block33:
	mov edx,dword ptr [ebp+0x60]
	mov eax,dword ptr [edx+0x24]
	mov dword ptr [esi+0x644],eax

 Block34:
	mov edx,dword ptr [esi+0x88]
	mov eax,dword ptr [edx+0x14]
	push 0
	lea ecx,[esi+0x88]
	push 0x64
	push 6
	call eax

 Block35:
	cmp dword ptr [esi+0x2EAC],0
	je Block40

 Block36:
	call _rand
	mov ecx,dword ptr [ebp+0x64]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	call SKILLENTRY::GetRandomAppointedAction
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	push edx
	call get_action_name_from_code
	add esp,8
	call get_dragon_action_code_from_name
	add esp,4
	mov dword ptr [ebp+0x68],eax
	test eax,eax
	jl Block38

 Block37:
	cmp eax,0x1D
	jl Block39

 Block38:
	mov dword ptr [ebp+0x68],0

 Block39:
	mov eax,dword ptr [esi+0x640]
	mov ecx,dword ptr [esi+0x2EAC]
	mov dword ptr [ebp+0x5C],eax
	call CDragon::GetMoveAction
	mov ecx,dword ptr [esi+0x2EAC]
	mov edx,eax
	xor edx,dword ptr [ebp+0x5C]
	push 0
	and edx,1
	xor edx,eax
	push edx
	call CDragon::SetMoveAction
	mov eax,dword ptr [ebp+0x68]
	mov ecx,dword ptr [esi+0x2EAC]
	push 6
	push eax
	call CDragon::SetAttackAction

 Block40:
	cmp ebx,0x142446
	jne Block44

 Block41:
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,esi
	test al,al
	je Block43

 Block42:
	call CUser::LoadDarkForceEffect
	jmp Block239

 Block43:
	push 0xD
	call CUser::RemoveAdditionalLayer
	jmp Block239

 Block44:
	cmp ebx,0x1522280
	jne Block50

 Block45:
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,dword ptr [esi+0x2EAC]
	test al,al
	je Block48

 Block46:
	test ecx,ecx
	je Block239

 Block47:
	push 1
	call CDragon::CreateEffect
	jmp Block239

 Block48:
	test ecx,ecx
	je Block239

 Block49:
	push 1
	call CDragon::DeleteEffect
	jmp Block239

 Block50:
	cmp ebx,0x423D0D
	jne Block54

 Block51:
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [ebp+0x5C],ecx
	mov ecx,edi
	call CInPacket::Decode4
	lea ecx,[esi+0x88]
	mov dword ptr [ebp+0x6C],eax
	call CAvatar::GetActionInfo
	mov eax,dword ptr [eax+8]
	cmp eax,0x1E0
	mov dword ptr [ebp+0x68],eax
	jg Block53

 Block52:
	mov dword ptr [ebp+0x68],0x1E0

 Block53:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push ecx
	mov edi,esp
	mov dword ptr [ebp+0x58],esp
	push 0
	mov ecx,esi
	call eax
	mov edx,dword ptr [ebp+0x64]
	movzx ecx,al
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	push edx
	push edi
	call SKILLENTRY::GetBallUOL
	mov edi,dword ptr [esi+0x19E8]
	mov ebx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	lea ecx,[esi+0x1960]
	mov dword ptr [ebp-4],5
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getz
	mov ecx,dword ptr [ebp+0x6C]
	push eax
	mov eax,dword ptr [ebp+0x5C]
	push eax
	push ecx
	push edi
	call get_update_time
	add eax,dword ptr [ebp+0x68]
	mov ecx,ebx
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call CAnimationDisplayer::RegisterHookingChainAnimation
	jmp Block239

 Block54:
	cmp ebx,0x1F914CD
	jne Block59

 Block55:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	mov ecx,esi
	call eax
	test eax,eax
	je Block58

 Block56:
	lea edi,[esi+0x88]
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block58

 Block57:
	mov ecx,edi
	call CAvatar::ResetOneTimeAction
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0x64
	push 6
	mov ecx,edi
	call eax

 Block58:
	mov ecx,esi
	call CUser::LoadSwallowingEffect
	jmp Block239

 Block59:
	cmp ebx,0x1F914CE
	jne Block61

 Block60:
	mov ecx,esi
	call CUser::RemoveSwallowingEffect
	jmp Block239

 Block61:
	cmp ebx,0x217994C
	jne Block65

 Block62:
	cmp dword ptr [ebp+0x6C],0x2179564
	jne Block64

 Block63:
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ebp+0x60]
	push ecx
	push edx
	mov ecx,esi
	call CUser::ShowEffectRocketBoosterAttack
	jmp Block239

 Block64:
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [ebp+0x60]
	push eax
	push ecx
	mov ecx,esi
	call CUser::ShowEffectRocketBooster
	jmp Block239

 Block65:
	cmp ebx,0x217C05C
	jne Block69

 Block66:
	cmp dword ptr [ebp+0x6C],0x217BC74
	push 0
	jne Block68

 Block67:
	mov edx,dword ptr [ebp+0x64]
	mov eax,dword ptr [ebp+0x60]
	push edx
	push eax
	mov ecx,esi
	call CUser::ShowEffectSiegeEnd
	jmp Block239

 Block68:
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ebp+0x60]
	push ecx
	push edx
	mov ecx,esi
	call CUser::ShowEffectSiegeStart
	jmp Block239

 Block69:
	cmp ebx,0x217E76D
	jne Block73

 Block70:
	cmp dword ptr [ebp+0x6C],0x217E385
	push 0
	jne Block72

 Block71:
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [ebp+0x60]
	push eax
	push ecx
	mov ecx,esi
	call CUser::ShowEffectSiegeEnd
	jmp Block239

 Block72:
	mov edx,dword ptr [ebp+0x64]
	mov eax,dword ptr [ebp+0x60]
	push edx
	push eax
	mov ecx,esi
	call CUser::ShowEffectSiegeStart
	jmp Block239

 Block73:
	cmp ebx,0x217E775
	jne Block77

 Block74:
	cmp dword ptr [ebp+0x6C],0x217E38D
	push 1
	jne Block76

 Block75:
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ebp+0x60]
	push ecx
	push edx
	mov ecx,esi
	call CUser::ShowEffectSiegeEnd
	jmp Block239

 Block76:
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [ebp+0x60]
	push eax
	push ecx
	mov ecx,esi
	call CUser::ShowEffectSiegeStart
	jmp Block239

 Block77:
	cmp ebx,0x21612A9
	jne Block80

 Block78:
	cmp dword ptr [ebp+0x6C],0x2160EC1
	jne Block239

 Block79:
	mov edx,dword ptr [ebp+0x64]
	mov eax,dword ptr [ebp+0x60]
	push edx
	push eax
	mov ecx,esi
	call CUser::ShowEffectFlameThrowerEnd
	jmp Block239

 Block80:
	cmp ebx,0x2179951
	jne Block83

 Block81:
	cmp dword ptr [ebp+0x6C],0x2179569
	jne Block239

 Block82:
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ebp+0x60]
	push ecx
	push edx
	mov ecx,esi
	call CUser::ShowEffectFlameThrowerEnd
	jmp Block239

 Block83:
	cmp ebx,0x1F962EE
	jne Block101

 Block84:
	mov eax,dword ptr [ebp+0x60]
	cmp dword ptr [eax+0x20C],0
	je Block86

 Block85:
	mov al,byte ptr [ebp+0x64]
	jmp Block87

 Block86:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax

 Block87:
	push eax
	lea ecx,[ebp+0x64]
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	call SKILLENTRY::GetEffectUOL
	lea edx,[ebp+0x6C]
	push edx
	mov ecx,esi
	mov dword ptr [ebp-4],6
	call CUser::GetVecCtrl_0
	mov ecx,esi
	mov byte ptr [ebp-4],7
	call CUser::IsOnLadderOrRope
	test eax,eax
	je Block90

 Block88:
	lea eax,[ebp-0x44]
	push 0x1945
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[ebp+0x64]
	call Ztl_bstr_t::op_assign
	lea ecx,[ebp-0x44]
	call Ztl_bstr_t::~Ztl_bstr_t
	lea ecx,[ebp+0x3C]
	push ecx
	lea ecx,[esi+0x88]
	call CAvatar::GetTMNavelOrigin
	push eax
	lea ecx,[ebp+0x6C]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	je Block90

 Block89:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block90:
	push 0
	push 0
	push 0
	push 3
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	lea edi,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push edi
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	lea edx,[ebp+0x6C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push edx
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov ecx,dword ptr [ebp+0x64]
	mov eax,dword ptr [esi+0x640]
	test ecx,ecx
	je Block92

 Block91:
	mov ecx,dword ptr [ecx]
	jmp Block93

 Block92:
	xor ecx,ecx

 Block93:
	not eax
	and eax,1
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::Effect_SkillUse
	push 0
	push 0
	push 0
	push 3
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push edi
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	lea eax,[ebp+0x6C]
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	push offset _S_0
	lea ecx,[ebp-0x10]
	push ecx
	lea ecx,[ebp+0x64]
	mov byte ptr [ebp-4],9
	call Ztl_bstr_t::op_add_1
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x640]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block95

 Block94:
	mov eax,dword ptr [eax]
	jmp Block96

 Block95:
	xor eax,eax

 Block96:
	not ecx
	and ecx,1
	push ecx
	mov byte ptr [ebp-4],0xB
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_SkillUse
	lea ecx,[ebp-0x10]
	mov byte ptr [ebp-4],7
	call _xbstr_t::~_xbstr_t
	call get_update_time
	add eax,0x5A0
	jne Block98

 Block97:
	mov eax,1

 Block98:
	push 0
	push eax
	mov ecx,esi
	call CUser::LoadMoreWildEffect
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block100

 Block99:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block100:
	lea ecx,[ebp+0x64]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block239

 Block101:
	cmp ebx,0x1C9C7A6
	jne Block103

 Block102:
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [ebp+0x5C],ecx
	mov ecx,edi
	call CInPacket::Decode2
	mov ecx,edi
	movsx ebx,ax
	call CInPacket::Decode2
	movsx edx,ax
	mov eax,dword ptr [esi+4]
	lea edi,[esi+4]
	lea ecx,[ebp-0x4C]
	mov dword ptr [ebp+0x58],edx
	mov edx,dword ptr [eax+0x10]
	push ecx
	mov ecx,edi
	call edx
	sub ebx,dword ptr [eax]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[ebp-0x54]
	push ecx
	mov ecx,edi
	mov dword ptr [ebp+0x54],ebx
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [ebp+0x5C]
	sub dword ptr [ebp+0x58],eax
	lea ecx,[ebp+0x54]
	push ecx
	push 0xFFFFFFFF
	push edx
	jmp Block114

 Block103:
	cmp ebx,0x1C9C7A5
	jne Block112

 Block104:
	mov ecx,edi
	call CInPacket::Decode1
	mov edx,dword ptr [esi]
	movzx edi,al
	mov eax,dword ptr [edx+0xC]
	mov ecx,esi
	call eax
	test eax,eax
	je Block111

 Block105:
	test edi,edi
	jne Block107

 Block106:
	lea ecx,[ebp+0x34]
	push 0x18D4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [ebp-4],0xC
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x34]
	add esp,8
	jmp Block155

 Block107:
	cmp edi,1
	jne Block109

 Block108:
	lea edx,[ebp-0x30]
	push 0x188D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [ebp-4],0xD
	call CHATLOG_ADD
	mov eax,dword ptr [ebp-0x30]
	add esp,8
	jmp Block155

 Block109:
	cmp edi,2
	jne Block239

 Block110:
	lea eax,[ebp+0x2C]
	push 0x18D7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [ebp-4],0xE
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x2C]
	add esp,8
	jmp Block155

 Block111:
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ebp+0x60]
	push 0
	push 0x7FFFFFFF
	push 0
	push 6
	push ecx
	push edx
	mov ecx,esi
	call CUser::ShowSkillEffect
	jmp Block239

 Block112:
	push ebx
	call is_unregisterd_skill
	add esp,4
	test eax,eax
	jne Block115

 Block113:
	push eax
	push 0x7FFFFFFF
	push eax

 Block114:
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [ebp+0x60]
	push 6
	push eax
	push ecx
	mov ecx,esi
	call CUser::ShowSkillEffect
	jmp Block239

 Block115:
	mov ecx,edi
	call CInPacket::Decode1
	mov edx,dword ptr [ebp+0x64]
	push 0
	movzx eax,al
	push 0x7FFFFFFF
	push eax
	mov eax,dword ptr [ebp+0x60]
	push 6
	push edx
	push eax
	mov ecx,esi
	call CUser::ShowSkillEffect
	jmp Block239

 Block116:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov ebx,eax
	call CInPacket::Decode1
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	movzx edi,al
	call CSkillInfo::GetSkill
	test eax,eax
	je Block239

 Block117:
	push 0xFFFFFFFF
	push 0
	push edi
	push eax
	mov ecx,esi
	call CUser::ShowSkillAffected
	jmp Block239

 Block118:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov ebx,eax
	call CInPacket::Decode1
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	movzx edi,al
	call CSkillInfo::GetSkill
	test eax,eax
	je Block239

 Block119:
	push 0xFFFFFFFF
	push 1
	push edi
	push eax
	mov ecx,esi
	call CUser::ShowSkillAffected
	jmp Block239

 Block120:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [ebp+0x5C],eax
	call CInPacket::Decode4
	mov ecx,edi
	mov ebx,eax
	call CInPacket::Decode1
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	movzx edi,al
	call CSkillInfo::GetSkill
	test eax,eax
	je Block239

 Block121:
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	push 0
	push edi
	push eax
	mov ecx,esi
	call CUser::ShowSkillAffected
	jmp Block239

 Block122:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	mov dword ptr [ebp+0x5C],eax
	call CSkillInfo::GetSkill
	cmp dword ptr [ebp+0x5C],0x423D0B
	mov ebx,eax
	jne Block125

 Block123:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [ebp+0x68],eax
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [ebp+0x5C],eax
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [ebp+0x6C],eax
	call CInPacket::Decode4
	test ebx,ebx
	je Block239

 Block124:
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ebp+0x68]
	mov ecx,dword ptr [ebp+0x6C]
	push edx
	push eax
	push ecx
	push 0
	push 0x320
	push ebx
	mov ecx,esi
	call CUser::ShowSkillSpecialEffect
	jmp Block239

 Block125:
	test ebx,ebx
	je Block239

 Block126:
	push 0
	push 0
	push 0
	push 0
	push 0x3E8
	push ebx
	mov ecx,esi
	call CUser::ShowSkillSpecialEffect
	jmp Block239

 Block127:
	mov dword ptr [ebp+0x60],0
	mov ecx,edi
	mov dword ptr [ebp-4],0xF
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	jle Block149

 Block128:
	mov dword ptr [ebp+0x68],eax

 Block129:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov ebx,eax
	call CInPacket::Decode4
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	lea edx,[ebp+0x64]
	push edx
	mov esi,eax
	call CItemInfo::GetItemName
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	lea eax,[ebp+0x6C]
	push eax
	mov byte ptr [ebp-4],0x10
	call CItemInfo::GetItemTypeName
	lea ecx,[ebp+0x64]
	mov byte ptr [ebp-4],0x11
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block143

 Block130:
	cmp esi,1
	jle Block132

 Block131:
	lea ecx,[ebp-0x18]
	push 0x1542
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [ebp+0x64]
	mov ecx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [eax]
	push esi
	push edx
	push ecx
	push eax
	lea edx,[ebp+0x60]
	push edx
	mov byte ptr [ebp-4],0x12
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x18]
	add esp,0x14
	jmp Block139

 Block132:
	jne Block134

 Block133:
	lea eax,[ebp+0x24]
	push 0x1543
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[ebp+0x60]
	push eax
	mov byte ptr [ebp-4],0x13
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x24]
	jmp Block138

 Block134:
	cmp esi,0xFFFFFFFF
	jne Block136

 Block135:
	lea ecx,[ebp-0x40]
	push 0x133
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [ebp+0x64]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp+0x60]
	push eax
	mov byte ptr [ebp-4],0x14
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x40]
	add esp,0xC
	jmp Block139

 Block136:
	jge Block143

 Block137:
	lea ecx,[ebp+0x1C]
	push 0x132
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [ebp+0x64]
	mov eax,dword ptr [eax]
	neg esi
	push esi
	push edx
	push eax
	lea eax,[ebp+0x60]
	push eax
	mov byte ptr [ebp-4],0x15
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x1C]

 Block138:
	add esp,0x10

 Block139:
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block141

 Block140:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block141:
	cmp ebx,0x3D0DF7
	je Block143

 Block142:
	lea ecx,[ebp+0x60]
	push 7
	push ecx
	call CHATLOG_ADD
	add esp,8

 Block143:
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block145

 Block144:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block145:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block147

 Block146:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block147:
	sub dword ptr [ebp+0x68],1
	jne Block129

 Block148:
	jmp Block154

 Block149:
	lea edx,[ebp-0x20]
	push edx
	mov ecx,edi
	call CInPacket::DecodeStr
	push eax
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],0x16
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block151

 Block150:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block151:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push eax
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov esi,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	mov ecx,edi
	mov byte ptr [ebp-4],0x17
	call CInPacket::Decode4
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xF
	call CAnimationDisplayer::Effect_Quest
	lea ecx,[ebp+0x60]
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block154

 Block152:
	mov ecx,dword ptr [TSingleton<CUIScreenMsg>::ms_pInstance]
	test ecx,ecx
	je Block154

 Block153:
	mov edx,dword ptr [ebp+0x60]
	push 1
	push 5
	push edx
	call CUIScreenMsg::ScrMsg_Add

 Block154:
	mov eax,dword ptr [ebp+0x60]

 Block155:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block239

 Block156:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block239

 Block157:
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,edi
	movzx ebx,al
	call CInPacket::Decode1
	mov ecx,dword ptr [esi+0x2E44]
	movzx eax,al
	mov ecx,dword ptr [ecx+eax*8+4]
	test ecx,ecx
	je Block239

 Block158:
	push ebx
	call CPet::ShowEffect_0
	jmp Block239

 Block159:
	mov ecx,edi
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,edi
	mov dword ptr [ebp+0x5C],edx
	call CInPacket::Decode1
	mov ecx,edi
	movzx esi,al
	call CInPacket::Decode1
	movzx ebx,al
	mov dword ptr [ebp+0x6C],0
	cmp dword ptr [ebp+0x5C],0
	mov dword ptr [ebp-4],0x18
	je Block161

 Block160:
	lea eax,[ebp+0x14]
	push 0xBC1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push ebx
	push eax
	lea ecx,[ebp+0x6C]
	push ecx
	mov byte ptr [ebp-4],0x19
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x14]
	add esp,0x10
	jmp Block164

 Block161:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[ebp+0xC]
	push edx
	call CItemInfo::GetItemName
	mov esi,eax
	lea eax,[ebp+0x4C]
	push 0xBC2
	mov bl,0x1A
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x6C]
	push edx
	mov byte ptr [ebp-4],0x1B
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x4C]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block163

 Block162:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block163:
	mov eax,dword ptr [ebp+0xC]

 Block164:
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block166

 Block165:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block166:
	lea eax,[ebp+0x6C]
	push 7
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x6C]
	add esp,8
	jmp Block155

 Block167:
	lea ecx,[ebp-0x28]
	push 0x1A5F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [ebp-4],0x1C
	call play_game_sound
	mov eax,dword ptr [ebp-0x28]
	mov dword ptr [ebp-4],0xFFFFFFFF
	jmp Block206

 Block168:
	mov eax,dword ptr [esi+0x2EAC]
	push 0xFFFFFFFF
	push ecx
	lea edx,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push edx
	test eax,eax
	je Block170

 Block169:
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov esi,dword ptr [esi+0x2EAC]
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	mov ecx,esi
	mov dword ptr [ebp-4],0x1D
	call CDragon::GetVecCtrl
	lea ecx,[ebp+4]
	push 0x15B9
	push ecx
	mov byte ptr [ebp-4],0x1E
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x1F
	push 0
	mov byte ptr [ebp-4],0x20
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [ebp+4]
	jmp Block171

 Block170:
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	mov ecx,esi
	mov dword ptr [ebp-4],0x21
	call CUser::GetVecCtrl_0
	lea ecx,[ebp+0x48]
	push 0x92E
	push ecx
	mov byte ptr [ebp-4],0x22
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x23
	push 0
	mov byte ptr [ebp-4],0x24
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [ebp+0x48]

 Block171:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block173

 Block172:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block173:
	lea edx,[ebp+0x40]
	push 0x933
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [ebp-4],0x25
	call play_game_sound
	mov eax,dword ptr [ebp+0x40]
	mov dword ptr [ebp-4],0xFFFFFFFF
	jmp Block206

 Block174:
	or edi,0xFFFFFFFF
	push edi
	push ecx
	lea eax,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push ecx
	mov ecx,esi
	mov dword ptr [ebp-4],0x26
	call CUser::GetVecCtrl_0
	lea edx,[ebp+0x38]
	push 0x92F
	push edx
	mov byte ptr [ebp-4],0x27
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x28
	push 0
	mov byte ptr [ebp-4],0x29
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [ebp+0x38]
	mov dword ptr [ebp-4],edi
	test eax,eax
	je Block176

 Block175:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block176:
	lea eax,[ebp+0x30]
	push 0x934
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [ebp-4],0x2A
	call play_game_sound
	mov eax,dword ptr [ebp+0x30]
	mov dword ptr [ebp-4],edi
	jmp Block206

 Block177:
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	push 0
	push eax
	mov ecx,esi
	call CUser::MakeIncDecHPEffect
	jmp Block239

 Block178:
	mov ecx,edi
	call CInPacket::Decode4
	push 0
	push eax
	mov ecx,esi
	call CUser::MakeIncDecHPEffect
	jmp Block239

 Block179:
	mov ecx,edi
	call CInPacket::Decode4
	mov edi,eax
	mov dword ptr [ebp+0x68],0
	lea ecx,[ebp+0x28]
	push 0x9AB
	mov ebx,0x2B
	push ecx
	mov dword ptr [ebp-4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[ebp+0x68]
	push edx
	mov byte ptr [ebp-4],0x2C
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x28]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block181

 Block180:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block181:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x2D
	call CUser::GetVecCtrl_0
	mov esi,dword ptr [ebp+0x68]
	push 0
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push esi
	call CAnimationDisplayer::Effect_BuffItemUse
	push 0x29
	push edi
	call play_item_sound
	add esp,8

 Block182:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block239

 Block183:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4
	jmp Block239

 Block184:
	lea ecx,[ebp+0x20]
	push ecx
	mov ecx,edi
	call CInPacket::DecodeStr
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x2E
	call ZXString16::CreateFromCharStr
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x30
	test eax,eax
	je Block186

 Block185:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block186:
	mov eax,dword ptr [esi+0x19E4]
	add esi,0x19E4
	test eax,eax
	je Block188

 Block187:
	add eax,0xFFFFFFF4
	jmp Block189

 Block188:
	xor eax,eax

 Block189:
	mov ecx,dword ptr [eax+0x1C0]
	mov edx,dword ptr [eax+0x1C4]
	imul ecx,0xBB8
	mov eax,dword ptr [eax+0x18]
	mov ebx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	sub ecx,edx
	neg eax
	sbb eax,eax
	and eax,5
	lea edx,[ecx+ecx*4]
	add eax,2
	mov ecx,esi
	lea edi,[eax+edx*2-0x3FFF8ADA]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Gety
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Getx
	mov esi,dword ptr [ebp+0x5C]
	push eax
	dec edi
	push edi
	push esi
	mov ecx,ebx
	call CAnimationDisplayer::Effect_Reserved
	jmp Block182

 Block190:
	push 0x29
	mov ecx,edi
	call CInPacket::Decode4
	push eax
	call play_item_sound
	add esp,8
	mov ecx,edi
	call CInPacket::Decode1
	test al,al
	je Block239

 Block191:
	lea eax,[ebp+0x68]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	mov eax,dword ptr [esi+0x19E4]
	add esi,0x19E4
	mov dword ptr [ebp-4],0x31
	test eax,eax
	je Block193

 Block192:
	add eax,0xFFFFFFF4
	jmp Block194

 Block193:
	xor eax,eax

 Block194:
	mov ecx,dword ptr [eax+0x1C0]
	mov edx,dword ptr [eax+0x1C4]
	imul ecx,0xBB8
	mov eax,dword ptr [eax+0x18]
	sub ecx,edx
	mov edx,dword ptr [ebp+0x68]
	neg eax
	sbb eax,eax
	push 0xFFFFFFFF
	and eax,5
	lea ecx,[ecx+ecx*4]
	add eax,2
	push 0
	push edx
	lea edi,[eax+ecx*2-0x3FFF8ADA]
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov ebx,esp
	dec edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],0
	mov ecx,esi
	mov byte ptr [ebp-4],0x32
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Gety
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Getx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [ebp+0x68]
	mov esi,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	push 0xFFFFFFFF
	push ebx
	push eax
	mov byte ptr [ebp-4],0x33
	call ZStrUtil::_Conv_0
	add esp,0xC
	mov ecx,esi
	push eax
	mov byte ptr [ebp-4],0x31
	call CAnimationDisplayer::Effect_General

 Block195:
	mov eax,dword ptr [ebp+0x68]
	jmp Block155

 Block196:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push ecx
	mov ecx,esi
	mov dword ptr [ebp-4],0x34
	call CUser::GetVecCtrl_0
	lea edx,[ebp+0x18]
	push 0x92D
	push edx
	mov byte ptr [ebp-4],0x35
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x36
	push 0
	mov byte ptr [ebp-4],0x37
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [ebp+0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block198

 Block197:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block198:
	push 0x64
	push offset _S_MCARDGET
	call play_game_sound
	add esp,8
	jmp Block239

 Block199:
	mov ecx,edi
	call CInPacket::Decode4
	mov edi,eax
	lea eax,[ebp+0x6C]
	push 0x12FE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x6C]
	push edi
	push ecx
	lea edx,[ebp+0x6C]
	mov ebx,0x38
	push edx
	mov dword ptr [ebp-4],ebx
	call ZXString16::Format
	add esp,0xC
	push 0xFFFFFFFF
	push ecx
	lea eax,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x39
	call CUser::GetVecCtrl_0
	mov esi,dword ptr [esi+0x640]
	mov edx,dword ptr [ebp+0x6C]
	not esi
	and esi,1
	push esi
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edx
	call CAnimationDisplayer::Effect_General
	push edi
	call play_ConsumeEffect_sound
	mov eax,dword ptr [ebp+0x6C]
	add esp,4
	mov dword ptr [ebp-4],0xFFFFFFFF
	jmp Block207

 Block200:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	mov ecx,esi
	mov dword ptr [ebp-4],0x3A
	call CUser::GetVecCtrl_0
	lea ecx,[ebp+0x10]
	push 0x930
	push ecx
	mov byte ptr [ebp-4],0x3B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x3C
	push 0
	mov byte ptr [ebp-4],0x3D
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [ebp+0x10]
	or esi,0xFFFFFFFF
	mov dword ptr [ebp-4],esi
	test eax,eax
	je Block202

 Block201:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block202:
	lea edx,[ebp+8]
	push 0x935
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [ebp-4],0x3E
	call play_game_sound
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],esi
	jmp Block206

 Block203:
	mov ecx,edi
	call CInPacket::Decode4
	mov edi,eax
	push edi
	push ecx
	lea ebx,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push ebx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	mov ecx,esi
	mov dword ptr [ebp-4],0x3F
	call CUser::GetVecCtrl_0
	mov esi,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	mov ecx,ebx
	mov byte ptr [ebp-4],0x40
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	or ebx,0xFFFFFFFF
	push eax
	mov ecx,esi
	mov dword ptr [ebp-4],ebx
	call CAnimationDisplayer::Effect_ItemMake
	test edi,edi
	jne Block209

 Block204:
	lea ecx,[ebp]
	push 0x507
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [ebp-4],0x41
	call play_game_sound
	mov eax,dword ptr [ebp]

 Block205:
	mov dword ptr [ebp-4],ebx

 Block206:
	add esp,8

 Block207:
	test eax,eax
	je Block239

 Block208:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block239

 Block209:
	cmp edi,1
	jne Block239

 Block210:
	lea edx,[ebp-0x14]
	push 0x508
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [ebp-4],0x42
	call play_game_sound
	mov eax,dword ptr [ebp-0x14]
	jmp Block205

 Block211:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	mov ecx,esi
	mov dword ptr [ebp-4],0x43
	call CUser::GetVecCtrl_0
	lea ecx,[ebp-0x1C]
	push 0x931
	push ecx
	mov byte ptr [ebp-4],0x44
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x45
	push 0
	mov byte ptr [ebp-4],0x46
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [ebp-0x1C]
	or edi,0xFFFFFFFF
	mov dword ptr [ebp-4],edi
	test eax,eax
	je Block213

 Block212:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block213:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xC]
	mov ecx,esi
	call eax
	test eax,eax
	je Block239

 Block214:
	lea ecx,[ebp-0x24]
	push 0x936
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [ebp-4],0x47
	call play_game_sound
	mov eax,dword ptr [ebp-0x24]
	mov dword ptr [ebp-4],edi
	jmp Block206

 Block215:
	lea edx,[ebp+0x68]
	push edx
	mov ecx,edi
	call CInPacket::DecodeStr
	mov eax,dword ptr [ebp+0x68]
	push 0xFFFFFFFF
	push 0
	mov ebx,0x48
	push eax
	mov dword ptr [ebp-4],ebx
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+0x68]
	mov eax,esp
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	push eax
	push ecx
	call ZStrUtil::_Conv_0
	add esp,0xC
	push eax
	lea ecx,[ebp+0x5C]
	call ZXString16::CreateFromCStr
	mov edi,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	add esi,0x19E4
	mov ecx,esi
	mov byte ptr [ebp-4],0x49
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Gety
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Getx
	mov esi,dword ptr [ebp+0x5C]
	push eax
	push 0xC00614A4
	push esi
	mov ecx,edi
	call CAnimationDisplayer::Effect_Reserved
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block195

 Block216:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	mov eax,dword ptr [ebp+0x68]
	add esp,4
	jmp Block155

 Block217:
	lea edx,[ebp-0x2C]
	push 0x1559
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 7
	push eax
	mov dword ptr [ebp-4],0x4A
	call CHATLOG_ADD
	mov eax,dword ptr [ebp-0x2C]
	add esp,8
	jmp Block155

 Block218:
	mov ecx,edi
	call CInPacket::Decode1
	movzx esi,al
	mov dword ptr [ebp+0x68],0
	lea eax,[ebp-0x34]
	push 0x1493
	mov ebx,0x4B
	push eax
	mov dword ptr [ebp-4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[ebp+0x68]
	push ecx
	mov byte ptr [ebp-4],0x4C
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x34]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block220

 Block219:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block220:
	lea edx,[ebp+0x68]
	push 7
	push edx
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x68]
	add esp,8
	jmp Block155

 Block221:
	call get_field
	test eax,eax
	je Block239

 Block222:
	call get_field
	mov edx,dword ptr [eax]
	mov ecx,eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	cmp eax,0x13
	jne Block239

 Block223:
	lea ecx,[ebp+0x68]
	push ecx
	mov ecx,edi
	call CInPacket::DecodeStr
	mov edx,dword ptr [ebp+0x68]
	push 0xFFFFFFFF
	push 0
	push edx
	mov dword ptr [ebp-4],0x4D
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov edi,esp
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x4E
	call CUser::GetVecCtrl_0
	mov esi,dword ptr [esi+0x640]
	mov ecx,dword ptr [ebp+0x68]
	mov ebx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	not esi
	and esi,1
	push esi
	push 0xFFFFFFFF
	push edi
	push ecx
	mov byte ptr [ebp-4],0x4F
	call ZStrUtil::_Conv_0
	add esp,0xC
	mov ecx,ebx
	push eax
	mov byte ptr [ebp-4],0x4D
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [ebp+0x68]
	jmp Block155

 Block224:
	lea edx,[ebp+0x6C]
	push edx
	mov ecx,edi
	call CInPacket::DecodeStr
	mov ebx,0x50
	mov ecx,edi
	mov dword ptr [ebp-4],ebx
	call CInPacket::Decode4
	lea ecx,[ebp+0x6C]
	call ZXString<char>::IsEmpty
	test eax,eax
	mov eax,dword ptr [ebp+0x6C]
	jne Block155

 Block225:
	push 0xFFFFFFFF
	push 0
	push eax
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov edi,esp
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x51
	call CUser::GetVecCtrl_0
	mov edx,dword ptr [ebp+0x6C]
	mov esi,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	push 0xFFFFFFFF
	push edi
	push edx
	mov byte ptr [ebp-4],0x52
	call ZStrUtil::_Conv_0
	add esp,0xC
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [ebp+0x6C]
	jmp Block155

 Block226:
	push 0x29
	mov ecx,edi
	call CInPacket::Decode4
	push eax
	call play_item_sound
	add esp,8
	lea eax,[ebp+0x68]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	mov eax,dword ptr [esi+0x19E4]
	add esi,0x19E4
	mov dword ptr [ebp-4],0x53
	test eax,eax
	je Block228

 Block227:
	add eax,0xFFFFFFF4
	jmp Block229

 Block228:
	xor eax,eax

 Block229:
	mov ecx,dword ptr [eax+0x1C0]
	mov edx,dword ptr [eax+0x1C4]
	imul ecx,0xBB8
	mov eax,dword ptr [eax+0x18]
	sub ecx,edx
	mov edx,dword ptr [ebp+0x68]
	neg eax
	sbb eax,eax
	push 0xFFFFFFFF
	and eax,5
	lea ecx,[ecx+ecx*4]
	add eax,2
	push 0
	push edx
	lea edi,[eax+ecx*2-0x3FFF8ADA]
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov ebx,esp
	dec edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],0
	mov ecx,esi
	mov byte ptr [ebp-4],0x54
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Gety
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Getx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [ebp+0x68]
	mov esi,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	push 0xFFFFFFFF
	push ebx
	push eax
	mov byte ptr [ebp-4],0x55
	call ZStrUtil::_Conv_0
	add esp,0xC
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x53
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [ebp+0x68]
	jmp Block155

 Block230:
	lea ecx,[ebp+0x60]
	push ecx
	mov ecx,edi
	call CInPacket::DecodeStr
	lea edx,[ebp+0x60]
	push edx
	mov dword ptr [ebp-4],0x56
	call get_field
	mov ecx,eax
	call CMapLoadable::PlaySoundWithMuteBgm
	jmp Block154

 Block231:
	mov ecx,edi
	call CInPacket::Decode4
	mov edi,eax
	push 0x29
	push edi
	call play_item_sound
	add esp,8
	cmp dword ptr [esi+0x3AB4],0
	jne Block239

 Block232:
	cmp dword ptr [esi+0x3AB8],0
	je Block239

 Block233:
	mov eax,dword ptr [esi+0x19E8]
	push eax
	push ecx
	lea eax,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push eax
	mov dword ptr [esi+0x3AB4],1
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push ecx
	mov ecx,esi
	mov dword ptr [ebp-4],0x57
	call CUser::GetVecCtrl_0
	mov dword ptr [ebp-4],0xFFFFFFFF
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edi
	call CAnimationDisplayer::Effect_QuestDeliveryItemUse
	jmp Block239

 Block234:
	xor eax,eax
	cmp dword ptr [esi+0x3AB4],eax
	je Block236

 Block235:
	mov dword ptr [esi+0x3AB8],eax

 Block236:
	mov dword ptr [esi+0x3AB4],eax
	jmp Block239

 Block237:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	test ecx,ecx
	je Block239

 Block238:
	call CUIStatusBar::Eff_EvolRing

 Block239:
	lea esp,[ebp-0x64]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x70]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x74
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CUser::OnSetPhase
__SUB_CLASS_THIS(004E11F0, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x10]
	mov ebx,ecx
	push edi
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov edi,eax
	call CInPacket::Decode1
	mov esi,dword ptr [_D_G_PSTAGE+4]
	movzx ebp,al
	test esi,esi
	je Block2

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	jne Block3

 Block2:
	xor esi,esi
	jmp Block4

 Block3:
	cmp dword ptr [esi+0x24C],0
	jg Block5

 Block4:
	xor edi,edi

 Block5:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0xC]
	mov ecx,ebx
	mov dword ptr [ebx+0x2E18],edi
	call edx
	test eax,eax
	je Block13

 Block6:
	cmp dword ptr [esi+0x24C],edi
	jl Block9

 Block7:
	mov eax,dword ptr [esi+0x254]
	mov eax,dword ptr [eax+edi*4]
	test eax,eax
	jle Block9

 Block8:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	push 0xC0007530
	call CAnimationDisplayer::SetLocalFadeLayer
	jmp Block10

 Block9:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::ResetLocalFadeLayer

 Block10:
	test ebp,ebp
	je Block12

 Block11:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0xDC
	push 0xC006153A
	push 0x320
	push 0x190
	push 0x1F4
	call CAnimationDisplayer::RegisterFadeInOutAnimation

 Block12:
	mov ecx,dword ptr [TSingleton<CAffectedAreaPool>::ms_pInstance]
	push edi
	call CAffectedAreaPool::RedrawForPhase

 Block13:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CGrenade::OnResolveMoveAction
__SUB_CLASS_THIS(00168D20, __thiscall, 81212,  CGrenade, long, long, long, long, const CVecCtrl*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	xor ecx,ecx
	test eax,eax
	setl cl
	mov eax,ecx
	and eax,1
	or eax,6
	ret 0x10

 Block2:
	mov eax,dword ptr [esp+0xC]
	and eax,1
	and eax,1
	or eax,6
	ret 0x10
}
}
// CUser::PrepareShadowPartnerActionLayer
_SUB_EXCEPTION_HANDLER(4E1730)
__SUB_CLASS_THIS0(004E1730, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E1730
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	cmp dword ptr [ebp+0x638],0
	jne Block158

 Block1:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	call edx
	mov ecx,eax
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x2B
	je Block158

 Block2:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	mov ecx,ebp
	call eax
	lea ebx,[ebp+0x88]
	lea ecx,[esp+0x1C]
	mov esi,eax
	mov eax,dword ptr [ebx+0x5B8]
	push ecx
	push eax
	mov ecx,ebx
	call CAvatar::MoveAction2RawAction
	mov ecx,ebx
	mov edi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block4

 Block3:
	mov ecx,ebx
	call CAvatar::GetOneTimeAction
	mov dword ptr [esp+0x14],eax
	jmp Block5

 Block4:
	mov dword ptr [esp+0x14],edi

 Block5:
	mov edx,dword ptr [esi+0x4AC]
	push edx
	lea eax,[esi+0x4A4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block55

 Block6:
	mov ecx,dword ptr [esi+0x4B8]
	push ecx
	lea edx,[esi+0x4B0]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x4215FA
	je Block55

 Block7:
	cmp dword ptr [esp+0x14],0x2F
	je Block55

 Block8:
	mov ecx,esi
	call SecondaryStat::IsRidingVehicle
	lea edi,[ebp+0x1964]
	mov ecx,edi
	test eax,eax
	je Block10

 Block9:
	push 0xFFFFFF
	jmp Block11

 Block10:
	push 0xFFFFFFFF

 Block11:
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putcolor
	mov eax,3
	mov word ptr [esp+0x6C],ax
	mov dword ptr [esp+0x74],0xFFFFFFFE
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x9C],0
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	lea ecx,[esp+0x6C]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	xor ebx,ebx
	xor esi,esi
	cmp dword ptr [ebp+0x5D0],ebx
	jne Block16

 Block14:
	cmp dword ptr [ebp+0x5E4],ebx
	jne Block16

 Block15:
	xor eax,eax
	jmp Block17

 Block16:
	mov eax,1

 Block17:
	push eax
	mov eax,dword ptr [esp+0x18]
	push eax
	call is_back_action
	add esp,8
	test eax,eax
	je Block19

 Block18:
	mov ebx,0x32
	jmp Block20

 Block19:
	mov ecx,dword ptr [ebp+0x640]
	and cl,1
	movsx esi,cl
	neg esi
	sbb esi,esi
	and esi,0x3C
	add esi,0xFFFFFFE2

 Block20:
	lea edx,[esp+0x7C]
	push edx
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getorigin
	push offset _D_VTEMPTY
	mov ecx,edi
	mov dword ptr [esp+0x98],1
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Putorigin
	lea eax,[esp+0x7C]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Putorigin
	push offset _D_VTMISSING
	lea ecx,[esp+0x60]
	call Ztl_variant_t::_ctor_1
	mov ecx,edi
	mov byte ptr [esp+0x94],2
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::GetcurrentTime
	add eax,0xC8
	mov ecx,3
	mov word ptr [esp+0x6C],cx
	mov dword ptr [esp+0x74],eax
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x70]
	push eax
	push ebx
	mov byte ptr [esp+0xA0],cl
	push esi
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x6C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x94],1
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x1960]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putflip
	lea ecx,[ebp+0x88]
	call CAvatar::GetActionInfo
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [eax+0x970]
	add eax,0x970
	lea ecx,[ecx+ecx*4]
	cmp dword ptr [edx+ecx*4+8],0
	lea esi,[edx+ecx*4]
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [ebp]
	mov ebx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push esi
	push eax
	mov eax,dword ptr [edx+0x40]
	mov ecx,ebp
	call eax
	push eax
	call get_shadow_parter_skillid
	add esp,4
	push eax
	mov ecx,ebx
	call CActionMan::LoadShadowPartnerAction
	cmp dword ptr [esi+8],0
	jne Block23

 Block22:
	push 0x22000006
	lea ecx,[esp+0x1C]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x18]
	push offset CTerminateException::THROW_INFO
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x1C],ecx
	call _CxxThrowException

 Block23:
	mov esi,dword ptr [esi+0xC]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block54

 Block24:
	mov ebp,dword ptr [ZImports::_VariantInit]
	mov ebx,8

 Block25:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	lea ecx,[esp+0x5C]
	push ecx
	call ebp
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block80

 Block26:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x98],4
	call ebp
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block80

 Block27:
	mov eax,dword ptr [esi+0x14]
	mov edx,3
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],eax
	mov eax,dword ptr [esi+0x10]
	mov ecx,edx
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],eax
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],0
	mov ecx,dword ptr [edi]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [esp+0x94],8
	test ecx,ecx
	je Block56

 Block28:
	lea eax,[esp+0x5C]
	push eax
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push esi
	lea edx,[esp+0x84]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x6C],bx
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov byte ptr [esp+0x94],7
	cmp word ptr [esp+0x1C],bx
	jne Block39

 Block33:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block35:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block36:
	mov byte ptr [esp+0x94],6
	cmp word ptr [esp+0x2C],bx
	jne Block40

 Block37:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block41

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block39:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x1C]
	push eax
	call esi
	jmp Block36

 Block40:
	lea edx,[esp+0x2C]
	push edx
	call esi

 Block41:
	mov byte ptr [esp+0x94],5
	cmp word ptr [esp+0x3C],bx
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x3C]
	push ecx
	call esi

 Block45:
	mov byte ptr [esp+0x94],4
	cmp word ptr [esp+0x4C],bx
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[esp+0x4C]
	push eax
	call esi

 Block49:
	mov byte ptr [esp+0x94],1
	cmp word ptr [esp+0x5C],bx
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[esp+0x5C]
	push edx
	call esi

 Block53:
	cmp dword ptr [esp+0x14],0
	jne Block25

 Block54:
	lea ecx,[esp+0x7C]
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block158

 Block55:
	mov esi,dword ptr [ebp+0x1964]
	xor ebx,ebx
	cmp esi,ebx
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xDC]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block59

 Block58:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block59:
	test dword ptr [esp+0x18],0xFF000000
	je Block158

 Block60:
	mov esi,dword ptr [ebp+0x1964]
	cmp esi,ebx
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFF
	push esi
	call ecx
	cmp eax,ebx
	jge Block64

 Block63:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block64:
	mov edx,3
	mov word ptr [esp+0x5C],dx
	mov dword ptr [esp+0x64],0xFFFFFFFE
	mov ecx,dword ptr [ebp+0x1964]
	mov dword ptr [esp+0x94],9
	cmp ecx,ebx
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea eax,[esp+0x5C]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	cmp word ptr [esp+0x5C],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	cmp eax,ebx
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[esp+0x5C]
	push ecx
	call edi

 Block72:
	xor esi,esi
	mov dword ptr [esp+0x20],ebx
	cmp dword ptr [ebp+0x5D0],ebx
	jne Block75

 Block73:
	cmp dword ptr [ebp+0x5E4],ebx
	jne Block75

 Block74:
	xor eax,eax
	jmp Block76

 Block75:
	mov eax,1

 Block76:
	mov edx,dword ptr [esp+0x14]
	push eax
	push edx
	call is_back_action
	add esp,8
	test eax,eax
	je Block78

 Block77:
	mov dword ptr [esp+0x20],0x32
	jmp Block79

 Block78:
	mov eax,dword ptr [ebp+0x640]
	and al,1
	movsx esi,al
	neg esi
	sbb esi,esi
	and esi,0x3C
	add esi,0xFFFFFFE2

 Block79:
	mov dword ptr [esp+0x18],ebx
	lea ecx,[esp+0x4C]
	push ecx
	mov dword ptr [esp+0x98],0xA
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	mov eax,3
	mov word ptr [esp+0x5C],ax
	mov dword ptr [esp+0x64],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x94],0xC
	cmp ecx,ebx
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x60]
	push eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[esp+0x30]
	push edx
	call IWzGr2D::CreateLayer
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block85

 Block84:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block85:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x94],0xB
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	cmp eax,ebx
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[esp+0x5C]
	push ecx
	call edi

 Block89:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x94],0xA
	jne Block92

 Block90:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebx
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea eax,[esp+0x4C]
	push eax
	call edi

 Block93:
	mov ecx,dword ptr [ebp+0x1960]
	cmp ecx,ebx
	jne Block95

 Block94:
	push 0x80004003
	call _com_issue_error

 Block95:
	lea edx,[esp+0x6C]
	push edx
	call IWzVector2D::Getorigin
	mov edi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x94],0xD
	cmp edi,ebx
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	push eax
	mov ecx,edi
	call IWzVector2D::Putorigin
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0x94],0xA
	jne Block100

 Block98:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,ebx
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	mov eax,dword ptr [ebp+0x1960]
	mov edx,0xD
	mov word ptr [esp+0x5C],dx
	mov dword ptr [esp+0x64],eax
	cmp eax,ebx
	je Block103

 Block102:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block103:
	lea eax,[esp+0x5C]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x98],0xE
	call IWzGr2DLayer::Putoverlay
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x94],0xA
	jne Block106

 Block104:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,ebx
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	cmp eax,ebx
	jge Block109

 Block108:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block109:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block111

 Block110:
	push eax
	call _com_issue_error

 Block111:
	lea ecx,[esp+0x5C]
	mov bl,0xF
	push ecx
	mov byte ptr [esp+0x98],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esp+0x60]
	push ecx
	push edx
	push esi
	mov ecx,edi
	mov byte ptr [esp+0xA4],0x10
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x94],bl
	cmp word ptr [esp+0x5C],si
	jne Block116

 Block114:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov byte ptr [esp+0x94],0xA
	cmp word ptr [esp+0x4C],si
	jne Block120

 Block118:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block121:
	mov ecx,dword ptr [ebp+0x1960]
	test ecx,ecx
	jne Block123

 Block122:
	push 0x80004003
	call _com_issue_error

 Block123:
	call IWzGr2DLayer::Getflip
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xD8]
	neg eax
	sbb eax,eax
	neg eax
	push eax
	push edi
	call edx
	test eax,eax
	jge Block125

 Block124:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block125:
	lea esi,[ebp+0x88]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	imul ecx,0x974
	lea eax,[ecx+esi+0x5C0]
	mov esi,dword ptr [eax+0x970]
	add esi,0x3AC
	cmp dword ptr [esi+8],0
	jne Block128

 Block126:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0x40]
	mov ebx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push esi
	push 0x2F
	mov ecx,ebp
	call eax
	push eax
	call get_shadow_parter_skillid
	add esp,4
	push eax
	mov ecx,ebx
	call CActionMan::LoadShadowPartnerAction
	cmp dword ptr [esi+8],0
	jne Block128

 Block127:
	push 0x22000006
	lea ecx,[esp+0x18]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x14]
	push offset CTerminateException::THROW_INFO
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x24],ecx
	call _CxxThrowException

 Block128:
	mov esi,dword ptr [esi+0xC]
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov ebp,8
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block157

 Block129:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	lea ecx,[esp+0x1C]
	push ecx
	call ebx
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block80

 Block130:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x98],0x11
	call ebx
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block80

 Block131:
	mov eax,dword ptr [esi+0x14]
	mov edx,3
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],eax
	mov eax,dword ptr [esi+0x10]
	mov ecx,edx
	mov word ptr [esp+0x4C],cx
	mov dword ptr [esp+0x54],eax
	mov word ptr [esp+0x5C],dx
	mov dword ptr [esp+0x64],0xC8
	mov esi,dword ptr [esi+0xC]
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x58]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	push esi
	lea edx,[esp+0x84]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xB0],0x15
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x6C],bp
	jne Block134

 Block132:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov byte ptr [esp+0x94],0x14
	cmp word ptr [esp+0x5C],bp
	jne Block142

 Block136:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block138

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block138:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block139:
	mov byte ptr [esp+0x94],0x13
	cmp word ptr [esp+0x4C],bp
	jne Block143

 Block140:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block144

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block142:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x5C]
	push eax
	call esi
	jmp Block139

 Block143:
	lea edx,[esp+0x4C]
	push edx
	call esi

 Block144:
	mov byte ptr [esp+0x94],0x12
	cmp word ptr [esp+0x3C],bp
	jne Block147

 Block145:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea ecx,[esp+0x3C]
	push ecx
	call esi

 Block148:
	mov byte ptr [esp+0x94],0x11
	cmp word ptr [esp+0x2C],bp
	jne Block151

 Block149:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea eax,[esp+0x2C]
	push eax
	call esi

 Block152:
	mov byte ptr [esp+0x94],0xA
	cmp word ptr [esp+0x1C],bp
	jne Block155

 Block153:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea edx,[esp+0x1C]
	push edx
	call esi

 Block156:
	cmp dword ptr [esp+0x14],0
	jne Block129

 Block157:
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0x98],0x16
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esp+0x70]
	push ecx
	push 0
	mov ecx,edi
	mov byte ptr [esp+0xA0],0x17
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x6C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x94],0xA
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0
	mov dword ptr [eax],0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x28],esp
	push edi
	call eax
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call edx

 Block158:
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret
}
}
// CUser::IsDoingBoomerangStep
__SUB_CLASS_THIS(00503370, __thiscall, 16583,  CUser, int32_t, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x3AAC],0
	je Block4

 Block1:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block3

 Block2:
	cmp eax,dword ptr [ecx+0x3AB0]
	jne Block4

 Block3:
	mov eax,1
	ret 4

 Block4:
	xor eax,eax
	ret 4
}
}
// USERLAYER::~USERLAYER
__SUB_CLASS_THIS0(004DF4B0, __thiscall, 24546,  USERLAYER, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+8]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CUser::RemoveDojangInvincibleEffect
__SUB_CLASS_THIS0(004E1150, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3A50]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+0x3A50],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CUser::OnLayerZChanged
__SUB_CLASS_THIS(004E0110, __thiscall, 16664,  CUser, void, const CVecCtrl*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	test eax,eax
	je Block2

 Block1:
	add eax,0xC
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	cmp eax,dword ptr [esi+0x19E0]
	jne Block6

 Block4:
	lea ecx,[esi-4]
	call CUser::SetLayerZ
	mov ecx,dword ptr [esi+0x2EA8]
	test ecx,ecx
	je Block6

 Block5:
	call CDragon::SetLayerZ

 Block6:
	pop esi
	ret 4
}
}
// CUser::SetMoveAction
// 8DF6FC
static uint8_t _SUB_4DF540_LOOKUP_TABLE_0[54] = {
0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 
1, 1, 1, 1, 1, 0, 
};
__SUB_CLASS_THIS(004DF540, __thiscall, 16592,  CAvatar, void, long, int32_t) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x570]
	mov eax,offset _D_RIDING_WILDHUNTE__43+4

 Block1:
	mov ebx,dword ptr [esp+0x10]
	mov ebp,dword ptr [esp+0x14]
	cmp dword ptr [eax],ecx
	je Block5

 Block2:
	add eax,4
	cmp eax,offset _D_DB_DATE_19000101__45
	jl Block1

 Block3:
	test ebp,ebp
	jne Block5

 Block4:
	cmp ebx,dword ptr [esi+0x5B8]
	je Block34

 Block5:
	mov eax,offset _D_RIDING_WILDHUNTE__43+4
	push edi
	lea esp,[esp]

 Block6:
	cmp dword ptr [eax],ecx
	je Block9

 Block7:
	add eax,4
	cmp eax,offset _D_DB_DATE_19000101__45
	jl Block6

 Block8:
	jmp Block13

 Block9:
	test ebp,ebp
	jne Block13

 Block10:
	lea eax,[esp+0x14]
	push eax
	push ebx
	mov ecx,esi
	call CAvatar::MoveAction2RawAction
	push eax
	mov ecx,esi
	call CAvatar::ConvertCharacterAction
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	mov edi,eax
	call CAvatar::GetCurCharacterAction
	cmp edi,eax
	jne Block13

 Block11:
	mov edx,dword ptr [esp+0x14]
	cmp edx,dword ptr [esp+0x18]
	jne Block13

 Block12:
	push ebp
	push ebx
	mov ecx,esi
	call CAvatar::MoveAction2RawAction
	cmp eax,dword ptr [esi+0x5AC]
	je Block33

 Block13:
	push ebp
	push ebx
	mov ecx,esi
	call CAvatar::SetMoveAction
	cmp dword ptr [esi+0x548],0
	je Block15

 Block14:
	mov eax,2
	jmp Block18

 Block15:
	mov eax,dword ptr [esi+0x5B8]
	push 0
	push eax
	mov ecx,esi
	call CAvatar::MoveAction2RawAction
	mov ecx,esi
	mov edi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block17

 Block16:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	jmp Block18

 Block17:
	mov eax,edi

 Block18:
	push eax
	lea ecx,[esi+0x39AC]
	call CItemEffectManager::ChangeAction
	lea edi,[esi-0x88]
	xor ebx,ebx
	cmp dword ptr [edi+0x3AB4],ebx
	je Block20

 Block19:
	mov dword ptr [edi+0x3AB8],ebx

 Block20:
	mov dword ptr [edi+0x3AB4],ebx
	mov eax,dword ptr [esi+0x5B8]
	and eax,0xFFFFFFFE
	cmp eax,0x12
	jne Block22

 Block21:
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x30]
	xor eax,eax
	cmp ebp,ebx
	sete al
	mov ecx,edi
	push eax
	call edx

 Block22:
	cmp dword ptr [esi+0x2E8C],ebx
	je Block25

 Block23:
	mov eax,dword ptr [esi+0x5B8]
	and eax,0xFFFFFFFE
	cmp eax,0x12
	je Block25

 Block24:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x34]
	mov ecx,edi
	call eax

 Block25:
	cmp dword ptr [esi+0x2E04],ebx
	je Block33

 Block26:
	mov eax,dword ptr [esi+0x5B8]
	push ebx
	push eax
	mov ecx,esi
	call CAvatar::MoveAction2RawAction
	mov ecx,esi
	mov edi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block28

 Block27:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	jmp Block29

 Block28:
	mov eax,edi

 Block29:
	sub eax,2
	cmp eax,0x35
	ja Block32

 Block30:
	movzx ecx,byte ptr [eax+_SUB_4DF540_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block31
cmp ECX, 1
je Block32


 Block31:
	mov edx,dword ptr [esi+0x2E04]
	pop edi
	pop esi
	pop ebp
	mov dword ptr [edx+4],1
	pop ebx
	ret 8

 Block32:
	mov edi,dword ptr [esi+0x2E04]
	mov ecx,esi
	call CAvatar::IsOnPlayingRotateAction
	mov dword ptr [edi+4],eax

 Block33:
	pop edi

 Block34:
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// CUser::DrawNameTags
_SUB_EXCEPTION_HANDLER(4EA990)
__SUB_CLASS_THIS0(004EA990, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4EA990
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0x2E40]
	push 0
	push 0
	push 0
	push 0
	push eax
	lea ecx,[esi+0x2E38]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov eax,dword ptr [esi+0x19E4]
	push 0x3E8
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x19EC]
	push eax
	mov ecx,esi
	call CLife::MakeNameTag
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CUser::GetTeamNameForMCarnival
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x3C],0
	call CUser::GetTeamNameForPartyRaid
	mov edi,dword ptr [_D_G_PSTAGE+4]
	mov byte ptr [esp+0x38],1
	test edi,edi
	je Block7

 Block5:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x1C]
	mov ecx,edi
	call eax
	jmp Block8

 Block7:
	or eax,0xFFFFFFFF

 Block8:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block15

 Block9:
	cmp byte ptr [ecx],0
	je Block15

 Block10:
	mov ecx,dword ptr [esi+0x2DF0]
	mov eax,dword ptr [esi+0x19E4]
	push 0
	push 0
	push 0
	push 0
	push ecx
	push 0x3ED
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block12:
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esp+0x34]
	jmp Block29

 Block15:
	cmp eax,0x1A
	je Block17

 Block16:
	cmp eax,0x20
	jne Block24

 Block17:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block24

 Block18:
	cmp byte ptr [eax],0
	je Block24

 Block19:
	push 0
	push 0
	push 0
	push 0
	mov ecx,esi
	call CUser::GetTeamForPartyRaid
	push eax
	mov eax,dword ptr [esi+0x19E4]
	push 0x3EF
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block21:
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block23:
	mov eax,dword ptr [esp+0x30]
	jmp Block29

 Block24:
	movzx ecx,byte ptr [esi+0x19FE]
	movzx edx,word ptr [esi+0x19FC]
	movzx eax,byte ptr [esi+0x19FA]
	push ecx
	movzx ecx,word ptr [esi+0x19F8]
	push edx
	push eax
	mov eax,dword ptr [esi+0x19E4]
	push ecx
	push 0
	push 0x3EC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block26:
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block28:
	mov eax,dword ptr [esi+0x19F0]

 Block29:
	push eax
	mov ecx,esi
	call CLife::MakeNameTag
	mov eax,dword ptr [esi+0x169]
	mov dword ptr [esi+0x2E94],eax
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x1C]
	push eax
	call CItemInfo::GetItemName
	mov eax,dword ptr [esi+0x2E94]
	xor edi,edi
	mov byte ptr [esp+0x38],2
	test eax,eax
	je Block39

 Block30:
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemInfo
	mov byte ptr [esp+0x38],3
	cmp dword ptr [esp+0xC],edi
	je Block37

 Block31:
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x99F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x40],4
	test ecx,ecx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x44],3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],5
	call get_int32
	add esp,8
	cmp word ptr [esp+0x20],8
	mov edi,eax
	mov byte ptr [esp+0x38],3
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x38],2
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov eax,dword ptr [esi+0x19E4]
	push 0
	push 0
	push 0
	push 0
	push edi
	push 0x3EE
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block41:
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block43:
	mov eax,dword ptr [esp+0x38]
	push eax
	mov ecx,esi
	call CLife::MakeNameTag
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],1
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x38],0
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret
}
}
// CUser::ShowRideVehicleEffect
_SUB_EXCEPTION_HANDLER(4ECE00)
__SUB_CLASS_THIS(004ECE00, __thiscall, 16618,  CUser, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4ECE00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebp,dword ptr [esp+0x30]
	mov eax,0x68DB8BAD
	imul ebp
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	xor edi,edi
	cmp eax,0xBE
	jne Block2

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	mov dword ptr [esi+0x2EC8],0xF0
	mov edi,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	call edx
	push eax
	push 0x3EC
	call get_novice_skill_as_race
	add esp,8
	push eax
	mov ecx,edi
	call CSkillInfo::GetSkill
	mov edi,eax
	jmp Block11

 Block2:
	cmp eax,0xC1
	jne Block29

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+8]
	call edx
	mov ecx,eax
	call SecondaryStat::IsEventVehicle
	test eax,eax
	mov eax,dword ptr [esi]
	mov ecx,esi
	je Block7

 Block4:
	mov edx,dword ptr [eax+0x40]
	call edx
	push ebp
	mov ebx,eax
	call is_event_vehicle_type2
	add esp,4
	test eax,eax
	je Block6

 Block5:
	mov edi,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	push ebp
	call get_skill_id_from_vehicle_id
	add esp,4
	push eax
	call get_novice_skill_as_race
	add esp,8
	push eax
	mov ecx,edi
	call CSkillInfo::GetSkill
	mov edi,eax

 Block6:
	mov dword ptr [esi+0x2EC8],0xF0
	jmp Block11

 Block7:
	mov edx,dword ptr [eax+8]
	call edx
	mov ecx,eax
	call SecondaryStat::IsWildhunterJaguarVehicle
	test eax,eax
	jne Block10

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+8]
	mov ecx,esi
	call edx
	mov ecx,eax
	call SecondaryStat::IsMechanicVehicle
	test eax,eax
	jne Block10

 Block9:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x4FAA8E
	call CSkillInfo::GetSkill
	mov edi,eax
	mov dword ptr [esi+0x2EC8],0x21C
	jmp Block11

 Block10:
	mov dword ptr [esi+0x2EC8],1
	xor edi,edi

 Block11:
	cmp dword ptr [esi+0x638],0
	jne Block29

 Block12:
	test edi,edi
	je Block29

 Block13:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	mov ecx,esi
	call edx
	movzx eax,al
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,edi
	call SKILLENTRY::GetEffectUOL
	mov eax,dword ptr [esi+0x1960]
	push 0
	push 0
	push 0
	push 3
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],0
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block15:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x4C],1
	call CUser::GetVecCtrl_0
	mov edi,dword ptr [esp+0x50]
	mov eax,dword ptr [esi+0x640]
	test edi,edi
	je Block17

 Block16:
	mov ecx,dword ptr [edi]
	jmp Block18

 Block17:
	xor ecx,ecx

 Block18:
	not eax
	and eax,1
	push eax
	push ecx
	mov byte ptr [esp+0x50],0
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::Effect_SkillUse
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	mov ecx,esi
	call eax
	mov ecx,eax
	call SecondaryStat::IsRidingSkillVehicle
	test eax,eax
	je Block27

 Block19:
	mov eax,dword ptr [esi+0x1960]
	push 0
	push 0
	push 0
	push 3
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block21:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x4C],2
	call CUser::GetVecCtrl_0
	push offset _S_0
	lea ecx,[esp+0x38]
	push ecx
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x50],3
	call Ztl_bstr_t::op_add_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esi+0x640]
	mov byte ptr [esp+0x48],4
	test eax,eax
	je Block23

 Block22:
	mov eax,dword ptr [eax]
	jmp Block24

 Block23:
	xor eax,eax

 Block24:
	not esi
	and esi,1
	push esi
	mov byte ptr [esp+0x4C],5
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_SkillUse
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],0
	test ecx,ecx
	je Block26

 Block25:
	call _xbstr_t::Data_t::Release

 Block26:
	push 0
	push 0x2A
	push 0x4FAA8E
	call play_skill_sound
	add esp,0xC

 Block27:
	test edi,edi
	je Block29

 Block28:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block29:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// CUser::GetLocalUserLevel
__SUB_CLASS_THIS0(005D3800, __thiscall, 16651,  CUser, long) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	sub esp,8
	push ebx
	lea eax,[esp+4]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block5

 Block1:
	push esi
	push edi
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	pop edi
	mov dword ptr [esp+0xC],0
	pop esi

 Block5:
	mov ecx,dword ptr [ebx+0x35]
	push ecx
	add ebx,0x33
	push ebx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	movzx eax,al
	pop ebx
	add esp,8
	ret
}
}
// CUser::GetTeamNameForPartyRaid
_SUB_EXCEPTION_HANDLER(4E6B40)
__SUB_CLASS_THIS0(004E6B40, __thiscall, 16653,  CUser, ZXString<char>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E6B40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0xC],ebx
	mov esi,dword ptr [esp+0x28]
	mov dword ptr [esi],ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0xC],1
	call CUser::GetTeamForPartyRaid
	sub eax,ebx
	je Block3

 Block1:
	sub eax,1
	jne Block6

 Block2:
	lea eax,[esp+0x10]
	push 0x1570
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push esi
	mov dword ptr [esp+0x28],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x18]
	jmp Block4

 Block3:
	lea ecx,[esp+0x14]
	push 0x156F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push esi
	mov dword ptr [esp+0x28],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]

 Block4:
	add esp,8
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x18
	ret 4
}
}
// CUser::GetBulletDelay
__SUB(004DE2D0, __cdecl, 16722,  long, long, long, long) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xCF
	je Block17

 Block1:
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x139D
	je Block17

 Block2:
	mov eax,dword ptr [esp+8]
	cmp eax,0x3EBA9C
	je Block17

 Block3:
	cmp eax,0x2F785E
	je Block16

 Block4:
	cmp eax,0x30FEFE
	je Block16

 Block5:
	cmp eax,0xC80ED9
	je Block16

 Block6:
	cmp eax,0x1F78E28
	je Block16

 Block7:
	cmp eax,0x1F93BD9
	je Block16

 Block8:
	cmp eax,0x21612AC
	je Block15

 Block9:
	cmp eax,0x2179952
	je Block15

 Block10:
	cmp eax,0x4FAA8F
	je Block17

 Block11:
	cmp eax,0x4C4F2B
	je Block14

 Block12:
	cmp eax,0x4F7F90
	je Block14

 Block13:
	mov eax,dword ptr [esp+0xC]
	ret

 Block14:
	mov eax,0xF0
	ret

 Block15:
	mov eax,0x5A
	ret

 Block16:
	mov eax,0x3C
	ret

 Block17:
	mov eax,0x78
	ret
}
}
// CUser::ShowKeyowrdEffect
__SUB_CLASS_THIS(004DEA90, __thiscall, 16728,  CUser, void, const char*) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	mov edi,ecx
	mov esi,dword ptr [edi+0x1960]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB0]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	mov eax,dword ptr [edi+0x193C]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esp+0x18]
	push eax
	lea ecx,[edi+0x3A18]
	call CKeywordEffectManager::Show
	pop edi
	pop esi
	pop ecx
	ret 4
}
}
// CUser::ShowEffectItem
_SUB_EXCEPTION_HANDLER(4EFB20)
__SUB_CLASS_THIS(004EFB20, __thiscall, 16618,  CUser, void, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4EFB20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp-0x20],esi
	xor edi,edi
	cmp dword ptr [esi+0x638],edi
	jne Block71

 Block1:
	mov eax,dword ptr [esi+0x5D0]
	lea ebx,[esi+0x88]
	cmp eax,edi
	je Block4

 Block2:
	push eax
	call CMorphTemplate::IsSuperMan
	add esp,4
	test eax,eax
	je Block4

 Block3:
	push 3
	mov ecx,esi
	call CUser::RemoveAdditionalLayer
	jmp Block71

 Block4:
	mov dword ptr [ebp-0x18],edi
	mov dword ptr [ebp-4],edi
	mov edi,dword ptr [ebp+8]
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x1AD
	jne Block6

 Block5:
	push edi
	lea ecx,[ebp-0x18]
	push offset _S_ITEMETC0429IMG08
	push ecx
	call ZXString<char>::Format
	add esp,0xC
	jmp Block8

 Block6:
	lea edx,[ebp-0x14]
	push 0xE2D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[ebp-0x18]
	push eax
	mov byte ptr [ebp-4],1
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	xor edi,edi
	push edi
	push offset _S_
	push edi
	push edi
	lea ecx,[ebp-0x1C]
	mov dword ptr [ebp-0x1C],edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[ebp-0x1C]
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esi+0x39C8]
	mov byte ptr [ebp-4],2
	cmp eax,edi
	je Block35

 Block9:
	cmp dword ptr [eax-4],edi
	je Block35

 Block10:
	mov eax,dword ptr [esi+0x39C8]
	test eax,eax
	je Block35

 Block11:
	cmp edi,dword ptr [eax-4]
	jae Block35

 Block12:
	mov eax,dword ptr [ebx+0x5B8]
	push 0
	push eax
	mov ecx,ebx
	call CAvatar::MoveAction2RawAction
	mov ecx,ebx
	mov esi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block14

 Block13:
	mov ecx,ebx
	call CAvatar::GetOneTimeAction
	jmp Block15

 Block14:
	mov eax,esi

 Block15:
	cmp eax,0x21
	je Block24

 Block16:
	cmp eax,0x25
	je Block24

 Block17:
	cmp eax,0x22
	jne Block19

 Block18:
	mov eax,6
	jmp Block25

 Block19:
	cmp eax,0x23
	je Block23

 Block20:
	cmp eax,0x26
	je Block23

 Block21:
	cmp eax,0x27
	jne Block25

 Block22:
	mov eax,0x10
	jmp Block25

 Block23:
	mov eax,7
	jmp Block25

 Block24:
	mov eax,5

 Block25:
	mov ecx,dword ptr [ebp-0x20]
	mov edx,dword ptr [ecx+0x39C8]
	cmp eax,dword ptr [edx+edi*4]
	je Block27

 Block26:
	inc edi
	mov esi,ecx
	jmp Block10

 Block27:
	push eax
	lea eax,[ebp-0x14]
	push eax
	call get_action_name_from_code
	add esp,8
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block29

 Block28:
	mov eax,dword ptr [eax]
	jmp Block30

 Block29:
	xor eax,eax

 Block30:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp-0x1C]
	call ZXString<char>::AssignWideStr
	mov ecx,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],2
	test ecx,ecx
	je Block32

 Block31:
	call _xbstr_t::Data_t::Release

 Block32:
	mov edi,dword ptr [ebp-0x1C]
	test edi,edi
	je Block34

 Block33:
	mov eax,dword ptr [edi-4]
	push eax
	push edi
	lea ecx,[ebp-0x18]
	call ZXString<char>::_Cat
	mov esi,dword ptr [ebp-0x20]
	jmp Block36

 Block34:
	xor eax,eax
	push eax
	push edi
	lea ecx,[ebp-0x18]
	call ZXString<char>::_Cat
	mov esi,dword ptr [ebp-0x20]
	jmp Block36

 Block35:
	mov edi,dword ptr [ebp-0x1C]

 Block36:
	test edi,edi
	je Block38

 Block37:
	cmp byte ptr [edi],0
	jne Block43

 Block38:
	lea ecx,[ebp-0x14]
	push 0x3D4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block40

 Block39:
	mov ecx,dword ptr [eax-4]
	jmp Block41

 Block40:
	xor ecx,ecx

 Block41:
	push ecx
	push eax
	lea ecx,[ebp-0x18]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	push 3
	mov ecx,esi
	call CUser::GetAdditionalLayer
	mov edx,dword ptr [ebp-0x18]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	mov ebx,eax
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,dword ptr [esi+0x1960]
	mov edi,esp
	push 0
	lea eax,[ebx+0xC]
	push eax
	test esi,esi
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[ebp-0x14]
	push edx
	push esi
	mov dword ptr [ebp-0x14],0
	call eax
	test eax,eax
	jge Block47

 Block46:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	mov ecx,dword ptr [ebp-0x14]
	mov edx,dword ptr [ebp-0x18]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [ebp-0x20]
	mov ecx,esi
	call CUser::LoadLayer
	test eax,eax
	je Block66

 Block48:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x40]
	push eax
	call esi
	lea ecx,[ebp-0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	lea edx,[ebp-0x30]
	push edx
	mov byte ptr [ebp-4],5
	call esi
	lea eax,[ebp-0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	mov eax,0x10624DD3
	imul dword ptr [ebp+8]
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov byte ptr [ebp-4],6
	cmp eax,0x1392
	je Block55

 Block53:
	cmp eax,0x10C2
	je Block55

 Block54:
	xor eax,eax
	jmp Block56

 Block55:
	mov eax,0x20

 Block56:
	mov ecx,dword ptr [ebx+0x14]
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[ebp-0x40]
	push edx
	lea edx,[ebp-0x30]
	push edx
	push eax
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x30],si
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[ebp-0x30]
	push ecx
	call edi

 Block62:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x40],si
	jne Block65

 Block63:
	mov eax,dword ptr [ebp-0x38]
	xor edx,edx
	mov word ptr [ebp-0x40],dx
	test eax,eax
	je Block67

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block65:
	lea eax,[ebp-0x40]
	push eax
	call edi
	jmp Block67

 Block66:
	push 3
	mov ecx,esi
	call CUser::RemoveAdditionalLayer

 Block67:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block69:
	mov eax,dword ptr [ebp-0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block71:
	lea esp,[ebp-0x50]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CUser::GetRidingMechanicBulletPos
__SUB_CLASS_THIS(004DEB50, __thiscall, 16734,  CUser, tagPOINT*, tagPOINT*, NakedParam<tagPOINT>, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x10]
	cmp eax,0x217C05C
	jg Block8

 Block1:
	je Block10

 Block2:
	cmp eax,0x21612AC
	je Block4

 Block3:
	cmp eax,0x2179952
	jne Block16

 Block4:
	mov eax,dword ptr [ecx+0x640]
	mov edx,dword ptr [esp+0x14]
	and al,1
	movsx ecx,al
	neg ecx
	sbb ecx,ecx
	and ecx,0x3C
	add ecx,0xFFFFFFE2
	add dword ptr [esp+8],ecx
	and edx,0x80000001
	jns Block6

 Block5:
	dec edx
	or edx,0xFFFFFFFE
	inc edx

 Block6:
	je Block16

 Block7:
	add dword ptr [esp+0xC],5
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ecx
	ret 0x14

 Block8:
	sub eax,0x217E76D
	je Block10

 Block9:
	sub eax,8
	jne Block16

 Block10:
	push esi
	mov esi,dword ptr [esp+0x18]
	mov eax,0x55555556
	imul esi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea eax,[eax+eax*2]
	sub esi,eax
	sub esi,1
	je Block13

 Block11:
	sub esi,1
	jne Block15

 Block12:
	mov ecx,dword ptr [ecx+0x640]
	and cl,1
	movsx edx,cl
	neg edx
	sbb edx,edx
	and edx,0xFFFFFFB0
	add edx,0x28
	add dword ptr [esp+0xC],edx
	jmp Block14

 Block13:
	mov eax,dword ptr [ecx+0x640]
	and al,1
	movsx ecx,al
	neg ecx
	sbb ecx,ecx
	and ecx,0x50
	add ecx,0xFFFFFFD8
	add dword ptr [esp+0xC],ecx

 Block14:
	add dword ptr [esp+0x10],0x19

 Block15:
	pop esi

 Block16:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ecx
	ret 0x14
}
}
// CUser::OnPassiveMove
__SUB_CLASS_THIS(004DEA10, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x2E98],0
	je Block3

 Block1:
	mov eax,dword ptr [ecx+0x19E4]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [esp+4]
	push 1
	push ecx
	lea ecx,[eax+0x238]
	call CMovePath::OnMovePacket

 Block3:
	ret 4
}
}
// CUser::ShowItemReleaseEffect
_SUB_EXCEPTION_HANDLER(4E54D0)
__SUB_CLASS_THIS(004E54D0, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E54D0
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
	mov eax,dword ptr [TSingleton<CUIItem>::ms_pInstance]
	test eax,eax
	je Block15

 Block1:
	add eax,8
	je Block15

 Block2:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block4

 Block3:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov dword ptr [esp+0x24],0
	test esi,esi
	je Block6

 Block5:
	push 0xFFFFFFFF
	push 0
	mov ecx,esi
	call CUIItem::SetTryToReleaseItem

 Block6:
	cmp dword ptr [edi+0x638],0
	jne Block20

 Block7:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xC]
	mov ecx,edi
	call eax
	test eax,eax
	je Block20

 Block8:
	lea ecx,[esp+0xC]
	push 0x16E7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	mov byte ptr [esp+0x24],1
	je Block10

 Block9:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0
	push 0xFFFFFFFF
	mov dword ptr [eax+4],0
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push edx
	call CUIStatusBar::ChatLogAdd

 Block10:
	lea eax,[esp+0x10]
	push 0x505
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov byte ptr [esp+0x2C],2
	call play_game_sound
	mov eax,dword ptr [esp+0x18]
	add esp,8
	mov byte ptr [esp+0x24],1
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	mov ecx,dword ptr [esp+0x2C]
	call CInPacket::Decode2
	cwde
	test eax,eax
	jge Block16

 Block13:
	mov ecx,dword ptr [TSingleton<CUIEquip>::ms_pInstance]
	test ecx,ecx
	je Block18

 Block14:
	neg eax
	push eax
	call CUIEquip::ShowItemReleaseEffect
	jmp Block18

 Block15:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	jmp Block4

 Block16:
	mov ecx,dword ptr [TSingleton<CUIItem>::ms_pInstance]
	test ecx,ecx
	je Block18

 Block17:
	push eax
	call CUIItem::ShowItemReleaseEffect

 Block18:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test esi,esi
	je Block22

 Block21:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CUIItem>::_ReleaseRaw

 Block22:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CUser::OnRandomEmotion
__SUB_CLASS_THIS(004E34B0, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	push esi
	call CInPacket::Decode4
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetAreaBuffItem
	mov esi,eax
	test esi,esi
	je Block19

 Block1:
	push edi
	mov edi,dword ptr [esi+0x1C]
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	test edi,edi
	je Block3

 Block2:
	xor edx,edx
	div edi
	mov eax,edx

 Block3:
	xor edx,edx
	lea ecx,[esi+0x24]
	pop edi
	lea ebx,[ebx]

 Block4:
	cmp dword ptr [ecx-4],eax
	jg Block17

 Block5:
	cmp dword ptr [ecx],eax
	jg Block12

 Block6:
	cmp dword ptr [ecx+4],eax
	jg Block13

 Block7:
	cmp dword ptr [ecx+8],eax
	jg Block14

 Block8:
	cmp dword ptr [ecx+0xC],eax
	jg Block15

 Block9:
	cmp dword ptr [ecx+0x10],eax
	jg Block16

 Block10:
	add edx,6
	add ecx,0x18
	cmp edx,0x18
	jl Block4

 Block11:
	jmp Block17

 Block12:
	inc edx
	jmp Block17

 Block13:
	add edx,2
	jmp Block17

 Block14:
	add edx,3
	jmp Block17

 Block15:
	add edx,4
	jmp Block17

 Block16:
	add edx,5

 Block17:
	lea eax,[edx-1]
	cmp eax,0x16
	ja Block19

 Block18:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	push 0
	push edx
	call CWvsContext::SendEmotionChange

 Block19:
	pop esi
	ret 4
}
}
// CUser::OnHitByUser
__SUB_CLASS_THIS(004E11B0, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [esp+0xC]
	call CInPacket::Decode4
	mov esi,eax
	test esi,esi
	jle Block2

 Block1:
	push 0x5DC
	push 1
	lea ecx,[edi+0x88]
	call CAvatar::SetEmotion
	mov dword ptr [edi+0x63C],0x1388

 Block2:
	push 0
	neg esi
	push esi
	mov ecx,edi
	call CUser::MakeIncDecHPEffect
	pop edi
	pop esi
	ret 4
}
}
// CUser::GetFoothold
__SUB_CLASS_THIS0(0053A280, __thiscall, 16590,  CUser, CStaticFoothold*) {
__asm {

 Block0:
	push ecx
	lea eax,[esp]
	push eax
	call CUser::GetVecCtrl_1
	mov eax,dword ptr [eax]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	push esi
	mov esi,dword ptr [eax+0x1A0]
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	mov eax,esi
	pop esi
	pop ecx
	ret
}
}
// CUser::ShowEffectFlameThrowerEnd
__SUB_CLASS_THIS(004E0680, __thiscall, 16712,  CUser, void, const SKILLENTRY*, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push edi
	mov edi,ecx
	test ebx,ebx
	je Block4

 Block1:
	push esi
	lea esi,[edi+0x88]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	or ecx,0xFFFFFFFF
	cmp eax,ecx
	jle Block3

 Block2:
	mov dword ptr [esi+0x5BC],ecx
	mov dword ptr [esi+0x5A8],ecx
	push 1
	mov ecx,esi
	call CAvatar::ClearActionLayer

 Block3:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [esi]
	sub eax,0x21612A9
	neg eax
	sbb eax,eax
	and eax,3
	push 0
	add eax,0xEB
	push 0x64
	mov dword ptr [edi+0x644],eax
	mov eax,dword ptr [edx+0x14]
	push 6
	mov ecx,esi
	call eax
	pop esi

 Block4:
	pop edi
	pop ebx
	ret 8
}
}
// CUser::IsDarkSight
__SUB_CLASS_THIS0(000FFFB0, __thiscall, 16581,  CUser, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+8]
	call edx
	mov ecx,dword ptr [eax+0x224]
	push ecx
	add eax,0x21C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	ret
}
}
// CUser::OnSummonedSkill
_SUB_EXCEPTION_HANDLER(4E3980)
__SUB_CLASS_THIS(004E3980, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E3980
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x24]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x10],0
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esi+0x2E4C]
	mov dword ptr [esp+0x24],0
	call ZMap<unsigned long, ZRef<CSummoned>, unsigned long>::GetAt
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block2

 Block1:
	push edi
	call CSummoned::OnSkill
	push 0
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CSummoned>::_ReleaseRaw

 Block2:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CGrenade::SetDragValue
__SUB_CLASS_THIS(00168DE0, __thiscall, 81209,  CGrenade, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x14]
	mov ecx,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [eax+0x2F4],ecx
	mov dword ptr [eax+0x2F8],edx
	ret 8

 Block2:
	xor eax,eax
	mov dword ptr [eax+0x300],ecx
	mov dword ptr [eax+0x304],edx
	ret 8
}
}
// CUser::ShowUpgradeTombEffect
_SUB_EXCEPTION_HANDLER(4E5DC0)
__SUB_CLASS_THIS(004E5DC0, __thiscall, 16621,  CUser, void, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E5DC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0xC],0
	lea eax,[esp+0x10]
	push 0x3D2
	push eax
	mov dword ptr [esp+0x48],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x10]
	push ecx
	push eax
	mov byte ptr [esp+0x4C],1
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x44],2
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov byte ptr [esp+0x40],3
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x54]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esp+0x54]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x40],2
	cmp word ptr [esp+0x18],si
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x18]
	push ecx
	call edi

 Block12:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x28],si
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x28]
	push eax
	call edi

 Block16:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0x1960]
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x54],4
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block20:
	lea ecx,[esp+0x64]
	push 0xFF0
	push ecx
	mov byte ptr [esp+0x5C],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x54],6
	push 0
	mov byte ptr [esp+0x58],7
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block24:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x38
	ret 0xC
}
}
// CUser::ADDITIONALLAYER::~ADDITIONALLAYER
__SUB_CLASS_THIS0(004DF510, __thiscall, 24405,  CUser::ADDITIONALLAYER, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x20]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov esi,dword ptr [esi+0x14]
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block4:
	pop esi
	ret
}
}
// CUser::ADDITIONALLAYER::Reset
__SUB_CLASS_THIS0(004DF3C0, __thiscall, 24405,  CUser::ADDITIONALLAYER, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov dword ptr [esi+8],0xFFFFFFFF
	mov dword ptr [esi+0xC],1
	mov eax,dword ptr [esi+0x14]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [esi+0x14],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov dword ptr [esi],0xFFFFFFFF
	mov dword ptr [esi+0x18],1
	mov eax,dword ptr [esi+0x20]
	test eax,eax
	je Block4

 Block3:
	mov dword ptr [esi+0x20],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	pop esi
	ret
}
}
// CUser::LoadDojangBerserkEffect
_SUB_EXCEPTION_HANDLER(4F6170)
__SUB_CLASS_THIS0(004F6170, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F6170
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x3A4C],0
	sete al
	test al,al
	je Block10

 Block1:
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call edx
	push eax
	push 0x3F3
	call get_novice_skill_as_race
	add esp,8
	push eax
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call CUser::LoadSkillRepeatEffect
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x3A4C]
	cmp edi,eax
	je Block8

 Block4:
	mov dword ptr [esi+0x3A4C],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	test edi,edi
	je Block8

 Block7:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block8:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CGrenade::SendTimeBombInfo
_SUB_EXCEPTION_HANDLER(168F20)
__SUB_CLASS_THIS(00168F20, __thiscall, 81206,  CGrenade, int32_t, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_168F20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [esi+0x20B8],0
	jne Block3

 Block1:
	mov eax,dword ptr [esi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block3

 Block2:
	call get_update_time
	sub eax,dword ptr [esi+0x20BC]
	cmp eax,0xC8
	jge Block4

 Block3:
	xor eax,eax
	jmp Block15

 Block4:
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	test ecx,ecx
	je Block8

 Block5:
	mov edx,dword ptr [esp+0x40]
	push edx
	call CMobPool::GetMob
	test eax,eax
	je Block3

 Block6:
	cmp dword ptr [eax+0x364],0
	jne Block14

 Block7:
	mov ecx,dword ptr [ebx+0x44]
	push ecx
	mov ecx,eax
	call CMob::SetTimeBombTime

 Block8:
	lea edx,[esp+0x18]
	push edx
	mov ecx,esi
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block13

 Block9:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block12

 Block11:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block12:
	mov ebx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x1C],0

 Block13:
	mov eax,dword ptr [ebx+0x44]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push eax
	push ebp
	call CSkillInfo::GetSkillLevel_0
	push 0x67
	lea ecx,[esp+0x24]
	mov edi,eax
	call COutPacket::_ctor_1
	mov dword ptr [esp+0x38],0
	call get_update_time
	push eax
	lea ecx,[esp+0x24]
	call COutPacket::Encode4
	mov ecx,dword ptr [ebx+0x44]
	push ecx
	lea ecx,[esp+0x24]
	call COutPacket::Encode4
	push edi
	lea ecx,[esp+0x24]
	call COutPacket::Encode1
	push 1
	lea ecx,[esp+0x24]
	call COutPacket::Encode1
	mov edx,dword ptr [esp+0x40]
	push edx
	lea ecx,[esp+0x24]
	call COutPacket::Encode4
	push 0
	lea ecx,[esp+0x24]
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x20]
	push eax
	call CClientSocket::SendPacket
	mov dword ptr [esi+0x20B8],1
	call get_update_time
	lea ecx,[esp+0x24]
	mov dword ptr [esi+0x20BC],eax
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block14:
	mov eax,1

 Block15:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4
}
}
// CUser::SetCoupleChairEffect
_SUB_EXCEPTION_HANDLER(4F1FE0)
__SUB_CLASS_THIS(004F1FE0, __thiscall, 16640,  CUser, int32_t, long, CUser*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F1FE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x70]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor ebx,ebx
	cmp dword ptr [ebp+0x638],ebx
	je Block2

 Block1:
	xor eax,eax
	jmp Block85

 Block2:
	push 0x12
	call CUser::RemoveAdditionalLayer
	test byte ptr [esp+0x80],2
	mov dword ptr [esp+0x20],eax
	lea edi,[eax+0x14]
	je Block52

 Block3:
	mov esi,dword ptr [esp+0x84]
	cmp esi,ebx
	je Block52

 Block4:
	cmp dword ptr [edi],ebx
	sete al
	test al,al
	je Block42

 Block5:
	mov eax,dword ptr [ebp+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[ebp+4]
	lea edx,[esp+0x40]
	push edx
	call eax
	mov dword ptr [esp+0x14],ebx
	lea ecx,[esp+0x24]
	push 0x3D2
	push ecx
	mov dword ptr [esp+0x80],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea edx,[esp+0x18]
	push edx
	push eax
	mov byte ptr [esp+0x84],1
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x78],0
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	mov dword ptr [esp+0x1C],ebx
	lea eax,[esp+0x24]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x80],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x20]
	push ecx
	push eax
	mov byte ptr [esp+0x84],3
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x78],2
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	lea edx,[esp+0x24]
	push edx
	mov ecx,ebp
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x78],4
	mov word ptr [esp+0x50],cx
	mov dword ptr [esp+0x58],eax
	cmp eax,ebx
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block11:
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x78],5
	cmp ecx,ebx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[esp+0x50]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x78],2
	cmp eax,ebx
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x24]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x80],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov byte ptr [esp+0x84],7
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x78],6
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	lea edx,[esp+0x24]
	push edx
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x78],8
	mov word ptr [esp+0x50],cx
	mov dword ptr [esp+0x58],eax
	cmp eax,ebx
	je Block19

 Block18:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block19:
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x78],9
	cmp ecx,ebx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea edx,[esp+0x50]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x78],6
	cmp eax,ebx
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	mov eax,dword ptr [esi+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[esi+4]
	lea edx,[esp+0x30]
	push edx
	call eax
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x44]
	add eax,edx
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x30]
	sar eax,1
	sub eax,0x14
	push eax
	mov eax,dword ptr [esp+0x44]
	add eax,edx
	cdq
	sub eax,edx
	sar eax,1
	push eax
	call IWzShape2D::Move
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov edx,dword ptr [esp+0x1C]
	push 1
	push 1
	push 2
	push 2
	push edx
	call IWzVector2D::Ratio
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov eax,dword ptr [esp+0x18]
	push 1
	push 1
	push 2
	push 2
	push eax
	call IWzVector2D::Ratio
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x28]
	push 0x9AA
	mov bl,0xA
	push ecx
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esp+0x88]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x84],0xB
	call ZXString16::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x78],bl
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block31:
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov dword ptr [esp+0x38],esp
	mov eax,esp
	push 0
	push 0
	push ecx
	lea edx,[esp+0x30]
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push edx
	mov dword ptr [eax],0
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov esi,dword ptr [esp+0x40]
	push 0
	lea eax,[esp+0x48]
	push esi
	push eax
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	push offset _D_VTMISSING
	lea ecx,[esp+0x64]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x7C],0xC
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x60]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	push 0x20
	mov ecx,edi
	mov byte ptr [esp+0x84],0xD
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x60]
	call Ztl_variant_t::~Ztl_variant_t
	mov byte ptr [esp+0x78],6
	test esi,esi
	je Block35

 Block34:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x78],2
	test eax,eax
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block37:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x78],0
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	xor ebx,ebx

 Block42:
	mov esi,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x80]
	add esi,0x24
	mov dword ptr [esp+0x20],esi
	add esi,0x14
	and eax,1
	mov dword ptr [esp+0x24],eax
	je Block78

 Block43:
	cmp dword ptr [esi],ebx
	sete al
	test al,al
	je Block69

 Block44:
	mov dword ptr [esp+0x80],ebx
	lea eax,[esp+0x28]
	push 0x9A9
	push eax
	mov dword ptr [esp+0x80],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x88]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x88]
	push edx
	mov byte ptr [esp+0x84],0xF
	call ZXString16::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x78],0xE
	cmp eax,ebx
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block46:
	mov eax,dword ptr [ebp+0x1960]
	push ebx
	push 0xFF
	push 3
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block48:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x98],0x10
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [ebp+0x640]
	mov ebp,dword ptr [esp+0x9C]
	not eax
	and eax,1
	push eax
	lea ecx,[esp+0x48]
	push ebp
	push ecx
	mov byte ptr [esp+0xA0],0xE
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block50

 Block49:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block50:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push ecx
	call edi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block54

 Block51:
	push eax
	call _com_issue_error

 Block52:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block42

 Block53:
	mov dword ptr [edi],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block42

 Block54:
	lea eax,[esp+0x40]
	mov bl,0x11
	push eax
	mov byte ptr [esp+0x7C],bl
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x78],0x12
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x78],bl
	cmp word ptr [esp+0x40],si
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[esp+0x40]
	push edx
	call edi

 Block62:
	mov byte ptr [esp+0x78],0xE
	cmp word ptr [esp+0x30],si
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block66:
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [edx+0xC],0
	mov dword ptr [esp+0x78],0xFFFFFFFF
	test ebp,ebp
	je Block68

 Block67:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block68:
	xor ebx,ebx

 Block69:
	mov ecx,dword ptr [esp+0x84]
	cmp ecx,ebx
	je Block84

 Block70:
	push 0x12
	call CUser::GetAdditionalLayer
	mov ebp,eax
	lea esi,[ebp+0x14]
	cmp dword ptr [esp+0x24],ebx
	je Block82

 Block71:
	cmp dword ptr [esi],ebx
	sete al
	test al,al
	je Block84

 Block72:
	mov dword ptr [esp+0x80],ebx
	lea eax,[esp+0x28]
	push 0x9A9
	mov ebx,0x13
	push eax
	mov dword ptr [esp+0x80],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x88]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x88]
	push edx
	mov byte ptr [esp+0x84],0x14
	call ZXString16::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x78],bl
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block74:
	mov edi,dword ptr [esp+0x84]
	push 0
	push 0xFF
	push 3
	push ecx
	lea eax,[edi+0x1960]
	mov ecx,esp
	mov dword ptr [esp+0x94],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x98],0x15
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [edi+0x640]
	mov edi,dword ptr [esp+0x9C]
	not eax
	and eax,1
	push eax
	lea edx,[esp+0xA8]
	push edi
	push edx
	mov byte ptr [esp+0xA0],bl
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block76:
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x7C],0x16
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x78],0x17
	test ecx,ecx
	jne Block80

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block69

 Block79:
	mov dword ptr [esi],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block69

 Block80:
	lea eax,[esp+0x50]
	push eax
	lea edx,[esp+0x64]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x60]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [ebp+0xC],0
	mov dword ptr [esp+0x78],0xFFFFFFFF
	test edi,edi
	je Block84

 Block81:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4
	jmp Block84

 Block82:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block84

 Block83:
	mov dword ptr [esi],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block84:
	mov eax,1

 Block85:
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x68
	ret 0xC
}
}
// CUser::ShowSkillAffected
_SUB_EXCEPTION_HANDLER(4EC8E0)
__SUB_CLASS_THIS(004EC8E0, __thiscall, 16703,  CUser, void, const SKILLENTRY*, long, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4EC8E0
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
	mov edi,ecx
	xor ebx,ebx
	cmp dword ptr [edi+0x638],ebx
	jne Block29

 Block1:
	mov dword ptr [esp+0x10],ebx
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],ebx
	cmp dword ptr [esp+0x2C],ebx
	je Block3

 Block2:
	lea eax,[esp+0x24]
	push eax
	call SKILLENTRY::GetSpecialAffectedUOL
	mov esi,eax
	lea ecx,[esp+0x10]
	cmp ecx,esi
	jmp Block4

 Block3:
	lea edx,[esp+0x24]
	push edx
	call SKILLENTRY::GetAffectedUOL
	mov esi,eax
	lea eax,[esp+0x10]
	cmp eax,esi

 Block4:
	je Block9

 Block5:
	mov ecx,dword ptr [esp+0x10]
	cmp ecx,ebx
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x10],ebx

 Block7:
	mov eax,dword ptr [esi]
	mov dword ptr [esp+0x10],eax
	cmp eax,ebx
	je Block10

 Block8:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esp+0x10]

 Block10:
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,ebx
	je Block12

 Block11:
	call _xbstr_t::Data_t::Release
	mov eax,dword ptr [esp+0x10]

 Block12:
	cmp eax,ebx
	je Block29

 Block13:
	cmp dword ptr [eax],ebx
	je Block27

 Block14:
	mov ecx,dword ptr [eax]
	cmp ecx,ebx
	je Block27

 Block15:
	mov ecx,dword ptr [ecx-4]
	shr ecx,1
	cmp ecx,ebx
	je Block27

 Block16:
	mov eax,dword ptr [esp+0x30]
	cmp eax,0xFFFFFFFF
	je Block19

 Block17:
	mov dword ptr [esp+0x24],ebx
	push eax
	lea ecx,[esp+0x28]
	push offset _S_D__3
	push ecx
	mov byte ptr [esp+0x28],1
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	push eax
	lea ecx,[esp+0x14]
	call Ztl_bstr_t::op_add_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [edi+0x1960]
	push ebx
	push ebx
	push ebx
	push 3
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	mov eax,dword ptr [edi+0x1944]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block23:
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [edi+0x640]
	cmp ecx,ebx
	je Block25

 Block24:
	mov ecx,dword ptr [ecx]
	jmp Block26

 Block25:
	xor ecx,ecx

 Block26:
	not eax
	and eax,1
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::Effect_SkillUse
	mov eax,dword ptr [esp+0x10]

 Block27:
	cmp eax,ebx
	je Block29

 Block28:
	mov ecx,eax
	call _xbstr_t::Data_t::Release

 Block29:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0x10
}
}
// CUser::RemoveBlessingArmor
__SUB_CLASS_THIS0(004E1300, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3A5C]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+0x3A5C],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CUser::ShowEffectSiegeStart
__SUB_CLASS_THIS(004E0580, __thiscall, 16714,  CUser, void, const SKILLENTRY*, long, int32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push edi
	mov edi,ecx
	test ebx,ebx
	je Block7

 Block1:
	push esi
	lea esi,[edi+0x88]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	or ecx,0xFFFFFFFF
	cmp eax,ecx
	jle Block3

 Block2:
	mov dword ptr [esi+0x5BC],ecx
	mov dword ptr [esi+0x5A8],ecx
	push 1
	mov ecx,esi
	call CAvatar::ClearActionLayer

 Block3:
	cmp dword ptr [esp+0x18],1
	jne Block5

 Block4:
	mov eax,0xE1
	jmp Block6

 Block5:
	xor eax,eax
	cmp dword ptr [ebx],0x217C05C
	setne al
	lea eax,[eax*4+0xD7]

 Block6:
	push 0
	mov dword ptr [edi+0x644],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push 0x64
	push 6
	mov ecx,esi
	call edx
	pop esi

 Block7:
	pop edi
	pop ebx
	ret 0xC
}
}
// CUser::IsDoingHashing
__SUB_CLASS_THIS0(004DF340, __thiscall, 16584,  CUser, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x5D0]
	push esi
	lea esi,[ecx+0x88]
	test eax,eax
	je Block5

 Block1:
	push eax
	call CMorphTemplate::IsSuperMan
	add esp,4
	test eax,eax
	je Block5

 Block2:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block5

 Block3:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	cmp eax,0x2D
	jne Block5

 Block4:
	mov eax,1
	pop esi
	ret

 Block5:
	xor eax,eax
	pop esi
	ret
}
}
// CUser::IsWindWalk
__SUB_CLASS_THIS0(000FFFE0, __thiscall, 16581,  CUser, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+8]
	call edx
	mov ecx,dword ptr [eax+0xBC4]
	push ecx
	add eax,0xBBC
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	ret
}
}
// CUser::OnChat
_SUB_EXCEPTION_HANDLER(4E86C0)
__SUB_CLASS_THIS(004E86C0, __thiscall, 16623,  CUser, void, CInPacket&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E86C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x38],ebp
	xor edi,edi
	mov dword ptr [esp+0x24],edi
	mov esi,dword ptr [esp+0x50]
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x34],eax
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x48],edi
	call CInPacket::Decode1
	movzx edx,al
	mov dword ptr [esp+0x2C],edx
	mov dword ptr [esp+0x18],edi
	mov byte ptr [esp+0x48],1
	cmp dword ptr [esp+0x54],edi
	je Block9

 Block1:
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x4C],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x48],1
	cmp eax,edi
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov eax,dword ptr [ebp+0x19EC]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::Compare
	test eax,eax
	je Block5

 Block4:
	push 1
	push edi
	push 1
	push 0x400
	lea ecx,[esp+0x60]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x54]
	call ZXString<char>::ReleaseBuffer

 Block5:
	push 1
	push 0x400
	lea ecx,[esp+0x58]
	call ZXString<char>::GetBuffer
	mov esi,eax
	cmp byte ptr [esi],0
	je Block17

 Block6:
	mov edi,dword ptr [ZImports::_IsDBCSLeadByte]
	mov bl,0x20

 Block7:
	movzx ecx,byte ptr [esi]
	push ecx
	call edi
	test eax,eax
	je Block11

 Block8:
	mov byte ptr [esi+1],bl
	mov byte ptr [esi],bl
	add esi,2
	jmp Block15

 Block9:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0xC]
	mov ecx,ebp
	call eax
	test eax,eax
	je Block4

 Block10:
	jmp Block5

 Block11:
	mov al,byte ptr [esi]
	cmp al,bl
	jl Block13

 Block12:
	cmp al,0x7E
	jle Block14

 Block13:
	mov byte ptr [esi],bl

 Block14:
	inc esi

 Block15:
	cmp byte ptr [esi],0
	jne Block7

 Block16:
	xor edi,edi

 Block17:
	push 0xFFFFFFFF
	lea ecx,[esp+0x54]
	call ZXString<char>::ReleaseBuffer
	push edi
	push edi
	lea ecx,[esp+0x58]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0xC]
	mov ecx,ebp
	call eax
	test eax,eax
	jne Block34

 Block18:
	mov eax,dword ptr [_D_G_PSTAGE+4]
	cmp eax,edi
	je Block34

 Block19:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block34

 Block20:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	cmp esi,edi
	je Block23

 Block21:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block23

 Block22:
	mov ecx,esi
	jmp Block24

 Block23:
	xor ecx,ecx

 Block24:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x1C]
	call eax
	cmp eax,0x13
	jne Block34

 Block25:
	mov eax,dword ptr [ebp+0x3A80]
	cmp eax,2
	jne Block27

 Block26:
	xor eax,eax

 Block27:
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov ecx,dword ptr [ecx+8]
	mov ecx,dword ptr [ecx+0x3A80]
	cmp ecx,2
	jne Block29

 Block28:
	xor ecx,ecx

 Block29:
	cmp eax,0xFFFFFFFF
	je Block34

 Block30:
	cmp ecx,0xFFFFFFFF
	je Block34

 Block31:
	cmp eax,ecx
	je Block34

 Block32:
	push eax
	lea edx,[esp+0x24]
	push edx
	call get_field
	mov ecx,eax
	call CField_Battlefield::GetTeamMessageText
	push eax
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x4C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x48],1
	cmp eax,edi
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov dword ptr [esp+0x14],edi
	mov byte ptr [esp+0x48],4
	mov bl,5
	cmp dword ptr [esp+0x54],edi
	je Block36

 Block35:
	mov esi,dword ptr [esp+0x18]
	mov edi,dword ptr [esp+0x20]
	jmp Block42

 Block36:
	mov ecx,dword ptr [ebp+0x19EC]
	xor edi,edi
	mov dword ptr [esp+0x20],edi
	test ecx,ecx
	je Block41

 Block37:
	mov eax,ecx
	lea esi,[eax+1]
	jmp Block39

 Block39:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block39

 Block40:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push 0
	push esi
	lea ecx,[esp+0x30]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [esp+0x20]

 Block41:
	mov byte ptr [esp+0x48],bl
	mov dword ptr [esp+0x24],1
	mov esi,edi

 Block42:
	lea eax,[esp+0x28]
	push 0x72D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x50]
	mov eax,dword ptr [eax]
	push ecx
	push esi
	push eax
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x58],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0x10
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	xor ebx,ebx
	test byte ptr [esp+0x24],1
	mov dword ptr [esp+0x48],4
	je Block47

 Block45:
	cmp edi,ebx
	je Block47

 Block46:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block47:
	push ebx
	push ebx
	lea ecx,[esp+0x1C]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov dword ptr [esp+0x1C],ebx
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x400
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],7
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::GetSwindleWarning
	add esp,8
	or edi,0xFFFFFFFF
	push edi
	lea ecx,[esp+0x54]
	mov esi,eax
	call ZXString<char>::ReleaseBuffer
	cmp dword ptr [esp+0x2C],ebx
	jne Block50

 Block48:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block50

 Block49:
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ebx
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x34],esp
	neg eax
	push ebx
	sbb eax,eax
	push edi
	and eax,0xB
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::ChatLogAdd

 Block50:
	cmp esi,ebx
	je Block53

 Block51:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block53

 Block52:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push ebx
	push edi
	mov dword ptr [eax+4],ebx
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 8
	push edx
	call CUIStatusBar::ChatLogAdd

 Block53:
	cmp dword ptr [ebp+0x638],ebx
	je Block62

 Block54:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x48],4
	cmp eax,ebx
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x48],1
	cmp eax,ebx
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],0
	cmp eax,ebx
	je Block61

 Block59:
	add eax,0xFFFFFFF4
	push eax

 Block60:
	call ZXString<char>::_Release
	add esp,4

 Block61:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],edi
	cmp eax,ebx
	jmp Block94

 Block62:
	cmp dword ptr [esp+0x54],ebx
	je Block70

 Block63:
	mov esi,dword ptr [esp+0x18]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push esi
	call CUserPool::FindRemoteUserByName
	test eax,eax
	jne Block70

 Block64:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x48],4
	cmp eax,ebx
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x48],1
	cmp eax,ebx
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	mov byte ptr [esp+0x48],0
	cmp esi,ebx
	je Block61

 Block69:
	add esi,0xFFFFFFF4
	push esi
	jmp Block60

 Block70:
	mov eax,dword ptr [esp+0x14]
	push eax
	lea ecx,[esp+0x58]
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x640]
	mov edx,dword ptr [ebp+0x2E34]
	and eax,0xFFFFFFFE
	xor ecx,ecx
	cmp eax,0x12
	sete cl
	push ebx
	push ebx
	lea eax,[ebp+0x2E2C]
	mov byte ptr [esp+0x50],8
	push ecx
	push edx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov eax,dword ptr [ebp+0x1944]
	push 0x3E8
	push 0x1388
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block72:
	mov eax,dword ptr [ebp+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x50],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block74:
	mov ebp,dword ptr [esp+0x74]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [eax],ebp
	test ebp,ebp
	je Block76

 Block75:
	lea eax,[ebp+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block76:
	mov ebx,dword ptr [esp+0x5C]
	lea ecx,[ebx+0x14]
	call CChatBalloon::MakeBalloon
	xor esi,esi
	mov dword ptr [esp+0x34],esi
	mov eax,dword ptr [TSingleton<CNpcPool>::ms_pInstance]
	mov byte ptr [esp+0x48],9
	test eax,eax
	je Block83

 Block77:
	mov edx,dword ptr [ebx+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[ebx+4]
	mov esi,eax
	push 0xC8
	lea eax,[esp+0x3C]
	push eax
	call edx
	push eax
	mov ecx,esi
	call CNpcPool::FindNpc_1
	push eax
	lea ecx,[esp+0x34]
	call ZRef<CNpc>::op_assign_ptr
	mov esi,dword ptr [esp+0x34]
	test esi,esi
	je Block83

 Block78:
	mov eax,dword ptr [esi+0xA8]
	cmp dword ptr [eax],0x895455
	jne Block83

 Block79:
	lea ecx,[esp+0x2C]
	push 0x703
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x54]
	call ZXString<char>::op_eq_0
	mov edi,eax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block81:
	test edi,edi
	je Block83

 Block82:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0xFFFFFFFF
	push offset _S_ACT2
	call ZXString<char>::CreateFromCharStr
	mov ecx,esi
	call CNpc::RequestSpecialAction

 Block83:
	mov edx,dword ptr [esp+0x50]
	push edx
	mov ecx,ebx
	call CUser::ShowKeyowrdEffect
	mov byte ptr [esp+0x48],8
	test esi,esi
	je Block85

 Block84:
	push 0
	lea ecx,[esp+0x34]
	call ZRef<CNpc>::_ReleaseRaw

 Block85:
	test ebp,ebp
	je Block87

 Block86:
	mov ecx,ebp
	call _xbstr_t::Data_t::Release

 Block87:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x48],4
	test eax,eax
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block89:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x48],1
	test eax,eax
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax

 Block94:
	je Block96

 Block95:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block96:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 8
}
}
// CUser::ShowItemUnreleaseEffect
_SUB_EXCEPTION_HANDLER(4E5670)
__SUB_CLASS_THIS(004E5670, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E5670
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x638],0
	jne Block13

 Block1:
	mov ecx,dword ptr [esp+0x28]
	call CInPacket::Decode1
	movzx edi,al
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC]
	mov ecx,esi
	call edx
	test eax,eax
	je Block13

 Block2:
	test edi,edi
	jne Block4

 Block3:
	lea eax,[esp+0x28]
	push 0x16C3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	lea ecx,[esp+0x28]
	push 0xC
	push ecx
	mov dword ptr [esp+0x28],edi
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x30]
	add esp,8
	jmp Block11

 Block4:
	lea edx,[esp+0xC]
	push 0x16C4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	lea eax,[esp+0xC]
	push 0xC
	push eax
	mov dword ptr [esp+0x28],1
	call CHATLOG_ADD
	add esp,8
	lea ecx,[esp+0x10]
	push 0x507
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov byte ptr [esp+0x28],2
	call play_game_sound
	mov eax,dword ptr [esp+0x18]
	add esp,8
	mov byte ptr [esp+0x20],1
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x2C],3
	call CUser::GetVecCtrl_0
	mov ecx,dword ptr [esi+0x1960]
	mov byte ptr [esp+0x28],4
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov esi,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call IWzGr2DLayer::Getflip
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C],1
	call CAnimationDisplayer::Effect_ItemUnrelease
	mov eax,dword ptr [esp+0xC]

 Block11:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret 4
}
}
// CUser::IsTamingMobTired
__SUB_CLASS_THIS0(004DE210, __thiscall, 16584,  CUser, int32_t) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0x3A04]
	mov eax,0x55555556
	imul edx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea eax,[eax+eax*4]
	lea edx,[eax+eax+0x5F]
	xor eax,eax
	cmp edx,dword ptr [ecx+0x3A0C]
	setle al
	ret
}
}
// CUser::SetFriendShipItemEffect
_SUB_EXCEPTION_HANDLER(4F0D10)
__SUB_CLASS_THIS(004F0D10, __thiscall, 16640,  CUser, int32_t, long, CUser*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F0D10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ebx,ebx
	cmp dword ptr [edi+0x638],ebx
	je Block2

 Block1:
	xor eax,eax
	jmp Block64

 Block2:
	mov esi,dword ptr [esp+0x74]
	mov eax,dword ptr [esi+0x2E18]
	cmp eax,dword ptr [edi+0x2E18]
	jne Block1

 Block3:
	call CUser::IsSamePhaseWithLocalUser
	test eax,eax
	je Block1

 Block4:
	push 0xC
	mov ecx,edi
	call CUser::RemoveAdditionalLayer
	test byte ptr [esp+0x70],2
	mov dword ptr [esp+0x20],eax
	lea ebp,[eax+0x14]
	jne Block7

 Block5:
	mov eax,dword ptr [ebp]
	cmp eax,ebx
	je Block44

 Block6:
	mov dword ptr [ebp],ebx
	jmp Block43

 Block7:
	cmp dword ptr [ebp],ebx
	sete al
	cmp al,bl
	je Block44

 Block8:
	mov eax,dword ptr [edi+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[edi+4]
	lea edx,[esp+0x38]
	push edx
	call eax
	mov dword ptr [esp+0x14],ebx
	lea ecx,[esp+0x24]
	push 0x3D2
	push ecx
	mov dword ptr [esp+0x70],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea edx,[esp+0x18]
	push edx
	push eax
	mov byte ptr [esp+0x74],1
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x68],bl
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov dword ptr [esp+0x1C],ebx
	lea eax,[esp+0x24]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x70],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x20]
	push ecx
	push eax
	mov byte ptr [esp+0x74],3
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x68],2
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	lea edx,[esp+0x24]
	push edx
	mov ecx,edi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x68],4
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],eax
	cmp eax,ebx
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block14:
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],5
	cmp ecx,ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x40]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],2
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x24]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x70],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov byte ptr [esp+0x74],7
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x68],6
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block20:
	lea edx,[esp+0x24]
	push edx
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x68],8
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],eax
	cmp eax,ebx
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block22:
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x68],9
	cmp ecx,ebx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x40]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],6
	cmp eax,ebx
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov eax,dword ptr [esi+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[esi+4]
	lea edx,[esp+0x30]
	push edx
	call eax
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x3C]
	add eax,edx
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x30]
	sar eax,1
	sub eax,0x14
	push eax
	mov eax,dword ptr [esp+0x3C]
	add eax,edx
	cdq
	sub eax,edx
	sar eax,1
	push eax
	call IWzShape2D::Move
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov edx,dword ptr [esp+0x1C]
	push 1
	push 1
	push 2
	push 2
	push edx
	call IWzVector2D::Ratio
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov eax,dword ptr [esp+0x18]
	push 1
	push 1
	push 2
	push 2
	push eax
	call IWzVector2D::Ratio
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x28]
	push 0x9AA
	push ecx
	mov byte ptr [esp+0x70],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esp+0x78]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x74],0xB
	call ZXString16::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x68],0xA
	cmp eax,ebx
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov dword ptr [esp+0x38],esp
	mov eax,esp
	push ebx
	push ebx
	push ecx
	lea edx,[esp+0x30]
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push edx
	mov dword ptr [eax],ebx
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov esi,dword ptr [esp+0x40]
	push ebx
	lea eax,[esp+0x48]
	push esi
	push eax
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x6C],0xC
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	push 0x20
	mov ecx,ebp
	mov byte ptr [esp+0x74],0xD
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	mov byte ptr [esp+0x68],6
	cmp esi,ebx
	je Block38

 Block37:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block38:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x68],2
	cmp eax,ebx
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block40:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],bl
	cmp eax,ebx
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp eax,ebx
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov esi,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x74]
	add esi,0x24
	mov dword ptr [esp+0x20],esi
	push 0xC
	add esi,0x14
	call CUser::GetAdditionalLayer
	test byte ptr [esp+0x70],1
	mov dword ptr [esp+0x24],eax
	lea ebp,[eax+0x14]
	je Block59

 Block45:
	cmp dword ptr [esi],ebx
	sete al
	cmp al,bl
	je Block52

 Block46:
	mov dword ptr [esp+0x70],ebx
	lea eax,[esp+0x28]
	push 0x9A9
	push eax
	mov dword ptr [esp+0x70],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x78]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x78]
	push edx
	mov byte ptr [esp+0x74],0xF
	call ZXString16::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x68],0xE
	cmp eax,ebx
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block48:
	push ebx
	push 0xFF
	push 3
	push ecx
	lea eax,[edi+0x1960]
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x88],0x10
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [edi+0x640]
	mov edi,dword ptr [esp+0x8C]
	not eax
	and eax,1
	push eax
	lea edx,[esp+0x48]
	push edi
	push edx
	mov byte ptr [esp+0x90],0xE
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x6C],0x11
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	push 0x20
	mov ecx,esi
	mov byte ptr [esp+0x74],0x12
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [edx+0xC],ebx
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp edi,ebx
	je Block52

 Block51:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block52:
	cmp dword ptr [ebp],ebx
	sete al
	cmp al,bl
	je Block63

 Block53:
	mov dword ptr [esp+0x70],ebx
	lea eax,[esp+0x28]
	push 0x9A9
	push eax
	mov dword ptr [esp+0x70],0x13
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x78]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x78]
	push edx
	mov byte ptr [esp+0x74],0x14
	call ZXString16::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x68],0x13
	cmp eax,ebx
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block55:
	mov esi,dword ptr [esp+0x74]
	push ebx
	push 0xFF
	push 3
	push ecx
	lea eax,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [esp+0x84],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x88],0x15
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [esi+0x640]
	mov esi,dword ptr [esp+0x8C]
	not eax
	and eax,1
	push eax
	lea edx,[esp+0x98]
	push esi
	push edx
	mov byte ptr [esp+0x90],0x13
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x78]
	cmp eax,ebx
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block57:
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x6C],0x16
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	push 0x20
	mov ecx,ebp
	mov byte ptr [esp+0x74],0x17
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [edx+0xC],ebx
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp esi,ebx
	je Block63

 Block58:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4
	jmp Block63

 Block59:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block61

 Block60:
	mov dword ptr [esi],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov eax,dword ptr [ebp]
	cmp eax,ebx
	je Block63

 Block62:
	mov dword ptr [ebp],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block63:
	mov eax,1

 Block64:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 0xC
}
}
// CUser::ShowEffectSiegeEnd
__SUB_CLASS_THIS(004E0600, __thiscall, 16714,  CUser, void, const SKILLENTRY*, long, int32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push edi
	mov edi,ecx
	test ebx,ebx
	je Block7

 Block1:
	push esi
	lea esi,[edi+0x88]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	or ecx,0xFFFFFFFF
	cmp eax,ecx
	jle Block3

 Block2:
	mov dword ptr [esi+0x5BC],ecx
	mov dword ptr [esi+0x5A8],ecx
	push 1
	mov ecx,esi
	call CAvatar::ClearActionLayer

 Block3:
	cmp dword ptr [esp+0x18],1
	jne Block5

 Block4:
	mov eax,0xE4
	jmp Block6

 Block5:
	xor eax,eax
	cmp dword ptr [ebx],0x217C05C
	setne al
	lea eax,[eax*4+0xDA]

 Block6:
	push 0
	mov dword ptr [edi+0x644],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push 0x64
	push 6
	mov ecx,esi
	call edx
	pop esi

 Block7:
	pop edi
	pop ebx
	ret 0xC
}
}
// CUser::GetAuraBooster
__SUB_CLASS_THIS0(004DE900, __thiscall, 16594,  CUser, const long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+8]
	push ebx
	push ebp
	push esi
	xor ebp,ebp
	call edx
	mov esi,eax
	mov eax,dword ptr [esi+0x8CC]
	push eax
	lea ebx,[esi+0x8C4]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block7

 Block1:
	mov ecx,dword ptr [esi+0x8D8]
	push edi
	push ecx
	lea edx,[esi+0x8D0]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	add esp,8
	push eax
	call CSkillInfo::GetSkill
	mov edi,eax
	test edi,edi
	je Block6

 Block2:
	mov eax,dword ptr [esi+0x8CC]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x174]
	push ecx
	add eax,0x16C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x848]
	push edx
	lea ebx,[esi+0x840]
	push ebx
	mov edi,eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x10
	test eax,eax
	jle Block5

 Block3:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x1E9F5B8
	call CSkillInfo::GetSkill
	mov ebp,eax
	test ebp,ebp
	je Block5

 Block4:
	mov eax,dword ptr [esi+0x848]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov ecx,ebp
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x174]
	push ecx
	add eax,0x16C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	imul ecx,edi
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	add edi,eax

 Block5:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret

 Block6:
	pop edi
	pop esi
	mov eax,ebp
	pop ebp
	pop ebx
	ret

 Block7:
	pop esi
	mov eax,ebp
	pop ebp
	pop ebx
	ret
}
}
// CUser::ShowItemOptionUpgradeEffect
_SUB_EXCEPTION_HANDLER(4E72C0)
__SUB_CLASS_THIS(004E72C0, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E72C0
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
	mov dword ptr [esp+0x1C],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	cmp dword ptr [ecx+0x638],ebx
	jne Block47

 Block1:
	mov esi,dword ptr [esp+0x3C]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movsx ebp,al
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,esi
	mov dword ptr [esp+0x3C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [ecx]
	mov esi,eax
	mov eax,dword ptr [edx+0xC]
	call eax
	test eax,eax
	je Block24

 Block2:
	cmp dword ptr [esp+0x3C],ebx
	je Block8

 Block3:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block6

 Block4:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CUIEnchantDlg::ms_RTTI_CUIEnchantDlg
	call eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test ecx,ecx
	jne Block7

 Block6:
	push 0x21000003
	lea ecx,[esp+0x40]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x3C]
	push offset CDisconnectException::THROW_INFO
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x20],ecx
	call _CxxThrowException

 Block7:
	push 0
	push esi
	push edi
	push ebp
	call CUIEnchantDlg::SetResult
	jmp Block24

 Block8:
	test ebp,ebp
	je Block10

 Block9:
	lea eax,[esp+0x28]
	push 0x192
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x34],0
	mov ebx,1
	jmp Block13

 Block10:
	test edi,edi
	je Block12

 Block11:
	lea ecx,[esp+0x24]
	push 0x194
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x34],1
	mov ebx,2
	jmp Block13

 Block12:
	lea edx,[esp+0x20]
	push 0x193
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x34],2
	mov ebx,4

 Block13:
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x1C],0
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x34],4
	test bl,4
	je Block16

 Block14:
	mov eax,dword ptr [esp+0x20]
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov byte ptr [esp+0x34],5
	test bl,2
	je Block19

 Block17:
	mov eax,dword ptr [esp+0x24]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov byte ptr [esp+0x34],6
	test bl,1
	je Block22

 Block20:
	mov eax,dword ptr [esp+0x28]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	lea eax,[esp+0x18]
	push 0xC
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x20]
	add esp,8
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov edi,dword ptr [esp+0x1C]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xC]
	mov ecx,edi
	call eax
	test eax,eax
	je Block27

 Block25:
	cmp dword ptr [esp+0x3C],0
	jne Block47

 Block26:
	jmp Block28

 Block27:
	cmp dword ptr [esp+0x3C],0
	jne Block37

 Block28:
	mov esi,7
	test ebp,ebp
	je Block30

 Block29:
	lea ecx,[esp+0x24]
	push 0x507
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x34],esi
	or ebx,8
	jmp Block31

 Block30:
	lea edx,[esp+0x28]
	push 0x508
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x34],8
	or ebx,0x10

 Block31:
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x1C],ebx
	call play_game_sound
	add esp,8
	mov dword ptr [esp+0x34],esi
	test bl,0x10
	je Block34

 Block32:
	mov eax,dword ptr [esp+0x28]
	and ebx,0xFFFFFFEF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test bl,8
	je Block40

 Block35:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block40

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block40

 Block37:
	mov eax,offset _S_ENCHANTSUCCESSDE
	test ebp,ebp
	jne Block39

 Block38:
	mov eax,offset _S_ENCHANTFAILUREDE

 Block39:
	push 0x64
	push eax
	call play_game_sound
	add esp,8

 Block40:
	mov eax,dword ptr [esp+0x3C]
	push eax
	mov eax,dword ptr [edi+0x1960]
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block42:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x48],9
	call CUser::GetVecCtrl_0
	mov esi,dword ptr [edi+0x1960]
	mov byte ptr [esp+0x44],0xA
	test esi,esi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[esp+0x2C]
	push edx
	push esi
	mov dword ptr [esp+0x34],0
	call eax
	test eax,eax
	jge Block46

 Block45:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block46:
	mov ecx,dword ptr [esp+0x2C]
	push ecx
	mov dword ptr [esp+0x48],0xFFFFFFFF
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::Effect_ItemUpgrade

 Block47:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4
}
}
// CUser::GetActivePetItemSlot
__SUB_CLASS_THIS(004E3030, __thiscall, 16613,  CUser, ZRef<GW_ItemSlotPet>*, ZRef<GW_ItemSlotPet>*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x2E44]
	mov ecx,dword ptr [esp+0xC]
	mov ecx,dword ptr [eax+ecx*8+4]
	mov dword ptr [esp],0
	test ecx,ecx
	je Block2

 Block1:
	call CPet::GetItemSlot
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi+4],eax
	test eax,eax
	je Block5

 Block4:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// CUser::SetGhostState
__SUB_CLASS_THIS(004F5E70, __thiscall, 16615,  CUser, void, long, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,dword ptr [esp+8]
	push esi
	mov esi,ecx
	test ebp,ebp
	je Block2

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x38]
	push 0
	call edx

 Block2:
	push ebx
	push edi
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	test eax,eax
	je Block4

 Block3:
	lea edi,[eax-0xC]
	jmp Block5

 Block4:
	xor edi,edi

 Block5:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [edi+0x1BC]
	push eax
	lea ebx,[edi+0x1B4]
	push ebx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [edi+0x1BC]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	cmp dword ptr [eax+4],0
	jne Block12

 Block9:
	mov edx,dword ptr [edi+0x1BC]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block11

 Block10:
	mov eax,dword ptr [edi+0x1BC]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	cmp dword ptr [eax+4],0
	je Block12

 Block11:
	xor eax,eax
	jmp Block13

 Block12:
	mov eax,1

 Block13:
	cmp dword ptr [esp+0x18],0
	pop edi
	pop ebx
	jne Block16

 Block14:
	cmp dword ptr [esi+0x5E4],ebp
	je Block16

 Block15:
	push 1
	push eax
	mov ecx,esi
	call CUser::ShowMorphEffect

 Block16:
	push ebp
	lea ecx,[esi+0x88]
	call CAvatar::SetGhostState
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xC]
	mov ecx,esi
	call eax
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x3600]
	jmp Block19

 Block18:
	mov eax,dword ptr [esi+0x39BC]

 Block19:
	push eax
	mov ecx,esi
	call CUser::SetActiveEffectItem
	mov ecx,esi
	call CUser::SetSetItemEffect
	mov edx,dword ptr [esi+0x2EDC]
	push edx
	mov ecx,esi
	call CUser::SetCarryItemEffect
	mov eax,dword ptr [esi+0x2EE0]
	push eax
	mov ecx,esi
	call CUser::SetConsumeItemEffect_0
	pop esi
	pop ebp
	ret 8
}
}
// CUser::RetrieveNewYearCardAdditionalLayer
__SUB_CLASS_THIS(004E6920, __thiscall, 16691,  CUser, CUser::ADDITIONALLAYER*, unsigned long) {
__asm {

 Block0:
	push ecx
	push ebp
	push esi
	mov esi,ecx
	mov ebp,dword ptr [esi+0x39B0]
	test ebp,ebp
	jne Block2

 Block1:
	push ebp
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esi+0x19C8]
	mov dword ptr [esi+0x39B0],0x3F
	call ZMap<unsigned long, long, unsigned long>::Insert
	mov ecx,dword ptr [esi+0x39B0]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esi+0x39B0]
	lea edx,[eax+eax*8]
	lea eax,[esi+edx*4+0x2F24]
	pop esi
	pop ebp
	pop ecx
	ret 4

 Block2:
	push ebx
	push edi
	mov edi,0x3F
	mov dword ptr [esp+0x10],edi
	lea ebx,[esi+0x19C8]
	lea ebx,[ebx]

 Block3:
	lea eax,[esp+0x10]
	push eax
	mov ecx,ebx
	call ZMap<unsigned long, long, unsigned long>::FindInverse
	test eax,eax
	je Block12

 Block4:
	inc edi
	cmp edi,0x48
	mov dword ptr [esp+0x10],edi
	jle Block3

 Block5:
	lea eax,[ebp+1]
	cmp eax,0x48
	mov dword ptr [esi+0x39B0],eax
	jle Block7

 Block6:
	mov dword ptr [esi+0x39B0],0x3F

 Block7:
	xor ebp,ebp
	push ebp
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebx
	call ZMap<unsigned long, long, unsigned long>::Insert
	mov edx,dword ptr [esi+0x39B0]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esi+0x39B0]
	lea eax,[eax+eax*8]
	lea esi,[esi+eax*4+0x2F24]
	mov edi,1
	mov dword ptr [esi+8],0xFFFFFFFF
	mov dword ptr [esi+0xC],edi
	mov eax,dword ptr [esi+0x14]
	cmp eax,ebp
	je Block9

 Block8:
	mov dword ptr [esi+0x14],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov dword ptr [esi],0xFFFFFFFF
	mov dword ptr [esi+0x18],edi
	mov eax,dword ptr [esi+0x20]
	cmp eax,ebp
	je Block11

 Block10:
	mov dword ptr [esi+0x20],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	pop edi
	pop ebx
	mov eax,esi
	pop esi
	pop ebp
	pop ecx
	ret 4

 Block12:
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebx
	mov dword ptr [esi+0x39B0],edi
	call ZMap<unsigned long, long, unsigned long>::Insert
	mov edx,dword ptr [esi+0x39B0]
	mov dword ptr [eax+0xC],edx
	lea eax,[edi+edi*8]
	pop edi
	pop ebx
	lea eax,[esi+eax*4+0x2F24]
	pop esi
	pop ebp
	pop ecx
	ret 4
}
}
// CUser::PrepareActionLayer
__SUB_CLASS_THIS(004E3070, __thiscall, 16699,  CUser, void, long, long, int32_t) {
__asm {

 Block0:
	sub esp,0x14
	mov eax,dword ptr [ecx-0x88]
	mov edx,dword ptr [eax+8]
	push ebx
	push ebp
	push esi
	lea esi,[ecx-0x88]
	mov dword ptr [esp+0x14],ecx
	xor ebx,ebx
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x14],ebx
	call edx
	mov ebp,eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC]
	mov ecx,esi
	mov dword ptr [esp+0x14],ebx
	call edx
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CUserLocal::GetPassiveSkillData
	cmp dword ptr [eax+4],0
	mov ebx,1
	mov byte ptr [esp+0x13],bl
	jne Block3

 Block2:
	mov byte ptr [esp+0x13],0

 Block3:
	test bl,1
	je Block8

 Block4:
	mov edi,dword ptr [esp+0x20]
	test edi,edi
	je Block8

 Block5:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block8

 Block7:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block8:
	cmp byte ptr [esp+0x13],0
	je Block13

 Block9:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::GetPassiveSkillData
	mov edx,dword ptr [eax+4]
	mov edi,dword ptr [esp+0x20]
	mov eax,dword ptr [edx+0x68]
	mov dword ptr [esp+0x14],eax
	test edi,edi
	je Block13

 Block10:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block13

 Block12:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block13:
	mov ecx,dword ptr [esp+0x14]
	push ecx
	mov ecx,ebp
	call SecondaryStat::GetSpeed
	mov edx,dword ptr [ebp+0x584]
	push edx
	lea ebx,[ebp+0x57C]
	push ebx
	mov edi,eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block15

 Block14:
	mov eax,dword ptr [ebp+0x584]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov edi,eax

 Block15:
	mov ecx,dword ptr [ebp+0xE34]
	push ecx
	lea ebx,[ebp+0xE2C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block17

 Block16:
	mov edx,dword ptr [ebp+0xE34]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	imul eax,edi
	mov dword ptr [esp+0x1C],eax
	add esp,8
	fild dword ptr [esp+0x14]
	fdiv qword ptr [__real_c059000000000000]
	call __ftol2_sse
	add edi,eax

 Block17:
	mov ebx,dword ptr [esp+0x18]
	cmp dword ptr [ebx+0x5B0],0
	jne Block19

 Block18:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x28]
	push eax
	push edi
	push ecx
	mov ecx,ebx
	call CAvatar::PrepareActionLayer
	mov ecx,esi
	call CUser::PrepareShadowPartnerActionLayer
	mov ecx,esi
	call CUser::PrepareMirrorActionLayer
	mov ecx,ebx
	call CAvatar::GetHeight
	push eax
	lea ecx,[ebx-0x74]
	call CChatBalloon::AdjustCoordY
	mov ecx,esi
	call CUser::UpdateAdditionalLayer

 Block19:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0xC
}
}
// CUser::SetAdminEffect
_SUB_EXCEPTION_HANDLER(4EAD40)
__SUB_CLASS_THIS0(004EAD40, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4EAD40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 2
	call CUser::GetAdditionalLayer
	mov edi,eax
	push 0
	lea eax,[edi+0xC]
	push eax
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xBFA
	push ecx
	mov dword ptr [edi+8],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CUser::LoadLayer
	test eax,eax
	je Block15

 Block1:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x20]
	push edx
	call esi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea ecx,[esp+0x10]
	push ecx
	mov dword ptr [esp+0x3C],0
	call esi
	lea edx,[esp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [edi+0x14]
	mov byte ptr [esp+0x38],1
	test ecx,ecx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea eax,[esp+0x20]
	push eax
	lea edx,[esp+0x14]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x10],si
	jne Block10

 Block8:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea ecx,[esp+0x10]
	push ecx
	call edi

 Block11:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp word ptr [esp+0x20],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret

 Block14:
	lea eax,[esp+0x20]
	push eax
	call edi

 Block15:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret
}
}
// CUser::GetJobCode
__SUB_CLASS_THIS0(004EB550, __thiscall, 16601,  CUser, long) {
__asm {

 Block0:
	or eax,0xFFFFFFFF
	ret
}
}
// CUser::RemoveFinalCutEffect
__SUB_CLASS_THIS0(004E12E0, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3A58]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+0x3A58],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CUser::LoadSwallowingEffect
_SUB_EXCEPTION_HANDLER(4F3B90)
__SUB_CLASS_THIS0(004F3B90, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F3B90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x3A60],0
	sete al
	test al,al
	je Block32

 Block1:
	mov dword ptr [esp+0xC],0
	lea eax,[esp+0x10]
	push 0x971
	push eax
	mov dword ptr [esp+0x50],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x1F914CD
	push 0xCEE
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x58],1
	call ZXString16::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0x10
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	mov eax,dword ptr [esi+0x1960]
	push 0
	push 0xFF
	push 3
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block5:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push ecx
	lea ecx,[esi+0x88]
	mov byte ptr [esp+0x68],2
	call CAvatar::GetTMHeadOrigin
	mov edi,dword ptr [esi+0x1960]
	mov byte ptr [esp+0x64],3
	test edi,edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xD4]
	lea eax,[esp+0x2C]
	push eax
	push edi
	mov dword ptr [esp+0x34],0
	call ecx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block9:
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x28]
	push edx
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x70],0
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x3A60]
	add esp,0x28
	cmp edi,eax
	je Block14

 Block10:
	mov dword ptr [esi+0x3A60],eax
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block12:
	test edi,edi
	je Block14

 Block13:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block14:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x4C],4
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [esi+0x3A60]
	mov byte ptr [esp+0x48],5
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x48],4
	cmp word ptr [esp+0x20],si
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block26:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x30],si
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block30:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x40
	ret
}
}
// CUser::GetDashingSkill
__SUB_CLASS_THIS0(004DE380, __thiscall, 16601,  CUser, long) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+8]
	push edi
	call edx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	mov ecx,esi
	call edx
	mov edi,eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	mov ecx,esi
	xor ebx,ebx
	call edx
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	sub ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,5
	jne Block2

 Block1:
	mov eax,0x10624DD3
	imul edi
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,ecx
	dec eax
	neg eax
	sbb eax,eax
	pop edi
	and eax,0xFF676982
	pop esi
	add eax,0xE4E5AB
	pop ebx
	ret

 Block2:
	cmp eax,4
	mov eax,0x41EEE8
	je Block4

 Block3:
	mov eax,ebx

 Block4:
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CUser::SetActivePet
__SUB_CLASS_THIS(004E40E0, __thiscall, 16611,  CUser, void, long, CPet*) {
__asm {

 Block0:
	sub esp,8
	cmp dword ptr [esp+0x10],0
	push ebx
	push ebp
	push esi
	push edi
	mov ebp,ecx
	je Block13

 Block1:
	mov ebx,dword ptr [esp+0x1C]
	mov edi,2
	cmp ebx,edi
	jge Block7

 Block2:
	mov eax,dword ptr [ebp+0x2E44]
	lea esi,[eax+edi*8]
	mov eax,dword ptr [esi-4]
	test eax,eax
	je Block4

 Block3:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	cmp dword ptr [esi+4],0
	je Block6

 Block5:
	push 0
	mov ecx,esi
	call ZRef<CPet>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block6:
	mov ecx,dword ptr [esi-4]
	dec edi
	cmp edi,ebx
	mov dword ptr [esi+4],ecx
	jg Block2

 Block7:
	mov eax,dword ptr [esp+0x20]
	add eax,8
	mov edx,dword ptr [ebp+0x2E44]
	lea edi,[edx+ebx*8]
	je Block12

 Block8:
	lea esi,[eax-8]
	test esi,esi
	je Block10

 Block9:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	mov eax,dword ptr [edi+4]
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block22

 Block11:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CPet>::_ReleaseRaw
	jmp Block22

 Block12:
	xor esi,esi
	jmp Block10

 Block13:
	mov eax,dword ptr [esp+0x1C]
	inc eax
	cmp eax,3
	jge Block20

 Block14:
	lea ebx,[eax*8]

 Block15:
	mov ecx,dword ptr [ebp+0x2E44]
	mov eax,dword ptr [ecx+ebx+4]
	lea esi,[ecx+ebx]
	lea edi,[esi-8]
	test eax,eax
	je Block17

 Block16:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	cmp dword ptr [edi+4],0
	je Block19

 Block18:
	push 0
	mov ecx,edi
	call ZRef<CPet>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block19:
	mov edx,dword ptr [esi+4]
	add ebx,8
	cmp ebx,0x18
	mov dword ptr [edi+4],edx
	jl Block15

 Block20:
	mov esi,dword ptr [ebp+0x2E44]
	add esi,0x10
	cmp dword ptr [esi+4],0
	je Block22

 Block21:
	push 0
	mov ecx,esi
	call ZRef<CPet>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block22:
	mov eax,dword ptr [ebp+0x2E44]
	mov eax,dword ptr [eax+4]
	test eax,eax
	je Block24

 Block23:
	mov dword ptr [eax+0x9C],0

 Block24:
	mov ecx,dword ptr [ebp+0x2E44]
	mov eax,dword ptr [ecx+0xC]
	test eax,eax
	je Block26

 Block25:
	mov dword ptr [eax+0x9C],1

 Block26:
	mov edx,dword ptr [ebp+0x2E44]
	mov eax,dword ptr [edx+0x14]
	pop edi
	pop esi
	pop ebp
	pop ebx
	test eax,eax
	je Block28

 Block27:
	mov dword ptr [eax+0x9C],2

 Block28:
	add esp,8
	ret 8
}
}
// CUser::LoadSkillRepeatEffect
_SUB_EXCEPTION_HANDLER(4F2BB0)
__SUB_CLASS_THIS(004F2BB0, __thiscall, 16730,  CUser, _x_com_ptr<IWzGr2DLayer>*, _x_com_ptr<IWzGr2DLayer>*, long, NakedParam<_x_com_ptr<IWzGr2DLayer>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F2BB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x68
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x7C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x1C],edi
	xor esi,esi
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x84],1
	mov dword ptr [esp+0x14],esi
	lea eax,[esp+0x18]
	push 0x971
	push eax
	mov byte ptr [esp+0x8C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [esp+0x90]
	push edx
	mov eax,0x68DB8BAD
	imul edx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push eax
	push ecx
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x94],3
	call ZXString16::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0x10
	mov byte ptr [esp+0x84],2
	cmp eax,esi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov edi,dword ptr [edi+0x193C]
	mov dword ptr [esp+0x90],edi
	cmp edi,esi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block4:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x88],4
	call edi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x88],5
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	push esi
	push esi
	lea edx,[esp+0x44]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x38]
	push eax
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,6
	push edx
	mov byte ptr [esp+0x9C],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x98],7
	cmp dword ptr [_D_G_RM],esi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x80]
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x8C],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov ebx,8
	mov byte ptr [esp+0x84],0xA
	cmp word ptr [esp+0x6C],bx
	jne Block20

 Block14:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	cmp eax,esi
	je Block16

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block16:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0x84],0xB
	cmp word ptr [esp+0x2C],bx
	jne Block21

 Block18:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,esi
	je Block22

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block20:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x6C]
	push edx
	call edi
	jmp Block17

 Block21:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block22:
	mov byte ptr [esp+0x84],0xC
	cmp word ptr [esp+0x3C],bx
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,esi
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block26:
	push esi
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_POS
	call _xbstr_t::_ctor_1
	mov ebp,dword ptr [esp+0x20]
	mov byte ptr [esp+0x8C],0xD
	cmp ebp,esi
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea ecx,[esp+0x64]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x90],0xC
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x8C],0xE
	call get_int32
	add esp,8
	mov esi,eax
	mov byte ptr [esp+0x84],0xC
	cmp word ptr [esp+0x5C],bx
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x5C]
	push eax
	call edi

 Block32:
	push 0
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_Z
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0x90],0xF
	mov ecx,ebp
	mov byte ptr [esp+0x90],0xC
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x8C],0x10
	call get_int32
	add esp,8
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x84],0xC
	cmp word ptr [esp+0x5C],bx
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea eax,[esp+0x5C]
	push eax
	call edi

 Block36:
	push 0
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push offset _S_FLIP
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0x90],0x11
	mov ecx,ebp
	mov byte ptr [esp+0x90],0xC
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x8C],0x12
	call get_int32
	add esp,8
	mov edi,eax
	mov byte ptr [esp+0x84],0xC
	cmp word ptr [esp+0x5C],bx
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	cmp esi,1
	jne Block46

 Block41:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ecx+0x1940]
	mov esi,dword ptr [esp+0x90]
	cmp esi,eax
	je Block46

 Block42:
	mov dword ptr [esp+0x90],eax
	test eax,eax
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block44:
	test esi,esi
	je Block46

 Block45:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block46:
	test edi,edi
	je Block49

 Block47:
	mov eax,dword ptr [esp+0x1C]
	test byte ptr [eax+0x640],1
	jne Block49

 Block48:
	mov esi,1
	jmp Block50

 Block49:
	xor esi,esi

 Block50:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x94]
	push 0
	push 0xFF
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0xA4]
	mov dword ptr [esp+0x38],esp
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block52:
	mov edi,dword ptr [esp+0xA0]
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block54

 Block53:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block54:
	mov edx,dword ptr [esp+0x30]
	push esi
	mov esi,dword ptr [esp+0xAC]
	push edx
	push esi
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	cmp dword ptr [esi],0
	mov dword ptr [esp+0x24],1
	je Block70

 Block55:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x5C]
	push eax
	call edi
	lea ecx,[esp+0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	lea edx,[esp+0x4C]
	mov bl,0x13
	push edx
	mov byte ptr [esp+0x88],bl
	call edi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x84],0x14
	test ecx,ecx
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x50]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [esp+0x84],bl
	cmp word ptr [esp+0x4C],di
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov byte ptr [esp+0x84],0xC
	cmp word ptr [esp+0x5C],di
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov edi,dword ptr [esp+0x90]

 Block70:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov byte ptr [esp+0x88],4
	call eax
	mov byte ptr [esp+0x84],2
	test edi,edi
	je Block72

 Block71:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block72:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x84],1
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block74:
	mov eax,dword ptr [esp+0x94]
	mov byte ptr [esp+0x84],0
	test eax,eax
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block76:
	mov eax,esi
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret 0xC
}
}
// CUser::Update
_SUB_EXCEPTION_HANDLER(4FB8D0)
__SUB_CLASS_THIS0(004FB8D0, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4FB8D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xD8]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x50],ebp
	mov dword ptr [esp+0x1C],0
	call get_update_time
	mov dword ptr [esp+0x48],eax
	mov eax,dword ptr [ebp+0x19E4]
	test eax,eax
	je Block2

 Block1:
	lea esi,[eax-0xC]
	jmp Block3

 Block2:
	xor esi,esi

 Block3:
	mov eax,dword ptr [esi+0x60]
	push eax
	lea ecx,[esi+0x50]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	fnstsw ax
	test ah,0x44
	jp Block14

 Block4:
	mov edx,dword ptr [esi+0x78]
	push edx
	add esi,0x68
	push esi
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	fnstsw ax
	test ah,0x44
	jp Block14

 Block5:
	mov eax,dword ptr [ebp+0x640]
	lea esi,[ebp+0x88]
	push 0
	push eax
	mov ecx,esi
	call CAvatar::MoveAction2RawAction
	mov ecx,esi
	mov edi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block7

 Block6:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	jmp Block8

 Block7:
	mov eax,edi

 Block8:
	test eax,eax
	je Block13

 Block9:
	mov eax,dword ptr [esi+0x5B8]
	push 0
	push eax
	mov ecx,esi
	call CAvatar::MoveAction2RawAction
	mov ecx,esi
	mov edi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block11

 Block10:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	jmp Block12

 Block11:
	mov eax,edi

 Block12:
	cmp eax,1
	jne Block14

 Block13:
	mov eax,dword ptr [ebp+0x640]
	mov edx,dword ptr [esi]
	and eax,1
	or eax,4
	push 0
	push eax
	mov eax,dword ptr [edx+0x10]
	mov ecx,esi
	call eax

 Block14:
	mov eax,dword ptr [ebp+0x640]
	lea ebx,[ebp+0x88]
	xor edi,edi
	push edi
	push eax
	mov ecx,ebx
	call CAvatar::MoveAction2RawAction
	mov ecx,ebx
	mov esi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block16

 Block15:
	mov ecx,ebx
	call CAvatar::GetOneTimeAction
	jmp Block17

 Block16:
	mov eax,esi

 Block17:
	cmp eax,0x10E
	je Block22

 Block18:
	mov eax,dword ptr [ebx+0x5B8]
	push edi
	push eax
	mov ecx,ebx
	call CAvatar::MoveAction2RawAction
	mov ecx,ebx
	mov esi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block20

 Block19:
	mov ecx,ebx
	call CAvatar::GetOneTimeAction
	jmp Block21

 Block20:
	mov eax,esi

 Block21:
	cmp eax,0x10F
	jne Block36

 Block22:
	cmp dword ptr [ebp+0x3A8C],edi
	sete al
	test al,al
	je Block36

 Block23:
	mov eax,dword ptr [ebp+0x19E4]
	cmp eax,edi
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	jmp Block26

 Block25:
	xor eax,eax

 Block26:
	mov ecx,eax
	call CVecCtrlUser::IsPermitMapFlyingSkill
	test eax,eax
	je Block36

 Block27:
	mov eax,dword ptr [ebp+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block29:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	mov ecx,ebp
	mov dword ptr [esp+0xE4],edi
	call edx
	push eax
	push 0x402
	call get_novice_skill_as_race
	add esp,8
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0xEC],0xFFFFFFFF
	call CUser::LoadSkillRepeatEffect
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x3A8C]
	cmp esi,eax
	je Block34

 Block30:
	mov dword ptr [ebp+0x3A8C],eax
	cmp eax,edi
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block32:
	cmp esi,edi
	je Block34

 Block33:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block34:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block36:
	mov eax,dword ptr [ebx+0x5B8]
	push edi
	push eax
	mov ecx,ebx
	call CAvatar::MoveAction2RawAction
	mov ecx,ebx
	mov esi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block38

 Block37:
	mov ecx,ebx
	call CAvatar::GetOneTimeAction
	jmp Block39

 Block38:
	mov eax,esi

 Block39:
	cmp eax,0xBC
	jne Block46

 Block40:
	cmp dword ptr [ebp+0x3AA8],edi
	jne Block47

 Block41:
	mov eax,dword ptr [ebp+0x19E4]
	cmp eax,edi
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	jmp Block44

 Block43:
	xor eax,eax

 Block44:
	cmp dword ptr [eax+0x1A0],edi
	je Block46

 Block45:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push edi
	push edi
	push edi
	push edi
	push 0x3E8
	push 0x4215FD
	call CSkillInfo::GetSkill
	push eax
	mov ecx,ebp
	call CUser::ShowSkillSpecialEffect
	mov dword ptr [ebp+0x3AA8],1
	jmp Block52

 Block46:
	cmp dword ptr [ebp+0x3AA8],edi
	je Block52

 Block47:
	mov eax,dword ptr [ebx+0x5B8]
	push edi
	push eax
	mov ecx,ebx
	call CAvatar::MoveAction2RawAction
	mov ecx,ebx
	mov esi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block49

 Block48:
	mov ecx,ebx
	call CAvatar::GetOneTimeAction
	jmp Block50

 Block49:
	mov eax,esi

 Block50:
	cmp eax,0xBC
	je Block52

 Block51:
	mov dword ptr [ebp+0x3AA8],edi

 Block52:
	cmp dword ptr [ebp+0x2EF8],edi
	sete al
	test al,al
	sete al
	test al,al
	je Block150

 Block53:
	mov eax,dword ptr [ebx+0x5B8]
	push 0
	push eax
	mov ecx,ebx
	call CAvatar::MoveAction2RawAction
	mov ecx,ebx
	mov esi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block55

 Block54:
	mov ecx,ebx
	call CAvatar::GetOneTimeAction
	mov edi,eax
	jmp Block56

 Block55:
	mov edi,esi

 Block56:
	mov esi,dword ptr [ebp+0x2EF8]
	test esi,esi
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x20]
	push edx
	push esi
	mov dword ptr [esp+0x28],0
	call eax
	test eax,eax
	jge Block60

 Block59:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block60:
	mov esi,dword ptr [ebp+0x2EF8]
	test esi,esi
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x4C]
	push edx
	push esi
	mov dword ptr [esp+0x54],0
	call eax
	test eax,eax
	jge Block64

 Block63:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block64:
	mov ecx,dword ptr [ebp+0x2EF8]
	test ecx,ecx
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea edx,[esp+0x34]
	push edx
	call IWzVector2D::Getorigin
	mov esi,dword ptr [ebp+0x2EF8]
	mov dword ptr [esp+0xE0],1
	test esi,esi
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	mov edx,dword ptr [_D_VTEMPTY]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [_D_VTEMPTY+12]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block70

 Block69:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block70:
	mov esi,dword ptr [ebp+0x2EF8]
	test esi,esi
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block74

 Block73:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block74:
	mov eax,dword ptr [ebx+0x548]
	test eax,eax
	je Block106

 Block75:
	push eax
	call CMorphTemplate::IsHideMorphed
	add esp,4
	test eax,eax
	je Block106

 Block76:
	mov esi,8
	cmp edi,esi
	mov edi,dword ptr [ZImports::_VariantInit]
	jne Block90

 Block77:
	lea ecx,[esp+0x24]
	push ecx
	call edi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	lea eax,[esp+0x54]
	push eax
	mov byte ptr [esp+0xE4],2
	call edi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	mov ecx,dword ptr [ebp+0x2EF8]
	mov byte ptr [esp+0xE0],3
	test ecx,ecx
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x58]
	push eax
	push 0xFFFFFFAE
	push 0xFFFFFFE6
	call IWzVector2D::RelMove
	mov byte ptr [esp+0xE0],2
	cmp word ptr [esp+0x54],si
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov byte ptr [esp+0xE0],1
	cmp word ptr [esp+0x24],si
	jne Block89

 Block88:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	jmp Block103

 Block89:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block146

 Block90:
	lea edx,[esp+0x54]
	push edx
	call edi
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block92

 Block91:
	push eax
	call _com_issue_error

 Block92:
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0xE4],4
	call edi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	mov ecx,dword ptr [ebp+0x2EF8]
	mov byte ptr [esp+0xE0],5
	test ecx,ecx
	jne Block96

 Block95:
	push 0x80004003
	call _com_issue_error

 Block96:
	lea eax,[esp+0x54]
	push eax
	lea edx,[esp+0x28]
	push edx
	push 0xFFFFFFA7
	push 0xFFFFFFE6
	call IWzVector2D::RelMove
	mov byte ptr [esp+0xE0],4
	cmp word ptr [esp+0x24],si
	jne Block99

 Block97:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov byte ptr [esp+0xE0],1
	cmp word ptr [esp+0x54],si
	jne Block105

 Block101:
	xor edx,edx
	mov word ptr [esp+0x54],dx

 Block102:
	mov eax,dword ptr [esp+0x5C]

 Block103:
	test eax,eax
	je Block146

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block105:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block146

 Block106:
	mov eax,dword ptr [ebp+0x5D0]
	mov esi,8
	test eax,eax
	je Block109

 Block107:
	cmp edi,esi
	je Block114

 Block108:
	cmp edi,0x14
	je Block114

 Block109:
	cmp dword ptr [ebp+0x5E4],0
	je Block111

 Block110:
	cmp edi,0x7F
	je Block114

 Block111:
	test eax,eax
	jne Block141

 Block112:
	cmp edi,0x2A
	je Block114

 Block113:
	push edi
	call is_pronestab_action
	add esp,4
	test eax,eax
	je Block141

 Block114:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x54]
	push ecx
	call edi
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0xE4],6
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block118

 Block117:
	push eax
	call _com_issue_error

 Block118:
	mov ecx,dword ptr [ebp+0x2EF8]
	mov byte ptr [esp+0xE0],7
	test ecx,ecx
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	lea edx,[esp+0x54]
	push edx
	mov edx,dword ptr [esp+0x50]
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x28]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov byte ptr [esp+0xE0],6
	cmp word ptr [esp+0x24],si
	jne Block123

 Block121:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block124:
	mov byte ptr [esp+0xE0],1
	cmp word ptr [esp+0x54],si
	jne Block127

 Block125:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	lea edx,[esp+0x54]
	push edx
	call edi
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block130

 Block129:
	push eax
	call _com_issue_error

 Block130:
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0xE4],8
	call edi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	mov ecx,dword ptr [ebp+0x2EF8]
	mov eax,dword ptr [ebp+0x640]
	mov byte ptr [esp+0xE0],9
	test ecx,ecx
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
	and al,1
	movsx eax,al
	neg eax
	lea edx,[esp+0x54]
	push edx
	sbb eax,eax
	lea edx,[esp+0x28]
	push edx
	and eax,0xFFFFFFDA
	push 0xFFFFFFC3
	add eax,0xFFFFFFF9
	push eax
	call IWzVector2D::RelMove
	mov byte ptr [esp+0xE0],8
	cmp word ptr [esp+0x24],si
	jne Block137

 Block135:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block138:
	mov byte ptr [esp+0xE0],1
	cmp word ptr [esp+0x54],si
	jne Block140

 Block139:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	jmp Block102

 Block140:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block146

 Block141:
	push offset _D_VTMISSING
	lea ecx,[esp+0x78]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x88]
	mov byte ptr [esp+0xE4],0xA
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp+0x2EF8]
	mov byte ptr [esp+0xE0],0xB
	test ecx,ecx
	jne Block143

 Block142:
	push 0x80004003
	call _com_issue_error

 Block143:
	lea edx,[esp+0x74]
	push edx
	mov edx,dword ptr [esp+0x50]
	lea eax,[esp+0x88]
	push eax
	mov eax,dword ptr [esp+0x28]
	push edx
	push eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x84]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0xE0],1
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x78]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x88]
	mov byte ptr [esp+0xE4],0xC
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp+0x2EF8]
	mov byte ptr [esp+0xE0],0xD
	test ecx,ecx
	jne Block145

 Block144:
	push 0x80004003
	call _com_issue_error

 Block145:
	lea edx,[esp+0x74]
	push edx
	lea eax,[esp+0x88]
	push eax
	push 0xFFFFFFA7
	push 0xFFFFFFE6
	call IWzVector2D::RelMove
	lea ecx,[esp+0x84]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x74]
	call Ztl_variant_t::~Ztl_variant_t

 Block146:
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	cmp word ptr [esp+0x34],si
	jne Block149

 Block147:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block150:
	cmp dword ptr [ebp+0x3A8C],0
	sete al
	test al,al
	sete al
	test al,al
	je Block160

 Block151:
	test byte ptr [ebp+0x640],1
	mov esi,dword ptr [ebp+0x3A8C]
	je Block155

 Block152:
	test esi,esi
	jne Block154

 Block153:
	push 0x80004003
	call _com_issue_error

 Block154:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xD8]
	push 0
	push esi
	call ecx
	jmp Block158

 Block155:
	test esi,esi
	jne Block157

 Block156:
	push 0x80004003
	call _com_issue_error

 Block157:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xD8]
	push 1
	push esi
	call eax

 Block158:
	test eax,eax
	jge Block160

 Block159:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block160:
	push 1
	push 0
	mov ecx,ebp
	call CUser::SetSetItemBackground
	mov ecx,ebx
	call CAvatar::IsOnPlayingRotateAction
	push eax
	lea ecx,[ebp+0x14]
	call CChatBalloon::CheckTimeOut
	push 0x10
	mov ecx,ebp
	call CUser::GetAdditionalLayer
	mov edx,dword ptr [ebp]
	mov edi,eax
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,dword ptr [eax+0x13C4]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	call eax
	test al,al
	je Block225

 Block161:
	mov eax,dword ptr [ebp+0x19E4]
	test eax,eax
	je Block163

 Block162:
	add eax,0xFFFFFFF4
	jmp Block164

 Block163:
	xor eax,eax

 Block164:
	cmp dword ptr [eax+0x1A0],0
	je Block210

 Block165:
	add edi,0x14
	cmp dword ptr [edi],0
	sete al
	test al,al
	je Block189

 Block166:
	mov esi,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	mov ecx,ebp
	call CUser::GetDashingSkill
	push eax
	mov ecx,esi
	call CSkillInfo::GetSkill
	push 0
	push 0xFF
	push 3
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x64],esp
	push ecx
	mov ecx,ebx
	mov esi,eax
	call CAvatar::GetLayerUnderFace
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push edx
	mov ecx,ebp
	mov dword ptr [esp+0x100],0xE
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+4]
	mov ecx,ebp
	mov byte ptr [esp+0xFC],0xF
	call edx
	movzx eax,al
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,esi
	call SKILLENTRY::GetSpecialUOL
	mov ecx,dword ptr [ebp+0x1960]
	mov byte ptr [esp+0xFC],0x10
	test ecx,ecx
	jne Block168

 Block167:
	push 0x80004003
	call _com_issue_error

 Block168:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block170

 Block169:
	mov esi,dword ptr [eax]
	jmp Block171

 Block170:
	xor esi,esi

 Block171:
	call IWzGr2DLayer::Getflip
	push eax
	lea edx,[esp+0x34]
	push esi
	push edx
	mov byte ptr [esp+0x108],0x11
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block173

 Block172:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block173:
	mov ecx,dword ptr [esp+0x20]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0xE0],ebx
	test ecx,ecx
	je Block175

 Block174:
	call _xbstr_t::Data_t::Release

 Block175:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block177

 Block176:
	push eax
	call _com_issue_error

 Block177:
	lea edx,[esp+0x24]
	push edx
	mov dword ptr [esp+0xE4],0x12
	call esi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block179

 Block178:
	push eax
	call _com_issue_error

 Block179:
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xE0],0x13
	test ecx,ecx
	jne Block181

 Block180:
	push 0x80004003
	call _com_issue_error

 Block181:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xE0],0x12
	cmp word ptr [esp+0x24],si
	jne Block184

 Block182:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block185

 Block183:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block185

 Block184:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block185:
	mov dword ptr [esp+0xE0],ebx
	cmp word ptr [esp+0x34],si
	jne Block188

 Block186:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block202

 Block187:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block188:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block202

 Block189:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	jne Block191

 Block190:
	push 0x80004003
	call _com_issue_error

 Block191:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0xE0],0x14
	test ecx,ecx
	jne Block193

 Block192:
	push 0x80004003
	call _com_issue_error

 Block193:
	call IWzShape2D::Getx
	cmp eax,0xFF
	mov eax,dword ptr [esp+0x14]
	setne bl
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0xE0],esi
	test eax,eax
	je Block195

 Block194:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block195:
	test bl,bl
	je Block202

 Block196:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	jne Block198

 Block197:
	push 0x80004003
	call _com_issue_error

 Block198:
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0xE0],0x15
	test ecx,ecx
	jne Block200

 Block199:
	push 0x80004003
	call _com_issue_error

 Block200:
	push 0
	push 0xFF
	call IWzShape2D::Move
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xE0],esi
	test eax,eax
	je Block202

 Block201:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block202:
	mov esi,dword ptr [ebp+0x1960]
	test esi,esi
	jne Block204

 Block203:
	push 0x80004003
	call _com_issue_error

 Block204:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x20]
	push ecx
	push esi
	mov dword ptr [esp+0x28],0
	call edx
	test eax,eax
	jge Block206

 Block205:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block206:
	mov esi,dword ptr [edi]
	test esi,esi
	jne Block208

 Block207:
	push 0x80004003
	call _com_issue_error

 Block208:
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xD8]
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block248

 Block209:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex
	jmp Block248

 Block210:
	cmp dword ptr [edi+0x14],0
	sete al
	test al,al
	sete al
	test al,al
	je Block217

 Block211:
	mov ecx,dword ptr [edi+0x14]
	test ecx,ecx
	jne Block213

 Block212:
	push 0x80004003
	call _com_issue_error

 Block213:
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0xE0],0x16
	mov dword ptr [esp+0x1C],1
	test ecx,ecx
	jne Block215

 Block214:
	push 0x80004003
	call _com_issue_error

 Block215:
	call IWzShape2D::Getx
	test eax,eax
	je Block217

 Block216:
	mov bl,1
	jmp Block218

 Block217:
	xor bl,bl

 Block218:
	test byte ptr [esp+0x1C],1
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	je Block221

 Block219:
	mov eax,dword ptr [esp+0x14]
	and dword ptr [esp+0x1C],0xFFFFFFFE
	test eax,eax
	je Block221

 Block220:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block221:
	test bl,bl
	je Block248

 Block222:
	mov edi,dword ptr [edi+0x14]
	test edi,edi
	jne Block224

 Block223:
	push 0x80004003
	call _com_issue_error

 Block224:
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getalpha
	mov dword ptr [esp+0xE0],0x17
	jmp Block242

 Block225:
	cmp dword ptr [edi+0x14],0
	sete al
	test al,al
	sete al
	test al,al
	je Block234

 Block226:
	mov ecx,dword ptr [edi+0x14]
	test ecx,ecx
	jne Block228

 Block227:
	push 0x80004003
	call _com_issue_error

 Block228:
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0xE0],0x18
	mov dword ptr [esp+0x1C],2
	test esi,esi
	jne Block230

 Block229:
	push 0x80004003
	call _com_issue_error

 Block230:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x20]
	push edx
	push esi
	mov dword ptr [esp+0x28],0
	call eax
	test eax,eax
	jge Block232

 Block231:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block232:
	cmp dword ptr [esp+0x20],0
	je Block234

 Block233:
	mov bl,1
	jmp Block235

 Block234:
	xor bl,bl

 Block235:
	test byte ptr [esp+0x1C],2
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	je Block238

 Block236:
	mov eax,dword ptr [esp+0x14]
	and dword ptr [esp+0x1C],0xFFFFFFFD
	test eax,eax
	je Block238

 Block237:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block238:
	test bl,bl
	je Block248

 Block239:
	mov edi,dword ptr [edi+0x14]
	test edi,edi
	jne Block241

 Block240:
	push 0x80004003
	call _com_issue_error

 Block241:
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getalpha
	mov dword ptr [esp+0xE0],0x19

 Block242:
	mov esi,dword ptr [eax]
	test esi,esi
	jne Block244

 Block243:
	push 0x80004003
	call _com_issue_error

 Block244:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x40]
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block246

 Block245:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block246:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	test eax,eax
	je Block248

 Block247:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block248:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+8]
	mov ecx,ebp
	call edx
	mov ecx,dword ptr [eax+0x13BC]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+4]
	call edx
	test al,al
	je Block300

 Block249:
	mov eax,dword ptr [ebp+0x3A10]
	test eax,eax
	je Block251

 Block250:
	mov ecx,dword ptr [esp+0x48]
	sub ecx,eax
	cmp ecx,0x546
	jb Block300

 Block251:
	push 0xF
	mov ecx,ebp
	call CUser::GetAdditionalLayer
	mov edi,eax
	cmp dword ptr [edi+0x14],0
	sete al
	test al,al
	je Block284

 Block252:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0x40]
	call eax
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	dec ecx
	neg ecx
	sbb ecx,ecx
	and ecx,0xFF67908D
	add ecx,0xE66864
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	call CSkillInfo::GetSkill
	mov edx,dword ptr [ebp]
	mov esi,eax
	mov eax,dword ptr [edx+4]
	mov ecx,ebp
	call eax
	movzx ecx,al
	push ecx
	lea edx,[esp+0x18]
	push edx
	mov ecx,esi
	call SKILLENTRY::GetEffectUOL
	mov ebx,0x1A
	push offset _S_1__2
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0xE4],ebx
	call _xbstr_t::_ctor_0
	push 0
	push 0xFF
	push 3
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	push eax
	lea ecx,[ebp+0x88]
	mov byte ptr [esp+0xF4],0x1B
	call CAvatar::GetLayerUnderFace
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x50],esp
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x100],0x1C
	call CUser::GetVecCtrl_0
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x104],0x1D
	call Ztl_bstr_t::op_add_0
	mov ecx,dword ptr [ebp+0x1960]
	mov byte ptr [esp+0xFC],0x1E
	test ecx,ecx
	jne Block254

 Block253:
	push 0x80004003
	call _com_issue_error

 Block254:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block256

 Block255:
	mov esi,dword ptr [eax]
	jmp Block257

 Block256:
	xor esi,esi

 Block257:
	call IWzGr2DLayer::Getflip
	push eax
	lea ecx,[esp+0x38]
	push esi
	push ecx
	mov byte ptr [esp+0x108],0x1F
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x14]
	add esp,0x28
	cmp esi,eax
	je Block262

 Block258:
	mov dword ptr [edi+0x14],eax
	test eax,eax
	je Block260

 Block259:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block260:
	test esi,esi
	je Block262

 Block261:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block262:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block264

 Block263:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block264:
	mov ecx,dword ptr [esp+0x20]
	test ecx,ecx
	je Block266

 Block265:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x20],0

 Block266:
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xE0],bl
	test ecx,ecx
	je Block268

 Block267:
	call _xbstr_t::Data_t::Release

 Block268:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block270

 Block269:
	push eax
	call _com_issue_error

 Block270:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0xE4],0x20
	call esi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block272

 Block271:
	push eax
	call _com_issue_error

 Block272:
	mov ecx,dword ptr [edi+0x14]
	mov byte ptr [esp+0xE0],0x21
	test ecx,ecx
	jne Block274

 Block273:
	push 0x80004003
	call _com_issue_error

 Block274:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xE0],0x20
	cmp word ptr [esp+0x24],si
	jne Block277

 Block275:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block278

 Block276:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block278

 Block277:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block278:
	mov byte ptr [esp+0xE0],bl
	cmp word ptr [esp+0x34],si
	jne Block281

 Block279:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block282

 Block280:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block282

 Block281:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block282:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	test ecx,ecx
	je Block299

 Block283:
	call _xbstr_t::Data_t::Release
	jmp Block299

 Block284:
	mov ecx,dword ptr [edi+0x14]
	test ecx,ecx
	jne Block286

 Block285:
	push 0x80004003
	call _com_issue_error

 Block286:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0xE0],0x22
	test esi,esi
	jne Block288

 Block287:
	push 0x80004003
	call _com_issue_error

 Block288:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block290

 Block289:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block290:
	cmp dword ptr [esp+0x14],0xFF
	mov eax,dword ptr [esp+0x18]
	setne bl
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0xE0],esi
	test eax,eax
	je Block292

 Block291:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block292:
	test bl,bl
	je Block299

 Block293:
	mov ecx,dword ptr [edi+0x14]
	test ecx,ecx
	jne Block295

 Block294:
	push 0x80004003
	call _com_issue_error

 Block295:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0xE0],0x23
	test ecx,ecx
	jne Block297

 Block296:
	push 0x80004003
	call _com_issue_error

 Block297:
	push 0
	push 0xFF
	call IWzShape2D::Move
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xE0],esi
	test eax,eax
	je Block299

 Block298:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block299:
	mov dword ptr [ebp+0x3A10],0

 Block300:
	mov edi,dword ptr [esp+0x50]
	push 0x11
	mov ecx,edi
	call CUser::GetAdditionalLayer
	mov ebp,eax
	lea eax,[esp+0x18]
	push eax
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	xor ebx,ebx
	cmp eax,ebx
	je Block302

 Block301:
	lea esi,[eax-0xC]
	jmp Block303

 Block302:
	xor esi,esi

 Block303:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block305

 Block304:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block305:
	cmp dword ptr [esi+0x214],ebx
	je Block363

 Block306:
	mov eax,dword ptr [esi+0x78]
	push eax
	lea ecx,[esi+0x68]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	fcomp qword ptr [__real_0000000000000000]
	add esp,8
	fnstsw ax
	test ah,0x41
	jne Block362

 Block307:
	cmp dword ptr [ebp+0x14],ebx
	sete al
	test al,al
	jne Block316

 Block308:
	mov ecx,dword ptr [ebp+0x14]
	cmp ecx,ebx
	jne Block310

 Block309:
	push 0x80004003
	call _com_issue_error

 Block310:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	or dword ptr [esp+0x1C],4
	mov dword ptr [esp+0xE0],0x24
	cmp esi,ebx
	jne Block312

 Block311:
	push 0x80004003
	call _com_issue_error

 Block312:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block314

 Block313:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block314:
	cmp dword ptr [esp+0x14],0xFF
	jne Block316

 Block315:
	xor bl,bl
	jmp Block317

 Block316:
	mov bl,1

 Block317:
	test byte ptr [esp+0x1C],4
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	je Block320

 Block318:
	mov eax,dword ptr [esp+0x18]
	and dword ptr [esp+0x1C],0xFFFFFFFB
	test eax,eax
	je Block320

 Block319:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block320:
	test bl,bl
	je Block354

 Block321:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x4F5C6D
	call CSkillInfo::GetSkill
	mov ebx,dword ptr [esp+0x50]
	push 0
	push 0xFF
	push 3
	push ecx
	mov esi,eax
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push eax
	lea ecx,[ebx+0x88]
	call CAvatar::GetLayerUnderFace
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x70],esp
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0x100],0x25
	call CUser::GetVecCtrl_0
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	mov ecx,ebx
	mov byte ptr [esp+0xFC],0x26
	call eax
	movzx ecx,al
	push ecx
	lea edx,[esp+0x40]
	push edx
	mov ecx,esi
	call SKILLENTRY::GetSpecialUOL
	mov edi,eax
	mov esi,dword ptr [ebx+0x1960]
	mov byte ptr [esp+0xFC],0x27
	test esi,esi
	jne Block323

 Block322:
	push 0x80004003
	call _com_issue_error

 Block323:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x30]
	push ecx
	push esi
	mov dword ptr [esp+0x38],0
	call edx
	test eax,eax
	jge Block325

 Block324:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block325:
	mov edi,dword ptr [edi]
	test edi,edi
	je Block327

 Block326:
	mov eax,dword ptr [edi]
	jmp Block328

 Block327:
	xor eax,eax

 Block328:
	mov ecx,dword ptr [esp+0x30]
	push ecx
	push eax
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x108],0x28
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x14]
	add esp,0x28
	cmp esi,eax
	je Block333

 Block329:
	mov dword ptr [ebp+0x14],eax
	test eax,eax
	je Block331

 Block330:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block331:
	test esi,esi
	je Block333

 Block332:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block333:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block335

 Block334:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block335:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	test ecx,ecx
	je Block337

 Block336:
	call _xbstr_t::Data_t::Release

 Block337:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block339

 Block338:
	push eax
	call _com_issue_error

 Block339:
	lea eax,[esp+0x24]
	mov ebx,0x29
	push eax
	mov dword ptr [esp+0xE4],ebx
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block341

 Block340:
	push eax
	call _com_issue_error

 Block341:
	mov ecx,dword ptr [ebp+0x14]
	mov byte ptr [esp+0xE0],0x2A
	test ecx,ecx
	jne Block343

 Block342:
	push 0x80004003
	call _com_issue_error

 Block343:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xE0],bl
	cmp word ptr [esp+0x24],si
	jne Block346

 Block344:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block347

 Block345:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block347

 Block346:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block347:
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	cmp word ptr [esp+0x34],si
	jne Block350

 Block348:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block351

 Block349:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block351

 Block350:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block351:
	mov esi,dword ptr [esp+0x50]
	mov eax,dword ptr [esi+0x3A14]
	test eax,eax
	je Block353

 Block352:
	push eax
	call stop_skill_sound
	add esp,4

 Block353:
	push 0
	push 0x2F
	push 0x4F5C6D
	call play_skill_sound
	add esp,0xC
	mov dword ptr [esi+0x3A14],eax
	mov edi,esi

 Block354:
	mov esi,dword ptr [edi+0x1960]
	test esi,esi
	jne Block356

 Block355:
	push 0x80004003
	call _com_issue_error

 Block356:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xD4]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block358

 Block357:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block358:
	mov esi,dword ptr [ebp+0x14]
	test esi,esi
	jne Block360

 Block359:
	push 0x80004003
	call _com_issue_error

 Block360:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xD8]
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block423

 Block361:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex
	jmp Block423

 Block362:
	cmp dword ptr [esi+0x214],ebx
	jne Block399

 Block363:
	cmp dword ptr [esi+0x218],ebx
	je Block399

 Block364:
	mov eax,dword ptr [edi+0x19E4]
	cmp eax,ebx
	je Block366

 Block365:
	add eax,0xFFFFFFF4
	jmp Block367

 Block366:
	xor eax,eax

 Block367:
	cmp dword ptr [eax+0x1A0],ebx
	je Block399

 Block368:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x4F5C6D
	call CSkillInfo::GetSkill
	push ebx
	push 0xFF
	push 3
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push edx
	lea ecx,[edi+0x88]
	mov esi,eax
	call CAvatar::GetLayerUnderFace
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x100],0x2B
	call CUser::GetVecCtrl_0
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,esi
	call SKILLENTRY::GetFinishUOL
	mov ecx,dword ptr [edi+0x1960]
	mov byte ptr [esp+0xFC],0x2D
	cmp ecx,ebx
	jne Block370

 Block369:
	push 0x80004003
	call _com_issue_error

 Block370:
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block372

 Block371:
	mov esi,dword ptr [eax]
	jmp Block373

 Block372:
	xor esi,esi

 Block373:
	call IWzGr2DLayer::Getflip
	push eax
	lea edx,[esp+0x38]
	push esi
	push edx
	mov byte ptr [esp+0x108],0x2E
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	lea esi,[ebp+0x14]
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block375

 Block374:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block375:
	mov ecx,dword ptr [esp+0x14]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0xE0],edi
	cmp ecx,ebx
	je Block377

 Block376:
	call _xbstr_t::Data_t::Release

 Block377:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call ebp
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block379

 Block378:
	push eax
	call _com_issue_error

 Block379:
	lea edx,[esp+0x24]
	mov ebx,0x2F
	push edx
	mov dword ptr [esp+0xE4],ebx
	call ebp
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block381

 Block380:
	push eax
	call _com_issue_error

 Block381:
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0xE0],0x30
	test ecx,ecx
	jne Block383

 Block382:
	push 0x80004003
	call _com_issue_error

 Block383:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0xE0],bl
	mov ebx,8
	cmp word ptr [esp+0x24],bx
	jne Block386

 Block384:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block387

 Block385:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block387

 Block386:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block387:
	mov dword ptr [esp+0xE0],edi
	cmp word ptr [esp+0x34],bx
	jne Block390

 Block388:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block391

 Block389:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block391

 Block390:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block391:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	jne Block393

 Block392:
	push 0x80004003
	call _com_issue_error

 Block393:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0xE0],0x31
	test esi,esi
	jne Block395

 Block394:
	push 0x80004003
	call _com_issue_error

 Block395:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x40]
	push 0
	push 0xFE
	push esi
	call ecx
	test eax,eax
	jge Block397

 Block396:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block397:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xE0],edi
	test eax,eax
	je Block421

 Block398:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block421

 Block399:
	cmp dword ptr [ebp+0x14],ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block408

 Block400:
	mov ecx,dword ptr [ebp+0x14]
	cmp ecx,ebx
	jne Block402

 Block401:
	push 0x80004003
	call _com_issue_error

 Block402:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	or dword ptr [esp+0x1C],8
	mov dword ptr [esp+0xE0],0x32
	cmp esi,ebx
	jne Block404

 Block403:
	push 0x80004003
	call _com_issue_error

 Block404:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block406

 Block405:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block406:
	cmp dword ptr [esp+0x14],0xFF
	jne Block408

 Block407:
	mov bl,1
	jmp Block409

 Block408:
	xor bl,bl

 Block409:
	or edi,0xFFFFFFFF
	test byte ptr [esp+0x1C],8
	mov dword ptr [esp+0xE0],edi
	je Block412

 Block410:
	mov eax,dword ptr [esp+0x18]
	and dword ptr [esp+0x1C],0xFFFFFFF7
	test eax,eax
	je Block412

 Block411:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block412:
	test bl,bl
	je Block421

 Block413:
	mov ecx,dword ptr [ebp+0x14]
	test ecx,ecx
	jne Block415

 Block414:
	push 0x80004003
	call _com_issue_error

 Block415:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0xE0],0x33
	test esi,esi
	jne Block417

 Block416:
	push 0x80004003
	call _com_issue_error

 Block417:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x40]
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block419

 Block418:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block419:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xE0],edi
	test eax,eax
	je Block421

 Block420:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block421:
	mov edi,dword ptr [esp+0x50]
	mov eax,dword ptr [edi+0x3A14]
	test eax,eax
	je Block423

 Block422:
	push eax
	call stop_skill_sound
	add esp,4
	mov dword ptr [edi+0x3A14],0

 Block423:
	lea ecx,[edi+0x88]
	call CAvatar::Update
	mov esi,dword ptr [edi+0x195C]
	test esi,esi
	jne Block425

 Block424:
	push 0x80004003
	call _com_issue_error

 Block425:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block427

 Block426:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block427:
	mov eax,dword ptr [esp+0x14]
	push eax
	lea ecx,[edi+0x3A34]
	call CItemEffectManager::UpdateFlip
	xor esi,esi

 Block428:
	mov ecx,dword ptr [edi+0x2E44]
	mov ecx,dword ptr [ecx+esi+4]
	test ecx,ecx
	je Block430

 Block429:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	call eax
	add esi,8
	cmp esi,0x18
	jl Block428

 Block430:
	mov eax,dword ptr [edi+0x2EF0]
	mov dword ptr [esp+0x4C],eax
	test eax,eax
	je Block455

 Block431:
	mov ebp,0x34

 Block432:
	lea ecx,[esp+0x4C]
	push ecx
	mov ebx,eax
	call ZList<ZRef<CGrenade>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x38],esi
	test esi,esi
	je Block434

 Block433:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block434:
	mov eax,dword ptr [esi+0x44]
	push eax
	mov dword ptr [esp+0xE4],ebp
	xor edi,edi
	call is_mob_body_bomb
	add esp,4
	test eax,eax
	je Block440

 Block435:
	mov eax,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	test eax,eax
	je Block440

 Block436:
	mov edi,eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,esi
	call edx
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	push ecx
	push edx
	mov ecx,edi
	call CMobPool::FindMob
	mov edi,eax
	test edi,edi
	je Block440

 Block437:
	mov eax,dword ptr [edi+0x174]
	cmp dword ptr [eax+0x208],0
	jne Block443

 Block438:
	cmp dword ptr [edi+0x310],0
	jne Block443

 Block439:
	mov ecx,edi
	call CMob::IsMobOurTeam
	test eax,eax
	jne Block443

 Block440:
	mov ecx,edi
	call CMob::IsSamePhaseWithMe
	test eax,eax
	je Block443

 Block441:
	test edi,edi
	je Block443

 Block442:
	mov ecx,dword ptr [edi+0x170]
	push ecx
	add edi,0x168
	push edi
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	jmp Block444

 Block443:
	xor eax,eax

 Block444:
	push eax
	mov ecx,esi
	call CGrenade::Update
	test eax,eax
	je Block449

 Block445:
	add esi,4
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block448

 Block446:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block448

 Block447:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block448:
	mov ecx,dword ptr [esp+0x50]
	xor esi,esi
	push ebx
	add ecx,0x2EE4
	mov dword ptr [esp+0x3C],esi
	call ZList<ZRef<CGrenade>>::RemoveAt

 Block449:
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	test esi,esi
	je Block454

 Block450:
	add esi,4
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block453

 Block451:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block453

 Block452:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block453:
	mov dword ptr [esp+0x38],0

 Block454:
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	jne Block432

 Block455:
	mov eax,3
	xor ebx,ebx
	mov word ptr [esp+0x24],ax
	mov dword ptr [esp+0x2C],ebx
	mov ebp,dword ptr [esp+0x50]
	mov ecx,dword ptr [ebp+0x2F10]
	or dword ptr [esp+0x1C],0x10
	mov edi,0x35
	mov dword ptr [esp+0xE0],edi
	cmp ecx,ebx
	jne Block457

 Block456:
	push 0x80004003
	call _com_issue_error

 Block457:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::Getcanvas
	or dword ptr [esp+0x1C],0x20
	cmp dword ptr [eax],ebx
	mov dword ptr [esp+0xE0],0x36
	sete al
	test al,al
	sete al
	test al,al
	je Block464

 Block458:
	mov esi,dword ptr [ebp+0x2F10]
	cmp esi,ebx
	jne Block460

 Block459:
	push 0x80004003
	call _com_issue_error

 Block460:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x114]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block462

 Block461:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block462:
	cmp dword ptr [esp+0x14],ebx
	jne Block464

 Block463:
	mov bl,1
	jmp Block465

 Block464:
	xor bl,bl

 Block465:
	test byte ptr [esp+0x1C],0x20
	mov dword ptr [esp+0xE0],edi
	je Block468

 Block466:
	mov eax,dword ptr [esp+0x18]
	and dword ptr [esp+0x1C],0xFFFFFFDF
	test eax,eax
	je Block468

 Block467:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block468:
	or esi,0xFFFFFFFF
	test byte ptr [esp+0x1C],0x10
	mov dword ptr [esp+0xE0],esi
	je Block473

 Block469:
	and dword ptr [esp+0x1C],0xFFFFFFEF
	cmp word ptr [esp+0x24],8
	jne Block472

 Block470:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block473

 Block471:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block473

 Block472:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block473:
	test bl,bl
	je Block482

 Block474:
	mov edx,3
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],0xFFFFFFFE
	mov ecx,dword ptr [ebp+0x2F10]
	mov dword ptr [esp+0xE0],0x37
	test ecx,ecx
	jne Block476

 Block475:
	push 0x80004003
	call _com_issue_error

 Block476:
	lea eax,[esp+0x24]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block478

 Block477:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block478:
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0xE0],esi
	jne Block481

 Block479:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block482

 Block480:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block482

 Block481:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block482:
	mov eax,dword ptr [ebp+0x39FC]
	test eax,eax
	je Block560

 Block483:
	mov edx,dword ptr [esp+0x48]
	sub edx,dword ptr [eax]
	js Block560

 Block484:
	cmp dword ptr [ebp+0x638],0
	jne Block560

 Block485:
	mov eax,dword ptr [eax+0x10]
	test eax,eax
	je Block496

 Block486:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block496

 Block487:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block496

 Block488:
	cmp dword ptr [ebp+0x5E8],0
	jne Block496

 Block489:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x10]
	mov ecx,ebp
	call edx
	test eax,eax
	je Block491

 Block490:
	mov eax,0x64
	jmp Block492

 Block491:
	mov eax,dword ptr [ebp+4]
	mov edx,dword ptr [eax+0x10]
	lea esi,[ebp+4]
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	call edx
	mov edi,eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [edi]
	push eax
	push ecx
	call get_sound_volume_by_pos
	add esp,8

 Block492:
	mov ecx,dword ptr [ebp+0x39FC]
	mov ecx,dword ptr [ecx+0x10]
	test ecx,ecx
	je Block494

 Block493:
	mov ecx,dword ptr [ecx]
	jmp Block495

 Block494:
	xor ecx,ecx

 Block495:
	push eax
	push 0x27
	push ecx
	call play_weapon_sound
	add esp,0xC

 Block496:
	mov eax,dword ptr [ebp+0x39FC]
	mov eax,dword ptr [eax+0xC]
	test eax,eax
	je Block555

 Block497:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block555

 Block498:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block555

 Block499:
	mov eax,dword ptr [ebp+0x2F10]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block501

 Block500:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block501:
	mov eax,dword ptr [ebp+0x39FC]
	mov ecx,dword ptr [eax+8]
	mov eax,dword ptr [eax+0xC]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block503

 Block502:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block503:
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	call CActionMan::CreateAfterimageLayer
	mov edx,3
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],0
	mov ecx,dword ptr [ebp+0x2F10]
	mov dword ptr [esp+0xE0],0x38
	test ecx,ecx
	jne Block505

 Block504:
	push 0x80004003
	call _com_issue_error

 Block505:
	lea eax,[esp+0x24]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xE0],0x3A
	jne Block508

 Block506:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block509

 Block507:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block509

 Block508:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block509:
	mov edi,dword ptr [esp+0x18]
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block553

 Block510:
	mov esi,dword ptr [ebp+0x2F10]
	mov eax,dword ptr [ebp+0x39FC]
	test esi,esi
	jne Block512

 Block511:
	push 0x80004003
	call _com_issue_error

 Block512:
	mov ecx,dword ptr [esi]
	xor edx,edx
	cmp dword ptr [eax+4],edx
	sete dl
	mov eax,edx
	mov edx,dword ptr [ecx+0xD8]
	push eax
	push esi
	call edx
	test eax,eax
	jge Block514

 Block513:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block514:
	mov eax,dword ptr [ebp+0x39FC]
	cmp dword ptr [eax+8],0x74
	jne Block525

 Block515:
	lea eax,[esp+0x14]
	push eax
	lea ecx,[ebp+0x88]
	call CAvatar::GetSuitableMuzzleOrigin
	mov eax,dword ptr [eax]
	mov bl,0x3B
	mov ecx,0xD
	mov byte ptr [esp+0xE0],bl
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],eax
	test eax,eax
	je Block517

 Block516:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block517:
	mov ecx,dword ptr [ebp+0x2F10]
	mov byte ptr [esp+0xE0],0x3C
	test ecx,ecx
	jne Block519

 Block518:
	push 0x80004003
	call _com_issue_error

 Block519:
	lea edx,[esp+0x34]
	push edx
	call IWzVector2D::Putorigin
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0xE0],bl
	jne Block522

 Block520:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block523

 Block521:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block523

 Block522:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block523:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xE0],0x3A
	test eax,eax
	je Block535

 Block524:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block535

 Block525:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov bl,0x3D
	mov edx,0xD
	mov byte ptr [esp+0xE0],bl
	mov word ptr [esp+0x34],dx
	mov dword ptr [esp+0x3C],eax
	test eax,eax
	je Block527

 Block526:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block527:
	mov ecx,dword ptr [ebp+0x2F10]
	mov byte ptr [esp+0xE0],0x3E
	test ecx,ecx
	jne Block529

 Block528:
	push 0x80004003
	call _com_issue_error

 Block529:
	lea eax,[esp+0x34]
	push eax
	call IWzVector2D::Putorigin
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0xE0],bl
	jne Block532

 Block530:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block533

 Block531:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block533

 Block532:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block533:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xE0],0x3A
	test eax,eax
	je Block535

 Block534:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block535:
	lea ecx,[ebp+0x88]
	call CAvatar::IsRidingWildHunterJaguar
	test eax,eax
	je Block539

 Block536:
	lea ecx,[ebp+0x614]
	call TSecType<long>::GetData
	mov ecx,dword ptr [ebp+0x2F10]
	test ecx,ecx
	jne Block538

 Block537:
	push 0x80004003
	call _com_issue_error

 Block538:
	push eax
	push 0
	call IWzShape2D::Offset

 Block539:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x54]
	push eax
	call esi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block541

 Block540:
	push eax
	call _com_issue_error

 Block541:
	lea edx,[esp+0x34]
	mov bl,0x3F
	push edx
	mov byte ptr [esp+0xE4],bl
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block543

 Block542:
	push eax
	call _com_issue_error

 Block543:
	mov ecx,dword ptr [ebp+0x2F10]
	mov byte ptr [esp+0xE0],0x40
	test ecx,ecx
	jne Block545

 Block544:
	push 0x80004003
	call _com_issue_error

 Block545:
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x38]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xE0],bl
	cmp word ptr [esp+0x34],si
	jne Block548

 Block546:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block549

 Block547:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block549

 Block548:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block549:
	mov byte ptr [esp+0xE0],0x3A
	cmp word ptr [esp+0x54],si
	jne Block552

 Block550:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block553

 Block551:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block553

 Block552:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block553:
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	test edi,edi
	je Block555

 Block554:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block555:
	mov esi,dword ptr [ebp+0x39FC]
	test esi,esi
	je Block560

 Block556:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block559

 Block557:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block559

 Block558:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block559:
	mov dword ptr [ebp+0x39FC],0

 Block560:
	mov eax,dword ptr [ebp+0x39BC]
	test eax,eax
	jge Block570

 Block561:
	push 3
	mov ecx,ebp
	call CUser::GetAdditionalLayer
	cmp dword ptr [eax+0x14],0
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block590

 Block562:
	mov esi,dword ptr [eax+0x14]
	test esi,esi
	jne Block564

 Block563:
	push 0x80004003
	call _com_issue_error

 Block564:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x114]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block566

 Block565:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block566:
	cmp dword ptr [esp+0x14],0
	jne Block590

 Block567:
	mov eax,dword ptr [ebp+0x39BC]
	cmp eax,0xFFFFFFFF
	jne Block569

 Block568:
	xor eax,eax
	push eax
	mov ecx,ebp
	call CUser::SetActiveEffectItem
	jmp Block590

 Block569:
	neg eax
	push eax
	mov ecx,ebp
	call CUser::SetActiveEffectItem
	jmp Block590

 Block570:
	jle Block590

 Block571:
	push 3
	mov ecx,ebp
	call CUser::GetAdditionalLayer
	push 0xB
	mov esi,eax
	call CUser::GetAdditionalLayer
	mov edi,eax
	mov eax,dword ptr [ebp+0x2ED4]
	test eax,eax
	je Block573

 Block572:
	mov ecx,dword ptr [esp+0x48]
	sub ecx,eax
	js Block582

 Block573:
	mov edx,dword ptr [esp+0x48]
	sub edx,eax
	cmp edx,0xC8
	jle Block575

 Block574:
	mov dword ptr [ebp+0x2ED4],0

 Block575:
	mov ecx,ebp
	call CUser::IsDoingHashing
	test eax,eax
	jne Block582

 Block576:
	cmp dword ptr [esi+0x14],eax
	sete al
	test al,al
	je Block579

 Block577:
	cmp dword ptr [ebp+0x39C0],0
	jne Block579

 Block578:
	mov eax,dword ptr [ebp+0x39BC]
	push eax
	mov ecx,ebp
	call CUser::ShowEffectItem

 Block579:
	cmp dword ptr [edi+0x14],0
	sete al
	test al,al
	je Block586

 Block580:
	cmp dword ptr [ebp+0x39C0],0
	je Block586

 Block581:
	mov ecx,dword ptr [ebp+0x39BC]
	push ecx
	mov ecx,ebp
	call CUser::ShowFollowEffectItem
	jmp Block586

 Block582:
	cmp dword ptr [esi+0x14],0
	sete al
	test al,al
	sete al
	test al,al
	je Block584

 Block583:
	push 3
	mov ecx,ebp
	call CUser::RemoveAdditionalLayer

 Block584:
	cmp dword ptr [edi+0x14],0
	sete al
	test al,al
	sete al
	test al,al
	je Block586

 Block585:
	push 0xB
	mov ecx,ebp
	call CUser::RemoveAdditionalLayer

 Block586:
	mov eax,dword ptr [ebp+0x39C8]
	test eax,eax
	je Block590

 Block587:
	cmp dword ptr [eax-4],0
	je Block590

 Block588:
	lea esi,[ebp+0x88]
	push 0
	mov ecx,esi
	call CAvatar::GetCurrentAction
	cmp dword ptr [ebp+0x39CC],eax
	je Block590

 Block589:
	push 0
	mov ecx,esi
	call CAvatar::GetCurrentAction
	mov edx,dword ptr [ebp+0x39BC]
	push edx
	mov ecx,ebp
	mov dword ptr [ebp+0x39CC],eax
	call CUser::ShowEffectItem

 Block590:
	cmp dword ptr [ebp+0x36D0],0
	sete al
	test al,al
	sete al
	test al,al
	je Block614

 Block591:
	mov edi,dword ptr [esp+0x34]
	mov ebx,0x36
	lea ebp,[ebx+0xD]
	lea ebx,[ebx]

 Block592:
	mov ecx,dword ptr [esp+0x50]
	lea eax,[ebx+ebx*8]
	cmp dword ptr [ecx+eax*4+0x2F38],0
	lea esi,[ecx+eax*4+0x2F24]
	sete al
	test al,al
	jne Block612

 Block593:
	cmp ebx,0x36
	jne Block609

 Block594:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push edx
	call edi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block78

 Block595:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x54]
	add ecx,0x88
	mov dword ptr [esp+0xE4],0x41
	call CAvatar::GetFaceOrigin
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xE0],0x42
	test ecx,ecx
	je Block57

 Block596:
	lea edx,[esp+0x24]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0x34]
	push eax
	call IWzVector2D::_GetSnapshot
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xE0],0x41
	test eax,eax
	je Block598

 Block597:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block598:
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	jne Block601

 Block599:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block602

 Block600:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block602

 Block601:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block602:
	lea edx,[esp+0x34]
	push edx
	call edi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block78

 Block603:
	mov ecx,dword ptr [esi+0x14]
	mov dword ptr [esp+0xE0],ebp
	test ecx,ecx
	je Block57

 Block604:
	lea edx,[esp+0x34]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0x40]
	push eax
	call IWzVector2D::_GetSnapshot
	cmp word ptr [esp+0x34],8
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	jne Block607

 Block605:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block608

 Block606:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block608

 Block607:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block608:
	mov ecx,dword ptr [esp+0x14]
	xor eax,eax
	cmp ecx,dword ptr [esp+0x20]
	setge al
	mov edi,eax

 Block609:
	mov esi,dword ptr [esi+0x14]
	test esi,esi
	je Block57

 Block610:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xD8]
	push edi
	push esi
	call eax
	test eax,eax
	jge Block612

 Block611:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block612:
	inc ebx
	cmp ebx,0x4B
	jl Block592

 Block613:
	mov ebp,dword ptr [esp+0x50]

 Block614:
	lea ecx,[ebp+0x88]
	call CAvatar::IsOnPlayingRotateAction
	test eax,eax
	je Block617

 Block615:
	mov eax,dword ptr [ebp+0x2E8C]
	test eax,eax
	je Block617

 Block616:
	mov dword ptr [eax+4],1

 Block617:
	lea ecx,[ebp+0x3A18]
	call CKeywordEffectManager::Update
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0x10]
	mov ecx,ebp
	call eax
	test eax,eax
	jne Block1069

 Block618:
	mov eax,dword ptr [ebp+0x2E70]
	mov dword ptr [esp+0x4C],eax
	test eax,eax
	je Block629

 Block619:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov edi,0x44
	jmp Block621

 Block621:
	lea ecx,[esp+0x4C]
	push ecx
	call ZList<ZRef<CSummoned>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x38],esi
	test esi,esi
	je Block623

 Block622:
	lea edx,[esi+0xC]
	push edx
	call ebx

 Block623:
	mov dword ptr [esp+0xE0],edi
	test esi,esi
	jne Block625

 Block624:
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	jmp Block628

 Block625:
	cmp dword ptr [esi+0xD4],3
	jne Block627

 Block626:
	mov eax,dword ptr [ebp+0x2E14]
	mov dword ptr [esi+0xE8],eax

 Block627:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	mov ecx,esi
	call edx
	push 0
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0xE4],0xFFFFFFFF
	call ZRef<CSummoned>::_ReleaseRaw
	mov dword ptr [esp+0x38],0

 Block628:
	cmp dword ptr [esp+0x4C],0
	jne Block621

 Block629:
	lea esi,[ebp+0x2E20]
	mov ecx,esi
	call TSecType<long>::GetData
	test eax,eax
	jle Block632

 Block630:
	mov ecx,esi
	call TSecType<long>::GetData
	mov edi,eax
	sub edi,0x1E
	push edi
	mov ecx,esi
	call TSecType<long>::SetData
	test edi,edi
	jge Block632

 Block631:
	push 0
	mov ecx,esi
	call TSecType<long>::SetData

 Block632:
	mov ecx,esi
	call TSecType<long>::GetData
	test eax,eax
	jge Block635

 Block633:
	mov ecx,esi
	call TSecType<long>::GetData
	mov edi,eax
	add edi,0x1E
	push edi
	mov ecx,esi
	call TSecType<long>::SetData
	test edi,edi
	jle Block635

 Block634:
	push 0
	mov ecx,esi
	call TSecType<long>::SetData

 Block635:
	mov eax,dword ptr [ebp+0x640]
	and eax,0xFFFFFFFE
	or edi,0xFFFFFFFF
	cmp eax,0x12
	je Block639

 Block636:
	mov ecx,esi
	call TSecType<long>::GetData
	test eax,eax
	jle Block639

 Block637:
	inc dword ptr [ebp+0x2F18]
	mov eax,dword ptr [ebp+0x2F18]
	and al,3
	cmp al,2
	jae Block639

 Block638:
	mov edi,0xFF808080

 Block639:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	mov ecx,ebp
	call eax
	mov ecx,dword ptr [eax+0x224]
	push ecx
	add eax,0x21C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block643

 Block640:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	mov ecx,ebp
	call eax
	mov ecx,dword ptr [eax+0xBC4]
	push ecx
	add eax,0xBBC
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block643

 Block641:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	mov ecx,ebp
	call eax
	mov ecx,dword ptr [eax+0x120C]
	push ecx
	add eax,0x1204
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block643

 Block642:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0x18]
	mov ecx,ebp
	call eax
	test eax,eax
	je Block644

 Block643:
	mov edi,0x80FFFFFF

 Block644:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0x1C]
	mov ecx,ebp
	call eax
	test eax,eax
	je Block646

 Block645:
	xor edi,edi

 Block646:
	mov eax,dword ptr [ebp+0x2ED4]
	xor ebx,ebx
	cmp eax,ebx
	je Block648

 Block647:
	mov ecx,dword ptr [esp+0x48]
	sub ecx,eax
	js Block650

 Block648:
	mov edx,dword ptr [esp+0x48]
	sub edx,eax
	cmp edx,0xC8
	jle Block651

 Block649:
	mov dword ptr [ebp+0x2ED4],ebx
	jmp Block651

 Block650:
	xor edi,edi

 Block651:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+8]
	mov ecx,ebp
	call edx
	mov ecx,dword ptr [eax+0xE34]
	push ecx
	add eax,0xE2C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block653

 Block652:
	mov edi,0xFF4682B4

 Block653:
	mov esi,dword ptr [ebp+0x195C]
	cmp esi,ebx
	jne Block655

 Block654:
	push 0x80004003
	call _com_issue_error

 Block655:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push edi
	push esi
	call eax
	cmp eax,ebx
	jge Block657

 Block656:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block657:
	mov esi,dword ptr [ebp+0x1960]
	cmp esi,ebx
	jne Block659

 Block658:
	push 0x80004003
	call _com_issue_error

 Block659:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push edi
	push esi
	call edx
	cmp eax,ebx
	jge Block661

 Block660:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block661:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+8]
	mov ecx,ebp
	call edx
	mov ecx,dword ptr [eax+0xE34]
	push ecx
	add eax,0xE2C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block670

 Block662:
	mov ecx,dword ptr [ebp+0x1958]
	cmp ecx,ebx
	jne Block664

 Block663:
	push 0x80004003
	call _com_issue_error

 Block664:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	or dword ptr [esp+0x1C],0x40
	mov dword ptr [esp+0xE0],0x45
	cmp esi,ebx
	jne Block666

 Block665:
	push 0x80004003
	call _com_issue_error

 Block666:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block668

 Block667:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block668:
	cmp dword ptr [esp+0x14],ebx
	jle Block670

 Block669:
	mov bl,1
	jmp Block671

 Block670:
	xor bl,bl

 Block671:
	test byte ptr [esp+0x1C],0x40
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	je Block674

 Block672:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block674

 Block673:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block674:
	test bl,bl
	jne Block684

 Block675:
	mov ecx,dword ptr [ebp+0x1958]
	test ecx,ecx
	jne Block677

 Block676:
	push 0x80004003
	call _com_issue_error

 Block677:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0xE0],0x46
	test esi,esi
	jne Block679

 Block678:
	push 0x80004003
	call _com_issue_error

 Block679:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block681

 Block680:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block681:
	cmp dword ptr [esp+0x14],0
	mov eax,dword ptr [esp+0x18]
	setg bl
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	test eax,eax
	je Block683

 Block682:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block683:
	test bl,bl
	je Block688

 Block684:
	mov esi,dword ptr [ebp+0x1958]
	test esi,esi
	jne Block686

 Block685:
	push 0x80004003
	call _com_issue_error

 Block686:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push edi
	push esi
	call ecx
	test eax,eax
	jge Block688

 Block687:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block688:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	mov ecx,ebp
	call eax
	mov ecx,dword ptr [eax+0x4AC]
	push ecx
	add eax,0x4A4
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block702

 Block689:
	mov eax,dword ptr [ebp+0x2ED4]
	test eax,eax
	je Block691

 Block690:
	mov edx,dword ptr [esp+0x48]
	sub edx,eax
	js Block702

 Block691:
	mov ecx,dword ptr [esp+0x48]
	sub ecx,eax
	cmp ecx,0xC8
	jle Block693

 Block692:
	mov dword ptr [ebp+0x2ED4],0

 Block693:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block695

 Block694:
	push eax
	call _com_issue_error

 Block695:
	lea ecx,[esp+0x24]
	mov ebx,0x47
	push ecx
	mov dword ptr [esp+0xE4],ebx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block697

 Block696:
	push eax
	call _com_issue_error

 Block697:
	mov ecx,dword ptr [ebp+0x1964]
	mov byte ptr [esp+0xE0],0x48
	test ecx,ecx
	jne Block699

 Block698:
	push 0x80004003
	call _com_issue_error

 Block699:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xE0],0x49
	test ecx,ecx
	jne Block701

 Block700:
	push 0x80004003
	call _com_issue_error

 Block701:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov byte ptr [esp+0xE0],0x48
	jmp Block711

 Block702:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block704

 Block703:
	push eax
	call _com_issue_error

 Block704:
	lea eax,[esp+0x24]
	mov ebx,0x4A
	push eax
	mov dword ptr [esp+0xE4],ebx
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block706

 Block705:
	push eax
	call _com_issue_error

 Block706:
	mov ecx,dword ptr [ebp+0x1964]
	mov byte ptr [esp+0xE0],0x4B
	test ecx,ecx
	jne Block708

 Block707:
	push 0x80004003
	call _com_issue_error

 Block708:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xE0],0x4C
	test ecx,ecx
	jne Block710

 Block709:
	push 0x80004003
	call _com_issue_error

 Block710:
	lea eax,[esp+0x34]
	push eax
	lea edx,[esp+0x28]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov byte ptr [esp+0xE0],0x4B

 Block711:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block713

 Block712:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block713:
	mov esi,8
	mov byte ptr [esp+0xE0],bl
	cmp word ptr [esp+0x24],si
	jne Block716

 Block714:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block717

 Block715:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block717

 Block716:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block717:
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	cmp word ptr [esp+0x34],si
	jne Block720

 Block718:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block721

 Block719:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block721

 Block720:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block721:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0x1C]
	mov ecx,ebp
	call eax
	test eax,eax
	jne Block724

 Block722:
	cmp dword ptr [ebp+0x638],eax
	jne Block724

 Block723:
	mov eax,1
	jmp Block725

 Block724:
	xor eax,eax

 Block725:
	push eax
	mov ecx,ebp
	call CLife::ShowNameTag
	mov dword ptr [esp+0x1C],0x13
	lea edi,[ebp+0x31E4]
	xor ebx,ebx

 Block726:
	mov esi,dword ptr [edi]
	cmp esi,ebx
	sete al
	test al,al
	jne Block780

 Block727:
	cmp esi,ebx
	je Block57

 Block728:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block730

 Block729:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block730:
	mov ecx,dword ptr [esp+0x14]
	mov esi,dword ptr [edi]
	and ecx,0xFF000000
	cmp ecx,0xD0000000
	jbe Block752

 Block731:
	cmp esi,ebx
	je Block57

 Block732:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xDC]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],ebx
	call ecx
	cmp eax,ebx
	jge Block734

 Block733:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block734:
	mov esi,dword ptr [edi]
	cmp esi,ebx
	je Block57

 Block735:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xE0]
	push eax
	push esi
	call ecx
	cmp eax,ebx
	jge Block737

 Block736:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block737:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block78

 Block738:
	mov esi,dword ptr [edi]
	mov dword ptr [esp+0xE0],0x4D
	cmp esi,ebx
	je Block57

 Block739:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x58]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block741

 Block740:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block741:
	mov esi,dword ptr [esp+0x14]
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x1F4
	div ecx
	lea eax,[edx+esi+0xC8]
	mov edx,3
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],eax
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xE0],0x4E
	cmp ecx,ebx
	je Block57

 Block742:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xE0],0x4F
	cmp ecx,ebx
	je Block57

 Block743:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ebx
	push ebx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xE0],0x4E
	cmp eax,ebx
	je Block745

 Block744:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block745:
	mov esi,8
	mov byte ptr [esp+0xE0],0x4D
	cmp word ptr [esp+0x24],si
	jne Block748

 Block746:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block749

 Block747:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block749

 Block748:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block749:
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	cmp word ptr [esp+0x34],si
	jne Block751

 Block750:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	jmp Block776

 Block751:
	lea eax,[esp+0x34]
	jmp Block779

 Block752:
	cmp esi,ebx
	je Block57

 Block753:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block755

 Block754:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block755:
	test dword ptr [esp+0x14],0xFF000000
	jne Block780

 Block756:
	mov esi,dword ptr [edi]
	cmp esi,ebx
	je Block57

 Block757:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block759

 Block758:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block759:
	mov esi,dword ptr [edi]
	cmp esi,ebx
	je Block57

 Block760:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xE0]
	push edx
	push esi
	call eax
	cmp eax,ebx
	jge Block762

 Block761:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block762:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block78

 Block763:
	mov esi,dword ptr [edi]
	mov dword ptr [esp+0xE0],0x50
	cmp esi,ebx
	je Block57

 Block764:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block766

 Block765:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block766:
	mov esi,dword ptr [esp+0x14]
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x1F4
	div ecx
	lea eax,[edx+esi+0x1F4]
	mov edx,3
	mov word ptr [esp+0x54],dx
	mov dword ptr [esp+0x5C],eax
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xE0],0x51
	cmp ecx,ebx
	je Block57

 Block767:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getalpha
	mov esi,eax
	mov ecx,offset _D_G_RAND
	mov byte ptr [esp+0xE0],0x52
	call CRand32::Random
	xor edx,edx
	mov ecx,0x1E
	div ecx
	mov ecx,dword ptr [esi]
	lea eax,[edx+0xE1]
	cmp ecx,ebx
	je Block57

 Block768:
	lea edx,[esp+0x64]
	push edx
	lea edx,[esp+0x58]
	push edx
	push ebx
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xE0],0x51
	cmp eax,ebx
	je Block770

 Block769:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block770:
	mov esi,8
	mov byte ptr [esp+0xE0],0x50
	cmp word ptr [esp+0x54],si
	jne Block773

 Block771:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebx
	je Block774

 Block772:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block774

 Block773:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block774:
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	cmp word ptr [esp+0x64],si
	jne Block778

 Block775:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx

 Block776:
	cmp eax,ebx
	je Block780

 Block777:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block780

 Block778:
	lea eax,[esp+0x64]

 Block779:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block780:
	mov eax,dword ptr [esp+0x1C]
	inc eax
	add edi,0x24
	cmp eax,0x1F
	mov dword ptr [esp+0x1C],eax
	jl Block726

 Block781:
	push ebx
	mov ecx,ebp
	call CUser::ShiftAffectedSkillAnimation
	mov ecx,dword ptr [esp+0x48]
	push ecx
	mov ecx,ebp
	call CUser::ShowAffectedSkillAni
	cmp dword ptr [ebp+0x2EC4],ebx
	je Block794

 Block782:
	push 5
	mov ecx,ebp
	call CUser::GetAdditionalLayer
	add eax,0x48
	mov dword ptr [ebp+0x2EC4],0
	mov ebx,1
	lea edi,[eax+0x14]

 Block783:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block57

 Block784:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x114]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block786

 Block785:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block786:
	cmp dword ptr [esp+0x14],0
	jne Block792

 Block787:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block57

 Block788:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block790

 Block789:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block790:
	inc ebx
	add edi,0x24
	cmp ebx,0xA
	jle Block783

 Block791:
	jmp Block793

 Block792:
	mov dword ptr [ebp+0x2EC4],1

 Block793:
	xor ebx,ebx

 Block794:
	mov eax,dword ptr [ebp+0x2EC8]
	cmp eax,ebx
	jle Block804

 Block795:
	add eax,0xFFFFFFE2
	cmp eax,ebx
	mov dword ptr [ebp+0x2EC8],eax
	jg Block804

 Block796:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	mov ecx,ebp
	call eax
	mov ebx,dword ptr [eax+0x13D4]
	lea esi,[ebx+0x18]
	mov ecx,esi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	je Block800

 Block797:
	mov ecx,esi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	je Block800

 Block798:
	mov edi,dword ptr [ZImports::_Sleep]

 Block799:
	push 0
	call edi
	mov ecx,esi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	jne Block799

 Block800:
	test esi,esi
	je Block803

 Block801:
	add dword ptr [esi+4],0xFFFFFFFF
	jne Block803

 Block802:
	mov dword ptr [esi],0

 Block803:
	mov ecx,dword ptr [ebx+0xC]
	push 1
	push ecx
	lea ecx,[ebp+0x88]
	call CAvatar::SetRidingVehicle
	mov edx,dword ptr [ebp+0x39BC]
	push edx
	mov ecx,ebp
	call CUser::SetActiveEffectItem
	xor ebx,ebx

 Block804:
	mov eax,dword ptr [ebp+0x2ECC]
	cmp eax,ebx
	jle Block848

 Block805:
	add eax,0xFFFFFFE2
	mov dword ptr [ebp+0x2ECC],eax
	cmp dword ptr [ebp+0x2ED0],ebx
	je Block808

 Block806:
	cmp eax,ebx
	jg Block848

 Block807:
	push 0x3EA
	lea ecx,[ebp+0x88]
	call CAvatar::SetMorphed
	mov eax,dword ptr [ebp+0x39BC]
	push eax
	mov ecx,ebp
	call CUser::SetActiveEffectItem
	jmp Block848

 Block808:
	cmp eax,0x78
	jle Block821

 Block809:
	cmp eax,0xF0
	jg Block821

 Block810:
	push ebx
	lea ecx,[ebp+0x88]
	call CAvatar::SetMorphed
	mov ecx,dword ptr [ebp+0x39BC]
	push ecx
	mov ecx,ebp
	call CUser::SetActiveEffectItem
	mov esi,dword ptr [ebp+0x195C]
	cmp esi,ebx
	jne Block812

 Block811:
	push 0x80004003
	call _com_issue_error

 Block812:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0x4DFFFFFF
	push esi
	call eax
	cmp eax,ebx
	jge Block814

 Block813:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block814:
	mov esi,dword ptr [ebp+0x1960]
	cmp esi,ebx
	jne Block816

 Block815:
	push 0x80004003
	call _com_issue_error

 Block816:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0x4DFFFFFF
	push esi
	call edx
	cmp eax,ebx
	jge Block818

 Block817:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block818:
	mov esi,dword ptr [ebp+0x1958]
	cmp esi,ebx
	jne Block820

 Block819:
	push 0x80004003
	call _com_issue_error

 Block820:
	push 0x4DFFFFFF
	jmp Block846

 Block821:
	cmp eax,ebx
	jle Block835

 Block822:
	cmp eax,0x78
	jg Block834

 Block823:
	mov esi,dword ptr [ebp+0x195C]
	cmp esi,ebx
	jne Block825

 Block824:
	push 0x80004003
	call _com_issue_error

 Block825:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xB2FFFFFF
	push esi
	call eax
	cmp eax,ebx
	jge Block827

 Block826:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block827:
	mov esi,dword ptr [ebp+0x1960]
	cmp esi,ebx
	jne Block829

 Block828:
	push 0x80004003
	call _com_issue_error

 Block829:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xB2FFFFFF
	push esi
	call edx
	cmp eax,ebx
	jge Block831

 Block830:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block831:
	mov esi,dword ptr [ebp+0x1958]
	cmp esi,ebx
	jne Block833

 Block832:
	push 0x80004003
	call _com_issue_error

 Block833:
	push 0xB2FFFFFF
	jmp Block846

 Block834:
	cmp eax,ebx
	jg Block848

 Block835:
	mov esi,dword ptr [ebp+0x195C]
	cmp esi,ebx
	jne Block837

 Block836:
	push 0x80004003
	call _com_issue_error

 Block837:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,ebx
	jge Block839

 Block838:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block839:
	mov esi,dword ptr [ebp+0x1960]
	cmp esi,ebx
	jne Block841

 Block840:
	push 0x80004003
	call _com_issue_error

 Block841:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	cmp eax,ebx
	jge Block843

 Block842:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block843:
	mov esi,dword ptr [ebp+0x1958]
	cmp esi,ebx
	jne Block845

 Block844:
	push 0x80004003
	call _com_issue_error

 Block845:
	push 0xFFFFFFFF

 Block846:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push esi
	call ecx
	cmp eax,ebx
	jge Block848

 Block847:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block848:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	cmp esi,ebx
	je Block850

 Block849:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	jne Block851

 Block850:
	xor esi,esi

 Block851:
	mov ebx,0xFF
	test esi,esi
	je Block918

 Block852:
	mov ecx,ebp
	call CUser::IsSamePhaseWithLocalUser
	test eax,eax
	jne Block918

 Block853:
	mov ebx,dword ptr [esi+0x250]
	mov esi,dword ptr [ebp+0x195C]
	mov edi,ebx
	shl edi,0x18
	test esi,esi
	jne Block855

 Block854:
	push 0x80004003
	call _com_issue_error

 Block855:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block857

 Block856:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block857:
	cmp dword ptr [esp+0x14],ebx
	jbe Block866

 Block858:
	mov esi,dword ptr [ebp+0x195C]
	test esi,esi
	jne Block860

 Block859:
	push 0x80004003
	call _com_issue_error

 Block860:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block862

 Block861:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block862:
	mov esi,dword ptr [ebp+0x195C]
	test esi,esi
	jne Block864

 Block863:
	push 0x80004003
	call _com_issue_error

 Block864:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xE0]
	and edx,0xFFFFFF
	add edx,edi
	push edx
	push esi
	call eax
	test eax,eax
	jge Block866

 Block865:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block866:
	mov esi,dword ptr [ebp+0x1960]
	test esi,esi
	jne Block868

 Block867:
	push 0x80004003
	call _com_issue_error

 Block868:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block870

 Block869:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block870:
	cmp dword ptr [esp+0x14],ebx
	jbe Block879

 Block871:
	mov esi,dword ptr [ebp+0x1960]
	test esi,esi
	jne Block873

 Block872:
	push 0x80004003
	call _com_issue_error

 Block873:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block875

 Block874:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block875:
	mov esi,dword ptr [ebp+0x1960]
	test esi,esi
	jne Block877

 Block876:
	push 0x80004003
	call _com_issue_error

 Block877:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xE0]
	and edx,0xFFFFFF
	add edx,edi
	push edx
	push esi
	call eax
	test eax,eax
	jge Block879

 Block878:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block879:
	mov esi,dword ptr [ebp+0x1958]
	test esi,esi
	jne Block881

 Block880:
	push 0x80004003
	call _com_issue_error

 Block881:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block883

 Block882:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block883:
	cmp dword ptr [esp+0x14],ebx
	jbe Block892

 Block884:
	mov esi,dword ptr [ebp+0x1958]
	test esi,esi
	jne Block886

 Block885:
	push 0x80004003
	call _com_issue_error

 Block886:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block888

 Block887:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block888:
	mov esi,dword ptr [ebp+0x1958]
	test esi,esi
	jne Block890

 Block889:
	push 0x80004003
	call _com_issue_error

 Block890:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xE0]
	and edx,0xFFFFFF
	add edx,edi
	push edx
	push esi
	call eax
	test eax,eax
	jge Block892

 Block891:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block892:
	mov esi,dword ptr [ebp+0x1968]
	test esi,esi
	jne Block894

 Block893:
	push 0x80004003
	call _com_issue_error

 Block894:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block896

 Block895:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block896:
	cmp dword ptr [esp+0x14],ebx
	jbe Block905

 Block897:
	mov esi,dword ptr [ebp+0x1968]
	test esi,esi
	jne Block899

 Block898:
	push 0x80004003
	call _com_issue_error

 Block899:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block901

 Block900:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block901:
	mov esi,dword ptr [ebp+0x1968]
	test esi,esi
	jne Block903

 Block902:
	push 0x80004003
	call _com_issue_error

 Block903:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xE0]
	and edx,0xFFFFFF
	add edx,edi
	push edx
	push esi
	call eax
	test eax,eax
	jge Block905

 Block904:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block905:
	mov esi,dword ptr [ebp+0x196C]
	test esi,esi
	jne Block907

 Block906:
	push 0x80004003
	call _com_issue_error

 Block907:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block909

 Block908:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block909:
	cmp dword ptr [esp+0x14],ebx
	jbe Block918

 Block910:
	mov esi,dword ptr [ebp+0x196C]
	test esi,esi
	jne Block912

 Block911:
	push 0x80004003
	call _com_issue_error

 Block912:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block914

 Block913:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block914:
	mov esi,dword ptr [ebp+0x196C]
	test esi,esi
	jne Block916

 Block915:
	push 0x80004003
	call _com_issue_error

 Block916:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xE0]
	and edx,0xFFFFFF
	add edx,edi
	push edx
	push esi
	call eax
	test eax,eax
	jge Block918

 Block917:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block918:
	mov ecx,dword ptr [ebp+0x2EAC]
	mov dword ptr [ebp+0x2E1C],ebx
	test ecx,ecx
	je Block920

 Block919:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	call eax

 Block920:
	mov eax,dword ptr [ebp+0x3A90]
	test eax,eax
	je Block922

 Block921:
	cmp dword ptr [esp+0x48],eax
	jle Block983

 Block922:
	mov ebp,dword ptr [esp+0x50]
	xor eax,eax
	mov dword ptr [ebp+0x3A90],eax
	mov dword ptr [esp+0x1C],eax
	add ebp,0x3A94
	lea ecx,[ecx]

 Block923:
	cmp dword ptr [ebp],0
	sete al
	test al,al
	jne Block983

 Block924:
	mov ecx,dword ptr [esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x54]
	lea edx,[esp+0x24]
	push edx
	call CUser::GetMirrorSrcLayer
	mov eax,3
	mov dword ptr [esp+0xE0],0x53
	mov word ptr [esp+0x64],ax
	mov dword ptr [esp+0x6C],0xFFFFFFFE
	mov ecx,dword ptr [ebp]
	xor esi,esi
	mov byte ptr [esp+0xE0],0x54
	cmp ecx,esi
	je Block57

 Block925:
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	cmp eax,esi
	je Block927

 Block926:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block927:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0xE0],0x53
	jne Block930

 Block928:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,esi
	je Block931

 Block929:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block931

 Block930:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block931:
	mov edx,3
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],esi
	mov edi,dword ptr [esp+0x20]
	mov byte ptr [esp+0xE0],0x55
	cmp edi,esi
	je Block57

 Block932:
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,edi
	call IWzGr2DLayer::Getcanvas
	cmp dword ptr [eax],esi
	mov byte ptr [esp+0xE0],0x55
	sete al
	test al,al
	mov eax,dword ptr [esp+0x4C]
	sete bl
	cmp eax,esi
	je Block934

 Block933:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block934:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xE0],0x53
	jne Block937

 Block935:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,esi
	je Block938

 Block936:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block938

 Block937:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block938:
	test bl,bl
	je Block976

 Block939:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x74]
	push eax
	call ebx
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jl Block78

 Block940:
	lea edx,[esp+0xB4]
	push edx
	mov byte ptr [esp+0xE4],0x57
	call ebx
	lea eax,[esp+0xB4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jl Block78

 Block941:
	lea ecx,[esp+0xC4]
	push ecx
	mov byte ptr [esp+0xE4],0x58
	call ebx
	lea edx,[esp+0xC4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jl Block78

 Block942:
	lea eax,[esp+0xA4]
	push eax
	mov byte ptr [esp+0xE4],0x59
	call ebx
	lea ecx,[esp+0xA4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jl Block78

 Block943:
	lea edx,[esp+0x94]
	push edx
	mov byte ptr [esp+0xE4],0x5A
	call ebx
	lea eax,[esp+0x94]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jl Block78

 Block944:
	mov ecx,3
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],esi
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x58]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xE8],0x5C
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xE0],0x5D
	cmp ecx,esi
	je Block57

 Block945:
	lea edx,[esp+0x74]
	push edx
	lea edx,[esp+0xB8]
	push edx
	lea edx,[esp+0xCC]
	push edx
	lea edx,[esp+0xB0]
	push edx
	lea edx,[esp+0xA4]
	push edx
	push eax
	lea eax,[esp+0x9C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x84],8
	jne Block954

 Block946:
	mov eax,dword ptr [esp+0x8C]
	xor ecx,ecx
	mov word ptr [esp+0x84],cx
	cmp eax,esi
	je Block948

 Block947:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block948:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block949:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xE0],0x5C
	cmp eax,esi
	je Block951

 Block950:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block951:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0xE0],0x5B
	jne Block955

 Block952:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,esi
	je Block956

 Block953:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block956

 Block954:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x84]
	push edx
	call ebx
	jmp Block949

 Block955:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block956:
	cmp word ptr [esp+0x94],8
	mov byte ptr [esp+0xE0],0x5A
	jne Block959

 Block957:
	mov eax,dword ptr [esp+0x9C]
	xor edx,edx
	mov word ptr [esp+0x94],dx
	cmp eax,esi
	je Block960

 Block958:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block960

 Block959:
	lea eax,[esp+0x94]
	push eax
	call ebx

 Block960:
	cmp word ptr [esp+0xA4],8
	mov byte ptr [esp+0xE0],0x59
	jne Block963

 Block961:
	mov eax,dword ptr [esp+0xAC]
	xor ecx,ecx
	mov word ptr [esp+0xA4],cx
	cmp eax,esi
	je Block964

 Block962:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block964

 Block963:
	lea edx,[esp+0xA4]
	push edx
	call ebx

 Block964:
	cmp word ptr [esp+0xC4],8
	mov byte ptr [esp+0xE0],0x58
	jne Block967

 Block965:
	xor eax,eax
	mov word ptr [esp+0xC4],ax
	mov eax,dword ptr [esp+0xCC]
	cmp eax,esi
	je Block968

 Block966:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block968

 Block967:
	lea ecx,[esp+0xC4]
	push ecx
	call ebx

 Block968:
	cmp word ptr [esp+0xB4],8
	mov byte ptr [esp+0xE0],0x57
	jne Block971

 Block969:
	mov eax,dword ptr [esp+0xBC]
	xor edx,edx
	mov word ptr [esp+0xB4],dx
	cmp eax,esi
	je Block972

 Block970:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block972

 Block971:
	lea eax,[esp+0xB4]
	push eax
	call ebx

 Block972:
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xE0],0x53
	jne Block975

 Block973:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	cmp eax,esi
	je Block976

 Block974:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block976

 Block975:
	lea edx,[esp+0x74]
	push edx
	call ebx

 Block976:
	mov eax,dword ptr [esp+0x50]
	mov esi,dword ptr [eax+0x1960]
	test esi,esi
	je Block57

 Block977:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block979

 Block978:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block979:
	mov esi,dword ptr [ebp]
	test esi,esi
	je Block57

 Block980:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD8]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block982

 Block981:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block982:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0xE4],0xFFFFFFFF
	call edx
	mov eax,dword ptr [esp+0x1C]
	inc eax
	add ebp,4
	cmp eax,5
	mov dword ptr [esp+0x1C],eax
	jl Block923

 Block983:
	mov ebx,dword ptr [esp+0x50]
	xor ebp,ebp
	cmp dword ptr [ebx+0x3A54],ebp
	je Block988

 Block984:
	mov esi,dword ptr [ebx+0x3A54]
	cmp esi,ebp
	jne Block986

 Block985:
	push 0x80004003
	call _com_issue_error

 Block986:
	lea ecx,[ebx+0x88]
	call CAvatar::IsOnPlayingRotateAction
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x11C]
	neg eax
	sbb eax,eax
	inc eax
	push eax
	push esi
	call edx
	cmp eax,ebp
	jge Block988

 Block987:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block988:
	cmp dword ptr [ebx+0x3A58],ebp
	je Block993

 Block989:
	mov esi,dword ptr [ebx+0x3A58]
	cmp esi,ebp
	jne Block991

 Block990:
	push 0x80004003
	call _com_issue_error

 Block991:
	lea ecx,[ebx+0x88]
	call CAvatar::IsOnPlayingRotateAction
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x11C]
	neg eax
	sbb eax,eax
	inc eax
	push eax
	push esi
	call edx
	cmp eax,ebp
	jge Block993

 Block992:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block993:
	cmp dword ptr [ebx+0x3A8C],ebp
	je Block998

 Block994:
	mov esi,dword ptr [ebx+0x3A8C]
	cmp esi,ebp
	jne Block996

 Block995:
	push 0x80004003
	call _com_issue_error

 Block996:
	lea ecx,[ebx+0x88]
	call CAvatar::IsOnPlayingRotateAction
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x11C]
	neg eax
	sbb eax,eax
	inc eax
	push eax
	push esi
	call edx
	cmp eax,ebp
	jge Block998

 Block997:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block998:
	cmp dword ptr [ebx+0x3A60],ebp
	je Block1023

 Block999:
	mov esi,dword ptr [ebx+0x1960]
	cmp esi,ebp
	jne Block1001

 Block1000:
	push 0x80004003
	call _com_issue_error

 Block1001:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call edx
	cmp eax,ebp
	jge Block1003

 Block1002:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block1003:
	mov esi,dword ptr [ebx+0x3A60]
	mov edi,dword ptr [esp+0x14]
	cmp esi,ebp
	jne Block1005

 Block1004:
	push 0x80004003
	call _com_issue_error

 Block1005:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x20]
	push ecx
	push esi
	mov dword ptr [esp+0x28],ebp
	call edx
	cmp eax,ebp
	jge Block1007

 Block1006:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block1007:
	cmp edi,dword ptr [esp+0x20]
	je Block1016

 Block1008:
	mov esi,dword ptr [ebx+0x1960]
	cmp esi,ebp
	jne Block1010

 Block1009:
	push 0x80004003
	call _com_issue_error

 Block1010:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call edx
	cmp eax,ebp
	jge Block1012

 Block1011:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block1012:
	mov esi,dword ptr [ebx+0x3A60]
	cmp esi,ebp
	jne Block1014

 Block1013:
	push 0x80004003
	call _com_issue_error

 Block1014:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xD8]
	push ecx
	push esi
	call edx
	cmp eax,ebp
	jge Block1016

 Block1015:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block1016:
	mov eax,dword ptr [ebx+0x19E4]
	cmp eax,ebp
	je Block1018

 Block1017:
	add eax,0xFFFFFFF4
	jmp Block1019

 Block1018:
	xor eax,eax

 Block1019:
	mov ecx,dword ptr [eax+0x1BC]
	push ecx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	mov esi,dword ptr [ebx+0x3A60]
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	cmp esi,ebp
	jne Block1021

 Block1020:
	push 0x80004003
	call _com_issue_error

 Block1021:
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x11C]
	xor ecx,ecx
	cmp eax,ebp
	sete cl
	push ecx
	push esi
	call edx
	cmp eax,ebp
	jge Block1023

 Block1022:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block1023:
	mov eax,dword ptr [ebx+4]
	mov edx,dword ptr [eax+0x14]
	lea esi,[ebx+4]
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	call edx
	mov edi,eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	cmp eax,dword ptr [edi]
	jne Block1026

 Block1024:
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x14]
	lea eax,[esp+0x34]
	push eax
	mov ecx,esi
	call edx
	lea edi,[eax+4]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	cmp eax,dword ptr [edi]
	jne Block1026

 Block1025:
	add dword ptr [ebx+0x3A44],0x1E
	jmp Block1027

 Block1026:
	mov dword ptr [ebx+0x3A44],ebp

 Block1027:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	cmp esi,ebp
	je Block1029

 Block1028:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	jne Block1030

 Block1029:
	xor esi,esi

 Block1030:
	cmp dword ptr [ebx+0x3A44],0x927C0
	mov edi,dword ptr [esp+0x48]
	jl Block1035

 Block1031:
	cmp dword ptr [ebx+0x3A48],edi
	jg Block1035

 Block1032:
	cmp esi,ebp
	je Block1035

 Block1033:
	lea ecx,[esi+0x16C]
	call TSecType<unsigned long>::GetData
	add eax,0xC9C28080
	cmp eax,0x16
	jbe Block1035

 Block1034:
	push 2
	mov ecx,ebx
	call CUser::PetAutoSpeaking
	lea ecx,[edi+0x1D4C0]
	mov dword ptr [ebx+0x3A48],ecx

 Block1035:
	push edi
	mov ecx,ebx
	call CUser::UpdateMoreWildEffect
	cmp dword ptr [ebx+0x3A7C],ebp
	je Block1060

 Block1036:
	mov esi,dword ptr [ebx+0x3A7C]
	cmp esi,ebp
	jne Block1038

 Block1037:
	push 0x80004003
	call _com_issue_error

 Block1038:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xD4]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],ebp
	call ecx
	cmp eax,ebp
	jge Block1040

 Block1039:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block1040:
	mov esi,dword ptr [ebx+0x1960]
	mov edi,dword ptr [esp+0x14]
	cmp esi,ebp
	jne Block1042

 Block1041:
	push 0x80004003
	call _com_issue_error

 Block1042:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xD4]
	lea eax,[esp+0x20]
	push eax
	push esi
	mov dword ptr [esp+0x28],ebp
	call ecx
	cmp eax,ebp
	jge Block1044

 Block1043:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block1044:
	cmp edi,dword ptr [esp+0x20]
	je Block1053

 Block1045:
	mov esi,dword ptr [ebx+0x1960]
	cmp esi,ebp
	jne Block1047

 Block1046:
	push 0x80004003
	call _com_issue_error

 Block1047:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xD4]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],ebp
	call ecx
	cmp eax,ebp
	jge Block1049

 Block1048:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block1049:
	mov esi,dword ptr [ebx+0x3A7C]
	cmp esi,ebp
	jne Block1051

 Block1050:
	push 0x80004003
	call _com_issue_error

 Block1051:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xD8]
	push eax
	push esi
	call ecx
	cmp eax,ebp
	jge Block1053

 Block1052:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block1053:
	mov esi,dword ptr [ebx+0x3A7C]
	cmp esi,ebp
	jne Block1055

 Block1054:
	push 0x80004003
	call _com_issue_error

 Block1055:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x114]
	lea eax,[esp+0x48]
	push eax
	push esi
	mov dword ptr [esp+0x50],ebp
	call ecx
	cmp eax,ebp
	jge Block1057

 Block1056:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block1057:
	cmp dword ptr [esp+0x48],ebp
	jne Block1060

 Block1058:
	mov eax,dword ptr [ebx+0x3A7C]
	cmp eax,ebp
	je Block1060

 Block1059:
	mov dword ptr [ebx+0x3A7C],ebp
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block1060:
	lea esi,[ebx+0x88]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	cmp eax,0xCF
	jne Block1068

 Block1061:
	mov eax,dword ptr [ebx+0x19E4]
	cmp eax,ebp
	je Block1063

 Block1062:
	add eax,0xFFFFFFF4
	jmp Block1064

 Block1063:
	xor eax,eax

 Block1064:
	cmp dword ptr [eax+0x1A0],ebp
	je Block1068

 Block1065:
	mov eax,dword ptr [ebx+0x3A7C]
	cmp eax,ebp
	je Block1067

 Block1066:
	mov dword ptr [ebx+0x3A7C],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block1067:
	or eax,0xFFFFFFFF
	push 1
	mov ecx,esi
	mov dword ptr [esi+0x5BC],eax
	mov dword ptr [esi+0x5A8],eax
	call CAvatar::ClearActionLayer
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push ebp
	push 0x64
	push 6
	mov ecx,esi
	call edx

 Block1068:
	mov ecx,ebx
	call CUser::UpdateAr01Effect

 Block1069:
	mov ecx,dword ptr [esp+0xD8]
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
// CUser::GetAdditionalLayer
__SUB_CLASS_THIS(004DE110, __thiscall, 16690,  CUser, CUser::ADDITIONALLAYER*, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x12
	ja Block19

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block4
cmp EAX, 4
je Block5
cmp EAX, 5
je Block6
cmp EAX, 6
je Block7
cmp EAX, 7
je Block8
cmp EAX, 8
je Block10
cmp EAX, 9
je Block11
cmp EAX, 10
je Block12
cmp EAX, 11
je Block13
cmp EAX, 12
je Block9
cmp EAX, 13
je Block14
cmp EAX, 14
je Block19
cmp EAX, 15
je Block15
cmp EAX, 16
je Block16
cmp EAX, 17
je Block17
cmp EAX, 18
je Block18


 Block2:
	lea eax,[ecx+0x2F24]
	ret 4

 Block3:
	lea eax,[ecx+0x2F48]
	ret 4

 Block4:
	lea eax,[ecx+0x2F6C]
	ret 4

 Block5:
	lea eax,[ecx+0x3380]
	ret 4

 Block6:
	lea eax,[ecx+0x3020]
	ret 4

 Block7:
	lea eax,[ecx+0x31D0]
	ret 4

 Block8:
	lea eax,[ecx+0x2FB4]
	ret 4

 Block9:
	lea eax,[ecx+0x2FD8]
	ret 4

 Block10:
	lea eax,[ecx+0x3800]
	ret 4

 Block11:
	lea eax,[ecx+0x3650]
	ret 4

 Block12:
	lea eax,[ecx+0x3674]
	ret 4

 Block13:
	lea eax,[ecx+0x36BC]
	ret 4

 Block14:
	lea eax,[ecx+0x3770]
	ret 4

 Block15:
	lea eax,[ecx+0x3794]
	ret 4

 Block16:
	lea eax,[ecx+0x37B8]
	ret 4

 Block17:
	lea eax,[ecx+0x37DC]
	ret 4

 Block18:
	lea eax,[ecx+0x3968]
	ret 4

 Block19:
	xor eax,eax
	ret 4
}
}
// CUser::RemoveMoreWildFinishEffect
__SUB_CLASS_THIS0(004E1340, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3A6C]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+0x3A6C],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CUser::LoadFinalCutEffect
__SUB_CLASS_THIS0(004F3A90, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x3A58],0
	push edi
	jne Block10

 Block1:
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xC],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	push 0x423D0A
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	call CUser::LoadSkillRepeatEffect
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x3A58]
	cmp edi,eax
	je Block8

 Block4:
	mov dword ptr [esi+0x3A58],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	test edi,edi
	je Block8

 Block7:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block8:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	pop edi
	pop esi
	pop ecx
	ret
}
}
// CUser::LoadSuddenDeathEffect
__SUB_CLASS_THIS0(004F3A10, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x3A54],0
	push edi
	jne Block10

 Block1:
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xC],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	push 0x4215FB
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	call CUser::LoadSkillRepeatEffect
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x3A54]
	cmp edi,eax
	je Block8

 Block4:
	mov dword ptr [esi+0x3A54],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	test edi,edi
	je Block8

 Block7:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block8:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	pop edi
	pop esi
	pop ecx
	ret
}
}
// CUser::GetSummoned
_SUB_EXCEPTION_HANDLER(4E3550)
__SUB_CLASS_THIS(004E3550, __thiscall, 16634,  CUser, ZRef<CSummoned>*, ZRef<CSummoned>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E3550
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
	mov dword ptr [esp+0x1C],ecx
	xor ebx,ebx
	xor esi,esi
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x24],esi
	mov eax,dword ptr [ecx+0x2E70]
	mov dword ptr [esp+0x30],1
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block12

 Block1:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<CSummoned>>::GetNext
	mov edi,eax
	mov eax,dword ptr [edi+4]
	add esp,4
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xC
	push eax
	call ebp

 Block4:
	cmp esi,ebx
	je Block8

 Block5:
	add esi,8
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	lea edx,[esi+4]
	push edx
	call ebp
	cmp esi,ebx
	je Block8

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block8:
	mov esi,dword ptr [edi+4]
	mov dword ptr [esp+0x24],esi
	cmp esi,ebx
	je Block11

 Block9:
	mov eax,dword ptr [esp+0x3C]
	cmp dword ptr [esi+0xC0],eax
	jne Block11

 Block10:
	mov ecx,dword ptr [esp+0x1C]
	call CUser::IsSamePhaseWithLocalUser
	test eax,eax
	jne Block15

 Block11:
	cmp dword ptr [esp+0x14],ebx
	jne Block2

 Block12:
	mov edi,dword ptr [esp+0x38]
	mov dword ptr [edi+4],ebx
	mov dword ptr [esp+0x18],1
	mov byte ptr [esp+0x30],bl
	cmp esi,ebx
	je Block14

 Block13:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CSummoned>::_ReleaseRaw

 Block14:
	mov eax,edi
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 8

 Block15:
	mov edi,dword ptr [esp+0x38]
	mov dword ptr [edi+4],esi
	add esi,0xC
	push esi
	call ebp
	mov dword ptr [esp+0x18],1
	mov byte ptr [esp+0x30],bl
	jmp Block13
}
}
// CUser::LoadMagicShield
_SUB_EXCEPTION_HANDLER(4F33E0)
__SUB_CLASS_THIS0(004F33E0, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F33E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x3A88],0
	sete al
	test al,al
	je Block32

 Block1:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x151B139
	call CSkillInfo::GetSkill
	push 0
	push 0xFF
	push 0
	push ecx
	mov edi,eax
	mov eax,dword ptr [esi+0x1960]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	mov eax,dword ptr [esi+0x193C]
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x60],0
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	mov ecx,esi
	mov byte ptr [esp+0x60],1
	call edx
	movzx eax,al
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,edi
	call SKILLENTRY::GetSpecialUOL
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x60],2
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax]
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	push 0
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x6C],3
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x3A88]
	add esp,0x28
	cmp edi,eax
	je Block13

 Block9:
	mov dword ptr [esi+0x3A88],eax
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block11:
	test edi,edi
	je Block13

 Block12:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block13:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block15:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test ecx,ecx
	je Block17

 Block16:
	call _xbstr_t::Data_t::Release

 Block17:
	cmp dword ptr [esi+0x3A88],0
	je Block32

 Block18:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea eax,[esp+0x1C]
	push eax
	mov dword ptr [esp+0x48],4
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	mov ecx,dword ptr [esi+0x3A88]
	mov byte ptr [esp+0x44],5
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x44],4
	cmp word ptr [esp+0x1C],si
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block28:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp word ptr [esp+0x2C],si
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x3C
	ret

 Block31:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block32:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x3C
	ret
}
}
// CUser::ShowItemHyperUpgradeEffect
_SUB_EXCEPTION_HANDLER(4E7660)
__SUB_CLASS_THIS(004E7660, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E7660
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
	mov dword ptr [esp+0x1C],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	cmp dword ptr [ecx+0x638],ebx
	jne Block63

 Block1:
	mov esi,dword ptr [esp+0x48]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movsx ebp,al
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,esi
	mov dword ptr [esp+0x18],eax
	call CInPacket::Decode4
	mov esi,dword ptr [esp+0x1C]
	mov edx,dword ptr [esi]
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [edx+0xC]
	mov ecx,esi
	call eax
	test eax,eax
	je Block39

 Block2:
	cmp dword ptr [esp+0x18],ebx
	je Block8

 Block3:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block6

 Block4:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CUIEnchantDlg::ms_RTTI_CUIEnchantDlg
	call eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test ecx,ecx
	jne Block7

 Block6:
	push 0x21000003
	lea ecx,[esp+0x24]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x20]
	push offset CDisconnectException::THROW_INFO
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x24],ecx
	call _CxxThrowException

 Block7:
	mov eax,dword ptr [esp+0x20]
	push 0
	push eax
	push edi
	push ebp
	call CUIEnchantDlg::SetResult
	jmp Block39

 Block8:
	test ebp,ebp
	je Block10

 Block9:
	lea ecx,[esp+0x2C]
	push 0x192
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x40],0
	mov ebx,1
	jmp Block13

 Block10:
	test edi,edi
	je Block12

 Block11:
	lea edx,[esp+0x28]
	push 0x194
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x40],1
	mov ebx,2
	jmp Block13

 Block12:
	lea eax,[esp+0x24]
	push 0x193
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x40],2
	mov ebx,4

 Block13:
	push eax
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x4C],0
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x40],4
	test bl,4
	je Block16

 Block14:
	mov eax,dword ptr [esp+0x24]
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov byte ptr [esp+0x40],5
	test bl,2
	je Block19

 Block17:
	mov eax,dword ptr [esp+0x28]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov byte ptr [esp+0x40],6
	test bl,1
	je Block22

 Block20:
	mov eax,dword ptr [esp+0x2C]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	test byte ptr [esp+0x20],2
	je Block37

 Block23:
	test ebp,ebp
	je Block25

 Block24:
	lea ecx,[esp+0x34]
	push 0x17F4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x40],7
	or ebx,8
	jmp Block28

 Block25:
	test edi,edi
	je Block27

 Block26:
	lea edx,[esp+0x30]
	push 0x17F6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x40],8
	or ebx,0x10
	jmp Block28

 Block27:
	lea eax,[esp+0x20]
	push 0x17F5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x40],9
	or ebx,0x20

 Block28:
	push eax
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x40],8
	test bl,0x20
	je Block31

 Block29:
	mov eax,dword ptr [esp+0x20]
	and ebx,0xFFFFFFDF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov dword ptr [esp+0x40],7
	test bl,0x10
	je Block34

 Block32:
	mov eax,dword ptr [esp+0x30]
	and ebx,0xFFFFFFEF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov dword ptr [esp+0x40],6
	test bl,8
	je Block37

 Block35:
	mov eax,dword ptr [esp+0x34]
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	lea ecx,[esp+0x48]
	push 0xC
	push ecx
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x50]
	add esp,8
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xC]
	mov ecx,esi
	call eax
	test eax,eax
	je Block42

 Block40:
	cmp dword ptr [esp+0x18],0
	jne Block63

 Block41:
	jmp Block43

 Block42:
	cmp dword ptr [esp+0x18],0
	jne Block57

 Block43:
	mov esi,0xA
	test ebp,ebp
	je Block45

 Block44:
	lea ecx,[esp+0x30]
	push 0x507
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x40],esi
	or ebx,0x40
	jmp Block46

 Block45:
	lea edx,[esp+0x34]
	push 0x508
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x40],0xB
	or ebx,0x80

 Block46:
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x1C],ebx
	call play_game_sound
	add esp,8
	mov dword ptr [esp+0x40],esi
	test bl,bl
	jns Block49

 Block47:
	mov eax,dword ptr [esp+0x34]
	and ebx,0xFFFFFF7F
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block49:
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test bl,0x40
	je Block52

 Block50:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block52:
	mov esi,dword ptr [esp+0x1C]

 Block53:
	mov eax,dword ptr [esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x1960]
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block55:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x54],0xC
	call CUser::GetVecCtrl_0
	mov esi,dword ptr [esi+0x1960]
	mov byte ptr [esp+0x50],0xD
	test esi,esi
	jne Block60

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	mov eax,offset _S_ENCHANTSUCCESSDE
	test ebp,ebp
	jne Block59

 Block58:
	mov eax,offset _S_ENCHANTFAILUREDE

 Block59:
	push 0x64
	push eax
	call play_game_sound
	add esp,8
	jmp Block53

 Block60:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[esp+0x58]
	push edx
	push esi
	mov dword ptr [esp+0x60],0
	call eax
	test eax,eax
	jge Block62

 Block61:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block62:
	mov ecx,dword ptr [esp+0x58]
	push ecx
	mov dword ptr [esp+0x54],0xFFFFFFFF
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::Effect_ItemUpgrade

 Block63:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 4
}
}
// CUser::SetCoupleItemEffect
_SUB_EXCEPTION_HANDLER(4F05D0)
__SUB_CLASS_THIS(004F05D0, __thiscall, 16640,  CUser, int32_t, long, CUser*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F05D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ebx,ebx
	cmp dword ptr [edi+0x638],ebx
	je Block2

 Block1:
	xor eax,eax
	jmp Block64

 Block2:
	mov esi,dword ptr [esp+0x74]
	mov eax,dword ptr [esi+0x2E18]
	cmp eax,dword ptr [edi+0x2E18]
	jne Block1

 Block3:
	call CUser::IsSamePhaseWithLocalUser
	test eax,eax
	je Block1

 Block4:
	push 7
	mov ecx,edi
	call CUser::RemoveAdditionalLayer
	test byte ptr [esp+0x70],2
	mov dword ptr [esp+0x20],eax
	lea ebp,[eax+0x14]
	jne Block7

 Block5:
	mov eax,dword ptr [ebp]
	cmp eax,ebx
	je Block44

 Block6:
	mov dword ptr [ebp],ebx
	jmp Block43

 Block7:
	cmp dword ptr [ebp],ebx
	sete al
	cmp al,bl
	je Block44

 Block8:
	mov eax,dword ptr [edi+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[edi+4]
	lea edx,[esp+0x38]
	push edx
	call eax
	mov dword ptr [esp+0x14],ebx
	lea ecx,[esp+0x24]
	push 0x3D2
	push ecx
	mov dword ptr [esp+0x70],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea edx,[esp+0x18]
	push edx
	push eax
	mov byte ptr [esp+0x74],1
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x68],bl
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov dword ptr [esp+0x1C],ebx
	lea eax,[esp+0x24]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x70],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x20]
	push ecx
	push eax
	mov byte ptr [esp+0x74],3
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x68],2
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	lea edx,[esp+0x24]
	push edx
	mov ecx,edi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x68],4
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],eax
	cmp eax,ebx
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block14:
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],5
	cmp ecx,ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x40]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],2
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x24]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x70],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov byte ptr [esp+0x74],7
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x68],6
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block20:
	lea edx,[esp+0x24]
	push edx
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x68],8
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],eax
	cmp eax,ebx
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block22:
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x68],9
	cmp ecx,ebx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x40]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],6
	cmp eax,ebx
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov eax,dword ptr [esi+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[esi+4]
	lea edx,[esp+0x30]
	push edx
	call eax
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x3C]
	add eax,edx
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x30]
	sar eax,1
	sub eax,0x14
	push eax
	mov eax,dword ptr [esp+0x3C]
	add eax,edx
	cdq
	sub eax,edx
	sar eax,1
	push eax
	call IWzShape2D::Move
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov edx,dword ptr [esp+0x1C]
	push 1
	push 1
	push 2
	push 2
	push edx
	call IWzVector2D::Ratio
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov eax,dword ptr [esp+0x18]
	push 1
	push 1
	push 2
	push 2
	push eax
	call IWzVector2D::Ratio
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x28]
	push 0x9AA
	push ecx
	mov byte ptr [esp+0x70],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esp+0x78]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x74],0xB
	call ZXString16::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x68],0xA
	cmp eax,ebx
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov dword ptr [esp+0x38],esp
	mov eax,esp
	push ebx
	push ebx
	push ecx
	lea edx,[esp+0x30]
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push edx
	mov dword ptr [eax],ebx
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov esi,dword ptr [esp+0x40]
	push ebx
	lea eax,[esp+0x48]
	push esi
	push eax
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x6C],0xC
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	push 0x20
	mov ecx,ebp
	mov byte ptr [esp+0x74],0xD
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	mov byte ptr [esp+0x68],6
	cmp esi,ebx
	je Block38

 Block37:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block38:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x68],2
	cmp eax,ebx
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block40:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],bl
	cmp eax,ebx
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp eax,ebx
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov esi,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x74]
	add esi,0x24
	mov dword ptr [esp+0x20],esi
	push 7
	add esi,0x14
	call CUser::GetAdditionalLayer
	test byte ptr [esp+0x70],1
	mov dword ptr [esp+0x24],eax
	lea ebp,[eax+0x14]
	je Block59

 Block45:
	cmp dword ptr [esi],ebx
	sete al
	cmp al,bl
	je Block52

 Block46:
	mov dword ptr [esp+0x70],ebx
	lea eax,[esp+0x28]
	push 0x9A9
	push eax
	mov dword ptr [esp+0x70],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x78]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x78]
	push edx
	mov byte ptr [esp+0x74],0xF
	call ZXString16::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x68],0xE
	cmp eax,ebx
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block48:
	push ebx
	push 0xFF
	push 3
	push ecx
	lea eax,[edi+0x1960]
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x88],0x10
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [edi+0x640]
	mov edi,dword ptr [esp+0x8C]
	not eax
	and eax,1
	push eax
	lea edx,[esp+0x48]
	push edi
	push edx
	mov byte ptr [esp+0x90],0xE
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x6C],0x11
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	push 0x20
	mov ecx,esi
	mov byte ptr [esp+0x74],0x12
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [edx+0xC],ebx
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp edi,ebx
	je Block52

 Block51:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block52:
	cmp dword ptr [ebp],ebx
	sete al
	cmp al,bl
	je Block63

 Block53:
	mov dword ptr [esp+0x70],ebx
	lea eax,[esp+0x28]
	push 0x9A9
	push eax
	mov dword ptr [esp+0x70],0x13
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x78]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x78]
	push edx
	mov byte ptr [esp+0x74],0x14
	call ZXString16::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x68],0x13
	cmp eax,ebx
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block55:
	mov esi,dword ptr [esp+0x74]
	push ebx
	push 0xFF
	push 3
	push ecx
	lea eax,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [esp+0x84],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x88],0x15
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [esi+0x640]
	mov esi,dword ptr [esp+0x8C]
	not eax
	and eax,1
	push eax
	lea edx,[esp+0x98]
	push esi
	push edx
	mov byte ptr [esp+0x90],0x13
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x78]
	cmp eax,ebx
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block57:
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x6C],0x16
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	push 0x20
	mov ecx,ebp
	mov byte ptr [esp+0x74],0x17
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [edx+0xC],ebx
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp esi,ebx
	je Block63

 Block58:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4
	jmp Block63

 Block59:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block61

 Block60:
	mov dword ptr [esi],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov eax,dword ptr [ebp]
	cmp eax,ebx
	je Block63

 Block62:
	mov dword ptr [ebp],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block63:
	mov eax,1

 Block64:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 0xC
}
}
// CUser::UpdateKeywordEffects
_SUB_EXCEPTION_HANDLER(4EA590)
__SUB_CLASS_THIS0(004EA590, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4EA590
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
	lea ecx,[esi+0x3A18]
	mov dword ptr [esp+0x40],ecx
	call CKeywordEffectManager::ClearKeyword
	xor ebx,ebx
	add esi,0xA5
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],esi

 Block1:
	mov eax,dword ptr [esi]
	mov dword ptr [esp+0x3C],eax
	cmp eax,ebx
	je Block54

 Block2:
	push eax
	lea eax,[esp+0x18]
	push eax
	call CKeywordEffectManager::GetKeywordEffectProp
	add esp,8
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	sete al
	mov dword ptr [esp+0x80],ebx
	cmp al,bl
	je Block5

 Block3:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp ecx,ebx
	je Block54

 Block4:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	jmp Block54

 Block5:
	cmp ecx,ebx
	je Block56

 Block6:
	lea edx,[esp+0x2C]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x84],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block10

 Block9:
	cmp eax,0x80004002
	jne Block57

 Block10:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x80],3
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x80],4
	mov dword ptr [esp+0x30],ebx

 Block13:
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebx
	je Block56

 Block14:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block48

 Block15:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x24]
	push eax
	call DetachBSTR
	add esp,8
	mov ebp,dword ptr [esp+0x20]
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block17

 Block16:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x8C],6
	cmp ecx,ebx
	je Block56

 Block18:
	lea edx,[esp+0x64]
	push edx
	mov byte ptr [esp+0x90],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x88],7
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x38],esi
	cmp eax,ebx
	je Block21

 Block19:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x34]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x34]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [esp+0x38],esi
	jge Block21

 Block20:
	cmp eax,0x80004002
	jne Block57

 Block21:
	mov edi,8
	mov byte ptr [esp+0x80],9
	cmp word ptr [esp+0x58],di
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	cmp eax,ebx
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block25:
	cmp esi,ebx
	je Block38

 Block26:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x699
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x6C]
	mov byte ptr [esp+0x84],0xA
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x88],9
	call IWzProperty::Getitem
	mov byte ptr [esp+0x80],0xB
	cmp word ptr [eax],di
	jne Block28

 Block27:
	mov eax,dword ptr [eax+8]
	jmp Block29

 Block28:
	mov eax,offset _S___3

 Block29:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebx
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x80],0xD
	cmp word ptr [esp+0x68],di
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebx
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov edi,dword ptr [esp+0x1C]
	cmp edi,ebx
	je Block36

 Block34:
	cmp byte ptr [edi],bl
	je Block36

 Block35:
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x48],esp
	push esi
	call eax
	mov ecx,dword ptr [esp+0x40]
	push ecx
	mov ecx,dword ptr [esp+0x48]
	push edi
	call CKeywordEffectManager::RegisterKeyword

 Block36:
	mov byte ptr [esp+0x80],9
	cmp edi,ebx
	je Block38

 Block37:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov byte ptr [esp+0x80],5
	cmp esi,ebx
	je Block40

 Block39:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block40:
	mov byte ptr [esp+0x80],4
	cmp ebp,ebx
	je Block13

 Block41:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block47

 Block42:
	mov eax,dword ptr [ebp]
	cmp eax,ebx
	je Block44

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block44:
	mov eax,dword ptr [ebp+4]
	cmp eax,ebx
	je Block46

 Block45:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block46:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block47:
	mov dword ptr [esp+0x20],ebx
	jmp Block13

 Block48:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],3
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebx
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x84],bl
	call edx
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp eax,ebx
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov eax,dword ptr [esp+0x24]
	mov esi,dword ptr [esp+0x28]
	inc eax
	add esi,4
	cmp eax,0x3C
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x28],esi
	jl Block1

 Block55:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	push eax
	call _com_issue_error
}
}
// CUser::OnSetDead
__SUB_CLASS_THIS(000BC050, __thiscall, 16638,  CUser, void, int32_t) {
__asm {

 Block0:
	ret 4
}
}
// CUser::SetNewYearCardEffect
_SUB_EXCEPTION_HANDLER(4F1450)
__SUB_CLASS_THIS(004F1450, __thiscall, 16650,  CUser, int32_t, long, CUser*, unsigned long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F1450
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	cmp dword ptr [esi+0x638],ebx
	je Block2

 Block1:
	xor eax,eax
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x44
	ret 0x10

 Block2:
	test byte ptr [esp+0x58],2
	jne Block6

 Block3:
	push ebx
	lea eax,[esp+0x64]
	lea edi,[esi+0x19C8]
	push eax
	mov ecx,edi
	call ZMap<unsigned long, long, unsigned long>::GetAt
	cmp eax,ebx
	je Block5

 Block4:
	mov eax,dword ptr [eax]
	lea ecx,[eax+eax*8]
	lea ecx,[esi+ecx*4+0x2F24]
	call CUser::ADDITIONALLAYER::Reset

 Block5:
	lea edx,[esp+0x60]
	push edx
	mov ecx,edi
	call ZMap<unsigned long, long, unsigned long>::RemoveKey
	jmp Block47

 Block6:
	mov eax,dword ptr [esp+0x60]
	push eax
	call CUser::RetrieveNewYearCardAdditionalLayer
	mov edi,eax
	mov ecx,edi
	call CUser::ADDITIONALLAYER::Reset
	add edi,0x14
	cmp dword ptr [edi],ebx
	sete al
	cmp al,bl
	je Block47

 Block7:
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[esi+4]
	lea eax,[esp+0x20]
	push eax
	call edx
	mov dword ptr [esp+0x60],ebx
	lea eax,[esp+0x14]
	push 0x3D2
	push eax
	mov dword ptr [esp+0x58],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x64]
	push ecx
	push eax
	mov byte ptr [esp+0x5C],1
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x50],bl
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	mov dword ptr [esp+0x10],ebx
	lea edx,[esp+0x14]
	push 0x3D2
	push edx
	mov byte ptr [esp+0x58],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x14]
	push ecx
	push eax
	mov byte ptr [esp+0x5C],3
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x50],2
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	lea edx,[esp+0x14]
	push edx
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x50],4
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block13:
	mov ecx,dword ptr [esp+0x10]
	mov byte ptr [esp+0x50],5
	cmp ecx,ebx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea edx,[esp+0x28]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x28]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x50],2
	cmp eax,ebx
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov dword ptr [esp+0x58],ebx
	lea eax,[esp+0x14]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x58],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x5C]
	push ecx
	push eax
	mov byte ptr [esp+0x5C],7
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x50],6
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	mov esi,dword ptr [esp+0x5C]
	lea edx,[esp+0x5C]
	push edx
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x50],8
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	mov ecx,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],9
	cmp ecx,ebx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x28]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x28]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],6
	cmp eax,ebx
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	mov eax,dword ptr [esi+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[esi+4]
	lea edx,[esp+0x18]
	push edx
	call eax
	mov ecx,dword ptr [esp+0x60]
	cmp ecx,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x24]
	add eax,edx
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x18]
	sar eax,1
	sub eax,0x14
	push eax
	mov eax,dword ptr [esp+0x24]
	add eax,edx
	cdq
	sub eax,edx
	sar eax,1
	push eax
	call IWzShape2D::Move
	mov ecx,dword ptr [esp+0x60]
	cmp ecx,ebx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov edx,dword ptr [esp+0x10]
	push 1
	push 1
	push 2
	push 2
	push edx
	call IWzVector2D::Ratio
	mov ecx,dword ptr [esp+0x60]
	cmp ecx,ebx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov eax,dword ptr [esp+0x58]
	push 1
	push 1
	push 2
	push 2
	push eax
	call IWzVector2D::Ratio
	mov dword ptr [esp+0x5C],ebx
	lea ecx,[esp+0x14]
	push 0x9AB
	push ecx
	mov byte ptr [esp+0x58],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esp+0x64]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x64]
	push eax
	mov byte ptr [esp+0x5C],0xB
	call ZXString16::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x50],0xA
	cmp eax,ebx
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block33:
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov dword ptr [esp+0x74],esp
	mov eax,esp
	push ebx
	mov dword ptr [eax],ebx
	push ebx
	push ecx
	mov ecx,dword ptr [esp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x7C]
	mov dword ptr [esp+0x30],esp
	cmp eax,ebx
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block35:
	mov esi,dword ptr [esp+0x78]
	push ebx
	lea ecx,[esp+0x84]
	push esi
	push ecx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x64]
	cmp eax,ebx
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block37:
	push offset _D_VTMISSING
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x54],0xC
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x50],0xD
	cmp ecx,ebx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x28]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x38]
	call Ztl_variant_t::~Ztl_variant_t
	mov byte ptr [esp+0x50],6
	cmp esi,ebx
	je Block41

 Block40:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block41:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],2
	cmp eax,ebx
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x50],bl
	cmp eax,ebx
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block45:
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp eax,ebx
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	mov eax,1
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x44
	ret 0x10
}
}
// CUser::UpdateAdditionalLayer
_SUB_EXCEPTION_HANDLER(4E08B0)
__SUB_CLASS_THIS0(004E08B0, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E08B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC4]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x20],ecx
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x1C],eax
	jmp Block3

 Block2:
	mov eax,dword ptr [esp+0x1C]

 Block3:
	cmp eax,0x36
	jl Block6

 Block4:
	cmp eax,0x4B
	jl Block102

 Block5:
	mov eax,dword ptr [esp+0x1C]

 Block6:
	mov ecx,dword ptr [esp+0x20]
	lea eax,[eax+eax*8]
	cmp dword ptr [ecx+eax*4+0x2F38],0
	lea ebp,[ecx+eax*4+0x2F24]
	sete al
	test al,al
	jne Block102

 Block7:
	cmp dword ptr [ebp+0xC],0
	jne Block102

 Block8:
	mov edx,ecx
	mov esi,dword ptr [edx+0x1960]
	test esi,esi
	je Block104

 Block9:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block11

 Block10:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block11:
	mov esi,dword ptr [ebp+0x14]
	test esi,esi
	je Block104

 Block12:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xD8]
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	cmp dword ptr [esp+0x1C],0x3C
	je Block66

 Block15:
	mov edi,dword ptr [esp+0x20]
	add edi,0x88
	mov ecx,edi
	call CAvatar::IsOnPlayingRotateAction
	test eax,eax
	je Block22

 Block16:
	mov ecx,dword ptr [ebp+0x14]
	xor ebx,ebx
	cmp ecx,ebx
	je Block104

 Block17:
	lea eax,[esp+0x30]
	push eax
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	or dword ptr [esp+0x14],1
	mov dword ptr [esp+0xCC],ebx
	cmp esi,ebx
	je Block104

 Block18:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block20

 Block19:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	cmp dword ptr [esp+0x18],ebx
	jle Block22

 Block21:
	mov bl,1
	jmp Block23

 Block22:
	xor bl,bl

 Block23:
	or esi,0xFFFFFFFF
	test byte ptr [esp+0x14],1
	mov dword ptr [esp+0xCC],esi
	je Block26

 Block24:
	mov eax,dword ptr [esp+0x30]
	and dword ptr [esp+0x14],0xFFFFFFFE
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	test bl,bl
	je Block40

 Block27:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x64]
	push eax
	call edi
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block105

 Block28:
	lea edx,[esp+0x44]
	push edx
	mov dword ptr [esp+0xD0],1
	call edi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block105

 Block29:
	mov ecx,dword ptr [ebp+0x14]
	mov byte ptr [esp+0xCC],2
	test ecx,ecx
	je Block104

 Block30:
	lea edx,[esp+0x2C]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xCC],3
	test ecx,ecx
	je Block104

 Block31:
	lea eax,[esp+0x64]
	push eax
	lea edx,[esp+0x48]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xCC],2
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	mov edi,8
	mov byte ptr [esp+0xCC],1
	cmp word ptr [esp+0x44],di
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov dword ptr [esp+0xCC],esi
	cmp word ptr [esp+0x64],di
	jne Block39

 Block38:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	jmp Block62

 Block39:
	lea eax,[esp+0x64]
	jmp Block65

 Block40:
	mov ecx,edi
	call CAvatar::IsOnPlayingRotateAction
	test eax,eax
	jne Block45

 Block41:
	mov ecx,dword ptr [ebp+0x14]
	test ecx,ecx
	je Block104

 Block42:
	lea edx,[esp+0x3C]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	or dword ptr [esp+0x14],2
	mov dword ptr [esp+0xCC],4
	test ecx,ecx
	je Block104

 Block43:
	call IWzShape2D::Getx
	test eax,eax
	jne Block45

 Block44:
	mov bl,1
	jmp Block46

 Block45:
	xor bl,bl

 Block46:
	test byte ptr [esp+0x14],2
	mov dword ptr [esp+0xCC],esi
	je Block49

 Block47:
	mov eax,dword ptr [esp+0x3C]
	and dword ptr [esp+0x14],0xFFFFFFFD
	test eax,eax
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
	test bl,bl
	je Block66

 Block50:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x74]
	push eax
	call edi
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block105

 Block51:
	lea edx,[esp+0x54]
	push edx
	mov dword ptr [esp+0xD0],5
	call edi
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block105

 Block52:
	mov ecx,dword ptr [ebp+0x14]
	mov byte ptr [esp+0xCC],6
	test ecx,ecx
	je Block104

 Block53:
	lea edx,[esp+0x34]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xCC],7
	test ecx,ecx
	je Block104

 Block54:
	lea eax,[esp+0x74]
	push eax
	lea edx,[esp+0x58]
	push edx
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0xCC],6
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	mov edi,8
	mov byte ptr [esp+0xCC],5
	cmp word ptr [esp+0x54],di
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov dword ptr [esp+0xCC],esi
	cmp word ptr [esp+0x74],di
	jne Block64

 Block61:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx

 Block62:
	test eax,eax
	je Block66

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block64:
	lea eax,[esp+0x74]

 Block65:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block66:
	cmp dword ptr [ebp+0x20],0
	lea edi,[ebp+0x20]
	sete al
	test al,al
	jne Block102

 Block67:
	cmp dword ptr [ebp+0x18],0
	jne Block102

 Block68:
	mov ebx,dword ptr [esp+0x20]
	mov esi,dword ptr [ebx+0x1960]
	test esi,esi
	je Block104

 Block69:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block71

 Block70:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block71:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block104

 Block72:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD8]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block74

 Block73:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block74:
	cmp dword ptr [esp+0x1C],0x3C
	je Block102

 Block75:
	lea esi,[ebx+0x88]
	mov ecx,esi
	call CAvatar::IsOnPlayingRotateAction
	test eax,eax
	je Block80

 Block76:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block104

 Block77:
	lea edx,[esp+0x28]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	or dword ptr [esp+0x14],4
	mov dword ptr [esp+0xCC],8
	test ecx,ecx
	je Block104

 Block78:
	call IWzShape2D::Getx
	test eax,eax
	jle Block80

 Block79:
	mov bl,1
	jmp Block81

 Block80:
	xor bl,bl

 Block81:
	or ebp,0xFFFFFFFF
	test byte ptr [esp+0x14],4
	mov dword ptr [esp+0xCC],ebp
	je Block84

 Block82:
	mov eax,dword ptr [esp+0x28]
	and dword ptr [esp+0x14],0xFFFFFFFB
	test eax,eax
	je Block84

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block84:
	test bl,bl
	je Block90

 Block85:
	push offset _D_VTMISSING
	lea ecx,[esp+0xA8]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x88]
	mov dword ptr [esp+0xD0],9
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xCC],0xA
	test ecx,ecx
	je Block104

 Block86:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xCC],0xB
	test ecx,ecx
	je Block104

 Block87:
	lea edx,[esp+0xA4]
	push edx
	lea eax,[esp+0x88]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xCC],0xA
	test eax,eax
	je Block89

 Block88:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block89:
	lea ecx,[esp+0x84]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xA4]
	jmp Block101

 Block90:
	mov ecx,esi
	call CAvatar::IsOnPlayingRotateAction
	test eax,eax
	jne Block93

 Block91:
	lea eax,[esp+0x38]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	or dword ptr [esp+0x14],8
	mov ecx,eax
	mov dword ptr [esp+0xCC],0xC
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Getx
	test eax,eax
	jne Block93

 Block92:
	mov bl,1
	jmp Block94

 Block93:
	xor bl,bl

 Block94:
	test byte ptr [esp+0x14],8
	mov dword ptr [esp+0xCC],ebp
	je Block97

 Block95:
	mov eax,dword ptr [esp+0x38]
	and dword ptr [esp+0x14],0xFFFFFFF7
	test eax,eax
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block97:
	test bl,bl
	je Block102

 Block98:
	push offset _D_VTMISSING
	lea ecx,[esp+0xB8]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x98]
	mov dword ptr [esp+0xD0],0xD
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x40]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xD0],0xE
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	lea ecx,[esp+0xB4]
	push ecx
	lea edx,[esp+0x98]
	push edx
	push 0
	push 0xFF
	mov ecx,eax
	mov byte ptr [esp+0xDC],0xF
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xCC],0xE
	test eax,eax
	je Block100

 Block99:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block100:
	lea ecx,[esp+0x94]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xB4]

 Block101:
	mov dword ptr [esp+0xCC],ebp
	call Ztl_variant_t::~Ztl_variant_t

 Block102:
	mov eax,dword ptr [esp+0x1C]
	inc eax
	cmp eax,0x4B
	mov dword ptr [esp+0x1C],eax
	jl Block2

 Block103:
	mov ecx,dword ptr [esp+0xC4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xBC
	ret

 Block104:
	push 0x80004003
	call _com_issue_error

 Block105:
	push eax
	call _com_issue_error
}
}
// CGrenade::Update
_SUB_EXCEPTION_HANDLER(1690D0)
__SUB_CLASS_THIS(001690D0, __thiscall, 81206,  CGrenade, int32_t, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1690D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	cmp dword ptr [esi+0x14],ebx
	je Block46

 Block1:
	cmp dword ptr [esi+0x4C],ebx
	je Block3

 Block2:
	call get_update_time
	cmp dword ptr [esi+0x4C],eax
	jg Block46

 Block3:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x54],ebx
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov ecx,dword ptr [esi+0x18]
	mov byte ptr [esp+0x50],1
	cmp ecx,ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x50],2
	cmp ecx,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x50],1
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov edi,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x18],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp word ptr [esp+0x28],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov dword ptr [esi+0x4C],ebx
	cmp dword ptr [esi+0x50],ebx
	je Block25

 Block22:
	call get_update_time
	cmp dword ptr [esi+0x50],eax
	jg Block25

 Block23:
	mov dword ptr [esi+0x50],ebx

 Block24:
	mov eax,1
	jmp Block47

 Block25:
	mov eax,dword ptr [esi+0x14]
	cmp eax,ebx
	je Block27

 Block26:
	lea ebp,[eax-0xC]
	jmp Block28

 Block27:
	xor ebp,ebp

 Block28:
	mov ecx,ebp
	call CVecCtrl::UpdateActive
	mov ecx,dword ptr [esi+0x24]
	mov edx,dword ptr [esi+0x28]
	lea edi,[esi+0x24]
	lea eax,[esp+0x38]
	push eax
	mov dword ptr [esi+0x2C],ecx
	mov dword ptr [esi+0x30],edx
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov ecx,dword ptr [esi+0x14]
	mov dword ptr [esp+0x50],3
	cmp ecx,ebx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea edx,[esp+0x38]
	push edx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea eax,[esi+0x28]
	push eax
	push edi
	call IWzVector2D::_GetSnapshot
	cmp word ptr [esp+0x38],8
	mov dword ptr [esp+0x50],0xFFFFFFFF
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	cmp dword ptr [esi+0x44],0x423D0B
	je Block41

 Block37:
	cmp dword ptr [ebp+0x2FC],ebx
	je Block46

 Block38:
	mov ecx,dword ptr [esi+0x10]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	mov ecx,esi
	test eax,eax
	je Block40

 Block39:
	call CGrenade::BombAndAttackMob
	mov eax,1
	jmp Block47

 Block40:
	call CGrenade::JustBomb
	mov eax,1
	jmp Block47

 Block41:
	mov edi,dword ptr [esp+0x58]
	cmp edi,ebx
	je Block44

 Block42:
	mov ecx,dword ptr [esi+0x10]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	test eax,eax
	je Block24

 Block43:
	push edi
	mov ecx,esi
	call CGrenade::SendTimeBombInfo
	jmp Block47

 Block44:
	cmp dword ptr [ebp+0x2FC],ebx
	jne Block24

 Block45:
	mov ecx,ebp
	call CVecCtrl::IsStopped
	test eax,eax
	jne Block24

 Block46:
	xor eax,eax

 Block47:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 4
}
}
// CUser::ShowSkillEffect
_SUB_EXCEPTION_HANDLER(4F6F60)
__SUB_CLASS_THIS(004F6F60, __thiscall, 16701,  CUser, void, const SKILLENTRY*, long, long, int32_t, long, tagPOINT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x58]
	sub esp,0x58
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F6F60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x354
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x54],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x638],0
	jne Block23

 Block1:
	call CUser::IsSamePhaseWithLocalUser
	test eax,eax
	je Block23

 Block2:
	mov ebx,dword ptr [ebp+0x60]
	mov edi,dword ptr [ebx]
	cmp edi,0x21612AA
	je Block23

 Block3:
	cmp dword ptr [ebx+0x20C],0
	je Block5

 Block4:
	mov al,byte ptr [ebp+0x64]
	jmp Block6

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	mov ecx,esi
	call edx

 Block6:
	push eax
	lea eax,[ebp+0x48]
	push eax
	mov ecx,ebx
	call SKILLENTRY::GetEffectUOL
	lea ecx,[ebp+0x20]
	push ecx
	mov ecx,ebx
	mov dword ptr [ebp-4],0
	call SKILLENTRY::GetScreenEffectUOL
	mov eax,0x6B5FCA6B
	imul edi
	sar edx,0x16
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov byte ptr [ebp-4],1
	cmp eax,9
	jne Block8

 Block7:
	xor ecx,ecx
	cmp dword ptr [ebp+0x6C],ecx
	sete cl
	mov dword ptr [ebp+0x38],ecx
	jmp Block11

 Block8:
	mov ecx,dword ptr [esi+0x1960]
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	call IWzGr2DLayer::Getflip
	mov dword ptr [ebp+0x38],eax

 Block11:
	cmp edi,0x989A73
	jg Block110

 Block12:
	cmp edi,0x989A72
	jge Block282

 Block13:
	cmp edi,0x4C4F2B
	jg Block43

 Block14:
	je Block52

 Block15:
	cmp edi,0x111AF0
	jg Block34

 Block16:
	je Block30

 Block17:
	cmp edi,0x10F3DB
	jg Block27

 Block18:
	je Block120

 Block19:
	cmp edi,0x3F3
	jg Block24

 Block20:
	cmp edi,0x3F2
	jge Block282

 Block21:
	cmp edi,0x3EC
	jne Block343

 Block22:
	lea ecx,[ebp+0x20]
	call Ztl_bstr_t::~Ztl_bstr_t
	lea ecx,[ebp+0x48]
	call Ztl_bstr_t::~Ztl_bstr_t

 Block23:
	lea esp,[ebp-0x370]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x54]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x58
	mov esp,ebp
	pop ebp
	ret 0x18

 Block24:
	cmp edi,0xF462B
	jne Block343

 Block25:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x2C0]
	call Ztl_variant_t::_ctor_1
	mov edx,3
	mov word ptr [ebp-0x180],dx
	mov dword ptr [ebp-0x178],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],dl
	test ecx,ecx
	jne Block134

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov eax,edi
	sub eax,0x10F3DD
	je Block120

 Block28:
	sub eax,5
	je Block126

 Block29:
	jmp Block343

 Block30:
	mov eax,dword ptr [ebp+0x68]
	add eax,0xA
	imul eax,0x3E8
	push 0
	push 0
	cdq
	push 0
	push 3
	and edx,0xF
	add eax,edx
	push 0x7FFFFFFF
	sar eax,4
	push eax
	push ecx
	lea edx,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov byte ptr [ebp-4],0x2B

 Block31:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x44],esp
	push eax
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [ebp+0x38]
	mov eax,dword ptr [eax]
	push ecx
	jmp Block387

 Block33:
	mov ecx,dword ptr [ebp+0x38]
	xor eax,eax
	push ecx
	jmp Block387

 Block34:
	cmp edi,0x140119
	jg Block40

 Block35:
	je Block39

 Block36:
	cmp edi,0x127A7A
	je Block38

 Block37:
	cmp edi,0x12A191
	jne Block343

 Block38:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	mov ecx,esi
	call eax
	mov ecx,eax
	call SecondaryStat::_ZtlSecureGet_rWeaponCharge_
	push eax
	call get_element_by_charged_skillid
	mov edi,eax
	add esp,4
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push eax
	push edi
	call _Int2StrW
	add esp,8
	push eax
	lea ecx,[ebp+0x44]
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x44]
	push ecx
	push offset _S___9
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],0x26
	call Ztl_bstr_t::op_add_assign
	mov ecx,eax
	call _xbstr_t::operator+=
	lea ecx,[ebp+0x44]
	call _xbstr_t::~_xbstr_t
	mov eax,dword ptr [ebp+0x68]
	add eax,0xA
	imul eax,0x3E8
	push 0
	push 0
	cdq
	push 0
	push 3
	and edx,0xF
	add eax,edx
	push 0x7FFFFFFF
	sar eax,4
	push eax
	push ecx
	lea edx,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov byte ptr [ebp-4],0x27
	jmp Block31

 Block39:
	mov edx,dword ptr [ebp+0x64]
	push 0
	push 0
	push 0
	push 3
	push edx
	mov ecx,ebx
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nAttackCount
	push eax
	mov eax,dword ptr [ebp+0x68]
	add eax,0xA
	imul eax,0x3E8
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	push eax
	push ecx
	lea eax,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov byte ptr [ebp-4],0x25
	jmp Block382

 Block40:
	cmp edi,0x1E886B
	je Block25

 Block41:
	cmp edi,0x20361A
	je Block230

 Block42:
	jmp Block343

 Block43:
	cmp edi,0x4F7F90
	jg Block55

 Block44:
	je Block52

 Block45:
	cmp edi,0x4DFCDE
	jg Block50

 Block46:
	je Block193

 Block47:
	mov eax,edi
	sub eax,0x4DD5CC
	je Block193

 Block48:
	sub eax,3
	je Block22

 Block49:
	jmp Block343

 Block50:
	cmp edi,0x4E23EC
	je Block193

 Block51:
	cmp edi,0x4F5C6C
	jne Block343

 Block52:
	mov eax,dword ptr [ebp+0x68]
	add eax,0xA
	imul eax,0x3E8
	cdq
	and edx,0xF
	add eax,edx
	mov ebx,eax
	lea ecx,[ebp+0x48]
	sar ebx,4
	call _xbstr_t::length
	test eax,eax
	je Block388

 Block53:
	push 0
	push 0xFF
	push 3
	push ecx
	lea edx,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x44],esp
	push eax
	lea ecx,[esi+0x88]
	mov byte ptr [ebp-4],0x37
	call CAvatar::GetSuitableMuzzleOrigin
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block105

 Block54:
	mov eax,dword ptr [eax]
	jmp Block106

 Block55:
	cmp edi,0x4FAA8E
	jg Block102

 Block56:
	je Block22

 Block57:
	cmp edi,0x4F837C
	jl Block343

 Block58:
	cmp edi,0x4F837D
	jle Block61

 Block59:
	cmp edi,0x4FAA8B
	je Block193

 Block60:
	jmp Block343

 Block61:
	lea ecx,[ebp+0x48]
	call _xbstr_t::length
	test eax,eax
	je Block388

 Block62:
	mov dword ptr [ebp+0x3C],0
	lea eax,[ebp-0x74]
	push 0x3D2
	push eax
	mov byte ptr [ebp-4],0x3A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[ebp+0x3C]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x3B
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x74]
	add esp,0xC
	mov byte ptr [ebp-4],0x3A
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block64:
	lea edx,[ebp-0xA0]
	push edx
	mov ecx,esi
	call CUser::GetVecCtrl_0
	lea ecx,[ebp-0x318]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0x3C
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getorigin
	movzx ecx,word ptr [eax]
	cmp cx,9
	je Block71

 Block65:
	cmp cx,0xD
	je Block71

 Block66:
	mov edx,0x4009
	cmp cx,dx
	je Block69

 Block67:
	mov edx,0x400D
	cmp cx,dx
	je Block69

 Block68:
	xor edi,edi
	jmp Block72

 Block69:
	mov eax,dword ptr [eax+8]
	test eax,eax
	je Block68

 Block70:
	mov edi,dword ptr [eax]
	jmp Block72

 Block71:
	mov edi,dword ptr [eax+8]

 Block72:
	lea ecx,[ebp-0x318]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp-0xA0]
	mov byte ptr [ebp-4],0x3A
	test eax,eax
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block74:
	test edi,edi
	je Block79

 Block75:
	lea eax,[ebp-0xB0]
	push eax
	mov ecx,esi
	call CUser::GetVecCtrl_0
	lea ecx,[ebp-0x328]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0x3F
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getorigin
	mov ecx,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x40
	test ecx,ecx
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	push eax
	call IWzVector2D::Putorigin
	lea ecx,[ebp-0x328]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp-0xB0]
	mov byte ptr [ebp-4],0x3A
	test eax,eax
	je Block79

 Block78:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block79:
	lea edi,[esi+0x88]
	mov ecx,edi
	call CAvatar::IsRidingSkillVehicle
	test eax,eax
	je Block87

 Block80:
	lea ecx,[ebp-0xB8]
	push 0x4A7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],0x41
	call _xbstr_t::operator+=
	lea ecx,[ebp-0xB8]
	mov byte ptr [ebp-4],0x3A
	call Ztl_bstr_t::~Ztl_bstr_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x300]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x2E0]
	mov byte ptr [ebp-4],0x42
	call Ztl_variant_t::_ctor_1
	lea edx,[ebp-0xE4]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x43
	call CUser::GetVecCtrl_0
	mov edi,eax
	lea eax,[ebp-0xDC]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x44
	call CUser::GetVecCtrl_0
	mov ebx,eax
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x45
	test eax,eax
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	lea ecx,[ebp-0x300]
	push ecx
	lea edx,[ebp-0x2E0]
	push edx
	mov ecx,edi
	mov dword ptr [ebp+0x44],eax
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getry
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getrx
	mov ecx,dword ptr [ebp+0x44]
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp-0xDC]
	mov byte ptr [ebp-4],0x44
	test eax,eax
	je Block84

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block84:
	mov eax,dword ptr [ebp-0xE4]
	mov byte ptr [ebp-4],0x43
	test eax,eax
	je Block86

 Block85:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block86:
	lea ecx,[ebp-0x2E0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x300]
	jmp Block98

 Block87:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x240]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x2B0]
	mov byte ptr [ebp-4],0x46
	call Ztl_variant_t::_ctor_1
	lea eax,[ebp-0xFC]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x47
	call CUser::GetVecCtrl_0
	mov dword ptr [ebp+0x34],eax
	lea ecx,[ebp-0x110]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x48
	call CAvatar::GetSuitableMuzzleOrigin
	mov ebx,eax
	lea edx,[ebp-0xF4]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x49
	call CUser::GetVecCtrl_0
	mov dword ptr [ebp+0x30],eax
	lea eax,[ebp-0xEC]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x4A
	call CAvatar::GetSuitableMuzzleOrigin
	mov dword ptr [ebp+0x4C],eax
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x4B
	test eax,eax
	jne Block89

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
	lea edi,[esi+0x1944]
	mov ecx,edi
	mov dword ptr [ebp+0x2C],eax
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getry
	mov ecx,ebx
	mov dword ptr [ebp+0x44],eax
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getry
	mov ecx,dword ptr [ebp+0x44]
	lea ebx,[ecx+eax]
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getrx
	mov ecx,dword ptr [ebp+0x4C]
	mov edi,eax
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getrx
	lea ecx,[ebp-0x240]
	push ecx
	mov ecx,dword ptr [ebp+0x34]
	lea edx,[ebp-0x2B0]
	push edx
	add edi,eax
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getry
	mov ecx,dword ptr [ebp+0x30]
	add eax,ebx
	push eax
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getrx
	mov ecx,dword ptr [ebp+0x2C]
	add eax,edi
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp-0xEC]
	mov byte ptr [ebp-4],0x4A
	test eax,eax
	je Block91

 Block90:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block91:
	mov eax,dword ptr [ebp-0xF4]
	mov byte ptr [ebp-4],0x49
	test eax,eax
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block93:
	mov eax,dword ptr [ebp-0x110]
	mov byte ptr [ebp-4],0x48
	test eax,eax
	je Block95

 Block94:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block95:
	mov eax,dword ptr [ebp-0xFC]
	mov byte ptr [ebp-4],0x47
	test eax,eax
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block97:
	lea ecx,[ebp-0x2B0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x240]

 Block98:
	mov byte ptr [ebp-4],0x3A
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+0x70]
	push 0
	push 0
	push 0
	push 3
	push eax
	mov eax,dword ptr [ebp+0x68]
	add eax,0xA
	imul eax,0x3E8
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	push eax
	push ecx
	lea edx,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	lea eax,[ebp+0x3C]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block100

 Block99:
	mov eax,dword ptr [eax]
	jmp Block101

 Block100:
	xor eax,eax

 Block101:
	mov ecx,dword ptr [ebp+0x38]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_SkillUse
	mov eax,dword ptr [ebp+0x3C]
	jmp Block220

 Block102:
	cmp edi,0x4FAA91
	je Block52

 Block103:
	cmp edi,0x989A6C
	je Block22

 Block104:
	jmp Block343

 Block105:
	xor eax,eax

 Block106:
	mov ecx,dword ptr [ebp+0x38]
	push ecx
	push eax
	lea edx,[ebp-0xC0]
	push edx
	mov byte ptr [ebp-4],1
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	lea edi,[esi+0x1974]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [ebp-0xC0]
	test eax,eax
	je Block108

 Block107:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block108:
	cmp dword ptr [edi],0
	sete al
	test al,al
	sete al
	test al,al
	je Block388

 Block109:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x2A0]
	call Ztl_variant_t::_ctor_1
	mov eax,3
	mov word ptr [ebp-0x170],ax
	mov dword ptr [ebp-0x168],ebx
	lea ecx,[ebp-0x2A0]
	push ecx
	lea edx,[ebp-0x170]
	push edx
	push 0
	mov ecx,edi
	mov byte ptr [ebp-4],0x39
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[ebp-0x170]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x2A0]
	mov byte ptr [ebp-4],1
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block388

 Block110:
	cmp edi,0x1C9C76C
	jg Block264

 Block111:
	je Block22

 Block112:
	cmp edi,0x13130EC
	jg Block222

 Block113:
	je Block22

 Block114:
	cmp edi,0xB71EEA
	jg Block191

 Block115:
	je Block25

 Block116:
	cmp edi,0xA98A5B
	jg Block125

 Block117:
	cmp edi,0xA98A5A
	jge Block120

 Block118:
	cmp edi,0xA7DCA9
	je Block25

 Block119:
	jmp Block343

 Block120:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+8]
	mov ecx,esi
	call edx
	mov ecx,eax
	call SecondaryStat::_ZtlSecureGet_nComboCounter_
	mov ebx,eax
	dec ebx
	lea eax,[ebx-1]
	cmp eax,9
	ja Block388

 Block121:
	mov dword ptr [ebp+0x44],0
	lea ecx,[ebp-0x6C]
	push 0x9A3
	push ecx
	mov byte ptr [ebp-4],0x22
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	push ebx
	mov eax,edx
	shr eax,0x1F
	push edi
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x23
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x6C]
	add esp,0x14
	mov byte ptr [ebp-4],0x22
	test eax,eax
	je Block123

 Block122:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block123:
	mov eax,dword ptr [ebp+0x68]
	add eax,0xA
	imul eax,0x3E8
	push 0
	push 0
	cdq
	push 0
	push 3
	and edx,0xF
	add eax,edx
	push 0xFFFFFFFF
	sar eax,4
	push eax
	push ecx
	lea edx,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x24
	call CUser::GetVecCtrl_0
	mov edi,dword ptr [ebp+0x44]
	push 0
	mov byte ptr [ebp-4],0x22
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edi
	call CAnimationDisplayer::Effect_SkillUse
	mov byte ptr [ebp-4],1
	test edi,edi
	je Block388

 Block124:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4
	jmp Block388

 Block125:
	cmp edi,0xA98A5C
	jne Block343

 Block126:
	mov ecx,dword ptr [esi+0x58C]
	push ecx
	call get_weapon_type
	add esp,4
	cmp eax,0x1E
	je Block131

 Block127:
	cmp eax,0x1F
	je Block131

 Block128:
	cmp eax,0x28
	je Block130

 Block129:
	cmp eax,0x29
	jne Block133

 Block130:
	push offset _S_1__2
	lea ecx,[ebp+0x44]
	call _xbstr_t::_ctor_0
	lea edx,[ebp+0x44]
	mov byte ptr [ebp-4],0x29
	push edx
	jmp Block132

 Block131:
	push offset _S_0__2
	lea ecx,[ebp+0x44]
	call _xbstr_t::_ctor_0
	lea eax,[ebp+0x44]
	mov byte ptr [ebp-4],0x28
	push eax

 Block132:
	lea ecx,[ebp+0x48]
	call _xbstr_t::operator+=
	lea ecx,[ebp+0x44]
	call Ztl_bstr_t::~Ztl_bstr_t

 Block133:
	mov eax,dword ptr [ebp+0x68]
	add eax,0xA
	imul eax,0x3E8
	push 0
	push 0
	cdq
	push 0
	push 3
	and edx,0xF
	add eax,edx
	push 0x7FFFFFFF
	sar eax,4
	push eax
	push ecx
	lea edx,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov byte ptr [ebp-4],0x2A
	jmp Block31

 Block134:
	lea eax,[ebp-0x2C0]
	push eax
	lea edx,[ebp-0x180]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	lea eax,[ebp+0x44]
	push eax
	call IWzGr2D::CreateLayer
	lea ecx,[ebp-0x180]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x2C0]
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xC4]
	push ecx
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov byte ptr [ebp-4],7
	mov word ptr [ebp-0x190],dx
	mov dword ptr [ebp-0x188],eax
	test eax,eax
	je Block136

 Block135:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block136:
	mov edi,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],8
	test edi,edi
	jne Block138

 Block137:
	push 0x80004003
	call _com_issue_error

 Block138:
	lea eax,[ebp-0x190]
	push eax
	mov ecx,edi
	call IWzVector2D::Putorigin
	lea ecx,[ebp-0x190]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp-0xC4]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block140

 Block139:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block140:
	push 0xC00614A4
	mov ecx,edi
	call IWzGr2DLayer::Putz
	push 0xFFFFFFFF
	mov ecx,edi
	call IWzGr2DLayer::Putcolor
	mov eax,0x80000000
	mov ebx,0x7FFFFFFF
	lea edi,[esi+0x1960]
	mov ecx,edi
	mov dword ptr [ebp+0x30],ebx
	mov dword ptr [ebp+0x3C],ebx
	mov dword ptr [ebp+0x34],eax
	mov dword ptr [ebp+0x4C],eax
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getrx
	cmp eax,ebx
	jg Block142

 Block141:
	mov dword ptr [ebp+0x3C],eax

 Block142:
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getry
	cmp eax,ebx
	jg Block144

 Block143:
	mov dword ptr [ebp+0x30],eax

 Block144:
	lea eax,[ebp-0x108]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getrb
	mov dword ptr [ebp+0x50],eax
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getrx
	mov ecx,dword ptr [ebp+0x50]
	mov ebx,eax
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getrx
	add ebx,eax
	cmp ebx,0x80000000
	jl Block146

 Block145:
	mov dword ptr [ebp+0x4C],ebx

 Block146:
	mov eax,dword ptr [ebp-0x108]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block148

 Block147:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block148:
	lea eax,[ebp-0x7C]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getrb
	mov dword ptr [ebp+0x50],eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xA
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getry
	mov ecx,dword ptr [ebp+0x50]
	mov ebx,eax
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getry
	add ebx,eax
	cmp ebx,0x80000000
	jl Block150

 Block149:
	mov dword ptr [ebp+0x34],ebx

 Block150:
	mov eax,dword ptr [ebp-0x7C]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block152

 Block151:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block152:
	lea ebx,[esi+0x195C]
	mov ecx,ebx
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getrx
	cmp dword ptr [ebp+0x3C],eax
	jl Block154

 Block153:
	mov dword ptr [ebp+0x3C],eax

 Block154:
	mov ecx,ebx
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getry
	cmp dword ptr [ebp+0x30],eax
	jl Block156

 Block155:
	mov dword ptr [ebp+0x30],eax

 Block156:
	lea eax,[ebp-0xD8]
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getrb
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getrx
	mov ecx,ebx
	mov dword ptr [ebp+0x50],eax
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getrx
	mov ecx,dword ptr [ebp+0x50]
	add ecx,eax
	cmp ecx,dword ptr [ebp+0x4C]
	mov dword ptr [ebp+0x50],ecx
	jl Block158

 Block157:
	mov dword ptr [ebp+0x4C],ecx

 Block158:
	mov eax,dword ptr [ebp-0xD8]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block160

 Block159:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block160:
	lea ecx,[ebp-0x84]
	push ecx
	mov ecx,ebx
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getrb
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getry
	mov ecx,ebx
	mov dword ptr [ebp+0x50],eax
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getry
	mov ecx,dword ptr [ebp+0x50]
	add ecx,eax
	cmp ecx,dword ptr [ebp+0x34]
	mov dword ptr [ebp+0x50],ecx
	jl Block162

 Block161:
	mov edx,ecx
	mov dword ptr [ebp+0x34],edx

 Block162:
	mov eax,dword ptr [ebp-0x84]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block164

 Block163:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block164:
	mov dword ptr [ebp+0x2C],0
	lea eax,[ebp-0x10C]
	push 0x3D0
	push eax
	mov byte ptr [ebp-4],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[ebp+0x2C]
	push ecx
	push eax
	mov byte ptr [ebp-4],0xE
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp-0x10C]
	add esp,0xC
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block166

 Block165:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block166:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x2F0]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x270]
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x10
	test ecx,ecx
	jne Block168

 Block167:
	push 0x80004003
	call _com_issue_error

 Block168:
	mov ebx,dword ptr [ebp+0x30]
	lea edx,[ebp-0x2F0]
	push edx
	lea eax,[ebp-0x270]
	push eax
	mov eax,dword ptr [ebp+0x34]
	sub eax,ebx
	push eax
	mov eax,dword ptr [ebp+0x4C]
	sub eax,dword ptr [ebp+0x3C]
	push eax
	call IWzCanvas::Create
	lea ecx,[ebp-0x270]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x2F0]
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [ebp+0x2C]
	test ecx,ecx
	jne Block170

 Block169:
	push 0x80004003
	call _com_issue_error

 Block170:
	mov edx,dword ptr [ebp+0x3C]
	neg edx
	push edx
	call IWzCanvas::Putcx
	mov ecx,dword ptr [ebp+0x2C]
	test ecx,ecx
	jne Block172

 Block171:
	push 0x80004003
	call _com_issue_error

 Block172:
	mov eax,ebx
	neg eax
	push eax
	call IWzCanvas::Putcy
	mov ecx,3
	mov word ptr [ebp-0x1D0],cx
	mov dword ptr [ebp-0x1C8],0xFF
	mov edx,ecx
	mov word ptr [ebp-0x1B0],dx
	mov dword ptr [ebp-0x1A8],0
	lea eax,[ebp-0x1B0]
	push eax
	lea ecx,[ebp-0x8C]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x12
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [ebp+0x2C]
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x13
	test ecx,ecx
	jne Block174

 Block173:
	push 0x80004003
	call _com_issue_error

 Block174:
	lea edx,[ebp-0x1D0]
	push edx
	mov dword ptr [ebp+0x50],ecx
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getry
	sub eax,ebx
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getrx
	sub eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [ebp+0x50]
	push eax
	call IWzCanvas::Copy
	mov eax,dword ptr [ebp-0x8C]
	mov byte ptr [ebp-4],0x12
	test eax,eax
	je Block176

 Block175:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block176:
	lea ecx,[ebp-0x1B0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1D0]
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::~Ztl_variant_t
	lea eax,[ebp-0xE0]
	lea ebx,[esi+0x1958]
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Getx
	test eax,eax
	mov eax,dword ptr [ebp-0xE0]
	setg byte ptr [ebp+0x27]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block178

 Block177:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block178:
	cmp byte ptr [ebp+0x27],0
	je Block184

 Block179:
	mov eax,3
	mov word ptr [ebp-0x210],ax
	mov dword ptr [ebp-0x208],0xFF
	mov ecx,eax
	mov word ptr [ebp-0x1F0],cx
	mov dword ptr [ebp-0x1E8],0
	lea edx,[ebp-0x1F0]
	push edx
	lea eax,[ebp-0x94]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x16
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x17
	mov dword ptr [ebp+0x50],ecx
	test eax,eax
	jne Block181

 Block180:
	push 0x80004003
	call _com_issue_error

 Block181:
	lea edi,[esi+0x1940]
	mov ecx,edi
	mov dword ptr [ebp+0x34],eax
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getry
	sub eax,dword ptr [ebp+0x30]
	mov ecx,edi
	mov dword ptr [ebp+0x4C],eax
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getrx
	mov ecx,dword ptr [ebp+0x50]
	xor edx,edx
	cmp dword ptr [ebp+0x38],edx
	mov edi,eax
	sete dl
	lea eax,[ebp-0x210]
	push eax
	push ecx
	mov ecx,ebx
	lea edx,[edx+edx-1]
	imul edi,edx
	sub edi,dword ptr [ebp+0x3C]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getry
	add eax,dword ptr [ebp+0x4C]
	mov ecx,ebx
	push eax
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getrx
	mov ecx,dword ptr [ebp+0x34]
	add eax,edi
	push eax
	call IWzCanvas::Copy
	mov eax,dword ptr [ebp-0x94]
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block183

 Block182:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block183:
	lea ecx,[ebp-0x1F0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x210]
	call Ztl_variant_t::~Ztl_variant_t

 Block184:
	mov ecx,3
	mov word ptr [ebp-0x1A0],cx
	mov dword ptr [ebp-0x198],0xFF
	mov edx,ecx
	mov word ptr [ebp-0x1C0],dx
	mov dword ptr [ebp-0x1B8],0
	lea eax,[ebp-0x1C0]
	push eax
	lea ecx,[ebp-0x104]
	push ecx
	lea edi,[esi+0x195C]
	mov ecx,edi
	mov byte ptr [ebp-4],0x19
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getcanvas
	mov ebx,dword ptr [ebp+0x2C]
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x1A
	test ebx,ebx
	jne Block186

 Block185:
	push 0x80004003
	call _com_issue_error

 Block186:
	lea edx,[ebp-0x1A0]
	push edx
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getry
	sub eax,dword ptr [ebp+0x30]
	mov ecx,edi
	push eax
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getrx
	sub eax,dword ptr [ebp+0x3C]
	mov ecx,ebx
	push eax
	call IWzCanvas::Copy
	mov eax,dword ptr [ebp-0x104]
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block188

 Block187:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block188:
	lea ecx,[ebp-0x1C0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1A0]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [ebp+0x10],ax
	mov dword ptr [ebp+0x18],0xFFFFFED4
	mov ecx,eax
	mov word ptr [ebp-0x3C],cx
	mov dword ptr [ebp-0x34],0xFFFFFF9C
	mov edx,eax
	mov word ptr [ebp-0x2C],dx
	mov dword ptr [ebp-0x24],0
	mov word ptr [ebp-0xD4],ax
	mov dword ptr [ebp-0xCC],0xD4
	mov word ptr [ebp-0x1E0],cx
	mov dword ptr [ebp-0x1D8],0x190
	mov ebx,dword ptr [ebp+0x44]
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp-0x3C]
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	mov ecx,dword ptr [ebp+0x2C]
	lea edx,[ebp-0xD4]
	push edx
	lea eax,[ebp-0x1E0]
	push eax
	push ecx
	lea edx,[ebp-0x340]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x1F
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[ebp-0x340]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1E0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xD4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x10]
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+0x38]
	push eax
	mov ecx,ebx
	call IWzGr2DLayer::Putflip
	push offset _D_VTMISSING
	lea ecx,[ebp-0x290]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x220]
	mov byte ptr [ebp-4],0x20
	call Ztl_variant_t::_ctor_1
	lea ecx,[ebp-0x290]
	push ecx
	lea edx,[ebp-0x220]
	push edx
	push 0
	mov ecx,ebx
	mov byte ptr [ebp-4],0x21
	call IWzGr2DLayer::Animate
	lea ecx,[ebp-0x220]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x290]
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov dword ptr [ebp+0x50],esp
	mov eax,esp
	push 0
	push ecx
	mov dword ptr [eax],0
	lea eax,[ebp+0x44]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block190

 Block189:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block190:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],1
	call ecx
	jmp Block388

 Block191:
	cmp edi,0xE66C4B
	je Block193

 Block192:
	cmp edi,0xE6935B
	jne Block343

 Block193:
	mov dword ptr [ebp+0x30],0
	lea edx,[ebp-0x9C]
	push 0x3D2
	push edx
	mov byte ptr [ebp-4],0x2C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[ebp+0x30]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x2D
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x9C]
	add esp,0xC
	mov byte ptr [ebp-4],0x2C
	test eax,eax
	je Block195

 Block194:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block195:
	lea edx,[ebp-0xE8]
	push edx
	mov ecx,esi
	call CUser::GetVecCtrl_0
	lea ecx,[ebp-0x120]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0x2E
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getorigin
	movzx ecx,word ptr [eax]
	cmp cx,9
	je Block202

 Block196:
	cmp cx,0xD
	je Block202

 Block197:
	mov edx,0x4009
	cmp cx,dx
	je Block200

 Block198:
	mov edx,0x400D
	cmp cx,dx
	je Block200

 Block199:
	xor edi,edi
	jmp Block203

 Block200:
	mov eax,dword ptr [eax+8]
	test eax,eax
	je Block199

 Block201:
	mov edi,dword ptr [eax]
	jmp Block203

 Block202:
	mov edi,dword ptr [eax+8]

 Block203:
	lea ecx,[ebp-0x120]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp-0xE8]
	mov byte ptr [ebp-4],0x2C
	test eax,eax
	je Block205

 Block204:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block205:
	test edi,edi
	je Block210

 Block206:
	lea eax,[ebp-0xA4]
	push eax
	mov ecx,esi
	call CUser::GetVecCtrl_0
	lea ecx,[ebp-0x200]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0x31
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getorigin
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x32
	test ecx,ecx
	jne Block208

 Block207:
	push 0x80004003
	call _com_issue_error

 Block208:
	push eax
	call IWzVector2D::Putorigin
	lea ecx,[ebp-0x200]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp-0xA4]
	mov byte ptr [ebp-4],0x2C
	test eax,eax
	je Block210

 Block209:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block210:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x250]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x2D0]
	mov byte ptr [ebp-4],0x33
	call Ztl_variant_t::_ctor_1
	lea ecx,[ebp-0xAC]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x34
	call CUser::GetVecCtrl_0
	mov edi,eax
	lea edx,[ebp-0xF8]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x35
	call CUser::GetVecCtrl_0
	mov ebx,eax
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x36
	test eax,eax
	jne Block212

 Block211:
	push 0x80004003
	call _com_issue_error

 Block212:
	mov dword ptr [ebp+0x50],eax
	lea eax,[ebp-0x250]
	push eax
	lea ecx,[ebp-0x2D0]
	push ecx
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getry
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Getrx
	mov ecx,dword ptr [ebp+0x50]
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp-0xF8]
	mov byte ptr [ebp-4],0x35
	test eax,eax
	je Block214

 Block213:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block214:
	mov eax,dword ptr [ebp-0xAC]
	mov byte ptr [ebp-4],0x34
	test eax,eax
	je Block216

 Block215:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block216:
	lea ecx,[ebp-0x2D0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x250]
	mov byte ptr [ebp-4],0x2C
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+0x70]
	push 0
	push 0
	push 0
	push 3
	push eax
	mov eax,dword ptr [ebp+0x68]
	add eax,0xA
	imul eax,0x3E8
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	push eax
	push ecx
	lea edx,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	lea eax,[ebp+0x30]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block218

 Block217:
	mov eax,dword ptr [eax]
	jmp Block219

 Block218:
	xor eax,eax

 Block219:
	mov ecx,dword ptr [ebp+0x38]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_SkillUse
	mov eax,dword ptr [ebp+0x30]

 Block220:
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block388

 Block221:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block388

 Block222:
	cmp edi,0x1315803
	jg Block228

 Block223:
	cmp edi,0x1315802
	jge Block282

 Block224:
	cmp edi,0x13130F2
	jl Block343

 Block225:
	cmp edi,0x13130F3
	jle Block282

 Block226:
	cmp edi,0x13157FC
	je Block22

 Block227:
	jmp Block343

 Block228:
	cmp edi,0x1424406
	je Block254

 Block229:
	cmp edi,0x152748A
	jne Block343

 Block230:
	lea ecx,[ebp+0x48]
	call _xbstr_t::length
	test eax,eax
	je Block388

 Block231:
	xor ebx,ebx
	mov dword ptr [ebp+0x44],ebx
	or edi,0xFFFFFFFF
	cmp dword ptr [ebp+0x70],edi
	mov byte ptr [ebp-4],0x4C
	mov dword ptr [ebp+0x34],edi
	jl Block252

 Block232:
	test edi,edi
	jl Block234

 Block233:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push eax
	push edi
	call _Int2StrW
	add esp,8
	mov edi,eax
	jmp Block235

 Block234:
	mov edi,offset _S___3

 Block235:
	lea ecx,[ebp-0xF0]
	push 0x3DA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x4D
	test ecx,ecx
	je Block237

 Block236:
	mov ecx,dword ptr [ecx]
	jmp Block238

 Block237:
	xor ecx,ecx

 Block238:
	mov eax,dword ptr [eax]
	push edi
	push ecx
	push eax
	lea edx,[ebp+0x44]
	push edx
	call ZXString16::Format
	mov eax,dword ptr [ebp-0xF0]
	add esp,0x10
	mov byte ptr [ebp-4],0x4C
	test eax,eax
	je Block240

 Block239:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block240:
	push 0
	push 0xFF
	push 3
	push ecx
	lea eax,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	lea eax,[ebp-0xBC]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x4E
	call CUser::GetVecCtrl_0
	mov ecx,eax
	mov byte ptr [ebp-4],0x4F
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Gety
	push eax
	lea ecx,[ebp-0x100]
	push ecx
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov ecx,eax
	mov byte ptr [ebp-4],0x50
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Getx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x50],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [ebp+0x38]
	mov ebx,dword ptr [ebp+0x44]
	push edx
	lea eax,[ebp-0xB4]
	push ebx
	push eax
	mov byte ptr [ebp-4],0x52
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	lea ecx,[ebp+0x4C]
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov eax,dword ptr [ebp-0xB4]
	mov byte ptr [ebp-4],0x53
	test eax,eax
	je Block242

 Block241:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block242:
	mov eax,dword ptr [ebp-0x100]
	mov byte ptr [ebp-4],0x54
	test eax,eax
	je Block244

 Block243:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block244:
	mov eax,dword ptr [ebp-0xBC]
	mov byte ptr [ebp-4],0x55
	test eax,eax
	je Block246

 Block245:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block246:
	mov edi,dword ptr [ebp+0x4C]
	test edi,edi
	sete al
	test al,al
	jne Block250

 Block247:
	mov eax,dword ptr [ebp+0x68]
	add eax,0xA
	imul eax,0x3E8
	cdq
	and edx,0xF
	add eax,edx
	mov ebx,eax
	push offset _D_VTMISSING
	lea ecx,[ebp-0x260]
	sar ebx,4
	call Ztl_variant_t::_ctor_1
	mov eax,3
	mov word ptr [ebp],ax
	mov dword ptr [ebp+8],ebx
	mov byte ptr [ebp-4],0x57
	test edi,edi
	je Block9

 Block248:
	lea ecx,[ebp-0x260]
	push ecx
	lea edx,[ebp]
	push edx
	push 0
	mov ecx,edi
	call IWzGr2DLayer::Animate
	lea ecx,[ebp]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x260]
	mov byte ptr [ebp-4],0x55
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x50],esp
	push 0
	push ecx
	mov dword ptr [eax],0
	lea eax,[ebp+0x4C]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0x4C
	call edx
	mov edi,dword ptr [ebp+0x34]
	inc edi
	cmp edi,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x34],edi
	jle Block232

 Block249:
	mov ebx,dword ptr [ebp+0x44]
	jmp Block252

 Block250:
	mov byte ptr [ebp-4],0x4C
	test edi,edi
	je Block252

 Block251:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block252:
	mov byte ptr [ebp-4],1
	test ebx,ebx
	je Block388

 Block253:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString16::_Release
	add esp,4
	jmp Block388

 Block254:
	mov eax,dword ptr [ebp+0x68]
	mov edx,dword ptr [ebp+0x70]
	add eax,0xA
	push 0
	imul eax,0x3E8
	push 0
	push 0
	push 0xC00614A5
	push edx
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x50],esp
	mov dword ptr [eax],0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x44],esp
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x58
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block256

 Block255:
	mov eax,dword ptr [eax]
	jmp Block257

 Block256:
	xor eax,eax

 Block257:
	mov ecx,dword ptr [ebp+0x38]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_SkillUse
	mov edx,dword ptr [ebp+0x64]
	mov ecx,dword ptr [ebp+0x60]
	push edx
	call SKILLENTRY::GetLevelData
	add eax,0x1CC
	push eax
	lea eax,[ebp-0x4C]
	push eax
	call SECRECT::ToRect
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	mov edi,dword ptr [esi+0x640]
	lea ebx,[esi+4]
	add esp,8
	lea eax,[ebp-0x330]
	push eax
	mov ecx,ebx
	call edx
	not edi
	and edi,1
	mov dword ptr [ebp+0x50],eax
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x10]
	push edi
	lea ecx,[ebp-0x308]
	push ecx
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [ebp+0x50]
	mov edx,dword ptr [ecx]
	push eax
	push edx
	lea eax,[ebp-0x4C]
	push eax
	call adjust_rect
	mov ecx,dword ptr [ebp+0x60]
	mov eax,0x64
	add dword ptr [ebp-0x4C],eax
	add dword ptr [ebp-0x44],eax
	mov eax,0xFA
	sub dword ptr [ebp-0x48],eax
	sub dword ptr [ebp-0x40],eax
	add esp,0x10
	cmp dword ptr [ecx+0x20C],0
	je Block259

 Block258:
	mov al,byte ptr [ebp+0x64]
	jmp Block260

 Block259:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax

 Block260:
	movzx ecx,al
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	lea edx,[ebp-0x64]
	push edx
	call SKILLENTRY::GetSpecialUOL
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x59
	test eax,eax
	je Block262

 Block261:
	mov eax,dword ptr [eax]
	jmp Block263

 Block262:
	xor eax,eax

 Block263:
	push 0
	lea ecx,[ebp-0x4C]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 1
	push eax
	call CAnimationDisplayer::RegisterFallingAnimation
	lea ecx,[ebp-0x64]
	mov byte ptr [ebp-4],1
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block388

 Block264:
	cmp edi,0x1F914CC
	jg Block316

 Block265:
	je Block310

 Block266:
	cmp edi,0x1E9F99D
	jg Block297

 Block267:
	je Block283

 Block268:
	cmp edi,0x1C9C772
	jl Block343

 Block269:
	cmp edi,0x1C9C773
	jle Block282

 Block270:
	cmp edi,0x1C9C7A6
	jne Block343

 Block271:
	mov dword ptr [ebp+0x4C],0
	lea edx,[ebp-0x68]
	push 0x3D2
	push edx
	mov byte ptr [ebp-4],0x64
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[ebp+0x4C]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x65
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x68]
	add esp,0xC
	mov byte ptr [ebp-4],0x64
	test eax,eax
	je Block273

 Block272:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block273:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x230]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x280]
	mov byte ptr [ebp-4],0x66
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x67
	test eax,eax
	jne Block275

 Block274:
	push 0x80004003
	call _com_issue_error

 Block275:
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[esi+4]
	mov ebx,eax
	lea eax,[ebp-0x358]
	push eax
	mov ecx,edi
	call edx
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [ebp+0x50],eax
	lea eax,[ebp-0x230]
	push eax
	lea ecx,[ebp-0x280]
	push ecx
	lea eax,[ebp-0x350]
	push eax
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [ebp+0x50]
	mov edx,dword ptr [ecx]
	push eax
	push edx
	mov ecx,ebx
	call IWzVector2D::RelMove
	lea ecx,[ebp-0x280]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x230]
	mov byte ptr [ebp-4],0x64
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,dword ptr [ebp+0x74]
	xor eax,eax
	xor ecx,ecx
	test edx,edx
	je Block277

 Block276:
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [edx+4]

 Block277:
	push 0
	push ecx
	push eax

 Block278:
	mov eax,dword ptr [ebp+0x70]
	push 3
	push eax
	mov eax,dword ptr [ebp+0x68]
	add eax,0xA
	imul eax,0x3E8
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	push eax
	push ecx
	lea edx,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	lea eax,[ebp+0x4C]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block280

 Block279:
	mov eax,dword ptr [eax]
	jmp Block281

 Block280:
	xor eax,eax

 Block281:
	mov ecx,dword ptr [ebp+0x38]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_SkillUse
	mov eax,dword ptr [ebp+0x4C]
	jmp Block220

 Block282:
	mov ebx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0xFF
	lea ecx,[esi+0x88]
	call CAvatar::GetLayerZ
	sub eax,0x64
	push eax
	push 0x3E8
	push 0x320
	push 0x12C
	mov ecx,ebx
	call CAnimationDisplayer::RegisterFadeInOutAnimation

 Block283:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	mov ecx,esi
	call eax
	mov ebx,eax
	mov ecx,ebx
	call SecondaryStat::_ZtlSecureGet_rAura_
	cmp eax,0x1E84BEB
	je Block291

 Block284:
	mov ecx,ebx
	call SecondaryStat::_ZtlSecureGet_rAura_
	cmp eax,0x1EA1CC0
	je Block291

 Block285:
	mov ecx,ebx
	call SecondaryStat::_ZtlSecureGet_rAura_
	cmp eax,0x1E9D28A
	je Block290

 Block286:
	mov ecx,ebx
	call SecondaryStat::_ZtlSecureGet_rAura_
	cmp eax,0x1E9F5B0
	je Block290

 Block287:
	mov ecx,ebx
	call SecondaryStat::_ZtlSecureGet_rAura_
	cmp eax,0x1E9D28B
	je Block289

 Block288:
	mov ecx,ebx
	call SecondaryStat::_ZtlSecureGet_rAura_
	cmp eax,0x1EA1CC1
	jne Block343

 Block289:
	push 0x1E9F5B8
	jmp Block292

 Block290:
	push 0x1E9F5B9
	jmp Block292

 Block291:
	push 0x1E9F5B7

 Block292:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	call CSkillInfo::GetSkill
	mov ebx,eax
	test ebx,ebx
	je Block343

 Block293:
	cmp dword ptr [ebx+0x20C],0
	je Block295

 Block294:
	mov al,byte ptr [ebp+0x64]
	jmp Block296

 Block295:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax

 Block296:
	push eax
	lea ecx,[ebp-0x70]
	push ecx
	mov ecx,ebx
	call SKILLENTRY::GetEffectUOL
	push eax
	lea ecx,[ebp+0x48]
	call Ztl_bstr_t::op_assign
	lea ecx,[ebp-0x70]
	call Ztl_bstr_t::~Ztl_bstr_t
	lea edx,[ebp-0x78]
	push edx
	mov ecx,ebx
	call SKILLENTRY::GetScreenEffectUOL
	push eax
	lea ecx,[ebp+0x20]
	call Ztl_bstr_t::op_assign
	lea ecx,[ebp-0x78]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block343

 Block297:
	mov eax,edi
	sub eax,0x1F78E29
	je Block22

 Block298:
	sub eax,1
	jne Block343

 Block299:
	push eax
	push 0xFF
	push 3
	push ecx
	lea eax,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x44],esp
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x6B
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block301

 Block300:
	mov eax,dword ptr [eax]
	jmp Block302

 Block301:
	xor eax,eax

 Block302:
	mov edx,dword ptr [ebp+0x38]
	push edx
	push eax
	lea eax,[ebp-0x80]
	push eax
	mov byte ptr [ebp-4],1
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	lea ecx,[ebp+0x44]
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov eax,dword ptr [ebp-0x80]
	mov byte ptr [ebp-4],0x6C
	test eax,eax
	je Block304

 Block303:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block304:
	mov edi,dword ptr [ebp+0x44]
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block308

 Block305:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x130]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x150]
	mov byte ptr [ebp-4],0x6D
	call Ztl_variant_t::_ctor_1
	mov byte ptr [ebp-4],0x6E
	test edi,edi
	jne Block307

 Block306:
	push 0x80004003
	call _com_issue_error

 Block307:
	lea eax,[ebp-0x130]
	push eax
	lea ecx,[ebp-0x150]
	push ecx
	push 0
	mov ecx,edi
	call IWzGr2DLayer::Animate
	lea ecx,[ebp-0x150]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x130]
	call Ztl_variant_t::~Ztl_variant_t

 Block308:
	lea edx,[ebp+0x44]
	push edx
	lea ecx,[esi+0x3A7C]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov byte ptr [ebp-4],1
	test edi,edi
	je Block388

 Block309:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx
	jmp Block388

 Block310:
	mov ecx,esi
	call CUser::IsOnLadderOrRope
	test eax,eax
	je Block315

 Block311:
	cmp dword ptr [ebx+0x20C],0
	je Block313

 Block312:
	mov al,byte ptr [ebp+0x64]
	jmp Block314

 Block313:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax

 Block314:
	movzx ecx,al
	push ecx
	lea edx,[ebp-0x88]
	push edx
	mov ecx,ebx
	call SKILLENTRY::GetSpecialUOL
	push eax
	lea ecx,[ebp+0x48]
	call Ztl_bstr_t::op_assign
	lea ecx,[ebp-0x88]
	call Ztl_bstr_t::~Ztl_bstr_t

 Block315:
	mov eax,dword ptr [ebp+0x70]
	push 0
	push 0
	push 0
	push 3
	push eax
	mov eax,dword ptr [ebp+0x68]
	add eax,0xA
	imul eax,0x3E8
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	push eax
	push ecx
	lea edx,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov byte ptr [ebp-4],0x69
	jmp Block31

 Block316:
	cmp edi,0x1F962EE
	jg Block342

 Block317:
	je Block329

 Block318:
	cmp edi,0x1F914CE
	je Block327

 Block319:
	cmp edi,0x1F962E9
	jne Block343

 Block320:
	lea ecx,[esi+0x88]
	call CAvatar::IsRidingWildHunterJaguar
	test eax,eax
	je Block326

 Block321:
	mov dword ptr [ebp+0x4C],0
	lea edx,[ebp-0x90]
	push 0x3D2
	push edx
	mov byte ptr [ebp-4],0x5F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[ebp+0x4C]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x60
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x90]
	add esp,0xC
	mov byte ptr [ebp-4],0x5F
	test eax,eax
	je Block323

 Block322:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block323:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x5C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],0x61
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x62
	test eax,eax
	jne Block325

 Block324:
	push 0x80004003
	call _com_issue_error

 Block325:
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[esi+4]
	mov ebx,eax
	lea eax,[ebp-0x360]
	push eax
	mov ecx,edi
	call edx
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [ebp+0x50],eax
	lea eax,[ebp-0x5C]
	push eax
	lea ecx,[ebp-0x1C]
	push ecx
	lea eax,[ebp-0x348]
	push eax
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [ebp+0x50]
	mov edx,dword ptr [ecx]
	push eax
	push edx
	mov ecx,ebx
	call IWzVector2D::RelMove
	lea ecx,[ebp-0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x5C]
	mov byte ptr [ebp-4],0x5F
	call Ztl_variant_t::~Ztl_variant_t
	push 1
	lea ecx,[esi+0x614]
	call TSecType<long>::GetData
	push eax
	push 0
	jmp Block278

 Block326:
	mov eax,dword ptr [ebp+0x68]
	mov ecx,dword ptr [ebp+0x70]
	add eax,0xA
	imul eax,0x3E8
	push 0
	push 0
	cdq
	push 0
	push 3
	and edx,0xF
	push ecx
	add eax,edx
	sar eax,4
	push eax
	push ecx
	lea edx,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov byte ptr [ebp-4],0x63
	jmp Block31

 Block327:
	lea edi,[esi+0x88]
	mov ecx,edi
	call CAvatar::IsRidingWildHunterJaguar
	test eax,eax
	je Block388

 Block328:
	mov eax,dword ptr [ebp+0x68]
	mov edx,dword ptr [ebp+0x70]
	add eax,0xA
	push 1
	imul eax,0x3E8
	push 0
	push 0
	push 3
	push edx
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	push eax
	push ecx
	lea eax,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x44],esp
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x68
	call CAvatar::GetTMHeadOrigin
	jmp Block383

 Block329:
	lea eax,[ebp+0x4C]
	push eax
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov ecx,esi
	mov byte ptr [ebp-4],0x5A
	call CUser::IsOnLadderOrRope
	test eax,eax
	je Block332

 Block330:
	lea ecx,[ebp-0x98]
	push 0x1945
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[ebp+0x48]
	call Ztl_bstr_t::op_assign
	lea ecx,[ebp-0x98]
	call Ztl_bstr_t::~Ztl_bstr_t
	lea edx,[ebp-0x60]
	push edx
	lea ecx,[esi+0x88]
	call CAvatar::GetTMNavelOrigin
	push eax
	lea ecx,[ebp+0x4C]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	mov eax,dword ptr [ebp-0x60]
	test eax,eax
	je Block332

 Block331:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block332:
	push 0
	push 0
	push 0
	push 3
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	lea edi,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push edi
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	lea eax,[ebp+0x4C]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block334

 Block333:
	mov eax,dword ptr [eax]
	jmp Block335

 Block334:
	xor eax,eax

 Block335:
	mov ebx,dword ptr [ebp+0x38]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push ebx
	push eax
	call CAnimationDisplayer::Effect_SkillUse
	push 0
	push 0
	push 0
	push 3
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push edi
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	lea edx,[ebp+0x4C]
	mov ecx,esp
	mov dword ptr [ebp+0x44],esp
	push edx
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	push offset _S_0
	lea eax,[ebp-0xA8]
	push eax
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],0x5C
	call Ztl_bstr_t::op_add_1
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x5D
	test eax,eax
	je Block337

 Block336:
	mov eax,dword ptr [eax]
	jmp Block338

 Block337:
	xor eax,eax

 Block338:
	push ebx
	mov byte ptr [ebp-4],0x5E
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_SkillUse
	lea ecx,[ebp-0xA8]
	mov byte ptr [ebp-4],0x5A
	call _xbstr_t::~_xbstr_t
	call get_update_time
	add eax,0x5A0
	jne Block340

 Block339:
	mov eax,1

 Block340:
	push 0
	push eax
	mov ecx,esi
	call CUser::LoadMoreWildEffect
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block388

 Block341:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block388

 Block342:
	cmp edi,0x217994E
	je Block374

 Block343:
	push edi
	call is_event_vehicle_skill
	add esp,4
	test eax,eax
	jne Block22

 Block344:
	mov eax,dword ptr [ebp+0x74]
	xor ebx,ebx
	mov dword ptr [ebp+0x40],ebx
	cmp eax,ebx
	je Block346

 Block345:
	mov ecx,dword ptr [eax]
	mov ebx,dword ptr [eax+4]
	mov dword ptr [ebp+0x40],ecx

 Block346:
	lea ecx,[ebp+0x48]
	call _xbstr_t::length
	test eax,eax
	je Block361

 Block347:
	lea ecx,[esi+0x88]
	call CAvatar::IsRidingWildHunterJaguar
	lea ecx,[esi+0x88]
	mov dword ptr [ebp+0x50],eax
	call CAvatar::IsRidingWildHunterJaguar
	test eax,eax
	je Block354

 Block348:
	cmp edi,0x1F93BDA
	je Block354

 Block349:
	cmp edi,0x1F93BDE
	je Block354

 Block350:
	cmp edi,0x1F914CC
	je Block354

 Block351:
	cmp edi,0x1F914CA
	je Block354

 Block352:
	cmp edi,0x1F78E2A
	je Block354

 Block353:
	cmp edi,0x1F962EA
	jne Block356

 Block354:
	cmp dword ptr [esi+0x5F8],0x1D7AF0
	jne Block357

 Block355:
	cmp edi,0x217E770
	jne Block357

 Block356:
	lea ecx,[esi+0x614]
	call TSecType<long>::GetData
	add ebx,eax

 Block357:
	mov edx,dword ptr [ebp+0x50]
	mov eax,dword ptr [ebp+0x40]
	push edx
	mov ecx,dword ptr [ebp+0x70]
	push ebx
	push eax
	mov eax,dword ptr [ebp+0x68]
	add eax,0xA
	imul eax,0x3E8
	cdq
	push 3
	and edx,0xF
	push ecx
	add eax,edx
	sar eax,4
	push eax
	push ecx
	lea edx,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x44],esp
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x6F
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block359

 Block358:
	mov eax,dword ptr [eax]
	jmp Block360

 Block359:
	xor eax,eax

 Block360:
	mov ecx,dword ptr [ebp+0x38]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_SkillUse

 Block361:
	lea ecx,[ebp+0x20]
	call _xbstr_t::length
	test eax,eax
	je Block388

 Block362:
	call get_field
	test eax,eax
	je Block388

 Block363:
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x50],esp
	mov dword ptr [eax],0
	mov ecx,dword ptr [_D_G_GR]
	push 0
	mov byte ptr [ebp-4],0x70
	push 0
	test ecx,ecx
	jne Block365

 Block364:
	push 0x80004003
	call _com_issue_error

 Block365:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x44],esp
	push edx
	call IWzGr2D::Getcenter
	mov eax,dword ptr [ebp+0x20]
	test eax,eax
	je Block367

 Block366:
	mov eax,dword ptr [eax]
	jmp Block368

 Block367:
	xor eax,eax

 Block368:
	push 0
	push eax
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],1
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov ecx,dword ptr [ebp+0x4C]
	test ecx,ecx
	sete al
	test al,al
	sete al
	mov bl,0x71
	mov byte ptr [ebp-4],bl
	test al,al
	je Block372

 Block369:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x160]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x140]
	mov byte ptr [ebp-4],0x72
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x73
	test ecx,ecx
	jne Block371

 Block370:
	push 0x80004003
	call _com_issue_error

 Block371:
	lea edx,[ebp-0x160]
	push edx
	lea eax,[ebp-0x140]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	lea ecx,[ebp-0x140]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x160]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov dword ptr [ebp+0x50],esp
	mov eax,esp
	push 0
	push ecx
	lea edx,[ebp+0x4C]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push edx
	mov dword ptr [eax],0
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov ecx,dword ptr [ebp+0x4C]

 Block372:
	mov byte ptr [ebp-4],1
	test ecx,ecx
	je Block388

 Block373:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx
	jmp Block388

 Block374:
	mov ecx,esi
	call CUser::IsOnLadderOrRope
	test eax,eax
	je Block379

 Block375:
	cmp dword ptr [ebx+0x20C],0
	je Block377

 Block376:
	mov al,byte ptr [ebp+0x64]
	jmp Block378

 Block377:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax

 Block378:
	push eax
	lea ecx,[ebp+0x28]
	push ecx
	mov ecx,ebx
	call SKILLENTRY::GetEffectUOL
	push eax
	lea ecx,[ebp+0x48]
	call Ztl_bstr_t::op_assign
	lea ecx,[ebp+0x28]
	call Ztl_bstr_t::~Ztl_bstr_t

 Block379:
	xor eax,eax
	cmp dword ptr [esi+0x5F8],0x1D7AF0
	jne Block381

 Block380:
	lea ecx,[esi+0x614]
	call TSecType<long>::GetData

 Block381:
	mov edx,dword ptr [ebp+0x70]
	push 0
	push eax
	mov eax,dword ptr [ebp+0x68]
	add eax,0xA
	imul eax,0x3E8
	push 0
	push 3
	push edx
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	push eax
	push ecx
	lea eax,[esi+0x1960]
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov byte ptr [ebp-4],0x6A

 Block382:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x44],esp
	push ecx
	mov ecx,esi
	call CUser::GetVecCtrl_0

 Block383:
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block385

 Block384:
	mov eax,dword ptr [eax]
	jmp Block386

 Block385:
	xor eax,eax

 Block386:
	mov edx,dword ptr [ebp+0x38]
	push edx

 Block387:
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_SkillUse

 Block388:
	mov ebx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [ebx]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	push edi
	call get_skill_degree_from_skill_root
	push edi
	mov dword ptr [ebp+0x4C],eax
	call get_job_category
	mov edi,eax
	mov eax,dword ptr [esi+0xA1]
	lea edx,[eax-0x1871D0]
	add esp,8
	xor ecx,ecx
	cmp edx,3
	ja Block390

 Block389:
	mov ecx,1
	jmp Block392

 Block390:
	add eax,0xFFE78E2C
	cmp eax,3
	ja Block392

 Block391:
	mov ecx,2

 Block392:
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	jle Block433

 Block393:
	cmp ecx,eax
	jl Block433

 Block394:
	mov dword ptr [ebp+0x44],0
	lea eax,[ebp+0x28]
	push 0x9A6
	push eax
	mov byte ptr [ebp-4],0x74
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [eax]
	push ecx
	push edi
	push eax
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0x75
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x28]
	add esp,0x10
	mov byte ptr [ebp-4],0x74
	test eax,eax
	je Block396

 Block395:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block396:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x140]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x160]
	mov byte ptr [ebp-4],0x76
	call Ztl_variant_t::_ctor_1
	mov edi,dword ptr [ebp+0x44]
	push 0
	push 0
	lea eax,[ebp-0x140]
	push eax
	lea ecx,[ebp-0x160]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x28],esp
	mov bl,0x77
	push edi
	mov byte ptr [ebp-4],bl
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x78
	jne Block398

 Block397:
	push 0x80004003
	call _com_issue_error

 Block398:
	lea edx,[ebp-0x200]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x79
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[ebp-0x200]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x160]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x140]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [ebp+0x34]
	test ecx,ecx
	sete al
	test al,al
	je Block403

 Block399:
	mov byte ptr [ebp-4],0x74
	test ecx,ecx
	je Block401

 Block400:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block401:
	mov byte ptr [ebp-4],1
	test edi,edi
	je Block22

 Block402:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4
	jmp Block22

 Block403:
	mov dword ptr [ebp+0x3C],0
	lea edx,[ebp+0x28]
	push 0x3D2
	push edx
	mov byte ptr [ebp-4],0x7E
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[ebp+0x3C]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x7F
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp+0x28]
	add esp,0xC
	mov byte ptr [ebp-4],0x7E
	test eax,eax
	je Block405

 Block404:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block405:
	lea edx,[ebp+0x28]
	push edx
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],0x80
	mov word ptr [ebp],cx
	mov dword ptr [ebp+8],eax
	test eax,eax
	je Block407

 Block406:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block407:
	mov ecx,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x81
	test ecx,ecx
	jne Block409

 Block408:
	push 0x80004003
	call _com_issue_error

 Block409:
	lea edx,[ebp]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[ebp]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x7E
	test eax,eax
	je Block411

 Block410:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block411:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x5C]
	mov byte ptr [ebp-4],0x82
	call Ztl_variant_t::_ctor_1
	mov edi,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x83
	test edi,edi
	jne Block413

 Block412:
	push 0x80004003
	call _com_issue_error

 Block413:
	lea eax,[ebp-0x1C]
	push eax
	lea ecx,[ebp-0x5C]
	push ecx
	lea ecx,[esi+0x88]
	call CAvatar::GetHeight
	mov edx,0xFFFFFFE2
	sub edx,eax
	push edx
	push 0
	mov ecx,edi
	call IWzVector2D::RelMove
	lea ecx,[ebp-0x5C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],0x7E
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [ebp+0x4C],2
	jne Block419

 Block414:
	mov ecx,dword ptr [ebp+0x3C]
	test ecx,ecx
	jne Block416

 Block415:
	push 0x80004003
	call _com_issue_error

 Block416:
	call IWzVector2D::GetcurrentTime
	add eax,0x12C
	mov ecx,3
	mov word ptr [ebp],cx
	mov dword ptr [ebp+8],eax
	mov ecx,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x84
	test ecx,ecx
	jne Block418

 Block417:
	push 0x80004003
	call _com_issue_error

 Block418:
	fld qword ptr [__real_4086800000000000]
	lea edx,[ebp]
	push edx
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	lea ecx,[ebp]
	mov byte ptr [ebp-4],0x7E
	call Ztl_variant_t::~Ztl_variant_t

 Block419:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x5C]
	call Ztl_variant_t::_ctor_1
	mov eax,3
	mov word ptr [ebp],ax
	mov dword ptr [ebp+8],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x86
	test ecx,ecx
	jne Block421

 Block420:
	push 0x80004003
	call _com_issue_error

 Block421:
	lea edx,[ebp-0x5C]
	push edx
	lea eax,[ebp]
	push eax
	push 5
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp+0x4C]
	push edx
	call IWzGr2D::CreateLayer
	lea ecx,[ebp]
	call Ztl_variant_t::~Ztl_variant_t
	mov bl,0x89
	lea ecx,[ebp-0x5C]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [ebp+0x4C]
	test edi,edi
	jne Block423

 Block422:
	push 0x80004003
	call _com_issue_error

 Block423:
	push 0x80FFFFFF
	mov ecx,edi
	call IWzGr2DLayer::Putcolor
	mov eax,0xD
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x3C]
	mov dword ptr [ebp+0x18],eax
	test eax,eax
	je Block425

 Block424:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block425:
	lea eax,[ebp+0x10]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x8A
	call IWzVector2D::Putorigin
	lea ecx,[ebp+0x10]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [esi+0x1960]
	mov ecx,0xD
	mov word ptr [ebp+0x10],cx
	mov dword ptr [ebp+0x18],esi
	test esi,esi
	je Block427

 Block426:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block427:
	lea ecx,[ebp+0x10]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x8B
	call IWzGr2DLayer::Putoverlay
	lea ecx,[ebp+0x10]
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,3
	mov word ptr [ebp-0xD4],dx
	mov dword ptr [ebp-0xCC],0x46
	mov eax,edx
	mov word ptr [ebp-0x2C],ax
	mov dword ptr [ebp-0x24],0x12C
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],0x8D
	call Ztl_variant_t::_ctor_1
	mov ecx,3
	mov word ptr [ebp-0x3C],cx
	mov dword ptr [ebp-0x34],0x40
	mov edx,ecx
	mov word ptr [ebp+0x10],dx
	mov dword ptr [ebp+0x18],0xF0
	mov esi,dword ptr [ebp+0x34]
	lea eax,[ebp-0xD4]
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp-0x3C]
	push eax
	lea ecx,[ebp+0x10]
	push ecx
	push esi
	lea edx,[ebp-0x120]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x90
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[ebp-0x120]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x10]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xD4]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x130]
	call Ztl_variant_t::_ctor_1
	mov eax,3
	mov word ptr [ebp-0x2C],ax
	mov dword ptr [ebp-0x24],0x64
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],0x92
	call Ztl_variant_t::_ctor_1
	mov ecx,3
	mov word ptr [ebp-0x3C],cx
	mov dword ptr [ebp-0x34],0xFF
	mov edx,ecx
	mov word ptr [ebp+0x10],dx
	mov dword ptr [ebp+0x18],0xA0
	mov byte ptr [ebp-4],0x95
	lea eax,[ebp-0x130]
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp-0x3C]
	push eax
	lea ecx,[ebp+0x10]
	push ecx
	push esi
	lea edx,[ebp-0x120]
	push edx
	mov ecx,edi
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[ebp-0x120]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x10]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x130]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x150]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],0x96
	call Ztl_variant_t::_ctor_1
	lea eax,[ebp-0x150]
	push eax
	lea ecx,[ebp-0x1C]
	push ecx
	push 0
	mov ecx,edi
	mov byte ptr [ebp-4],0x97
	call IWzGr2DLayer::Animate
	lea ecx,[ebp-0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x150]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov dword ptr [ebp+0x28],esp
	mov eax,esp
	push 0
	push ecx
	lea edx,[ebp+0x4C]
	mov ecx,esp
	mov dword ptr [ebp+0x28],esp
	push edx
	mov dword ptr [eax],0
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0x7E
	call ecx
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x7D
	test eax,eax
	je Block429

 Block428:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block429:
	mov byte ptr [ebp-4],0x74
	test esi,esi
	je Block431

 Block430:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block431:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block433

 Block432:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block433:
	mov ecx,dword ptr [ebp+0x20]
	test ecx,ecx
	je Block435

 Block434:
	call _xbstr_t::Data_t::Release

 Block435:
	mov ecx,dword ptr [ebp+0x48]
	test ecx,ecx
	je Block23

 Block436:
	call _xbstr_t::Data_t::Release
	jmp Block23
}
}
// CUser::ShowSkillSpecialEffect
_SUB_EXCEPTION_HANDLER(4ECA90)
__SUB_CLASS_THIS(004ECA90, __thiscall, 16707,  CUser, void, const SKILLENTRY*, long, CGrenade*, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4ECA90
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
	mov ebp,ecx
	mov dword ptr [esp+0x14],ebp
	mov esi,dword ptr [esp+0x48]
	xor ebx,ebx
	cmp esi,ebx
	je Block37

 Block1:
	cmp dword ptr [ebp+0x638],ebx
	jne Block37

 Block2:
	cmp dword ptr [esi+0x20C],ebx
	je Block4

 Block3:
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebx
	jne Block5

 Block4:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+4]
	call edx

 Block5:
	movzx eax,al
	push eax
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,esi
	call SKILLENTRY::GetSpecialUOL
	mov edi,dword ptr [esp+0x54]
	mov dword ptr [esp+0x40],ebx
	cmp edi,ebx
	je Block37

 Block6:
	cmp dword ptr [edi],ebx
	je Block36

 Block7:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block36

 Block8:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,ebx
	je Block36

 Block9:
	mov dword ptr [esp+0x48],ebx
	mov edx,dword ptr [esi]
	push edx
	mov byte ptr [esp+0x44],1
	call is_throw_bomb_skill
	add esp,4
	test eax,eax
	jne Block12

 Block10:
	lea eax,[esp+0x58]
	push eax
	mov ecx,ebp
	call CUser::GetVecCtrl_0
	push eax
	lea ecx,[esp+0x4C]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebx
	je Block30

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block30

 Block12:
	mov edi,dword ptr [esp+0x58]
	cmp edi,ebx
	mov ebx,dword ptr [esp+0x5C]
	jne Block24

 Block13:
	test ebx,ebx
	jne Block24

 Block14:
	mov esi,dword ptr [esp+0x50]
	test esi,esi
	je Block24

 Block15:
	lea eax,[esp+0x58]
	push 0x3D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x4C]
	push ecx
	push eax
	mov byte ptr [esp+0x4C],2
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x64]
	add esp,0xC
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	push offset _D_VTMISSING
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x44],3
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x5C]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x44],4
	call CGrenade::GetVecCtrl
	mov edi,eax
	lea eax,[esp+0x58]
	mov bl,5
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x44],bl
	call CGrenade::GetVecCtrl
	mov esi,eax
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],6
	test eax,eax
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	mov ebp,eax
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Gety
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Getx
	push eax
	mov ecx,ebp
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x40],bl
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x40],4
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	lea ecx,[esp+0x18]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x40],1
	call Ztl_variant_t::~Ztl_variant_t
	mov ebp,dword ptr [esp+0x14]
	jmp Block29

 Block24:
	lea eax,[esp+0x58]
	push 0x3D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x4C]
	push ecx
	push eax
	mov byte ptr [esp+0x4C],7
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x64]
	add esp,0xC
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block26:
	push offset _D_VTMISSING
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x44],8
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],9
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push ebx
	push edi
	call IWzVector2D::RelMove
	lea ecx,[esp+0x28]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x40],1
	call Ztl_variant_t::~Ztl_variant_t

 Block29:
	mov edi,dword ptr [esp+0x54]

 Block30:
	mov ecx,dword ptr [esp+0x4C]
	mov eax,dword ptr [ebp+0x1960]
	push 0
	push 0
	push 0
	push 3
	push 0x7FFFFFFF
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x74],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block32:
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x78],esp
	test eax,eax
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block34:
	mov eax,dword ptr [ebp+0x640]
	mov ecx,dword ptr [edi]
	not eax
	and eax,1
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::Effect_SkillUse
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block36:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block37:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 0x18
}
}
// CUser::GetVecCtrl
__SUB_CLASS_THIS0(004DF390, __thiscall, 16586,  CUser, _x_com_ptr<IWzVector2D>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x19E4]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CUser::LoadDojangInvincibleEffect
_SUB_EXCEPTION_HANDLER(4F6250)
__SUB_CLASS_THIS0(004F6250, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F6250
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x3A50],0
	sete al
	test al,al
	je Block8

 Block1:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	mov dword ptr [esp+0x20],0
	call edx
	push eax
	push 0x3F2
	call get_novice_skill_as_race
	add esp,8
	push eax
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call CUser::LoadSkillRepeatEffect
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x3A50]
	cmp edi,eax
	je Block6

 Block2:
	mov dword ptr [esi+0x3A50],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	test edi,edi
	je Block6

 Block5:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block6:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block8:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CUser::GetPosPrev
__SUB_CLASS_THIS0(000BDE00, __thiscall, 16668,  CUser, const tagPOINT) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x1998]
	push edi
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,esi
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],edi
	pop edi
	mov dword ptr [eax+4],ecx
	pop esi
	ret 4
}
}
// CUser::ShowOakCaskEffect
_SUB_EXCEPTION_HANDLER(4DFFE0)
__SUB_CLASS_THIS0(004DFFE0, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DFFE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x2ED0],0
	mov eax,dword ptr [esi+0x1960]
	push 0
	push 0
	push 0
	push 3
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	mov ecx,esp
	je Block4

 Block1:
	mov dword ptr [esi+0x2ECC],0x348
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x3C],0
	call CUser::GetVecCtrl_0
	mov esi,dword ptr [esi+0x640]
	not esi
	and esi,1
	push esi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push offset _S_SKILL510IMGSKILL__1
	call CAnimationDisplayer::Effect_SkillUse
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret

 Block4:
	mov dword ptr [esi+0x2ECC],0xF0
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x3C],1
	call CUser::GetVecCtrl_0
	mov esi,dword ptr [esi+0x640]
	not esi
	and esi,1
	push esi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push offset _S_SKILL510IMGSKILL
	call CAnimationDisplayer::Effect_SkillUse
	push 0
	push 0x2B
	push 0x4DD5CF
	call play_skill_sound
	add esp,0xC
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret
}
}
// CUser::GetRTTI
__SUB_CLASS_THIS0(004EB560, __thiscall, 16736,  CUser, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUser::ms_RTTI_CUser
	ret
}
}
// CUser::OnEmotion
__SUB_CLASS_THIS(004E0150, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov ebx,eax
	call CInPacket::Decode4
	mov ecx,edi
	mov ebp,eax
	call CInPacket::Decode1
	movzx eax,al
	push ebp
	push ebx
	lea ecx,[esi+0x88]
	mov dword ptr [esi+0x2EA0],eax
	call CAvatar::SetEmotion
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CUser::GetDamageDelay
__SUB_CLASS_THIS(004E0FF0, __thiscall, 16727,  CUser, long, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0xC]
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [esp+0x10]
	cmp ecx,0xE6935C
	jg Block6

 Block1:
	je Block5

 Block2:
	cmp ecx,0x4E23EF
	je Block5

 Block3:
	cmp ecx,0xD72A0E
	jne Block7

 Block4:
	mov ecx,offset _D_ADELAY_VAMPIRE
	mov esi,4
	jmp Block13

 Block5:
	mov ecx,offset _D_ADELAY_FIST
	mov esi,6
	jmp Block13

 Block6:
	cmp ecx,0x1F962E9
	je Block8

 Block7:
	pop edi
	pop esi
	or eax,0xFFFFFFFF
	pop ebx
	ret 0xC

 Block8:
	lea ecx,[eax-1]
	cmp ebx,ecx
	jne Block10

 Block9:
	mov ecx,0x690
	jmp Block11

 Block10:
	mov ecx,ebx
	shl ecx,4
	sub ecx,ebx
	add ecx,ecx
	add ecx,ecx
	add ecx,ecx

 Block11:
	mov esi,eax
	cmp ecx,0xFFFFFFFF
	jne Block14

 Block12:
	mov ecx,dword ptr [esp+0x10]

 Block13:
	cdq
	idiv esi
	mov esi,eax
	mov eax,ebx
	cdq
	idiv esi
	mov edx,dword ptr [ecx+eax*4]
	mov dword ptr [esp+0x18],edx
	jmp Block15

 Block14:
	mov dword ptr [esp+0x18],ecx

 Block15:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+8]
	push ebp
	mov ecx,edi
	call edx
	mov esi,eax
	mov eax,dword ptr [esi+0xE34]
	push eax
	lea ecx,[esi+0xE2C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov ebp,dword ptr [esi+0x13DC]
	lea ebx,[ebp+0x18]
	add esp,8
	mov ecx,ebx
	mov dword ptr [esp+0x18],eax
	call ZFatalSection::Lock
	test ebx,ebx
	je Block18

 Block16:
	add dword ptr [ebx+4],0xFFFFFFFF
	jne Block18

 Block17:
	mov dword ptr [ebx],0

 Block18:
	mov edx,dword ptr [esi+0x260]
	push edx
	add esi,0x258
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov esi,eax
	mov eax,dword ptr [edi+0x5AC]
	push eax
	lea ecx,[edi+0x5A4]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x28]
	add esp,0x10
	push edx
	mov ecx,edi
	mov ebx,eax
	call CUser::GetAuraBooster
	mov ecx,dword ptr [esp+0x18]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push eax
	push esi
	push ecx
	push ebx
	call get_attack_speed_degree
	add eax,0xA
	imul eax,dword ptr [esp+0x34]
	add esp,0x18
	cdq
	pop ebp
	pop edi
	and edx,0xF
	add eax,edx
	pop esi
	sar eax,4
	pop ebx
	ret 0xC
}
}
// CUser::SetConsumeItemEffect
__SUB_CLASS_THIS(004F54D0, __thiscall, 16619,  CUser, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	push edi
	call CInPacket::Decode4
	mov edi,eax
	push edi
	mov ecx,esi
	call CUser::SetConsumeItemEffect_0
	mov dword ptr [esi+0x2EE0],edi
	pop edi
	pop esi
	ret 4
}
}
// CUser::GetPos
__SUB_CLASS_THIS0(000BDDD0, __thiscall, 16668,  CUser, const tagPOINT) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x1980]
	push edi
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,esi
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],edi
	pop edi
	mov dword ptr [eax+4],ecx
	pop esi
	ret 4
}
}
// CUser::GetAttackActionSpeed
__SUB_CLASS_THIS(004DF740, __thiscall, 16593,  CUser, long, long) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+8]
	push edi
	call edx
	mov edi,eax
	mov eax,dword ptr [edi+0xE34]
	push eax
	lea ecx,[edi+0xE2C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov ebp,dword ptr [edi+0x13DC]
	lea ebx,[ebp+0x18]
	add esp,8
	mov ecx,ebx
	mov dword ptr [esp+0x10],eax
	call ZFatalSection::Lock
	test ebx,ebx
	je Block3

 Block1:
	add dword ptr [ebx+4],0xFFFFFFFF
	jne Block3

 Block2:
	mov dword ptr [ebx],0

 Block3:
	mov edx,dword ptr [edi+0x260]
	push edx
	add edi,0x258
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	mov eax,dword ptr [esi+0x5AC]
	push eax
	lea ecx,[esi+0x5A4]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x20]
	add esp,0x10
	push edx
	mov ecx,esi
	mov ebx,eax
	call CUser::GetAuraBooster
	mov ecx,dword ptr [esp+0x1C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push eax
	push edi
	push ecx
	push ebx
	call get_attack_speed_degree
	add esp,0x18
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4
}
}
// CUser::Init
_SUB_EXCEPTION_HANDLER(500610)
__SUB_CLASS_THIS(00500610, __thiscall, 16575,  CUser, void, const AvatarLook&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_500610
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esi+0x19B4],0x64
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [esp+0x64],0
	call CUser::GetVecCtrl_0
	lea edi,[esi+0x88]
	or ebx,0xFFFFFFFF
	mov ecx,edi
	mov dword ptr [esp+0x60],ebx
	call CAvatar::Init_0
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x1944]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x1940]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	lea ecx,[esi+0x3A34]
	call CItemEffectManager::Init
	mov eax,dword ptr [esp+0x54]
	push eax
	lea ecx,[esi+0x8C]
	call AvatarLook::operator=
	push 0
	mov ecx,edi
	call CAvatar::NotifyAvatarModified
	mov ecx,esi
	call CUser::SetLayerZ
	mov eax,dword ptr [esi+0x2E9C]
	test eax,eax
	jne Block8

 Block7:
	mov ecx,dword ptr [esi+0x2E98]
	mov eax,ecx
	neg eax
	sbb eax,eax
	and eax,ecx

 Block8:
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	test eax,eax
	je Block10

 Block9:
	mov ecx,eax
	call CUser::SetLayerZ

 Block10:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov edi,dword ptr [esi+0x19E4]
	mov dword ptr [esp+0x4C],1
	test edi,edi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	push 0
	push 0
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	push 0
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	push 0
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [ecx+0x8C]
	lea edx,[esp+0x48]
	push edx
	push edi
	call eax
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block16:
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x4C],ebx
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov eax,dword ptr [esp+0x1C]
	lea edi,[esi+0x199C]
	lea ebx,[edi+0xC]
	push eax
	mov ecx,ebx
	call TSecType<long>::SetData
	mov ecx,dword ptr [esp+0x20]
	push ecx
	mov ecx,edi
	call TSecType<long>::SetData
	mov ecx,ebx
	lea ebp,[esi+0x1984]
	call TSecType<long>::GetData
	lea ecx,[ebp+0xC]
	push eax
	call TSecType<long>::SetData
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	mov ecx,ebp
	call TSecType<long>::SetData
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	mov ecx,3
	mov dword ptr [esp+0x4C],2
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],ebp
	mov byte ptr [esp+0x4C],cl
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,ebp
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 5
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x70]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x2F10]
	cmp edi,eax
	je Block29

 Block25:
	mov dword ptr [esi+0x2F10],eax
	cmp eax,ebp
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	cmp edi,ebp
	je Block29

 Block28:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block29:
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block31:
	mov edi,8
	mov byte ptr [esp+0x4C],2
	cmp word ptr [esp+0x24],di
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x4C],ebx
	cmp word ptr [esp+0x34],di
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov eax,dword ptr [esi+0x1960]
	mov edx,0xD
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebp
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block41:
	mov edi,dword ptr [esi+0x2F10]
	mov dword ptr [esp+0x4C],4
	cmp edi,ebp
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	cmp eax,ebp
	jge Block45

 Block44:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block45:
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x4C],ebx
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov eax,dword ptr [esi+0x19E4]
	mov ecx,0xD
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebp
	je Block51

 Block50:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block51:
	mov edi,dword ptr [esi+0x2F10]
	mov dword ptr [esp+0x4C],5
	cmp edi,ebp
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	cmp eax,ebp
	jge Block55

 Block54:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block55:
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x4C],ebx
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	lea edx,[esp+0x34]
	mov ebx,6
	push edx
	mov dword ptr [esp+0x50],ebx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	mov ecx,dword ptr [esi+0x2F10]
	mov byte ptr [esp+0x4C],7
	cmp ecx,ebp
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	push ebp
	push ebp
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x34],di
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebp
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp word ptr [esp+0x24],di
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov edi,dword ptr [esi+0x2F10]
	cmp edi,ebp
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push edi
	call eax
	cmp eax,ebp
	jge Block77

 Block76:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block77:
	lea ecx,[esp+0x54]
	push ecx
	push 2
	lea ecx,[esi+0x39E4]
	call ZArray<ZList<_x_com_ptr<IWzGr2DLayer>>>::_Alloc
	mov ecx,esi
	call CUser::DrawNameTags
	mov edx,dword ptr [esp+0x58]
	lea edi,[esi+0x39E8]
	push edx
	mov ecx,edi
	call TSecType<int>::SetData
	mov ecx,edi
	call TSecType<int>::GetData
	test eax,eax
	je Block79

 Block78:
	mov ecx,esi
	call CUser::SetAdminEffect

 Block79:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	mov ecx,esi
	call edx
	test eax,eax
	jne Block81

 Block80:
	mov edi,dword ptr [esi]
	push 1
	push ebp
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [esp+0x6C],esp
	push 0x80
	push offset CTS_COMBO_COUNTER
	call MY_UINT128::_ctor_2
	mov eax,dword ptr [edi+0x20]
	mov ecx,esi
	call eax
	mov edi,dword ptr [esi]
	push 1
	push ebp
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [esp+0x6C],esp
	push 0x80
	push offset CTS_ENERGY_CHARGED
	call MY_UINT128::_ctor_2
	mov edx,dword ptr [edi+0x20]
	mov ecx,esi
	call edx
	mov edi,dword ptr [esi]
	push 1
	push ebp
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [esp+0x6C],esp
	push 0x80
	push offset CTS_FLYING
	call MY_UINT128::_ctor_2
	mov eax,dword ptr [edi+0x20]
	mov ecx,esi
	call eax
	mov ecx,esi
	call CUser::UpdateFlyingWingEffect
	mov ecx,esi
	call CUser::SetMapSpecificEffect
	push 1
	push ebp
	mov ecx,esi
	call CUser::UpdateAffectedSkillList
	mov dword ptr [esi+0x2F50],ebp

 Block81:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 8
}
}
// CUser::IsKindOf
__SUB_CLASS_THIS(004EB570, __thiscall, 16737,  CUser, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUser::ms_RTTI_CUser
	lea esp,[esp]

 Block1:
	cmp eax,ecx
	je Block4

 Block2:
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block1

 Block3:
	ret 4

 Block4:
	mov eax,1
	ret 4
}
}
// CUser::CUser
_SUB_EXCEPTION_HANDLER(4F4600)
__SUB_CLASS_THIS(004F4600, __thiscall, 16568,  CUser, void, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F4600
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
	call CLife::_ctor_default
	lea edi,[esi+0x88]
	xor ebx,ebx
	mov ecx,edi
	mov dword ptr [esp+0x20],ebx
	call CAvatar::_ctor_default
	lea ecx,[esi+0x19C8]
	int 3// TODO: 	mov dword ptr [esi],offset CUser::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUser::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUser::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [edi],offset CUser::`vftable'
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, long, unsigned long>::`vftable'
	mov dword ptr [ecx+4],ebx
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],ebx
	call ZMap<unsigned long, long, unsigned long>::_CalcAutoGrow
	mov dword ptr [esi+0x19E0],ebx
	mov dword ptr [esi+0x19E4],ebx
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esi+0x19E8],eax
	mov dword ptr [esi+0x19EC],ebx
	mov dword ptr [esi+0x19F0],ebx
	xor ecx,ecx
	mov word ptr [esi+0x19F8],cx
	xor edx,edx
	lea ecx,[esi+0x1A00]
	mov byte ptr [esp+0x20],5
	mov byte ptr [esi+0x19FA],bl
	mov word ptr [esi+0x19FC],dx
	mov byte ptr [esi+0x19FE],bl
	call SecondaryStat::_ctor_default
	mov eax,0xFF
	mov dword ptr [esi+0x2DF0],eax
	mov dword ptr [esi+0x2DF4],ebx
	mov dword ptr [esi+0x2DFC],ebx
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],7
	mov dword ptr [esi+0x2E14],ebx
	mov dword ptr [esi+0x2E18],ebx
	mov dword ptr [esi+0x2E1C],eax
	lea edi,[esi+0x2E20]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebp,[edi-0x3FF8]
	call _rand
	add eax,ebp
	mov dword ptr [edi],eax
	call _rand
	movzx ecx,byte ptr [edi]
	add eax,ebp
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+5],cl
	movzx eax,byte ptr [edi+4]
	mov edx,dword ptr [edi+8]
	push ebx
	mov ecx,edi
	mov byte ptr [edx+6],al
	call TSecType<long>::SetData
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esi+0x2E44]
	push 3
	mov byte ptr [esp+0x28],8
	mov dword ptr [ecx],ebx
	call ZArray<ZRef<CPet>>::_Alloc
	mov ebp,1
	mov dword ptr [esi+0x2E48],ebp
	lea ecx,[esi+0x2E4C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CSummoned>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],ebx
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],ebx
	call ZMap<unsigned long, ZRef<CSummoned>, unsigned long>::_CalcAutoGrow
	int 3// TODO: 	mov dword ptr [esi+0x2E64],offset ZList<ZRef<CSummoned>>::`vftable'
	mov dword ptr [esi+0x2E6C],ebx
	mov dword ptr [esi+0x2E70],ebx
	mov dword ptr [esi+0x2E74],ebx
	mov dword ptr [esi+0x2E8C],ebx
	mov dword ptr [esi+0x2E90],ebp
	mov dword ptr [esi+0x2E94],ebx
	mov dword ptr [esi+0x2E98],ebx
	mov dword ptr [esi+0x2E9C],ebx
	mov dword ptr [esi+0x2EA0],ebx
	mov dword ptr [esi+0x2EA4],ebx
	mov dword ptr [esi+0x2EAC],ebx
	mov dword ptr [esi+0x2EB0],ebx
	mov dword ptr [esi+0x2EB4],ebx
	mov dword ptr [esi+0x2EB8],ebx
	mov dword ptr [esi+0x2EBC],ebx
	mov dword ptr [esi+0x2EC0],ebx
	mov dword ptr [esi+0x2EC4],ebx
	or eax,0xFFFFFFFF
	mov dword ptr [esi+0x2EC8],eax
	mov dword ptr [esi+0x2ECC],eax
	mov dword ptr [esi+0x2ED0],ebx
	mov dword ptr [esi+0x2ED4],ebx
	mov dword ptr [esi+0x2ED8],ebx
	int 3// TODO: 	mov dword ptr [esi+0x2EE4],offset ZList<ZRef<CGrenade>>::`vftable'
	mov dword ptr [esi+0x2EEC],ebx
	mov dword ptr [esi+0x2EF0],ebx
	mov dword ptr [esi+0x2EF4],ebx
	mov dword ptr [esi+0x2EF8],ebx
	mov dword ptr [esi+0x2EFC],ebx
	mov dword ptr [esi+0x2F10],ebx
	mov dword ptr [esi+0x2F14],ebx
	push offset CUser::ADDITIONALLAYER::~ADDITIONALLAYER
	push offset CUser::ADDITIONALLAYER::_ctor_default
	push 0x4B
	push 0x24
	lea eax,[esi+0x2F24]
	push eax
	mov byte ptr [esp+0x34],0x14
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x39B0],ebx
	mov dword ptr [esi+0x39B4],ebx
	mov dword ptr [esi+0x39B8],ebx
	mov dword ptr [esi+0x39BC],ebx
	mov dword ptr [esi+0x39C0],ebx
	mov dword ptr [esi+0x39C4],ebx
	mov dword ptr [esi+0x39C8],ebx
	mov dword ptr [esi+0x39CC],ebx
	int 3// TODO: 	mov dword ptr [esi+0x39D0],offset ZList<CUser::AFFECTEDSKILLENTRY>::`vftable'
	mov dword ptr [esi+0x39D8],ebx
	mov dword ptr [esi+0x39DC],ebx
	mov dword ptr [esi+0x39E0],ebx
	mov dword ptr [esi+0x39E4],ebx
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x18
	lea ebp,[esi+0x39E8]
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
	push ebx
	mov ecx,ebp
	mov byte ptr [edx+6],al
	call TSecType<int>::SetData
	mov dword ptr [esi+0x39FC],ebx
	lea ecx,[esi+0x3A18]
	mov byte ptr [esp+0x20],0x1A
	mov dword ptr [esi+0x3A10],ebx
	mov dword ptr [esi+0x3A14],ebx
	call CKeywordEffectManager::_ctor_default
	lea ecx,[esi+0x3A34]
	mov byte ptr [esp+0x20],0x1B
	call CItemEffectManager::_ctor_default
	mov dword ptr [esi+0x3A44],ebx
	mov dword ptr [esi+0x3A48],ebx
	mov dword ptr [esi+0x3A4C],ebx
	mov dword ptr [esi+0x3A50],ebx
	mov dword ptr [esi+0x3A54],ebx
	mov dword ptr [esi+0x3A58],ebx
	mov dword ptr [esi+0x3A5C],ebx
	mov dword ptr [esi+0x3A60],ebx
	mov dword ptr [esi+0x3A64],ebx
	mov dword ptr [esi+0x3A68],ebx
	mov dword ptr [esi+0x3A6C],ebx
	mov dword ptr [esi+0x3A70],ebx
	mov dword ptr [esi+0x3A74],ebx
	mov dword ptr [esi+0x3A78],ebx
	mov dword ptr [esi+0x3A7C],ebx
	mov dword ptr [esi+0x3A84],ebx
	mov dword ptr [esi+0x3A88],ebx
	mov dword ptr [esi+0x3A8C],ebx
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 5
	push 4
	lea ecx,[esi+0x3A94]
	push ecx
	mov byte ptr [esp+0x34],0x2A
	mov dword ptr [esi+0x3A90],ebx
	call __eh_vector_ctor_iterator
	mov byte ptr [esp+0x20],0x2B
	mov dword ptr [esi+0x3AA8],ebx
	mov dword ptr [esi+0x3AAC],ebx
	mov dword ptr [esi+0x3AB0],ebx
	mov dword ptr [esi+0x3AB4],ebx
	mov dword ptr [esi+0x3AB8],1
	push ebx
	mov ecx,edi
	call TSecType<long>::SetData
	lea edx,[esi+0x2E2C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x2E38]
	xor ecx,ecx
	mov dword ptr [esi+0x2E34],eax
	call _ZtlSecureTearHelper<long>::call
	push ebx
	mov ecx,ebp
	mov dword ptr [esi+0x2E40],eax
	mov dword ptr [esi+0x2E78],ebx
	mov dword ptr [esi+0x2E7C],ebx
	mov dword ptr [esi+0x2E80],ebx
	mov dword ptr [esi+0x2E84],ebx
	mov dword ptr [esi+0x2F00],ebx
	mov dword ptr [esi+0x2F04],ebx
	mov dword ptr [esi+0x2F08],ebx
	mov dword ptr [esi+0x2F0C],ebx
	call TSecType<int>::SetData
	mov dword ptr [esi+0x2EDC],ebx
	mov dword ptr [esi+0x2EE0],ebx
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4
}
}
// CUser::IsSamePhaseWithLocalUser
__SUB_CLASS_THIS0(004DEC40, __thiscall, 16584,  CUser, int32_t) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xC]
	call edx
	test eax,eax
	je Block2

 Block1:
	mov eax,1
	pop edi
	ret

 Block2:
	push esi
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block9

 Block3:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block9

 Block4:
	mov esi,dword ptr [esi+0x24C]
	test esi,esi
	jle Block9

 Block5:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block9

 Block6:
	mov eax,dword ptr [edi+0x2E18]
	cmp dword ptr [ecx+0x2E18],eax
	je Block9

 Block7:
	cmp esi,eax
	jl Block9

 Block8:
	pop esi
	xor eax,eax
	pop edi
	ret

 Block9:
	pop esi
	mov eax,1
	pop edi
	ret
}
}
// CGrenade::Init
_SUB_EXCEPTION_HANDLER(169960)
__SUB_CLASS_THIS(00169960, __thiscall, 81205,  CGrenade, void, long, long, CUser*, int32_t, NakedParam<tagPOINT>, long, long, int32_t, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_169960
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x68]
	mov ecx,dword ptr [esp+0x6C]
	mov edx,dword ptr [esp+0x88]
	mov ebx,dword ptr [esp+0x64]
	mov dword ptr [esi+0x48],eax
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esi+0x10],ecx
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr [esi+0x2C],eax
	mov dword ptr [esi+0x24],eax
	mov eax,dword ptr [esp+0x8C]
	mov dword ptr [esi+0x44],ebx
	mov dword ptr [esi+0x30],ecx
	mov dword ptr [esi+0x28],ecx
	mov dword ptr [esi+0x4C],edx
	mov dword ptr [esi+0x50],eax
	call CVecCtrlGrenade::CreateInstance
	mov ecx,dword ptr [esi+0x28]
	mov edx,dword ptr [esi+0x24]
	push 1
	push 0x7FFFFFFF
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push edx
	mov edi,eax
	call CWvsPhysicalSpace2D::GetFootholdUnderneath
	mov ebp,eax
	push esi
	mov ecx,edi
	mov dword ptr [esp+0x8C],ebp
	call CVecCtrl::Init
	xor eax,eax
	cmp dword ptr [esp+0x70],eax
	je Block3

 Block1:
	cmp dword ptr [esp+0x90],eax
	je Block3

 Block2:
	fild dword ptr [esp+0x90]
	mov eax,ebx
	sub eax,0x423D0B
	neg eax
	fmul qword ptr [_D_PI__162]
	sbb eax,eax
	and eax,0xFFFFFFA1
	add eax,0x91
	fdiv qword ptr [__real_4066800000000000]
	mov dword ptr [esp+0x24],eax
	fst qword ptr [esp+0x14]
	call __CIcos
	fstp qword ptr [esp+0x34]
	fld qword ptr [esp+0x14]
	call __CIsin
	fild dword ptr [esp+0x24]
	mov ecx,dword ptr [esi+0x24]
	mov dword ptr [esp+0x64],ecx
	fld st(0)
	fld qword ptr [esp+0x34]
	fmul st(1),st
	fld st(3)
	fldz
	fmul st(1),st
	fxch st(3)
	fsubrp st(1),st(0)
	fiadd dword ptr [esp+0x64]
	call __ftol2_sse
	fxch st(2)
	mov edx,dword ptr [esi+0x28]
	fmulp st(3),st
	mov dword ptr [esp+0x68],edx
	mov ebp,eax
	fmulp st(1),st(0)
	faddp st(1),st(0)
	fiadd dword ptr [esp+0x68]
	call __ftol2_sse
	sub ebp,dword ptr [esp+0x64]
	sub eax,dword ptr [esp+0x68]
	mov dword ptr [esi+0x54],ebp
	mov ebp,dword ptr [esp+0x88]
	jmp Block4

 Block3:
	mov dword ptr [esi+0x54],eax

 Block4:
	push ebx
	mov dword ptr [esi+0x58],eax
	call is_mob_body_bomb
	add esp,4
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [esp+0x80]
	mov edx,dword ptr [esp+0x7C]
	mov eax,dword ptr [edi]
	mov eax,dword ptr [eax+4]
	push ebp
	push 3
	push ecx
	mov ecx,dword ptr [esi+0x28]
	push edx
	mov edx,dword ptr [esi+0x24]
	push ecx
	push edx
	push 1
	mov ecx,edi
	call eax
	jmp Block10

 Block6:
	cmp dword ptr [esp+0x70],0
	mov eax,dword ptr [esi+0x24]
	je Block8

 Block7:
	dec eax
	jmp Block9

 Block8:
	inc eax

 Block9:
	mov ecx,dword ptr [esp+0x80]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+4]
	push ebp
	push 3
	push ecx
	mov ecx,dword ptr [esp+0x88]
	push ecx
	mov ecx,dword ptr [esi+0x28]
	sub ecx,0x14
	push ecx
	push eax
	push 1
	mov ecx,edi
	call edx

 Block10:
	mov eax,dword ptr [esp+0x84]
	lea ecx,[esi+0x14]
	push edi
	mov dword ptr [edi+0x2F8],eax
	call _x_com_ptr<IWzVector2D>::_QueryVecCtrlGrenade
	xor ebx,ebx
	cmp eax,ebx
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push ecx
	call ebp
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov eax,3
	mov dword ptr [esp+0x5C],ebx
	mov word ptr [esp+0x34],ax
	mov dword ptr [esp+0x3C],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x5C],1
	cmp ecx,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[esp+0x9C]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x18]
	cmp edi,eax
	je Block22

 Block18:
	mov dword ptr [esi+0x18],eax
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block20:
	cmp edi,ebx
	je Block22

 Block21:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block22:
	mov eax,dword ptr [esp+0x80]
	cmp eax,ebx
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block24:
	mov edi,8
	mov byte ptr [esp+0x5C],0
	cmp word ptr [esp+0x34],di
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebx
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x24],di
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov ecx,dword ptr [esp+0x6C]
	lea edx,[esp+0x80]
	push edx
	add ecx,0x88
	call CAvatar::GetLayerUnderFace
	mov eax,dword ptr [eax]
	mov ebx,2
	mov ecx,0xD
	mov dword ptr [esp+0x5C],ebx
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],eax
	test eax,eax
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block34:
	mov edi,dword ptr [esi+0x18]
	mov byte ptr [esp+0x5C],3
	test edi,edi
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	test eax,eax
	jge Block38

 Block37:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block38:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x5C],bl
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov eax,dword ptr [esp+0x80]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x5C],edi
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov eax,dword ptr [esp+0x90]
	mov ecx,dword ptr [esp+0x70]
	push eax
	push ecx
	mov ecx,esi
	call CGrenade::PrepareAnimationLayer
	cmp dword ptr [esi+0x4C],0
	je Block64

 Block45:
	call get_update_time
	cmp dword ptr [esi+0x4C],eax
	jle Block64

 Block46:
	lea edx,[esp+0x44]
	push edx
	call ebp
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esp+0x60],4
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	mov esi,dword ptr [esi+0x18]
	mov bl,5
	mov byte ptr [esp+0x5C],bl
	test esi,esi
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea eax,[esp+0x90]
	push eax
	mov ecx,esi
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x5C],6
	test ecx,ecx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x18]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x90]
	mov byte ptr [esp+0x5C],bl
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	mov esi,8
	mov byte ptr [esp+0x5C],4
	cmp word ptr [esp+0x14],si
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov dword ptr [esp+0x5C],edi
	cmp word ptr [esp+0x44],si
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 0x30
}
}
// CUser::ShowAffectedSkillAni
_SUB_EXCEPTION_HANDLER(4EB860)
// 8EC8A8
static uint8_t _SUB_4EB860_LOOKUP_TABLE_0[43] = {
0, 1, 2, 3, 4, 5, 13, 13, 6, 13, 13, 13, 13, 7, 8, 9, 
10, 11, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 
};
__SUB_CLASS_THIS(004EB860, __thiscall, 16618,  CUser, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4EB860
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x180
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x194]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x20],ebp
	xor ebx,ebx
	cmp dword ptr [ebp+0x638],ebx
	jne Block172

 Block1:
	mov eax,dword ptr [ebp+0x39DC]
	mov dword ptr [esp+0x38],eax
	cmp eax,ebx
	je Block172

 Block2:
	jmp Block4

 Block3:
	mov ebp,dword ptr [esp+0x20]

 Block4:
	lea eax,[esp+0x38]
	push eax
	call ZList<CUser::AFFECTEDSKILLENTRY>::GetNext
	mov ecx,eax
	mov eax,dword ptr [ecx+4]
	add esp,4
	mov dword ptr [esp+0x1C],ecx
	cmp eax,ebx
	je Block38

 Block5:
	mov edx,eax
	sub edx,dword ptr [esp+0x1A4]
	test edx,edx
	jg Block38

 Block6:
	cmp eax,ebx
	je Block38

 Block7:
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x19C],ebx
	mov dword ptr [esp+0x18],ebx
	mov esi,dword ptr [ecx]
	mov byte ptr [esp+0x19C],1
	cmp esi,ebx
	jne Block40

 Block8:
	push offset _S_EFFECTBASICEFFIM__13
	lea ecx,[esp+0x38]
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [esp+0x34]
	mov edi,esi
	mov dword ptr [esp+0x18],edi
	cmp esi,ebx
	je Block10

 Block9:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x34],ebx

 Block10:
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x1BC],2
	call CUser::GetVecCtrl_0
	cmp edi,ebx
	je Block12

 Block11:
	mov eax,dword ptr [edi]
	jmp Block13

 Block12:
	xor eax,eax

 Block13:
	push ebx
	push eax
	lea edx,[esp+0xA0]
	push edx
	mov byte ptr [esp+0x1C4],1
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x2EA4]
	add esp,0x28
	cmp esi,eax
	je Block18

 Block14:
	mov dword ptr [ebp+0x2EA4],eax
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block16:
	cmp esi,ebx
	je Block18

 Block17:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block18:
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebx
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block20:
	cmp dword ptr [ebp+0x2EA4],ebx
	sete al
	cmp al,bl
	sete al
	cmp al,bl
	je Block34

 Block21:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xC4]
	push ecx
	call esi
	lea edx,[esp+0xC4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block168

 Block22:
	lea eax,[esp+0xA4]
	push eax
	mov byte ptr [esp+0x1A0],3
	call esi
	lea ecx,[esp+0xA4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block168

 Block23:
	mov ecx,dword ptr [ebp+0x2EA4]
	mov byte ptr [esp+0x19C],4
	cmp ecx,ebx
	je Block169

 Block24:
	lea edx,[esp+0xC4]
	push edx
	lea eax,[esp+0xA8]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x19C],3
	cmp word ptr [esp+0xA4],si
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0xAC]
	xor ecx,ecx
	mov word ptr [esp+0xA4],cx
	cmp eax,ebx
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0xA4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [esp+0x19C],1
	cmp word ptr [esp+0xC4],si
	jne Block32

 Block29:
	xor eax,eax
	mov word ptr [esp+0xC4],ax
	mov eax,dword ptr [esp+0xCC]

 Block30:
	cmp eax,ebx
	je Block34

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block32:
	lea ecx,[esp+0xC4]

 Block33:
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [edx+4],ebx

 Block35:
	cmp edi,ebx
	je Block37

 Block36:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block37:
	mov dword ptr [esp+0x19C],0xFFFFFFFF

 Block38:
	cmp dword ptr [esp+0x38],ebx
	jne Block3

 Block39:
	jmp Block172

 Block40:
	cmp esi,1
	jne Block64

 Block41:
	push offset _S_EFFECTBASICEFFIM__12
	lea ecx,[esp+0x44]
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [esp+0x40]
	mov edi,esi
	mov dword ptr [esp+0x18],edi
	cmp esi,ebx
	je Block43

 Block42:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x40],ebx

 Block43:
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x1BC],5
	call CUser::GetVecCtrl_0
	cmp edi,ebx
	je Block45

 Block44:
	mov eax,dword ptr [edi]
	jmp Block46

 Block45:
	xor eax,eax

 Block46:
	push ebx
	push eax
	lea edx,[esp+0x80]
	push edx
	mov byte ptr [esp+0x1C4],1
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x2EA4]
	add esp,0x28
	cmp esi,eax
	je Block51

 Block47:
	mov dword ptr [ebp+0x2EA4],eax
	cmp eax,ebx
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block49:
	cmp esi,ebx
	je Block51

 Block50:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block51:
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebx
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block53:
	cmp dword ptr [ebp+0x2EA4],ebx
	sete al
	cmp al,bl
	sete al
	cmp al,bl
	je Block34

 Block54:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xB4]
	push ecx
	call esi
	lea edx,[esp+0xB4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block168

 Block55:
	lea eax,[esp+0xE4]
	push eax
	mov byte ptr [esp+0x1A0],6
	call esi
	lea ecx,[esp+0xE4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block168

 Block56:
	mov ecx,dword ptr [ebp+0x2EA4]
	mov byte ptr [esp+0x19C],7
	cmp ecx,ebx
	je Block169

 Block57:
	lea edx,[esp+0xB4]
	push edx
	lea eax,[esp+0xE8]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x19C],6
	cmp word ptr [esp+0xE4],si
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0xEC]
	xor ecx,ecx
	mov word ptr [esp+0xE4],cx
	cmp eax,ebx
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea edx,[esp+0xE4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov byte ptr [esp+0x19C],1
	cmp word ptr [esp+0xB4],si
	jne Block63

 Block62:
	xor eax,eax
	mov word ptr [esp+0xB4],ax
	mov eax,dword ptr [esp+0xBC]
	jmp Block30

 Block63:
	lea ecx,[esp+0xB4]
	jmp Block33

 Block64:
	cmp esi,2
	jne Block88

 Block65:
	push offset _S_EFFECTBASICEFFIM__11
	lea ecx,[esp+0x4C]
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [esp+0x48]
	mov edi,esi
	mov dword ptr [esp+0x18],edi
	cmp esi,ebx
	je Block67

 Block66:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x48],ebx

 Block67:
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x1BC],8
	call CUser::GetVecCtrl_0
	cmp edi,ebx
	je Block69

 Block68:
	mov eax,dword ptr [edi]
	jmp Block70

 Block69:
	xor eax,eax

 Block70:
	push ebx
	push eax
	lea edx,[esp+0x88]
	push edx
	mov byte ptr [esp+0x1C4],1
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x2EA4]
	add esp,0x28
	cmp esi,eax
	je Block75

 Block71:
	mov dword ptr [ebp+0x2EA4],eax
	cmp eax,ebx
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block73:
	cmp esi,ebx
	je Block75

 Block74:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block75:
	mov eax,dword ptr [esp+0x64]
	cmp eax,ebx
	je Block77

 Block76:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block77:
	cmp dword ptr [ebp+0x2EA4],ebx
	sete al
	cmp al,bl
	sete al
	cmp al,bl
	je Block34

 Block78:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xF4]
	push ecx
	call esi
	lea edx,[esp+0xF4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block168

 Block79:
	lea eax,[esp+0xD4]
	push eax
	mov byte ptr [esp+0x1A0],9
	call esi
	lea ecx,[esp+0xD4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block168

 Block80:
	mov ecx,dword ptr [ebp+0x2EA4]
	mov byte ptr [esp+0x19C],0xA
	cmp ecx,ebx
	je Block169

 Block81:
	lea edx,[esp+0xF4]
	push edx
	lea eax,[esp+0xD8]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x19C],9
	cmp word ptr [esp+0xD4],si
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0xDC]
	xor ecx,ecx
	mov word ptr [esp+0xD4],cx
	cmp eax,ebx
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[esp+0xD4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block85:
	mov byte ptr [esp+0x19C],1
	cmp word ptr [esp+0xF4],si
	jne Block87

 Block86:
	xor eax,eax
	mov word ptr [esp+0xF4],ax
	mov eax,dword ptr [esp+0xFC]
	jmp Block30

 Block87:
	lea ecx,[esp+0xF4]
	jmp Block33

 Block88:
	cmp esi,3
	jne Block100

 Block89:
	push offset _S_EFFECTBASICEFFIM__10
	lea ecx,[esp+0x30]
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x1C]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	je Block91

 Block90:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x2C],ebx

 Block91:
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x1BC],0xB
	call CUser::GetVecCtrl_0
	mov edi,dword ptr [esp+0x34]
	cmp edi,ebx
	je Block93

 Block92:
	mov eax,dword ptr [edi]
	jmp Block94

 Block93:
	xor eax,eax

 Block94:
	push ebx
	push eax
	lea edx,[esp+0xAC]
	push edx
	mov byte ptr [esp+0x1C4],1
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	lea esi,[ebp+0x2EA4]
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x88]
	cmp eax,ebx
	je Block96

 Block95:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block96:
	cmp dword ptr [esi],ebx
	sete al
	cmp al,bl
	sete al
	cmp al,bl
	je Block99

 Block97:
	push offset _D_VTMISSING
	lea ecx,[esp+0x108]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x158]
	mov byte ptr [esp+0x1A0],0xC
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x19C],0xD
	cmp ecx,ebx
	je Block169

 Block98:
	lea eax,[esp+0x104]
	push eax
	lea edx,[esp+0x158]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x154]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x104]
	call Ztl_variant_t::~Ztl_variant_t

 Block99:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [eax+4],ebx
	jmp Block35

 Block100:
	push esi
	call is_bmage_aura_skill
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	add esp,4
	test eax,eax
	je Block114

 Block101:
	push esi
	call CSkillInfo::GetSkill
	mov esi,eax
	cmp esi,ebx
	je Block166

 Block102:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ecx]
	cmp eax,0x1E9F5B0
	jg Block109

 Block103:
	je Block108

 Block104:
	sub eax,0x1E84BEB
	je Block112

 Block105:
	sub eax,0x1869F
	je Block108

 Block106:
	sub eax,1
	je Block111

 Block107:
	jmp Block113

 Block108:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,eax
	call SecondaryStat::_ZtlSecureGet_cBlueAura_
	jmp Block113

 Block109:
	sub eax,0x1EA1CC0
	je Block112

 Block110:
	sub eax,1
	jne Block113

 Block111:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,eax
	call SecondaryStat::_ZtlSecureGet_cYellowAura_
	jmp Block113

 Block112:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,eax
	call SecondaryStat::_ZtlSecureGet_cDarkAura_

 Block113:
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,esi
	call SKILLENTRY::GetAffectedUOL
	push eax
	lea ecx,[esp+0x1C]
	call Ztl_bstr_t::op_assign
	lea ecx,[esp+0x58]
	call Ztl_bstr_t::~Ztl_bstr_t
	mov ebp,dword ptr [esp+0x20]
	jmp Block152

 Block114:
	mov edi,esi
	and edi,0xFFFF
	push edi
	sar esi,0x10
	call CSkillInfo::GetMobSkill
	cmp eax,ebx
	je Block37

 Block115:
	cmp esi,ebx
	jle Block37

 Block116:
	mov ecx,dword ptr [eax+4]
	cmp ecx,ebx
	jne Block118

 Block117:
	xor ecx,ecx
	jmp Block119

 Block118:
	mov ecx,dword ptr [ecx-4]

 Block119:
	cmp esi,ecx
	ja Block37

 Block120:
	mov edx,dword ptr [eax+4]
	imul esi,0x5C
	lea esi,[esi+edx-0x5C]
	lea eax,[esp+0x90]
	push eax
	mov ecx,esi
	call MOBSKILLLEVELDATA::GetAffectedUOL
	mov ecx,eax
	call _xbstr_t::length
	lea ecx,[esp+0x90]
	mov ebp,eax
	call Ztl_bstr_t::~Ztl_bstr_t
	cmp ebp,ebx
	je Block122

 Block121:
	lea ecx,[esp+0x60]
	push ecx
	mov ecx,esi
	call MOBSKILLLEVELDATA::GetAffectedUOL
	push eax
	lea ecx,[esp+0x1C]
	call Ztl_bstr_t::op_assign
	lea ecx,[esp+0x60]
	call Ztl_bstr_t::~Ztl_bstr_t

 Block122:
	mov ebp,dword ptr [esp+0x20]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0xC]
	mov ecx,ebp
	call eax
	test eax,eax
	je Block152

 Block123:
	mov ecx,dword ptr [esp+0x1C]
	cmp dword ptr [ecx+0x18],ebx
	jne Block152

 Block124:
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x1C]
	call ZXString<char>::CreateFromCharStr
	lea eax,[edi-0x78]
	mov byte ptr [esp+0x19C],0xE
	cmp eax,0x2A
	ja Block148

 Block125:
	movzx edx,byte ptr [eax+_SUB_4EB860_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block126
cmp EDX, 1
je Block130
cmp EDX, 2
je Block127
cmp EDX, 3
je Block128
cmp EDX, 4
je Block129
cmp EDX, 5
je Block131
cmp EDX, 6
je Block132
cmp EDX, 7
je Block133
cmp EDX, 8
je Block134
cmp EDX, 9
je Block135
cmp EDX, 10
je Block136
cmp EDX, 11
je Block140
cmp EDX, 12
je Block143
cmp EDX, 13
je Block148


 Block126:
	lea eax,[esp+0x98]
	push 0xB8F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x1A0],0xF
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x98]
	jmp Block146

 Block127:
	lea ecx,[esp+0x68]
	push 0xB90
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x1A0],0x10
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x68]
	jmp Block146

 Block128:
	lea edx,[esp+0xA0]
	push 0xB91
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x1A0],0x11
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xA0]
	jmp Block146

 Block129:
	lea eax,[esp+0x94]
	push 0xB92
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x1A0],0x12
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x94]
	jmp Block146

 Block130:
	lea ecx,[esp+0x74]
	push 0xB93
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x1A0],0x13
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x74]
	jmp Block146

 Block131:
	lea edx,[esp+0x8C]
	push 0xB94
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x1A0],0x14
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x8C]
	jmp Block146

 Block132:
	lea eax,[esp+0x4C]
	push 0xEEA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x1A0],0x15
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x4C]
	jmp Block146

 Block133:
	lea ecx,[esp+0x9C]
	push 0xEEB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x1A0],0x16
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x9C]
	jmp Block146

 Block134:
	lea edx,[esp+0x84]
	push 0x155D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x1A0],0x17
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x84]
	jmp Block146

 Block135:
	lea eax,[esp+0x6C]
	push 0x155E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x1A0],0x18
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x6C]
	jmp Block146

 Block136:
	lea ecx,[esp+0x70]
	push 0x155F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x1A0],0x19
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x19C],0xE
	cmp eax,ebx
	je Block138

 Block137:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block138:
	call get_field
	cmp eax,ebx
	je Block148

 Block139:
	mov ecx,eax
	call CField::OnFearEffect
	jmp Block148

 Block140:
	lea edx,[esp+0x78]
	push 0x15BE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x3C],ebx
	mov esi,dword ptr [eax]
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+8]
	mov ecx,ebp
	mov byte ptr [esp+0x19C],0x1B
	call edx
	mov ecx,eax
	call SecondaryStat::_ZtlSecureGet_nFrozen_
	push eax
	lea eax,[esp+0x40]
	push esi
	push eax
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x19C],0x1A
	cmp eax,ebx
	je Block142

 Block141:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block142:
	mov eax,dword ptr [esp+0x78]
	jmp Block146

 Block143:
	lea ecx,[esp+0x80]
	push 0x17EB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x44],ebx
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x1A4],0x1D
	call ZXString<char>::Format
	add esp,8
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x19C],0x1C
	cmp eax,ebx
	je Block145

 Block144:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block145:
	mov eax,dword ptr [esp+0x80]

 Block146:
	mov byte ptr [esp+0x19C],0xE
	cmp eax,ebx
	je Block148

 Block147:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block148:
	lea ecx,[esp+0x14]
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block150

 Block149:
	lea eax,[esp+0x14]
	push 7
	push eax
	call CHATLOG_ADD
	add esp,8

 Block150:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x19C],1
	cmp eax,ebx
	je Block152

 Block151:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block152:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block166

 Block153:
	cmp dword ptr [eax],ebx
	je Block166

 Block154:
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block166

 Block155:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,ebx
	je Block166

 Block156:
	push offset _D_VTMISSING
	lea ecx,[esp+0x178]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x138]
	mov byte ptr [esp+0x1A0],0x1E
	call Ztl_variant_t::_ctor_1
	push ebx
	push ebx
	lea ecx,[esp+0x17C]
	push ecx
	lea edx,[esp+0x140]
	push edx
	push ecx
	lea eax,[esp+0x2C]
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push eax
	call Ztl_bstr_t::_ctor_copy
	mov byte ptr [esp+0x1B0],0x20
	cmp dword ptr [_D_G_RM],ebx
	je Block169

 Block157:
	lea ecx,[esp+0x198]
	push ecx
	mov byte ptr [esp+0x1B4],0x1F
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x1A4],0x21
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IWzProperty>::op_assign_unknown
	lea ecx,[esp+0x184]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x134]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x174]
	mov byte ptr [esp+0x19C],1
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [esp+0x28]
	cmp esi,ebx
	sete al
	cmp al,bl
	jne Block170

 Block158:
	mov edi,dword ptr [esp+0x1C]
	push ebx
	lea edx,[edi+0xC]
	push edx
	push ebx
	push ecx
	lea eax,[esp+0x28]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	mov dword ptr [edi+8],ebx
	call Ztl_bstr_t::_ctor_copy
	mov ecx,ebp
	call CUser::LoadLayer
	cmp eax,ebx
	je Block166

 Block159:
	mov ecx,dword ptr [ebp+0x39E4]
	xor eax,eax
	cmp dword ptr [edi+0x10],1
	setne al
	lea esi,[eax+eax*4]
	add esi,esi
	add esi,esi
	cmp dword ptr [ecx+esi+8],ebx
	jbe Block165

 Block160:
	push offset _D_VTMISSING
	lea ecx,[esp+0x128]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x118]
	mov byte ptr [esp+0x1A0],0x22
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebp+0x39E4]
	add eax,esi
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0x50]
	push edx
	mov ecx,eax
	mov byte ptr [esp+0x1A0],0x23
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	lea ecx,[esp+0x124]
	push ecx
	lea edx,[esp+0x118]
	push edx
	push ebx
	push ebx
	mov ecx,eax
	mov byte ptr [esp+0x1AC],0x24
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x19C],0x23
	cmp eax,ebx
	je Block162

 Block161:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block162:
	lea ecx,[esp+0x114]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x124]
	mov byte ptr [esp+0x19C],1
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x168]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x148]
	mov byte ptr [esp+0x1A0],0x25
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x54]
	push eax
	lea ecx,[edi+0x14]
	mov byte ptr [esp+0x1A0],0x26
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	lea ecx,[esp+0x164]
	push ecx
	lea edx,[esp+0x148]
	push edx
	push ebx
	push ebx
	mov ecx,eax
	mov byte ptr [esp+0x1AC],0x27
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x19C],0x26
	cmp eax,ebx
	je Block164

 Block163:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block164:
	lea ecx,[esp+0x144]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x164]
	mov byte ptr [esp+0x19C],1
	call Ztl_variant_t::~Ztl_variant_t

 Block165:
	mov ecx,dword ptr [ebp+0x39E4]
	lea eax,[edi+0x14]
	add ecx,esi
	push eax
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_Position
	push 1
	mov ecx,ebp
	mov dword ptr [edi+8],eax
	call CUser::ShiftAffectedSkillAnimation

 Block166:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [ecx+4],ebx
	lea ecx,[esp+0x18]
	call Ztl_bstr_t::~Ztl_bstr_t
	mov dword ptr [esp+0x19C],0xFFFFFFFF
	cmp dword ptr [esp+0x28],ebx
	je Block38

 Block167:
	mov eax,dword ptr [esp+0x28]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block38

 Block168:
	push eax
	call _com_issue_error

 Block169:
	push 0x80004003
	call _com_issue_error

 Block170:
	mov ecx,dword ptr [esp+0x18]
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x19C],0xFFFFFFFF
	cmp esi,ebx
	je Block172

 Block171:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block172:
	mov ecx,dword ptr [esp+0x194]

 Block173:
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18C
	ret 4
}
}
// CUser::ShowMorphEffect
_SUB_EXCEPTION_HANDLER(4E6750)
__SUB_CLASS_THIS(004E6750, __thiscall, 16710,  CUser, void, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E6750
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x638],0
	jne Block10

 Block1:
	mov dword ptr [esp+8],0
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x18],0
	lea ecx,[esp+8]
	je Block3

 Block2:
	push offset _S_EFFECTBASICEFFIM__9
	jmp Block4

 Block3:
	push offset _S_EFFECTBASICEFFIM__8

 Block4:
	call ZXString16::AssignCStr
	mov eax,dword ptr [esi+0x1960]
	push 5
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x30],1
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [esi+0x640]
	mov esi,dword ptr [esp+0x1C]
	not eax
	and eax,1
	push eax
	mov byte ptr [esp+0x30],0
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push esi
	call CAnimationDisplayer::Effect_General
	cmp dword ptr [esp+0x24],0
	je Block8

 Block7:
	push 0x64
	push offset _S_TRANSFORM
	call play_game_sound
	add esp,8

 Block8:
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test esi,esi
	je Block10

 Block9:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 8
}
}
// CUser::GetMiniRoomTitle
__SUB_CLASS_THIS0(005119C0, __thiscall, 16602,  CUser, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x2DFC
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CUser::GetTeamNameForMCarnival
_SUB_EXCEPTION_HANDLER(4E6A60)
__SUB_CLASS_THIS0(004E6A60, __thiscall, 16653,  CUser, ZXString<char>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E6A60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0xC],ebx
	mov esi,dword ptr [esp+0x28]
	mov dword ptr [esi],ebx
	mov eax,dword ptr [ecx+0x2DF0]
	sub eax,ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0xC],1
	je Block3

 Block1:
	sub eax,1
	jne Block6

 Block2:
	lea eax,[esp+0x10]
	push 0x1018
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push esi
	mov dword ptr [esp+0x28],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x18]
	jmp Block4

 Block3:
	lea ecx,[esp+0x14]
	push 0x1017
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push esi
	mov dword ptr [esp+0x28],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]

 Block4:
	add esp,8
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x18
	ret 4
}
}
// CUser::OnDragonPacket
_SUB_EXCEPTION_HANDLER(4E5C00)
__SUB_CLASS_THIS(004E5C00, __thiscall, 16624,  CUser, void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E5C00
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x1C]
	cmp eax,0xCE
	jne Block7

 Block1:
	cmp dword ptr [edi+0x2EAC],0
	lea esi,[edi+0x2EA8]
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CDragon>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	push 0x140
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block5

 Block4:
	mov ecx,eax
	call CDragon::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CDragon>::op_assign_ptr
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [edi+0x2EAC]
	push eax
	push edi
	call CDragon::OnCreated
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 8

 Block7:
	mov ecx,dword ptr [edi+0x2EAC]
	test ecx,ecx
	je Block10

 Block8:
	cmp eax,0xCF
	jne Block10

 Block9:
	mov edx,dword ptr [esp+0x20]
	push edx
	call CDragon::OnMove

 Block10:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 8
}
}
// CUser::RemoveSuddenDeathEffect
__SUB_CLASS_THIS0(004E12C0, __thiscall, 16570,  CUser, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3A54]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+0x3A54],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CUser::OnAvatarModified
__SUB_CLASS_THIS0(004F6F00, __thiscall, 16591,  CUser, void) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	xor esi,esi
	jmp Block2

 Block2:
	mov eax,dword ptr [edi+0x2DBC]
	mov ecx,dword ptr [eax+esi+4]
	test ecx,ecx
	je Block4

 Block3:
	call CPet::OnAvatarModified
	add esi,8
	cmp esi,0x18
	jl Block2

 Block4:
	lea esi,[edi-0x88]
	mov ecx,esi
	call CUser::SetAbilityEquip
	mov ecx,esi
	call CUser::SetSetItemEffect
	mov ecx,esi
	call CUser::UpdateKeywordEffects
	lea ecx,[edi+0x1D]
	push ecx
	lea ecx,[edi+0x39AC]
	call CItemEffectManager::UpdateEffects
	pop edi
	pop esi
	ret
}
}
