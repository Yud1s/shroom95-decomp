#include "regen.hpp"
// MobTemplate.ipp
#include "MobTemplate.hpp"

static void *ZMap_ZXStringA_INT_VTABLE = get_vtable<ZMap<ZXString<char>, int, ZXString<char>>>();

// GetVariantLinkData
_SUB_EXCEPTION_HANDLER(25A7B0)
__SUB(0025A7B0, __cdecl, 138093,  Ztl_variant_t, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<Ztl_bstr_t>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_25A7B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0xC],0
	mov dword ptr [esp+0x2C],1
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	push ecx
	mov ecx,dword ptr [esp+0x44]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x14],esp
	test eax,eax
	je Block2

 Block1:
	add eax,8
	push eax
	call ebp

 Block2:
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x30],4
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov esi,dword ptr [esp+0x38]
	push esi
	mov byte ptr [esp+0x34],3
	call IWzProperty::Getitem
	cmp word ptr [esi],0
	mov dword ptr [esp+0xC],1
	jne Block16

 Block5:
	cmp dword ptr [esp+0x3C],0
	sete al
	test al,al
	sete al
	test al,al
	je Block16

 Block6:
	mov edx,dword ptr [esp+0x40]
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x14],esp
	test eax,eax
	je Block8

 Block7:
	add eax,8
	push eax
	call ebp

 Block8:
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0x30],5
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x34],3
	call IWzProperty::Getitem
	push eax
	push esi
	mov byte ptr [esp+0x34],6
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x2C],3
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2C],2
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x2C],1
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov ecx,dword ptr [esp+0x40]
	test ecx,ecx
	je Block22

 Block21:
	call _xbstr_t::Data_t::Release

 Block22:
	mov eax,esi
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	add esp,0x24
	ret
}
}
// CMobTemplate::_ZtlSecureGet_nMoveAbility
__SUB_CLASS0(0023A500, __fastcall, 7216,  CMobTemplate, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x48]
	push eax
	add ecx,0x40
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMobTemplate::_ZtlSecureGet_bSelfDestruction
__SUB_CLASS0(0023A540, __fastcall, 7219,  CMobTemplate, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x160]
	push eax
	add ecx,0x158
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	ret
}
}
// CMobTemplate::_ZtlSecureGet_nHPTagColor
__SUB_CLASS0(0023A5C0, __fastcall, 7216,  CMobTemplate, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1F4]
	push eax
	add ecx,0x1EC
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMobTemplate::GetSkillInfo
__SUB_CLASS_THIS(0023C310, __thiscall, 7233,  CMobTemplate, const MobSkillInfo*, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	xor edx,edx
	xor esi,esi
	lea ebx,[ebx]

 Block1:
	mov eax,dword ptr [ecx+0x280]
	test eax,eax
	je Block6

 Block2:
	cmp edx,dword ptr [eax-4]
	jae Block6

 Block3:
	cmp edi,dword ptr [esi+eax+0xC]
	je Block5

 Block4:
	inc edx
	add esi,0x1C
	jmp Block1

 Block5:
	mov ecx,dword ptr [ecx+0x280]
	lea eax,[edx*8]
	sub eax,edx
	pop edi
	lea eax,[ecx+eax*4]
	pop esi
	ret 4

 Block6:
	pop edi
	xor eax,eax
	pop esi
	ret 4
}
}
// CMobTemplate::_ZtlSecurePut_bFirstSelfDestruction
__SUB_CLASS(00259930, __fastcall, 7220,  CMobTemplate, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x164]
	mov ecx,esi
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [edi+0x16C],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::Unload
__SUB0(00259B50, __cdecl, 7237,  void) {
__asm {

 Block0:
	mov ecx,offset CMobTemplate::ms_mMobTemplate
	jmp  ZMap<long, ZRef<CMobTemplate>, long>::RemoveAll
}
}
// CMobTemplate::_ZtlSecurePut_bOnlyNormalAttack
__SUB_CLASS(00259AD0, __fastcall, 7220,  CMobTemplate, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x294]
	mov ecx,esi
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [edi+0x29C],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::_ZtlSecurePut_nFixedDamage
__SUB_CLASS(002599F0, __fastcall, 7217,  CMobTemplate, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x1B0]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x1B8],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::IsVulnerableTo
__SUB_CLASS_THIS(00259260, __thiscall, 7223,  CMobTemplate, int32_t, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x29C]
	push eax
	lea ecx,[esi+0x294]
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	mov edx,dword ptr [esp+0x10]
	add esp,8
	test eax,eax
	je Block2

 Block1:
	test edx,edx
	jg Block10

 Block2:
	mov eax,dword ptr [esi+0x2A0]
	test eax,eax
	je Block4

 Block3:
	cmp dword ptr [eax-4],0
	jne Block5

 Block4:
	mov eax,1
	pop esi
	ret 4

 Block5:
	xor ecx,ecx

 Block6:
	mov eax,dword ptr [esi+0x2A0]
	test eax,eax
	je Block10

 Block7:
	cmp ecx,dword ptr [eax-4]
	jae Block10

 Block8:
	cmp edx,dword ptr [eax+ecx*4]
	je Block4

 Block9:
	inc ecx
	jmp Block6

 Block10:
	xor eax,eax
	pop esi
	ret 4
}
}
// CMobTemplate::_ZtlSecurePut_bAngerGauge
__SUB_CLASS(00259A30, __fastcall, 7217,  CMobTemplate, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x1C8]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x1D0],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::_ZtlSecureGet_bHPGaugeHide
__SUB_CLASS0(0023A5A0, __fastcall, 7219,  CMobTemplate, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1E8]
	push eax
	add ecx,0x1E0
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	ret
}
}
// CMobTemplate::_ZtlSecurePut_nHPTagBgColor
__SUB_CLASS(00259AB0, __fastcall, 7217,  CMobTemplate, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x1F8]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x200],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::LoadAttackInfo
_SUB_EXCEPTION_HANDLER(25B890)
__SUB_CLASS_THIS(0025B890, __thiscall, 7240,  CMobTemplate, ZRef<MobAttackInfo>*, ZRef<MobAttackInfo>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_25B890
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC8]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x78],ebp
	mov eax,dword ptr [esp+0xDC]
	xor esi,esi
	mov dword ptr [esp+0x44],esi
	mov ebx, offset ActionData::m_saMobAction
	add ebx, 52
	mov ebx,dword ptr [eax*4+ebx]
	//mov ebx,dword ptr [eax*4+_D_S_SMOBACTION+52]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x5C],ebx
	cmp ebx,esi
	je Block2

 Block1:
	lea ecx,[ebx+8]
	push ecx
	call edi

 Block2:
	mov edx,dword ptr [ebp+0x14]
	lea eax,[ebp+0xC]
	push edx
	push eax
	mov dword ptr [esp+0xD8],1
	mov dword ptr [esp+0x34],eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	add esp,8
	push eax
	lea eax,[esp+0x70]
	push eax
	call CActionMan::GetMobImgEntry
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],ebx
	cmp ebx,esi
	je Block4

 Block3:
	add ebx,8
	push ebx
	call edi

 Block4:
	mov ecx,dword ptr [esp+0x7C]
	mov ecx,dword ptr [ecx+0xC]
	mov byte ptr [esp+0xDC],3
	cmp ecx,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0xB4]
	push edx
	mov byte ptr [esp+0xE0],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x78]
	mov dword ptr [esp+0x78],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [esp+0xA8],8
	mov byte ptr [esp+0xD0],6
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0xA8],ax
	mov eax,dword ptr [esp+0xB0]
	cmp eax,esi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0xA8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov ebx,dword ptr [esp+0x74]
	cmp ebx,esi
	sete al
	test al,al
	je Block24

 Block14:
	mov esi,dword ptr [esp+0xD8]
	xor ebp,ebp
	mov dword ptr [esi+4],ebp
	mov dword ptr [esp+0x44],1
	mov byte ptr [esp+0xD0],2
	cmp ebx,ebp
	je Block16

 Block15:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block16:
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0xD0],1
	cmp eax,ebp
	je Block21

 Block17:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block20

 Block18:
	mov ecx,dword ptr [esp+0x70]
	add ecx,4
	push ecx
	call edi
	mov ecx,dword ptr [esp+0x70]
	cmp ecx,ebp
	je Block20

 Block19:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block20:
	mov dword ptr [esp+0x70],ebp

 Block21:
	mov ecx,dword ptr [esp+0x5C]
	cmp ecx,ebp
	je Block23

 Block22:
	call _xbstr_t::Data_t::Release

 Block23:
	mov eax,esi
	jmp Block293

 Block24:
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x3D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xDC],7
	cmp ebx,esi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0xC4]
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0xE0],6
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x44],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	cmp word ptr [esp+0xB8],8
	mov byte ptr [esp+0xD0],0xA
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0xB8],ax
	mov eax,dword ptr [esp+0xC0]
	cmp eax,esi
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0xB8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	lea ecx,[esp+0xA0]
	mov dword ptr [esp+0xA4],0
	call ZRef<MobAttackInfo>::_Alloc
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x618
	push edx
	mov byte ptr [esp+0xE0],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x48]
	mov byte ptr [esp+0xD8],0xC
	test esi,esi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xDC],0xB
	call IWzProperty::Getitem
	mov edi,dword ptr [esp+0xA8]
	push eax
	mov byte ptr [esp+0xD8],0xD
	call get_int32
	add esp,8
	mov dword ptr [edi+0xC],eax
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xD0],0xB
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x68E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0xDC],0xE
	mov ecx,esi
	mov byte ptr [esp+0xDC],0xB
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0xF
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x10],eax
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xD0],0xB
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block43:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1AA5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x20]
	mov byte ptr [esp+0xD8],0x10
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xDC],0xB
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x11
	call get_int32
	add esp,8
	mov dword ptr [edi+0x14],eax
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xD0],0xB
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1ABF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x20]
	mov byte ptr [esp+0xD8],0x12
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xDC],0xB
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x13
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x1C],eax
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xD0],0xB
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x68F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0xDC],0x14
	mov ecx,esi
	mov byte ptr [esp+0xDC],0xB
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x15
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x28],eax
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xD0],0xB
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block55:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x685
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x94]
	mov byte ptr [esp+0xD4],0x16
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xD8],0xB
	call IWzProperty::Getitem
	cmp dword ptr [edi+0x1C],0
	mov byte ptr [esp+0xD0],0x17
	je Block66

 Block56:
	cmp word ptr [esp+0x90],8
	mov eax,dword ptr [esp+0x98]
	je Block58

 Block57:
	mov eax,offset _S___3

 Block58:
	lea ecx,[edi+0x24]
	call get_magic_attack_element_attribute
	test eax,eax
	jne Block66

 Block59:
	cmp word ptr [esp+0x90],8
	mov edi,dword ptr [esp+0xD8]
	mov dword ptr [edi+4],eax
	mov dword ptr [esp+0x44],1
	mov byte ptr [esp+0xD0],0xB
	jne Block62

 Block60:
	mov word ptr [esp+0x90],ax
	mov eax,dword ptr [esp+0x98]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	lea ecx,[esp+0xA0]
	mov byte ptr [esp+0xD0],0xA
	call ZRef<MobAttackInfo>::~ZRef<MobAttackInfo>
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0xD4],6
	call eax
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [esp+0xD4],2
	call edx
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xD0],1
	call ZRef<CActionMan::MOBIMGENTRY>::~ZRef<CActionMan::MOBIMGENTRY>
	mov ecx,dword ptr [esp+0x5C]
	test ecx,ecx
	je Block65

 Block64:
	call _xbstr_t::Data_t::Release

 Block65:
	mov eax,edi
	jmp Block293

 Block66:
	mov eax,dword ptr [ebp+0xC0]
	push eax
	add ebp,0xB8
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x67D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x20]
	mov byte ptr [esp+0xD8],0x18
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x17
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x19
	call get_int32
	mov ebx,8
	add esp,8
	mov dword ptr [edi+0x18],eax
	mov byte ptr [esp+0xD0],0x17
	cmp word ptr [esp+0x18],bx
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	xor ebp,ebp
	cmp eax,ebp
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	xor ebp,ebp

 Block70:
	push 0x64
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xB31
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x20]
	mov byte ptr [esp+0xD8],0x1A
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x17
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x1B
	call get_int32
	add esp,8
	mov dword ptr [edi+0x6C],eax
	mov byte ptr [esp+0xD0],0x17
	cmp word ptr [esp+0x18],bx
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x15BB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0xDC],0x1C
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x17
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x1D
	call get_int32
	add esp,8
	mov dword ptr [edi+0x20],eax
	mov byte ptr [esp+0xD0],0x17
	cmp word ptr [esp+0x18],bx
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	cmp eax,ebp
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block78:
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xB82
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x20]
	mov byte ptr [esp+0xD8],0x1E
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x17
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x1F
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x70],eax
	mov byte ptr [esp+0xD0],0x17
	cmp word ptr [esp+0x18],bx
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x15AA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x20]
	mov byte ptr [esp+0xD8],0x20
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x17
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x21
	call get_int32
	add esp,8
	mov dword ptr [edi+0xA4],eax
	mov byte ptr [esp+0xD0],0x17
	cmp word ptr [esp+0x18],bx
	jne Block85

 Block83:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0xB83
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0xDC],0x22
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x17
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x23
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x74],eax
	mov byte ptr [esp+0xD0],0x17
	cmp word ptr [esp+0x18],bx
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	cmp eax,ebp
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block90:
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xB8A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x20]
	mov byte ptr [esp+0xD8],0x24
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x17
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x25
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x94],eax
	mov byte ptr [esp+0xD0],0x17
	cmp word ptr [esp+0x18],bx
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xB8E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x20]
	mov byte ptr [esp+0xD8],0x26
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x17
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x27
	call get_int32
	add esp,8
	mov dword ptr [edi+0x98],eax
	mov byte ptr [esp+0xD0],0x17
	cmp word ptr [esp+0x18],bx
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1ABD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0xDC],0x28
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x17
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x29
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x9C],eax
	mov byte ptr [esp+0xD0],0x17
	cmp word ptr [esp+0x18],bx
	jne Block101

 Block99:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	cmp eax,ebp
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block102:
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1AD2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x20]
	mov byte ptr [esp+0xD8],0x2A
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x17
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x2B
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0xA8],eax
	mov byte ptr [esp+0xD0],0x17
	cmp word ptr [esp+0x18],bx
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xB33
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x20]
	mov byte ptr [esp+0xD8],0x2C
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x17
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x2D
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0xAC],eax
	mov byte ptr [esp+0xD0],0x17
	cmp word ptr [esp+0x18],bx
	jne Block109

 Block107:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x690
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0xE0],0x2E
	mov ecx,esi
	mov byte ptr [esp+0xE0],0x17
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],0x2F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x68]
	mov dword ptr [esp+0x68],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block113

 Block111:
	cmp eax,0x80004002
	je Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	mov byte ptr [esp+0xD0],0x31
	cmp word ptr [esp+0x18],bx
	jne Block116

 Block114:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	cmp eax,ebp
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov eax,dword ptr [edi+0xC]
	cmp eax,ebp
	jne Block147

 Block118:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1ABE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x70]
	mov byte ptr [esp+0xDC],0x32
	cmp esi,ebp
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	lea edx,[esp+0x58]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xE0],0x31
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],0x33
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x80]
	mov dword ptr [esp+0x80],ebp
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebp
	jge Block123

 Block121:
	cmp eax,0x80004002
	je Block123

 Block122:
	push eax
	call _com_issue_error

 Block123:
	mov byte ptr [esp+0xD0],0x35
	cmp word ptr [esp+0x4C],bx
	jne Block126

 Block124:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block127:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1ACB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x3C]
	mov byte ptr [esp+0xDC],0x36
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xE0],0x35
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],0x37
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x88]
	mov dword ptr [esp+0x88],ebp
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebp
	jge Block130

 Block128:
	cmp eax,0x80004002
	je Block130

 Block129:
	push eax
	call _com_issue_error

 Block130:
	mov byte ptr [esp+0xD0],0x39
	cmp word ptr [esp+0x30],bx
	jne Block133

 Block131:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov ebp,dword ptr [esp+0x84]
	xor ebx,ebx
	cmp ebp,ebx
	jne Block136

 Block135:
	push 0x80004003
	call _com_issue_error

 Block136:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esp+0x8C]
	push ecx
	push ebp
	mov dword ptr [esp+0x94],ebx
	call edx
	cmp eax,ebx
	jge Block138

 Block137:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebp
	push eax
	call _com_issue_errorex

 Block138:
	mov eax,dword ptr [esp+0x8C]
	mov ecx,dword ptr [ebp]
	lea edx,[esp+0x88]
	push edx
	mov dword ptr [esp+0x84],eax
	mov eax,dword ptr [ecx+0x20]
	push ebp
	mov dword ptr [esp+0x90],ebx
	call eax
	cmp eax,ebx
	jge Block140

 Block139:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebp
	push eax
	call _com_issue_errorex

 Block140:
	mov esi,dword ptr [esp+0x7C]
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr [esp+0x14],ecx
	cmp esi,ebx
	jne Block142

 Block141:
	push 0x80004003
	call _com_issue_error

 Block142:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x28]
	lea eax,[esp+0x60]
	push eax
	push esi
	mov dword ptr [esp+0x68],ebx
	call ecx
	cmp eax,ebx
	jge Block144

 Block143:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block144:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	mov ebx,dword ptr [esp+0x60]
	lea eax,[esp+0x28]
	push eax
	push esi
	mov dword ptr [esp+0x30],0
	call ecx
	test eax,eax
	jge Block146

 Block145:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block146:
	mov edx,dword ptr [esp+0x80]
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x28]
	push edx
	push eax
	push ebx
	push ecx
	lea edx,[edi+0x2C]
	push edx
	call SECRECT::SetRect
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	add esp,0x14
	push ebp
	mov byte ptr [esp+0xD4],0x35
	call ecx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0xD4],0x31
	call eax
	jmp Block189

 Block147:
	cmp eax,3
	je Block154

 Block148:
	cmp eax,4
	je Block154

 Block149:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1AD9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x70]
	mov byte ptr [esp+0xDC],0x48
	test ebp,ebp
	jne Block151

 Block150:
	push 0x80004003
	call _com_issue_error

 Block151:
	lea edx,[esp+0x58]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xE0],0x31
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],0x49
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	mov bl,0x4B
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0xD0],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x34]
	call Ztl_variant_t::_ctor_1
	mov esi,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD0],0x4C
	test esi,esi
	jne Block153

 Block152:
	push 0x80004003
	call _com_issue_error

 Block153:
	lea eax,[esp+0x30]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea ecx,[edi+0x30]
	push ecx
	lea edx,[edi+0x2C]
	push edx
	mov ecx,esi
	call IWzVector2D::_GetSnapshot
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0xD0],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x88],esp
	push 0x696
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0xDC],0x4D
	mov ecx,ebp
	mov byte ptr [esp+0xDC],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x4E
	call get_int32
	add esp,8
	lea ecx,[esp+0x30]
	mov dword ptr [edi+0x34],eax
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0xD4],0x31
	call eax
	jmp Block189

 Block154:
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1ADB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x6C]
	mov byte ptr [esp+0xD8],0x3A
	cmp esi,ebp
	jne Block156

 Block155:
	push 0x80004003
	call _com_issue_error

 Block156:
	lea edx,[esp+0x38]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x31
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x3B
	call get_int32
	add esp,8
	mov dword ptr [edi+0x2C],eax
	mov byte ptr [esp+0xD0],0x31
	cmp word ptr [esp+0x30],bx
	jne Block159

 Block157:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block160:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xB6A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x38]
	mov byte ptr [esp+0xD8],0x3C
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x31
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x3D
	call get_int32
	add esp,8
	cmp eax,0x20
	jl Block162

 Block161:
	mov eax,0x20

 Block162:
	mov dword ptr [edi+0x30],eax
	mov byte ptr [esp+0xD0],0x31
	cmp word ptr [esp+0x30],bx
	jne Block165

 Block163:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block166:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x692
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0xDC],0x3E
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x31
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x3F
	call get_int32
	add esp,8
	mov dword ptr [edi+0x34],eax
	mov byte ptr [esp+0xD0],0x31
	cmp word ptr [esp+0x30],bx
	jne Block169

 Block167:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebp
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block170:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1ABE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x3C]
	mov byte ptr [esp+0xDC],0x40
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xE0],0x31
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],0x41
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x64]
	mov dword ptr [esp+0x64],ebp
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebp
	jge Block173

 Block171:
	cmp eax,0x80004002
	je Block173

 Block172:
	push eax
	call _com_issue_error

 Block173:
	mov ebp,8
	mov bl,0x43
	mov byte ptr [esp+0xD0],bl
	cmp word ptr [esp+0x30],bp
	jne Block176

 Block174:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block177:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1ACB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x58]
	mov byte ptr [esp+0xDC],0x44
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xE0],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],0x45
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],0
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	test eax,eax
	jge Block180

 Block178:
	cmp eax,0x80004002
	je Block180

 Block179:
	push eax
	call _com_issue_error

 Block180:
	mov byte ptr [esp+0xD0],0x47
	cmp word ptr [esp+0x4C],bp
	jne Block183

 Block181:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block184:
	mov ebp,dword ptr [esp+0x28]
	test ebp,ebp
	jne Block186

 Block185:
	push 0x80004003
	call _com_issue_error

 Block186:
	mov esi,dword ptr [esp+0x60]
	test esi,esi
	jne Block188

 Block187:
	push 0x80004003
	call _com_issue_error

 Block188:
	mov ecx,ebp
	call IWzShape2D::Gety
	push eax
	mov ecx,ebp
	call IWzShape2D::Getx
	push eax
	mov ecx,esi
	call IWzShape2D::Gety
	push eax
	mov ecx,esi
	call IWzShape2D::Getx
	push eax
	lea eax,[edi+0x3C]
	push eax
	call SECRECT::SetRect
	add esp,0x14
	mov ecx,esi
	call IWzShape2D::Getx
	mov ecx,ebp
	mov ebx,eax
	call IWzShape2D::Getx
	sub eax,ebx
	mov dword ptr [edi+0x38],eax
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0xD4],0x43
	call edx
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xD4],0x31
	call ecx

 Block189:
	mov ebx,dword ptr [esp+0x78]
	mov edx,dword ptr [ebx+0x20]
	mov ebp,dword ptr [esp+0x5C]
	push edx
	lea esi,[ebx+0x18]
	push esi
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	test eax,eax
	je Block191

 Block190:
	mov eax,dword ptr [ebx+0x20]
	push eax
	push esi
	jmp Block192

 Block191:
	mov ecx,dword ptr [ebx+0x14]
	mov edx,dword ptr [esp+0x2C]
	push ecx
	push edx

 Block192:
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov ebx,eax
	add esp,8
	mov dword ptr [esp+0x68],0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1AAD
	push eax
	mov byte ptr [esp+0xDC],0x4F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0xD8],0x50
	mov byte ptr [esp+0xD8],0x4F
	call IWzProperty::Getitem
	cmp word ptr [esp+0x30],8
	movzx esi,word ptr [eax]
	jne Block195

 Block193:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block196

 Block194:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block196

 Block195:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block196:
	test si,si
	je Block204

 Block197:
	lea ecx,[esp+0x2C]
	push 0x69A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0xD0],0x51
	test ebp,ebp
	je Block199

 Block198:
	mov ecx,dword ptr [ebp]
	jmp Block200

 Block199:
	xor ecx,ecx

 Block200:
	mov eax,dword ptr [eax]
	push ecx
	push ebx
	push eax
	lea edx,[esp+0x74]
	push edx
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[esp+0x2C]
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x28]
	push eax
	lea ecx,[edi+0x78]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	je Block202

 Block201:
	call _xbstr_t::Data_t::Release

 Block202:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xD0],0x4F
	test eax,eax
	je Block204

 Block203:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block204:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1AB7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x44]
	lea edx,[esp+0x34]
	mov byte ptr [esp+0xD4],0x52
	push edx
	mov byte ptr [esp+0xD8],0x4F
	call IWzProperty::Getitem
	cmp word ptr [esp+0x30],8
	movzx esi,word ptr [eax]
	jne Block207

 Block205:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block208

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block207:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block208:
	test si,si
	je Block216

 Block209:
	lea edx,[esp+0x2C]
	push 0x69B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0xD0],0x53
	test ebp,ebp
	je Block211

 Block210:
	mov ecx,dword ptr [ebp]
	jmp Block212

 Block211:
	xor ecx,ecx

 Block212:
	mov eax,dword ptr [eax]
	push ecx
	push ebx
	push eax
	lea eax,[esp+0x74]
	push eax
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[esp+0x2C]
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[edi+0x7C]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	je Block214

 Block213:
	call _xbstr_t::Data_t::Release

 Block214:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xD0],0x4F
	test eax,eax
	je Block216

 Block215:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block216:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x43F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x44]
	lea eax,[esp+0x34]
	mov byte ptr [esp+0xD4],0x54
	push eax
	mov byte ptr [esp+0xD8],0x4F
	call IWzProperty::Getitem
	cmp word ptr [esp+0x30],8
	movzx esi,word ptr [eax]
	jne Block219

 Block217:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block220

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block220

 Block219:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block220:
	test si,si
	je Block228

 Block221:
	lea eax,[esp+0x2C]
	push 0x69C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0xD0],0x55
	test ebp,ebp
	je Block223

 Block222:
	mov ecx,dword ptr [ebp]
	jmp Block224

 Block223:
	xor ecx,ecx

 Block224:
	mov eax,dword ptr [eax]
	push ecx
	push ebx
	push eax
	lea ecx,[esp+0x74]
	push ecx
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[esp+0x2C]
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x28]
	push edx
	lea ecx,[edi+0x80]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	je Block226

 Block225:
	call _xbstr_t::Data_t::Release

 Block226:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xD0],0x4F
	test eax,eax
	je Block228

 Block227:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block228:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0xB6D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0xD8],0x56
	mov byte ptr [esp+0xD8],0x4F
	call IWzProperty::Getitem
	cmp word ptr [esp+0x30],8
	movzx esi,word ptr [eax]
	jne Block231

 Block229:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block232

 Block230:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block232

 Block231:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block232:
	test si,si
	je Block240

 Block233:
	lea ecx,[esp+0x2C]
	push 0x69D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0xD0],0x57
	test ebp,ebp
	je Block235

 Block234:
	mov ecx,dword ptr [ebp]
	jmp Block236

 Block235:
	xor ecx,ecx

 Block236:
	mov eax,dword ptr [eax]
	push ecx
	push ebx
	push eax
	lea edx,[esp+0x74]
	push edx
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	push eax
	lea ecx,[esp+0x2C]
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x28]
	push eax
	lea ecx,[edi+0x84]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	je Block238

 Block237:
	call _xbstr_t::Data_t::Release

 Block238:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xD0],0x4F
	test eax,eax
	je Block240

 Block239:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block240:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1AB7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x4C]
	lea edx,[esp+0x3C]
	mov byte ptr [esp+0xDC],0x58
	push edx
	mov byte ptr [esp+0xE0],0x4F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],0x59
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block243

 Block241:
	cmp eax,0x80004002
	je Block243

 Block242:
	push eax
	call _com_issue_error

 Block243:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xD0],0x5B
	jne Block246

 Block244:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block247

 Block245:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block247

 Block246:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block247:
	mov ebp,dword ptr [esp+0x28]
	test ebp,ebp
	sete al
	mov byte ptr [esp+0x4B],al
	test al,al
	je Block249

 Block248:
	xor eax,eax
	jmp Block252

 Block249:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x69F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xD8],0x5C
	test ebp,ebp
	jne Block251

 Block250:
	push 0x80004003
	call _com_issue_error

 Block251:
	lea eax,[esp+0x54]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0xDC],0x5B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x5D
	mov dword ptr [esp+0x4C],2
	call get_int32
	add esp,8

 Block252:
	mov ebx,dword ptr [esp+0x44]
	mov esi,0x5B
	mov dword ptr [edi+0x88],eax
	mov dword ptr [esp+0xD0],esi
	test bl,2
	je Block257

 Block253:
	and ebx,0xFFFFFFFD
	cmp word ptr [esp+0x4C],8
	mov dword ptr [esp+0x44],ebx
	jne Block256

 Block254:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block257

 Block255:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block257

 Block256:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block257:
	cmp byte ptr [esp+0x4B],0
	je Block259

 Block258:
	xor eax,eax
	jmp Block262

 Block259:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0xEEC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xD8],0x5E
	test ebp,ebp
	jne Block261

 Block260:
	push 0x80004003
	call _com_issue_error

 Block261:
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0xDC],0x5B
	call IWzProperty::Getitem
	or ebx,4
	push eax
	mov byte ptr [esp+0xD8],0x5F
	mov dword ptr [esp+0x4C],ebx
	call get_int32
	add esp,8

 Block262:
	mov dword ptr [edi+0xA0],eax
	mov dword ptr [esp+0xD0],esi
	test bl,4
	je Block267

 Block263:
	and ebx,0xFFFFFFFB
	cmp word ptr [esp+0x4C],8
	mov dword ptr [esp+0x44],ebx
	jne Block266

 Block264:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block267

 Block265:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block267

 Block266:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block267:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x6A1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x48]
	lea edx,[esp+0x54]
	mov byte ptr [esp+0xD8],0x60
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x5B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x61
	call get_int32
	add esp,8
	mov dword ptr [edi+0x8C],eax
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xD0],0x5B
	jne Block270

 Block268:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block271

 Block269:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block271

 Block270:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block271:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x6A0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x54]
	mov byte ptr [esp+0xD8],0x62
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x5B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x63
	call get_int32
	add esp,8
	mov dword ptr [edi+0x90],eax
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xD0],0x5B
	jne Block274

 Block272:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block275

 Block273:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block275

 Block274:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block275:
	mov eax,dword ptr [esp+0xD8]
	lea esi,[edi+4]
	push esi
	mov dword ptr [eax+4],edi
	call dword ptr [ZImports::_InterlockedIncrement]
	or ebx,1
	mov dword ptr [esp+0x44],ebx
	mov byte ptr [esp+0xD0],0x4F
	test ebp,ebp
	je Block277

 Block276:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block277:
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0xD0],0x31
	test eax,eax
	je Block279

 Block278:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block279:
	mov eax,dword ptr [esp+0x64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xD4],0x17
	call edx
	cmp word ptr [esp+0x90],8
	mov byte ptr [esp+0xD0],0xB
	jne Block282

 Block280:
	xor eax,eax
	mov word ptr [esp+0x90],ax
	mov eax,dword ptr [esp+0x98]
	test eax,eax
	je Block283

 Block281:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block283

 Block282:
	lea ecx,[esp+0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block283:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	push esi
	mov byte ptr [esp+0xD4],0xA
	call ebx
	test eax,eax
	jne Block285

 Block284:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block285:
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xD4],6
	call edx
	mov eax,dword ptr [esp+0x74]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xD4],2
	call edx
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0xD0],1
	test eax,eax
	je Block290

 Block286:
	add eax,4
	push eax
	call ebx
	test eax,eax
	jne Block289

 Block287:
	mov eax,dword ptr [esp+0x70]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x70]
	test ecx,ecx
	je Block289

 Block288:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block289:
	mov dword ptr [esp+0x70],0

 Block290:
	mov ecx,dword ptr [esp+0x5C]
	test ecx,ecx
	je Block292

 Block291:
	call _xbstr_t::Data_t::Release

 Block292:
	mov eax,dword ptr [esp+0xD8]

 Block293:
	mov ecx,dword ptr [esp+0xC8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC0
	ret 8
}
}
// CMobTemplate::LoadSpeakCondition
_SUB_EXCEPTION_HANDLER(25A930)
__SUB_CLASS_THIS(0025A930, __thiscall, 7242,  CMobTemplate, void, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_25A930
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x24],ecx
	xor eax,eax
	mov dword ptr [ebp-0x14],eax
	mov dword ptr [ebp-4],eax
	mov dword ptr [ebp-0x20],eax
	lea esp,[esp]

 Block1:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp-0x20]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],1
	test ecx,ecx
	je Block49

 Block2:
	lea edx,[ebp-0x40]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp-0x18],edi
	test eax,eax
	je Block6

 Block3:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x2C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x2C]
	mov dword ptr [ebp-0x18],ecx
	test eax,eax
	jge Block5

 Block4:
	cmp eax,0x80004002
	jne Block50

 Block5:
	mov edi,dword ptr [ebp-0x18]

 Block6:
	mov esi,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x40],si
	jne Block9

 Block7:
	mov eax,dword ptr [ebp-0x38]
	xor edx,edx
	mov word ptr [ebp-0x40],dx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea eax,[ebp-0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block10:
	test edi,edi
	sete al
	test al,al
	jne Block51

 Block11:
	push 0
	call ZRefCounted_AllocHelper<MobSpeakCondition>::call
	mov ebx,eax
	add esp,4
	mov dword ptr [ebx+4],1
	mov dword ptr [ebp-0x84],ebx
	push 0
	push ecx
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push offset _S_PET
	mov byte ptr [ebp-4],5
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],6
	test edi,edi
	je Block49

 Block12:
	lea ecx,[ebp-0x60]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],7
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x14],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x60],si
	jne Block15

 Block13:
	mov eax,dword ptr [ebp-0x58]
	xor edx,edx
	mov word ptr [ebp-0x60],dx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[ebp-0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push offset _S_QUEST__2
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x50]
	push ecx
	mov byte ptr [ebp-4],8
	mov ecx,edi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp-0x1C],edi
	test eax,eax
	je Block19

 Block17:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x28]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x28]
	mov edi,ecx
	mov dword ptr [ebp-0x1C],edi
	test eax,eax
	jge Block19

 Block18:
	cmp eax,0x80004002
	jne Block50

 Block19:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x50],si
	jne Block22

 Block20:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block23:
	test edi,edi
	je Block25

 Block24:
	push 0
	push ecx
	mov dword ptr [ebp-0x30],esp
	mov ecx,esp
	push offset _S_QUESTID
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x80]
	push ecx
	mov byte ptr [ebp-4],0xC
	mov ecx,edi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	or dword ptr [ebp-0x14],1
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	jmp Block26

 Block25:
	xor eax,eax

 Block26:
	test byte ptr [ebp-0x14],1
	mov esi,0xB
	mov dword ptr [ebx+0xC],eax
	mov dword ptr [ebp-4],esi
	je Block31

 Block27:
	and dword ptr [ebp-0x14],0xFFFFFFFE
	cmp word ptr [ebp-0x80],8
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x78]
	xor edx,edx
	mov word ptr [ebp-0x80],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[ebp-0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	test edi,edi
	je Block33

 Block32:
	push 0
	push ecx
	mov dword ptr [ebp-0x30],esp
	mov ecx,esp
	push offset _S_STATE
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x70]
	push ecx
	mov byte ptr [ebp-4],0xE
	mov ecx,edi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	or dword ptr [ebp-0x14],2
	push eax
	mov byte ptr [ebp-4],0xF
	call get_int32
	add esp,8
	jmp Block34

 Block33:
	xor eax,eax

 Block34:
	test byte ptr [ebp-0x14],2
	mov dword ptr [ebx+0x10],eax
	mov dword ptr [ebp-4],esi
	je Block39

 Block35:
	and dword ptr [ebp-0x14],0xFFFFFFFD
	cmp word ptr [ebp-0x70],8
	jne Block38

 Block36:
	mov eax,dword ptr [ebp-0x68]
	xor edx,edx
	mov word ptr [ebp-0x70],dx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[ebp-0x70]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov ecx,dword ptr [ebp-0x24]
	push 0xFFFFFFFF
	add ecx,0x288
	call ZArray<ZRef<MobSpeakCondition>>::InsertBefore
	mov esi,eax
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block44

 Block40:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block43

 Block41:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block43

 Block42:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block43:
	mov dword ptr [esi+4],0

 Block44:
	mov dword ptr [esi+4],ebx
	mov byte ptr [ebp-4],5
	test edi,edi
	je Block46

 Block45:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block46:
	lea esi,[ebx+4]
	push esi
	mov byte ptr [ebp-4],4
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block48

 Block47:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block48:
	mov eax,dword ptr [ebp-0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-0x84],0
	mov byte ptr [ebp-4],0
	call edx
	inc dword ptr [ebp-0x20]
	jmp Block1

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block53

 Block52:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block53:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block55

 Block54:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block55:
	lea esp,[ebp-0x98]
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
// CMobTemplate::_ZtlSecurePut_nWeaponID
__SUB_CLASS(00259A10, __fastcall, 7217,  CMobTemplate, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x1BC]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x1C4],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::_ZtlSecurePut_nHPTagColor
__SUB_CLASS(00259A90, __fastcall, 7217,  CMobTemplate, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x1EC]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x1F4],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// MobSpeakInformation::~MobSpeakInformation
_SUB_EXCEPTION_HANDLER(25B290)
__SUB_CLASS_THIS0(0025B290, __thiscall, 137972,  MobSpeakInformation, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_25B290
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
	lea ecx,[esi+0x20]
	mov dword ptr [esp+0x14],0
	call ZArray<ZXString<char>>::RemoveAll
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMobTemplate::_ZtlSecurePut_bHPGaugeHide
__SUB_CLASS(00259A70, __fastcall, 7220,  CMobTemplate, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x1E0]
	mov ecx,esi
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [edi+0x1E8],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// GetPropertyLinkData
_SUB_EXCEPTION_HANDLER(25A5B0)
__SUB(0025A5B0, __cdecl, 138092,  _x_com_ptr<IWzProperty>, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<Ztl_bstr_t>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_25A5B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x10],0
	mov dword ptr [esp+0x30],1
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x50]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x20],esp
	test eax,eax
	je Block2

 Block1:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],4
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x24]
	mov bl,3
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x38],5
	call Ztl_variant_t::GetUnknown
	mov esi,dword ptr [esp+0x38]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block7

 Block5:
	cmp eax,0x80004002
	je Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	cmp word ptr [esp+0x18],8
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov dword ptr [esp+0x10],1
	mov byte ptr [esp+0x30],bl
	jne Block10

 Block8:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea ecx,[esp+0x18]
	push ecx
	call ebp

 Block11:
	cmp dword ptr [esi],0
	sete al
	test al,al
	je Block24

 Block12:
	cmp dword ptr [esp+0x40],0
	sete al
	test al,al
	sete al
	test al,al
	je Block24

 Block13:
	mov edx,dword ptr [esp+0x44]
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x20],esp
	test eax,eax
	je Block15

 Block14:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x3C],6
	test ecx,ecx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x38],7
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block20

 Block18:
	cmp eax,0x80004002
	je Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],bl
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x18]
	push edx
	call ebp

 Block24:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x30],2
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x30],1
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	je Block30

 Block29:
	call _xbstr_t::Data_t::Release

 Block30:
	mov eax,esi
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// CMobTemplate::_ZtlSecureGet_bAngerGauge
__SUB_CLASS0(0023A580, __fastcall, 7216,  CMobTemplate, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1D0]
	push eax
	add ecx,0x1C8
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMobTemplate::_ZtlSecurePut_bSelfDestruction
__SUB_CLASS(00259910, __fastcall, 7220,  CMobTemplate, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x158]
	mov ecx,esi
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [edi+0x160],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::GetMobTemplate
_SUB_EXCEPTION_HANDLER(2611F0)
__SUB(002611F0, __cdecl, 7239,  CMobTemplate*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2611F0
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
	xor edi,edi
	mov dword ptr [esp+0x24],edi
	mov ebp,dword ptr [esp+0x68]
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	mov ecx,offset CMobTemplate::ms_mMobTemplate
	mov dword ptr [esp+0x68],edi
	mov dword ptr [esp+0x70],ebp
	call ZMap<long, ZRef<CMobTemplate>, long>::GetAt
	mov esi,dword ptr [esp+0x24]
	cmp esi,edi
	jne Block33

 Block1:
	mov dword ptr [esp+0x68],edi
	lea edx,[esp+0x14]
	push 0x3CE
	push edx
	mov byte ptr [esp+0x68],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea eax,[esp+0x70]
	push eax
	mov byte ptr [esp+0x6C],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x60],1
	cmp eax,edi
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
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
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x64],3
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	push edi
	push edi
	lea edx,[esp+0x40]
	push edx
	mov edx,dword ptr [esp+0x74]
	lea eax,[esp+0x34]
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,4
	push edx
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x74],5
	cmp dword ptr [_D_G_RM],edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x74],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block12

 Block10:
	cmp eax,0x80004002
	je Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],bx
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,edi
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x48]
	push edx
	call esi

 Block16:
	mov byte ptr [esp+0x60],9
	cmp word ptr [esp+0x28],bx
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,edi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x28]
	push ecx
	call esi

 Block20:
	mov byte ptr [esp+0x60],0xA
	cmp word ptr [esp+0x38],bx
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,edi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x38]
	push eax
	call esi

 Block24:
	mov esi,dword ptr [esp+0x14]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],esi
	cmp esi,edi
	je Block26

 Block25:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block26:
	push ebp
	call CMobTemplate::RegisterMob
	add esp,8
	cmp eax,edi
	jne Block28

 Block27:
	push 0x22000006
	lea ecx,[esp+0x1C]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x18]
	push offset CTerminateException::THROW_INFO
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esp+0x24],eax
	call _CxxThrowException

 Block28:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x20]
	push eax
	mov ecx,offset CMobTemplate::ms_mMobTemplate
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, ZRef<CMobTemplate>, long>::GetAt
	mov byte ptr [esp+0x60],1
	cmp esi,edi
	je Block30

 Block29:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block30:
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x60],0
	cmp eax,edi
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	mov esi,dword ptr [esp+0x24]

 Block33:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp esi,edi
	je Block36

 Block34:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block36

 Block35:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block36:
	mov eax,esi
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret
}
}
// CMobTemplate::_ZtlSecurePut_bUndead
__SUB_CLASS(002598F0, __fastcall, 7220,  CMobTemplate, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x140]
	mov ecx,esi
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [edi+0x148],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::LoadSpeakInformation
_SUB_EXCEPTION_HANDLER(25B4B0)
__SUB_CLASS_THIS(0025B4B0, __thiscall, 7246,  CMobTemplate, void, NakedParam<_x_com_ptr<IWzProperty>>, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_25B4B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x30],ecx
	xor ebx,ebx
	lea ecx,[ebp-0x2C]
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x28],ebx
	call ZRef<MobSpeakInformation>::_Alloc
	mov eax,dword ptr [ebp+0xC]
	mov esi,dword ptr [ebp-0x28]
	push ebx
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push offset _S_HP
	mov byte ptr [ebp-4],1
	mov dword ptr [esi+0xC],eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],2
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],3
	call get_int32
	mov edi,8
	add esp,8
	mov dword ptr [esi+0x10],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block8

 Block3:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block5:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block6:
	push 0
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push offset _S_MP
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],4
	test ecx,ecx
	jne Block9

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x24]
	push ecx
	call ebx
	jmp Block6

 Block9:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],5
	call get_int32
	add esp,8
	mov dword ptr [esi+0x14],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[ebp-0x24]
	push ecx
	call ebx

 Block13:
	push 0x64
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push offset _S_PROB
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],6
	test ecx,ecx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],7
	call get_int32
	add esp,8
	mov dword ptr [esi+0x18],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[ebp-0x24]
	push ecx
	call ebx

 Block19:
	push 0
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push offset _S_WIDTHSIZE
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],8
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],9
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1C],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[ebp-0x24]
	push ecx
	call ebx

 Block25:
	xor ebx,ebx

 Block26:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0xA
	test ecx,ecx
	je Block1

 Block27:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0xB
	cmp word ptr [eax],di
	jne Block29

 Block28:
	mov edi,dword ptr [eax+8]
	jmp Block30

 Block29:
	mov edi,offset _S___3

 Block30:
	xor esi,esi
	mov dword ptr [ebp-0x14],esi
	test edi,edi
	je Block32

 Block31:
	push esi
	push esi
	push esi
	push esi
	push 0xFFFFFFFF
	push edi
	push esi
	push esi
	call WideCharToMultiByte
	mov esi,eax
	push 0
	dec esi
	push esi
	lea ecx,[ebp-0x14]
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push esi
	lea ecx,[ebp-0x14]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [ebp-0x14]

 Block32:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0xD
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	test esi,esi
	je Block39

 Block37:
	cmp byte ptr [esi],0
	je Block39

 Block38:
	mov ecx,dword ptr [ebp-0x28]
	lea edx,[ebp-0x14]
	push edx
	push 0xFFFFFFFF
	add ecx,0x20
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	add esi,0xFFFFFFF4
	push esi
	mov byte ptr [ebp-4],1
	call ZXString<char>::_Release
	add esp,4
	inc ebx
	mov edi,8
	jmp Block26

 Block39:
	mov byte ptr [ebp-4],1
	test esi,esi
	je Block41

 Block40:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block41:
	mov ecx,dword ptr [ebp-0x30]
	push 0xFFFFFFFF
	add ecx,0x284
	call ZArray<ZRef<MobSpeakInformation>>::InsertBefore
	mov edi,dword ptr [ebp-0x28]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	add edi,4
	push edi
	mov esi,eax
	call ebx
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block46

 Block42:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block45

 Block43:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call ebx
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block45

 Block44:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block45:
	mov dword ptr [esi+4],0

 Block46:
	mov eax,dword ptr [ebp-0x28]
	push edi
	mov dword ptr [esi+4],eax
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block48

 Block47:
	push edi
	call ebx
	mov ecx,dword ptr [ebp-0x28]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block48:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	lea esp,[ebp-0x40]
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
// CMobTemplate::_ZtlSecurePut_bUpperMostLayer
__SUB_CLASS(00259B30, __fastcall, 7220,  CMobTemplate, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x2C0]
	mov ecx,esi
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [edi+0x2C8],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::_ZtlSecurePut_nMoveAbility
__SUB_CLASS(002598D0, __fastcall, 7217,  CMobTemplate, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x40]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x48],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// get_element_attribute
// 658F6C
static uint8_t _SUB_258E90_LOOKUP_TABLE_0[50] = {
0, 8, 1, 8, 2, 3, 8, 8, 4, 8, 8, 8, 5, 8, 8, 6, 
8, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
0, 8, 1, 8, 2, 3, 8, 8, 4, 8, 8, 8, 5, 8, 8, 6, 
8, 7, 
};
__SUB(00258E90, __cdecl, 138083,  int32_t, const wchar_t*, long*) {
__asm {

 Block0:
	xor eax,eax
	mov dword ptr [esi],eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+0x10],eax
	mov dword ptr [esi+0x14],eax
	mov dword ptr [esi+0x18],eax
	mov dword ptr [esi+0x1C],eax
	test edx,edx
	jne Block2

 Block1:
	mov eax,1
	ret

 Block2:
	push edi
	cmp word ptr [edx],ax
	je Block21

 Block3:
	lea ecx,[ecx]

 Block4:
	movzx edi,word ptr [edx]
	movzx eax,word ptr [edx+2]
	add edx,2
	xor ecx,ecx
	test ax,ax
	je Block9

 Block5:
	cmp ax,0x30
	jb Block8

 Block6:
	cmp ax,0x39
	ja Block8

 Block7:
	movzx eax,ax
	lea ecx,[ecx+ecx*4]
	add edx,2
	lea ecx,[eax+ecx*2-0x30]
	movzx eax,word ptr [edx]
	test ax,ax
	jne Block5

 Block8:
	test ecx,ecx
	jne Block10

 Block9:
	xor ecx,ecx

 Block10:
	movzx eax,di
	add eax,0xFFFFFFBC
	cmp eax,0x31
	ja Block22

 Block11:
	movzx eax,byte ptr [eax+_SUB_258E90_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block18
cmp EAX, 1
je Block14
cmp EAX, 2
je Block17
cmp EAX, 3
je Block13
cmp EAX, 4
je Block15
cmp EAX, 5
je Block12
cmp EAX, 6
je Block16
cmp EAX, 7
je Block19
cmp EAX, 8
je Block22


 Block12:
	mov dword ptr [esi],ecx
	jmp Block20

 Block13:
	mov dword ptr [esi+4],ecx
	jmp Block20

 Block14:
	mov dword ptr [esi+8],ecx
	jmp Block20

 Block15:
	mov dword ptr [esi+0xC],ecx
	jmp Block20

 Block16:
	mov dword ptr [esi+0x10],ecx
	jmp Block20

 Block17:
	mov dword ptr [esi+0x14],ecx
	jmp Block20

 Block18:
	mov dword ptr [esi+0x18],ecx
	jmp Block20

 Block19:
	mov dword ptr [esi+0x1C],ecx

 Block20:
	cmp word ptr [edx],0
	jne Block4

 Block21:
	mov eax,1
	pop edi
	ret

 Block22:
	xor eax,eax
	pop edi
	ret
}
}
// CMobTemplate::_ZtlSecurePut_bInvincible
__SUB_CLASS(00259990, __fastcall, 7220,  CMobTemplate, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x188]
	mov ecx,esi
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [edi+0x190],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::_ZtlSecureGet_nLevel
__SUB_CLASS0(0023A520, __fastcall, 7216,  CMobTemplate, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x78]
	push eax
	add ecx,0x70
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMobTemplate::_ZtlSecurePut_bDisable
__SUB_CLASS(002599B0, __fastcall, 7220,  CMobTemplate, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x194]
	mov ecx,esi
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [edi+0x19C],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::_ZtlSecurePut_nCategory
__SUB_CLASS(00259AF0, __fastcall, 7217,  CMobTemplate, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x2A8]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x2B0],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::_ZtlSecurePut_bCannotEvade
__SUB_CLASS(00259B10, __fastcall, 7220,  CMobTemplate, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x2B4]
	mov ecx,esi
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [edi+0x2BC],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::_ZtlSecurePut_bPickUpDrop
__SUB_CLASS(00259950, __fastcall, 7220,  CMobTemplate, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x170]
	mov ecx,esi
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [edi+0x178],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::GetAttackInfo
_SUB_EXCEPTION_HANDLER(12D550)
__SUB_CLASS_THIS(0012D550, __thiscall, 7228,  CMobTemplate, MobAttackInfo*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12D550
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
	test edi,edi
	jl Block5

 Block1:
	cmp edi,dword ptr [esi+0x218]
	jge Block5

 Block2:
	cmp dword ptr [esi+edi*8+0x23C],0
	jne Block4

 Block3:
	push edi
	lea eax,[esp+0x10]
	push eax
	call CMobTemplate::LoadAttackInfo
	push eax
	lea ecx,[esi+edi*8+0x238]
	mov dword ptr [esp+0x20],0
	call ZRef<MobAttackInfo>::op_assign_copy
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<MobAttackInfo>::~ZRef<MobAttackInfo>

 Block4:
	mov eax,dword ptr [esi+edi*8+0x23C]
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block5:
	xor eax,eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CMobTemplate::_ZtlSecurePut_bNotAttack
__SUB_CLASS(002599D0, __fastcall, 7220,  CMobTemplate, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x1A4]
	mov ecx,esi
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [edi+0x1AC],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::_ZtlSecureGet_nHPTagBgColor
__SUB_CLASS0(0023A5E0, __fastcall, 7216,  CMobTemplate, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x200]
	push eax
	add ecx,0x1F8
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMobTemplate::CalcCrc
__SUB_CLASS_THIS(00260730, __thiscall, 7236,  CMobTemplate, unsigned long, unsigned long) {
__asm {

 Block0:
	sub esp,0x20
	push ebx
	push ebp
	push esi
	push edi
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0x44]
	push 4
	push eax
	mov esi,ecx
	call CCrc32::GetCrc32
	mov ecx,dword ptr [esi+0x60]
	push ecx
	lea edx,[esi+0x58]
	push edx
	mov ebx,eax
	call _ZtlSecureFuseHelper<int>::call
	mov edi,eax
	mov eax,dword ptr [esi+0x78]
	push eax
	lea ecx,[esi+0x70]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x84]
	mov ebp,eax
	push edx
	lea eax,[esi+0x7C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	push 0
	push 0
	push 0
	push 0
	lea ecx,[esp+0x50]
	push 4
	push ecx
	mov dword ptr [esp+0x60],eax
	mov dword ptr [esp+0x58],edi
	call CCrc32::GetCrc32
	add esp,0x48
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x24]
	push 4
	push edx
	mov edi,eax
	mov dword ptr [esp+0x2C],ebp
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	mov ebp,eax
	mov eax,dword ptr [esp+0x40]
	lea ecx,[esp+0x40]
	push 4
	push ecx
	mov dword ptr [esp+0x48],eax
	call CCrc32::GetCrc32
	mov edx,dword ptr [esi+0x90]
	or eax,ebp
	or eax,edi
	xor ebx,eax
	push edx
	lea eax,[esi+0x88]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x9C]
	push ecx
	lea edx,[esi+0x94]
	push edx
	mov edi,eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebp,eax
	mov eax,dword ptr [esi+0xA8]
	add esp,0x40
	push eax
	lea ecx,[esi+0xA0]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x29C]
	mov dword ptr [esp+0x18],eax
	push edx
	lea eax,[esi+0x294]
	push eax
	call _ZtlSecureFuseHelper<int>::call
	push 0
	push 0
	push 0
	push 0
	lea ecx,[esp+0x38]
	push 4
	push ecx
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x40],edi
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x4C]
	push 4
	push edx
	mov edi,eax
	mov dword ptr [esp+0x54],ebp
	call CCrc32::GetCrc32
	add esp,0x40
	push 0
	push 0
	push 0
	push 0
	mov ebp,eax
	mov eax,dword ptr [esp+0x20]
	lea ecx,[esp+0x20]
	push 4
	push ecx
	mov dword ptr [esp+0x28],eax
	call CCrc32::GetCrc32
	mov edx,dword ptr [esp+0x34]
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x4C],eax
	lea eax,[esp+0x44]
	push 4
	push eax
	mov dword ptr [esp+0x4C],edx
	call CCrc32::GetCrc32
	or eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [esi+0xB4]
	or eax,ebp
	push ecx
	lea edx,[esi+0xAC]
	or eax,edi
	push edx
	xor ebx,eax
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	mov eax,dword ptr [esi+0xC0]
	push eax
	lea ecx,[esi+0xB8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0xCC]
	add esp,0x40
	mov ebp,eax
	push edx
	lea eax,[esi+0xC4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x1AC]
	push ecx
	lea edx,[esi+0x1A4]
	push edx
	mov dword ptr [esp+0x28],eax
	call _ZtlSecureFuseHelper<int>::call
	mov dword ptr [esp+0x24],eax
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0x44]
	push 4
	push eax
	mov dword ptr [esp+0x4C],edi
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	lea ecx,[esp+0x54]
	push 4
	push ecx
	mov edi,eax
	mov dword ptr [esp+0x5C],ebp
	call CCrc32::GetCrc32
	mov edx,dword ptr [esp+0x58]
	add esp,0x40
	push 0
	push 0
	push 0
	push 0
	mov ebp,eax
	lea eax,[esp+0x28]
	push 4
	push eax
	mov dword ptr [esp+0x30],edx
	call CCrc32::GetCrc32
	mov ecx,dword ptr [esp+0x2C]
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x3C]
	push 4
	push edx
	mov dword ptr [esp+0x40],eax
	mov dword ptr [esp+0x44],ecx
	call CCrc32::GetCrc32
	or eax,dword ptr [esp+0x40]
	lea ecx,[esi+0xD0]
	or eax,ebp
	or eax,edi
	xor ebx,eax
	mov eax,dword ptr [esi+0xD8]
	push eax
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0xE4]
	mov edi,eax
	push edx
	lea eax,[esi+0xDC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0xF0]
	add esp,0x40
	push ecx
	lea edx,[esi+0xE8]
	push edx
	mov ebp,eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [esi+0x160]
	push eax
	lea ecx,[esi+0x158]
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x44]
	push 4
	push edx
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x4C],edi
	call CCrc32::GetCrc32
	mov edi,eax
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0x54]
	push 4
	push eax
	mov dword ptr [esp+0x5C],ebp
	call CCrc32::GetCrc32
	mov ecx,dword ptr [esp+0x58]
	add esp,0x40
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x28]
	push 4
	push edx
	mov ebp,eax
	mov dword ptr [esp+0x30],ecx
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x38],eax
	mov eax,dword ptr [esp+0x3C]
	lea ecx,[esp+0x3C]
	push 4
	push ecx
	mov dword ptr [esp+0x44],eax
	call CCrc32::GetCrc32
	or eax,dword ptr [esp+0x40]
	mov edx,dword ptr [esi+0xFC]
	or eax,ebp
	or eax,edi
	xor ebx,eax
	push edx
	lea eax,[esi+0xF4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x108]
	push ecx
	lea edx,[esi+0x100]
	push edx
	mov edi,eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebp,eax
	mov eax,dword ptr [esi+0x114]
	add esp,0x40
	push eax
	lea ecx,[esi+0x10C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x178]
	mov dword ptr [esp+0x20],eax
	push edx
	lea eax,[esi+0x170]
	push eax
	call _ZtlSecureFuseHelper<int>::call
	push 0
	push 0
	push 0
	push 0
	lea ecx,[esp+0x44]
	push 4
	push ecx
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x4C],edi
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x54]
	push 4
	push edx
	mov edi,eax
	mov dword ptr [esp+0x5C],ebp
	call CCrc32::GetCrc32
	add esp,0x40
	push 0
	push 0
	push 0
	push 0
	mov ebp,eax
	mov eax,dword ptr [esp+0x28]
	lea ecx,[esp+0x28]
	push 4
	push ecx
	mov dword ptr [esp+0x30],eax
	call CCrc32::GetCrc32
	mov edx,dword ptr [esp+0x2C]
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x54],eax
	lea eax,[esp+0x3C]
	push 4
	push eax
	mov dword ptr [esp+0x44],edx
	call CCrc32::GetCrc32
	mov ecx,dword ptr [esi+0x234]
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x50]
	push 4
	push edx
	mov dword ptr [esp+0x70],eax
	mov dword ptr [esp+0x58],ecx
	call CCrc32::GetCrc32
	or eax,dword ptr [esp+0x70]
	add esp,0x48
	or eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x10],8
	or eax,ebp
	or eax,edi
	xor ebx,eax
	xor edi,edi
	lea ebp,[esi+0x118]

 Block1:
	mov eax,dword ptr [ebp]
	push 0
	push 0
	push 0
	push 0
	lea ecx,[esp+0x3C]
	push 4
	push ecx
	mov dword ptr [esp+0x44],eax
	call CCrc32::GetCrc32
	add esp,0x18
	or edi,eax
	add ebp,4
	sub dword ptr [esp+0x10],1
	jne Block1

 Block2:
	mov edx,dword ptr [esi+0x184]
	push edx
	lea eax,[esi+0x17C]
	push eax
	call _ZtlSecureFuseHelper<int>::call
	mov ecx,dword ptr [esi+0x138]
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x44]
	push 4
	push edx
	mov ebp,eax
	mov dword ptr [esp+0x4C],ecx
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x48],eax
	mov eax,dword ptr [esi+0x13C]
	lea ecx,[esp+0x58]
	push 4
	push ecx
	mov dword ptr [esp+0x60],eax
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x6C]
	push 4
	push edx
	mov dword ptr [esp+0x6C],eax
	mov dword ptr [esp+0x74],ebp
	call CCrc32::GetCrc32
	or eax,dword ptr [esp+0x6C]
	add esp,0x50
	or eax,dword ptr [esp+0x18]
	lea ecx,[esi+0x188]
	xor eax,edi
	xor ebx,eax
	mov eax,dword ptr [esi+0x190]
	push eax
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	mov edx,dword ptr [esi+0x1B8]
	mov edi,eax
	push edx
	lea eax,[esi+0x1B0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	fld qword ptr [esi+0x150]
	push 0
	fstp qword ptr [esp+0x30]
	push 0
	push 0
	push 0
	lea ecx,[esp+0x3C]
	push 8
	push ecx
	mov ebp,eax
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x64]
	push 4
	push edx
	mov dword ptr [esp+0x64],eax
	mov dword ptr [esp+0x6C],edi
	call CCrc32::GetCrc32
	add esp,0x40
	push 0
	push 0
	push 0
	mov edi,eax
	mov dword ptr [esp+0x34],ebp
	push 0
	lea eax,[esp+0x38]
	push 4
	push eax
	call CCrc32::GetCrc32
	mov ecx,dword ptr [esi+0x14]
	or eax,edi
	or eax,dword ptr [esp+0x3C]
	push ecx
	lea edx,[esi+0xC]
	push edx
	xor ebx,eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x5C],eax
	lea eax,[esp+0x5C]
	push 4
	push eax
	call CCrc32::GetCrc32
	add esp,0x38
	xor ebx,eax
	cmp dword ptr [esi+0x218],0
	mov dword ptr [esp+0x10],0
	jle Block11

 Block3:
	mov ecx,dword ptr [esp+0x10]
	push ecx
	mov ecx,esi
	call CMobTemplate::GetAttackInfo
	push 0
	push 0
	push 0
	mov edi,eax
	mov edx,dword ptr [edi+0xC]
	push 0
	lea eax,[esp+0x3C]
	push 4
	push eax
	mov dword ptr [esp+0x44],edx
	call CCrc32::GetCrc32
	mov ecx,dword ptr [edi+0x10]
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x50]
	push 4
	push edx
	mov ebp,eax
	mov dword ptr [esp+0x58],ecx
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x54],eax
	mov eax,dword ptr [edi+0x14]
	lea ecx,[esp+0x64]
	push 4
	push ecx
	mov dword ptr [esp+0x6C],eax
	call CCrc32::GetCrc32
	mov edx,dword ptr [edi+0x1C]
	add esp,0x48
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x28],eax
	lea eax,[esp+0x2C]
	push 4
	push eax
	mov dword ptr [esp+0x34],edx
	call CCrc32::GetCrc32
	or eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [edi+0x28]
	or eax,dword ptr [esp+0x2C]
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x54]
	or eax,ebp
	push 4
	push edx
	xor ebx,eax
	mov dword ptr [esp+0x5C],ecx
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	mov ebp,eax
	mov eax,dword ptr [edi+0x1C]
	lea ecx,[esp+0x68]
	push 4
	push ecx
	mov dword ptr [esp+0x70],eax
	call CCrc32::GetCrc32
	mov edx,dword ptr [edi+0x6C]
	add esp,0x48
	push 0
	push 0
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x2C],edx
	push 0
	push 0
	lea eax,[esp+0x34]
	push 4
	push eax
	call CCrc32::GetCrc32
	mov ecx,dword ptr [edi+0x20]
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x44]
	push 4
	push edx
	mov dword ptr [esp+0x48],eax
	mov dword ptr [esp+0x4C],ecx
	call CCrc32::GetCrc32
	or eax,dword ptr [esp+0x48]
	push 0
	or eax,dword ptr [esp+0x48]
	push 0
	push 0
	or eax,ebp
	push 0
	xor ebx,eax
	mov eax,dword ptr [edi+0x70]
	lea ecx,[esp+0x6C]
	push 4
	push ecx
	mov dword ptr [esp+0x74],eax
	call CCrc32::GetCrc32
	mov edx,dword ptr [edi+0x74]
	add esp,0x48
	push 0
	push 0
	push 0
	push 0
	mov ebp,eax
	lea eax,[esp+0x38]
	push 4
	push eax
	mov dword ptr [esp+0x40],edx
	call CCrc32::GetCrc32
	mov ecx,dword ptr [edi+0x94]
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x4C]
	push 4
	push edx
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x54],ecx
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x58],eax
	mov eax,dword ptr [edi+0x98]
	lea ecx,[esp+0x5C]
	push 4
	push ecx
	mov dword ptr [esp+0x64],eax
	call CCrc32::GetCrc32
	or eax,dword ptr [esp+0x60]
	mov edx,dword ptr [edi+0x9C]
	or eax,dword ptr [esp+0x5C]
	add esp,0x48
	push 0
	push 0
	push 0
	or eax,ebp
	push 0
	xor ebx,eax
	lea eax,[esp+0x3C]
	push 4
	push eax
	mov dword ptr [esp+0x44],edx
	call CCrc32::GetCrc32
	mov ecx,dword ptr [edi+0xA4]
	mov ebp,eax
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x50]
	push 4
	push edx
	mov dword ptr [esp+0x58],ecx
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x5C],eax
	mov eax,dword ptr [edi+0xA8]
	lea ecx,[esp+0x64]
	push 4
	push ecx
	mov dword ptr [esp+0x6C],eax
	call CCrc32::GetCrc32
	or eax,dword ptr [esp+0x64]
	mov edx,dword ptr [edi+0x90]
	add esp,0x48
	push 0
	push 0
	push 0
	or eax,ebp
	push 0
	xor ebx,eax
	lea eax,[esp+0x3C]
	push 4
	push eax
	mov dword ptr [esp+0x44],edx
	call CCrc32::GetCrc32
	xor ebx,eax
	mov eax,dword ptr [edi+0xC]
	add esp,0x18
	test eax,eax
	jne Block5

 Block4:
	add edi,0x2C
	jmp Block9

 Block5:
	cmp eax,3
	je Block8

 Block6:
	cmp eax,4
	je Block8

 Block7:
	mov ecx,dword ptr [edi+0x2C]
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x3C]
	push 4
	push edx
	mov dword ptr [esp+0x44],ecx
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	mov ebp,eax
	mov eax,dword ptr [edi+0x30]
	lea ecx,[esp+0x50]
	push 4
	push ecx
	mov dword ptr [esp+0x58],eax
	call CCrc32::GetCrc32
	mov edx,dword ptr [edi+0x34]
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x5C],eax
	lea eax,[esp+0x64]
	push 4
	push eax
	mov dword ptr [esp+0x6C],edx
	call CCrc32::GetCrc32
	add esp,0x48
	or eax,dword ptr [esp+0x1C]
	jmp Block10

 Block8:
	mov ecx,dword ptr [edi+0x2C]
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x3C]
	push 4
	push edx
	mov dword ptr [esp+0x44],ecx
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	mov ebp,eax
	mov eax,dword ptr [edi+0x30]
	lea ecx,[esp+0x50]
	push 4
	push ecx
	mov dword ptr [esp+0x58],eax
	call CCrc32::GetCrc32
	mov edx,dword ptr [edi+0x34]
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x5C],eax
	lea eax,[esp+0x64]
	push 4
	push eax
	mov dword ptr [esp+0x6C],edx
	call CCrc32::GetCrc32
	or eax,dword ptr [esp+0x64]
	add esp,0x48
	or eax,ebp
	xor ebx,eax
	add edi,0x3C

 Block9:
	mov ecx,dword ptr [edi+8]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [edi+0x14]
	mov ebp,eax
	push edx
	lea eax,[edi+0xC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x20]
	push ecx
	lea edx,[edi+0x18]
	push edx
	mov dword ptr [esp+0x40],eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x3C],eax
	mov eax,dword ptr [edi+0x2C]
	push eax
	add edi,0x24
	push edi
	call _ZtlSecureFuseHelper<long>::call
	push 0
	push 0
	push 0
	push 0
	lea ecx,[esp+0x5C]
	push 4
	push ecx
	mov edi,eax
	mov dword ptr [esp+0x64],ebp
	call CCrc32::GetCrc32
	mov edx,dword ptr [esp+0x60]
	push 0
	push 0
	push 0
	push 0
	mov ebp,eax
	lea eax,[esp+0x70]
	push 4
	push eax
	mov dword ptr [esp+0x78],edx
	call CCrc32::GetCrc32
	mov ecx,dword ptr [esp+0x74]
	add esp,0x50
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x34]
	push 4
	push edx
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x3C],ecx
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x40],eax
	lea eax,[esp+0x44]
	push 4
	push eax
	mov dword ptr [esp+0x4C],edi
	call CCrc32::GetCrc32
	or eax,dword ptr [esp+0x48]
	or eax,dword ptr [esp+0x44]
	add esp,0x30

 Block10:
	or eax,ebp
	xor ebx,eax
	mov eax,dword ptr [esp+0x10]
	inc eax
	cmp eax,dword ptr [esi+0x218]
	mov dword ptr [esp+0x10],eax
	jl Block3

 Block11:
	xor edi,edi
	mov dword ptr [esp+0x10],edi
	jmp Block13

 Block13:
	mov eax,dword ptr [esi+0x280]
	test eax,eax
	je Block16

 Block14:
	mov ecx,dword ptr [esp+0x10]
	cmp ecx,dword ptr [eax-4]
	jae Block16

 Block15:
	push 0
	push 0
	push 0
	push 0
	mov edx,eax
	mov eax,dword ptr [edi+edx+0xC]
	lea ecx,[esp+0x3C]
	push 4
	push ecx
	mov dword ptr [esp+0x44],eax
	call CCrc32::GetCrc32
	mov edx,dword ptr [esi+0x280]
	push 0
	push 0
	push 0
	push 0
	mov ebp,eax
	mov eax,dword ptr [edi+edx+0x10]
	lea ecx,[esp+0x50]
	push 4
	push ecx
	mov dword ptr [esp+0x58],eax
	call CCrc32::GetCrc32
	mov edx,dword ptr [esi+0x280]
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x54],eax
	mov eax,dword ptr [edi+edx+0x14]
	lea ecx,[esp+0x64]
	push 4
	push ecx
	mov dword ptr [esp+0x6C],eax
	call CCrc32::GetCrc32
	mov edx,dword ptr [esi+0x280]
	add esp,0x48
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [edi+edx+0x18]
	lea ecx,[esp+0x2C]
	push 4
	push ecx
	mov dword ptr [esp+0x34],eax
	call CCrc32::GetCrc32
	or eax,dword ptr [esp+0x30]
	inc dword ptr [esp+0x28]
	or eax,dword ptr [esp+0x2C]
	add esp,0x18
	or eax,ebp
	xor ebx,eax
	add edi,0x1C
	jmp Block13

 Block16:
	cmp ebx,0xFFFFFFFF
	je Block18

 Block17:
	inc ebx

 Block18:
	pop edi
	pop esi
	pop ebp
	mov eax,ebx
	pop ebx
	add esp,0x20
	ret 4
}
}
// CMobTemplate::_ZtlSecurePut_nChargeCount
__SUB_CLASS(00259A50, __fastcall, 7217,  CMobTemplate, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x1D4]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x1DC],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMobTemplate::_ZtlSecureGet_nFixedDamage
__SUB_CLASS0(0023A560, __fastcall, 7216,  CMobTemplate, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1B8]
	push eax
	add ecx,0x1B0
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMobTemplate::~CMobTemplate
_SUB_EXCEPTION_HANDLER(25A3E0)
__SUB_CLASS_THIS0(0025A3E0, __thiscall, 7252,  CMobTemplate, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_25A3E0
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
	lea ecx,[esi+0x2A0]
	mov dword ptr [esp+0x14],6
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x288]
	mov byte ptr [esp+0x14],5
	call ZArray<ZRef<MobSpeakCondition>>::RemoveAll
	lea ecx,[esi+0x284]
	mov byte ptr [esp+0x14],4
	call ZArray<ZRef<MobSpeakInformation>>::RemoveAll
	lea ecx,[esi+0x280]
	mov byte ptr [esp+0x14],3
	call ZArray<MobSkillInfo>::RemoveAll
	push offset ZRef<MobAttackInfo>::~ZRef<MobAttackInfo>
	push 9
	push 8
	lea eax,[esi+0x238]
	push eax
	mov byte ptr [esp+0x24],2
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0x210]
	mov byte ptr [esp+0x14],1
	call ZArray<unsigned long>::RemoveAll
	mov eax,dword ptr [esi+0x30]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMobTemplate::IsLevelVisible
