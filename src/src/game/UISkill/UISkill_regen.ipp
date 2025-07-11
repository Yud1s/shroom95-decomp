#include "regen.hpp"
// UISkill.ipp
#include "UISkill.hpp"

// CUISkill::OnSkillLevelUpButton
_SUB_EXCEPTION_HANDLER(44D660)
__SUB_CLASS_THIS(0044D660, __thiscall, 55555,  CUISkill, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44D660
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
	mov dword ptr [esp+0x1C],ebp
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [esi+0x20B8],0
	mov dword ptr [esp+0x24],esi
	jne Block92

 Block1:
	mov eax,dword ptr [esi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block92

 Block2:
	call get_update_time
	sub eax,dword ptr [esi+0x20BC]
	cmp eax,0x1F4
	jl Block92

 Block3:
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x20],ebx
	test eax,eax
	je Block8

 Block4:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block7

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block7:
	mov dword ptr [esp+0x2C],0

 Block8:
	mov eax,dword ptr [ebp+0xB10]
	mov esi,dword ptr [eax+0x44]
	test esi,esi
	je Block13

 Block9:
	mov eax,dword ptr [ebx+0x3D]
	push eax
	lea edi,[ebx+0x39]
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	push ecx
	call is_extendsp_job
	add esp,0xC
	test eax,eax
	je Block11

 Block10:
	push esi
	lea ecx,[ebx+0xCD]
	call ExtendSP::Get
	test al,al
	jbe Block92

 Block11:
	mov edx,dword ptr [ebx+0x3D]
	push edx
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	cwde
	push eax
	call is_extendsp_job
	add esp,0xC
	test eax,eax
	jne Block15

 Block12:
	mov ecx,dword ptr [ebx+0x9D]
	push ecx
	lea edx,[ebx+0x99]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	test ax,ax
	jmp Block14

 Block13:
	push ebx
	call get_novice_skill_point
	add esp,4
	test eax,eax

 Block14:
	jle Block92

 Block15:
	mov eax,dword ptr [ebp+0xB18]
	mov eax,dword ptr [eax+0x38]
	mov esi,dword ptr [esp+0x50]
	push 0
	mov ecx,ebp
	add esi,eax
	call CUISkill::GetSkillRootVisible
	test eax,eax
	je Block92

 Block16:
	test esi,esi
	jl Block92

 Block17:
	mov ecx,dword ptr [eax+8]
	test ecx,ecx
	je Block92

 Block18:
	cmp esi,dword ptr [ecx-4]
	jae Block92

 Block19:
	mov eax,ecx
	mov edi,dword ptr [eax+esi*8+4]
	mov esi,dword ptr [esp+0x24]
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x1C],edi
	call CWvsContext::GetSkillLevelUpState
	cmp eax,1
	jne Block92

 Block20:
	cmp dword ptr [edi+0x38],0
	jne Block92

 Block21:
	mov ecx,esi
	call CWvsContext::IsAdminAccount
	test eax,eax
	jne Block91

 Block22:
	cmp dword ptr [esi+0x209C],eax
	jne Block91

 Block23:
	mov ecx,esi
	call CWvsContext::IsTesterAccount
	test eax,eax
	jne Block91

 Block24:
	mov ecx,dword ptr [edi]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov eax,0x51EB851F
	imul esi
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	imul ecx,0x64
	mov edx,esi
	sub edx,ecx
	je Block49

 Block25:
	push esi
	call is_beginner_job
	add esp,4
	test eax,eax
	jne Block49

 Block26:
	push esi
	call is_extendsp_job
	add esp,4
	test eax,eax
	jne Block49

 Block27:
	push esi
	call is_dual_job
	add esp,4
	push edi
	mov ecx,ebp
	test eax,eax
	jne Block39

 Block28:
	call CUISkill::CanSkillUp
	test eax,eax
	jne Block49

 Block29:
	lea eax,[esp+0x50]
	push 0x18B3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,dword ptr [edi]
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	push ecx
	mov dword ptr [esp+0x4C],0
	call get_job_level
	add esp,4
	sub eax,2
	je Block34

 Block30:
	sub eax,1
	je Block33

 Block31:
	sub eax,1
	jne Block37

 Block32:
	lea edx,[esp+0x24]
	push 0xDD8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x4C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	jmp Block35

 Block33:
	lea eax,[esp+0x20]
	push 0xDD6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x4C],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	jmp Block35

 Block34:
	lea ecx,[esp+0x1C]
	push 0xDD7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x4C],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]

 Block35:
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	push 0
	push 1
	push 0
	push 0
	push ecx
	lea edx,[esp+0x64]
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push edx
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x64]
	add esp,0x14
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block92

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block92

 Block39:
	call CUISkill::CanSkillUpDualJob
	test eax,eax
	jne Block49

 Block40:
	lea eax,[esp+0x50]
	push 0x18B3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,dword ptr [edi]
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cdq
	mov ecx,0xA
	idiv ecx
	mov dword ptr [esp+0x48],4
	lea eax,[edx-1]
	cmp eax,3
	ja Block47

 Block41:
	cmp EAX, 0
