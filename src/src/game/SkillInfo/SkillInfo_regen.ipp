#include "regen.hpp"
// SkillInfo.ipp
#include "SkillInfo.hpp"

// CSkillInfo::CSkillInfo
__SUB_CLASS_THIS0(005C48A0, __thiscall, 21684,  CSkillInfo, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esi+4]
	xor edi,edi
	cmp ecx,edi
	je Block2

 Block1:
	lea eax,[ecx-4]
	mov dword ptr [TSingleton<CSkillInfo>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CSkillInfo>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CSkillInfo::`vftable'
	mov ebx,0x1F
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<SKILLENTRY>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<SKILLENTRY>, long>::_CalcAutoGrow
	lea ecx,[esi+0x1C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<SKILLROOT>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<SKILLROOT>, long>::_CalcAutoGrow
	lea ecx,[esi+0x34]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<MOBSKILLENTRY>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<MOBSKILLENTRY>, long>::_CalcAutoGrow
	lea ecx,[esi+0x4C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<MCSKILLENTRY>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<MCSKILLENTRY>, long>::_CalcAutoGrow
	lea ecx,[esi+0x68]
	mov dword ptr [esi+0x64],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<MCGUARDIANENTRY>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<MCGUARDIANENTRY>, long>::_CalcAutoGrow
	lea ecx,[esi+0x80]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<BFSKILLENTRY>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<BFSKILLENTRY>, long>::_CalcAutoGrow
	lea ecx,[esi+0x98]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<ITEMSKILLENTRY>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<ITEMSKILLENTRY>, long>::_CalcAutoGrow
	lea ecx,[esi+0xB0]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<ITEMOPTIONSKILLENTRY>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<ITEMOPTIONSKILLENTRY>, long>::_CalcAutoGrow
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	ret
}
}
// MOBSKILLLEVELDATA::GetMobUOL
__SUB_CLASS_THIS(0024A000, __thiscall, 21459,  MOBSKILLLEVELDATA, Ztl_bstr_t*, Ztl_bstr_t*) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x4C]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// SKILLLEVELDATA::_ZtlSecureGet_nProp
__SUB_CLASS0(002EE7C0, __fastcall, 21132,  SKILLLEVELDATA, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x114]
	push eax
	add ecx,0x10C
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CSkillInfo::LoadItemSkill
_SUB_EXCEPTION_HANDLER(307E70)
__SUB_CLASS_THIS0(00307E70, __thiscall, 21687,  CSkillInfo, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_307E70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp+0x44],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	xor edi,edi
	push eax
	mov dword ptr [ebp-4],edi
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],1
	call esi
	lea eax,[ebp+0x20]
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
	lea ecx,[ebp+0x10]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	mov bl,2
	push offset _S_SKILLITEMSKILLIM__1
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x6C]
	mov dword ptr [ebp+0x6C],edi
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
	mov byte ptr [ebp-4],6
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
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x20],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x10],bx
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ebx,dword ptr [ebp+0x6C]
	cmp ebx,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,ebx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],9
	mov dword ptr [ebp+0x68],edi
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block25:
	lea ecx,[ebp+0x68]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0xB
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea eax,[ebp+0x50]
	push eax
	call esi
	mov byte ptr [ebp-4],0xC
	mov dword ptr [ebp+0x30],edi
	jmp Block32

 Block31:
	mov ebx,dword ptr [ebp+0x6C]

 Block32:
	mov esi,dword ptr [ebp+0x68]
	test esi,esi
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0x30]
	push edx
	lea eax,[ebp+0x50]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block79

 Block35:
	push eax
	mov dword ptr [ebp+0x4C],eax
	call ZRefCounted_AllocHelper<ZRefCountedDummy<ITEMSKILLENTRY>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [ebp+0x4C],esi
	lea edx,[ebp+0x50]
	push edx
	lea eax,[ebp+0x70]
	push eax
	mov byte ptr [ebp-4],0xD
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [ebp+0x70]
	test eax,eax
	je Block37

 Block36:
	mov eax,dword ptr [eax]
	jmp Block38

 Block37:
	xor eax,eax

 Block38:
	push eax
	call __wtoi
	add esp,4
	push 0
	mov dword ptr [esi],eax
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x64],esp
	test eax,eax
	je Block40

 Block39:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block40:
	lea edx,[ebp-0x20]
	mov byte ptr [ebp-4],0xF
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x64],esi
	test eax,eax
	je Block44

 Block41:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x38]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x38]
	mov esi,ecx
	mov dword ptr [ebp+0x64],esi
	test eax,eax
	jge Block44

 Block42:
	cmp eax,0x80004002
	je Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0x12
	jne Block47

 Block45:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block48:
	push 0
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x3C],esp
	push 0x677
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x13
	test esi,esi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[ebp-0x30]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	push ecx
	mov edi,esp
	mov dword ptr [ebp+0x3C],esp
	mov dword ptr [edi],0
	test eax,eax
	je Block56

 Block51:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [edi]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x60]
	test eax,eax
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov dword ptr [edi],ebx
	test esi,esi
	jge Block56

 Block54:
	cmp esi,0x80004002
	je Block56

 Block55:
	push esi
	call _com_issue_error

 Block56:
	mov edi,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [edi]
	mov esi,dword ptr [ebp+0x44]
	lea eax,[edi+4]
	push eax
	push ecx
	mov ecx,esi
	call CSkillInfo::LoadItemSkillLevelData
	test eax,eax
	sete bl
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],0x12
	jne Block59

 Block57:
	mov eax,dword ptr [ebp-0x28]
	xor edx,edx
	mov word ptr [ebp-0x30],dx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	test bl,bl
	je Block62

 Block61:
	push offset ZException::THROW_INFO
	lea ecx,[ebp+0x34]
	push ecx
	mov dword ptr [ebp+0x34],0x80004005
	call _CxxThrowException

 Block62:
	lea edx,[ebp+0x48]
	push edx
	push edi
	lea ecx,[esi+0x98]
	call ZMap<long, ZRef<ITEMSKILLENTRY>, long>::Insert
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xE
	call edx
	mov eax,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block71

 Block63:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block70

 Block64:
	test esi,esi
	je Block70

 Block65:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block67

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block67:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block69

 Block68:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block69:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block70:
	mov dword ptr [ebp+0x70],0

 Block71:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0xC
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block74

 Block72:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block74

 Block73:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block74:
	cmp word ptr [ebp+0x50],8
	mov dword ptr [ebp+0x4C],0
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block31

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block77:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block31

 Block78:
	push eax
	call _com_issue_error

 Block79:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0xB
	jne Block82

 Block80:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],8
	call edx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,1
	jmp Block87

 Block87:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add ebp,0x74
	mov esp,ebp
	pop ebp
	ret
}
}
// CSkillInfo::GetSkillLevel
__SUB_CLASS_THIS(002F2000, __thiscall, 21702,  CSkillInfo, long, const CharacterData&, const SecondaryStat&, long, const SKILLENTRY**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0xC]
	cmp eax,0x131312B
	jg Block7

 Block1:
	cmp eax,0x131312A
	jge Block11

 Block2:
	cmp eax,0x989AAB
	jg Block6

 Block3:
	cmp eax,0x989AAA
	jge Block11

 Block4:
	cmp eax,0x42A
	jl Block6

 Block5:
	cmp eax,0x42B
	jle Block11

 Block6:
	mov edx,dword ptr [esp+0x10]
	push edx
	push eax
	mov eax,dword ptr [esp+0xC]
	push eax
	call CSkillInfo::GetSkillLevel_0
	ret 0x10

 Block7:
	cmp eax,0x1C9C7AB
	jg Block6

 Block8:
	cmp eax,0x1C9C7AA
	jge Block11

 Block9:
	cmp eax,0x131583A
	jl Block6

 Block10:
	cmp eax,0x131583B
	jg Block6

 Block11:
	push esi
	mov esi,dword ptr [esp+0x14]
	test esi,esi
	je Block13

 Block12:
	push eax
	call CSkillInfo::GetSkill
	mov dword ptr [esi],eax

 Block13:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [eax+0x5A8]
	push ecx
	add eax,0x5A0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	add eax,0xFFFFFFC0
	pop esi
	cmp eax,3
	ja Block15

 Block14:
	cmp EAX, 0
je Block15
cmp EAX, 1
je Block16
cmp EAX, 2
je Block17
cmp EAX, 3
je Block18


 Block15:
	mov eax,1
	ret 0x10

 Block16:
	mov eax,2
	ret 0x10

 Block17:
	mov eax,3
	ret 0x10

 Block18:
	mov eax,4
	ret 0x10
}
}
// SKILLENTRY::SKILLENTRY
_SUB_EXCEPTION_HANDLER(308A50)
__SUB_CLASS_THIS0(00308A50, __thiscall, 20539,  SKILLENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_308A50
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
	mov dword ptr [esi+4],edi
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+8],edi
	mov dword ptr [esi+0x20],edi
	mov dword ptr [esi+0x58],edi
	int 3// TODO: 	mov dword ptr [esi+0x5C],offset ZList<GW_SkillRecord>::`vftable'
	mov dword ptr [esi+0x64],edi
	mov dword ptr [esi+0x68],edi
	mov dword ptr [esi+0x6C],edi
	lea ecx,[esi+0x74]
	call SKILLLEVELDATACommon::_ctor_default
	lea ecx,[esi+0x1E4]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<AdditionPsd>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<AdditionPsd>, long>::_CalcAutoGrow
	mov dword ptr [esi+0x1FC],edi
	mov dword ptr [esi+0x200],edi
	mov dword ptr [esi+0x204],edi
	mov dword ptr [esi+0x208],edi
	mov dword ptr [esi+0x214],edi
	mov dword ptr [esi+0x218],edi
	mov dword ptr [esi+0x21C],edi
	mov dword ptr [esi+0x220],edi
	mov dword ptr [esi+0x224],edi
	mov dword ptr [esi+0x228],edi
	mov dword ptr [esi+0x22C],edi
	mov dword ptr [esi+0x230],edi
	mov dword ptr [esi+0x234],edi
	mov dword ptr [esi+0x238],edi
	mov dword ptr [esi+0x23C],edi
	mov dword ptr [esi+0x240],edi
	mov dword ptr [esi+0x244],edi
	mov dword ptr [esi+0x248],edi
	mov dword ptr [esi+0x24C],edi
	mov dword ptr [esi+0x250],edi
	mov dword ptr [esi+0x254],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 3
	push 4
	lea eax,[esi+0x258]
	push eax
	mov byte ptr [esp+0x2C],0x1B
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
// SKILLLEVELDATA::_ZtlSecureGet_nItemConNo
__SUB_CLASS0(002EE760, __fastcall, 21132,  SKILLLEVELDATA, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xCC]
	push eax
	add ecx,0xC4
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CSkillInfo::GetSkillRoot
_SUB_EXCEPTION_HANDLER(2F1B10)
__SUB_CLASS_THIS(002F1B10, __thiscall, 21691,  CSkillInfo, const SKILLROOT*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F1B10
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
	mov dword ptr [esp+0x14],0
	lea eax,[esp+0x10]
	push eax
	lea edx,[esp+0x2C]
	push edx
	add ecx,0x1C
	mov dword ptr [esp+0x28],0
	call ZMap<long, ZRef<SKILLROOT>, long>::GetAt
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test edi,edi
	je Block4

 Block1:
	lea esi,[edi-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov eax,edi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// SKILLENTRY::AdjustDamageDecRate
__SUB_CLASS_THIS(0030AEC0, __thiscall, 20510,  SKILLENTRY, int32_t, long, long, long*, int32_t) {
__asm {

 Block0:
	push ebx
	xor ebx,ebx
	push edi
	mov edi,dword ptr [esp+0x14]
	cmp dword ptr [esp+0x18],ebx
	je Block2

 Block1:
	mov eax,dword ptr [esp+0x10]
	fld qword ptr [eax*8+_D_S_AADRATE]
	jmp Block24

 Block2:
	mov eax,dword ptr [ecx]
	cmp eax,0x423D0C
	jg Block14

 Block3:
	je Block13

 Block4:
	cmp eax,0x30D7ED
	jg Block12

 Block5:
	je Block11

 Block6:
	cmp eax,0x21E3CE
	je Block20

 Block7:
	cmp eax,0x2F514D
	jne Block18

 Block8:
	mov edx,dword ptr [esp+0xC]
	push edx
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	mov dword ptr [esp+0xC],eax
	fild dword ptr [esp+0xC]
	fdiv qword ptr [__real_4059000000000000]
	cmp dword ptr [esp+0x10],ebx
	jne Block24

 Block9:
	cmp dword ptr [edi],ebx
	jne Block24

 Block10:
	mov ebx,1
	jmp Block24

 Block11:
	mov eax,dword ptr [esp+0x10]
	fld qword ptr [eax*8+_D_S_AADRATE+120]
	jmp Block24

 Block12:
	cmp eax,0x312609
	jmp Block17

 Block13:
	mov ecx,dword ptr [esp+0x10]
	fld qword ptr [ecx*8+_D_S_AADRATE+480]
	jmp Block24

 Block14:
	cmp eax,0x4E23EA
	je Block23

 Block15:
	cmp eax,0x1527489
	je Block20

 Block16:
	cmp eax,0x1F914C9

 Block17:
	je Block19

 Block18:
	pop edi
	xor eax,eax
	pop ebx
	ret 0x10

 Block19:
	mov edx,dword ptr [esp+0x10]
	fld qword ptr [edx*8+_D_S_AADRATE+360]
	jmp Block24

 Block20:
	mov eax,dword ptr [esp+0xC]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x168]
	push ecx
	add eax,0x160
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,eax
	imul edx,dword ptr [esp+0x18]
	mov eax,0x64
	sub eax,edx
	add esp,8
	cmp eax,0x64
	mov dword ptr [esp+0x10],eax
	jl Block22

 Block21:
	mov dword ptr [esp+0x10],0x64

 Block22:
	fild dword ptr [esp+0x10]
	fdiv qword ptr [__real_4059000000000000]
	jmp Block24

 Block23:
	mov eax,dword ptr [esp+0x10]
	fld qword ptr [eax*8+_D_S_AADRATE+240]

 Block24:
	push esi
	xor esi,esi

 Block25:
	fild dword ptr [edi+esi*4]
	fmul st,st(1)
	call __ftol2_sse
	mov dword ptr [edi+esi*4],eax
	inc esi
	cmp esi,0xF
	jl Block25

 Block26:
	pop esi
	fstp st(0)
	pop edi
	mov eax,ebx
	pop ebx
	ret 0x10
}
}
// get_amplification
// 70A900
static uint8_t _SUB_30A5E0_LOOKUP_TABLE_0[7] = {
0, 1, 0, 1, 1, 0, 0, 
};
__SUB(0030A5E0, __cdecl, 133336,  long, const CharacterData&, long, long*) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [esp+0xC]
	mov eax,dword ptr [esi+0x3D]
	push edi
	push 0xD3
	push eax
	lea edi,[esi+0x39]
	push edi
	xor ebx,ebx
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	push ecx
	call is_correct_job_for_skill_root
	add esp,8
	test eax,eax
	je Block3

 Block1:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PMAGE1_ELEMENT
	push 0x203231
	push esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [_D_S_PMAGE1_ELEMENT]
	push eax
	call SKILLENTRY::GetLevelData
	mov ebx,eax

 Block3:
	mov edx,dword ptr [esi+0x3D]
	push 0xDD
	push edx
	push edi
	call _ZtlSecureFuseHelper<short>::call
	cwde
	add esp,8
	push eax
	call is_correct_job_for_skill_root
	add esp,8
	test eax,eax
	je Block6

 Block4:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PMAGE2_ELEMENT
	push 0x21B8D1
	push esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [_D_S_PMAGE2_ELEMENT]
	push eax
	call SKILLENTRY::GetLevelData
	mov ebx,eax

 Block6:
	mov ecx,dword ptr [esi+0x3D]
	push 0x4BB
	push ecx
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	add esp,8
	push edx
	call is_correct_job_for_skill_root
	add esp,8
	test eax,eax
	je Block9

 Block7:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PFLAMEWIZARD_E
	push 0xB8C8B1
	push esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [_D_S_PFLAMEWIZARD_E]
	push eax
	call SKILLENTRY::GetLevelData
	mov ebx,eax

 Block9:
	mov eax,dword ptr [esi+0x3D]
	push 0x8A7
	push eax
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	push ecx
	call is_correct_job_for_skill_root
	add esp,8
	test eax,eax
	je Block12

 Block10:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PEVAN_ELEMENTA
	push 0x151FB70
	push esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [_D_S_PEVAN_ELEMENTA]
	push eax
	call SKILLENTRY::GetLevelData
	mov ebx,eax

 Block12:
	mov esi,dword ptr [esp+0x18]
	test esi,esi
	je Block14

 Block13:
	mov dword ptr [esi],0x64

 Block14:
	test ebx,ebx
	jne Block16

 Block15:
	pop edi
	pop esi
	lea eax,[ebx+0x64]
	pop ebx
	ret

 Block16:
	test esi,esi
	je Block74

 Block17:
	mov eax,dword ptr [esp+0x14]
	cmp eax,0xB8A58A
	jg Block46

 Block18:
	je Block73

 Block19:
	cmp eax,0x2195AD
	jg Block33

 Block20:
	cmp eax,0x2195AC
	jge Block73

 Block21:
	cmp eax,0x20361E
	jg Block31

 Block22:
	je Block73

 Block23:
	cmp eax,0x200F0D
	jg Block28

 Block24:
	cmp eax,0x200F0C
	jge Block73

 Block25:
	cmp eax,0x1E886C
	jl Block74

 Block26:
	cmp eax,0x1E886D
	jle Block73

 Block27:
	jmp Block74

 Block28:
	cmp eax,0x20361A
	jl Block74

 Block29:
	cmp eax,0x20361B
	jle Block73

 Block30:
	jmp Block74

 Block31:
	add eax,0xFFDFA2D7
	cmp eax,6
	ja Block74

 Block32:
	movzx edx,byte ptr [eax+_SUB_30A5E0_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block73
cmp EDX, 1
je Block74


 Block33:
	cmp eax,0x21E3CB
	jg Block42

 Block34:
	je Block73

 Block35:
	cmp eax,0x21BCBE
	jg Block40

 Block36:
	je Block73

 Block37:
	cmp eax,0x21BCBA
	jl Block74

 Block38:
	cmp eax,0x21BCBB
	jle Block73

 Block39:
	jmp Block74

 Block40:
	cmp eax,0x21E3C9
	je Block73

 Block41:
	jmp Block74

 Block42:
	cmp eax,0x21E3CE
	jl Block74

 Block43:
	cmp eax,0x21E3CF
	jle Block73

 Block44:
	cmp eax,0xB71EEB
	je Block73

 Block45:
	jmp Block74

 Block46:
	cmp eax,0x1518A28
	jg Block60

 Block47:
	je Block73

 Block48:
	cmp eax,0x14FB569
	jg Block57

 Block49:
	je Block73

 Block50:
	cmp eax,0xB8CC9B
	jg Block54

 Block51:
	je Block73

 Block52:
	cmp eax,0xB8A58E
	je Block73

 Block53:
	jmp Block74

 Block54:
	cmp eax,0xB8CC9D
	jl Block74

 Block55:
	cmp eax,0xB8CC9E
	jle Block73

 Block56:
	jmp Block74

 Block57:
	cmp eax,0x1513C08
	je Block73

 Block58:
	cmp eax,0x1516318
	je Block73

 Block59:
	jmp Block74

 Block60:
	cmp eax,0x1522669
	jg Block69

 Block61:
	je Block73

 Block62:
	cmp eax,0x151D849
	jg Block66

 Block63:
	je Block73

 Block64:
	cmp eax,0x151B138
	je Block73

 Block65:
	jmp Block74

 Block66:
	cmp eax,0x151FF59
	jl Block74

 Block67:
	cmp eax,0x151FF5A
	jle Block73

 Block68:
	jmp Block74

 Block69:
	cmp eax,0x152748A
	jg Block74

 Block70:
	cmp eax,0x1527489
	jge Block73

 Block71:
	cmp eax,0x1524D7A
	jl Block74

 Block72:
	cmp eax,0x1524D7B
	jg Block74

 Block73:
	mov eax,dword ptr [ebx+0x168]
	push eax
	lea ecx,[ebx+0x160]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [esi],eax

 Block74:
	mov edx,dword ptr [ebx+0x174]
	push edx
	add ebx,0x16C
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	pop edi
	pop esi
	pop ebx
	ret
}
}
// is_correct_melee_attack
__SUB(0030B8E0, __cdecl, 133344,  int32_t, long, long, long, const SKILLENTRY*, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	lea eax,[ebx-1]
	cmp eax,9
	ja Block19

 Block1:
	push ebp
	mov ebp,dword ptr [esp+0x14]
	cmp ebp,0x29
	je Block3

 Block2:
	cmp ebp,0x39
	jne Block4

 Block3:
	xor eax,eax
	cmp dword ptr [esp+0x18],eax
	pop ebp
	sete al
	pop ebx
	ret

 Block4:
	push esi
	mov esi,dword ptr [esp+0x1C]
	push edi
	test esi,esi
	je Block11

 Block5:
	mov ecx,dword ptr [esp+0x18]
	push 0xFFFFFFFF
	push ecx
	mov ecx,esi
	call SKILLENTRY::IsCorrectWeaponType
	test eax,eax
	je Block17

 Block6:
	mov edi,dword ptr [esp+0x24]
	push edi
	mov ecx,esi
	call SKILLENTRY::IsActionAppointed
	mov ecx,3
	test eax,eax
	je Block9

 Block7:
	cmp dword ptr [esi+0xC],ecx
	je Block10

 Block8:
	push ebp
	push edi
	mov ecx,esi
	call SKILLENTRY::IsCorrectAppointedAction
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret

 Block9:
	cmp dword ptr [esi+0xC],ecx
	jne Block11

 Block10:
	lea eax,[ebx+ebx-1]
	jmp Block12

 Block11:
	lea eax,[ebx+ebx-2]

 Block12:
	lea eax,[eax+eax*2]
	add eax,eax
	add eax,eax
	mov edx,dword ptr [eax+eax+_D_AMELEEATTACKACTI]
	add eax,eax
	xor ecx,ecx
	test edx,edx
	jle Block17

 Block13:
	lea eax,[eax+_D_AMELEEATTACKACTI+4]
	jmp Block15

 Block15:
	cmp dword ptr [eax],ebp
	je Block18

 Block16:
	inc ecx
	add eax,4
	cmp ecx,edx
	jl Block15

 Block17:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret

 Block18:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	ret

 Block19:
	xor eax,eax
	pop ebx
	ret
}
}
// CSkillInfo::LoadSkill
_SUB_EXCEPTION_HANDLER(30C190)
__SUB_CLASS_THIS(0030C190, __thiscall, 21734,  CSkillInfo, ZRef<SKILLENTRY>*, ZRef<SKILLENTRY>*, long, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_30C190
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x194
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x18],ecx
	xor edi,edi
	mov dword ptr [ebp-0x10],edi
	mov esi,1
	mov dword ptr [ebp-4],esi
	lea eax,[ebp-0xC8]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov dword ptr [ebp+0x40],edi
	mov ebx,dword ptr [ebp+0x70]
	mov ecx,ebx
	mov byte ptr [ebp-4],4
	mov dword ptr [ebx+4],edi
	call ZRef<SKILLENTRY>::_Alloc
	mov dword ptr [ebp-0x10],esi
	mov dword ptr [ebp-0x2C],edi
	mov esi,dword ptr [ebp+0x74]
	push esi
	lea ecx,[ebp-0x2C]
	push offset _S_07D
	push ecx
	mov byte ptr [ebp-4],5
	call ZXString<char>::Format
	mov eax,dword ptr [ebx+4]
	add esp,8
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x671
	push edx
	mov dword ptr [eax],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push ecx
	mov ecx,esp
	lea eax,[ebp-0x2C]
	mov dword ptr [ebp+4],esp
	push eax
	mov byte ptr [ebp-4],6
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+4],esp
	cmp eax,edi
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	lea ecx,[ebp+0x14]
	push ecx
	mov byte ptr [ebp-4],5
	call get_labeled_string_1
	add esp,0x10
	mov ecx,dword ptr [ebx+4]
	push eax
	add ecx,4
	mov byte ptr [ebp-4],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],5
	cmp eax,edi
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x5D4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push ecx
	mov ecx,esp
	lea eax,[ebp-0x2C]
	mov dword ptr [ebp+4],esp
	push eax
	mov edi,8
	mov byte ptr [ebp-4],8
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+4],esp
	test eax,eax
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block6:
	lea ecx,[ebp+0x14]
	push ecx
	mov byte ptr [ebp-4],5
	call get_labeled_string_1
	add esp,0x10
	mov ecx,dword ptr [ebx+4]
	push eax
	add ecx,8
	mov byte ptr [ebp-4],9
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x96B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0xA
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov esi,dword ptr [ebx+4]
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	add esp,8
	mov dword ptr [esi+0xC],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x4C],di
	jne Block13

 Block11:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1939
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0xC
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov esi,dword ptr [ebx+4]
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	mov dword ptr [esi+0x10],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x4C],di
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x96C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0xE
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov esi,dword ptr [ebx+4]
	push eax
	mov byte ptr [ebp-4],0xF
	call get_int32
	add esp,8
	mov dword ptr [esi+0x18],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x4C],di
	jne Block25

 Block23:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1683
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x10
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov esi,dword ptr [ebx+4]
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1C],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x4C],di
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xEA9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x12
	test ecx,ecx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov esi,dword ptr [ebx+4]
	push eax
	mov byte ptr [ebp-4],0x13
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x34],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x4C],di
	jne Block37

 Block35:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AAB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov esi,dword ptr [ebx+4]
	push eax
	mov byte ptr [ebp-4],0x15
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x38],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x4C],di
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AC0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x16
	test ecx,ecx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov esi,dword ptr [ebx+4]
	push eax
	mov byte ptr [ebp-4],0x17
	call get_int32
	add esp,8
	mov dword ptr [esi+0x3C],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x4C],di
	jne Block49

 Block47:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1901
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x18
	test ecx,ecx
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov esi,dword ptr [ebx+4]
	push eax
	mov byte ptr [ebp-4],0x19
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x40],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x4C],di
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xB7D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x1A
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov esi,dword ptr [ebx+4]
	push eax
	mov byte ptr [ebp-4],0x1B
	call get_int32
	add esp,8
	mov dword ptr [esi+0x48],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x4C],di
	jne Block61

 Block59:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x14F9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x1C
	test ecx,ecx
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov esi,dword ptr [ebx+4]
	push eax
	mov byte ptr [ebp-4],0x1D
	call get_int32
	add esp,8
	mov dword ptr [esi+0x4C],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x4C],di
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov eax,dword ptr [ebx+4]
	mov dword ptr [eax+0x70],0
	mov eax,dword ptr [ebx+4]
	cmp dword ptr [eax+0x10],0
	je Block149

 Block69:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_PSDSKILL
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x1E
	test ecx,ecx
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x20],0
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
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x21
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov edi,dword ptr [ebp+0x20]
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block147

 Block79:
	test edi,edi
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	lea edx,[ebp+0x14]
	push edx
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp+0xC]
	mov byte ptr [ebp-4],0x22
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x24
	test eax,eax
	je Block83

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block83:
	lea eax,[ebp-0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0x25
	mov dword ptr [ebp+8],0

 Block84:
	mov ebx,dword ptr [ebp+0xC]
	test ebx,ebx
	je Block9

 Block85:
	mov ecx,dword ptr [ebx]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+8]
	push edx
	lea eax,[ebp-0x28]
	push eax
	push 1
	push ebx
	call ecx
	test eax,eax
	jne Block141

 Block86:
	lea edx,[ebp-0x28]
	push edx
	lea eax,[ebp+0x38]
	push eax
	call DetachBSTR
	add esp,8
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0x38]
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block88

 Block87:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block88:
	mov edi,dword ptr [ebp+0x20]
	lea ecx,[ebp-0x70]
	push ecx
	mov byte ptr [ebp-4],0x27
	mov ecx,edi
	mov byte ptr [ebp-4],0x26
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x28
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block90

 Block89:
	cmp eax,0x80004002
	jne Block73

 Block90:
	cmp word ptr [ebp-0x70],8
	mov byte ptr [ebp-4],0x2A
	jne Block93

 Block91:
	mov eax,dword ptr [ebp-0x68]
	xor edx,edx
	mov word ptr [ebp-0x70],dx
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea eax,[ebp-0x70]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block94:
	mov esi,dword ptr [ebp+0x44]
	test esi,esi
	sete al
	test al,al
	jne Block137

 Block95:
	lea ecx,[ebp]
	mov dword ptr [ebp+4],0
	call ZRef<AdditionPsd>::_Alloc
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x18E8
	push ecx
	mov byte ptr [ebp-4],0x2B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x2C
	test esi,esi
	je Block9

 Block96:
	lea edx,[ebp-0xA0]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x2B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2D
	call get_int32
	mov edi,dword ptr [ebp+4]
	mov ebx,8
	add esp,8
	mov dword ptr [edi+8],eax
	mov byte ptr [ebp-4],0x2B
	cmp word ptr [ebp-0xA0],bx
	jne Block99

 Block97:
	xor eax,eax
	mov word ptr [ebp-0xA0],ax
	mov eax,dword ptr [ebp-0x98]
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea ecx,[ebp-0xA0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1903
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x80]
	mov byte ptr [ebp-4],0x2E
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x2B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2F
	call get_int32
	add esp,8
	mov dword ptr [edi],eax
	mov byte ptr [ebp-4],0x2B
	cmp word ptr [ebp-0x80],bx
	jne Block103

 Block101:
	mov eax,dword ptr [ebp-0x78]
	xor ecx,ecx
	mov word ptr [ebp-0x80],cx
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[ebp-0x80]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1905
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0x30
	mov ecx,esi
	mov byte ptr [ebp-4],0x2B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x31
	call get_int32
	add esp,8
	mov dword ptr [edi+4],eax
	mov byte ptr [ebp-4],0x2B
	cmp word ptr [ebp-0x3C],bx
	jne Block107

 Block105:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block108:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1906
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x24]
	mov byte ptr [ebp-4],0x32
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x2B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x33
	call get_int32
	add esp,8
	mov dword ptr [edi+0xC],eax
	mov byte ptr [ebp-4],0x2B
	cmp word ptr [ebp+0x24],bx
	jne Block111

 Block109:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1936
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],0x34
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x2B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x35
	call get_int32
	add esp,8
	mov dword ptr [edi+0x10],eax
	mov byte ptr [ebp-4],0x2B
	cmp word ptr [ebp-0x60],bx
	jne Block115

 Block113:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea edx,[ebp-0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1924
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x50]
	push ecx
	mov byte ptr [ebp-4],0x36
	mov ecx,esi
	mov byte ptr [ebp-4],0x2B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x37
	call get_int32
	add esp,8
	mov dword ptr [edi+0x14],eax
	mov byte ptr [ebp-4],0x2B
	cmp word ptr [ebp-0x50],bx
	jne Block119

 Block117:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block120:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x191B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x90]
	mov byte ptr [ebp-4],0x38
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x2B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x39
	call get_int32
	add esp,8
	mov dword ptr [edi+0x18],eax
	mov byte ptr [ebp-4],0x2B
	cmp word ptr [ebp-0x90],bx
	jne Block123

 Block121:
	xor eax,eax
	mov word ptr [ebp-0x90],ax
	mov eax,dword ptr [ebp-0x88]
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea ecx,[ebp-0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block124:
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block126

 Block125:
	mov eax,dword ptr [eax]
	jmp Block127

 Block126:
	xor eax,eax

 Block127:
	push eax
	call __wtoi
	mov edx,dword ptr [ebp+0x70]
	add esp,4
	mov dword ptr [ebp+0x3C],eax
	mov eax,dword ptr [edx+4]
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp+0x3C]
	push edx
	lea ecx,[eax+0x1E4]
	call ZMap<long, ZRef<AdditionPsd>, long>::Insert
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	mov byte ptr [ebp-4],0x2A
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block130

 Block128:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block130

 Block129:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block130:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	xor edi,edi
	push esi
	mov dword ptr [ebp+4],edi
	mov byte ptr [ebp-4],0x26
	call ecx
	mov ecx,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x25
	cmp ecx,edi
	je Block132

 Block131:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x38],edi

 Block132:
	cmp word ptr [ebp-0x28],8
	jne Block135

 Block133:
	mov eax,dword ptr [ebp-0x20]
	xor edx,edx
	mov word ptr [ebp-0x28],dx
	cmp eax,edi
	je Block84

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block135:
	lea eax,[ebp-0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]
	cmp eax,edi
	jge Block84

 Block136:
	jmp Block73

 Block137:
	mov byte ptr [ebp-4],0x26
	test esi,esi
	je Block139

 Block138:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block139:
	cmp dword ptr [ebp+0x38],0
	je Block142

 Block140:
	mov ecx,dword ptr [ebp+0x38]
	call _xbstr_t::Data_t::Release
	jmp Block142

 Block141:
	mov edi,dword ptr [ebp+0x20]

 Block142:
	cmp word ptr [ebp-0x28],8
	mov byte ptr [ebp-4],0x24
	jne Block145

 Block143:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block146:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [ebp-4],0x21
	call eax

 Block147:
	mov byte ptr [ebp-4],5
	test edi,edi
	je Block149

 Block148:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block149:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1A9A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x3A
	test ecx,ecx
	jne Block151

 Block150:
	push 0x80004003
	call _com_issue_error

 Block151:
	lea edx,[ebp-0x90]
	push edx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x3B
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x14],ebx
	test eax,eax
	je Block155

 Block152:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0xC]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0xC]
	mov dword ptr [ebp+0x14],ebx
	test eax,eax
	jge Block155

 Block153:
	cmp eax,0x80004002
	je Block155

 Block154:
	push eax
	call _com_issue_error

 Block155:
	cmp word ptr [ebp-0x90],8
	mov byte ptr [ebp-4],0x3D
	jne Block158

 Block156:
	mov eax,dword ptr [ebp-0x88]
	xor ecx,ecx
	mov word ptr [ebp-0x90],cx
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea edx,[ebp-0x90]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	test ebx,ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block172

 Block160:
	xor edi,edi
	test ebx,ebx
	je Block9

 Block161:
	lea esp,[esp]

 Block162:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x44]
	push ecx
	push ebx
	mov dword ptr [ebp+0x44],0
	call edx
	test eax,eax
	jge Block164

 Block163:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block164:
	cmp edi,dword ptr [ebp+0x44]
	jae Block172

 Block165:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x50]
	mov byte ptr [ebp-4],0x3E
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x3D
	call IWzProperty::Getitem
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x3F
	call _xbstr_t::_ctor_3
	call get_action_code_from_name
	add esp,4
	cmp word ptr [ebp-0x50],8
	mov esi,eax
	mov byte ptr [ebp-4],0x3D
	jne Block168

 Block166:
	mov eax,dword ptr [ebp-0x48]
	xor ecx,ecx
	mov word ptr [ebp-0x50],cx
	test eax,eax
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea edx,[ebp-0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block169:
	test esi,esi
	jl Block171

 Block170:
	mov eax,dword ptr [ebp+0x70]
	mov eax,dword ptr [eax+4]
	push 0xFFFFFFFF
	lea ecx,[eax+0x20]
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi

 Block171:
	inc edi
	jmp Block162

 Block172:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1797
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x40
	test ecx,ecx
	jne Block174

 Block173:
	push 0x80004003
	call _com_issue_error

 Block174:
	lea edx,[ebp-0x50]
	push edx
	mov byte ptr [ebp-4],0x3D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x41
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0xC],esi
	test eax,eax
	je Block178

 Block175:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+8]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+8]
	mov esi,ecx
	mov dword ptr [ebp+0xC],esi
	test eax,eax
	jge Block178

 Block176:
	cmp eax,0x80004002
	je Block178

 Block177:
	push eax
	call _com_issue_error

 Block178:
	mov ebx,8
	mov byte ptr [ebp-4],0x43
	cmp word ptr [ebp-0x50],bx
	jne Block181

 Block179:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	test eax,eax
	je Block182

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block182

 Block181:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block182:
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block186

 Block183:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push 0
	call __itow
	add esp,8
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x44
	test esi,esi
	jne Block185

 Block184:
	push 0x80004003
	call _com_issue_error

 Block185:
	lea ecx,[ebp-0x60]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x43
	call IWzProperty::Getitem
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x45
	mov dword ptr [ebp-0x10],3
	call _xbstr_t::_ctor_3
	call get_action_code_from_name
	add esp,4
	jmp Block187

 Block186:
	xor eax,eax

 Block187:
	test byte ptr [ebp-0x10],2
	mov esi,dword ptr [ebp+0x70]
	mov ecx,dword ptr [esi+4]
	mov dword ptr [ecx+0x24],eax
	mov dword ptr [ebp-4],0x43
	je Block192

 Block188:
	and dword ptr [ebp-0x10],0xFFFFFFFD
	cmp word ptr [ebp-0x60],bx
	jne Block191

 Block189:
	mov eax,dword ptr [ebp-0x58]
	xor edx,edx
	mov word ptr [ebp-0x60],dx
	test eax,eax
	je Block192

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block192

 Block191:
	lea eax,[ebp-0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block192:
	mov eax,dword ptr [esi+4]
	or ecx,0xFFFFFFFF
	push 0
	mov dword ptr [eax+0x50],ecx
	mov eax,dword ptr [esi+4]
	push 0
	push ecx
	mov dword ptr [eax+0x54],ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1675
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x46
	test ecx,ecx
	jne Block194

 Block193:
	push 0x80004003
	call _com_issue_error

 Block194:
	lea edx,[ebp-0x60]
	push edx
	mov byte ptr [ebp-4],0x43
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x47
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+8],edi
	test eax,eax
	je Block198

 Block195:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x44]
	mov edi,ecx
	mov dword ptr [ebp+8],edi
	test eax,eax
	jge Block198

 Block196:
	cmp eax,0x80004002
	je Block198

 Block197:
	push eax
	call _com_issue_error

 Block198:
	mov byte ptr [ebp-4],0x49
	cmp word ptr [ebp-0x60],bx
	jne Block201

 Block199:
	mov eax,dword ptr [ebp-0x58]
	xor edx,edx
	mov word ptr [ebp-0x60],dx
	test eax,eax
	je Block202

 Block200:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block201:
	lea eax,[ebp-0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block202:
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block213

 Block203:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_DELAY
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x4A
	test edi,edi
	jne Block205

 Block204:
	push 0x80004003
	call _com_issue_error

 Block205:
	lea ecx,[ebp+0x24]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x49
	call IWzProperty::Getitem
	mov ebx,dword ptr [ebp+0x70]
	mov esi,dword ptr [ebx+4]
	push eax
	mov byte ptr [ebp-4],0x4B
	call get_int32
	add esp,8
	mov dword ptr [esi+0x50],eax
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0x49
	jne Block208

 Block206:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block209

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block209

 Block208:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block209:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_HOLD
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x24]
	push ecx
	mov byte ptr [ebp-4],0x4C
	mov ecx,edi
	mov byte ptr [ebp-4],0x49
	call IWzProperty::Getitem
	mov esi,dword ptr [ebx+4]
	push eax
	mov byte ptr [ebp-4],0x4D
	call get_int32
	add esp,8
	mov dword ptr [esi+0x54],eax
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0x49
	jne Block212

 Block210:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block213

 Block211:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block213

 Block212:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block213:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x685
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x4E
	test ecx,ecx
	jne Block215

 Block214:
	push 0x80004003
	call _com_issue_error

 Block215:
	lea edx,[ebp+0x24]
	push edx
	mov byte ptr [ebp-4],0x49
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0xC8]
	push eax
	mov byte ptr [ebp-4],0x4F
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block217

 Block216:
	push eax
	call _com_issue_error

 Block217:
	mov edi,8
	mov byte ptr [ebp-4],0x49
	cmp word ptr [ebp+0x24],di
	jne Block220

 Block218:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block221

 Block219:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block221

 Block220:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block221:
	mov esi,dword ptr [ebp+0x70]
	mov eax,dword ptr [esi+4]
	mov ecx,dword ptr [ebp-0xC0]
	cmp word ptr [ebp-0xC8],di
	je Block223

 Block222:
	mov ecx,offset _S___3

 Block223:
	add eax,0x14
	call __get_element_attribute
	test eax,eax
	jne Block225

 Block224:
	push offset ZException::THROW_INFO
	lea eax,[ebp+0x44]
	push eax
	mov dword ptr [ebp+0x44],0x80004005
	call _CxxThrowException

 Block225:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x96E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x50
	test ecx,ecx
	jne Block227

 Block226:
	push 0x80004003
	call _com_issue_error

 Block227:
	lea edx,[ebp+0x24]
	push edx
	mov byte ptr [ebp-4],0x49
	call IWzProperty::Getitem
	mov esi,dword ptr [esi+4]
	push eax
	mov byte ptr [ebp-4],0x51
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x210],eax
	mov byte ptr [ebp-4],0x49
	cmp word ptr [ebp+0x24],di
	jne Block230

 Block228:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block231

 Block229:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block231

 Block230:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block231:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AAD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x52
	test ecx,ecx
	jne Block233

 Block232:
	push 0x80004003
	call _com_issue_error

 Block233:
	lea eax,[ebp+0x24]
	push eax
	mov byte ptr [ebp-4],0x49
	call IWzProperty::Getitem
	movzx esi,word ptr [eax]
	cmp word ptr [ebp+0x24],di
	jne Block236

 Block234:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block237

 Block235:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block237

 Block236:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block237:
	test si,si
	je Block255

 Block238:
	lea eax,[ebp+0x3C]
	push 0x96F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov ebx,dword ptr [ebp+0x74]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebx
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x53
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x44]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp+0x44]
	lea esi,[eax+0x214]
	lea eax,[ebp+0x44]
	cmp esi,eax
	je Block243

 Block239:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block241

 Block240:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block241:
	mov dword ptr [esi],edi
	test edi,edi
	je Block250

 Block242:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block243:
	test edi,edi
	je Block250

 Block244:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block250

 Block245:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block247

 Block246:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block247:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block249

 Block248:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block249:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block250:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x49
	test eax,eax
	je Block252

 Block251:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block252:
	mov edi,8

 Block253:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x697
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x54
	test ecx,ecx
	jne Block256

 Block254:
	push 0x80004003
	call _com_issue_error

 Block255:
	mov ebx,dword ptr [ebp+0x74]
	jmp Block253

 Block256:
	lea edx,[ebp+0x24]
	push edx
	mov byte ptr [ebp-4],0x49
	call IWzProperty::Getitem
	movzx esi,word ptr [eax]
	cmp word ptr [ebp+0x24],di
	jne Block259

 Block257:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block260

 Block258:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block260

 Block259:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block260:
	test si,si
	je Block275

 Block261:
	lea edx,[ebp+0x3C]
	push 0x970
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebx
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x55
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x44]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp+0x44]
	lea esi,[eax+0x218]
	lea eax,[ebp+0x44]
	cmp esi,eax
	je Block266

 Block262:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block264

 Block263:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block264:
	mov dword ptr [esi],edi
	test edi,edi
	je Block273

 Block265:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block266:
	test edi,edi
	je Block273

 Block267:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block273

 Block268:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block270

 Block269:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block270:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block272

 Block271:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block272:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block273:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x49
	test eax,eax
	je Block275

 Block274:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block275:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x96D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x56
	test ecx,ecx
	jne Block277

 Block276:
	push 0x80004003
	call _com_issue_error

 Block277:
	lea edx,[ebp+0x24]
	push edx
	mov byte ptr [ebp-4],0x49
	call IWzProperty::Getitem
	cmp word ptr [ebp+0x24],8
	movzx esi,word ptr [eax]
	jne Block280

 Block278:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block281

 Block279:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block281

 Block280:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block281:
	test si,si
	je Block296

 Block282:
	lea edx,[ebp+0x3C]
	push 0x973
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebx
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x57
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x44]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp+0x44]
	lea esi,[eax+0x21C]
	lea eax,[ebp+0x44]
	cmp esi,eax
	je Block287

 Block283:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block285

 Block284:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block285:
	mov dword ptr [esi],edi
	test edi,edi
	je Block294

 Block286:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block287:
	test edi,edi
	je Block294

 Block288:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block294

 Block289:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block291

 Block290:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block291:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block293

 Block292:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block293:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block294:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x49
	test eax,eax
	je Block296

 Block295:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block296:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x194A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x58
	test ecx,ecx
	jne Block298

 Block297:
	push 0x80004003
	call _com_issue_error

 Block298:
	lea edx,[ebp+0x24]
	push edx
	mov byte ptr [ebp-4],0x49
	call IWzProperty::Getitem
	cmp word ptr [ebp+0x24],8
	movzx esi,word ptr [eax]
	jne Block301

 Block299:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block302

 Block300:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block302

 Block301:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block302:
	test si,si
	je Block317

 Block303:
	lea edx,[ebp+0x3C]
	push 0x1943
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebx
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x59
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x44]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp+0x44]
	lea esi,[eax+0x220]
	lea eax,[ebp+0x44]
	cmp esi,eax
	je Block308

 Block304:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block306

 Block305:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block306:
	mov dword ptr [esi],edi
	test edi,edi
	je Block315

 Block307:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block308:
	test edi,edi
	je Block315

 Block309:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block315

 Block310:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block312

 Block311:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block312:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block314

 Block313:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block314:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block315:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x49
	test eax,eax
	je Block317

 Block316:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block317:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AC8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x5A
	test ecx,ecx
	jne Block319

 Block318:
	push 0x80004003
	call _com_issue_error

 Block319:
	lea edx,[ebp+0x24]
	push edx
	mov byte ptr [ebp-4],0x49
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x5B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x20],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block322

 Block320:
	cmp eax,0x80004002
	je Block322

 Block321:
	push eax
	call _com_issue_error

 Block322:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0x5D
	jne Block325

 Block323:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block326

 Block324:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block326

 Block325:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block326:
	cmp dword ptr [ebp+0x20],0
	sete al
	test al,al
	sete al
	test al,al
	je Block346

 Block327:
	lea edx,[ebp+0x3C]
	push 0x9E5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebx
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x5E
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x44]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp+0x44]
	lea esi,[eax+0x240]
	lea eax,[ebp+0x44]
	cmp esi,eax
	je Block332

 Block328:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block330

 Block329:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block330:
	mov dword ptr [esi],edi
	test edi,edi
	je Block334

 Block331:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block332:
	test edi,edi
	je Block334

 Block333:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block334:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x5D
	test eax,eax
	je Block336

 Block335:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block336:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1A9A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x5F
	test ecx,ecx
	jne Block338

 Block337:
	push 0x80004003
	call _com_issue_error

 Block338:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],0x5D
	call IWzProperty::Getitem
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x60
	call _xbstr_t::_ctor_3
	call get_action_code_from_name
	mov ecx,dword ptr [ebp+0x70]
	mov ecx,dword ptr [ecx+4]
	add esp,4
	mov dword ptr [ecx+0x28],eax
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x5D
	jne Block341

 Block339:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block342

 Block340:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block342

 Block341:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block342:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x963
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x20]
	lea edx,[ebp-0x3C]
	mov byte ptr [ebp-4],0x61
	push edx
	mov byte ptr [ebp-4],0x5D
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+0x70]
	mov esi,dword ptr [ecx+4]
	push eax
	mov byte ptr [ebp-4],0x62
	call get_int32
	add esp,8
	mov dword ptr [esi+0x2C],eax
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x5D
	jne Block345

 Block343:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block346

 Block344:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block346

 Block345:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block346:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xE94
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x63
	test ecx,ecx
	jne Block348

 Block347:
	push 0x80004003
	call _com_issue_error

 Block348:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],0x5D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x64
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block351

 Block349:
	cmp eax,0x80004002
	je Block351

 Block350:
	push eax
	call _com_issue_error

 Block351:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x66
	jne Block354

 Block352:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block355

 Block353:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block355

 Block354:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block355:
	cmp dword ptr [ebp+0x44],0
	sete al
	test al,al
	sete al
	test al,al
	je Block365

 Block356:
	lea edx,[ebp+0x5C]
	push 0xE93
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebx
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x67
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x3C]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp+0x3C]
	lea esi,[eax+0x244]
	lea eax,[ebp+0x3C]
	cmp esi,eax
	je Block361

 Block357:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block359

 Block358:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block359:
	mov dword ptr [esi],edi
	test edi,edi
	je Block363

 Block360:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block361:
	test edi,edi
	je Block363

 Block362:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block363:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x66
	test eax,eax
	je Block365

 Block364:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block365:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xEFB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x68
	test ecx,ecx
	jne Block367

 Block366:
	push 0x80004003
	call _com_issue_error

 Block367:
	lea eax,[ebp-0x80]
	push eax
	mov byte ptr [ebp-4],0x66
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x69
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block370

 Block368:
	cmp eax,0x80004002
	je Block370

 Block369:
	push eax
	call _com_issue_error

 Block370:
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],0x6B
	jne Block373

 Block371:
	mov eax,dword ptr [ebp-0x78]
	xor ecx,ecx
	mov word ptr [ebp-0x80],cx
	test eax,eax
	je Block374

 Block372:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block374

 Block373:
	lea edx,[ebp-0x80]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block374:
	cmp dword ptr [ebp+0x3C],0
	sete al
	test al,al
	sete al
	test al,al
	je Block384

 Block375:
	lea eax,[ebp+0x48]
	push 0xEFC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebx
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x6C
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x5C]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp+0x5C]
	lea esi,[eax+0x248]
	lea eax,[ebp+0x5C]
	cmp esi,eax
	je Block380

 Block376:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block378

 Block377:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block378:
	mov dword ptr [esi],edi
	test edi,edi
	je Block382

 Block379:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block380:
	test edi,edi
	je Block382

 Block381:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block382:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x6B
	test eax,eax
	je Block384

 Block383:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block384:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AB7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x6D
	test ecx,ecx
	jne Block386

 Block385:
	push 0x80004003
	call _com_issue_error

 Block386:
	lea eax,[ebp-0xA0]
	push eax
	mov byte ptr [ebp-4],0x6B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x6E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x40]
	mov dword ptr [ebp-0x40],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block389

 Block387:
	cmp eax,0x80004002
	je Block389

 Block388:
	push eax
	call _com_issue_error

 Block389:
	cmp word ptr [ebp-0xA0],8
	mov byte ptr [ebp-4],0x70
	jne Block392

 Block390:
	mov eax,dword ptr [ebp-0x98]
	xor ecx,ecx
	mov word ptr [ebp-0xA0],cx
	test eax,eax
	je Block393

 Block391:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block393

 Block392:
	lea edx,[ebp-0xA0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block393:
	mov esi,dword ptr [ebp-0x40]
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block418

 Block394:
	test esi,esi
	jne Block396

 Block395:
	push 0x80004003
	call _com_issue_error

 Block396:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x5C]
	push ecx
	push esi
	mov dword ptr [ebp+0x5C],0
	call edx
	test eax,eax
	jge Block398

 Block397:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block398:
	cmp dword ptr [ebp+0x5C],0
	je Block418

 Block399:
	lea eax,[ebp+0x48]
	push 0x975
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov edi,edx
	shr edi,0x1F
	push ebx
	add edi,edx
	push edi
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x71
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x5C]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	lea ecx,[ebp+0x5C]
	push ecx
	lea ecx,[eax+0x224]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [ebp+0x5C]
	test ecx,ecx
	je Block401

 Block400:
	call _xbstr_t::Data_t::Release

 Block401:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x70
	test eax,eax
	je Block403

 Block402:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block403:
	mov dword ptr [ebp+0x1C],0
	jmp Block405

 Block405:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x5C]
	push eax
	push esi
	mov dword ptr [ebp+0x5C],0
	call ecx
	test eax,eax
	jge Block407

 Block406:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block407:
	mov edx,dword ptr [ebp+0x1C]
	cmp edx,dword ptr [ebp+0x5C]
	jae Block418

 Block408:
	lea eax,[ebp+0x48]
	push 0x976
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x1C]
	mov edx,dword ptr [ebp+0x74]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push edi
	push eax
	lea eax,[ebp+0x40]
	push eax
	mov byte ptr [ebp-4],0x72
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x14
	push eax
	lea ecx,[ebp+0x34]
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x70]
	mov eax,dword ptr [ecx+4]
	push 0xFFFFFFFF
	lea ecx,[eax+0x228]
	mov byte ptr [ebp-4],0x73
	call ZArray<Ztl_bstr_t>::InsertBefore
	mov ebx,dword ptr [ebp+0x34]
	mov esi,eax
	lea edx,[ebp+0x34]
	cmp esi,edx
	je Block413

 Block409:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block411

 Block410:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block411:
	mov dword ptr [esi],ebx
	test ebx,ebx
	je Block415

 Block412:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block413:
	test ebx,ebx
	je Block415

 Block414:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x34],0

 Block415:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x70
	test eax,eax
	je Block417

 Block416:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block417:
	inc dword ptr [ebp+0x1C]
	mov esi,dword ptr [ebp-0x40]
	mov ebx,dword ptr [ebp+0x74]
	jmp Block405

 Block418:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x43F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x74
	test ecx,ecx
	jne Block420

 Block419:
	push 0x80004003
	call _com_issue_error

 Block420:
	lea edx,[ebp-0x120]
	push edx
	mov byte ptr [ebp-4],0x70
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x75
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x1C]
	mov dword ptr [ebp+0x1C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block423

 Block421:
	cmp eax,0x80004002
	je Block423

 Block422:
	push eax
	call _com_issue_error

 Block423:
	cmp word ptr [ebp-0x120],8
	mov byte ptr [ebp-4],0x77
	jne Block426

 Block424:
	xor eax,eax
	mov word ptr [ebp-0x120],ax
	mov eax,dword ptr [ebp-0x118]
	test eax,eax
	je Block427

 Block425:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block427

 Block426:
	lea ecx,[ebp-0x120]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block427:
	cmp dword ptr [ebp+0x1C],0
	sete al
	test al,al
	sete al
	test al,al
	je Block443

 Block428:
	lea edx,[ebp+0x48]
	push 0x978
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebx
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x78
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x5C]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp+0x5C]
	lea esi,[eax+0x22C]
	lea eax,[ebp+0x5C]
	cmp esi,eax
	je Block433

 Block429:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block431

 Block430:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block431:
	mov dword ptr [esi],edi
	test edi,edi
	je Block435

 Block432:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block433:
	test edi,edi
	je Block435

 Block434:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block435:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x77
	test eax,eax
	je Block437

 Block436:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block437:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AA9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [ebp+0x1C],0
	mov byte ptr [ebp-4],0x79
	jne Block439

 Block438:
	push 0x80004003
	call _com_issue_error

 Block439:
	mov ecx,dword ptr [ebp+0x1C]
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],0x77
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+0x70]
	mov esi,dword ptr [ecx+4]
	push eax
	mov byte ptr [ebp-4],0x7A
	call get_int32
	add esp,8
	mov dword ptr [esi+0x30],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x77
	jne Block442

 Block440:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block443

 Block441:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block443

 Block442:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block443:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1793
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x7B
	test ecx,ecx
	jne Block445

 Block444:
	push 0x80004003
	call _com_issue_error

 Block445:
	lea edx,[ebp-0x100]
	push edx
	mov byte ptr [ebp-4],0x77
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x7C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block448

 Block446:
	cmp eax,0x80004002
	je Block448

 Block447:
	push eax
	call _com_issue_error

 Block448:
	cmp word ptr [ebp-0x100],8
	mov byte ptr [ebp-4],0x7E
	jne Block451

 Block449:
	xor eax,eax
	mov word ptr [ebp-0x100],ax
	mov eax,dword ptr [ebp-0xF8]
	test eax,eax
	je Block452

 Block450:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block452

 Block451:
	lea ecx,[ebp-0x100]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block452:
	cmp dword ptr [ebp-0x18],0
	sete al
	test al,al
	sete al
	test al,al
	je Block468

 Block453:
	lea edx,[ebp+0x48]
	push 0x179E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebx
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x7F
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x5C]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp+0x5C]
	lea esi,[eax+0x230]
	lea eax,[ebp+0x5C]
	cmp esi,eax
	je Block458

 Block454:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block456

 Block455:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block456:
	mov dword ptr [esi],edi
	test edi,edi
	je Block460

 Block457:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block458:
	test edi,edi
	je Block460

 Block459:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block460:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x7E
	test eax,eax
	je Block462

 Block461:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block462:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AA9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [ebp-0x18],0
	mov byte ptr [ebp-4],0x80
	jne Block464

 Block463:
	push 0x80004003
	call _com_issue_error

 Block464:
	mov ecx,dword ptr [ebp-0x18]
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+0x70]
	mov esi,dword ptr [ecx+4]
	push eax
	mov byte ptr [ebp-4],0x81
	call get_int32
	add esp,8
	mov dword ptr [esi+0x30],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x7E
	jne Block467

 Block465:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block468

 Block466:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block468

 Block467:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block468:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x666
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x82
	test ecx,ecx
	jne Block470

 Block469:
	push 0x80004003
	call _com_issue_error

 Block470:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	cmp word ptr [ebp+0x4C],8
	movzx esi,word ptr [eax]
	jne Block473

 Block471:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block474

 Block472:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block474

 Block473:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block474:
	test si,si
	je Block484

 Block475:
	lea edx,[ebp+0x48]
	push 0x97A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebx
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x83
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x5C]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp+0x5C]
	lea esi,[eax+0x234]
	lea eax,[ebp+0x5C]
	cmp esi,eax
	je Block480

 Block476:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block478

 Block477:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block478:
	mov dword ptr [esi],edi
	test edi,edi
	je Block482

 Block479:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block480:
	test edi,edi
	je Block482

 Block481:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block482:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x7E
	test eax,eax
	je Block484

 Block483:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block484:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x5FD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x84
	test ecx,ecx
	jne Block486

 Block485:
	push 0x80004003
	call _com_issue_error

 Block486:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	cmp word ptr [ebp+0x4C],8
	movzx esi,word ptr [eax]
	jne Block489

 Block487:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block490

 Block488:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block490

 Block489:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block490:
	test si,si
	je Block500

 Block491:
	lea eax,[ebp+0x48]
	push 0x97C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebx
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x85
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x5C]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp+0x5C]
	lea esi,[eax+0x238]
	lea eax,[ebp+0x5C]
	cmp esi,eax
	je Block496

 Block492:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block494

 Block493:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block494:
	mov dword ptr [esi],edi
	test edi,edi
	je Block498

 Block495:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block496:
	test edi,edi
	je Block498

 Block497:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block498:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x7E
	test eax,eax
	je Block500

 Block499:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block500:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x982
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x86
	test ecx,ecx
	jne Block502

 Block501:
	push 0x80004003
	call _com_issue_error

 Block502:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	cmp word ptr [ebp+0x4C],8
	movzx esi,word ptr [eax]
	jne Block505

 Block503:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block506

 Block504:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block506

 Block505:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block506:
	test si,si
	je Block516

 Block507:
	lea eax,[ebp+0x48]
	push 0x97E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebx
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x87
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x5C]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp+0x5C]
	lea esi,[eax+0x23C]
	lea eax,[ebp+0x5C]
	cmp esi,eax
	je Block512

 Block508:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block510

 Block509:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block510:
	mov dword ptr [esi],edi
	test edi,edi
	je Block514

 Block511:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block512:
	test edi,edi
	je Block514

 Block513:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block514:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x7E
	test eax,eax
	je Block516

 Block515:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block516:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x9E6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x88
	test ecx,ecx
	jne Block518

 Block517:
	push 0x80004003
	call _com_issue_error

 Block518:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	cmp word ptr [ebp+0x4C],8
	movzx esi,word ptr [eax]
	jne Block521

 Block519:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block522

 Block520:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block522

 Block521:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block522:
	test si,si
	je Block532

 Block523:
	lea eax,[ebp+0x48]
	push 0x9E7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebx
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x89
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x5C]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp+0x5C]
	lea esi,[eax+0x24C]
	lea eax,[ebp+0x5C]
	cmp esi,eax
	je Block528

 Block524:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block526

 Block525:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block526:
	mov dword ptr [esi],edi
	test edi,edi
	je Block530

 Block527:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block528:
	test edi,edi
	je Block530

 Block529:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block530:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x7E
	test eax,eax
	je Block532

 Block531:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block532:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1ADE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x8A
	test ecx,ecx
	jne Block534

 Block533:
	push 0x80004003
	call _com_issue_error

 Block534:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	cmp word ptr [ebp+0x4C],8
	movzx esi,word ptr [eax]
	jne Block537

 Block535:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block538

 Block536:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block538

 Block537:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block538:
	test si,si
	je Block548

 Block539:
	lea eax,[ebp+0x48]
	push 0x980
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebx
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x8B
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x5C]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp+0x5C]
	lea esi,[eax+0x250]
	lea eax,[ebp+0x5C]
	cmp esi,eax
	je Block544

 Block540:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block542

 Block541:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block542:
	mov dword ptr [esi],edi
	test edi,edi
	je Block546

 Block543:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block544:
	test edi,edi
	je Block546

 Block545:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block546:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x7E
	test eax,eax
	je Block548

 Block547:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block548:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1061
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x8C
	test ecx,ecx
	jne Block550

 Block549:
	push 0x80004003
	call _com_issue_error

 Block550:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	cmp word ptr [ebp+0x4C],8
	movzx esi,word ptr [eax]
	jne Block553

 Block551:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block554

 Block552:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block554

 Block553:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block554:
	test si,si
	je Block564

 Block555:
	lea eax,[ebp+0x48]
	push 0x9A4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebx
	add eax,edx
	push eax
	push ecx
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x8D
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x5C]
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp+0x5C]
	lea esi,[eax+0x254]
	lea eax,[ebp+0x5C]
	cmp esi,eax
	je Block560

 Block556:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block558

 Block557:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block558:
	mov dword ptr [esi],edi
	test edi,edi
	je Block562

 Block559:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block560:
	test edi,edi
	je Block562

 Block561:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block562:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x7E
	test eax,eax
	je Block564

 Block563:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block564:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x983
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x8E
	test ecx,ecx
	jne Block566

 Block565:
	push 0x80004003
	call _com_issue_error

 Block566:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	mov edi,dword ptr [ebp+0x70]
	mov esi,dword ptr [edi+4]
	mov ecx,eax
	mov byte ptr [ebp-4],0x8F
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x258]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block569

 Block567:
	cmp eax,0x80004002
	je Block569

 Block568:
	push eax
	call _com_issue_error

 Block569:
	mov ebx,8
	mov byte ptr [ebp-4],0x7E
	cmp word ptr [ebp+0x4C],bx
	jne Block572

 Block570:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block573

 Block571:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block573

 Block572:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block573:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x95B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x90
	test ecx,ecx
	jne Block575

 Block574:
	push 0x80004003
	call _com_issue_error

 Block575:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	mov esi,dword ptr [edi+4]
	mov ecx,eax
	mov byte ptr [ebp-4],0x91
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x25C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block578

 Block576:
	cmp eax,0x80004002
	je Block578

 Block577:
	push eax
	call _com_issue_error

 Block578:
	mov byte ptr [ebp-4],0x7E
	cmp word ptr [ebp+0x4C],bx
	jne Block581

 Block579:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block582

 Block580:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block582

 Block581:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block582:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x984
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x92
	test ecx,ecx
	jne Block584

 Block583:
	push 0x80004003
	call _com_issue_error

 Block584:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	mov esi,dword ptr [edi+4]
	mov ecx,eax
	mov byte ptr [ebp-4],0x93
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x260]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block587

 Block585:
	cmp eax,0x80004002
	je Block587

 Block586:
	push eax
	call _com_issue_error

 Block587:
	mov byte ptr [ebp-4],0x7E
	cmp word ptr [ebp+0x4C],bx
	jne Block590

 Block588:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block591

 Block589:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block591

 Block590:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block591:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x985
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x94
	test ecx,ecx
	jne Block593

 Block592:
	push 0x80004003
	call _com_issue_error

 Block593:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x95
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block596

 Block594:
	cmp eax,0x80004002
	je Block596

 Block595:
	push eax
	call _com_issue_error

 Block596:
	mov eax,dword ptr [edi+4]
	mov ecx,dword ptr [ebp+0x18]
	add eax,0x58
	push eax
	call CSkillInfo::LoadFinalAttack
	test eax,eax
	sete bl
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x7E
	jne Block599

 Block597:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block600

 Block598:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block600

 Block599:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block600:
	test bl,bl
	je Block603

 Block601:
	push offset ZException::THROW_INFO
	lea edx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],0x80004005
	push edx

 Block602:
	call _CxxThrowException

 Block603:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x79E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x96
	test ecx,ecx
	jne Block605

 Block604:
	push 0x80004003
	call _com_issue_error

 Block605:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x97
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block608

 Block606:
	cmp eax,0x80004002
	je Block608

 Block607:
	push eax
	call _com_issue_error

 Block608:
	mov esi,dword ptr [ebp+0x70]
	mov eax,dword ptr [esi+4]
	mov edi,dword ptr [ebp+0x18]
	add eax,0x5C
	push eax
	mov ecx,edi
	call CSkillInfo::LoadReqSkill
	test eax,eax
	sete bl
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x7E
	jne Block611

 Block609:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block612

 Block610:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block612

 Block611:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block612:
	test bl,bl
	jne Block601

 Block613:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [ebp+0x7C]
	lea ecx,[eax+0x70]
	add eax,0x74
	push ecx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x60],esp
	test eax,eax
	je Block615

 Block614:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block615:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+4],esp
	push 0x1902
	mov bl,0x98
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x99
	test ecx,ecx
	jne Block617

 Block616:
	push 0x80004003
	call _com_issue_error

 Block617:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x9A
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+4],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block620

 Block618:
	cmp eax,0x80004002
	je Block620

 Block619:
	push eax
	call _com_issue_error

 Block620:
	mov eax,dword ptr [ebp+0x74]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x9B
	call CSkillInfo::LoadLevelDataCommon
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x7E
	jne Block623

 Block621:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block624

 Block622:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block624

 Block623:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block624:
	mov eax,dword ptr [esi+4]
	cmp dword ptr [eax+0x70],0
	jle Block633

 Block625:
	mov esi,dword ptr [ebp+0x74]
	push esi
	call is_ignore_master_level_for_skillinfo
	add esp,4
	test eax,eax
	jne Block627

 Block626:
	push esi
	call is_skill_need_master_level
	add esp,4
	test eax,eax
	jne Block633

 Block627:
	mov dword ptr [ebp+0x34],0
	lea eax,[ebp+0x5C]
	push 0x1883
	mov bl,0x9C
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,dword ptr [ebp+0x70]
	mov ecx,dword ptr [esi+4]
	mov ecx,dword ptr [ecx+0x70]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x34]
	push edx
	mov byte ptr [ebp-4],0x9D
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x5C]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block629

 Block628:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block629:
	mov eax,dword ptr [esi+4]
	add eax,8
	push eax
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x34]
	call ZXString<char>::op_add_1
	mov ecx,dword ptr [esi+4]
	push eax
	add ecx,8
	mov byte ptr [ebp-4],0x9E
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block631

 Block630:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block631:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x7E
	test eax,eax
	je Block633

 Block632:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block633:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x677
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x9F
	test ecx,ecx
	jne Block635

 Block634:
	push 0x80004003
	call _com_issue_error

 Block635:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	mov ebx,dword ptr [ebp+0x70]
	mov esi,dword ptr [ebx+4]
	mov ecx,eax
	mov byte ptr [ebp-4],0xA0
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x200]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block638

 Block636:
	cmp eax,0x80004002
	je Block638

 Block637:
	push eax
	call _com_issue_error

 Block638:
	mov edi,8
	mov byte ptr [ebp-4],0x7E
	cmp word ptr [ebp+0x4C],di
	jne Block641

 Block639:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block642

 Block640:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block642

 Block641:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block642:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x14DE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0xA1
	test ecx,ecx
	jne Block644

 Block643:
	push 0x80004003
	call _com_issue_error

 Block644:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	mov esi,dword ptr [ebx+4]
	mov ecx,eax
	mov byte ptr [ebp-4],0xA2
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x208]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block647

 Block645:
	cmp eax,0x80004002
	je Block647

 Block646:
	push eax
	call _com_issue_error

 Block647:
	mov byte ptr [ebp-4],0x7E
	cmp word ptr [ebp+0x4C],di
	jne Block650

 Block648:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block651

 Block649:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block651

 Block650:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block651:
	mov eax,dword ptr [ebx+4]
	cmp dword ptr [eax+0x208],0
	je Block658

 Block652:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1674
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebx+4]
	mov ecx,dword ptr [eax+0x208]
	mov byte ptr [ebp-4],0xA3
	test ecx,ecx
	jne Block654

 Block653:
	push 0x80004003
	call _com_issue_error

 Block654:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	mov esi,dword ptr [ebx+4]
	push eax
	mov byte ptr [ebp-4],0xA4
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x20C],eax
	mov byte ptr [ebp-4],0x7E
	cmp word ptr [ebp+0x4C],di
	jne Block657

 Block655:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block658

 Block656:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block658

 Block657:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block658:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x14DE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0xA5
	test ecx,ecx
	jne Block660

 Block659:
	push 0x80004003
	call _com_issue_error

 Block660:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA6
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block663

 Block661:
	cmp eax,0x80004002
	je Block663

 Block662:
	push eax
	call _com_issue_error

 Block663:
	mov eax,dword ptr [ebx+4]
	mov ecx,dword ptr [ebp+0x74]
	add eax,0x204
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	call CSkillInfo::LoadCharLevelData
	test eax,eax
	sete byte ptr [ebp+0x13]
	mov byte ptr [ebp-4],0x7E
	cmp word ptr [ebp+0x4C],di
	jne Block666

 Block664:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block667

 Block665:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block667

 Block666:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block667:
	cmp byte ptr [ebp+0x13],0
	je Block669

 Block668:
	push offset ZException::THROW_INFO
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],0x80004005
	push ecx
	jmp Block602

 Block669:
	mov ecx,dword ptr [ebx+4]
	call SKILLENTRY::InitCrc
	mov eax,dword ptr [ebx+4]
	mov eax,dword ptr [eax+0x250]
	test eax,eax
	je Block751

 Block670:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block751

 Block671:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block751

 Block672:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x4C]
	push edx
	call esi
	lea eax,[ebp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block674

 Block673:
	push eax
	call _com_issue_error

 Block674:
	lea ecx,[ebp-0x70]
	push ecx
	mov byte ptr [ebp-4],0xA7
	call esi
	lea edx,[ebp-0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block676

 Block675:
	push eax
	call _com_issue_error

 Block676:
	mov edx,dword ptr [ebp+0x70]
	push 0
	push 0
	lea eax,[ebp+0x4C]
	push eax
	mov eax,dword ptr [edx+4]
	mov eax,dword ptr [eax+0x250]
	lea ecx,[ebp-0x70]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block678

 Block677:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block678:
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xA9
	jne Block680

 Block679:
	push 0x80004003
	call _com_issue_error

 Block680:
	lea eax,[ebp-0xE0]
	mov byte ptr [ebp-4],0xA8
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xAA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp+0x38],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block683

 Block681:
	cmp eax,0x80004002
	je Block683

 Block682:
	push eax
	call _com_issue_error

 Block683:
	mov esi,8
	mov byte ptr [ebp-4],0xAC
	cmp word ptr [ebp-0xE0],si
	jne Block686

 Block684:
	mov eax,dword ptr [ebp-0xD8]
	xor ecx,ecx
	mov word ptr [ebp-0xE0],cx
	test eax,eax
	je Block687

 Block685:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block687

 Block686:
	lea edx,[ebp-0xE0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block687:
	mov byte ptr [ebp-4],0xAD
	cmp word ptr [ebp-0x70],si
	jne Block690

 Block688:
	xor eax,eax
	mov word ptr [ebp-0x70],ax
	mov eax,dword ptr [ebp-0x68]
	test eax,eax
	je Block691

 Block689:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block691

 Block690:
	lea ecx,[ebp-0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block691:
	mov byte ptr [ebp-4],0xAE
	cmp word ptr [ebp+0x4C],si
	jne Block694

 Block692:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block695

 Block693:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block695

 Block694:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block695:
	mov esi,dword ptr [ebp+0x38]
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block749

 Block696:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0xAF
	test esi,esi
	jne Block698

 Block697:
	push 0x80004003
	call _com_issue_error

 Block698:
	lea edx,[ebp-0xCC]
	push edx
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp-0xA8]
	mov byte ptr [ebp-4],0xB0
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0xCC]
	mov byte ptr [ebp-4],0xB2
	test eax,eax
	je Block700

 Block699:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block700:
	mov dword ptr [ebp-0xAC],0
	mov edi,edi

 Block701:
	mov esi,dword ptr [ebp-0xA8]
	test esi,esi
	je Block9

 Block702:
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[ebp-0xAC]
	push ecx
	lea edx,[ebp-0x28]
	push edx
	push 1
	push esi
	call eax
	test eax,eax
	jne Block744

 Block703:
	lea ecx,[ebp-0x28]
	push ecx
	lea edx,[ebp+0x34]
	push edx
	call DetachBSTR
	add esp,8
	lea eax,[ebp-0xB4]
	push 0x1A9E
	push eax
	mov byte ptr [ebp-4],0xB3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,dword ptr [ebp+0x34]
	mov eax,dword ptr [eax]
	test edi,edi
	je Block705

 Block704:
	mov ecx,dword ptr [edi]
	jmp Block706

 Block705:
	xor ecx,ecx

 Block706:
	push 6
	push eax
	push ecx
	call _wcsnicmp
	add esp,0xC
	test eax,eax
	mov eax,dword ptr [ebp-0xB4]
	sete bl
	test eax,eax
	je Block708

 Block707:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block708:
	test bl,bl
	je Block737

 Block709:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block711

 Block710:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block711:
	mov ecx,dword ptr [ebp+0x38]
	lea edx,[ebp-0xF0]
	mov byte ptr [ebp-4],0xB4
	push edx
	mov byte ptr [ebp-4],0xB3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x18]
	mov dword ptr [ebp+0x18],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block713

 Block712:
	cmp eax,0x80004002
	jne Block73

 Block713:
	cmp word ptr [ebp-0xF0],8
	mov byte ptr [ebp-4],0xB7
	jne Block716

 Block714:
	xor eax,eax
	mov word ptr [ebp-0xF0],ax
	mov eax,dword ptr [ebp-0xE8]
	test eax,eax
	je Block717

 Block715:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block717

 Block716:
	lea ecx,[ebp-0xF0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block717:
	mov esi,dword ptr [ebp+0x18]
	test esi,esi
	sete al
	test al,al
	je Block720

 Block718:
	mov byte ptr [ebp-4],0xB3
	test esi,esi
	je Block737

 Block719:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax
	jmp Block737

 Block720:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x3D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xB8
	test esi,esi
	je Block9

 Block721:
	mov ecx,dword ptr [ebp+0x18]
	lea edx,[ebp-0x140]
	push edx
	mov byte ptr [ebp-4],0xB7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0xD0]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x140]
	mov byte ptr [ebp-4],0xBB
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x690
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ebp-0xD0]
	mov byte ptr [ebp-4],0xBC
	test ebx,ebx
	je Block9

 Block722:
	lea ecx,[ebp-0x190]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0xBB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xBD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0xB8]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x190]
	mov byte ptr [ebp-4],0xBF
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AD9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp-0xB8]
	mov byte ptr [ebp-4],0xC0
	test esi,esi
	je Block9

 Block723:
	lea eax,[ebp-0x170]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xBF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xC1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x5C]
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	lea ecx,[ebp-0x170]
	mov byte ptr [ebp-4],0xC3
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [ebp+0x5C]
	test edi,edi
	je Block725

 Block724:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x130]
	call Ztl_variant_t::_ctor_1
	lea ecx,[ebp-0x130]
	push ecx
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp-0xA4]
	push edx
	lea eax,[ebp-0xB0]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xC4
	call IWzVector2D::_GetSnapshot
	lea ecx,[ebp-0x130]
	mov byte ptr [ebp-4],0xC3
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x696
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x150]
	mov byte ptr [ebp-4],0xC5
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xC3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC6
	call get_int32
	add esp,8
	lea ecx,[ebp-0x150]
	mov dword ptr [ebp+0x48],eax
	mov byte ptr [ebp-4],0xC3
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+0x70]
	mov edi,dword ptr [eax+4]
	lea ecx,[ebp-0xB0]
	push ecx
	call GETCRC32Helper<long, long>::call
	add esp,4
	push eax
	mov ecx,edi
	call SKILLENTRY::AddCrc
	mov edx,dword ptr [ebp+0x70]
	mov edi,dword ptr [edx+4]
	lea eax,[ebp-0xA4]
	push eax
	call GETCRC32Helper<long, long>::call
	add esp,4
	push eax
	mov ecx,edi
	call SKILLENTRY::AddCrc
	mov ecx,dword ptr [ebp+0x70]
	mov edi,dword ptr [ecx+4]
	lea edx,[ebp+0x48]
	push edx
	call GETCRC32Helper<long, long>::call
	add esp,4
	push eax
	mov ecx,edi
	call SKILLENTRY::AddCrc

 Block725:
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x691
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x160]
	push ecx
	mov byte ptr [ebp-4],0xC7
	mov ecx,ebx
	mov byte ptr [ebp-4],0xC3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC8
	call get_int32
	add esp,8
	lea ecx,[ebp-0x160]
	mov edi,eax
	mov byte ptr [ebp-4],0xC3
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp+0x48]
	push 4
	push edx
	mov dword ptr [ebp+0x48],edi
	call CCrc32::GetCrc32
	mov ecx,dword ptr [ebp+0x70]
	mov ecx,dword ptr [ecx+4]
	add esp,0x18
	push eax
	call SKILLENTRY::AddCrc
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1ABE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x180]
	mov byte ptr [ebp-4],0xC9
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xC3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xCA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+4]
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	lea ecx,[ebp-0x180]
	mov byte ptr [ebp-4],0xCC
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1ACB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xCD
	lea edx,[ebp-0x1A0]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xCC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xCE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	lea ecx,[ebp-0x1A0]
	mov byte ptr [ebp-4],0xD0
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [ebp+4]
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block730

 Block726:
	mov ecx,dword ptr [ebp-0x14]
	test ecx,ecx
	sete al
	test al,al
	sete al
	test al,al
	je Block730

 Block727:
	test ecx,ecx
	je Block9

 Block728:
	test edi,edi
	je Block9

 Block729:
	call IWzShape2D::Gety
	mov ecx,dword ptr [ebp-0x14]
	push eax
	call IWzShape2D::Getx
	push eax
	mov ecx,edi
	call IWzShape2D::Gety
	push eax
	mov ecx,edi
	call IWzShape2D::Getx
	push eax
	lea eax,[ebp-0x110]
	push eax
	call dword ptr [ZImports::_SetRect]
	mov ecx,dword ptr [ebp+0x70]
	mov edx,dword ptr [ecx+4]
	lea eax,[ebp-0x104]
	push eax
	mov dword ptr [ebp+0x60],edx
	call GETCRC32Helper<long, long>::call
	lea ecx,[ebp-0x108]
	push ecx
	mov dword ptr [ebp+0x48],eax
	call GETCRC32Helper<long, long>::call
	or dword ptr [ebp+0x48],eax
	lea edx,[ebp-0x10C]
	push edx
	call GETCRC32Helper<long, long>::call
	or eax,dword ptr [ebp+0x48]
	mov dword ptr [ebp+0x48],eax
	lea eax,[ebp-0x110]
	push eax
	call GETCRC32Helper<long, long>::call
	or eax,dword ptr [ebp+0x48]
	mov ecx,dword ptr [ebp+0x60]
	add esp,0x10
	push eax
	call SKILLENTRY::AddCrc

 Block730:
	cmp dword ptr [ebp-0x14],0
	mov byte ptr [ebp-4],0xCC
	je Block732

 Block731:
	mov eax,dword ptr [ebp-0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block732:
	mov byte ptr [ebp-4],0xC3
	test edi,edi
	je Block734

 Block733:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block734:
	cmp dword ptr [ebp+0x5C],0
	mov byte ptr [ebp-4],0xBF
	je Block736

 Block735:
	mov eax,dword ptr [ebp+0x5C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block736:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0xBB
	call edx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0xB7
	call ecx
	mov eax,dword ptr [ebp+0x18]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0xB3
	call eax
	mov edi,dword ptr [ebp+0x34]

 Block737:
	mov byte ptr [ebp-4],0xB2
	test edi,edi
	je Block739

 Block738:
	mov ecx,edi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x34],0

 Block739:
	cmp word ptr [ebp-0x28],8
	jne Block742

 Block740:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	test eax,eax
	je Block701

 Block741:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block701

 Block742:
	lea edx,[ebp-0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block701

 Block743:
	jmp Block73

 Block744:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0xAF
	call ecx
	cmp word ptr [ebp-0x28],8
	mov byte ptr [ebp-4],0xAE
	jne Block747

 Block745:
	mov eax,dword ptr [ebp-0x20]
	xor edx,edx
	mov word ptr [ebp-0x28],dx
	test eax,eax
	je Block748

 Block746:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block748

 Block747:
	lea eax,[ebp-0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block748:
	mov esi,dword ptr [ebp+0x38]

 Block749:
	mov byte ptr [ebp-4],0x7E
	test esi,esi
	je Block751

 Block750:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block751:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x77
	test eax,eax
	je Block753

 Block752:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block753:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x70
	test eax,eax
	je Block755

 Block754:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block755:
	mov eax,dword ptr [ebp-0x40]
	mov byte ptr [ebp-4],0x6B
	test eax,eax
	je Block757

 Block756:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block757:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x66
	test eax,eax
	je Block759

 Block758:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block759:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x5D
	test eax,eax
	je Block761

 Block760:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block761:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x49
	test eax,eax
	je Block763

 Block762:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block763:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x43
	test eax,eax
	je Block765

 Block764:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block765:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0x3D
	test eax,eax
	je Block767

 Block766:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block767:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block769

 Block768:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block769:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block771

 Block770:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block771:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block773

 Block772:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block773:
	cmp word ptr [ebp-0xC8],8
	mov byte ptr [ebp-4],2
	jne Block776

 Block774:
	xor eax,eax
	mov word ptr [ebp-0xC8],ax
	mov eax,dword ptr [ebp-0xC0]
	test eax,eax
	je Block777

 Block775:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block777

 Block776:
	lea ecx,[ebp-0xC8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block777:
	mov eax,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block779

 Block778:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block779:
	mov eax,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block781

 Block780:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block781:
	mov eax,dword ptr [ebp+0x70]
	lea esp,[ebp-0x1B0]
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
// SKILLLEVELDATACommon::~SKILLLEVELDATACommon
_SUB_EXCEPTION_HANDLER(2F3730)
__SUB_CLASS_THIS0(002F3730, __thiscall, 21218,  SKILLLEVELDATACommon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F3730
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
	mov eax,dword ptr [esi+0x16C]
	mov dword ptr [esp+0x14],0x4E
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x168]
	mov byte ptr [esp+0x14],0x4D
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0x164]
	mov byte ptr [esp+0x14],0x4C
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esi+0x160]
	mov byte ptr [esp+0x14],0x4B
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esi+0x15C]
	mov byte ptr [esp+0x14],0x4A
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [esi+0x158]
	mov byte ptr [esp+0x14],0x49
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esi+0x154]
	mov byte ptr [esp+0x14],0x48
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esi+0x150]
	mov byte ptr [esp+0x14],0x47
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esi+0x14C]
	mov byte ptr [esp+0x14],0x46
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esi+0x148]
	mov byte ptr [esp+0x14],0x45
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esi+0x144]
	mov byte ptr [esp+0x14],0x44
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esi+0x140]
	mov byte ptr [esp+0x14],0x43
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esi+0x13C]
	mov byte ptr [esp+0x14],0x42
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esi+0x138]
	mov byte ptr [esp+0x14],0x41
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esi+0x134]
	mov byte ptr [esp+0x14],0x40
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov eax,dword ptr [esi+0x130]
	mov byte ptr [esp+0x14],0x3F
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov eax,dword ptr [esi+0x12C]
	mov byte ptr [esp+0x14],0x3E
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov eax,dword ptr [esi+0x128]
	mov byte ptr [esp+0x14],0x3D
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov eax,dword ptr [esi+0x124]
	mov byte ptr [esp+0x14],0x3C
	test eax,eax
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov eax,dword ptr [esi+0x120]
	mov byte ptr [esp+0x14],0x3B
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	mov eax,dword ptr [esi+0x11C]
	mov byte ptr [esp+0x14],0x3A
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov eax,dword ptr [esi+0x118]
	mov byte ptr [esp+0x14],0x39
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	mov eax,dword ptr [esi+0x114]
	mov byte ptr [esp+0x14],0x38
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov eax,dword ptr [esi+0x110]
	mov byte ptr [esp+0x14],0x37
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov eax,dword ptr [esi+0x10C]
	mov byte ptr [esp+0x14],0x36
	test eax,eax
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	mov eax,dword ptr [esi+0x108]
	mov byte ptr [esp+0x14],0x35
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	mov eax,dword ptr [esi+0x104]
	mov byte ptr [esp+0x14],0x34
	test eax,eax
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	mov eax,dword ptr [esi+0x100]
	mov byte ptr [esp+0x14],0x33
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	mov eax,dword ptr [esi+0xFC]
	mov byte ptr [esp+0x14],0x32
	test eax,eax
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	mov eax,dword ptr [esi+0xF8]
	mov byte ptr [esp+0x14],0x31
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block60:
	mov eax,dword ptr [esi+0xF4]
	mov byte ptr [esp+0x14],0x30
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	mov eax,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x14],0x2F
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	mov eax,dword ptr [esi+0xEC]
	mov byte ptr [esp+0x14],0x2E
	test eax,eax
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	mov eax,dword ptr [esi+0xE8]
	mov byte ptr [esp+0x14],0x2D
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	mov eax,dword ptr [esi+0xE4]
	mov byte ptr [esp+0x14],0x2C
	test eax,eax
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block70:
	mov eax,dword ptr [esi+0xE0]
	mov byte ptr [esp+0x14],0x2B
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	mov eax,dword ptr [esi+0xDC]
	mov byte ptr [esp+0x14],0x2A
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	mov eax,dword ptr [esi+0xD8]
	mov byte ptr [esp+0x14],0x29
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	mov eax,dword ptr [esi+0xD4]
	mov byte ptr [esp+0x14],0x28
	test eax,eax
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block78:
	mov eax,dword ptr [esi+0xD0]
	mov byte ptr [esp+0x14],0x27
	test eax,eax
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block80:
	mov eax,dword ptr [esi+0x9C]
	mov byte ptr [esp+0x14],0x26
	test eax,eax
	je Block82

 Block81:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block82:
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x14],0x25
	test eax,eax
	je Block84

 Block83:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block84:
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0x14],0x24
	test eax,eax
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block86:
	mov eax,dword ptr [esi+0x90]
	mov byte ptr [esp+0x14],0x23
	test eax,eax
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block88:
	mov eax,dword ptr [esi+0x8C]
	mov byte ptr [esp+0x14],0x22
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block90:
	mov eax,dword ptr [esi+0x88]
	mov byte ptr [esp+0x14],0x21
	test eax,eax
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block92:
	mov eax,dword ptr [esi+0x84]
	mov byte ptr [esp+0x14],0x20
	test eax,eax
	je Block94

 Block93:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block94:
	mov eax,dword ptr [esi+0x80]
	mov byte ptr [esp+0x14],0x1F
	test eax,eax
	je Block96

 Block95:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block96:
	mov eax,dword ptr [esi+0x7C]
	mov byte ptr [esp+0x14],0x1E
	test eax,eax
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block98:
	mov eax,dword ptr [esi+0x78]
	mov byte ptr [esp+0x14],0x1D
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block100:
	mov eax,dword ptr [esi+0x74]
	mov byte ptr [esp+0x14],0x1C
	test eax,eax
	je Block102

 Block101:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block102:
	mov eax,dword ptr [esi+0x70]
	mov byte ptr [esp+0x14],0x1B
	test eax,eax
	je Block104

 Block103:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block104:
	mov eax,dword ptr [esi+0x6C]
	mov byte ptr [esp+0x14],0x1A
	test eax,eax
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block106:
	mov eax,dword ptr [esi+0x68]
	mov byte ptr [esp+0x14],0x19
	test eax,eax
	je Block108

 Block107:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block108:
	mov eax,dword ptr [esi+0x64]
	mov byte ptr [esp+0x14],0x18
	test eax,eax
	je Block110

 Block109:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block110:
	mov eax,dword ptr [esi+0x60]
	mov byte ptr [esp+0x14],0x17
	test eax,eax
	je Block112

 Block111:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block112:
	mov eax,dword ptr [esi+0x5C]
	mov byte ptr [esp+0x14],0x16
	test eax,eax
	je Block114

 Block113:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block114:
	mov eax,dword ptr [esi+0x58]
	mov byte ptr [esp+0x14],0x15
	test eax,eax
	je Block116

 Block115:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block116:
	mov eax,dword ptr [esi+0x54]
	mov byte ptr [esp+0x14],0x14
	test eax,eax
	je Block118

 Block117:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block118:
	mov eax,dword ptr [esi+0x50]
	mov byte ptr [esp+0x14],0x13
	test eax,eax
	je Block120

 Block119:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block120:
	mov eax,dword ptr [esi+0x4C]
	mov byte ptr [esp+0x14],0x12
	test eax,eax
	je Block122

 Block121:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block122:
	mov eax,dword ptr [esi+0x48]
	mov byte ptr [esp+0x14],0x11
	test eax,eax
	je Block124

 Block123:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block124:
	mov eax,dword ptr [esi+0x44]
	mov byte ptr [esp+0x14],0x10
	test eax,eax
	je Block126

 Block125:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block126:
	mov eax,dword ptr [esi+0x40]
	mov byte ptr [esp+0x14],0xF
	test eax,eax
	je Block128

 Block127:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block128:
	mov eax,dword ptr [esi+0x3C]
	mov byte ptr [esp+0x14],0xE
	test eax,eax
	je Block130

 Block129:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block130:
	mov eax,dword ptr [esi+0x38]
	mov byte ptr [esp+0x14],0xD
	test eax,eax
	je Block132

 Block131:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block132:
	mov eax,dword ptr [esi+0x34]
	mov byte ptr [esp+0x14],0xC
	test eax,eax
	je Block134

 Block133:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block134:
	mov eax,dword ptr [esi+0x30]
	mov byte ptr [esp+0x14],0xB
	test eax,eax
	je Block136

 Block135:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block136:
	mov eax,dword ptr [esi+0x2C]
	mov byte ptr [esp+0x14],0xA
	test eax,eax
	je Block138

 Block137:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block138:
	mov eax,dword ptr [esi+0x28]
	mov byte ptr [esp+0x14],9
	test eax,eax
	je Block140

 Block139:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block140:
	mov eax,dword ptr [esi+0x24]
	mov byte ptr [esp+0x14],8
	test eax,eax
	je Block142

 Block141:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block142:
	mov eax,dword ptr [esi+0x20]
	mov byte ptr [esp+0x14],7
	test eax,eax
	je Block144

 Block143:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block144:
	mov eax,dword ptr [esi+0x1C]
	mov byte ptr [esp+0x14],6
	test eax,eax
	je Block146

 Block145:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block146:
	mov eax,dword ptr [esi+0x18]
	mov byte ptr [esp+0x14],5
	test eax,eax
	je Block148

 Block147:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block148:
	mov eax,dword ptr [esi+0x14]
	mov byte ptr [esp+0x14],4
	test eax,eax
	je Block150

 Block149:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block150:
	mov eax,dword ptr [esi+0x10]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block152

 Block151:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block152:
	mov eax,dword ptr [esi+0xC]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block154

 Block153:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block154:
	mov eax,dword ptr [esi+8]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block156

 Block155:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block156:
	mov eax,dword ptr [esi+4]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block158

 Block157:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block158:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block160

 Block159:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block160:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// SKILLLEVELDATA::_ZtlSecureGet_nDamage
__SUB_CLASS0(002EE780, __fastcall, 21132,  SKILLLEVELDATA, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xD8]
	push eax
	add ecx,0xD0
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// SKILLLEVELDATA::GetSkillLevelDateExpire
_SUB_EXCEPTION_HANDLER(2F81D0)
__SUB_CLASS_THIS(002F81D0, __thiscall, 21140,  SKILLLEVELDATA, const _FILETIME, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F81D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x2C],0
	test eax,eax
	je Block2

 Block1:
	cmp byte ptr [eax],0
	jne Block3

 Block2:
	mov ecx,dword ptr [_D_DB_DATE_20790101__21]
	mov edx,dword ptr [_D_DB_DATE_20790101__21+4]
	jmp Block12

 Block3:
	push 4
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x40]
	call ZXString<char>::Left
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0xC]
	add esp,4
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	push 6
	push 4
	lea ecx,[esp+0x10]
	push ecx
	lea ecx,[esp+0x44]
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov word ptr [esp+0x1A],ax
	mov eax,dword ptr [esp+0xC]
	add esp,4
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	push 8
	push 6
	lea edx,[esp+0x10]
	push edx
	lea ecx,[esp+0x44]
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov word ptr [esp+0x1E],ax
	mov eax,dword ptr [esp+0xC]
	add esp,4
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	push 2
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x40]
	call ZXString<char>::Right
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0xC]
	add esp,4
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	xor edx,edx
	xor eax,eax
	mov word ptr [esp+0x20],dx
	lea edx,[esp+0xC]
	mov word ptr [esp+0x1E],ax
	xor ecx,ecx
	push edx
	lea eax,[esp+0x18]
	push eax
	mov word ptr [esp+0x2A],cx
	mov word ptr [esp+0x20],cx
	call dword ptr [ZImports::_SystemTimeToFileTime]
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [esp+0x38]

 Block12:
	mov esi,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	mov dword ptr [esi+4],edx
	mov dword ptr [esi],ecx
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,esi
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x28
	ret 8
}
}
// SKILLLEVELDATA::GetCrc
__SUB_CLASS_THIS0(002F1C50, __thiscall, 21156,  SKILLLEVELDATA, unsigned long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x418],0
	jne Block2

 Block1:
	call SKILLLEVELDATA::CalcCrc

 Block2:
	mov eax,dword ptr [esi+0x3CC]
	push eax
	add esi,0x3C4
	push esi
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	pop esi
	ret
}
}
// CSkillInfo::GetSkillRootVisible
__SUB_CLASS_THIS(002F4050, __thiscall, 21698,  CSkillInfo, void, long, const CharacterData&, SKILLROOT&) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [esp+0xC]
	push ebx
	push ebp
	push esi
	push edi
	mov dword ptr [esp+0x10],ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkillRoot
	mov esi,dword ptr [esp+0x24]
	mov ebx,eax
	mov ecx,dword ptr [ebx]
	lea edx,[ebx+4]
	mov dword ptr [esi],ecx
	push edx
	lea ecx,[esi+4]
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebx+0xC]
	mov edi,dword ptr [esi+0xC]
	cmp edi,eax
	je Block5

 Block1:
	mov dword ptr [esi+0xC],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test edi,edi
	je Block5

 Block4:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block5:
	lea ecx,[esi+8]
	mov dword ptr [esp+0x14],ecx
	call ZArray<ZRef<SKILLENTRY>>::RemoveAll
	xor ebp,ebp

 Block6:
	mov eax,dword ptr [ebx+8]
	mov dword ptr [esp+0x24],ebp
	test eax,eax
	je Block18

 Block7:
	cmp ebp,dword ptr [eax-4]
	jae Block18

 Block8:
	mov edx,eax
	lea edi,[ebp*8]
	mov eax,dword ptr [edi+edx+4]
	mov edx,dword ptr [eax]
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [esp+0x24]
	push edx
	push eax
	call CSkillInfo::IsSkillVisible
	test eax,eax
	je Block17

 Block9:
	mov esi,dword ptr [ebx+8]
	mov ecx,dword ptr [esp+0x14]
	push 0xFFFFFFFF
	add esi,edi
	call ZArray<ZRef<SKILLENTRY>>::InsertBefore
	mov edi,eax
	mov eax,dword ptr [esi+4]
	mov dword ptr [esp+0x1C],edi
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block16

 Block12:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block15

 Block14:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block15:
	mov ecx,dword ptr [esp+0x1C]
	mov ebp,dword ptr [esp+0x24]
	mov dword ptr [ecx+4],0
	mov edi,ecx

 Block16:
	mov edx,dword ptr [esi+4]
	mov dword ptr [edi+4],edx

 Block17:
	inc ebp
	jmp Block6

 Block18:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0xC
}
}
// SKILLENTRY::GetIconCanvas
_SUB_EXCEPTION_HANDLER(2F7D40)
__SUB_CLASS_THIS(002F7D40, __thiscall, 20515,  SKILLENTRY, _x_com_ptr<IWzCanvas>*, _x_com_ptr<IWzCanvas>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F7D40
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
	mov edi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	mov ebp,dword ptr [esp+0x60]
	cmp ebp,ebx
	jne Block2

 Block1:
	mov esi,dword ptr [esp+0x5C]
	push esi
	call SKILLENTRY::GetIconCanvas_0
	jmp Block27

 Block2:
	mov dword ptr [esp+0x60],ebx
	lea eax,[esp+0x14]
	push 0x9A5
	push eax
	mov dword ptr [esp+0x5C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,dword ptr [eax]
	mov ecx,dword ptr [edi]
	mov eax,0x68DB8BAD
	imul ecx
	push ebp
	push ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	push ecx
	lea edx,[esp+0x6C]
	push esi
	push edx
	mov byte ptr [esp+0x68],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x54],1
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x58],3
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov ebp,dword ptr [esp+0x60]
	push 0
	push 0
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,4
	push ebp
	mov byte ptr [esp+0x6C],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x68],5
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x68],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],6
	call Ztl_variant_t::GetUnknown
	mov esi,dword ptr [esp+0x5C]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov edi,8
	mov byte ptr [esp+0x54],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov dword ptr [esp+0x18],1
	cmp word ptr [esp+0x3C],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x3C]
	push edx
	call ebx

 Block17:
	mov byte ptr [esp+0x54],3
	cmp word ptr [esp+0x1C],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x1C]
	push ecx
	call ebx

 Block21:
	mov byte ptr [esp+0x54],1
	cmp word ptr [esp+0x2C],di
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[esp+0x2C]
	push eax
	call ebx

 Block25:
	mov byte ptr [esp+0x54],0
	test ebp,ebp
	je Block27

 Block26:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block27:
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
// CSkillInfo::LoadMobSkill
_SUB_EXCEPTION_HANDLER(30BBD0)
__SUB_CLASS_THIS0(0030BBD0, __thiscall, 21687,  CSkillInfo, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_30BBD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp+0x44],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	xor edi,edi
	push eax
	mov dword ptr [ebp-4],edi
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],1
	call esi
	lea eax,[ebp+0x20]
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
	lea ecx,[ebp+0x10]
	push ecx
	lea edx,[ebp+0x20]
	mov bl,2
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xB1A
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[ebp]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x6C]
	mov dword ptr [ebp+0x6C],edi
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
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp],bx
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x20],bx
	jne Block16

 Block14:
	mov eax,dword ptr [ebp+0x28]
	xor edx,edx
	mov word ptr [ebp+0x20],dx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x10],bx
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ebx,dword ptr [ebp+0x6C]
	cmp ebx,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[ebp+0x40]
	push eax
	mov ecx,ebx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],9
	mov dword ptr [ebp+0x68],edi
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea ecx,[ebp+0x68]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0xB
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea eax,[ebp+0x50]
	push eax
	call esi
	mov byte ptr [ebp-4],0xC
	mov dword ptr [ebp+0x30],edi
	jmp Block34

 Block33:
	mov ebx,dword ptr [ebp+0x6C]

 Block34:
	mov esi,dword ptr [ebp+0x68]
	test esi,esi
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0x30]
	push edx
	lea eax,[ebp+0x50]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block81

 Block37:
	push eax
	mov dword ptr [ebp+0x4C],eax
	call ZRefCounted_AllocHelper<ZRefCountedDummy<MOBSKILLENTRY>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [ebp+0x4C],esi
	lea edx,[ebp+0x50]
	push edx
	lea eax,[ebp+0x70]
	push eax
	mov byte ptr [ebp-4],0xD
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [ebp+0x70]
	test eax,eax
	je Block39

 Block38:
	mov eax,dword ptr [eax]
	jmp Block40

 Block39:
	xor eax,eax

 Block40:
	push eax
	call __wtoi
	add esp,4
	push 0
	mov dword ptr [esi],eax
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x64],esp
	test eax,eax
	je Block42

 Block41:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block42:
	lea edx,[ebp-0x20]
	mov byte ptr [ebp-4],0xF
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x64],esi
	test eax,eax
	je Block46

 Block43:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x38]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x38]
	mov esi,ecx
	mov dword ptr [ebp+0x64],esi
	test eax,eax
	jge Block46

 Block44:
	cmp eax,0x80004002
	je Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0x12
	jne Block49

 Block47:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	push 0
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x3C],esp
	push 0x677
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x13
	test esi,esi
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea edx,[ebp-0x30]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	push ecx
	mov edi,esp
	mov dword ptr [ebp+0x3C],esp
	mov dword ptr [edi],0
	test eax,eax
	je Block58

 Block53:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [edi]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x60]
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	mov dword ptr [edi],ebx
	test esi,esi
	jge Block58

 Block56:
	cmp esi,0x80004002
	je Block58

 Block57:
	push esi
	call _com_issue_error

 Block58:
	mov edi,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [edi]
	mov esi,dword ptr [ebp+0x44]
	lea eax,[edi+4]
	push eax
	push ecx
	mov ecx,esi
	call CSkillInfo::LoadMobSkillLevelData
	test eax,eax
	sete bl
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],0x12
	jne Block61

 Block59:
	mov eax,dword ptr [ebp-0x28]
	xor edx,edx
	mov word ptr [ebp-0x30],dx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	test bl,bl
	je Block64

 Block63:
	push offset ZException::THROW_INFO
	lea ecx,[ebp+0x34]
	push ecx
	mov dword ptr [ebp+0x34],0x80004005
	call _CxxThrowException

 Block64:
	lea edx,[ebp+0x48]
	push edx
	push edi
	lea ecx,[esi+0x34]
	call ZMap<long, ZRef<MOBSKILLENTRY>, long>::Insert
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xE
	call edx
	mov eax,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block73

 Block65:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block72

 Block66:
	test esi,esi
	je Block72

 Block67:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block69

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block69:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block71

 Block70:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block71:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block72:
	mov dword ptr [ebp+0x70],0

 Block73:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0xC
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block76

 Block74:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block76

 Block75:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block76:
	cmp word ptr [ebp+0x50],8
	mov dword ptr [ebp+0x4C],0
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block33

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block79:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block33

 Block80:
	push eax
	call _com_issue_error

 Block81:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0xB
	jne Block84

 Block82:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block85:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],8
	call edx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,1
	jmp Block89

 Block89:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add ebp,0x74
	mov esp,ebp
	pop ebp
	ret
}
}
// SKILLENTRY::GetBallUOL
__SUB_CLASS_THIS(00169390, __thiscall, 20527,  SKILLENTRY, Ztl_bstr_t*, Ztl_bstr_t*, long, unsigned char, int32_t) {
__asm {

 Block0:
	push ecx
	movzx eax,byte ptr [esp+0x10]
	push ebx
	push ebp
	push esi
	push edi
	push eax
	mov ebx,ecx
	mov dword ptr [esp+0x14],0
	call SKILLENTRY::GetCharLevelData
	mov ebp,dword ptr [esp+0x24]
	mov edi,eax
	test edi,edi
	je Block12

 Block1:
	test ebp,ebp
	je Block5

 Block2:
	mov eax,dword ptr [edi+0xC]
	lea ecx,[edi+0xC]
	test eax,eax
	je Block5

 Block3:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]
	shr eax,1
	mov eax,ecx
	jne Block6

 Block5:
	lea eax,[edi+8]

 Block6:
	mov esi,dword ptr [eax]
	test esi,esi
	je Block12

 Block7:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block11

 Block8:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block11

 Block9:
	mov eax,dword ptr [edi+8]
	mov edi,dword ptr [esp+0x18]
	mov dword ptr [edi],eax
	test eax,eax
	je Block31

 Block10:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 0x10

 Block11:
	mov ecx,esi
	call _xbstr_t::Data_t::Release

 Block12:
	mov esi,dword ptr [esp+0x1C]
	test ebp,ebp
	je Block17

 Block13:
	push esi
	mov ecx,ebx
	call SKILLENTRY::GetLevelData
	add eax,0x20C
	mov eax,dword ptr [eax]
	test eax,eax
	je Block17

 Block14:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block17

 Block15:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block17

 Block16:
	push esi
	mov ecx,ebx
	call SKILLENTRY::GetLevelData
	add eax,0x20C
	jmp Block18

 Block17:
	push esi
	mov ecx,ebx
	call SKILLENTRY::GetLevelData
	add eax,0x208

 Block18:
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block23

 Block19:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp dword ptr [esi],0
	je Block23

 Block20:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block23

 Block21:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block23

 Block22:
	lea eax,[esp+0x20]
	jmp Block28

 Block23:
	test ebp,ebp
	je Block27

 Block24:
	mov eax,dword ptr [ebx+0x230]
	lea ecx,[ebx+0x230]
	test eax,eax
	je Block27

 Block25:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block27

 Block26:
	mov eax,dword ptr [eax-4]
	shr eax,1
	mov eax,ecx
	jne Block28

 Block27:
	lea eax,[ebx+0x22C]

 Block28:
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esp+0x18]
	mov dword ptr [edi],eax
	test eax,eax
	je Block30

 Block29:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block30:
	test esi,esi
	je Block32

 Block31:
	mov ecx,esi
	call _xbstr_t::Data_t::Release

 Block32:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 0x10
}
}
// get_magic_mastery
// 70A050
static uint8_t _SUB_309F30_LOOKUP_TABLE_0[102] = {
0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
2, 2, 2, 2, 1, 1, 
};
__SUB(00309F30, __cdecl, 133329,  long, const CharacterData&, long*, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov eax,dword ptr [esi+0x3D]
	push eax
	lea ecx,[esi+0x39]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,0x79
	jg Block9

 Block1:
	cmp eax,0x78
	jge Block8

 Block2:
	sub eax,0x15
	je Block7

 Block3:
	sub eax,1
	je Block6

 Block4:
	sub eax,1
	jne Block17

 Block5:
	mov edx,dword ptr [esp+0xC]
	push edx
	push 0x231866
	push esi
	call get_mastery_from_skill
	add esp,0xC
	pop esi
	ret

 Block6:
	mov eax,dword ptr [esp+0xC]
	push eax
	push 0x2191C6
	push esi
	call get_mastery_from_skill
	add esp,0xC
	pop esi
	ret

 Block7:
	mov ecx,dword ptr [esp+0xC]
	push ecx
	push 0x200B26
	push esi
	call get_mastery_from_skill
	add esp,0xC
	pop esi
	ret

 Block8:
	mov edx,dword ptr [esp+0xC]
	push edx
	push 0xB8A1A7
	push esi
	call get_mastery_from_skill
	add esp,0xC
	pop esi
	ret

 Block9:
	sub eax,0xDC
	cmp eax,0x65
	ja Block17

 Block10:
	movzx eax,byte ptr [eax+_SUB_309F30_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block11
cmp EAX, 1
je Block16
cmp EAX, 2
je Block17


 Block11:
	push ebx
	push edi
	mov edi,dword ptr [esp+0x14]
	push edi
	push 0x1518642
	push esi
	mov dword ptr [esp+0x1C],0
	call get_mastery_from_skill
	lea ecx,[esp+0x1C]
	push ecx
	push 0x1524991
	push esi
	mov ebx,eax
	call get_mastery_from_skill
	add esp,0x18
	test eax,eax
	je Block15

 Block12:
	test edi,edi
	je Block14

 Block13:
	mov edx,dword ptr [esp+0x10]
	add dword ptr [edi],edx

 Block14:
	pop edi
	pop ebx
	pop esi
	ret

 Block15:
	pop edi
	mov eax,ebx
	pop ebx
	pop esi
	ret

 Block16:
	mov eax,dword ptr [esp+0xC]
	push eax
	push 0x1E9CEA6
	push esi
	call get_mastery_from_skill
	add esp,0xC
	pop esi
	ret

 Block17:
	xor eax,eax
	pop esi
	ret
}
}
// CSkillInfo::~CSkillInfo
_SUB_EXCEPTION_HANDLER(5C49A0)
__SUB_CLASS_THIS0(005C49A0, __thiscall, 21686,  CSkillInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C49A0
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
	int 3// TODO: 	mov dword ptr [esi],offset CSkillInfo::`vftable'
	lea ecx,[esi+0xB0]
	mov dword ptr [esp+0x14],8
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<ITEMOPTIONSKILLENTRY>, long>::`vftable'
	call ZMap<long, ZRef<ITEMOPTIONSKILLENTRY>, long>::RemoveAll
	lea ecx,[esi+0x98]
	mov byte ptr [esp+0x14],7
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<ITEMSKILLENTRY>, long>::`vftable'
	call ZMap<long, ZRef<ITEMSKILLENTRY>, long>::RemoveAll
	lea ecx,[esi+0x80]
	mov byte ptr [esp+0x14],6
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<BFSKILLENTRY>, long>::`vftable'
	call ZMap<long, ZRef<BFSKILLENTRY>, long>::RemoveAll
	lea ecx,[esi+0x68]
	mov byte ptr [esp+0x14],5
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<MCGUARDIANENTRY>, long>::`vftable'
	call ZMap<long, ZRef<MCGUARDIANENTRY>, long>::RemoveAll
	lea ecx,[esi+0x64]
	mov byte ptr [esp+0x14],4
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x4C]
	mov byte ptr [esp+0x14],3
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<MCSKILLENTRY>, long>::`vftable'
	call ZMap<long, ZRef<MCSKILLENTRY>, long>::RemoveAll
	lea ecx,[esi+0x34]
	mov byte ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<MOBSKILLENTRY>, long>::`vftable'
	call ZMap<long, ZRef<MOBSKILLENTRY>, long>::RemoveAll
	lea ecx,[esi+0x1C]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<SKILLROOT>, long>::`vftable'
	call ZMap<long, ZRef<SKILLROOT>, long>::RemoveAll
	lea ecx,[esi+4]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<SKILLENTRY>, long>::`vftable'
	call ZMap<long, ZRef<SKILLENTRY>, long>::RemoveAll
	mov dword ptr [TSingleton<CSkillInfo>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// get_mastery_from_skill
__SUB(003098C0, __cdecl, 133325,  long, const CharacterData&, const long, long*) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+8]
	push ebx
	push esi
	push edi
	lea eax,[esp+0xC]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push edx
	mov dword ptr [esp+0x18],0
	call CSkillInfo::GetSkillLevel_0
	mov ebx,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+0xC]
	mov esi,eax
	test ebx,ebx
	je Block5

 Block1:
	test esi,esi
	jle Block3

 Block2:
	push esi
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x168]
	push ecx
	add eax,0x160
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	mov dword ptr [ebx],eax

 Block5:
	test esi,esi
	je Block7

 Block6:
	push esi
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x150]
	push edx
	add eax,0x148
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block7:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	pop ecx
	ret
}
}
// CSkillInfo::GetMobSkill
_SUB_EXCEPTION_HANDLER(2F30C0)
__SUB_CLASS_THIS(002F30C0, __thiscall, 21710,  CSkillInfo, const MOBSKILLENTRY*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F30C0
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
	mov dword ptr [esp+0x14],0
	lea eax,[esp+0x10]
	push eax
	lea edx,[esp+0x2C]
	push edx
	add ecx,0x34
	mov dword ptr [esp+0x28],0
	call ZMap<long, ZRef<MOBSKILLENTRY>, long>::GetAt
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test edi,edi
	je Block4

 Block1:
	lea esi,[edi-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov eax,edi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// CSkillInfo::LoadMCSkill
_SUB_EXCEPTION_HANDLER(2FEB20)
__SUB_CLASS_THIS0(002FEB20, __thiscall, 21687,  CSkillInfo, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2FEB20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp+0x34],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	xor edi,edi
	push eax
	mov dword ptr [ebp-4],edi
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],1
	call esi
	lea eax,[ebp+0x20]
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
	lea ecx,[ebp+0x10]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	mov bl,2
	push offset _S_SKILLMCSKILLIMG
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x40]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp+0x68],edi
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
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x40],bx
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp-0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x20],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x10],bx
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ecx,dword ptr [ebp+0x68]
	cmp ecx,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[ebp+0x44]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],9
	mov dword ptr [ebp+0x5C],edi
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea ecx,[ebp+0x5C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0xB
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea eax,[ebp+0x48]
	push eax
	call esi
	mov byte ptr [ebp-4],0xC
	mov dword ptr [ebp+0x30],edi
	nop

 Block31:
	mov esi,dword ptr [ebp+0x5C]
	xor ebx,ebx
	cmp esi,ebx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0x30]
	push edx
	lea eax,[ebp+0x48]
	push eax
	push 1
	push esi
	call ecx
	cmp eax,ebx
	jne Block84

 Block34:
	push ebx
	mov dword ptr [ebp+0x3C],ebx
	call ZRefCounted_AllocHelper<ZRefCountedDummy<MCSKILLENTRY>>::call
	lea edi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [ebp+0x3C],edi
	lea edx,[ebp+0x48]
	push edx
	lea eax,[ebp+0x6C]
	push eax
	mov byte ptr [ebp-4],0xD
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [ebp+0x6C]
	cmp eax,ebx
	je Block36

 Block35:
	mov eax,dword ptr [eax]
	jmp Block37

 Block36:
	xor eax,eax

 Block37:
	push eax
	call __wtoi
	add esp,4
	push ebx
	push ebx
	push ecx
	mov ecx,dword ptr [ebp+0x6C]
	mov dword ptr [ebp+0x64],eax
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x6C]
	mov dword ptr [ebp+0x58],esp
	cmp eax,ebx
	je Block39

 Block38:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block39:
	mov ecx,dword ptr [ebp+0x68]
	lea edx,[ebp]
	mov byte ptr [ebp-4],0xF
	push edx
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x58],esi
	cmp eax,ebx
	je Block43

 Block40:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x40]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x40]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x58],esi
	jge Block43

 Block41:
	cmp eax,0x80004002
	je Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x12
	jne Block46

 Block44:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,ebx
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_NAME
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x13
	cmp esi,ebx
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	lea ecx,[ebp-0x20]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x14
	jne Block51

 Block50:
	mov eax,dword ptr [eax+8]
	jmp Block52

 Block51:
	mov eax,offset _S___3

 Block52:
	push 0xFFFFFFFF
	push eax
	mov ecx,edi
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0x12
	jne Block55

 Block53:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	cmp eax,ebx
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block56:
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_DESC__1
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x30]
	push ecx
	mov byte ptr [ebp-4],0x15
	mov ecx,esi
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x16
	jne Block58

 Block57:
	mov eax,dword ptr [eax+8]
	jmp Block59

 Block58:
	mov eax,offset _S___3

 Block59:
	push 0xFFFFFFFF
	lea ecx,[edi+4]
	push eax
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],0x12
	jne Block62

 Block60:
	mov eax,dword ptr [ebp-0x28]
	xor edx,edx
	mov word ptr [ebp-0x30],dx
	cmp eax,ebx
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	push ebx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_SPENDCP
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x50]
	push ecx
	mov byte ptr [ebp-4],0x17
	mov ecx,esi
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x18
	call get_int32
	add esp,8
	mov dword ptr [edi+8],eax
	cmp word ptr [ebp-0x50],8
	mov byte ptr [ebp-4],0x12
	jne Block66

 Block64:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	cmp eax,ebx
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block67:
	lea ecx,[ebp+0x38]
	push ecx
	mov ecx,dword ptr [ebp+0x34]
	lea edx,[ebp+0x64]
	push edx
	add ecx,0x4C
	call ZMap<long, ZRef<MCSKILLENTRY>, long>::Insert
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0xE
	call ecx
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0xD
	cmp eax,ebx
	je Block76

 Block68:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block75

 Block69:
	cmp esi,ebx
	je Block75

 Block70:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block72

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block72:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block74

 Block73:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block74:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block75:
	mov dword ptr [ebp+0x6C],ebx

 Block76:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0xC
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block79

 Block77:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block79

 Block78:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block79:
	cmp word ptr [ebp+0x48],8
	mov dword ptr [ebp+0x3C],0
	jne Block82

 Block80:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block31

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block82:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block31

 Block83:
	push eax
	call _com_issue_error

 Block84:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0xB
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	cmp eax,ebx
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],8
	call eax
	mov eax,dword ptr [ebp+0x68]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,1
	jmp Block92

 Block92:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add ebp,0x70
	mov esp,ebp
	pop ebp
	ret
}
}
// CSkillInfo::LoadReqSkill
_SUB_EXCEPTION_HANDLER(2F7AA0)
__SUB_CLASS_THIS(002F7AA0, __thiscall, 21738,  CSkillInfo, int32_t, ZList<GW_SkillRecord>&, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F7AA0
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
	mov ecx,dword ptr [esp+0x5C]
	xor ebx,ebx
	cmp ecx,ebx
	sete al
	mov dword ptr [esp+0x50],ebx
	cmp al,bl
	je Block3

 Block1:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp ecx,ebx
	je Block40

 Block2:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx
	jmp Block40

 Block3:
	cmp ecx,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea edx,[esp+0x1C]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x54],1
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	lea ecx,[esp+0x18]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x50],3
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ebp,dword ptr [esp+0x14]
	mov byte ptr [esp+0x50],4
	mov dword ptr [esp+0x20],ebx

 Block13:
	cmp ebp,ebx
	je Block4

 Block14:
	mov ecx,dword ptr [ebp]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 1
	push ebp
	call ecx
	test eax,eax
	jne Block34

 Block15:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call DetachBSTR
	add esp,8
	mov ecx,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],5
	call ZList<GW_SkillRecord>::AddTail_
	mov esi,dword ptr [esp+0x18]
	mov edi,eax
	cmp esi,ebx
	je Block17

 Block16:
	mov eax,dword ptr [esi]
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	push eax
	call __wtoi
	add esp,4
	push ebx
	push ecx
	mov dword ptr [edi],eax
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block20

 Block19:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block20:
	mov ecx,dword ptr [esp+0x64]
	mov byte ptr [esp+0x58],6
	cmp ecx,ebx
	je Block4

 Block21:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x5C],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x58],7
	call get_int32
	add esp,8
	cmp word ptr [esp+0x38],8
	mov dword ptr [edi+4],eax
	mov byte ptr [esp+0x50],5
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	cmp dword ptr [edi+4],ebx
	jl Block33

 Block26:
	mov byte ptr [esp+0x50],4
	cmp esi,ebx
	je Block28

 Block27:
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],ebx

 Block28:
	cmp word ptr [esp+0x28],8
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebx
	je Block13

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block31:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebx
	jge Block13

 Block32:
	jmp Block9

 Block33:
	push offset ZException::THROW_INFO
	lea ecx,[esp+0x5C]
	push ecx
	mov dword ptr [esp+0x60],0x80004005
	call _CxxThrowException

 Block34:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],3
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebx
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x54],bl
	call edx
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp eax,ebx
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	mov eax,1
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 8
}
}
// MCGUARDIANENTRY::~MCGUARDIANENTRY
_SUB_EXCEPTION_HANDLER(2F3530)
__SUB_CLASS_THIS0(002F3530, __thiscall, 21858,  MCGUARDIANENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F3530
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
	mov eax,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CSkillInfo::IterateSkillInfo
_SUB_EXCEPTION_HANDLER(310390)
__SUB_CLASS_THIS0(00310390, __thiscall, 21687,  CSkillInfo, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_310390
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp+0x28],ecx
	xor edi,edi
	mov dword ptr [ebp+0x6C],edi
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x30]
	push eax
	mov dword ptr [ebp-4],edi
	call esi
	lea ecx,[ebp-0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],1
	call esi
	lea eax,[ebp]
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
	lea ecx,[ebp-0x30]
	push ecx
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],2
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push 0x8E7
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[ebp-0x50]
	mov byte ptr [ebp-4],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],edi
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
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x50],bx
	jne Block16

 Block10:
	xor eax,eax
	mov word ptr [ebp-0x50],ax
	mov eax,dword ptr [ebp-0x48]
	cmp eax,edi
	je Block12

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block12:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp],bx
	jne Block17

 Block14:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,edi
	je Block18

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block16:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x50]
	push ecx
	call esi
	jmp Block13

 Block17:
	lea eax,[ebp]
	push eax
	call esi

 Block18:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x30],bx
	jne Block21

 Block19:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[ebp-0x30]
	push edx
	call esi

 Block22:
	push edi
	push edi
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push 0x8A4
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],9
	cmp dword ptr [_D_G_ROOT],edi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[ebp-0x70]
	mov byte ptr [ebp-4],8
	mov ecx,dword ptr [_D_G_ROOT]
	push edx
	call IWzNameSpace::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],edi
	call _x_com_ptr<IWzNameSpace>::_QueryUnknown
	cmp eax,edi
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x70],bx
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [ebp-0x70],ax
	mov eax,dword ptr [ebp-0x68]
	cmp eax,edi
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[ebp-0x70]
	push ecx
	call esi

 Block31:
	mov ecx,dword ptr [ebp+0x54]
	cmp ecx,edi
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea edx,[ebp+0x24]
	push edx
	call IWzNameSpace::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0xD
	mov dword ptr [ebp+0x48],edi
	mov dword ptr [ebp+0x50],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block35:
	lea ecx,[ebp+0x48]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block38

 Block36:
	cmp eax,0x80004002
	je Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0xF
	cmp eax,edi
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0x10
	mov dword ptr [ebp+0x1C],edi

 Block41:
	mov esi,dword ptr [ebp+0x48]
	lea ecx,[ebp+0x1C]
	push ecx
	lea edx,[ebp+0x38]
	push edx
	push esi
	call enum_next_in_directory
	xor edi,edi
	add esp,0xC
	cmp eax,edi
	je Block152

 Block42:
	lea eax,[ebp+0x38]
	push eax
	lea ecx,[ebp+0x68]
	push ecx
	call DetachBSTR
	add esp,8
	mov edx,dword ptr [ebp+0x68]
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x68]
	mov dword ptr [ebp+0x5C],esp
	cmp eax,edi
	je Block44

 Block43:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block44:
	mov ecx,dword ptr [ebp+0x54]
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],0x12
	push eax
	mov byte ptr [ebp-4],0x11
	call IWzNameSpace::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x5C],esi
	cmp eax,edi
	je Block48

 Block45:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x30]
	push edx
	push offset __GUID_3c39b9aa_18cc_408c_8716_c4fb2117266e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x30]
	cmp eax,edi
	mov esi,ecx
	mov dword ptr [ebp+0x5C],esi
	jge Block48

 Block46:
	cmp eax,0x80004002
	je Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	cmp word ptr [ebp-0x60],8
	mov byte ptr [ebp-4],0x15
	jne Block63

 Block49:
	mov eax,dword ptr [ebp-0x58]
	xor edx,edx
	mov word ptr [ebp-0x60],dx
	cmp eax,edi
	je Block51

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block51:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block52:
	cmp esi,edi
	sete al
	test al,al
	je Block64

 Block53:
	mov byte ptr [ebp-4],0x11
	cmp esi,edi
	je Block55

 Block54:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block55:
	mov esi,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x10
	cmp esi,edi
	je Block147

 Block56:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block146

 Block57:
	test esi,esi
	je Block146

 Block58:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block60:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block62

 Block61:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block62:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	jmp Block146

 Block63:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x60]
	push eax
	call ebx
	jmp Block52

 Block64:
	call StringPool::GetInstance
	push 0x8A6
	lea ecx,[ebp+0x58]
	push ecx
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x16
	cmp eax,edi
	je Block66

 Block65:
	mov eax,dword ptr [eax]
	jmp Block67

 Block66:
	xor eax,eax

 Block67:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],edi
	call ZXString<char>::AssignWideStr
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x17
	cmp esi,edi
	je Block69

 Block68:
	mov eax,dword ptr [esi-4]
	jmp Block70

 Block69:
	xor eax,eax

 Block70:
	push eax
	push esi
	lea ecx,[ebp+0x58]
	call ZXString<char>::_Cat
	mov byte ptr [ebp-4],0x16
	cmp esi,edi
	je Block72

 Block71:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block72:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x40]
	push edx
	call esi
	lea eax,[ebp-0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	lea ecx,[ebp-0x20]
	push ecx
	mov byte ptr [ebp-4],0x18
	call esi
	lea edx,[ebp-0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	mov edx,dword ptr [ebp+0x58]
	push edi
	push edi
	lea eax,[ebp-0x40]
	push eax
	lea ecx,[ebp-0x20]
	push ecx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x19
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x1A
	cmp dword ptr [_D_G_RM],edi
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	lea eax,[ebp-0x80]
	mov byte ptr [ebp-4],0x19
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1B
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x60],edi
	cmp eax,edi
	je Block82

 Block79:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x2C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x2C]
	cmp eax,edi
	mov dword ptr [ebp+0x60],ecx
	jge Block82

 Block80:
	cmp eax,0x80004002
	je Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	mov esi,8
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp-0x80],si
	jne Block85

 Block83:
	mov eax,dword ptr [ebp-0x78]
	xor edx,edx
	mov word ptr [ebp-0x80],dx
	cmp eax,edi
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea eax,[ebp-0x80]
	push eax
	call ebx

 Block86:
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x20],si
	jne Block89

 Block87:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,edi
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[ebp-0x20]
	push edx
	call ebx

 Block90:
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp-0x40],si
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	cmp eax,edi
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[ebp-0x40]
	push ecx
	call ebx

 Block94:
	mov eax,dword ptr [ebp+0x68]
	cmp eax,edi
	je Block96

 Block95:
	mov esi,dword ptr [eax]
	jmp Block97

 Block96:
	xor esi,esi

 Block97:
	mov dword ptr [ebp+0x64],edi
	cmp esi,edi
	je Block99

 Block98:
	push edi
	push 3
	lea ecx,[ebp+0x64]
	call ZXString16::GetBuffer
	mov edx,dword ptr [esi]
	mov dword ptr [eax],edx
	mov cx,word ptr [esi+4]
	mov word ptr [eax+4],cx
	push 3
	lea ecx,[ebp+0x64]
	call ZXString16::ReleaseBuffer
	mov edi,dword ptr [ebp+0x64]

 Block99:
	mov byte ptr [ebp-4],0x20
	call StringPool::GetInstance
	push 0x1A52
	lea edx,[ebp+0x14]
	push edx
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	or dword ptr [ebp+0x6C],1
	push eax
	lea ecx,[ebp+0x64]
	mov byte ptr [ebp-4],0x21
	call ZXString16::Compare
	test eax,eax
	je Block104

 Block100:
	push 2
	lea eax,[ebp+0x34]
	push eax
	lea ecx,[ebp+0x64]
	call ZXString16::Left
	or dword ptr [ebp+0x6C],2
	push offset _S_MC
	mov ecx,eax
	mov dword ptr [ebp-4],0x22
	call ZXString16::Compare
	test eax,eax
	je Block104

 Block101:
	push offset _S_ITE
	lea ecx,[ebp+0x64]
	call ZXString16::Compare
	test eax,eax
	je Block104

 Block102:
	call StringPool::GetInstance
	push 0x1782
	lea ecx,[ebp+0x10]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	or dword ptr [ebp+0x6C],4
	push eax
	lea ecx,[ebp+0x64]
	call ZXString16::Compare
	test eax,eax
	je Block104

 Block103:
	xor bl,bl
	jmp Block105

 Block104:
	mov bl,1

 Block105:
	test byte ptr [ebp+0x6C],4
	je Block108

 Block106:
	mov eax,dword ptr [ebp+0x10]
	and dword ptr [ebp+0x6C],0xFFFFFFFB
	test eax,eax
	je Block108

 Block107:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block108:
	test byte ptr [ebp+0x6C],2
	mov dword ptr [ebp-4],0x21
	je Block111

 Block109:
	mov eax,dword ptr [ebp+0x34]
	and dword ptr [ebp+0x6C],0xFFFFFFFD
	test eax,eax
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block111:
	test byte ptr [ebp+0x6C],1
	mov dword ptr [ebp-4],0x20
	je Block114

 Block112:
	mov eax,dword ptr [ebp+0x14]
	and dword ptr [ebp+0x6C],0xFFFFFFFE
	test eax,eax
	je Block114

 Block113:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block114:
	test bl,bl
	je Block119

 Block115:
	mov byte ptr [ebp-4],0x1F
	test edi,edi
	je Block117

 Block116:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block117:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block140

 Block118:
	mov edx,dword ptr [eax]
	push eax
	jmp Block139

 Block119:
	push 2
	lea eax,[ebp+0x50]
	push eax
	lea ecx,[ebp+0x64]
	call ZXString16::Left
	push offset _S_BF
	mov ecx,eax
	call ZXString16::Compare
	test eax,eax
	mov eax,dword ptr [ebp+0x50]
	sete bl
	test eax,eax
	je Block121

 Block120:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block121:
	test bl,bl
	je Block126

 Block122:
	mov byte ptr [ebp-4],0x1F
	test edi,edi
	je Block124

 Block123:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block124:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block140

 Block125:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block140

 Block126:
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block128

 Block127:
	mov eax,dword ptr [eax]
	jmp Block129

 Block128:
	xor eax,eax

 Block129:
	push eax
	call __wtoi
	mov ecx,dword ptr [ebp+0x4C]
	mov esi,eax
	mov eax,esp
	mov dword ptr [ebp+0x18],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block131

 Block130:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx

 Block131:
	mov ebx,dword ptr [ebp+0x60]
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x18],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block133

 Block132:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block133:
	mov ecx,dword ptr [ebp+0x28]
	push esi
	call CSkillInfo::LoadSkillRoot
	test eax,eax
	jne Block135

 Block134:
	push offset ZException::THROW_INFO
	lea ecx,[ebp+0x20]
	push ecx
	mov dword ptr [ebp+0x20],0x80004005
	call _CxxThrowException

 Block135:
	mov byte ptr [ebp-4],0x1F
	test edi,edi
	je Block137

 Block136:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block137:
	mov byte ptr [ebp-4],0x16
	test ebx,ebx
	je Block140

 Block138:
	mov edx,dword ptr [ebx]
	push ebx

 Block139:
	mov eax,dword ptr [edx+8]
	call eax

 Block140:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block142

 Block141:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block142:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block144

 Block143:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block144:
	mov ecx,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x10
	test ecx,ecx
	je Block147

 Block145:
	call _xbstr_t::Data_t::Release

 Block146:
	mov dword ptr [ebp+0x68],0

 Block147:
	cmp word ptr [ebp+0x38],8
	jne Block150

 Block148:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block41

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block150:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block41

 Block151:
	push eax
	call _com_issue_error

 Block152:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],0xF
	jne Block155

 Block153:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	cmp eax,edi
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov byte ptr [ebp-4],0xC
	cmp esi,edi
	je Block158

 Block157:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block158:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],8
	call edx
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block160

 Block159:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block160:
	mov eax,1
	jmp Block164

 Block164:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add ebp,0x70
	mov esp,ebp
	pop ebp
	ret
}
}
// CSkillInfo::GetShootSkillRange
__SUB_CLASS_THIS(00309650, __thiscall, 21705,  CSkillInfo, long, const CharacterData&, long, long) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x18]
	xor ebx,ebx
	push edi
	mov edi,dword ptr [esp+0x18]
	mov ebp,ecx
	mov dword ptr [esp+0x10],ebx
	cmp esi,ebx
	je Block8

 Block1:
	lea eax,[esp+0x10]
	push eax
	push esi
	push edi
	call CSkillInfo::GetSkillLevel_0
	mov ebx,eax
	cmp esi,0x2179951
	jne Block3

 Block2:
	push 0
	push 0x21612A9
	jmp Block7

 Block3:
	cmp esi,0x2179952
	jne Block5

 Block4:
	push 0
	push 0x21612AC
	jmp Block7

 Block5:
	cmp esi,0x217E775
	jne Block8

 Block6:
	push 0
	push 0x217C05C

 Block7:
	push edi
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	mov ebx,eax

 Block8:
	mov ecx,dword ptr [edi+0x3D]
	push ecx
	lea edx,[edi+0x39]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esp+0x18]
	cwde
	add esp,8
	xor esi,esi
	mov dword ptr [esp+0x18],eax
	test ecx,ecx
	je Block11

 Block9:
	push ebx
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x204]
	push ecx
	add eax,0x1FC
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block11

 Block10:
	mov ecx,dword ptr [esp+0x10]
	push ebx
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x204]
	push edx
	add eax,0x1FC
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	pop edi
	mov esi,eax
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 0xC

 Block11:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,0x3EE1AB
	je Block25

 Block12:
	cmp ecx,0x40684B
	je Block25

 Block13:
	cmp ecx,0x1F962ED
	je Block25

 Block14:
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x21
	jne Block16

 Block15:
	mov esi,0x1A4
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 0xC

 Block16:
	cmp dword ptr [esp+0x1C],0x217C067
	jne Block18

 Block17:
	mov ecx,dword ptr [esp+0x10]
	push ebx
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x1D4]
	add eax,0x1CC
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	cdq
	mov esi,eax
	xor esi,edx
	add esp,8
	sub esi,edx
	sub esi,0x3C
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 0xC

 Block18:
	mov eax,dword ptr [esp+0x20]
	add eax,0xFFFFFFD3
	cmp eax,4
	ja Block26

 Block19:
	cmp EAX, 0
je Block20
cmp EAX, 1
je Block20
cmp EAX, 2
je Block22
cmp EAX, 3
je Block26
cmp EAX, 4
je Block24


 Block20:
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0x1C]
	push edx
	push eax
	mov esi,0x12C
	mov dword ptr [esp+0x24],0
	call is_cygnus_job
	add esp,4
	neg eax
	sbb eax,eax
	and eax,0x98967F
	add eax,0x2DC6C2
	push eax
	push edi
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block26

 Block21:
	mov ecx,dword ptr [esp+0x1C]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nRange
	mov esi,eax
	add esi,0x12C
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 0xC

 Block22:
	mov edx,dword ptr [esp+0x18]
	lea ecx,[esp+0x1C]
	push ecx
	push edx
	mov esi,0xC8
	mov dword ptr [esp+0x24],0
	call is_cygnus_job
	add esp,4
	neg eax
	sbb eax,eax
	and eax,0x989680
	add eax,0x3D0901
	push eax
	push edi
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block26

 Block23:
	mov ecx,dword ptr [esp+0x1C]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nRange
	mov esi,eax
	add esi,0xC8
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 0xC

 Block24:
	mov esi,0xC8
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 0xC

 Block25:
	mov esi,0x12C

 Block26:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 0xC
}
}
// CSkillInfo::LoadItemSkillLevelData
_SUB_EXCEPTION_HANDLER(306150)
__SUB_CLASS_THIS(00306150, __thiscall, 21748,  CSkillInfo, int32_t, long, ZArray<ZRef<ITEMSKILLLEVELDATA> >&, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_306150
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ebp+0x78]
	xor edi,edi
	cmp eax,edi
	sete cl
	mov dword ptr [ebp-4],edi
	test cl,cl
	je Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[ebp+0x5C]
	push eax
	mov dword ptr [ebp+0x5C],0x80004005
	call _CxxThrowException

 Block2:
	mov dword ptr [ebp-0x50],edi
	mov byte ptr [ebp-4],1
	cmp eax,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x58]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp+0x58],edi
	call eax
	cmp eax,edi
	jge Block6

 Block5:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov esi,dword ptr [ebp+0x58]
	cmp esi,edi
	jg Block8

 Block7:
	push offset ZException::THROW_INFO
	lea ecx,[ebp+0x5C]
	push ecx
	mov dword ptr [ebp+0x5C],0x80004005
	call _CxxThrowException

 Block8:
	mov ecx,dword ptr [ebp+0x74]
	lea edx,[ebp+0x4B]
	push edx
	push esi
	call ZArray<ZRef<ITEMSKILLLEVELDATA>>::_Alloc
	cmp esi,1
	mov dword ptr [ebp+0x54],1
	jl Block60

 Block9:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x54]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],2
	cmp ecx,edi
	je Block3

 Block10:
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block12

 Block11:
	cmp eax,0x80004002
	jne Block63

 Block12:
	mov ebx,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x20],bx
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	cmp eax,edi
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov esi,dword ptr [ebp+0x4C]
	cmp esi,edi
	sete al
	test al,al
	jne Block64

 Block17:
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x44],edi
	call ZRef<ITEMSKILLLEVELDATA>::_Alloc
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AA5
	push edx
	mov byte ptr [ebp-4],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],7
	cmp esi,edi
	je Block3

 Block18:
	lea eax,[ebp-0x3C]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],8
	call get_int32
	mov edi,dword ptr [ebp+0x44]
	add esp,8
	mov dword ptr [edi],eax
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x3C],bx
	jne Block21

 Block19:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x963
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],9
	mov ecx,esi
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xA
	call get_int32
	imul eax,0x3E8
	add esp,8
	mov dword ptr [edi+8],eax
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x1C],bx
	jne Block25

 Block23:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1ABA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0xB
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC
	call get_int32
	imul eax,0x3E8
	add esp,8
	mov dword ptr [edi+4],eax
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp+0x30],bx
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x964
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp]
	mov byte ptr [ebp-4],0xD
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xE
	call get_int32
	add esp,8
	mov dword ptr [edi+0xC],eax
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp],bx
	jne Block33

 Block31:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x3E5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0xF
	mov ecx,esi
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x10
	call get_int32
	add esp,8
	mov dword ptr [edi+0x10],eax
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x2C],bx
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
	call dword ptr [ZImports::_VariantClear]

 Block38:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x3E6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x4C]
	mov byte ptr [ebp-4],0x11
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x12
	call get_int32
	add esp,8
	mov dword ptr [edi+0x14],eax
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x4C],bx
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov dword ptr [ebp+0x5C],0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x666
	push edx
	mov byte ptr [ebp-4],0x13
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x10]
	mov byte ptr [ebp-4],0x14
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	cmp word ptr [ebp+0x10],8
	movzx ebx,word ptr [eax]
	jne Block45

 Block43:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	test bx,bx
	je Block54

 Block47:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ebp+0x70]
	push eax
	push ecx
	lea edx,[ebp+0x5C]
	push offset _S_SKILLITEMSKILLIM
	push edx
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x50]
	call _xbstr_t::_ctor_1
	lea ebx,[edi+0x18]
	lea eax,[ebp+0x50]
	cmp ebx,eax
	je Block52

 Block48:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block50

 Block49:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebx],0

 Block50:
	mov eax,dword ptr [ebp+0x50]
	mov dword ptr [ebx],eax
	test eax,eax
	je Block54

 Block51:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block52:
	mov ecx,dword ptr [ebp+0x50]
	test ecx,ecx
	je Block54

 Block53:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x50],0

 Block54:
	mov edx,dword ptr [ebp+0x74]
	mov eax,dword ptr [edx]
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	lea ecx,[eax+ecx*8-8]
	call ZRef<ITEMSKILLLEVELDATA>::op_assign_copy
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block56:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	mov byte ptr [ebp-4],5
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block59

 Block57:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block59

 Block58:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block59:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [ebp+0x44],0
	mov byte ptr [ebp-4],1
	call edx
	mov eax,dword ptr [ebp+0x54]
	inc eax
	xor edi,edi
	cmp eax,dword ptr [ebp+0x58]
	mov dword ptr [ebp+0x54],eax
	jle Block9

 Block60:
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block62:
	mov eax,1
	lea esp,[ebp-0x60]
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
	ret 0xC

 Block63:
	push eax
	call _com_issue_error

 Block64:
	push offset ZException::THROW_INFO
	lea eax,[ebp+0x58]
	push eax
	mov dword ptr [ebp+0x58],0x80004005
	call _CxxThrowException
	int 3
}
}
// SKILLLEVELDATA::SKILLLEVELDATA
_SUB_EXCEPTION_HANDLER(51DBE0)
__SUB_CLASS_THIS(0051DBE0, __thiscall, 21159,  SKILLLEVELDATA, void, const SKILLLEVELDATA&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_51DBE0
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
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	mov ebp,dword ptr [esp+0x28]
	mov eax,dword ptr [ebp]
	mov dword ptr [ebx],eax
	test eax,eax
	je Block2

 Block1:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,dword ptr [ebp+4]
	mov dword ptr [ebx+4],eax
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [ebx+8],ecx
	mov edx,dword ptr [ebp+0xC]
	mov dword ptr [ebx+0xC],edx
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebx+0x10],eax
	mov ecx,dword ptr [ebp+0x14]
	mov dword ptr [ebx+0x14],ecx
	mov edx,dword ptr [ebp+0x18]
	mov dword ptr [ebx+0x18],edx
	mov eax,dword ptr [ebp+0x1C]
	mov dword ptr [ebx+0x1C],eax
	mov ecx,dword ptr [ebp+0x20]
	mov dword ptr [ebx+0x20],ecx
	mov edx,dword ptr [ebp+0x24]
	mov dword ptr [ebx+0x24],edx
	mov eax,dword ptr [ebp+0x28]
	mov dword ptr [ebx+0x28],eax
	mov ecx,dword ptr [ebp+0x2C]
	mov dword ptr [ebx+0x2C],ecx
	mov edx,dword ptr [ebp+0x30]
	mov dword ptr [ebx+0x30],edx
	mov eax,dword ptr [ebp+0x34]
	mov dword ptr [ebx+0x34],eax
	mov ecx,dword ptr [ebp+0x38]
	mov dword ptr [ebx+0x38],ecx
	mov edx,dword ptr [ebp+0x3C]
	mov dword ptr [ebx+0x3C],edx
	mov eax,dword ptr [ebp+0x40]
	mov dword ptr [ebx+0x40],eax
	mov ecx,dword ptr [ebp+0x44]
	mov dword ptr [ebx+0x44],ecx
	mov edx,dword ptr [ebp+0x48]
	mov dword ptr [ebx+0x48],edx
	mov eax,dword ptr [ebp+0x4C]
	mov dword ptr [ebx+0x4C],eax
	mov ecx,dword ptr [ebp+0x50]
	mov dword ptr [ebx+0x50],ecx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [ebx+0x54],edx
	mov eax,dword ptr [ebp+0x58]
	mov dword ptr [ebx+0x58],eax
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [ebx+0x5C],ecx
	mov edx,dword ptr [ebp+0x60]
	mov dword ptr [ebx+0x60],edx
	mov eax,dword ptr [ebp+0x64]
	mov dword ptr [ebx+0x64],eax
	mov ecx,dword ptr [ebp+0x68]
	mov dword ptr [ebx+0x68],ecx
	mov edx,dword ptr [ebp+0x6C]
	mov dword ptr [ebx+0x6C],edx
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebx+0x70],eax
	mov ecx,dword ptr [ebp+0x74]
	mov dword ptr [ebx+0x74],ecx
	mov edx,dword ptr [ebp+0x78]
	mov dword ptr [ebx+0x78],edx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebx+0x7C],eax
	mov ecx,dword ptr [ebp+0x80]
	mov dword ptr [ebx+0x80],ecx
	mov edx,dword ptr [ebp+0x84]
	mov dword ptr [ebx+0x84],edx
	mov eax,dword ptr [ebp+0x88]
	mov dword ptr [ebx+0x88],eax
	mov ecx,dword ptr [ebp+0x8C]
	mov dword ptr [ebx+0x8C],ecx
	mov edx,dword ptr [ebp+0x90]
	mov dword ptr [ebx+0x90],edx
	mov eax,dword ptr [ebp+0x94]
	mov dword ptr [ebx+0x94],eax
	mov ecx,dword ptr [ebp+0x98]
	mov dword ptr [ebx+0x98],ecx
	mov edx,dword ptr [ebp+0x9C]
	mov dword ptr [ebx+0x9C],edx
	mov eax,dword ptr [ebp+0xA0]
	mov dword ptr [esp+0x20],0
	mov dword ptr [ebx+0xA0],eax
	mov ecx,dword ptr [ebp+0xA4]
	mov dword ptr [ebx+0xA4],ecx
	mov edx,dword ptr [ebp+0xA8]
	mov dword ptr [ebx+0xA8],edx
	mov eax,dword ptr [ebp+0xAC]
	mov dword ptr [ebx+0xAC],eax
	mov ecx,dword ptr [ebp+0xB0]
	mov dword ptr [ebx+0xB0],ecx
	mov edx,dword ptr [ebp+0xB4]
	mov dword ptr [ebx+0xB4],edx
	mov eax,dword ptr [ebp+0xB8]
	mov dword ptr [ebx+0xB8],eax
	mov ecx,dword ptr [ebp+0xBC]
	mov dword ptr [ebx+0xBC],ecx
	mov edx,dword ptr [ebp+0xC0]
	mov dword ptr [ebx+0xC0],edx
	mov eax,dword ptr [ebp+0xC4]
	mov dword ptr [ebx+0xC4],eax
	mov ecx,dword ptr [ebp+0xC8]
	mov dword ptr [ebx+0xC8],ecx
	mov edx,dword ptr [ebp+0xCC]
	mov dword ptr [ebx+0xCC],edx
	mov eax,dword ptr [ebp+0xD0]
	mov dword ptr [ebx+0xD0],eax
	mov ecx,dword ptr [ebp+0xD4]
	mov dword ptr [ebx+0xD4],ecx
	mov edx,dword ptr [ebp+0xD8]
	mov dword ptr [ebx+0xD8],edx
	mov eax,dword ptr [ebp+0xDC]
	mov dword ptr [ebx+0xDC],eax
	mov ecx,dword ptr [ebp+0xE0]
	mov dword ptr [ebx+0xE0],ecx
	mov edx,dword ptr [ebp+0xE4]
	mov dword ptr [ebx+0xE4],edx
	mov eax,dword ptr [ebp+0xE8]
	mov dword ptr [ebx+0xE8],eax
	mov ecx,dword ptr [ebp+0xEC]
	mov dword ptr [ebx+0xEC],ecx
	mov edx,dword ptr [ebp+0xF0]
	mov dword ptr [ebx+0xF0],edx
	mov eax,dword ptr [ebp+0xF4]
	mov dword ptr [ebx+0xF4],eax
	mov ecx,dword ptr [ebp+0xF8]
	mov dword ptr [ebx+0xF8],ecx
	mov edx,dword ptr [ebp+0xFC]
	mov dword ptr [ebx+0xFC],edx
	mov eax,dword ptr [ebp+0x100]
	mov dword ptr [ebx+0x100],eax
	mov ecx,dword ptr [ebp+0x104]
	mov dword ptr [ebx+0x104],ecx
	mov edx,dword ptr [ebp+0x108]
	mov dword ptr [ebx+0x108],edx
	mov eax,dword ptr [ebp+0x10C]
	mov dword ptr [ebx+0x10C],eax
	mov ecx,dword ptr [ebp+0x110]
	mov dword ptr [ebx+0x110],ecx
	mov edx,dword ptr [ebp+0x114]
	mov dword ptr [ebx+0x114],edx
	mov eax,dword ptr [ebp+0x118]
	mov dword ptr [ebx+0x118],eax
	mov ecx,dword ptr [ebp+0x11C]
	mov dword ptr [ebx+0x11C],ecx
	mov edx,dword ptr [ebp+0x120]
	mov dword ptr [ebx+0x120],edx
	mov eax,dword ptr [ebp+0x124]
	mov dword ptr [ebx+0x124],eax
	mov ecx,dword ptr [ebp+0x128]
	mov dword ptr [ebx+0x128],ecx
	mov edx,dword ptr [ebp+0x12C]
	mov dword ptr [ebx+0x12C],edx
	mov eax,dword ptr [ebp+0x130]
	mov dword ptr [ebx+0x130],eax
	mov ecx,dword ptr [ebp+0x134]
	mov dword ptr [ebx+0x134],ecx
	mov edx,dword ptr [ebp+0x138]
	mov dword ptr [ebx+0x138],edx
	mov eax,dword ptr [ebp+0x13C]
	mov dword ptr [ebx+0x13C],eax
	mov ecx,dword ptr [ebp+0x140]
	mov dword ptr [ebx+0x140],ecx
	mov edx,dword ptr [ebp+0x144]
	mov dword ptr [ebx+0x144],edx
	mov eax,dword ptr [ebp+0x148]
	mov dword ptr [ebx+0x148],eax
	mov ecx,dword ptr [ebp+0x14C]
	mov dword ptr [ebx+0x14C],ecx
	mov edx,dword ptr [ebp+0x150]
	mov dword ptr [ebx+0x150],edx
	mov eax,dword ptr [ebp+0x154]
	mov dword ptr [ebx+0x154],eax
	mov ecx,dword ptr [ebp+0x158]
	mov dword ptr [ebx+0x158],ecx
	mov edx,dword ptr [ebp+0x15C]
	mov dword ptr [ebx+0x15C],edx
	mov eax,dword ptr [ebp+0x160]
	mov dword ptr [ebx+0x160],eax
	mov ecx,dword ptr [ebp+0x164]
	mov dword ptr [ebx+0x164],ecx
	mov edx,dword ptr [ebp+0x168]
	mov dword ptr [ebx+0x168],edx
	mov eax,dword ptr [ebp+0x16C]
	mov dword ptr [ebx+0x16C],eax
	mov ecx,dword ptr [ebp+0x170]
	mov dword ptr [ebx+0x170],ecx
	mov edx,dword ptr [ebp+0x174]
	mov dword ptr [ebx+0x174],edx
	mov eax,dword ptr [ebp+0x178]
	mov dword ptr [ebx+0x178],eax
	mov ecx,dword ptr [ebp+0x17C]
	mov dword ptr [ebx+0x17C],ecx
	mov edx,dword ptr [ebp+0x180]
	mov dword ptr [ebx+0x180],edx
	mov eax,dword ptr [ebp+0x184]
	mov dword ptr [ebx+0x184],eax
	mov ecx,dword ptr [ebp+0x188]
	mov dword ptr [ebx+0x188],ecx
	mov edx,dword ptr [ebp+0x18C]
	mov dword ptr [ebx+0x18C],edx
	mov eax,dword ptr [ebp+0x190]
	mov dword ptr [ebx+0x190],eax
	mov ecx,dword ptr [ebp+0x194]
	mov dword ptr [ebx+0x194],ecx
	mov edx,dword ptr [ebp+0x198]
	mov dword ptr [ebx+0x198],edx
	mov eax,dword ptr [ebp+0x19C]
	mov dword ptr [ebx+0x19C],eax
	mov ecx,dword ptr [ebp+0x1A0]
	mov dword ptr [ebx+0x1A0],ecx
	mov edx,dword ptr [ebp+0x1A4]
	mov dword ptr [ebx+0x1A4],edx
	mov eax,dword ptr [ebp+0x1A8]
	mov dword ptr [ebx+0x1A8],eax
	mov ecx,dword ptr [ebp+0x1AC]
	mov dword ptr [ebx+0x1AC],ecx
	mov edx,dword ptr [ebp+0x1B0]
	mov dword ptr [ebx+0x1B0],edx
	mov eax,dword ptr [ebp+0x1B4]
	mov dword ptr [ebx+0x1B4],eax
	mov ecx,dword ptr [ebp+0x1B8]
	mov dword ptr [ebx+0x1B8],ecx
	mov edx,dword ptr [ebp+0x1BC]
	mov dword ptr [ebx+0x1BC],edx
	mov eax,dword ptr [ebp+0x1C0]
	mov dword ptr [ebx+0x1C0],eax
	mov ecx,dword ptr [ebp+0x1C4]
	mov dword ptr [ebx+0x1C4],ecx
	mov edx,dword ptr [ebp+0x1C8]
	mov dword ptr [ebx+0x1C8],edx
	lea esi,[ebp+0x1CC]
	lea edi,[ebx+0x1CC]
	mov ecx,0xC
	rep movsd
	mov eax,dword ptr [ebp+0x1FC]
	mov dword ptr [ebx+0x1FC],eax
	mov ecx,dword ptr [ebp+0x200]
	mov dword ptr [ebx+0x200],ecx
	mov edx,dword ptr [ebp+0x204]
	mov dword ptr [ebx+0x204],edx
	mov eax,dword ptr [ebp+0x208]
	mov dword ptr [ebx+0x208],eax
	test eax,eax
	je Block4

 Block3:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov eax,dword ptr [ebp+0x20C]
	mov dword ptr [ebx+0x20C],eax
	test eax,eax
	je Block6

 Block5:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	lea eax,[ebp+0x210]
	lea ecx,[ebx+0x210]
	push eax
	mov byte ptr [esp+0x24],2
	mov dword ptr [ecx],0
	call ZArray<Ztl_bstr_t>::operator=
	mov ecx,dword ptr [ebp+0x214]
	mov dword ptr [ebx+0x214],ecx
	mov edx,dword ptr [ebp+0x218]
	mov dword ptr [ebx+0x218],edx
	mov eax,dword ptr [ebp+0x21C]
	mov dword ptr [ebx+0x21C],eax
	mov ecx,dword ptr [ebp+0x220]
	mov dword ptr [ebx+0x220],ecx
	mov edx,dword ptr [ebp+0x224]
	mov dword ptr [ebx+0x224],edx
	mov eax,dword ptr [ebp+0x228]
	mov dword ptr [ebx+0x228],eax
	mov ecx,dword ptr [ebp+0x22C]
	mov dword ptr [ebx+0x22C],ecx
	mov edx,dword ptr [ebp+0x230]
	mov dword ptr [ebx+0x230],edx
	mov eax,dword ptr [ebp+0x234]
	mov dword ptr [ebx+0x234],eax
	mov ecx,dword ptr [ebp+0x238]
	mov dword ptr [ebx+0x238],ecx
	mov edx,dword ptr [ebp+0x23C]
	mov dword ptr [ebx+0x23C],edx
	mov eax,dword ptr [ebp+0x240]
	mov dword ptr [ebx+0x240],eax
	mov ecx,dword ptr [ebp+0x244]
	mov dword ptr [ebx+0x244],ecx
	mov edx,dword ptr [ebp+0x248]
	mov dword ptr [ebx+0x248],edx
	mov eax,dword ptr [ebp+0x24C]
	mov dword ptr [ebx+0x24C],eax
	mov ecx,dword ptr [ebp+0x250]
	mov dword ptr [ebx+0x250],ecx
	mov edx,dword ptr [ebp+0x254]
	mov dword ptr [ebx+0x254],edx
	mov eax,dword ptr [ebp+0x258]
	mov dword ptr [ebx+0x258],eax
	mov ecx,dword ptr [ebp+0x25C]
	mov dword ptr [ebx+0x25C],ecx
	mov edx,dword ptr [ebp+0x260]
	mov dword ptr [ebx+0x260],edx
	mov eax,dword ptr [ebp+0x264]
	mov dword ptr [ebx+0x264],eax
	mov ecx,dword ptr [ebp+0x268]
	mov dword ptr [ebx+0x268],ecx
	mov edx,dword ptr [ebp+0x26C]
	mov dword ptr [ebx+0x26C],edx
	mov eax,dword ptr [ebp+0x270]
	mov dword ptr [ebx+0x270],eax
	mov ecx,dword ptr [ebp+0x274]
	mov dword ptr [ebx+0x274],ecx
	mov edx,dword ptr [ebp+0x278]
	mov dword ptr [ebx+0x278],edx
	mov eax,dword ptr [ebp+0x27C]
	mov dword ptr [ebx+0x27C],eax
	mov ecx,dword ptr [ebp+0x280]
	mov dword ptr [ebx+0x280],ecx
	mov edx,dword ptr [ebp+0x284]
	mov dword ptr [ebx+0x284],edx
	mov eax,dword ptr [ebp+0x288]
	mov dword ptr [ebx+0x288],eax
	mov ecx,dword ptr [ebp+0x28C]
	mov dword ptr [ebx+0x28C],ecx
	mov edx,dword ptr [ebp+0x290]
	mov dword ptr [ebx+0x290],edx
	mov eax,dword ptr [ebp+0x294]
	mov dword ptr [ebx+0x294],eax
	mov ecx,dword ptr [ebp+0x298]
	mov dword ptr [ebx+0x298],ecx
	mov edx,dword ptr [ebp+0x29C]
	mov dword ptr [ebx+0x29C],edx
	mov eax,dword ptr [ebp+0x2A0]
	mov dword ptr [ebx+0x2A0],eax
	mov ecx,dword ptr [ebp+0x2A4]
	mov dword ptr [ebx+0x2A4],ecx
	mov edx,dword ptr [ebp+0x2A8]
	mov dword ptr [ebx+0x2A8],edx
	mov eax,dword ptr [ebp+0x2AC]
	mov dword ptr [ebx+0x2AC],eax
	mov ecx,dword ptr [ebp+0x2B0]
	mov dword ptr [ebx+0x2B0],ecx
	mov edx,dword ptr [ebp+0x2B4]
	mov dword ptr [ebx+0x2B4],edx
	mov eax,dword ptr [ebp+0x2B8]
	mov dword ptr [ebx+0x2B8],eax
	mov ecx,dword ptr [ebp+0x2BC]
	mov dword ptr [ebx+0x2BC],ecx
	mov edx,dword ptr [ebp+0x2C0]
	mov dword ptr [ebx+0x2C0],edx
	mov eax,dword ptr [ebp+0x2C4]
	mov dword ptr [ebx+0x2C4],eax
	mov ecx,dword ptr [ebp+0x2C8]
	mov dword ptr [ebx+0x2C8],ecx
	mov edx,dword ptr [ebp+0x2CC]
	mov dword ptr [ebx+0x2CC],edx
	mov eax,dword ptr [ebp+0x2D0]
	mov dword ptr [ebx+0x2D0],eax
	mov ecx,dword ptr [ebp+0x2D4]
	mov dword ptr [ebx+0x2D4],ecx
	mov edx,dword ptr [ebp+0x2D8]
	mov dword ptr [ebx+0x2D8],edx
	mov eax,dword ptr [ebp+0x2DC]
	mov dword ptr [ebx+0x2DC],eax
	mov ecx,dword ptr [ebp+0x2E0]
	mov dword ptr [ebx+0x2E0],ecx
	mov edx,dword ptr [ebp+0x2E4]
	mov dword ptr [ebx+0x2E4],edx
	mov eax,dword ptr [ebp+0x2E8]
	mov dword ptr [ebx+0x2E8],eax
	mov ecx,dword ptr [ebp+0x2EC]
	mov dword ptr [ebx+0x2EC],ecx
	mov edx,dword ptr [ebp+0x2F0]
	mov dword ptr [ebx+0x2F0],edx
	mov eax,dword ptr [ebp+0x2F4]
	mov dword ptr [ebx+0x2F4],eax
	mov ecx,dword ptr [ebp+0x2F8]
	mov dword ptr [ebx+0x2F8],ecx
	mov edx,dword ptr [ebp+0x2FC]
	mov dword ptr [ebx+0x2FC],edx
	mov eax,dword ptr [ebp+0x300]
	mov dword ptr [ebx+0x300],eax
	mov ecx,dword ptr [ebp+0x304]
	mov dword ptr [ebx+0x304],ecx
	mov edx,dword ptr [ebp+0x308]
	mov dword ptr [ebx+0x308],edx
	mov eax,dword ptr [ebp+0x30C]
	mov dword ptr [ebx+0x30C],eax
	mov ecx,dword ptr [ebp+0x310]
	mov dword ptr [ebx+0x310],ecx
	mov edx,dword ptr [ebp+0x314]
	mov dword ptr [ebx+0x314],edx
	mov eax,dword ptr [ebp+0x318]
	mov dword ptr [ebx+0x318],eax
	mov ecx,dword ptr [ebp+0x31C]
	mov dword ptr [ebx+0x31C],ecx
	mov edx,dword ptr [ebp+0x320]
	mov dword ptr [ebx+0x320],edx
	mov eax,dword ptr [ebp+0x324]
	mov dword ptr [ebx+0x324],eax
	mov ecx,dword ptr [ebp+0x328]
	mov dword ptr [ebx+0x328],ecx
	mov edx,dword ptr [ebp+0x32C]
	mov dword ptr [ebx+0x32C],edx
	mov eax,dword ptr [ebp+0x330]
	mov dword ptr [ebx+0x330],eax
	mov ecx,dword ptr [ebp+0x334]
	mov dword ptr [ebx+0x334],ecx
	mov edx,dword ptr [ebp+0x338]
	mov dword ptr [ebx+0x338],edx
	mov eax,dword ptr [ebp+0x33C]
	mov dword ptr [ebx+0x33C],eax
	mov ecx,dword ptr [ebp+0x340]
	mov dword ptr [ebx+0x340],ecx
	mov edx,dword ptr [ebp+0x344]
	mov dword ptr [ebx+0x344],edx
	mov eax,dword ptr [ebp+0x348]
	mov dword ptr [ebx+0x348],eax
	mov ecx,dword ptr [ebp+0x34C]
	mov dword ptr [ebx+0x34C],ecx
	mov edx,dword ptr [ebp+0x350]
	mov dword ptr [ebx+0x350],edx
	mov eax,dword ptr [ebp+0x354]
	mov dword ptr [ebx+0x354],eax
	mov ecx,dword ptr [ebp+0x358]
	mov dword ptr [ebx+0x358],ecx
	mov edx,dword ptr [ebp+0x35C]
	mov dword ptr [ebx+0x35C],edx
	mov eax,dword ptr [ebp+0x360]
	mov dword ptr [ebx+0x360],eax
	mov ecx,dword ptr [ebp+0x364]
	mov dword ptr [ebx+0x364],ecx
	mov edx,dword ptr [ebp+0x368]
	mov dword ptr [ebx+0x368],edx
	mov eax,dword ptr [ebp+0x36C]
	mov dword ptr [ebx+0x36C],eax
	mov ecx,dword ptr [ebp+0x370]
	mov dword ptr [ebx+0x370],ecx
	mov edx,dword ptr [ebp+0x374]
	mov dword ptr [ebx+0x374],edx
	mov eax,dword ptr [ebp+0x378]
	mov dword ptr [ebx+0x378],eax
	mov ecx,dword ptr [ebp+0x37C]
	mov dword ptr [ebx+0x37C],ecx
	mov edx,dword ptr [ebp+0x380]
	mov dword ptr [ebx+0x380],edx
	mov eax,dword ptr [ebp+0x384]
	mov dword ptr [ebx+0x384],eax
	mov ecx,dword ptr [ebp+0x388]
	mov dword ptr [ebx+0x388],ecx
	mov edx,dword ptr [ebp+0x38C]
	mov dword ptr [ebx+0x38C],edx
	mov eax,dword ptr [ebp+0x390]
	mov dword ptr [ebx+0x390],eax
	mov ecx,dword ptr [ebp+0x394]
	mov dword ptr [ebx+0x394],ecx
	mov edx,dword ptr [ebp+0x398]
	mov dword ptr [ebx+0x398],edx
	mov eax,dword ptr [ebp+0x39C]
	mov dword ptr [ebx+0x39C],eax
	mov ecx,dword ptr [ebp+0x3A0]
	mov dword ptr [ebx+0x3A0],ecx
	mov edx,dword ptr [ebp+0x3A4]
	mov dword ptr [ebx+0x3A4],edx
	mov eax,dword ptr [ebp+0x3A8]
	mov dword ptr [ebx+0x3A8],eax
	mov ecx,dword ptr [ebp+0x3AC]
	mov dword ptr [ebx+0x3AC],ecx
	mov edx,dword ptr [ebp+0x3B0]
	mov dword ptr [ebx+0x3B0],edx
	mov eax,dword ptr [ebp+0x3B4]
	mov dword ptr [ebx+0x3B4],eax
	mov ecx,dword ptr [ebp+0x3B8]
	mov dword ptr [ebx+0x3B8],ecx
	mov edx,dword ptr [ebp+0x3BC]
	mov dword ptr [ebx+0x3BC],edx
	mov eax,dword ptr [ebp+0x3C0]
	mov dword ptr [ebx+0x3C0],eax
	mov ecx,dword ptr [ebp+0x3C4]
	mov dword ptr [ebx+0x3C4],ecx
	mov edx,dword ptr [ebp+0x3C8]
	mov dword ptr [ebx+0x3C8],edx
	mov eax,dword ptr [ebp+0x3CC]
	mov dword ptr [ebx+0x3CC],eax
	mov ecx,dword ptr [ebp+0x3D0]
	mov dword ptr [ebx+0x3D0],ecx
	mov edx,dword ptr [ebp+0x3D4]
	mov dword ptr [ebx+0x3D4],edx
	mov eax,dword ptr [ebp+0x3D8]
	mov dword ptr [ebx+0x3D8],eax
	mov ecx,dword ptr [ebp+0x3DC]
	mov dword ptr [ebx+0x3DC],ecx
	mov edx,dword ptr [ebp+0x3E0]
	mov dword ptr [ebx+0x3E0],edx
	mov eax,dword ptr [ebp+0x3E4]
	mov dword ptr [ebx+0x3E4],eax
	mov ecx,dword ptr [ebp+0x3E8]
	mov dword ptr [ebx+0x3E8],ecx
	mov edx,dword ptr [ebp+0x3EC]
	mov dword ptr [ebx+0x3EC],edx
	mov eax,dword ptr [ebp+0x3F0]
	mov dword ptr [ebx+0x3F0],eax
	mov ecx,dword ptr [ebp+0x3F4]
	mov dword ptr [ebx+0x3F4],ecx
	mov edx,dword ptr [ebp+0x3F8]
	mov dword ptr [ebx+0x3F8],edx
	mov eax,dword ptr [ebp+0x3FC]
	mov dword ptr [ebx+0x3FC],eax
	mov ecx,dword ptr [ebp+0x400]
	mov dword ptr [ebx+0x400],ecx
	mov edx,dword ptr [ebp+0x404]
	mov dword ptr [ebx+0x404],edx
	mov eax,dword ptr [ebp+0x408]
	mov dword ptr [ebx+0x408],eax
	mov ecx,dword ptr [ebp+0x40C]
	mov dword ptr [ebx+0x40C],ecx
	mov edx,dword ptr [ebp+0x410]
	mov dword ptr [ebx+0x410],edx
	mov eax,dword ptr [ebp+0x414]
	mov dword ptr [ebx+0x414],eax
	mov ecx,dword ptr [ebp+0x418]
	mov dword ptr [ebx+0x418],ecx
	mov eax,ebx
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
// SKILLLEVELDATA::_ZtlSecureGet_nMoneyCon
__SUB_CLASS0(002EE720, __fastcall, 21132,  SKILLLEVELDATA, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xB4]
	push eax
	add ecx,0xAC
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// SKILLENTRY::GetAfterimageUOL
__SUB_CLASS_THIS(00037130, __thiscall, 20512,  SKILLENTRY, Ztl_bstr_t*, Ztl_bstr_t*, unsigned char) {
__asm {

 Block0:
	push ecx
	movzx eax,byte ptr [esp+0xC]
	push esi
	push eax
	mov esi,ecx
	mov dword ptr [esp+8],0
	call SKILLENTRY::GetCharLevelData
	test eax,eax
	je Block2

 Block1:
	add eax,4
	jmp Block3

 Block2:
	lea eax,[esi+0x214]

 Block3:
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],eax
	test eax,eax
	je Block5

 Block4:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// SKILLLEVELDATA::~SKILLLEVELDATA
_SUB_EXCEPTION_HANDLER(2FD8C0)
__SUB_CLASS_THIS0(002FD8C0, __thiscall, 21157,  SKILLLEVELDATA, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2FD8C0
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
	lea ecx,[esi+0x210]
	mov dword ptr [esp+0x14],2
	call ZArray<Ztl_bstr_t>::RemoveAll
	mov ecx,dword ptr [esi+0x20C]
	test ecx,ecx
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x20C],0

 Block2:
	mov ecx,dword ptr [esi+0x208]
	test ecx,ecx
	je Block4

 Block3:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x208],0

 Block4:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block6

 Block5:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CSkillInfo::LoadMCGuardian
_SUB_EXCEPTION_HANDLER(2FF0D0)
__SUB_CLASS_THIS0(002FF0D0, __thiscall, 21687,  CSkillInfo, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2FF0D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp+0x34],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	xor edi,edi
	push eax
	mov dword ptr [ebp-4],edi
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],1
	call esi
	lea eax,[ebp+0x20]
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
	lea ecx,[ebp+0x10]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	mov bl,2
	push offset _S_SKILLMCGUARDIANI
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x40]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp+0x68],edi
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
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x40],bx
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp-0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x20],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x10],bx
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ecx,dword ptr [ebp+0x68]
	cmp ecx,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[ebp+0x44]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],9
	mov dword ptr [ebp+0x5C],edi
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea ecx,[ebp+0x5C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0xB
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea eax,[ebp+0x48]
	push eax
	call esi
	mov byte ptr [ebp-4],0xC
	mov dword ptr [ebp+0x30],edi
	nop

 Block31:
	mov esi,dword ptr [ebp+0x5C]
	xor ebx,ebx
	cmp esi,ebx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0x30]
	push edx
	lea eax,[ebp+0x48]
	push eax
	push 1
	push esi
	call ecx
	cmp eax,ebx
	jne Block84

 Block34:
	push ebx
	mov dword ptr [ebp+0x3C],ebx
	call ZRefCounted_AllocHelper<ZRefCountedDummy<MCGUARDIANENTRY>>::call
	lea edi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [ebp+0x3C],edi
	lea edx,[ebp+0x48]
	push edx
	lea eax,[ebp+0x6C]
	push eax
	mov byte ptr [ebp-4],0xD
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [ebp+0x6C]
	cmp eax,ebx
	je Block36

 Block35:
	mov eax,dword ptr [eax]
	jmp Block37

 Block36:
	xor eax,eax

 Block37:
	push eax
	call __wtoi
	add esp,4
	push ebx
	push ebx
	push ecx
	mov ecx,dword ptr [ebp+0x6C]
	mov dword ptr [ebp+0x64],eax
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x6C]
	mov dword ptr [ebp+0x58],esp
	cmp eax,ebx
	je Block39

 Block38:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block39:
	mov ecx,dword ptr [ebp+0x68]
	lea edx,[ebp]
	mov byte ptr [ebp-4],0xF
	push edx
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x58],esi
	cmp eax,ebx
	je Block43

 Block40:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x40]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x40]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x58],esi
	jge Block43

 Block41:
	cmp eax,0x80004002
	je Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x12
	jne Block46

 Block44:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,ebx
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_NAME
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x13
	cmp esi,ebx
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	lea ecx,[ebp-0x20]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x14
	jne Block51

 Block50:
	mov eax,dword ptr [eax+8]
	jmp Block52

 Block51:
	mov eax,offset _S___3

 Block52:
	push 0xFFFFFFFF
	push eax
	mov ecx,edi
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0x12
	jne Block55

 Block53:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	cmp eax,ebx
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block56:
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_DESC__1
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x30]
	push ecx
	mov byte ptr [ebp-4],0x15
	mov ecx,esi
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x16
	jne Block58

 Block57:
	mov eax,dword ptr [eax+8]
	jmp Block59

 Block58:
	mov eax,offset _S___3

 Block59:
	push 0xFFFFFFFF
	lea ecx,[edi+4]
	push eax
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],0x12
	jne Block62

 Block60:
	mov eax,dword ptr [ebp-0x28]
	xor edx,edx
	mov word ptr [ebp-0x30],dx
	cmp eax,ebx
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	push ebx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_SPENDCP
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x50]
	push ecx
	mov byte ptr [ebp-4],0x17
	mov ecx,esi
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x18
	call get_int32
	add esp,8
	mov dword ptr [edi+8],eax
	cmp word ptr [ebp-0x50],8
	mov byte ptr [ebp-4],0x12
	jne Block66

 Block64:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	cmp eax,ebx
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block67:
	lea ecx,[ebp+0x38]
	push ecx
	mov ecx,dword ptr [ebp+0x34]
	lea edx,[ebp+0x64]
	push edx
	add ecx,0x68
	call ZMap<long, ZRef<MCGUARDIANENTRY>, long>::Insert
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0xE
	call ecx
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0xD
	cmp eax,ebx
	je Block76

 Block68:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block75

 Block69:
	cmp esi,ebx
	je Block75

 Block70:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block72

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block72:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block74

 Block73:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block74:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block75:
	mov dword ptr [ebp+0x6C],ebx

 Block76:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0xC
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block79

 Block77:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block79

 Block78:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block79:
	cmp word ptr [ebp+0x48],8
	mov dword ptr [ebp+0x3C],0
	jne Block82

 Block80:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block31

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block82:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block31

 Block83:
	push eax
	call _com_issue_error

 Block84:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0xB
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	cmp eax,ebx
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],8
	call eax
	mov eax,dword ptr [ebp+0x68]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,1
	jmp Block92

 Block92:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add ebp,0x70
	mov esp,ebp
	pop ebp
	ret
}
}
// CSkillInfo::GetPureSkillLevel
__SUB_CLASS_THIS(002F1C80, __thiscall, 21700,  CSkillInfo, long, const CharacterData&, long, const SKILLENTRY**) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push ebp
	push esi
	mov esi,dword ptr [esp+0x18]
	push edi
	mov ebp,ecx
	mov edi,edi

 Block1:
	test esi,esi
	je Block3

 Block2:
	mov edi,dword ptr [esi]
	test edi,edi
	jne Block4

 Block3:
	push ebx
	mov ecx,ebp
	call CSkillInfo::GetSkill
	mov edi,eax

 Block4:
	test esi,esi
	je Block7

 Block5:
	cmp dword ptr [esi],0
	jne Block7

 Block6:
	mov dword ptr [esi],edi

 Block7:
	test edi,edi
	je Block10

 Block8:
	cmp ebx,0x41EEE9
	jne Block11

 Block9:
	mov ebx,0x41EEE8
	xor esi,esi
	mov dword ptr [esp+0x18],ebx
	jmp Block1

 Block10:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 0xC

 Block11:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	add ecx,0x53D
	mov dword ptr [esp+0x24],0
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block10

 Block12:
	mov ecx,edi
	call SKILLENTRY::GetMaxLevel
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,eax
	jge Block14

 Block13:
	mov eax,ecx

 Block14:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC
}
}
// SKILLLEVELDATA::LoadLevelDataByCommon
_SUB_EXCEPTION_HANDLER(2FF7F0)
__SUB_CLASS_THIS(002FF7F0, __thiscall, 21146,  SKILLLEVELDATA, int32_t, long, const SKILLLEVELDATACommon*, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2FF7F0
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
	mov ebp,ecx
	xor edi,edi
	mov dword ptr [esp+0x58],edi
	mov dword ptr [ebp+0x418],edi
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [esp+0x60]
	push eax
	lea ecx,[esp+0x18]
	push offset _S_07D
	push ecx
	mov byte ptr [esp+0x64],2
	call ZXString<char>::Format
	add esp,0xC
	cmp dword ptr [esp+0x6C],edi
	sete al
	test al,al
	je Block22

 Block1:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push edx
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x5C],3
	call esi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	push edi
	push edi
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x8E7
	mov bl,4
	push edx
	mov byte ptr [esp+0x74],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x6C],5
	cmp dword ptr [_D_G_RM],edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea eax,[esp+0x54]
	mov byte ptr [esp+0x6C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x60],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x70]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov esi,8
	mov byte ptr [esp+0x58],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x40],si
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,edi
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[esp+0x40]
	push edx
	call ebx

 Block14:
	mov byte ptr [esp+0x58],3
	cmp word ptr [esp+0x20],si
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x20]
	push ecx
	call ebx

 Block18:
	mov byte ptr [esp+0x58],2
	cmp word ptr [esp+0x30],si
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x30]
	push eax
	call ebx

 Block22:
	mov esi,dword ptr [esp+0x68]
	mov ebx,dword ptr [esp+0x64]
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push ebx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+4]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0xC],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x10]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x18],eax
	mov ecx,esp
	lea eax,[ebx+8]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x1C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0xC]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x24],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x28]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x30],eax
	mov ecx,esp
	lea eax,[ebx+0x10]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x34]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x14]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x3C],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x40]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x48],eax
	mov ecx,esp
	lea eax,[ebx+0x84]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x190]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x88]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x198],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x19C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x1A4],eax
	mov ecx,esp
	lea eax,[ebx+0x8C]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x1A8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x90]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x1B0],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x1B4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x1BC],eax
	mov ecx,esp
	lea eax,[ebx+0x94]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x1C0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x18]
	mov dword ptr [ebp+0x1C8],eax
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ecx],edi
	push edx
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x4C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x54],eax
	mov ecx,esp
	lea eax,[ebx+0x1C]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x58]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x20]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x60],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x64]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x6C],eax
	mov ecx,esp
	lea eax,[ebx+0x24]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x70]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x28]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x78],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x7C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x84],eax
	mov ecx,esp
	lea eax,[ebx+0x2C]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x88]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x90],eax
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	lea edx,[ebx+0x30]
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x94]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x9C],eax
	mov ecx,esp
	lea eax,[ebx+0x34]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0xA0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x38]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0xA8],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0xAC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0xB4],eax
	mov ecx,esp
	lea eax,[ebx+0x3C]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0xB8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x40]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0xC0],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0xC4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0xCC],eax
	mov ecx,esp
	lea eax,[ebx+0x44]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0xD0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [ebp+0xD8],eax
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x48]
	mov dword ptr [esp+0x6C],esp
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0xDC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0xE4],eax
	mov ecx,esp
	lea eax,[ebx+0x4C]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0xE8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x50]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0xF0],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0xF4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0xFC],eax
	mov ecx,esp
	lea eax,[ebx+0x54]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x100]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x58]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x108],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x10C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x114],eax
	mov ecx,esp
	lea eax,[ebx+0x5C]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x118]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x98]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x120],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x1FC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x204],eax
	mov ecx,esp
	lea eax,[ebx+0x70]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x154]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x60]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x15C],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x124]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x12C],eax
	mov ecx,esp
	lea eax,[ebx+0x64]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x130]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x68]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x138],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x13C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x144],eax
	mov ecx,esp
	lea eax,[ebx+0x6C]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	cmp eax,edi
	jle Block43

 Block23:
	cmp eax,0x64
	mov ecx,eax
	jl Block25

 Block24:
	mov ecx,0x64

 Block25:
	lea edx,[ebp+0x148]
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x74]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x150],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x160]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x168],eax
	mov ecx,esp
	lea eax,[ebx+0x78]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x16C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x7C]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x174],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x178]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x180],eax
	mov ecx,esp
	lea eax,[ebx+0x9C]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x214]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push ecx
	mov dword ptr [ebp+0x21C],eax
	mov eax,dword ptr [ebx+0x80]
	mov dword ptr [esp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	call get_action_code_from_name
	add esp,4
	lea edx,[ebp+0x184]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0xD0]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x18C],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x220]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x228],eax
	mov ecx,esp
	lea eax,[ebx+0xD4]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x22C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0xD8]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x234],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x238]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x240],eax
	mov ecx,esp
	lea eax,[ebx+0xDC]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x244]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0xE0]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x24C],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x250]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x258],eax
	mov ecx,esp
	lea eax,[ebx+0xE4]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x25C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0xE8]
	mov dword ptr [ebp+0x264],eax
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ecx],edi
	push edx
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x268]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x270],eax
	mov ecx,esp
	lea eax,[ebx+0xEC]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x274]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0xF0]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x27C],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x280]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x288],eax
	mov ecx,esp
	lea eax,[ebx+0xF4]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x28C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0xF8]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x294],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x298]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x2A0],eax
	mov ecx,esp
	lea eax,[ebx+0xFC]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x2A4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x2AC],eax
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	lea edx,[ebx+0x100]
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x2B0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x2B8],eax
	mov ecx,esp
	lea eax,[ebx+0x104]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x2BC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x108]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x2C4],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x2C8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x2D0],eax
	mov ecx,esp
	lea eax,[ebx+0x10C]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x2D4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x110]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x2DC],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x2E0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x2E8],eax
	mov ecx,esp
	lea eax,[ebx+0x114]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x2EC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [ebp+0x2F4],eax
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x118]
	mov dword ptr [esp+0x6C],esp
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x2F8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x300],eax
	mov ecx,esp
	lea eax,[ebx+0x11C]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x304]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x120]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x30C],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonDataULONG
	lea edx,[ebp+0x310]
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x318],eax
	mov ecx,esp
	lea eax,[ebx+0x124]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonDataULONG
	lea edx,[ebp+0x31C]
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x128]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x324],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x328]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x330],eax
	mov ecx,esp
	lea eax,[ebx+0x12C]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x334]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x130]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x33C],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x340]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x348],eax
	mov ecx,esp
	lea eax,[ebx+0x134]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x34C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x138]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x354],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x358]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x360],eax
	mov ecx,esp
	lea eax,[ebx+0x13C]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x364]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x140]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x36C],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x370]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x378],eax
	mov ecx,esp
	lea eax,[ebx+0x144]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x37C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x148]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x384],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x388]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x390],eax
	mov ecx,esp
	lea eax,[ebx+0x14C]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x394]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x150]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x39C],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x3A0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x3A8],eax
	mov ecx,esp
	lea eax,[ebx+0x154]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x3AC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x158]
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ebp+0x3B4],eax
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x3B8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	lea esi,[ebx+0xA0]
	lea edi,[ebp+0x1CC]
	mov ecx,0xC
	mov dword ptr [ebp+0x3C0],eax
	rep movsd
	mov esi,dword ptr [esp+0x68]
	push esi
	push ecx
	mov ecx,esp
	lea eax,[ebx+0x15C]
	mov dword ptr [esp+0x70],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x3D0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x160]
	mov dword ptr [esp+0x70],esp
	mov dword ptr [ebp+0x3D8],eax
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x3DC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov dword ptr [ebp+0x3E4],eax
	mov ecx,esp
	lea eax,[ebx+0x164]
	mov dword ptr [esp+0x70],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x3E8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebx+0x168]
	mov dword ptr [esp+0x70],esp
	mov dword ptr [ebp+0x3F0],eax
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonData
	lea edx,[ebp+0x3F4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x70],esp
	add ebx,0x16C
	mov dword ptr [ebp+0x3FC],eax
	push ebx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,ebp
	call SKILLLEVELDATA::GetParsedCommonDataFloat
	fstp dword ptr [esp+0x68]
	fld dword ptr [esp+0x68]
	lea ecx,[ebp+0x400]
	push ecx
	fstp dword ptr [esp]
	call _ZtlSecureTearHelper<float>::call
	cmp dword ptr [esp+0x60],0x1407329
	mov dword ptr [ebp+0x408],eax
	jne Block27

 Block26:
	mov ecx,dword ptr [esi*4+_D_AMAGICATTACKACTI+236]
	lea edx,[ebp+0x160]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [ebp+0x168],eax

 Block27:
	push ecx
	mov ecx,esp
	lea eax,[esp+0x18]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push ecx
	mov ecx,dword ptr [esp+0x74]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x70],esp
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block29:
	lea ecx,[esp+0x68]
	push ecx
	mov ecx,ebp
	call SKILLLEVELDATA::GetCommonHelpString
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0x5C],7
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [esp+0x68]
	lea edx,[esp+0x68]
	cmp ebp,edx
	je Block34

 Block30:
	mov ecx,dword ptr [ebp]
	test ecx,ecx
	je Block32

 Block31:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp],0

 Block32:
	mov dword ptr [ebp],esi
	test esi,esi
	je Block36

 Block33:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block34:
	test esi,esi
	je Block36

 Block35:
	mov ecx,esi
	call _xbstr_t::Data_t::Release

 Block36:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],2
	test eax,eax
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov ebx,1
	mov ecx,ebp
	mov dword ptr [ebp+0x414],ebx
	call SKILLLEVELDATA::CalcCrc
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x58],bl
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test eax,eax
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 0x10

 Block43:
	xor ecx,ecx
	jmp Block25
}
}
// SKILLENTRY::GetSpecialUOL
__SUB_CLASS_THIS(00017F60, __thiscall, 20518,  SKILLENTRY, Ztl_bstr_t*, Ztl_bstr_t*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	push esi
	mov esi,ecx
	mov dword ptr [esp+4],0
	test eax,eax
	je Block3

 Block1:
	push eax
	call SKILLENTRY::GetCharLevelData
	test eax,eax
	je Block3

 Block2:
	add eax,0x10
	jmp Block4

 Block3:
	lea eax,[esi+0x24C]

 Block4:
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],eax
	test eax,eax
	je Block6

 Block5:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// SKILLENTRY::GetHitUOLByIndex
__SUB_CLASS_THIS(00249F50, __thiscall, 20522,  SKILLENTRY, Ztl_bstr_t*, Ztl_bstr_t*, unsigned char, long, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0x10]
	push esi
	push eax
	mov esi,ecx
	mov dword ptr [esp+8],0
	call SKILLENTRY::GetLevelData
	lea ecx,[eax+0x210]
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block2

 Block1:
	cmp dword ptr [eax-4],0
	jne Block4

 Block2:
	movzx ecx,byte ptr [esp+0x10]
	push ecx
	mov ecx,esi
	call SKILLENTRY::GetCharLevelData
	mov ecx,eax
	test eax,eax
	jne Block4

 Block3:
	lea ecx,[esi+0x228]

 Block4:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block9

 Block5:
	cmp dword ptr [eax-4],0
	je Block9

 Block6:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax+edx*4]
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],eax
	test eax,eax
	je Block8

 Block7:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov eax,esi
	pop esi
	pop ecx
	ret 0x10

 Block9:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],0
	pop esi
	pop ecx
	ret 0x10
}
}
// CSkillInfo::GetItemSkill
_SUB_EXCEPTION_HANDLER(2F3200)
__SUB_CLASS_THIS(002F3200, __thiscall, 21721,  CSkillInfo, const ITEMSKILLENTRY*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F3200
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
	mov dword ptr [esp+0x14],0
	lea eax,[esp+0x10]
	push eax
	lea edx,[esp+0x2C]
	push edx
	add ecx,0x98
	mov dword ptr [esp+0x28],0
	call ZMap<long, ZRef<ITEMSKILLENTRY>, long>::GetAt
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test edi,edi
	je Block4

 Block1:
	lea esi,[edi-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov eax,edi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// SKILLLEVELDATA::LoadLevelData
_SUB_EXCEPTION_HANDLER(300990)
__SUB_CLASS_THIS(00300990, __thiscall, 21144,  SKILLLEVELDATA, int32_t, long, NakedParam<_x_com_ptr<IWzProperty>>, const SKILLLEVELDATACommon*, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_300990
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x98
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xAC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0xB4],ebx
	mov dword ptr [esi+0x418],ebx
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x3C],ebx
	mov edi,dword ptr [esp+0xBC]
	push edi
	lea eax,[esp+0x40]
	push offset _S_07D
	push eax
	mov byte ptr [esp+0xC0],3
	call ZXString<char>::Format
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,0xC
	cmp dword ptr [esp+0xCC],ebx
	mov dword ptr [esp+0x34],eax
	sete al
	lea ebp,[ebx+8]
	test al,al
	je Block22

 Block1:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push ecx
	call edi
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea eax,[esp+0x58]
	push eax
	mov byte ptr [esp+0xB8],4
	call edi
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	push 0
	push 0
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x64]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x8E7
	mov bl,5
	push ecx
	mov byte ptr [esp+0xD0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC8],6
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x7C]
	mov byte ptr [esp+0xC8],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xD0]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov byte ptr [esp+0xB4],bl
	cmp word ptr [esp+0x68],bp
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov byte ptr [esp+0xB4],4
	cmp word ptr [esp+0x58],bp
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [esp+0xB4],3
	cmp word ptr [esp+0x14],bp
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x986
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC4]
	mov byte ptr [esp+0xB8],8
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x6C]
	push edx
	mov byte ptr [esp+0xBC],3
	call IWzProperty::Getitem
	mov byte ptr [esp+0xB4],9
	cmp word ptr [eax],bp
	jne Block26

 Block25:
	mov edi,dword ptr [eax+8]
	jmp Block27

 Block26:
	mov edi,offset _S___3

 Block27:
	mov eax,ebp
	push edi
	mov word ptr [esp+0x80],ax
	call ZComAPI::ZComSysAllocString
	xor ebx,ebx
	add esp,4
	mov dword ptr [esp+0x84],eax
	cmp eax,ebx
	jne Block30

 Block28:
	cmp edi,ebx
	je Block30

 Block29:
	push 0x8007000E
	call _com_issue_error

 Block30:
	mov byte ptr [esp+0xB4],0xB
	cmp word ptr [esp+0x68],bp
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	cmp eax,ebx
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	push ecx
	lea eax,[esp+0x80]
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_3
	push ecx
	mov ecx,esp
	lea edx,[esp+0x44]
	mov dword ptr [esp+0x34],esp
	push edx
	mov byte ptr [esp+0xC0],0xC
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	push ecx
	mov ecx,dword ptr [esp+0xD8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xD8]
	mov dword ptr [esp+0x38],esp
	cmp eax,ebx
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block36:
	lea ecx,[esp+0x84]
	push ecx
	mov byte ptr [esp+0xC4],0xB
	call get_labeled_string_1
	add esp,0x10
	mov eax,dword ptr [eax]
	mov edx,ebp
	push eax
	mov byte ptr [esp+0xB8],0xD
	mov word ptr [esp+0x90],dx
	call ZComAPI::ZtlConvertStringToBSTR
	mov dword ptr [esp+0x94],eax
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0xB4],0xF
	cmp eax,ebx
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	lea eax,[esp+0x8C]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	call DetachBSTR
	mov edi,eax
	add esp,8
	cmp esi,edi
	je Block43

 Block39:
	mov ecx,dword ptr [esi]
	cmp ecx,ebx
	je Block41

 Block40:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],ebx

 Block41:
	mov eax,dword ptr [edi]
	mov dword ptr [esi],eax
	cmp eax,ebx
	je Block43

 Block42:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block43:
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	je Block45

 Block44:
	call _xbstr_t::Data_t::Release

 Block45:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A9A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC4]
	mov byte ptr [esp+0xB8],0x10
	cmp ecx,ebx
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0xBC],0xF
	call IWzProperty::Getitem
	mov byte ptr [esp+0xB4],0x11
	cmp word ptr [eax],bp
	jne Block49

 Block48:
	mov eax,dword ptr [eax+8]
	jmp Block50

 Block49:
	mov eax,offset _S___3

 Block50:
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	call get_action_code_from_name
	add esp,4
	lea edx,[esi+0x184]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x18C],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block56

 Block51:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block53

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block53:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block54:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x7D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x12
	cmp ecx,ebx
	jne Block57

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x14]
	push edx
	call edi
	jmp Block54

 Block57:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x13
	call get_int32
	add esp,8
	lea edx,[esi+4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block61:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x7D4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x14
	cmp ecx,ebx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x15
	call get_int32
	add esp,8
	lea edx,[esi+0x10]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x18],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block67:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x7D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x16
	cmp ecx,ebx
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x17
	call get_int32
	add esp,8
	lea edx,[esi+0x1C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x24],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block73:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x7D6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x18
	cmp ecx,ebx
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x19
	call get_int32
	add esp,8
	lea edx,[esi+0x28]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x30],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block79:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x7D7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x1A
	cmp ecx,ebx
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x1B
	call get_int32
	add esp,8
	lea edx,[esi+0x34]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3C],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block84

 Block82:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block85:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x7D8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x1C
	cmp ecx,ebx
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x1D
	call get_int32
	add esp,8
	lea edx,[esi+0x40]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x48],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block91:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x178E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x1E
	cmp ecx,ebx
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x1F
	call get_int32
	add esp,8
	lea edx,[esi+0x190]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x198],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block97:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x178F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x20
	cmp ecx,ebx
	jne Block99

 Block98:
	push 0x80004003
	call _com_issue_error

 Block99:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x21
	call get_int32
	add esp,8
	lea edx,[esi+0x19C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1A4],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block102

 Block100:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block103:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1790
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x22
	cmp ecx,ebx
	jne Block105

 Block104:
	push 0x80004003
	call _com_issue_error

 Block105:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x23
	call get_int32
	add esp,8
	lea edx,[esi+0x1A8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1B0],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block108

 Block106:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block109:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1791
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x24
	cmp ecx,ebx
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x25
	call get_int32
	add esp,8
	lea edx,[esi+0x1B4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1BC],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block114

 Block112:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block115:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1792
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x26
	cmp ecx,ebx
	jne Block117

 Block116:
	push 0x80004003
	call _com_issue_error

 Block117:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x27
	call get_int32
	add esp,8
	lea edx,[esi+0x1C0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1C8],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block120

 Block118:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block121:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x681
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x28
	cmp ecx,ebx
	jne Block123

 Block122:
	push 0x80004003
	call _com_issue_error

 Block123:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x29
	call get_int32
	add esp,8
	lea edx,[esi+0x4C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x54],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block127:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x682
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x2A
	cmp ecx,ebx
	jne Block129

 Block128:
	push 0x80004003
	call _com_issue_error

 Block129:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x2B
	call get_int32
	add esp,8
	lea edx,[esi+0x58]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x60],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block132

 Block130:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block133:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x7D9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x2C
	cmp ecx,ebx
	jne Block135

 Block134:
	push 0x80004003
	call _com_issue_error

 Block135:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x2D
	call get_int32
	add esp,8
	lea edx,[esi+0x64]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x6C],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block138

 Block136:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block139:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x67A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x2E
	cmp ecx,ebx
	jne Block141

 Block140:
	push 0x80004003
	call _com_issue_error

 Block141:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x2F
	call get_int32
	add esp,8
	lea edx,[esi+0x70]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x78],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block144

 Block142:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block145:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1ABC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x30
	cmp ecx,ebx
	jne Block147

 Block146:
	push 0x80004003
	call _com_issue_error

 Block147:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x31
	call get_int32
	add esp,8
	lea edx,[esi+0x7C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x84],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block150

 Block148:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block151:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x105B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x32
	cmp ecx,ebx
	jne Block153

 Block152:
	push 0x80004003
	call _com_issue_error

 Block153:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x33
	call get_int32
	add esp,8
	lea edx,[esi+0x88]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x90],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block156

 Block154:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block157:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x7DA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x34
	cmp ecx,ebx
	jne Block159

 Block158:
	push 0x80004003
	call _com_issue_error

 Block159:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x35
	call get_int32
	add esp,8
	lea edx,[esi+0x94]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x9C],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block162

 Block160:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block163:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x7DB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x36
	cmp ecx,ebx
	jne Block165

 Block164:
	push 0x80004003
	call _com_issue_error

 Block165:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x37
	call get_int32
	add esp,8
	lea edx,[esi+0xA0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA8],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block168

 Block166:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block169:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x7DC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x38
	cmp ecx,ebx
	jne Block171

 Block170:
	push 0x80004003
	call _com_issue_error

 Block171:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x39
	call get_int32
	add esp,8
	lea edx,[esi+0xAC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xB4],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block174

 Block172:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block175:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x7DD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x3A
	cmp ecx,ebx
	jne Block177

 Block176:
	push 0x80004003
	call _com_issue_error

 Block177:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x3B
	call get_int32
	add esp,8
	lea edx,[esi+0xB8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC0],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block180

 Block178:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block181:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x7DE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x3C
	cmp ecx,ebx
	jne Block183

 Block182:
	push 0x80004003
	call _com_issue_error

 Block183:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x3D
	call get_int32
	add esp,8
	lea edx,[esi+0xC4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xCC],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block186

 Block184:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block187

 Block185:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block187

 Block186:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block187:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x60C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x3E
	cmp ecx,ebx
	jne Block189

 Block188:
	push 0x80004003
	call _com_issue_error

 Block189:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x3F
	call get_int32
	add esp,8
	lea edx,[esi+0xD0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD8],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block192

 Block190:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block193:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xE33
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x40
	cmp ecx,ebx
	jne Block195

 Block194:
	push 0x80004003
	call _com_issue_error

 Block195:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x41
	call get_int32
	add esp,8
	lea edx,[esi+0xDC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xE4],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block198

 Block196:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block199

 Block197:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block199

 Block198:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block199:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0xB86
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x42
	cmp ecx,ebx
	jne Block201

 Block200:
	push 0x80004003
	call _com_issue_error

 Block201:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x43
	call get_int32
	add esp,8
	lea edx,[esi+0xE8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xF0],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block204

 Block202:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block205

 Block203:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block205

 Block204:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block205:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x963
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x44
	cmp ecx,ebx
	jne Block207

 Block206:
	push 0x80004003
	call _com_issue_error

 Block207:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x45
	call get_int32
	add esp,8
	lea edx,[esi+0xF4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xFC],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block210

 Block208:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block211:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1681
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x46
	cmp ecx,ebx
	jne Block213

 Block212:
	push 0x80004003
	call _com_issue_error

 Block213:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x47
	call get_int32
	add esp,8
	lea edx,[esi+0x100]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x108],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block216

 Block214:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block217

 Block215:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block217

 Block216:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block217:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x964
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x48
	cmp ecx,ebx
	jne Block219

 Block218:
	push 0x80004003
	call _com_issue_error

 Block219:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x49
	call get_int32
	add esp,8
	lea edx,[esi+0x10C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x114],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block222

 Block220:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block223

 Block221:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block223

 Block222:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block223:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1682
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x4A
	cmp ecx,ebx
	jne Block225

 Block224:
	push 0x80004003
	call _com_issue_error

 Block225:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x4B
	call get_int32
	add esp,8
	lea edx,[esi+0x118]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x120],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block228

 Block226:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block229

 Block227:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block229

 Block228:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block229:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x690
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x4C
	cmp ecx,ebx
	jne Block231

 Block230:
	push 0x80004003
	call _com_issue_error

 Block231:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x4D
	call get_int32
	add esp,8
	lea edx,[esi+0x1FC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x204],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block234

 Block232:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block235

 Block233:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block235

 Block234:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block235:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x691
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x4E
	cmp ecx,ebx
	jne Block237

 Block236:
	push 0x80004003
	call _com_issue_error

 Block237:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x4F
	call get_int32
	add esp,8
	lea edx,[esi+0x154]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x15C],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block240

 Block238:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block241

 Block239:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block241

 Block240:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block241:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x692
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x50
	cmp ecx,ebx
	jne Block243

 Block242:
	push 0x80004003
	call _com_issue_error

 Block243:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x51
	call get_int32
	add esp,8
	lea edx,[esi+0x124]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x12C],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block246

 Block244:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block247

 Block245:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block247

 Block246:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block247:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x693
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x52
	cmp ecx,ebx
	jne Block249

 Block248:
	push 0x80004003
	call _com_issue_error

 Block249:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x53
	call get_int32
	add esp,8
	lea edx,[esi+0x130]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x138],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block252

 Block250:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block253

 Block251:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block253

 Block252:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block253:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x694
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x54
	cmp ecx,ebx
	jne Block255

 Block254:
	push 0x80004003
	call _com_issue_error

 Block255:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x55
	call get_int32
	add esp,8
	lea edx,[esi+0x13C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x144],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block258

 Block256:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block259

 Block257:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block259

 Block258:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block259:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x695
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x56
	cmp ecx,ebx
	jne Block261

 Block260:
	push 0x80004003
	call _com_issue_error

 Block261:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x57
	call get_int32
	add esp,8
	cmp eax,ebx
	jle Block267

 Block262:
	cmp eax,0x64
	mov ecx,eax
	jl Block264

 Block263:
	mov ecx,0x64

 Block264:
	lea edx,[esi+0x148]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x150],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block268

 Block265:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block269

 Block266:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block269

 Block267:
	xor ecx,ecx
	jmp Block264

 Block268:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block269:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x3E5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x58
	cmp ecx,ebx
	jne Block271

 Block270:
	push 0x80004003
	call _com_issue_error

 Block271:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x59
	call get_int32
	add esp,8
	lea edx,[esi+0x160]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x168],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block274

 Block272:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block275

 Block273:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block275

 Block274:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block275:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x3E6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x5A
	cmp ecx,ebx
	jne Block277

 Block276:
	push 0x80004003
	call _com_issue_error

 Block277:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x5B
	call get_int32
	add esp,8
	lea edx,[esi+0x16C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x174],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block280

 Block278:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block281

 Block279:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block281

 Block280:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block281:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x3E7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x5C
	cmp ecx,ebx
	jne Block283

 Block282:
	push 0x80004003
	call _com_issue_error

 Block283:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x5D
	call get_int32
	add esp,8
	lea edx,[esi+0x178]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x180],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block286

 Block284:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block287

 Block285:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block287

 Block286:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block287:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0xE34
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x5E
	cmp ecx,ebx
	jne Block289

 Block288:
	push 0x80004003
	call _com_issue_error

 Block289:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x5F
	call get_int32
	add esp,8
	lea edx,[esi+0x214]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x21C],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block292

 Block290:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block293

 Block291:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block293

 Block292:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block293:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1927
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x60
	cmp ecx,ebx
	jne Block295

 Block294:
	push 0x80004003
	call _com_issue_error

 Block295:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x61
	call get_int32
	add esp,8
	lea edx,[esi+0x220]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x228],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block298

 Block296:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block299

 Block297:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block299

 Block298:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block299:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1928
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x62
	cmp ecx,ebx
	jne Block301

 Block300:
	push 0x80004003
	call _com_issue_error

 Block301:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x63
	call get_int32
	add esp,8
	lea edx,[esi+0x22C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x234],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block304

 Block302:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block305

 Block303:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block305

 Block304:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block305:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1903
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x64
	cmp ecx,ebx
	jne Block307

 Block306:
	push 0x80004003
	call _com_issue_error

 Block307:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x65
	call get_int32
	add esp,8
	lea edx,[esi+0x238]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x240],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block310

 Block308:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block311

 Block309:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block311

 Block310:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block311:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1905
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x66
	cmp ecx,ebx
	jne Block313

 Block312:
	push 0x80004003
	call _com_issue_error

 Block313:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x67
	call get_int32
	add esp,8
	lea edx,[esi+0x244]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x24C],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block316

 Block314:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block317

 Block315:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block317

 Block316:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block317:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1904
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x68
	cmp ecx,ebx
	jne Block319

 Block318:
	push 0x80004003
	call _com_issue_error

 Block319:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x69
	call get_int32
	add esp,8
	lea edx,[esi+0x250]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x258],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block322

 Block320:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block323

 Block321:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block323

 Block322:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block323:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x18D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x6A
	cmp ecx,ebx
	jne Block325

 Block324:
	push 0x80004003
	call _com_issue_error

 Block325:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x6B
	call get_int32
	add esp,8
	lea edx,[esi+0x25C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x264],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block328

 Block326:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block329

 Block327:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block329

 Block328:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block329:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1911
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x6C
	cmp ecx,ebx
	jne Block331

 Block330:
	push 0x80004003
	call _com_issue_error

 Block331:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x6D
	call get_int32
	add esp,8
	lea edx,[esi+0x268]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x270],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block334

 Block332:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block335

 Block333:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block335

 Block334:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block335:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x18E8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x6E
	cmp ecx,ebx
	jne Block337

 Block336:
	push 0x80004003
	call _com_issue_error

 Block337:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x6F
	call get_int32
	add esp,8
	lea edx,[esi+0x274]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x27C],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block340

 Block338:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block341

 Block339:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block341

 Block340:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block341:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1910
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x70
	cmp ecx,ebx
	jne Block343

 Block342:
	push 0x80004003
	call _com_issue_error

 Block343:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x71
	call get_int32
	add esp,8
	lea edx,[esi+0x280]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x288],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block346

 Block344:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block347

 Block345:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block347

 Block346:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block347:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1934
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x72
	cmp ecx,ebx
	jne Block349

 Block348:
	push 0x80004003
	call _com_issue_error

 Block349:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x73
	call get_int32
	add esp,8
	lea edx,[esi+0x28C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x294],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block352

 Block350:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block353

 Block351:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block353

 Block352:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block353:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1922
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x74
	cmp ecx,ebx
	jne Block355

 Block354:
	push 0x80004003
	call _com_issue_error

 Block355:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x75
	call get_int32
	add esp,8
	lea edx,[esi+0x298]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2A0],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block358

 Block356:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block359

 Block357:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block359

 Block358:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block359:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1935
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x76
	cmp ecx,ebx
	jne Block361

 Block360:
	push 0x80004003
	call _com_issue_error

 Block361:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x77
	call get_int32
	add esp,8
	lea edx,[esi+0x2A4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2AC],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block364

 Block362:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block365

 Block363:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block365

 Block364:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block365:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1923
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x78
	cmp ecx,ebx
	jne Block367

 Block366:
	push 0x80004003
	call _com_issue_error

 Block367:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x79
	call get_int32
	add esp,8
	lea edx,[esi+0x2B0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2B8],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block370

 Block368:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block371

 Block369:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block371

 Block370:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block371:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1906
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x7A
	cmp ecx,ebx
	jne Block373

 Block372:
	push 0x80004003
	call _com_issue_error

 Block373:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x7B
	call get_int32
	add esp,8
	lea edx,[esi+0x2BC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2C4],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block376

 Block374:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block377

 Block375:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block377

 Block376:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block377:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1936
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x7C
	cmp ecx,ebx
	jne Block379

 Block378:
	push 0x80004003
	call _com_issue_error

 Block379:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x7D
	call get_int32
	add esp,8
	lea edx,[esi+0x2C8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2D0],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block382

 Block380:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block383

 Block381:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block383

 Block382:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block383:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1924
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x7E
	cmp ecx,ebx
	jne Block385

 Block384:
	push 0x80004003
	call _com_issue_error

 Block385:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x7F
	call get_int32
	add esp,8
	lea edx,[esi+0x2D4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2DC],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block388

 Block386:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block389

 Block387:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block389

 Block388:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block389:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1931
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x80
	cmp ecx,ebx
	jne Block391

 Block390:
	push 0x80004003
	call _com_issue_error

 Block391:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x81
	call get_int32
	add esp,8
	lea edx,[esi+0x2E0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2E8],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block394

 Block392:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block395

 Block393:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block395

 Block394:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block395:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1920
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x82
	cmp ecx,ebx
	jne Block397

 Block396:
	push 0x80004003
	call _com_issue_error

 Block397:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x83
	call get_int32
	add esp,8
	lea edx,[esi+0x2EC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2F4],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block400

 Block398:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block401

 Block399:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block401

 Block400:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block401:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1912
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x84
	cmp ecx,ebx
	jne Block403

 Block402:
	push 0x80004003
	call _com_issue_error

 Block403:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x85
	call get_int32
	add esp,8
	lea edx,[esi+0x2F8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x300],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block406

 Block404:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block407

 Block405:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block407

 Block406:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block407:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1909
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x86
	cmp ecx,ebx
	jne Block409

 Block408:
	push 0x80004003
	call _com_issue_error

 Block409:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x87
	call get_int32
	add esp,8
	lea edx,[esi+0x304]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x30C],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block412

 Block410:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block413

 Block411:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block413

 Block412:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block413:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x190A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x88
	cmp ecx,ebx
	jne Block415

 Block414:
	push 0x80004003
	call _com_issue_error

 Block415:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x89
	call get_int32
	add esp,8
	lea edx,[esi+0x310]
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov dword ptr [esi+0x318],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block418

 Block416:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block419

 Block417:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block419

 Block418:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block419:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x190B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x8A
	cmp ecx,ebx
	jne Block421

 Block420:
	push 0x80004003
	call _com_issue_error

 Block421:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x8B
	call get_int32
	add esp,8
	lea edx,[esi+0x31C]
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov dword ptr [esi+0x324],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block424

 Block422:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block425

 Block423:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block425

 Block424:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block425:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x191B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x8C
	cmp ecx,ebx
	jne Block427

 Block426:
	push 0x80004003
	call _com_issue_error

 Block427:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x8D
	call get_int32
	add esp,8
	lea edx,[esi+0x328]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x330],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block430

 Block428:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block431

 Block429:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block431

 Block430:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block431:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x18E9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x8E
	cmp ecx,ebx
	jne Block433

 Block432:
	push 0x80004003
	call _com_issue_error

 Block433:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x8F
	call get_int32
	add esp,8
	lea edx,[esi+0x334]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x33C],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block436

 Block434:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block437

 Block435:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block437

 Block436:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block437:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x195F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x90
	cmp ecx,ebx
	jne Block439

 Block438:
	push 0x80004003
	call _com_issue_error

 Block439:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x91
	call get_int32
	add esp,8
	lea edx,[esi+0x340]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x348],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block442

 Block440:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block443

 Block441:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block443

 Block442:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block443:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1926
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x92
	cmp ecx,ebx
	jne Block445

 Block444:
	push 0x80004003
	call _com_issue_error

 Block445:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x93
	call get_int32
	add esp,8
	lea edx,[esi+0x34C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x354],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block448

 Block446:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block449

 Block447:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block449

 Block448:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block449:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1932
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x94
	cmp ecx,ebx
	jne Block451

 Block450:
	push 0x80004003
	call _com_issue_error

 Block451:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x95
	call get_int32
	add esp,8
	lea edx,[esi+0x358]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x360],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block454

 Block452:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block455

 Block453:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block455

 Block454:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block455:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1921
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x96
	cmp ecx,ebx
	jne Block457

 Block456:
	push 0x80004003
	call _com_issue_error

 Block457:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x97
	call get_int32
	add esp,8
	lea edx,[esi+0x364]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x36C],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block460

 Block458:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block461

 Block459:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block461

 Block460:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block461:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x191A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x98
	cmp ecx,ebx
	jne Block463

 Block462:
	push 0x80004003
	call _com_issue_error

 Block463:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x99
	call get_int32
	add esp,8
	lea edx,[esi+0x370]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x378],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block466

 Block464:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block467

 Block465:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block467

 Block466:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block467:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x193A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x9A
	cmp ecx,ebx
	jne Block469

 Block468:
	push 0x80004003
	call _com_issue_error

 Block469:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x9B
	call get_int32
	add esp,8
	lea edx,[esi+0x37C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x384],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block472

 Block470:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block473

 Block471:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block473

 Block472:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block473:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x193B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x9C
	cmp ecx,ebx
	jne Block475

 Block474:
	push 0x80004003
	call _com_issue_error

 Block475:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x9D
	call get_int32
	add esp,8
	lea edx,[esi+0x388]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x390],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block478

 Block476:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block479

 Block477:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block479

 Block478:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block479:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1930
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0x9E
	cmp ecx,ebx
	jne Block481

 Block480:
	push 0x80004003
	call _com_issue_error

 Block481:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x9F
	call get_int32
	add esp,8
	lea edx,[esi+0x394]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x39C],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block484

 Block482:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block485

 Block483:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block485

 Block484:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block485:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1908
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0xA0
	cmp ecx,ebx
	jne Block487

 Block486:
	push 0x80004003
	call _com_issue_error

 Block487:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0xA1
	call get_int32
	add esp,8
	lea edx,[esi+0x3A0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3A8],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block490

 Block488:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block491

 Block489:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block491

 Block490:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block491:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x193C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0xA2
	cmp ecx,ebx
	jne Block493

 Block492:
	push 0x80004003
	call _com_issue_error

 Block493:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0xA3
	call get_int32
	add esp,8
	lea edx,[esi+0x3AC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3B4],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block496

 Block494:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block497

 Block495:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block497

 Block496:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block497:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1AC9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC8]
	mov byte ptr [esp+0xBC],0xA4
	cmp ecx,ebx
	jne Block499

 Block498:
	push 0x80004003
	call _com_issue_error

 Block499:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0xA5
	call get_int32
	add esp,8
	lea edx,[esi+0x3B8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3C0],eax
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x14],bp
	jne Block502

 Block500:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block503

 Block501:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block503

 Block502:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block503:
	lea edx,[esi+0x3F4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3E8]
	xor ecx,ecx
	mov dword ptr [esi+0x3FC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3DC]
	xor ecx,ecx
	mov dword ptr [esi+0x3F0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3D0]
	xor ecx,ecx
	mov dword ptr [esi+0x3E4],eax
	call _ZtlSecureTearHelper<long>::call
	fldz
	lea ecx,[esi+0x400]
	push ecx
	fstp dword ptr [esp]
	mov dword ptr [esi+0x3D8],eax
	call _ZtlSecureTearHelper<float>::call
	push ebx
	push ebx
	push ecx
	mov dword ptr [esi+0x408],eax
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1ABE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xCC]
	mov byte ptr [esp+0xC0],0xA6
	cmp ecx,ebx
	jne Block505

 Block504:
	push 0x80004003
	call _com_issue_error

 Block505:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0xC4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xBC],0xA7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x44],ebx
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebx
	jge Block508

 Block506:
	cmp eax,0x80004002
	je Block508

 Block507:
	push eax
	call _com_issue_error

 Block508:
	mov byte ptr [esp+0xB4],0xA9
	cmp word ptr [esp+0x14],bp
	jne Block511

 Block509:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block512

 Block510:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block512

 Block511:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block512:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1ACB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xCC]
	mov byte ptr [esp+0xC0],0xAA
	cmp ecx,ebx
	jne Block514

 Block513:
	push 0x80004003
	call _com_issue_error

 Block514:
	lea eax,[esp+0x64]
	push eax
	mov byte ptr [esp+0xC4],0xA9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xBC],0xAB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x48],ebx
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebx
	jge Block517

 Block515:
	cmp eax,0x80004002
	je Block517

 Block516:
	push eax
	call _com_issue_error

 Block517:
	mov byte ptr [esp+0xB4],0xAD
	cmp word ptr [esp+0x58],bp
	jne Block520

 Block518:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,ebx
	je Block521

 Block519:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block521

 Block520:
	lea edx,[esp+0x58]
	push edx
	call edi

 Block521:
	mov ebx,dword ptr [esp+0x40]
	mov edi,dword ptr [esp+0x44]
	test ebx,ebx
	sete al
	test al,al
	je Block524

 Block522:
	test edi,edi
	sete al
	test al,al
	je Block524

 Block523:
	lea eax,[esi+0x1CC]
	push eax
	call SECRECT::SetRectEmpty
	add esp,4
	jmp Block529

 Block524:
	test edi,edi
	jne Block526

 Block525:
	push 0x80004003
	call _com_issue_error

 Block526:
	test ebx,ebx
	jne Block528

 Block527:
	push 0x80004003
	call _com_issue_error

 Block528:
	mov ecx,edi
	call IWzShape2D::Gety
	push eax
	mov ecx,edi
	call IWzShape2D::Getx
	push eax
	mov ecx,ebx
	call IWzShape2D::Gety
	push eax
	mov ecx,ebx
	call IWzShape2D::Getx
	push eax
	lea ecx,[esi+0x1CC]
	push ecx
	call SECRECT::SetRect
	add esp,0x14

 Block529:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x43F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC4]
	mov byte ptr [esp+0xB8],0xAE
	test ecx,ecx
	jne Block531

 Block530:
	push 0x80004003
	call _com_issue_error

 Block531:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0xBC],0xAD
	call IWzProperty::Getitem
	movzx edi,word ptr [eax]
	cmp word ptr [esp+0x48],bp
	jne Block534

 Block532:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block535

 Block533:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block535

 Block534:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block535:
	test di,di
	mov edi,dword ptr [esp+0xC8]
	je Block540

 Block536:
	lea eax,[esp+0x2C]
	push 0x979
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0xBC]
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [eax]
	push edi
	push ecx
	push edx
	push eax
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0xC8],0xAF
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x14
	push eax
	lea ecx,[esp+0x34]
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0x30]
	push ecx
	lea ecx,[esi+0x208]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x30]
	test ecx,ecx
	je Block538

 Block537:
	call _xbstr_t::Data_t::Release

 Block538:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xB4],0xAD
	test eax,eax
	je Block540

 Block539:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block540:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1793
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC4]
	mov byte ptr [esp+0xB8],0xB0
	test ecx,ecx
	jne Block542

 Block541:
	push 0x80004003
	call _com_issue_error

 Block542:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0xBC],0xAD
	call IWzProperty::Getitem
	cmp word ptr [esp+0x48],8
	movzx ebp,word ptr [eax]
	jne Block545

 Block543:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block546

 Block544:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block546

 Block545:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block546:
	test bp,bp
	je Block551

 Block547:
	lea eax,[esp+0x2C]
	push 0x1794
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0xBC]
	mov ebx,dword ptr [esp+0x34]
	mov eax,dword ptr [eax]
	push edi
	push ecx
	push ebx
	push eax
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0xC8],0xB1
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x14
	push eax
	lea ecx,[esp+0x34]
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esi+0x20C]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x30]
	test ecx,ecx
	je Block549

 Block548:
	call _xbstr_t::Data_t::Release

 Block549:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xB4],0xAD
	test eax,eax
	je Block552

 Block550:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block552

 Block551:
	mov ebx,dword ptr [esp+0x34]

 Block552:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1AB7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xCC]
	mov byte ptr [esp+0xC0],0xB2
	test ecx,ecx
	jne Block554

 Block553:
	push 0x80004003
	call _com_issue_error

 Block554:
	lea edx,[esp+0x54]
	push edx
	mov byte ptr [esp+0xC4],0xAD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xBC],0xB3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x38],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block557

 Block555:
	cmp eax,0x80004002
	je Block557

 Block556:
	push eax
	call _com_issue_error

 Block557:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0xB4],0xB5
	jne Block560

 Block558:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block561

 Block559:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block561

 Block560:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block561:
	cmp dword ptr [esp+0x34],0
	sete al
	test al,al
	sete al
	test al,al
	je Block574

 Block562:
	mov ecx,dword ptr [esp+0x34]
	test ecx,ecx
	jne Block564

 Block563:
	push 0x80004003
	call _com_issue_error

 Block564:
	call IWzProperty::Getcount
	test eax,eax
	je Block574

 Block565:
	xor ebp,ebp
	lea ecx,[ecx]

 Block566:
	mov eax,dword ptr [esp+0x34]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x20]
	lea ecx,[esp+0x2C]
	push ecx
	push eax
	mov dword ptr [esp+0x34],0
	call edx
	test eax,eax
	jge Block568

 Block567:
	mov ecx,dword ptr [esp+0x34]
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ecx
	push eax
	call _com_issue_errorex

 Block568:
	cmp ebp,dword ptr [esp+0x2C]
	jae Block574

 Block569:
	lea edx,[esp+0x24]
	push 0x977
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0xBC]
	mov eax,dword ptr [eax]
	push ebp
	push edi
	push ecx
	push ebx
	push eax
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0xCC],0xB6
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x18
	push eax
	lea ecx,[esp+0x34]
	call _xbstr_t::_ctor_1
	push 0xFFFFFFFF
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esi+0x210]
	mov byte ptr [esp+0xBC],0xB7
	call ZArray<Ztl_bstr_t>::Insert
	mov ecx,dword ptr [esp+0x30]
	test ecx,ecx
	je Block571

 Block570:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x30],0

 Block571:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB4],0xB5
	test eax,eax
	je Block573

 Block572:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block573:
	inc ebp
	jmp Block566

 Block574:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xB7C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xC4]
	mov byte ptr [esp+0xB8],0xB8
	test ecx,ecx
	jne Block576

 Block575:
	push 0x80004003
	call _com_issue_error

 Block576:
	lea edx,[esp+0xA0]
	push edx
	mov byte ptr [esp+0xBC],0xB5
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0xB4],0xB9
	jne Block578

 Block577:
	mov eax,dword ptr [eax+8]
	jmp Block579

 Block578:
	mov eax,offset _S___3

 Block579:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x38],0
	call ZXString<char>::AssignWideStr
	cmp word ptr [esp+0x9C],8
	mov byte ptr [esp+0xB4],0xBB
	jne Block582

 Block580:
	xor eax,eax
	mov word ptr [esp+0x9C],ax
	mov eax,dword ptr [esp+0xA4]
	test eax,eax
	je Block583

 Block581:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block583

 Block582:
	lea ecx,[esp+0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block583:
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	lea edx,[esp+0x34]
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call SKILLLEVELDATA::GetSkillLevelDateExpire
	cmp dword ptr [esp+0xBC],0x1407329
	mov ecx,dword ptr [eax]
	mov dword ptr [esi+0x40C],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+0x410],edx
	jne Block585

 Block584:
	mov ecx,dword ptr [edi*4+_D___NX__1+56]
	lea edx,[esi+0x160]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x168],eax

 Block585:
	mov eax,dword ptr [esi+0xC]
	push eax
	lea ebx,[esi+4]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ebp,dword ptr [esp+0xCC]
	add esp,8
	test eax,eax
	jne Block589

 Block586:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block589

 Block587:
	cmp byte ptr [eax],0
	je Block589

 Block588:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push ebp
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC],eax

 Block589:
	mov ecx,dword ptr [esi+0x18]
	push ecx
	lea ebx,[esi+0x10]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block593

 Block590:
	mov ecx,dword ptr [ebp+4]
	lea eax,[ebp+4]
	test ecx,ecx
	je Block593

 Block591:
	cmp byte ptr [ecx],0
	je Block593

 Block592:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x18],eax

 Block593:
	mov edx,dword ptr [esi+0x24]
	push edx
	lea ebx,[esi+0x1C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block597

 Block594:
	mov ecx,dword ptr [ebp+8]
	lea eax,[ebp+8]
	test ecx,ecx
	je Block597

 Block595:
	cmp byte ptr [ecx],0
	je Block597

 Block596:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x24],eax

 Block597:
	mov eax,dword ptr [esi+0x30]
	push eax
	lea ebx,[esi+0x28]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block601

 Block598:
	mov ecx,dword ptr [ebp+0xC]
	lea eax,[ebp+0xC]
	test ecx,ecx
	je Block601

 Block599:
	cmp byte ptr [ecx],0
	je Block601

 Block600:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x30],eax

 Block601:
	mov ecx,dword ptr [esi+0x3C]
	push ecx
	lea ebx,[esi+0x34]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block605

 Block602:
	mov ecx,dword ptr [ebp+0x10]
	lea eax,[ebp+0x10]
	test ecx,ecx
	je Block605

 Block603:
	cmp byte ptr [ecx],0
	je Block605

 Block604:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3C],eax

 Block605:
	mov edx,dword ptr [esi+0x48]
	push edx
	lea ebx,[esi+0x40]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block609

 Block606:
	mov ecx,dword ptr [ebp+0x14]
	lea eax,[ebp+0x14]
	test ecx,ecx
	je Block609

 Block607:
	cmp byte ptr [ecx],0
	je Block609

 Block608:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x48],eax

 Block609:
	mov eax,dword ptr [esi+0x198]
	push eax
	lea ebx,[esi+0x190]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block613

 Block610:
	mov ecx,dword ptr [ebp+0x84]
	lea eax,[ebp+0x84]
	test ecx,ecx
	je Block613

 Block611:
	cmp byte ptr [ecx],0
	je Block613

 Block612:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x198],eax

 Block613:
	mov ecx,dword ptr [esi+0x1A4]
	push ecx
	lea ebx,[esi+0x19C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block617

 Block614:
	mov ecx,dword ptr [ebp+0x88]
	lea eax,[ebp+0x88]
	test ecx,ecx
	je Block617

 Block615:
	cmp byte ptr [ecx],0
	je Block617

 Block616:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1A4],eax

 Block617:
	mov edx,dword ptr [esi+0x1B0]
	push edx
	lea ebx,[esi+0x1A8]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block621

 Block618:
	mov ecx,dword ptr [ebp+0x8C]
	lea eax,[ebp+0x8C]
	test ecx,ecx
	je Block621

 Block619:
	cmp byte ptr [ecx],0
	je Block621

 Block620:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1B0],eax

 Block621:
	mov eax,dword ptr [esi+0x1BC]
	push eax
	lea ebx,[esi+0x1B4]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block625

 Block622:
	mov ecx,dword ptr [ebp+0x90]
	lea eax,[ebp+0x90]
	test ecx,ecx
	je Block625

 Block623:
	cmp byte ptr [ecx],0
	je Block625

 Block624:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1BC],eax

 Block625:
	mov ecx,dword ptr [esi+0x1C8]
	push ecx
	lea ebx,[esi+0x1C0]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block629

 Block626:
	mov ecx,dword ptr [ebp+0x94]
	lea eax,[ebp+0x94]
	test ecx,ecx
	je Block629

 Block627:
	cmp byte ptr [ecx],0
	je Block629

 Block628:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1C8],eax

 Block629:
	mov edx,dword ptr [esi+0x54]
	push edx
	lea ebx,[esi+0x4C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block633

 Block630:
	mov ecx,dword ptr [ebp+0x18]
	lea eax,[ebp+0x18]
	test ecx,ecx
	je Block633

 Block631:
	cmp byte ptr [ecx],0
	je Block633

 Block632:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x54],eax

 Block633:
	mov eax,dword ptr [esi+0x60]
	push eax
	lea ebx,[esi+0x58]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block637

 Block634:
	mov ecx,dword ptr [ebp+0x1C]
	lea eax,[ebp+0x1C]
	test ecx,ecx
	je Block637

 Block635:
	cmp byte ptr [ecx],0
	je Block637

 Block636:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x60],eax

 Block637:
	mov ecx,dword ptr [esi+0x6C]
	push ecx
	lea ebx,[esi+0x64]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block641

 Block638:
	mov ecx,dword ptr [ebp+0x20]
	lea eax,[ebp+0x20]
	test ecx,ecx
	je Block641

 Block639:
	cmp byte ptr [ecx],0
	je Block641

 Block640:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x6C],eax

 Block641:
	mov edx,dword ptr [esi+0x78]
	push edx
	lea ebx,[esi+0x70]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block645

 Block642:
	mov ecx,dword ptr [ebp+0x24]
	lea eax,[ebp+0x24]
	test ecx,ecx
	je Block645

 Block643:
	cmp byte ptr [ecx],0
	je Block645

 Block644:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x78],eax

 Block645:
	mov eax,dword ptr [esi+0x84]
	push eax
	lea ebx,[esi+0x7C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block649

 Block646:
	mov ecx,dword ptr [ebp+0x28]
	lea eax,[ebp+0x28]
	test ecx,ecx
	je Block649

 Block647:
	cmp byte ptr [ecx],0
	je Block649

 Block648:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x84],eax

 Block649:
	mov ecx,dword ptr [esi+0x90]
	push ecx
	lea ebx,[esi+0x88]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block653

 Block650:
	mov ecx,dword ptr [ebp+0x2C]
	lea eax,[ebp+0x2C]
	test ecx,ecx
	je Block653

 Block651:
	cmp byte ptr [ecx],0
	je Block653

 Block652:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x90],eax

 Block653:
	mov edx,dword ptr [esi+0x9C]
	push edx
	lea ebx,[esi+0x94]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block657

 Block654:
	mov ecx,dword ptr [ebp+0x30]
	lea eax,[ebp+0x30]
	test ecx,ecx
	je Block657

 Block655:
	cmp byte ptr [ecx],0
	je Block657

 Block656:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x9C],eax

 Block657:
	mov eax,dword ptr [esi+0xA8]
	push eax
	lea ebx,[esi+0xA0]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block661

 Block658:
	mov ecx,dword ptr [ebp+0x34]
	lea eax,[ebp+0x34]
	test ecx,ecx
	je Block661

 Block659:
	cmp byte ptr [ecx],0
	je Block661

 Block660:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA8],eax

 Block661:
	mov ecx,dword ptr [esi+0xB4]
	push ecx
	lea ebx,[esi+0xAC]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block665

 Block662:
	mov ecx,dword ptr [ebp+0x38]
	lea eax,[ebp+0x38]
	test ecx,ecx
	je Block665

 Block663:
	cmp byte ptr [ecx],0
	je Block665

 Block664:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xB4],eax

 Block665:
	mov edx,dword ptr [esi+0xC0]
	push edx
	lea ebx,[esi+0xB8]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block669

 Block666:
	mov ecx,dword ptr [ebp+0x3C]
	lea eax,[ebp+0x3C]
	test ecx,ecx
	je Block669

 Block667:
	cmp byte ptr [ecx],0
	je Block669

 Block668:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC0],eax

 Block669:
	mov eax,dword ptr [esi+0xCC]
	push eax
	lea ebx,[esi+0xC4]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block673

 Block670:
	mov ecx,dword ptr [ebp+0x40]
	lea eax,[ebp+0x40]
	test ecx,ecx
	je Block673

 Block671:
	cmp byte ptr [ecx],0
	je Block673

 Block672:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xCC],eax

 Block673:
	mov ecx,dword ptr [esi+0xD8]
	push ecx
	lea ebx,[esi+0xD0]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block677

 Block674:
	mov ecx,dword ptr [ebp+0x44]
	lea eax,[ebp+0x44]
	test ecx,ecx
	je Block677

 Block675:
	cmp byte ptr [ecx],0
	je Block677

 Block676:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD8],eax

 Block677:
	mov edx,dword ptr [esi+0xE4]
	push edx
	lea ebx,[esi+0xDC]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block681

 Block678:
	mov ecx,dword ptr [ebp+0x48]
	lea eax,[ebp+0x48]
	test ecx,ecx
	je Block681

 Block679:
	cmp byte ptr [ecx],0
	je Block681

 Block680:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xE4],eax

 Block681:
	mov eax,dword ptr [esi+0xF0]
	push eax
	lea ebx,[esi+0xE8]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block685

 Block682:
	mov ecx,dword ptr [ebp+0x4C]
	lea eax,[ebp+0x4C]
	test ecx,ecx
	je Block685

 Block683:
	cmp byte ptr [ecx],0
	je Block685

 Block684:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xF0],eax

 Block685:
	mov ecx,dword ptr [esi+0xFC]
	push ecx
	lea ebx,[esi+0xF4]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block689

 Block686:
	mov ecx,dword ptr [ebp+0x50]
	lea eax,[ebp+0x50]
	test ecx,ecx
	je Block689

 Block687:
	cmp byte ptr [ecx],0
	je Block689

 Block688:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xFC],eax

 Block689:
	mov edx,dword ptr [esi+0x108]
	push edx
	lea ebx,[esi+0x100]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block693

 Block690:
	mov ecx,dword ptr [ebp+0x54]
	lea eax,[ebp+0x54]
	test ecx,ecx
	je Block693

 Block691:
	cmp byte ptr [ecx],0
	je Block693

 Block692:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x108],eax

 Block693:
	mov eax,dword ptr [esi+0x114]
	push eax
	lea ebx,[esi+0x10C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block697

 Block694:
	mov ecx,dword ptr [ebp+0x58]
	lea eax,[ebp+0x58]
	test ecx,ecx
	je Block697

 Block695:
	cmp byte ptr [ecx],0
	je Block697

 Block696:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x114],eax

 Block697:
	mov ecx,dword ptr [esi+0x120]
	push ecx
	lea ebx,[esi+0x118]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block701

 Block698:
	mov ecx,dword ptr [ebp+0x5C]
	lea eax,[ebp+0x5C]
	test ecx,ecx
	je Block701

 Block699:
	cmp byte ptr [ecx],0
	je Block701

 Block700:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x120],eax

 Block701:
	mov edx,dword ptr [esi+0x204]
	push edx
	lea ebx,[esi+0x1FC]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block705

 Block702:
	mov ecx,dword ptr [ebp+0x98]
	lea eax,[ebp+0x98]
	test ecx,ecx
	je Block705

 Block703:
	cmp byte ptr [ecx],0
	je Block705

 Block704:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x204],eax

 Block705:
	mov eax,dword ptr [esi+0x15C]
	push eax
	lea ebx,[esi+0x154]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block709

 Block706:
	mov ecx,dword ptr [ebp+0x70]
	lea eax,[ebp+0x70]
	test ecx,ecx
	je Block709

 Block707:
	cmp byte ptr [ecx],0
	je Block709

 Block708:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x15C],eax

 Block709:
	mov ecx,dword ptr [esi+0x12C]
	push ecx
	lea ebx,[esi+0x124]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block713

 Block710:
	mov ecx,dword ptr [ebp+0x60]
	lea eax,[ebp+0x60]
	test ecx,ecx
	je Block713

 Block711:
	cmp byte ptr [ecx],0
	je Block713

 Block712:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x12C],eax

 Block713:
	mov edx,dword ptr [esi+0x138]
	push edx
	lea ebx,[esi+0x130]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block717

 Block714:
	mov ecx,dword ptr [ebp+0x64]
	lea eax,[ebp+0x64]
	test ecx,ecx
	je Block717

 Block715:
	cmp byte ptr [ecx],0
	je Block717

 Block716:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x138],eax

 Block717:
	mov eax,dword ptr [esi+0x144]
	push eax
	lea ebx,[esi+0x13C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block721

 Block718:
	mov ecx,dword ptr [ebp+0x68]
	lea eax,[ebp+0x68]
	test ecx,ecx
	je Block721

 Block719:
	cmp byte ptr [ecx],0
	je Block721

 Block720:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x144],eax

 Block721:
	mov ecx,dword ptr [esi+0x150]
	push ecx
	lea ebx,[esi+0x148]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block728

 Block722:
	mov ecx,dword ptr [ebp+0x6C]
	lea eax,[ebp+0x6C]
	test ecx,ecx
	je Block728

 Block723:
	cmp byte ptr [ecx],0
	je Block728

 Block724:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	test eax,eax
	jle Block924

 Block725:
	cmp eax,0x64
	mov ecx,eax
	jl Block727

 Block726:
	mov ecx,0x64

 Block727:
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x150],eax

 Block728:
	mov edx,dword ptr [esi+0x168]
	push edx
	lea ebx,[esi+0x160]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block732

 Block729:
	mov ecx,dword ptr [ebp+0x74]
	lea eax,[ebp+0x74]
	test ecx,ecx
	je Block732

 Block730:
	cmp byte ptr [ecx],0
	je Block732

 Block731:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x168],eax

 Block732:
	mov eax,dword ptr [esi+0x174]
	push eax
	lea ebx,[esi+0x16C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block736

 Block733:
	mov ecx,dword ptr [ebp+0x78]
	lea eax,[ebp+0x78]
	test ecx,ecx
	je Block736

 Block734:
	cmp byte ptr [ecx],0
	je Block736

 Block735:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x174],eax

 Block736:
	mov ecx,dword ptr [esi+0x180]
	push ecx
	lea ebx,[esi+0x178]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block740

 Block737:
	mov ecx,dword ptr [ebp+0x7C]
	lea eax,[ebp+0x7C]
	test ecx,ecx
	je Block740

 Block738:
	cmp byte ptr [ecx],0
	je Block740

 Block739:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x180],eax

 Block740:
	mov edx,dword ptr [esi+0x21C]
	push edx
	lea ebx,[esi+0x214]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block744

 Block741:
	mov ecx,dword ptr [ebp+0x9C]
	lea eax,[ebp+0x9C]
	test ecx,ecx
	je Block744

 Block742:
	cmp byte ptr [ecx],0
	je Block744

 Block743:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x21C],eax

 Block744:
	mov eax,dword ptr [esi+0x228]
	push eax
	lea ebx,[esi+0x220]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block748

 Block745:
	mov ecx,dword ptr [ebp+0xD0]
	lea eax,[ebp+0xD0]
	test ecx,ecx
	je Block748

 Block746:
	cmp byte ptr [ecx],0
	je Block748

 Block747:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x228],eax

 Block748:
	mov ecx,dword ptr [esi+0x234]
	push ecx
	lea ebx,[esi+0x22C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block752

 Block749:
	mov ecx,dword ptr [ebp+0xD4]
	lea eax,[ebp+0xD4]
	test ecx,ecx
	je Block752

 Block750:
	cmp byte ptr [ecx],0
	je Block752

 Block751:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x234],eax

 Block752:
	mov edx,dword ptr [esi+0x240]
	push edx
	lea ebx,[esi+0x238]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block756

 Block753:
	mov ecx,dword ptr [ebp+0xD8]
	lea eax,[ebp+0xD8]
	test ecx,ecx
	je Block756

 Block754:
	cmp byte ptr [ecx],0
	je Block756

 Block755:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x240],eax

 Block756:
	mov eax,dword ptr [esi+0x24C]
	push eax
	lea ebx,[esi+0x244]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block760

 Block757:
	mov ecx,dword ptr [ebp+0xDC]
	lea eax,[ebp+0xDC]
	test ecx,ecx
	je Block760

 Block758:
	cmp byte ptr [ecx],0
	je Block760

 Block759:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x24C],eax

 Block760:
	mov ecx,dword ptr [esi+0x258]
	push ecx
	lea ebx,[esi+0x250]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block764

 Block761:
	mov ecx,dword ptr [ebp+0xE0]
	lea eax,[ebp+0xE0]
	test ecx,ecx
	je Block764

 Block762:
	cmp byte ptr [ecx],0
	je Block764

 Block763:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x258],eax

 Block764:
	mov edx,dword ptr [esi+0x264]
	push edx
	lea ebx,[esi+0x25C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block768

 Block765:
	mov ecx,dword ptr [ebp+0xE4]
	lea eax,[ebp+0xE4]
	test ecx,ecx
	je Block768

 Block766:
	cmp byte ptr [ecx],0
	je Block768

 Block767:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x264],eax

 Block768:
	mov eax,dword ptr [esi+0x270]
	push eax
	lea ebx,[esi+0x268]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block772

 Block769:
	mov ecx,dword ptr [ebp+0xE8]
	lea eax,[ebp+0xE8]
	test ecx,ecx
	je Block772

 Block770:
	cmp byte ptr [ecx],0
	je Block772

 Block771:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x270],eax

 Block772:
	mov ecx,dword ptr [esi+0x27C]
	push ecx
	lea ebx,[esi+0x274]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block776

 Block773:
	mov ecx,dword ptr [ebp+0xEC]
	lea eax,[ebp+0xEC]
	test ecx,ecx
	je Block776

 Block774:
	cmp byte ptr [ecx],0
	je Block776

 Block775:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x27C],eax

 Block776:
	mov edx,dword ptr [esi+0x288]
	push edx
	lea ebx,[esi+0x280]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block780

 Block777:
	mov ecx,dword ptr [ebp+0xF0]
	lea eax,[ebp+0xF0]
	test ecx,ecx
	je Block780

 Block778:
	cmp byte ptr [ecx],0
	je Block780

 Block779:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x288],eax

 Block780:
	mov eax,dword ptr [esi+0x294]
	push eax
	lea ebx,[esi+0x28C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block784

 Block781:
	mov ecx,dword ptr [ebp+0xF4]
	lea eax,[ebp+0xF4]
	test ecx,ecx
	je Block784

 Block782:
	cmp byte ptr [ecx],0
	je Block784

 Block783:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x294],eax

 Block784:
	mov ecx,dword ptr [esi+0x2A0]
	push ecx
	lea ebx,[esi+0x298]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block788

 Block785:
	mov ecx,dword ptr [ebp+0xF8]
	lea eax,[ebp+0xF8]
	test ecx,ecx
	je Block788

 Block786:
	cmp byte ptr [ecx],0
	je Block788

 Block787:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2A0],eax

 Block788:
	mov edx,dword ptr [esi+0x2AC]
	push edx
	lea ebx,[esi+0x2A4]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block792

 Block789:
	mov ecx,dword ptr [ebp+0xFC]
	lea eax,[ebp+0xFC]
	test ecx,ecx
	je Block792

 Block790:
	cmp byte ptr [ecx],0
	je Block792

 Block791:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2AC],eax

 Block792:
	mov eax,dword ptr [esi+0x2B8]
	push eax
	lea ebx,[esi+0x2B0]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block796

 Block793:
	mov ecx,dword ptr [ebp+0x100]
	lea eax,[ebp+0x100]
	test ecx,ecx
	je Block796

 Block794:
	cmp byte ptr [ecx],0
	je Block796

 Block795:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2B8],eax

 Block796:
	mov ecx,dword ptr [esi+0x2C4]
	push ecx
	lea ebx,[esi+0x2BC]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block800

 Block797:
	mov ecx,dword ptr [ebp+0x104]
	lea eax,[ebp+0x104]
	test ecx,ecx
	je Block800

 Block798:
	cmp byte ptr [ecx],0
	je Block800

 Block799:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2C4],eax

 Block800:
	mov edx,dword ptr [esi+0x2D0]
	push edx
	lea ebx,[esi+0x2C8]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block804

 Block801:
	mov ecx,dword ptr [ebp+0x108]
	lea eax,[ebp+0x108]
	test ecx,ecx
	je Block804

 Block802:
	cmp byte ptr [ecx],0
	je Block804

 Block803:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2D0],eax

 Block804:
	mov eax,dword ptr [esi+0x2DC]
	push eax
	lea ebx,[esi+0x2D4]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block808

 Block805:
	mov ecx,dword ptr [ebp+0x10C]
	lea eax,[ebp+0x10C]
	test ecx,ecx
	je Block808

 Block806:
	cmp byte ptr [ecx],0
	je Block808

 Block807:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2DC],eax

 Block808:
	mov ecx,dword ptr [esi+0x2E8]
	push ecx
	lea ebx,[esi+0x2E0]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block812

 Block809:
	mov ecx,dword ptr [ebp+0x110]
	lea eax,[ebp+0x110]
	test ecx,ecx
	je Block812

 Block810:
	cmp byte ptr [ecx],0
	je Block812

 Block811:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2E8],eax

 Block812:
	mov edx,dword ptr [esi+0x2F4]
	push edx
	lea ebx,[esi+0x2EC]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block816

 Block813:
	mov ecx,dword ptr [ebp+0x114]
	lea eax,[ebp+0x114]
	test ecx,ecx
	je Block816

 Block814:
	cmp byte ptr [ecx],0
	je Block816

 Block815:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2F4],eax

 Block816:
	mov eax,dword ptr [esi+0x300]
	push eax
	lea ebx,[esi+0x2F8]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block820

 Block817:
	mov ecx,dword ptr [ebp+0x118]
	lea eax,[ebp+0x118]
	test ecx,ecx
	je Block820

 Block818:
	cmp byte ptr [ecx],0
	je Block820

 Block819:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x300],eax

 Block820:
	mov ecx,dword ptr [esi+0x30C]
	push ecx
	lea ebx,[esi+0x304]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block824

 Block821:
	mov ecx,dword ptr [ebp+0x11C]
	lea eax,[ebp+0x11C]
	test ecx,ecx
	je Block824

 Block822:
	cmp byte ptr [ecx],0
	je Block824

 Block823:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x30C],eax

 Block824:
	mov edx,dword ptr [esi+0x318]
	push edx
	lea ebx,[esi+0x310]
	push ebx
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	test eax,eax
	jne Block828

 Block825:
	mov ecx,dword ptr [ebp+0x120]
	lea eax,[ebp+0x120]
	test ecx,ecx
	je Block828

 Block826:
	cmp byte ptr [ecx],0
	je Block828

 Block827:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov dword ptr [esi+0x318],eax

 Block828:
	mov eax,dword ptr [esi+0x324]
	push eax
	lea ebx,[esi+0x31C]
	push ebx
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	test eax,eax
	jne Block832

 Block829:
	mov ecx,dword ptr [ebp+0x124]
	lea eax,[ebp+0x124]
	test ecx,ecx
	je Block832

 Block830:
	cmp byte ptr [ecx],0
	je Block832

 Block831:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov dword ptr [esi+0x324],eax

 Block832:
	mov ecx,dword ptr [esi+0x330]
	push ecx
	lea ebx,[esi+0x328]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block836

 Block833:
	mov ecx,dword ptr [ebp+0x128]
	lea eax,[ebp+0x128]
	test ecx,ecx
	je Block836

 Block834:
	cmp byte ptr [ecx],0
	je Block836

 Block835:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x330],eax

 Block836:
	mov edx,dword ptr [esi+0x33C]
	push edx
	lea ebx,[esi+0x334]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block840

 Block837:
	mov ecx,dword ptr [ebp+0x12C]
	lea eax,[ebp+0x12C]
	test ecx,ecx
	je Block840

 Block838:
	cmp byte ptr [ecx],0
	je Block840

 Block839:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x33C],eax

 Block840:
	mov eax,dword ptr [esi+0x348]
	push eax
	lea ebx,[esi+0x340]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block844

 Block841:
	mov ecx,dword ptr [ebp+0x130]
	lea eax,[ebp+0x130]
	test ecx,ecx
	je Block844

 Block842:
	cmp byte ptr [ecx],0
	je Block844

 Block843:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x348],eax

 Block844:
	mov ecx,dword ptr [esi+0x354]
	push ecx
	lea ebx,[esi+0x34C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block848

 Block845:
	mov ecx,dword ptr [ebp+0x134]
	lea eax,[ebp+0x134]
	test ecx,ecx
	je Block848

 Block846:
	cmp byte ptr [ecx],0
	je Block848

 Block847:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x354],eax

 Block848:
	mov edx,dword ptr [esi+0x360]
	push edx
	lea ebx,[esi+0x358]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block852

 Block849:
	mov ecx,dword ptr [ebp+0x138]
	lea eax,[ebp+0x138]
	test ecx,ecx
	je Block852

 Block850:
	cmp byte ptr [ecx],0
	je Block852

 Block851:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x360],eax

 Block852:
	mov eax,dword ptr [esi+0x36C]
	push eax
	lea ebx,[esi+0x364]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block856

 Block853:
	mov ecx,dword ptr [ebp+0x13C]
	lea eax,[ebp+0x13C]
	test ecx,ecx
	je Block856

 Block854:
	cmp byte ptr [ecx],0
	je Block856

 Block855:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x36C],eax

 Block856:
	mov ecx,dword ptr [esi+0x378]
	push ecx
	lea ebx,[esi+0x370]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block860

 Block857:
	mov ecx,dword ptr [ebp+0x140]
	lea eax,[ebp+0x140]
	test ecx,ecx
	je Block860

 Block858:
	cmp byte ptr [ecx],0
	je Block860

 Block859:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x378],eax

 Block860:
	mov edx,dword ptr [esi+0x384]
	push edx
	lea ebx,[esi+0x37C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block864

 Block861:
	mov ecx,dword ptr [ebp+0x144]
	lea eax,[ebp+0x144]
	test ecx,ecx
	je Block864

 Block862:
	cmp byte ptr [ecx],0
	je Block864

 Block863:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x384],eax

 Block864:
	mov eax,dword ptr [esi+0x390]
	push eax
	lea ebx,[esi+0x388]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block868

 Block865:
	mov ecx,dword ptr [ebp+0x148]
	lea eax,[ebp+0x148]
	test ecx,ecx
	je Block868

 Block866:
	cmp byte ptr [ecx],0
	je Block868

 Block867:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x390],eax

 Block868:
	mov ecx,dword ptr [esi+0x39C]
	push ecx
	lea ebx,[esi+0x394]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block872

 Block869:
	mov ecx,dword ptr [ebp+0x14C]
	lea eax,[ebp+0x14C]
	test ecx,ecx
	je Block872

 Block870:
	cmp byte ptr [ecx],0
	je Block872

 Block871:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x39C],eax

 Block872:
	mov edx,dword ptr [esi+0x3A8]
	push edx
	lea ebx,[esi+0x3A0]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block876

 Block873:
	mov ecx,dword ptr [ebp+0x150]
	lea eax,[ebp+0x150]
	test ecx,ecx
	je Block876

 Block874:
	cmp byte ptr [ecx],0
	je Block876

 Block875:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3A8],eax

 Block876:
	mov eax,dword ptr [esi+0x3B4]
	push eax
	lea ebx,[esi+0x3AC]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block880

 Block877:
	mov ecx,dword ptr [ebp+0x154]
	lea eax,[ebp+0x154]
	test ecx,ecx
	je Block880

 Block878:
	cmp byte ptr [ecx],0
	je Block880

 Block879:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3B4],eax

 Block880:
	mov ecx,dword ptr [esi+0x3C0]
	push ecx
	lea ebx,[esi+0x3B8]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block884

 Block881:
	mov ecx,dword ptr [ebp+0x158]
	lea eax,[ebp+0x158]
	test ecx,ecx
	je Block884

 Block882:
	cmp byte ptr [ecx],0
	je Block884

 Block883:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3C0],eax

 Block884:
	mov edx,dword ptr [esi+0x3D8]
	push edx
	lea ebx,[esi+0x3D0]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block888

 Block885:
	mov ecx,dword ptr [ebp+0x15C]
	lea eax,[ebp+0x15C]
	test ecx,ecx
	je Block888

 Block886:
	cmp byte ptr [ecx],0
	je Block888

 Block887:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3D8],eax

 Block888:
	mov eax,dword ptr [esi+0x3E4]
	push eax
	lea ebx,[esi+0x3DC]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block892

 Block889:
	mov ecx,dword ptr [ebp+0x160]
	lea eax,[ebp+0x160]
	test ecx,ecx
	je Block892

 Block890:
	cmp byte ptr [ecx],0
	je Block892

 Block891:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3E4],eax

 Block892:
	mov ecx,dword ptr [esi+0x3F0]
	push ecx
	lea ebx,[esi+0x3E8]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block896

 Block893:
	mov ecx,dword ptr [ebp+0x164]
	lea eax,[ebp+0x164]
	test ecx,ecx
	je Block896

 Block894:
	cmp byte ptr [ecx],0
	je Block896

 Block895:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3F0],eax

 Block896:
	mov edx,dword ptr [esi+0x3FC]
	push edx
	lea ebx,[esi+0x3F4]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block900

 Block897:
	mov ecx,dword ptr [ebp+0x168]
	lea eax,[ebp+0x168]
	test ecx,ecx
	je Block900

 Block898:
	cmp byte ptr [ecx],0
	je Block900

 Block899:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonData
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3FC],eax

 Block900:
	mov eax,dword ptr [esi+0x408]
	push eax
	lea ebx,[esi+0x400]
	push ebx
	call _ZtlSecureFuseHelper<float>::call
	fcomp dword ptr [__real_00000000]
	add esp,8
	fnstsw ax
	test ah,0x44
	jp Block904

 Block901:
	mov ecx,dword ptr [ebp+0x16C]
	lea eax,[ebp+0x16C]
	test ecx,ecx
	je Block904

 Block902:
	cmp byte ptr [ecx],0
	je Block904

 Block903:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call SKILLLEVELDATA::GetParsedCommonDataFloat
	fstp dword ptr [esp+0x24]
	fld dword ptr [esp+0x24]
	push ecx
	mov ecx,ebx
	fstp dword ptr [esp]
	call _ZtlSecureTearHelper<float>::call
	mov dword ptr [esi+0x408],eax

 Block904:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block907

 Block905:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block907

 Block906:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jne Block913

 Block907:
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	lea edx,[esp+0x40]
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push ecx
	mov ecx,dword ptr [esp+0xD4]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xD4]
	mov dword ptr [esp+0x34],esp
	test eax,eax
	je Block909

 Block908:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block909:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	call SKILLLEVELDATA::GetCommonHelpString
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0xB8],0xBC
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x2C]
	push edx
	mov ecx,esi
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x2C]
	test ecx,ecx
	je Block911

 Block910:
	call _xbstr_t::Data_t::Release

 Block911:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB4],0xBB
	test eax,eax
	je Block913

 Block912:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block913:
	mov ecx,esi
	mov dword ptr [esi+0x414],1
	call SKILLLEVELDATA::CalcCrc
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xB4],0xB5
	test eax,eax
	je Block915

 Block914:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block915:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0xB4],0xAD
	test eax,eax
	je Block917

 Block916:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block917:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0xB4],0xA9
	test eax,eax
	je Block919

 Block918:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block919:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xB4],0xF
	test eax,eax
	je Block921

 Block920:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block921:
	mov esi,8
	mov byte ptr [esp+0xB4],0xB
	cmp word ptr [esp+0x8C],si
	jne Block925

 Block922:
	xor eax,eax
	mov word ptr [esp+0x8C],ax
	mov eax,dword ptr [esp+0x94]
	test eax,eax
	je Block926

 Block923:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block926

 Block924:
	xor ecx,ecx
	jmp Block727

 Block925:
	lea ecx,[esp+0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block926:
	mov byte ptr [esp+0xB4],3
	cmp word ptr [esp+0x7C],si
	jne Block929

 Block927:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	test eax,eax
	je Block930

 Block928:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block930

 Block929:
	lea eax,[esp+0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block930:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xB4],2
	test eax,eax
	je Block932

 Block931:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block932:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0xB4],1
	test eax,eax
	je Block934

 Block933:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block934:
	mov eax,dword ptr [esp+0xC0]
	mov byte ptr [esp+0xB4],0
	test eax,eax
	je Block936

 Block935:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block936:
	mov eax,dword ptr [esp+0xCC]
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	test eax,eax
	je Block938

 Block937:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block938:
	mov eax,1
	mov ecx,dword ptr [esp+0xAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA4
	ret 0x14
}
}
// SKILLENTRY::IsCorrectWeaponType
__SUB_CLASS_THIS(002ECD40, __thiscall, 20531,  SKILLENTRY, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	cmp eax,0x41EEEA
	jne Block2

 Block1:
	mov eax,1
	ret 8

 Block2:
	cmp eax,0xA9634C
	jg Block67

 Block3:
	je Block76

 Block4:
	cmp eax,0x3E938B
	jg Block39

 Block5:
	je Block38

 Block6:
	cmp eax,0x13DA0C
	jg Block29

 Block7:
	je Block26

 Block8:
	cmp eax,0x127A7E
	jg Block19

 Block9:
	je Block21

 Block10:
	cmp eax,0x10CCCC
	je Block14

 Block11:
	cmp eax,0x12536C
	je Block21

 Block12:
	cmp eax,0x127A7C
	je Block21

 Block13:
	jmp Block130

 Block14:
	mov eax,dword ptr [esp+4]
	cmp eax,0x1E
	je Block1

 Block15:
	cmp eax,0x28
	je Block1

 Block16:
	cmp eax,0x1F
	je Block1

 Block17:
	cmp eax,0x29
	je Block1

 Block18:
	xor eax,eax
	ret 8

 Block19:
	cmp eax,0x127A80
	je Block21

 Block20:
	cmp eax,0x12A18C
	jne Block130

 Block21:
	mov eax,dword ptr [esp+4]
	cmp eax,0x1E
	je Block1

 Block22:
	cmp eax,0x28
	je Block1

 Block23:
	cmp eax,0x20
	je Block1

 Block24:
	cmp eax,0x2A
	je Block1

 Block25:
	xor eax,eax
	ret 8

 Block26:
	mov eax,dword ptr [esp+4]
	cmp eax,0x2B
	je Block1

 Block27:
	cmp eax,0x2C
	je Block1

 Block28:
	xor eax,eax
	ret 8

 Block29:
	cmp eax,0x21BCC0
	jg Block35

 Block30:
	je Block124

 Block31:
	sub eax,0x20361D
	je Block124

 Block32:
	sub eax,3
	je Block124

 Block33:
	sub eax,0x1869D
	je Block124

 Block34:
	jmp Block130

 Block35:
	cmp eax,0x2F514A
	je Block82

 Block36:
	cmp eax,0x30D7EA
	jne Block130

 Block37:
	xor eax,eax
	cmp dword ptr [esp+4],0x2E
	sete al
	ret 8

 Block38:
	xor eax,eax
	cmp dword ptr [esp+4],0x2F
	sete al
	ret 8

 Block39:
	cmp eax,0x4DFCDA
	jg Block54

 Block40:
	je Block96

 Block41:
	cmp eax,0x4C4F29
	jg Block50

 Block42:
	je Block85

 Block43:
	cmp eax,0x3EE1AE
	je Block38

 Block44:
	cmp eax,0x401A2A
	je Block49

 Block45:
	cmp eax,0x41A0CA
	jne Block130

 Block46:
	cmp dword ptr [esp+4],0x21
	jne Block25

 Block47:
	cmp dword ptr [esp+8],0x22
	jne Block25

 Block48:
	mov eax,1
	ret 8

 Block49:
	xor eax,eax
	cmp dword ptr [esp+4],0x21
	sete al
	ret 8

 Block50:
	cmp eax,0x4DD5CA
	jl Block130

 Block51:
	cmp eax,0x4DD5CC
	jle Block96

 Block52:
	cmp eax,0x4DD5CE
	jne Block130

 Block53:
	xor eax,eax
	cmp dword ptr [esp+4],0x30
	sete al
	ret 8

 Block54:
	cmp eax,0x4E23EF
	jg Block63

 Block55:
	je Block96

 Block56:
	cmp eax,0x4E23EA
	jg Block60

 Block57:
	cmp eax,0x4E23E9
	jge Block96

 Block58:
	cmp eax,0x4DFCDE
	je Block96

 Block59:
	jmp Block130

 Block60:
	cmp eax,0x4E23EC
	jl Block130

 Block61:
	cmp eax,0x4E23ED
	jle Block96

 Block62:
	jmp Block130

 Block63:
	cmp eax,0x4F5C6B
	je Block138

 Block64:
	cmp eax,0xA96348
	jle Block130

 Block65:
	cmp eax,0xA9634A
	jle Block76

 Block66:
	jmp Block130

 Block67:
	cmp eax,0x1513C08
	jg Block103

 Block68:
	je Block124

 Block69:
	cmp eax,0xE66C4A
	jg Block89

 Block70:
	je Block53

 Block71:
	cmp eax,0xC7E7CA
	jg Block83

 Block72:
	cmp eax,0xC7E7C9
	jge Block82

 Block73:
	cmp eax,0xB8A58E
	jg Block79

 Block74:
	cmp eax,0xB8A58C
	jge Block124

 Block75:
	add eax,0xFF5675A2
	cmp eax,1
	ja Block130

 Block76:
	mov eax,dword ptr [esp+4]
	cmp eax,0x1E
	je Block1

 Block77:
	cmp eax,0x28
	je Block1

 Block78:
	xor eax,eax
	ret 8

 Block79:
	cmp eax,0xB8CC9D
	jl Block130

 Block80:
	cmp eax,0xB8CC9E
	jle Block124

 Block81:
	jmp Block130

 Block82:
	xor eax,eax
	cmp dword ptr [esp+4],0x2D
	sete al
	ret 8

 Block83:
	cmp eax,0xD72A0A
	je Block38

 Block84:
	cmp eax,0xE4E5A9
	jne Block130

 Block85:
	mov eax,dword ptr [esp+4]
	cmp eax,0x27
	je Block1

 Block86:
	cmp eax,0x30
	je Block1

 Block87:
	cmp eax,0x31
	je Block1

 Block88:
	xor eax,eax
	ret 8

 Block89:
	cmp eax,0xE6935E
	jg Block99

 Block90:
	je Block53

 Block91:
	cmp eax,0xE66C4D
	jg Block95

 Block92:
	je Block96

 Block93:
	cmp eax,0xE66C4B
	je Block96

 Block94:
	jmp Block130

 Block95:
	add eax,0xFF196CA5
	cmp eax,1
	ja Block130

 Block96:
	mov eax,dword ptr [esp+4]
	cmp eax,0x27
	je Block1

 Block97:
	cmp eax,0x30
	je Block1

 Block98:
	xor eax,eax
	ret 8

 Block99:
	cmp eax,0x140732B
	je Block102

 Block100:
	cmp eax,0x14FB569
	je Block124

 Block101:
	jmp Block130

 Block102:
	xor eax,eax
	cmp dword ptr [esp+4],0x2C
	sete al
	ret 8

 Block103:
	cmp eax,0x1524D78
	jg Block119

 Block104:
	je Block124

 Block105:
	cmp eax,0x151D84B
	jg Block114

 Block106:
	cmp eax,0x151D849
	jge Block124

 Block107:
	cmp eax,0x1518A29
	jg Block111

 Block108:
	cmp eax,0x1518A28
	jge Block124

 Block109:
	cmp eax,0x1516318
	je Block124

 Block110:
	jmp Block130

 Block111:
	cmp eax,0x151B138
	jl Block130

 Block112:
	cmp eax,0x151B139
	jle Block124

 Block113:
	jmp Block130

 Block114:
	cmp eax,0x152266B
	jg Block130

 Block115:
	cmp eax,0x1522669
	jge Block124

 Block116:
	cmp eax,0x151FF59
	jl Block130

 Block117:
	cmp eax,0x151FF5B
	jle Block124

 Block118:
	jmp Block130

 Block119:
	cmp eax,0x1E9D28D
	jg Block128

 Block120:
	je Block127

 Block121:
	cmp eax,0x152748B
	jg Block130

 Block122:
	cmp eax,0x1527488
	jge Block124

 Block123:
	add eax,0xFEADB286
	cmp eax,1
	ja Block130

 Block124:
	mov eax,dword ptr [esp+4]
	cmp eax,0x25
	je Block1

 Block125:
	cmp eax,0x26
	je Block1

 Block126:
	xor eax,eax
	ret 8

 Block127:
	xor eax,eax
	cmp dword ptr [esp+4],0x26
	sete al
	ret 8

 Block128:
	cmp eax,0x1F78E2B
	je Block37

 Block129:
	cmp eax,0x217994E
	je Block138

 Block130:
	mov eax,dword ptr [ecx+0x1C]
	test eax,eax
	je Block135

 Block131:
	mov edx,dword ptr [esp+8]
	cmp edx,0xFFFFFFFF
	je Block135

 Block132:
	push esi
	mov esi,dword ptr [esp+8]
	cmp esi,dword ptr [ecx+0x18]
	pop esi
	jne Block25

 Block133:
	cmp edx,eax
	jne Block25

 Block134:
	mov eax,1
	ret 8

 Block135:
	mov eax,dword ptr [ecx+0x18]
	test eax,eax
	je Block1

 Block136:
	cmp dword ptr [esp+4],eax
	je Block1

 Block137:
	xor eax,eax
	ret 8

 Block138:
	xor eax,eax
	cmp dword ptr [esp+4],0x31
	sete al
	ret 8
}
}
// SKILLENTRY::AddCrc
__SUB_CLASS_THIS(002ED450, __thiscall, 20535,  SKILLENTRY, void, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	xor dword ptr [ecx+0x44],eax
	ret 4
}
}
// is_not_depend_on_weapon_skill
__SUB(002EEAA0, __cdecl, 133298,  int32_t, const SKILLENTRY*, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block6

 Block1:
	cmp dword ptr [esp+8],0
	je Block6

 Block2:
	push esi
	mov esi,dword ptr [eax]
	push edi
	mov edi,dword ptr [esp+0x14]
	push edi
	push 0x42A
	call get_novice_skill_as_race
	add esp,8
	cmp esi,eax
	je Block5

 Block3:
	push edi
	push 0x42B
	call get_novice_skill_as_race
	add esp,8
	cmp esi,eax
	je Block5

 Block4:
	pop edi
	xor eax,eax
	pop esi
	ret

 Block5:
	pop edi
	mov eax,1
	pop esi
	ret

 Block6:
	xor eax,eax
	ret
}
}
// SKILLENTRY::GetIconCanvas
__SUB_CLASS_THIS0(002EF610, __thiscall, 20516,  SKILLENTRY, _x_com_ptr<IWzCanvas>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x25C]
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
// SKILLENTRY::IsCorrectAppointedAction
__SUB_CLASS_THIS(0030AE20, __thiscall, 20531,  SKILLENTRY, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push ebx
	push esi
	push edi
	push eax
	mov esi,ecx
	call SKILLENTRY::GetLevelData
	mov edi,eax
	mov ecx,dword ptr [edi+0x18C]
	push ecx
	lea ebx,[edi+0x184]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jl Block2

 Block1:
	mov edx,dword ptr [edi+0x18C]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	xor ecx,ecx
	cmp eax,dword ptr [esp+0x14]
	pop edi
	sete cl
	pop esi
	pop ebx
	mov eax,ecx
	ret 8

 Block2:
	mov edx,dword ptr [esp+0x14]
	xor ecx,ecx

 Block3:
	mov eax,dword ptr [esi+0x20]
	test eax,eax
	je Block8

 Block4:
	cmp ecx,dword ptr [eax-4]
	jae Block8

 Block5:
	cmp dword ptr [eax+ecx*4],edx
	je Block7

 Block6:
	inc ecx
	jmp Block3

 Block7:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 8

 Block8:
	cmp dword ptr [esi+0x24],edx
	je Block7

 Block9:
	cmp edx,0x4F
	jne Block15

 Block10:
	xor ecx,ecx
	lea ecx,[ecx]

 Block11:
	mov eax,dword ptr [esi+0x20]
	test eax,eax
	je Block15

 Block12:
	cmp ecx,dword ptr [eax-4]
	jae Block15

 Block13:
	mov edx,eax
	cmp dword ptr [edx+ecx*4],0x4E
	je Block7

 Block14:
	inc ecx
	jmp Block11

 Block15:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8
}
}
// get_summoned_attack_damage
__SUB(0030A110, __cdecl, 133331,  long, long, long, long, const CharacterData&) {
__asm {

 Block0:
	cmp dword ptr [esp+4],1
	jne Block6

 Block1:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	mov edi,dword ptr [esp+0x1C]
	lea eax,[esp+0x10]
	push eax
	push esi
	push edi
	mov dword ptr [esp+0x1C],0
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [esp+0x10]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0xF0]
	push ecx
	add eax,0xE8
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ebx,eax
	cmp esi,0x217E773
	jne Block4

 Block2:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	lea edx,[esp+0x10]
	push edx
	push 0x217E382
	push edi
	mov dword ptr [esp+0x1C],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block5

 Block3:
	mov ecx,dword ptr [esp+0x10]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x24]
	push ecx
	add eax,0x1C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8

 Block4:
	pop edi
	pop esi
	pop ebx
	ret

 Block5:
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	ret

 Block6:
	mov eax,dword ptr [esp+0xC]
	ret
}
}
// _anon_char2elem_attr
// 6ED538
static uint8_t _SUB_2ED4F0_LOOKUP_TABLE_0[14] = {
0, 4, 4, 1, 4, 4, 2, 4, 4, 4, 4, 4, 4, 3, 
};
__SUB(002ED4F0, __cdecl, 133286,  long, char) {
__asm {

 Block0:
	movsx eax,byte ptr [esp+4]
	add eax,0xFFFFFFBA
	cmp eax,0xD
	ja Block5

 Block1:
	movzx eax,byte ptr [eax+_SUB_2ED4F0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block2
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5
cmp EAX, 4
je Block5


 Block2:
	mov eax,1
	ret

 Block3:
	mov eax,2
	ret

 Block4:
	mov eax,3
	ret

 Block5:
	mov eax,4
	ret
}
}
// _ZtlSecureFuse_float_
__SUB(002EE3E0, __cdecl, 133292,  float, const float*, uint32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,dword ptr [ecx]
	mov ecx,dword ptr [ecx+4]
	mov edx,ecx
	rol edx,5
	xor edx,eax
	xor eax,0xBAADF00D
	ror eax,5
	add eax,ecx
	mov dword ptr [esp+4],edx
	cmp eax,dword ptr [esp+8]
	je Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[esp+8]
	push eax
	mov dword ptr [esp+0xC],5
	call _CxxThrowException

 Block2:
	fld dword ptr [esp+4]
	ret
}
}
// SKILLENTRY::IsFinalAttack
__SUB_CLASS_THIS0(002ECD30, __thiscall, 20508,  SKILLENTRY, int32_t) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [ecx+0xC],3
	sete al
	ret
}
}
// get_weapon_mastery
// 709E68
static uint8_t _SUB_309950_LOOKUP_TABLE_0[20] = {
0, 1, 2, 3, 11, 11, 11, 11, 11, 11, 0, 1, 2, 4, 5, 6, 
7, 8, 9, 10, 
};
__SUB(00309950, __cdecl, 133327,  long, const CharacterData&, const SecondaryStat&, long, long, long, long*, long*) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0x10]
	push ebx
	push esi
	push edi
	push eax
	call get_weapon_type
	add eax,0xFFFFFFE2
	add esp,4
	cmp eax,0x13
	ja Block71

 Block1:
	movzx ecx,byte ptr [eax+_SUB_309950_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block2
cmp ECX, 1
je Block13
cmp ECX, 2
je Block15
cmp ECX, 3
je Block52
cmp ECX, 4
je Block22
cmp ECX, 5
je Block24
cmp ECX, 6
je Block37
cmp ECX, 7
je Block43
cmp ECX, 8
je Block48
cmp ECX, 9
je Block56
cmp ECX, 10
je Block63
cmp ECX, 11
je Block71


 Block2:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block5

 Block3:
	cmp dword ptr [esp+0x24],0xA9634C
	jne Block71

 Block4:
	cmp eax,1
	jne Block71

 Block5:
	mov edi,dword ptr [esp+0x28]
	mov esi,dword ptr [esp+0x14]
	push edi
	push 0x10C8E0
	push esi
	call get_mastery_from_skill
	add esp,0xC
	test eax,eax
	jne Block72

 Block6:
	push edi
	push 0x124F80
	push esi
	call get_mastery_from_skill
	mov ebx,eax
	add esp,0xC
	test ebx,ebx
	je Block12

 Block7:
	mov ecx,dword ptr [esp+0x18]
	call SecondaryStat::_ZtlSecureGet_nWeaponCharge_
	test eax,eax
	je Block11

 Block8:
	lea edx,[esp+0xC]
	push edx
	push 0x129DAA
	push esi
	mov dword ptr [esp+0x18],0
	call get_mastery_from_skill
	mov ecx,dword ptr [esp+0x18]
	add esp,0xC
	test ecx,ecx
	je Block10

 Block9:
	mov dword ptr [edi],ecx

 Block10:
	test eax,eax
	jne Block72

 Block11:
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	pop ecx
	ret

 Block12:
	push edi
	push 0xA95F60
	push esi
	call get_mastery_from_skill
	add esp,0xC
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block13:
	cmp dword ptr [esp+0x20],0
	jne Block71

 Block14:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x14]
	push eax
	push 0x10C8E0
	push ecx
	call get_mastery_from_skill
	add esp,0xC
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block15:
	cmp dword ptr [esp+0x20],0
	jne Block71

 Block16:
	mov ebx,dword ptr [esp+0x28]
	mov esi,dword ptr [esp+0x14]
	push ebx
	push 0x124F80
	push esi
	call get_mastery_from_skill
	mov edi,eax
	add esp,0xC
	test edi,edi
	je Block21

 Block17:
	mov ecx,dword ptr [esp+0x18]
	call SecondaryStat::_ZtlSecureGet_nWeaponCharge_
	test eax,eax
	je Block21

 Block18:
	lea edx,[esp+0xC]
	push edx
	push 0x129DAA
	push esi
	mov dword ptr [esp+0x18],0
	call get_mastery_from_skill
	mov ecx,dword ptr [esp+0x18]
	add esp,0xC
	test ecx,ecx
	je Block20

 Block19:
	mov dword ptr [ebx],ecx

 Block20:
	test eax,eax
	jne Block72

 Block21:
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block22:
	cmp dword ptr [esp+0x20],0
	jne Block71

 Block23:
	mov eax,dword ptr [esp+0x28]
	mov esi,dword ptr [esp+0x14]
	push eax
	jmp Block33

 Block24:
	mov ecx,dword ptr [esp+0x20]
	test ecx,ecx
	je Block29

 Block25:
	mov eax,dword ptr [esp+0x24]
	cmp eax,0x141F5E4
	je Block28

 Block26:
	cmp eax,0x1421CF4
	je Block28

 Block27:
	cmp eax,0x1424406
	jne Block71

 Block28:
	cmp ecx,1
	jne Block71

 Block29:
	mov esi,dword ptr [esp+0x14]
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx ecx,ax
	push ecx
	call is_aran_job
	add esp,4
	test eax,eax
	je Block32

 Block30:
	mov edx,dword ptr [esp+0x28]
	push edx
	push 0x141F5E0
	push esi
	call get_mastery_from_skill
	mov edi,eax
	mov eax,dword ptr [esp+0x38]
	push eax
	push 0x1424401
	push esi
	call get_mastery_from_skill
	add esp,0x18
	test eax,eax
	je Block36

 Block31:
	xor edi,edi
	add eax,edi
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block32:
	mov ecx,dword ptr [esp+0x28]
	push ecx

 Block33:
	push 0x13D620
	push esi
	call get_mastery_from_skill
	mov ecx,dword ptr [esp+0x24]
	add esp,0xC
	mov edi,eax
	call SecondaryStat::_ZtlSecureGet_nBeholder_
	test eax,eax
	je Block35

 Block34:
	push 0
	push 0x14282F
	push esi
	call get_mastery_from_skill
	add esp,0xC
	add eax,edi
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block35:
	xor eax,eax

 Block36:
	add eax,edi
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block37:
	cmp dword ptr [esp+0x20],1
	jne Block71

 Block38:
	mov esi,dword ptr [esp+0x14]
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx edx,ax
	push edx
	call is_cygnus_job
	add esp,4
	test eax,eax
	je Block40

 Block39:
	mov eax,dword ptr [esp+0x28]
	push eax
	push 0xC7E3E0
	push esi
	call get_mastery_from_skill
	mov ecx,dword ptr [esp+0x38]
	push ecx
	mov edi,eax
	push 0xC80AF3
	jmp Block41

 Block40:
	mov edx,dword ptr [esp+0x28]
	push edx
	push 0x2F4D60
	push esi
	call get_mastery_from_skill
	mov edi,eax
	mov eax,dword ptr [esp+0x38]
	push eax
	push 0x2F9B85

 Block41:
	push esi
	call get_mastery_from_skill
	add esp,0x18
	test eax,eax
	jne Block72

 Block42:
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block43:
	mov esi,dword ptr [esp+0x20]
	mov ebx,dword ptr [esp+0x14]
	cmp esi,1
	je Block46

 Block44:
	mov ecx,ebx
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx ecx,ax
	push ecx
	call is_wildhunter_job
	add esp,4
	test eax,eax
	je Block71

 Block45:
	test esi,esi
	jne Block71

 Block46:
	mov ecx,ebx
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx edx,ax
	push edx
	call is_wildhunter_job
	mov esi,eax
	add esp,4
	neg esi
	sbb esi,esi
	and esi,0x1C83CE0
	mov ecx,ebx
	add esi,0x30D400
	call GW_CharacterStat::_ZtlSecureGet_nJob
	cwde
	push eax
	call is_wildhunter_job
	mov ecx,dword ptr [esp+0x2C]
	mov edi,eax
	neg edi
	push ecx
	sbb edi,edi
	push esi
	and edi,0x1C83CDC
	push ebx
	add edi,0x312224
	call get_mastery_from_skill
	mov edx,dword ptr [esp+0x3C]
	push edx
	push edi
	push ebx
	mov esi,eax
	call get_mastery_from_skill
	add esp,0x1C
	test eax,eax
	jne Block72

 Block47:
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	pop ecx
	ret

 Block48:
	mov eax,dword ptr [esp+0x20]
	cmp eax,1
	je Block51

 Block49:
	cmp dword ptr [esp+0x24],0xD7511E
	jne Block71

 Block50:
	test eax,eax
	jne Block71

 Block51:
	mov eax,dword ptr [esp+0x28]
	mov esi,dword ptr [esp+0x14]
	push eax
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx ecx,ax
	push ecx
	call is_cygnus_job
	add esp,4
	neg eax
	sbb eax,eax
	and eax,0x989680
	add eax,0x3E8FA0
	push eax
	push esi
	call get_mastery_from_skill
	add esp,0xC
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block52:
	cmp dword ptr [esp+0x20],0
	jne Block71

 Block53:
	mov esi,dword ptr [esp+0x14]
	mov ecx,esi
	call CharacterData::IsEquipedDualDagger
	test eax,eax
	je Block55

 Block54:
	mov edx,dword ptr [esp+0x28]
	push edx
	push 0x419CE0
	push esi
	call get_mastery_from_skill
	add esp,0xC
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block55:
	mov eax,dword ptr [esp+0x28]
	push eax
	push 0x401640
	push esi
	call get_mastery_from_skill
	add esp,0xC
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block56:
	mov ecx,dword ptr [esp+0x20]
	test ecx,ecx
	je Block60

 Block57:
	mov eax,dword ptr [esp+0x24]
	cmp eax,0x4E23EA
	je Block59

 Block58:
	cmp eax,0xE6935F
	jne Block71

 Block59:
	cmp ecx,1
	jne Block71

 Block60:
	mov esi,dword ptr [esp+0x14]
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx ecx,ax
	push ecx
	call is_cygnus_job
	add esp,4
	test eax,eax
	je Block62

 Block61:
	mov edx,dword ptr [esp+0x28]
	push edx
	push 0xE66861
	push esi
	call get_mastery_from_skill
	add esp,0xC
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block62:
	mov eax,dword ptr [esp+0x28]
	push eax
	push 0x4DD1E1
	push esi
	call get_mastery_from_skill
	add esp,0xC
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block63:
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x3D]
	push ecx
	lea edx,[esi+0x39]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	cwde
	push eax
	call is_mechanic_job
	add esp,0xC
	test eax,eax

 Block64:
	je Block67

 Block65:
	mov edi,dword ptr [esp+0x28]
	push edi
	push 0x217E380
	push esi
	call get_mastery_from_skill
	add esp,0xC
	test eax,eax
	jne Block72

 Block66:
	push edi
	push 0x2179560
	push esi
	call get_mastery_from_skill
	add esp,0xC
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block67:
	mov eax,dword ptr [esp+0x20]
	cmp eax,1
	je Block70

 Block68:
	cmp dword ptr [esp+0x24],0x4FAA8B
	jne Block71

 Block69:
	test eax,eax
	jne Block71

 Block70:
	mov ecx,dword ptr [esp+0x28]
	push ecx
	push 0x4F5880
	push esi
	call get_mastery_from_skill
	add esp,0xC
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block71:
	xor eax,eax

 Block72:
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret
}
}
// SKILLLEVELDATA::_ZtlSecureGet_nAttackCount
__SUB_CLASS0(002EE7E0, __fastcall, 21132,  SKILLLEVELDATA, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x12C]
	push eax
	add ecx,0x124
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// SKILLLEVELDATA::CalcCrc
__SUB_CLASS_THIS0(002F0660, __thiscall, 21157,  SKILLLEVELDATA, void) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x418],0
	jne Block2

 Block1:
	push ebx
	push ebp
	push edi
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0x20]
	push 4
	push eax
	mov dword ptr [esp+0x28],0x5F
	call CCrc32::GetCrc32
	lea edi,[esi+0x3C4]
	add esp,0x18
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov ecx,dword ptr [esi+0x18C]
	push ecx
	lea edx,[esi+0x184]
	push edx
	mov dword ptr [esi+0x3CC],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	mov eax,dword ptr [esi+0x3CC]
	push eax
	push edi
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea ecx,[esp+0x30]
	push 4
	push ecx
	mov dword ptr [esp+0x38],ebx
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov edx,dword ptr [esi+0x78]
	mov dword ptr [esi+0x3CC],eax
	push edx
	lea eax,[esi+0x70]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x3CC]
	push ecx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea edx,[esp+0x30]
	push 4
	push edx
	mov dword ptr [esp+0x38],ebx
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov dword ptr [esi+0x3CC],eax
	mov eax,dword ptr [esi+0x84]
	push eax
	lea ecx,[esi+0x7C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x3CC]
	push edx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x2C],ebx
	push eax
	lea eax,[esp+0x30]
	push 4
	push eax
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov ecx,dword ptr [esi+0x9C]
	push ecx
	lea edx,[esi+0x94]
	push edx
	mov dword ptr [esi+0x3CC],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	mov eax,dword ptr [esi+0x3CC]
	push eax
	push edi
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea ecx,[esp+0x30]
	push 4
	push ecx
	mov dword ptr [esp+0x38],ebx
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov edx,dword ptr [esi+0xA8]
	mov dword ptr [esi+0x3CC],eax
	push edx
	lea eax,[esi+0xA0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x3CC]
	push ecx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea edx,[esp+0x30]
	push 4
	push edx
	mov dword ptr [esp+0x38],ebx
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov dword ptr [esi+0x3CC],eax
	mov eax,dword ptr [esi+0xD8]
	push eax
	lea ecx,[esi+0xD0]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x3CC]
	push edx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea eax,[esp+0x30]
	push 4
	push eax
	mov dword ptr [esp+0x38],ebx
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov dword ptr [esi+0x3CC],eax
	mov ecx,dword ptr [esi+0xE4]
	push ecx
	lea edx,[esi+0xDC]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	mov eax,dword ptr [esi+0x3CC]
	push eax
	push edi
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea ecx,[esp+0x30]
	push 4
	push ecx
	mov dword ptr [esp+0x38],ebx
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov edx,dword ptr [esi+0xF0]
	mov dword ptr [esi+0x3CC],eax
	push edx
	lea eax,[esi+0xE8]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x3CC]
	push ecx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea edx,[esp+0x30]
	push 4
	push edx
	mov dword ptr [esp+0x38],ebx
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov dword ptr [esi+0x3CC],eax
	mov eax,dword ptr [esi+0x114]
	push eax
	lea ecx,[esi+0x10C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x3CC]
	push edx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea eax,[esp+0x30]
	push 4
	push eax
	mov dword ptr [esp+0x38],ebx
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov ecx,dword ptr [esi+0x204]
	push ecx
	lea edx,[esi+0x1FC]
	push edx
	mov dword ptr [esi+0x3CC],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	mov eax,dword ptr [esi+0x3CC]
	push eax
	push edi
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea ecx,[esp+0x30]
	push 4
	push ecx
	mov dword ptr [esp+0x38],ebx
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov edx,dword ptr [esi+0x15C]
	mov dword ptr [esi+0x3CC],eax
	push edx
	lea eax,[esi+0x154]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x3CC]
	push ecx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea edx,[esp+0x30]
	push 4
	push edx
	mov dword ptr [esp+0x38],ebx
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov dword ptr [esi+0x3CC],eax
	mov eax,dword ptr [esi+0x12C]
	push eax
	lea ecx,[esi+0x124]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x3CC]
	push edx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea eax,[esp+0x30]
	push 4
	push eax
	mov dword ptr [esp+0x38],ebx
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov ecx,dword ptr [esi+0x138]
	push ecx
	lea edx,[esi+0x130]
	push edx
	mov dword ptr [esi+0x3CC],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	mov eax,dword ptr [esi+0x3CC]
	push eax
	push edi
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	push 4
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x34],ebx
	push ecx
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov edx,dword ptr [esi+0x54]
	mov dword ptr [esi+0x3CC],eax
	push edx
	lea eax,[esi+0x4C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x3CC]
	push ecx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea edx,[esp+0x30]
	push 4
	push edx
	mov dword ptr [esp+0x38],ebx
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov dword ptr [esi+0x3CC],eax
	mov eax,dword ptr [esi+0x21C]
	push eax
	lea ecx,[esi+0x214]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x3CC]
	push edx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea eax,[esp+0x30]
	push 4
	push eax
	mov dword ptr [esp+0x38],ebx
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	lea ebx,[esi+0x1CC]
	mov dword ptr [esi+0x3CC],eax
	mov ecx,dword ptr [ebx+8]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x3CC]
	push edx
	push edi
	mov ebp,eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea eax,[esp+0x30]
	push 4
	push eax
	mov dword ptr [esp+0x38],ebp
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov dword ptr [esi+0x3CC],eax
	mov ecx,dword ptr [ebx+0x20]
	push ecx
	lea edx,[ebx+0x18]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ebp,eax
	mov eax,dword ptr [esi+0x3CC]
	push eax
	push edi
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea ecx,[esp+0x30]
	push 4
	push ecx
	mov dword ptr [esp+0x38],ebp
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov dword ptr [esi+0x3CC],eax
	mov edx,dword ptr [ebx+0x14]
	push edx
	lea eax,[ebx+0xC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x3CC]
	push ecx
	push edi
	mov ebp,eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea edx,[esp+0x30]
	push 4
	push edx
	mov dword ptr [esp+0x38],ebp
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov dword ptr [esi+0x3CC],eax
	mov eax,dword ptr [ebx+0x2C]
	push eax
	add ebx,0x24
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x3CC]
	push ecx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push eax
	lea edx,[esp+0x30]
	push 4
	push edx
	mov dword ptr [esp+0x38],ebx
	call CCrc32::GetCrc32
	add esp,0x28
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	pop edi
	pop ebp
	mov dword ptr [esi+0x3CC],eax
	pop ebx

 Block2:
	pop esi
	pop ecx
	ret
}
}
// get_combo_damage_param
__SUB(0030A410, __cdecl, 133334,  long, const CharacterData&, long, long) {
__asm {

 Block0:
	sub esp,8
	cmp dword ptr [esp+0x14],1
	jge Block2

 Block1:
	xor eax,eax
	add esp,8
	ret

 Block2:
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x18]
	mov eax,dword ptr [esi+0x3D]
	push edi
	push eax
	lea edi,[esi+0x39]
	push edi
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0x3D]
	push ecx
	push edi
	movzx ebx,ax
	call _ZtlSecureFuseHelper<short>::call
	movzx ebp,ax
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	add esp,0x10
	movsx ecx,bx
	lea edx,[esp+0x10]
	push edx
	mov eax,0x10624DD3
	imul ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	dec eax
	neg eax
	sbb eax,eax
	and eax,0xFF676981
	add eax,0xA98A59
	push eax
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov edi,eax
	lea ecx,[esp+0x14]
	push ecx
	movsx ecx,bp
	mov eax,0x10624DD3
	imul ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	dec eax
	neg eax
	sbb eax,eax
	and eax,0xFF67908E
	add eax,0xA98675
	push eax
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov ebx,eax
	test edi,edi
	je Block13

 Block3:
	mov ebp,dword ptr [esp+0x10]
	push edi
	mov ecx,ebp
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x2C4]
	push ecx
	add eax,0x2BC
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [esp+0x10],eax
	test ebx,ebx
	je Block5

 Block4:
	mov edi,dword ptr [esp+0x14]
	push ebx
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x2C4]
	push edx
	add eax,0x2BC
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebp,dword ptr [esp+0x18]
	add esp,8
	push ebx
	mov ecx,edi
	add ebp,eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x168]
	push ecx
	add eax,0x160
	push eax
	call _ZtlSecureFuseHelper<long>::call
	jmp Block6

 Block5:
	push edi
	mov ecx,ebp
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x168]
	push edx
	add eax,0x160
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebp,dword ptr [esp+0x18]

 Block6:
	add esp,8
	cmp dword ptr [esp+0x24],eax
	jl Block8

 Block7:
	mov dword ptr [esp+0x24],eax

 Block8:
	mov eax,dword ptr [esp+0x20]
	cmp eax,0x10F3DD
	je Block12

 Block9:
	cmp eax,0x10F3DB
	je Block12

 Block10:
	cmp eax,0xA98A5A
	je Block12

 Block11:
	cmp eax,0xA98A5B
	jne Block15

 Block12:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	push esi
	mov dword ptr [esp+0x20],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jne Block14

 Block13:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,8
	ret

 Block14:
	mov ecx,dword ptr [esp+0x14]
	push eax
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x174]
	push edx
	add eax,0x16C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	add ebp,eax

 Block15:
	mov eax,ebp
	imul eax,dword ptr [esp+0x24]
	pop edi
	pop esi
	pop ebp
	add eax,0x64
	pop ebx
	add esp,8
	ret
}
}
// SKILLENTRY::GetCharLevelData
_SUB_EXCEPTION_HANDLER(309110)
__SUB_CLASS_THIS(00309110, __thiscall, 20502,  SKILLENTRY, const CHARLEVELDATA*, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_309110
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
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
	xor ebx,ebx
	cmp dword ptr [esi+0x208],ebx
	jne Block2

 Block1:
	xor eax,eax
	jmp Block33

 Block2:
	mov edi,dword ptr [esi+0x208]
	cmp edi,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x14]
	push ecx
	push edi
	mov dword ptr [ebp-0x14],ebx
	call edx
	cmp eax,ebx
	jge Block6

 Block5:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	mov edx,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x18],edx
	cmp dword ptr [esi+0x20C],ebx
	je Block9

 Block7:
	lea eax,[edx-1]
	cmp eax,ebx
	jle Block1

 Block8:
	mov dword ptr [ebp-0x18],eax
	mov edx,eax

 Block9:
	cmp edx,ebx
	je Block1

 Block10:
	cmp dword ptr [esi+0x208],ebx
	je Block31

 Block11:
	mov eax,dword ptr [esi+0x204]
	lea ecx,[esi+0x204]
	cmp eax,ebx
	jne Block13

 Block12:
	xor eax,eax
	jmp Block14

 Block13:
	mov eax,dword ptr [eax-4]

 Block14:
	cmp eax,edx
	je Block31

 Block15:
	lea eax,[ebp-0x19]
	push eax
	push edx
	call ZArray<CHARLEVELDATA>::_Alloc
	mov dword ptr [ebp-0x20],ebx
	mov edi,1
	mov dword ptr [ebp-0x14],0x20

 Block16:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x200]
	mov dword ptr [ebp-4],0
	test ecx,ecx
	je Block3

 Block17:
	lea edx,[ebp-0x34]
	push edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	cmp word ptr [ebp-0x34],8
	mov ebx,eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	test ebx,ebx
	je Block30

 Block22:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+8]
	mov eax,esp
	push edx
	push 0
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x200]
	mov dword ptr [ebp-4],2
	test ecx,ecx
	je Block3

 Block23:
	lea eax,[ebp-0x44]
	or ebx,0xFFFFFFFF
	push eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x24],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block25

 Block24:
	cmp eax,0x80004002
	jne Block34

 Block25:
	mov ecx,dword ptr [esi+0x204]
	mov edx,dword ptr [esi]
	add ecx,dword ptr [ebp-0x14]
	push edx
	call CHARLEVELDATA::LoadCharLevelData
	cmp word ptr [ebp-0x44],8
	mov dword ptr [ebp-4],ebx
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[ebp-0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov eax,dword ptr [ebp-0x20]
	inc eax
	mov dword ptr [ebp-0x20],eax
	cmp eax,dword ptr [ebp-0x18]
	je Block31

 Block30:
	mov eax,dword ptr [ebp-0x14]
	add eax,0x20
	inc edi
	cmp eax,0x1900
	mov dword ptr [ebp-0x14],eax
	jle Block16

 Block31:
	mov edx,dword ptr [ebp+8]
	push edx
	mov ecx,esi
	call SKILLENTRY::GetCharLevelIndex
	cmp eax,0xFFFFFFFF
	je Block1

 Block32:
	shl eax,5
	add eax,dword ptr [esi+0x204]

 Block33:
	lea esp,[ebp-0x54]
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

 Block34:
	push eax
	call _com_issue_error
}
}
// SKILLLEVELDATA::_ZtlSecureGet_nRange
__SUB_CLASS0(002EE860, __fastcall, 21132,  SKILLLEVELDATA, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x204]
	push eax
	add ecx,0x1FC
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// get_max_durability_of_vehicle
__SUB(002ED700, __cdecl, 133287,  long, long, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x4FAA8E
	jne Block2

 Block1:
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esp+0xC]
	add eax,0xFFFFFFB8
	imul ecx,0x12C
	imul eax,0x1F4
	add eax,ecx
	ret

 Block2:
	or eax,0xFFFFFFFF
	ret
}
}
// get_novice_skill_point
__SUB(002F0C20, __cdecl, 133305,  long, const CharacterData&) {
__asm {

 Block0:
	sub esp,8
	push ebx
	mov ebx,dword ptr [esp+0x10]
	push esi
	push edi
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x14]
	lea esi,[ebx+0x53D]
	push ecx
	xor edi,edi
	mov ecx,esi
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x18],0x3E8
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov edi,dword ptr [esp+0xC]

 Block2:
	lea edx,[esp+0xC]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x20],0x3E9
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block4

 Block3:
	add edi,dword ptr [esp+0xC]

 Block4:
	lea ecx,[esp+0xC]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x20],0x3EA
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block6

 Block5:
	add edi,dword ptr [esp+0xC]

 Block6:
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x20],0x989A68
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block8

 Block7:
	add edi,dword ptr [esp+0xC]

 Block8:
	lea edx,[esp+0xC]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x20],0x989A69
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block10

 Block9:
	add edi,dword ptr [esp+0xC]

 Block10:
	lea ecx,[esp+0xC]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x20],0x989A6A
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block12

 Block11:
	add edi,dword ptr [esp+0xC]

 Block12:
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x20],0x13130E8
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block14

 Block13:
	add edi,dword ptr [esp+0xC]

 Block14:
	lea edx,[esp+0xC]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x20],0x13130E9
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block16

 Block15:
	add edi,dword ptr [esp+0xC]

 Block16:
	lea ecx,[esp+0xC]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x20],0x13130EA
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block18

 Block17:
	add edi,dword ptr [esp+0xC]

 Block18:
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x20],0x13157F8
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block20

 Block19:
	add edi,dword ptr [esp+0xC]

 Block20:
	lea edx,[esp+0xC]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x20],0x13157F9
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block22

 Block21:
	add edi,dword ptr [esp+0xC]

 Block22:
	lea ecx,[esp+0xC]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x20],0x13157FA
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block24

 Block23:
	add edi,dword ptr [esp+0xC]

 Block24:
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x20],0x1C9C768
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block26

 Block25:
	add edi,dword ptr [esp+0xC]

 Block26:
	lea edx,[esp+0xC]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x20],0x1C9C769
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block28

 Block27:
	add edi,dword ptr [esp+0xC]

 Block28:
	lea ecx,[esp+0xC]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x20],0x1C9C382
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block30

 Block29:
	add edi,dword ptr [esp+0xC]

 Block30:
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x20],0x1C9C396
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block32

 Block31:
	add edi,dword ptr [esp+0xC]

 Block32:
	mov edx,dword ptr [ebx+0x3D]
	push edx
	lea eax,[ebx+0x39]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov edx,dword ptr [ebx+0x35]
	mov esi,ecx
	sub esi,3
	neg esi
	sbb esi,esi
	push edx
	add ebx,0x33
	and esi,0xFFFFFFFD
	push ebx
	add esi,0xA
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx eax,al
	add esp,0x10
	cmp eax,esi
	jl Block34

 Block33:
	mov eax,esi

 Block34:
	sub eax,edi
	pop edi
	pop esi
	dec eax
	pop ebx
	add esp,8
	ret
}
}
// get_resistance
__SUB(0030A910, __cdecl, 133338,  long, const CharacterData&, const SecondaryStat&, long) {
__asm {

 Block0:
	push ebp
	mov ebp,dword ptr [esp+0x10]
	test ebp,ebp
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [eax+0xDC8]
	push ecx
	add eax,0xDC0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	pop ebp
	ret

 Block2:
	cmp ebp,7
	ja Block26

 Block3:
	push ebx
	push esi
	mov esi,dword ptr [esp+0x10]
	mov edx,dword ptr [esi+0x3D]
	push edi
	push 0x83
	push edx
	lea ebx,[esi+0x39]
	push ebx
	xor edi,edi
	call _ZtlSecureFuseHelper<short>::call
	cwde
	add esp,8
	push eax
	call is_correct_job_for_skill_root
	add esp,8
	test eax,eax
	je Block6

 Block4:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PDRAGONNIGHT_E
	push 0x13FD30
	push esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block22

 Block5:
	mov ecx,dword ptr [_D_S_PDRAGONNIGHT_E]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	mov edi,eax
	jmp Block23

 Block6:
	mov ecx,dword ptr [esi+0x3D]
	push 0xD3
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	add esp,8
	push edx
	call is_correct_job_for_skill_root
	add esp,8
	test eax,eax
	je Block11

 Block7:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PMAGE1_PARTIAL
	push 0x203230
	push esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block22

 Block8:
	cmp ebp,2
	je Block10

 Block9:
	cmp ebp,4
	jne Block22

 Block10:
	mov ecx,dword ptr [_D_S_PMAGE1_PARTIAL]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	mov edi,eax
	jmp Block23

 Block11:
	push 0xDD
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	cwde
	push eax
	call is_correct_job_for_skill_root
	add esp,8
	test eax,eax
	je Block16

 Block12:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PMAGE2_PARTIAL
	push 0x21B8D0
	push esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block22

 Block13:
	cmp ebp,1
	je Block15

 Block14:
	cmp ebp,3
	jne Block22

 Block15:
	mov ecx,dword ptr [_D_S_PMAGE2_PARTIAL]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	mov edi,eax
	jmp Block23

 Block16:
	push 0xE7
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx ecx,ax
	push ecx
	call is_correct_job_for_skill_root
	add esp,8
	test eax,eax
	je Block19

 Block17:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PPRIEST_ELEMEN
	push 0x233F70
	push esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block22

 Block18:
	mov ecx,dword ptr [_D_S_PPRIEST_ELEMEN]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	mov edi,eax
	jmp Block23

 Block19:
	push 0x4BB
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx edx,ax
	push edx
	call is_correct_job_for_skill_root
	add esp,8
	test eax,eax
	je Block23

 Block20:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PFLAMEWIZARD_E__1
	push 0xB8C8B0
	push esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block22

 Block21:
	mov ecx,dword ptr [_D_S_PFLAMEWIZARD_E__1]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	mov edi,eax
	jmp Block23

 Block22:
	xor edi,edi

 Block23:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0xDC8]
	push ecx
	add eax,0xDC0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp edi,eax
	jge Block25

 Block24:
	mov edi,eax

 Block25:
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	pop ebp
	ret

 Block26:
	xor eax,eax
	pop ebp
	ret
}
}
// is_shoot_skill_not_showing_bullet
__SUB(002EDC50, __cdecl, 133288,  int32_t, const SKILLENTRY*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	jne Block2

 Block1:
	xor eax,eax
	ret

 Block2:
	cmp dword ptr [eax+0xC],3
	je Block23

 Block3:
	mov eax,dword ptr [eax]
	cmp eax,0xC80ED8
	jg Block14

 Block4:
	je Block23

 Block5:
	cmp eax,0x30FEFC
	jg Block10

 Block6:
	je Block23

 Block7:
	cmp eax,0x2F514B
	je Block23

 Block8:
	cmp eax,0x2F785C
	je Block23

 Block9:
	cmp eax,0x30D7EB
	jmp Block22

 Block10:
	cmp eax,0x4F837D
	jg Block13

 Block11:
	cmp eax,0x4F837C
	jge Block23

 Block12:
	cmp eax,0x4F5C69
	jmp Block22

 Block13:
	cmp eax,0xC7E7CD
	jmp Block22

 Block14:
	cmp eax,0x1F962E9
	jg Block19

 Block15:
	je Block23

 Block16:
	cmp eax,0xD72A0E
	je Block23

 Block17:
	cmp eax,0x1424406
	je Block23

 Block18:
	cmp eax,0x1F914CA
	jmp Block22

 Block19:
	cmp eax,0x21612A9
	je Block23

 Block20:
	cmp eax,0x2179951
	je Block23

 Block21:
	cmp eax,0x217E774

 Block22:
	jne Block1

 Block23:
	mov eax,1
	ret
}
}
// CSkillInfo::IsSkillVisible
__SUB_CLASS_THIS(002F20D0, __thiscall, 21706,  CSkillInfo, int32_t, const CharacterData&, long, const SKILLENTRY**) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	mov esi,dword ptr [esp+0x14]
	push edi
	test esi,esi
	je Block2

 Block1:
	mov edi,dword ptr [esi]
	test edi,edi
	jne Block3

 Block2:
	push ebx
	call CSkillInfo::GetSkill
	mov edi,eax

 Block3:
	test esi,esi
	je Block6

 Block4:
	cmp dword ptr [esi],0
	jne Block6

 Block5:
	mov dword ptr [esi],edi

 Block6:
	test edi,edi
	je Block18

 Block7:
	cmp ebx,0x41EEE9
	je Block18

 Block8:
	cmp ebx,0x3F6
	je Block18

 Block9:
	cmp ebx,0x989A77
	je Block18

 Block10:
	mov esi,dword ptr [esp+0x10]
	mov eax,dword ptr [esi+0x3D]
	push eax
	lea ecx,[esi+0x39]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,word ptr [esi+0xF7]
	movzx eax,ax
	cwde
	push edx
	push eax
	call is_dual_job_born
	add esp,0x10
	test eax,eax
	je Block13

 Block11:
	cmp ebx,0x3D0901
	je Block18

 Block12:
	cmp ebx,0x3D0E40
	je Block18

 Block13:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esi+0x53D]
	mov dword ptr [esp+0x20],0
	call ZMap<long, long, long>::GetAt
	test eax,eax
	jne Block15

 Block14:
	cmp dword ptr [edi+0x34],eax
	jne Block18

 Block15:
	cmp dword ptr [edi+0x48],0
	je Block17

 Block16:
	cmp dword ptr [esp+0x18],0
	je Block18

 Block17:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 0xC

 Block18:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 0xC
}
}
// SKILLLEVELDATA::_ZtlSecureGet_nItemCon
__SUB_CLASS0(002EE740, __fastcall, 21132,  SKILLLEVELDATA, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xC0]
	push eax
	add ecx,0xB8
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// SKILLENTRY::GetMaxLevel
__SUB_CLASS_THIS0(0010A020, __thiscall, 20497,  SKILLENTRY, long) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x200],0
	push edi
	je Block15

 Block1:
	cmp dword ptr [esi+0x70],0
	jle Block10

 Block2:
	mov edi,dword ptr [esi+0x200]
	test edi,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+8]
	push ecx
	push edi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esi+0x70]
	cmp eax,dword ptr [esp+8]
	jbe Block16

 Block7:
	mov ecx,dword ptr [esi+0x200]
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	pop edi
	pop esi
	add esp,4
	jmp  IWzProperty::Getcount

 Block10:
	mov esi,dword ptr [esi+0x200]
	test esi,esi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov eax,dword ptr [esp+8]
	pop edi
	pop esi
	pop ecx
	ret

 Block15:
	mov esi,dword ptr [esi+0x70]
	xor eax,eax
	test esi,esi
	setle al
	dec eax
	and eax,esi

 Block16:
	pop edi
	pop esi
	pop ecx
	ret
}
}
// SKILLLEVELDATA::_ZtlSecureGet_nZ
__SUB_CLASS0(002EE840, __fastcall, 21132,  SKILLLEVELDATA, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x180]
	push eax
	add ecx,0x178
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// get_summon_skill_id_from_idx
__SUB(002EE930, __cdecl, 133297,  long, const CharacterData&, long) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov eax,dword ptr [edi+0x3D]
	push 0x137
	push eax
	lea ebx,[edi+0x39]
	push ebx
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	push ecx
	call is_correct_job_for_skill_root
	mov esi,dword ptr [esp+0x1C]
	add esp,8
	test eax,eax
	je Block5

 Block1:
	mov eax,esi
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block5

 Block3:
	pop edi
	pop esi
	mov eax,0x2F785D
	pop ebx
	ret

 Block4:
	pop edi
	pop esi
	mov eax,0x2F785A
	pop ebx
	ret

 Block5:
	mov edx,dword ptr [edi+0x3D]
	push 0x141
	push edx
	push ebx
	call _ZtlSecureFuseHelper<short>::call
	cwde
	add esp,8
	push eax
	call is_correct_job_for_skill_root
	add esp,8
	test eax,eax
	je Block10

 Block6:
	mov eax,esi
	sub eax,1
	je Block9

 Block7:
	sub eax,1
	jne Block10

 Block8:
	pop edi
	pop esi
	mov eax,0x30FEFD
	pop ebx
	ret

 Block9:
	pop edi
	pop esi
	mov eax,0x30FEFA
	pop ebx
	ret

 Block10:
	mov ecx,dword ptr [edi+0x3D]
	push 0xE7
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	add esp,8
	push edx
	call is_correct_job_for_skill_root
	add esp,8
	test eax,eax
	je Block13

 Block11:
	mov eax,esi
	sub eax,1
	jne Block13

 Block12:
	pop edi
	pop esi
	mov eax,0x23435E
	pop ebx
	ret

 Block13:
	mov eax,dword ptr [edi+0x3D]
	push 0x51F
	push eax
	push ebx
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	push ecx
	call is_correct_job_for_skill_root
	add esp,8
	test eax,eax
	je Block16

 Block14:
	mov eax,esi
	sub eax,1
	jne Block16

 Block15:
	pop edi
	pop esi
	mov eax,0xC80EDC
	pop ebx
	ret

 Block16:
	mov edx,dword ptr [edi+0x3D]
	push 0x1B2
	push edx
	push ebx
	call _ZtlSecureFuseHelper<short>::call
	cwde
	add esp,8
	push eax
	call is_correct_job_for_skill_root
	add esp,8
	test eax,eax
	je Block19

 Block17:
	mov eax,esi
	sub eax,1
	jne Block19

 Block18:
	pop edi
	pop esi
	mov eax,0x423D0E
	pop ebx
	ret

 Block19:
	mov ecx,dword ptr [edi+0x3D]
	push 0xCEF
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	add esp,8
	push edx
	call is_correct_job_for_skill_root
	add esp,8
	test eax,eax
	je Block24

 Block20:
	sub esi,1
	je Block23

 Block21:
	sub esi,1
	jne Block24

 Block22:
	pop edi
	pop esi
	mov eax,0x1F93BDD
	pop ebx
	ret

 Block23:
	pop edi
	pop esi
	mov eax,0x1F93BDB
	pop ebx
	ret

 Block24:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret
}
}
// CSkillInfo::LoadItemOptionSkillLevelData
_SUB_EXCEPTION_HANDLER(306710)
__SUB_CLASS_THIS(00306710, __thiscall, 21750,  CSkillInfo, int32_t, long, ZArray<ZRef<ITEMOPTIONSKILLLEVELDATA> >&, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_306710
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ebp+0x78]
	xor edi,edi
	cmp eax,edi
	sete cl
	mov dword ptr [ebp-4],edi
	test cl,cl
	je Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[ebp+0x5C]
	push eax
	mov dword ptr [ebp+0x5C],0x80004005
	call _CxxThrowException

 Block2:
	mov dword ptr [ebp-0x60],edi
	mov byte ptr [ebp-4],1
	cmp eax,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x58]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp+0x58],edi
	call eax
	cmp eax,edi
	jge Block6

 Block5:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov esi,dword ptr [ebp+0x58]
	cmp esi,edi
	jg Block8

 Block7:
	push offset ZException::THROW_INFO
	lea ecx,[ebp+0x5C]
	push ecx
	mov dword ptr [ebp+0x5C],0x80004005
	call _CxxThrowException

 Block8:
	mov ecx,dword ptr [ebp+0x74]
	lea edx,[ebp+0x4B]
	push edx
	push esi
	call ZArray<ZRef<ITEMOPTIONSKILLLEVELDATA>>::_Alloc
	cmp esi,1
	mov dword ptr [ebp+0x54],1
	jl Block64

 Block9:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x54]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],2
	cmp ecx,edi
	je Block3

 Block10:
	lea edx,[ebp+0x10]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block12

 Block11:
	cmp eax,0x80004002
	jne Block67

 Block12:
	mov ebx,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x10],bx
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	cmp eax,edi
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov esi,dword ptr [ebp+0x4C]
	cmp esi,edi
	sete al
	test al,al
	jne Block68

 Block17:
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x44],edi
	call ZRef<ITEMOPTIONSKILLLEVELDATA>::_Alloc
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x964
	push edx
	mov byte ptr [ebp-4],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],7
	cmp esi,edi
	je Block3

 Block18:
	lea eax,[ebp-0x3C]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],8
	call get_int32
	mov edi,dword ptr [ebp+0x44]
	add esp,8
	mov dword ptr [edi],eax
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x3C],bx
	jne Block21

 Block19:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1795
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],9
	mov ecx,esi
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xA
	call get_int32
	add esp,8
	mov dword ptr [edi+4],eax
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x1C],bx
	jne Block25

 Block23:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x963
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0xB
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC
	call get_int32
	add esp,8
	mov dword ptr [edi+8],eax
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp+0x30],bx
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1796
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x20]
	mov byte ptr [ebp-4],0xD
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xE
	call get_int32
	add esp,8
	mov dword ptr [edi+0xC],eax
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp+0x20],bx
	jne Block33

 Block31:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[ebp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x67A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0xF
	mov ecx,esi
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x10
	call get_int32
	add esp,8
	mov dword ptr [edi+0x10],eax
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp],bx
	jne Block37

 Block35:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xAB1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x2C]
	mov byte ptr [ebp-4],0x11
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x12
	call get_int32
	add esp,8
	mov dword ptr [edi+0x14],eax
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x2C],bx
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AD0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x4C]
	mov byte ptr [ebp-4],0x13
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x14
	call get_int32
	add esp,8
	mov dword ptr [edi+0x18],eax
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x4C],bx
	jne Block45

 Block43:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov dword ptr [ebp+0x5C],0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x666
	push eax
	mov byte ptr [ebp-4],0x15
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x5C]
	push ecx
	mov byte ptr [ebp-4],0x16
	mov ecx,esi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	cmp word ptr [ebp-0x5C],8
	movzx ebx,word ptr [eax]
	jne Block49

 Block47:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	test bx,bx
	je Block58

 Block51:
	mov ecx,dword ptr [ebp+0x54]
	mov edx,dword ptr [ebp+0x70]
	push ecx
	push edx
	lea eax,[ebp+0x5C]
	push offset _S_SKILLATTACKTYPEI
	push eax
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x50]
	call _xbstr_t::_ctor_1
	lea ebx,[edi+0x1C]
	lea ecx,[ebp+0x50]
	cmp ebx,ecx
	je Block56

 Block52:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block54

 Block53:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebx],0

 Block54:
	mov eax,dword ptr [ebp+0x50]
	mov dword ptr [ebx],eax
	test eax,eax
	je Block58

 Block55:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block56:
	mov ecx,dword ptr [ebp+0x50]
	test ecx,ecx
	je Block58

 Block57:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x50],0

 Block58:
	mov eax,dword ptr [ebp+0x74]
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x40]
	push edx
	mov edx,dword ptr [ebp+0x54]
	lea ecx,[ecx+edx*8-8]
	call ZRef<ITEMOPTIONSKILLLEVELDATA>::op_assign_copy
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block60:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	mov byte ptr [ebp-4],5
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block63

 Block61:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block63

 Block62:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block63:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [ebp+0x44],0
	mov byte ptr [ebp-4],1
	call ecx
	mov eax,dword ptr [ebp+0x54]
	inc eax
	xor edi,edi
	cmp eax,dword ptr [ebp+0x58]
	mov dword ptr [ebp+0x54],eax
	jle Block9

 Block64:
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block66

 Block65:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block66:
	mov eax,1
	lea esp,[ebp-0x70]
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
	ret 0xC

 Block67:
	push eax
	call _com_issue_error

 Block68:
	push offset ZException::THROW_INFO
	lea edx,[ebp+0x58]
	push edx
	mov dword ptr [ebp+0x58],0x80004005
	call _CxxThrowException
	int 3
}
}
// SKILLLEVELDATA::GetCommonHelpString
_SUB_EXCEPTION_HANDLER(2F9A40)
__SUB_CLASS_THIS(002F9A40, __thiscall, 21148,  SKILLLEVELDATA, ZXString<char>*, ZXString<char>*, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F9A40
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
	mov edi,ecx
	mov dword ptr [esp+0x1C],0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x7C],esp
	push 0x1919
	push eax
	mov dword ptr [esp+0xA0],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push ecx
	mov ecx,esp
	lea edx,[esp+0xAC]
	mov dword ptr [esp+0x7C],esp
	push edx
	mov byte ptr [esp+0xA0],3
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push ecx
	mov ecx,dword ptr [esp+0xAC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xAC]
	mov dword ptr [esp+0x80],esp
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0xA4],2
	call get_labeled_string_1
	add esp,0x10
	mov eax,dword ptr [eax]
	mov edx,8
	push eax
	mov byte ptr [esp+0x98],4
	mov word ptr [esp+0x80],dx
	call ZComAPI::ZtlConvertStringToBSTR
	mov dword ptr [esp+0x84],eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x94],6
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea eax,[esp+0x7C]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	call DetachBSTR
	add esp,8
	mov esi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x94],7
	test esi,esi
	je Block8

 Block5:
	cmp dword ptr [esi+4],0
	jne Block7

 Block6:
	mov edx,dword ptr [esi]
	push edx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block7:
	mov ecx,dword ptr [esi+4]
	jmp Block9

 Block8:
	xor ecx,ecx

 Block9:
	mov esi,dword ptr [esp+0x9C]
	mov dword ptr [esi],0
	test ecx,ecx
	je Block13

 Block10:
	mov eax,ecx
	lea ebx,[eax+1]

 Block11:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block11

 Block12:
	sub eax,ebx
	mov ebp,eax
	push ebp
	push ecx
	push 0
	push ebp
	mov ecx,esi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebp
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer

 Block13:
	mov eax,dword ptr [esi]
	mov dword ptr [esp+0x1C],1
	test eax,eax
	je Block358

 Block14:
	cmp byte ptr [eax],0
	je Block358

 Block15:
	mov dword ptr [esp+0x14],0
	mov eax,dword ptr [edi+0x198]
	push eax
	lea ecx,[edi+0x190]
	push ecx
	mov byte ptr [esp+0x9C],8
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x24]
	push 0x182E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x28]
	mov bl,9
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0xA
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [edi+0x1A4]
	push eax
	lea ecx,[edi+0x19C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x182F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0xB
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0xC
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,dword ptr [edi+0x1B0]
	push eax
	lea ecx,[edi+0x1A8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1830
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0xD
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0xE
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov eax,dword ptr [edi+0x1BC]
	push eax
	lea ecx,[edi+0x1B4]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1831
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0xF
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x10
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov eax,dword ptr [edi+0x1C8]
	push eax
	lea ecx,[edi+0x1C0]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x182D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x11
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x12
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [edi+0x228]
	push eax
	lea ecx,[edi+0x220]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1847
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x13
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x14
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov eax,dword ptr [edi+0x234]
	push eax
	lea ecx,[edi+0x22C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1848
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x15
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x16
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	mov eax,dword ptr [edi+0x24C]
	push eax
	lea ecx,[edi+0x244]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1826
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x17
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x18
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov eax,dword ptr [edi+0x258]
	push eax
	lea ecx,[edi+0x250]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1825
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x19
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x1A
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	mov eax,dword ptr [edi+0x240]
	push eax
	lea ecx,[edi+0x238]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1822
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x1B
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x1C
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov eax,dword ptr [edi+0x264]
	push eax
	lea ecx,[edi+0x25C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x181A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x1D
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x1E
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	mov eax,dword ptr [edi+0x270]
	push eax
	lea ecx,[edi+0x268]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1834
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x1F
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x20
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block61:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block63:
	mov eax,dword ptr [edi+0x27C]
	push eax
	lea ecx,[edi+0x274]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x181C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x21
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x22
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block67

 Block66:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block67:
	mov eax,dword ptr [edi+0x288]
	push eax
	lea ecx,[edi+0x280]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1832
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x23
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x24
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block69:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block71:
	mov eax,dword ptr [edi+0x294]
	push eax
	lea ecx,[edi+0x28C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1853
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x25
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x26
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block73:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block75

 Block74:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block75:
	mov eax,dword ptr [edi+0x2A0]
	push eax
	lea ecx,[edi+0x298]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1843
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x27
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x28
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block77:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	mov eax,dword ptr [edi+0x2AC]
	push eax
	lea ecx,[edi+0x2A4]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1854
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x29
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x2A
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block81:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block83

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block83:
	mov eax,dword ptr [edi+0x2B8]
	push eax
	lea ecx,[edi+0x2B0]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1844
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x2B
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x2C
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block85:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block87:
	mov eax,dword ptr [edi+0x2C4]
	push eax
	lea ecx,[edi+0x2BC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1828
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x2D
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x2E
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block89:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	mov eax,dword ptr [edi+0x2D0]
	push eax
	lea ecx,[edi+0x2C8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1855
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x2F
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x30
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	mov eax,dword ptr [edi+0x2DC]
	push eax
	lea ecx,[edi+0x2D4]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1845
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x31
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x32
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block97

 Block96:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block97:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block99

 Block98:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block99:
	mov eax,dword ptr [edi+0x2E8]
	push eax
	lea ecx,[edi+0x2E0]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1850
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x33
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x34
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block101

 Block100:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block101:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block103

 Block102:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block103:
	mov eax,dword ptr [edi+0x2F4]
	push eax
	lea ecx,[edi+0x2EC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x183F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x35
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x36
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block105

 Block104:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block105:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block107

 Block106:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block107:
	mov eax,dword ptr [edi+0x300]
	push eax
	lea ecx,[edi+0x2F8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1835
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x37
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x38
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block109

 Block108:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block109:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block111:
	mov eax,dword ptr [edi+0x318]
	push eax
	lea ecx,[edi+0x310]
	push ecx
	call _ZtlSecureFuseHelper<unsigned long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x182B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x39
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x3A
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block113

 Block112:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block113:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block115

 Block114:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block115:
	mov eax,dword ptr [edi+0x324]
	push eax
	lea ecx,[edi+0x31C]
	push ecx
	call _ZtlSecureFuseHelper<unsigned long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x182C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x3B
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x3C
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block117

 Block116:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block117:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block119

 Block118:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block119:
	mov eax,dword ptr [edi+0x30C]
	push eax
	lea ecx,[edi+0x304]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x182A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x3D
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x3E
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block121

 Block120:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block121:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block123

 Block122:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block123:
	mov eax,dword ptr [edi+0x330]
	push eax
	lea ecx,[edi+0x328]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x183A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x3F
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x40
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block125

 Block124:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block125:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block127

 Block126:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block127:
	mov eax,dword ptr [edi+0x33C]
	push eax
	lea ecx,[edi+0x334]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x181D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x41
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x42
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block129

 Block128:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block129:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block131

 Block130:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block131:
	mov eax,dword ptr [edi+0x348]
	push eax
	lea ecx,[edi+0x340]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1862
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x43
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x44
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block133

 Block132:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block133:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block135

 Block134:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block135:
	mov eax,dword ptr [edi+0x354]
	push eax
	lea ecx,[edi+0x34C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1846
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x45
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x46
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block137

 Block136:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block137:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block139

 Block138:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block139:
	mov eax,dword ptr [edi+0x360]
	push eax
	lea ecx,[edi+0x358]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1851
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x47
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x48
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block141

 Block140:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block141:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block143

 Block142:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block143:
	mov eax,dword ptr [edi+0x36C]
	push eax
	lea ecx,[edi+0x364]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1840
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x49
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x4A
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block145

 Block144:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block145:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block147

 Block146:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block147:
	mov eax,dword ptr [edi+0x378]
	push eax
	lea ecx,[edi+0x370]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1839
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x4B
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x4C
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block149

 Block148:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block149:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block151

 Block150:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block151:
	mov eax,dword ptr [edi+0x384]
	push eax
	lea ecx,[edi+0x37C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1858
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x4D
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x4E
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block153

 Block152:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block153:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block155

 Block154:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block155:
	mov eax,dword ptr [edi+0x390]
	push eax
	lea ecx,[edi+0x388]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1859
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x4F
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x50
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block157

 Block156:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block157:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block159

 Block158:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block159:
	mov eax,dword ptr [edi+0x39C]
	push eax
	lea ecx,[edi+0x394]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x184E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x51
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x52
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block161

 Block160:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block161:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block163

 Block162:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block163:
	mov eax,dword ptr [edi+0x3A8]
	push eax
	lea ecx,[edi+0x3A0]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1829
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x53
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x54
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block165

 Block164:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block165:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block167

 Block166:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block167:
	mov eax,dword ptr [edi+0x3B4]
	push eax
	lea ecx,[edi+0x3AC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x185B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x55
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x56
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block169

 Block168:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block169:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block171

 Block170:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block171:
	mov eax,dword ptr [edi+0x3C0]
	push eax
	lea ecx,[edi+0x3B8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1856
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x57
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x58
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block173

 Block172:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block173:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block175

 Block174:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block175:
	mov eax,dword ptr [edi+0x9C]
	push eax
	lea ecx,[edi+0x94]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1838
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x59
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x5A
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block177

 Block176:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block177:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block179

 Block178:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block179:
	mov eax,dword ptr [edi+0xA8]
	push eax
	lea ecx,[edi+0xA0]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x184D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x5B
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x5C
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block181

 Block180:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block181:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block183

 Block182:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block183:
	mov eax,dword ptr [edi+0xC]
	push eax
	lea ecx,[edi+4]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1837
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x5D
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x5E
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block185

 Block184:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block185:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block187

 Block186:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block187:
	mov eax,dword ptr [edi+0x18]
	push eax
	lea ecx,[edi+0x10]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x184C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x5F
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x60
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block189

 Block188:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block189:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block191

 Block190:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block191:
	mov eax,dword ptr [edi+0x24]
	push eax
	lea ecx,[edi+0x1C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x184F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x61
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x62
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block193

 Block192:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block193:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block195

 Block194:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block195:
	mov eax,dword ptr [edi+0x30]
	push eax
	lea ecx,[edi+0x28]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1852
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x63
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x64
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block197

 Block196:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block197:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block199

 Block198:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block199:
	mov eax,dword ptr [edi+0x3C]
	push eax
	lea ecx,[edi+0x34]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x183E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x65
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x66
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block201

 Block200:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block201:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block203

 Block202:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block203:
	mov eax,dword ptr [edi+0x48]
	push eax
	lea ecx,[edi+0x40]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1842
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x67
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x68
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block205

 Block204:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block205:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block207

 Block206:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block207:
	mov eax,dword ptr [edi+0x54]
	push eax
	lea ecx,[edi+0x4C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1819
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x69
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x6A
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block209

 Block208:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block209:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block211

 Block210:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block211:
	mov eax,dword ptr [edi+0x60]
	push eax
	lea ecx,[edi+0x58]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1833
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x6B
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x6C
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block213

 Block212:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block213:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block215

 Block214:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block215:
	mov eax,dword ptr [edi+0x6C]
	push eax
	lea ecx,[edi+0x64]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1823
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x6D
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x6E
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block217

 Block216:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block217:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block219

 Block218:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block219:
	mov eax,dword ptr [edi+0x78]
	push eax
	lea ecx,[edi+0x70]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x185E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x6F
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x70
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block221

 Block220:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block221:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block223

 Block222:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block223:
	mov eax,dword ptr [edi+0x84]
	push eax
	lea ecx,[edi+0x7C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x183D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x71
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x72
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block225

 Block224:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block225:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block227

 Block226:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block227:
	mov eax,dword ptr [edi+0x90]
	push eax
	lea ecx,[edi+0x88]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x184B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x73
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x74
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block229

 Block228:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block229:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block231

 Block230:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block231:
	mov eax,dword ptr [edi+0xB4]
	push eax
	lea ecx,[edi+0xAC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x184A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x75
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x76
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block233

 Block232:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block233:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block235

 Block234:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block235:
	mov eax,dword ptr [edi+0xC0]
	push eax
	lea ecx,[edi+0xB8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x183B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x77
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x78
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block237

 Block236:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block237:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block239

 Block238:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block239:
	mov eax,dword ptr [edi+0xCC]
	push eax
	lea ecx,[edi+0xC4]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x183C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x79
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x7A
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block241

 Block240:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block241:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block243

 Block242:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block243:
	mov eax,dword ptr [edi+0xD8]
	push eax
	lea ecx,[edi+0xD0]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1827
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x7B
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x7C
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block245

 Block244:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block245:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block247

 Block246:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block247:
	mov eax,dword ptr [edi+0xE4]
	push eax
	lea ecx,[edi+0xDC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1836
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x7D
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x7E
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block249

 Block248:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block249:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block251

 Block250:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block251:
	mov eax,dword ptr [edi+0xF0]
	push eax
	lea ecx,[edi+0xE8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x185D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x7F
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x80
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block253

 Block252:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block253:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block255

 Block254:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block255:
	mov eax,dword ptr [edi+0xFC]
	push eax
	lea ecx,[edi+0xF4]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1863
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x81
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x82
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block257

 Block256:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block257:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block259

 Block258:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block259:
	mov eax,dword ptr [edi+0x108]
	push eax
	lea ecx,[edi+0x100]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1860
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x83
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x84
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block261

 Block260:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block261:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block263

 Block262:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block263:
	mov eax,dword ptr [edi+0x114]
	push eax
	lea ecx,[edi+0x10C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1857
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x85
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x86
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block265

 Block264:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block265:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block267

 Block266:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block267:
	mov eax,dword ptr [edi+0x120]
	push eax
	lea ecx,[edi+0x118]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x185F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x87
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x88
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block269

 Block268:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block269:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block271

 Block270:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block271:
	mov eax,dword ptr [edi+0x12C]
	push eax
	lea ecx,[edi+0x124]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x181E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x89
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x8A
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block273

 Block272:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block273:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block275

 Block274:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block275:
	mov eax,dword ptr [edi+0x138]
	push eax
	lea ecx,[edi+0x130]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1820
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x8B
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x8C
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block277

 Block276:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block277:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block279

 Block278:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block279:
	mov eax,dword ptr [edi+0x144]
	push eax
	lea ecx,[edi+0x13C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x181F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x8D
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x8E
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block281

 Block280:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block281:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block283

 Block282:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block283:
	mov eax,dword ptr [edi+0x150]
	push eax
	lea ecx,[edi+0x148]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1841
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x8F
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x90
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block285

 Block284:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block285:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block287

 Block286:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block287:
	mov eax,dword ptr [edi+0x15C]
	push eax
	lea ecx,[edi+0x154]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1849
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x91
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x92
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block289

 Block288:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block289:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block291

 Block290:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block291:
	mov eax,dword ptr [edi+0x204]
	push eax
	lea ecx,[edi+0x1FC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x185A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x93
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x94
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block293

 Block292:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block293:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block295

 Block294:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block295:
	mov eax,dword ptr [edi+0x21C]
	push eax
	lea ecx,[edi+0x214]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x1821
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x95
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x96
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block297

 Block296:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block297:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block299

 Block298:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block299:
	mov eax,dword ptr [edi+0x18C]
	push eax
	lea ecx,[edi+0x184]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea edx,[esp+0x20]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0x14
	lea eax,[esp+0x20]
	push 0x181B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	mov bl,0x97
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x98
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block301

 Block300:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block301:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block303

 Block302:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block303:
	mov eax,dword ptr [edi+0x168]
	push eax
	lea eax,[edi+0x160]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea ecx,[esp+0x20]
	push offset _S_D__1
	push ecx
	call ZXString<char>::Format
	add esp,0x14
	lea edx,[esp+0x20]
	push 0x1867
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],0x99
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x9A
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],0x99
	test eax,eax
	je Block305

 Block304:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block305:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block307

 Block306:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block307:
	mov eax,dword ptr [edi+0x174]
	push eax
	lea eax,[edi+0x16C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea ecx,[esp+0x20]
	push offset _S_D__1
	push ecx
	call ZXString<char>::Format
	add esp,0x14
	lea edx,[esp+0x2C]
	push 0x1868
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x30]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],0x9B
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x9C
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x94],0x9B
	test eax,eax
	je Block309

 Block308:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block309:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block311

 Block310:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block311:
	mov eax,dword ptr [edi+0x180]
	push eax
	lea eax,[edi+0x178]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea ecx,[esp+0x20]
	push offset _S_D__1
	push ecx
	call ZXString<char>::Format
	add esp,0x14
	lea edx,[esp+0x34]
	push 0x1869
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x38]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],0x9D
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0x9E
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x94],0x9D
	test eax,eax
	je Block313

 Block312:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block313:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block315

 Block314:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block315:
	mov eax,dword ptr [edi+0x3D8]
	push eax
	lea eax,[edi+0x3D0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea ecx,[esp+0x20]
	push offset _S_D__1
	push ecx
	call ZXString<char>::Format
	add esp,0x14
	lea edx,[esp+0x3C]
	push 0x185C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x40]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],0x9F
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0xA0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x94],0x9F
	test eax,eax
	je Block317

 Block316:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block317:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block319

 Block318:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block319:
	mov eax,dword ptr [edi+0x3E4]
	push eax
	lea eax,[edi+0x3DC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea ecx,[esp+0x20]
	push offset _S_D__1
	push ecx
	call ZXString<char>::Format
	add esp,0x14
	lea edx,[esp+0x44]
	push 0x1864
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x48]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],0xA1
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0xA2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x94],0xA1
	test eax,eax
	je Block321

 Block320:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block321:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block323

 Block322:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block323:
	mov eax,dword ptr [edi+0x3F0]
	push eax
	lea eax,[edi+0x3E8]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea ecx,[esp+0x20]
	push offset _S_D__1
	push ecx
	call ZXString<char>::Format
	add esp,0x14
	lea edx,[esp+0x4C]
	push 0x1865
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x50]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],0xA3
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0xA4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x94],0xA3
	test eax,eax
	je Block325

 Block324:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block325:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block327

 Block326:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block327:
	mov eax,dword ptr [edi+0x3FC]
	push eax
	lea eax,[edi+0x3F4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	push eax
	lea ecx,[esp+0x20]
	push offset _S_D__1
	push ecx
	call ZXString<char>::Format
	add esp,0x14
	lea edx,[esp+0x54]
	push 0x1866
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x58]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],0xA5
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0xA6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x94],0xA5
	test eax,eax
	je Block329

 Block328:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block329:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block331

 Block330:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block331:
	mov eax,dword ptr [edi+0x408]
	push eax
	lea eax,[edi+0x400]
	push eax
	call _ZtlSecureFuseHelper<float>::call
	fstp qword ptr [esp]
	lea ecx,[esp+0x1C]
	push offset _S_1F
	push ecx
	call ZXString<char>::Format
	add esp,0x10
	lea edx,[esp+0x5C]
	push 0x1861
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ebp,dword ptr [esp+0x14]
	push ebp
	push eax
	lea eax,[esp+0x60]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xA0],0xA7
	call ZXString<char>::Replace
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x98],0xA8
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x94],0xA7
	test eax,eax
	je Block333

 Block332:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block333:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block335

 Block334:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block335:
	lea ecx,[esp+0x60]
	push 0x1867
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	mov ecx,esi
	call ZXString<char>::Find__0
	test eax,eax
	mov eax,dword ptr [esp+0x60]
	setge bl
	test eax,eax
	je Block337

 Block336:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block337:
	test bl,bl
	jne Block303

 Block338:
	lea edx,[esp+0x64]
	push 0x1868
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	mov ecx,esi
	call ZXString<char>::Find__0
	test eax,eax
	mov eax,dword ptr [esp+0x64]
	setge bl
	test eax,eax
	je Block340

 Block339:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block340:
	test bl,bl
	jne Block303

 Block341:
	lea eax,[esp+0x68]
	push 0x1869
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	mov ecx,esi
	call ZXString<char>::Find__0
	test eax,eax
	mov eax,dword ptr [esp+0x68]
	setge bl
	test eax,eax
	je Block343

 Block342:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block343:
	test bl,bl
	jne Block303

 Block344:
	lea ecx,[esp+0x6C]
	push 0x1864
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	mov ecx,esi
	call ZXString<char>::Find__0
	test eax,eax
	mov eax,dword ptr [esp+0x6C]
	setge bl
	test eax,eax
	je Block346

 Block345:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block346:
	test bl,bl
	jne Block303

 Block347:
	lea edx,[esp+0x70]
	push 0x1865
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	mov ecx,esi
	call ZXString<char>::Find__0
	test eax,eax
	mov eax,dword ptr [esp+0x70]
	setge bl
	test eax,eax
	je Block349

 Block348:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block349:
	test bl,bl
	jne Block303

 Block350:
	lea eax,[esp+0x74]
	push 0x1866
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	mov ecx,esi
	call ZXString<char>::Find__0
	test eax,eax
	mov eax,dword ptr [esp+0x74]
	setge bl
	test eax,eax
	je Block352

 Block351:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block352:
	test bl,bl
	jne Block303

 Block353:
	lea ecx,[esp+0x78]
	push 0x1861
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	mov ecx,esi
	call ZXString<char>::Find__0
	test eax,eax
	mov eax,dword ptr [esp+0x78]
	setge bl
	test eax,eax
	je Block355

 Block354:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block355:
	test bl,bl
	jne Block303

 Block356:
	mov byte ptr [esp+0x94],7
	test ebp,ebp
	je Block358

 Block357:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block358:
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block360

 Block359:
	call _xbstr_t::Data_t::Release

 Block360:
	cmp word ptr [esp+0x7C],8
	mov byte ptr [esp+0x94],2
	jne Block363

 Block361:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	test eax,eax
	je Block364

 Block362:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block364

 Block363:
	lea eax,[esp+0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block364:
	mov eax,dword ptr [esp+0xA0]
	mov byte ptr [esp+0x94],1
	test eax,eax
	je Block366

 Block365:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block366:
	mov eax,dword ptr [esp+0xA4]
	mov byte ptr [esp+0x94],0
	test eax,eax
	je Block368

 Block367:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block368:
	mov eax,esi
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret 0xC
}
}
// SKILLENTRY::GetAfterimageUOL
__SUB_CLASS_THIS(00249F20, __thiscall, 20513,  SKILLENTRY, Ztl_bstr_t*, Ztl_bstr_t*) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x234]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// get_element_attribute
// 6ED370
static uint8_t _SUB_2ED2D0_LOOKUP_TABLE_0[118] = {
0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 1, 8, 2, 8, 3, 4, 8, 8, 5, 8, 8, 8, 
0, 8, 8, 6, 8, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 1, 8, 2, 8, 3, 4, 8, 8, 5, 8, 8, 8, 
0, 8, 8, 6, 8, 7, 
};
__SUB(002ED2D0, __cdecl, 133285,  int32_t, const wchar_t*, long&) {
__asm {

 Block0:
	movzx ecx,word ptr [ecx]
	cmp ecx,0x75
	ja Block10

 Block1:
	movzx edx,byte ptr [ecx+_SUB_2ED2D0_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block2
cmp EDX, 1
je Block8
cmp EDX, 2
je Block4
cmp EDX, 3
je Block7
cmp EDX, 4
je Block3
cmp EDX, 5
je Block5
cmp EDX, 6
je Block6
cmp EDX, 7
je Block9
cmp EDX, 8
je Block10


 Block2:
	mov dword ptr [eax],0
	mov eax,1
	ret

 Block3:
	mov dword ptr [eax],1
	mov eax,1
	ret

 Block4:
	mov dword ptr [eax],2
	mov eax,1
	ret

 Block5:
	mov dword ptr [eax],3
	mov eax,1
	ret

 Block6:
	mov dword ptr [eax],4
	mov eax,1
	ret

 Block7:
	mov dword ptr [eax],5
	mov eax,1
	ret

 Block8:
	mov dword ptr [eax],6
	mov eax,1
	ret

 Block9:
	mov dword ptr [eax],7
	mov eax,1
	ret

 Block10:
	xor eax,eax
	ret
}
}
// CSkillInfo::GetMCGuardian
_SUB_EXCEPTION_HANDLER(2F3340)
__SUB_CLASS_THIS(002F3340, __thiscall, 21719,  CSkillInfo, const MCGUARDIANENTRY*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F3340
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
	mov dword ptr [esp+0x14],0
	lea eax,[esp+0x10]
	push eax
	lea edx,[esp+0x2C]
	push edx
	add ecx,0x68
	mov dword ptr [esp+0x28],0
	call ZMap<long, ZRef<MCGUARDIANENTRY>, long>::GetAt
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test edi,edi
	je Block4

 Block1:
	lea esi,[edi-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov eax,edi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// CSkillInfo::LoadCharLevelData
_SUB_EXCEPTION_HANDLER(3093A0)
__SUB_CLASS_THIS(003093A0, __thiscall, 21742,  CSkillInfo, int32_t, long, ZArray<CHARLEVELDATA>&, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3093A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ebp+0x10]
	xor ebx,ebx
	cmp eax,ebx
	sete cl
	mov dword ptr [ebp-4],ebx
	test cl,cl
	je Block2

 Block1:
	cmp eax,ebx
	jmp Block35

 Block2:
	cmp eax,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp-0x14],ebx
	call eax
	cmp eax,ebx
	jge Block6

 Block5:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov edi,dword ptr [ebp-0x14]
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x18],esp
	push 0x1674
	push ecx
	mov dword ptr [ebp-0x24],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],1
	cmp ecx,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],2
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	cmp eax,ebx
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	cmp esi,ebx
	je Block14

 Block13:
	lea eax,[edi-1]
	mov dword ptr [ebp-0x24],eax
	cmp eax,ebx
	jmp Block15

 Block14:
	cmp edi,ebx

 Block15:
	jg Block17

 Block16:
	push offset ZException::THROW_INFO
	lea edx,[ebp-0x18]
	push edx
	mov dword ptr [ebp-0x18],0x80004005
	call _CxxThrowException

 Block17:
	mov ecx,dword ptr [ebp-0x24]
	lea eax,[ebp-0x19]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	call ZArray<CHARLEVELDATA>::_Alloc
	mov dword ptr [ebp-0x20],ebx
	mov ebx,1
	mov dword ptr [ebp-0x14],0

 Block18:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],3
	test ecx,ecx
	je Block3

 Block19:
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block21

 Block20:
	cmp eax,0x80004002
	jne Block38

 Block21:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],6
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov esi,dword ptr [ebp-0x18]
	test esi,esi
	sete al
	test al,al
	je Block28

 Block26:
	mov byte ptr [ebp-4],0
	test esi,esi
	je Block33

 Block27:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax
	jmp Block33

 Block28:
	mov ecx,dword ptr [ebp-0x24]
	cmp dword ptr [ebp-0x20],ecx
	jge Block39

 Block29:
	mov edx,dword ptr [ebp+0xC]
	mov edi,dword ptr [edx]
	add edi,dword ptr [ebp-0x14]
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x38],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block31

 Block30:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block31:
	mov edx,dword ptr [ebp+8]
	push edx
	mov ecx,edi
	call CHARLEVELDATA::LoadCharLevelData
	inc dword ptr [ebp-0x20]
	add dword ptr [ebp-0x14],0x20
	mov byte ptr [ebp-4],0
	test esi,esi
	je Block33

 Block32:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block33:
	inc ebx
	cmp ebx,0xC8
	jle Block18

 Block34:
	mov eax,dword ptr [ebp+0x10]
	test eax,eax

 Block35:
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov eax,1
	lea esp,[ebp-0x48]
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
	ret 0xC

 Block38:
	push eax
	call _com_issue_error

 Block39:
	push offset ZException::THROW_INFO
	lea edx,[ebp-0x14]
	push edx
	mov dword ptr [ebp-0x14],0x80004005
	call _CxxThrowException
	int 3
}
}
// SKILLLEVELDATA::GetParsedCommonData
_SUB_EXCEPTION_HANDLER(2FE560)
__SUB_CLASS_THIS(002FE560, __thiscall, 21150,  SKILLLEVELDATA, long, NakedParam<ZXString<char>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2FE560
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
	mov dword ptr [esp+0x1C],ecx
	mov eax,dword ptr [esp+0x44]
	xor ebp,ebp
	mov dword ptr [esp+0x3C],ebp
	cmp eax,ebp
	je Block2

 Block1:
	cmp byte ptr [eax],0
	jne Block5

 Block2:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebp
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	xor eax,eax
	jmp Block60

 Block5:
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x3C],1
	cmp eax,ebp
	je Block11

 Block6:
	cmp byte ptr [eax],0
	je Block11

 Block7:
	push 1
	push ebp
	lea ecx,[esp+0x1C]
	call ZXString<char>::GetBuffer
	push eax
	call ___strlwr
	mov eax,dword ptr [esp+0x18]
	add esp,4
	cmp eax,ebp
	je Block9

 Block8:
	mov eax,dword ptr [eax-4]
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer

 Block11:
	mov dword ptr [esp+0x18],ebp
	mov ecx,dword ptr [esp+0x48]
	push ecx
	lea edx,[esp+0x1C]
	push offset _S_D__1
	push edx
	mov byte ptr [esp+0x48],2
	call ZXString<char>::Format
	add esp,0xC
	lea eax,[esp+0x20]
	push 0x3E5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x50]
	mov bl,3
	push edx
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x48],bl
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x40],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],bl
	cmp eax,ebp
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x3C],2
	cmp eax,ebp
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov dword ptr [esp+0x48],ebp
	mov byte ptr [esp+0x3C],5
	xor edi,edi
	mov bl,6

 Block16:
	cmp edi,ebp
	jl Block27

 Block17:
	lea eax,[esp+0x20]
	push 0x600
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	lea ecx,[esp+0x24]
	push 0x1879
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push esi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	cmp esi,ebp
	jl Block27

 Block22:
	cmp edi,ebp
	jl Block27

 Block23:
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push edi
	lea eax,[esi+2]
	push eax
	push edx
	lea ecx,[esp+0x28]
	call ZXString<char>::Mid
	mov ecx,dword ptr [esp+0x24]
	call SKILLLEVELDATA::GetArithmeticData
	push eax
	lea ecx,[esp+0x1C]
	push offset _S_D__1
	push ecx
	call ZXString<char>::Format
	add esp,0xC
	lea edx,[edi+1]
	push edx
	push esi
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x40],bl
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x3C],5
	cmp eax,ebp
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x48]
	push ecx
	push edx
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x40],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x3C],5
	cmp eax,ebp
	je Block16

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block16

 Block27:
	xor edi,edi
	mov bl,8

 Block28:
	cmp edi,ebp
	jl Block39

 Block29:
	lea ecx,[esp+0x2C]
	push 0x8D3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	lea edx,[esp+0x28]
	push 0x1879
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push esi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	cmp esi,ebp
	jl Block39

 Block34:
	cmp edi,ebp
	jl Block39

 Block35:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push edi
	lea ecx,[esi+2]
	push ecx
	push eax
	lea ecx,[esp+0x28]
	call ZXString<char>::Mid
	mov ecx,dword ptr [esp+0x24]
	call SKILLLEVELDATA::GetArithmeticData
	push eax
	lea edx,[esp+0x1C]
	push offset _S_D__1
	push edx
	call ZXString<char>::Format
	add esp,0xC
	lea eax,[edi+1]
	push eax
	push esi
	lea ecx,[esp+0x2C]
	push ecx
	lea ecx,[esp+0x20]
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x40],bl
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x3C],5
	cmp eax,ebp
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x48]
	push edx
	push eax
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esp+0x20]
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x40],9
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x3C],5
	cmp eax,ebp
	je Block28

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block28

 Block39:
	xor edi,edi
	mov bl,0xA

 Block40:
	cmp edi,ebp
	jl Block51

 Block41:
	lea edx,[esp+0x2C]
	push 0x1877
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	lea eax,[esp+0x28]
	push 0x1879
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push esi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	cmp esi,ebp
	jl Block51

 Block46:
	cmp edi,ebp
	jl Block51

 Block47:
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push edi
	lea edx,[esi+1]
	push edx
	push ecx
	lea ecx,[esp+0x28]
	call ZXString<char>::Mid
	mov ecx,dword ptr [esp+0x24]
	call SKILLLEVELDATA::GetArithmeticData
	push eax
	lea eax,[esp+0x1C]
	push offset _S_D__1
	push eax
	call ZXString<char>::Format
	add esp,0xC
	lea ecx,[edi+1]
	push ecx
	push esi
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esp+0x20]
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x40],bl
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x3C],5
	cmp eax,ebp
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x48]
	push eax
	push ecx
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esp+0x20]
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x40],0xB
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x3C],5
	cmp eax,ebp
	je Block40

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block40

 Block51:
	push ebp
	push ecx
	mov ecx,esp
	lea eax,[esp+0x1C]
	mov dword ptr [esp+0x38],esp
	push eax
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x24]
	call SKILLLEVELDATA::GetArithmeticData
	mov esi,eax
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],2
	cmp eax,ebp
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x3C],1
	cmp eax,ebp
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x3C],0
	cmp eax,ebp
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebp
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	mov eax,esi

 Block60:
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
// SKILLLEVELDATA::GetParsedCommonDataULONG
_SUB_EXCEPTION_HANDLER(2FDF60)
__SUB_CLASS_THIS(002FDF60, __thiscall, 21152,  SKILLLEVELDATA, unsigned long, NakedParam<ZXString<char>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2FDF60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x18],ecx
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],0
	test eax,eax
	je Block2

 Block1:
	cmp byte ptr [eax],0
	jne Block5

 Block2:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret 8

 Block5:
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x38],1
	test eax,eax
	je Block11

 Block6:
	cmp byte ptr [eax],0
	je Block11

 Block7:
	push 1
	push 0
	lea ecx,[esp+0x18]
	call ZXString<char>::GetBuffer
	push eax
	call __strlwr
	mov eax,dword ptr [esp+0x14]
	add esp,4
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [eax-4]
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	push eax
	lea ecx,[esp+0x14]
	call ZXString<char>::ReleaseBuffer

 Block11:
	mov dword ptr [esp+0x14],0
	mov ecx,dword ptr [esp+0x44]
	push ecx
	lea edx,[esp+0x18]
	push offset _S_D__1
	push edx
	mov byte ptr [esp+0x44],2
	call ZXString<char>::Format
	add esp,0xC
	lea eax,[esp+0x1C]
	push 0x3E5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x4C]
	mov bl,3
	push edx
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x44],bl
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x3C],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x38],bl
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],2
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	xor ebx,ebx
	mov dword ptr [esp+0x44],ebx
	xor edi,edi
	mov byte ptr [esp+0x38],5
	xor esi,esi
	lea ebx,[ebx]

 Block16:
	test esi,esi
	jl Block27

 Block17:
	lea eax,[esp+0x1C]
	push 0x600
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	lea ecx,[esp+0x20]
	push 0x1879
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	test edi,edi
	jl Block53

 Block22:
	test esi,esi
	jl Block27

 Block23:
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push esi
	lea eax,[edi+2]
	push eax
	push edx
	lea ecx,[esp+0x24]
	call ZXString<char>::Mid
	mov ecx,dword ptr [esp+0x20]
	call SKILLLEVELDATA::GetArithmeticDataULONG
	push eax
	lea ecx,[esp+0x18]
	push offset _S_D__1
	push ecx
	call ZXString<char>::Format
	add esp,0xC
	lea edx,[esi+1]
	push edx
	push edi
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x3C],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x38],5
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov ecx,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0x44]
	push ecx
	push ebx
	lea edx,[esp+0x30]
	push edx
	lea ecx,[esp+0x1C]
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x3C],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x38],5
	test eax,eax
	je Block16

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block16

 Block27:
	test edi,edi
	jl Block53

 Block28:
	nop

 Block29:
	test esi,esi
	jl Block40

 Block30:
	lea eax,[esp+0x28]
	push 0x8D3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	lea ecx,[esp+0x24]
	push 0x1879
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	test edi,edi
	jl Block53

 Block35:
	test esi,esi
	jl Block40

 Block36:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push esi
	lea eax,[edi+2]
	push eax
	push edx
	lea ecx,[esp+0x24]
	call ZXString<char>::Mid
	mov ecx,dword ptr [esp+0x20]
	call SKILLLEVELDATA::GetArithmeticDataULONG
	push eax
	lea ecx,[esp+0x18]
	push offset _S_D__1
	push ecx
	call ZXString<char>::Format
	add esp,0xC
	lea edx,[esi+1]
	push edx
	push edi
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x3C],8
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x38],5
	test eax,eax
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov ecx,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0x44]
	push ecx
	push ebx
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esp+0x1C]
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x3C],9
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],5
	test eax,eax
	je Block29

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block29

 Block40:
	test edi,edi
	jl Block53

 Block41:
	nop

 Block42:
	test esi,esi
	jl Block53

 Block43:
	lea eax,[esp+0x28]
	push 0x1877
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	lea ecx,[esp+0x24]
	push 0x1879
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	test edi,edi
	jl Block53

 Block48:
	test esi,esi
	jl Block53

 Block49:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push esi
	lea eax,[edi+1]
	push eax
	push edx
	lea ecx,[esp+0x24]
	call ZXString<char>::Mid
	mov ecx,dword ptr [esp+0x20]
	call SKILLLEVELDATA::GetArithmeticDataULONG
	push eax
	lea ecx,[esp+0x18]
	push offset _S_D__1
	push ecx
	call ZXString<char>::Format
	add esp,0xC
	lea edx,[esi+1]
	push edx
	push edi
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x3C],0xA
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x38],5
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	mov ecx,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0x44]
	push ecx
	push ebx
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esp+0x1C]
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x3C],0xB
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],5
	test eax,eax
	je Block42

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block42

 Block53:
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esp+0x18]
	mov dword ptr [esp+0x34],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x20]
	call SKILLLEVELDATA::GetArithmeticDataULONG
	mov esi,eax
	mov byte ptr [esp+0x38],2
	test ebx,ebx
	je Block55

 Block54:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x38],1
	test eax,eax
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x38],0
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block61:
	mov eax,esi
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret 8
}
}
// SKILLLEVELDATA::GetParsedCommonDataFloat
_SUB_EXCEPTION_HANDLER(2FD950)
__SUB_CLASS_THIS(002FD950, __thiscall, 21154,  SKILLLEVELDATA, float, NakedParam<ZXString<char>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2FD950
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
	mov dword ptr [esp+0x1C],ecx
	mov eax,dword ptr [esp+0x44]
	xor ebp,ebp
	mov dword ptr [esp+0x3C],ebp
	cmp eax,ebp
	je Block2

 Block1:
	cmp byte ptr [eax],0
	jne Block5

 Block2:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebp
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	fldz
	jmp Block62

 Block5:
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x3C],1
	cmp eax,ebp
	je Block11

 Block6:
	cmp byte ptr [eax],0
	je Block11

 Block7:
	push 1
	push ebp
	lea ecx,[esp+0x1C]
	call ZXString<char>::GetBuffer
	push eax
	call __strlwr
	mov eax,dword ptr [esp+0x18]
	add esp,4
	cmp eax,ebp
	je Block9

 Block8:
	mov eax,dword ptr [eax-4]
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer

 Block11:
	mov dword ptr [esp+0x18],ebp
	mov ecx,dword ptr [esp+0x48]
	push ecx
	lea edx,[esp+0x1C]
	push offset _S_D__1
	push edx
	mov byte ptr [esp+0x48],2
	call ZXString<char>::Format
	add esp,0xC
	lea eax,[esp+0x20]
	push 0x3E5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x50]
	mov bl,3
	push edx
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x48],bl
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x40],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],bl
	cmp eax,ebp
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x3C],2
	cmp eax,ebp
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov dword ptr [esp+0x48],ebp
	xor edi,edi
	mov byte ptr [esp+0x3C],5
	xor esi,esi
	mov bl,6

 Block16:
	cmp esi,ebp
	jl Block27

 Block17:
	lea eax,[esp+0x20]
	push 0x600
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	lea ecx,[esp+0x24]
	push 0x1879
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	cmp edi,ebp
	jl Block53

 Block22:
	cmp esi,ebp
	jl Block27

 Block23:
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push esi
	lea eax,[edi+2]
	push eax
	push edx
	lea ecx,[esp+0x28]
	call ZXString<char>::Mid
	mov ecx,dword ptr [esp+0x24]
	call SKILLLEVELDATA::GetArithmeticDataFloat
	fstp dword ptr [esp+0x28]
	fld dword ptr [esp+0x28]
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esp+0x20]
	push offset _S_1F
	push ecx
	call ZXString<char>::Format
	add esp,0x10
	lea edx,[esi+1]
	push edx
	push edi
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x40],bl
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x3C],5
	cmp eax,ebp
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x48]
	push ecx
	push edx
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x40],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x3C],5
	cmp eax,ebp
	je Block16

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block16

 Block27:
	cmp edi,ebp
	jl Block53

 Block28:
	mov bl,8
	lea ebx,[ebx]

 Block29:
	cmp esi,ebp
	jl Block40

 Block30:
	lea ecx,[esp+0x30]
	push 0x8D3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	lea edx,[esp+0x2C]
	push 0x1879
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	cmp edi,ebp
	jl Block53

 Block35:
	cmp esi,ebp
	jl Block40

 Block36:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push esi
	lea ecx,[edi+2]
	push ecx
	push eax
	lea ecx,[esp+0x28]
	call ZXString<char>::Mid
	mov ecx,dword ptr [esp+0x24]
	call SKILLLEVELDATA::GetArithmeticDataFloat
	fstp dword ptr [esp+0x28]
	fld dword ptr [esp+0x28]
	sub esp,8
	fstp qword ptr [esp]
	lea edx,[esp+0x20]
	push offset _S_1F
	push edx
	call ZXString<char>::Format
	add esp,0x10
	lea eax,[esi+1]
	push eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	lea ecx,[esp+0x20]
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x40],bl
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x3C],5
	cmp eax,ebp
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x48]
	push edx
	push eax
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esp+0x20]
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x40],9
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x3C],5
	cmp eax,ebp
	je Block29

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block29

 Block40:
	cmp edi,ebp
	jl Block53

 Block41:
	mov bl,0xA
	lea esp,[esp]

 Block42:
	cmp esi,ebp
	jl Block53

 Block43:
	lea edx,[esp+0x30]
	push 0x1877
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	lea eax,[esp+0x2C]
	push 0x1879
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	cmp edi,ebp
	jl Block53

 Block48:
	cmp esi,ebp
	jl Block53

 Block49:
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push esi
	lea edx,[edi+1]
	push edx
	push ecx
	lea ecx,[esp+0x28]
	call ZXString<char>::Mid
	mov ecx,dword ptr [esp+0x24]
	call SKILLLEVELDATA::GetArithmeticDataFloat
	fstp dword ptr [esp+0x28]
	fld dword ptr [esp+0x28]
	sub esp,8
	fstp qword ptr [esp]
	lea eax,[esp+0x20]
	push offset _S_1F
	push eax
	call ZXString<char>::Format
	add esp,0x10
	lea ecx,[esi+1]
	push ecx
	push edi
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esp+0x20]
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x40],bl
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x3C],5
	cmp eax,ebp
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x48]
	push eax
	push ecx
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esp+0x20]
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x40],0xB
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x3C],5
	cmp eax,ebp
	je Block42

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block42

 Block53:
	push ebp
	push ecx
	mov ecx,esp
	lea eax,[esp+0x1C]
	mov dword ptr [esp+0x38],esp
	push eax
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x24]
	call SKILLLEVELDATA::GetArithmeticDataFloat
	fstp dword ptr [esp+0x30]
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],2
	cmp eax,ebp
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x3C],1
	cmp eax,ebp
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x3C],0
	cmp eax,ebp
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebp
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block61:
	fld dword ptr [esp+0x30]

 Block62:
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
// MOBSKILLLEVELDATA::~MOBSKILLLEVELDATA
_SUB_EXCEPTION_HANDLER(2F4700)
__SUB_CLASS_THIS0(002F4700, __thiscall, 21466,  MOBSKILLLEVELDATA, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F4700
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
	lea ecx,[esi+0x58]
	mov dword ptr [esp+0x18],4
	call ZArray<unsigned long>::RemoveAll
	mov ecx,dword ptr [esi+0x54]
	xor edi,edi
	cmp ecx,edi
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x54],edi

 Block2:
	mov ecx,dword ptr [esi+0x50]
	cmp ecx,edi
	je Block4

 Block3:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x50],edi

 Block4:
	mov ecx,dword ptr [esi+0x4C]
	cmp ecx,edi
	je Block6

 Block5:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x4C],edi

 Block6:
	mov ecx,dword ptr [esi+0x48]
	cmp ecx,edi
	je Block8

 Block7:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x48],edi

 Block8:
	mov ecx,dword ptr [esi+0x44]
	cmp ecx,edi
	je Block10

 Block9:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x44],edi

 Block10:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// MOBSKILLLEVELDATA::GetEffectUOL
__SUB_CLASS_THIS(00249FD0, __thiscall, 21459,  MOBSKILLLEVELDATA, Ztl_bstr_t*, Ztl_bstr_t*) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x44]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CSkillInfo::CheckConsumeForActiveSkill
__SUB_CLASS_THIS(0030B010, __thiscall, 21729,  CSkillInfo, long, CharacterData&, const BasicStat&, const SecondaryStat&, long, long*, long*) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x24]
	mov eax,0x10624DD3
	imul ebx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [esp+0x10],ecx
	cdq
	mov ecx,0xA
	idiv ecx
	push esi
	xor esi,esi
	cmp edx,esi
	je Block2

 Block1:
	cmp edx,9
	jne Block7

 Block2:
	mov eax,ebx
	sub eax,0x4F7F90
	je Block7

 Block3:
	sub eax,0x2712
	je Block7

 Block4:
	sub eax,9
	je Block7

 Block5:
	push ebx
	call is_command_skill
	add esp,4
	test eax,eax
	jne Block7

 Block6:
	pop esi
	pop ebx
	add esp,0x10
	ret 0x18

 Block7:
	cmp ebx,0xA9634A
	je Block98

 Block8:
	cmp ebx,0xC7E7CA
	je Block98

 Block9:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebp
	push edi
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x18],esi
	mov dword ptr [esp+0x14],esi
	mov esi,dword ptr [esp+0x28]
	push ebx
	push esi
	call CSkillInfo::GetSkillLevel_0
	cmp ebx,0x1E9D28B
	mov ebp,eax
	jg Block33

 Block10:
	je Block31

 Block11:
	cmp ebx,0x1E84BEB
	jg Block25

 Block12:
	je Block23

 Block13:
	cmp ebx,0x1406F42
	je Block19

 Block14:
	cmp ebx,0x141F5E1
	jne Block45

 Block15:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 0x1424402
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	mov edi,eax
	test edi,edi
	je Block17

 Block16:
	lea eax,[esp+0x10]
	push eax
	push 0x142440A
	push esi
	call CSkillInfo::GetSkillLevel_0
	jmp Block43

 Block17:
	push 0
	push 0x1421CF2
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov edi,eax
	test edi,edi
	je Block45

 Block18:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x1421CF8
	push esi
	call CSkillInfo::GetSkillLevel_0
	jmp Block43

 Block19:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 0x1424402
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	mov edi,eax
	test edi,edi
	je Block21

 Block20:
	lea edx,[esp+0x10]
	push edx
	push 0x1424409
	push esi
	call CSkillInfo::GetSkillLevel_0
	jmp Block43

 Block21:
	push 0
	push 0x1421CF2
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov edi,eax
	test edi,edi
	je Block45

 Block22:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	push 0x1421CF7
	push esi
	call CSkillInfo::GetSkillLevel_0
	jmp Block43

 Block23:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 0x1EA1CC0
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov edi,eax
	test edi,edi
	je Block45

 Block24:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x1EA1CC0
	push esi
	call CSkillInfo::GetSkillLevel_0
	jmp Block43

 Block25:
	cmp ebx,0x1E84BEF
	jl Block45

 Block26:
	cmp ebx,0x1E84BF3
	jle Block30

 Block27:
	cmp ebx,0x1E9D28A
	jne Block45

 Block28:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 0x1E9F5B0
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov edi,eax
	test edi,edi
	je Block45

 Block29:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	lea edx,[esp+0x10]
	push edx
	push 0x1E9F5B0
	push esi
	call CSkillInfo::GetSkillLevel_0
	jmp Block43

 Block30:
	push 0
	push 0x1E84BE9
	jmp Block42

 Block31:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	push 0x1EA1CC1
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov edi,eax
	test edi,edi
	je Block45

 Block32:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	push 0x1EA1CC1
	push esi
	call CSkillInfo::GetSkillLevel_0
	jmp Block43

 Block33:
	cmp ebx,0x217C062
	jg Block40

 Block34:
	cmp ebx,0x217C061
	jge Block39

 Block35:
	mov eax,ebx
	sub eax,0x2179951
	je Block38

 Block36:
	sub eax,1
	jne Block45

 Block37:
	push eax
	push 0x21612AC
	jmp Block42

 Block38:
	push 0
	push 0x21612A9
	jmp Block42

 Block39:
	push 0
	push 0x217C059
	jmp Block42

 Block40:
	cmp ebx,0x217E775
	jne Block45

 Block41:
	push 0
	push 0x217C05C

 Block42:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov edi,eax

 Block43:
	test edi,edi
	je Block45

 Block44:
	mov ebp,edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	jne Block46

 Block45:
	mov edi,dword ptr [esp+0x14]

 Block46:
	test ebp,ebp
	jle Block49

 Block47:
	mov eax,dword ptr [esp+0x2C]
	cmp ebx,0x111AF2
	jne Block50

 Block48:
	mov ecx,dword ptr [eax+0x3EC]
	push ecx
	add eax,0x3E4
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xA
	jge Block50

 Block49:
	pop edi
	pop ebp
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0x18

 Block50:
	push ebp
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	lea edx,[esp+0x14]
	push edx
	mov ebp,eax
	push ebx
	push esi
	mov dword ptr [esp+0x30],ebp
	call get_amplification
	mov eax,dword ptr [ebp+0x9C]
	push eax
	lea ecx,[ebp+0x94]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x14
	mov edi,eax
	mov dword ptr [esp+0x10],edi
	cmp ebx,0x14011E
	jne Block52

 Block51:
	mov ebx,dword ptr [esp+0x28]
	mov edx,dword ptr [ebx+0x68]
	push edx
	lea eax,[ebx+0x60]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x69]
	push ecx
	lea edx,[esi+0x61]
	push edx
	mov edi,eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,edi
	cdq
	sub eax,edx
	sar eax,1
	add esp,0x10
	cmp eax,ecx
	jmp Block54

 Block52:
	cmp ebx,0x14011D
	jne Block56

 Block53:
	mov ebx,dword ptr [esp+0x28]
	mov ecx,ebx
	call BasicStat::_ZtlSecureGet_nMHP
	mov ecx,eax
	mov eax,0x66666667
	imul ecx
	sar edx,1
	mov edi,edx
	shr edi,0x1F
	mov ecx,esi
	add edi,edx
	call GW_CharacterStat::_ZtlSecureGet_nHP
	cmp edi,eax

 Block54:
	jg Block70

 Block55:
	mov ecx,ebp
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	mov ecx,ebx
	mov edi,eax
	call BasicStat::_ZtlSecureGet_nMHP
	imul edi,eax
	mov eax,0x51EB851F
	imul edi
	sar edx,5
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov dword ptr [esp+0x10],edi

 Block56:
	mov edx,dword ptr [ebp+0xA8]
	push edx
	lea eax,[ebp+0xA0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	imul ecx,dword ptr [esp+0x1C]
	mov eax,0x51EB851F
	imul ecx
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [eax+0x704]
	sar edx,5
	mov ebx,edx
	shr ebx,0x1F
	push ecx
	add eax,0x6FC
	add ebx,edx
	push eax
	mov dword ptr [esp+0x38],ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x10
	test eax,eax
	je Block58

 Block57:
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx

 Block58:
	mov eax,dword ptr [esp+0x2C]
	mov edx,dword ptr [eax+0x7A0]
	push edx
	add eax,0x798
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [esp+0x2C]
	call SecondaryStat::_ZtlSecureGet_nConcentration_
	mov ecx,0x64
	sub ecx,eax
	mov dword ptr [esp+0x14],ecx
	fild dword ptr [esp+0x14]
	fimul dword ptr [esp+0x28]
	fdiv qword ptr [__real_4059000000000000]
	fadd qword ptr [__real_3fefae147ae147ae]
	call __ftol2_sse
	mov ebx,eax
	mov dword ptr [esp+0x28],ebx

 Block60:
	mov eax,dword ptr [esp+0x2C]
	mov edx,dword ptr [eax+0x2A8]
	push edx
	add eax,0x2A0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block65

 Block61:
	mov eax,dword ptr [esp+0x30]
	cmp eax,0x217C05C
	je Block64

 Block62:
	cmp eax,0x217E76D
	je Block64

 Block63:
	cmp eax,0x217E775
	jne Block65

 Block64:
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx

 Block65:
	mov eax,dword ptr [esp+0x30]
	push eax
	call is_teleport_skill
	add esp,4
	test eax,eax
	je Block68

 Block66:
	mov ecx,dword ptr [esp+0x2C]
	call SecondaryStat::_ZtlSecureGet_nTeleportMasteryOn_
	test eax,eax
	jle Block68

 Block67:
	mov ecx,dword ptr [esp+0x2C]
	call SecondaryStat::_ZtlSecureGet_nTeleportMasteryOn_
	add ebx,eax
	mov dword ptr [esp+0x28],ebx

 Block68:
	test edi,edi
	je Block71

 Block69:
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nHP
	cmp edi,eax
	jl Block71

 Block70:
	pop edi
	pop ebp
	pop esi
	mov eax,2
	pop ebx
	add esp,0x10
	ret 0x18

 Block71:
	test ebx,ebx
	je Block74

 Block72:
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nMP
	cmp ebx,eax
	jle Block74

 Block73:
	pop edi
	pop ebp
	pop esi
	mov eax,3
	pop ebx
	add esp,0x10
	ret 0x18

 Block74:
	mov ebx,dword ptr [esp+0x30]
	push ebx
	call is_keydown_skill
	add esp,4
	test eax,eax
	je Block76

 Block75:
	mov dword ptr [esp+0x28],0

 Block76:
	mov ecx,ebp
	call SKILLLEVELDATA::_ZtlSecureGet_nMoneyCon
	mov edi,eax
	cmp ebx,0x3EBA9C
	jne Block79

 Block77:
	mov ecx,dword ptr [esp+0x2C]
	call SecondaryStat::_ZtlSecureGet_nShadowPartner_
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [esp+0x1C]
	push offset _D_S_PSHADOWPARTNER
	push 0x3EBA9A
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [_D_S_PSHADOWPARTNER]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nY
	mov ecx,eax
	imul ecx,edi
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add edi,ecx

 Block79:
	test edi,edi
	je Block82

 Block80:
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nMoney
	cmp edi,eax
	jle Block82

 Block81:
	pop edi
	pop ebp
	pop esi
	mov eax,4
	pop ebx
	add esp,0x10
	ret 0x18

 Block82:
	mov ecx,ebp
	call SKILLLEVELDATA::_ZtlSecureGet_nItemCon
	test eax,eax
	je Block92

 Block83:
	mov ecx,dword ptr [esp+0x24]
	call SKILLLEVELDATA::_ZtlSecureGet_nItemConNo
	test eax,eax
	jle Block92

 Block84:
	mov edi,dword ptr [esp+0x24]
	mov ecx,edi
	call SKILLLEVELDATA::_ZtlSecureGet_nItemCon
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov ebx,edx
	shr ebx,0x1F
	add ebx,edx
	lea edx,[ebx-1]
	cmp edx,4
	ja Block91

 Block85:
	push ebx
	mov ecx,esi
	mov dword ptr [esp+0x30],0
	call CharacterData::GetItemSlotCount
	mov ebp,1
	cmp eax,ebp
	mov dword ptr [esp+0x1C],eax
	jl Block90

 Block86:
	push ebp
	push ebx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x14]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	je Block89

 Block87:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],eax
	call SKILLLEVELDATA::_ZtlSecureGet_nItemCon
	cmp dword ptr [esp+0x30],eax
	jne Block89

 Block88:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x20]
	mov ecx,edi
	call eax
	add dword ptr [esp+0x2C],eax

 Block89:
	inc ebp
	cmp ebp,dword ptr [esp+0x1C]
	jle Block86

 Block90:
	mov edi,dword ptr [esp+0x24]
	mov ecx,edi
	call SKILLLEVELDATA::_ZtlSecureGet_nItemConNo
	cmp eax,dword ptr [esp+0x2C]
	jle Block92

 Block91:
	mov ecx,edi
	call SKILLLEVELDATA::_ZtlSecureGet_nItemCon
	pop edi
	pop ebp
	pop esi
	pop ebx
	add esp,0x10
	ret 0x18

 Block92:
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block94

 Block93:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [eax],ecx
	jmp Block95

 Block94:
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nHP
	mov edx,eax
	sub edx,dword ptr [esp+0x10]
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecurePut_nHP

 Block95:
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block97

 Block96:
	mov edx,dword ptr [esp+0x28]
	pop edi
	pop ebp
	pop esi
	mov dword ptr [eax],edx
	mov eax,1
	pop ebx
	add esp,0x10
	ret 0x18

 Block97:
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nMP
	mov edx,eax
	sub edx,dword ptr [esp+0x28]
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecurePut_nMP
	pop edi
	pop ebp
	pop esi
	mov eax,1
	pop ebx
	add esp,0x10
	ret 0x18

 Block98:
	pop esi
	mov eax,1
	pop ebx
	add esp,0x10
	ret 0x18
}
}
// CSkillInfo::GetItemOptionSkill
_SUB_EXCEPTION_HANDLER(2F32A0)
__SUB_CLASS_THIS(002F32A0, __thiscall, 21723,  CSkillInfo, const ITEMOPTIONSKILLENTRY*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F32A0
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
	mov dword ptr [esp+0x14],0
	lea eax,[esp+0x10]
	push eax
	lea edx,[esp+0x2C]
	push edx
	add ecx,0xB0
	mov dword ptr [esp+0x28],0
	call ZMap<long, ZRef<ITEMOPTIONSKILLENTRY>, long>::GetAt
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test edi,edi
	je Block4

 Block1:
	lea esi,[edi-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov eax,edi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// CSkillInfo::IsMobChaseAttack
__SUB(00503190, __cdecl, 21730,  int32_t, const SKILLENTRY*, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block5

 Block1:
	mov eax,dword ptr [eax]
	cmp eax,0x3D0CEA
	je Block4

 Block2:
	cmp eax,0x4FAA91
	je Block4

 Block3:
	cmp eax,0xD5A36A
	jne Block5

 Block4:
	xor eax,eax
	ret

 Block5:
	mov eax,1
	ret
}
}
// CSkillInfo::LoadFinalAttack
_SUB_EXCEPTION_HANDLER(2F7680)
__SUB_CLASS_THIS(002F7680, __thiscall, 21736,  CSkillInfo, int32_t, ZArray<ZArray<long> >&, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F7680
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ebp+0xC]
	xor esi,esi
	cmp ecx,esi
	sete al
	mov dword ptr [ebp-4],esi
	test al,al
	je Block3

 Block1:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp ecx,esi
	je Block68

 Block2:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx
	jmp Block68

 Block3:
	cmp ecx,esi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea edx,[ebp-0x3C]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],1
	mov dword ptr [ebp-0x14],esi
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	lea ecx,[ebp-0x14]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov eax,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],3
	cmp eax,esi
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],4
	mov dword ptr [ebp-0x40],esi

 Block13:
	mov esi,dword ptr [ebp-0x14]
	test esi,esi
	je Block4

 Block14:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp-0x40]
	push edx
	lea eax,[ebp-0x30]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block62

 Block15:
	lea edx,[ebp-0x30]
	push edx
	lea eax,[ebp-0x18]
	push eax
	call DetachBSTR
	add esp,8
	mov ebx,dword ptr [ebp-0x18]
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block17

 Block16:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],6
	test ecx,ecx
	je Block4

 Block18:
	lea edx,[ebp-0x60]
	push edx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp-0x38],edi
	test eax,eax
	je Block21

 Block19:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x34]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x34]
	mov edi,ecx
	mov dword ptr [ebp-0x38],edi
	test eax,eax
	jge Block21

 Block20:
	cmp eax,0x80004002
	jne Block9

 Block21:
	mov esi,8
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x60],si
	jne Block24

 Block22:
	mov eax,dword ptr [ebp-0x58]
	xor edx,edx
	mov word ptr [ebp-0x60],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[ebp-0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block25:
	test edi,edi
	sete al
	test al,al
	jne Block51

 Block26:
	mov ecx,dword ptr [ebp+8]
	push 0xFFFFFFFF
	call ZArray<ZArray<long>>::InsertBefore
	mov esi,eax
	mov dword ptr [ebp-0x1C],esi
	test ebx,ebx
	je Block28

 Block27:
	mov eax,dword ptr [ebx]
	jmp Block29

 Block28:
	xor eax,eax

 Block29:
	push eax
	call __wtoi
	add esp,4
	push 0xFFFFFFFF
	mov ecx,esi
	mov ebx,eax
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],ebx
	xor ebx,ebx
	cmp edi,ebx
	je Block4

 Block30:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x20]
	push edx
	push edi
	mov dword ptr [ebp-0x20],ebx
	call eax
	cmp eax,ebx
	jge Block32

 Block31:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block32:
	cmp dword ptr [ebp-0x20],ebx
	jle Block38

 Block33:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x50]
	push ecx
	mov byte ptr [ebp-4],0xA
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	mov ecx,dword ptr [ebp-0x1C]
	add esp,8
	push 0xFFFFFFFF
	mov esi,eax
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	cmp word ptr [ebp-0x50],8
	mov byte ptr [ebp-4],9
	jne Block36

 Block34:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block37:
	inc ebx
	cmp ebx,dword ptr [ebp-0x20]
	jl Block33

 Block38:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],5
	call edx
	mov esi,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],4
	test esi,esi
	je Block46

 Block39:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block45

 Block40:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block42:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block44

 Block43:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block44:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block45:
	mov dword ptr [ebp-0x18],0

 Block46:
	cmp word ptr [ebp-0x30],8
	jne Block49

 Block47:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	test eax,eax
	je Block13

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block49:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block13

 Block50:
	jmp Block9

 Block51:
	mov byte ptr [ebp-4],5
	test edi,edi
	je Block53

 Block52:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block53:
	test ebx,ebx
	je Block55

 Block54:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block55:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x30],si
	jne Block58

 Block56:
	mov eax,dword ptr [ebp-0x28]
	xor edx,edx
	mov word ptr [ebp-0x30],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov eax,dword ptr [ebp-0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	xor eax,eax
	jmp Block69

 Block62:
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],3
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0
	call eax
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	mov eax,1

 Block69:
	lea esp,[ebp-0x74]
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
// SKILLLEVELDATA::_ZtlSecureGet_nFixDamage
__SUB_CLASS0(002EE7A0, __fastcall, 21132,  SKILLLEVELDATA, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xE4]
	push eax
	add ecx,0xDC
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// get_critical_skill_level
__SUB(0030A240, __cdecl, 133333,  long, const CharacterData&, long, long, long*, long*) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,dword ptr [esp+0x1C]
	push ebp
	mov ebp,dword ptr [esp+0x1C]
	push esi
	xor esi,esi
	push edi
	mov edi,dword ptr [esp+0x18]
	mov dword ptr [ebx],esi
	mov dword ptr [ebp],esi
	mov eax,dword ptr [edi+0x3D]
	push eax
	lea ecx,[edi+0x39]
	push ecx
	mov dword ptr [esp+0x18],esi
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,3
	jne Block2

 Block1:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x1C9C396
	push edi
	call CSkillInfo::GetSkillLevel_0
	mov edi,dword ptr [esp+0x10]
	jmp Block13

 Block2:
	mov edx,dword ptr [esp+0x1C]
	push edx
	call get_weapon_type
	add eax,0xFFFFFFD3
	add esp,4
	cmp eax,3
	ja Block17

 Block3:
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block4
cmp EAX, 2
je Block8
cmp EAX, 3
je Block12


 Block4:
	cmp dword ptr [esp+0x20],1
	jne Block16

 Block5:
	mov ecx,edi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	cwde
	push eax
	call is_cygnus_job
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	add esp,4
	test eax,eax
	je Block7

 Block6:
	push offset _D_S_PWINDBREAKER_C
	push 0xC65D40
	push edi
	call CSkillInfo::GetSkillLevel_0
	mov edi,dword ptr [_D_S_PWINDBREAKER_C]
	jmp Block13

 Block7:
	push offset _D_S_PARCHER_CRITIC
	push 0x2DC6C1
	push edi
	call CSkillInfo::GetSkillLevel_0
	mov edi,dword ptr [_D_S_PARCHER_CRITIC]
	jmp Block13

 Block8:
	cmp dword ptr [esp+0x20],1
	jne Block16

 Block9:
	mov ecx,edi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx ecx,ax
	push ecx
	call is_cygnus_job
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	add esp,4
	test eax,eax
	je Block11

 Block10:
	push offset _D_S_PNIGHTWALKER_C
	push 0xD72621
	push edi
	call CSkillInfo::GetSkillLevel_0
	mov edi,dword ptr [_D_S_PNIGHTWALKER_C]
	jmp Block13

 Block11:
	push offset _D_S_PASSASSIN_CRIT
	push 0x3E8FA1
	push edi
	call CSkillInfo::GetSkillLevel_0
	mov edi,dword ptr [_D_S_PASSASSIN_CRIT]
	jmp Block13

 Block12:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PSTRIKER_CRITI
	push 0xE68F70
	push edi
	call CSkillInfo::GetSkillLevel_0
	mov edi,dword ptr [_D_S_PSTRIKER_CRITI]

 Block13:
	mov esi,eax
	test edi,edi
	je Block16

 Block14:
	test esi,esi
	jle Block16

 Block15:
	push esi
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x114]
	push edx
	add eax,0x10C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push esi
	mov ecx,edi
	mov dword ptr [ebp],eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0xD8]
	push ecx
	add eax,0xD0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	pop edi
	mov dword ptr [ebx],eax
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret

 Block16:
	pop edi
	mov eax,esi
	pop esi
	mov dword ptr [ebp],0
	pop ebp
	mov dword ptr [ebx],0
	pop ebx
	pop ecx
	ret

 Block17:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	pop ecx
	ret
}
}
// SKILLENTRY::GetRandomHitUOL
__SUB_CLASS_THIS(00115260, __thiscall, 20520,  SKILLENTRY, Ztl_bstr_t*, Ztl_bstr_t*, unsigned char, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0x10]
	push esi
	push edi
	push eax
	mov edi,ecx
	mov dword ptr [esp+0xC],0
	call SKILLENTRY::GetLevelData
	lea esi,[eax+0x210]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block2

 Block1:
	cmp dword ptr [eax-4],0
	jne Block4

 Block2:
	movzx ecx,byte ptr [esp+0x14]
	push ecx
	mov ecx,edi
	call SKILLENTRY::GetCharLevelData
	mov esi,eax
	test eax,eax
	jne Block4

 Block3:
	lea esi,[edi+0x228]

 Block4:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block9

 Block5:
	mov edi,dword ptr [eax-4]
	test edi,edi
	je Block9

 Block6:
	call _rand
	cdq
	idiv edi
	mov eax,dword ptr [esi]
	mov esi,dword ptr [esp+0x10]
	mov eax,dword ptr [eax+edx*4]
	mov dword ptr [esi],eax
	test eax,eax
	je Block8

 Block7:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	pop edi
	mov eax,esi
	pop esi
	pop ecx
	ret 0xC

 Block9:
	mov eax,dword ptr [esp+0x10]
	pop edi
	mov dword ptr [eax],0
	pop esi
	pop ecx
	ret 0xC
}
}
// SKILLLEVELDATA::GetArithmeticDataULONG
_SUB_EXCEPTION_HANDLER(2F8BA0)
__SUB_CLASS_THIS(002F8BA0, __thiscall, 21153,  SKILLLEVELDATA, unsigned long, NakedParam<ZXString<char>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F8BA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x80]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0x88],eax
	mov dword ptr [esp+0x18],eax
	lea eax,[esp+0x90]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x88],1

 Block1:
	lea ecx,[esp+0x38]
	push 0x187A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	test esi,esi
	jl Block5

 Block4:
	mov dword ptr [esp+0x14],1
	jmp Block14

 Block5:
	lea edx,[esp+0x3C]
	push 0x187B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov dword ptr [esp+0x14],2
	test esi,esi
	jge Block14

 Block8:
	lea eax,[esp+0x40]
	push 0x1817
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov dword ptr [esp+0x14],4
	test esi,esi
	jge Block14

 Block11:
	lea ecx,[esp+0x44]
	push 0x189D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov dword ptr [esp+0x14],3

 Block14:
	mov ebx,4
	xor edi,edi
	cmp dword ptr [esp+0x14],ebx
	jne Block31

 Block15:
	test esi,esi
	jne Block32

 Block16:
	lea edx,[esp+0x48]
	push 0x187A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	mov edi,1
	push edi
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	test esi,esi
	jl Block20

 Block19:
	mov dword ptr [esp+0x14],edi
	jmp Block29

 Block20:
	lea eax,[esp+0x4C]
	push 0x187B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov dword ptr [esp+0x14],2
	test esi,esi
	jge Block30

 Block23:
	lea ecx,[esp+0x50]
	push 0x1817
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov dword ptr [esp+0x14],ebx
	test esi,esi
	jge Block30

 Block26:
	lea edx,[esp+0x54]
	push 0x189D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov dword ptr [esp+0x14],3

 Block29:
	test esi,esi

 Block30:
	jle Block93

 Block31:
	test esi,esi

 Block32:
	jle Block93

 Block33:
	lea eax,[esp+0x58]
	push 0x187A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov ebp,eax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	cmp ebp,esi
	jge Block37

 Block36:
	test ebp,ebp
	jge Block39

 Block37:
	lea ecx,[esp+0x5C]
	push 0x187B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov ebp,eax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	cmp ebp,esi
	jge Block41

 Block40:
	test ebp,ebp
	jge Block43

 Block41:
	lea edx,[esp+0x60]
	push 0x189D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov ebp,eax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	cmp ebp,esi
	jl Block45

 Block44:
	or ebp,0xFFFFFFFF
	jmp Block46

 Block45:
	test ebp,ebp
	jge Block49

 Block46:
	test edi,edi
	jne Block49

 Block47:
	lea eax,[esp+0x64]
	push 0x1817
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push edi
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov ebp,eax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	cmp ebp,esi
	jl Block51

 Block50:
	or ebp,0xFFFFFFFF

 Block51:
	lea eax,[ebp+1]
	push esi
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x84],eax
	call ZXString<char>::Mid
	lea edx,[esp+0x68]
	push 0x187A
	push edx
	mov byte ptr [esp+0x90],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+1]
	push edi
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	test esi,esi
	jge Block67

 Block54:
	lea eax,[esp+0x6C]
	push 0x187B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	test esi,esi
	jge Block67

 Block57:
	lea ecx,[esp+0x70]
	push 0x189D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	test esi,esi
	jge Block67

 Block60:
	lea edx,[esp+0x74]
	push 0x1817
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	test esi,esi
	jge Block67

 Block63:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block65

 Block64:
	mov eax,dword ptr [eax-4]
	jmp Block66

 Block65:
	xor eax,eax

 Block66:
	lea esi,[eax+1]

 Block67:
	lea ebx,[esi-1]
	push ebx
	push edi
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Mid
	fldz
	mov ecx,dword ptr [esp+0x34]
	fstp dword ptr [esp+0x1C]
	push ecx
	call _atof
	fstp dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x34]
	push edx
	call _atof
	fstp dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x1C]
	dec eax
	add esp,8
	cmp eax,3
	ja Block74

 Block68:
	cmp EAX, 0
je Block69
cmp EAX, 1
je Block70
cmp EAX, 2
je Block71
cmp EAX, 3
je Block72


 Block69:
	fld dword ptr [esp+0x24]
	fmul dword ptr [esp+0x20]
	jmp Block73

 Block70:
	fld dword ptr [esp+0x20]
	fdiv dword ptr [esp+0x24]
	jmp Block73

 Block71:
	fld dword ptr [esp+0x24]
	fadd dword ptr [esp+0x20]
	jmp Block73

 Block72:
	fld dword ptr [esp+0x20]
	fsub dword ptr [esp+0x24]

 Block73:
	fstp dword ptr [esp+0x1C]

 Block74:
	test ebp,ebp
	jge Block83

 Block75:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block77

 Block76:
	mov eax,dword ptr [eax-4]
	jmp Block78

 Block77:
	xor eax,eax

 Block78:
	inc eax
	cmp esi,eax
	jne Block83

 Block79:
	cmp dword ptr [esp+0x94],0
	je Block83

 Block80:
	fld dword ptr [esp+0x1C]
	fadd qword ptr [__real_3feffffde7210be9]
	fnstcw word ptr [esp+0x14]
	movzx eax,word ptr [esp+0x14]
	or eax,0xC00
	mov dword ptr [esp+0x24],eax
	fldcw word ptr [esp+0x24]
	fistp qword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x24]
	fldcw word ptr [esp+0x14]
	fild dword ptr [esp+0x24]
	test eax,eax
	jge Block82

 Block81:
	fadd dword ptr [__real_4f800000]

 Block82:
	fstp dword ptr [esp+0x1C]

 Block83:
	mov dword ptr [esp+0x24],0
	fld dword ptr [esp+0x1C]
	mov byte ptr [esp+0x88],4
	call __ftol2_sse
	push eax
	lea ecx,[esp+0x28]
	push offset _S_D__1
	push ecx
	call ZXString<char>::Format
	mov edx,dword ptr [esp+0x84]
	add esp,0xC
	push ebx
	push edx
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::Mid
	mov esi,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x2C]
	push esi
	push ecx
	lea edx,[esp+0x84]
	push edx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x94],5
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x8C],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x88],5
	test eax,eax
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block85:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x88],4
	test eax,eax
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block87:
	mov byte ptr [esp+0x88],3
	test esi,esi
	je Block89

 Block88:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block89:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x88],2
	test eax,eax
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x88],1
	test eax,eax
	je Block1

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block1

 Block93:
	mov esi,dword ptr [esp+0x18]
	push esi
	call _atoi
	add esp,4
	mov edi,eax
	mov byte ptr [esp+0x88],0
	test esi,esi
	je Block95

 Block94:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block95:
	mov eax,dword ptr [esp+0x90]
	mov dword ptr [esp+0x88],0xFFFFFFFF
	test eax,eax
	je Block97

 Block96:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block97:
	mov eax,edi
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x78
	ret 8
}
}
// MCSKILLENTRY::~MCSKILLENTRY
_SUB_EXCEPTION_HANDLER(2F34C0)
__SUB_CLASS_THIS0(002F34C0, __thiscall, 21846,  MCSKILLENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F34C0
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
	mov eax,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// SKILLENTRY::GetLevelData
_SUB_EXCEPTION_HANDLER(308E10)
__SUB_CLASS_THIS(00308E10, __thiscall, 20507,  SKILLENTRY, const SKILLLEVELDATA&, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_308E10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
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
	cmp dword ptr [esi+0x200],0
	jne Block15

 Block1:
	cmp dword ptr [esi+0x40],0
	mov ebx,dword ptr [esi+0x70]
	je Block3

 Block2:
	add ebx,2

 Block3:
	test ebx,ebx
	jle Block11

 Block4:
	mov eax,dword ptr [esi+0x1FC]
	lea edi,[esi+0x1FC]
	test eax,eax
	je Block6

 Block5:
	mov eax,dword ptr [eax-4]

 Block6:
	cmp eax,ebx
	jae Block11

 Block7:
	lea eax,[ebp-0x15]
	push eax
	push ebx
	mov ecx,edi
	call ZArray<SKILLLEVELDATA>::_Alloc
	test ebx,ebx
	jle Block11

 Block8:
	xor edx,edx
	xor eax,eax
	mov ecx,ebx
	jmp Block10

 Block10:
	mov ebx,dword ptr [edi]
	mov dword ptr [eax+ebx+0x414],edx
	add eax,0x41C
	sub ecx,1
	jne Block10

 Block11:
	mov edi,dword ptr [ebp+8]
	mov edx,dword ptr [esi+0x1FC]
	mov ebx,edi
	imul ebx,0x41C
	cmp dword ptr [ebx+edx-8],0
	jne Block42

 Block12:
	cmp dword ptr [esi+0x200],0
	je Block41

 Block13:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [ecx],0
	push edi
	lea ecx,[esi+0x74]
	push ecx
	push 0
	push 0
	push 0xA
	push eax
	push edi
	mov dword ptr [ebp-4],0
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x200]
	mov byte ptr [ebp-4],1
	test ecx,ecx
	jne Block34

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov eax,dword ptr [esi+0x1FC]
	test eax,eax
	jne Block17

 Block16:
	xor ebx,ebx
	jmp Block18

 Block17:
	mov ebx,dword ptr [eax-4]

 Block18:
	mov edi,dword ptr [esi+0x200]
	test edi,edi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x14]
	push edx
	push edi
	mov dword ptr [ebp-0x14],0
	call eax
	test eax,eax
	jge Block22

 Block21:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block22:
	cmp ebx,dword ptr [ebp-0x14]
	je Block11

 Block23:
	mov edi,dword ptr [esi+0x200]
	xor ebx,ebx
	cmp edi,ebx
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x14]
	push edx
	push edi
	mov dword ptr [ebp-0x14],ebx
	call eax
	cmp eax,ebx
	jge Block27

 Block26:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block27:
	mov edx,dword ptr [ebp-0x14]
	lea ecx,[ebp-0x15]
	push ecx
	push edx
	lea ecx,[esi+0x1FC]
	call ZArray<SKILLLEVELDATA>::_Alloc
	mov edi,dword ptr [esi+0x200]
	mov dword ptr [ebp-0x14],ebx
	cmp edi,ebx
	je Block33

 Block28:
	lea ecx,[ecx]

 Block29:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x1C]
	push ecx
	push edi
	mov dword ptr [ebp-0x1C],0
	call edx
	test eax,eax
	jge Block31

 Block30:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block31:
	mov eax,dword ptr [ebp-0x14]
	cmp eax,dword ptr [ebp-0x1C]
	jae Block11

 Block32:
	mov ecx,dword ptr [esi+0x1FC]
	inc dword ptr [ebp-0x14]
	mov dword ptr [ebx+ecx+0x414],0
	mov edi,dword ptr [esi+0x200]
	add ebx,0x41C
	test edi,edi
	jne Block29

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block37

 Block35:
	cmp eax,0x80004002
	je Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	mov eax,dword ptr [esi+0x1FC]
	lea ecx,[ebx+eax-0x41C]
	mov edx,dword ptr [esi]
	push edx
	mov byte ptr [ebp-4],3
	call SKILLLEVELDATA::LoadLevelData
	cmp word ptr [ebp-0x2C],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block42

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block40:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block42

 Block41:
	push ecx
	mov eax,esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esi+0x1FC]
	mov dword ptr [ebp-0x1C],esp
	push edi
	lea eax,[esi+0x74]
	lea ecx,[ebx+edx-0x41C]
	mov edx,dword ptr [esi]
	push eax
	push edx
	call SKILLLEVELDATA::LoadLevelDataByCommon

 Block42:
	mov eax,dword ptr [esi+0x1FC]
	lea eax,[ebx+eax-0x41C]
	lea esp,[ebp-0x3C]
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
// CSkillInfo::GetMobTossSkillID
_SUB_EXCEPTION_HANDLER(2F4410)
__SUB_CLASS_THIS(002F4410, __thiscall, 21707,  CSkillInfo, long, const CharacterData&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F4410
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
	mov edi,ecx
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esp+0x18],offset ZList<long>::`vftable'
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x34],ebx
	call ZList<long>::AddTail_
	lea ecx,[esp+0x18]
	mov dword ptr [eax],0x1421CF3
	call ZList<long>::AddTail_
	lea ecx,[esp+0x18]
	mov dword ptr [eax],0x4215FC
	call ZList<long>::AddTail_
	mov dword ptr [eax],0x217994B
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block4

 Block1:
	mov ebp,dword ptr [esp+0x3C]

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<long>::GetNext
	mov esi,dword ptr [eax]
	add esp,4
	push ebx
	push esi
	push ebp
	mov ecx,edi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jg Block6

 Block3:
	cmp dword ptr [esp+0x14],ebx
	jne Block2

 Block4:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x18],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	xor eax,eax

 Block5:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4

 Block6:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x18],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	mov eax,esi
	jmp Block5
}
}
// CSkillInfo::LoadMobSkillLevelData
_SUB_EXCEPTION_HANDLER(306D30)
__SUB_CLASS_THIS(00306D30, __thiscall, 21746,  CSkillInfo, int32_t, long, ZArray<MOBSKILLLEVELDATA>&, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_306D30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x164
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ebp+0x7C]
	xor edi,edi
	cmp eax,edi
	sete cl
	mov dword ptr [ebp-4],edi
	test cl,cl
	je Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[ebp+0x54]
	push eax
	mov dword ptr [ebp+0x54],0x80004005
	call _CxxThrowException

 Block2:
	mov dword ptr [ebp-0x170],edi
	mov byte ptr [ebp-4],1
	cmp eax,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp+0x44],edi
	call eax
	cmp eax,edi
	jge Block6

 Block5:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov esi,dword ptr [ebp+0x44]
	cmp esi,edi
	jg Block8

 Block7:
	push offset ZException::THROW_INFO
	lea ecx,[ebp+0x54]
	push ecx
	mov dword ptr [ebp+0x54],0x80004005
	call _CxxThrowException

 Block8:
	mov ecx,dword ptr [ebp+0x78]
	lea edx,[ebp+0x53]
	push edx
	push esi
	call ZArray<MOBSKILLLEVELDATA>::_Alloc
	cmp esi,1
	mov dword ptr [ebp+0x5C],1
	jl Block184

 Block9:
	jmp Block11

 Block11:
	mov eax,0x20
	call __chkstk
	mov edi,dword ptr [ebp+0x5C]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],2
	test ecx,ecx
	je Block3

 Block12:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x24]
	mov dword ptr [ebp+0x24],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block14

 Block13:
	cmp eax,0x80004002
	jne Block187

 Block14:
	mov ebx,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x3C],bx
	jne Block17

 Block15:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov esi,dword ptr [ebp+0x24]
	test esi,esi
	sete al
	test al,al
	jne Block188

 Block19:
	mov eax,dword ptr [ebp+0x78]
	imul edi,0x5C
	mov ecx,dword ptr [eax]
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	lea edi,[edi+ecx-0x5C]
	push 0x7D2
	push edx
	mov dword ptr [ebp+0x60],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],6
	test esi,esi
	je Block3

 Block20:
	lea eax,[ebp-0x1C]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],7
	call get_int32
	add esp,8
	mov dword ptr [edi],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x1C],bx
	jne Block23

 Block21:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AA5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x5C]
	push ecx
	mov byte ptr [ebp-4],8
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],9
	call get_int32
	add esp,8
	mov dword ptr [edi+4],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x5C],bx
	jne Block27

 Block25:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block28:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x963
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x15C]
	mov byte ptr [ebp-4],0xA
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	imul eax,0x3E8
	add esp,8
	mov dword ptr [edi+0xC],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x15C],bx
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [ebp-0x15C],ax
	mov eax,dword ptr [ebp-0x154]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[ebp-0x15C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ABA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x7C]
	mov byte ptr [ebp-4],0xC
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	imul eax,0x3E8
	add esp,8
	mov dword ptr [edi+8],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x7C],bx
	jne Block35

 Block33:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[ebp-0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x964
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0xFC]
	push ecx
	mov byte ptr [ebp-4],0xE
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xF
	call get_int32
	add esp,8
	mov dword ptr [edi+0x10],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0xFC],bx
	jne Block39

 Block37:
	mov eax,dword ptr [ebp-0xF4]
	xor edx,edx
	mov word ptr [ebp-0xFC],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[ebp-0xFC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x3E5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x9C]
	mov byte ptr [ebp-4],0x10
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	add esp,8
	mov dword ptr [edi+0x14],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x9C],bx
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [ebp-0x9C],ax
	mov eax,dword ptr [ebp-0x94]
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[ebp-0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x3E6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x13C]
	mov byte ptr [ebp-4],0x12
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x13
	call get_int32
	add esp,8
	mov dword ptr [edi+0x18],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x13C],bx
	jne Block47

 Block45:
	mov eax,dword ptr [ebp-0x134]
	xor ecx,ecx
	mov word ptr [ebp-0x13C],cx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[ebp-0x13C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AA6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0xBC]
	push ecx
	mov byte ptr [ebp-4],0x14
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x15
	call get_int32
	add esp,8
	mov dword ptr [edi+0x34],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0xBC],bx
	jne Block51

 Block49:
	mov eax,dword ptr [ebp-0xB4]
	xor edx,edx
	mov word ptr [ebp-0xBC],dx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea eax,[ebp-0xBC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block52:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_RANDOMTARGET
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x11C]
	push ecx
	mov byte ptr [ebp-4],0x16
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x17
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x38],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x11C],bx
	jne Block55

 Block53:
	mov eax,dword ptr [ebp-0x114]
	xor edx,edx
	mov word ptr [ebp-0x11C],dx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea eax,[ebp-0x11C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block56:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xEED
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x2C]
	mov byte ptr [ebp-4],0x18
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x19
	call get_int32
	add esp,8
	mov dword ptr [edi+0x3C],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x2C],bx
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x685
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x4C]
	mov byte ptr [ebp-4],0x1A
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1B
	call _anon_get_char
	movzx ecx,al
	push ecx
	call _anon_char2elem_attr
	add esp,0xC
	mov dword ptr [edi+0x40],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x4C],bx
	jne Block63

 Block61:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	xor edi,edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ABE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x6C]
	mov byte ptr [ebp-4],0x1C
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],edi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,edi
	jge Block66

 Block65:
	cmp eax,0x80004002
	jne Block187

 Block66:
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp-0x6C],bx
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	cmp eax,edi
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ACB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x8C]
	mov byte ptr [ebp-4],0x20
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x1F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x21
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x30]
	mov dword ptr [ebp+0x30],edi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,edi
	jge Block72

 Block71:
	cmp eax,0x80004002
	jne Block187

 Block72:
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp-0x8C],bx
	jne Block75

 Block73:
	mov eax,dword ptr [ebp-0x84]
	xor ecx,ecx
	mov word ptr [ebp-0x8C],cx
	cmp eax,edi
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[ebp-0x8C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov ebx,dword ptr [ebp+0x4C]
	mov edi,dword ptr [ebp+0x30]
	test ebx,ebx
	sete al
	test al,al
	je Block79

 Block77:
	test edi,edi
	sete al
	test al,al
	je Block79

 Block78:
	mov eax,dword ptr [ebp+0x60]
	add eax,0x1C
	push eax
	call dword ptr [ZImports::_SetRectEmpty]
	jmp Block90

 Block79:
	test edi,edi
	je Block3

 Block80:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[ebp+0x20]
	push edx
	push edi
	mov dword ptr [ebp+0x20],0
	call eax
	test eax,eax
	jge Block82

 Block81:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block82:
	mov ecx,dword ptr [ebp+0x20]
	mov edx,dword ptr [edi]
	lea eax,[ebp+0x28]
	push eax
	mov dword ptr [ebp+4],ecx
	mov ecx,dword ptr [edx+0x20]
	push edi
	mov dword ptr [ebp+0x28],0
	call ecx
	test eax,eax
	jge Block84

 Block83:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block84:
	mov edx,dword ptr [ebp+0x28]
	mov dword ptr [ebp+0x64],edx
	test ebx,ebx
	je Block3

 Block85:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[ebp+0x1C]
	push ecx
	push ebx
	mov dword ptr [ebp+0x1C],0
	call edx
	test eax,eax
	jge Block87

 Block86:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block87:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	mov edi,dword ptr [ebp+0x1C]
	lea ecx,[ebp+0x54]
	push ecx
	push ebx
	mov dword ptr [ebp+0x54],0
	call edx
	test eax,eax
	jge Block89

 Block88:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block89:
	mov eax,dword ptr [ebp+4]
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ebp+0x54]
	push eax
	mov eax,dword ptr [ebp+0x60]
	push ecx
	push edi
	push edx
	add eax,0x1C
	push eax
	call dword ptr [ZImports::_SetRect]

 Block90:
	mov dword ptr [ebp+0x58],0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AAD
	push ecx
	mov byte ptr [ebp-4],0x24
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xAC]
	mov byte ptr [ebp-4],0x25
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x24
	call IWzProperty::Getitem
	cmp word ptr [ebp-0xAC],8
	movzx edi,word ptr [eax]
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[ebp-0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	test di,di
	je Block104

 Block95:
	lea edx,[ebp+8]
	push 0xB1B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ebp+0x74]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[ebp+0x58]
	push eax
	mov byte ptr [ebp-4],0x26
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x34]
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [ebp+0x60]
	mov ebx,dword ptr [ebp+0x34]
	add edi,0x44
	lea ecx,[ebp+0x34]
	cmp edi,ecx
	je Block100

 Block96:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block98

 Block97:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block98:
	mov dword ptr [edi],ebx
	test ebx,ebx
	je Block102

 Block99:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block100:
	test ebx,ebx
	je Block102

 Block101:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x34],0

 Block102:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x24
	test eax,eax
	je Block104

 Block103:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block104:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AB7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0xCC]
	push ecx
	mov byte ptr [ebp-4],0x27
	mov ecx,esi
	mov byte ptr [ebp-4],0x24
	call IWzProperty::Getitem
	cmp word ptr [ebp-0xCC],8
	movzx edi,word ptr [eax]
	jne Block107

 Block105:
	mov eax,dword ptr [ebp-0xC4]
	xor edx,edx
	mov word ptr [ebp-0xCC],dx
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea eax,[ebp-0xCC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block108:
	test di,di
	je Block118

 Block109:
	lea ecx,[ebp]
	push 0xB1C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ebp+0x74]
	mov eax,dword ptr [eax]
	push edx
	push ecx
	push eax
	lea edx,[ebp+0x58]
	push edx
	mov byte ptr [ebp-4],0x28
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x2C]
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [ebp+0x60]
	mov ebx,dword ptr [ebp+0x2C]
	add edi,0x48
	lea eax,[ebp+0x2C]
	cmp edi,eax
	je Block114

 Block110:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block112

 Block111:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block112:
	mov dword ptr [edi],ebx
	test ebx,ebx
	je Block116

 Block113:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block114:
	test ebx,ebx
	je Block116

 Block115:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x2C],0

 Block116:
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],0x24
	test eax,eax
	je Block118

 Block117:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block118:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x666
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0xEC]
	mov byte ptr [ebp-4],0x29
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x24
	call IWzProperty::Getitem
	cmp word ptr [ebp-0xEC],8
	movzx edi,word ptr [eax]
	jne Block121

 Block119:
	mov eax,dword ptr [ebp-0xE4]
	xor ecx,ecx
	mov word ptr [ebp-0xEC],cx
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea edx,[ebp-0xEC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	test di,di
	je Block132

 Block123:
	lea eax,[ebp+0x48]
	push 0xB1D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ebp+0x74]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[ebp+0x58]
	push eax
	mov byte ptr [ebp-4],0x2A
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x3C]
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [ebp+0x60]
	mov ebx,dword ptr [ebp+0x3C]
	add edi,0x4C
	lea ecx,[ebp+0x3C]
	cmp edi,ecx
	je Block128

 Block124:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block126

 Block125:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block126:
	mov dword ptr [edi],ebx
	test ebx,ebx
	je Block130

 Block127:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block128:
	test ebx,ebx
	je Block130

 Block129:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x3C],0

 Block130:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x24
	test eax,eax
	je Block132

 Block131:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block132:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x96D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x10C]
	push ecx
	mov byte ptr [ebp-4],0x2B
	mov ecx,esi
	mov byte ptr [ebp-4],0x24
	call IWzProperty::Getitem
	cmp word ptr [ebp-0x10C],8
	movzx edi,word ptr [eax]
	jne Block135

 Block133:
	mov eax,dword ptr [ebp-0x104]
	xor edx,edx
	mov word ptr [ebp-0x10C],dx
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea eax,[ebp-0x10C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block136:
	test di,di
	je Block144

 Block137:
	mov ecx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ebp+0x74]
	push ecx
	push edx
	lea eax,[ebp+0x58]
	push offset _S_SKILLMOBSKILLIMG__1
	push eax
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x38]
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [ebp+0x60]
	mov ebx,dword ptr [ebp+0x38]
	add edi,0x50
	lea ecx,[ebp+0x38]
	cmp edi,ecx
	je Block142

 Block138:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block140

 Block139:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block140:
	mov dword ptr [edi],ebx
	test ebx,ebx
	je Block144

 Block141:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block142:
	test ebx,ebx
	je Block144

 Block143:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x38],0

 Block144:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x5FD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x12C]
	push ecx
	mov byte ptr [ebp-4],0x2C
	mov ecx,esi
	mov byte ptr [ebp-4],0x24
	call IWzProperty::Getitem
	cmp word ptr [ebp-0x12C],8
	movzx edi,word ptr [eax]
	jne Block147

 Block145:
	mov eax,dword ptr [ebp-0x124]
	xor edx,edx
	mov word ptr [ebp-0x12C],dx
	test eax,eax
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea eax,[ebp-0x12C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block148:
	test di,di
	je Block156

 Block149:
	mov ecx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ebp+0x74]
	push ecx
	push edx
	lea eax,[ebp+0x58]
	push offset _S_SKILLMOBSKILLIMG
	push eax
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[ebp+0x40]
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [ebp+0x60]
	mov ebx,dword ptr [ebp+0x40]
	add edi,0x54
	lea ecx,[ebp+0x40]
	cmp edi,ecx
	je Block154

 Block150:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block152

 Block151:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block152:
	mov dword ptr [edi],ebx
	test ebx,ebx
	je Block156

 Block153:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block154:
	test ebx,ebx
	je Block156

 Block155:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x40],0

 Block156:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0xB1E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x14C]
	push ecx
	mov byte ptr [ebp-4],0x2D
	mov ecx,esi
	mov byte ptr [ebp-4],0x24
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2E
	call get_int32
	mov edi,dword ptr [ebp+0x60]
	mov ebx,8
	add esp,8
	mov dword ptr [edi+0x2C],eax
	mov byte ptr [ebp-4],0x24
	cmp word ptr [ebp-0x14C],bx
	jne Block159

 Block157:
	mov eax,dword ptr [ebp-0x144]
	xor edx,edx
	mov word ptr [ebp-0x14C],dx
	test eax,eax
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea eax,[ebp-0x14C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block160:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xB1F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x16C]
	mov byte ptr [ebp-4],0x2F
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x24
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x30
	call get_int32
	add esp,8
	mov dword ptr [edi+0x30],eax
	mov byte ptr [ebp-4],0x24
	cmp word ptr [ebp-0x16C],bx
	jne Block163

 Block161:
	xor eax,eax
	mov word ptr [ebp-0x16C],ax
	mov eax,dword ptr [ebp-0x164]
	test eax,eax
	je Block164

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block163:
	lea ecx,[ebp-0x16C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block164:
	xor ebx,ebx
	nop

 Block165:
	lea edx,[ebp+0xC]
	push edx
	call dword ptr [ZImports::_VariantInit]
	mov eax,0x20
	mov byte ptr [ebp-4],0x31
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0xDC]
	mov byte ptr [ebp-4],0x32
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x31
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp+0xC]
	push ecx
	mov byte ptr [ebp-4],0x33
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block187

 Block166:
	cmp word ptr [ebp-0xDC],8
	mov byte ptr [ebp-4],0x31
	jne Block169

 Block167:
	mov eax,dword ptr [ebp-0xD4]
	xor edx,edx
	mov word ptr [ebp-0xDC],dx
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea eax,[ebp-0xDC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block170:
	cmp word ptr [ebp+0xC],0
	lea ecx,[ebp+0xC]
	je Block176

 Block171:
	push 0
	push ecx
	call get_int32
	mov ecx,dword ptr [ebp+0x60]
	add esp,8
	push 0xFFFFFFFF
	add ecx,0x58
	mov edi,eax
	call ZArray<unsigned long>::InsertBefore
	mov dword ptr [eax],edi
	cmp word ptr [ebp+0xC],8
	mov byte ptr [ebp-4],0x24
	jne Block174

 Block172:
	mov eax,dword ptr [ebp+0x14]
	xor edx,edx
	mov word ptr [ebp+0xC],dx
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc ebx
	jmp Block165

 Block174:
	lea eax,[ebp+0xC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block175:
	inc ebx
	jmp Block165

 Block176:
	push ecx
	call dword ptr [ZImports::_VariantClear]
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x23
	test eax,eax
	je Block178

 Block177:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block178:
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block180

 Block179:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block180:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block182

 Block181:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block182:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],1
	call ecx
	mov eax,dword ptr [ebp+0x5C]
	inc eax
	cmp eax,dword ptr [ebp+0x44]
	mov dword ptr [ebp+0x5C],eax
	jle Block11

 Block183:
	xor edi,edi

 Block184:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block186

 Block185:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block186:
	mov eax,1
	lea esp,[ebp-0x180]
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

 Block187:
	push eax
	call _com_issue_error

 Block188:
	push offset ZException::THROW_INFO
	lea edx,[ebp+0x48]
	push edx
	mov dword ptr [ebp+0x48],0x80004005
	call _CxxThrowException
	int 3
}
}
// CSkillInfo::LoadLevelDataCommon
_SUB_EXCEPTION_HANDLER(2F47A0)
__SUB_CLASS_THIS(002F47A0, __thiscall, 21744,  CSkillInfo, int32_t, long, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<_x_com_ptr<IWzProperty>>, SKILLLEVELDATACommon&, long&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F47A0
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
	mov eax,dword ptr [esp+0x4C]
	xor edi,edi
	cmp eax,edi
	sete cl
	mov dword ptr [esp+0x40],1
	test cl,cl
	je Block6

 Block1:
	mov byte ptr [esp+0x40],0
	cmp eax,edi
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp eax,edi
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	xor eax,eax
	jmp Block759

 Block6:
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push offset _S_MAXLEVEL
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],2
	cmp ecx,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x40],3
	call _xvariant_t::op_long
	mov ecx,dword ptr [esp+0x58]
	mov esi,8
	mov dword ptr [ecx],eax
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block14

 Block9:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	cmp eax,edi
	je Block11

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block11:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block12:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x7D2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],4
	cmp ecx,edi
	jne Block15

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x18]
	push eax
	call ebx
	jmp Block12

 Block15:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],5
	cmp word ptr [eax],si
	jne Block17

 Block16:
	mov eax,dword ptr [eax+8]
	jmp Block18

 Block17:
	mov eax,offset _S___3

 Block18:
	mov ebp,dword ptr [esp+0x54]
	push 0xFFFFFFFF
	push eax
	mov ecx,ebp
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block22:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x7D4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],6
	cmp ecx,edi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],7
	cmp word ptr [eax],si
	jne Block26

 Block25:
	mov eax,dword ptr [eax+8]
	jmp Block27

 Block26:
	mov eax,offset _S___3

 Block27:
	push 0xFFFFFFFF
	lea ecx,[ebp+4]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block31:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x7D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],8
	cmp ecx,edi
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],9
	cmp word ptr [eax],si
	jne Block35

 Block34:
	mov eax,dword ptr [eax+8]
	jmp Block36

 Block35:
	mov eax,offset _S___3

 Block36:
	push 0xFFFFFFFF
	lea ecx,[ebp+8]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block40:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x7D6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0xA
	cmp ecx,edi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0xB
	cmp word ptr [eax],si
	jne Block44

 Block43:
	mov eax,dword ptr [eax+8]
	jmp Block45

 Block44:
	mov eax,offset _S___3

 Block45:
	push 0xFFFFFFFF
	lea ecx,[ebp+0xC]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block49:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x7D7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0xC
	cmp ecx,edi
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0xD
	cmp word ptr [eax],si
	jne Block53

 Block52:
	mov eax,dword ptr [eax+8]
	jmp Block54

 Block53:
	mov eax,offset _S___3

 Block54:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x10]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block58:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x7D8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0xE
	cmp ecx,edi
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0xF
	cmp word ptr [eax],si
	jne Block62

 Block61:
	mov eax,dword ptr [eax+8]
	jmp Block63

 Block62:
	mov eax,offset _S___3

 Block63:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x14]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block67:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x178E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x10
	cmp ecx,edi
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x11
	cmp word ptr [eax],si
	jne Block71

 Block70:
	mov eax,dword ptr [eax+8]
	jmp Block72

 Block71:
	mov eax,offset _S___3

 Block72:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x84]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block76:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x178F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x12
	cmp ecx,edi
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x13
	cmp word ptr [eax],si
	jne Block80

 Block79:
	mov eax,dword ptr [eax+8]
	jmp Block81

 Block80:
	mov eax,offset _S___3

 Block81:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x88]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block85:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1790
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x14
	cmp ecx,edi
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x15
	cmp word ptr [eax],si
	jne Block89

 Block88:
	mov eax,dword ptr [eax+8]
	jmp Block90

 Block89:
	mov eax,offset _S___3

 Block90:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x8C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block94:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1791
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x16
	cmp ecx,edi
	jne Block96

 Block95:
	push 0x80004003
	call _com_issue_error

 Block96:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x17
	cmp word ptr [eax],si
	jne Block98

 Block97:
	mov eax,dword ptr [eax+8]
	jmp Block99

 Block98:
	mov eax,offset _S___3

 Block99:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x90]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block102

 Block100:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block103:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1792
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x18
	cmp ecx,edi
	jne Block105

 Block104:
	push 0x80004003
	call _com_issue_error

 Block105:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x19
	cmp word ptr [eax],si
	jne Block107

 Block106:
	mov eax,dword ptr [eax+8]
	jmp Block108

 Block107:
	mov eax,offset _S___3

 Block108:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x94]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block111

 Block109:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block112:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x681
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x1A
	cmp ecx,edi
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x1B
	cmp word ptr [eax],si
	jne Block116

 Block115:
	mov eax,dword ptr [eax+8]
	jmp Block117

 Block116:
	mov eax,offset _S___3

 Block117:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x18]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block120

 Block118:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block121:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x682
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x1C
	cmp ecx,edi
	jne Block123

 Block122:
	push 0x80004003
	call _com_issue_error

 Block123:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x1D
	cmp word ptr [eax],si
	jne Block125

 Block124:
	mov eax,dword ptr [eax+8]
	jmp Block126

 Block125:
	mov eax,offset _S___3

 Block126:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x1C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block129

 Block127:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block130:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x67A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x1E
	cmp ecx,edi
	jne Block132

 Block131:
	push 0x80004003
	call _com_issue_error

 Block132:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x1F
	cmp word ptr [eax],si
	jne Block134

 Block133:
	mov eax,dword ptr [eax+8]
	jmp Block135

 Block134:
	mov eax,offset _S___3

 Block135:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x24]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block138

 Block136:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block139:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1ABC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x20
	cmp ecx,edi
	jne Block141

 Block140:
	push 0x80004003
	call _com_issue_error

 Block141:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x21
	cmp word ptr [eax],si
	jne Block143

 Block142:
	mov eax,dword ptr [eax+8]
	jmp Block144

 Block143:
	mov eax,offset _S___3

 Block144:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x28]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block147

 Block145:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block148:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x105B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x22
	cmp ecx,edi
	jne Block150

 Block149:
	push 0x80004003
	call _com_issue_error

 Block150:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x23
	cmp word ptr [eax],si
	jne Block152

 Block151:
	mov eax,dword ptr [eax+8]
	jmp Block153

 Block152:
	mov eax,offset _S___3

 Block153:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x2C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block156

 Block154:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block157:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x7DA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x24
	cmp ecx,edi
	jne Block159

 Block158:
	push 0x80004003
	call _com_issue_error

 Block159:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x25
	cmp word ptr [eax],si
	jne Block161

 Block160:
	mov eax,dword ptr [eax+8]
	jmp Block162

 Block161:
	mov eax,offset _S___3

 Block162:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x30]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block165

 Block163:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block166:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x7DB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x26
	cmp ecx,edi
	jne Block168

 Block167:
	push 0x80004003
	call _com_issue_error

 Block168:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x27
	cmp word ptr [eax],si
	jne Block170

 Block169:
	mov eax,dword ptr [eax+8]
	jmp Block171

 Block170:
	mov eax,offset _S___3

 Block171:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x34]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block174

 Block172:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block175:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x7DC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x28
	cmp ecx,edi
	jne Block177

 Block176:
	push 0x80004003
	call _com_issue_error

 Block177:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x29
	cmp word ptr [eax],si
	jne Block179

 Block178:
	mov eax,dword ptr [eax+8]
	jmp Block180

 Block179:
	mov eax,offset _S___3

 Block180:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x38]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block183

 Block181:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block184:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x7DD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x2A
	cmp ecx,edi
	jne Block186

 Block185:
	push 0x80004003
	call _com_issue_error

 Block186:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x2B
	cmp word ptr [eax],si
	jne Block188

 Block187:
	mov eax,dword ptr [eax+8]
	jmp Block189

 Block188:
	mov eax,offset _S___3

 Block189:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x3C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block192

 Block190:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block193:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x7DE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x2C
	cmp ecx,edi
	jne Block195

 Block194:
	push 0x80004003
	call _com_issue_error

 Block195:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x2D
	cmp word ptr [eax],si
	jne Block197

 Block196:
	mov eax,dword ptr [eax+8]
	jmp Block198

 Block197:
	mov eax,offset _S___3

 Block198:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x40]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block201

 Block199:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block202

 Block200:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block201:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block202:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x60C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x2E
	cmp ecx,edi
	jne Block204

 Block203:
	push 0x80004003
	call _com_issue_error

 Block204:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x2F
	cmp word ptr [eax],si
	jne Block206

 Block205:
	mov eax,dword ptr [eax+8]
	jmp Block207

 Block206:
	mov eax,offset _S___3

 Block207:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x44]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block210

 Block208:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block211:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0xE33
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x30
	cmp ecx,edi
	jne Block213

 Block212:
	push 0x80004003
	call _com_issue_error

 Block213:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x31
	cmp word ptr [eax],si
	jne Block215

 Block214:
	mov eax,dword ptr [eax+8]
	jmp Block216

 Block215:
	mov eax,offset _S___3

 Block216:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x48]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block219

 Block217:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block220

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block220

 Block219:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block220:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0xB86
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x32
	cmp ecx,edi
	jne Block222

 Block221:
	push 0x80004003
	call _com_issue_error

 Block222:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x33
	cmp word ptr [eax],si
	jne Block224

 Block223:
	mov eax,dword ptr [eax+8]
	jmp Block225

 Block224:
	mov eax,offset _S___3

 Block225:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x4C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block228

 Block226:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block229

 Block227:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block229

 Block228:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block229:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x963
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x34
	cmp ecx,edi
	jne Block231

 Block230:
	push 0x80004003
	call _com_issue_error

 Block231:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x35
	cmp word ptr [eax],si
	jne Block233

 Block232:
	mov eax,dword ptr [eax+8]
	jmp Block234

 Block233:
	mov eax,offset _S___3

 Block234:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x50]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block237

 Block235:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block238

 Block236:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block238

 Block237:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block238:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1681
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x36
	cmp ecx,edi
	jne Block240

 Block239:
	push 0x80004003
	call _com_issue_error

 Block240:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x37
	cmp word ptr [eax],si
	jne Block242

 Block241:
	mov eax,dword ptr [eax+8]
	jmp Block243

 Block242:
	mov eax,offset _S___3

 Block243:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x54]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block246

 Block244:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block247

 Block245:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block247

 Block246:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block247:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x964
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x38
	cmp ecx,edi
	jne Block249

 Block248:
	push 0x80004003
	call _com_issue_error

 Block249:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x39
	cmp word ptr [eax],si
	jne Block251

 Block250:
	mov eax,dword ptr [eax+8]
	jmp Block252

 Block251:
	mov eax,offset _S___3

 Block252:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x58]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block255

 Block253:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block256

 Block254:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block256

 Block255:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block256:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1682
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x3A
	cmp ecx,edi
	jne Block258

 Block257:
	push 0x80004003
	call _com_issue_error

 Block258:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x3B
	cmp word ptr [eax],si
	jne Block260

 Block259:
	mov eax,dword ptr [eax+8]
	jmp Block261

 Block260:
	mov eax,offset _S___3

 Block261:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x5C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block264

 Block262:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block265

 Block263:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block265

 Block264:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block265:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x690
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x3C
	cmp ecx,edi
	jne Block267

 Block266:
	push 0x80004003
	call _com_issue_error

 Block267:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x3D
	cmp word ptr [eax],si
	jne Block269

 Block268:
	mov eax,dword ptr [eax+8]
	jmp Block270

 Block269:
	mov eax,offset _S___3

 Block270:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x98]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block273

 Block271:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block274

 Block272:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block274

 Block273:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block274:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x691
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x3E
	cmp ecx,edi
	jne Block276

 Block275:
	push 0x80004003
	call _com_issue_error

 Block276:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x3F
	cmp word ptr [eax],si
	jne Block278

 Block277:
	mov eax,dword ptr [eax+8]
	jmp Block279

 Block278:
	mov eax,offset _S___3

 Block279:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x70]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block282

 Block280:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block283

 Block281:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block283

 Block282:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block283:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x692
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x40
	cmp ecx,edi
	jne Block285

 Block284:
	push 0x80004003
	call _com_issue_error

 Block285:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x41
	cmp word ptr [eax],si
	jne Block287

 Block286:
	mov eax,dword ptr [eax+8]
	jmp Block288

 Block287:
	mov eax,offset _S___3

 Block288:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x60]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block291

 Block289:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block292

 Block290:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block292

 Block291:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block292:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x693
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x42
	cmp ecx,edi
	jne Block294

 Block293:
	push 0x80004003
	call _com_issue_error

 Block294:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x43
	cmp word ptr [eax],si
	jne Block296

 Block295:
	mov eax,dword ptr [eax+8]
	jmp Block297

 Block296:
	mov eax,offset _S___3

 Block297:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x64]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block300

 Block298:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block301

 Block299:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block301

 Block300:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block301:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x694
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x44
	cmp ecx,edi
	jne Block303

 Block302:
	push 0x80004003
	call _com_issue_error

 Block303:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x45
	cmp word ptr [eax],si
	jne Block305

 Block304:
	mov eax,dword ptr [eax+8]
	jmp Block306

 Block305:
	mov eax,offset _S___3

 Block306:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x68]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block309

 Block307:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block310

 Block308:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block310

 Block309:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block310:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x695
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x46
	cmp ecx,edi
	jne Block312

 Block311:
	push 0x80004003
	call _com_issue_error

 Block312:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x47
	cmp word ptr [eax],si
	jne Block314

 Block313:
	mov eax,dword ptr [eax+8]
	jmp Block315

 Block314:
	mov eax,offset _S___3

 Block315:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x6C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block318

 Block316:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block319

 Block317:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block319

 Block318:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block319:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x3E5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x48
	cmp ecx,edi
	jne Block321

 Block320:
	push 0x80004003
	call _com_issue_error

 Block321:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x49
	cmp word ptr [eax],si
	jne Block323

 Block322:
	mov eax,dword ptr [eax+8]
	jmp Block324

 Block323:
	mov eax,offset _S___3

 Block324:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x74]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block327

 Block325:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block328

 Block326:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block328

 Block327:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block328:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x3E6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x4A
	cmp ecx,edi
	jne Block330

 Block329:
	push 0x80004003
	call _com_issue_error

 Block330:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x4B
	cmp word ptr [eax],si
	jne Block332

 Block331:
	mov eax,dword ptr [eax+8]
	jmp Block333

 Block332:
	mov eax,offset _S___3

 Block333:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x78]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block336

 Block334:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block337

 Block335:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block337

 Block336:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block337:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x3E7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x4C
	cmp ecx,edi
	jne Block339

 Block338:
	push 0x80004003
	call _com_issue_error

 Block339:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x4D
	cmp word ptr [eax],si
	jne Block341

 Block340:
	mov eax,dword ptr [eax+8]
	jmp Block342

 Block341:
	mov eax,offset _S___3

 Block342:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x7C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block345

 Block343:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block346

 Block344:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block346

 Block345:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block346:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0xE34
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x4E
	cmp ecx,edi
	jne Block348

 Block347:
	push 0x80004003
	call _com_issue_error

 Block348:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x4F
	cmp word ptr [eax],si
	jne Block350

 Block349:
	mov eax,dword ptr [eax+8]
	jmp Block351

 Block350:
	mov eax,offset _S___3

 Block351:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x9C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block354

 Block352:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block355

 Block353:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block355

 Block354:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block355:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1A9A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x50
	cmp ecx,edi
	jne Block357

 Block356:
	push 0x80004003
	call _com_issue_error

 Block357:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x51
	cmp word ptr [eax],si
	jne Block359

 Block358:
	mov eax,dword ptr [eax+8]
	jmp Block360

 Block359:
	mov eax,offset _S___3

 Block360:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x80]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block363

 Block361:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block364

 Block362:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block364

 Block363:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block364:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1927
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x52
	cmp ecx,edi
	jne Block366

 Block365:
	push 0x80004003
	call _com_issue_error

 Block366:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x53
	cmp word ptr [eax],si
	jne Block368

 Block367:
	mov eax,dword ptr [eax+8]
	jmp Block369

 Block368:
	mov eax,offset _S___3

 Block369:
	push 0xFFFFFFFF
	lea ecx,[ebp+0xD0]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block372

 Block370:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block373

 Block371:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block373

 Block372:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block373:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1928
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x54
	cmp ecx,edi
	jne Block375

 Block374:
	push 0x80004003
	call _com_issue_error

 Block375:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x55
	cmp word ptr [eax],si
	jne Block377

 Block376:
	mov eax,dword ptr [eax+8]
	jmp Block378

 Block377:
	mov eax,offset _S___3

 Block378:
	push 0xFFFFFFFF
	lea ecx,[ebp+0xD4]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block381

 Block379:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block382

 Block380:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block382

 Block381:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block382:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1903
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x56
	cmp ecx,edi
	jne Block384

 Block383:
	push 0x80004003
	call _com_issue_error

 Block384:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x57
	cmp word ptr [eax],si
	jne Block386

 Block385:
	mov eax,dword ptr [eax+8]
	jmp Block387

 Block386:
	mov eax,offset _S___3

 Block387:
	push 0xFFFFFFFF
	lea ecx,[ebp+0xD8]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block390

 Block388:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block391

 Block389:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block391

 Block390:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block391:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1905
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x58
	cmp ecx,edi
	jne Block393

 Block392:
	push 0x80004003
	call _com_issue_error

 Block393:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x59
	cmp word ptr [eax],si
	jne Block395

 Block394:
	mov eax,dword ptr [eax+8]
	jmp Block396

 Block395:
	mov eax,offset _S___3

 Block396:
	push 0xFFFFFFFF
	lea ecx,[ebp+0xDC]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block399

 Block397:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block400

 Block398:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block400

 Block399:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block400:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1904
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x5A
	cmp ecx,edi
	jne Block402

 Block401:
	push 0x80004003
	call _com_issue_error

 Block402:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x5B
	cmp word ptr [eax],si
	jne Block404

 Block403:
	mov eax,dword ptr [eax+8]
	jmp Block405

 Block404:
	mov eax,offset _S___3

 Block405:
	push 0xFFFFFFFF
	lea ecx,[ebp+0xE0]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block408

 Block406:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block409

 Block407:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block409

 Block408:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block409:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x18D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x5C
	cmp ecx,edi
	jne Block411

 Block410:
	push 0x80004003
	call _com_issue_error

 Block411:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x5D
	cmp word ptr [eax],si
	jne Block413

 Block412:
	mov eax,dword ptr [eax+8]
	jmp Block414

 Block413:
	mov eax,offset _S___3

 Block414:
	push 0xFFFFFFFF
	lea ecx,[ebp+0xE4]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block417

 Block415:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block418

 Block416:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block418

 Block417:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block418:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1911
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x5E
	cmp ecx,edi
	jne Block420

 Block419:
	push 0x80004003
	call _com_issue_error

 Block420:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x5F
	cmp word ptr [eax],si
	jne Block422

 Block421:
	mov eax,dword ptr [eax+8]
	jmp Block423

 Block422:
	mov eax,offset _S___3

 Block423:
	push 0xFFFFFFFF
	lea ecx,[ebp+0xE8]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block426

 Block424:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block427

 Block425:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block427

 Block426:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block427:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x18E8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x60
	cmp ecx,edi
	jne Block429

 Block428:
	push 0x80004003
	call _com_issue_error

 Block429:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x61
	cmp word ptr [eax],si
	jne Block431

 Block430:
	mov eax,dword ptr [eax+8]
	jmp Block432

 Block431:
	mov eax,offset _S___3

 Block432:
	push 0xFFFFFFFF
	lea ecx,[ebp+0xEC]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block435

 Block433:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block436

 Block434:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block436

 Block435:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block436:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1910
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x62
	cmp ecx,edi
	jne Block438

 Block437:
	push 0x80004003
	call _com_issue_error

 Block438:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x63
	cmp word ptr [eax],si
	jne Block440

 Block439:
	mov eax,dword ptr [eax+8]
	jmp Block441

 Block440:
	mov eax,offset _S___3

 Block441:
	push 0xFFFFFFFF
	lea ecx,[ebp+0xF0]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block444

 Block442:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block445

 Block443:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block445

 Block444:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block445:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1934
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x64
	cmp ecx,edi
	jne Block447

 Block446:
	push 0x80004003
	call _com_issue_error

 Block447:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x65
	cmp word ptr [eax],si
	jne Block449

 Block448:
	mov eax,dword ptr [eax+8]
	jmp Block450

 Block449:
	mov eax,offset _S___3

 Block450:
	push 0xFFFFFFFF
	lea ecx,[ebp+0xF4]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block453

 Block451:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block454

 Block452:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block454

 Block453:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block454:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1922
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x66
	cmp ecx,edi
	jne Block456

 Block455:
	push 0x80004003
	call _com_issue_error

 Block456:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x67
	cmp word ptr [eax],si
	jne Block458

 Block457:
	mov eax,dword ptr [eax+8]
	jmp Block459

 Block458:
	mov eax,offset _S___3

 Block459:
	push 0xFFFFFFFF
	lea ecx,[ebp+0xF8]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block462

 Block460:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block463

 Block461:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block463

 Block462:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block463:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1935
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x68
	cmp ecx,edi
	jne Block465

 Block464:
	push 0x80004003
	call _com_issue_error

 Block465:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x69
	cmp word ptr [eax],si
	jne Block467

 Block466:
	mov eax,dword ptr [eax+8]
	jmp Block468

 Block467:
	mov eax,offset _S___3

 Block468:
	push 0xFFFFFFFF
	lea ecx,[ebp+0xFC]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block471

 Block469:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block472

 Block470:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block472

 Block471:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block472:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1923
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x6A
	cmp ecx,edi
	jne Block474

 Block473:
	push 0x80004003
	call _com_issue_error

 Block474:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x6B
	cmp word ptr [eax],si
	jne Block476

 Block475:
	mov eax,dword ptr [eax+8]
	jmp Block477

 Block476:
	mov eax,offset _S___3

 Block477:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x100]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block480

 Block478:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block481

 Block479:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block481

 Block480:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block481:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1906
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x6C
	cmp ecx,edi
	jne Block483

 Block482:
	push 0x80004003
	call _com_issue_error

 Block483:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x6D
	cmp word ptr [eax],si
	jne Block485

 Block484:
	mov eax,dword ptr [eax+8]
	jmp Block486

 Block485:
	mov eax,offset _S___3

 Block486:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x104]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block489

 Block487:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block490

 Block488:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block490

 Block489:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block490:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1936
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x6E
	cmp ecx,edi
	jne Block492

 Block491:
	push 0x80004003
	call _com_issue_error

 Block492:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x6F
	cmp word ptr [eax],si
	jne Block494

 Block493:
	mov eax,dword ptr [eax+8]
	jmp Block495

 Block494:
	mov eax,offset _S___3

 Block495:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x108]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block498

 Block496:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block499

 Block497:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block499

 Block498:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block499:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1924
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x70
	cmp ecx,edi
	jne Block501

 Block500:
	push 0x80004003
	call _com_issue_error

 Block501:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x71
	cmp word ptr [eax],si
	jne Block503

 Block502:
	mov eax,dword ptr [eax+8]
	jmp Block504

 Block503:
	mov eax,offset _S___3

 Block504:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x10C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block507

 Block505:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block508

 Block506:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block508

 Block507:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block508:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1931
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x72
	cmp ecx,edi
	jne Block510

 Block509:
	push 0x80004003
	call _com_issue_error

 Block510:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x73
	cmp word ptr [eax],si
	jne Block512

 Block511:
	mov eax,dword ptr [eax+8]
	jmp Block513

 Block512:
	mov eax,offset _S___3

 Block513:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x110]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block516

 Block514:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block517

 Block515:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block517

 Block516:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block517:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1920
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x74
	cmp ecx,edi
	jne Block519

 Block518:
	push 0x80004003
	call _com_issue_error

 Block519:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x75
	cmp word ptr [eax],si
	jne Block521

 Block520:
	mov eax,dword ptr [eax+8]
	jmp Block522

 Block521:
	mov eax,offset _S___3

 Block522:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x114]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block525

 Block523:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block526

 Block524:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block526

 Block525:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block526:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1912
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x76
	cmp ecx,edi
	jne Block528

 Block527:
	push 0x80004003
	call _com_issue_error

 Block528:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x77
	cmp word ptr [eax],si
	jne Block530

 Block529:
	mov eax,dword ptr [eax+8]
	jmp Block531

 Block530:
	mov eax,offset _S___3

 Block531:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x118]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block534

 Block532:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block535

 Block533:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block535

 Block534:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block535:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1909
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x78
	cmp ecx,edi
	jne Block537

 Block536:
	push 0x80004003
	call _com_issue_error

 Block537:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x79
	cmp word ptr [eax],si
	jne Block539

 Block538:
	mov eax,dword ptr [eax+8]
	jmp Block540

 Block539:
	mov eax,offset _S___3

 Block540:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x11C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block543

 Block541:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block544

 Block542:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block544

 Block543:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block544:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x190A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x7A
	cmp ecx,edi
	jne Block546

 Block545:
	push 0x80004003
	call _com_issue_error

 Block546:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x7B
	cmp word ptr [eax],si
	jne Block548

 Block547:
	mov eax,dword ptr [eax+8]
	jmp Block549

 Block548:
	mov eax,offset _S___3

 Block549:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x120]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block552

 Block550:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block553

 Block551:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block553

 Block552:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block553:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x190B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x7C
	cmp ecx,edi
	jne Block555

 Block554:
	push 0x80004003
	call _com_issue_error

 Block555:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x7D
	cmp word ptr [eax],si
	jne Block557

 Block556:
	mov eax,dword ptr [eax+8]
	jmp Block558

 Block557:
	mov eax,offset _S___3

 Block558:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x124]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block561

 Block559:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block562

 Block560:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block562

 Block561:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block562:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x191B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x7E
	cmp ecx,edi
	jne Block564

 Block563:
	push 0x80004003
	call _com_issue_error

 Block564:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x7F
	cmp word ptr [eax],si
	jne Block566

 Block565:
	mov eax,dword ptr [eax+8]
	jmp Block567

 Block566:
	mov eax,offset _S___3

 Block567:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x128]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block570

 Block568:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block571

 Block569:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block571

 Block570:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block571:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x18E9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x80
	cmp ecx,edi
	jne Block573

 Block572:
	push 0x80004003
	call _com_issue_error

 Block573:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x81
	cmp word ptr [eax],si
	jne Block575

 Block574:
	mov eax,dword ptr [eax+8]
	jmp Block576

 Block575:
	mov eax,offset _S___3

 Block576:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x12C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block579

 Block577:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block580

 Block578:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block580

 Block579:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block580:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x195F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x82
	cmp ecx,edi
	jne Block582

 Block581:
	push 0x80004003
	call _com_issue_error

 Block582:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x83
	cmp word ptr [eax],si
	jne Block584

 Block583:
	mov eax,dword ptr [eax+8]
	jmp Block585

 Block584:
	mov eax,offset _S___3

 Block585:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x130]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block588

 Block586:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block589

 Block587:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block589

 Block588:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block589:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1926
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x84
	cmp ecx,edi
	jne Block591

 Block590:
	push 0x80004003
	call _com_issue_error

 Block591:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x85
	cmp word ptr [eax],si
	jne Block593

 Block592:
	mov eax,dword ptr [eax+8]
	jmp Block594

 Block593:
	mov eax,offset _S___3

 Block594:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x134]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block597

 Block595:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block598

 Block596:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block598

 Block597:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block598:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1932
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x86
	cmp ecx,edi
	jne Block600

 Block599:
	push 0x80004003
	call _com_issue_error

 Block600:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x87
	cmp word ptr [eax],si
	jne Block602

 Block601:
	mov eax,dword ptr [eax+8]
	jmp Block603

 Block602:
	mov eax,offset _S___3

 Block603:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x138]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block606

 Block604:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block607

 Block605:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block607

 Block606:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block607:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1921
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x88
	cmp ecx,edi
	jne Block609

 Block608:
	push 0x80004003
	call _com_issue_error

 Block609:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x89
	cmp word ptr [eax],si
	jne Block611

 Block610:
	mov eax,dword ptr [eax+8]
	jmp Block612

 Block611:
	mov eax,offset _S___3

 Block612:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x13C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block615

 Block613:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block616

 Block614:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block616

 Block615:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block616:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x191A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x8A
	cmp ecx,edi
	jne Block618

 Block617:
	push 0x80004003
	call _com_issue_error

 Block618:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x8B
	cmp word ptr [eax],si
	jne Block620

 Block619:
	mov eax,dword ptr [eax+8]
	jmp Block621

 Block620:
	mov eax,offset _S___3

 Block621:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x140]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block624

 Block622:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block625

 Block623:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block625

 Block624:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block625:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x193A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x8C
	cmp ecx,edi
	jne Block627

 Block626:
	push 0x80004003
	call _com_issue_error

 Block627:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x8D
	cmp word ptr [eax],si
	jne Block629

 Block628:
	mov eax,dword ptr [eax+8]
	jmp Block630

 Block629:
	mov eax,offset _S___3

 Block630:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x144]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block633

 Block631:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block634

 Block632:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block634

 Block633:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block634:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x193B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x8E
	cmp ecx,edi
	jne Block636

 Block635:
	push 0x80004003
	call _com_issue_error

 Block636:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x8F
	cmp word ptr [eax],si
	jne Block638

 Block637:
	mov eax,dword ptr [eax+8]
	jmp Block639

 Block638:
	mov eax,offset _S___3

 Block639:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x148]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block642

 Block640:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block643

 Block641:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block643

 Block642:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block643:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1930
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x90
	cmp ecx,edi
	jne Block645

 Block644:
	push 0x80004003
	call _com_issue_error

 Block645:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x91
	cmp word ptr [eax],si
	jne Block647

 Block646:
	mov eax,dword ptr [eax+8]
	jmp Block648

 Block647:
	mov eax,offset _S___3

 Block648:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x14C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block651

 Block649:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block652

 Block650:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block652

 Block651:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block652:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1908
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x92
	cmp ecx,edi
	jne Block654

 Block653:
	push 0x80004003
	call _com_issue_error

 Block654:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x93
	cmp word ptr [eax],si
	jne Block656

 Block655:
	mov eax,dword ptr [eax+8]
	jmp Block657

 Block656:
	mov eax,offset _S___3

 Block657:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x150]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block660

 Block658:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block661

 Block659:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block661

 Block660:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block661:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x193C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x94
	cmp ecx,edi
	jne Block663

 Block662:
	push 0x80004003
	call _com_issue_error

 Block663:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x95
	cmp word ptr [eax],si
	jne Block665

 Block664:
	mov eax,dword ptr [eax+8]
	jmp Block666

 Block665:
	mov eax,offset _S___3

 Block666:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x154]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block669

 Block667:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block670

 Block668:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block670

 Block669:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block670:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1AC9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x96
	cmp ecx,edi
	jne Block672

 Block671:
	push 0x80004003
	call _com_issue_error

 Block672:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x97
	cmp word ptr [eax],si
	jne Block674

 Block673:
	mov eax,dword ptr [eax+8]
	jmp Block675

 Block674:
	mov eax,offset _S___3

 Block675:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x158]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block678

 Block676:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block679

 Block677:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block679

 Block678:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block679:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x5A7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x98
	cmp ecx,edi
	jne Block681

 Block680:
	push 0x80004003
	call _com_issue_error

 Block681:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x99
	cmp word ptr [eax],si
	jne Block683

 Block682:
	mov eax,dword ptr [eax+8]
	jmp Block684

 Block683:
	mov eax,offset _S___3

 Block684:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x15C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block687

 Block685:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block688

 Block686:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block688

 Block687:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block688:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x600
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x9A
	cmp ecx,edi
	jne Block690

 Block689:
	push 0x80004003
	call _com_issue_error

 Block690:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x9B
	cmp word ptr [eax],si
	jne Block692

 Block691:
	mov eax,dword ptr [eax+8]
	jmp Block693

 Block692:
	mov eax,offset _S___3

 Block693:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x160]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block696

 Block694:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block697

 Block695:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block697

 Block696:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block697:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x19A8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x9C
	cmp ecx,edi
	jne Block699

 Block698:
	push 0x80004003
	call _com_issue_error

 Block699:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x9D
	cmp word ptr [eax],si
	jne Block701

 Block700:
	mov eax,dword ptr [eax+8]
	jmp Block702

 Block701:
	mov eax,offset _S___3

 Block702:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x164]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block705

 Block703:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block706

 Block704:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block706

 Block705:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block706:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x5A4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x9E
	cmp ecx,edi
	jne Block708

 Block707:
	push 0x80004003
	call _com_issue_error

 Block708:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0x9F
	cmp word ptr [eax],si
	jne Block710

 Block709:
	mov eax,dword ptr [eax+8]
	jmp Block711

 Block710:
	mov eax,offset _S___3

 Block711:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x168]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block714

 Block712:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block715

 Block713:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block715

 Block714:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block715:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x8CF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0xA0
	cmp ecx,edi
	jne Block717

 Block716:
	push 0x80004003
	call _com_issue_error

 Block717:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0x40],0xA1
	cmp word ptr [eax],si
	jne Block719

 Block718:
	mov eax,dword ptr [eax+8]
	jmp Block720

 Block719:
	mov eax,offset _S___3

 Block720:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x16C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],si
	jne Block723

 Block721:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block724

 Block722:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block724

 Block723:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block724:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x64],esp
	push 0x1ABE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x58]
	mov byte ptr [esp+0x4C],0xA2
	cmp ecx,edi
	jne Block726

 Block725:
	push 0x80004003
	call _com_issue_error

 Block726:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x50],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x48],0xA3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x5C]
	mov dword ptr [esp+0x5C],edi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,edi
	jge Block729

 Block727:
	cmp eax,0x80004002
	je Block729

 Block728:
	push eax
	call _com_issue_error

 Block729:
	mov bl,0xA5
	mov byte ptr [esp+0x40],bl
	cmp word ptr [esp+0x18],si
	jne Block732

 Block730:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block733

 Block731:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block733

 Block732:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block733:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x60],esp
	push 0x1ACB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x58]
	mov byte ptr [esp+0x4C],0xA6
	cmp ecx,edi
	jne Block735

 Block734:
	push 0x80004003
	call _com_issue_error

 Block735:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x50],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x48],0xA7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x58]
	mov dword ptr [esp+0x58],edi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,edi
	jge Block738

 Block736:
	cmp eax,0x80004002
	je Block738

 Block737:
	push eax
	call _com_issue_error

 Block738:
	mov byte ptr [esp+0x40],0xA9
	cmp word ptr [esp+0x28],si
	jne Block741

 Block739:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,edi
	je Block742

 Block740:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block742

 Block741:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block742:
	mov edi,dword ptr [esp+0x58]
	mov esi,dword ptr [esp+0x54]
	test edi,edi
	sete al
	test al,al
	je Block745

 Block743:
	test esi,esi
	sete al
	test al,al
	je Block745

 Block744:
	add ebp,0xA0
	push ebp
	call SECRECT::SetRectEmpty
	add esp,4
	jmp Block750

 Block745:
	test esi,esi
	jne Block747

 Block746:
	push 0x80004003
	call _com_issue_error

 Block747:
	test edi,edi
	jne Block749

 Block748:
	push 0x80004003
	call _com_issue_error

 Block749:
	mov ecx,esi
	call IWzShape2D::Gety
	push eax
	mov ecx,esi
	call IWzShape2D::Getx
	push eax
	mov ecx,edi
	call IWzShape2D::Gety
	push eax
	mov ecx,edi
	call IWzShape2D::Getx
	push eax
	add ebp,0xA0
	push ebp
	call SECRECT::SetRect
	add esp,0x14

 Block750:
	mov byte ptr [esp+0x40],bl
	test esi,esi
	je Block752

 Block751:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block752:
	mov byte ptr [esp+0x40],1
	test edi,edi
	je Block754

 Block753:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block754:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block756

 Block755:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block756:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block758

 Block757:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block758:
	mov eax,1

 Block759:
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
// SKILLENTRY::GetRandomAppointedAction
__SUB_CLASS_THIS(0030AD40, __thiscall, 20529,  SKILLENTRY, long, long, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push ebx
	push esi
	push edi
	push eax
	mov edi,ecx
	call SKILLENTRY::GetLevelData
	mov esi,eax
	mov ecx,dword ptr [esi+0x18C]
	push ecx
	lea ebx,[esi+0x184]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jl Block2

 Block1:
	mov edx,dword ptr [esi+0x18C]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	pop edi
	pop esi
	pop ebx
	ret 8

 Block2:
	mov eax,dword ptr [edi+0x20]
	test eax,eax
	je Block7

 Block3:
	cmp dword ptr [eax-4],0
	je Block7

 Block4:
	test eax,eax
	jne Block6

 Block5:
	mov eax,dword ptr [esp+0x14]
	xor ecx,ecx
	xor edx,edx
	div ecx
	mov eax,dword ptr [edi+0x20]
	pop edi
	pop esi
	pop ebx
	mov eax,dword ptr [eax+edx*4]
	ret 8

 Block6:
	mov ecx,dword ptr [eax-4]
	mov eax,dword ptr [esp+0x14]
	xor edx,edx
	div ecx
	mov eax,dword ptr [edi+0x20]
	pop edi
	pop esi
	pop ebx
	mov eax,dword ptr [eax+edx*4]
	ret 8

 Block7:
	pop edi
	pop esi
	or eax,0xFFFFFFFF
	pop ebx
	ret 8
}
}
// CSkillInfo::LoadItemOptionSkill
_SUB_EXCEPTION_HANDLER(3083D0)
__SUB_CLASS_THIS0(003083D0, __thiscall, 21687,  CSkillInfo, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3083D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp+0x44],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	xor edi,edi
	push eax
	mov dword ptr [ebp-4],edi
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],1
	call esi
	lea eax,[ebp+0x20]
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
	lea ecx,[ebp+0x10]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	mov bl,2
	push offset _S_SKILLATTACKTYPEI__1
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x6C]
	mov dword ptr [ebp+0x6C],edi
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
	mov byte ptr [ebp-4],6
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
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x20],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x10],bx
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ebx,dword ptr [ebp+0x6C]
	cmp ebx,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,ebx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],9
	mov dword ptr [ebp+0x68],edi
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block25:
	lea ecx,[ebp+0x68]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0xB
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea eax,[ebp+0x50]
	push eax
	call esi
	mov byte ptr [ebp-4],0xC
	mov dword ptr [ebp+0x30],edi
	jmp Block32

 Block31:
	mov ebx,dword ptr [ebp+0x6C]

 Block32:
	mov esi,dword ptr [ebp+0x68]
	test esi,esi
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0x30]
	push edx
	lea eax,[ebp+0x50]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block79

 Block35:
	push eax
	mov dword ptr [ebp+0x4C],eax
	call ZRefCounted_AllocHelper<ZRefCountedDummy<ITEMOPTIONSKILLENTRY>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [ebp+0x4C],esi
	lea edx,[ebp+0x50]
	push edx
	lea eax,[ebp+0x70]
	push eax
	mov byte ptr [ebp-4],0xD
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [ebp+0x70]
	test eax,eax
	je Block37

 Block36:
	mov eax,dword ptr [eax]
	jmp Block38

 Block37:
	xor eax,eax

 Block38:
	push eax
	call __wtoi
	add esp,4
	push 0
	mov dword ptr [esi],eax
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x64],esp
	test eax,eax
	je Block40

 Block39:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block40:
	lea edx,[ebp-0x20]
	mov byte ptr [ebp-4],0xF
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x64],esi
	test eax,eax
	je Block44

 Block41:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x38]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x38]
	mov esi,ecx
	mov dword ptr [ebp+0x64],esi
	test eax,eax
	jge Block44

 Block42:
	cmp eax,0x80004002
	je Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0x12
	jne Block47

 Block45:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block48:
	push 0
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x3C],esp
	push 0x677
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x13
	test esi,esi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[ebp-0x30]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	push ecx
	mov edi,esp
	mov dword ptr [ebp+0x3C],esp
	mov dword ptr [edi],0
	test eax,eax
	je Block56

 Block51:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [edi]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x60]
	test eax,eax
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov dword ptr [edi],ebx
	test esi,esi
	jge Block56

 Block54:
	cmp esi,0x80004002
	je Block56

 Block55:
	push esi
	call _com_issue_error

 Block56:
	mov edi,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [edi]
	mov esi,dword ptr [ebp+0x44]
	lea eax,[edi+4]
	push eax
	push ecx
	mov ecx,esi
	call CSkillInfo::LoadItemOptionSkillLevelData
	test eax,eax
	sete bl
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],0x12
	jne Block59

 Block57:
	mov eax,dword ptr [ebp-0x28]
	xor edx,edx
	mov word ptr [ebp-0x30],dx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	test bl,bl
	je Block62

 Block61:
	push offset ZException::THROW_INFO
	lea ecx,[ebp+0x34]
	push ecx
	mov dword ptr [ebp+0x34],0x80004005
	call _CxxThrowException

 Block62:
	lea edx,[ebp+0x48]
	push edx
	push edi
	lea ecx,[esi+0xB0]
	call ZMap<long, ZRef<ITEMOPTIONSKILLENTRY>, long>::Insert
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xE
	call edx
	mov eax,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block71

 Block63:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block70

 Block64:
	test esi,esi
	je Block70

 Block65:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block67

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block67:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block69

 Block68:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block69:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block70:
	mov dword ptr [ebp+0x70],0

 Block71:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0xC
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block74

 Block72:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block74

 Block73:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block74:
	cmp word ptr [ebp+0x50],8
	mov dword ptr [ebp+0x4C],0
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block31

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block77:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block31

 Block78:
	push eax
	call _com_issue_error

 Block79:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0xB
	jne Block82

 Block80:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],8
	call edx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,1
	jmp Block87

 Block87:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add ebp,0x74
	mov esp,ebp
	pop ebp
	ret
}
}
// SKILLLEVELDATACommon::SKILLLEVELDATACommon
__SUB_CLASS_THIS0(002F35A0, __thiscall, 21216,  SKILLLEVELDATACommon, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0xC],ecx
	mov dword ptr [eax+0x10],ecx
	mov dword ptr [eax+0x14],ecx
	mov dword ptr [eax+0x18],ecx
	mov dword ptr [eax+0x1C],ecx
	mov dword ptr [eax+0x20],ecx
	mov dword ptr [eax+0x24],ecx
	mov dword ptr [eax+0x28],ecx
	mov dword ptr [eax+0x2C],ecx
	mov dword ptr [eax+0x30],ecx
	mov dword ptr [eax+0x34],ecx
	mov dword ptr [eax+0x38],ecx
	mov dword ptr [eax+0x3C],ecx
	mov dword ptr [eax+0x40],ecx
	mov dword ptr [eax+0x44],ecx
	mov dword ptr [eax+0x48],ecx
	mov dword ptr [eax+0x4C],ecx
	mov dword ptr [eax+0x50],ecx
	mov dword ptr [eax+0x54],ecx
	mov dword ptr [eax+0x58],ecx
	mov dword ptr [eax+0x5C],ecx
	mov dword ptr [eax+0x60],ecx
	mov dword ptr [eax+0x64],ecx
	mov dword ptr [eax+0x68],ecx
	mov dword ptr [eax+0x6C],ecx
	mov dword ptr [eax+0x70],ecx
	mov dword ptr [eax+0x74],ecx
	mov dword ptr [eax+0x78],ecx
	mov dword ptr [eax+0x7C],ecx
	mov dword ptr [eax+0x80],ecx
	mov dword ptr [eax+0x84],ecx
	mov dword ptr [eax+0x88],ecx
	mov dword ptr [eax+0x8C],ecx
	mov dword ptr [eax+0x90],ecx
	mov dword ptr [eax+0x94],ecx
	mov dword ptr [eax+0x98],ecx
	mov dword ptr [eax+0x9C],ecx
	mov dword ptr [eax+0xD0],ecx
	mov dword ptr [eax+0xD4],ecx
	mov dword ptr [eax+0xD8],ecx
	mov dword ptr [eax+0xDC],ecx
	mov dword ptr [eax+0xE0],ecx
	mov dword ptr [eax+0xE4],ecx
	mov dword ptr [eax+0xE8],ecx
	mov dword ptr [eax+0xEC],ecx
	mov dword ptr [eax+0xF0],ecx
	mov dword ptr [eax+0xF4],ecx
	mov dword ptr [eax+0xF8],ecx
	mov dword ptr [eax+0xFC],ecx
	mov dword ptr [eax+0x100],ecx
	mov dword ptr [eax+0x104],ecx
	mov dword ptr [eax+0x108],ecx
	mov dword ptr [eax+0x10C],ecx
	mov dword ptr [eax+0x110],ecx
	mov dword ptr [eax+0x114],ecx
	mov dword ptr [eax+0x118],ecx
	mov dword ptr [eax+0x11C],ecx
	mov dword ptr [eax+0x120],ecx
	mov dword ptr [eax+0x124],ecx
	mov dword ptr [eax+0x128],ecx
	mov dword ptr [eax+0x12C],ecx
	mov dword ptr [eax+0x130],ecx
	mov dword ptr [eax+0x134],ecx
	mov dword ptr [eax+0x138],ecx
	mov dword ptr [eax+0x13C],ecx
	mov dword ptr [eax+0x140],ecx
	mov dword ptr [eax+0x144],ecx
	mov dword ptr [eax+0x148],ecx
	mov dword ptr [eax+0x14C],ecx
	mov dword ptr [eax+0x150],ecx
	mov dword ptr [eax+0x154],ecx
	mov dword ptr [eax+0x158],ecx
	mov dword ptr [eax+0x15C],ecx
	mov dword ptr [eax+0x160],ecx
	mov dword ptr [eax+0x164],ecx
	mov dword ptr [eax+0x168],ecx
	mov dword ptr [eax+0x16C],ecx
	ret
}
}
// SKILLROOT::~SKILLROOT
_SUB_EXCEPTION_HANDLER(2F4320)
__SUB_CLASS_THIS0(002F4320, __thiscall, 21835,  SKILLROOT, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F4320
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
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea ecx,[esi+8]
	call ZArray<ZRef<SKILLENTRY>>::RemoveAll
	mov esi,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CSkillInfo::GetSkillLevel
// 6F1F78
static uint8_t _SUB_2F1D10_LOOKUP_TABLE_0[60] = {
0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 144, 
};
// 6F1FBC
static uint8_t _SUB_2F1D10_LOOKUP_TABLE_1[59] = {
0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 
};
__SUB_CLASS_THIS(002F1D10, __thiscall, 21700,  CSkillInfo, long, const CharacterData&, long, const SKILLENTRY**) {
__asm {

 Block0:
	push ecx
	push ebx
	push esi
	mov esi,dword ptr [esp+0x14]
	push edi
	mov edi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0xC],ecx

 Block1:
	cmp esi,0x13130FC
	jg Block24

 Block2:
	je Block21

 Block3:
	cmp esi,0x989A73
	jg Block7

 Block4:
	cmp esi,0x989A71
	jge Block21

 Block5:
	lea eax,[esi-0x3F1]
	cmp eax,0x3A
	ja Block10

 Block6:
	movzx eax,byte ptr [eax+_SUB_2F1D10_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block21
cmp EAX, 1
je Block10


 Block7:
	cmp esi,0x989AAB
	jg Block19

 Block8:
	cmp esi,0x989AAA
	jge Block21

 Block9:
	cmp esi,0x989A7C
	je Block21

 Block10:
	test edi,edi
	je Block12

 Block11:
	mov ebx,dword ptr [edi]
	test ebx,ebx
	jne Block13

 Block12:
	mov ecx,dword ptr [esp+0xC]
	push esi
	call CSkillInfo::GetSkill
	mov ebx,eax

 Block13:
	test edi,edi
	je Block16

 Block14:
	cmp dword ptr [edi],0
	jne Block16

 Block15:
	mov dword ptr [edi],ebx

 Block16:
	test ebx,ebx
	je Block48

 Block17:
	cmp esi,0x41EEE9
	jne Block35

 Block18:
	mov esi,0x41EEE8
	xor edi,edi
	mov dword ptr [esp+0x18],esi
	jmp Block1

 Block19:
	cmp esi,0x13130F1
	jl Block10

 Block20:
	cmp esi,0x13130F3
	jg Block10

 Block21:
	test edi,edi
	je Block23

 Block22:
	mov ecx,dword ptr [esp+0xC]
	push esi
	call CSkillInfo::GetSkill
	mov dword ptr [edi],eax

 Block23:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	pop ecx
	ret 0xC

 Block24:
	cmp esi,0x131583B
	jg Block33

 Block25:
	cmp esi,0x131583A
	jge Block21

 Block26:
	cmp esi,0x1315803
	jg Block31

 Block27:
	cmp esi,0x1315801
	jge Block21

 Block28:
	cmp esi,0x131312A
	jl Block10

 Block29:
	cmp esi,0x131312B
	jle Block21

 Block30:
	jmp Block10

 Block31:
	cmp esi,0x131580C
	je Block21

 Block32:
	jmp Block10

 Block33:
	lea eax,[esi-0x1C9C771]
	cmp eax,0x3A
	ja Block10

 Block34:
	movzx ecx,byte ptr [eax+_SUB_2F1D10_LOOKUP_TABLE_1]
	cmp ECX, 0
je Block21
cmp ECX, 1
je Block10


 Block35:
	cmp esi,0x217E773
	jne Block37

 Block36:
	mov esi,0x217E771
	xor edi,edi
	mov dword ptr [esp+0x18],esi
	jmp Block1

 Block37:
	cmp esi,0x1F914CF
	je Block47

 Block38:
	cmp esi,0x1F914CE
	je Block47

 Block39:
	cmp esi,0x2179951
	jne Block41

 Block40:
	mov esi,0x21612A9
	xor edi,edi
	mov dword ptr [esp+0x18],esi
	jmp Block1

 Block41:
	cmp esi,0x2179952
	jne Block43

 Block42:
	mov esi,0x21612AC
	xor edi,edi
	mov dword ptr [esp+0x18],esi
	jmp Block1

 Block43:
	cmp esi,0x1F914D0
	jne Block45

 Block44:
	mov esi,0x1F914CC
	xor edi,edi
	mov dword ptr [esp+0x18],esi
	jmp Block1

 Block45:
	cmp esi,0x217E775
	jne Block49

 Block46:
	mov esi,0x217C05C
	xor edi,edi
	mov dword ptr [esp+0x18],esi
	jmp Block1

 Block47:
	mov esi,0x1F914CD
	xor edi,edi
	mov dword ptr [esp+0x18],esi
	jmp Block1

 Block48:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	pop ecx
	ret 0xC

 Block49:
	mov esi,dword ptr [esp+0x14]
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esi+0x53D]
	mov dword ptr [esp+0x24],0
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block48

 Block50:
	mov edi,dword ptr [esp+0x1C]
	test edi,edi
	je Block48

 Block51:
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[esi+0x555]
	mov dword ptr [esp+0x24],0
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block53

 Block52:
	add edi,dword ptr [esp+0x1C]

 Block53:
	cmp dword ptr [ebx+0x40],0
	mov ecx,ebx
	je Block55

 Block54:
	call SKILLENTRY::GetMaxLevel
	add eax,dword ptr [esi+0x539]
	jmp Block56

 Block55:
	call SKILLENTRY::GetMaxLevel

 Block56:
	cmp edi,eax
	jge Block58

 Block57:
	mov eax,edi

 Block58:
	xor ecx,ecx
	test eax,eax
	setle cl
	pop edi
	pop esi
	pop ebx
	dec ecx
	and eax,ecx
	pop ecx
	ret 0xC
}
}
// SKILLLEVELDATA::_ZtlSecureGet_nMAD
__SUB_CLASS0(002EE700, __fastcall, 21132,  SKILLLEVELDATA, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3C]
	push eax
	add ecx,0x34
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CHARLEVELDATA::LoadCharLevelData
_SUB_EXCEPTION_HANDLER(2FD040)
__SUB_CLASS_THIS(002FD040, __thiscall, 21446,  CHARLEVELDATA, int32_t, long, NakedParam<_x_com_ptr<IWzProperty>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2FD040
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
	mov edi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x50],ebx
	mov dword ptr [esp+0x14],ebx
	mov eax,0x68DB8BAD
	imul dword ptr [esp+0x58]
	mov eax,dword ptr [esp+0x60]
	push ebx
	sar edx,0xC
	push ebx
	push ecx
	mov ebp,edx
	mov ecx,esp
	mov dword ptr [esp+0x6C],esp
	shr ebp,0x1F
	add ebp,edx
	push 0x1AB7
	push ecx
	mov byte ptr [esp+0x64],1
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [edi+0x1C],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x68]
	mov byte ptr [esp+0x5C],2
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x60],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x58],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x64]
	mov dword ptr [esp+0x64],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],5
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov esi,dword ptr [esp+0x60]
	cmp esi,ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block29

 Block10:
	cmp esi,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[esp+0x18]
	push eax
	push esi
	mov dword ptr [esp+0x20],ebx
	call ecx
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	cmp dword ptr [esp+0x18],ebx
	je Block29

 Block15:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],0
	call ecx
	test eax,eax
	jge Block17

 Block16:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block17:
	cmp ebx,dword ptr [esp+0x1C]
	jae Block28

 Block18:
	lea edx,[esp+0x24]
	push 0x1500
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [eax]
	push ebx
	push ecx
	mov ecx,dword ptr [esp+0x28]
	push edx
	push ecx
	push eax
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x68],6
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x18
	push eax
	lea ecx,[esp+0x1C]
	call _xbstr_t::_ctor_1
	push 0xFFFFFFFF
	mov ecx,edi
	mov byte ptr [esp+0x54],7
	call ZArray<Ztl_bstr_t>::InsertBefore
	mov ebp,dword ptr [esp+0x18]
	mov esi,eax
	lea eax,[esp+0x18]
	cmp esi,eax
	je Block23

 Block19:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block21

 Block20:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block21:
	mov dword ptr [esi],ebp
	test ebp,ebp
	je Block25

 Block22:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block23:
	test ebp,ebp
	je Block25

 Block24:
	mov ecx,ebp
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],0

 Block25:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x50],5
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block27:
	mov esi,dword ptr [esp+0x60]
	mov ebp,dword ptr [esp+0x20]
	inc ebx
	jmp Block15

 Block28:
	xor ebx,ebx

 Block29:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1AAD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],8
	cmp ecx,ebx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x58],5
	call IWzProperty::Getitem
	cmp word ptr [esp+0x38],8
	movzx esi,word ptr [eax]
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	test si,si
	je Block45

 Block36:
	lea eax,[esp+0x24]
	push 0x14FF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push ebp
	push eax
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x64],9
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x14
	push eax
	lea ecx,[esp+0x24]
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [esp+0x20]
	lea esi,[edi+4]
	lea ecx,[esp+0x20]
	cmp esi,ecx
	je Block41

 Block37:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block39

 Block38:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block39:
	mov dword ptr [esi],ebx
	test ebx,ebx
	je Block43

 Block40:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block41:
	test ebx,ebx
	je Block43

 Block42:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block43:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x50],5
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block45:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x43F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],0xA
	test ecx,ecx
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x58],5
	call IWzProperty::Getitem
	cmp word ptr [esp+0x38],8
	movzx esi,word ptr [eax]
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	test si,si
	je Block61

 Block52:
	lea edx,[esp+0x24]
	push 0x1684
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push ebp
	push eax
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x64],0xB
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x14
	push eax
	lea ecx,[esp+0x24]
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [esp+0x20]
	lea esi,[edi+8]
	lea ecx,[esp+0x20]
	cmp esi,ecx
	je Block57

 Block53:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block55

 Block54:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block55:
	mov dword ptr [esi],ebx
	test ebx,ebx
	je Block59

 Block56:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block57:
	test ebx,ebx
	je Block59

 Block58:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block59:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x50],5
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block61:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1793
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],0xC
	test ecx,ecx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x58],5
	call IWzProperty::Getitem
	cmp word ptr [esp+0x38],8
	movzx esi,word ptr [eax]
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	test si,si
	je Block77

 Block68:
	lea edx,[esp+0x24]
	push 0x179F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push ebp
	push eax
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x64],0xD
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x14
	push eax
	lea ecx,[esp+0x24]
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [esp+0x20]
	lea esi,[edi+0xC]
	lea ecx,[esp+0x20]
	cmp esi,ecx
	je Block73

 Block69:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block71

 Block70:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block71:
	mov dword ptr [esi],ebx
	test ebx,ebx
	je Block75

 Block72:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block73:
	test ebx,ebx
	je Block75

 Block74:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block75:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x50],5
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block77:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x9E6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],0xE
	test ecx,ecx
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x58],5
	call IWzProperty::Getitem
	cmp word ptr [esp+0x38],8
	movzx esi,word ptr [eax]
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	test si,si
	je Block93

 Block84:
	lea edx,[esp+0x24]
	push 0x1685
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push ebp
	push eax
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x64],0xF
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x14
	push eax
	lea ecx,[esp+0x24]
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [esp+0x20]
	lea esi,[edi+0x10]
	lea ecx,[esp+0x20]
	cmp esi,ecx
	je Block89

 Block85:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block87

 Block86:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block87:
	mov dword ptr [esi],ebx
	test ebx,ebx
	je Block91

 Block88:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block89:
	test ebx,ebx
	je Block91

 Block90:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block91:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x50],5
	test eax,eax
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block93:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x982
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],0x10
	test ecx,ecx
	jne Block95

 Block94:
	push 0x80004003
	call _com_issue_error

 Block95:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x58],5
	call IWzProperty::Getitem
	cmp word ptr [esp+0x38],8
	movzx esi,word ptr [eax]
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	test si,si
	je Block109

 Block100:
	lea edx,[esp+0x24]
	push 0x1942
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push ebp
	push eax
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x64],0x11
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x14
	push eax
	lea ecx,[esp+0x5C]
	call _xbstr_t::_ctor_1
	lea esi,[edi+0x14]
	mov edi,dword ptr [esp+0x58]
	lea ecx,[esp+0x58]
	cmp esi,ecx
	je Block105

 Block101:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block103

 Block102:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block103:
	mov dword ptr [esi],edi
	test edi,edi
	je Block107

 Block104:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block105:
	test edi,edi
	je Block107

 Block106:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block107:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x50],5
	test eax,eax
	je Block109

 Block108:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block109:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x50],1
	test eax,eax
	je Block111

 Block110:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block111:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x50],0
	test eax,eax
	je Block113

 Block112:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block113:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block115

 Block114:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block115:
	mov eax,1
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 0xC
}
}
// SKILLENTRY::~SKILLENTRY
_SUB_EXCEPTION_HANDLER(308B80)
__SUB_CLASS_THIS0(00308B80, __thiscall, 20534,  SKILLENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_308B80
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 3
	push 4
	lea eax,[esi+0x258]
	push eax
	mov dword ptr [esp+0x28],0x1B
	call __eh_vector_dtor_iterator
	mov ecx,dword ptr [esi+0x254]
	xor ebx,ebx
	cmp ecx,ebx
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x254],ebx

 Block2:
	mov ecx,dword ptr [esi+0x250]
	cmp ecx,ebx
	je Block4

 Block3:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x250],ebx

 Block4:
	mov ecx,dword ptr [esi+0x24C]
	cmp ecx,ebx
	je Block6

 Block5:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x24C],ebx

 Block6:
	mov ecx,dword ptr [esi+0x248]
	cmp ecx,ebx
	je Block8

 Block7:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x248],ebx

 Block8:
	mov ecx,dword ptr [esi+0x244]
	cmp ecx,ebx
	je Block10

 Block9:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x244],ebx

 Block10:
	mov ecx,dword ptr [esi+0x240]
	cmp ecx,ebx
	je Block12

 Block11:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x240],ebx

 Block12:
	mov ecx,dword ptr [esi+0x23C]
	cmp ecx,ebx
	je Block14

 Block13:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x23C],ebx

 Block14:
	mov ecx,dword ptr [esi+0x238]
	cmp ecx,ebx
	je Block16

 Block15:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x238],ebx

 Block16:
	mov ecx,dword ptr [esi+0x234]
	cmp ecx,ebx
	je Block18

 Block17:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x234],ebx

 Block18:
	mov ecx,dword ptr [esi+0x230]
	cmp ecx,ebx
	je Block20

 Block19:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x230],ebx

 Block20:
	mov ecx,dword ptr [esi+0x22C]
	cmp ecx,ebx
	je Block22

 Block21:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x22C],ebx

 Block22:
	lea ecx,[esi+0x228]
	mov byte ptr [esp+0x18],0xF
	call ZArray<Ztl_bstr_t>::RemoveAll
	mov ecx,dword ptr [esi+0x224]
	cmp ecx,ebx
	je Block24

 Block23:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x224],ebx

 Block24:
	mov ecx,dword ptr [esi+0x220]
	cmp ecx,ebx
	je Block26

 Block25:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x220],ebx

 Block26:
	mov ecx,dword ptr [esi+0x21C]
	cmp ecx,ebx
	je Block28

 Block27:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x21C],ebx

 Block28:
	mov ecx,dword ptr [esi+0x218]
	cmp ecx,ebx
	je Block30

 Block29:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x218],ebx

 Block30:
	mov ecx,dword ptr [esi+0x214]
	cmp ecx,ebx
	je Block32

 Block31:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x214],ebx

 Block32:
	mov eax,dword ptr [esi+0x208]
	mov byte ptr [esp+0x18],9
	cmp eax,ebx
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	lea ecx,[esi+0x204]
	mov byte ptr [esp+0x18],8
	call ZArray<CHARLEVELDATA>::RemoveAll
	mov eax,dword ptr [esi+0x200]
	mov byte ptr [esp+0x18],7
	cmp eax,ebx
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	lea ecx,[esi+0x1FC]
	mov byte ptr [esp+0x18],6
	call ZArray<SKILLLEVELDATA>::RemoveAll
	lea ecx,[esi+0x1E4]
	mov byte ptr [esp+0x18],5
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<AdditionPsd>, long>::`vftable'
	call ZMap<long, ZRef<AdditionPsd>, long>::RemoveAll
	lea ecx,[esi+0x74]
	mov byte ptr [esp+0x18],4
	call SKILLLEVELDATACommon::~SKILLLEVELDATACommon
	lea ecx,[esi+0x5C]
	mov byte ptr [esp+0x18],3
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<GW_SkillRecord>::`vftable'
	call ZList<GW_SkillRecord>::RemoveAll
	lea ecx,[esi+0x58]
	mov byte ptr [esp+0x18],2
	call ZArray<ZArray<long>>::RemoveAll
	lea ecx,[esi+0x20]
	mov byte ptr [esp+0x18],1
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esi+8]
	mov byte ptr [esp+0x18],bl
	cmp eax,ebx
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov esi,dword ptr [esi+4]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp esi,ebx
	je Block40

 Block39:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block40:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// SKILLENTRY::GetCharLevelIndex
__SUB_CLASS_THIS(002EF640, __thiscall, 20503,  SKILLENTRY, long, long) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0x204]
	or eax,0xFFFFFFFF
	push esi
	test edx,edx
	jne Block2

 Block1:
	xor esi,esi
	jmp Block3

 Block2:
	mov esi,dword ptr [edx-4]

 Block3:
	xor edx,edx
	test esi,esi
	jle Block11

 Block4:
	mov ecx,dword ptr [ecx+0x204]
	push edi
	mov edi,dword ptr [esp+0xC]
	add ecx,0x3C
	push ebx
	lea ebx,[ebx]

 Block5:
	cmp edi,dword ptr [ecx-0x20]
	jl Block8

 Block6:
	lea ebx,[edx+1]
	cmp ebx,esi
	je Block10

 Block7:
	cmp edi,dword ptr [ecx]
	jl Block10

 Block8:
	inc edx
	add ecx,0x20
	cmp edx,esi
	jl Block5

 Block9:
	pop ebx
	pop edi
	pop esi
	ret 4

 Block10:
	pop ebx
	mov eax,edx
	pop edi

 Block11:
	pop esi
	ret 4
}
}
// SKILLLEVELDATA::_ZtlSecureGet_nMobCount
__SUB_CLASS0(002EE820, __fastcall, 21132,  SKILLLEVELDATA, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x15C]
	push eax
	add ecx,0x154
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// SKILLLEVELDATA::GetArithmeticDataFloat
_SUB_EXCEPTION_HANDLER(2F8460)
__SUB_CLASS_THIS(002F8460, __thiscall, 21155,  SKILLLEVELDATA, float, NakedParam<ZXString<char>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F8460
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
	xor eax,eax
	mov dword ptr [esp+0x84],eax
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+0x8C]
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x84],1

 Block1:
	lea ecx,[esp+0x34]
	push 0x187A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	test esi,esi
	jl Block5

 Block4:
	mov dword ptr [esp+0x18],1
	jmp Block14

 Block5:
	lea edx,[esp+0x38]
	push 0x187B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov dword ptr [esp+0x18],2
	test esi,esi
	jge Block14

 Block8:
	lea eax,[esp+0x3C]
	push 0x1817
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov dword ptr [esp+0x18],4
	test esi,esi
	jge Block14

 Block11:
	lea ecx,[esp+0x40]
	push 0x189D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov dword ptr [esp+0x18],3

 Block14:
	mov ebx,4
	xor edi,edi
	cmp dword ptr [esp+0x18],ebx
	jne Block31

 Block15:
	test esi,esi
	jne Block32

 Block16:
	lea edx,[esp+0x44]
	push 0x187A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	mov edi,1
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	test esi,esi
	jl Block20

 Block19:
	mov dword ptr [esp+0x18],edi
	jmp Block29

 Block20:
	lea eax,[esp+0x48]
	push 0x187B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov dword ptr [esp+0x18],2
	test esi,esi
	jge Block30

 Block23:
	lea ecx,[esp+0x4C]
	push 0x1817
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov dword ptr [esp+0x18],ebx
	test esi,esi
	jge Block30

 Block26:
	lea edx,[esp+0x50]
	push 0x189D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov dword ptr [esp+0x18],3

 Block29:
	test esi,esi

 Block30:
	jle Block91

 Block31:
	test esi,esi

 Block32:
	jle Block91

 Block33:
	lea eax,[esp+0x54]
	push 0x187A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov ebp,eax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	cmp ebp,esi
	jge Block37

 Block36:
	test ebp,ebp
	jge Block39

 Block37:
	lea ecx,[esp+0x58]
	push 0x187B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov ebp,eax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	cmp ebp,esi
	jge Block41

 Block40:
	test ebp,ebp
	jge Block43

 Block41:
	lea edx,[esp+0x5C]
	push 0x189D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov ebp,eax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	cmp ebp,esi
	jl Block45

 Block44:
	or ebp,0xFFFFFFFF
	jmp Block46

 Block45:
	test ebp,ebp
	jge Block49

 Block46:
	test edi,edi
	jne Block49

 Block47:
	lea eax,[esp+0x60]
	push 0x1817
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov ebp,eax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	cmp ebp,esi
	jl Block51

 Block50:
	or ebp,0xFFFFFFFF

 Block51:
	lea eax,[ebp+1]
	push esi
	push eax
	lea ecx,[esp+0x38]
	push ecx
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x80],eax
	call ZXString<char>::Mid
	lea edx,[esp+0x64]
	push 0x187A
	push edx
	mov byte ptr [esp+0x8C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+1]
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	test esi,esi
	jge Block67

 Block54:
	lea eax,[esp+0x68]
	push 0x187B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	test esi,esi
	jge Block67

 Block57:
	lea ecx,[esp+0x6C]
	push 0x189D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	test esi,esi
	jge Block67

 Block60:
	lea edx,[esp+0x70]
	push 0x1817
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	test esi,esi
	jge Block67

 Block63:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block65

 Block64:
	mov eax,dword ptr [eax-4]
	jmp Block66

 Block65:
	xor eax,eax

 Block66:
	lea esi,[eax+1]

 Block67:
	lea ebx,[esi-1]
	push ebx
	push edi
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Mid
	fldz
	mov ecx,dword ptr [esp+0x30]
	fstp dword ptr [esp+0x1C]
	push ecx
	call _atof
	fstp dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x30]
	push edx
	call _atof
	fstp dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x20]
	dec eax
	add esp,8
	cmp eax,3
	ja Block74

 Block68:
	cmp EAX, 0
je Block69
cmp EAX, 1
je Block70
cmp EAX, 2
je Block71
cmp EAX, 3
je Block72


 Block69:
	fld dword ptr [esp+0x24]
	fmul dword ptr [esp+0x20]
	jmp Block73

 Block70:
	fld dword ptr [esp+0x20]
	fdiv dword ptr [esp+0x24]
	jmp Block73

 Block71:
	fld dword ptr [esp+0x24]
	fadd dword ptr [esp+0x20]
	jmp Block73

 Block72:
	fld dword ptr [esp+0x20]
	fsub dword ptr [esp+0x24]

 Block73:
	fstp dword ptr [esp+0x1C]

 Block74:
	test ebp,ebp
	jge Block81

 Block75:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block77

 Block76:
	mov eax,dword ptr [eax-4]
	jmp Block78

 Block77:
	xor eax,eax

 Block78:
	inc eax
	cmp esi,eax
	jne Block81

 Block79:
	cmp dword ptr [esp+0x90],0
	je Block81

 Block80:
	fld dword ptr [esp+0x1C]
	fadd qword ptr [__real_3feffffde7210be9]
	call __ftol2_sse
	mov dword ptr [esp+0x24],eax
	fild dword ptr [esp+0x24]
	fstp dword ptr [esp+0x1C]

 Block81:
	mov dword ptr [esp+0x24],0
	fld dword ptr [esp+0x1C]
	sub esp,8
	fstp qword ptr [esp]
	lea eax,[esp+0x2C]
	push offset _S_1F
	push eax
	mov byte ptr [esp+0x94],4
	call ZXString<char>::Format
	mov ecx,dword ptr [esp+0x84]
	add esp,0x10
	push ebx
	push ecx
	lea edx,[esp+0x30]
	push edx
	lea ecx,[esp+0x20]
	call ZXString<char>::Mid
	mov esi,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x28]
	push esi
	push eax
	lea ecx,[esp+0x80]
	push ecx
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x90],5
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x88],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x84],5
	test eax,eax
	je Block83

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block83:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x84],4
	test eax,eax
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block85:
	mov byte ptr [esp+0x84],3
	test esi,esi
	je Block87

 Block86:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block87:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x84],2
	test eax,eax
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block89:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x84],1
	test eax,eax
	je Block1

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block1

 Block91:
	mov esi,dword ptr [esp+0x14]
	push esi
	call _atof
	fstp dword ptr [esp+0x94]
	add esp,4
	mov byte ptr [esp+0x84],0
	test esi,esi
	je Block93

 Block92:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block93:
	mov eax,dword ptr [esp+0x8C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	test eax,eax
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	fld dword ptr [esp+0x90]
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret 8
}
}
// SKILLENTRY::IsActionAppointed
__SUB_CLASS_THIS(0030ADD0, __thiscall, 20530,  SKILLENTRY, int32_t, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x18C]
	push ecx
	add eax,0x184
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jge Block4

 Block1:
	mov eax,dword ptr [esi+0x20]
	test eax,eax
	je Block3

 Block2:
	cmp dword ptr [eax-4],0
	jne Block4

 Block3:
	xor eax,eax
	pop esi
	ret 4

 Block4:
	mov eax,1
	pop esi
	ret 4
}
}
// SKILLENTRY::GetCrc
__SUB_CLASS_THIS0(002ED3F0, __thiscall, 20532,  SKILLENTRY, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x44]
	ret
}
}
// SKILLENTRY::InitCrc
__SUB_CLASS_THIS0(002ED400, __thiscall, 20534,  SKILLENTRY, void) {
__asm {

 Block0:
	sub esp,8
	push esi
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0x14]
	push 4
	push eax
	mov esi,ecx
	mov dword ptr [esp+0x1C],0x5F
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	lea ecx,[esp+0x30]
	push 4
	push ecx
	mov dword ptr [esp+0x38],eax
	call CCrc32::GetCrc32
	add esp,0x30
	mov dword ptr [esi+0x44],eax
	pop esi
	add esp,8
	ret
}
}
// SKILLLEVELDATA::_ZtlSecureGet_nBulletCount
__SUB_CLASS0(002EE800, __fastcall, 21132,  SKILLLEVELDATA, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x138]
	push eax
	add ecx,0x130
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CSkillInfo::GetSkill
_SUB_EXCEPTION_HANDLER(2F1BB0)
__SUB_CLASS_THIS(002F1BB0, __thiscall, 21692,  CSkillInfo, const SKILLENTRY*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F1BB0
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
	mov dword ptr [esp+0x14],0
	lea eax,[esp+0x10]
	push eax
	lea edx,[esp+0x2C]
	push edx
	add ecx,4
	mov dword ptr [esp+0x28],0
	call ZMap<long, ZRef<SKILLENTRY>, long>::GetAt
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test edi,edi
	je Block4

 Block1:
	lea esi,[edi-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov eax,edi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// _ZtlSecureTear_float_
__SUB(002EF6A0, __fastcall, 133304,  uint32_t, float, float*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	mov ecx,dword ptr [esp+8]
	mov dword ptr [esi],eax
	xor ecx,eax
	ror ecx,5
	xor eax,0xBAADF00D
	ror eax,5
	mov dword ptr [esi+4],ecx
	add eax,ecx
	pop esi
	ret 4
}
}
// CSkillInfo::GetMCSkill
_SUB_EXCEPTION_HANDLER(2F3160)
__SUB_CLASS_THIS(002F3160, __thiscall, 21714,  CSkillInfo, const MCSKILLENTRY*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F3160
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
	mov dword ptr [esp+0x14],0
	lea eax,[esp+0x10]
	push eax
	lea edx,[esp+0x2C]
	push edx
	add ecx,0x4C
	mov dword ptr [esp+0x28],0
	call ZMap<long, ZRef<MCSKILLENTRY>, long>::GetAt
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test edi,edi
	je Block4

 Block1:
	lea esi,[edi-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov eax,edi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// get_random_melee_attack_action
__SUB(0030B700, __cdecl, 133342,  long, long, long, const SKILLENTRY*, long, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	lea eax,[ebx-1]
	cmp eax,9
	ja Block12

 Block1:
	push esi
	mov esi,dword ptr [esp+0x14]
	push edi
	test esi,esi
	je Block8

 Block2:
	mov ecx,dword ptr [esp+0x14]
	push 0xFFFFFFFF
	push ecx
	mov ecx,esi
	call SKILLENTRY::IsCorrectWeaponType
	test eax,eax
	je Block10

 Block3:
	mov edi,dword ptr [esp+0x1C]
	push edi
	mov ecx,esi
	call SKILLENTRY::IsActionAppointed
	mov ecx,3
	test eax,eax
	je Block6

 Block4:
	cmp dword ptr [esi+0xC],ecx
	je Block7

 Block5:
	mov edx,dword ptr [esp+0x20]
	push edx
	push edi
	mov ecx,esi
	call SKILLENTRY::GetRandomAppointedAction
	pop edi
	pop esi
	pop ebx
	ret

 Block6:
	cmp dword ptr [esi+0xC],ecx
	jne Block8

 Block7:
	lea ecx,[ebx+ebx-1]
	jmp Block9

 Block8:
	lea ecx,[ebx+ebx-2]

 Block9:
	lea eax,[ecx+ecx*2]
	mov esi,dword ptr [eax*8+_D_AMELEEATTACKACTI]
	test esi,esi
	jg Block11

 Block10:
	pop edi
	pop esi
	or eax,0xFFFFFFFF
	pop ebx
	ret

 Block11:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	div esi
	pop edi
	lea ecx,[ecx+ecx*2]
	pop esi
	pop ebx
	lea edx,[edx+ecx*2]
	mov eax,dword ptr [edx*4+_D_AMELEEATTACKACTI+4]
	ret

 Block12:
	or eax,0xFFFFFFFF
	pop ebx
	ret
}
}
// SKILLLEVELDATA::GetArithmeticData
_SUB_EXCEPTION_HANDLER(2F9300)
__SUB_CLASS_THIS(002F9300, __thiscall, 21151,  SKILLLEVELDATA, long, NakedParam<ZXString<char>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F9300
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
	xor eax,eax
	mov dword ptr [esp+0x84],eax
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+0x8C]
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x84],1
	lea ecx,[ecx]

 Block1:
	lea ecx,[esp+0x38]
	push 0x187A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	test edi,edi
	jl Block5

 Block4:
	mov eax,1
	jmp Block14

 Block5:
	lea edx,[esp+0x3C]
	push 0x187B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,2
	mov dword ptr [esp+0x18],eax
	test edi,edi
	jge Block15

 Block8:
	lea eax,[esp+0x40]
	push 0x1817
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,4
	mov dword ptr [esp+0x18],eax
	test edi,edi
	jge Block15

 Block11:
	lea ecx,[esp+0x44]
	push 0x189D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,3

 Block14:
	mov dword ptr [esp+0x18],eax

 Block15:
	xor ebx,ebx
	cmp eax,4
	jne Block32

 Block16:
	test edi,edi
	jne Block33

 Block17:
	lea edx,[esp+0x48]
	push 0x187A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	mov ebx,1
	push ebx
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	test edi,edi
	jl Block21

 Block20:
	mov dword ptr [esp+0x18],ebx
	jmp Block30

 Block21:
	lea eax,[esp+0x4C]
	push 0x187B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push ebx
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov dword ptr [esp+0x18],2
	test edi,edi
	jge Block31

 Block24:
	lea ecx,[esp+0x50]
	push 0x1817
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push ebx
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov dword ptr [esp+0x18],4
	test edi,edi
	jge Block31

 Block27:
	lea edx,[esp+0x54]
	push 0x189D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push ebx
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov edi,eax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov dword ptr [esp+0x18],3

 Block30:
	test edi,edi

 Block31:
	jle Block93

 Block32:
	test edi,edi

 Block33:
	jle Block93

 Block34:
	or esi,0xFFFFFFFF

 Block35:
	lea eax,[esp+0x58]
	push 0x187A
	push eax
	mov dword ptr [esp+0x30],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	lea ebp,[esi+1]
	push ebp
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	cmp esi,edi
	jge Block39

 Block38:
	test esi,esi
	jge Block41

 Block39:
	lea ecx,[esp+0x5C]
	push 0x187B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push ebp
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	cmp esi,edi
	jge Block43

 Block42:
	test esi,esi
	jge Block45

 Block43:
	lea edx,[esp+0x60]
	push 0x189D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push ebp
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	cmp esi,edi
	jl Block47

 Block46:
	or esi,0xFFFFFFFF
	jmp Block48

 Block47:
	test esi,esi
	jge Block51

 Block48:
	test ebx,ebx
	jne Block51

 Block49:
	lea eax,[esp+0x64]
	push 0x1817
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push ebp
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	cmp esi,edi
	jge Block53

 Block52:
	test esi,esi
	jge Block35

 Block53:
	mov ebx,dword ptr [esp+0x28]
	push edi
	inc ebx
	push ebx
	lea ecx,[esp+0x3C]
	push ecx
	lea ecx,[esp+0x20]
	call ZXString<char>::Mid
	lea edx,[esp+0x68]
	push 0x187A
	push edx
	mov byte ptr [esp+0x8C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	inc edi
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov ebp,dword ptr [esp+0x14]
	test esi,esi
	jge Block69

 Block56:
	lea eax,[esp+0x6C]
	push 0x187B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	test esi,esi
	jge Block69

 Block59:
	lea ecx,[esp+0x70]
	push 0x189D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block61:
	test esi,esi
	jge Block69

 Block62:
	lea edx,[esp+0x74]
	push 0x1817
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	test esi,esi
	jge Block69

 Block65:
	test ebp,ebp
	je Block67

 Block66:
	mov eax,dword ptr [ebp-4]
	jmp Block68

 Block67:
	xor eax,eax

 Block68:
	lea esi,[eax+1]

 Block69:
	lea ebp,[esi-1]
	push ebp
	push edi
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Mid
	fldz
	mov ecx,dword ptr [esp+0x34]
	fstp dword ptr [esp+0x1C]
	push ecx
	call _atof
	fstp dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x34]
	push edx
	call _atof
	fstp dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x20]
	dec eax
	add esp,8
	cmp eax,3
	ja Block76

 Block70:
	cmp EAX, 0
je Block71
cmp EAX, 1
je Block72
cmp EAX, 2
je Block73
cmp EAX, 3
je Block74


 Block71:
	fld dword ptr [esp+0x24]
	fmul dword ptr [esp+0x20]
	jmp Block75

 Block72:
	fld dword ptr [esp+0x20]
	fdiv dword ptr [esp+0x24]
	jmp Block75

 Block73:
	fld dword ptr [esp+0x24]
	fadd dword ptr [esp+0x20]
	jmp Block75

 Block74:
	fld dword ptr [esp+0x20]
	fsub dword ptr [esp+0x24]

 Block75:
	fstp dword ptr [esp+0x1C]

 Block76:
	cmp dword ptr [esp+0x28],0
	jge Block83

 Block77:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block79

 Block78:
	mov eax,dword ptr [eax-4]
	jmp Block80

 Block79:
	xor eax,eax

 Block80:
	inc eax
	cmp esi,eax
	jne Block83

 Block81:
	cmp dword ptr [esp+0x90],0
	je Block83

 Block82:
	fld dword ptr [esp+0x1C]
	fadd qword ptr [__real_3feffffde7210be9]
	call __ftol2_sse
	mov dword ptr [esp+0x28],eax
	fild dword ptr [esp+0x28]
	fstp dword ptr [esp+0x1C]

 Block83:
	mov dword ptr [esp+0x28],0
	fld dword ptr [esp+0x1C]
	mov byte ptr [esp+0x84],4
	call __ftol2_sse
	push eax
	lea eax,[esp+0x2C]
	push offset _S_D__1
	push eax
	call ZXString<char>::Format
	add esp,0xC
	push ebp
	push ebx
	lea ecx,[esp+0x34]
	push ecx
	lea ecx,[esp+0x20]
	call ZXString<char>::Mid
	mov esi,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x2C]
	push esi
	push edx
	lea eax,[esp+0x80]
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x90],5
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x88],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x84],5
	test eax,eax
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block85:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x84],4
	test eax,eax
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block87:
	mov byte ptr [esp+0x84],3
	test esi,esi
	je Block89

 Block88:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block89:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x84],2
	test eax,eax
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x84],1
	test eax,eax
	je Block1

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block1

 Block93:
	mov esi,dword ptr [esp+0x14]
	push esi
	call _atoi
	add esp,4
	mov edi,eax
	mov byte ptr [esp+0x84],0
	test esi,esi
	je Block95

 Block94:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block95:
	mov eax,dword ptr [esp+0x8C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	test eax,eax
	je Block97

 Block96:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block97:
	mov eax,edi
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret 8
}
}
// _anon_get_char
_SUB_EXCEPTION_HANDLER(2F4510)
__SUB(002F4510, __cdecl, 133309,  char, Ztl_variant_t&, char) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2F4510
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x1C]
	cmp word ptr [eax],8
	jne Block2

 Block1:
	mov eax,dword ptr [eax+8]
	jmp Block3

 Block2:
	mov eax,offset _S___3

 Block3:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],0
	call ZXString<char>::AssignWideStr
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0
	test esi,esi
	je Block11

 Block4:
	cmp byte ptr [esi],0
	je Block9

 Block5:
	push 1
	push 0
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call __strupr
	mov esi,dword ptr [esp+0x20]
	add esp,4
	test esi,esi
	je Block7

 Block6:
	mov eax,dword ptr [esi-4]
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::ReleaseBuffer

 Block9:
	test esi,esi
	je Block11

 Block10:
	mov al,byte ptr [esi]
	mov bl,al
	test al,al
	jne Block12

 Block11:
	mov bl,byte ptr [esp+0x20]

 Block12:
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block14

 Block13:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov al,bl
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0xC
	ret
}
}
// CSkillInfo::LoadSkillRoot
_SUB_EXCEPTION_HANDLER(30FC00)
__SUB_CLASS_THIS(0030FC00, __thiscall, 21732,  CSkillInfo, int32_t, long, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_30FC00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x88
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x9C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x2C],ecx
	xor ebx,ebx
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0xA4],1
	mov dword ptr [esp+0x38],ebx
	call ZRef<SKILLROOT>::_Alloc
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x3D5
	push eax
	mov byte ptr [esp+0xB8],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xBC]
	mov byte ptr [esp+0xB0],3
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x78]
	push edx
	mov byte ptr [esp+0xB4],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xAC],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov ebp,8
	mov byte ptr [esp+0xA4],6
	cmp word ptr [esp+0x6C],bp
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov dword ptr [esp+0x28],ebx
	mov edi,dword ptr [esp+0xAC]
	push edi
	lea edx,[esp+0x2C]
	push offset _S_03D
	push edx
	mov byte ptr [esp+0xB0],7
	call ZXString<char>::Format
	add esp,8
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x8A7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push ecx
	mov ecx,esp
	lea edx,[esp+0x30]
	mov dword ptr [esp+0x20],esp
	push edx
	mov byte ptr [esp+0xB0],8
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	push ecx
	mov ecx,dword ptr [esp+0xC0]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xC0]
	mov dword ptr [esp+0x24],esp
	cmp eax,ebx
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block11:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0xB4],7
	call get_labeled_string_1
	add esp,0x10
	mov esi,dword ptr [esp+0x38]
	push eax
	lea ecx,[esi+4]
	mov byte ptr [esp+0xA8],9
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xA4],7
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1AD8
	push edx
	mov dword ptr [esi],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xBC]
	mov byte ptr [esp+0xB0],0xA
	cmp ecx,ebx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea eax,[esp+0x88]
	push eax
	mov byte ptr [esp+0xB4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xAC],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block18

 Block16:
	cmp eax,0x80004002
	je Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov byte ptr [esp+0xA4],0xD
	cmp word ptr [esp+0x7C],bp
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x84]
	xor ecx,ecx
	mov word ptr [esp+0x7C],cx
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x95B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xB0],0xE
	cmp ecx,ebx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0xB4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xAC],0xF
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov byte ptr [esp+0xA4],0xD
	cmp word ptr [esp+0x3C],bp
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov edi,dword ptr [esp+0x24]
	cmp edi,ebx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea edx,[esp+0x64]
	push edx
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xA8],0x10
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block35:
	lea ecx,[esp+0x34]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block38

 Block36:
	cmp eax,0x80004002
	je Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0xA4],0x12
	cmp eax,ebx
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0xA4],0x13
	mov dword ptr [esp+0x68],ebx

 Block41:
	mov esi,dword ptr [esp+0x30]
	test esi,esi
	je Block1

 Block42:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x50]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block77

 Block43:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x20]
	push eax
	call DetachBSTR
	add esp,8
	mov ebx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xA4],0x14
	test ebx,ebx
	je Block45

 Block44:
	mov eax,dword ptr [ebx]
	jmp Block46

 Block45:
	xor eax,eax

 Block46:
	push eax
	call __wtoi
	mov esi,eax
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add esp,4
	mov dword ptr [esp+0x14],esi
	cmp ecx,dword ptr [esp+0xAC]
	jne Block75

 Block47:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block49

 Block48:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block49:
	lea eax,[esp+0x98]
	mov byte ptr [esp+0xB0],0x15
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xB4],0x14
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xAC],0x16
	call Ztl_variant_t::GetUnknown
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	test eax,eax
	je Block52

 Block50:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x5C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x5C]
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	test eax,eax
	jge Block52

 Block51:
	cmp eax,0x80004002
	jne Block4

 Block52:
	cmp word ptr [esp+0x8C],8
	mov byte ptr [esp+0xA4],0x18
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x94]
	xor edx,edx
	mov word ptr [esp+0x8C],dx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea eax,[esp+0x8C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block56:
	push ecx
	mov ecx,dword ptr [esp+0xB8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xB8]
	mov dword ptr [esp+0x64],esp
	test eax,eax
	je Block58

 Block57:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block58:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	mov dword ptr [eax],ebp
	test ebp,ebp
	je Block60

 Block59:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	push ebp
	call edx

 Block60:
	push esi
	mov esi,dword ptr [esp+0x38]
	lea eax,[esp+0x48]
	push eax
	mov ecx,esi
	call CSkillInfo::LoadSkill
	cmp dword ptr [esp+0x40],0
	mov byte ptr [esp+0xA4],0x19
	je Block76

 Block61:
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	push 0xFFFFFFFF
	add ecx,8
	call ZArray<ZRef<SKILLENTRY>>::InsertBefore
	mov ecx,eax
	call ZRef<SKILLENTRY>::op_assign_copy
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esi+4]
	call ZMap<long, ZRef<SKILLENTRY>, long>::Insert
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xA4],0x18
	test eax,eax
	je Block66

 Block62:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block65

 Block63:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block65

 Block64:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block65:
	mov edi,dword ptr [esp+0x24]
	mov dword ptr [esp+0x40],0

 Block66:
	mov byte ptr [esp+0xA4],0x14
	test ebp,ebp
	je Block68

 Block67:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block68:
	mov byte ptr [esp+0xA4],0x13
	test ebx,ebx
	je Block70

 Block69:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x1C],0

 Block70:
	cmp word ptr [esp+0x4C],8
	jne Block73

 Block71:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block41

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block73:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block41

 Block74:
	jmp Block4

 Block75:
	push offset ZException::THROW_INFO
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x1C],0x80004005
	call _CxxThrowException

 Block76:
	push offset ZException::THROW_INFO
	lea eax,[esp+0x18]
	push eax
	mov dword ptr [esp+0x1C],0x80004005
	call _CxxThrowException

 Block77:
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [esp+0x30]
	lea edx,[esp+0xB0]
	push edx
	add ecx,0x1C
	call ZMap<long, ZRef<SKILLROOT>, long>::Insert
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xA4],0x12
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0xA8],0xD
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0xA8],7
	call edx
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xA4],6
	test eax,eax
	je Block83

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block83:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xA8],2
	call edx
	mov esi,dword ptr [esp+0x38]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0xA8],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block86

 Block84:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block86

 Block85:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block86:
	mov eax,dword ptr [esp+0xB0]
	mov byte ptr [esp+0xA4],0
	test eax,eax
	je Block88

 Block87:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block88:
	mov eax,dword ptr [esp+0xB4]
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	test eax,eax
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block90:
	mov eax,1
	mov ecx,dword ptr [esp+0x9C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x94
	ret 0xC
}
}