__SUB_CLASS_THIS0(00259140, __thiscall, 7222,  CMobTemplate, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x230],0
	je Block2

 Block1:
	xor eax,eax
	pop esi
	ret

 Block2:
	cmp dword ptr [esi+0x228],0
	jne Block1

 Block3:
	cmp dword ptr [esi+0x22C],0
	jne Block1

 Block4:
	mov eax,dword ptr [esi+0x6C]
	push eax
	lea ecx,[esi+0x64]
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block1

 Block5:
	mov edx,dword ptr [esi+0x14]
	push edx
	lea eax,[esi+0xC]
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov ecx,eax
	mov eax,0x431BDE83
	mul ecx
	shr edx,0x12
	add esp,8
	cmp edx,9
	jne Block8

 Block6:
	mov ecx,esi
	call CMobTemplate::_ZtlSecureGet_dwTemplateID
	mov ecx,eax
	mov eax,0x4F8B588F
	mul ecx
	sub ecx,edx
	shr ecx,1
	add ecx,edx
	shr ecx,0x10
	cmp ecx,0x5E
	je Block8

 Block7:
	cmp ecx,0x60
	jne Block1

 Block8:
	mov eax,1
	pop esi
	ret
}
}
// CMobTemplate::Load
_SUB_EXCEPTION_HANDLER(2611C0)
__SUB0(002611C0, __cdecl, 7237,  void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2611C0
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret
}
}
// CMobTemplate::LoadSkillInfo
_SUB_EXCEPTION_HANDLER(25AD60)
__SUB_CLASS_THIS(0025AD60, __thiscall, 7242,  CMobTemplate, void, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_25AD60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x68
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	lea edi,[ecx+0x280]
	xor esi,esi
	mov ecx,edi
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp-0x20],edi
	call ZArray<MobSkillInfo>::RemoveAll
	mov dword ptr [ebp-0x18],esi
	mov bl,4

 Block1:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp-0x18]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],1
	test ecx,ecx
	je Block28

 Block2:
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x1C],esi
	test eax,eax
	je Block5

 Block3:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x24]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x24]
	mov esi,ecx
	mov dword ptr [ebp-0x1C],esi
	test eax,eax
	jge Block5

 Block4:
	cmp eax,0x80004002
	jne Block29

 Block5:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],bl
	jne Block8

 Block6:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block9:
	test esi,esi
	sete al
	test al,al
	jne Block30

 Block10:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<MobSkillInfo>::InsertBefore
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1AD8
	push ecx
	mov edi,eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],5
	test esi,esi
	je Block28

 Block11:
	lea edx,[ebp-0x64]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],6
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x64],8
	mov dword ptr [edi+0xC],eax
	mov byte ptr [ebp-4],bl
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [ebp-0x64],ax
	mov eax,dword ptr [ebp-0x5C]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[ebp-0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x677
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x44]
	mov byte ptr [ebp-4],7
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],8
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x44],8
	mov dword ptr [edi+0x10],eax
	mov byte ptr [ebp-4],bl
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1A9A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x54]
	push ecx
	mov byte ptr [ebp-4],9
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xA
	call get_int32
	dec eax
	add esp,8
	cmp word ptr [ebp-0x54],8
	mov dword ptr [edi+0x14],eax
	mov byte ptr [ebp-4],bl
	jne Block22

 Block20:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[ebp-0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block23:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x6A1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x74]
	mov byte ptr [ebp-4],0xB
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x74],8
	mov dword ptr [edi+0x18],eax
	mov byte ptr [ebp-4],bl
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [ebp-0x74],ax
	mov eax,dword ptr [ebp-0x6C]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[ebp-0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0
	call eax
	inc dword ptr [ebp-0x18]
	mov edi,dword ptr [ebp-0x20]
	jmp Block1

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov byte ptr [ebp-4],0
	test esi,esi
	je Block32

 Block31:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block32:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	lea esp,[ebp-0x84]
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
// CMobTemplate::_ZtlSecureGet_dwTemplateID
__SUB_CLASS0(0023A4E0, __fastcall, 7213,  CMobTemplate, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x14]
	push eax
	add ecx,0xC
	push ecx
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	ret
}
}
// CMobTemplate::CMobTemplate
_SUB_EXCEPTION_HANDLER(25A340)
__SUB_CLASS_THIS0(0025A340, __thiscall, 7250,  CMobTemplate, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_25A340
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
	xor eax,eax
	mov dword ptr [esi+4],eax
	xor edi,edi
	mov dword ptr [esi+8],eax
	int 3// TODO: 	mov dword ptr [esi],offset CMobTemplate::`vftable'
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x30],edi
	mov dword ptr [esi+0x210],edi
	push offset ZRef<MobAttackInfo>::~ZRef<MobAttackInfo>
	push offset ZRef<MobAttackInfo>::_ctor_default
	push 9
	push 8
	lea eax,[esi+0x238]
	push eax
	mov byte ptr [esp+0x2C],2
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x280],edi
	mov dword ptr [esi+0x284],edi
	mov dword ptr [esi+0x288],edi
	mov dword ptr [esi+0x2A0],edi
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
// CMobTemplate::_ZtlSecurePut_bFirstAttack
__SUB_CLASS(00259970, __fastcall, 7220,  CMobTemplate, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x17C]
	mov ecx,esi
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [edi+0x184],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// MobAttackInfo::~MobAttackInfo
__SUB_CLASS_THIS0(0025B230, __thiscall, 7314,  MobAttackInfo, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x84]
	push edi
	xor edi,edi
	cmp ecx,edi
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x84],edi

 Block2:
	mov ecx,dword ptr [esi+0x80]
	cmp ecx,edi
	je Block4

 Block3:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x80],edi

 Block4:
	mov ecx,dword ptr [esi+0x7C]
	cmp ecx,edi
	je Block6

 Block5:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x7C],edi

 Block6:
	mov ecx,dword ptr [esi+0x78]
	cmp ecx,edi
	je Block8

 Block7:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x78],edi

 Block8:
	pop edi
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	pop esi
	ret
}
}
// CMobTemplate::RegisterMob
_SUB_EXCEPTION_HANDLER(25D510)
__SUB(0025D510, __cdecl, 7244,  int32_t, unsigned long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_25D510
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xEC
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [ebp+0x44],ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x3D5
	push eax
	mov dword ptr [ebp-4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],1
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0xD0]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x10]
	mov dword ptr [ebp+0x10],ebx
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
	cmp word ptr [ebp-0xD0],8
	mov byte ptr [ebp-4],4
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0xD0],ax
	mov eax,dword ptr [ebp-0xC8]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0xD0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+8],eax
	cmp eax,ebx
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block11:
	lea ecx,[ebp-0x5C]
	mov byte ptr [ebp-4],5
	mov dword ptr [ebp-0x58],ebx
	call ZRef<CMobTemplate>::_Alloc
	mov edi,dword ptr [ebp-0x58]
	mov esi,dword ptr [ebp+0x74]
	lea edx,[edi+0xC]
	mov ecx,esi
	mov byte ptr [ebp-4],6
	call _ZtlSecureTearHelper<unsigned long>::call
	lea edx,[edi+0x24]
	mov ecx,esi
	mov dword ptr [edi+0x14],eax
	call _ZtlSecureTearHelper<unsigned long>::call
	lea edx,[edi+0x18]
	xor ecx,ecx
	mov dword ptr [edi+0x2C],eax
	call _ZtlSecureTearHelper<unsigned long>::call
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x3D6
	push ecx
	mov dword ptr [edi+0x20],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],7
	cmp ecx,ebx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[ebp-0x40]
	push edx
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	mov dword ptr [ebp+0x38],ebx
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],9
	jne Block79

 Block14:
	lea ebx,[ebx]

 Block15:
	mov dword ptr [ebp+0x5C],0
	lea eax,[ebp+0x34]
	push 0x670
	push eax
	mov byte ptr [ebp-4],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp-0x38]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x5C]
	push edx
	mov byte ptr [ebp-4],0xB
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x34]
	add esp,0xC
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [ebp-0x38]
	push eax
	call __wtoi
	mov ebx,eax
	add esp,4
	lea edx,[edi+0x18]
	mov ecx,ebx
	call _ZtlSecureTearHelper<unsigned long>::call
	lea edx,[edi+0x24]
	mov ecx,ebx
	mov dword ptr [edi+0x20],eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x2C]
	push ecx
	mov dword ptr [edi+0x2C],eax
	call esi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block18:
	lea eax,[ebp+0x24]
	push eax
	mov byte ptr [ebp-4],0xC
	call esi
	lea ecx,[ebp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block19:
	push 0
	push 0
	lea edx,[ebp-0x2C]
	push edx
	mov edx,dword ptr [ebp+0x5C]
	lea eax,[ebp+0x24]
	push eax
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0xD
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xE
	je Block1

 Block20:
	lea eax,[ebp-0x50]
	mov byte ptr [ebp-4],0xD
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block28

 Block21:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x48]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov ebx,eax
	test ebx,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x48]
	cmp dword ptr [ebp+0x38],0
	mov esi,ecx
	je Block23

 Block22:
	mov eax,dword ptr [ebp+0x38]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block23:
	mov dword ptr [ebp+0x38],esi
	test ebx,ebx
	jge Block25

 Block24:
	cmp ebx,0x80004002
	jne Block61

 Block25:
	cmp word ptr [ebp-0x50],8
	mov byte ptr [ebp-4],0xD
	jne Block31

 Block26:
	xor eax,eax
	mov word ptr [ebp-0x50],ax
	mov eax,dword ptr [ebp-0x48]
	test eax,eax
	je Block32

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block28:
	cmp dword ptr [ebp+0x38],0
	je Block25

 Block29:
	mov eax,dword ptr [ebp+0x38]
	mov dword ptr [ebp+0x38],0
	test eax,eax
	je Block25

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block25

 Block31:
	lea ecx,[ebp-0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov ebx,8
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp+0x24],bx
	jne Block39

 Block33:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block35:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block36:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x2C],bx
	jne Block40

 Block37:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block41

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block39:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp+0x24]
	push eax
	call esi
	jmp Block36

 Block40:
	lea edx,[ebp-0x2C]
	push edx
	call esi

 Block41:
	mov ebx,dword ptr [ebp+0x38]
	test ebx,ebx
	sete al
	test al,al
	jne Block62

 Block42:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x3D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x10
	test ebx,ebx
	je Block1

 Block43:
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x3C],ebx
	test eax,eax
	je Block46

 Block44:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0xC]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0xC]
	mov dword ptr [ebp+0x3C],ebx
	test eax,eax
	jge Block46

 Block45:
	cmp eax,0x80004002
	jne Block4

 Block46:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x13
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[ebp-0x1C]
	push ecx
	call esi

 Block50:
	test ebx,ebx
	sete al
	test al,al
	jne Block75

 Block51:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x3D6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x14
	test ebx,ebx
	je Block1

 Block52:
	lea eax,[ebp+0x4C]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp-0x40]
	push ecx
	mov byte ptr [ebp-4],0x15
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block53:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x13
	jne Block56

 Block54:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea eax,[ebp+0x4C]
	push eax
	call esi

 Block57:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],0xA
	call edx
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block59:
	cmp word ptr [ebp-0x40],8
	je Block15

 Block60:
	jmp Block79

 Block61:
	push ebx
	call _com_issue_error

 Block62:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block64:
	mov byte ptr [ebp-4],8
	test ebx,ebx
	je Block66

 Block65:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block66:
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],6
	jne Block69

 Block67:
	mov eax,dword ptr [ebp-0x38]
	xor edx,edx
	mov word ptr [ebp-0x40],dx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea eax,[ebp-0x40]
	push eax
	call esi

 Block70:
	lea esi,[edi+4]
	push esi
	mov byte ptr [ebp-4],5
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block72

 Block71:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block72:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block74:
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	jmp Block603

 Block75:
	mov byte ptr [ebp-4],0xA
	test ebx,ebx
	je Block77

 Block76:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block77:
	cmp dword ptr [ebp+0x5C],0
	mov byte ptr [ebp-4],9
	je Block79

 Block78:
	mov edx,dword ptr [ebp+0x5C]
	add edx,0xFFFFFFF4
	push edx
	call ZXString16::_Release
	add esp,4

 Block79:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_MBOOKID
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [ebp+0x10]
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x16
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x17
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x4C],8
	mov esi,eax
	mov byte ptr [ebp-4],9
	jne Block82

 Block80:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	test esi,esi
	je Block88

 Block84:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_MBOOKID
	call _xbstr_t::_ctor_1
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x18
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x19
	call get_int32
	add esp,8
	lea edx,[edi+0x24]
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov dword ptr [edi+0x2C],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],9
	jne Block87

 Block85:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov esi,dword ptr [ebp+0x74]
	push 0
	lea eax,[ebp+0x34]
	push eax
	mov ecx,offset CMobTemplate::ms_mMobTemplate
	mov dword ptr [ebp+0x34],esi
	call ZMap<long, ZRef<CMobTemplate>, long>::GetAt
	test eax,eax
	je Block101

 Block89:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block91

 Block90:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block91:
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],6
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	lea esi,[edi+4]
	push esi
	mov byte ptr [ebp-4],5
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block97

 Block96:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block97:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block99

 Block98:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block99:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block605

 Block100:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block605

 Block101:
	lea ecx,[ebp-0x5C]
	push ecx
	lea edx,[ebp+0x34]
	push edx
	mov ecx,offset CMobTemplate::ms_mMobTemplate
	mov dword ptr [ebp+0x34],esi
	call ZMap<long, ZRef<CMobTemplate>, long>::Insert
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0xD74
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ebp+0x38]
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block103

 Block102:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx

 Block103:
	mov esi,dword ptr [ebp+8]
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block105

 Block104:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block105:
	lea edx,[ebp-0x8C]
	push edx
	call GetVariantLinkData
	xor eax,eax
	cmp word ptr [ebp-0x8C],ax
	mov byte ptr [ebp-4],0x1A
	setne al
	add esp,0xC
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ABC
	push ecx
	mov dword ptr [edi+0x204],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block107

 Block106:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block107:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block109

 Block108:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block109:
	lea eax,[ebp-0x9C]
	push eax
	call GetVariantLinkData
	add esp,0xC
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AC2
	push ecx
	mov byte ptr [ebp-4],0x1B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block111

 Block110:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block111:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block113

 Block112:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block113:
	lea eax,[ebp-0xAC]
	push eax
	call GetVariantLinkData
	add esp,0xC
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AB1
	push ecx
	mov byte ptr [ebp-4],0x1C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block115

 Block114:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block115:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block117

 Block116:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block117:
	lea eax,[ebp-0x7C]
	push eax
	call GetVariantLinkData
	add esp,0x10
	xor edx,edx
	cmp word ptr [ebp-0x9C],dx
	mov byte ptr [ebp-4],0x1D
	setne dl
	xor ecx,ecx
	cmp word ptr [ebp-0xAC],cx
	setne cl
	xor eax,eax
	cmp word ptr [ebp-0x7C],ax
	setne al
	test eax,eax
	je Block119

 Block118:
	lea edx,[edi+0x40]
	mov ecx,4
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x48],eax
	jmp Block126

 Block119:
	test edx,edx
	je Block122

 Block120:
	test ecx,ecx
	je Block598

 Block121:
	lea edx,[edi+0x40]
	mov ecx,3
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x48],eax
	jmp Block126

 Block122:
	test ecx,ecx
	mov ecx,edi
	je Block124

 Block123:
	mov edx,1
	jmp Block125

 Block124:
	xor edx,edx

 Block125:
	call CMobTemplate::_ZtlSecurePut_nMoveAbility

 Block126:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1786
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x10]
	lea edx,[ebp+0x4C]
	mov byte ptr [ebp-4],0x1E
	push edx
	mov byte ptr [ebp-4],0x1D
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1F
	call get_int32
	add esp,8
	test eax,eax
	setne byte ptr [ebp+0x63]
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x1D
	jne Block129

 Block127:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	cmp byte ptr [ebp+0x63],0
	je Block132

 Block131:
	lea edx,[edi+0x40]
	mov ecx,6
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x48],eax

 Block132:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1786
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x10]
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x20
	push eax
	mov byte ptr [ebp-4],0x1D
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x21
	call get_int32
	add esp,8
	mov dword ptr [edi+0x234],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x1D
	jne Block135

 Block133:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block136:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ACF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block138

 Block137:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx

 Block138:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block140

 Block139:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block140:
	lea edx,[ebp-0xBC]
	push edx
	call GetVariantLinkData
	add esp,0x10
	xor ecx,ecx
	cmp word ptr [ebp-0xBC],cx
	lea edx,[edi+0x4C]
	setne cl
	mov byte ptr [ebp-4],0x22
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [edi+0x54],eax
	lea eax,[ebp-0x6C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x673
	mov bl,0x23
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x10]
	lea edx,[ebp+0x4C]
	mov byte ptr [ebp-4],0x24
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x25
	jne Block142

 Block141:
	mov eax,dword ptr [eax+8]
	jmp Block143

 Block142:
	mov eax,offset _S___3

 Block143:
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	call get_mobspecies_code_from_name
	add esp,4
	lea edx,[edi+0x34]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x3C],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block146

 Block144:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x674
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x26
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x27
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	lea edx,[edi+0x58]
	mov ecx,eax
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [edi+0x60],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block150

 Block148:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block151:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AA4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x28
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x29
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	lea edx,[edi+0x64]
	mov ecx,eax
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [edi+0x6C],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block154

 Block152:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block155:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x675
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x4C]
	mov byte ptr [ebp-4],0x2A
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2B
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x228],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block158

 Block156:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AB6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x2C
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2D
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x22C],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block162

 Block160:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block163:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x676
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x2E
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2F
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x230],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block166

 Block164:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block167:
	cmp dword ptr [edi+0x22C],0
	jne Block203

 Block168:
	mov dword ptr [ebp+0x3C],0
	lea ecx,[ebp+0x34]
	push 0x8E6
	push ecx
	mov byte ptr [ebp-4],0x30
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [ebp+0x74]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea ecx,[ebp+0x3C]
	push offset _S_SD
	push ecx
	mov byte ptr [ebp-4],0x31
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x34]
	add esp,0x10
	mov byte ptr [ebp-4],0x30
	test eax,eax
	je Block170

 Block169:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block170:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x24]
	push edx
	call esi
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block172

 Block171:
	push eax
	call _com_issue_error

 Block172:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0x32
	call esi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block174

 Block173:
	push eax
	call _com_issue_error

 Block174:
	mov edx,dword ptr [ebp+0x3C]
	push 0
	push 0
	lea eax,[ebp+0x24]
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x33
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x34
	jne Block176

 Block175:
	push 0x80004003
	call _com_issue_error

 Block176:
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x33
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x35
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	mov dword ptr [ebp+0x34],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block179

 Block177:
	cmp eax,0x80004002
	je Block179

 Block178:
	push eax
	call _com_issue_error

 Block179:
	mov esi,8
	mov byte ptr [ebp-4],0x37
	cmp word ptr [ebp+0x4C],si
	jne Block182

 Block180:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block183

 Block181:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block183

 Block182:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block183:
	mov byte ptr [ebp-4],0x38
	cmp word ptr [ebp-0x2C],si
	jne Block186

 Block184:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block187

 Block185:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block187

 Block186:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block187:
	mov byte ptr [ebp-4],0x39
	cmp word ptr [ebp+0x24],si
	jne Block190

 Block188:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block191:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x671
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x3A
	test esi,esi
	jne Block193

 Block192:
	push 0x80004003
	call _com_issue_error

 Block193:
	lea edx,[ebp-0x1C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x39
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x3B
	jne Block195

 Block194:
	mov eax,dword ptr [eax+8]
	jmp Block196

 Block195:
	mov eax,offset _S___3

 Block196:
	push 0xFFFFFFFF
	lea ecx,[edi+0x30]
	push eax
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x39
	jne Block199

 Block197:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block200

 Block198:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block200

 Block199:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block200:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0x30
	call eax
	cmp dword ptr [ebp+0x3C],0
	mov byte ptr [ebp-4],bl
	je Block202

 Block201:
	mov ecx,dword ptr [ebp+0x3C]
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString16::_Release
	add esp,4

 Block202:
	mov esi,dword ptr [ebp+0x10]

 Block203:
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x677
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x3C
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3D
	call get_int32
	add esp,8
	lea edx,[edi+0x70]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x78],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block206

 Block204:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block207

 Block205:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block207

 Block206:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block207:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x678
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x3E
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3F
	call get_int32
	add esp,8
	lea edx,[edi+0x7C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x84],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block210

 Block208:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block211:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x679
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x4C]
	mov byte ptr [ebp-4],0x40
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x41
	call get_int32
	add esp,8
	lea edx,[edi+0x88]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x90],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block214

 Block212:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block215

 Block213:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block215

 Block214:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block215:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x67A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x42
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x43
	call get_int32
	add esp,8
	add eax,0x64
	jns Block217

 Block216:
	xor eax,eax
	mov ecx,eax
	jmp Block220

 Block217:
	cmp eax,0x8C
	jge Block219

 Block218:
	mov ecx,eax
	jmp Block220

 Block219:
	mov ecx,0x8C

 Block220:
	lea edx,[edi+0x94]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x9C],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block223

 Block221:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block224

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block224

 Block223:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block224:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x67B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x44
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x45
	call get_int32
	add esp,8
	add eax,0x64
	jns Block226

 Block225:
	xor eax,eax
	mov ecx,eax
	jmp Block229

 Block226:
	cmp eax,0x8C
	jge Block228

 Block227:
	mov ecx,eax
	jmp Block229

 Block228:
	mov ecx,0x8C

 Block229:
	lea edx,[edi+0xA0]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xA8],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block232

 Block230:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block233

 Block231:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block233

 Block232:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block233:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x67C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x4C]
	mov byte ptr [ebp-4],0x46
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x47
	call get_int32
	add esp,8
	add eax,0x64
	jns Block235

 Block234:
	xor eax,eax
	mov ecx,eax
	jmp Block238

 Block235:
	cmp eax,0x8C
	jge Block237

 Block236:
	mov ecx,eax
	jmp Block238

 Block237:
	mov ecx,0x8C

 Block238:
	lea edx,[edi+0xAC]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xB4],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block241

 Block239:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block242

 Block240:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block242

 Block241:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block242:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x67D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x48
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x49
	call get_int32
	add esp,8
	test eax,eax
	jge Block244

 Block243:
	xor eax,eax
	mov ecx,eax
	jmp Block247

 Block244:
	cmp eax,0x752F
	jge Block246

 Block245:
	mov ecx,eax
	jmp Block247

 Block246:
	mov ecx,0x752F

 Block247:
	lea edx,[edi+0xB8]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xC0],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block250

 Block248:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block251

 Block249:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block251

 Block250:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block251:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1937
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x4A
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x4B
	call get_int32
	add esp,8
	test eax,eax
	jge Block253

 Block252:
	xor eax,eax
	mov ecx,eax
	jmp Block256

 Block253:
	cmp eax,0x64
	jge Block255

 Block254:
	mov ecx,eax
	jmp Block256

 Block255:
	mov ecx,0x64

 Block256:
	lea edx,[edi+0xC4]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xCC],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block259

 Block257:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block260

 Block258:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block260

 Block259:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block260:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x67F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x4C]
	mov byte ptr [ebp-4],0x4C
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x4D
	call get_int32
	add esp,8
	test eax,eax
	jge Block262

 Block261:
	xor eax,eax
	mov ecx,eax
	jmp Block265

 Block262:
	cmp eax,0x752F
	jge Block264

 Block263:
	mov ecx,eax
	jmp Block265

 Block264:
	mov ecx,0x752F

 Block265:
	lea edx,[edi+0xD0]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xD8],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block268

 Block266:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block269

 Block267:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block269

 Block268:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block269:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1925
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x4E
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x4F
	call get_int32
	add esp,8
	test eax,eax
	jge Block271

 Block270:
	xor eax,eax
	mov ecx,eax
	jmp Block274

 Block271:
	cmp eax,0x64
	jge Block273

 Block272:
	mov ecx,eax
	jmp Block274

 Block273:
	mov ecx,0x64

 Block274:
	lea edx,[edi+0xDC]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xE4],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block277

 Block275:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block278

 Block276:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block278

 Block277:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block278:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x681
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x50
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x51
	call get_int32
	add esp,8
	lea edx,[edi+0xE8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xF0],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block281

 Block279:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block282

 Block280:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block282

 Block281:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block282:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x682
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x4C]
	mov byte ptr [ebp-4],0x52
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x53
	call get_int32
	add esp,8
	lea edx,[edi+0xF4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xFC],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block285

 Block283:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block286

 Block284:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block286

 Block285:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block286:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x683
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x54
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x55
	call get_int32
	add esp,8
	lea edx,[edi+0x100]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x108],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block289

 Block287:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block290

 Block288:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block290

 Block289:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block290:
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x684
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x56
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x57
	call get_int32
	add esp,8
	lea edx,[edi+0x10C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x114],eax
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block293

 Block291:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block294

 Block292:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block294

 Block293:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block294:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x685
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x4C]
	mov byte ptr [ebp-4],0x58
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x6C]
	push eax
	mov byte ptr [ebp-4],0x59
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block296

 Block295:
	push eax
	call _com_issue_error

 Block296:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x4C],si
	jne Block299

 Block297:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block300

 Block298:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block300

 Block299:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block300:
	mov edx,dword ptr [ebp-0x64]
	cmp word ptr [ebp-0x6C],si
	je Block302

 Block301:
	mov edx,offset _S___3

 Block302:
	lea esi,[edi+0x118]
	call __get_element_attribute_list
	test eax,eax
	jne Block331

 Block303:
	mov edi,8
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp-0x6C],di
	jne Block310

 Block304:
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block306

 Block305:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block306:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block307:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp-0xBC],di
	jne Block311

 Block308:
	mov eax,dword ptr [ebp-0xB4]
	xor edx,edx
	mov word ptr [ebp-0xBC],dx
	test eax,eax
	je Block312

 Block309:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block312

 Block310:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x6C]
	push ecx
	call esi
	jmp Block307

 Block311:
	lea eax,[ebp-0xBC]
	push eax
	call esi

 Block312:
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp-0x7C],di
	jne Block315

 Block313:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	test eax,eax
	je Block316

 Block314:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block316

 Block315:
	lea edx,[ebp-0x7C]
	push edx
	call esi

 Block316:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0xAC],di
	jne Block319

 Block317:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	test eax,eax
	je Block320

 Block318:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block320

 Block319:
	lea ecx,[ebp-0xAC]
	push ecx
	call esi

 Block320:
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp-0x9C],di
	jne Block323

 Block321:
	mov eax,dword ptr [ebp-0x94]
	xor edx,edx
	mov word ptr [ebp-0x9C],dx
	test eax,eax
	je Block324

 Block322:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block324

 Block323:
	lea eax,[ebp-0x9C]
	push eax
	call esi

 Block324:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x8C],di
	jne Block327

 Block325:
	mov eax,dword ptr [ebp-0x84]
	xor ecx,ecx
	mov word ptr [ebp-0x8C],cx
	test eax,eax
	je Block328

 Block326:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block328

 Block327:
	lea edx,[ebp-0x8C]
	push edx
	call esi

 Block328:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block330

 Block329:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block330:
	lea ecx,[ebp-0x40]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x5C]
	mov byte ptr [ebp-4],5
	call ZRef<CMobTemplate>::~ZRef<CMobTemplate>
	jmp Block72

 Block331:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x686
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x10]
	lea ecx,[ebp+0x14]
	push ecx
	mov byte ptr [ebp-4],0x5A
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x5B
	call get_int32
	add esp,8
	lea ecx,[ebp+0x14]
	mov dword ptr [edi+0x138],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x687
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x14]
	mov byte ptr [ebp-4],0x5C
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x5D
	call get_int32
	add esp,8
	lea ecx,[ebp+0x14]
	mov dword ptr [edi+0x13C],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AE1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x14]
	mov byte ptr [ebp-4],0x5E
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x5F
	call get_int32
	mov edx,eax
	add esp,8
	neg edx
	sbb edx,edx
	neg edx
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_bUndead
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x68B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x14]
	push ecx
	mov byte ptr [ebp-4],0x60
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x61
	call get_int32
	mov edx,eax
	add esp,8
	neg edx
	sbb edx,edx
	neg edx
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_bPickUpDrop
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x68C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x14]
	mov byte ptr [ebp-4],0x62
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x63
	call get_int32
	mov edx,eax
	add esp,8
	neg edx
	sbb edx,edx
	neg edx
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_bFirstAttack
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xB86
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x14]
	mov byte ptr [ebp-4],0x64
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x65
	call get_int32
	add esp,8
	mov edx,eax
	neg edx
	sbb edx,edx
	neg edx
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_bSelfDestruction
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	fld1
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x68D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x14]
	push ecx
	mov byte ptr [ebp-4],0x66
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x67
	call get_double
	fstp qword ptr [edi+0x150]
	add esp,0xC
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xB87
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x14]
	mov byte ptr [ebp-4],0x68
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x69
	call get_int32
	mov edx,eax
	add esp,8
	neg edx
	sbb edx,edx
	neg edx
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_bInvincible
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AAB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x14]
	mov byte ptr [ebp-4],0x6A
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x6B
	call get_int32
	mov edx,eax
	add esp,8
	neg edx
	sbb edx,edx
	neg edx
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_bDisable
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0xBD1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x14]
	push ecx
	mov byte ptr [ebp-4],0x6C
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x6D
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	lea ecx,[ebp+0x14]
	mov dword ptr [edi+0x1A0],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCE9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x14]
	mov byte ptr [ebp-4],0x6E
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x6F
	call get_int32
	mov edx,eax
	add esp,8
	neg edx
	sbb edx,edx
	neg edx
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_bNotAttack
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x688
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x14]
	mov byte ptr [ebp-4],0x70
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x71
	call get_int32
	mov edx,eax
	add esp,8
	neg edx
	sbb edx,edx
	neg edx
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_bHPGaugeHide
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_HPTAGCOLOR
	call _xbstr_t::_ctor_1
	lea eax,[ebp+0x14]
	mov byte ptr [ebp-4],0x72
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x73
	call get_int32
	add esp,8
	mov edx,eax
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_nHPTagColor
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_HPTAGBGCOLOR
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x14]
	push ecx
	mov byte ptr [ebp-4],0x74
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x75
	call get_int32
	add esp,8
	mov edx,eax
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_nHPTagBgColor
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_FIXEDDAMAGE
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x14]
	mov byte ptr [ebp-4],0x76
	push edx
	mov byte ptr [ebp-4],bl
	mov ecx,esi
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x77
	call get_int32
	add esp,8
	mov edx,eax
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_nFixedDamage
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_ONLYNORMALATTACK
	call _xbstr_t::_ctor_1
	lea eax,[ebp+0x14]
	mov byte ptr [ebp-4],0x78
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x79
	call get_int32
	mov edx,eax
	add esp,8
	neg edx
	sbb edx,edx
	neg edx
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_bOnlyNormalAttack
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_CATEGORY
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x14]
	push ecx
	mov byte ptr [ebp-4],0x7A
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x7B
	call get_int32
	add esp,8
	mov edx,eax
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_nCategory
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_CANTPASSBYTELEPO
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x14]
	mov byte ptr [ebp-4],0x7C
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x7D
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	lea ecx,[ebp+0x14]
	mov dword ptr [edi+0x2A4],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_WEAPON
	call _xbstr_t::_ctor_1
	lea eax,[ebp+0x14]
	mov byte ptr [ebp-4],0x7E
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x7F
	call get_int32
	add esp,8
	mov edx,eax
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_nWeaponID
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x689
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x14]
	mov byte ptr [ebp-4],0x80
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x81
	call get_int32
	mov edx,eax
	add esp,8
	neg edx
	sbb edx,edx
	neg edx
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_bAngerGauge
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x68A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x14]
	push ecx
	mov byte ptr [ebp-4],0x82
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x83
	call get_int32
	add esp,8
	mov edx,eax
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_nChargeCount
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_CANNOTEVADE
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x14]
	mov byte ptr [ebp-4],0x84
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x85
	call get_int32
	mov edx,eax
	add esp,8
	neg edx
	sbb edx,edx
	neg edx
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_bCannotEvade
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_UPPERMOSTLAYER
	call _xbstr_t::_ctor_1
	lea eax,[ebp+0x14]
	mov byte ptr [ebp-4],0x86
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x87
	call get_int32
	mov edx,eax
	add esp,8
	neg edx
	sbb edx,edx
	neg edx
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_bUpperMostLayer
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xB86
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xF8]
	mov byte ptr [ebp-4],0x88
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x89
	mov ecx,eax
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0xF8]
	mov byte ptr [ebp-4],0x8B
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [ebp+0x34],0
	je Block333

 Block332:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1A9A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x8C
	mov byte ptr [ebp-4],0x8B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x8D
	call get_int32
	add esp,8
	lea ecx,[ebp+0x14]
	mov dword ptr [ebp+0x48],eax
	mov byte ptr [ebp-4],0x8B
	call Ztl_variant_t::~Ztl_variant_t
	xor edx,edx
	cmp dword ptr [ebp+0x48],edx
	mov ecx,edi
	setne dl
	call CMobTemplate::_ZtlSecurePut_bSelfDestruction
	mov edx,dword ptr [ebp+0x48]
	shr edx,1
	and edx,1
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_bFirstSelfDestruction
	jmp Block334

 Block333:
	xor edx,edx
	mov ecx,edi
	call CMobTemplate::_ZtlSecurePut_bSelfDestruction

 Block334:
	xor eax,eax
	mov dword ptr [edi+0x224],eax
	mov dword ptr [edi+0x220],eax
	push 0x64
	mov dword ptr [edi+0x21C],eax
	push 0x1F
	lea ecx,[ebp-0xE8]
	mov dword ptr [edi+0x218],eax
	call ZMap<ZXString<char>, int, ZXString<char>>::_ctor_ii
	mov dword ptr [ebp+0x48],0
	jmp Block336

 Block336:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	cmp dword ptr [ebp+0x48],0
	mov byte ptr [ebp-4],0x8F
	jne Block339

 Block337:
	cmp dword ptr [ebp+8],0
	je Block1

 Block338:
	mov ecx,dword ptr [ebp+8]
	lea eax,[ebp]
	push eax
	call IWzProperty::Get_NewEnum
	or dword ptr [ebp+0x44],1
	mov byte ptr [ebp-4],0x90
	jmp Block341

 Block339:
	cmp dword ptr [ebp+0x38],0
	je Block1

 Block340:
	lea ecx,[ebp+0xC]
	push ecx
	mov ecx,dword ptr [ebp+0x38]
	call IWzProperty::Get_NewEnum
	or dword ptr [ebp+0x44],2
	mov dword ptr [ebp-4],0x91

 Block341:
	push eax
	lea ecx,[ebp+0x3C]
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	test byte ptr [ebp+0x44],2
	mov dword ptr [ebp-4],0x93
	je Block344

 Block342:
	mov eax,dword ptr [ebp+0xC]
	and dword ptr [ebp+0x44],0xFFFFFFFD
	test eax,eax
	je Block344

 Block343:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block344:
	test byte ptr [ebp+0x44],1
	mov byte ptr [ebp-4],0x94
	je Block347

 Block345:
	mov eax,dword ptr [ebp]
	and dword ptr [ebp+0x44],0xFFFFFFFE
	test eax,eax
	je Block347

 Block346:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block347:
	mov dword ptr [ebp+4],0

 Block348:
	cmp dword ptr [ebp+0x3C],0
	je Block1

 Block349:
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [eax]
	lea edx,[ebp+4]
	push edx
	lea edx,[ebp+0x24]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block391

 Block350:
	lea ecx,[ebp+0x24]
	push ecx
	lea edx,[ebp+0x5C]
	push edx
	call DetachBSTR
	add esp,8
	cmp dword ptr [ebp+0x5C],0
	mov byte ptr [ebp-4],0x95
	je Block352

 Block351:
	mov eax,dword ptr [ebp+0x5C]
	mov eax,dword ptr [eax]
	jmp Block353

 Block352:
	xor eax,eax

 Block353:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],0
	call ZXString<char>::AssignWideStr
	push 0
	lea ecx,[ebp+0x40]
	push ecx
	lea ecx,[ebp-0xE8]
	mov byte ptr [ebp-4],0x96
	call ZMap<ZXString<char>, int, ZXString<char>>::GetAt
	test eax,eax
	jne Block382

 Block354:
	push eax
	lea edx,[ebp+0x40]
	push edx
	lea ecx,[ebp-0xE8]
	call ZMap<ZXString<char>, int, ZXString<char>>::Insert
	lea eax,[ebp-0xC0]
	push 0x1A9E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	cmp dword ptr [ebp+0x5C],0
	mov ecx,dword ptr [eax]
	je Block356

 Block355:
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edx]
	jmp Block357

 Block356:
	xor eax,eax

 Block357:
	push 6
	push ecx
	push eax
	call _wcsnicmp
	add esp,0xC
	test eax,eax
	mov eax,dword ptr [ebp-0xC0]
	sete byte ptr [ebp+0x63]
	test eax,eax
	je Block359

 Block358:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block359:
	cmp byte ptr [ebp+0x63],0
	je Block361

 Block360:
	inc dword ptr [edi+0x218]

 Block361:
	lea eax,[ebp-0x30]
	push 0x1AD8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	cmp dword ptr [ebp+0x5C],0
	mov ecx,dword ptr [eax]
	je Block363

 Block362:
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edx]
	jmp Block364

 Block363:
	xor eax,eax

 Block364:
	push 5
	push ecx
	push eax
	call _wcsnicmp
	add esp,0xC
	test eax,eax
	mov eax,dword ptr [ebp-0x30]
	sete byte ptr [ebp+0x63]
	test eax,eax
	je Block366

 Block365:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block366:
	cmp byte ptr [ebp+0x63],0
	je Block368

 Block367:
	inc dword ptr [edi+0x21C]
	jmp Block382

 Block368:
	lea eax,[ebp-0x54]
	push 0x44F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	cmp dword ptr [ebp+0x5C],0
	mov ecx,dword ptr [eax]
	je Block370

 Block369:
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edx]
	jmp Block371

 Block370:
	xor eax,eax

 Block371:
	push 3
	push ecx
	push eax
	call _wcsnicmp
	add esp,0xC
	test eax,eax
	mov eax,dword ptr [ebp-0x54]
	sete byte ptr [ebp+0x63]
	test eax,eax
	je Block373

 Block372:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block373:
	cmp byte ptr [ebp+0x63],0
	je Block375

 Block374:
	inc dword ptr [edi+0x224]
	jmp Block382

 Block375:
	lea eax,[ebp+0x64]
	push 0x1AB7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	cmp dword ptr [ebp+0x5C],0
	mov ecx,dword ptr [eax]
	je Block377

 Block376:
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edx]
	jmp Block378

 Block377:
	xor eax,eax

 Block378:
	push 3
	push ecx
	push eax
	call _wcsnicmp
	add esp,0xC
	test eax,eax
	mov eax,dword ptr [ebp+0x64]
	sete byte ptr [ebp+0x63]
	test eax,eax
	je Block380

 Block379:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block380:
	cmp byte ptr [ebp+0x63],0
	je Block382

 Block381:
	inc dword ptr [edi+0x220]

 Block382:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x95
	test eax,eax
	je Block384

 Block383:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block384:
	cmp dword ptr [ebp+0x5C],0
	mov byte ptr [ebp-4],0x94
	je Block386

 Block385:
	mov ecx,dword ptr [ebp+0x5C]
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x5C],0

 Block386:
	cmp word ptr [ebp+0x24],8
	jne Block389

 Block387:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block348

 Block388:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block348

 Block389:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block348

 Block390:
	jmp Block4

 Block391:
	cmp dword ptr [ebp+0x38],0
	mov byte ptr [ebp-4],0x8F
	sete al
	test al,al
	mov eax,dword ptr [ebp+0x3C]
	push eax
	jne Block398

 Block392:
	mov edx,dword ptr [eax]
	mov eax,dword ptr [edx+8]
	call eax
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0x8E
	jne Block395

 Block393:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block396

 Block394:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block396

 Block395:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block396:
	mov eax,dword ptr [ebp+0x48]
	inc eax
	cmp eax,2
	mov dword ptr [ebp+0x48],eax
	jl Block336

 Block397:
	jmp Block402

 Block398:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	call edx
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0x8E
	jne Block401

 Block399:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block402

 Block400:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block402

 Block401:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block402:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AD8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x97
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x8E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x98
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block405

 Block403:
	cmp eax,0x80004002
	je Block405

 Block404:
	push eax
	call _com_issue_error

 Block405:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x9A
	jne Block408

 Block406:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block409

 Block407:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block409

 Block408:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block409:
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block413

 Block410:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block412

 Block411:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block412:
	mov ecx,edi
	call CMobTemplate::LoadSkillInfo

 Block413:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0xEE5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0x9B
	mov ecx,esi
	mov byte ptr [ebp-4],0x9A
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x9C
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x208],eax
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x9A
	jne Block416

 Block414:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block417

 Block415:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block417

 Block416:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block417:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xEE6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x1C]
	mov byte ptr [ebp-4],0x9D
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x9A
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x9E
	call get_int32
	add esp,8
	mov dword ptr [edi+0x20C],eax
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x9A
	jne Block420

 Block418:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block421

 Block419:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block421

 Block420:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block421:
	cmp dword ptr [edi+0x208],0
	je Block439

 Block422:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x10C3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x1C]
	mov byte ptr [ebp-4],0x9F
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x9A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA0
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block425

 Block423:
	cmp eax,0x80004002
	je Block425

 Block424:
	push eax
	call _com_issue_error

 Block425:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0xA2
	jne Block428

 Block426:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block429

 Block427:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block429

 Block428:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block429:
	cmp dword ptr [ebp+0x40],0
	je Block437

 Block430:
	mov dword ptr [ebp+0x48],0
	nop

 Block431:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0x7FFFFFFF
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x48]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x50]
	push ecx
	mov ecx,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0xA3
	mov byte ptr [ebp-4],0xA2
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xA4
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x50],8
	mov dword ptr [ebp+0xC],eax
	mov byte ptr [ebp-4],0xA2
	jne Block434

 Block432:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	test eax,eax
	je Block435

 Block433:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block435

 Block434:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block435:
	cmp dword ptr [ebp+0xC],0x7FFFFFFF
	je Block437

 Block436:
	push 0xFFFFFFFF
	lea ecx,[edi+0x210]
	call ZArray<unsigned long>::InsertBefore
	mov ecx,dword ptr [ebp+0xC]
	inc dword ptr [ebp+0x48]
	mov dword ptr [eax],ecx
	jmp Block431

 Block437:
	cmp dword ptr [ebp+0x40],0
	mov byte ptr [ebp-4],0x9A
	je Block439

 Block438:
	mov eax,dword ptr [ebp+0x40]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block439:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xFE5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x1C]
	mov byte ptr [ebp-4],0xA5
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x9A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block442

 Block440:
	cmp eax,0x80004002
	je Block442

 Block441:
	push eax
	call _com_issue_error

 Block442:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0xA8
	jne Block445

 Block443:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block446

 Block444:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block446

 Block445:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block446:
	cmp dword ptr [ebp+0x40],0
	sete al
	test al,al
	sete al
	test al,al
	je Block450

 Block447:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xFE6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [ebp+0x40],0
	mov byte ptr [ebp-4],0xA9
	jne Block449

 Block448:
	push 0x80004003
	call _com_issue_error

 Block449:
	mov ecx,dword ptr [ebp+0x40]
	lea eax,[ebp-0x50]
	push eax
	mov byte ptr [ebp-4],0xA8
	call IWzProperty::Getitem
	or dword ptr [ebp+0x44],4
	push eax
	mov byte ptr [ebp-4],0xAA
	call get_int32
	add esp,8
	jmp Block451

 Block450:
	xor eax,eax

 Block451:
	test byte ptr [ebp+0x44],4
	mov dword ptr [edi+0x214],eax
	mov dword ptr [ebp-4],0xA8
	je Block456

 Block452:
	cmp word ptr [ebp-0x50],8
	jne Block455

 Block453:
	mov eax,dword ptr [ebp-0x48]
	xor ecx,ecx
	mov word ptr [ebp-0x50],cx
	test eax,eax
	je Block456

 Block454:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block456

 Block455:
	lea edx,[ebp-0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block456:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x10C4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x50]
	push ecx
	mov byte ptr [ebp-4],0xAB
	mov ecx,esi
	mov byte ptr [ebp-4],0xA8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xAC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+4]
	mov dword ptr [ebp+4],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block459

 Block457:
	cmp eax,0x80004002
	je Block459

 Block458:
	push eax
	call _com_issue_error

 Block459:
	cmp word ptr [ebp-0x50],8
	mov byte ptr [ebp-4],0xAE
	jne Block462

 Block460:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	test eax,eax
	je Block463

 Block461:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block463

 Block462:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block463:
	cmp dword ptr [ebp+4],0
	je Block483

 Block464:
	lea ecx,[ebp+0x64]
	push ecx
	mov ecx,dword ptr [ebp+4]
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],0xAF
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0xB1
	test eax,eax
	je Block466

 Block465:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block466:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0xB2
	mov dword ptr [ebp-0x54],0

 Block467:
	cmp dword ptr [ebp+0x48],0
	je Block1

 Block468:
	mov eax,dword ptr [ebp+0x48]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0xC]
	lea ecx,[ebp-0x54]
	push ecx
	lea ecx,[ebp+0x24]
	push ecx
	push 1
	push eax
	call edx
	test eax,eax
	jne Block478

 Block469:
	push eax
	mov eax,dword ptr [ebp+0x2C]
	push ecx
	mov dword ptr [ebp-0x30],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x2C]
	push ecx
	mov ecx,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0xB3
	mov byte ptr [ebp-4],0xB2
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB4
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x2C],8
	mov dword ptr [ebp-0x30],eax
	mov byte ptr [ebp-4],0xB2
	jne Block472

 Block470:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block473

 Block471:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block473

 Block472:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block473:
	push 0xFFFFFFFF
	lea ecx,[edi+0x2A0]
	call ZArray<long>::InsertBefore
	mov ecx,dword ptr [ebp-0x30]
	mov dword ptr [eax],ecx
	cmp word ptr [ebp+0x24],8
	jne Block476

 Block474:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block467

 Block475:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block467

 Block476:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block467

 Block477:
	jmp Block4

 Block478:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0xB1
	jne Block481

 Block479:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block482

 Block480:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block482

 Block481:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block482:
	mov eax,dword ptr [ebp+0x48]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xAE
	call edx

 Block483:
	mov dword ptr [edi+0x28C],0xFFFFFFFF
	lea ecx,[edi+0x284]
	mov dword ptr [edi+0x290],0
	call ZArray<ZRef<MobSpeakInformation>>::RemoveAll
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_SPEAK__1
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],0xB5
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xAE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block486

 Block484:
	cmp eax,0x80004002
	je Block486

 Block485:
	push eax
	call _com_issue_error

 Block486:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0xB8
	jne Block489

 Block487:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block490

 Block488:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block490

 Block489:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block490:
	cmp dword ptr [ebp+0x44],0
	je Block550

 Block491:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_CHATBALLOON
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	lea eax,[ebp+0x24]
	mov byte ptr [ebp-4],0xB9
	push eax
	mov byte ptr [ebp-4],0xB8
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xBA
	call get_int32
	add esp,8
	mov dword ptr [edi+0x28C],eax
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0xB8
	jne Block494

 Block492:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block495

 Block493:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block495

 Block494:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block495:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_WIDTHSIZE
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	lea eax,[ebp+0x24]
	mov byte ptr [ebp-4],0xBB
	push eax
	mov byte ptr [ebp-4],0xB8
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xBC
	call get_int32
	add esp,8
	mov dword ptr [edi+0x290],eax
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0xB8
	jne Block498

 Block496:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block499

 Block497:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block499

 Block498:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block499:
	mov dword ptr [ebp+0x48],0
	jmp Block501

 Block501:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x48]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x24]
	push ecx
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0xBD
	mov byte ptr [ebp-4],0xB8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xBE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block503

 Block502:
	cmp eax,0x80004002
	jne Block4

 Block503:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0xC0
	jne Block506

 Block504:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block507

 Block505:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block507

 Block506:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block507:
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	sete cl
	test cl,cl
	jne Block513

 Block508:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block510

 Block509:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block510:
	mov ecx,edi
	call CMobTemplate::LoadSpeakInformation
	cmp dword ptr [ebp+0x5C],0
	mov byte ptr [ebp-4],0xB8
	je Block512

 Block511:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block512:
	inc dword ptr [ebp+0x48]
	jmp Block501

 Block513:
	mov byte ptr [ebp-4],0xB8
	test eax,eax
	je Block515

 Block514:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block515:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_CON
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	lea eax,[ebp+0x24]
	mov byte ptr [ebp-4],0xC1
	push eax
	mov byte ptr [ebp-4],0xB8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xC2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp]
	mov dword ptr [ebp],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block518

 Block516:
	cmp eax,0x80004002
	je Block518

 Block517:
	push eax
	call _com_issue_error

 Block518:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0xC4
	jne Block521

 Block519:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block522

 Block520:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block522

 Block521:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block522:
	cmp dword ptr [ebp],0
	je Block524

 Block523:
	mov eax,dword ptr [ebp]
	push ecx
	mov ecx,esp
	mov dword ptr [ecx],eax
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp+0x64],esp
	push eax
	call edx
	mov ecx,edi
	call CMobTemplate::LoadSpeakCondition

 Block524:
	mov dword ptr [ebp+0x48],0
	jmp Block526

 Block526:
	mov eax,dword ptr [ebp+0x48]
	mov eax,dword ptr [eax*4+_D_S_SMOBACTION]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block528

 Block527:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block528:
	push ecx
	mov ecx,dword ptr [ebp+0x38]
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block530

 Block529:
	mov eax,ecx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block530:
	push ecx
	mov ecx,dword ptr [ebp+8]
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block532

 Block531:
	mov eax,ecx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block532:
	lea eax,[ebp+0xC]
	push eax
	call GetPropertyLinkData
	add esp,0x10
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0xC5
	test eax,eax
	je Block545

 Block533:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_SPEAK__1
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0xC6
	test ecx,ecx
	je Block1

 Block534:
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],0xC5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xC7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block536

 Block535:
	cmp eax,0x80004002
	jne Block4

 Block536:
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0xC9
	jne Block539

 Block537:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block540

 Block538:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block540

 Block539:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block540:
	cmp dword ptr [ebp+0x5C],0
	je Block542

 Block541:
	mov edx,dword ptr [ebp+0x48]
	mov eax,dword ptr [ebp+0x5C]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [ecx],eax
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp+0x64],esp
	push eax
	call edx
	mov ecx,edi
	call CMobTemplate::LoadSpeakInformation

 Block542:
	cmp dword ptr [ebp+0x5C],0
	mov byte ptr [ebp-4],0xC5
	je Block544

 Block543:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block544:
	mov eax,dword ptr [ebp+0xC]

 Block545:
	mov byte ptr [ebp-4],0xC4
	test eax,eax
	je Block547

 Block546:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block547:
	mov eax,dword ptr [ebp+0x48]
	inc eax
	cmp eax,0x2B
	mov dword ptr [ebp+0x48],eax
	jl Block526

 Block548:
	cmp dword ptr [ebp],0
	mov byte ptr [ebp-4],0xB8
	je Block550

 Block549:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block550:
	cmp dword ptr [ebp+0x44],0
	mov byte ptr [ebp-4],0xAE
	je Block552

 Block551:
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block552:
	cmp dword ptr [ebp+4],0
	mov byte ptr [ebp-4],0xA8
	je Block554

 Block553:
	mov eax,dword ptr [ebp+4]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block554:
	cmp dword ptr [ebp+0x40],0
	mov byte ptr [ebp-4],0x9A
	je Block556

 Block555:
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block556:
	cmp dword ptr [ebp+0x3C],0
	mov byte ptr [ebp-4],0x8E
	je Block558

 Block557:
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block558:
	lea ecx,[ebp-0xE8]
	mov byte ptr [ebp-4],0x8B
	mov dword ptr [ebp-0xE8],offset ZMap_ZXStringA_INT_VTABLE
	call ZMap<ZXString<char>, int, ZXString<char>>::RemoveAll
	cmp dword ptr [ebp+0x34],0
	mov byte ptr [ebp-4],bl
	je Block560

 Block559:
	mov eax,dword ptr [ebp+0x34]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block560:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0x22
	jne Block567

 Block561:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block563

 Block562:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block563:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block564:
	cmp word ptr [ebp-0xBC],8
	mov byte ptr [ebp-4],0x1D
	jne Block568

 Block565:
	mov eax,dword ptr [ebp-0xB4]
	xor edx,edx
	mov word ptr [ebp-0xBC],dx
	test eax,eax
	je Block569

 Block566:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block569

 Block567:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x6C]
	push ecx
	call ebx
	jmp Block564

 Block568:
	lea eax,[ebp-0xBC]
	push eax
	call ebx

 Block569:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0x1C
	jne Block572

 Block570:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	test eax,eax
	je Block573

 Block571:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block573

 Block572:
	lea edx,[ebp-0x7C]
	push edx
	call ebx

 Block573:
	cmp word ptr [ebp-0xAC],8
	mov byte ptr [ebp-4],0x1B
	jne Block576

 Block574:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	test eax,eax
	je Block577

 Block575:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block577

 Block576:
	lea ecx,[ebp-0xAC]
	push ecx
	call ebx

 Block577:
	cmp word ptr [ebp-0x9C],8
	mov byte ptr [ebp-4],0x1A
	jne Block580

 Block578:
	mov eax,dword ptr [ebp-0x94]
	xor edx,edx
	mov word ptr [ebp-0x9C],dx
	test eax,eax
	je Block581

 Block579:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block581

 Block580:
	lea eax,[ebp-0x9C]
	push eax
	call ebx

 Block581:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],9
	jne Block584

 Block582:
	mov eax,dword ptr [ebp-0x84]
	xor ecx,ecx
	mov word ptr [ebp-0x8C],cx
	test eax,eax
	je Block585

 Block583:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block585

 Block584:
	lea edx,[ebp-0x8C]
	push edx
	call ebx

 Block585:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block587

 Block586:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block587:
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],6
	jne Block590

 Block588:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block591

 Block589:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block591

 Block590:
	lea ecx,[ebp-0x40]
	push ecx
	call ebx

 Block591:
	lea ebx,[edi+4]
	push ebx
	mov byte ptr [ebp-4],5
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block593

 Block592:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block593:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block595

 Block594:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block595:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block597

 Block596:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block597:
	mov eax,1
	jmp Block606

 Block598:
	lea ecx,[ebp-0x7C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xAC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x9C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x8C]
	call Ztl_variant_t::~Ztl_variant_t
	mov byte ptr [ebp-4],8
	test ebx,ebx
	je Block600

 Block599:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block600:
	lea ecx,[ebp-0x40]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x5C]
	mov byte ptr [ebp-4],5
	call ZRef<CMobTemplate>::~ZRef<CMobTemplate>
	mov byte ptr [ebp-4],4
	test esi,esi
	je Block602

 Block601:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block602:
	mov eax,dword ptr [ebp+0x10]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0
	call eax

 Block603:
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block605

 Block604:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block605:
	xor eax,eax

 Block606:
	lea esp,[ebp-0x108]
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
	ret
}
}
