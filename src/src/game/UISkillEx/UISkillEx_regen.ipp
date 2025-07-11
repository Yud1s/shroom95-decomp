#include "regen.hpp"
// UISkillEx.ipp
#include "UISkillEx.hpp"

// CUIMacroSysEx::IsKindOf
__SUB_CLASS_THIS(0045AB10, __thiscall, 55732,  CUIMacroSysEx, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIMacroSysEx::ms_RTTI_CUIMacroSysEx
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
// CUISkillEx::OnSkillLevelUpButton
__SUB_CLASS_THIS(00459840, __thiscall, 55776,  CUISkillEx, void, long) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	push ebp
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ebp+0x20B8],0
	mov ebx,ecx
	jne Block20

 Block1:
	mov eax,dword ptr [ebp+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block20

 Block2:
	call get_update_time
	sub eax,dword ptr [ebp+0x20BC]
	cmp eax,0x1F4
	jl Block20

 Block3:
	push esi
	lea edx,[esp+0x10]
	push edx
	mov ecx,ebp
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xC],esi
	test eax,eax
	je Block8

 Block4:
	push edi
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
	mov esi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x18],0
	pop edi

 Block8:
	mov eax,dword ptr [ebx+0xB10]
	mov eax,dword ptr [eax+0x44]
	test eax,eax
	je Block10

 Block9:
	push eax
	lea ecx,[esi+0xCD]
	call ExtendSP::Get
	test al,al
	jbe Block19

 Block10:
	mov ecx,dword ptr [ebx+0xB10]
	cmp dword ptr [ecx+0x44],0
	jne Block12

 Block11:
	push esi
	call get_novice_skill_point
	add esp,4
	test eax,eax
	jle Block19

 Block12:
	mov edx,dword ptr [ebx+0xB18]
	mov eax,dword ptr [edx+0x38]
	mov ecx,dword ptr [esp+0x1C]
	lea esi,[ecx+eax*2]
	push 0
	mov ecx,ebx
	call CUISkillEx::GetSkillRootVisible
	test eax,eax
	je Block19

 Block13:
	test esi,esi
	jl Block19

 Block14:
	mov ecx,dword ptr [eax+8]
	test ecx,ecx
	je Block19

 Block15:
	cmp esi,dword ptr [ecx-4]
	jae Block19

 Block16:
	mov edx,ecx
	mov esi,dword ptr [edx+esi*8+4]
	push esi
	mov ecx,ebp
	call CWvsContext::GetSkillLevelUpState
	cmp eax,1
	jne Block19

 Block17:
	cmp dword ptr [esi+0x38],0
	jne Block19

 Block18:
	mov eax,dword ptr [esi]
	push eax
	mov ecx,ebp
	call CWvsContext::SendSkillUpRequest

 Block19:
	pop esi

 Block20:
	pop ebp
	pop ebx
	add esp,0xC
	ret 4
}
}
// CUIMacroSysEx::OnButtonClicked
_SUB_EXCEPTION_HANDLER(45BDA0)
__SUB_CLASS_THIS(0045BDA0, __thiscall, 55723,  CUIMacroSysEx, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_45BDA0
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
	cmp dword ptr [esp+0x1C],0xBB8
	jne Block4

 Block1:
	cmp dword ptr [esi+0xAE4],0xFFFFFFFF
	je Block4

 Block2:
	mov ecx,dword ptr [esi+0x94]
	lea eax,[esp+0x1C]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [esi+0x8C]
	mov eax,dword ptr [eax+0x48]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x24]
	mov dword ptr [esp+0x10],esp
	push edx
	mov dword ptr [esp+0x20],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0xAE4]
	mov ecx,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	push eax
	call CMacroSysMan::SetMacroInfo
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xD01
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x30]
	add esp,0x14
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIMacroSysEx::SetEnable
__SUB_CLASS_THIS(0045AAC0, __thiscall, 55725,  IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0xAE4],eax
	ret 4
}
}
// CUIMacroSysEx::IsShown
__SUB_CLASS_THIS0(0045AAE0, __thiscall, 55727,  IUIMsgHandler, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xAE8]
	ret
}
}
// CUISkillEx::OnCreate
_SUB_EXCEPTION_HANDLER(45E5C0)
__SUB_CLASS_THIS(0045E5C0, __thiscall, 55766,  CUISkillEx, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_45E5C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x18],edi
	xor ebp,ebp
	push ebp
	push ebp
	lea ecx,[edi+0xBA4]
	push edi
	call CLayoutMan::Init
	push 1
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x2C],esp
	push 0x4C
	push offset _S_UIUIWINDOW2IMGSK__17
	push ebp
	push 0x26
	mov ecx,esi
	mov dword ptr [esi],ebp
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x26
	mov ecx,esi
	call ZXString16::ReleaseBuffer
	mov eax,dword ptr [esp+0xA8]
	push eax
	mov ecx,edi
	call CUIWnd::OnCreate_1
	push 0xB04
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x98],ebp
	cmp ebx,ebp
	je Block2

 Block1:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x30]
	lea esi,[edi+4]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,0x11E
	push eax
	mov ecx,ebx
	call CUIMacroSysEx::_ctor_0
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x98],ebx
	cmp eax,ebp
	je Block13

 Block4:
	add eax,8
	cmp eax,ebp
	je Block13

 Block5:
	lea esi,[eax-8]
	cmp esi,ebp
	je Block7

 Block6:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [edi+0xB9C]
	mov dword ptr [edi+0xB9C],esi
	mov dword ptr [esp+0x3C],eax
	cmp eax,ebp
	je Block9

 Block8:
	push ebp
	lea ecx,[esp+0x3C]
	call ZRef<CUIMacroSysEx>::_ReleaseRaw

 Block9:
	cmp dword ptr [edi+0xB94],ebp
	jne Block11

 Block10:
	mov eax,dword ptr [edi+0xB9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push ebp
	call eax
	mov eax,dword ptr [edi+0xB9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax

 Block11:
	mov ecx,dword ptr [edi+0xB9C]
	call CUIMacroSysEx::ResetInfo
	mov esi,1
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [edi+0xB78],ebx
	mov dword ptr [esp+0x4C],ebp
	mov dword ptr [esp+0x50],esi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x98],esi
	cmp eax,ebp
	je Block14

 Block12:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block15

 Block13:
	xor esi,esi
	jmp Block7

 Block14:
	xor eax,eax

 Block15:
	mov dword ptr [esp+0x98],ebx
	cmp eax,ebp
	je Block23

 Block16:
	lea esi,[eax+8]
	cmp esi,ebp
	je Block23

 Block17:
	add esi,0xFFFFFFF8
	cmp esi,ebp
	je Block19

 Block18:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block19:
	mov eax,dword ptr [edi+0xB10]
	mov dword ptr [edi+0xB10],esi
	mov dword ptr [esp+0x3C],eax
	cmp eax,ebp
	je Block21

 Block20:
	push ebp
	lea ecx,[esp+0x3C]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block21:
	mov ecx,dword ptr [edi+0xB10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x48]
	push eax
	push 0x14
	push 0x107
	push 0xC2
	push 0xB
	push 8
	push 0x7D0
	push edi
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x98],2
	cmp eax,ebp
	je Block24

 Block22:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block25

 Block23:
	xor esi,esi
	jmp Block19

 Block24:
	xor eax,eax

 Block25:
	mov dword ptr [esp+0x98],ebx
	cmp eax,ebp
	je Block44

 Block26:
	lea esi,[eax+8]
	cmp esi,ebp
	je Block44

 Block27:
	add esi,0xFFFFFFF8
	cmp esi,ebp
	je Block29

 Block28:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block29:
	mov eax,dword ptr [edi+0xB18]
	mov dword ptr [edi+0xB18],esi
	mov dword ptr [esp+0x3C],eax
	cmp eax,ebp
	je Block31

 Block30:
	push ebp
	lea ecx,[esp+0x3C]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block31:
	mov ecx,dword ptr [edi+0xB18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	xor esi,esi
	push esi
	push 0x4D
	push 0xDB
	push 0x109
	push 8
	push 1
	push 0x7D1
	push edi
	call eax
	mov eax,dword ptr [edi+0xB18]
	lea ecx,[esp+0x28]
	mov dword ptr [eax+0x34],0x100
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x1C],ebp
	cmp eax,esi
	je Block36

 Block32:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block35

 Block33:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block35

 Block34:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block35:
	mov dword ptr [esp+0x2C],0
	xor esi,esi

 Block36:
	mov dword ptr [esp+0x6C],esi
	mov dword ptr [esp+0x64],esi
	mov dword ptr [esp+0x68],esi
	push esi
	lea edx,[esp+0x18]
	lea ecx,[ebp+0x5B5]
	push edx
	mov dword ptr [esp+0xA0],3
	mov dword ptr [esp+0x68],esi
	mov dword ptr [esp+0x1C],0x5654
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetAt
	test eax,eax
	je Block39

 Block37:
	push esi
	push esi
	push esi
	push 0x7E8
	push offset _S_UIUIWINDOW2IMGSK__16
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[edi+0xBA4]
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x3C],esi
	je Block39

 Block38:
	push esi
	lea ecx,[esp+0x3C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block39:
	push offset _S_UIUIWINDOW2IMGSK__15
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0x64],0
	call ZXString16::AssignCStr
	mov ebx,0x7DA
	mov dword ptr [esp+0x14],0xEF
	lea esi,[edi+0xB20]
	lea esp,[esp]

 Block40:
	mov ebp,0x77
	jmp Block42

 Block42:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x98],4
	test eax,eax
	je Block45

 Block43:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block46

 Block44:
	xor esi,esi
	jmp Block29

 Block45:
	xor eax,eax

 Block46:
	mov byte ptr [esp+0x98],3
	test eax,eax
	je Block63

 Block47:
	add eax,8
	je Block63

 Block48:
	lea ecx,[eax-8]
	mov dword ptr [esp+0x3C],ecx
	test ecx,ecx
	je Block50

 Block49:
	add ecx,0xC
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x3C]

 Block50:
	mov eax,dword ptr [esi]
	mov dword ptr [esi],ecx
	test eax,eax
	je Block55

 Block51:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block54

 Block52:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block54

 Block53:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block54:
	mov edi,dword ptr [esp+0x18]

 Block55:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x60]
	push eax
	mov eax,dword ptr [esp+0x18]
	push 1
	push eax
	push ebp
	push ebx
	push edi
	call edx
	add ebp,0x7F
	add esi,8
	inc ebx
	cmp ebp,0x175
	jl Block42

 Block56:
	add dword ptr [esp+0x14],0x2A
	cmp ebx,0x7DE
	jl Block40

 Block57:
	push 0
	push 0
	push 0
	push 0x7E7
	push offset _S_UIUIWINDOW2IMGSK__14
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[edi+0xBA4]
	call CLayoutMan::AddButton
	mov esi,eax
	mov eax,dword ptr [esi+4]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x98],5
	test eax,eax
	je Block59

 Block58:
	add eax,0xC
	push eax
	call ebp

 Block59:
	mov eax,dword ptr [edi+0xB40]
	test eax,eax
	je Block69

 Block60:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block68

 Block61:
	mov eax,dword ptr [edi+0xB40]
	test eax,eax
	je Block64

 Block62:
	add eax,8
	jmp Block65

 Block63:
	xor ecx,ecx
	jmp Block50

 Block64:
	xor eax,eax

 Block65:
	add eax,4
	push eax
	call ebp
	mov eax,dword ptr [edi+0xB40]
	test eax,eax
	je Block68

 Block66:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block68

 Block67:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block68:
	mov dword ptr [edi+0xB40],0

 Block69:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esi+4]
	mov dword ptr [edi+0xB40],ecx
	mov byte ptr [esp+0x98],3
	test eax,eax
	je Block77

 Block70:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block77

 Block71:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block73

 Block72:
	add eax,8
	jmp Block74

 Block73:
	xor eax,eax

 Block74:
	add eax,4
	push eax
	call ebp
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block77

 Block75:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block77

 Block76:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block77:
	lea ecx,[esp+0x18]
	push 0x1106
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [edi+0xB40]
	push 1
	push 1
	push eax
	mov byte ptr [esp+0xA4],6
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x98],3
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push edx
	call ebx
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x9C],7
	call ebx
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	push 0
	push 0
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x5C]
	push ecx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGSK__13
	mov byte ptr [esp+0xB0],8
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xAC],9
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea edx,[esp+0x84]
	mov byte ptr [esp+0xAC],8
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA0],0xA
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block91

 Block86:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [edi+0xB54]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x18]
	mov ebp,ecx
	test eax,eax
	je Block88

 Block87:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block88:
	mov dword ptr [edi+0xB54],ebp
	test esi,esi
	jge Block93

 Block89:
	cmp esi,0x80004002
	je Block93

 Block90:
	push esi
	call _com_issue_error

 Block91:
	mov eax,dword ptr [edi+0xB54]
	test eax,eax
	je Block93

 Block92:
	mov dword ptr [edi+0xB54],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block93:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0x98],8
	cmp word ptr [esp+0x70],bp
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[esp+0x70]
	push ecx
	call esi

 Block97:
	mov byte ptr [esp+0x98],7
	cmp word ptr [esp+0x50],bp
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea eax,[esp+0x50]
	push eax
	call esi

 Block101:
	mov byte ptr [esp+0x98],3
	cmp word ptr [esp+0x38],bp
	jne Block104

 Block102:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea edx,[esp+0x38]
	push edx
	call esi

 Block105:
	lea eax,[esp+0x38]
	push eax
	call ebx
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block107

 Block106:
	push eax
	call _com_issue_error

 Block107:
	lea edx,[esp+0x50]
	push edx
	mov byte ptr [esp+0x9C],0xB
	call ebx
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block109

 Block108:
	push eax
	call _com_issue_error

 Block109:
	push 0
	push 0
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x5C]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0xC
	push offset _S_UIUIWINDOW2IMGSK__12
	mov byte ptr [esp+0xB0],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xAC],0xD
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	lea eax,[esp+0x84]
	mov byte ptr [esp+0xAC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA0],0xE
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block117

 Block112:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [edi+0xB58]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x18]
	mov ebp,ecx
	test eax,eax
	je Block114

 Block113:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block114:
	mov dword ptr [edi+0xB58],ebp
	test esi,esi
	jge Block119

 Block115:
	cmp esi,0x80004002
	je Block119

 Block116:
	push esi
	call _com_issue_error

 Block117:
	mov eax,dword ptr [edi+0xB58]
	test eax,eax
	je Block119

 Block118:
	mov dword ptr [edi+0xB58],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block119:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0x98],bl
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	mov esi,8
	mov byte ptr [esp+0x98],0xB
	cmp word ptr [esp+0x50],si
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block127:
	mov byte ptr [esp+0x98],3
	cmp word ptr [esp+0x38],si
	jne Block130

 Block128:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block133

 Block132:
	push eax
	call _com_issue_error

 Block133:
	lea edx,[esp+0x50]
	push edx
	mov byte ptr [esp+0x9C],0xF
	call esi
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block135

 Block134:
	push eax
	call _com_issue_error

 Block135:
	push 0
	push 0
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x5C]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x10
	push offset _S_UIUIWINDOW2IMGSK__11
	mov byte ptr [esp+0xB0],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xAC],0x11
	jne Block137

 Block136:
	push 0x80004003
	call _com_issue_error

 Block137:
	lea eax,[esp+0x84]
	mov byte ptr [esp+0xAC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA0],0x12
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block143

 Block138:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [edi+0xB5C]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x18]
	mov ebp,ecx
	test eax,eax
	je Block140

 Block139:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block140:
	mov dword ptr [edi+0xB5C],ebp
	test esi,esi
	jge Block145

 Block141:
	cmp esi,0x80004002
	je Block145

 Block142:
	push esi
	call _com_issue_error

 Block143:
	mov eax,dword ptr [edi+0xB5C]
	test eax,eax
	je Block145

 Block144:
	mov dword ptr [edi+0xB5C],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block145:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0x98],bl
	jne Block148

 Block146:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block149:
	mov esi,8
	mov byte ptr [esp+0x98],0xF
	cmp word ptr [esp+0x50],si
	jne Block152

 Block150:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block153:
	mov byte ptr [esp+0x98],3
	cmp word ptr [esp+0x38],si
	jne Block156

 Block154:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block157:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block159

 Block158:
	push eax
	call _com_issue_error

 Block159:
	lea edx,[esp+0x50]
	mov bl,0x13
	push edx
	mov byte ptr [esp+0x9C],bl
	call esi
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block161

 Block160:
	push eax
	call _com_issue_error

 Block161:
	push 0
	push 0
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x5C]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGSK__10
	mov byte ptr [esp+0xB0],0x14
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xAC],0x15
	jne Block163

 Block162:
	push 0x80004003
	call _com_issue_error

 Block163:
	lea eax,[esp+0x84]
	mov byte ptr [esp+0xAC],0x14
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA0],0x16
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block169

 Block164:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [edi+0xB60]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x18]
	mov ebp,ecx
	test eax,eax
	je Block166

 Block165:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block166:
	mov dword ptr [edi+0xB60],ebp
	test esi,esi
	jge Block171

 Block167:
	cmp esi,0x80004002
	je Block171

 Block168:
	push esi
	call _com_issue_error

 Block169:
	mov eax,dword ptr [edi+0xB60]
	test eax,eax
	je Block171

 Block170:
	mov dword ptr [edi+0xB60],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block171:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0x98],0x14
	jne Block174

 Block172:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	mov esi,8
	mov byte ptr [esp+0x98],bl
	cmp word ptr [esp+0x50],si
	jne Block178

 Block176:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block179:
	mov byte ptr [esp+0x98],3
	cmp word ptr [esp+0x38],si
	jne Block182

 Block180:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block183

 Block181:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block183

 Block182:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block183:
	mov eax,dword ptr [edi+0xAFC]
	mov ecx,dword ptr [edi+0xB10]
	push eax
	call CCtrlTab::SetTab
	mov ecx,edi
	call CUISkillEx::SetSkillRootList
	mov ecx,edi
	call CUISkillEx::ResetInfo
	cmp dword ptr [edi+0xBA0],1
	jne Block187

 Block184:
	mov eax,dword ptr [edi+0xB08]
	test eax,eax
	je Block186

 Block185:
	mov eax,dword ptr [eax-4]

 Block186:
	mov ecx,dword ptr [edi+0xB10]
	dec eax
	push eax
	call CCtrlTab::SetTab

 Block187:
	cmp dword ptr [edi+0xB7C],0
	je Block189

 Block188:
	mov ecx,edi
	call CUISkillEx::CreateTip

 Block189:
	mov dword ptr [esp+0x14],0
	mov ebp,dword ptr [esp+0x1C]
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	lea esi,[ebp+0x5B5]
	mov ecx,esi
	mov byte ptr [esp+0xA0],0x17
	mov dword ptr [esp+0x20],0x5654
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetAt
	test eax,eax
	je Block246

 Block190:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x38]
	push edx
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x3D]
	push ecx
	add eax,0x39
	push eax
	mov byte ptr [esp+0xA0],0x18
	call _ZtlSecureFuseHelper<short>::call
	movsx ebx,ax
	mov eax,dword ptr [esp+0x44]
	add esp,8
	mov byte ptr [esp+0x98],0x17
	test eax,eax
	je Block194

 Block191:
	lea esi,[eax-0x10]
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block194

 Block192:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block194

 Block193:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block194:
	cmp ebx,0x7D1
	je Block253

 Block195:
	push ebx
	call get_job_level
	add esp,4
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block253

 Block196:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x70]
	push ecx
	call esi
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block198

 Block197:
	push eax
	call _com_issue_error

 Block198:
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0x9C],0x19
	call esi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block200

 Block199:
	push eax
	call _com_issue_error

 Block200:
	push 0
	push 0
	lea edx,[esp+0x78]
	push edx
	lea eax,[esp+0x5C]
	push eax
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,0x1A
	push offset _S_UIUIWINDOW2IMGSK__9
	mov byte ptr [esp+0xB0],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xAC],0x1B
	jne Block202

 Block201:
	push 0x80004003
	call _com_issue_error

 Block202:
	lea ecx,[esp+0x94]
	push ecx
	mov byte ptr [esp+0xB0],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA0],0x1C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block205

 Block203:
	cmp eax,0x80004002
	je Block205

 Block204:
	push eax
	call _com_issue_error

 Block205:
	mov esi,8
	mov byte ptr [esp+0x98],0x1E
	cmp word ptr [esp+0x80],si
	jne Block208

 Block206:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	test eax,eax
	je Block209

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block209

 Block208:
	lea eax,[esp+0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block209:
	mov byte ptr [esp+0x98],0x1F
	cmp word ptr [esp+0x50],si
	jne Block212

 Block210:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block213

 Block211:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block213

 Block212:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block213:
	mov byte ptr [esp+0x98],0x20
	cmp word ptr [esp+0x70],si
	jne Block216

 Block214:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block217

 Block215:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block217

 Block216:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block217:
	push 0
	push 0xFF
	push 0xFFFFFFFF
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	push 0
	push 0
	lea eax,[esp+0x38]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xB4],0x21
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xB0],0x22
	test ecx,ecx
	jne Block219

 Block218:
	push 0x80004003
	call _com_issue_error

 Block219:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x54],esp
	push edx
	call IWzGr2DLayer::Getlt
	mov ebp,dword ptr [esp+0x34]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	mov dword ptr [eax],ebp
	test ebp,ebp
	je Block221

 Block220:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block221:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0xC0],0x23
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xB8C]
	add esp,0x28
	cmp esi,eax
	je Block226

 Block222:
	mov dword ptr [edi+0xB8C],eax
	test eax,eax
	je Block224

 Block223:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block224:
	test esi,esi
	je Block226

 Block225:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block226:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block228

 Block227:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block228:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x98],0x20
	test eax,eax
	je Block230

 Block229:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block230:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block232

 Block231:
	push eax
	call _com_issue_error

 Block232:
	lea edx,[esp+0x38]
	mov bl,0x24
	push edx
	mov byte ptr [esp+0x9C],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block234

 Block233:
	push eax
	call _com_issue_error

 Block234:
	mov ecx,dword ptr [edi+0xB8C]
	mov byte ptr [esp+0x98],0x25
	test ecx,ecx
	jne Block236

 Block235:
	push 0x80004003
	call _com_issue_error

 Block236:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x98],bl
	cmp word ptr [esp+0x38],si
	jne Block239

 Block237:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block240

 Block238:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block240

 Block239:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block240:
	mov byte ptr [esp+0x98],0x20
	cmp word ptr [esp+0x28],si
	jne Block243

 Block241:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block244

 Block242:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block244

 Block243:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block244:
	mov edx,dword ptr [esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push offset _S_UIUIWINDOW2IMGSK__8
	push eax
	call ZXString16::Format
	add esp,0xC
	mov byte ptr [esp+0x98],0x17
	test ebp,ebp
	je Block253

 Block245:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx
	jmp Block253

 Block246:
	push 0
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x2C],0x55F7
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetAt
	test eax,eax
	je Block248

 Block247:
	push 3
	push offset _S_UIUIWINDOW2IMGSK__7
	lea ecx,[esp+0x1C]
	push ecx
	jmp Block252

 Block248:
	push 0
	lea edx,[esp+0x28]
	mov ebx,0x55FB
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x2C],ebx
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetAt
	test eax,eax
	jne Block251

 Block249:
	lea eax,[esp+0x24]
	push eax
	lea ecx,[ebp+0x6F5]
	mov dword ptr [esp+0x28],ebx
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	jne Block251

 Block250:
	push 1
	push offset _S_UIUIWINDOW2IMGSK__7
	lea ecx,[esp+0x1C]
	push ecx
	jmp Block252

 Block251:
	push 2
	push offset _S_UIUIWINDOW2IMGSK__7
	lea edx,[esp+0x1C]
	push edx

 Block252:
	call ZXString16::Format
	add esp,0xC

 Block253:
	push 0
	push 0xFF
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	push 0
	push 0
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0xB4],0x26
	call CWnd::GetLayer
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [esi],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xB8],0x27
	mov dword ptr [esp+0x48],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block255

 Block254:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block255:
	mov ecx,esi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block258

 Block256:
	cmp eax,0x80004002
	je Block258

 Block257:
	push eax
	call _com_issue_error

 Block258:
	mov ebp,dword ptr [esp+0x30]
	push 0
	lea ecx,[esp+0x44]
	push ebp
	push ecx
	mov byte ptr [esp+0xC0],0x28
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xB90]
	add esp,0x28
	cmp esi,eax
	je Block263

 Block259:
	mov dword ptr [edi+0xB90],eax
	test eax,eax
	je Block261

 Block260:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block261:
	test esi,esi
	je Block263

 Block262:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block263:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block265

 Block264:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block265:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x98],0x17
	test eax,eax
	je Block267

 Block266:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block267:
	cmp dword ptr [edi+0xB90],0
	je Block284

 Block268:
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
	jge Block270

 Block269:
	push eax
	call _com_issue_error

 Block270:
	lea edx,[esp+0x38]
	mov bl,0x29
	push edx
	mov byte ptr [esp+0x9C],bl
	call esi
	lea eax,[esp+0x38]
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
	mov esi,dword ptr [edi+0xB90]
	mov byte ptr [esp+0x98],0x2A
	test esi,esi
	jne Block274

 Block273:
	push 0x80004003
	call _com_issue_error

 Block274:
	mov edx,dword ptr [esp+0x50]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x64]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x68]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x6C]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x48]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x64]
	push 0x20
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x110]
	push esi
	call eax
	test eax,eax
	jge Block276

 Block275:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block276:
	mov esi,8
	mov byte ptr [esp+0x98],bl
	cmp word ptr [esp+0x38],si
	jne Block279

 Block277:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block280

 Block278:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block280

 Block279:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block280:
	mov byte ptr [esp+0x98],0x17
	cmp word ptr [esp+0x50],si
	jne Block283

 Block281:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block284

 Block282:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block284

 Block283:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block284:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],edi
	mov byte ptr [esp+0x98],3
	test ebp,ebp
	je Block286

 Block285:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block286:
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	test eax,eax
	je Block288

 Block287:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block288:
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret 4
}
}
// CUISkillEx::~CUISkillEx
_SUB_EXCEPTION_HANDLER(45C8C0)
__SUB_CLASS_THIS0(0045C8C0, __thiscall, 55765,  CUISkillEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_45C8C0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUISkillEx::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISkillEx::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISkillEx::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xBA4]
	mov dword ptr [esp+0x1C],0x13
	call CLayoutMan::~CLayoutMan
	lea edi,[esi+0xB98]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],0x12
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CUIMacroSysEx>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	mov eax,dword ptr [esi+0xB90]
	mov byte ptr [esp+0x1C],0x11
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xB8C]
	mov byte ptr [esp+0x1C],0x10
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 3
	push 4
	lea eax,[esi+0xB80]
	push eax
	mov byte ptr [esp+0x2C],0xF
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0xB74]
	mov byte ptr [esp+0x1C],0xE
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0xB70]
	mov byte ptr [esp+0x1C],0xD
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0xB6C]
	mov byte ptr [esp+0x1C],0xC
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0xB68]
	mov byte ptr [esp+0x1C],0xB
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0xB64]
	mov byte ptr [esp+0x1C],0xA
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esi+0xB60]
	mov byte ptr [esp+0x1C],9
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [esi+0xB5C]
	mov byte ptr [esp+0x1C],8
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
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
	je Block22

 Block21:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block22:
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
	je Block24

 Block23:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block24:
	lea edi,[esi+0xB0C]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block26

 Block25:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlTab>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block26:
	lea ecx,[esi+0xB08]
	mov byte ptr [esp+0x1C],1
	call ZArray<long>::RemoveAll
	mov ecx,esi
	mov dword ptr [TSingleton<CUISkillEx>::ms_pInstance],ebx
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
// CUIMacroSysEx::OnMouseButton
_SUB_EXCEPTION_HANDLER(45B550)
__SUB_CLASS_THIS(0045B550, __thiscall, 55720,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_45B550
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
	call CUIMacroSysEx::GetIndexByPos
	mov ebx,dword ptr [ebp+0x28]
	cmp ebx,edi
	je Block120

 Block2:
	push ebx
	mov ecx,esi
	call CUIMacroSysEx::OnSelected
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
	call CUIMacroSysEx::OnSelected
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
	lea ecx,[esi+0x94]
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
// CUISkillEx::OnDestroy
__SUB_CLASS_THIS0(004595B0, __thiscall, 55765,  CUISkillEx, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB10]
	call CCtrlTab::RemoveAllItems
	mov ecx,dword ptr [esi+0xB9C]
	test ecx,ecx
	je Block4

 Block1:
	push edi
	call CWnd::Destroy
	cmp dword ptr [esi+0xB9C],0
	lea edi,[esi+0xB98]
	je Block3

 Block2:
	push 0
	mov ecx,edi
	call ZRef<CUIMacroSysEx>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block3:
	pop edi

 Block4:
	mov ecx,esi
	call CUIWnd::OnDestroy
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::RemoveFromStackForTab
	pop esi
	ret
}
}
// CUISkillEx::OnMouseButton
_SUB_EXCEPTION_HANDLER(459FF0)
__SUB_CLASS_THIS(00459FF0, __thiscall, 55769,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_459FF0
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
	call CUISkillEx::GetSkillIndexFromPoint
	mov esi,eax
	xor edi,edi
	cmp esi,edi
	jl Block107

 Block7:
	push edi
	mov ecx,ebp
	call CUISkillEx::GetSkillRootVisible
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
	call CUISkillEx::GetSkillIndexFromPoint
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
	call CUISkillEx::GetSkillRootVisible
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
// CUISkillEx::OnButtonClicked
_SUB_EXCEPTION_HANDLER(459E10)
__SUB_CLASS_THIS(00459E10, __thiscall, 55771,  CUISkillEx, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_459E10
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
	mov esi,dword ptr [esp+0x24]
	lea eax,[esi-0x7DA]
	cmp eax,3
	ja Block2

 Block1:
	add esi,0xFFFFF826
	push esi
	call CUISkillEx::OnSkillLevelUpButton
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block2:
	cmp esi,0x7E7
	jne Block6

 Block3:
	call CUISkillEx::ShiftMacroUIState

 Block4:
	push esi
	mov ecx,edi
	call CUIWnd::OnButtonClicked

 Block5:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block6:
	cmp esi,0x7E8
	jne Block4

 Block7:
	push 0xF7508
	push 0xF7508
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	push eax
	call CreateNpc
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	add esp,8
	test eax,eax
	je Block15

 Block8:
	add eax,8
	je Block15

 Block9:
	lea esi,[eax-8]
	mov dword ptr [esp+0x10],esi
	test esi,esi
	je Block11

 Block10:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block11:
	mov dword ptr [esp+0x1C],0
	test esi,esi
	je Block13

 Block12:
	push 0
	mov ecx,esi
	call CNpc::SetQuestList
	sub esp,8
	mov eax,esp
	lea edx,[esi+0xC]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [eax+4],esi
	call edi
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::TalkToNpc

 Block13:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block5

 Block14:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CNpc>::_ReleaseRaw
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block15:
	xor esi,esi
	mov dword ptr [esp+0x10],esi
	jmp Block11
}
}
// CUISkillEx::GetRecommendSKill
_SUB_EXCEPTION_HANDLER(45CB60)
__SUB_CLASS_THIS(0045CB60, __thiscall, 55775,  CUISkillEx, long, const SKILLROOT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_45CB60
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
	test byte ptr [_D__S3__4],1
	jne Block2

 Block1:
	or dword ptr [_D__S3__4],1
	push 0xB12E40
	mov dword ptr [_D_S_ARECOMMSKILL__1],0
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
	je Block96

 Block8:
	xor edi,edi
	mov dword ptr [ebp+0x60],edi
	mov dword ptr [ebp+0x44],edi
	mov dword ptr [ebp+0x48],edi
	mov dword ptr [ebp+0x4C],edi
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
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add esp,8
	add eax,edx
	jne Block15

 Block9:
	cmp word ptr [ebx+0xF7],1
	jne Block15

 Block10:
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	push 0x1AE
	call CSkillInfo::GetSkillRootVisible
	xor esi,esi

 Block11:
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block14

 Block12:
	cmp esi,dword ptr [eax-4]
	jae Block14

 Block13:
	mov eax,dword ptr [eax+esi*8+4]
	mov edx,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push edx
	push ebx
	call CSkillInfo::GetSkillLevel_0
	add edi,eax
	inc esi
	jmp Block11

 Block14:
	lea eax,[ebp+0x40]
	mov dword ptr [ebp+0x60],edi
	mov dword ptr [ebp+0x74],eax
	jmp Block16

 Block15:
	cmp dword ptr [ebp+0x74],edi
	je Block49

 Block16:
	mov dword ptr [ebp+0x5C],0
	lea ecx,[ebp+0x58]
	push 0x11B2
	push ecx
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],2
	test esi,esi
	je Block20

 Block17:
	cmp dword ptr [esi+4],0
	jne Block19

 Block18:
	mov edx,dword ptr [esi]
	push edx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block19:
	mov esi,dword ptr [esi+4]
	jmp Block21

 Block20:
	xor esi,esi

 Block21:
	mov eax,dword ptr [ebp+0x74]
	mov ecx,dword ptr [eax]
	push ecx
	lea edx,[ebp+0x5C]
	push esi
	push edx
	call ZXString<char>::Format
	mov ecx,dword ptr [ebp+0x58]
	add esp,0xC
	mov byte ptr [ebp-4],1
	test ecx,ecx
	je Block23

 Block22:
	call _xbstr_t::Data_t::Release

 Block23:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+8]
	push eax
	call esi
	lea ecx,[ebp+8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea edx,[ebp+0x18]
	push edx
	mov byte ptr [ebp-4],3
	call esi
	lea eax,[ebp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov edi,dword ptr [ebp+0x5C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],4
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp+8]
	push ecx
	lea edx,[ebp+0x18]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],5
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],4
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block32

 Block30:
	cmp eax,0x80004002
	je Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	cmp word ptr [ebp-0x2C],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],8
	jne Block35

 Block33:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[ebp-0x2C]
	push edx
	call esi

 Block36:
	cmp word ptr [ebp+0x18],8
	mov byte ptr [ebp-4],9
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [ebp+0x18],ax
	mov eax,dword ptr [ebp+0x20]
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[ebp+0x18]
	push ecx
	call esi

 Block40:
	cmp word ptr [ebp+8],8
	mov byte ptr [ebp-4],0xA
	jne Block43

 Block41:
	mov eax,dword ptr [ebp+0x10]
	xor edx,edx
	mov word ptr [ebp+8],dx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[ebp+8]
	push eax
	call esi

 Block44:
	mov eax,dword ptr [ebp+0x64]
	test eax,eax
	sete cl
	test cl,cl
	je Block50

 Block45:
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block49

 Block48:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block49:
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call SKILLROOT::~SKILLROOT
	jmp Block96

 Block50:
	mov eax,dword ptr [ebp+0x74]
	mov eax,dword ptr [eax]
	cmp eax,dword ptr [_D_S_NSKILLROOTID__1]
	je Block80

 Block51:
	mov ecx,offset _D_S_ARECOMMSKILL__1
	mov dword ptr [_D_S_NSKILLROOTID__1],eax
	call ZArray<CUISkillEx::RecommSkillPair>::RemoveAll
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0xB
	test ecx,ecx
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea edx,[ebp+0x2C]
	push edx
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp+0x28]
	mov byte ptr [ebp-4],0xC
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	mov dword ptr [ebp+0x50],0
	jmp Block57

 Block57:
	mov esi,dword ptr [ebp+0x28]
	test esi,esi
	je Block28

 Block58:
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[ebp+0x50]
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
	mov byte ptr [ebp-4],0x10
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	add esp,8
	push 0xFFFFFFFF
	mov ecx,offset _D_S_ARECOMMSKILL__1
	mov esi,eax
	call ZArray<CUISkillEx::RecommSkillPair>::InsertBefore
	mov dword ptr [eax],edi
	mov dword ptr [eax+4],esi
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0xF
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
	mov byte ptr [ebp-4],0xE
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
	jmp Block24

 Block75:
	push offset _D_S_ARECOMMSKILL__1
	call ZSortHelperDefault<CUISkillEx::RecommSkillPair>::call_1
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	add esp,4
	push esi
	mov byte ptr [ebp-4],0xB
	call ecx
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0xA
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
	mov edx,ecx
	mov eax,dword ptr [edx+8]
	mov eax,dword ptr [eax+esi*8+4]
	mov ecx,dword ptr [eax]
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	call CSkillInfo::GetSkillLevel_0
	add edi,eax
	inc esi
	jmp Block81

 Block84:
	mov dword ptr [ebp+0x60],edi
	mov ecx,offset _D_S_ARECOMMSKILL__1
	xor edi,edi
	xor esi,esi
	call ZArray<CUISkillEx::RecommSkillPair>::GetCount
	test eax,eax
	jbe Block88

 Block85:
	mov ebx,dword ptr [_D_S_ARECOMMSKILL__1]
	lea esp,[esp]

 Block86:
	mov eax,dword ptr [ebp+0x60]
	cmp dword ptr [ebx+esi*8],eax
	jge Block98

 Block87:
	mov edi,dword ptr [ebx+esi*8+4]
	mov ecx,offset _D_S_ARECOMMSKILL__1
	inc esi
	call ZArray<CUISkillEx::RecommSkillPair>::GetCount
	cmp esi,eax
	jb Block86

 Block88:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block90

 Block89:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block90:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block92:
	mov eax,dword ptr [ebp+0x4C]
	mov dword ptr [ebp-4],0x13
	test eax,eax
	je Block94

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block94:
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],0x12
	call ZArray<ZRef<SKILLENTRY>>::RemoveAll
	mov eax,dword ptr [ebp+0x44]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block96

 Block95:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block96:
	xor eax,eax

 Block97:
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

 Block98:
	jne Block100

 Block99:
	mov esi,dword ptr [ebx+esi*8+4]
	jmp Block101

 Block100:
	mov esi,edi

 Block101:
	cmp dword ptr [ebp+0x64],0
	mov byte ptr [ebp-4],1
	je Block103

 Block102:
	mov eax,dword ptr [ebp+0x64]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block103:
	cmp dword ptr [ebp+0x5C],0
	mov byte ptr [ebp-4],0
	je Block105

 Block104:
	mov ecx,dword ptr [ebp+0x5C]
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	add esp,4

 Block105:
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call SKILLROOT::~SKILLROOT
	mov eax,esi
	jmp Block97
}
}
// CUISkillEx::GetRTTI
__SUB_CLASS_THIS0(0045CAF0, __thiscall, 55783,  CUISkillEx, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUISkillEx::ms_RTTI_CUISkillEx
	ret
}
}
// CUIMacroSysEx::OnCreate
_SUB_EXCEPTION_HANDLER(45C420)
__SUB_CLASS_THIS(0045C420, __thiscall, 55718,  CUIMacroSysEx, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_45C420
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
	xor ebp,ebp
	push ebp
	push ebp
	lea edi,[esi+0xAF0]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	push ebp
	push ebp
	push 1
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGSK__5
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push ebp
	push ebp
	push ebp
	push 0xBB8
	push offset _S_UIUIWINDOW2IMGSK__4
	lea eax,[esp+0x30]
	push eax
	mov ecx,edi
	mov dword ptr [esi+0xAE4],0xFFFFFFFF
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov dword ptr [esp+0xB0],ebp
	lea ebx,[esi+0x80]
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	cmp dword ptr [ebx+4],ebp
	je Block4

 Block3:
	push ebp
	mov ecx,ebx
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebx+4],ebp

 Block4:
	mov ecx,dword ptr [edi+4]
	or edi,0xFFFFFFFF
	mov dword ptr [ebx+4],ecx
	mov dword ptr [esp+0xB0],edi
	cmp dword ptr [esp+0x20],ebp
	je Block6

 Block5:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block6:
	cmp dword ptr [esi+0xAE4],ebp
	jge Block8

 Block7:
	mov eax,dword ptr [esi+0x84]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax

 Block8:
	lea ecx,[esp+0x1C]
	push 0x1108
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x84]
	push 1
	push 1
	push eax
	mov dword ptr [esp+0xBC],1
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0xB0],edi
	cmp eax,ebp
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	lea ecx,[esp+0x38]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	mov eax,0xF
	push offset _S_
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0xB4],2
	mov dword ptr [esp+0x40],ebp
	mov dword ptr [esp+0x58],eax
	mov dword ptr [esp+0x5C],eax
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],3
	cmp eax,ebp
	je Block12

 Block11:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block13

 Block12:
	xor eax,eax

 Block13:
	mov byte ptr [esp+0xB0],2
	cmp eax,ebp
	je Block28

 Block14:
	add eax,8
	cmp eax,ebp
	je Block28

 Block15:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block17

 Block16:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block19

 Block18:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block19:
	mov ecx,dword ptr [esi+0x8C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x38]
	push edx
	push 0x11A
	push 9
	push 0xBC2
	push esi
	call eax
	mov ecx,dword ptr [esi+0x8C]
	push ebp
	call CCtrlCheckBox::SetChecked
	lea ecx,[esp+0x6C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea ecx,[esp+0x1C]
	push 0x1A25
	push ecx
	mov byte ptr [esp+0xB8],4
	mov dword ptr [esp+0x98],ebp
	mov dword ptr [esp+0x90],0xFF555555
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea edx,[esp+0x80]
	cmp edx,edi
	je Block24

 Block20:
	mov ecx,dword ptr [esp+0x80]
	cmp ecx,ebp
	je Block22

 Block21:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x80],ebp

 Block22:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x80],edi
	cmp edi,ebp
	je Block24

 Block23:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block24:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebp
	je Block26

 Block25:
	call _xbstr_t::Data_t::Release

 Block26:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xA0],0xC
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],5
	cmp eax,ebp
	je Block29

 Block27:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block30

 Block28:
	xor edi,edi
	jmp Block17

 Block29:
	xor eax,eax

 Block30:
	mov byte ptr [esp+0xB0],4
	cmp eax,ebp
	je Block40

 Block31:
	add eax,8
	cmp eax,ebp
	je Block40

 Block32:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block34

 Block33:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block34:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block36

 Block35:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block36:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x6C]
	push eax
	push 0xE
	push 0x72
	push 0x104
	push 0x35
	push 0xBC3
	push esi
	call edx
	mov ecx,dword ptr [TSingleton<CUISkillEx>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0xB0],6
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebp
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block38:
	lea ecx,[esp+0x34]
	push ecx
	mov bl,7
	mov ecx,esi
	mov byte ptr [esp+0xB4],bl
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0xB0],8
	cmp esi,ebp
	jne Block41

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	xor edi,edi
	jmp Block34

 Block41:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x40]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,ebp
	jge Block43

 Block42:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block43:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0xB0],bl
	cmp eax,ebp
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block45:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xB0],6
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB0],4
	cmp eax,ebp
	je Block51

 Block50:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block51:
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xB0],2
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	cmp ecx,ebp
	je Block53

 Block52:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x44],ebp

 Block53:
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
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
// CUISkillEx::ShiftMacroUIState
__SUB_CLASS_THIS0(00459100, __thiscall, 55765,  CUISkillEx, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB9C]
	test eax,eax
	je Block5

 Block1:
	xor ecx,ecx
	cmp dword ptr [esi+0xB94],ecx
	sete cl
	mov dword ptr [esi+0xB94],ecx
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
	mov eax,dword ptr [esi+0xB9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov ecx,dword ptr [esi+0xB9C]
	pop esi
	jmp  CUIMacroSysEx::ResetInfo

 Block5:
	pop esi
	ret
}
}
// CUIMacroSysEx::Draw
_SUB_EXCEPTION_HANDLER(45ACE0)
__SUB_CLASS_THIS(0045ACE0, __thiscall, 55728,  CUIMacroSysEx, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_45ACE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
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
	mov dword ptr [ebp-0x44],esi
	mov eax,dword ptr [ebp+8]
	push eax
	call CWnd::Draw
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov esi,dword ptr [esi+0xAE4]
	mov dword ptr [ebp-4],0
	cmp esi,0xFFFFFFFF
	je Block31

 Block1:
	cmp esi,4
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
	lea ecx,[ebp-0x68]
	push ecx
	mov byte ptr [ebp-4],1
	call edi
	lea edx,[ebp-0x68]
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
	lea ecx,[ebp-0x68]
	push ecx
	push ecx
	mov dword ptr [ebp-0x48],esp
	mov ecx,esp
	mov bl,2
	push offset _S_UIUIWINDOW2IMGSK__1
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
	cmp word ptr [ebp-0x68],di
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x60]
	xor edx,edx
	mov word ptr [ebp-0x68],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[ebp-0x68]
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
	mov word ptr [ebp-0x3C],ax
	mov dword ptr [ebp-0x34],0xFF
	cmp dword ptr [ebp-0x14],0
	mov byte ptr [ebp-4],9
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov edi,dword ptr [ebp-0x18]
	imul esi,0x29
	lea ecx,[ebp-0x3C]
	push ecx
	mov ecx,dword ptr [ebp-0x14]
	push edi
	add esi,0x1B
	push esi
	push 0xB
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],8
	jne Block28

 Block26:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[ebp-0x3C]
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
	mov eax,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	mov edi,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x48],eax
	xor eax,eax
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-0x40],0x1E

 Block32:
	xor ecx,ecx
	mov dword ptr [ebp-0x6C],ecx
	jmp Block34

 Block34:
	mov esi,dword ptr [ZImports::_VariantInit]
	cmp ecx,3
	jne Block64

 Block35:
	mov dword ptr [ebp-0x2C],0
	push eax
	lea ecx,[ebp-0x2C]
	push offset _S_UIUIWINDOW2IMGSK
	push ecx
	mov byte ptr [ebp-4],0xA
	call ZXString<char>::Format
	mov edx,3
	add esp,0xC
	mov word ptr [ebp-0x28],dx
	mov dword ptr [ebp-0x20],0xFF
	lea eax,[ebp-0x58]
	push eax
	mov byte ptr [ebp-4],0xB
	call esi
	lea ecx,[ebp-0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block36:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],0xC
	call esi
	lea eax,[ebp-0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block37:
	mov ebx,dword ptr [ebp-0x2C]
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
	lea ecx,[ebp-0x58]
	push ecx
	lea edx,[ebp-0x3C]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x70],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xE
	je Block7

 Block38:
	lea eax,[ebp-0x80]
	mov byte ptr [ebp-4],0xD
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x70],esi
	test eax,eax
	je Block41

 Block39:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x84]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x84]
	mov esi,ecx
	mov dword ptr [ebp-0x70],esi
	test eax,eax
	jge Block41

 Block40:
	cmp eax,0x80004002
	jne Block3

 Block41:
	mov byte ptr [ebp-4],0x10
	test edi,edi
	je Block7

 Block42:
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
	mov eax,dword ptr [ebp-0x40]
	mov ecx,dword ptr [edx+0x80]
	push esi
	push eax
	push 0x87
	push edi
	call ecx
	test eax,eax
	jge Block44

 Block43:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block44:
	mov byte ptr [ebp-4],0xF
	test esi,esi
	je Block46

 Block45:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block46:
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],0xD
	jne Block49

 Block47:
	mov eax,dword ptr [ebp-0x78]
	xor ecx,ecx
	mov word ptr [ebp-0x80],cx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[ebp-0x80]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov esi,8
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x3C],si
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x58],si
	jne Block57

 Block55:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[ebp-0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x28],si
	jne Block61

 Block59:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[ebp-0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov byte ptr [ebp-4],0
	test ebx,ebx
	je Block73

 Block63:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4
	jmp Block73

 Block64:
	push ecx
	mov ecx,dword ptr [ebp-0x48]
	push eax
	call CMacroSysMan::GetMacro
	test eax,eax
	je Block73

 Block65:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	test eax,eax
	je Block73

 Block66:
	mov ecx,3
	mov word ptr [ebp-0x68],cx
	mov ecx,0xFF
	mov dword ptr [ebp-0x60],ecx
	mov edx,dword ptr [eax+0x25C]
	mov byte ptr [ebp-4],0x11
	test edi,edi
	je Block7

 Block67:
	mov ebx,dword ptr [ebp-0x68]
	mov esi,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x64]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x5C]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp-0x6C]
	push edx
	mov edx,dword ptr [ebp-0x40]
	mov ecx,eax
	shl ecx,4
	push edx
	add ecx,eax
	mov eax,dword ptr [esi+0x80]
	lea edx,[ecx+ecx+0xE]
	push edx
	push edi
	call eax
	test eax,eax
	jge Block69

 Block68:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block69:
	cmp word ptr [ebp-0x68],8
	mov byte ptr [ebp-4],0
	jne Block72

 Block70:
	mov eax,dword ptr [ebp-0x60]
	xor ecx,ecx
	mov word ptr [ebp-0x68],cx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea edx,[ebp-0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov ecx,dword ptr [ebp-0x6C]
	mov eax,dword ptr [ebp-0x18]
	inc ecx
	cmp ecx,4
	mov dword ptr [ebp-0x6C],ecx
	jl Block34

 Block74:
	mov ecx,dword ptr [ebp-0x40]
	add ecx,0x29
	inc eax
	cmp ecx,0xEB
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-0x40],ecx
	jl Block32

 Block75:
	mov eax,dword ptr [ebp-0x44]
	mov eax,dword ptr [eax+0xAE4]
	cmp eax,0xFFFFFFFF
	je Block110

 Block76:
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
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],0x13
	call esi
	lea ecx,[ebp-0x3C]
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
	jge Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
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
	lea ecx,[ebp-0x3C]
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
	mov dword ptr [ebp-0x44],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x16
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	lea eax,[ebp-0x80]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x17
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x44],esi
	test eax,eax
	je Block86

 Block83:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x48]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x48]
	mov esi,ecx
	mov dword ptr [ebp-0x44],esi
	test eax,eax
	jge Block86

 Block84:
	cmp eax,0x80004002
	je Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	cmp dword ptr [ebp-0x14],0
	mov byte ptr [ebp-4],0x18
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
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
	push 0xF1
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp-0x14]
	push 0xE
	push eax
	call ecx
	test eax,eax
	jge Block90

 Block89:
	mov edx,dword ptr [ebp-0x14]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	push eax
	call _com_issue_errorex

 Block90:
	mov byte ptr [ebp-4],0x17
	test esi,esi
	je Block92

 Block91:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block92:
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],bl
	jne Block95

 Block93:
	mov eax,dword ptr [ebp-0x78]
	xor edx,edx
	mov word ptr [ebp-0x80],dx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea eax,[ebp-0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov esi,8
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp-0x58],si
	jne Block99

 Block97:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea edx,[ebp-0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x3C],si
	jne Block103

 Block101:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x28],si
	jne Block107

 Block105:
	mov eax,dword ptr [ebp-0x20]
	xor edx,edx
	mov word ptr [ebp-0x28],dx
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea eax,[ebp-0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block108:
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block110

 Block109:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block110:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block112:
	lea esp,[ebp-0x94]
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
// CUIMacroSysEx::GetIndexByPos
__SUB_CLASS_THIS(00458E30, __thiscall, 55729,  CUIMacroSysEx, int32_t, long, long, int32_t, long&, long&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	push esi
	mov esi,dword ptr [esp+0x14]
	mov dword ptr [esi],0xFFFFFFFF
	xor ecx,ecx
	mov eax,0x41
	push edi

 Block1:
	lea edi,[eax-0x26]
	cmp edi,edx
	jg Block3

 Block2:
	cmp edx,eax
	jle Block5

 Block3:
	add eax,0x29
	inc ecx
	cmp eax,0x10E
	jl Block1

 Block4:
	jmp Block6

 Block5:
	mov dword ptr [esi],ecx

 Block6:
	pop edi
	cmp ecx,5
	jne Block8

 Block7:
	xor eax,eax
	pop esi
	ret 0x14

 Block8:
	mov edx,dword ptr [esp+8]
	xor ecx,ecx
	mov eax,0x2E

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
	cmp eax,0x94
	jl Block9

 Block12:
	jmp Block14

 Block13:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [eax],ecx

 Block14:
	cmp ecx,3
	jne Block18

 Block15:
	cmp dword ptr [esp+0x10],0
	je Block7

 Block16:
	add edx,0xFFFFFF79
	cmp edx,0x20
	ja Block7

 Block17:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [ecx],3

 Block18:
	mov eax,1
	pop esi
	ret 0x14
}
}
// CUIMacroSysEx::~CUIMacroSysEx
_SUB_EXCEPTION_HANDLER(45ABE0)
__SUB_CLASS_THIS0(0045ABE0, __thiscall, 55717,  CUIMacroSysEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_45ABE0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIMacroSysEx::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMacroSysEx::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMacroSysEx::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xAF0]
	mov dword ptr [esp+0x1C],5
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0x98]
	mov byte ptr [esp+0x1C],4
	call CUIToolTip::~CUIToolTip
	lea edi,[esi+0x90]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x88]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIMacroSysEx>::ms_pInstance],ebx
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
// CUIMacroSysEx::SetShow
_SUB_EXCEPTION_HANDLER(45AB40)
__SUB_CLASS_THIS(0045AB40, __thiscall, 55725,  IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_45AB40
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
	mov dword ptr [edi+0xAE8],ebx
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
// CUISkillEx::OnTabChanged
__SUB_CLASS_THIS(0045A880, __thiscall, 55776,  CUISkillEx, void, long) {
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
	call CUISkillEx::GetSkillRootVisible
	mov ecx,esi
	call CUISkillEx::SetScrollBar
	mov ecx,esi
	call CUISkillEx::SetButtons
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CUISkillEx::SetSkillRootList
__SUB_CLASS_THIS0(0045A8C0, __thiscall, 55765,  CUISkillEx, void) {
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
// CUIMacroSysEx::IsEnabled
__SUB_CLASS_THIS0(0045AAD0, __thiscall, 55727,  IUIMsgHandler, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xAE4]
	ret
}
}
// CUIMacroSysEx::OnSelected
_SUB_EXCEPTION_HANDLER(459770)
__SUB_CLASS_THIS(00459770, __thiscall, 55730,  CUIMacroSysEx, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_459770
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
	mov dword ptr [esi+0xAE4],edi
	mov ecx,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	push eax
	call CMacroSysMan::GetMacroName
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x94]
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
	mov ebx,dword ptr [esi+0x8C]
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
	cmp dword ptr [esi+0xAE4],eax
	setge al
	push eax
	call edx
	mov ecx,esi
	call CUIMacroSysEx::ResetInfo
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
// Partition_CUISkillEx__RecommSkillPair_
__SUB(004592D0, __cdecl, 85302,  int32_t, ZArray<CUISkillEx::RecommSkillPair>&, int32_t, int32_t, const CUISkillEx::RecommSkillPair&) {
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
// CUIMacroSysEx::CUIMacroSysEx
_SUB_EXCEPTION_HANDLER(45A9B0)
__SUB_CLASS_THIS(0045A9B0, __thiscall, 55715,  CUIMacroSysEx, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_45A9B0
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
	mov dword ptr [TSingleton<CUIMacroSysEx>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIMacroSysEx>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIMacroSysEx::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMacroSysEx::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMacroSysEx::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esi+0x94],edi
	lea ecx,[esi+0x98]
	mov byte ptr [esp+0x18],4
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xAE8],edi
	mov dword ptr [esi+0xAEC],1
	mov dword ptr [esi+0xAF0],edi
	mov dword ptr [esi+0xAF4],edi
	mov dword ptr [esi+0xAF8],edi
	mov dword ptr [esi+0xAFC],edi
	mov dword ptr [esi+0xB00],edi
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x20]
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x132
	push 0xB4
	push edx
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x3C],6
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
// CUISkillEx::OnMoveWnd
__SUB_CLASS_THIS(00459370, __thiscall, 55767,  CUISkillEx, void, long, long) {
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
	mov edi,dword ptr [esi+0xB9C]
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
	add eax,0x11E
	push eax
	mov ecx,edi
	call CWnd::MoveWnd

 Block2:
	pop edi
	pop esi
	ret 8
}
}
// CUISkillEx::SetButton
__SUB_CLASS_THIS(00459160, __thiscall, 55777,  CUISkillEx, void, long, long, int32_t, int32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [esp+8]
	lea eax,[edx+eax*2]
	push esi
	lea esi,[ecx+eax*8+0xB1C]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x24]
	lea ecx,[eax+4]
	mov eax,dword ptr [esp+0x10]
	push eax
	call edx
	mov esi,dword ptr [esi+4]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax+0x1C]
	lea ecx,[esi+4]
	push edx
	call eax
	pop esi
	ret 0x10
}
}
// DownHeap_CUISkillEx__RecommSkillPair_
__SUB(00458FB0, __cdecl, 85299,  void, ZArray<CUISkillEx::RecommSkillPair>&, int32_t, int32_t, int32_t) {
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
// CUIMacroSysEx::GetRTTI
__SUB_CLASS_THIS0(0045AAF0, __thiscall, 55731,  CUIMacroSysEx, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIMacroSysEx::ms_RTTI_CUIMacroSysEx
	ret
}
}
// CUISkillEx::CUISkillEx
_SUB_EXCEPTION_HANDLER(45E1C0)
__SUB_CLASS_THIS(0045E1C0, __thiscall, 55763,  CUISkillEx, void, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_45E1C0
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
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	xor edi,edi
	push edi
	push edi
	push 1
	push 5
	push 0x106
	push 5
	push 0x20
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x54],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUISkillEx>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUISkillEx>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUISkillEx::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISkillEx::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISkillEx::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],edi
	mov dword ptr [esi+0xB10],edi
	mov dword ptr [esi+0xB18],edi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 4
	push 8
	lea edx,[esi+0xB1C]
	push edx
	mov byte ptr [esp+0x68],4
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
	mov byte ptr [esp+0x68],7
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB5C],edi
	mov dword ptr [esi+0xB60],edi
	mov dword ptr [esi+0xB64],edi
	mov dword ptr [esi+0xB68],edi
	mov dword ptr [esi+0xB6C],edi
	mov dword ptr [esi+0xB70],edi
	lea ebx,[esi+0xB74]
	mov dword ptr [ebx],edi
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 3
	push 4
	lea ecx,[esi+0xB80]
	push ecx
	mov byte ptr [esp+0x68],0xF
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB8C],edi
	mov dword ptr [esi+0xB90],edi
	mov dword ptr [esi+0xB94],edi
	mov dword ptr [esi+0xB9C],edi
	mov dword ptr [esi+0xBA4],edi
	mov dword ptr [esi+0xBA8],edi
	mov dword ptr [esi+0xBAC],edi
	mov dword ptr [esi+0xBB0],edi
	mov dword ptr [esi+0xBB4],edi
	lea edx,[esp+0x14]
	push 0x18
	push edx
	mov byte ptr [esp+0x5C],0x14
	call get_basic_font
	mov eax,dword ptr [eax]
	mov ebp,dword ptr [esi+0xB64]
	add esp,8
	cmp ebp,eax
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
	cmp ebp,edi
	je Block8

 Block7:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block8:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	lea ecx,[esp+0x14]
	push 0x22
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov ebp,dword ptr [esi+0xB68]
	add esp,8
	cmp ebp,eax
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
	cmp ebp,edi
	je Block15

 Block14:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block15:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	lea eax,[esp+0x14]
	push 0x16
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov ebp,dword ptr [esi+0xB6C]
	add esp,8
	cmp ebp,eax
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
	cmp ebp,edi
	je Block22

 Block21:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block22:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block24:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call ebp
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x58],0x15
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	push edi
	push edi
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGSK__6
	mov byte ptr [esp+0x6C],0x16
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x68],0x17
	cmp dword ptr [_D_G_RM],edi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x6C],0x16
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x18
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block33

 Block31:
	cmp eax,0x80004002
	je Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0x54],0x16
	cmp word ptr [esp+0x3C],bp
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,edi
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[esp+0x3C]
	push eax
	call ebx

 Block37:
	mov byte ptr [esp+0x54],0x15
	cmp word ptr [esp+0x1C],bp
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x1C]
	push edx
	call ebx

 Block41:
	mov byte ptr [esp+0x54],0x14
	cmp word ptr [esp+0x2C],bp
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x2C]
	push ecx
	call ebx

 Block45:
	mov edx,dword ptr [esp+0x5C]
	mov eax,dword ptr [esp+0x60]
	push 0xA
	push 0x132
	push 0x11E
	mov ecx,esi
	mov dword ptr [esi+0xB7C],edx
	mov dword ptr [esi+0xBA0],eax
	call CUIWnd::CreateUIWndPosSaved
	mov eax,esi
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 8
}
}
// CUISkillEx::OnMouseMove
__SUB_CLASS_THIS(00459F40, __thiscall, 55768,  IUIMsgHandler, int32_t, long, long) {
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
	call CUISkillEx::GetSkillIndexFromPoint
	mov edi,eax
	test edi,edi
	jl Block4

 Block1:
	push 0
	mov ecx,ebx
	call CUISkillEx::GetSkillRootVisible
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
	cmp edi,dword ptr [esi+0xB74]
	je Block3

 Block2:
	push 0
	mov ecx,ebx
	mov dword ptr [esi+0xB74],edi
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
	cmp dword ptr [esi+0xB74],eax
	je Block6

 Block5:
	push 0
	mov ecx,ebx
	mov dword ptr [esi+0xB74],eax
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
// CUIMacroSysEx::HitTest
__SUB_CLASS_THIS(00458EC0, __thiscall, 55724,  CUIMacroSysEx, int32_t, long, long, CCtrlWnd**) {
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
// CUISkillEx::CreateTip
_SUB_EXCEPTION_HANDLER(45DC80)
__SUB_CLASS_THIS0(0045DC80, __thiscall, 55765,  CUISkillEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_45DC80
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
	push 0xDF
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
	mov edi,dword ptr [esi+0xB80]
	add esp,0x1C
	cmp edi,eax
	je Block15

 Block11:
	mov dword ptr [esi+0xB80],eax
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
	push 0xF5
	push 0x83
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
	mov edi,dword ptr [esi+0xB84]
	add esp,0x1C
	cmp edi,eax
	je Block32

 Block28:
	mov dword ptr [esi+0xB84],eax
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
	push 0xC1
	push 0x5F
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
	mov edi,dword ptr [esi+0xB88]
	add esp,0x1C
	cmp edi,eax
	je Block49

 Block45:
	mov dword ptr [esi+0xB88],eax
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
// CUISkillEx::SetButtons
__SUB_CLASS_THIS0(004599D0, __thiscall, 55765,  CUISkillEx, void) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xB10]
	cmp dword ptr [eax+0x50],0
	push esi
	push edi
	jne Block6

 Block1:
	xor edi,edi

 Block2:
	xor esi,esi

 Block3:
	push 0
	push 0
	push edi
	push esi
	mov ecx,ebx
	call CUISkillEx::SetButton
	inc esi
	cmp esi,2
	jl Block3

 Block4:
	inc edi
	cmp edi,2
	jl Block2

 Block5:
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret

 Block6:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebp
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x20],ecx
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block11

 Block7:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block10

 Block9:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block10:
	mov dword ptr [esp+0x18],0

 Block11:
	mov eax,dword ptr [ebx+0xB10]
	mov eax,dword ptr [eax+0x44]
	test eax,eax
	jne Block13

 Block12:
	push ebp
	call get_novice_skill_point
	add esp,4
	mov dword ptr [esp+0x14],eax
	jmp Block14

 Block13:
	push eax
	lea ecx,[ebp+0xCD]
	call ExtendSP::Get
	movzx ecx,al
	mov dword ptr [esp+0x14],ecx

 Block14:
	push 0
	mov ecx,ebx
	call CUISkillEx::GetSkillRootVisible
	mov edx,dword ptr [ebx+0xB18]
	mov ecx,eax
	mov eax,dword ptr [edx+0x38]
	add eax,eax
	xor edi,edi
	mov dword ptr [esp+0x10],ecx
	xor esi,esi
	mov ebp,eax
	jmp Block17

 Block15:
	mov ecx,dword ptr [esp+0x10]
	xor esi,esi
	mov ebp,eax
	jmp Block17

 Block16:
	mov ecx,dword ptr [esp+0x10]

 Block17:
	test ecx,ecx
	je Block26

 Block18:
	mov eax,dword ptr [ecx+8]
	test eax,eax
	je Block26

 Block19:
	cmp ebp,dword ptr [eax-4]
	jae Block26

 Block20:
	mov eax,dword ptr [eax+ebp*8+4]
	cmp dword ptr [eax+0x38],0
	je Block22

 Block21:
	push 0
	push 1
	jmp Block27

 Block22:
	cmp dword ptr [esp+0x14],0
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
	push edi
	push esi
	mov ecx,ebx
	call CUISkillEx::SetButton
	inc esi
	inc ebp
	cmp esi,2
	jl Block16

 Block28:
	inc edi
	cmp edi,2
	mov eax,ebp
	jl Block15

 Block29:
	pop ebp
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// CUIMacroSysEx::OnSetFocus
__SUB_CLASS_THIS(0045AAB0, __thiscall, 55719,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIMacroSysEx::ResetInfo
__SUB_CLASS_THIS0(00459060, __thiscall, 55717,  CUIMacroSysEx, void) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [TSingleton<CUISkillEx>::ms_pInstance]
	xor edx,edx
	cmp dword ptr [ebx+0xB94],1
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x8C]
	sete dl
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x24]
	push edx
	call eax
	mov eax,dword ptr [esi+0x94]
	mov ebx,dword ptr [TSingleton<CUISkillEx>::ms_pInstance]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x24]
	lea ecx,[eax+4]
	xor eax,eax
	cmp dword ptr [ebx+0xB94],1
	sete al
	push eax
	call edx
	lea ecx,[esi+0x98]
	call CUIToolTip::ClearToolTip
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	pop ebx
	ret
}
}
// CUISkillEx::GetSkillRootVisible
__SUB_CLASS_THIS(00459610, __thiscall, 55779,  CUISkillEx, const SKILLROOT*, int32_t) {
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
// CUISkillEx::IsKindOf
__SUB_CLASS_THIS(0045CB30, __thiscall, 55784,  CUISkillEx, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUISkillEx::ms_RTTI_CUISkillEx
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
// CUISkillEx::ResetInfo
__SUB_CLASS_THIS0(0045DC50, __thiscall, 55765,  CUISkillEx, void) {
__asm {

 Block0:
	push esi
	push 1
	mov esi,ecx
	call CUISkillEx::GetSkillRootVisible
	mov ecx,esi
	call CUISkillEx::SetTabItems
	mov ecx,esi
	call CUISkillEx::SetScrollBar
	mov ecx,esi
	call CUISkillEx::SetButtons
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret
}
}
// CUIMacroSysEx::OnDestroy
__SUB_CLASS_THIS0(0045AAA0, __thiscall, 55717,  CUIMacroSysEx, void) {
__asm {

 Block0:
	ret
}
}
// CUISkillEx::SetTabItems
_SUB_EXCEPTION_HANDLER(45BE90)
__SUB_CLASS_THIS0(0045BE90, __thiscall, 55765,  CUISkillEx, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x78]
	sub esp,0x78
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_45BE90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x74],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x5C],ecx
	mov ecx,dword ptr [ecx+0xB10]
	call CCtrlTab::RemoveAllItems
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x20]
	push eax
	call esi
	lea ecx,[ebp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x40]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push edi
	push edi
	lea ecx,[ebp+0x20]
	push ecx
	lea edx,[ebp+0x40]
	push edx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGSK__3
	mov byte ptr [ebp-4],1
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],edi
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
	mov ebx,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp],bx
	jne Block12

 Block10:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp+0x40],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x20],bx
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x28]
	xor edx,edx
	mov word ptr [ebp+0x20],dx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea ecx,[ebp+0x30]
	push ecx
	call esi
	lea edx,[ebp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea eax,[ebp+0x10]
	push eax
	mov byte ptr [ebp-4],8
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	push edi
	push edi
	lea edx,[ebp+0x30]
	push edx
	lea eax,[ebp+0x10]
	push eax
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,9
	push offset _S_UIUIWINDOW2IMGSK__2
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xA
	cmp dword ptr [_D_G_RM],edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov esi,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x1C],si
	jne Block33

 Block31:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	cmp eax,edi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp+0x10],si
	jne Block37

 Block35:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,edi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+0x30],si
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	xor eax,eax
	mov dword ptr [ebp+0x6C],eax
	lea esp,[esp]

 Block43:
	mov edx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [edx+0xB08]
	cmp ecx,edi
	je Block69

 Block44:
	cmp eax,dword ptr [ecx-4]
	jae Block69

 Block45:
	mov dword ptr [ebp+0x58],edi
	push eax
	lea edx,[ebp+0x58]
	push offset _S_D__1
	push edx
	mov byte ptr [ebp-4],0x10
	call ZXString<char>::Format
	add esp,0xC
	push edi
	push edi
	mov edi,dword ptr [ebp+0x58]
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
	xor eax,eax
	cmp dword ptr [ebp+0x6C],0xB
	mov ebx,esp
	setl al
	push eax
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
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x11
	test ecx,ecx
	je Block5

 Block46:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp-0x40],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block51

 Block47:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x54]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	mov dword ptr [ebp+0x50],eax
	dec ecx
	and ecx,dword ptr [ebp+0x54]
	mov dword ptr [ebp+0x70],ecx
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block49

 Block48:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	mov eax,dword ptr [ebp+0x50]

 Block49:
	mov ecx,dword ptr [ebp+0x70]
	mov dword ptr [esi],ecx
	test eax,eax
	jge Block51

 Block50:
	cmp eax,0x80004002
	jne Block1

 Block51:
	push 0
	push 0
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0x13
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	je Block5

 Block52:
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x70],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block57

 Block53:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x68]
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
	and ecx,dword ptr [ebp+0x68]
	mov dword ptr [ebp+0x70],ecx
	test eax,eax
	je Block55

 Block54:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block55:
	mov ecx,dword ptr [ebp+0x70]
	mov dword ptr [esi],ecx
	test ebx,ebx
	jge Block57

 Block56:
	cmp ebx,0x80004002
	jne Block68

 Block57:
	mov edx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [edx+0xB10]
	mov byte ptr [ebp-4],0x16
	call CCtrlTab::AddItem_Canvas
	mov esi,8
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x2C],si
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x3C],si
	jne Block64

 Block62:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov byte ptr [ebp-4],0xF
	test edi,edi
	je Block67

 Block66:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block67:
	inc dword ptr [ebp+0x6C]
	mov eax,dword ptr [ebp+0x6C]
	xor edi,edi
	jmp Block43

 Block68:
	push ebx
	call _com_issue_error

 Block69:
	mov eax,dword ptr [edx+0xAFC]
	mov ecx,dword ptr [edx+0xB10]
	mov esi,dword ptr [ecx+0x50]
	xor edx,edx
	cmp eax,edi
	setle dl
	dec edx
	and eax,edx
	cmp eax,esi
	jl Block71

 Block70:
	mov eax,esi

 Block71:
	push eax
	call CCtrlTab::SetTab
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],7
	cmp eax,edi
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov eax,dword ptr [ebp+0x60]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	lea esp,[ebp-0x50]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x74]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x78
	mov esp,ebp
	pop ebp
	ret
}
}
// ZSort_CUISkillEx__RecommSkillPair_
__SUB(00459550, __cdecl, 85304,  void, ZArray<CUISkillEx::RecommSkillPair>&, __POSITION*, __POSITION*) {
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
	call ZArray<CUISkillEx::RecommSkillPair>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CUISkillEx::RecommSkillPair>::IndexOf
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
	call IntroSortLoopHelperDefault<CUISkillEx::RecommSkillPair, int>::call
	push edi
	push esi
	push ebx
	call InsertionSortHelperDefault<CUISkillEx::RecommSkillPair>::call
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
// CUISkillEx::OnChildNotify
__SUB_CLASS_THIS(0045FA40, __thiscall, 55770,  CUISkillEx, void, uint32_t, uint32_t, uint32_t) {
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
	call CUISkillEx::ResetInfo
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
	call CUISkillEx::OnTabChanged
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
// CUISkillEx::GetSkillIndexFromPoint
__SUB_CLASS_THIS(00459B20, __thiscall, 55778,  CUISkillEx, long, long, long, int32_t) {
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
	call CUISkillEx::GetSkillRootVisible
	mov dword ptr [esp+4],eax
	test eax,eax
	jne Block4

 Block3:
	or eax,0xFFFFFFFF
	pop esi
	add esp,0x14
	ret 0xC

 Block4:
	mov eax,dword ptr [esi+0xB18]
	mov eax,dword ptr [eax+0x38]
	push ebp
	push edi
	lea ebp,[eax+eax]
	mov edi,0xFE
	push ebx
	jmp Block6

 Block6:
	mov ebx,ebp
	mov esi,0x86

 Block7:
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [ecx+8]
	test eax,eax
	je Block14

 Block8:
	cmp ebx,dword ptr [eax-4]
	jae Block14

 Block9:
	cmp dword ptr [esp+0x30],0
	je Block11

 Block10:
	lea edx,[esi-0x7A]
	mov dword ptr [esp+0x14],edx
	lea eax,[edi-0x21]
	lea ecx,[esi-0x5A]
	lea edx,[edi-1]
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x1C],ecx
	mov dword ptr [esp+0x20],edx
	jmp Block12

 Block11:
	lea eax,[esi-0x7C]
	lea ecx,[edi-0x23]
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x1C],esi
	mov dword ptr [esp+0x20],edi

 Block12:
	mov eax,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x2C]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call PtInRect
	test eax,eax
	jne Block16

 Block13:
	add esi,0x7F
	inc ebx
	cmp esi,0x184
	jl Block7

 Block14:
	add edi,0x2A
	add ebp,2
	cmp edi,0x152
	jl Block6

 Block15:
	pop ebx
	pop edi
	pop ebp
	or eax,0xFFFFFFFF
	pop esi
	add esp,0x14
	ret 0xC

 Block16:
	mov eax,ebx
	pop ebx
	pop edi
	pop ebp
	pop esi
	add esp,0x14
	ret 0xC
}
}
// CUISkillEx::SetScrollBar
__SUB_CLASS_THIS0(00459970, __thiscall, 55765,  CUISkillEx, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB10]
	cmp dword ptr [eax+0x50],0
	push 0
	je Block6

 Block1:
	call CUISkillEx::GetSkillRootVisible
	test eax,eax
	je Block5

 Block2:
	mov eax,dword ptr [eax+8]
	test eax,eax
	jne Block4

 Block3:
	mov ecx,dword ptr [esi+0xB18]
	inc eax
	shr eax,1
	dec eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block4:
	mov eax,dword ptr [eax-4]
	mov ecx,dword ptr [esi+0xB18]
	inc eax
	shr eax,1
	dec eax
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
// ZSort_CUISkillEx__RecommSkillPair_
__SUB(00459740, __cdecl, 85305,  void, ZArray<CUISkillEx::RecommSkillPair>&) {
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
	call ZSortHelperDefault<CUISkillEx::RecommSkillPair>::call_0
	add esp,0xC
	ret

 Block3:
	lea ecx,[eax+ecx*8-8]
	push ecx
	push eax
	push edx
	call ZSortHelperDefault<CUISkillEx::RecommSkillPair>::call_0
	add esp,0xC
	ret
}
}
// CUIMacroSysEx::OnKey
__SUB_CLASS_THIS(004590D0, __thiscall, 55722,  IUIMsgHandler, void, uint32_t, uint32_t) {
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
// InsertionSort_CUISkillEx__RecommSkillPair_
__SUB(00458F40, __cdecl, 85297,  void, ZArray<CUISkillEx::RecommSkillPair>&, int32_t, int32_t) {
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
// CUISkillEx::IsMyAddon
__SUB_CLASS_THIS(0045CB10, __thiscall, 55773,  CUISkillEx, int32_t, CWnd*) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUIMacroSysEx>::ms_pInstance]
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
// CUISkillEx::Draw
_SUB_EXCEPTION_HANDLER(45D1F0)
__SUB_CLASS_THIS(0045D1F0, __thiscall, 55772,  CUISkillEx, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_45D1F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA4
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
	mov dword ptr [ebp+0x5C],esi
	mov eax,dword ptr [ebp+0x74]
	push eax
	call CWnd::Draw
	lea ecx,[ebp+0x64]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp-0xB0]
	push edx
	mov ecx,edi
	mov dword ptr [ebp-4],0
	mov dword ptr [ebp-0x24],edi
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [ebp-0xAC]
	mov eax,dword ptr [eax+4]
	mov dword ptr [ebp+0x3C],eax
	test ebx,ebx
	je Block5

 Block1:
	add ebx,0xFFFFFFF0
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block4

 Block3:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block4:
	mov dword ptr [ebp-0xAC],0

 Block5:
	mov eax,dword ptr [esi+0xB10]
	cmp dword ptr [eax+0x44],0
	jne Block7

 Block6:
	mov ecx,dword ptr [ebp+0x3C]
	push ecx
	call get_novice_skill_point
	add esp,4
	mov edi,eax
	jmp Block11

 Block7:
	lea edx,[ebp+0x34]
	push edx
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [esi+0xB10]
	mov ecx,dword ptr [ecx+0x44]
	mov eax,dword ptr [eax+4]
	push ecx
	lea ecx,[eax+0xCD]
	mov byte ptr [ebp-4],1
	call ExtendSP::Get
	mov ebx,dword ptr [ebp+0x38]
	movzx edi,al
	mov byte ptr [ebp-4],0
	test ebx,ebx
	je Block11

 Block8:
	add ebx,0xFFFFFFF0
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block11

 Block10:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block11:
	cmp edi,0x63
	jle Block13

 Block12:
	mov ebx,0xC
	jmp Block14

 Block13:
	xor ebx,ebx
	cmp edi,9
	setle bl
	dec ebx
	and ebx,6

 Block14:
	mov eax,dword ptr [esi+0xB74]
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block16:
	push edi
	mov edi,dword ptr [ebp+0x64]
	mov eax,0x63
	sub eax,ebx
	push 0xB2
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block18

 Block17:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block18:
	call draw_number_by_image
	mov eax,dword ptr [esi+0xB10]
	add esp,0x18
	cmp dword ptr [eax+0x50],0
	je Block117

 Block19:
	push 0
	mov ecx,esi
	call CUISkillEx::GetSkillRootVisible
	mov dword ptr [ebp+0x30],eax
	test eax,eax
	je Block117

 Block20:
	push eax
	mov ecx,esi
	call CUISkillEx::GetRecommendSKill
	mov esi,dword ptr [esi+0xB18]
	mov dword ptr [ebp+0x40],eax
	mov eax,dword ptr [esi+0x38]
	mov dword ptr [ebp-0x28],eax
	xor eax,eax
	mov dword ptr [ebp+0x50],eax

 Block21:
	mov ecx,dword ptr [ebp-0x28]
	add eax,ecx
	add eax,eax
	mov dword ptr [ebp+0x48],0
	mov dword ptr [ebp-0x20],eax
	jmp Block25

 Block24:
	mov eax,dword ptr [ebp-0x20]

 Block25:
	mov edx,dword ptr [ebp+0x48]
	lea ecx,[eax+edx]
	mov eax,dword ptr [ebp+0x30]
	mov eax,dword ptr [eax+8]
	mov dword ptr [ebp+0x44],ecx
	test eax,eax
	je Block115

 Block26:
	cmp ecx,dword ptr [eax-4]
	jae Block115

 Block27:
	mov ecx,dword ptr [ebp+0x30]
	mov edx,dword ptr [ecx+8]
	mov eax,dword ptr [ebp+0x44]
	mov eax,dword ptr [edx+eax*8+4]
	mov ecx,dword ptr [ebp-0x24]
	push eax
	mov dword ptr [ebp+0x58],eax
	call CWvsContext::GetSkillLevelUpState
	mov edi,dword ptr [ebp+0x48]
	mov esi,dword ptr [ebp+0x50]
	mov edx,dword ptr [ebp+0x58]
	mov ebx,eax
	mov eax,dword ptr [edx]
	neg ebx
	sbb ebx,ebx
	imul edi,0x7F
	imul esi,0x2A
	lea ecx,[ebp+0x58]
	push ecx
	mov ecx,dword ptr [ebp+0x3C]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	neg ebx
	add edi,0xA
	add esi,0xDB
	call CSkillInfo::GetPureSkillLevel
	mov dword ptr [ebp+0x4C],eax
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x58]
	push edx
	mov edx,dword ptr [ebp+0x3C]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push edx
	call CSkillInfo::GetSkillLevel_0
	mov dword ptr [ebp+0x60],eax
	sub eax,dword ptr [ebp+0x4C]
	mov dword ptr [ebp+0x18],0xFF
	mov dword ptr [ebp+0x4C],eax
	mov eax,3
	mov word ptr [ebp+0x10],ax
	cmp dword ptr [ebp+0x64],0
	mov byte ptr [ebp-4],2
	je Block120

 Block28:
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [ebp+0x10]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x14]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x18]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x1C]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x5C]
	mov eax,dword ptr [eax+ebx*4+0xB54]
	mov ecx,dword ptr [ebp+0x64]
	push eax
	push esi
	push edi
	push ecx
	call edx
	test eax,eax
	jge Block30

 Block29:
	mov ecx,dword ptr [ebp+0x64]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block30:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0
	jne Block33

 Block31:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov ecx,dword ptr [ebp+0x40]
	mov edx,dword ptr [ebp+0x58]
	cmp dword ptr [edx],ecx
	jne Block41

 Block35:
	mov eax,3
	mov word ptr [ebp],ax
	mov dword ptr [ebp+8],0xFF
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [ebp]
	sub esp,0x10
	mov byte ptr [ebp-4],al
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0xC]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x5C]
	mov eax,dword ptr [eax+0xB5C]
	push eax
	mov eax,dword ptr [ebp+0x64]
	push esi
	lea ecx,[edi+0x25]
	push ecx
	mov ecx,dword ptr [edx+0x80]
	push eax
	call ecx
	test eax,eax
	jge Block37

 Block36:
	mov edx,dword ptr [ebp+0x64]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	push eax
	call _com_issue_errorex

 Block37:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov eax,dword ptr [ebp+0x58]
	add eax,4
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call ZXString<char>::op_assign
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edx+0xB64]
	push 0x50
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],4
	mov dword ptr [ebp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block43:
	lea eax,[ebp+0x54]
	push eax
	call format_string_1
	add esp,0xC
	lea ecx,[ebp-0x68]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x68]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block121

 Block44:
	lea eax,[ebp-0x38]
	push eax
	mov byte ptr [ebp-4],5
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block121

 Block45:
	mov ecx,dword ptr [ebp+0x64]
	lea edx,[ebp-0x68]
	push edx
	mov edx,dword ptr [ebp+0x54]
	lea eax,[ebp-0x38]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],6
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax+0xB64]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	je Block120

 Block46:
	lea edx,[esi+4]
	lea eax,[edi+0x28]
	push edx
	push eax
	mov byte ptr [ebp-4],6
	call IWzFont::DrawTextA
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],5
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	cmp word ptr [ebp-0x68],8
	mov byte ptr [ebp-4],4
	jne Block53

 Block51:
	mov eax,dword ptr [ebp-0x60]
	xor edx,edx
	mov word ptr [ebp-0x68],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[ebp-0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	cmp dword ptr [ebp+0x4C],0
	jle Block79

 Block55:
	lea ecx,[ebp-0x48]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block121

 Block56:
	lea eax,[ebp-0x88]
	push eax
	mov byte ptr [ebp-4],8
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x88]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block121

 Block57:
	mov eax,0x20
	mov byte ptr [ebp-4],9
	call __chkstk
	mov eax,esp
	lea edx,[ebp-0x48]
	push edx
	mov edx,dword ptr [ebp+0x64]
	lea ecx,[ebp-0x88]
	push ecx
	push edx
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x60]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x38],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ecx+0xB68]
	mov byte ptr [ebp-4],0xA
	test ecx,ecx
	je Block120

 Block58:
	lea eax,[esi+0x15]
	push eax
	lea eax,[edi+0x28]
	push eax
	mov byte ptr [ebp-4],9
	call IWzFont::DrawTextA
	cmp word ptr [ebp-0x88],8
	mov byte ptr [ebp-4],8
	jne Block61

 Block59:
	mov eax,dword ptr [ebp-0x80]
	xor edx,edx
	mov word ptr [ebp-0x88],dx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[ebp-0x88]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],4
	jne Block65

 Block63:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea edx,[ebp-0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov dword ptr [ebp+0x60],0
	mov eax,dword ptr [ebp+0x4C]
	push eax
	lea ecx,[ebp+0x60]
	push offset _S_D__7
	push ecx
	mov byte ptr [ebp-4],0xB
	call ZXString<char>::Format
	add esp,0xC
	lea edx,[ebp-0x78]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x78]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block121

 Block67:
	lea ecx,[ebp-0x58]
	push ecx
	mov byte ptr [ebp-4],0xC
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block121

 Block68:
	mov edx,dword ptr [ebp+0x64]
	lea eax,[ebp-0x78]
	push eax
	mov eax,dword ptr [ebp+0x60]
	lea ecx,[ebp-0x58]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x38],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0xD
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ecx+0xB68]
	mov byte ptr [ebp-4],0xE
	test ecx,ecx
	je Block120

 Block69:
	lea eax,[esi+0x15]
	push eax
	lea edx,[edi+0x37]
	push edx
	mov byte ptr [ebp-4],0xD
	call IWzFont::DrawTextA
	cmp word ptr [ebp-0x58],8
	mov byte ptr [ebp-4],0xC
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[ebp-0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	cmp word ptr [ebp-0x78],8
	mov byte ptr [ebp-4],0xB
	jne Block76

 Block74:
	mov eax,dword ptr [ebp-0x70]
	xor edx,edx
	mov word ptr [ebp-0x78],dx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea eax,[ebp-0x78]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block77:
	cmp dword ptr [ebp+0x60],0
	mov byte ptr [ebp-4],4
	je Block90

 Block78:
	mov ecx,dword ptr [ebp+0x60]
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	add esp,4
	jmp Block90

 Block79:
	lea edx,[ebp-0x98]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x98]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block121

 Block80:
	lea ecx,[ebp-0xA8]
	push ecx
	mov byte ptr [ebp-4],0xF
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0xA8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block121

 Block81:
	mov eax,0x20
	mov byte ptr [ebp-4],0x10
	call __chkstk
	mov eax,esp
	lea ecx,[ebp-0x98]
	push ecx
	mov ecx,dword ptr [ebp+0x64]
	lea edx,[ebp-0xA8]
	push edx
	mov edx,dword ptr [ebp+0x60]
	push ecx
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x38],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax+0xB64]
	mov byte ptr [ebp-4],0x11
	test ecx,ecx
	je Block120

 Block82:
	lea edx,[esi+0x15]
	push edx
	lea eax,[edi+0x28]
	push eax
	mov byte ptr [ebp-4],0x10
	call IWzFont::DrawTextA
	cmp word ptr [ebp-0xA8],8
	mov byte ptr [ebp-4],0xF
	jne Block85

 Block83:
	xor eax,eax
	mov word ptr [ebp-0xA8],ax
	mov eax,dword ptr [ebp-0xA0]
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea ecx,[ebp-0xA8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	cmp word ptr [ebp-0x98],8
	mov byte ptr [ebp-4],4
	jne Block89

 Block87:
	mov eax,dword ptr [ebp-0x90]
	xor edx,edx
	mov word ptr [ebp-0x98],dx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea eax,[ebp-0x98]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block90:
	test ebx,ebx
	je Block93

 Block91:
	mov ecx,dword ptr [ebp+0x44]
	mov edx,dword ptr [ebp+0x5C]
	cmp dword ptr [edx+0xB78],ecx
	jne Block93

 Block92:
	mov eax,1
	jmp Block94

 Block93:
	xor eax,eax

 Block94:
	mov ecx,dword ptr [ebp+0x58]
	add eax,ebx
	lea eax,[ecx+eax*4+0x258]
	mov eax,dword ptr [eax]
	mov dword ptr [ebp+0x60],eax
	test eax,eax
	je Block96

 Block95:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block96:
	mov ecx,3
	mov word ptr [ebp+0x20],cx
	mov dword ptr [ebp+0x28],0xFF
	mov ecx,dword ptr [ebp+0x20]
	mov ebx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ebx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x24]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x28]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x2C]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x60]
	push eax
	lea ecx,[esi+2]
	push ecx
	mov ecx,dword ptr [edx+0x80]
	lea eax,[edi+2]
	push eax
	push ebx
	mov byte ptr [ebp-4],0x13
	call ecx
	test eax,eax
	jge Block98

 Block97:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block98:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],0x12
	jne Block101

 Block99:
	mov eax,dword ptr [ebp+0x28]
	xor edx,edx
	mov word ptr [ebp+0x20],dx
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block102:
	cmp dword ptr [ebp+0x50],1
	jge Block110

 Block103:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block121

 Block104:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax+0xB60]
	mov edx,dword ptr [ebx]
	mov dword ptr [ebp+0x44],ecx
	mov ecx,dword ptr [ebp-0x1C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x18]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x14]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x10]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [edx+0x80]
	push eax
	add esi,0x26
	push esi
	push edi
	push ebx
	mov byte ptr [ebp-4],0x14
	call ecx
	test eax,eax
	jge Block106

 Block105:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block106:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x12
	jne Block109

 Block107:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block112:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block114

 Block113:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block114:
	mov eax,dword ptr [ebp+0x48]
	inc eax
	cmp eax,2
	mov dword ptr [ebp+0x48],eax
	jl Block24

 Block115:
	mov eax,dword ptr [ebp+0x50]
	inc eax
	cmp eax,2
	mov dword ptr [ebp+0x50],eax
	jl Block21

 Block116:
	mov edi,dword ptr [ebp+0x64]

 Block117:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block119

 Block118:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block119:
	lea esp,[ebp-0xC0]
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

 Block120:
	push 0x80004003
	call _com_issue_error

 Block121:
	push eax
	call _com_issue_error
}
}
// CUIMacroSysEx::OnMouseMove
_SUB_EXCEPTION_HANDLER(459C20)
__SUB_CLASS_THIS(00459C20, __thiscall, 55721,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_459C20
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
	call CUIMacroSysEx::GetIndexByPos
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
	lea ecx,[esi+0x94]
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
	lea ecx,[esi+0x94]
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
	lea ecx,[esi+0x94]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call CUIToolTip::SetToolTip_String2
	mov edi,dword ptr [esp+0x14]

 Block7:
	mov eax,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x30]
	lea ecx,[eax+eax*4]
	lea eax,[edx+ecx*2]
	cmp eax,dword ptr [esi+0xADC]
	je Block9

 Block8:
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xADC],eax
	call CWnd::InvalidateRect

 Block9:
	mov eax,1
	jmp Block13

 Block10:
	lea ecx,[esi+0x94]
	call CUIToolTip::ClearToolTip
	or eax,0xFFFFFFFF
	cmp dword ptr [esi+0xADC],eax
	je Block12

 Block11:
	push 0
	lea ecx,[esi-4]
	mov dword ptr [esi+0xADC],eax
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
