#include "regen.hpp"
// UserPreview.ipp
#include "UserPreview.hpp"

// CUserPreview::DoMeleeAttack
_SUB_EXCEPTION_HANDLER(54E620)
__SUB_CLASS_THIS(0054E620, __thiscall, 48101,  CUserPreview, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54E620
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
	mov edi,ecx
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add esi,0x3DA0
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],esi
	mov ecx,esi
	mov dword ptr [esp+0x28],0
	call CRand32::Random
	lea ecx,[edi+0x88]
	mov ebp,eax
	call CAvatar::GetOneTimeAction
	or ebx,0xFFFFFFFF
	cmp eax,ebx
	jg Block32

 Block1:
	mov eax,dword ptr [edi+0x19E4]
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	mov ecx,dword ptr [eax+0x1BC]
	push ecx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block32

 Block5:
	mov ecx,dword ptr [esp+0x30]
	mov esi,dword ptr [esp+0x34]
	test ecx,ecx
	je Block8

 Block6:
	test esi,esi
	jne Block8

 Block7:
	mov esi,dword ptr [edi+0x5A0]

 Block8:
	mov eax,dword ptr [edi+0x640]
	and eax,0xFFFFFFFE
	cmp eax,0xA
	jne Block17

 Block9:
	test esi,esi
	je Block16

 Block10:
	mov ecx,dword ptr [edi+0x5F8]
	cmp ecx,0x1D7AF0
	je Block16

 Block11:
	mov eax,offset _D_RIDING_WILDHUNTE__39+4

 Block12:
	cmp dword ptr [eax],ecx
	je Block15

 Block13:
	add eax,4
	cmp eax,offset _D_DB_DATE_19000101__41
	jl Block12

 Block14:
	mov esi,0x29
	jmp Block18

 Block15:
	mov esi,0x39
	jmp Block18

 Block16:
	mov esi,ebx
	jmp Block18

 Block17:
	push ebp
	push 0
	push 0
	push ecx
	call get_weapon_type
	add esp,4
	push eax
	push esi
	call get_random_melee_attack_action
	add esp,0x14
	mov esi,eax

 Block18:
	test esi,esi
	jge Block20

 Block19:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x28],ebx
	call ActionRandMan::~ActionRandMan
	jmp Block34

 Block20:
	push 0
	push 0
	push 6
	push esi
	mov ecx,edi
	call CUser::SetAttackAction
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov ecx,edi
	call eax
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	movzx ecx,al
	mov eax,dword ptr [edi+0x5B0]
	push ecx
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block22

 Block21:
	add eax,8
	push eax
	call ebx

 Block22:
	push 0
	lea edx,[esp+0x24]
	push 0
	push edx
	call CUser::GetAfterimageUOL
	add esp,0x18
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],1
	test ecx,ecx
	je Block31

 Block23:
	cmp dword ptr [ecx],0
	je Block26

 Block24:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block26

 Block25:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jne Block27

 Block26:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],0
	jmp Block31

 Block27:
	lea ebp,[esi+esi*2]
	lea ecx,[edi+0x88]
	lea ebp,[ebp*8+ActionData::m_saCharacterActions]
	call CAvatar::GetActionInfo
	mov eax,dword ptr [eax+8]
	imul eax,dword ptr [ebp+0x10]
	cdq
	idiv dword ptr [ebp+0xC]
	push 0
	push 0
	mov ebp,eax
	mov eax,dword ptr [esp+0x38]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x44],esp
	test eax,eax
	je Block29

 Block28:
	add eax,8
	push eax
	call ebx

 Block29:
	mov eax,dword ptr [edi+0x640]
	and eax,1
	push esi
	push eax
	mov byte ptr [esp+0x40],2
	call get_update_time
	add eax,ebp
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x44],1
	call CUser::RegisterAfterimage
	mov ecx,dword ptr [esp+0x14]
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	cmp ecx,esi
	je Block31

 Block30:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],esi

 Block31:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ActionRandMan::~ActionRandMan
	jmp Block34

 Block32:
	lea edx,[esi+0x18]
	push edx
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x2C],ebx
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov eax,dword ptr [esi+0xC]
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [esi+0x14]
	mov dword ptr [esi],eax
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esi+4],ecx
	mov dword ptr [esi+8],edx
	add dword ptr [eax+4],ebx
	jne Block34

 Block33:
	mov dword ptr [eax],0

 Block34:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 8
}
}
// CUserPreview::DeleteFireCrack
__SUB_CLASS_THIS0(0054DFE0, __thiscall, 48100,  CUserPreview, void) {
__asm {

 Block0:
	push esi
	push edi
	lea esi,[ecx+0x3B08]
	mov edi,5
	lea ecx,[ecx]

 Block1:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block3

 Block2:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	add esi,4
	sub edi,1
	jne Block1

 Block4:
	pop edi
	pop esi
	ret
}
}
// CUserPreview::GetSecondaryStat
__SUB_CLASS_THIS0(0054DF60, __thiscall, 48105,  CUserPreview, const SecondaryStat&) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add eax,0x2148
	ret
}
}
// CUserPreview::SetPet
_SUB_EXCEPTION_HANDLER(54E260)
__SUB_CLASS_THIS(0054E260, __thiscall, 48109,  CUserPreview, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54E260
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x1C]
	push 0
	push 0
	call CUser::SetActivePet
	test edi,edi
	je Block5

 Block1:
	push 0x248
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block3

 Block2:
	mov ecx,eax
	call CPet::_ctor_default
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	push eax
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CUser::SetActivePet
	mov eax,dword ptr [esi+0x2E44]
	mov ecx,dword ptr [eax+4]
	push edi
	push esi
	call CPet::Init_0
	mov ecx,dword ptr [esi+0x2E44]
	mov ecx,dword ptr [ecx+4]
	call CPet::SetPreviewState

 Block5:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4
}
}
// CUserPreview::SetRiding
__SUB_CLASS_THIS(0054DF40, __thiscall, 48109,  CUserPreview, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push 0
	push eax
	add ecx,0x88
	call CAvatar::SetRidingVehicle
	ret 4
}
}
// CUserPreview::ShowPersonalShop
_SUB_EXCEPTION_HANDLER(54FA90)
__SUB_CLASS_THIS(0054FA90, __thiscall, 48101,  CUserPreview, void, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54FA90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
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
	mov dword ptr [ebp+0x30],esi
	mov edi,dword ptr [ebp+0x74]
	xor ebx,ebx
	cmp dword ptr [esi+0x3AE8],ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block5

 Block1:
	cmp edi,dword ptr [_D_NLASTITEMID__1]
	jne Block5

 Block2:
	mov dword ptr [esi+0x3AE4],ebx
	mov eax,dword ptr [esi+0x3AE8]
	cmp eax,ebx
	je Block4

 Block3:
	mov dword ptr [esi+0x3AE8],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov dword ptr [esi+0x3AEC],ebx
	jmp Block91

 Block5:
	mov eax,dword ptr [ebp+0x78]
	lea ecx,[ebp+0x10]
	mov dword ptr [esi+0x3AE4],eax
	mov esi,dword ptr [ZImports::_VariantInit]
	push ecx
	mov dword ptr [_D_NLASTITEMID__1],edi
	call esi
	lea edx,[ebp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea eax,[ebp]
	push eax
	mov dword ptr [ebp-4],ebx
	call esi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	push ebx
	push ebx
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x5B3
	push ecx
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[ebp-0x1C]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov esi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x1C],si
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp],si
	jne Block21

 Block19:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x10],si
	jne Block25

 Block23:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,ebx
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov dword ptr [ebp+0x54],ebx
	lea eax,[ebp+0x60]
	push 0x987
	push eax
	mov byte ptr [ebp-4],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,0x51EB851F
	imul edi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add edx,eax
	imul edx,0x64
	mov eax,edi
	sub eax,edx
	push eax
	mov dword ptr [ebp+0x4C],eax
	push ecx
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],9
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],8
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov edi,dword ptr [ebp+0x54]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push ebx
	push ebx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0xA
	cmp ecx,ebx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	mov dword ptr [ebp+0x34],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block33

 Block31:
	cmp eax,0x80004002
	je Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0xD
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,ebx
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov esi,dword ptr [ebp+0x34]
	cmp esi,ebx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[ebp+0x64]
	push eax
	push esi
	mov dword ptr [ebp+0x64],ebx
	call ecx
	cmp eax,ebx
	jge Block41

 Block40:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	mov edx,dword ptr [ebp+0x64]
	fild dword ptr [ebp+0x64]
	test edx,edx
	jge Block43

 Block42:
	fadd qword ptr [__real_41f0000000000000]

 Block43:
	fmul qword ptr [__real_3feb6db6db6db6db]
	call __ftol2_sse
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x5C],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push ecx
	push esi
	mov dword ptr [ebp+0x64],ebx
	call edx
	cmp eax,ebx
	jge Block45

 Block44:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block45:
	mov eax,dword ptr [ebp+0x64]
	fild dword ptr [ebp+0x64]
	test eax,eax
	jge Block47

 Block46:
	fadd qword ptr [__real_41f0000000000000]

 Block47:
	fmul qword ptr [__real_3feb6db6db6db6db]
	call __ftol2_sse
	mov ecx,dword ptr [esi]
	lea edx,[ebp+0x64]
	push edx
	mov dword ptr [ebp+0x38],eax
	mov eax,dword ptr [ecx+0x40]
	push esi
	mov dword ptr [ebp+0x64],ebx
	call eax
	cmp eax,ebx
	jge Block49

 Block48:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block49:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	mov edi,dword ptr [ebp+0x64]
	lea edx,[ebp+0x60]
	push edx
	push esi
	mov dword ptr [ebp+0x60],ebx
	call eax
	cmp eax,ebx
	jge Block51

 Block50:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block51:
	mov ebx,dword ptr [ebp+0x30]
	mov ecx,dword ptr [ebp+0x60]
	mov edx,dword ptr [ebx+4]
	mov edx,dword ptr [edx+0x10]
	add ebx,4
	lea eax,[ebp+0x44]
	mov dword ptr [ebp+0x58],ecx
	push eax
	mov ecx,ebx
	call edx
	fild dword ptr [eax]
	shr edi,1
	sub edi,dword ptr [ebp+0x58]
	mov dword ptr [ebp+0x48],edi
	fild dword ptr [ebp+0x48]
	test edi,edi
	jge Block53

 Block52:
	fadd qword ptr [__real_41f0000000000000]

 Block53:
	fmul qword ptr [__real_3feb6db6db6db6db]
	fsubp st(1),st(0)
	call __ftol2_sse
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push ecx
	push esi
	mov dword ptr [ebp+0x60],0
	call edx
	test eax,eax
	jge Block55

 Block54:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block55:
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [esi]
	lea edx,[ebp+0x64]
	push edx
	mov dword ptr [ebp+0x58],eax
	mov eax,dword ptr [ecx+0x74]
	push esi
	mov dword ptr [ebp+0x64],0
	call eax
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block57:
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[ebp+0x28]
	mov dword ptr [ebp+0x48],ecx
	push eax
	mov ecx,ebx
	call edx
	fild dword ptr [eax+4]
	mov eax,dword ptr [ebp+0x58]
	sub eax,dword ptr [ebp+0x48]
	mov dword ptr [ebp+0x48],eax
	fild dword ptr [ebp+0x48]
	test eax,eax
	jge Block59

 Block58:
	fadd qword ptr [__real_41f0000000000000]

 Block59:
	fmul qword ptr [__real_3feb6db6db6db6db]
	fsubp st(1),st(0)
	call __ftol2_sse
	cmp dword ptr [ebp+0x4C],0
	mov ebx,eax
	jne Block61

 Block60:
	sub ebx,0x46

 Block61:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	mov edx,0xD
	mov word ptr [ebp+0x20],dx
	mov dword ptr [ebp+0x28],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	mov byte ptr [ebp-4],0xE
	call ecx
	cmp dword ptr [_D_G_GR],0
	mov byte ptr [ebp-4],0xF
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	mov ecx,dword ptr [ebp+0x5C]
	lea edx,[ebp+0x3C]
	push edx
	lea eax,[ebp+0x20]
	push eax
	mov eax,dword ptr [ebp+0x38]
	push 0
	push eax
	cdq
	sub eax,edx
	sar eax,1
	sub ebx,eax
	mov eax,ecx
	cdq
	push ecx
	sub eax,edx
	sar eax,1
	push ebx
	sub edi,eax
	push edi
	lea ecx,[ebp+0x4C]
	push ecx
	mov ecx,dword ptr [_D_G_GR]
	call IWzGr2D::CreateLayer
	mov ebx,dword ptr [ebp+0x30]
	mov eax,dword ptr [eax]
	mov edi,dword ptr [ebx+0x3AE8]
	cmp edi,eax
	je Block70

 Block66:
	mov dword ptr [ebx+0x3AE8],eax
	test eax,eax
	je Block68

 Block67:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block68:
	test edi,edi
	je Block70

 Block69:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block70:
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	mov edi,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp+0x20],di
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x3C],di
	jne Block79

 Block77:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov edi,dword ptr [ebx+0x3AE8]
	test edi,edi
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xB4]
	push 0xC0061440
	push edi
	call edx
	test eax,eax
	jge Block84

 Block83:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block84:
	mov edi,dword ptr [ebx+0x3AE8]
	test edi,edi
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	test eax,eax
	jge Block88

 Block87:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block88:
	mov dword ptr [ebx+0x3AEC],1
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],8
	call eax
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block90:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx

 Block91:
	lea esp,[ebp-0x3C]
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
	ret 8
}
}
// CUserPreview::GetShoeAttr
_SUB_EXCEPTION_HANDLER(54E010)
__SUB_CLASS_THIS0(0054E010, __thiscall, 48112,  CUserPreview, const ZRef<CAttrShoe>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54E010
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	push 0x90
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xC],0
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+0x14],0
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
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esi+4],eax
	test eax,eax
	je Block5

 Block4:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CUserPreview::ShowEntrustedShop