je Block42
cmp EAX, 1
je Block43
cmp EAX, 2
je Block43
cmp EAX, 3
je Block44


 Block42:
	lea edx,[esp+0x24]
	push 0x18B9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x4C],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	jmp Block45

 Block43:
	lea eax,[esp+0x20]
	push 0x18B8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x4C],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	jmp Block45

 Block44:
	lea ecx,[esp+0x1C]
	push 0x18DD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x4C],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]

 Block45:
	mov byte ptr [esp+0x48],4
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	push 0
	push 1
	push 0
	push 0
	push ecx
	lea edx,[esp+0x64]
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push edx
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x64]
	add esp,0x14
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block92

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block92

 Block49:
	movzx eax,word ptr [ebx+0xF7]
	push eax
	mov ecx,ebx
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx ecx,ax
	push ecx
	call is_dual_job_born
	add esp,8
	test eax,eax
	je Block75

 Block50:
	cmp dword ptr [ebp+0xB98],0
	jne Block70

 Block51:
	push esi
	call get_job_level
	add esp,4
	cmp eax,1
	jne Block70

 Block52:
	mov ecx,ebx
	call GW_CharacterStat::_ZtlSecureGet_nJob
	mov edx,0x1AF
	cmp ax,dx
	jge Block70

 Block53:
	xor edi,edi
	mov dword ptr [esp+0x30],0x3D0900
	mov dword ptr [esp+0x34],0x3D0CEA
	mov dword ptr [esp+0x38],0x3D0CEB
	mov dword ptr [esp+0x3C],0x3D0E36
	add ebx,0x53D
	lea ebp,[esp+0x30]
	mov dword ptr [esp+0x14],4

 Block54:
	lea eax,[esp+0x50]
	push eax
	push ebp
	mov ecx,ebx
	mov dword ptr [esp+0x58],0
	call ZMap<long, long, long>::GetAt
	add edi,dword ptr [esp+0x50]
	add ebp,4
	sub dword ptr [esp+0x14],1
	jne Block54

 Block55:
	mov eax,dword ptr [esp+0x18]
	cmp dword ptr [eax],0x3D0E36
	jne Block59

 Block56:
	lea ecx,[esp+0x50]
	push ecx
	push eax
	mov ecx,ebx
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block59

 Block57:
	cmp dword ptr [esp+0x50],0xA
	jl Block59

 Block58:
	mov eax,1
	jmp Block60

 Block59:
	xor eax,eax

 Block60:
	xor ecx,ecx
	cmp edi,0xF
	setge cl
	test eax,eax
	jne Block62

 Block61:
	test ecx,ecx
	je Block69

 Block62:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x50],eax
	mov dword ptr [esp+0x48],8
	test eax,eax
	je Block68

 Block63:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block68

 Block64:
	lea esi,[eax+8]
	test esi,esi
	je Block68

 Block65:
	add esi,0xFFFFFFF8
	mov dword ptr [esp+0x2C],esi
	test esi,esi
	je Block67

 Block66:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block67:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x16D2
	push eax
	mov dword ptr [esp+0x5C],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0x1020EE
	push 0
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	push 0
	push 0
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_TEXT
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [ecx+0xB98],1
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>
	jmp Block92

 Block68:
	xor esi,esi
	mov dword ptr [esp+0x2C],esi
	jmp Block67

 Block69:
	mov ebx,dword ptr [esp+0x20]
	mov ebp,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+0x18]

 Block70:
	mov ecx,ebx
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx edx,ax
	push edx
	call is_beginner_job
	add esp,4
	test eax,eax
	jne Block91

 Block71:
	mov eax,0x66666667
	imul esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea eax,[eax+eax*4]
	add eax,eax
	sub esi,eax
	cmp esi,4
	jge Block91

 Block72:
	push esi
	mov ecx,ebp
	call CUISkill::GetMySkillDegreeSPDualJob
	mov ebx,eax
	xor eax,eax
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x54],eax
	push edx
	lea eax,[esp+0x20]
	push eax
	push esi
	mov ecx,ebp
	call CUISkill::GetMaxSkillDegreeSPDualJob
	mov ecx,dword ptr [esp+0x50]
	mov edx,dword ptr [esp+0x1C]
	add ecx,edx
	add ecx,dword ptr [esp+0x18]
	cmp ebx,ecx
	jl Block91

 Block73:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	push 0x18E3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block92

 Block74:
	jmp Block91

 Block75:
	mov ecx,dword ptr [edi]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ebp,edx
	shr ebp,0x1F
	add ebp,edx
	push ebp
	call is_beginner_job
	add esp,4
	test eax,eax
	jne Block91

 Block76:
	push ebp
	call is_extendsp_job
	add esp,4
	test eax,eax
	jne Block91

 Block77:
	push ebp
	call get_job_level
	mov esi,eax
	lea ecx,[esi-1]
	add esp,4
	mov dword ptr [esp+0x50],esi
	cmp ecx,2
	ja Block91

 Block78:
	lea edi,[ebx+0x53D]
	mov ecx,edi
	mov dword ptr [esp+0x14],0
	call ZMap<long, long, long>::GetHeadPosition
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block84

 Block79:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x24],0
	call ZMap<long, long, long>::GetNext
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	push esi
	call is_beginner_job
	add esp,4
	test eax,eax
	jne Block82

 Block80:
	push esi
	call get_job_level
	add esp,4
	cmp eax,dword ptr [esp+0x50]
	jne Block82

 Block81:
	mov ecx,dword ptr [esp+0x1C]
	add dword ptr [esp+0x14],ecx

 Block82:
	cmp dword ptr [esp+0x20],0
	jne Block79

 Block83:
	mov esi,dword ptr [esp+0x50]

 Block84:
	movzx edx,word ptr [ebx+0xF7]
	inc esi
	push esi
	push edx
	mov ecx,ebx
	call GW_CharacterStat::_ZtlSecureGet_nJob
	cwde
	push eax
	call get_job_change_level
	movzx ecx,word ptr [ebx+0xF7]
	mov edi,dword ptr [esp+0x5C]
	add esp,0xC
	push edi
	push ecx
	mov ecx,ebx
	mov esi,eax
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx edx,ax
	push edx
	call get_job_change_level
	sub esi,eax
	mov eax,0x10624DD3
	imul ebp
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add esp,0xC
	add eax,edx
	lea esi,[esi+esi*2+1]
	jne Block88

 Block85:
	push ebp
	call get_job_category
	add esp,4
	cmp eax,3
	jne Block88

 Block86:
	cmp edi,1
	jne Block88

 Block87:
	inc esi

 Block88:
	cmp dword ptr [esp+0x14],esi
	jl Block90

 Block89:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x64],esp
	push 0x18E3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block92

 Block90:
	mov edi,dword ptr [esp+0x18]

 Block91:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [esp+0x24]
	push edx
	call CWvsContext::SendSkillUpRequest

 Block92:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 4
}
}
// Partition_CUISkill__RecommSkillPair_
__SUB(0044A270, __cdecl, 85371,  int32_t, ZArray<CUISkill::RecommSkillPair>&, int32_t, int32_t, const CUISkill::RecommSkillPair&) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp],eax
	mov eax,dword ptr [esp+0xC]
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x20]
	mov edx,edi

 Block1:
	cmp eax,edi
	mov ebp,dword ptr [esp+0x24]
	jge Block5

 Block2:
	mov ecx,dword ptr [ebx]
	mov esi,dword ptr [ebp]
	lea ecx,[ecx+eax*8]
	lea ecx,[ecx]

 Block3:
	cmp dword ptr [ecx],esi
	jge Block5

 Block4:
	inc eax
	add ecx,8
	cmp eax,edi
	jl Block3

 Block5:
	dec edx
	cmp dword ptr [esp+0x1C],edx
	jge Block10

 Block6:
	mov ecx,dword ptr [ebx]
	mov esi,dword ptr [ebp]
	lea ecx,[ecx+edx*8]
	jmp Block8

 Block8:
	cmp esi,dword ptr [ecx]
	jge Block10

 Block9:
	dec edx
	sub ecx,8
	cmp dword ptr [esp+0x1C],edx
	jl Block8

 Block10:
	cmp eax,edx
	jge Block12

 Block11:
	mov ecx,dword ptr [ebx]
	mov ebp,dword ptr [ecx+edx*8]
	mov esi,dword ptr [ecx+eax*8]
	mov edi,dword ptr [ecx+eax*8+4]
	mov dword ptr [ecx+eax*8],ebp
	mov ebp,dword ptr [ecx+edx*8+4]
	mov dword ptr [ecx+eax*8+4],ebp
	mov dword ptr [ecx+edx*8+4],edi
	mov edi,dword ptr [esp+0x20]
	mov dword ptr [ecx+edx*8],esi
	inc eax
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x10]
	pop edi
	pop esi
	pop ebp
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	pop ecx
	ret
}
}
// CUISkill::IsKindOf
__SUB_CLASS_THIS(0044E6E0, __thiscall, 55569,  CUISkill, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUISkill::ms_RTTI_CUISkill
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
// CWndSkillGuide::~CWndSkillGuide
__SUB_CLASS_THIS0(00450630, __thiscall, 55520,  CWndSkillGuide, void) {
__asm {

 Block0:
	ret
}
}
// CUISkill::OnDestroy
__SUB_CLASS_THIS0(0044A660, __thiscall, 55543,  CUISkill, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB10]
	push edi
	call CCtrlTab::RemoveAllItems
	mov ecx,dword ptr [esi+0xB90]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB90],0
	lea edi,[esi+0xB8C]
	je Block3

 Block2:
	push 0
	mov ecx,edi
	call ZRef<CUIMacroSys>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block3:
	mov ecx,dword ptr [esi+0xBC8]
	test ecx,ecx
	je Block6

 Block4:
	call CWnd::Destroy
	cmp dword ptr [esi+0xBC8],0
	lea edi,[esi+0xBC4]
	je Block6

 Block5:
	push 0
	mov ecx,edi
	call ZRef<CWndSkillGuide>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block6:
	mov ecx,esi
	call CUIWnd::OnDestroy
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::RemoveFromStackForTab
	pop edi
	pop esi
	ret
}
}
// CUIMacroSys::Draw
_SUB_EXCEPTION_HANDLER(44C430)
__SUB_CLASS_THIS(0044C430, __thiscall, 55490,  CUIMacroSys, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44C430
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
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
	mov dword ptr [ebp-0x2C],esi
	mov eax,dword ptr [ebp+8]
	push eax
	call CWnd::Draw
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0x8C]
	mov ecx,dword ptr [eax+0x38]
	mov eax,dword ptr [esi+0xAEC]
	mov esi,eax
	sub esi,ecx
	mov dword ptr [ebp-4],0
	cmp eax,0xFFFFFFFF
	je Block31

 Block1:
	mov ebx,2
	cmp esi,ebx
	ja Block31

 Block2:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x28]
	push edx
	call edi
	lea eax,[ebp-0x28]
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
	lea ecx,[ebp-0x6C]
	push ecx
	mov byte ptr [ebp-4],1
	call edi
	lea edx,[ebp-0x6C]
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
	push 0
	push 0
	lea eax,[ebp-0x28]
	push eax
	lea ecx,[ebp-0x6C]
	push ecx
	push ecx
	mov dword ptr [ebp-0x30],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGSK__18
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],3
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[ebp-0x58]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov edi,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x58],di
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[ebp-0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x6C],di
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[ebp-0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x28],di
	jne Block22

 Block20:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[ebp-0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov eax,3
	mov word ptr [ebp-0x40],ax
	mov dword ptr [ebp-0x38],0xFF
	cmp dword ptr [ebp-0x14],0
	mov byte ptr [ebp-4],9
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov edi,dword ptr [ebp-0x18]
	imul esi,0x2C
	lea ecx,[ebp-0x40]
	push ecx
	mov ecx,dword ptr [ebp-0x14]
	push edi
	add esi,0x29
	push esi
	push 0xC
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],8
	jne Block28

 Block26:
	mov eax,dword ptr [ebp-0x38]
	xor edx,edx
	mov word ptr [ebp-0x40],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[ebp-0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block31

 Block30:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block31:
	mov eax,dword ptr [ebp-0x2C]
	mov eax,dword ptr [eax+0x8C]
	mov ecx,dword ptr [eax+0x38]
	mov edx,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	mov edi,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x8C],ecx
	mov dword ptr [ebp-0x30],edx
	mov dword ptr [ebp-0x18],0
	mov dword ptr [ebp-0x44],0x2C
	lea ebx,[ebx]

 Block32:
	mov ecx,dword ptr [ebp-0x8C]
	mov eax,dword ptr [ebp-0x18]
	add eax,ecx
	xor ecx,ecx
	mov dword ptr [ebp-0x84],eax
	mov dword ptr [ebp-0x5C],ecx
	jmp Block36

 Block35:
	mov eax,dword ptr [ebp-0x84]

 Block36:
	mov esi,dword ptr [ZImports::_VariantInit]
	cmp ecx,3
	jne Block66

 Block37:
	mov dword ptr [ebp-0x70],0
	push eax
	lea edx,[ebp-0x70]
	push offset _S_UIUIWINDOW2IMGSK
	push edx
	mov byte ptr [ebp-4],0xA
	call ZXString<char>::Format
	mov eax,3
	add esp,0xC
	mov word ptr [ebp-0x28],ax
	mov dword ptr [ebp-0x20],0xFF
	lea ecx,[ebp-0x58]
	push ecx
	mov byte ptr [ebp-4],0xB
	call esi
	lea edx,[ebp-0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block38:
	lea eax,[ebp-0x40]
	push eax
	mov byte ptr [ebp-4],0xC
	call esi
	lea ecx,[ebp-0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block39:
	mov ebx,dword ptr [ebp-0x70]
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	mov byte ptr [ebp-4],0xD
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp-0x58]
	push edx
	lea eax,[ebp-0x40]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x48],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xE
	je Block7

 Block40:
	lea ecx,[ebp-0x80]
	push ecx
	mov byte ptr [ebp-4],0xD
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x48],esi
	test eax,eax
	je Block43

 Block41:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x88]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x88]
	mov esi,ecx
	mov dword ptr [ebp-0x48],esi
	test eax,eax
	jge Block43

 Block42:
	cmp eax,0x80004002
	jne Block3

 Block43:
	mov byte ptr [ebp-4],0x10
	test edi,edi
	je Block7

 Block44:
	mov ecx,dword ptr [ebp-0x28]
	mov edx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x24]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp-0x44]
	mov ecx,dword ptr [edx+0x80]
	push esi
	push eax
	push 0x88
	push edi
	call ecx
	test eax,eax
	jge Block46

 Block45:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block46:
	mov byte ptr [ebp-4],0xF
	test esi,esi
	je Block48

 Block47:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block48:
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],0xD
	jne Block51

 Block49:
	mov eax,dword ptr [ebp-0x78]
	xor ecx,ecx
	mov word ptr [ebp-0x80],cx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[ebp-0x80]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov esi,8
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x40],si
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x58],si
	jne Block59

 Block57:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[ebp-0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x28],si
	jne Block63

 Block61:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[ebp-0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [ebp-4],0
	test ebx,ebx
	je Block75

 Block65:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4
	jmp Block75

 Block66:
	push ecx
	mov ecx,dword ptr [ebp-0x30]
	push eax
	call CMacroSysMan::GetMacro
	test eax,eax
	je Block75

 Block67:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	test eax,eax
	je Block75

 Block68:
	mov ecx,3
	mov word ptr [ebp-0x6C],cx
	mov ecx,0xFF
	mov dword ptr [ebp-0x64],ecx
	mov edx,dword ptr [eax+0x25C]
	mov byte ptr [ebp-4],0x11
	test edi,edi
	je Block7

 Block69:
	mov ebx,dword ptr [ebp-0x6C]
	mov esi,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x68]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x60]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp-0x5C]
	push edx
	mov edx,dword ptr [ebp-0x44]
	mov ecx,eax
	shl ecx,4
	push edx
	add ecx,eax
	mov eax,dword ptr [esi+0x80]
	lea edx,[ecx+ecx+0xF]
	push edx
	push edi
	call eax
	test eax,eax
	jge Block71

 Block70:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block71:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0
	jne Block74

 Block72:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[ebp-0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov ecx,dword ptr [ebp-0x5C]
	inc ecx
	cmp ecx,4
	mov dword ptr [ebp-0x5C],ecx
	jl Block35

 Block76:
	mov eax,dword ptr [ebp-0x44]
	inc dword ptr [ebp-0x18]
	add eax,0x2C
	cmp eax,0xB0
	mov dword ptr [ebp-0x44],eax
	jl Block32

 Block77:
	mov eax,dword ptr [ebp-0x2C]
	mov eax,dword ptr [eax+0xAEC]
	cmp eax,0xFFFFFFFF
	je Block112

 Block78:
	mov dword ptr [ebp-0x2C],0
	push eax
	lea ecx,[ebp-0x2C]
	push offset _S_UIUIWINDOW2IMGSK
	push ecx
	mov byte ptr [ebp-4],0x12
	call ZXString<char>::Format
	mov edx,3
	add esp,0xC
	mov word ptr [ebp-0x28],dx
	mov dword ptr [ebp-0x20],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x40]
	push eax
	mov byte ptr [ebp-4],0x13
	call esi
	lea ecx,[ebp-0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	lea edx,[ebp-0x58]
	push edx
	mov byte ptr [ebp-4],0x14
	call esi
	lea eax,[ebp-0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	mov edi,dword ptr [ebp-0x2C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x15
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp-0x40]
	push ecx
	lea edx,[ebp-0x58]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x30],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x16
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	lea eax,[ebp-0x80]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x17
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x48],esi
	test eax,eax
	je Block88

 Block85:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x30]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x30]
	mov esi,ecx
	mov dword ptr [ebp-0x48],esi
	test eax,eax
	jge Block88

 Block86:
	cmp eax,0x80004002
	je Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	cmp dword ptr [ebp-0x14],0
	mov byte ptr [ebp-4],0x18
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	mov edx,dword ptr [ebp-0x14]
	mov ecx,dword ptr [edx]
	mov edx,dword ptr [ebp-0x28]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x24]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x1C]
	push esi
	push 0xBD
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp-0x14]
	push 0x10
	push eax
	call ecx
	test eax,eax
	jge Block92

 Block91:
	mov edx,dword ptr [ebp-0x14]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	push eax
	call _com_issue_errorex

 Block92:
	mov byte ptr [ebp-4],0x17
	test esi,esi
	je Block94

 Block93:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block94:
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],bl
	jne Block97

 Block95:
	mov eax,dword ptr [ebp-0x78]
	xor edx,edx
	mov word ptr [ebp-0x80],dx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea eax,[ebp-0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov esi,8
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp-0x58],si
	jne Block101

 Block99:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea edx,[ebp-0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x40],si
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x28],si
	jne Block109

 Block107:
	mov eax,dword ptr [ebp-0x20]
	xor edx,edx
	mov word ptr [ebp-0x28],dx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[ebp-0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block112

 Block111:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block112:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block114

 Block113:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block114:
	lea esp,[ebp-0x9C]
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
// CUIMacroSys::ResetInfo
__SUB_CLASS_THIS0(00449F00, __thiscall, 55478,  CUIMacroSys, void) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [TSingleton<CUISkill>::ms_pInstance]
	xor edx,edx
	cmp dword ptr [ebx+0xB88],1
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x94]
	sete dl
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x24]
	push edx
	call eax
	mov eax,dword ptr [esi+0x9C]
	mov ebx,dword ptr [TSingleton<CUISkill>::ms_pInstance]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x24]
	lea ecx,[eax+4]
	xor eax,eax
	cmp dword ptr [ebx+0xB88],1
	sete al
	push eax
	call edx
	lea ecx,[esi+0xA0]
	call CUIToolTip::ClearToolTip
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	pop ebx
	ret
}
}
// ZSort_CUISkill__RecommSkillPair_
__SUB(0044B0C0, __cdecl, 85374,  void, ZArray<CUISkill::RecommSkillPair>&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	jne Block3

 Block2:
	xor ecx,ecx
	push ecx
	push eax
	push edx
	call ZSortHelperDefault<CUISkill::RecommSkillPair>::call_0
	add esp,0xC
	ret

 Block3:
	lea ecx,[eax+ecx*8-8]
	push ecx
	push eax
	push edx
	call ZSortHelperDefault<CUISkill::RecommSkillPair>::call_0
	add esp,0xC
	ret
}
}
// CUIMacroSys::OnChildNotify
__SUB_CLASS_THIS(0044A310, __thiscall, 55483,  CUIMacroSys, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0xBC2
	jne Block4

 Block1:
	cmp edx,0x12C
	jb Block4

 Block2:
	cmp edx,0x130
	ja Block4

 Block3:
	call CUIMacroSys::ResetInfo
	ret 0xC

 Block4:
	cmp edx,0x64
	jne Block6

 Block5:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block6:
	ret 0xC
}
}
// CUISkill::GetSkillIndexFromPoint
__SUB_CLASS_THIS(0044B390, __thiscall, 55557,  CUISkill, long, long, long, int32_t) {
__asm {

 Block0:
	sub esp,0x14
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB10]
	mov ecx,dword ptr [eax+0x44]
	test ecx,ecx
	jl Block3

 Block1:
	cmp ecx,dword ptr [eax+0x50]
	jge Block3

 Block2:
	push 0
	mov ecx,esi
	call CUISkill::GetSkillRootVisible
	mov ecx,eax
	mov dword ptr [esp+4],ecx
	test ecx,ecx
	jne Block4

 Block3:
	or eax,0xFFFFFFFF
	pop esi
	add esp,0x14
	ret 0xC

 Block4:
	mov eax,dword ptr [esi+0xB18]
	mov eax,dword ptr [eax+0x38]
	push ebx
	mov ebx,dword ptr [esp+0x20]
	push ebp
	mov ebp,dword ptr [esp+0x28]
	push edi
	mov edi,eax
	mov esi,0x7F

 Block5:
	mov eax,dword ptr [ecx+8]
	test eax,eax
	je Block14

 Block6:
	cmp edi,dword ptr [eax-4]
	jae Block14

 Block7:
	cmp dword ptr [esp+0x30],0
	je Block9

 Block8:
	lea ecx,[esi-0x1F]
	lea edx,[esi+1]
	mov dword ptr [esp+0x14],0xD
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x1C],0x2D
	mov dword ptr [esp+0x20],edx
	jmp Block10

 Block9:
	lea eax,[esi-0x22]
	mov dword ptr [esp+0x14],0xA
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x1C],0x95
	mov dword ptr [esp+0x20],esi

 Block10:
	push ebp
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	call PtInRect
	test eax,eax
	jne Block13

 Block11:
	add esi,0x28
	inc edi
	cmp esi,0x11F
	jge Block14

 Block12:
	mov ecx,dword ptr [esp+0x10]
	jmp Block5

 Block13:
	mov eax,edi
	pop edi
	pop ebp
	pop ebx
	pop esi
	add esp,0x14
	ret 0xC

 Block14:
	pop edi
	pop ebp
	pop ebx
	or eax,0xFFFFFFFF
	pop esi
	add esp,0x14
	ret 0xC
}
}
// CUISkill::CUISkill
_SUB_EXCEPTION_HANDLER(450690)
__SUB_CLASS_THIS(00450690, __thiscall, 55541,  CUISkill, void, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_450690
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
	mov dword ptr [esp+0x14],esi
	xor edi,edi
	push edi
	push edi
	push 1
	push 6
	push 0x99
	push 5
	push 3
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x20],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUISkill>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUISkill>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUISkill::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISkill::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISkill::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],edi
	mov dword ptr [esi+0xB10],edi
	mov dword ptr [esi+0xB18],edi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 4
	push 8
	lea edx,[esi+0xB1C]
	push edx
	mov byte ptr [esp+0x34],4
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB40],edi
	mov dword ptr [esi+0xB48],edi
	mov dword ptr [esi+0xB4C],edi
	mov dword ptr [esi+0xB50],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 2
	push 4
	lea eax,[esi+0xB54]
	push eax
	mov byte ptr [esp+0x34],7
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB5C],edi
	mov dword ptr [esi+0xB60],edi
	mov dword ptr [esi+0xB64],edi
	mov dword ptr [esi+0xB68],edi
	mov dword ptr [esi+0xB6C],edi
	mov dword ptr [esi+0xB70],edi
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 3
	push 4
	lea ecx,[esi+0xB7C]
	push ecx
	mov byte ptr [esp+0x34],0xE
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB88],edi
	mov dword ptr [esi+0xB90],edi
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push offset ZRef<CCtrlOriginButton>::_ctor_default
	push 5
	push 8
	lea edx,[esi+0xB9C]
	push edx
	mov byte ptr [esp+0x34],0x10
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xBC8],edi
	mov dword ptr [esi+0xBCC],edi
	mov dword ptr [esi+0xBD0],edi
	mov dword ptr [esi+0xBD4],edi
	mov dword ptr [esi+0xBD8],edi
	mov dword ptr [esi+0xBDC],edi
	lea eax,[esp+0x10]
	push 0x18
	push eax
	mov byte ptr [esp+0x28],0x13
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov ebx,dword ptr [esi+0xB64]
	cmp ebx,eax
	je Block8

 Block4:
	mov dword ptr [esi+0xB64],eax
	cmp eax,edi
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	cmp ebx,edi
	je Block8

 Block7:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block8:
	mov eax,dword ptr [esp+0x10]
	cmp eax,edi
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	lea ecx,[esp+0x10]
	push 0x18
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov ebx,dword ptr [esi+0xB68]
	add esp,8
	cmp ebx,eax
	je Block15

 Block11:
	mov dword ptr [esi+0xB68],eax
	cmp eax,edi
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block13:
	cmp ebx,edi
	je Block15

 Block14:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block15:
	mov eax,dword ptr [esp+0x10]
	cmp eax,edi
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	lea eax,[esp+0x10]
	push 0x16
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov ebx,dword ptr [esi+0xB6C]
	add esp,8
	cmp ebx,eax
	je Block22

 Block18:
	mov dword ptr [esi+0xB6C],eax
	cmp eax,edi
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block20:
	cmp ebx,edi
	je Block22

 Block21:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block22:
	mov eax,dword ptr [esp+0x10]
	cmp eax,edi
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block24:
	lea ecx,[esp+0x10]
	push 0x38
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov ebx,dword ptr [esi+0xB70]
	add esp,8
	cmp ebx,eax
	je Block29

 Block25:
	mov dword ptr [esi+0xB70],eax
	cmp eax,edi
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block27:
	cmp ebx,edi
	je Block29

 Block28:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block29:
	mov eax,dword ptr [esp+0x10]
	cmp eax,edi
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov ecx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x28]
	push 0xA
	push 0x119
	mov dword ptr [esi+0xB94],ecx
	push 0xAE
	mov ecx,esi
	mov dword ptr [esi+0xB78],eax
	mov dword ptr [esi+0xB98],edi
	call CUIWnd::CreateUIWndPosSaved
	mov eax,esi
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
// DownHeap_CUISkill__RecommSkillPair_
__SUB(00449E50, __cdecl, 85368,  void, ZArray<CUISkill::RecommSkillPair>&, int32_t, int32_t, int32_t) {
__asm {

 Block0:
	sub esp,8
	push ebx
	mov ebx,dword ptr [esp+0x1C]
	push esi
	mov esi,dword ptr [esp+0x14]
	mov eax,dword ptr [esi]
	push edi
	mov edi,dword ptr [esp+0x1C]
	lea ecx,[edi+ebx]
	mov edx,dword ptr [eax+ecx*8-8]
	mov eax,dword ptr [eax+ecx*8-4]
	mov dword ptr [esp+0x10],eax
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0xC],edx
	cdq
	sub eax,edx
	sar eax,1
	cmp edi,eax
	jg Block11

 Block1:
	push ebp
	jmp Block5

 Block4:
	mov esi,dword ptr [esp+0x1C]

 Block5:
	lea ecx,[edi+edi]
	cmp ecx,dword ptr [esp+0x24]
	jge Block8

 Block6:
	mov ebp,dword ptr [esi]
	lea edx,[ecx+ebx]
	lea edx,[ebp+edx*8]
	mov ebp,dword ptr [edx-8]
	cmp ebp,dword ptr [edx]
	jge Block8

 Block7:
	inc ecx

 Block8:
	mov edx,dword ptr [esi]
	mov ebp,dword ptr [esp+0x10]
	lea esi,[ecx+ebx]
	cmp ebp,dword ptr [edx+esi*8-8]
	lea esi,[edx+esi*8-8]
	jge Block10

 Block9:
	mov ebp,dword ptr [esi]
	add edi,ebx
	cmp ecx,eax
	mov dword ptr [edx+edi*8-8],ebp
	mov esi,dword ptr [esi+4]
	mov dword ptr [edx+edi*8-4],esi
	mov edi,ecx
	jle Block4

 Block10:
	mov esi,dword ptr [esp+0x1C]
	pop ebp

 Block11:
	mov esi,dword ptr [esi]
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+0x10]
	add edi,ebx
	mov dword ptr [esi+edi*8-8],eax
	mov dword ptr [esi+edi*8-4],ecx
	pop edi
	pop esi
	pop ebx
	add esp,8
	ret
}
}
// CUISkill::SetButton
__SUB_CLASS_THIS(0044A0A0, __thiscall, 55556,  CUISkill, void, long, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	lea esi,[ecx+eax*8+0xB20]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x24]
	lea ecx,[eax+4]
	mov eax,dword ptr [esp+0xC]
	push eax
	call edx
	mov esi,dword ptr [esi]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [eax+0x1C]
	lea ecx,[esi+4]
	push edx
	call eax
	pop esi
	ret 0xC
}
}
// CUIMacroSys::GetRTTI
__SUB_CLASS_THIS0(0044C220, __thiscall, 55494,  CUIMacroSys, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIMacroSys::ms_RTTI_CUIMacroSys
	ret
}
}
// CUIMacroSys::OnMouseButton
_SUB_EXCEPTION_HANDLER(44CCE0)
__SUB_CLASS_THIS(0044CCE0, __thiscall, 55481,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44CCE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x40],ecx
	cmp dword ptr [ebp+0x70],0x201
	jne Block120

 Block1:
	mov edx,dword ptr [ebp+0x7C]
	lea esi,[ecx-4]
	lea eax,[ebp+0x24]
	push eax
	mov eax,dword ptr [ebp+0x78]
	lea ecx,[ebp+0x28]
	push ecx
	push 1
	push edx
	or edi,0xFFFFFFFF
	push eax
	mov ecx,esi
	mov dword ptr [ebp+0x28],edi
	mov dword ptr [ebp+0x24],edi
	mov dword ptr [ebp+0x5C],esi
	call CUIMacroSys::GetIndexByPos
	mov ebx,dword ptr [ebp+0x28]
	cmp ebx,edi
	je Block120

 Block2:
	push ebx
	mov ecx,esi
	call CUIMacroSys::OnSelected
	mov eax,dword ptr [ebp+0x24]
	cmp eax,edi
	je Block120

 Block3:
	xor edi,edi
	mov dword ptr [ebp+0x3C],edi
	mov esi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [ebp-4],edi
	cmp eax,3
	jne Block30

 Block4:
	mov dword ptr [ebp+0x60],edi
	push ebx
	lea ecx,[ebp+0x60]
	push offset _S_UIUIWINDOW2IMGSK
	push ecx
	mov byte ptr [ebp-4],1
	call ZXString<char>::Format
	add esp,0xC
	lea edx,[ebp+0x14]
	push edx
	call esi
	lea eax,[ebp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],2
	call esi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov edi,dword ptr [ebp+0x60]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],3
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea eax,[ebp+0x14]
	push eax
	lea ecx,[ebp+0x48]
	push ecx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x44],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],4
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[ebp+0x2C]
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block16

 Block11:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x44]
	mov esi,ecx
	test eax,eax
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	test esi,esi
	je Block16

 Block15:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	mov dword ptr [ebp+0x3C],esi
	call eax
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block16:
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],3
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov esi,8
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp+0x48],si
	jne Block23

 Block21:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x14],si
	jne Block27

 Block25:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov ecx,dword ptr [ebp+0x5C]
	push ebx
	mov dword ptr [ebp+0x44],ebx
	call CUIMacroSys::OnSelected
	mov dword ptr [ebp],1
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block35

 Block29:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4
	jmp Block35

 Block30:
	mov ecx,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	push eax
	push ebx
	call CMacroSysMan::GetMacro
	mov dword ptr [ebp+0x44],eax
	cmp eax,edi
	je Block120

 Block31:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	cmp eax,edi
	je Block120

 Block32:
	mov eax,dword ptr [eax+0x25C]
	cmp eax,edi
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	mov dword ptr [ebp+0x3C],eax
	call edx

 Block34:
	mov dword ptr [ebp],edi

 Block35:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1C]
	push eax
	call esi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	mov edx,3
	mov word ptr [ebp+0x14],dx
	mov dword ptr [ebp+0x1C],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea eax,[ebp-0x1C]
	push eax
	lea edx,[ebp+0x14]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	lea eax,[ebp+0x60]
	push eax
	call IWzGr2D::CreateLayer
	mov edi,8
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x14],di
	jne Block42

 Block40:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x1C],di
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	lea edx,[ebp+0x2C]
	push edx
	call esi
	lea eax,[ebp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	lea ecx,[ebp+4]
	push ecx
	mov byte ptr [ebp-4],0xB
	call esi
	lea edx,[ebp+4]
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
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],0xC
	call esi
	lea ecx,[ebp-0x2C]
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
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],0xD
	call esi
	lea eax,[ebp-0x3C]
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
	lea ecx,[ebp+0x48]
	mov bl,0xE
	push ecx
	mov byte ptr [ebp-4],bl
	call esi
	lea edx,[ebp+0x48]
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
	mov edi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xF
	test edi,edi
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	lea eax,[ebp+0x2C]
	push eax
	lea ecx,[ebp+4]
	push ecx
	lea edx,[ebp-0x2C]
	push edx
	mov edx,dword ptr [ebp+0x3C]
	lea eax,[ebp-0x3C]
	push eax
	lea ecx,[ebp+0x48]
	push ecx
	push edx
	lea eax,[ebp-0x4C]
	push eax
	mov ecx,edi
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x4C],8
	jne Block62

 Block60:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],bl
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0xD
	jne Block74

 Block68:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block70

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block70:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block71:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0xC
	jne Block75

 Block72:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block76

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block74:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x3C]
	push eax
	call ebx
	jmp Block71

 Block75:
	lea edx,[ebp-0x2C]
	push edx
	call ebx

 Block76:
	cmp word ptr [ebp+4],8
	mov byte ptr [ebp-4],0xB
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [ebp+4],ax
	mov eax,dword ptr [ebp+0xC]
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[ebp+4]
	push ecx
	call ebx

 Block80:
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],0xA
	jne Block83

 Block81:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea eax,[ebp+0x2C]
	push eax
	call ebx

 Block84:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0x80FFFFFF
	push edi
	call edx
	test eax,eax
	jge Block86

 Block85:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block86:
	mov ecx,dword ptr [ebp+0x5C]
	lea eax,[ebp+0x58]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],0x10
	mov word ptr [ebp+0x48],cx
	mov dword ptr [ebp+0x50],eax
	test eax,eax
	je Block88

 Block87:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block88:
	mov edx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [edi]
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
	push edi
	mov byte ptr [ebp-4],0x11
	call eax
	test eax,eax
	jge Block90

 Block89:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block90:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x10
	jne Block93

 Block91:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea edx,[ebp+0x48]
	push edx
	call ebx

 Block94:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block96

 Block95:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block96:
	lea eax,[ebp+4]
	push eax
	call esi
	lea ecx,[ebp+4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	lea edx,[ebp+0x2C]
	mov bl,0x12
	push edx
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	mov edi,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x13
	test edi,edi
	jne Block102

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[ebp+0x5C]
	push edx
	push edi
	mov dword ptr [ebp+0x5C],0
	call eax
	test eax,eax
	jge Block104

 Block103:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block104:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x6C]
	mov esi,dword ptr [ebp+0x5C]
	lea edx,[ebp+0x58]
	push edx
	push edi
	mov dword ptr [ebp+0x58],0
	call eax
	test eax,eax
	jge Block106

 Block105:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block106:
	mov eax,dword ptr [ebp+0x7C]
	sub eax,esi
	lea ecx,[ebp+4]
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	add eax,0x10
	lea edx,[ebp+0x2C]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x78]
	sub eax,dword ptr [ebp+0x58]
	sub eax,0x10
	push eax
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x2C],si
	jne Block109

 Block107:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+4],si
	jne Block113

 Block111:
	mov eax,dword ptr [ebp+0xC]
	xor edx,edx
	mov word ptr [ebp+4],dx
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block114:
	push 0x2C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x58],eax
	mov esi,dword ptr [ebp+0x40]
	mov ebx,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x14
	test eax,eax
	je Block116

 Block115:
	mov ecx,dword ptr [ebp+0x24]
	push ecx
	mov ecx,dword ptr [ebp+0x28]
	push ecx
	mov ecx,dword ptr [ebp]
	lea edx,[esi-4]
	neg edx
	sbb edx,edx
	push ecx
	and edx,esi
	push edx
	mov edx,dword ptr [ebp+0x44]
	push edx
	push ebx
	mov ecx,eax
	call CDraggableSkill::_ctor_0
	jmp Block117

 Block116:
	xor eax,eax

 Block117:
	lea ecx,[esi-4]
	neg ecx
	sbb ecx,ecx
	push 0
	and ecx,esi
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov byte ptr [ebp-4],0xA
	call CWndMan::BeginDragDrop
	lea eax,[ebp+0x40]
	push 0x75E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [ebp-4],0x15
	call play_ui_sound
	mov eax,dword ptr [ebp+0x40]
	add esp,4
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block119

 Block118:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block119:
	lea ecx,[esi+0x9C]
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx

 Block120:
	lea esp,[ebp-0x5C]
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
	ret 0x10
}
}
// CUIMacroSys::OnKey
__SUB_CLASS_THIS(0044A010, __thiscall, 55484,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	js Block3

 Block1:
	cmp dword ptr [esp+4],0x1B
	jne Block3

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+4],0x1B
	jmp  CWvsContext::ProcessBasicUIKey

 Block3:
	ret 8
}
}
// get_job_change_level
__SUB(00449C00, __cdecl, 85361,  long, long, short, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov eax,0x10624DD3
	imul esi
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,3
	je Block11

 Block1:
	mov eax,0x51EB851F
	imul esi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x16
	je Block11

 Block2:
	cmp esi,0x7D1
	je Block11

 Block3:
	mov eax,dword ptr [esp+0x10]
	dec eax
	cmp eax,3
	ja Block11

 Block4:
	cmp EAX, 0
je Block5
cmp EAX, 1
je Block8
cmp EAX, 2
je Block9
cmp EAX, 3
je Block10


 Block5:
	test ecx,ecx
	jne Block7

 Block6:
	push esi
	call get_job_category
	add esp,4
	cmp eax,2
	mov eax,8
	je Block12

 Block7:
	mov eax,0xA
	pop esi
	ret

 Block8:
	mov ecx,dword ptr [esp+0xC]
	push ecx
	push esi
	call is_dual_job_born
	add esp,8
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFF6
	add eax,0x1E
	pop esi
	ret

 Block9:
	mov edx,dword ptr [esp+0xC]
	push edx
	push esi
	call is_dual_job_born
	add esp,8
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFF1
	add eax,0x46
	pop esi
	ret

 Block10:
	mov eax,0x78
	pop esi
	ret

 Block11:
	mov eax,ecx
	dec eax
	neg eax
	sbb eax,eax
	and eax,0x50
	add eax,0x78

 Block12:
	pop esi
	ret
}
}
// CUISkill::OnChildNotify
__SUB_CLASS_THIS(00452160, __thiscall, 55548,  CUISkill, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x7D1
	jne Block4

 Block1:
	cmp edx,0x12C
	jb Block7

 Block2:
	cmp edx,0x130
	ja Block7

 Block3:
	call CUISkill::ResetInfo
	ret 0xC

 Block4:
	cmp eax,0x7D0
	jne Block7

 Block5:
	cmp edx,0x1F4
	jne Block7

 Block6:
	mov eax,dword ptr [esp+0xC]
	push eax
	call CUISkill::OnTabChanged
	ret 0xC

 Block7:
	cmp edx,0x64
	jne Block9

 Block8:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block9:
	ret 0xC
}
}
// CUISkill::ResetInfo
__SUB_CLASS_THIS0(004514F0, __thiscall, 55543,  CUISkill, void) {
__asm {

 Block0:
	push esi
	push 1
	mov esi,ecx
	call CUISkill::GetSkillRootVisible
	mov ecx,esi
	call CUISkill::SetTabItems
	mov ecx,esi
	call CUISkill::SetScrollBar
	mov ecx,esi
	call CUISkill::SetButtons
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret
}
}
// CUISkill::~CUISkill
_SUB_EXCEPTION_HANDLER(44E480)
__SUB_CLASS_THIS0(0044E480, __thiscall, 55543,  CUISkill, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44E480
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
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	int 3// TODO: 	mov dword ptr [esi],offset CUISkill::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISkill::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISkill::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xBCC]
	mov dword ptr [esp+0x1C],0x12
	call CLayoutMan::~CLayoutMan
	lea edi,[esi+0xBC4]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],0x11
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CWndSkillGuide>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push 5
	push 8
	lea eax,[esi+0xB9C]
	push eax
	mov byte ptr [esp+0x2C],0x10
	call __eh_vector_dtor_iterator
	lea edi,[esi+0xB8C]
	mov byte ptr [esp+0x1C],0xF
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CUIMacroSys>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 3
	push 4
	lea ecx,[esi+0xB7C]
	push ecx
	mov byte ptr [esp+0x2C],0xE
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0xB70]
	mov byte ptr [esp+0x1C],0xD
	cmp eax,ebx
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block6:
	mov eax,dword ptr [esi+0xB6C]
	mov byte ptr [esp+0x1C],0xC
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0xB68]
	mov byte ptr [esp+0x1C],0xB
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0xB64]
	mov byte ptr [esp+0x1C],0xA
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0xB60]
	mov byte ptr [esp+0x1C],9
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0xB5C]
	mov byte ptr [esp+0x1C],8
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 2
	push 4
	lea eax,[esi+0xB54]
	push eax
	mov byte ptr [esp+0x2C],7
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0xB44]
	mov byte ptr [esp+0x1C],6
	call SKILLROOT::~SKILLROOT
	lea edi,[esi+0xB3C]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 4
	push 8
	lea ecx,[esi+0xB1C]
	push ecx
	mov byte ptr [esp+0x2C],4
	call __eh_vector_dtor_iterator
	lea edi,[esi+0xB14]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block20

 Block19:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block20:
	lea edi,[esi+0xB0C]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block22

 Block21:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlTab>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block22:
	lea ecx,[esi+0xB08]
	mov byte ptr [esp+0x1C],1
	call ZArray<long>::RemoveAll
	mov ecx,esi
	mov dword ptr [TSingleton<CUISkill>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CUIWnd::~CUIWnd
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
// CUISkill::GetRTTI
__SUB_CLASS_THIS0(0044E6A0, __thiscall, 55568,  CUISkill, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUISkill::ms_RTTI_CUISkill
	ret
}
}
// CUISkill::IsMyAddon
__SUB_CLASS_THIS(0044E6C0, __thiscall, 55551,  CUISkill, int32_t, CWnd*) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUIMacroSys>::ms_pInstance]
	test eax,eax
	je Block3

 Block1:
	cmp eax,dword ptr [esp+4]
	jne Block3

 Block2:
	mov eax,1
	ret 4

 Block3:
	xor eax,eax
	ret 4
}
}
// CUIMacroSys::HitTest
__SUB_CLASS_THIS(00449D60, __thiscall, 55486,  CUIMacroSys, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esi+4]
	call edx
	test eax,eax
	jne Block2

 Block1:
	pop esi
	ret 0xC

 Block2:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+8]
	push eax
	push ecx
	push edx
	mov ecx,esi
	call CWnd::HitTest
	pop esi
	ret 0xC
}
}
// CUISkill::OnButtonClicked
__SUB_CLASS_THIS(00451480, __thiscall, 55549,  CUISkill, void, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	lea eax,[esi-0x7DA]
	push edi
	mov edi,ecx
	cmp eax,3
	ja Block2

 Block1:
	add esi,0xFFFFF826
	push esi
	call CUISkill::OnSkillLevelUpButton
	pop edi
	pop esi
	ret 4

 Block2:
	cmp esi,0x7E7
	jne Block4

 Block3:
	call CUISkill::ShiftMacroUIState
	push esi
	mov ecx,edi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block4:
	lea ecx,[esi-0xBB9]
	cmp ecx,3
	ja Block6

 Block5:
	lea edx,[esi-0xBB8]
	push edx
	mov ecx,edi
	call CUISkill::OpenSkillGuide

 Block6:
	push esi
	mov ecx,edi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4
}
}
// CWndSkillGuide::OnKey
__SUB_CLASS_THIS(0044A630, __thiscall, 55522,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	test dword ptr [esp+8],0x80000000
	jne Block4

 Block1:
	cmp dword ptr [esp+4],0x1B
	jne Block4

 Block2:
	mov ecx,dword ptr [TSingleton<CUISkill>::ms_pInstance]
	test ecx,ecx
	je Block4

 Block3:
	call CUISkill::CloseSkillGuide

 Block4:
	ret 8
}
}
// CUISkill::OnMoveWnd
__SUB_CLASS_THIS(0044A350, __thiscall, 55545,  CUISkill, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::OnMoveWnd
	mov edi,dword ptr [esi+0xB90]
	test edi,edi
	je Block2

 Block1:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	add esi,4
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,0xAE
	push eax
	mov ecx,edi
	call CWnd::MoveWnd

 Block2:
	pop edi
	pop esi
	ret 8
}
}
// CUISkill::CanSkillUpDualJob
__SUB_CLASS_THIS(0044AE10, __thiscall, 55560,  CUISkill, int32_t, const SKILLENTRY*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub esp,0x1C
	push ebx
	mov ebx,ecx
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*4]
	add edx,edx
	push esi
	push edi
	mov edi,ecx
	sub edi,edx
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	mov edx,ecx
	sub edx,eax
	je Block18

 Block1:
	cmp ecx,0x7D1
	je Block18

 Block2:
	xor esi,esi
	cmp edi,esi
	je Block18

 Block3:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebp
	lea eax,[esp+0x24]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x20],ebp
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov dword ptr [esp+0x10],esi
	mov dword ptr [esp+0x30],esi
	test edi,edi
	jle Block9

 Block4:
	lea ecx,[ecx]

 Block5:
	cmp esi,2
	je Block7

 Block6:
	push esi
	mov ecx,ebx
	call CUISkill::GetMySkillDegreeSPDualJob
	mov ebp,eax
	xor eax,eax
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x1C],eax
	push edx
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov ecx,ebx
	call CUISkill::GetMaxSkillDegreeSPDualJob
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x1C]
	add dword ptr [esp+0x10],ebp
	mov ebp,dword ptr [esp+0x20]
	add edx,ecx
	add dword ptr [esp+0x30],edx

 Block7:
	inc esi
	cmp esi,edi
	jl Block5

 Block8:
	mov eax,dword ptr [esp+0x30]
	cmp dword ptr [esp+0x10],eax
	jl Block16

 Block9:
	push edi
	mov ecx,ebx
	call CUISkill::GetMySkillDegreeSPDualJob
	mov esi,eax
	xor eax,eax
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x34],eax
	push edx
	lea eax,[esp+0x28]
	push eax
	push edi
	mov ecx,ebx
	call CUISkill::GetMaxSkillDegreeSPDualJob
	dec edi
	cmp edi,3
	ja Block17

 Block10:
	cmp EDI, 0