_SUB_EXCEPTION_HANDLER(550110)
__SUB_CLASS_THIS(00550110, __thiscall, 48101,  CUserPreview, void, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_550110
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x168
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x54],esi
	mov ebx,dword ptr [ebp+0x70]
	xor edi,edi
	cmp dword ptr [esi+0x3B00],edi
	sete al
	test al,al
	sete al
	test al,al
	je Block12

 Block1:
	cmp ebx,dword ptr [_D_NLASTITEMID__2]
	jne Block12

 Block2:
	mov dword ptr [esi+0x3AF0],edi
	mov eax,dword ptr [esi+0x3AF4]
	cmp eax,edi
	je Block4

 Block3:
	mov dword ptr [esi+0x3AF4],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x3AF8]
	cmp eax,edi
	je Block6

 Block5:
	mov dword ptr [esi+0x3AF8],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x3AFC]
	cmp eax,edi
	je Block8

 Block7:
	mov dword ptr [esi+0x3AFC],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x3B00]
	cmp eax,edi
	je Block10

 Block9:
	mov dword ptr [esi+0x3B00],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x3B04]
	cmp eax,edi
	je Block529

 Block11:
	mov dword ptr [esi+0x3B04],edi
	jmp Block528

 Block12:
	mov eax,dword ptr [ebp+0x74]
	lea ecx,[ebp-0xC4]
	mov dword ptr [esi+0x3AF0],eax
	mov esi,dword ptr [ZImports::_VariantInit]
	push ecx
	mov dword ptr [_D_NLASTITEMID__2],ebx
	call esi
	lea edx,[ebp-0xC4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea eax,[ebp-0x94]
	push eax
	mov dword ptr [ebp-4],edi
	call esi
	lea ecx,[ebp-0x94]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	push edi
	push edi
	lea edx,[ebp-0xC4]
	push edx
	lea eax,[ebp-0x94]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x48],esp
	push 0xD9E
	push ecx
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[ebp-0x144]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-0x24],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block21

 Block19:
	cmp eax,0x80004002
	je Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	cmp word ptr [ebp-0x144],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],5
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [ebp-0x144],ax
	mov eax,dword ptr [ebp-0x13C]
	cmp eax,edi
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[ebp-0x144]
	push ecx
	call esi

 Block25:
	cmp word ptr [ebp-0x94],8
	mov byte ptr [ebp-4],6
	jne Block28

 Block26:
	mov eax,dword ptr [ebp-0x8C]
	xor edx,edx
	mov word ptr [ebp-0x94],dx
	cmp eax,edi
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[ebp-0x94]
	push eax
	call esi

 Block29:
	cmp word ptr [ebp-0xC4],8
	mov byte ptr [ebp-4],7
	jne Block32

 Block30:
	mov eax,dword ptr [ebp-0xBC]
	xor ecx,ecx
	mov word ptr [ebp-0xC4],cx
	cmp eax,edi
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[ebp-0xC4]
	push edx
	call esi

 Block33:
	mov dword ptr [ebp-0x34],edi
	lea eax,[ebp+0x60]
	push 0xDA2
	push eax
	mov byte ptr [ebp-4],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,0x51EB851F
	imul ebx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x64
	sub ebx,eax
	push ebx
	push ecx
	lea ecx,[ebp-0x34]
	push ecx
	mov byte ptr [ebp-4],9
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],8
	cmp eax,edi
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov ebx,dword ptr [ebp-0x34]
	push edi
	push edi
	push 0xFFFFFFFF
	push ebx
	push edi
	push edi
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push edi
	push edi
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ebx
	push edi
	push edi
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0xA
	cmp ecx,edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea edx,[ebp-0x164]
	push edx
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x20]
	mov dword ptr [ebp-0x20],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block40

 Block38:
	cmp eax,0x80004002
	je Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	cmp word ptr [ebp-0x164],8
	mov byte ptr [ebp-4],0xD
	jne Block46

 Block41:
	xor eax,eax
	mov word ptr [ebp-0x164],ax
	mov eax,dword ptr [ebp-0x15C]
	cmp eax,edi
	je Block43

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block43:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block44:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x6B6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],0xE
	cmp esi,edi
	jne Block47

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x164]
	push ecx
	call ebx
	jmp Block44

 Block47:
	lea eax,[ebp-0x104]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x2C]
	mov dword ptr [ebp-0x2C],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block50

 Block48:
	cmp eax,0x80004002
	je Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	cmp word ptr [ebp-0x104],8
	mov byte ptr [ebp-4],0x11
	jne Block53

 Block51:
	mov eax,dword ptr [ebp-0xFC]
	xor ecx,ecx
	mov word ptr [ebp-0x104],cx
	cmp eax,edi
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[ebp-0x104]
	push edx
	call ebx

 Block54:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1AA0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0xD4]
	push ecx
	mov byte ptr [ebp-4],0x12
	mov ecx,esi
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp-0x30],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block57

 Block55:
	cmp eax,0x80004002
	je Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	cmp word ptr [ebp-0xD4],8
	mov byte ptr [ebp-4],0x15
	jne Block60

 Block58:
	mov eax,dword ptr [ebp-0xCC]
	xor edx,edx
	mov word ptr [ebp-0xD4],dx
	cmp eax,edi
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[ebp-0xD4]
	push eax
	call ebx

 Block61:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x48],esp
	push 0xDA4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x124]
	mov byte ptr [ebp-4],0x16
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x17
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x28]
	mov dword ptr [ebp-0x28],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block64

 Block62:
	cmp eax,0x80004002
	je Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	cmp word ptr [ebp-0x124],8
	mov byte ptr [ebp-4],0x19
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [ebp-0x124],ax
	mov eax,dword ptr [ebp-0x11C]
	cmp eax,edi
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[ebp-0x124]
	push ecx
	call ebx

 Block68:
	mov ebx,dword ptr [ebp-0x2C]
	cmp ebx,edi
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[ebp+0x4C]
	push eax
	push ebx
	mov dword ptr [ebp+0x4C],edi
	call ecx
	cmp eax,edi
	jge Block72

 Block71:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block72:
	mov edx,dword ptr [ebp+0x4C]
	fild dword ptr [ebp+0x4C]
	test edx,edx
	jge Block74

 Block73:
	fadd qword ptr [__real_41f0000000000000]

 Block74:
	fmul qword ptr [__real_3fe8000000000000]
	call __ftol2_sse
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x34],eax
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x48]
	push ecx
	push ebx
	mov dword ptr [ebp+0x4C],edi
	call edx
	cmp eax,edi
	jge Block76

 Block75:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block76:
	mov eax,dword ptr [ebp+0x4C]
	fild dword ptr [ebp+0x4C]
	test eax,eax
	jge Block78

 Block77:
	fadd qword ptr [__real_41f0000000000000]

 Block78:
	fmul qword ptr [__real_3fe8000000000000]
	call __ftol2_sse
	mov ecx,dword ptr [ebx]
	lea edx,[ebp+0x4C]
	push edx
	mov dword ptr [ebp+0x58],eax
	mov eax,dword ptr [ecx+0x40]
	push ebx
	mov dword ptr [ebp+0x4C],edi
	call eax
	cmp eax,edi
	jge Block80

 Block79:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block80:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x6C]
	mov esi,dword ptr [ebp+0x4C]
	lea edx,[ebp+0x18]
	push edx
	push ebx
	mov dword ptr [ebp+0x18],edi
	call eax
	cmp eax,edi
	jge Block82

 Block81:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block82:
	mov ecx,dword ptr [ebp+0x54]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	mov edi,dword ptr [ebp+0x18]
	add ecx,4
	lea eax,[ebp+0x44]
	push eax
	call edx
	fild dword ptr [eax]
	shr esi,1
	sub esi,edi
	mov dword ptr [ebp+0x48],esi
	fild dword ptr [ebp+0x48]
	test esi,esi
	jge Block84

 Block83:
	fadd qword ptr [__real_41f0000000000000]

 Block84:
	fmul qword ptr [__real_3fe8000000000000]
	fsubp st(1),st(0)
	call __ftol2_sse
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x60],eax
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x48]
	push ecx
	push ebx
	mov dword ptr [ebp+0x4C],0
	call edx
	test eax,eax
	jge Block86

 Block85:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block86:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x74]
	mov esi,dword ptr [ebp+0x4C]
	lea ecx,[ebp+0x18]
	push ecx
	push ebx
	mov dword ptr [ebp+0x18],0
	call edx
	test eax,eax
	jge Block88

 Block87:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block88:
	mov ecx,dword ptr [ebp+0x54]
	mov eax,dword ptr [ecx+4]
	mov eax,dword ptr [eax+0x10]
	mov edi,dword ptr [ebp+0x18]
	add ecx,4
	lea edx,[ebp+0x44]
	push edx
	call eax
	fild dword ptr [eax+4]
	sub esi,edi
	mov dword ptr [ebp+0x48],esi
	fild dword ptr [ebp+0x48]
	test esi,esi
	jge Block90

 Block89:
	fadd qword ptr [__real_41f0000000000000]

 Block90:
	fmul qword ptr [__real_3fe8000000000000]
	fsubp st(1),st(0)
	call __ftol2_sse
	mov ecx,dword ptr [ebp+0x54]
	mov esi,eax
	mov eax,dword ptr [ecx+0x19E4]
	test eax,eax
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	mov dword ptr [ebp+0x14],eax
	jmp Block93

 Block92:
	mov dword ptr [ebp+0x14],0

 Block93:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	mov ecx,0xD
	mov word ptr [ebp+0x24],cx
	mov dword ptr [ebp+0x2C],ebx
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	mov byte ptr [ebp-4],0x1A
	call eax
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x1B
	test ecx,ecx
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	mov ebx,dword ptr [ebp+0x58]
	mov eax,ebx
	cdq
	sub eax,edx
	sar eax,1
	mov edi,esi
	mov esi,dword ptr [ebp+0x34]
	sub edi,eax
	mov eax,esi
	cdq
	sub eax,edx
	mov edx,eax
	mov eax,dword ptr [ebp+0x60]
	sar edx,1
	sub eax,edx
	lea edx,[ebp+0x3C]
	push edx
	lea edx,[ebp+0x24]
	push edx
	push 0
	push ebx
	push esi
	push edi
	push eax
	mov dword ptr [ebp+0x4C],eax
	lea eax,[ebp+0x1C]
	push eax
	call IWzGr2D::CreateLayer
	mov ebx,dword ptr [ebp+0x54]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x3AF4]
	cmp esi,eax
	je Block102

 Block98:
	mov dword ptr [ebx+0x3AF4],eax
	test eax,eax
	je Block100

 Block99:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block100:
	test esi,esi
	je Block102

 Block101:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block102:
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block104

 Block103:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block104:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0x1A
	jne Block107

 Block105:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block108:
	cmp word ptr [ebp+0x3C],8
	mov byte ptr [ebp-4],0x19
	jne Block111

 Block109:
	xor eax,eax
	mov word ptr [ebp+0x3C],ax
	mov eax,dword ptr [ebp+0x44]
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea ecx,[ebp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	mov eax,dword ptr [ebp+0x14]
	mov esi,dword ptr [ebx+0x3AF4]
	mov ecx,dword ptr [eax+0x1C4]
	mov eax,dword ptr [eax+0x1C0]
	test esi,esi
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	mov edx,dword ptr [esi]
	imul eax,0xBB8
	mov edx,dword ptr [edx+0xB4]
	sub eax,ecx
	lea eax,[eax+eax*4]
	lea ecx,[eax+eax-0x3FFF8AD4]
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block116

 Block115:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block116:
	mov esi,dword ptr [ebx+0x3AF4]
	test esi,esi
	jne Block118

 Block117:
	push 0x80004003
	call _com_issue_error

 Block118:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block120

 Block119:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block120:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block122

 Block121:
	push eax
	call _com_issue_error

 Block122:
	mov eax,dword ptr [ebp-0x30]
	mov ecx,0xD
	mov byte ptr [ebp-4],0x1C
	mov word ptr [ebp+0x24],cx
	mov dword ptr [ebp+0x2C],eax
	test eax,eax
	je Block124

 Block123:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block124:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x1D
	test ecx,ecx
	jne Block126

 Block125:
	push 0x80004003
	call _com_issue_error

 Block126:
	lea edx,[ebp+0x3C]
	push edx
	mov edx,dword ptr [ebp+0x58]
	lea eax,[ebp+0x24]
	push eax
	mov eax,dword ptr [ebp+0x34]
	push 0
	push edx
	mov edx,dword ptr [ebp+0x4C]
	push eax
	push edi
	push edx
	lea eax,[ebp+0x60]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x3AF8]
	cmp esi,eax
	je Block131

 Block127:
	mov dword ptr [ebx+0x3AF8],eax
	test eax,eax
	je Block129

 Block128:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block129:
	test esi,esi
	je Block131

 Block130:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block131:
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block133

 Block132:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block133:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0x1C
	jne Block136

 Block134:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block137:
	cmp word ptr [ebp+0x3C],8
	mov byte ptr [ebp-4],0x19
	jne Block140

 Block138:
	xor eax,eax
	mov word ptr [ebp+0x3C],ax
	mov eax,dword ptr [ebp+0x44]
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea ecx,[ebp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block141:
	mov eax,dword ptr [ebp+0x14]
	mov esi,dword ptr [ebx+0x3AF8]
	mov ecx,dword ptr [eax+0x1C4]
	mov eax,dword ptr [eax+0x1C0]
	test esi,esi
	jne Block143

 Block142:
	push 0x80004003
	call _com_issue_error

 Block143:
	mov edx,dword ptr [esi]
	imul eax,0xBB8
	sub eax,ecx
	mov ecx,dword ptr [edx+0xB4]
	sub eax,0x6665AAF
	lea eax,[eax+eax*4]
	add eax,eax
	push eax
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
	mov esi,dword ptr [ebx+0x3AF8]
	test esi,esi
	jne Block147

 Block146:
	push 0x80004003
	call _com_issue_error

 Block147:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block149

 Block148:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block149:
	lea ecx,[ebp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block151

 Block150:
	push eax
	call _com_issue_error

 Block151:
	mov eax,0xD
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0x1E
	mov dword ptr [ebp+0x2C],eax
	test eax,eax
	je Block153

 Block152:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block153:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x1F
	test ecx,ecx
	jne Block155

 Block154:
	push 0x80004003
	call _com_issue_error

 Block155:
	lea eax,[ebp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0x58]
	lea edx,[ebp+0x24]
	push edx
	mov edx,dword ptr [ebp+0x34]
	push 0
	push eax
	mov eax,dword ptr [ebp+0x4C]
	push edx
	push edi
	push eax
	lea edx,[ebp+0x60]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x3AFC]
	xor edi,edi
	cmp esi,eax
	je Block160

 Block156:
	mov dword ptr [ebx+0x3AFC],eax
	cmp eax,edi
	je Block158

 Block157:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block158:
	cmp esi,edi
	je Block160

 Block159:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block160:
	mov eax,dword ptr [ebp+0x60]
	cmp eax,edi
	je Block162

 Block161:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block162:
	mov esi,8
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp+0x24],si
	jne Block165

 Block163:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	cmp eax,edi
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block166:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp+0x3C],si
	jne Block169

 Block167:
	xor eax,eax
	mov word ptr [ebp+0x3C],ax
	mov eax,dword ptr [ebp+0x44]
	cmp eax,edi
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea ecx,[ebp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block170:
	mov esi,dword ptr [ebx+0x3AFC]
	cmp esi,edi
	jne Block172

 Block171:
	push 0x80004003
	call _com_issue_error

 Block172:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xC006143F
	push esi
	call eax
	cmp eax,edi
	jge Block174

 Block173:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block174:
	mov esi,dword ptr [ebx+0x3AFC]
	cmp esi,edi
	jne Block176

 Block175:
	push 0x80004003
	call _com_issue_error

 Block176:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	cmp eax,edi
	jge Block178

 Block177:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block178:
	mov dword ptr [ebp+0x4C],edi
	lea eax,[ebp+0x60]
	push 0xDA0
	push eax
	mov byte ptr [ebp-4],0x20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x70]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x20
	cmp eax,edi
	je Block180

 Block179:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block180:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0xA4]
	push eax
	call esi
	lea ecx,[ebp-0xA4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block182

 Block181:
	push eax
	call _com_issue_error

 Block182:
	lea edx,[ebp-0xB4]
	push edx
	mov byte ptr [ebp-4],0x22
	call esi
	lea eax,[ebp-0xB4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block184

 Block183:
	push eax
	call _com_issue_error

 Block184:
	mov ebx,dword ptr [ebp+0x4C]
	push edi
	push edi
	push 0xFFFFFFFF
	push ebx
	push edi
	push edi
	mov byte ptr [ebp-4],0x23
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push edi
	push edi
	lea ecx,[ebp-0xA4]
	push ecx
	lea edx,[ebp-0xB4]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ebx
	push edi
	push edi
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x24
	cmp dword ptr [_D_G_RM],edi
	jne Block186

 Block185:
	push 0x80004003
	call _com_issue_error

 Block186:
	lea eax,[ebp-0xE4]
	mov byte ptr [ebp-4],0x23
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x25
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x18]
	mov dword ptr [ebp+0x18],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block189

 Block187:
	cmp eax,0x80004002
	je Block189

 Block188:
	push eax
	call _com_issue_error

 Block189:
	mov ebx,8
	mov byte ptr [ebp-4],0x27
	cmp word ptr [ebp-0xE4],bx
	jne Block196

 Block190:
	mov eax,dword ptr [ebp-0xDC]
	xor ecx,ecx
	mov word ptr [ebp-0xE4],cx
	cmp eax,edi
	je Block192

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block192:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block193:
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0xB4],bx
	jne Block197

 Block194:
	xor eax,eax
	mov word ptr [ebp-0xB4],ax
	mov eax,dword ptr [ebp-0xAC]
	cmp eax,edi
	je Block198

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block198

 Block196:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0xE4]
	push edx
	call esi
	jmp Block193

 Block197:
	lea ecx,[ebp-0xB4]
	push ecx
	call esi

 Block198:
	mov byte ptr [ebp-4],0x29
	cmp word ptr [ebp-0xA4],bx
	jne Block201

 Block199:
	mov eax,dword ptr [ebp-0x9C]
	xor edx,edx
	mov word ptr [ebp-0xA4],dx
	cmp eax,edi
	je Block202

 Block200:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block201:
	lea eax,[ebp-0xA4]
	push eax
	call esi

 Block202:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1AD3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0x2A
	cmp ecx,edi
	jne Block204

 Block203:
	push 0x80004003
	call _com_issue_error

 Block204:
	lea edx,[ebp-0xF4]
	push edx
	mov byte ptr [ebp-4],0x29
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp]
	mov dword ptr [ebp],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block207

 Block205:
	cmp eax,0x80004002
	je Block207

 Block206:
	push eax
	call _com_issue_error

 Block207:
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0xF4],bx
	jne Block210

 Block208:
	xor eax,eax
	mov word ptr [ebp-0xF4],ax
	mov eax,dword ptr [ebp-0xEC]
	cmp eax,edi
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea ecx,[ebp-0xF4]
	push ecx
	call esi

 Block211:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp]
	mov byte ptr [ebp-4],0x2E
	cmp ecx,edi
	jne Block213

 Block212:
	push 0x80004003
	call _com_issue_error

 Block213:
	lea edx,[ebp-0x114]
	push edx
	mov byte ptr [ebp-4],0x2D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x20],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block216

 Block214:
	cmp eax,0x80004002
	je Block216

 Block215:
	push eax
	call _com_issue_error

 Block216:
	mov byte ptr [ebp-4],0x31
	cmp word ptr [ebp-0x114],bx
	jne Block219

 Block217:
	xor eax,eax
	mov word ptr [ebp-0x114],ax
	mov eax,dword ptr [ebp-0x10C]
	cmp eax,edi
	je Block220

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block220

 Block219:
	lea ecx,[ebp-0x114]
	push ecx
	call esi

 Block220:
	mov ebx,dword ptr [ebp+0x20]
	cmp ebx,edi
	jne Block222

 Block221:
	push 0x80004003
	call _com_issue_error

 Block222:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[ebp+0x38]
	push eax
	push ebx
	mov dword ptr [ebp+0x38],edi
	call ecx
	cmp eax,edi
	jge Block224

 Block223:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block224:
	mov edx,dword ptr [ebp+0x38]
	fild dword ptr [ebp+0x38]
	test edx,edx
	jge Block226

 Block225:
	fadd qword ptr [__real_41f0000000000000]

 Block226:
	fmul qword ptr [__real_3fe8000000000000]
	call __ftol2_sse
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp+0x34],eax
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x48]
	push ecx
	push ebx
	mov dword ptr [ebp+0x38],edi
	call edx
	cmp eax,edi
	jge Block228

 Block227:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block228:
	mov eax,dword ptr [ebp+0x38]
	fild dword ptr [ebp+0x38]
	test eax,eax
	jge Block230

 Block229:
	fadd qword ptr [__real_41f0000000000000]

 Block230:
	fmul qword ptr [__real_3fe8000000000000]
	call __ftol2_sse
	mov ecx,dword ptr [ebx]
	lea edx,[ebp+0x38]
	push edx
	mov dword ptr [ebp+0x58],eax
	mov eax,dword ptr [ecx+0x40]
	push ebx
	mov dword ptr [ebp+0x38],edi
	call eax
	cmp eax,edi
	jge Block232

 Block231:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block232:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x6C]
	mov esi,dword ptr [ebp+0x38]
	lea edx,[ebp+0x50]
	push edx
	push ebx
	mov dword ptr [ebp+0x50],edi
	call eax
	cmp eax,edi
	jge Block234

 Block233:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block234:
	mov ebx,dword ptr [ebp+0x54]
	mov edx,dword ptr [ebx+4]
	mov edx,dword ptr [edx+0x10]
	mov edi,dword ptr [ebp+0x50]
	add ebx,4
	lea eax,[ebp+0x5C]
	push eax
	mov ecx,ebx
	call edx
	fild dword ptr [eax]
	shr esi,1
	sub esi,edi
	mov dword ptr [ebp+0x60],esi
	fild dword ptr [ebp+0x60]
	fmul qword ptr [__real_3fe8000000000000]
	fsubp st(1),st(0)
	call __ftol2_sse
	mov edi,eax
	mov eax,dword ptr [ebp+0x20]
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x38]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [ebp+0x38],0
	call eax
	test eax,eax
	jge Block236

 Block235:
	mov ecx,dword ptr [ebp+0x20]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block236:
	mov eax,dword ptr [ebp+0x20]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x74]
	mov esi,dword ptr [ebp+0x38]
	lea ecx,[ebp+0x50]
	push ecx
	push eax
	mov dword ptr [ebp+0x50],0
	call edx
	test eax,eax
	jge Block238

 Block237:
	mov ecx,dword ptr [ebp+0x20]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block238:
	mov edx,dword ptr [ebp+0x50]
	mov eax,dword ptr [ebx]
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x60],edx
	mov edx,dword ptr [eax+0x10]
	push ecx
	mov ecx,ebx
	call edx
	fild dword ptr [eax+4]
	sub esi,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x60],esi
	fild dword ptr [ebp+0x60]
	fmul qword ptr [__real_3fe8000000000000]
	fsubp st(1),st(0)
	call __ftol2_sse
	mov esi,eax
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block240

 Block239:
	push eax
	call _com_issue_error

 Block240:
	mov edx,3
	mov word ptr [ebp+0x24],dx
	mov dword ptr [ebp+0x2C],0
	mov ebx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x33
	test ebx,ebx
	jne Block242

 Block241:
	push 0x80004003
	call _com_issue_error

 Block242:
	lea eax,[ebp+4]
	push eax
	mov eax,dword ptr [ebp+0x58]
	lea ecx,[ebp+0x24]
	push ecx
	mov ecx,dword ptr [ebp+0x34]
	push 0
	push eax
	cdq
	sub eax,edx
	sar eax,1
	sub esi,eax
	mov eax,ecx
	cdq
	push ecx
	sub eax,edx
	sar eax,1
	push esi
	sub edi,eax
	push edi
	lea edx,[ebp+0x60]
	push edx
	mov ecx,ebx
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [ebp+0x54]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0x3B00]
	cmp esi,eax
	je Block247

 Block243:
	mov edx,ecx
	mov dword ptr [edx+0x3B00],eax
	test eax,eax
	je Block245

 Block244:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block245:
	test esi,esi
	je Block247

 Block246:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block247:
	mov eax,dword ptr [ebp+0x60]
	xor edi,edi
	cmp eax,edi
	je Block249

 Block248:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block249:
	mov esi,8
	mov byte ptr [ebp-4],0x32
	cmp word ptr [ebp+0x24],si
	jne Block252

 Block250:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	cmp eax,edi
	je Block253

 Block251:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block253

 Block252:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block253:
	mov byte ptr [ebp-4],0x31
	cmp word ptr [ebp+4],si
	jne Block256

 Block254:
	xor eax,eax
	mov word ptr [ebp+4],ax
	mov eax,dword ptr [ebp+0xC]
	cmp eax,edi
	je Block257

 Block255:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block257

 Block256:
	lea ecx,[ebp+4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block257:
	mov ebx,dword ptr [ebp+0x54]
	mov eax,dword ptr [ebp+0x14]
	mov esi,dword ptr [ebx+0x3B00]
	mov ecx,dword ptr [eax+0x1C4]
	mov eax,dword ptr [eax+0x1C0]
	cmp esi,edi
	jne Block259

 Block258:
	push 0x80004003
	call _com_issue_error

 Block259:
	mov edx,dword ptr [esi]
	imul eax,0xBB8
	mov edx,dword ptr [edx+0xB4]
	sub eax,ecx
	lea eax,[eax+eax*4]
	lea ecx,[eax+eax-0x3FFF8AD5]
	push ecx
	push esi
	call edx
	cmp eax,edi
	jge Block261

 Block260:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block261:
	mov esi,dword ptr [ebx+0x3B00]
	cmp esi,edi
	jne Block263

 Block262:
	push 0x80004003
	call _com_issue_error

 Block263:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,edi
	jge Block265

 Block264:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block265:
	mov dword ptr [ebp+0x38],edi
	xor ebx,ebx
	mov byte ptr [ebp-4],0x34
	mov dword ptr [ebp+0x58],ebx

 Block266:
	mov esi,dword ptr [ebp]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x50]
	push eax
	push esi
	mov dword ptr [ebp+0x50],edi
	call ecx
	cmp eax,edi
	jge Block268

 Block267:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block268:
	cmp ebx,dword ptr [ebp+0x50]
	jae Block326

 Block269:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x74]
	mov byte ptr [ebp-4],0x35
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x34
	call IWzProperty::Getitem
	lea eax,[ebp-0x74]
	push eax
	lea ecx,[ebp+0x60]
	push ecx
	mov byte ptr [ebp-4],0x36
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x37
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block271

 Block270:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block271:
	lea ecx,[ebp+0x38]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block273

 Block272:
	cmp eax,0x80004002
	jne Block13

 Block273:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x36
	cmp eax,edi
	je Block275

 Block274:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block275:
	mov ebx,dword ptr [ebp+0x20]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[ebp+0x50]
	push ecx
	push ebx
	mov dword ptr [ebp+0x50],edi
	call edx
	cmp eax,edi
	jge Block277

 Block276:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block277:
	mov esi,dword ptr [ebp+0x38]
	cmp esi,edi
	je Block17

 Block278:
	mov ecx,dword ptr [ebp+0x50]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x44]
	push ecx
	push esi
	call edx
	cmp eax,edi
	jge Block280

 Block279:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block280:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[ebp+0x50]
	push ecx
	push ebx
	mov dword ptr [ebp+0x50],edi
	call edx
	cmp eax,edi
	jge Block282

 Block281:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block282:
	mov ecx,dword ptr [ebp+0x50]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x4C]
	push ecx
	push esi
	call edx
	cmp eax,edi
	jge Block284

 Block283:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block284:
	push 0x78
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x1C]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x38
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x39
	cmp ecx,edi
	je Block17

 Block285:
	lea edx,[ebp-0x44]
	push edx
	mov byte ptr [ebp-4],0x3A
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3B
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x44],8
	mov ebx,eax
	mov byte ptr [ebp-4],0x3A
	jne Block288

 Block286:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	cmp eax,edi
	je Block289

 Block287:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block289

 Block288:
	lea ecx,[ebp-0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block289:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x36
	cmp eax,edi
	je Block291

 Block290:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block291:
	lea ecx,[ebp-0x64]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block13

 Block292:
	lea eax,[ebp-0x54]
	push eax
	mov byte ptr [ebp-4],0x3C
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block13

 Block293:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0x3D
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block13

 Block294:
	lea ecx,[ebp+0x24]
	push ecx
	mov byte ptr [ebp-4],0x3E
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block13

 Block295:
	mov eax,3
	mov word ptr [ebp+4],ax
	mov dword ptr [ebp+0xC],ebx
	mov ecx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ecx+0x3B00]
	mov byte ptr [ebp-4],0x40
	cmp ecx,edi
	je Block17

 Block296:
	lea edx,[ebp-0x64]
	push edx
	lea eax,[ebp-0x54]
	push eax
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp+0x24]
	push eax
	lea edx,[ebp+4]
	push edx
	push esi
	lea eax,[ebp-0x84]
	push eax
	call IWzGr2DLayer::InsertCanvas
	mov ebx,8
	cmp word ptr [ebp-0x84],bx
	jne Block303

 Block297:
	mov eax,dword ptr [ebp-0x7C]
	xor ecx,ecx
	mov word ptr [ebp-0x84],cx
	cmp eax,edi
	je Block299

 Block298:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block299:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block300:
	mov byte ptr [ebp-4],0x3F
	cmp word ptr [ebp+4],bx
	jne Block304

 Block301:
	xor eax,eax
	mov word ptr [ebp+4],ax
	mov eax,dword ptr [ebp+0xC]
	cmp eax,edi
	je Block305

 Block302:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block305

 Block303:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x84]
	push edx
	call esi
	jmp Block300

 Block304:
	lea ecx,[ebp+4]
	push ecx
	call esi

 Block305:
	mov byte ptr [ebp-4],0x3E
	cmp word ptr [ebp+0x24],bx
	jne Block308

 Block306:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	cmp eax,edi
	je Block309

 Block307:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block309

 Block308:
	lea eax,[ebp+0x24]
	push eax
	call esi

 Block309:
	mov byte ptr [ebp-4],0x3D
	cmp word ptr [ebp-0x1C],bx
	jne Block312

 Block310:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,edi
	je Block313

 Block311:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block313

 Block312:
	lea edx,[ebp-0x1C]
	push edx
	call esi

 Block313:
	mov byte ptr [ebp-4],0x3C
	cmp word ptr [ebp-0x54],bx
	jne Block316

 Block314:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	cmp eax,edi
	je Block317

 Block315:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block317

 Block316:
	lea ecx,[ebp-0x54]
	push ecx
	call esi

 Block317:
	mov byte ptr [ebp-4],0x36
	cmp word ptr [ebp-0x64],bx
	jne Block320

 Block318:
	mov eax,dword ptr [ebp-0x5C]
	xor edx,edx
	mov word ptr [ebp-0x64],dx
	cmp eax,edi
	je Block321

 Block319:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block321

 Block320:
	lea eax,[ebp-0x64]
	push eax
	call esi

 Block321:
	mov byte ptr [ebp-4],0x34
	cmp word ptr [ebp-0x74],bx
	jne Block324

 Block322:
	mov eax,dword ptr [ebp-0x6C]
	xor ecx,ecx
	mov word ptr [ebp-0x74],cx
	cmp eax,edi
	je Block325

 Block323:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [ebp+0x58]
	mov ebx,dword ptr [ebp+0x58]
	jmp Block266

 Block324:
	lea edx,[ebp-0x74]
	push edx
	call esi

 Block325:
	inc dword ptr [ebp+0x58]
	mov ebx,dword ptr [ebp+0x58]
	jmp Block266

 Block326:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block328

 Block327:
	push eax
	call _com_issue_error

 Block328:
	lea edx,[ebp+0x24]
	mov bl,0x41
	push edx
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block330

 Block329:
	push eax
	call _com_issue_error

 Block330:
	mov ecx,dword ptr [ebp+0x54]
	mov esi,dword ptr [ecx+0x3B00]
	mov byte ptr [ebp-4],0x42
	cmp esi,edi
	jne Block332

 Block331:
	push 0x80004003
	call _com_issue_error

 Block332:
	mov ecx,dword ptr [ebp+0x3C]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x110]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x40]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x44]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x48]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [ebp+0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x28]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x2C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x30]
	push 0x20
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,edi
	jge Block334

 Block333:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block334:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x24],si
	jne Block337

 Block335:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	cmp eax,edi
	je Block338

 Block336:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block338

 Block337:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block338:
	mov byte ptr [ebp-4],0x34
	cmp word ptr [ebp+0x3C],si
	jne Block341

 Block339:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	cmp eax,edi
	je Block342

 Block340:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block342

 Block341:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block342:
	mov dword ptr [ebp+0x50],edi
	lea ecx,[ebp+0x60]
	push 0xDA1
	push ecx
	mov byte ptr [ebp-4],0x43
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp+0x50]
	push eax
	mov byte ptr [ebp-4],0x44
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x43
	cmp eax,edi
	je Block344

 Block343:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block344:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x54]
	push ecx
	call esi
	lea edx,[ebp-0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block346

 Block345:
	push eax
	call _com_issue_error

 Block346:
	lea eax,[ebp-0x64]
	push eax
	mov byte ptr [ebp-4],0x45
	call esi
	lea ecx,[ebp-0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block348

 Block347:
	push eax
	call _com_issue_error

 Block348:
	mov edi,dword ptr [ebp+0x50]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x46
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp-0x54]
	push edx
	lea eax,[ebp-0x64]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x47
	jne Block350

 Block349:
	push 0x80004003
	call _com_issue_error

 Block350:
	lea ecx,[ebp-0x134]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x48
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	xor esi,esi
	mov dword ptr [ebp+0x14],esi
	cmp eax,edi
	je Block354

 Block351:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x60]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x60]
	cmp eax,edi
	mov esi,ecx
	mov dword ptr [ebp+0x14],esi
	jge Block354

 Block352:
	cmp eax,0x80004002
	je Block354

 Block353:
	push eax
	call _com_issue_error

 Block354:
	mov ebx,8
	mov byte ptr [ebp-4],0x4A
	cmp word ptr [ebp-0x134],bx
	jne Block357

 Block355:
	mov eax,dword ptr [ebp-0x12C]
	xor edx,edx
	mov word ptr [ebp-0x134],dx
	cmp eax,edi
	je Block358

 Block356:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block358

 Block357:
	lea eax,[ebp-0x134]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block358:
	mov byte ptr [ebp-4],0x4B
	cmp word ptr [ebp-0x64],bx
	jne Block361

 Block359:
	mov eax,dword ptr [ebp-0x5C]
	xor ecx,ecx
	mov word ptr [ebp-0x64],cx
	cmp eax,edi
	je Block362

 Block360:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block362

 Block361:
	lea edx,[ebp-0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block362:
	mov byte ptr [ebp-4],0x4C
	cmp word ptr [ebp-0x54],bx
	jne Block365

 Block363:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	cmp eax,edi
	je Block366

 Block364:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block366

 Block365:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block366:
	cmp esi,edi
	je Block510

 Block367:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x44]
	mov byte ptr [ebp-4],0x4D
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x4C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x4E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	mov dword ptr [ebp+0x34],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block370

 Block368:
	cmp eax,0x80004002
	je Block370

 Block369:
	push eax
	call _com_issue_error

 Block370:
	mov esi,dword ptr [ebp+0x34]
	cmp dword ptr [ebp+0x20],esi
	je Block375

 Block371:
	mov edi,dword ptr [ebp+0x20]
	mov ebx,esi
	mov dword ptr [ebp+0x20],ebx
	test esi,esi
	je Block373

 Block372:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block373:
	test edi,edi
	je Block376

 Block374:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax
	jmp Block376

 Block375:
	mov ebx,dword ptr [ebp+0x20]

 Block376:
	test esi,esi
	je Block378

 Block377:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block378:
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],0x4C
	jne Block381

 Block379:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	test eax,eax
	je Block382

 Block380:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block382

 Block381:
	lea ecx,[ebp-0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block382:
	test ebx,ebx
	jne Block384

 Block383:
	push 0x80004003
	call _com_issue_error

 Block384:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[ebp+0x34]
	push eax
	push ebx
	mov dword ptr [ebp+0x34],0
	call ecx
	xor edi,edi
	cmp eax,edi
	jge Block386

 Block385:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block386:
	mov edx,dword ptr [ebp+0x34]
	fild dword ptr [ebp+0x34]
	test edx,edx
	jge Block388

 Block387:
	fadd qword ptr [__real_41f0000000000000]

 Block388:
	fmul qword ptr [__real_3fe8000000000000]
	call __ftol2_sse
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp+0x34],eax
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x48]
	push ecx
	push ebx
	mov dword ptr [ebp+0x58],edi
	call edx
	cmp eax,edi
	jge Block390

 Block389:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block390:
	mov eax,dword ptr [ebp+0x58]
	fild dword ptr [ebp+0x58]
	test eax,eax
	jge Block392

 Block391:
	fadd qword ptr [__real_41f0000000000000]

 Block392:
	fmul qword ptr [__real_3fe8000000000000]
	call __ftol2_sse
	mov ecx,dword ptr [ebx]
	lea edx,[ebp+0x1C]
	push edx
	mov dword ptr [ebp+0x58],eax
	mov eax,dword ptr [ecx+0x40]
	push ebx
	mov dword ptr [ebp+0x1C],edi
	call eax
	cmp eax,edi
	jge Block394

 Block393:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block394:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x6C]
	mov esi,dword ptr [ebp+0x1C]
	lea edx,[ebp+0x60]
	push edx
	push ebx
	mov dword ptr [ebp+0x60],edi
	call eax
	cmp eax,edi
	jge Block396

 Block395:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block396:
	mov ecx,dword ptr [ebp+0x54]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	mov edi,dword ptr [ebp+0x60]
	add ecx,4
	lea eax,[ebp+0x2C]
	push eax
	call edx
	fild dword ptr [eax]
	shr esi,1
	sub esi,edi
	mov dword ptr [ebp+0x60],esi
	fild dword ptr [ebp+0x60]
	fmul qword ptr [__real_3fe8000000000000]
	fsubp st(1),st(0)
	call __ftol2_sse
	lea ecx,[ebp+0x60]
	mov edi,eax
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x48]
	push ecx
	push ebx
	mov dword ptr [ebp+0x60],0
	call edx
	test eax,eax
	jge Block398

 Block397:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block398:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x74]
	mov esi,dword ptr [ebp+0x60]
	lea ecx,[ebp+0x1C]
	push ecx
	push ebx
	mov dword ptr [ebp+0x1C],0
	call edx
	test eax,eax
	jge Block400

 Block399:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block400:
	mov ecx,dword ptr [ebp+0x54]
	mov eax,dword ptr [ecx+4]
	mov eax,dword ptr [eax+0x10]
	mov ebx,dword ptr [ebp+0x1C]
	add ecx,4
	lea edx,[ebp+0x44]
	push edx
	call eax
	fild dword ptr [eax+4]
	sub esi,ebx
	mov dword ptr [ebp+0x60],esi
	fild dword ptr [ebp+0x60]
	fmul qword ptr [__real_3fe8000000000000]
	fsubp st(1),st(0)
	call __ftol2_sse
	lea ecx,[ebp+4]
	push ecx
	mov esi,eax
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block402

 Block401:
	push eax
	call _com_issue_error

 Block402:
	mov eax,3
	mov word ptr [ebp-0x1C],ax
	mov dword ptr [ebp-0x14],0
	mov ebx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x50
	test ebx,ebx
	jne Block404

 Block403:
	push 0x80004003
	call _com_issue_error

 Block404:
	mov eax,dword ptr [ebp+0x58]
	lea ecx,[ebp+4]
	push ecx
	mov ecx,dword ptr [ebp+0x34]
	lea edx,[ebp-0x1C]
	push edx
	push 0
	push eax
	cdq
	sub eax,edx
	sar eax,1
	sub esi,eax
	mov eax,ecx
	cdq
	push ecx
	sub eax,edx
	sar eax,1
	push esi
	sub edi,eax
	push edi
	lea eax,[ebp+0x60]
	push eax
	mov ecx,ebx
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [ebp+0x54]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0x3B04]
	cmp esi,eax
	je Block409

 Block405:
	mov edx,ecx
	mov dword ptr [edx+0x3B04],eax
	test eax,eax
	je Block407

 Block406:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block407:
	test esi,esi
	je Block409

 Block408:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block409:
	mov eax,dword ptr [ebp+0x60]
	xor ebx,ebx
	cmp eax,ebx
	je Block411

 Block410:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block411:
	mov esi,8
	mov byte ptr [ebp-4],0x4F
	cmp word ptr [ebp-0x1C],si
	jne Block414

 Block412:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,ebx
	je Block415

 Block413:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block415

 Block414:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block415:
	mov byte ptr [ebp-4],0x4C
	cmp word ptr [ebp+4],si
	jne Block418

 Block416:
	xor eax,eax
	mov word ptr [ebp+4],ax
	mov eax,dword ptr [ebp+0xC]
	cmp eax,ebx
	je Block419

 Block417:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block419

 Block418:
	lea ecx,[ebp+4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block419:
	mov edi,dword ptr [ebp+0x54]
	mov esi,dword ptr [edi+0x3AF4]
	cmp esi,ebx
	jne Block421

 Block420:
	push 0x80004003
	call _com_issue_error

 Block421:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xB0]
	lea eax,[ebp+0x60]
	push eax
	push esi
	mov dword ptr [ebp+0x60],ebx
	call ecx
	cmp eax,ebx
	jge Block423

 Block422:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block423:
	mov esi,dword ptr [edi+0x3B04]
	cmp esi,ebx
	jne Block425

 Block424:
	push 0x80004003
	call _com_issue_error

 Block425:
	mov eax,dword ptr [ebp+0x60]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xB4]
	push eax
	push esi
	call ecx
	cmp eax,ebx
	jge Block427

 Block426:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block427:
	mov esi,dword ptr [edi+0x3B04]
	cmp esi,ebx
	jne Block429

 Block428:
	push 0x80004003
	call _com_issue_error

 Block429:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,ebx
	jge Block431

 Block430:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block431:
	xor edi,edi
	mov dword ptr [ebp+0x1C],edi
	mov byte ptr [ebp-4],0x51
	mov dword ptr [ebp+0x58],ebx

 Block432:
	mov esi,dword ptr [ebp+0x14]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x60]
	push edx
	push esi
	mov dword ptr [ebp+0x60],ebx
	call eax
	cmp eax,ebx
	jge Block434

 Block433:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block434:
	mov ecx,dword ptr [ebp+0x58]
	cmp ecx,dword ptr [ebp+0x60]
	jae Block492

 Block435:
	mov eax,0x20
	call __alloca_probe_8
	mov edx,dword ptr [ebp+0x58]
	mov eax,esp
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x44]
	mov byte ptr [ebp-4],0x52
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x51
	call IWzProperty::Getitem
	lea ecx,[ebp-0x44]
	push ecx
	lea edx,[ebp+0x34]
	push edx
	mov byte ptr [ebp-4],0x53
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x54
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block437

 Block436:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block437:
	lea ecx,[ebp+0x1C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block439

 Block438:
	cmp eax,0x80004002
	jne Block13

 Block439:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x53
	cmp eax,ebx
	je Block441

 Block440:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block441:
	mov esi,dword ptr [ebp+0x20]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[ebp+0x60]
	push ecx
	push esi
	mov dword ptr [ebp+0x60],ebx
	call edx
	cmp eax,ebx
	jge Block443

 Block442:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block443:
	mov edi,dword ptr [ebp+0x1C]
	cmp edi,ebx
	je Block17

 Block444:
	mov ecx,dword ptr [ebp+0x60]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x44]
	push ecx
	push edi
	call edx
	cmp eax,ebx
	jge Block446

 Block445:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block446:
	mov esi,dword ptr [ebp+0x20]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[ebp+0x60]
	push ecx
	push esi
	mov dword ptr [ebp+0x60],ebx
	call edx
	cmp eax,ebx
	jge Block448

 Block447:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block448:
	mov ecx,dword ptr [ebp+0x60]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x4C]
	push ecx
	push edi
	call edx
	cmp eax,ebx
	jge Block450

 Block449:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block450:
	push 0x78
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x48]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x55
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x56
	cmp ecx,ebx
	je Block17

 Block451:
	lea edx,[ebp-0x154]
	push edx
	mov byte ptr [ebp-4],0x57
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x58
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x154],8
	mov esi,eax
	mov byte ptr [ebp-4],0x57
	jne Block454

 Block452:
	xor eax,eax
	mov word ptr [ebp-0x154],ax
	mov eax,dword ptr [ebp-0x14C]
	cmp eax,ebx
	je Block455

 Block453:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block455

 Block454:
	lea ecx,[ebp-0x154]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block455:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x53
	cmp eax,ebx
	je Block457

 Block456:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block457:
	lea ecx,[ebp-0x74]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x74]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block13

 Block458:
	lea eax,[ebp-0x84]
	push eax
	mov byte ptr [ebp-4],0x59
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x84]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block13

 Block459:
	lea edx,[ebp+0x24]
	push edx
	mov byte ptr [ebp-4],0x5A
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block13

 Block460:
	lea ecx,[ebp+4]
	push ecx
	mov byte ptr [ebp-4],0x5B
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block13

 Block461:
	mov eax,3
	mov word ptr [ebp-0x1C],ax
	mov dword ptr [ebp-0x14],esi
	mov ecx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ecx+0x3B04]
	mov byte ptr [ebp-4],0x5D
	cmp ecx,ebx
	je Block17

 Block462:
	lea edx,[ebp-0x74]
	push edx
	lea eax,[ebp-0x84]
	push eax
	lea edx,[ebp+0x24]
	push edx
	lea eax,[ebp+4]
	push eax
	lea edx,[ebp-0x1C]
	push edx
	push edi
	lea eax,[ebp-0x174]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x174],8
	jne Block469

 Block463:
	mov eax,dword ptr [ebp-0x16C]
	xor ecx,ecx
	mov word ptr [ebp-0x174],cx
	cmp eax,ebx
	je Block465

 Block464:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block465:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block466:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x5C
	jne Block470

 Block467:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,ebx
	je Block471

 Block468:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block471

 Block469:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x174]
	push edx
	call esi
	jmp Block466

 Block470:
	lea ecx,[ebp-0x1C]
	push ecx
	call esi

 Block471:
	cmp word ptr [ebp+4],8
	mov byte ptr [ebp-4],0x5B
	jne Block474

 Block472:
	mov eax,dword ptr [ebp+0xC]
	xor edx,edx
	mov word ptr [ebp+4],dx
	cmp eax,ebx
	je Block475

 Block473:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block475

 Block474:
	lea eax,[ebp+4]
	push eax
	call esi

 Block475:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0x5A
	jne Block478

 Block476:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	cmp eax,ebx
	je Block479

 Block477:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block479

 Block478:
	lea edx,[ebp+0x24]
	push edx
	call esi

 Block479:
	cmp word ptr [ebp-0x84],8
	mov byte ptr [ebp-4],0x59
	jne Block482

 Block480:
	xor eax,eax
	mov word ptr [ebp-0x84],ax
	mov eax,dword ptr [ebp-0x7C]
	cmp eax,ebx
	je Block483

 Block481:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block483

 Block482:
	lea ecx,[ebp-0x84]
	push ecx
	call esi

 Block483:
	cmp word ptr [ebp-0x74],8
	mov byte ptr [ebp-4],0x53
	jne Block486

 Block484:
	mov eax,dword ptr [ebp-0x6C]
	xor edx,edx
	mov word ptr [ebp-0x74],dx
	cmp eax,ebx
	je Block487

 Block485:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block487

 Block486:
	lea eax,[ebp-0x74]
	push eax
	call esi

 Block487:
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],0x51
	jne Block490

 Block488:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	cmp eax,ebx
	je Block491

 Block489:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [ebp+0x58]
	jmp Block432

 Block490:
	lea edx,[ebp-0x44]
	push edx
	call esi

 Block491:
	inc dword ptr [ebp+0x58]
	jmp Block432

 Block492:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block494

 Block493:
	push eax
	call _com_issue_error

 Block494:
	lea edx,[ebp+0x24]
	mov bl,0x5E
	push edx
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block496

 Block495:
	push eax
	call _com_issue_error

 Block496:
	mov ecx,dword ptr [ebp+0x54]
	mov esi,dword ptr [ecx+0x3B04]
	mov byte ptr [ebp-4],0x5F
	test esi,esi
	jne Block498

 Block497:
	push 0x80004003
	call _com_issue_error

 Block498:
	mov ecx,dword ptr [ebp+0x3C]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x110]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x40]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x44]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x48]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [ebp+0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x28]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x2C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x30]
	push 0x20
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block500

 Block499:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block500:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x24],si
	jne Block503

 Block501:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block504

 Block502:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block504

 Block503:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block504:
	mov byte ptr [ebp-4],0x51
	cmp word ptr [ebp+0x3C],si
	jne Block507

 Block505:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	test eax,eax
	je Block508

 Block506:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block508

 Block507:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block508:
	mov byte ptr [ebp-4],0x4C
	test edi,edi
	je Block513

 Block509:
	mov ecx,dword ptr [edi]
	push edi
	jmp Block512

 Block510:
	mov ecx,dword ptr [ebp+0x54]
	mov eax,dword ptr [ecx+0x3B04]
	cmp eax,edi
	je Block513

 Block511:
	mov dword ptr [ecx+0x3B04],edi
	mov ecx,dword ptr [eax]
	push eax

 Block512:
	mov edx,dword ptr [ecx+8]
	call edx

 Block513:
	call get_update_time
	mov ecx,dword ptr [ebp+0x54]
	mov dword ptr [ecx+0x3B1C],eax
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x43
	test eax,eax
	je Block515

 Block514:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block515:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x34
	test eax,eax
	je Block517

 Block516:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block517:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x31
	test eax,eax
	je Block519

 Block518:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block519:
	mov eax,dword ptr [ebp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x2D
	call edx
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x29
	call edx
	mov eax,dword ptr [ebp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x20
	call edx
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block521

 Block520:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block521:
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block523

 Block522:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block523:
	mov eax,dword ptr [ebp-0x30]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block525

 Block524:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block525:
	mov eax,dword ptr [ebp-0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xD
	call edx
	mov eax,dword ptr [ebp-0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],8
	call edx
	mov eax,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block527

 Block526:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block527:
	mov eax,dword ptr [ebp-0x24]
	mov dword ptr [ebp-4],0xFFFFFFFF

 Block528:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block529:
	lea esp,[ebp-0x184]
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
	ret 8
}
}
// CUserPreview::IsKindOf
__SUB_CLASS_THIS(000BC0D0, __thiscall, 48116,  CUserPreview, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUserPreview::ms_RTTI_CUserPreview
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
// CUserPreview::GetJobCode
__SUB_CLASS_THIS0(000BC0B0, __thiscall, 48108,  CUserPreview, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x19F4]
	ret
}
}
// CUserPreview::Update
_SUB_EXCEPTION_HANDLER(553730)
__SUB_CLASS_THIS0(00553730, __thiscall, 48100,  CUserPreview, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_553730
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
	mov esi,ecx
	mov eax,dword ptr [esi+0x19E4]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	lea edi,[eax-0xC]
	jmp Block3

 Block2:
	xor edi,edi

 Block3:
	mov ecx,edi
	call CVecCtrl::UpdateActive
	mov edi,dword ptr [edi+0x1D8]
	mov eax,dword ptr [esi+0x88]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esi+0x88]
	push ebx
	push edi
	call edx
	call get_update_time
	sub eax,dword ptr [esi+0x3AC0]
	cmp eax,dword ptr [esi+0x3AC4]
	jle Block9

 Block4:
	mov eax,dword ptr [esi+0x3ACC]
	cmp eax,ebx
	jne Block8

 Block5:
	cmp dword ptr [esi+0x3AC8],ebx
	je Block7

 Block6:
	mov ecx,esi
	call CUserPreview::ShowMobHitByBullet
	jmp Block9

 Block7:
	cmp eax,ebx
	je Block9

 Block8:
	mov dword ptr [esi+0x3ACC],ebx
	mov dword ptr [esi+0x3AC8],ebx

 Block9:
	cmp dword ptr [esi+0x3AD4],ebx
	sete al
	cmp al,bl
	sete al
	cmp al,bl
	je Block24

 Block10:
	fld qword ptr [_D_PI__40]
	mov edi,dword ptr [ZImports::_VariantInit]
	fadd st(0),st
	lea eax,[esp+0x28]
	push eax
	fmul qword ptr [__real_403e000000000000]
	fdiv qword ptr [__real_408f400000000000]
	fmul qword ptr [__real_3fe0000000000000]
	fadd qword ptr [_D_FANGLE]
	fstp qword ptr [_D_FANGLE]
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x44],ebx
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov edi,dword ptr [esi+0x3AD8]
	mov byte ptr [esp+0x40],1
	cmp edi,ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	fld qword ptr [_D_FANGLE]
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	call __CIsin
	fmul qword ptr [__real_4008000000000000]
	fiadd dword ptr [esi+0x3AE0]
	call __ftol2_sse
	push eax
	mov eax,dword ptr [esi+0x3ADC]
	push eax
	mov ecx,edi
	call IWzVector2D::RelMove
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x40],bl
	cmp word ptr [esp+0x18],di
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[esp+0x18]
	push edx
	call ebp

 Block20:
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp word ptr [esp+0x28],di
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x28]
	push ecx
	call ebp

 Block24:
	cmp dword ptr [esi+0x3B00],ebx
	je Block35

 Block25:
	call get_update_time
	sub eax,dword ptr [esi+0x3B1C]
	cmp eax,0x1388
	jle Block35

 Block26:
	mov edi,dword ptr [esi+0x3B00]
	cmp edi,ebx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xD4]
	lea eax,[esp+0x14]
	push eax
	push edi
	mov dword ptr [esp+0x1C],ebx
	call ecx
	cmp eax,ebx
	jge Block30

 Block29:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block30:
	mov edi,dword ptr [esi+0x3B00]
	cmp edi,ebx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xD8]
	xor eax,eax
	cmp dword ptr [esp+0x14],ebx
	sete al
	push eax
	push edi
	call ecx
	cmp eax,ebx
	jge Block34

 Block33:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block34:
	call get_update_time
	mov dword ptr [esi+0x3B1C],eax

 Block35:
	mov ecx,esi
	call CUser::Update
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret
}
}
// CUserPreview::IsLocalUser
__SUB_CLASS_THIS0(000BC070, __thiscall, 48106,  CUserPreview, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CUserPreview::Init
_SUB_EXCEPTION_HANDLER(54E310)
__SUB_CLASS_THIS0(0054E310, __thiscall, 48100,  CUserPreview, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54E310
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x218
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x22C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ebx+0x20B4]
	mov dword ptr [esi+0x19E8],eax
	mov eax,dword ptr [ebx+0x20CC]
	test eax,eax
	je Block2

 Block1:
	add eax,4
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	push eax
	lea ecx,[esi+0x19EC]
	call ZXString<char>::AssignCStr
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x3D]
	push ecx
	add eax,0x39
	push eax
	mov dword ptr [esp+0x23C],0
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	mov eax,dword ptr [esp+0x28]
	add esp,8
	mov dword ptr [esi+0x19F4],edx
	mov dword ptr [esp+0x234],0xFFFFFFFF
	test eax,eax
	je Block7

 Block4:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block7

 Block6:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block7:
	lea edx,[esi+0x2E2C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x2E38]
	xor ecx,ecx
	mov dword ptr [esi+0x2E34],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2E40],eax
	mov dword ptr [esi+0x640],6
	call CVecCtrlUserPreview::CreateInstance
	mov edi,eax
	lea ecx,[esi+0x19E4]
	push edi
	call _x_com_ptr<IWzVector2D>::_QueryVecCtrlUserPreview
	xor ebp,ebp
	cmp eax,ebp
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	lea eax,[esi+4]
	push eax
	mov ecx,edi
	call CVecCtrl::Init
	mov ecx,dword ptr [esi+0x640]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+4]
	push ebp
	push ecx
	push ebp
	push ebp
	push 0xFFFFFF06
	push 0xFFFFFEA2
	push 1
	mov ecx,edi
	call edx
	mov ecx,esi
	mov dword ptr [esi+0x3AC8],ebp
	mov dword ptr [esi+0x3ACC],ebp
	call CUserPreview::InitObjects
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebx
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esp+0x2B]
	mov dword ptr [esp+0x238],1
	call AvatarLook::_ctor_0
	mov ebx,eax
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[eax+0x2038]
	mov byte ptr [esp+0x234],2
	mov edi,eax
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block13

 Block11:
	cmp dword ptr [edi+0x209C],ebp
	jne Block13

 Block12:
	xor eax,eax
	jmp Block14

 Block13:
	mov eax,1

 Block14:
	push eax
	push ebx
	mov ecx,esi
	call CUser::Init
	mov esi,dword ptr [esp+0x18]
	int 3// TODO: 	mov dword ptr [esp+0x27],offset ZRefCounted::`vftable'
	mov dword ptr [esp+0x234],0xFFFFFFFF
	cmp esi,ebp
	je Block18

 Block15:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block16:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block18

 Block17:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block18:
	mov ecx,dword ptr [esp+0x22C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x224
	ret
}
}
// CUserPreview::IsPreview
__SUB_CLASS_THIS0(000BC080, __thiscall, 48106,  CUserPreview, int32_t) {
__asm {

 Block0:
	mov eax,1
	ret
}
}
// CUserPreview::ShowMessageBox
_SUB_EXCEPTION_HANDLER(54EF90)
__SUB_CLASS_THIS(0054EF90, __thiscall, 48101,  CUserPreview, void, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x64]
	sub esp,0x64
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54EF90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x60],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x44],ecx
	xor edi,edi
	cmp dword ptr [ecx+0x3AD4],edi
	sete al
	test al,al
	sete al
	test al,al
	mov eax,dword ptr [ebp+0x6C]
	je Block4

 Block1:
	cmp eax,dword ptr [_D_NLASTITEMID]
	jne Block4

 Block2:
	mov dword ptr [ecx+0x3AD0],edi
	mov eax,dword ptr [ecx+0x3AD4]
	cmp eax,edi
	je Block164

 Block3:
	mov dword ptr [ecx+0x3AD4],edi
	jmp Block163

 Block4:
	mov edx,dword ptr [ebp+0x70]
	push eax
	mov dword ptr [_D_NLASTITEMID],eax
	lea eax,[ebp+0x24]
	mov dword ptr [ecx+0x3AD0],edx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetItemProp
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x54],esp
	push 0x660
	push ecx
	mov dword ptr [ebp-4],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],1
	cmp ecx,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[ebp-0x6C]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x30]
	mov dword ptr [ebp+0x30],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x6C],bx
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[ebp-0x6C]
	push ecx
	call esi

 Block13:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],5
	cmp ecx,edi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea edx,[ebp-0x4C]
	push edx
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x2C]
	mov dword ptr [ebp+0x2C],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block18

 Block16:
	cmp eax,0x80004002
	je Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x4C],bx
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[ebp-0x4C]
	push ecx
	call esi

 Block22:
	mov esi,dword ptr [ebp+0x2C]
	cmp esi,edi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[ebp+0x58]
	push eax
	push esi
	mov dword ptr [ebp+0x58],edi
	call ecx
	cmp eax,edi
	jge Block26

 Block25:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	mov edx,dword ptr [ebp+0x58]
	fild dword ptr [ebp+0x58]
	test edx,edx
	jge Block28

 Block27:
	fadd qword ptr [__real_41f0000000000000]

 Block28:
	fmul qword ptr [__real_3fe8000000000000]
	call __ftol2_sse
	lea ecx,[ebp+0x58]
	mov ebx,eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push ecx
	push esi
	mov dword ptr [ebp+0x58],edi
	call edx
	cmp eax,edi
	jge Block30

 Block29:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	mov eax,dword ptr [ebp+0x58]
	fild dword ptr [ebp+0x58]
	test eax,eax
	jge Block32

 Block31:
	fadd qword ptr [__real_41f0000000000000]

 Block32:
	fmul qword ptr [__real_3fe8000000000000]
	call __ftol2_sse
	mov esi,dword ptr [ebp+0x44]
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	add esi,4
	mov edi,eax
	lea eax,[ebp+0x50]
	push eax
	mov ecx,esi
	call edx
	mov ecx,eax
	mov ecx,dword ptr [ecx]
	mov eax,ebx
	cdq
	sub eax,edx
	mov edx,dword ptr [ebp+0x44]
	sar eax,1
	sub ecx,eax
	mov eax,dword ptr [esi]
	mov dword ptr [edx+0x3ADC],ecx
	mov edx,dword ptr [eax+0x10]
	lea ecx,[ebp+0x50]
	push ecx
	mov ecx,esi
	call edx
	mov ecx,eax
	mov eax,edi
	cdq
	sub eax,edx
	mov edx,dword ptr [ecx+4]
	sar eax,1
	sub edx,eax
	mov eax,dword ptr [ebp+0x44]
	lea ecx,[ebp+0x48]
	sub edx,0x5F
	push ecx
	mov dword ptr [eax+0x3AE0],edx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x34]
	push eax
	mov byte ptr [ebp-4],9
	call esi
	lea ecx,[ebp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [eax+0x3AD8]
	mov byte ptr [ebp-4],0xA
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[ebp+0x48]
	push edx
	lea edx,[ebp+0x34]
	push edx
	mov edx,dword ptr [eax+0x3AE0]
	mov eax,dword ptr [eax+0x3ADC]
	push edx
	push eax
	call IWzVector2D::RelMove
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],9
	jne Block41

 Block39:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],8
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	lea edx,[ebp+0x48]
	push edx
	call esi
	lea eax,[ebp+0x48]
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
	mov ecx,3
	mov word ptr [ebp+0x34],cx
	mov dword ptr [ebp+0x3C],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0xC
	test ecx,ecx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[ebp+0x48]
	push edx
	lea eax,[ebp+0x34]
	push eax
	push 0
	push edi
	push ebx
	push 0
	push 0
	lea edx,[ebp+0x28]
	push edx
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [ebp+0x44]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0x3AD4]
	cmp esi,eax
	je Block55

 Block51:
	mov edx,ecx
	mov dword ptr [edx+0x3AD4],eax
	test eax,eax
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block53:
	test esi,esi
	je Block55

 Block54:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block55:
	mov eax,dword ptr [ebp+0x28]
	xor ebx,ebx
	cmp eax,ebx
	je Block57

 Block56:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block57:
	mov esi,8
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x34],si
	jne Block60

 Block58:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	cmp eax,ebx
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x48],si
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	cmp eax,ebx
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov edi,dword ptr [ebp+0x44]
	mov esi,dword ptr [edi+0x3AD4]
	cmp esi,ebx
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xC0061440
	push esi
	call eax
	cmp eax,ebx
	jge Block69

 Block68:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block69:
	mov eax,dword ptr [edi+0x3AD8]
	mov ecx,0xD
	mov word ptr [ebp+0x48],cx
	mov dword ptr [ebp+0x50],eax
	cmp eax,ebx
	je Block71

 Block70:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block71:
	mov esi,dword ptr [edi+0x3AD4]
	mov byte ptr [ebp-4],0xD
	cmp esi,ebx
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	mov edx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebx
	jge Block75

 Block74:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block75:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],8
	jne Block78

 Block76:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	cmp eax,ebx
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov esi,dword ptr [edi+0x3AD4]
	cmp esi,ebx
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebx
	jge Block83

 Block82:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block83:
	xor edi,edi
	mov dword ptr [ebp+0x28],edi
	mov byte ptr [ebp-4],0xE
	mov dword ptr [ebp+0x58],ebx

 Block84:
	mov esi,dword ptr [ebp+0x30]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x5C]
	push eax
	push esi
	mov dword ptr [ebp+0x5C],ebx
	call ecx
	cmp eax,ebx
	jge Block86

 Block85:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block86:
	mov edx,dword ptr [ebp+0x58]
	cmp edx,dword ptr [ebp+0x5C]
	jae Block144

 Block87:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x58]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0xF
	mov ecx,esi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	lea edx,[ebp-0x3C]
	push edx
	lea eax,[ebp+0x20]
	push eax
	mov byte ptr [ebp-4],0x10
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x11
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block89

 Block88:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block89:
	lea ecx,[ebp+0x28]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block91

 Block90:
	cmp eax,0x80004002
	jne Block8

 Block91:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x10
	cmp eax,ebx
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block93:
	mov esi,dword ptr [ebp+0x2C]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[ebp+0x5C]
	push ecx
	push esi
	mov dword ptr [ebp+0x5C],ebx
	call edx
	cmp eax,ebx
	jge Block95

 Block94:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block95:
	mov edi,dword ptr [ebp+0x28]
	cmp edi,ebx
	je Block5

 Block96:
	mov ecx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x44]
	push ecx
	push edi
	call edx
	cmp eax,ebx
	jge Block98

 Block97:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block98:
	mov esi,dword ptr [ebp+0x2C]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[ebp+0x5C]
	push ecx
	push esi
	mov dword ptr [ebp+0x5C],ebx
	call edx
	cmp eax,ebx
	jge Block100

 Block99:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block100:
	mov ecx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x4C]
	push ecx
	push edi
	call edx
	cmp eax,ebx
	jge Block102

 Block101:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block102:
	push 0x78
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x54]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x12
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x13
	cmp ecx,ebx
	je Block5

 Block103:
	lea edx,[ebp-0x5C]
	push edx
	mov byte ptr [ebp-4],0x14
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x15
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x5C],8
	mov esi,eax
	mov byte ptr [ebp-4],0x14
	jne Block106

 Block104:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	cmp eax,ebx
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x10
	cmp eax,ebx
	je Block109

 Block108:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block109:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block8

 Block110:
	lea eax,[ebp]
	push eax
	mov byte ptr [ebp-4],0x16
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block8

 Block111:
	lea edx,[ebp+0x10]
	push edx
	mov byte ptr [ebp-4],0x17
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block8

 Block112:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0x18
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block8

 Block113:
	mov eax,3
	mov word ptr [ebp+0x34],ax
	mov dword ptr [ebp+0x3C],esi
	mov ecx,dword ptr [ebp+0x44]
	mov ecx,dword ptr [ecx+0x3AD4]
	mov byte ptr [ebp-4],0x1A
	cmp ecx,ebx
	je Block5

 Block114:
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp]
	push eax
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp-0x1C]
	push eax
	lea edx,[ebp+0x34]
	push edx
	push edi
	lea eax,[ebp-0x7C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x7C],8
	jne Block121

 Block115:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	cmp eax,ebx
	je Block117

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block117:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block118:
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],0x19
	jne Block122

 Block119:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	cmp eax,ebx
	je Block123

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block121:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x7C]
	push edx
	call esi
	jmp Block118

 Block122:
	lea ecx,[ebp+0x34]
	push ecx
	call esi

 Block123:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x18
	jne Block126

 Block124:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	cmp eax,ebx
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea eax,[ebp-0x1C]
	push eax
	call esi

 Block127:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x17
	jne Block130

 Block128:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,ebx
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea edx,[ebp+0x10]
	push edx
	call esi

 Block131:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x16
	jne Block134

 Block132:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,ebx
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea ecx,[ebp]
	push ecx
	call esi

 Block135:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x10
	jne Block138

 Block136:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	cmp eax,ebx
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea eax,[ebp-0x2C]
	push eax
	call esi

 Block139:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0xE
	jne Block142

 Block140:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	cmp eax,ebx
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [ebp+0x58]
	jmp Block84

 Block142:
	lea edx,[ebp-0x3C]
	push edx
	call esi

 Block143:
	inc dword ptr [ebp+0x58]
	jmp Block84

 Block144:
	lea eax,[ebp+0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block146

 Block145:
	push eax
	call _com_issue_error

 Block146:
	lea edx,[ebp+0x48]
	mov bl,0x1B
	push edx
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block148

 Block147:
	push eax
	call _com_issue_error

 Block148:
	mov ecx,dword ptr [ebp+0x44]
	mov esi,dword ptr [ecx+0x3AD4]
	mov byte ptr [ebp-4],0x1C
	test esi,esi
	jne Block150

 Block149:
	push 0x80004003
	call _com_issue_error

 Block150:
	mov ecx,dword ptr [ebp+0x34]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x110]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x38]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x3C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x40]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [ebp+0x48]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x50]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x54]
	push 0x20
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block152

 Block151:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block152:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x48],si
	jne Block155

 Block153:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp+0x34],si
	jne Block159

 Block157:
	mov eax,dword ptr [ebp+0x3C]
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	test eax,eax
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea eax,[ebp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block160:
	mov byte ptr [ebp-4],8
	test edi,edi
	je Block162

 Block161:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block162:
	mov eax,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],4
	call edx
	mov eax,dword ptr [ebp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x24]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block164

 Block163:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block164:
	lea esp,[ebp-0x8C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x60]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x64
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CUserPreview::DoShootAttack
_SUB_EXCEPTION_HANDLER(54E9C0)
__SUB_CLASS_THIS(0054E9C0, __thiscall, 48101,  CUserPreview, void, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54E9C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor eax,eax
	mov dword ptr [ebp-0x48],eax
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add esi,0x3DA0
	mov dword ptr [ebp-0x2C],1
	mov dword ptr [ebp-0x28],esi
	mov ecx,esi
	mov dword ptr [ebp-4],eax
	call CRand32::Random
	lea ecx,[edi+0x88]
	mov ebx,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jg Block40

 Block1:
	mov eax,dword ptr [edi+0x19E4]
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	mov ecx,dword ptr [eax+0x1BC]
	push ecx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block40

 Block5:
	cmp dword ptr [edi+0x3AC8],eax
	jne Block40

 Block6:
	mov eax,dword ptr [edi+0x640]
	and eax,0xFFFFFFFE
	cmp eax,0xA
	jne Block8

 Block7:
	mov edx,dword ptr [edi+0x5A0]
	mov eax,dword ptr [ebp+8]
	push edx
	push eax
	mov ecx,edi
	call CUserPreview::DoMeleeAttack
	lea ecx,[ebp-0x2C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ActionRandMan::~ActionRandMan
	jmp Block42

 Block8:
	call get_update_time
	mov ecx,dword ptr [ebp+8]
	push ebx
	push 0
	push 0
	push ecx
	mov dword ptr [ebp-0x44],eax
	call get_weapon_type
	mov edx,dword ptr [edi+0x5A0]
	add esp,4
	push eax
	push edx
	call get_random_shoot_attack_action
	mov esi,eax
	add esp,0x14
	test esi,esi
	jl Block39

 Block9:
	push 0
	push 0
	push 6
	push esi
	mov ecx,edi
	call CUser::SetAttackAction
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+4]
	mov ecx,edi
	call edx
	movzx eax,al
	push eax
	push 0
	push ecx
	lea edx,[edi+0x5B0]
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push edx
	call Ztl_bstr_t::_ctor_copy
	push 0
	lea eax,[ebp-0x24]
	push 0
	push eax
	call CUser::GetAfterimageUOL
	add esp,0x18
	lea ecx,[ebp-0x24]
	mov byte ptr [ebp-4],1
	call _xbstr_t::length
	test eax,eax
	je Block38

 Block10:
	lea ebx,[esi+esi*2]
	lea ecx,[edi+0x88]
	lea ebx,[ebx*8+ActionData::m_saCharacterActions]
	call CAvatar::GetActionInfo
	mov eax,dword ptr [eax+8]
	imul eax,dword ptr [ebx+0x10]
	cdq
	idiv dword ptr [ebx+0xC]
	mov ecx,dword ptr [ebp+8]
	push 0
	push 0
	push ecx
	push ecx
	lea edx,[ebp-0x24]
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push edx
	mov ebx,eax
	mov dword ptr [ebp-0x5C],ebx
	call Ztl_bstr_t::_ctor_copy
	mov eax,dword ptr [edi+0x640]
	mov ecx,dword ptr [ebp-0x44]
	push esi
	add ebx,ecx
	and eax,1
	push eax
	push ebx
	mov ecx,edi
	mov dword ptr [ebp-0x20],ebx
	call CUser::RegisterAfterimage
	cmp dword ptr [ebp+0xC],0
	je Block38

 Block11:
	mov edx,dword ptr [edi+4]
	mov edx,dword ptr [edx+0x10]
	lea ebx,[edi+4]
	lea eax,[ebp-0x58]
	push eax
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [ebp-0x50],eax
	lea eax,[ebp-0x58]
	push eax
	mov ecx,ebx
	call edx
	mov ecx,dword ptr [edi+0x640]
	mov eax,dword ptr [eax+4]
	and cl,1
	movsx esi,cl
	sub eax,0x1C
	neg esi
	sbb esi,esi
	and esi,0xFFFFFDA8
	add esi,0x12C
	add esi,dword ptr [ebp-0x50]
	mov dword ptr [ebp-0x4C],eax
	mov dword ptr [ebp-0x54],eax
	mov dword ptr [ebp-0x1C],0
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[ebp-0x64]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],2
	call edx
	cmp dword ptr [eax],0xFFFFFEE8
	jge Block13

 Block12:
	mov eax,dword ptr [edi+0x640]
	test al,1
	je Block15

 Block13:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[ebp-0x38]
	push ecx
	mov ecx,ebx
	call edx
	cmp dword ptr [eax],0xFFFFFEFC
	jle Block19

 Block14:
	mov eax,dword ptr [edi+0x640]
	test al,1
	je Block19

 Block15:
	and al,1
	movsx esi,al
	neg esi
	sbb esi,esi
	lea eax,[ebp-0x18]
	push 0x3D2
	and esi,0xFFFFFF66
	push eax
	mov dword ptr [ebp-0x30],1
	add esi,0xFFFFFF3F
	mov dword ptr [ebp-0x54],0xFFFFFF69
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[ebp-0x1C]
	push ecx
	push eax
	mov byte ptr [ebp-4],3
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x18]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x40]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x6C]
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],5
	test ecx,ecx
	jne Block20

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	mov dword ptr [ebp-0x30],0
	jmp Block28

 Block20:
	lea edx,[ebp-0x40]
	push edx
	lea eax,[ebp-0x6C]
	push eax
	push 0xFFFFFF83
	push esi
	call IWzVector2D::RelMove
	lea ecx,[ebp-0x6C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x40]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [ebp-0x14],0
	lea ecx,[ebp-0x18]
	push 0x3CE
	push ecx
	mov byte ptr [ebp-4],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x18704
	push eax
	lea edx,[ebp-0x14]
	push edx
	mov byte ptr [ebp-4],7
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x18]
	add esp,0xC
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	lea eax,[ebp-0x34]
	push 0x1AC2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp-0x18]
	push offset _S___10
	mov bl,8
	push ecx
	mov byte ptr [ebp-4],bl
	call __op_add_char_char
	add esp,0xC
	push eax
	lea ecx,[ebp-0x14]
	mov byte ptr [ebp-4],9
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov edx,dword ptr [ebp-0x14]
	push 0xFFFFFFFF
	push 0
	push edx
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov ebx,esp
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x18],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	lea eax,[ebp-0x1C]
	mov ecx,esp
	mov dword ptr [ebp-0x60],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov eax,dword ptr [edi+0x640]
	mov edx,dword ptr [ebp-0x14]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	and eax,1
	push eax
	push 0xFFFFFFFF
	push ebx
	push edx
	mov byte ptr [ebp-4],0xB
	mov dword ptr [ebp-0x34],ecx
	call ZStrUtil::_Conv_0
	mov ecx,dword ptr [ebp-0x34]
	add esp,0xC
	push eax
	mov byte ptr [ebp-4],6
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,esi
	sub eax,dword ptr [ebp-0x50]
	cdq
	xor eax,edx
	sub eax,edx
	mov dword ptr [ebp-0x34],eax
	fild dword ptr [ebp-0x34]
	fmul qword ptr [__real_3ff8000000000000]
	call __ftol2_sse
	cmp dword ptr [ebp-0x30],0
	mov dword ptr [ebp-0x34],eax
	je Block30

 Block29:
	lea ebx,[ebp-0x1C]
	jmp Block31

 Block30:
	mov dword ptr [ebp-0x14],0
	lea ebx,[ebp-0x14]
	mov byte ptr [ebp-4],0xC
	mov dword ptr [ebp-0x48],1

 Block31:
	mov eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [ebp+8]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp-0x60],esp
	mov ecx,esp
	push offset _S_
	call _xbstr_t::_ctor_0
	lea ecx,[edi+0x1960]
	mov dword ptr [ebp-4],0xD
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getz
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x60],esp
	push ebx
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov edx,dword ptr [ebp-0x54]
	mov eax,dword ptr [ebp-0x4C]
	mov ecx,dword ptr [ebp-0x50]
	push edx
	mov edx,dword ptr [ebp-0x5C]
	push esi
	mov esi,dword ptr [ebp-0x34]
	push eax
	push ecx
	mov ecx,dword ptr [ebp-0x20]
	lea eax,[esi+edx]
	add eax,dword ptr [ebp-0x44]
	mov byte ptr [ebp-4],0xC
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterBulletAnimation
	test byte ptr [ebp-0x48],1
	mov dword ptr [ebp-4],2
	je Block34

 Block32:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block34:
	cmp dword ptr [ebp-0x30],0
	je Block36

 Block35:
	call get_update_time
	mov edx,dword ptr [ebp+0xC]
	lea ecx,[esi+esi*2]
	mov dword ptr [edi+0x3AC0],eax
	mov dword ptr [edi+0x3AC4],ecx
	mov dword ptr [edi+0x3AC8],edx

 Block36:
	mov eax,dword ptr [ebp-0x1C]
	mov dword ptr [ebp-0x2C],0
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	lea ecx,[ebp-0x24]
	call Ztl_bstr_t::~Ztl_bstr_t

 Block39:
	lea ecx,[ebp-0x2C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ActionRandMan::~ActionRandMan
	jmp Block42

 Block40:
	lea eax,[esi+0x18]
	push eax
	lea ecx,[ebp-0x20]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov eax,dword ptr [esi+0x14]
	mov ecx,dword ptr [esi+0xC]
	mov edx,dword ptr [esi+0x10]
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [ebp-0x20]
	mov dword ptr [esi],ecx
	mov dword ptr [esi+4],edx
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block42

 Block41:
	mov dword ptr [eax],0

 Block42:
	lea esp,[ebp-0x7C]
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
	ret 8
}
}
// CUserPreview::ShowFireCrack
_SUB_EXCEPTION_HANDLER(5524A0)
__SUB_CLASS_THIS(005524A0, __thiscall, 48109,  CUserPreview, void, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5524A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x104
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
	mov eax,0xC8
	mov dword ptr [ebp-0x100],eax
	mov dword ptr [ebp-0xF0],eax
	mov eax,dword ptr [ecx+0x19E4]
	xor ebx,ebx
	mov dword ptr [ebp-0xFC],0x3E8
	mov dword ptr [ebp-0xF8],0x1F4
	mov dword ptr [ebp-0xF4],0x12C
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	mov dword ptr [ebp+0x38],eax
	mov dword ptr [ebp+0x54],ebx
	jmp Block4

 Block2:
	mov dword ptr [ebp+0x38],ebx
	mov dword ptr [ebp+0x54],ebx
	jmp Block4

 Block3:
	xor ebx,ebx

 Block4:
	mov esi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [ebp+0x3C],ebx
	mov eax,dword ptr [ebp+0x54]
	push eax
	lea ecx,[ebp+0x3C]
	push offset _S_MAPMAPHELPERIMGW__1
	push ecx
	mov dword ptr [ebp-4],ebx
	call ZXString<char>::Format
	add esp,0xC
	lea edx,[ebp-0x4C]
	push edx
	call esi
	lea eax,[ebp-0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block161

 Block5:
	lea ecx,[ebp-0x7C]
	push ecx
	mov byte ptr [ebp-4],1
	call esi
	lea edx,[ebp-0x7C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block161

 Block6:
	mov edi,dword ptr [ebp+0x3C]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	mov byte ptr [ebp-4],2
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push ebx
	push ebx
	lea eax,[ebp-0x4C]
	push eax
	lea ecx,[ebp-0x7C]
	push ecx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],ebx
	je Block162

 Block7:
	lea edx,[ebp-0xCC]
	mov byte ptr [ebp-4],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x40],esi
	cmp eax,ebx
	je Block10

 Block8:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+8]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+8]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x40],esi
	jge Block10

 Block9:
	cmp eax,0x80004002
	jne Block161

 Block10:
	cmp word ptr [ebp-0xCC],8
	mov byte ptr [ebp-4],6
	jne Block17

 Block11:
	mov eax,dword ptr [ebp-0xC4]
	xor edx,edx
	mov word ptr [ebp-0xCC],dx
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block13:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block14:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],7
	jne Block18

 Block15:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	cmp eax,ebx
	je Block19

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block17:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0xCC]
	push eax
	call edi
	jmp Block14

 Block18:
	lea edx,[ebp-0x7C]
	push edx
	call edi

 Block19:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],8
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x4C]
	push ecx
	call edi

 Block23:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	push 8
	call __itow
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],9
	cmp esi,ebx
	je Block162

 Block24:
	lea edx,[ebp-0xBC]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x50],esi
	cmp eax,ebx
	je Block27

 Block25:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0xC]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0xC]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x50],esi
	jge Block27

 Block26:
	cmp eax,0x80004002
	jne Block161

 Block27:
	cmp word ptr [ebp-0xBC],8
	mov byte ptr [ebp-4],0xC
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0xB4]
	xor edx,edx
	mov word ptr [ebp-0xBC],dx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[ebp-0xBC]
	push eax
	call edi

 Block31:
	cmp esi,ebx
	je Block162

 Block32:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp+0x60]
	push edx
	push esi
	mov dword ptr [ebp+0x60],ebx
	call eax
	cmp eax,ebx
	jge Block34

 Block33:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block34:
	mov ecx,dword ptr [ebp+0x60]
	fild dword ptr [ebp+0x60]
	test ecx,ecx
	jge Block36

 Block35:
	fadd qword ptr [__real_41f0000000000000]

 Block36:
	fmul qword ptr [__real_3fe8000000000000]
	call __ftol2_sse
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	mov dword ptr [ebp+0x48],eax
	lea eax,[ebp+0x60]
	push eax
	push esi
	mov dword ptr [ebp+0x60],ebx
	call ecx
	cmp eax,ebx
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	mov edx,dword ptr [ebp+0x60]
	fild dword ptr [ebp+0x60]
	test edx,edx
	jge Block40

 Block39:
	fadd qword ptr [__real_41f0000000000000]

 Block40:
	fmul qword ptr [__real_3fe8000000000000]
	call __ftol2_sse
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp+0x34],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	push ecx
	push esi
	mov dword ptr [ebp+0x58],ebx
	call edx
	cmp eax,ebx
	jge Block42

 Block41:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block42:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[ebp+0x58]
	push ecx
	push esi
	mov dword ptr [ebp+0x58],ebx
	call edx
	cmp eax,ebx
	jge Block44

 Block43:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block44:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[ebp+0x60]
	push ecx
	push esi
	mov dword ptr [ebp+0x60],ebx
	call edx
	cmp eax,ebx
	jge Block46

 Block45:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block46:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	mov edi,dword ptr [ebp+0x60]
	lea ecx,[ebp+0x5C]
	push ecx
	push esi
	mov dword ptr [ebp+0x5C],ebx
	call edx
	cmp eax,ebx
	jge Block48

 Block47:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block48:
	mov ebx,dword ptr [ebp+0x5C]
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x96
	div ecx
	mov esi,dword ptr [ebp+0x4C]
	add esi,4
	lea eax,[ebp-0x108]
	push eax
	mov ecx,esi
	mov dword ptr [ebp+0x44],edx
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	call edx
	fild dword ptr [eax]
	mov eax,dword ptr [ebp+0x44]
	shr edi,1
	sub edi,ebx
	mov dword ptr [ebp+0x58],edi
	fild dword ptr [ebp+0x58]
	fmul qword ptr [__real_3fe8000000000000]
	fsubp st(1),st(0)
	fild dword ptr [ebp+0x44]
	test eax,eax
	jge Block50

 Block49:
	fadd qword ptr [__real_41f0000000000000]

 Block50:
	faddp st(1),st(0)
	fsub qword ptr [__real_4046800000000000]
	call __ftol2_sse
	mov ebx,eax
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x5C]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [ebp+0x5C],0
	call eax
	test eax,eax
	jge Block52

 Block51:
	mov ecx,dword ptr [ebp+0x50]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block52:
	mov eax,dword ptr [ebp+0x50]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x74]
	mov edi,dword ptr [ebp+0x5C]
	lea ecx,[ebp+0x60]
	push ecx
	push eax
	mov dword ptr [ebp+0x60],0
	call edx
	test eax,eax
	jge Block54

 Block53:
	mov ecx,dword ptr [ebp+0x50]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block54:
	mov edx,dword ptr [ebp+0x60]
	mov ecx,offset _D_G_RAND
	mov dword ptr [ebp+0x44],edx
	call CRand32::Random
	xor edx,edx
	mov ecx,0x64
	div ecx
	lea eax,[ebp-0x110]
	push eax
	mov ecx,esi
	mov dword ptr [ebp+0x58],edx
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	call edx
	fild dword ptr [eax+4]
	sub edi,dword ptr [ebp+0x44]
	mov dword ptr [ebp+0x44],edi
	fild dword ptr [ebp+0x44]
	test edi,edi
	jge Block56

 Block55:
	fadd qword ptr [__real_41f0000000000000]

 Block56:
	fmul qword ptr [__real_3fe8000000000000]
	mov eax,dword ptr [ebp+0x58]
	fsubp st(1),st(0)
	fild dword ptr [ebp+0x58]
	test eax,eax
	jge Block58

 Block57:
	fadd qword ptr [__real_41f0000000000000]

 Block58:
	faddp st(1),st(0)
	fsub qword ptr [__real_4046800000000000]
	call __ftol2_sse
	lea ecx,[ebp-0x6C]
	push ecx
	mov esi,eax
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block161

 Block59:
	mov eax,3
	mov word ptr [ebp-0x9C],ax
	mov dword ptr [ebp-0x94],0
	mov edi,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0xE
	test edi,edi
	je Block162

 Block60:
	mov eax,dword ptr [ebp+0x34]
	lea ecx,[ebp-0x6C]
	push ecx
	mov ecx,dword ptr [ebp+0x48]
	lea edx,[ebp-0x9C]
	push edx
	push 0
	push eax
	cdq
	sub eax,edx
	sar eax,1
	sub esi,eax
	mov eax,ecx
	cdq
	push ecx
	sub eax,edx
	sar eax,1
	push esi
	sub ebx,eax
	push ebx
	lea eax,[ebp]
	push eax
	mov ecx,edi
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ebp+0x54]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+edx*4+0x3B08]
	xor ebx,ebx
	cmp esi,eax
	je Block65

 Block61:
	mov dword ptr [ecx+edx*4+0x3B08],eax
	cmp eax,ebx
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block63:
	cmp esi,ebx
	je Block65

 Block64:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block65:
	mov eax,dword ptr [ebp]
	cmp eax,ebx
	je Block67

 Block66:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block67:
	mov esi,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x9C],si
	jne Block70

 Block68:
	mov eax,dword ptr [ebp-0x94]
	xor ecx,ecx
	mov word ptr [ebp-0x9C],cx
	cmp eax,ebx
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea edx,[ebp-0x9C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x6C],si
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	cmp eax,ebx
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov edi,dword ptr [ebp+0x54]
	mov edx,dword ptr [ebp+0x4C]
	mov eax,dword ptr [ebp+0x38]
	mov esi,dword ptr [edx+edi*4+0x3B08]
	mov ecx,dword ptr [eax+0x1C4]
	mov eax,dword ptr [eax+0x1C0]
	cmp esi,ebx
	je Block162

 Block76:
	mov edx,dword ptr [esi]
	imul eax,0xBB8
	mov edx,dword ptr [edx+0xB4]
	sub eax,ecx
	lea eax,[eax+eax*4]
	lea ecx,[eax+eax-0x3FFF8AD5]
	push ecx
	push esi
	call edx
	cmp eax,ebx
	jge Block78

 Block77:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block78:
	mov eax,dword ptr [ebp+0x4C]
	mov esi,dword ptr [eax+edi*4+0x3B08]
	cmp esi,ebx
	je Block162

 Block79:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	cmp eax,ebx
	jge Block81

 Block80:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block81:
	xor edi,edi
	mov dword ptr [ebp+0x58],edi
	mov byte ptr [ebp-4],0xF
	mov dword ptr [ebp+0x60],ebx

 Block82:
	mov esi,dword ptr [ebp+0x40]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x5C]
	push ecx
	push esi
	mov dword ptr [ebp+0x5C],ebx
	call edx
	cmp eax,ebx
	jge Block84

 Block83:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block84:
	mov eax,dword ptr [ebp+0x5C]
	dec eax
	cmp dword ptr [ebp+0x60],eax
	jae Block142

 Block85:
	mov eax,0x20
	call __alloca_probe_8
	mov ecx,dword ptr [ebp+0x60]
	mov eax,esp
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0xAC]
	mov byte ptr [ebp-4],0x10
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	lea eax,[ebp-0xAC]
	push eax
	lea ecx,[ebp+4]
	push ecx
	mov byte ptr [ebp-4],0x11
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x12
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block87

 Block86:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block87:
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block89

 Block88:
	cmp eax,0x80004002
	jne Block161

 Block89:
	mov eax,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0x11
	cmp eax,ebx
	je Block91

 Block90:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block91:
	mov esi,dword ptr [ebp+0x50]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[ebp+0x5C]
	push ecx
	push esi
	mov dword ptr [ebp+0x5C],ebx
	call edx
	cmp eax,ebx
	jge Block93

 Block92:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block93:
	mov edi,dword ptr [ebp+0x58]
	cmp edi,ebx
	je Block162

 Block94:
	mov ecx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x44]
	push ecx
	push edi
	call edx
	cmp eax,ebx
	jge Block96

 Block95:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block96:
	mov esi,dword ptr [ebp+0x50]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[ebp+0x5C]
	push ecx
	push esi
	mov dword ptr [ebp+0x5C],ebx
	call edx
	cmp eax,ebx
	jge Block98

 Block97:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block98:
	mov ecx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x4C]
	push ecx
	push edi
	call edx
	cmp eax,ebx
	jge Block100

 Block99:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block100:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ebp+eax*4-0x100]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1AA9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x10]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x13
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x14
	cmp ecx,ebx
	je Block162

 Block101:
	lea edx,[ebp-0xEC]
	push edx
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x16
	call get_int32
	add esp,8
	cmp word ptr [ebp-0xEC],8
	mov esi,eax
	mov byte ptr [ebp-4],0x15
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [ebp-0xEC],ax
	mov eax,dword ptr [ebp-0xE4]
	cmp eax,ebx
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea ecx,[ebp-0xEC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x11
	cmp eax,ebx
	je Block107

 Block106:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block107:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block161

 Block108:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],0x17
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block161

 Block109:
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],0x18
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block161

 Block110:
	lea ecx,[ebp-0x8C]
	push ecx
	mov byte ptr [ebp-4],0x19
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x8C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block161

 Block111:
	mov eax,3
	mov word ptr [ebp-0x1C],ax
	mov dword ptr [ebp-0x14],esi
	mov ecx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ecx+edx*4+0x3B08]
	mov byte ptr [ebp-4],0x1B
	cmp ecx,ebx
	je Block162

 Block112:
	lea eax,[ebp-0x5C]
	push eax
	lea edx,[ebp-0x3C]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	lea edx,[ebp-0x8C]
	push edx
	lea eax,[ebp-0x1C]
	push eax
	push edi
	lea edx,[ebp-0xDC]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0xDC],8
	jne Block119

 Block113:
	xor eax,eax
	mov word ptr [ebp-0xDC],ax
	mov eax,dword ptr [ebp-0xD4]
	cmp eax,ebx
	je Block115

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block115:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block116:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x1A
	jne Block120

 Block117:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	cmp eax,ebx
	je Block121

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block119:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0xDC]
	push ecx
	call esi
	jmp Block116

 Block120:
	lea eax,[ebp-0x1C]
	push eax
	call esi

 Block121:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0x19
	jne Block124

 Block122:
	mov eax,dword ptr [ebp-0x84]
	xor ecx,ecx
	mov word ptr [ebp-0x8C],cx
	cmp eax,ebx
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea edx,[ebp-0x8C]
	push edx
	call esi

 Block125:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x18
	jne Block128

 Block126:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,ebx
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea ecx,[ebp-0x2C]
	push ecx
	call esi

 Block129:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x17
	jne Block132

 Block130:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	cmp eax,ebx
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea eax,[ebp-0x3C]
	push eax
	call esi

 Block133:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x11
	jne Block136

 Block134:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	cmp eax,ebx
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea edx,[ebp-0x5C]
	push edx
	call esi

 Block137:
	cmp word ptr [ebp-0xAC],8
	mov byte ptr [ebp-4],0xF
	jne Block140

 Block138:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	cmp eax,ebx
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [ebp+0x60]
	jmp Block82

 Block140:
	lea ecx,[ebp-0xAC]
	push ecx
	call esi

 Block141:
	inc dword ptr [ebp+0x60]
	jmp Block82

 Block142:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x24]
	push edx
	call esi
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block161

 Block143:
	lea ecx,[ebp+0x14]
	push ecx
	mov byte ptr [ebp-4],0x1C
	call esi
	lea edx,[ebp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block161

 Block144:
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [ebp+0x54]
	mov esi,dword ptr [eax+ecx*4+0x3B08]
	mov byte ptr [ebp-4],0x1D
	cmp esi,ebx
	je Block162

 Block145:
	mov ecx,dword ptr [ebp+0x24]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x110]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x28]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x2C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x30]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [ebp+0x14]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x18]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x1C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x20]
	push 0x20
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,ebx
	jge Block147

 Block146:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block147:
	mov esi,8
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp+0x14],si
	jne Block150

 Block148:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	cmp eax,ebx
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block151:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+0x24],si
	jne Block154

 Block152:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	cmp eax,ebx
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block155:
	mov byte ptr [ebp-4],0xC
	cmp edi,ebx
	je Block157

 Block156:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block157:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],8
	call edx
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x3C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block159

 Block158:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block159:
	mov eax,dword ptr [ebp+0x54]
	inc eax
	cmp eax,5
	mov dword ptr [ebp+0x54],eax
	jl Block3

 Block160:
	lea esp,[ebp-0x120]
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

 Block161:
	push eax
	call _com_issue_error

 Block162:
	push 0x80004003
	call _com_issue_error
}
}
// CUserPreview::ShowMobHitByBullet
_SUB_EXCEPTION_HANDLER(553150)
__SUB_CLASS_THIS0(00553150, __thiscall, 48100,  CUserPreview, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_553150
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [edi+0x640]
	and al,1
	movsx esi,al
	neg esi
	sbb esi,esi
	and esi,0xFFFFFF66
	xor ebx,ebx
	add esi,0xFFFFFF3F
	mov dword ptr [ebp-0x1C],ebx
	lea ecx,[ebp-0x14]
	push 0x3D2
	push ecx
	mov dword ptr [ebp-4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea edx,[ebp-0x1C]
	push edx
	push eax
	mov byte ptr [ebp-4],1
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x40]
	push eax
	call ebx
	lea ecx,[ebp-0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea edx,[ebp-0x30]
	push edx
	mov byte ptr [ebp-4],2
	call ebx
	lea eax,[ebp-0x30]
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
	mov ecx,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],3
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[ebp-0x40]
	push edx
	lea eax,[ebp-0x30]
	push eax
	push 0xFFFFFF83
	push esi
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x30],si
	jne Block11

 Block9:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x40],si
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov dword ptr [ebp-0x14],0
	lea edx,[ebp-0x18]
	push 0x959
	push edx
	mov byte ptr [ebp-4],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,dword ptr [eax]
	mov ecx,dword ptr [edi+0x3AC8]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	push ecx
	shr eax,0x1F
	add eax,edx
	push eax
	lea ecx,[ebp-0x14]
	push esi
	push ecx
	mov byte ptr [ebp-4],5
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x18]
	add esp,0x10
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov edx,dword ptr [ebp-0x14]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ebx,esp
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x20],esp
	mov dword ptr [eax],0
	push 0xFFFFFFE6
	push 0
	push ecx
	mov ecx,dword ptr [ebp-0x1C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],6
	mov dword ptr [ebp-0x18],esp
	test eax,eax
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block20:
	mov ecx,dword ptr [ebp-0x14]
	mov esi,dword ptr [edi+0x640]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	mov byte ptr [ebp-4],7
	call MultiByteToWideChar
	and esi,1
	push esi
	mov byte ptr [ebp-4],4
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push ebx
	call CAnimationDisplayer::Effect_General
	lea edx,[ebp-0x18]
	push 0xD0B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0x3AC8]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp-0x14]
	push edx
	mov byte ptr [ebp-4],8
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x18]
	add esp,0xC
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x30]
	push eax
	call esi
	lea ecx,[ebp-0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	lea edx,[ebp-0x40]
	push edx
	mov byte ptr [ebp-4],9
	call esi
	lea eax,[ebp-0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	mov ebx,dword ptr [ebp-0x14]
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	mov byte ptr [ebp-4],0xA
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea ecx,[ebp-0x30]
	push ecx
	lea edx,[ebp-0x40]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x20],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xB
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea eax,[ebp-0x50]
	mov byte ptr [ebp-4],0xA
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov esi,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x40],si
	jne Block31

 Block29:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[ebp-0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x30],si
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	cmp word ptr [ebp-0x50],0
	je Block38

 Block37:
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0x64
	push esi
	call CSoundMan::PlaySE

 Block38:
	lea edx,[ebp-0x18]
	push 0x3CE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x18704
	push eax
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],0xF
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x18]
	add esp,0xC
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	lea ecx,[ebp-0x20]
	push 0x450
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[ebp-0x18]
	push offset _S___10
	mov bl,0x10
	push edx
	mov byte ptr [ebp-4],bl
	call __op_add_char_char
	add esp,0xC
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block42

 Block41:
	mov ecx,dword ptr [eax-4]
	jmp Block43

 Block42:
	xor ecx,ecx

 Block43:
	push ecx
	push eax
	lea ecx,[ebp-0x14]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov eax,dword ptr [ebp-0x14]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ebx,esp
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x54],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [ebp-0x1C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0x12
	mov dword ptr [ebp-0x58],esp
	test eax,eax
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block49:
	mov ecx,dword ptr [ebp-0x14]
	mov esi,dword ptr [edi+0x640]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	mov byte ptr [ebp-4],0x13
	call MultiByteToWideChar
	and esi,1
	push esi
	mov byte ptr [ebp-4],0xE
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push ebx
	call CAnimationDisplayer::Effect_General
	push 0x64
	push 1
	push 0x18704
	call play_mob_sound
	add esp,0xC
	call get_update_time
	cmp word ptr [ebp-0x50],8
	mov dword ptr [edi+0x3AC0],eax
	mov dword ptr [edi+0x3AC4],0x3E8
	mov dword ptr [edi+0x3ACC],1
	mov byte ptr [ebp-4],4
	jne Block52

 Block50:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov eax,dword ptr [ebp-0x1C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block57:
	lea esp,[ebp-0x68]
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
// CUserPreview::ShowADBoard
_SUB_EXCEPTION_HANDLER(54E8A0)
__SUB_CLASS_THIS(0054E8A0, __thiscall, 48101,  CUserPreview, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54E8A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x3B20],0
	je Block4

 Block1:
	mov eax,dword ptr [esi+0x1C]
	test eax,eax
	je Block3

 Block2:
	mov dword ptr [esi+0x1C],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov dword ptr [esi+0x3B20],0
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 8

 Block4:
	mov eax,dword ptr [esi+0x1944]
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x1960]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],0
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	lea eax,[esp+0x14]
	push 0xAD3
	push eax
	mov byte ptr [esp+0x34],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x34],2
	call _xbstr_t::_ctor_0
	lea ecx,[esi+0x14]
	mov byte ptr [esp+0x30],3
	call CChatBalloon::MakeADBoardBalloon
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov dword ptr [esi+0x3B20],1
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 8
}
}
// CUserPreview::GetRTTI
__SUB_CLASS_THIS0(000BC0C0, __thiscall, 48115,  CUserPreview, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUserPreview::ms_RTTI_CUserPreview
	ret
}
}
// CUserPreview::GetCharacterLevel
__SUB_CLASS_THIS0(0054E090, __thiscall, 48104,  CUserPreview, unsigned char) {
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
	pop ebx
	add esp,8
	ret
}
}
// CUserPreview::OnChat
_SUB_EXCEPTION_HANDLER(54E530)
__SUB_CLASS_THIS(0054E530, __thiscall, 48110,  CUserPreview, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54E530
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0x2E34]
	push 0
	push 0
	push 0
	push eax
	lea ecx,[esi+0x2E2C]
	push ecx
	mov dword ptr [esp+0x30],0
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov eax,dword ptr [esi+0x19E4]
	push 0x3E8
	push 0x1388
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
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
	mov byte ptr [esp+0x3C],1
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
	mov eax,dword ptr [esp+0x44]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x44],2
	call _xbstr_t::_ctor_0
	lea ecx,[esi+0x14]
	mov byte ptr [esp+0x40],0
	call CChatBalloon::MakeBalloon
	mov ecx,dword ptr [esp+0x24]
	push ecx
	mov ecx,esi
	call CUser::ShowKeyowrdEffect
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret 4
}
}
// CUserPreview::CUserPreview
_SUB_EXCEPTION_HANDLER(BBF00)
__SUB_CLASS_THIS0(000BBF00, __thiscall, 48098,  CUserPreview, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_BBF00
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
	push edi
	call CUser::_ctor_0
	lea eax,[esi+0x3AC0]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFC540
	mov dword ptr [TSingleton<CUserPreview>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUserPreview>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUserPreview::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUserPreview::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUserPreview::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0x88],offset CUserPreview::`vftable'
	mov dword ptr [esi+0x3AD4],edi
	mov dword ptr [esi+0x3AD8],edi
	mov dword ptr [esi+0x3AE8],edi
	mov dword ptr [esi+0x3AF4],edi
	mov dword ptr [esi+0x3AF8],edi
	mov dword ptr [esi+0x3AFC],edi
	mov dword ptr [esi+0x3B00],edi
	mov dword ptr [esi+0x3B04],edi
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 5
	push 4
	lea eax,[esi+0x3B08]
	push eax
	mov byte ptr [esp+0x2C],9
	call __eh_vector_ctor_iterator
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
// CUserPreview::OnPetActivated
__SUB_CLASS_THIS(000BC0A0, __thiscall, 48107,  CUserPreview, long, CInPacket&) {
__asm {

 Block0:
	mov eax,1
	ret 4
}
}
// CUserPreview::IsRemoteUser
__SUB_CLASS_THIS0(000BC090, __thiscall, 48106,  CUserPreview, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CUserPreview::InitObjects
_SUB_EXCEPTION_HANDLER(54E100)
__SUB_CLASS_THIS0(0054E100, __thiscall, 48100,  CUserPreview, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54E100
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
	xor edi,edi
	mov dword ptr [esi+0x3AD0],edi
	mov eax,dword ptr [esi+0x3AD4]
	cmp eax,edi
	je Block2

 Block1:
	mov dword ptr [esi+0x3AD4],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea eax,[esp+0xC]
	push 0x3D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[esi+0x3AD8]
	push ecx
	push eax
	mov dword ptr [esp+0x24],edi
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x18]
	add esp,0xC
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,edi
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov dword ptr [esi+0x3AE4],edi
	mov eax,dword ptr [esi+0x3AE8]
	cmp eax,edi
	je Block6

 Block5:
	mov dword ptr [esi+0x3AE8],edi
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block6:
	mov dword ptr [esi+0x3AEC],edi
	mov dword ptr [esi+0x3AF0],edi
	mov eax,dword ptr [esi+0x3AF4]
	cmp eax,edi
	je Block8

 Block7:
	mov dword ptr [esi+0x3AF4],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x3AF8]
	cmp eax,edi
	je Block10

 Block9:
	mov dword ptr [esi+0x3AF8],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x3AFC]
	cmp eax,edi
	je Block12

 Block11:
	mov dword ptr [esi+0x3AFC],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0x3B00]
	cmp eax,edi
	je Block14

 Block13:
	mov dword ptr [esi+0x3B00],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0x3B04]
	cmp eax,edi
	je Block16

 Block15:
	mov dword ptr [esi+0x3B04],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esi+0x1C]
	cmp eax,edi
	je Block18

 Block17:
	mov dword ptr [esi+0x1C],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov dword ptr [esi+0x3B20],edi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