je Block11
cmp EDI, 1
je Block12
cmp EDI, 2
je Block12
cmp EDI, 3
je Block13


 Block11:
	mov ecx,dword ptr [ebp+0x35]
	push ecx
	add ebp,0x33
	push ebp
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov edx,dword ptr [esp+0x38]
	movzx eax,al
	sub eax,0x1E
	lea ecx,[edx+eax*2]
	add ecx,eax
	add ecx,dword ptr [esp+0x18]
	add esp,8
	cmp esi,ecx
	jmp Block15

 Block12:
	mov edx,dword ptr [ebp+0x35]
	push edx
	add ebp,0x33
	push ebp
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx eax,al
	add esp,8
	sub eax,0x37
	jmp Block14

 Block13:
	mov eax,dword ptr [ebp+0x35]
	push eax
	add ebp,0x33
	push ebp
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx eax,al
	add esp,8
	sub eax,0x78

 Block14:
	mov ecx,dword ptr [esp+0x30]
	lea edx,[ecx+eax*2]
	add edx,eax
	add edx,dword ptr [esp+0x10]
	cmp esi,edx

 Block15:
	jl Block17

 Block16:
	pop ebp
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x1C
	ret 4

 Block17:
	pop ebp
	pop edi
	pop esi
	mov eax,1
	pop ebx
	add esp,0x1C
	ret 4

 Block18:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CUIMacroSys::CUIMacroSys
_SUB_EXCEPTION_HANDLER(44C0D0)
__SUB_CLASS_THIS(0044C0D0, __thiscall, 55476,  CUIMacroSys, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44C0D0
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
	call CWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CUIMacroSys>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIMacroSys>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIMacroSys::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMacroSys::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMacroSys::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	lea ecx,[esi+0xA0]
	mov byte ptr [esp+0x18],5
	call CUIToolTip::_ctor_default
	mov eax,1
	mov dword ptr [esi+0xAF0],eax
	mov dword ptr [esi+0xAF4],eax
	mov dword ptr [esi+0xAF8],edi
	mov dword ptr [esi+0xAFC],edi
	mov dword ptr [esi+0xB00],edi
	mov dword ptr [esi+0xB04],edi
	mov dword ptr [esi+0xB08],edi
	mov edx,dword ptr [esp+0x24]
	push edi
	push eax
	push edi
	push eax
	mov eax,dword ptr [esp+0x30]
	push 0xA
	push 0x119
	push 0xC3
	push edx
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x3C],7
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 8
}
}
// CUISkill::SetSkillRootList
__SUB_CLASS_THIS0(0044BFE0, __thiscall, 55543,  CUISkill, void) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	push esi
	push edi
	lea eax,[esp+0x10]
	mov ebp,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block5

 Block1:
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
	mov dword ptr [esp+0x14],0

 Block5:
	lea edi,[ebp+0xB08]
	mov ecx,edi
	call ZArray<long>::RemoveAll
	mov ecx,dword ptr [esi+0x3D]
	push edi
	push ecx
	lea ebx,[esi+0x39]
	push ebx
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	add esp,8
	push edx
	call get_skill_root_from_job
	mov eax,dword ptr [esi+0x3D]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,0x10
	cmp eax,0x16
	je Block7

 Block6:
	cmp ecx,0x7D1
	jne Block8

 Block7:
	push 0
	mov ecx,edi
	mov esi,0x7D1
	call ZArray<long>::InsertBefore
	pop edi
	mov dword ptr [eax],esi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret

 Block8:
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov esi,ecx
	push 0
	imul esi,0x3E8
	mov ecx,edi
	call ZArray<long>::InsertBefore
	pop edi
	mov dword ptr [eax],esi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret
}
}
// CUISkill::SetScrollBar
__SUB_CLASS_THIS0(0044B1C0, __thiscall, 55543,  CUISkill, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB10]
	cmp dword ptr [eax+0x50],0
	push 0
	je Block6

 Block1:
	call CUISkill::GetSkillRootVisible
	test eax,eax
	je Block5

 Block2:
	mov eax,dword ptr [eax+8]
	test eax,eax
	jne Block4

 Block3:
	mov ecx,dword ptr [esi+0xB18]
	mov eax,0xFFFFFFFD
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block4:
	mov eax,dword ptr [eax-4]
	mov ecx,dword ptr [esi+0xB18]
	add eax,0xFFFFFFFD
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block5:
	xor eax,eax
	push eax

 Block6:
	mov ecx,dword ptr [esi+0xB18]
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret
}
}
// CUISkill::OnCreate
_SUB_EXCEPTION_HANDLER(451520)
__SUB_CLASS_THIS(00451520, __thiscall, 55544,  CUISkill, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_451520
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x6C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	push ebp
	push ebp
	lea ecx,[esi+0xBCC]
	push esi
	call CLayoutMan::Init
	push 1
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	push 0x48
	push offset _S_UIUIWINDOW2IMGSK__32
	push ebp
	push 0x24
	mov ecx,edi
	mov dword ptr [edi],ebp
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x24
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov eax,dword ptr [esp+0x84]
	push eax
	mov ecx,esi
	call CUIWnd::OnCreate_1
	push 0xB0C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x7C],ebx
	mov dword ptr [esp+0x74],ebp
	cmp ebx,ebp
	je Block2

 Block1:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	add eax,0xAE
	push eax
	mov ecx,ebx
	call CUIMacroSys::_ctor_0
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x74],ebx
	cmp eax,ebp
	je Block13

 Block4:
	add eax,8
	cmp eax,ebp
	je Block13

 Block5:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block7

 Block6:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0xB90]
	mov dword ptr [esi+0xB90],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block9

 Block8:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CUIMacroSys>::_ReleaseRaw

 Block9:
	cmp dword ptr [esi+0xB88],ebp
	jne Block11

 Block10:
	mov ecx,dword ptr [esi+0xB90]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x24]
	add ecx,4
	push ebp
	call eax
	mov ecx,dword ptr [esi+0xB90]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push ebp
	call eax

 Block11:
	mov ecx,dword ptr [esi+0xB90]
	call CUIMacroSys::ResetInfo
	mov edi,1
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esi+0xB74],ebx
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x2C],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x7C],eax
	mov dword ptr [esp+0x74],edi
	cmp eax,ebp
	je Block14

 Block12:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block15

 Block13:
	xor edi,edi
	jmp Block7

 Block14:
	xor eax,eax

 Block15:
	mov dword ptr [esp+0x74],ebx
	cmp eax,ebp
	je Block23

 Block16:
	add eax,8
	cmp eax,ebp
	je Block23

 Block17:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block19

 Block18:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block19:
	mov eax,dword ptr [esi+0xB10]
	mov dword ptr [esi+0xB10],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block21

 Block20:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block21:
	mov ecx,dword ptr [esi+0xB10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x24]
	push eax
	push 0x14
	push 0x9A
	push 0x1B
	push 0xA
	push 8
	push 0x7D0
	push esi
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x7C],eax
	mov dword ptr [esp+0x74],2
	cmp eax,ebp
	je Block24

 Block22:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block25

 Block23:
	xor edi,edi
	jmp Block19

 Block24:
	xor eax,eax

 Block25:
	mov dword ptr [esp+0x74],ebx
	cmp eax,ebp
	je Block35

 Block26:
	add eax,8
	cmp eax,ebp
	je Block35

 Block27:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block29

 Block28:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block29:
	mov eax,dword ptr [esi+0xB18]
	mov dword ptr [esi+0xB18],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block31

 Block30:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block31:
	mov ecx,dword ptr [esi+0xB18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebp
	push 0x9B
	push 0x5D
	push 0x99
	push 8
	push 1
	push 0x7D1
	push esi
	call eax
	mov eax,dword ptr [esi+0xB18]
	mov dword ptr [eax+0x34],0x92
	mov dword ptr [esp+0x58],ebp
	mov dword ptr [esp+0x50],ebp
	mov dword ptr [esp+0x54],ebp
	push offset _S_UIUIWINDOW2IMGSK__31
	lea ecx,[esp+0x5C]
	mov dword ptr [esp+0x78],3
	mov dword ptr [esp+0x50],ebp
	call ZXString16::AssignCStr
	mov dword ptr [esp+0x7C],ebp
	mov ebp,0x71
	lea edi,[esi+0xB20]
	jmp Block33

 Block33:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x74],4
	test eax,eax
	je Block36

 Block34:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block37

 Block35:
	xor edi,edi
	jmp Block29

 Block36:
	xor eax,eax

 Block37:
	mov byte ptr [esp+0x74],3
	test eax,eax
	je Block52

 Block38:
	add eax,8
	je Block52

 Block39:
	lea ebx,[eax-8]
	test ebx,ebx
	je Block41

 Block40:
	lea ecx,[ebx+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block41:
	mov eax,dword ptr [edi]
	mov dword ptr [edi],ebx
	test eax,eax
	je Block45

 Block42:
	lea ebx,[eax+8]
	lea edx,[ebx+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block45

 Block43:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block45

 Block44:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block45:
	mov ebx,dword ptr [esp+0x7C]
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x4C]
	push eax
	push 1
	push ebp
	push 0x87
	lea eax,[ebx+0x7DA]
	push eax
	push esi
	call edx
	inc ebx
	add ebp,0x28
	add edi,8
	cmp ebp,0x111
	mov dword ptr [esp+0x7C],ebx
	jl Block33

 Block46:
	push 0
	push 0
	push 0
	push 0x7E7
	push offset _S_UIUIWINDOW2IMGSK__30
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esi+0xBCC]
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x74],5
	test eax,eax
	je Block48

 Block47:
	add eax,0xC
	push eax
	call ebp

 Block48:
	mov eax,dword ptr [esi+0xB40]
	test eax,eax
	je Block58

 Block49:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block57

 Block50:
	mov eax,dword ptr [esi+0xB40]
	test eax,eax
	je Block53

 Block51:
	add eax,8
	jmp Block54

 Block52:
	xor ebx,ebx
	jmp Block41

 Block53:
	xor eax,eax

 Block54:
	add eax,4
	push eax
	call ebp
	mov eax,dword ptr [esi+0xB40]
	test eax,eax
	je Block57

 Block55:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block57

 Block56:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block57:
	mov dword ptr [esi+0xB40],0

 Block58:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [edi+4]
	mov dword ptr [esi+0xB40],ecx
	mov byte ptr [esp+0x74],3
	test eax,eax
	je Block66

 Block59:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block66

 Block60:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block62

 Block61:
	add eax,8
	jmp Block63

 Block62:
	xor eax,eax

 Block63:
	add eax,4
	push eax
	call ebp
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block66

 Block64:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block66

 Block65:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block66:
	lea ecx,[esp+0x7C]
	push 0x1106
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB40]
	push 1
	push 1
	push eax
	mov byte ptr [esp+0x80],6
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],3
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	call ebx
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0x78],7
	call ebx
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	push 0
	push 0
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	push ecx
	mov dword ptr [esp+0x90],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGSK__29
	mov byte ptr [esp+0x8C],8
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x88],9
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x88],8
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x7C],0xA
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block80

 Block75:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x7C]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	mov eax,dword ptr [esi+0xB54]
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x7C]
	mov ebp,ecx
	test eax,eax
	je Block77

 Block76:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block77:
	mov dword ptr [esi+0xB54],ebp
	test edi,edi
	jge Block82

 Block78:
	cmp edi,0x80004002
	je Block82

 Block79:
	push edi
	call _com_issue_error

 Block80:
	mov eax,dword ptr [esi+0xB54]
	test eax,eax
	je Block82

 Block81:
	mov dword ptr [esi+0xB54],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block82:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0x74],8
	cmp word ptr [esp+0x3C],bp
	jne Block85

 Block83:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea ecx,[esp+0x3C]
	push ecx
	call edi

 Block86:
	mov byte ptr [esp+0x74],7
	cmp word ptr [esp+0x14],bp
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea eax,[esp+0x14]
	push eax
	call edi

 Block90:
	mov byte ptr [esp+0x74],3
	cmp word ptr [esp+0x2C],bp
	jne Block93

 Block91:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block94:
	lea eax,[esp+0x14]
	push eax
	call ebx
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x78],0xB
	call ebx
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	push 0
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov dword ptr [esp+0x90],esp
	mov ecx,esp
	mov bl,0xC
	push offset _S_UIUIWINDOW2IMGSK__28
	mov byte ptr [esp+0x8C],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x88],0xD
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x88],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x7C],0xE
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block106

 Block101:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x7C]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	mov eax,dword ptr [esi+0xB58]
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x7C]
	mov ebp,ecx
	test eax,eax
	je Block103

 Block102:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block103:
	mov dword ptr [esi+0xB58],ebp
	test edi,edi
	jge Block108

 Block104:
	cmp edi,0x80004002
	je Block108

 Block105:
	push edi
	call _com_issue_error

 Block106:
	mov eax,dword ptr [esi+0xB58]
	test eax,eax
	je Block108

 Block107:
	mov dword ptr [esi+0xB58],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block108:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x74],bl
	jne Block111

 Block109:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	mov edi,8
	mov byte ptr [esp+0x74],0xB
	cmp word ptr [esp+0x2C],di
	jne Block115

 Block113:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov byte ptr [esp+0x74],3
	cmp word ptr [esp+0x14],di
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push eax
	call edi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block122

 Block121:
	push eax
	call _com_issue_error

 Block122:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x78],0xF
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block124

 Block123:
	push eax
	call _com_issue_error

 Block124:
	push 0
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov dword ptr [esp+0x90],esp
	mov ecx,esp
	mov bl,0x10
	push offset _S_UIUIWINDOW2IMGSK__27
	mov byte ptr [esp+0x8C],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x88],0x11
	jne Block126

 Block125:
	push 0x80004003
	call _com_issue_error

 Block126:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x88],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x7C],0x12
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block132

 Block127:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x7C]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	mov eax,dword ptr [esi+0xB5C]
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x7C]
	mov ebp,ecx
	test eax,eax
	je Block129

 Block128:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block129:
	mov dword ptr [esi+0xB5C],ebp
	test edi,edi
	jge Block134

 Block130:
	cmp edi,0x80004002
	je Block134

 Block131:
	push edi
	call _com_issue_error

 Block132:
	mov eax,dword ptr [esi+0xB5C]
	test eax,eax
	je Block134

 Block133:
	mov dword ptr [esi+0xB5C],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block134:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x74],bl
	jne Block137

 Block135:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block138:
	mov edi,8
	mov byte ptr [esp+0x74],0xF
	cmp word ptr [esp+0x2C],di
	jne Block141

 Block139:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block142:
	mov byte ptr [esp+0x74],3
	cmp word ptr [esp+0x14],di
	jne Block145

 Block143:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block146:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block148

 Block147:
	push eax
	call _com_issue_error

 Block148:
	lea edx,[esp+0x2C]
	mov bl,0x13
	push edx
	mov byte ptr [esp+0x78],bl
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block150

 Block149:
	push eax
	call _com_issue_error

 Block150:
	push 0
	push 0
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov dword ptr [esp+0x90],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGSK__26
	mov byte ptr [esp+0x8C],0x14
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x88],0x15
	jne Block152

 Block151:
	push 0x80004003
	call _com_issue_error

 Block152:
	lea eax,[esp+0x70]
	mov byte ptr [esp+0x88],0x14
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x7C],0x16
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block158

 Block153:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x7C]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	mov eax,dword ptr [esi+0xB60]
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x7C]
	mov ebp,ecx
	test eax,eax
	je Block155

 Block154:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block155:
	mov dword ptr [esi+0xB60],ebp
	test edi,edi
	jge Block160

 Block156:
	cmp edi,0x80004002
	je Block160

 Block157:
	push edi
	call _com_issue_error

 Block158:
	mov eax,dword ptr [esi+0xB60]
	test eax,eax
	je Block160

 Block159:
	mov dword ptr [esi+0xB60],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block160:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x74],0x14
	jne Block163

 Block161:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block164

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block163:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block164:
	mov edi,8
	mov byte ptr [esp+0x74],bl
	cmp word ptr [esp+0x2C],di
	jne Block167

 Block165:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block168

 Block166:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block168

 Block167:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block168:
	mov byte ptr [esp+0x74],3
	cmp word ptr [esp+0x3C],di
	jne Block171

 Block169:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block172

 Block170:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block172

 Block171:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block172:
	mov eax,dword ptr [esi+0xAFC]
	mov ecx,dword ptr [esi+0xB10]
	push eax
	call CCtrlTab::SetTab
	mov ecx,esi
	call CUISkill::SetSkillRootList
	mov ecx,esi
	call CUISkill::ResetInfo
	cmp dword ptr [esi+0xB94],1
	jne Block176

 Block173:
	mov eax,dword ptr [esi+0xB08]
	test eax,eax
	je Block175

 Block174:
	mov eax,dword ptr [eax-4]

 Block175:
	mov ecx,dword ptr [esi+0xB10]
	dec eax
	push eax
	call CCtrlTab::SetTab

 Block176:
	cmp dword ptr [esi+0xB78],0
	je Block178

 Block177:
	mov ecx,esi
	call CUISkill::CreateTip

 Block178:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],esi
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	test eax,eax
	je Block180

 Block179:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block180:
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret 4
}
}
// CUISkill::SetButtons
__SUB_CLASS_THIS0(0044B220, __thiscall, 55543,  CUISkill, void) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xB10]
	cmp dword ptr [eax+0x50],0
	push esi
	jne Block4

 Block1:
	xor esi,esi

 Block2:
	push 0
	push 0
	push esi
	mov ecx,ebx
	call CUISkill::SetButton
	inc esi
	cmp esi,4
	jl Block2

 Block3:
	pop esi
	pop ebx
	add esp,0x10
	ret

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebp
	push edi
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x20],ecx
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block9

 Block5:
	lea esi,[eax-0x10]
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block8

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block8:
	mov dword ptr [esp+0x18],0

 Block9:
	mov eax,dword ptr [ebx+0xB10]
	mov esi,dword ptr [eax+0x44]
	test esi,esi
	jne Block11

 Block10:
	push edi
	call get_novice_skill_point
	add esp,4
	jmp Block14

 Block11:
	mov ecx,dword ptr [edi+0x3D]
	push ecx
	lea edx,[edi+0x39]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	cwde
	push eax
	call is_extendsp_job
	add esp,0xC
	test eax,eax
	je Block13

 Block12:
	push esi
	lea ecx,[edi+0xCD]
	call ExtendSP::Get
	movzx ecx,al
	mov dword ptr [esp+0x10],ecx
	jmp Block15

 Block13:
	mov edx,dword ptr [edi+0x9D]
	push edx
	add edi,0x99
	push edi
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	cwde

 Block14:
	mov dword ptr [esp+0x10],eax

 Block15:
	push 0
	mov ecx,ebx
	call CUISkill::GetSkillRootVisible
	mov ecx,dword ptr [ebx+0xB18]
	mov ecx,dword ptr [ecx+0x38]
	mov ebp,eax
	mov dword ptr [esp+0x14],ecx
	xor esi,esi
	lea edi,[ecx*8]
	jmp Block17

 Block16:
	mov ecx,dword ptr [esp+0x14]

 Block17:
	test ebp,ebp
	je Block26

 Block18:
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block26

 Block19:
	mov eax,dword ptr [eax-4]
	lea edx,[esi+ecx]
	cmp edx,eax
	jae Block26

 Block20:
	mov eax,dword ptr [ebp+8]
	mov eax,dword ptr [eax+edi+4]
	cmp dword ptr [eax+0x38],0
	je Block22

 Block21:
	push 0
	push 1
	jmp Block27

 Block22:
	cmp dword ptr [esp+0x10],0
	jle Block25

 Block23:
	mov ecx,dword ptr [esp+0x1C]
	push eax
	call CWvsContext::GetSkillLevelUpState
	cmp eax,1
	jne Block25

 Block24:
	push eax
	push eax
	jmp Block27

 Block25:
	xor eax,eax
	push eax
	push 1
	jmp Block27

 Block26:
	push 0
	push 0

 Block27:
	push esi
	mov ecx,ebx
	call CUISkill::SetButton
	inc esi
	add edi,8
	cmp esi,4
	jl Block16

 Block28:
	pop edi
	pop ebp
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// CUISkill::OnMouseButton
_SUB_EXCEPTION_HANDLER(44B710)
__SUB_CLASS_THIS(0044B710, __thiscall, 55547,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44B710
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x9C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB0]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x38],ebp
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x48]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block5

 Block1:
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
	mov dword ptr [esp+0x4C],0

 Block5:
	mov eax,dword ptr [esp+0xC0]
	cmp eax,0x201
	jne Block99

 Block6:
	mov ecx,dword ptr [esp+0xCC]
	mov edx,dword ptr [esp+0xC8]
	push 1
	push ecx
	add ebp,0xFFFFFFFC
	push edx
	mov ecx,ebp
	call CUISkill::GetSkillIndexFromPoint
	mov esi,eax
	xor edi,edi
	cmp esi,edi
	jl Block107

 Block7:
	push edi
	mov ecx,ebp
	call CUISkill::GetSkillRootVisible
	mov eax,dword ptr [eax+8]
	mov esi,dword ptr [eax+esi*8+4]
	mov dword ptr [esp+0x3C],esi
	mov esi,dword ptr [esi]
	mov eax,0x10624DD3
	imul esi
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cdq
	mov ecx,0xA
	idiv ecx
	cmp edx,edi
	je Block107

 Block8:
	cmp edx,9
	je Block107

 Block9:
	push esi
	call is_nonslot_skill
	add esp,4
	test eax,eax
	jne Block107

 Block10:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	lea edx,[esp+0x3C]
	push edx
	push esi
	push ebx
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block107

 Block11:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x70]
	push eax
	call esi
	lea ecx,[esp+0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov edx,3
	mov dword ptr [esp+0xB8],edi
	mov word ptr [esp+0x50],dx
	mov dword ptr [esp+0x58],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xB8],1
	cmp ecx,edi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea eax,[esp+0x70]
	push eax
	lea edx,[esp+0x54]
	push edx
	push edi
	push edi
	push edi
	push edi
	push edi
	lea eax,[esp+0x64]
	push eax
	call IWzGr2D::CreateLayer
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0xB8],3
	cmp word ptr [esp+0x50],bx
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x50]
	push edx
	call edi

 Block19:
	mov byte ptr [esp+0xB8],4
	cmp word ptr [esp+0x70],bx
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x70]
	push ecx
	call edi

 Block23:
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [edx+0x25C]
	mov dword ptr [esp+0x44],eax
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea eax,[esp+0x80]
	push eax
	mov byte ptr [esp+0xBC],5
	call esi
	lea ecx,[esp+0x80]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0xBC],6
	call esi
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	lea ecx,[esp+0x90]
	mov bl,7
	push ecx
	mov byte ptr [esp+0xBC],bl
	call esi
	lea edx,[esp+0x90]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0xBC],8
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0xBC],9
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov edi,dword ptr [esp+0x48]
	mov byte ptr [esp+0xB8],0xA
	test edi,edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea ecx,[esp+0x80]
	push ecx
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x98]
	push eax
	mov eax,dword ptr [esp+0x50]
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push eax
	lea ecx,[esp+0xB8]
	push ecx
	mov ecx,edi
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0xA0],8
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0xA8]
	xor edx,edx
	mov word ptr [esp+0xA0],dx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[esp+0xA0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block41:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xB8],9
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xB8],8
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	cmp word ptr [esp+0x90],8
	mov byte ptr [esp+0xB8],bl
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x98]
	xor edx,edx
	mov word ptr [esp+0x90],dx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea eax,[esp+0x90]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov ebx,8
	mov byte ptr [esp+0xB8],6
	cmp word ptr [esp+0x60],bx
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[esp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov byte ptr [esp+0xB8],5
	cmp word ptr [esp+0x80],bx
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0x80FFFFFF
	push edi
	call eax
	test eax,eax
	jge Block63

 Block62:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block63:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0xB
	mov edx,0xD
	mov byte ptr [esp+0xB8],bl
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block65:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [edi]
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
	push edi
	mov byte ptr [esp+0xCC],0xC
	call eax
	xor ebp,ebp
	cmp eax,ebp
	jge Block67

 Block66:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block67:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xB8],bl
	jne Block70

 Block68:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB8],5
	cmp eax,ebp
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0xBC],0xD
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	mov ebx,dword ptr [esp+0x44]
	mov byte ptr [esp+0xB8],0xE
	cmp ebx,ebp
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[esp+0x40]
	push edx
	push ebx
	mov dword ptr [esp+0x48],ebp
	call eax
	cmp eax,ebp
	jge Block81

 Block80:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block81:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x6C]
	mov esi,dword ptr [esp+0x40]
	lea edx,[esp+0x14]
	push edx
	push ebx
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block83

 Block82:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block83:
	mov edx,dword ptr [esp+0x28]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0xEC]
	sub eax,esi
	add eax,0x10
	push eax
	mov eax,dword ptr [esp+0xEC]
	sub eax,dword ptr [esp+0x38]
	sub eax,0x10
	push eax
	mov eax,dword ptr [ecx+0x90]
	push edi
	call eax
	cmp eax,ebp
	jge Block85

 Block84:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block85:
	mov esi,8
	mov byte ptr [esp+0xB8],0xD
	cmp word ptr [esp+0x18],si
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	mov byte ptr [esp+0xB8],5
	cmp word ptr [esp+0x28],si
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	push 0x2C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov esi,dword ptr [esp+0x38]
	mov byte ptr [esp+0xB8],0xF
	cmp eax,ebp
	je Block95

 Block94:
	push 0xFFFFFFFF
	lea edx,[esi-4]
	neg edx
	push 0xFFFFFFFF
	sbb edx,edx
	push ebp
	and edx,esi
	push edx
	mov edx,dword ptr [esp+0x4C]
	mov ecx,dword ptr [edx]
	push ecx
	push edi
	mov ecx,eax
	call CDraggableSkill::_ctor_0
	jmp Block96

 Block95:
	xor eax,eax

 Block96:
	lea ecx,[esi-4]
	neg ecx
	sbb ecx,ecx
	push ebp
	and ecx,esi
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov byte ptr [esp+0xC4],5
	call CWndMan::BeginDragDrop
	lea edx,[esp+0x14]
	push 0x75E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0xBC],0x10
	call play_ui_sound
	mov eax,dword ptr [esp+0x18]
	add esp,4
	mov byte ptr [esp+0xB8],5
	cmp eax,ebp
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block98:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [esp+0xBC],4
	call ecx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	call eax
	jmp Block107

 Block99:
	cmp eax,0x203
	jne Block107

 Block100:
	mov ecx,dword ptr [esp+0xCC]
	mov edx,dword ptr [esp+0xC8]
	push 0
	push ecx
	lea edi,[ebp-4]
	push edx
	mov ecx,edi
	call CUISkill::GetSkillIndexFromPoint
	mov esi,eax
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block107

 Block101:
	mov ebx,eax
	test esi,esi
	jl Block107

 Block102:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	jne Block107

 Block103:
	push 0
	mov ecx,edi
	call CUISkill::GetSkillRootVisible
	mov eax,dword ptr [eax+8]
	mov ecx,dword ptr [eax+esi*8+4]
	mov esi,dword ptr [ecx]
	push esi
	call is_keydown_skill
	add esp,4
	test eax,eax
	jne Block107

 Block104:
	push esi
	call is_command_skill
	add esp,4
	test eax,eax
	jne Block107

 Block105:
	push esi
	call is_active_skill
	add esp,4
	test eax,eax
	je Block107

 Block106:
	push 0
	push 0
	push esi
	mov ecx,ebx
	call CUserLocal::DoActiveSkill

 Block107:
	mov ecx,dword ptr [esp+0xB0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA8
	ret 0x10
}
}
// CUISkill::SetTabItems
_SUB_EXCEPTION_HANDLER(450990)
__SUB_CLASS_THIS0(00450990, __thiscall, 55543,  CUISkill, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_450990
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
	mov dword ptr [ebp-0x64],ecx
	mov ecx,dword ptr [ecx+0xB10]
	call CCtrlTab::RemoveAllItems
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x60]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0x5C]
	xor ebx,ebx
	cmp eax,ebx
	je Block5

 Block1:
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
	mov dword ptr [ebp-0x5C],0
	xor ebx,ebx

 Block5:
	mov dword ptr [ebp-0x50],ebx
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x58],ebx
	mov ecx,dword ptr [esi+0x3D]
	push ecx
	lea edi,[esi+0x39]
	push edi
	mov byte ptr [ebp-4],1
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add esp,8
	add eax,edx
	jne Block7

 Block6:
	cmp word ptr [esi+0xF7],1
	je Block49

 Block7:
	mov ecx,dword ptr [esi+0x3D]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,0x2B
	je Block49

 Block8:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x34]
	push ecx
	call esi
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],0xA
	call esi
	lea ecx,[ebp-0x24]
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
	push 0
	push 0
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x24]
	push eax
	push ecx
	mov dword ptr [ebp-0x5C],esp
	mov ecx,esp
	mov bl,0xB
	push offset _S_UIUIWINDOW2IMGSK__25
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xC
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea ecx,[ebp-0x48]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x50]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block17

 Block15:
	cmp eax,0x80004002
	je Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x48],di
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x24],di
	jne Block24

 Block22:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x34],di
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	lea edx,[ebp-0x24]
	push edx
	call esi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	lea ecx,[ebp-0x34]
	push ecx
	mov byte ptr [ebp-4],0xE
	call esi
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	push 0
	push 0
	lea eax,[ebp-0x24]
	push eax
	lea ecx,[ebp-0x34]
	push ecx
	push ecx
	mov dword ptr [ebp-0x5C],esp
	mov ecx,esp
	mov bl,0xF
	push offset _S_UIUIWINDOW2IMGSK__24
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x10
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea edx,[ebp-0x48]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x58]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block38

 Block36:
	cmp eax,0x80004002
	je Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x48],di
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp-0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x34],di
	jne Block45

 Block43:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block48

 Block47:
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	jmp Block89

 Block48:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block92

 Block49:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x24]
	push eax
	call esi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],2
	call esi
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	push 0
	push 0
	lea ecx,[ebp-0x24]
	push ecx
	lea edx,[ebp-0x34]
	push edx
	push ecx
	mov dword ptr [ebp-0x5C],esp
	mov ecx,esp
	mov bl,3
	push offset _S_UIUIWINDOW2IMGSK__23
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],4
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	lea eax,[ebp-0x48]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x50]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block58

 Block56:
	cmp eax,0x80004002
	je Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	cmp word ptr [ebp-0x48],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],bl
	jne Block61

 Block59:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[ebp-0x48]
	push edx
	call edi

 Block62:
	mov ebx,8
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x34],bx
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[ebp-0x34]
	push ecx
	call edi

 Block66:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],bx
	jne Block69

 Block67:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea eax,[ebp-0x24]
	push eax
	call edi

 Block70:
	lea ecx,[ebp-0x24]
	push ecx
	call esi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],6
	call esi
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	push 0
	push 0
	lea edx,[ebp-0x24]
	push edx
	lea eax,[ebp-0x34]
	push eax
	push ecx
	mov dword ptr [ebp-0x5C],esp
	mov ecx,esp
	mov bl,7
	push offset _S_UIUIWINDOW2IMGSK__22
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],8
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea ecx,[ebp-0x48]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x58]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block79

 Block77:
	cmp eax,0x80004002
	je Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x48],si
	jne Block82

 Block80:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[ebp-0x48]
	push eax
	call edi

 Block83:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x34],si
	jne Block86

 Block84:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea edx,[ebp-0x34]
	push edx
	call edi

 Block87:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],si
	jne Block91

 Block88:
	xor eax,eax
	mov word ptr [ebp-0x24],ax

 Block89:
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea ecx,[ebp-0x24]
	push ecx
	call edi

 Block92:
	mov esi,dword ptr [ebp-0x58]
	xor ebx,ebx
	cmp esi,ebx
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp-0x14]
	push eax
	push esi
	mov dword ptr [ebp-0x14],ebx
	call ecx
	cmp eax,ebx
	jge Block96

 Block95:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block96:
	mov edi,dword ptr [ebp-0x50]
	mov esi,dword ptr [ebp-0x14]
	cmp edi,ebx
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp-0x54]
	push eax
	push edi
	mov dword ptr [ebp-0x54],ebx
	call ecx
	cmp eax,ebx
	jge Block100

 Block99:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block100:
	mov eax,dword ptr [ebp-0x54]
	mov dword ptr [ebp-0x54],eax
	cmp eax,esi
	jb Block102

 Block101:
	mov dword ptr [ebp-0x54],esi

 Block102:
	mov dword ptr [ebp-0x14],ebx

 Block103:
	mov edi,dword ptr [ebp-0x64]
	mov eax,dword ptr [edi+0xB08]
	cmp eax,ebx
	je Block128

 Block104:
	mov edx,dword ptr [ebp-0x14]
	cmp edx,dword ptr [eax-4]
	jae Block128

 Block105:
	mov dword ptr [ebp-0x68],0
	mov eax,edx
	xor edx,edx
	div dword ptr [ebp-0x54]
	lea eax,[ebp-0x68]
	mov byte ptr [ebp-4],0x12
	push edx
	push offset _S_D__1
	push eax
	call ZXString<char>::Format
	mov edi,dword ptr [ebp-0x68]
	add esp,0xC
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp-0x14]
	xor ecx,ecx
	cmp edx,dword ptr [_D_S_NTABCOUNT]
	mov ebx,esp
	setl cl
	push ecx
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x38],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x58]
	lea eax,[ebp-0x34]
	mov byte ptr [ebp-4],0x13
	push eax
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp-0x18],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block110

 Block106:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x6C]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	mov dword ptr [ebp-0x4C],eax
	mov eax,dword ptr [esi]
	dec ecx
	and ecx,dword ptr [ebp-0x6C]
	mov dword ptr [ebp-0x38],ecx
	test eax,eax
	je Block108

 Block107:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block108:
	mov eax,dword ptr [ebp-0x4C]
	mov ecx,dword ptr [ebp-0x38]
	mov dword ptr [esi],ecx
	test eax,eax
	jge Block110

 Block109:
	cmp eax,0x80004002
	jne Block126

 Block110:
	push 0
	push 0
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0x15
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x38],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x50]
	lea edx,[ebp-0x48]
	mov byte ptr [ebp-4],0x16
	push edx
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x17
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp-0x38],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block115

 Block111:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x5C]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov ebx,eax
	mov eax,dword ptr [esi]
	test ebx,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x5C]
	mov dword ptr [ebp-0x38],ecx
	test eax,eax
	je Block113

 Block112:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block113:
	mov ecx,dword ptr [ebp-0x38]
	mov dword ptr [esi],ecx
	test ebx,ebx
	jge Block115

 Block114:
	cmp ebx,0x80004002
	jne Block127

 Block115:
	mov edx,dword ptr [ebp-0x64]
	mov ecx,dword ptr [edx+0xB10]
	mov byte ptr [ebp-4],0x18
	call CCtrlTab::AddItem_Canvas
	mov esi,8
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp-0x48],si
	jne Block118

 Block116:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea ecx,[ebp-0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x34],si
	jne Block122

 Block120:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block123:
	mov byte ptr [ebp-4],1
	test edi,edi
	je Block125

 Block124:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block125:
	inc dword ptr [ebp-0x14]
	xor ebx,ebx
	jmp Block103

 Block126:
	mov ecx,dword ptr [ebp-0x4C]
	push ecx
	call _com_issue_error

 Block127:
	push ebx
	call _com_issue_error

 Block128:
	mov eax,dword ptr [edi+0xAFC]
	mov ecx,dword ptr [edi+0xB10]
	mov esi,dword ptr [ecx+0x50]
	xor edx,edx
	cmp eax,ebx
	setle dl
	dec edx
	and eax,edx
	cmp eax,esi
	jl Block130

 Block129:
	mov eax,esi

 Block130:
	push eax
	call CCtrlTab::SetTab
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	cmp ecx,ebx
	je Block149

 Block131:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	jne Block149

 Block132:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x40]
	call eax
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
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,1
	jne Block149

 Block133:
	mov eax,dword ptr [edi+0xB08]
	cmp eax,ebx
	jne Block135

 Block134:
	xor esi,esi
	jmp Block136

 Block135:
	mov esi,dword ptr [eax-4]
	cmp esi,5
	jge Block149

 Block136:
	add edi,0xBCC

 Block137:
	mov dword ptr [ebp-0x4C],ebx
	push esi
	lea edx,[ebp-0x4C]
	push offset _S_UIUIWINDOW2IMGSK__21
	push edx
	mov byte ptr [ebp-4],0x19
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	push ebx
	push ebx
	push ebx
	lea ecx,[esi+0xBB8]
	push ecx
	push eax
	lea edx,[ebp-0x1C]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block146

 Block138:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block145

 Block139:
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block141

 Block140:
	add eax,8
	jmp Block142

 Block141:
	xor eax,eax

 Block142:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block145

 Block143:
	lea ecx,[eax+8]
	cmp ecx,ebx
	je Block145

 Block144:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block145:
	mov dword ptr [ebp-0x18],ebx

 Block146:
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block148

 Block147:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block148:
	inc esi
	cmp esi,5
	jl Block137

 Block149:
	mov eax,dword ptr [ebp-0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp-0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
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
	ret
}
}
// CUIMacroSys::IsEnabled
__SUB_CLASS_THIS0(0044C200, __thiscall, 55489,  IUIMsgHandler, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xAEC]
	ret
}
}
// CUISkill::CloseSkillGuide
__SUB_CLASS_THIS0(0044A5B0, __thiscall, 55543,  CUISkill, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xBC8]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	add esi,0xBC4
	cmp dword ptr [esi+4],0
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CWndSkillGuide>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	pop esi
	ret
}
}
// CUIMacroSys::SetEnable
__SUB_CLASS_THIS(0044C1F0, __thiscall, 55487,  IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0xAEC],eax
	ret 4
}
}
// CUIMacroSys::SetShow
_SUB_EXCEPTION_HANDLER(44C270)
__SUB_CLASS_THIS(0044C270, __thiscall, 55487,  IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44C270
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
	lea eax,[esp+0x10]
	push eax
	lea ecx,[edi-4]
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x1C],0
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ebx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x11C]
	push ebx
	push esi
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov dword ptr [edi+0xAF0],ebx
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 4
}
}
// CUIMacroSys::IsKindOf
__SUB_CLASS_THIS(0044C240, __thiscall, 55495,  CUIMacroSys, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIMacroSys::ms_RTTI_CUIMacroSys
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
// CUISkill::CreateTip
_SUB_EXCEPTION_HANDLER(44FDD0)
__SUB_CLASS_THIS0(0044FDD0, __thiscall, 55543,  CUISkill, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44FDD0
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
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],ebx
	call ZArray<ZXString<char>>::RemoveAll
	lea eax,[esp+0x14]
	push 0x10F5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],1
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x14]
	push 0x10F6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],2
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea edx,[esp+0x14]
	push 0x10F7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],3
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	lea eax,[esp+0x14]
	push 0x10F8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],4
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [esi+0xB64]
	lea edx,[esp+0x14]
	push edx
	push 0x61
	push 0xE
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block10:
	lea eax,[esp+0x2C]
	push eax
	call UIHelper::MakeBalloonTip
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB7C]
	add esp,0x1C
	cmp edi,eax
	je Block15

 Block11:
	mov dword ptr [esi+0xB7C],eax
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block13:
	cmp edi,ebx
	je Block15

 Block14:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block15:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block17:
	lea ecx,[esp+0x10]
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esp+0x14]
	push 0x10F9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],5
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	lea edx,[esp+0x14]
	push 0x10FA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],6
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	lea eax,[esp+0x14]
	push 0x10FB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],7
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	lea ecx,[esp+0x14]
	push 0x10FC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],8
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	lea eax,[esp+0x14]
	push eax
	mov eax,dword ptr [esi+0xB64]
	push 0x77
	push 0x93
	push 2
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	lea eax,[esp+0x2C]
	push eax
	call UIHelper::MakeBalloonTip
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB80]
	add esp,0x1C
	cmp edi,eax
	je Block32

 Block28:
	mov dword ptr [esi+0xB80],eax
	cmp eax,ebx
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block30:
	cmp edi,ebx
	je Block32

 Block31:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block32:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block34:
	lea ecx,[esp+0x10]
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esp+0x14]
	push 0x10FD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],9
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	lea edx,[esp+0x14]
	push 0x10FE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],0xA
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	lea eax,[esp+0x14]
	push 0x10FF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],0xB
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	lea ecx,[esp+0x14]
	push 0x1100
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],0xC
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	lea eax,[esp+0x14]
	push eax
	mov eax,dword ptr [esi+0xB64]
	push 0x10F
	push 0x64
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block44:
	lea eax,[esp+0x2C]
	push eax
	call UIHelper::MakeBalloonTip
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB84]
	add esp,0x1C
	cmp edi,eax
	je Block49

 Block45:
	mov dword ptr [esi+0xB84],eax
	cmp eax,ebx
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block47:
	cmp edi,ebx
	je Block49

 Block48:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block49:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block51

 Block50:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block51:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<ZXString<char>>::RemoveAll
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret
}
}
// CUIMacroSys::OnSetFocus
__SUB_CLASS_THIS(0044C1E0, __thiscall, 55480,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUISkill::ShiftMacroUIState
__SUB_CLASS_THIS0(0044A040, __thiscall, 55543,  CUISkill, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB90]
	test eax,eax
	je Block5

 Block1:
	xor ecx,ecx
	cmp dword ptr [esi+0xB88],ecx
	sete cl
	mov dword ptr [esi+0xB88],ecx
	mov edx,dword ptr [eax+4]
	test ecx,ecx
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	jne Block3

 Block2:
	push 0
	call eax
	push 0
	jmp Block4

 Block3:
	push 1
	call eax
	push 1

 Block4:
	mov eax,dword ptr [esi+0xB90]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov ecx,dword ptr [esi+0xB90]
	pop esi
	jmp  CUIMacroSys::ResetInfo

 Block5:
	pop esi
	ret
}
}
// CUISkill::GetRecommendSKill
_SUB_EXCEPTION_HANDLER(44E710)
__SUB_CLASS_THIS(0044E710, __thiscall, 55554,  CUISkill, long, const SKILLROOT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44E710
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	test byte ptr [_D__S3__5],1
	jne Block2

 Block1:
	or dword ptr [_D__S3__5],1
	push 0xB12E30
	mov dword ptr [_D_S_ARECOMMSKILL],0
	call _atexit
	add esp,4

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [ebp+4]
	mov ebx,dword ptr [eax+4]
	mov dword ptr [ebp+0x54],ebx
	test esi,esi
	je Block7

 Block3:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block6:
	mov dword ptr [ebp+4],0

 Block7:
	test ebx,ebx
	je Block94

 Block8:
	xor edi,edi
	mov dword ptr [ebp+0x60],edi
	mov dword ptr [ebp+0x24],edi
	mov dword ptr [ebp+0x28],edi
	mov dword ptr [ebp+0x2C],edi
	mov ecx,dword ptr [ebx+0x3D]
	push ecx
	lea edx,[ebx+0x39]
	push edx
	mov dword ptr [ebp-4],edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	mov ecx,dword ptr [ebp+0x74]
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add esp,8
	add eax,edx
	jne Block17

 Block9:
	cmp word ptr [ebx+0xF7],1
	jne Block17

 Block10:
	mov eax,dword ptr [ecx]
	cmp eax,0x190
	je Block12

 Block11:
	cmp eax,0x1AE
	jne Block17

 Block12:
	xor esi,esi
	mov dword ptr [ebp+0x48],esi
	mov dword ptr [ebp+0x4C],esi
	mov dword ptr [ebp+0x50],esi
	lea ecx,[ebp+0x44]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	push 0x190
	mov byte ptr [ebp-4],1
	call CSkillInfo::GetSkillRootVisible
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	lea edx,[ebp+0x20]
	push edx
	push ebx
	push 0x1AE
	call CSkillInfo::GetSkillRootVisible

 Block13:
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block16

 Block14:
	cmp esi,dword ptr [eax-4]
	jae Block16

 Block15:
	mov eax,dword ptr [eax+esi*8+4]
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push eax
	push ebx
	call CSkillInfo::GetSkillLevel_0
	add edi,eax
	inc esi
	jmp Block13

 Block16:
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x74],ecx
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x60],edi
	mov byte ptr [ebp-4],0
	call SKILLROOT::~SKILLROOT
	jmp Block18

 Block17:
	cmp ecx,edi
	je Block93

 Block18:
	mov dword ptr [ebp+0x5C],0
	lea edx,[ebp+0x58]
	push 0x11B2
	push edx
	mov byte ptr [ebp-4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],3
	test esi,esi
	je Block22

 Block19:
	cmp dword ptr [esi+4],0
	jne Block21

 Block20:
	mov eax,dword ptr [esi]
	push eax
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block21:
	mov esi,dword ptr [esi+4]
	jmp Block23

 Block22:
	xor esi,esi

 Block23:
	mov ecx,dword ptr [ebp+0x74]
	mov edx,dword ptr [ecx]
	push edx
	lea eax,[ebp+0x5C]
	push esi
	push eax
	call ZXString<char>::Format
	mov ecx,dword ptr [ebp+0x58]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test ecx,ecx
	je Block25

 Block24:
	call _xbstr_t::Data_t::Release

 Block25:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x44]
	push ecx
	call esi
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	lea eax,[ebp+8]
	push eax
	mov byte ptr [ebp-4],4
	call esi
	lea ecx,[ebp+8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov edi,dword ptr [ebp+0x5C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],5
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp+0x44]
	push edx
	lea eax,[ebp+8]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],5
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block34

 Block32:
	cmp eax,0x80004002
	je Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	cmp word ptr [ebp-0x2C],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],9
	jne Block37

 Block35:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[ebp-0x2C]
	push eax
	call esi

 Block38:
	cmp word ptr [ebp+8],8
	mov byte ptr [ebp-4],0xA
	jne Block41

 Block39:
	mov eax,dword ptr [ebp+0x10]
	xor ecx,ecx
	mov word ptr [ebp+8],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[ebp+8]
	push edx
	call esi

 Block42:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0xB
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[ebp+0x44]
	push ecx
	call esi

 Block46:
	mov eax,dword ptr [ebp+0x64]
	test eax,eax
	sete cl
	test cl,cl
	je Block51

 Block47:
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block49:
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block93

 Block50:
	add edi,0xFFFFFFF4
	push edi
	jmp Block92

 Block51:
	mov ecx,dword ptr [ebp+0x74]
	mov eax,dword ptr [ecx]
	cmp eax,dword ptr [_D_S_NSKILLROOTID]
	je Block80

 Block52:
	mov ecx,offset _D_S_ARECOMMSKILL
	mov dword ptr [_D_S_NSKILLROOTID],eax
	call ZArray<CUISkill::RecommSkillPair>::RemoveAll
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0xC
	test ecx,ecx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	lea eax,[ebp+0x18]
	push eax
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],0xD
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	mov dword ptr [ebp+0x40],0
	lea esp,[esp]

 Block57:
	mov esi,dword ptr [ebp+0x1C]
	test esi,esi
	je Block30

 Block58:
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[ebp+0x40]
	push ecx
	lea edx,[ebp+0x30]
	push edx
	push 1
	push esi
	call eax
	test eax,eax
	jne Block75

 Block59:
	lea ecx,[ebp+0x30]
	push ecx
	lea edx,[ebp+0x58]
	push edx
	call DetachBSTR
	add esp,8
	mov ebx,dword ptr [ebp+0x58]
	test ebx,ebx
	je Block61

 Block60:
	mov eax,dword ptr [ebx]
	jmp Block62

 Block61:
	xor eax,eax

 Block62:
	push eax
	call __wtoi
	add esp,4
	push 0
	push ecx
	mov edi,eax
	mov eax,esp
	mov dword ptr [ebp-0x30],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block64

 Block63:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block64:
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x11
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x12
	call get_int32
	add esp,8
	push 0xFFFFFFFF
	mov ecx,offset _D_S_ARECOMMSKILL
	mov esi,eax
	call ZArray<CUISkill::RecommSkillPair>::InsertBefore
	mov dword ptr [eax],edi
	mov dword ptr [eax+4],esi
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x10
	jne Block67

 Block65:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov byte ptr [ebp-4],0xF
	test ebx,ebx
	je Block70

 Block69:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x58],0

 Block70:
	cmp word ptr [ebp+0x30],8
	jne Block73

 Block71:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block57

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block73:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block57

 Block74:
	jmp Block26

 Block75:
	push offset _D_S_ARECOMMSKILL
	call ZSortHelperDefault<CUISkill::RecommSkillPair>::call_1
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	add esp,4
	push esi
	mov byte ptr [ebp-4],0xC
	call ecx
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0xB
	jne Block78

 Block76:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov ebx,dword ptr [ebp+0x54]

 Block80:
	mov edi,dword ptr [ebp+0x60]
	xor esi,esi
	lea ebx,[ebx]

 Block81:
	mov ecx,dword ptr [ebp+0x74]
	mov eax,dword ptr [ecx+8]
	test eax,eax
	je Block84

 Block82:
	cmp esi,dword ptr [eax-4]
	jae Block84

 Block83:
	mov ecx,eax
	mov eax,dword ptr [ecx+esi*8+4]
	mov edx,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push edx
	push ebx
	call CSkillInfo::GetSkillLevel_0
	add edi,eax
	inc esi
	jmp Block81

 Block84:
	mov dword ptr [ebp+0x60],edi
	mov ecx,offset _D_S_ARECOMMSKILL
	xor edi,edi
	xor esi,esi
	call ZArray<CUISkill::RecommSkillPair>::GetCount
	test eax,eax
	jbe Block88

 Block85:
	mov ebx,dword ptr [_D_S_ARECOMMSKILL]

 Block86:
	mov eax,dword ptr [ebp+0x60]
	cmp dword ptr [ebx+esi*8],eax
	jge Block96

 Block87:
	mov edi,dword ptr [ebx+esi*8+4]
	mov ecx,offset _D_S_ARECOMMSKILL
	inc esi
	call ZArray<CUISkill::RecommSkillPair>::GetCount
	cmp esi,eax
	jb Block86

 Block88:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block90:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFF4
	push eax

 Block92:
	call ZXString<char>::_Release
	add esp,4

 Block93:
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call SKILLROOT::~SKILLROOT

 Block94:
	xor eax,eax

 Block95:
	lea esp,[ebp-0x40]
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
	ret 4

 Block96:
	jne Block98

 Block97:
	mov esi,dword ptr [ebx+esi*8+4]
	jmp Block99

 Block98:
	mov esi,edi

 Block99:
	cmp dword ptr [ebp+0x64],0
	mov byte ptr [ebp-4],2
	je Block101

 Block100:
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block101:
	cmp dword ptr [ebp+0x5C],0
	mov byte ptr [ebp-4],0
	je Block103

 Block102:
	mov eax,dword ptr [ebp+0x5C]
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block103:
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call SKILLROOT::~SKILLROOT
	mov eax,esi
	jmp Block95
}
}
// CUISkill::GetMySkillDegreeSP
__SUB_CLASS_THIS(0044A790, __thiscall, 55559,  CUISkill, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	dec eax
	sub esp,0x10
	cmp eax,3
	ja Block11

 Block1:
	push ebx
	push ebp
	push edi
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x14]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	lea edi,[ebx+0x53D]
	mov ecx,edi
	xor ebp,ebp
	call ZMap<long, long, long>::GetHeadPosition
	mov dword ptr [esp+0xC],eax
	test eax,eax
	je Block10

 Block2:
	push esi
	lea esp,[esp]

 Block3:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call ZMap<long, long, long>::GetNext
	mov esi,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	mov edx,ecx
	sub edx,eax
	je Block8

 Block4:
	cmp ecx,0x7D1
	je Block8

 Block5:
	push ecx
	call get_job_level
	add esp,4
	cmp eax,dword ptr [esp+0x24]
	jne Block8

 Block6:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push esi
	push ebx
	call CSkillInfo::IsSkillVisible
	test eax,eax
	je Block8

 Block7:
	add ebp,dword ptr [esp+0x14]

 Block8:
	cmp dword ptr [esp+0x10],0
	jne Block3

 Block9:
	pop esi

 Block10:
	pop edi
	mov eax,ebp
	pop ebp
	pop ebx
	add esp,0x10
	ret 4

 Block11:
	xor eax,eax
	add esp,0x10
	ret 4
}
}
// CWndSkillGuide::OnMouseButton
__SUB_CLASS_THIS(0044A5E0, __thiscall, 55521,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x202
	je Block2

 Block1:
	sub eax,3
	jne Block7

 Block2:
	mov eax,dword ptr [TSingleton<CUISkill>::ms_pInstance]
	test eax,eax
	je Block7

 Block3:
	mov ecx,dword ptr [eax+0xBC8]
	push esi
	mov esi,eax
	test ecx,ecx
	je Block6

 Block4:
	call CWnd::Destroy
	add esi,0xBC4
	cmp dword ptr [esi+4],0
	je Block6

 Block5:
	push 0
	mov ecx,esi
	call ZRef<CWndSkillGuide>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block6:
	pop esi

 Block7:
	ret 0x10
}
}
// CUIMacroSys::OnCreate
_SUB_EXCEPTION_HANDLER(44DF20)
__SUB_CLASS_THIS(0044DF20, __thiscall, 55479,  CUIMacroSys, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44DF20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x94
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	lea edi,[esi+0xAF8]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	push ebx
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGSK__20
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	or ebp,0xFFFFFFFF
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esi+0xAEC],ebp
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0xB0],ebx
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esp+0xB0],ebp
	cmp eax,ebx
	je Block21

 Block4:
	add eax,8
	cmp eax,ebx
	je Block21

 Block5:
	lea ebp,[eax-8]
	cmp ebp,ebx
	je Block7

 Block6:
	lea eax,[ebp+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esi+0x8C],ebp
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0x8C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebx
	push 0x7C
	push 0x2A
	push 0xAE
	push 8
	push 1
	push 0xBC2
	push esi
	call eax
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [eax+0x34],0xA5
	mov ecx,dword ptr [esi+0x8C]
	push 3
	call CCtrlScrollBar::SetScrollRange
	push ebx
	push ebx
	push ebx
	push 0xBB8
	push offset _S_UIUIWINDOW2IMGSK__19
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov dword ptr [esp+0xB0],1
	lea ebp,[esi+0x80]
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	cmp dword ptr [ebp+4],ebx
	je Block13

 Block12:
	push ebx
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],ebx

 Block13:
	mov edx,dword ptr [edi+4]
	or edi,0xFFFFFFFF
	mov dword ptr [ebp+4],edx
	mov dword ptr [esp+0xB0],edi
	cmp dword ptr [esp+0x20],ebx
	je Block15

 Block14:
	push ebx
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block15:
	cmp dword ptr [esi+0xAEC],ebx
	jge Block17

 Block16:
	mov eax,dword ptr [esi+0x84]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx

 Block17:
	lea eax,[esp+0x1C]
	push 0x1108
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x84]
	push 1
	push 1
	push eax
	mov dword ptr [esp+0xBC],2
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0xB0],edi
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	lea ecx,[esp+0x38]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	mov ebp,0xF
	push offset _S_
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0xB4],3
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x58],ebp
	mov dword ptr [esp+0x5C],ebp
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],4
	cmp eax,ebx
	je Block22

 Block20:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block23

 Block21:
	xor ebp,ebp
	jmp Block7

 Block22:
	xor eax,eax

 Block23:
	mov byte ptr [esp+0xB0],3
	cmp eax,ebx
	je Block38

 Block24:
	add eax,8
	cmp eax,ebx
	je Block38

 Block25:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block27

 Block26:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block27:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block29

 Block28:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block29:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x38]
	push eax
	push 0xE7
	push 0x9C
	push 0xBC3
	push esi
	call edx
	mov ecx,dword ptr [esi+0x94]
	push ebx
	call CCtrlCheckBox::SetChecked
	lea ecx,[esp+0x6C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea eax,[esp+0x1C]
	push 0x1A25
	push eax
	mov byte ptr [esp+0xB8],5
	mov dword ptr [esp+0x98],ebx
	mov dword ptr [esp+0x90],0xFF555555
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[esp+0x80]
	cmp ecx,edi
	je Block34

 Block30:
	mov ecx,dword ptr [esp+0x80]
	cmp ecx,ebx
	je Block32

 Block31:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x80],ebx

 Block32:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x80],edi
	cmp edi,ebx
	je Block34

 Block33:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block34:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebx
	je Block36

 Block35:
	call _xbstr_t::Data_t::Release

 Block36:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xA0],0xC
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],6
	cmp eax,ebx
	je Block39

 Block37:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block40

 Block38:
	xor edi,edi
	jmp Block27

 Block39:
	xor eax,eax

 Block40:
	mov byte ptr [esp+0xB0],5
	cmp eax,ebx
	je Block50

 Block41:
	add eax,8
	cmp eax,ebx
	je Block50

 Block42:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block44

 Block43:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block44:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block46

 Block45:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block46:
	mov ecx,dword ptr [esi+0x9C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x6C]
	push edx
	push ebp
	push 0x74
	push 0xD0
	push 0x37
	push 0xBC4
	push esi
	call eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CUISkill>::ms_pInstance]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,7
	mov edx,0xD
	mov byte ptr [esp+0xB0],bl
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block48:
	lea eax,[esp+0x34]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xB4],8
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0xB0],9
	test esi,esi
	jne Block51

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	xor edi,edi
	jmp Block44

 Block51:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi]
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
	push esi
	call eax
	test eax,eax
	jge Block53

 Block52:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0xB0],8
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xB0],bl
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB0],5
	test eax,eax
	je Block61

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block61:
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xB0],3
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	test ecx,ecx
	je Block63

 Block62:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x44],0

 Block63:
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	mov ecx,dword ptr [esp+0xA8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA0
	ret 4
}
}
// CWndSkillGuide::CWndSkillGuide
_SUB_EXCEPTION_HANDLER(450310)
__SUB_CLASS_THIS(00450310, __thiscall, 55518,  CWndSkillGuide, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_450310
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	call CWnd::_ctor_default
	push 0
	push 1
	push 0
	push 1
	push 0xA
	push 0x258
	push 0x320
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x88],0
	int 3// TODO: 	mov dword ptr [esi],offset CWndSkillGuide::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWndSkillGuide::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWndSkillGuide::`vftable'{for `ZRefCounted'}
	call CWnd::CreateWnd
	mov dword ptr [esp+0x10],0
	mov eax,dword ptr [esp+0x6C]
	dec eax
	push eax
	lea ecx,[esp+0x14]
	push offset _S_UIUIWINDOWIMGARA
	push ecx
	mov byte ptr [esp+0x70],1
	call ZXString16::Format
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x3C]
	push edx
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x68],2
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov edx,dword ptr [esp+0x10]
	push 0
	push 0
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	push ecx
	mov dword ptr [esp+0x80],esp
	mov ecx,esp
	mov bl,3
	push edx
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],4
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0x70],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebx,8
	mov byte ptr [esp+0x64],7
	cmp word ptr [esp+0x4C],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x64],8
	cmp word ptr [esp+0x2C],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0x64],9
	cmp word ptr [esp+0x3C],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea ecx,[esp+0x1C]
	push ecx
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x68],0xA
	call CWnd::GetCanvas
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x64],0xB
	test edi,edi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov edx,dword ptr [esp+0x1C]
	mov ebx,dword ptr [esp+0x6C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x34]
	push ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x3C]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push edi
	call eax
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block27:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],0xA
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x64],9
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [esp+0x64],1
	test ebx,ebx
	je Block35

 Block34:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block35:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x64],0
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	mov eax,esi
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x58
	ret 4
}
}
// CUIMacroSys::GetIndexByPos
__SUB_CLASS_THIS(00449F70, __thiscall, 55492,  CUIMacroSys, int32_t, long, long, int32_t, long&, long&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	push esi
	mov esi,dword ptr [esp+0x14]
	mov dword ptr [esi],0xFFFFFFFF
	mov eax,dword ptr [ecx+0x8C]
	push edi
	mov edi,dword ptr [eax+0x38]
	xor ecx,ecx
	mov eax,0x4C
	push ebx

 Block1:
	lea ebx,[eax-0x20]
	cmp ebx,edx
	jg Block3

 Block2:
	cmp edx,eax
	jle Block5

 Block3:
	add eax,0x2C
	inc ecx
	cmp eax,0xD0
	jl Block1

 Block4:
	jmp Block6

 Block5:
	lea edx,[ecx+edi]
	mov dword ptr [esi],edx

 Block6:
	pop ebx
	cmp ecx,3
	jne Block8

 Block7:
	pop edi
	xor eax,eax
	pop esi
	ret 0x14

 Block8:
	mov edx,dword ptr [esp+0xC]
	xor ecx,ecx
	mov eax,0x2F

 Block9:
	lea esi,[eax-0x20]
	cmp esi,edx
	jg Block11

 Block10:
	cmp edx,eax
	jle Block13

 Block11:
	add eax,0x22
	inc ecx
	cmp eax,0x95
	jl Block9

 Block12:
	jmp Block14

 Block13:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [eax],ecx

 Block14:
	cmp ecx,3
	jne Block18

 Block15:
	cmp dword ptr [esp+0x14],0
	je Block7

 Block16:
	add edx,0xFFFFFF78
	cmp edx,0x20
	ja Block7

 Block17:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [ecx],3

 Block18:
	pop edi
	mov eax,1
	pop esi
	ret 0x14
}
}
// CUIMacroSys::OnDestroy
__SUB_CLASS_THIS0(0044C1D0, __thiscall, 55478,  CUIMacroSys, void) {
__asm {

 Block0:
	ret
}
}
// CUISkill::CanSkillUp
__SUB_CLASS_THIS(0044A930, __thiscall, 55560,  CUISkill, int32_t, const SKILLENTRY*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub esp,0xC
	push ebx
	mov ebx,ecx
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	push esi
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov eax,0x10624DD3
	imul esi
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	imul ecx,0x3E8
	mov edx,esi
	sub edx,ecx
	je Block2

 Block1:
	cmp esi,0x7D1
	jne Block3

 Block2:
	pop esi
	xor eax,eax
	pop ebx
	add esp,0xC
	ret 4

 Block3:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebp
	push edi
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],ecx
	test eax,eax
	je Block8

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
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block7:
	mov dword ptr [esp+0x18],0

 Block8:
	push esi
	call get_job_level
	xor ebp,ebp
	mov edi,eax
	lea esi,[ebp+1]
	add esp,4
	cmp edi,esi
	mov dword ptr [esp+0x20],ebp
	jle Block11

 Block9:
	push esi
	mov ecx,ebx
	call CUISkill::GetMySkillDegreeSP
	push esi
	mov ecx,ebx
	add ebp,eax
	call CUISkill::GetMaxSkillDegreeSP
	add dword ptr [esp+0x20],eax
	inc esi
	cmp esi,edi
	jl Block9

 Block10:
	cmp ebp,dword ptr [esp+0x20]
	jl Block19

 Block11:
	push edi
	mov ecx,ebx
	call CUISkill::GetMySkillDegreeSP
	sub edi,2
	mov esi,eax
	je Block18

 Block12:
	sub edi,1
	je Block16

 Block13:
	sub edi,1
	jne Block20

 Block14:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [eax+0x35]
	push ecx
	add eax,0x33
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx eax,al
	sub eax,0x77
	lea edx,[eax+eax*2]
	add esp,8
	cmp esi,edx
	jl Block20

 Block15:
	pop edi
	pop ebp
	pop esi
	xor eax,eax
	pop ebx
	add esp,0xC
	ret 4

 Block16:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [eax+0x35]
	push ecx
	add eax,0x33
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx eax,al
	lea edx,[eax+eax*2-0xD1]
	add esp,8
	cmp esi,edx
	jl Block20

 Block17:
	pop edi
	pop ebp
	pop esi
	xor eax,eax
	pop ebx
	add esp,0xC
	ret 4

 Block18:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [eax+0x35]
	push ecx
	add eax,0x33
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx eax,al
	lea edx,[eax+eax*2-0x59]
	add esp,8
	cmp esi,edx
	jl Block20

 Block19:
	pop edi
	pop ebp
	pop esi
	xor eax,eax
	pop ebx
	add esp,0xC
	ret 4

 Block20:
	pop edi
	pop ebp
	pop esi
	mov eax,1
	pop ebx
	add esp,0xC
	ret 4
}
}
// CUISkill::GetMaxSkillDegreeSP
__SUB_CLASS_THIS(0044A870, __thiscall, 55559,  CUISkill, long, long) {
__asm {

 Block0:
	sub esp,8
	push ebx
	mov ebx,dword ptr [esp+0x10]
	lea eax,[ebx-1]
	cmp eax,3
	ja Block6

 Block1:
	push ebp
	push esi
	push edi
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x10]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov edx,dword ptr [esi+0x3D]
	push edx
	lea edi,[esi+0x39]
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx ebp,ax
	mov eax,dword ptr [esi+0x3D]
	push eax
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx edi,word ptr [esi+0xF7]
	movzx ecx,ax
	lea edx,[ebx+1]
	push edx
	movsx eax,bp
	push edi
	push eax
	mov dword ptr [esp+0x38],ecx
	call get_job_change_level
	movsx ecx,word ptr [esp+0x38]
	push ebx
	push edi
	push ecx
	mov esi,eax
	call get_job_change_level
	sub esi,eax
	add esp,0x28
	test esi,esi
	jg Block3

 Block2:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,8
	ret 4

 Block3:
	lea eax,[esi+esi*2]
	cmp ebx,4
	jne Block5

 Block4:
	pop edi
	pop esi
	pop ebp
	add eax,3
	pop ebx
	add esp,8
	ret 4

 Block5:
	pop edi
	pop esi
	pop ebp
	inc eax
	pop ebx
	add esp,8
	ret 4

 Block6:
	xor eax,eax
	pop ebx
	add esp,8
	ret 4
}
}
// CUISkill::GetMaxSkillDegreeSPDualJob
__SUB_CLASS_THIS(0044AC10, __thiscall, 55562,  CUISkill, void, long, long&, long&, long&) {
__asm {

 Block0:
	sub esp,0xC
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebx
	push ebp
	push esi
	push edi
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	xor ebx,ebx
	mov dword ptr [esp+0x10],ecx
	cmp eax,ebx
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x18],ebx

 Block5:
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x20]
	mov esi,dword ptr [esp+0x28]
	mov dword ptr [ecx],ebx
	xor ebp,ebp
	mov dword ptr [edx],ebx
	mov dword ptr [esi],ebx
	test eax,eax
	jg Block7

 Block6:
	mov ebp,0x190
	lea ebx,[ebp+0x1E]
	mov dword ptr [esi],1
	jmp Block14

 Block7:
	cmp eax,1
	jg Block9

 Block8:
	mov ebp,0x1AF
	mov dword ptr [esi],1
	jmp Block13

 Block9:
	cmp eax,3
	jg Block11

 Block10:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [eax+0x35]
	push ecx
	add eax,0x33
	mov ebp,0x1B0
	push eax
	lea ebx,[ebp+1]
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0x46
	sbb edx,edx
	inc edx
	mov dword ptr [esi],edx
	jmp Block14

 Block11:
	cmp eax,4
	jg Block14

 Block12:
	mov ebp,0x1B2
	mov dword ptr [esi],3

 Block13:
	mov ebx,ebp

 Block14:
	mov ecx,dword ptr [esp+0x10]
	add ecx,0x56D
	call ZMap<long, long, long>::GetHeadPosition
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block31

 Block15:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	add ecx,0x56D
	mov dword ptr [esp+0x30],0
	call ZMap<long, long, long>::GetNext
	mov edi,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push edi
	call CSkillInfo::GetSkill
	mov ecx,eax
	test ecx,ecx
	je Block30

 Block16:
	mov ecx,dword ptr [ecx+0x3C]
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	test ecx,ecx
	jle Block30

 Block17:
	cmp dword ptr [esp+0x28],ecx
	jle Block30

 Block18:
	mov eax,0x10624DD3
	imul esi
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	mov ecx,esi
	sub ecx,eax
	je Block30

 Block19:
	cmp esi,0x7D1
	je Block30

 Block20:
	cmp edi,0x41C7DB
	je Block26

 Block21:
	cmp edi,0x41EEE8
	je Block26

 Block22:
	cmp edi,0x4215FA
	je Block26

 Block23:
	cmp edi,0x4215FD
	je Block26

 Block24:
	cmp edi,0x423D0C
	je Block26

 Block25:
	cmp edi,0x423D0F
	jne Block30

 Block26:
	mov edx,dword ptr [esp+0x10]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push edi
	push edx
	call CSkillInfo::IsSkillVisible
	test eax,eax
	je Block30

 Block27:
	cmp esi,ebp
	je Block29

 Block28:
	cmp esi,ebx
	jne Block30

 Block29:
	mov eax,dword ptr [esp+0x2C]
	inc dword ptr [eax]

 Block30:
	cmp dword ptr [esp+0x20],0
	jne Block15

 Block31:
	lea eax,[ebx-0x1AE]
	cmp eax,3
	ja Block33

 Block32:
	inc ebx
	push ebx
	call get_dualjob_change_level
	push ebp
	mov esi,eax
	call get_dualjob_change_level
	mov edx,dword ptr [esp+0x2C]
	add esp,8
	sub esi,eax
	lea ecx,[esi+esi*2]
	mov dword ptr [edx],ecx

 Block33:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 0x10
}
}
// ZSort_CUISkill__RecommSkillPair_
__SUB(0044A550, __cdecl, 85373,  void, ZArray<CUISkill::RecommSkillPair>&, __POSITION*, __POSITION*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CUISkill::RecommSkillPair>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CUISkill::RecommSkillPair>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[ecx+ecx]
	push eax
	push edi
	push esi
	push ebx
	call IntroSortLoopHelperDefault<CUISkill::RecommSkillPair, int>::call
	push edi
	push esi
	push ebx
	call InsertionSortHelperDefault<CUISkill::RecommSkillPair>::call
	add esp,0x1C

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CUIMacroSys::~CUIMacroSys
_SUB_EXCEPTION_HANDLER(44C310)
__SUB_CLASS_THIS0(0044C310, __thiscall, 55478,  CUIMacroSys, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44C310
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
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	int 3// TODO: 	mov dword ptr [esi],offset CUIMacroSys::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMacroSys::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMacroSys::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xAF8]
	mov dword ptr [esp+0x1C],6
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xA0]
	mov byte ptr [esp+0x1C],5
	call CUIToolTip::~CUIToolTip
	lea edi,[esi+0x98]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x88]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIMacroSys>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CWnd::~CWnd
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
// CUISkill::OnTabChanged
__SUB_CLASS_THIS(0044BFA0, __thiscall, 55555,  CUISkill, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	lea ecx,[esi+0x88]
	mov dword ptr [esi+0xAFC],eax
	call CUIToolTip::ClearToolTip
	push 1
	mov ecx,esi
	call CUISkill::GetSkillRootVisible
	mov ecx,esi
	call CUISkill::SetScrollBar
	mov ecx,esi
	call CUISkill::SetButtons
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CUISkill::Draw
_SUB_EXCEPTION_HANDLER(44ED90)
__SUB_CLASS_THIS(0044ED90, __thiscall, 55550,  CUISkill, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44ED90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x98
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x64],edi
	mov eax,dword ptr [ebp+0x74]
	push eax
	call CWnd::Draw
	lea ecx,[ebp+0x5C]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp-0xA4]
	push edx
	mov dword ptr [ebp-4],0
	mov dword ptr [ebp+0x10],ecx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0xA0]
	mov dword ptr [ebp+0x14],esi
	test eax,eax
	je Block5

 Block1:
	lea ebx,[eax-0x10]
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block4

 Block3:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block4:
	mov edi,dword ptr [ebp+0x64]
	mov dword ptr [ebp-0xA0],0

 Block5:
	mov eax,dword ptr [edi+0xB10]
	mov ebx,dword ptr [eax+0x44]
	test ebx,ebx
	jne Block7

 Block6:
	push esi
	call get_novice_skill_point
	add esp,4
	mov esi,eax
	jmp Block12

 Block7:
	mov eax,dword ptr [esi+0x3D]
	push eax
	lea ecx,[esi+0x39]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,3
	je Block10

 Block8:
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x16
	je Block10

 Block9:
	cmp ecx,0x7D1
	jne Block11

 Block10:
	push ebx
	lea ecx,[esi+0xCD]
	call ExtendSP::Get
	movzx esi,al
	jmp Block12

 Block11:
	mov ecx,dword ptr [esi+0x9D]
	push ecx
	add esi,0x99
	push esi
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	movsx esi,ax

 Block12:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov eax,0x20
	mov byte ptr [ebp-4],1
	call __chkstk
	mov eax,esp
	lea ecx,[ebp+0x4C]
	push ecx
	push 0xA
	push eax
	push esi
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0xB70]
	mov byte ptr [ebp-4],2
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov byte ptr [ebp-4],1
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x4C],8
	mov edi,eax
	mov byte ptr [ebp-4],0
	jne Block19

 Block17:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x3C]
	push ecx
	call ebx
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],3
	call ebx
	lea ecx,[ebp+0x4C]
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
	mov bl,4
	mov eax,0x20
	mov byte ptr [ebp-4],bl
	call __chkstk
	mov eax,esp
	lea edx,[ebp+0x3C]
	push edx
	mov edx,dword ptr [ebp+0x64]
	lea ecx,[ebp+0x4C]
	push ecx
	mov ecx,dword ptr [edx+0xB70]
	push ecx
	push 0xA
	push eax
	push esi
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	cmp dword ptr [ebp+0x5C],0
	mov byte ptr [ebp-4],5
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov eax,0x68
	sub eax,edi
	mov edi,dword ptr [ebp+0x5C]
	push 0x100
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp+0x4C],bx
	jne Block29

 Block27:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x3C],bx
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [ebp+0x3C],ax
	mov eax,dword ptr [ebp+0x44]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[ebp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov ecx,dword ptr [ebp+0x64]
	mov eax,dword ptr [ecx+0xB10]
	mov eax,dword ptr [eax+0x50]
	test eax,eax
	je Block195

 Block35:
	push 0
	call CUISkill::GetSkillRootVisible
	mov esi,eax
	mov dword ptr [ebp+0x1C],esi
	test esi,esi
	je Block195

 Block36:
	mov edx,3
	mov word ptr [ebp+0x3C],dx
	mov dword ptr [ebp+0x44],0xFF
	mov eax,dword ptr [esi+0xC]
	lea ecx,[ebp+0x3C]
	push ecx
	push eax
	push 0x37
	push 0xF
	mov ecx,edi
	mov byte ptr [ebp-4],6
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x3C],bx
	jne Block39

 Block37:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	lea ecx,[ebp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	lea eax,[ebp+0x3C]
	push eax
	mov eax,dword ptr [esi+4]
	push ecx
	add esi,4
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	mov bl,7
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x64]
	mov ecx,dword ptr [ecx+0xB6C]
	mov byte ptr [ebp-4],8
	test ecx,ecx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x3C],8
	mov ebx,eax
	mov byte ptr [ebp-4],0
	jne Block47

 Block45:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block48:
	cmp ebx,0x6E
	jge Block63

 Block49:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x4C]
	push ecx
	call edi
	lea edx,[ebp+0x4C]
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
	lea eax,[ebp+0x3C]
	push eax
	mov byte ptr [ebp-4],9
	call edi
	lea ecx,[ebp+0x3C]
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
	mov ecx,dword ptr [ebp+0x5C]
	mov esi,dword ptr [esi]
	lea edx,[ebp+0x4C]
	push edx
	lea eax,[ebp+0x3C]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],0xA
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [ebp+0x64]
	mov ecx,dword ptr [edx+0xB6C]
	mov byte ptr [ebp-4],0xB
	test ecx,ecx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov eax,ebx
	cdq
	sub eax,edx
	sar eax,1
	mov edx,0x68
	push 0x41
	sub edx,eax
	push edx
	mov byte ptr [ebp-4],0xA
	call IWzFont::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x3C],si
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [ebp+0x3C],ax
	mov eax,dword ptr [ebp+0x44]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[ebp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x4C],si
	jne Block62

 Block60:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block110

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block62:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block110

 Block63:
	push esi
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],0
	call ZXString<char>::op_assign
	push 0xA
	push 0x20
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],0xC
	call ZXString<char>::Find__1
	mov esi,eax
	push esi
	push 0
	lea ecx,[ebp+0x30]
	push ecx
	lea ecx,[ebp+0x60]
	call ZXString<char>::Substring
	push 0xFFFFFFFF
	lea edx,[esi+1]
	push edx
	lea eax,[ebp+0x38]
	push eax
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],0xD
	call ZXString<char>::Substring
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0xE
	call edi
	lea edx,[ebp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block75

 Block64:
	mov edx,dword ptr [ebp+0x38]
	lea eax,[ebp+0x4C]
	push eax
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0xF
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax+0xB6C]
	mov byte ptr [ebp-4],0x10
	test ecx,ecx
	je Block15

 Block65:
	mov byte ptr [ebp-4],0xF
	call IWzFont::CalcTextWidth
	cmp eax,0x6E
	seta bl
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0xE
	jne Block68

 Block66:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	test bl,bl
	je Block76

 Block70:
	push esi
	push 0x20
	lea ecx,[ebp+0x60]
	call ZXString<char>::Find__1
	mov esi,eax
	push esi
	push 0
	lea eax,[ebp+0x28]
	push eax
	lea ecx,[ebp+0x60]
	call ZXString<char>::Substring
	push eax
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],0x11
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	push 0xFFFFFFFF
	lea ecx,[esi+1]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	lea ecx,[ebp+0x60]
	call ZXString<char>::Substring
	push eax
	lea ecx,[ebp+0x38]
	mov byte ptr [ebp-4],0x12
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	lea eax,[ebp+0x4C]
	push eax
	call edi
	lea ecx,[ebp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block64

 Block75:
	push eax
	call _com_issue_error

 Block76:
	lea edx,[ebp+0x4C]
	push edx
	call edi
	lea eax,[ebp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	lea ecx,[ebp+0x3C]
	push ecx
	mov byte ptr [ebp-4],0x13
	call edi
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	mov esi,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ebp+0x30]
	lea eax,[ebp+0x4C]
	push eax
	lea ecx,[ebp+0x3C]
	push ecx
	push esi
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	mov bl,0x14
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax+0xB6C]
	mov byte ptr [ebp-4],0x15
	test ecx,ecx
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	push 0x37
	push 0x32
	mov byte ptr [ebp-4],bl
	call IWzFont::DrawTextA
	cmp word ptr [ebp+0x3C],8
	mov byte ptr [ebp-4],0x13
	jne Block85

 Block83:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0xE
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	lea edx,[ebp+0x4C]
	push edx
	call edi
	lea eax,[ebp+0x4C]
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
	lea ecx,[ebp+0x3C]
	push ecx
	mov byte ptr [ebp-4],0x16
	call edi
	lea edx,[ebp+0x3C]
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
	mov edx,dword ptr [ebp+0x38]
	lea eax,[ebp+0x4C]
	push eax
	lea ecx,[ebp+0x3C]
	push ecx
	push esi
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	mov bl,0x17
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax+0xB6C]
	mov byte ptr [ebp-4],0x18
	test ecx,ecx
	jne Block96

 Block95:
	push 0x80004003
	call _com_issue_error

 Block96:
	push 0x45
	push 0x32
	mov byte ptr [ebp-4],bl
	call IWzFont::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp+0x3C],si
	jne Block99

 Block97:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp+0x4C],si
	jne Block103

 Block101:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block106:
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block108

 Block107:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block108:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block110

 Block109:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block110:
	mov edx,dword ptr [ebp+0x1C]
	mov esi,dword ptr [ebp+0x64]
	push edx
	mov ecx,esi
	call CUISkill::GetRecommendSKill
	mov dword ptr [ebp+0x34],eax
	mov eax,dword ptr [esi+0xB18]
	mov eax,dword ptr [eax+0x38]
	mov dword ptr [ebp+0x38],eax
	add eax,eax
	add eax,eax
	add eax,eax
	mov dword ptr [ebp+0x18],0
	mov dword ptr [ebp+0x20],eax
	mov dword ptr [ebp+0x2C],0x70

 Block111:
	mov ecx,dword ptr [ebp+0x1C]
	mov eax,dword ptr [ecx+8]
	test eax,eax
	je Block195

 Block112:
	mov edx,dword ptr [ebp+0x38]
	cmp edx,dword ptr [eax-4]
	jae Block195

 Block113:
	mov edx,dword ptr [ebp+0x20]
	mov eax,ecx
	mov ecx,dword ptr [eax+8]
	mov eax,dword ptr [ecx+edx+4]
	mov ecx,dword ptr [ebp+0x10]
	push eax
	mov dword ptr [ebp+0x60],eax
	call CWvsContext::GetSkillLevelUpState
	mov ecx,dword ptr [ebp+0x60]
	mov edx,dword ptr [ecx]
	mov ebx,dword ptr [ebp+0x14]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	mov esi,eax
	lea eax,[ebp+0x60]
	push eax
	neg esi
	push edx
	sbb esi,esi
	push ebx
	neg esi
	call CSkillInfo::GetPureSkillLevel
	mov ecx,dword ptr [ebp+0x60]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	mov edi,eax
	lea eax,[ebp+0x60]
	push eax
	push edx
	push ebx
	call CSkillInfo::GetSkillLevel_0
	mov ebx,eax
	sub eax,edi
	mov dword ptr [ebp+0x28],eax
	mov eax,3
	mov word ptr [ebp+0x3C],ax
	mov dword ptr [ebp+0x44],0xFF
	mov ecx,dword ptr [ebp+0x64]
	mov eax,dword ptr [ecx+esi*4+0xB54]
	mov edi,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [ebp+0x5C]
	lea edx,[ebp+0x3C]
	push edx
	push eax
	add edi,0xFFFFFFED
	push edi
	push 0xA
	mov byte ptr [ebp-4],0x19
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x3C],8
	mov byte ptr [ebp-4],0
	jne Block116

 Block114:
	xor eax,eax
	mov word ptr [ebp+0x3C],ax
	mov eax,dword ptr [ebp+0x44]
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea ecx,[ebp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov edx,dword ptr [ebp+0x34]
	mov eax,dword ptr [ebp+0x60]
	cmp dword ptr [eax],edx
	jne Block122

 Block118:
	mov ecx,3
	mov word ptr [ebp+0x4C],cx
	mov dword ptr [ebp+0x54],0xFF
	mov edx,dword ptr [ebp+0x64]
	mov eax,dword ptr [edx+0xB5C]
	lea ecx,[ebp+0x4C]
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	push eax
	push edi
	push 0x2F
	mov byte ptr [ebp-4],0x1A
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0
	jne Block121

 Block119:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov eax,dword ptr [ebp+0x60]
	add eax,4
	push eax
	lea ecx,[ebp+0x30]
	mov dword ptr [ebp+0x30],0
	call ZXString<char>::op_assign
	mov edx,dword ptr [ebp+0x64]
	mov eax,dword ptr [edx+0xB64]
	push 0x5F
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x1B
	mov dword ptr [ebp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block124

 Block123:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block124:
	lea eax,[ebp+0x30]
	push eax
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[ebp]
	push ecx
	call edi
	lea edx,[ebp]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block125:
	lea eax,[ebp-0x6C]
	push eax
	mov byte ptr [ebp-4],0x1C
	call edi
	lea ecx,[ebp-0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block126:
	mov ecx,dword ptr [ebp+0x5C]
	lea edx,[ebp]
	push edx
	mov edx,dword ptr [ebp+0x30]
	lea eax,[ebp-0x6C]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x1D
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax+0xB64]
	mov byte ptr [ebp-4],0x1E
	test ecx,ecx
	je Block15

 Block127:
	mov edx,dword ptr [ebp+0x2C]
	add edx,0xFFFFFFEE
	push edx
	push 0x32
	mov byte ptr [ebp-4],0x1D
	call IWzFont::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp-0x6C],di
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp],di
	jne Block134

 Block132:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov edi,dword ptr [ebp+0x28]
	test edi,edi
	jle Block160

 Block136:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x8C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block137:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],0x1F
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block138:
	mov eax,0x20
	mov byte ptr [ebp-4],0x20
	call __chkstk
	mov eax,esp
	lea edx,[ebp-0x8C]
	push edx
	mov edx,dword ptr [ebp+0x5C]
	lea ecx,[ebp-0x3C]
	push ecx
	push edx
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax+0xB68]
	mov byte ptr [ebp-4],0x21
	test ecx,ecx
	je Block15

 Block139:
	mov edx,dword ptr [ebp+0x2C]
	push edx
	push 0x32
	mov byte ptr [ebp-4],0x20
	call IWzFont::DrawTextA
	mov ebx,8
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp-0x3C],bx
	jne Block142

 Block140:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block143:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x8C],bx
	jne Block146

 Block144:
	mov eax,dword ptr [ebp-0x84]
	xor edx,edx
	mov word ptr [ebp-0x8C],dx
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea eax,[ebp-0x8C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block147:
	mov dword ptr [ebp+0x28],0
	push edi
	lea ecx,[ebp+0x28]
	push offset _S_D__7
	push ecx
	mov byte ptr [ebp-4],0x22
	call ZXString<char>::Format
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[ebp-0x2C]
	push edx
	call edi
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block148:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0x23
	call edi
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block149:
	mov edx,dword ptr [ebp+0x5C]
	mov ebx,dword ptr [ebp+0x28]
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[ebp-0x1C]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	push ebx
	mov byte ptr [ebp-4],0x24
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax+0xB68]
	mov byte ptr [ebp-4],0x25
	test ecx,ecx
	je Block15

 Block150:
	mov edx,dword ptr [ebp+0x2C]
	push edx
	push 0x41
	mov byte ptr [ebp-4],0x24
	call IWzFont::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp-0x1C],di
	jne Block153

 Block151:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block154:
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp-0x2C],di
	jne Block157

 Block155:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block158:
	mov byte ptr [ebp-4],0x1B
	test ebx,ebx
	je Block171

 Block159:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4
	jmp Block171

 Block160:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x7C]
	push ecx
	call edi
	lea edx,[ebp-0x7C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block161:
	lea eax,[ebp-0x5C]
	push eax
	mov byte ptr [ebp-4],0x26
	call edi
	lea ecx,[ebp-0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block162:
	mov eax,0x20
	mov byte ptr [ebp-4],0x27
	call __chkstk
	mov eax,esp
	lea edx,[ebp-0x7C]
	push edx
	mov edx,dword ptr [ebp+0x5C]
	lea ecx,[ebp-0x5C]
	push ecx
	push edx
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax+0xB64]
	mov byte ptr [ebp-4],0x28
	test ecx,ecx
	je Block15

 Block163:
	mov edx,dword ptr [ebp+0x2C]
	push edx
	push 0x32
	mov byte ptr [ebp-4],0x27
	call IWzFont::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x26
	cmp word ptr [ebp-0x5C],di
	jne Block166

 Block164:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block167:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x7C],di
	jne Block170

 Block168:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	test eax,eax
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block171:
	test esi,esi
	je Block174

 Block172:
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ecx+0xB74]
	cmp edx,dword ptr [ebp+0x38]
	jne Block174

 Block173:
	mov eax,1
	jmp Block175

 Block174:
	xor eax,eax

 Block175:
	mov ecx,dword ptr [ebp+0x60]
	add eax,esi
	mov esi,dword ptr [ecx+eax*4+0x258]
	lea eax,[ecx+eax*4+0x258]
	mov dword ptr [ebp+0x24],esi
	test esi,esi
	je Block177

 Block176:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block177:
	mov ecx,3
	mov word ptr [ebp-0x9C],cx
	mov dword ptr [ebp-0x94],0xFF
	mov edi,dword ptr [ebp+0x2C]
	mov ebx,dword ptr [ebp+0x5C]
	lea edx,[ebp-0x9C]
	push edx
	push esi
	lea eax,[edi-0x11]
	push eax
	push 0xC
	mov ecx,ebx
	mov byte ptr [ebp-4],0x2A
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x9C],8
	mov byte ptr [ebp-4],0x29
	jne Block180

 Block178:
	mov eax,dword ptr [ebp-0x94]
	xor ecx,ecx
	mov word ptr [ebp-0x9C],cx
	test eax,eax
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea edx,[ebp-0x9C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block181:
	cmp dword ptr [ebp+0x18],3
	jge Block190

 Block182:
	mov eax,dword ptr [ebp+0x1C]
	mov eax,dword ptr [eax+8]
	test eax,eax
	je Block184

 Block183:
	mov eax,dword ptr [eax-4]

 Block184:
	dec eax
	cmp dword ptr [ebp+0x38],eax
	jae Block190

 Block185:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block186:
	mov eax,dword ptr [ebp+0x64]
	mov eax,dword ptr [eax+0xB60]
	lea ecx,[ebp-0x4C]
	push ecx
	push eax
	lea edx,[edi+0x12]
	push edx
	push 0xA
	mov ecx,ebx
	mov byte ptr [ebp-4],0x2B
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],0x29
	jne Block189

 Block187:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block190

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block190

 Block189:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block190:
	mov byte ptr [ebp-4],0x1B
	test esi,esi
	je Block192

 Block191:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block192:
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block194

 Block193:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block194:
	add dword ptr [ebp+0x20],8
	mov eax,1
	add dword ptr [ebp+0x18],eax
	add dword ptr [ebp+0x38],eax
	add edi,0x28
	cmp edi,0x110
	mov dword ptr [ebp+0x2C],edi
	jl Block111

 Block195:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0xB4]
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
	ret 4
}
}
// InsertionSort_CUISkill__RecommSkillPair_
__SUB(00449DE0, __cdecl, 85366,  void, ZArray<CUISkill::RecommSkillPair>&, int32_t, int32_t) {
__asm {

 Block0:
	sub esp,8
	push ebx
	mov ebx,dword ptr [esp+0x14]
	cmp ebx,dword ptr [esp+0x18]
	mov edx,ebx
	jg Block8

 Block1:
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x1C]

 Block2:
	cmp edx,ebx
	mov eax,dword ptr [edi]
	mov esi,dword ptr [eax+edx*8]
	mov eax,dword ptr [eax+edx*8+4]
	mov ecx,edx
	mov dword ptr [esp+0x14],eax
	jle Block6

 Block3:
	lea ebx,[ebx]

 Block4:
	mov eax,dword ptr [edi]
	cmp esi,dword ptr [eax+ecx*8-8]
	lea eax,[eax+ecx*8]
	jge Block6

 Block5:
	mov ebp,dword ptr [eax-8]
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [eax-4]
	dec ecx
	cmp ecx,ebx
	mov dword ptr [eax+4],ebp
	jg Block4

 Block6:
	mov eax,dword ptr [edi]
	mov dword ptr [eax+ecx*8],esi
	mov esi,dword ptr [esp+0x14]
	inc edx
	cmp edx,dword ptr [esp+0x24]
	mov dword ptr [eax+ecx*8+4],esi
	jle Block2

 Block7:
	pop edi
	pop esi
	pop ebp

 Block8:
	pop ebx
	add esp,8
	ret
}
}
// CUIMacroSys::OnMouseMove
_SUB_EXCEPTION_HANDLER(44B470)
__SUB_CLASS_THIS(0044B470, __thiscall, 55482,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44B470
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
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x28]
	call edx
	test eax,eax
	je Block10

 Block1:
	mov ebx,dword ptr [esp+0x34]
	mov ebp,dword ptr [esp+0x30]
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	push 1
	lea edi,[esi-4]
	push ebx
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x28],edi
	call CUIMacroSys::GetIndexByPos
	test eax,eax
	je Block10

 Block2:
	mov eax,dword ptr [esp+0x30]
	cmp eax,3
	jne Block4

 Block3:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	mov edx,dword ptr [esi]
	lea eax,[eax+ebx+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,ebp
	push eax
	lea ecx,[esi+0x9C]
	call CUIToolTip::SetToolTip_MacroSysSkill
	jmp Block7

 Block4:
	mov ecx,dword ptr [esp+0x34]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	call CMacroSysMan::GetMacro
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 1
	push eax
	call CSkillInfo::GetSkill
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebx+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,ebp
	push eax
	lea ecx,[esi+0x9C]
	call CUIToolTip::SetToolTip_Skill
	jmp Block7

 Block6:
	push 0
	push 1
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x1107
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x3C],esp
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,edi
	mov dword ptr [esp+0x58],0
	mov dword ptr [edi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov byte ptr [esp+0x48],1
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebx+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,ebp
	push eax
	lea ecx,[esi+0x9C]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call CUIToolTip::SetToolTip_String2
	mov edi,dword ptr [esp+0x14]

 Block7:
	mov eax,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x30]
	lea ecx,[eax+eax*4]
	lea eax,[edx+ecx*2]
	cmp eax,dword ptr [esi+0xAE4]
	je Block9

 Block8:
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xAE4],eax
	call CWnd::InvalidateRect

 Block9:
	mov eax,1
	jmp Block13

 Block10:
	lea ecx,[esi+0x9C]
	call CUIToolTip::ClearToolTip
	or eax,0xFFFFFFFF
	cmp dword ptr [esi+0xAE4],eax
	je Block12

 Block11:
	push 0
	lea ecx,[esi-4]
	mov dword ptr [esi+0xAE4],eax
	call CWnd::InvalidateRect

 Block12:
	xor eax,eax

 Block13:
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
// CUIMacroSys::OnSelected
_SUB_EXCEPTION_HANDLER(44B0F0)
__SUB_CLASS_THIS(0044B0F0, __thiscall, 55493,  CUIMacroSys, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44B0F0
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x20]
	push edi
	lea eax,[esp+0x24]
	mov dword ptr [esi+0xAEC],edi
	mov ecx,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	push eax
	call CMacroSysMan::GetMacroName
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x9C]
	push eax
	mov dword ptr [esp+0x1C],0
	call CCtrlEdit::SetText
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	mov ebx,dword ptr [esi+0x94]
	push edi
	call CMacroSysMan::IsShoutMacro
	push eax
	mov ecx,ebx
	call CCtrlCheckBox::SetChecked
	mov eax,dword ptr [esi+0x84]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x1C]
	lea ecx,[eax+4]
	xor eax,eax
	cmp dword ptr [esi+0xAEC],eax
	setge al
	push eax
	call edx
	mov ecx,esi
	call CUIMacroSys::ResetInfo
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4
}
}
// CUISkill::GetSkillRootVisible
__SUB_CLASS_THIS(0044A6F0, __thiscall, 55558,  CUISkill, const SKILLROOT*, int32_t) {
__asm {

 Block0:
	sub esp,8
	cmp dword ptr [esp+0xC],0
	push esi
	mov esi,ecx
	je Block7

 Block1:
	mov eax,dword ptr [esi+0xB10]
	mov ecx,dword ptr [eax+0x44]
	mov edx,dword ptr [esi+0xB08]
	push ebp
	mov ebp,dword ptr [edx+ecx*4]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x14],ecx
	test eax,eax
	je Block6

 Block2:
	push ebx
	push edi
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block5

 Block4:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block5:
	pop edi
	mov dword ptr [esp+0x10],0
	pop ebx

 Block6:
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esi+0xB44]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push edx
	push ebp
	call CSkillInfo::GetSkillRootVisible
	pop ebp

 Block7:
	lea eax,[esi+0xB44]
	pop esi
	add esp,8
	ret 4
}
}
// CUISkill::GetMySkillDegreeSPDualJob
__SUB_CLASS_THIS(0044AAC0, __thiscall, 55559,  CUISkill, long, long) {
__asm {

 Block0:
	sub esp,0x14
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebx
	push ebp
	push esi
	push edi
	lea eax,[esp+0x1C]
	push eax
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
	xor ebp,ebp
	mov dword ptr [esp+0x10],ecx
	cmp eax,ebp
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x20],ebp

 Block5:
	mov eax,dword ptr [esp+0x28]
	xor ebx,ebx
	test eax,eax
	jg Block7

 Block6:
	mov ebx,0x190
	lea ebp,[ebx+0x1E]
	jmp Block14

 Block7:
	cmp eax,1
	jg Block9

 Block8:
	mov ebx,0x1AF
	jmp Block13

 Block9:
	cmp eax,3
	jg Block11

 Block10:
	mov ebx,0x1B0
	lea ebp,[ebx+1]
	jmp Block14

 Block11:
	cmp eax,4
	jg Block14

 Block12:
	mov ebx,0x1B2

 Block13:
	mov ebp,ebx

 Block14:
	mov edi,dword ptr [esp+0x10]
	add edi,0x53D
	xor esi,esi
	mov ecx,edi
	mov dword ptr [esp+0x28],esi
	call ZMap<long, long, long>::GetHeadPosition
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block23

 Block15:
	lea ecx,[esp+0x14]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x1C],0
	call ZMap<long, long, long>::GetNext
	mov esi,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	mov edx,ecx
	sub edx,eax
	je Block21

 Block16:
	cmp ecx,0x7D1
	je Block21

 Block17:
	cmp ecx,ebx
	je Block19

 Block18:
	cmp ecx,ebp
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push esi
	push eax
	call CSkillInfo::IsSkillVisible
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [esp+0x14]
	add dword ptr [esp+0x28],ecx

 Block21:
	cmp dword ptr [esp+0x18],0
	jne Block15

 Block22:
	mov eax,dword ptr [esp+0x28]
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4

 Block23:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4
}
}
// CUISkill::OpenSkillGuide
_SUB_EXCEPTION_HANDLER(4513D0)
__SUB_CLASS_THIS(004513D0, __thiscall, 55555,  CUISkill, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4513D0
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
	mov edi,ecx
	push 0x80
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+0x24]
	push ecx
	mov ecx,eax
	call CWndSkillGuide::_ctor_0
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block10

 Block4:
	add eax,8
	je Block10

 Block5:
	lea esi,[eax-8]
	test esi,esi
	je Block7

 Block6:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [edi+0xBC8]
	mov dword ptr [edi+0xBC8],esi
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CWndSkillGuide>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block10:
	xor esi,esi
	jmp Block7
}
}
// CUIMacroSys::IsShown
__SUB_CLASS_THIS0(0044C210, __thiscall, 55489,  IUIMsgHandler, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xAF0]
	ret
}
}
// CUISkill::OnMouseMove
__SUB_CLASS_THIS(0044B660, __thiscall, 55546,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push esi
	push edi
	mov esi,ecx
	push 0
	push ebp
	lea ebx,[esi-4]
	push eax
	mov ecx,ebx
	call CUISkill::GetSkillIndexFromPoint
	mov edi,eax
	test edi,edi
	jl Block4

 Block1:
	push 0
	mov ecx,ebx
	call CUISkill::GetSkillRootVisible
	mov ecx,dword ptr [eax+8]
	mov eax,dword ptr [ecx+edi*8+4]
	mov edx,dword ptr [esi]
	push 1
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebp+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,dword ptr [esp+0x20]
	lea ecx,[esi+0x84]
	push eax
	call CUIToolTip::SetToolTip_Skill
	cmp edi,dword ptr [esi+0xB70]
	je Block3

 Block2:
	push 0
	mov ecx,ebx
	mov dword ptr [esi+0xB70],edi
	call CWnd::InvalidateRect

 Block3:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	ret 8

 Block4:
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip
	or eax,0xFFFFFFFF
	cmp dword ptr [esi+0xB70],eax
	je Block6

 Block5:
	push 0
	mov ecx,ebx
	mov dword ptr [esi+0xB70],eax
	call CWnd::InvalidateRect

 Block6:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 8
}
}
// CUIMacroSys::OnButtonClicked
_SUB_EXCEPTION_HANDLER(44D530)
__SUB_CLASS_THIS(0044D530, __thiscall, 55485,  CUIMacroSys, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44D530
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
	cmp dword ptr [esp+0x20],0xBB8
	jne Block7

 Block1:
	cmp dword ptr [esi+0xAEC],0xFFFFFFFF
	je Block7

 Block2:
	mov ecx,dword ptr [esi+0x9C]
	lea eax,[esp+0x20]
	push eax
	call CCtrlEdit::GetText
	push 1
	push 0
	push 1
	push 0x400
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x28],0
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x24]
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	test edi,edi
	jne Block4

 Block3:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x11D
	jmp Block5

 Block4:
	mov eax,dword ptr [esi+0x94]
	mov eax,dword ptr [eax+0x48]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x28]
	mov dword ptr [esp+0x14],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0xAEC]
	mov ecx,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	push eax
	call CMacroSysMan::SetMacroInfo
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0xD01

 Block5:
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x34]
	add esp,0x14
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
