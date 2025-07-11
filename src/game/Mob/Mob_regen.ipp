#include "regen.hpp"
// Mob.ipp
#include "Mob.hpp"

// CMob::GetArrayBodyRectImpl
__SUB_CLASS_THIS(00242400, __thiscall, 47497,  CMob, void, const ZArray<tagRECT>&, const ZArray<tagRECT>&, ZArray<tagRECT>&, int32_t) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x18]
	mov eax,dword ptr [ebx]
	push ebp
	push edi
	xor edi,edi
	mov ebp,ecx
	cmp eax,edi
	je Block13

 Block1:
	cmp dword ptr [eax-4],edi
	je Block13

 Block2:
	mov ecx,dword ptr [esp+0x28]
	lea eax,[esp+0x28]
	push eax
	push edi
	call ZArray<tagRECT>::_Alloc
	mov ecx,dword ptr [ebp+0x174]
	cmp dword ptr [ecx+0x1A0],edi
	jne Block4

 Block3:
	mov edx,dword ptr [ebp+0x3D8]
	push edx
	lea eax,[ebp+0x3D0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8

 Block4:
	mov ecx,dword ptr [ebp+0x174]
	cmp dword ptr [ecx+0x1A0],edi
	jne Block7

 Block5:
	mov edx,dword ptr [ebp+0x3D8]
	push edx
	lea eax,[ebp+0x3D0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	and eax,1
	jne Block7

 Block6:
	mov ebx,dword ptr [esp+0x24]

 Block7:
	mov ecx,ebx
	mov dword ptr [esp+0x20],edi
	call ZArray<tagRECT>::GetCount
	test eax,eax
	jbe Block13

 Block8:
	push esi

 Block9:
	mov ecx,dword ptr [esp+0x2C]
	push 0xFFFFFFFF
	call ZArray<tagRECT>::InsertBefore
	mov esi,eax
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+edi]
	add eax,edi
	mov dword ptr [esi],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+4],edx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esi+8],ecx
	mov edx,dword ptr [eax+0xC]
	lea ecx,[ebp+0x538]
	mov dword ptr [esi+0xC],edx
	call TSecType<long>::GetData
	push eax
	lea ecx,[ebp+0x544]
	call TSecType<long>::GetData
	push eax
	push esi
	call OffsetRect
	cmp dword ptr [esp+0x30],0
	je Block11

 Block10:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+edi]
	add eax,edi
	mov dword ptr [esp+0x10],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x14],edx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esp+0x18],ecx
	mov edx,dword ptr [eax+0xC]
	lea ecx,[ebp+0x550]
	mov dword ptr [esp+0x1C],edx
	call TSecType<long>::GetData
	push eax
	lea ecx,[ebp+0x55C]
	call TSecType<long>::GetData
	push eax
	lea eax,[esp+0x18]
	push eax
	call OffsetRect
	lea ecx,[esp+0x10]
	push ecx
	push esi
	push esi
	call UnionRect

 Block11:
	mov esi,dword ptr [esp+0x24]
	inc esi
	mov ecx,ebx
	mov dword ptr [esp+0x24],esi
	add edi,0x10
	call ZArray<tagRECT>::GetCount
	cmp esi,eax
	jb Block9

 Block12:
	pop esi

 Block13:
	pop edi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x10
}
}
// CMob::ShowHPIndicator
_SUB_EXCEPTION_HANDLER(23E200)
__SUB_CLASS_THIS0(0023E200, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_23E200
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x84]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	cmp dword ptr [edi+0x4F0],0
	je Block46

 Block1:
	mov eax,3
	mov word ptr [esp+0x14],ax
	mov dword ptr [esp+0x1C],0xFFFFFFFE
	mov ecx,dword ptr [edi+0x4F0]
	mov dword ptr [esp+0x8C],0
	test ecx,ecx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	mov ebp,8
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	cmp word ptr [esp+0x14],bp
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x64]
	push edx
	call esi
	lea eax,[esp+0x64]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x54]
	push ecx
	mov dword ptr [esp+0x90],1
	call esi
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0x90],2
	call esi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x90],3
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0x90],4
	call esi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov ecx,dword ptr [edi+0x4F0]
	mov eax,dword ptr [edi+0x508]
	mov byte ptr [esp+0x8C],5
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea edx,[esp+0x64]
	push edx
	lea edx,[esp+0x58]
	push edx
	lea edx,[esp+0x4C]
	push edx
	lea edx,[esp+0x40]
	push edx
	lea edx,[esp+0x34]
	push edx
	push eax
	lea eax,[esp+0x8C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x74],bp
	jne Block28

 Block22:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block24:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block25:
	mov byte ptr [esp+0x8C],4
	cmp word ptr [esp+0x24],bp
	jne Block29

 Block26:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block30

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block28:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x74]
	push edx
	call esi
	jmp Block25

 Block29:
	lea ecx,[esp+0x24]
	push ecx
	call esi

 Block30:
	mov byte ptr [esp+0x8C],3
	cmp word ptr [esp+0x34],bp
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[esp+0x34]
	push eax
	call esi

 Block34:
	mov byte ptr [esp+0x8C],2
	cmp word ptr [esp+0x44],bp
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[esp+0x44]
	push edx
	call esi

 Block38:
	mov byte ptr [esp+0x8C],1
	cmp word ptr [esp+0x54],bp
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x54]
	push ecx
	call esi

 Block42:
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	cmp word ptr [esp+0x64],bp
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x64]
	push eax
	call esi

 Block46:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x80
	ret
}
}
// CMob::Update
_SUB_EXCEPTION_HANDLER(254300)
__SUB_CLASS_THIS0(00254300, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_254300
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xBC
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
	xor edi,edi
	mov dword ptr [ebp-0x24],edi
	mov eax,dword ptr [esi+0x5B8]
	cmp eax,edi
	je Block3

 Block1:
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	push eax
	call CMobPool::GetMob
	test eax,eax
	jne Block3

 Block2:
	push edi
	push edi
	push edi
	mov ecx,esi
	call CMob::ChaseTarget
	mov dword ptr [esi+0x5B8],edi

 Block3:
	mov ecx,esi
	call CMob::UpdateEscortStopActRepeat
	mov ecx,esi
	call CMob::IsChaseTargetEscort
	test eax,eax
	je Block5

 Block4:
	cmp dword ptr [esi+0x310],edi
	jne Block7

 Block5:
	mov ecx,esi
	call CMob::IsChaseTargetDazzle
	test eax,eax
	je Block8

 Block6:
	mov eax,dword ptr [esi+0x174]
	cmp dword ptr [eax+0x234],1
	jne Block8

 Block7:
	push edi
	push edi
	push edi
	mov ecx,esi
	call CMob::ChaseTarget

 Block8:
	lea ecx,[esi+0x570]
	call ZArray<tagPOINT>::RemoveAll
	lea ecx,[esi+0x574]
	call ZArray<long>::RemoveAll
	call get_update_time
	mov ecx,dword ptr [esi+0x578]
	mov dword ptr [ebp-0x18],eax
	cmp ecx,edi
	je Block11

 Block9:
	cmp ecx,eax
	jg Block11

 Block10:
	push 0xEA
	lea ecx,[ebp-0x50]
	mov dword ptr [esi+0x578],edi
	call COutPacket::_ctor_1
	mov ecx,dword ptr [esi+0x170]
	push ecx
	lea edx,[esi+0x168]
	push edx
	mov dword ptr [ebp-4],edi
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	push eax
	lea ecx,[ebp-0x50]
	call COutPacket::Encode4
	mov eax,dword ptr [esi+0x57C]
	push eax
	lea ecx,[ebp-0x50]
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0x580]
	push ecx
	lea ecx,[ebp-0x50]
	call COutPacket::Encode4
	mov edx,dword ptr [esi+0x584]
	push edx
	lea ecx,[ebp-0x50]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[ebp-0x50]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[ebp-0x4C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block11:
	push edi
	lea ecx,[esi+0x14]
	call CChatBalloon::CheckTimeOut
	mov eax,dword ptr [esi+0xD0]
	mov dword ptr [ebp-0x14],eax
	cmp eax,edi
	je Block15

 Block12:
	lea ecx,[ebp-0x14]
	push ecx
	call ZList<CMob::ATTACKENTRY>::GetNext
	mov edx,dword ptr [eax+0x1C]
	mov ecx,dword ptr [esi+0x174]
	add esp,4
	push edx
	call CMobTemplate::GetAttackInfo
	cmp dword ptr [eax+0xAC],edi
	je Block14

 Block13:
	mov eax,dword ptr [eax+0x90]
	mov ecx,esi
	mov dword ptr [esi+0x9C],eax
	call CMob::AngerGaugeFullChargeEffect

 Block14:
	cmp dword ptr [ebp-0x14],edi
	jne Block12

 Block15:
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x1B8]
	push ecx
	add eax,0x1B0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [ebp-0x28],eax
	cmp dword ptr [esi+0x234],edi
	je Block29

 Block16:
	mov edx,dword ptr [ebp-0x18]
	sub edx,dword ptr [esi+0x480]
	cmp edx,0x3E8
	jl Block29

 Block17:
	mov eax,dword ptr [esi+0x238]
	mov ecx,dword ptr [esi+0x174]
	push eax
	call CMobTemplate::IsVulnerableTo
	test eax,eax
	je Block20

 Block18:
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	jg Block21

 Block19:
	mov eax,dword ptr [esi+0x234]
	jmp Block21

 Block20:
	xor eax,eax

 Block21:
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov ecx,esi
	call CMob::ShowDamage
	cmp dword ptr [esi+0x238],0x1EA1CC0
	mov ecx,dword ptr [ebp-0x18]
	mov dword ptr [esi+0x480],ecx
	jne Block29

 Block22:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp-0x20]
	push edx
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[ebp-0x20]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [esi+0x238]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	mov ecx,dword ptr [edi+0x35]
	push ecx
	add edi,0x33
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	push 0
	mov byte ptr [ebp-0x2C],al
	mov edx,dword ptr [ebp-0x2C]
	push 1
	push edx
	lea eax,[ebp-0x14]
	push eax
	mov ecx,ebx
	call SKILLENTRY::GetHitUOLByIndex
	mov ebx,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],1
	test ebx,ebx
	je Block27

 Block23:
	cmp dword ptr [ebx],0
	je Block27

 Block24:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block27

 Block25:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block27

 Block26:
	lea ecx,[esi+0x4C0]
	call ZList<CMob::HITEFFECT>::AddTail_
	mov edi,eax
	call get_update_time
	mov dword ptr [edi],eax
	mov ecx,dword ptr [esi+0x238]
	mov dword ptr [edi+4],ecx
	mov ecx,esi
	call CMob::IsLeft
	lea edx,[ebp-0x14]
	push edx
	lea ecx,[edi+0x10]
	mov dword ptr [edi+8],eax
	mov dword ptr [edi+0xC],0
	call Ztl_bstr_t::op_assign
	mov eax,dword ptr [esi+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[esi+4]
	lea edx,[ebp-0x20]
	push edx
	call eax
	mov ecx,dword ptr [eax]
	mov dword ptr [edi+0x14],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [edi+0x18],edx

 Block27:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test ebx,ebx
	je Block29

 Block28:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block29:
	mov edi,dword ptr [ebp-0x18]
	xor ebx,ebx
	cmp dword ptr [esi+0x2E8],ebx
	je Block36

 Block30:
	mov eax,edi
	sub eax,dword ptr [esi+0x484]
	cmp eax,0x3E8
	jl Block36

 Block31:
	mov ecx,dword ptr [esi+0x2EC]
	push ecx
	mov ecx,dword ptr [esi+0x174]
	call CMobTemplate::IsVulnerableTo
	test eax,eax
	je Block34

 Block32:
	mov eax,dword ptr [ebp-0x28]
	cmp eax,ebx
	jg Block35

 Block33:
	mov eax,dword ptr [esi+0x2E8]
	jmp Block35

 Block34:
	xor eax,eax

 Block35:
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push eax
	mov ecx,esi
	call CMob::ShowDamage
	mov dword ptr [esi+0x484],edi

 Block36:
	cmp dword ptr [esi+0x2D8],ebx
	je Block43

 Block37:
	mov edx,edi
	sub edx,dword ptr [esi+0x488]
	cmp edx,0x3E8
	jl Block43

 Block38:
	mov eax,dword ptr [esi+0x2DC]
	mov ecx,dword ptr [esi+0x174]
	push eax
	call CMobTemplate::IsVulnerableTo
	test eax,eax
	je Block41

 Block39:
	mov eax,dword ptr [ebp-0x28]
	cmp eax,ebx
	jg Block42

 Block40:
	mov eax,dword ptr [esi+0x2D8]
	jmp Block42

 Block41:
	xor eax,eax

 Block42:
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push eax
	mov ecx,esi
	call CMob::ShowDamage
	mov dword ptr [esi+0x488],edi

 Block43:
	mov eax,dword ptr [esi+0x3B8]
	mov dword ptr [ebp-0x14],ebx
	mov dword ptr [ebp-0x2C],ebx
	mov dword ptr [ebp-0x54],eax
	cmp eax,ebx
	je Block70

 Block44:
	lea esp,[esp]

 Block45:
	lea ecx,[ebp-0x54]
	push ecx
	call ZList<MobStat::BURNED_INFO>::GetNext
	mov ebx,eax
	xor edi,edi
	add esp,4
	cmp dword ptr [ebx+8],edi
	je Block68

 Block46:
	mov edx,dword ptr [ebp-0x18]
	sub edx,dword ptr [ebx+0x14]
	cmp edx,dword ptr [ebx+0xC]
	jl Block68

 Block47:
	mov eax,dword ptr [ebx+0x1C]
	cmp eax,edi
	jle Block55

 Block48:
	mov eax,dword ptr [ebx+4]
	mov ecx,dword ptr [esi+0x174]
	push eax
	call CMobTemplate::IsVulnerableTo
	neg eax
	sbb eax,eax
	inc eax
	mov dword ptr [ebp-0x2C],eax
	cmp eax,edi
	je Block50

 Block49:
	mov ecx,dword ptr [ebp-0x18]
	mov edi,dword ptr [ebp-0x54]
	xor eax,eax
	add dword ptr [ebp-0x14],eax
	dec dword ptr [ebx+0x1C]
	mov dword ptr [ebx+0x14],ecx
	jmp Block69

 Block50:
	mov eax,dword ptr [ebp-0x28]
	cmp eax,edi
	jg Block52

 Block51:
	mov eax,dword ptr [ebx+8]

 Block52:
	add dword ptr [ebp-0x14],eax
	dec dword ptr [ebx+0x1C]

 Block53:
	mov edi,dword ptr [ebp-0x54]

 Block54:
	mov ecx,dword ptr [ebp-0x18]
	mov dword ptr [ebx+0x14],ecx
	jmp Block69

 Block55:
	mov dword ptr [ebp-0x64],edi
	mov dword ptr [ebp-0x3C],edi
	cmp eax,edi
	jne Block53

 Block56:
	mov edi,dword ptr [esi+0xBC]
	mov dword ptr [ebp-0x54],edi
	test edi,edi
	je Block54

 Block57:
	lea ecx,[ebp-0x54]
	push ecx
	mov dword ptr [ebp-0x1C],edi
	call ZList<CMob::AFFECTEDSKILLENTRY>::GetNext
	mov edi,eax
	mov edx,dword ptr [edi]
	push edx
	call is_guided_bullet_skill
	add esp,8
	test eax,eax
	jne Block63

 Block58:
	mov eax,dword ptr [edi+8]
	test eax,eax
	je Block62

 Block59:
	cmp dword ptr [edi+0xC],0
	push eax
	je Block61

 Block60:
	lea ecx,[esi+0xEC]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAt
	inc dword ptr [ebp-0x64]
	jmp Block62

 Block61:
	lea ecx,[esi+0xD8]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAt
	inc dword ptr [ebp-0x3C]

 Block62:
	mov eax,dword ptr [ebp-0x1C]
	push eax
	lea ecx,[esi+0xB0]
	call ZList<CMob::AFFECTEDSKILLENTRY>::RemoveAt

 Block63:
	mov edi,dword ptr [ebp-0x54]
	test edi,edi
	jne Block57

 Block64:
	cmp dword ptr [ebp-0x64],edi
	je Block66

 Block65:
	mov ecx,esi
	call CMob::SetAffectedLayerPos

 Block66:
	cmp dword ptr [ebp-0x3C],0
	je Block54

 Block67:
	push 1
	mov ecx,esi
	call CMob::ShiftAffectedSkillAnimation
	mov ecx,dword ptr [ebp-0x18]
	mov dword ptr [ebx+0x14],ecx
	jmp Block69

 Block68:
	mov edi,dword ptr [ebp-0x54]

 Block69:
	test edi,edi
	jne Block45

 Block70:
	mov edx,dword ptr [ebp-0x28]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x40]
	push eax
	mov dword ptr [ebp-0x88],edx
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [ebp-0x3C]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [ebp-0x1C],ecx
	test edi,edi
	je Block75

 Block71:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block74

 Block72:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block74

 Block73:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block74:
	mov dword ptr [ebp-0x3C],0

 Block75:
	cmp dword ptr [ebp-0x28],0
	jle Block77

 Block76:
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	lea edx,[ebp-0x88]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ebp-0x1C]
	push eax
	call CItemInfo::CheckDamageModifiedByEquipUpgrade
	add esp,0x1C

 Block77:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	jne Block79

 Block78:
	cmp dword ptr [ebp-0x2C],eax
	je Block80

 Block79:
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov ecx,esi
	call CMob::ShowDamage

 Block80:
	mov ecx,dword ptr [esi+0x464]
	push ecx
	lea ebx,[esi+0x45C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block101

 Block81:
	mov edx,dword ptr [esi+0x464]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebp-0x18]
	sub ecx,eax
	add esp,8
	test ecx,ecx
	jle Block101

 Block82:
	mov edx,ebx
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x38]
	push edx
	mov dword ptr [esi+0x464],eax
	call edi
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	lea ecx,[ebp-0x50]
	push ecx
	mov dword ptr [ebp-4],2
	call edi
	lea edx,[ebp-0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	mov ecx,dword ptr [esi+0x4E8]
	mov byte ptr [ebp-4],3
	test ecx,ecx
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	lea eax,[ebp-0x1C]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],4
	test ecx,ecx
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea edx,[ebp-0x38]
	push edx
	lea eax,[ebp-0x50]
	push eax
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block92

 Block91:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block92:
	cmp word ptr [ebp-0x50],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],2
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [ebp-0x50],ax
	mov eax,dword ptr [ebp-0x48]
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[ebp-0x50]
	push ecx
	call edi

 Block96:
	cmp word ptr [ebp-0x38],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block99

 Block97:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[ebp-0x38]
	push eax
	call edi

 Block100:
	lea edx,[esi+0x474]
	xor ecx,ecx
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [esi+0x47C],eax

 Block101:
	cmp dword ptr [esi+0x3A4],0
	jne Block117

 Block102:
	mov ecx,dword ptr [esi+0x47C]
	push ecx
	lea edx,[esi+0x474]
	push edx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	cmp eax,1
	je Block117

 Block103:
	mov ecx,esi
	call CMob::IsSamePhaseWithMe
	test eax,eax
	je Block110

 Block104:
	mov eax,dword ptr [esi+0x464]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block117

 Block105:
	mov ecx,dword ptr [esi+0x4E8]
	test ecx,ecx
	jne Block107

 Block106:
	push 0x80004003
	call _com_issue_error

 Block107:
	mov edi,dword ptr [esi+0x4E8]
	test edi,edi
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	call IWzGr2DLayer::Getcolor
	and eax,0xFFFFFF
	sub eax,0x1000000
	mov ecx,edi
	jmp Block116

 Block110:
	call get_field
	test eax,eax
	je Block117

 Block111:
	mov ecx,dword ptr [esi+0x4E8]
	mov edi,dword ptr [eax+0x250]
	test ecx,ecx
	jne Block113

 Block112:
	push 0x80004003
	call _com_issue_error

 Block113:
	mov ebx,dword ptr [esi+0x4E8]
	test ebx,ebx
	jne Block115

 Block114:
	push 0x80004003
	call _com_issue_error

 Block115:
	call IWzGr2DLayer::Getcolor
	and eax,0xFFFFFF
	shl edi,0x18
	add eax,edi
	mov ecx,ebx

 Block116:
	push eax
	call IWzGr2DLayer::Putcolor

 Block117:
	mov ecx,esi
	call CMob::IsMobOurTeam
	test eax,eax
	je Block127

 Block118:
	mov ecx,dword ptr [esi+0x464]
	push ecx
	lea edi,[esi+0x45C]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block122

 Block119:
	mov edx,dword ptr [esi+0x464]
	push edx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block127

 Block120:
	mov eax,dword ptr [esi+0x464]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [ebp-0x18]
	sub eax,0x1F4
	add esp,8
	cmp ebx,eax
	jle Block128

 Block121:
	jmp Block123

 Block122:
	mov ebx,dword ptr [ebp-0x18]

 Block123:
	mov edi,dword ptr [esi+0x4E8]
	test edi,edi
	jne Block125

 Block124:
	push 0x80004003
	call _com_issue_error

 Block125:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0x80FFFFFF
	push edi
	call edx
	test eax,eax
	jge Block128

 Block126:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex
	jmp Block128

 Block127:
	mov ebx,dword ptr [ebp-0x18]

 Block128:
	mov eax,dword ptr [esi+0x104]
	xor ecx,ecx
	cmp eax,ecx
	je Block130

 Block129:
	add eax,0xFFFFFFF4
	mov dword ptr [ebp-0x28],eax
	jmp Block131

 Block130:
	mov dword ptr [ebp-0x28],ecx

 Block131:
	mov eax,dword ptr [esi+0x108]
	cmp eax,ecx
	je Block133

 Block132:
	add eax,0xFFFFFFF4
	mov dword ptr [ebp-0x14],eax
	jmp Block134

 Block133:
	mov dword ptr [ebp-0x14],ecx

 Block134:
	mov eax,dword ptr [esi+0x3F0]
	push eax
	lea edi,[esi+0x3E8]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block137

 Block135:
	mov ecx,dword ptr [esi+0x3F0]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov edx,ebx
	add esp,8
	sub edx,eax
	js Block137

 Block136:
	mov edx,edi
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3F0],eax

 Block137:
	push ebx
	mov ecx,esi
	call CMob::ApplyControl
	mov eax,dword ptr [esi+0x47C]
	push eax
	lea ecx,[esi+0x474]
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block141

 Block138:
	push ebx
	mov ecx,esi
	call CMob::TryPickUpDrop
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x1AC]
	push edx
	add eax,0x1A4
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block141

 Block139:
	cmp dword ptr [esi+0x3A4],eax
	jne Block141

 Block140:
	mov ecx,esi
	call CMob::TryFirstAttack
	mov ecx,esi
	call CMob::TryFirstSelfDestruction

 Block141:
	mov eax,dword ptr [esi+0x3E4]
	push eax
	lea ecx,[esi+0x3DC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jg Block161

 Block142:
	cmp dword ptr [esi+0x28C],0
	je Block144

 Block143:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block145

 Block144:
	mov eax,dword ptr [esi+0x174]

 Block145:
	mov edx,dword ptr [eax+0x48]
	push edx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,4
	je Block147

 Block146:
	mov eax,dword ptr [ebp-0x28]
	cmp dword ptr [eax+0x1A0],0
	je Block161

 Block147:
	mov ecx,dword ptr [ebp-0x14]
	cmp dword ptr [ecx+0x18],0
	je Block161

 Block148:
	mov ecx,esi
	call CMob::IsDazzledMobByMe
	test eax,eax
	je Block155

 Block149:
	push 1
	lea edx,[ebp-0xA8]
	push edx
	call CMob::GetBodyRect
	mov eax,dword ptr [esi+0x494]
	sub ebx,eax
	cmp ebx,0x7D0
	jl Block155

 Block150:
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	push 0
	lea eax,[ebp-0xA8]
	push eax
	call CMobPool::FindBodyAttackMob
	mov dword ptr [ebp-0x2C],eax
	test eax,eax
	je Block155

 Block151:
	mov edi,eax
	mov edx,dword ptr [edi+4]
	mov edx,dword ptr [edx+0x14]
	add edi,4
	lea eax,[ebp-0x40]
	push eax
	mov ecx,edi
	call edx
	mov ebx,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[ebp-0x68]
	push ecx
	mov ecx,edi
	call edx
	mov edi,dword ptr [eax]
	sub edi,dword ptr [ebx]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x10]
	lea ebx,[esi+4]
	lea ecx,[ebp-0x58]
	push ecx
	mov ecx,ebx
	call edx
	sub edi,dword ptr [eax]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x14]
	lea ecx,[ebp-0x48]
	push ecx
	mov ecx,ebx
	mov dword ptr [ebp-0x1C],edi
	call edx
	mov edi,dword ptr [eax]
	mov ecx,dword ptr [ebp-0x28]
	add edi,dword ptr [ebp-0x1C]
	call CVecCtrl::GetLadderOrRope
	test eax,eax
	je Block154

 Block152:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x14]
	lea ecx,[ebp-0x48]
	push ecx
	mov ecx,ebx
	call edx
	add eax,4
	mov dword ptr [ebp-0x1C],eax
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[ebp-0x40]
	push ecx
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [ebp-0x1C]
	sub eax,dword ptr [ecx]
	jns Block154

 Block153:
	mov edi,0x7FFFFFFF

 Block154:
	mov ebx,dword ptr [ebp-0x2C]
	push edi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	push 0
	mov ecx,esi
	call CMob::SetDamagedByMob
	neg edi
	push edi
	push 0xFFFFFFFF
	push esi
	push 0
	push 0
	push 0
	mov ecx,ebx
	call CMob::SetDamagedByMob
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [esi+0x494],edx

 Block155:
	mov eax,dword ptr [esi+0x124]
	push eax
	lea ecx,[esi+0x11C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,4
	jne Block161

 Block156:
	mov ecx,esi
	call CMob::IsRisingByToss
	test eax,eax
	jne Block161

 Block157:
	lea edx,[ebp-0x3C]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[ebp-0x64]
	push ecx
	xor edi,edi
	mov ecx,esi
	mov dword ptr [ebp-0x3C],edi
	call CMob::TryDoingSkill
	test eax,eax
	jne Block160

 Block158:
	mov edx,dword ptr [ebp-0x14]
	cmp dword ptr [edx+0x300],edi
	je Block161

 Block159:
	push edi
	lea eax,[ebp-0x3C]
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp-0x64]
	push edx
	push 3
	mov ecx,esi
	call CMob::IsTargetInAttackRange
	test eax,eax
	je Block161

 Block160:
	mov eax,dword ptr [ebp-0x3C]
	mov ecx,dword ptr [ebp-0x2C]
	mov edx,dword ptr [ebp-0x64]
	push edi
	push edi
	push edi
	push edi
	push edi
	push 1
	push eax
	push ecx
	push edx
	mov ecx,esi
	mov dword ptr [esi+0x160],edi
	call CMob::GenerateMovePath

 Block161:
	mov eax,dword ptr [esi+0x13C]
	test eax,eax
	je Block167

 Block162:
	sub eax,dword ptr [ebp-0x18]
	jns Block167

 Block163:
	mov dword ptr [ebp-0x54],0
	lea eax,[ebp-0x1C]
	push 0x663
	push eax
	mov dword ptr [ebp-4],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi+0x138]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp-0x54]
	push edx
	mov byte ptr [ebp-4],6
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x1C]
	add esp,0xC
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block165

 Block164:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block165:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [eax],0
	lea edi,[esi+0x550]
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call TSecType<long>::GetData
	lea ebx,[esi+0x55C]
	push eax
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],0
	mov eax,dword ptr [ebp-0x54]
	mov dword ptr [ebp-0x1C],esp
	push 0
	mov byte ptr [ebp-4],5
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,ebx
	mov edi,eax
	call TSecType<long>::GetData
	push edi
	push eax
	call get_sound_volume_by_pos
	mov ecx,dword ptr [esi+0x138]
	push eax
	push ecx
	call play_summon_sound
	add esp,0x10
	cmp dword ptr [ebp-0x54],0
	mov dword ptr [esi+0x13C],0
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block167

 Block166:
	mov edx,dword ptr [ebp-0x54]
	add edx,0xFFFFFFF4
	push edx
	call ZXString16::_Release
	add esp,4

 Block167:
	mov ebx,1
	push ebx
	lea eax,[ebp-0x98]
	push eax
	mov ecx,esi
	call CMob::GetBodyRect
	mov ecx,dword ptr [ebp-0x18]
	sub ecx,dword ptr [esi+0x48C]
	xor eax,eax
	cmp ecx,0x3E8
	mov dword ptr [ebp-0x6C],eax
	mov dword ptr [ebp-0x78],eax
	mov dword ptr [ebp-0x84],eax
	jl Block184

 Block168:
	mov edi,dword ptr [_D_G_PSTAGE+4]
	cmp edi,eax
	je Block171

 Block169:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block171

 Block170:
	mov ecx,edi
	jmp Block172

 Block171:
	xor ecx,ecx

 Block172:
	push ebx
	lea edx,[ebp-0x78]
	push edx
	lea eax,[ebp-0x74]
	push eax
	lea edx,[ebp-0x84]
	push edx
	lea eax,[ebp-0x6C]
	push eax
	lea edx,[ebp-0x98]
	push edx
	call CMapLoadable::GetCollideObstacleRect
	test eax,eax
	je Block184

 Block173:
	cmp dword ptr [ebp-0x6C],0
	jle Block184

 Block174:
	push 0xE6
	lea ecx,[ebp-0x38]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi+0x170]
	push eax
	lea ecx,[esi+0x168]
	push ecx
	mov dword ptr [ebp-4],8
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	push eax
	lea ecx,[ebp-0x38]
	call COutPacket::Encode4
	mov edx,dword ptr [ebp-0x6C]
	push edx
	lea ecx,[ebp-0x38]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[ebp-0x38]
	push eax
	call CClientSocket::SendPacket
	cmp dword ptr [ebp-0x74],0
	jne Block177

 Block175:
	cmp dword ptr [ebp-0x70],0
	jne Block177

 Block176:
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x14]
	lea edi,[esi+4]
	lea eax,[ebp-0x48]
	push eax
	mov ecx,edi
	call edx
	mov ebx,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[ebp-0x20]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	sub eax,dword ptr [ebx]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x14]
	mov dword ptr [ebp-0x74],eax
	lea eax,[ebp-0x48]
	push eax
	mov ecx,edi
	call edx
	lea ebx,[eax+4]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[ebp-0x20]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	sub eax,dword ptr [ebx]
	mov ebx,1
	mov dword ptr [ebp-0x70],eax

 Block177:
	mov eax,dword ptr [esi+0x108]
	mov ecx,dword ptr [ebp-0x18]
	mov dword ptr [esi+0x48C],ecx
	test eax,eax
	je Block179

 Block178:
	add eax,0xFFFFFFF4
	jmp Block180

 Block179:
	xor eax,eax

 Block180:
	cmp dword ptr [eax+0x18],0
	je Block183

 Block181:
	mov ecx,esi
	call CMob::IsRisingByToss
	test eax,eax
	jne Block183

 Block182:
	push eax
	push eax
	xor edx,edx
	cmp dword ptr [ebp-0x74],edx
	push eax
	push eax
	push ebx
	setl dl
	push eax
	push eax
	mov ecx,esi
	push edx
	call CMob::GetRandomHitAction
	push eax
	mov ecx,esi
	call CMob::GenerateMovePath

 Block183:
	lea ecx,[ebp-0x34]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block184:
	mov eax,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	mov edi,dword ptr [eax+0x5C]
	mov dword ptr [ebp-0x2C],edi
	test edi,edi
	je Block228

 Block185:
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	push eax
	mov ecx,edi
	call CMob::CheckDamagedByMob
	test eax,eax
	je Block228

 Block186:
	mov eax,dword ptr [esi+0x174]
	cmp dword ptr [eax+0x208],0
	jne Block228

 Block187:
	cmp dword ptr [eax+0x234],ebx
	je Block228

 Block188:
	cmp dword ptr [esi+0x310],0
	jne Block228

 Block189:
	mov edx,dword ptr [edi+0x174]
	cmp dword ptr [edx+0x234],ebx
	jne Block191

 Block190:
	push edi
	mov ecx,esi
	call CMob::IsAbleTargetEscortMob
	test eax,eax
	je Block228

 Block191:
	mov eax,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	mov ecx,dword ptr [eax+0x60]
	mov dword ptr [ebp-0x14],ecx
	cmp edi,esi
	je Block227

 Block192:
	mov ecx,esi
	call CMob::IsActive
	test eax,eax
	je Block198

 Block193:
	lea edx,[ebp-0x1C]
	push edx
	call CMob::GetActiveVecCtrl
	mov eax,dword ptr [eax]
	mov dword ptr [ebp-0x24],ebx
	test eax,eax
	je Block195

 Block194:
	add eax,0xFFFFFFF4
	jmp Block196

 Block195:
	xor eax,eax

 Block196:
	cmp dword ptr [eax+0x300],0
	jne Block198

 Block197:
	mov bl,1
	jmp Block199

 Block198:
	xor bl,bl

 Block199:
	test byte ptr [ebp-0x24],1
	je Block202

 Block200:
	mov eax,dword ptr [ebp-0x1C]
	and dword ptr [ebp-0x24],0xFFFFFFFE
	test eax,eax
	je Block202

 Block201:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block202:
	mov ecx,esi
	test bl,bl
	jne Block207

 Block203:
	call CMob::IsActive
	test eax,eax
	je Block208

 Block204:
	call CMob::IsChaseTargetEscort
	test eax,eax
	jne Block208

 Block205:
	mov eax,dword ptr [edi+0x174]
	cmp dword ptr [eax+0x234],1
	jne Block208

 Block206:
	mov ecx,esi

 Block207:
	push 0
	lea eax,[edi+4]
	push eax
	push 1
	call CMob::ChaseTarget

 Block208:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::AmIPartyBoss
	test eax,eax
	jne Block210

 Block209:
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	cmp dword ptr [ecx+0x2C],eax
	jne Block227

 Block210:
	mov edx,dword ptr [esi+0x174]
	mov eax,dword ptr [edx+0x234]
	mov ecx,dword ptr [ebp-0x18]
	dec eax
	neg eax
	sbb eax,eax
	sub ecx,dword ptr [ebp-0x14]
	and eax,0x1F4
	add eax,0x3E8
	cmp ecx,eax
	jl Block227

 Block211:
	push 0
	lea edx,[ebp-0x60]
	push edx
	mov ecx,edi
	call CMob::GetBodyRect
	push 0
	lea eax,[ebp-0xA8]
	push eax
	mov ecx,esi
	call CMob::GetBodyRect
	lea ecx,[ebp-0xA8]
	push ecx
	lea edx,[ebp-0x60]
	push edx
	lea eax,[ebp-0xC8]
	push eax
	call IntersectRect
	test eax,eax
	je Block227

 Block212:
	mov edx,dword ptr [edi+0x174]
	cmp dword ptr [edx+0x234],1
	mov ecx,dword ptr [ebp-0x18]
	mov dword ptr [ebp-0x14],ecx
	je Block226

 Block213:
	push 0xE7
	lea ecx,[ebp-0x50]
	call COutPacket::_ctor_1
	mov ecx,esi
	mov dword ptr [ebp-4],9
	call CMob::_ZtlSecureGet_m_dwMobID
	push eax
	lea ecx,[ebp-0x50]
	call COutPacket::Encode4
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x20B4]
	push eax
	lea ecx,[ebp-0x50]
	call COutPacket::Encode4
	mov ecx,edi
	call CMob::GetMobID
	push eax
	lea ecx,[ebp-0x50]
	call COutPacket::Encode4
	lea ecx,[ebp-0x50]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea edx,[ebp-0x1C]
	push edx
	mov ecx,edi
	call CMob::GetActiveVecCtrl
	mov eax,dword ptr [eax]
	or dword ptr [ebp-0x24],2
	test eax,eax
	je Block215

 Block214:
	add eax,0xFFFFFFF4
	jmp Block216

 Block215:
	xor eax,eax

 Block216:
	cmp dword ptr [eax+0x18],0
	je Block219

 Block217:
	mov ecx,edi
	call CMob::IsRisingByToss
	test eax,eax
	jne Block219

 Block218:
	mov bl,1
	jmp Block220

 Block219:
	xor bl,bl

 Block220:
	test byte ptr [ebp-0x24],2
	je Block223

 Block221:
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block223

 Block222:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block223:
	test bl,bl
	je Block225

 Block224:
	xor eax,eax
	cmp dword ptr [ebp-0x74],eax
	push eax
	push eax
	push eax
	push eax
	push eax
	push eax
	push eax
	setl al
	mov ecx,edi
	push eax
	call CMob::GetRandomHitAction
	push eax
	mov ecx,edi
	call CMob::GenerateMovePath

 Block225:
	lea ecx,[ebp-0x4C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	jmp Block227

 Block226:
	mov edx,dword ptr [edi+4]
	mov edx,dword ptr [edx+0x14]
	add edi,4
	lea eax,[ebp-0x48]
	push eax
	mov ecx,edi
	call edx
	mov ebx,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[ebp-0x20]
	push ecx
	mov ecx,edi
	call edx
	mov edi,dword ptr [eax]
	sub edi,dword ptr [ebx]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x10]
	lea ebx,[esi+4]
	lea ecx,[ebp-0x40]
	push ecx
	mov ecx,ebx
	call edx
	sub edi,dword ptr [eax]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x14]
	lea ecx,[ebp-0x68]
	push ecx
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp-0x2C]
	add eax,edi
	neg eax
	push eax
	push 0xFFFFFFFF
	push esi
	push 0
	push 0
	push 0
	call CMob::SetDamagedByMob

 Block227:
	mov eax,dword ptr [ebp-0x14]
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	mov dword ptr [ecx+0x60],eax

 Block228:
	mov eax,dword ptr [esi+0x4B8]
	mov dword ptr [ebp-0x54],eax
	test eax,eax
	je Block242

 Block229:
	mov edi,edi

 Block230:
	lea edx,[ebp-0x54]
	push edx
	mov ebx,eax
	call ZList<CMob::DAMAGEINFO>::GetNext
	mov edi,eax
	mov eax,dword ptr [edi+8]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebp-0x18]
	add esp,0xC
	sub ecx,eax
	js Block241

 Block231:
	lea edx,[ebp-0x2C]
	push edx
	mov ecx,esi
	call CMob::GetCurrentAction
	cmp dword ptr [esi+0x4B4],1
	jbe Block236

 Block232:
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_nSkillID
	mov ecx,eax
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x2B
	je Block235

 Block233:
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_nSkillID
	mov ecx,eax
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x2A
	je Block235

 Block234:
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_nSkillID
	test eax,eax
	jne Block236

 Block235:
	mov eax,1
	jmp Block237

 Block236:
	xor eax,eax

 Block237:
	push eax
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_bMoveLeft
	push eax
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_nMoveEndingPosY
	push eax
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_nMoveEndingPosX
	push eax
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_nBulletCashItemID
	push eax
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_nMoveType
	push eax
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_bChase
	push eax
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_nAttackIdx
	push eax
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_bCriticalAttack
	push eax
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_nDamage
	push eax
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_bLeft
	push eax
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_nHitAction
	push eax
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_nSkillID
	push eax
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_dwCharacterId
	push eax
	mov ecx,esi
	call CMob::OnHit
	lea edx,[ebp-0x1C]
	push edx
	mov ecx,esi
	call CMob::GetCurrentAction
	mov ecx,edi
	call CMob::DAMAGEINFO::_ZtlSecureGet_nSkillID
	cmp eax,0x2195AC
	jne Block240

 Block238:
	mov edi,dword ptr [ebp-0x1C]
	cmp dword ptr [ebp-0x2C],edi
	je Block240

 Block239:
	mov ecx,esi
	call CMob::_ZtlSecureGet_m_nMoveAction
	mov edx,edi
	not edx
	xor edx,eax
	and edx,1
	xor edx,eax
	mov ecx,esi
	call CMob::_ZtlSecurePut_m_nMoveAction

 Block240:
	push ebx
	lea ecx,[esi+0x4AC]
	call ZList<CMob::DAMAGEINFO>::RemoveAt

 Block241:
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	jne Block230

 Block242:
	mov eax,dword ptr [esi+0x4CC]
	mov dword ptr [ebp-0x54],eax
	test eax,eax
	je Block269

 Block243:
	lea ecx,[ecx]

 Block244:
	mov dword ptr [ebp-0x14],eax
	lea eax,[ebp-0x54]
	push eax
	call ZList<CMob::HITEFFECT>::GetNext
	mov ecx,dword ptr [ebp-0x18]
	mov edi,eax
	add esp,4
	sub ecx,dword ptr [edi]
	js Block268

 Block245:
	mov eax,dword ptr [edi+4]
	cmp eax,0x4E23EF
	je Block253

 Block246:
	cmp eax,0xE6935C
	je Block253

 Block247:
	mov ecx,esi
	call CMob::IsBossMob
	test eax,eax
	je Block250

 Block248:
	cmp dword ptr [edi+4],0x4215FB
	jne Block250

 Block249:
	mov eax,5
	jmp Block251

 Block250:
	or eax,0xFFFFFFFF

 Block251:
	mov edx,dword ptr [edi+0x18]
	mov ecx,dword ptr [edi+8]
	push eax
	mov eax,dword ptr [edi+0x14]
	push 0
	push edx
	push eax
	push ecx
	push ecx
	lea edx,[edi+0x10]
	mov ecx,esp
	mov dword ptr [ebp-0x3C],esp
	push edx
	call Ztl_bstr_t::_ctor_copy
	lea eax,[ebp-0x1C]
	push eax
	mov ecx,esi
	call CMob::LoadLayer
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block265

 Block252:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block265

 Block253:
	xor ebx,ebx
	mov dword ptr [ebp-0x24],ebx
	mov dword ptr [ebp-4],0xA

 Block254:
	test ebx,ebx
	jne Block256

 Block255:
	mov eax,offset _S___3
	jmp Block257

 Block256:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push eax
	lea eax,[ebx-1]
	push eax
	call _Int2StrW
	add esp,8

 Block257:
	mov ecx,dword ptr [edi+0x10]
	test ecx,ecx
	je Block259

 Block258:
	mov ecx,dword ptr [ecx]
	jmp Block260

 Block259:
	xor ecx,ecx

 Block260:
	push eax
	push ecx
	lea ecx,[ebp-0x24]
	push ecx
	call ZXString16::Format
	mov eax,dword ptr [edi+0x18]
	mov ecx,dword ptr [edi+0x14]
	add esp,0xC
	xor edx,edx
	cmp ebx,2
	sete dl
	push 0xFFFFFFFF
	push edx
	mov edx,dword ptr [edi+8]
	push eax
	mov eax,dword ptr [ebp-0x24]
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x3C],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	lea ecx,[ebp-0x2C]
	push ecx
	mov ecx,esi
	call CMob::LoadLayer
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block262

 Block261:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block262:
	inc ebx
	cmp ebx,3
	jl Block254

 Block263:
	cmp dword ptr [ebp-0x24],0
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block265

 Block264:
	mov ecx,dword ptr [ebp-0x24]
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString16::_Release
	add esp,4

 Block265:
	cmp dword ptr [edi+0xC],0
	je Block267

 Block266:
	mov edx,dword ptr [edi+4]
	push 0
	push 0x35
	push edx
	call play_skill_sound
	add esp,0xC

 Block267:
	mov eax,dword ptr [ebp-0x14]
	push eax
	lea ecx,[esi+0x4C0]
	call ZList<CMob::HITEFFECT>::RemoveAt

 Block268:
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	jne Block244

 Block269:
	cmp dword ptr [esi+0x588],0
	jne Block276

 Block270:
	mov edi,0xB
	or ebx,0xFFFFFFFF

 Block271:
	cmp dword ptr [esi+0x598],0
	je Block276

 Block272:
	mov eax,dword ptr [esi+0x59C]
	push eax
	lea ecx,[ebp-0x30]
	call ZRef<CMob::ReservedPacket>::_ctor_copy
	mov eax,dword ptr [ebp-0x2C]
	cmp dword ptr [eax],0
	mov dword ptr [ebp-4],edi
	je Block274

 Block273:
	lea ecx,[eax+0x14]
	push ecx
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ebp-0x1C],esp
	push 0x80
	add eax,4
	push eax
	call MY_UINT128::_ctor_2
	mov ecx,esi
	call CMob::ProcessStatSet
	jmp Block275

 Block274:
	lea edx,[eax+0x14]
	push edx
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ebp-0x1C],esp
	push 0x80
	add eax,4
	push eax
	call MY_UINT128::_ctor_2
	mov ecx,esi
	call CMob::ProcessStatReset

 Block275:
	mov eax,dword ptr [esi+0x59C]
	lea ecx,[esi+0x590]
	push eax
	call ZList<ZRef<CMob::ReservedPacket>>::RemoveAt
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp-4],ebx
	call ZRef<CMob::ReservedPacket>::~ZRef<CMob::ReservedPacket>
	cmp dword ptr [esi+0x588],0
	je Block271

 Block276:
	mov eax,dword ptr [ebp-0x18]
	push eax
	mov ecx,esi
	call CMob::ShowAffectedSkill
	mov dword ptr [ebp-0x2C],eax
	mov eax,dword ptr [esi+0xBC]
	mov dword ptr [ebp-0x54],eax
	test eax,eax
	je Block292

 Block277:
	mov ebx,0xC
	jmp Block279

 Block279:
	lea ecx,[ebp-0x54]
	push ecx
	call ZList<CMob::AFFECTEDSKILLENTRY>::GetNext
	xor edi,edi
	add esp,4
	mov dword ptr [ebp-0x14],edi
	mov dword ptr [ebp-4],ebx
	cmp dword ptr [eax+0x10],edi
	je Block289

 Block280:
	cmp dword ptr [eax+0xC],edi
	mov eax,dword ptr [eax+8]
	lea ecx,[ebp-0x14]
	push eax
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov edi,dword ptr [ebp-0x14]
	test edi,edi
	sete al
	test al,al
	je Block283

 Block281:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block291

 Block282:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax
	jmp Block291

 Block283:
	mov ecx,esi
	call CMob::IsLeft
	test eax,eax
	je Block286

 Block284:
	test edi,edi
	je Block87

 Block285:
	push 0
	jmp Block288

 Block286:
	test edi,edi
	je Block87

 Block287:
	push 1

 Block288:
	mov ecx,edi
	call IWzGr2DLayer::Putflip

 Block289:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block291

 Block290:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block291:
	cmp dword ptr [ebp-0x54],0
	jne Block279

 Block292:
	cmp dword ptr [ebp-0x2C],0
	je Block296

 Block293:
	mov ecx,esi
	call CMob::IsSuspended
	test eax,eax
	jne Block296

 Block294:
	mov ecx,esi
	call CMob::GetCurTemplate
	mov edi,dword ptr [eax+0x220]
	test edi,edi
	jle Block296

 Block295:
	call _rand
	cdq
	idiv edi
	mov ecx,esi
	add edx,7
	call CMob::_ZtlSecurePut_m_nOneTimeAction
	mov ecx,esi
	call CMob::PrepareActionLayer

 Block296:
	mov ecx,esi
	call CMob::IsSuspended
	test eax,eax
	je Block298

 Block297:
	or edi,0xFFFFFFFF
	or ebx,edi
	jmp Block299

 Block298:
	mov ecx,dword ptr [ebp-0x28]
	push 0
	push 0
	call CVecCtrl::UpdatePassive
	mov edi,eax
	mov ebx,edx

 Block299:
	cmp dword ptr [esi+0x5C8],0
	jl Block303

 Block300:
	mov ecx,ebx
	and ecx,0x10
	xor eax,eax
	or eax,ecx
	jne Block302

 Block301:
	mov eax,dword ptr [ebp-0x18]
	cmp dword ptr [esi+0x5CC],eax
	jge Block303

 Block302:
	mov dword ptr [esi+0x5C8],0xFFFFFFFF
	mov dword ptr [esi+0x5CC],0

 Block303:
	mov ecx,dword ptr [ebp-0x28]
	mov eax,dword ptr [ecx+0x1D8]
	push 0
	push eax
	mov ecx,esi
	call CMob::SetMoveAction
	and edi,ebx
	cmp edi,0xFFFFFFFF
	jne Block311

 Block304:
	mov ecx,esi
	call CMob::IsOnPlayingOneTimeAction
	test eax,eax
	je Block306

 Block305:
	cmp dword ptr [ebp-0x2C],0
	je Block311

 Block306:
	mov ecx,esi
	call CMob::IsSuspended
	test eax,eax
	jne Block311

 Block307:
	mov ecx,esi
	call CMob::IsRisingByToss
	test eax,eax
	jne Block311

 Block308:
	mov ecx,esi
	call CMob::_ZtlSecureGet_m_nMobCtrlState
	cmp eax,3
	je Block310

 Block309:
	mov ecx,esi
	call CMob::_ZtlSecureGet_m_nMobCtrlState
	cmp eax,4
	jne Block311

 Block310:
	xor eax,eax
	push eax
	push eax
	push eax
	push eax
	push eax
	push eax
	push eax
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	call CMob::GenerateMovePath

 Block311:
	push 0
	mov ecx,esi
	call CMob::ShiftAffectedSkillAnimation
	mov ebx,dword ptr [ebp-0x18]
	push ebx
	mov ecx,esi
	call CMob::ProcessAction
	push ebx
	mov ecx,esi
	call CMob::ProcessAttack
	lea edi,[esi+0x538]
	push edi
	lea ecx,[esi+0x550]
	call SECPOINT::op_assign_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x50]
	call Ztl_variant_t::_ctor_1
	lea edx,[ebp-0x50]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea eax,[ebp-0x7C]
	push eax
	lea ecx,[ebp-0x80]
	push ecx
	lea ecx,[esi+0x104]
	mov dword ptr [ebp-4],0xD
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::_GetSnapshot
	lea ecx,[ebp-0x50]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	lea edx,[ebp-0x80]
	push edx
	mov ecx,edi
	call SECPOINT::op_assign_0
	mov eax,dword ptr [esi+0x140]
	test eax,eax
	je Block314

 Block312:
	sub eax,ebx
	jns Block314

 Block313:
	push 0xFFFFFFFF
	lea ecx,[esi+0x4E8]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putcolor
	mov dword ptr [esi+0x140],0

 Block314:
	mov eax,dword ptr [esi+0x174]
	cmp dword ptr [eax+0x208],0
	mov edi,1
	je Block319

 Block315:
	cmp dword ptr [eax+0x234],edi
	je Block319

 Block316:
	mov ecx,esi
	call CMob::_ZtlSecureGet_m_tHitExpire
	test eax,eax
	je Block319

 Block317:
	add dword ptr [esi+0x164],edi
	mov eax,dword ptr [esi+0x164]
	and al,3
	cmp al,2
	jae Block319

 Block318:
	push 0xFF808080
	lea ecx,[esi+0x4E8]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putcolor

 Block319:
	mov ecx,dword ptr [esi+0x174]
	cmp dword ptr [ecx+0x208],0
	jne Block342

 Block320:
	xor edi,edi
	mov dword ptr [ebp-0x64],edi
	mov dword ptr [ebp-0x2C],edi
	call get_field
	lea ebx,[esi+0x50C]
	mov ecx,ebx
	mov dword ptr [ebp-0x24],eax
	call ZMap<long, long, long>::GetHeadPosition
	mov dword ptr [ebp-0x28],eax
	cmp eax,edi
	je Block330

 Block321:
	lea edx,[ebp-0x3C]
	mov edi,eax
	push edx
	lea eax,[ebp-0x28]
	push eax
	mov ecx,ebx
	call ZMap<long, long, long>::GetNext
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [ebp-0x2C]
	inc eax
	mov dword ptr [ebp-0x14],ecx
	mov dword ptr [ebp-0x2C],eax
	cmp eax,1
	je Block323

 Block322:
	call timeGetTime
	cmp dword ptr [ebp-0x14],eax
	jae Block329

 Block323:
	add edi,8
	push edi
	mov ecx,ebx
	call ZMap<long, long, long>::RemoveKey
	mov edx,dword ptr [ebp-0x14]
	cmp dword ptr [ebp-0x64],edx
	jge Block329

 Block324:
	mov ecx,dword ptr [esi+0x174]
	call CMobTemplate::_ZtlSecureGet_bHPGaugeHide
	test eax,eax
	je Block327

 Block325:
	mov edi,dword ptr [ebp-0x24]
	test edi,edi
	je Block328

 Block326:
	mov ecx,dword ptr [esi+0x174]
	call CMobTemplate::_ZtlSecureGet_nMaxHP
	mov ecx,dword ptr [esi+0x174]
	push eax
	call CMobTemplate::_ZtlSecureGet_nMaxHP
	mov dword ptr [ebp-0x1C],eax
	fild dword ptr [ebp-0x1C]
	fild dword ptr [ebp-0x3C]
	fdiv qword ptr [__real_4059000000000000]
	fmulp st(1),st(0)
	call __ftol2_sse
	mov ecx,dword ptr [esi+0x174]
	push eax
	call CMobTemplate::_ZtlSecureGet_nHPTagBgColor
	mov ecx,dword ptr [esi+0x174]
	push eax
	call CMobTemplate::_ZtlSecureGet_nHPTagColor
	mov ecx,dword ptr [esi+0x174]
	push eax
	call CMobTemplate::_ZtlSecureGet_dwTemplateID
	push eax
	mov ecx,edi
	call CField::ShowMobHPTag
	jmp Block328

 Block327:
	mov eax,dword ptr [ebp-0x3C]
	push 0xFF00FF00
	push eax
	mov ecx,esi
	call CMob::CreateHPIndicator
	push ecx
	lea eax,[esi+0x104]
	mov ecx,esp
	mov dword ptr [ebp-0x1C],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	push ecx
	lea edx,[esi+0x4E8]
	mov ecx,esp
	mov dword ptr [ebp-0x1C],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov eax,dword ptr [esi+0x174]
	mov eax,dword ptr [eax+0x30]
	push eax
	mov ecx,esi
	call CMob::MakeNameTag

 Block328:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x64],eax

 Block329:
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	jne Block321

 Block330:
	mov ecx,dword ptr [esi+0x174]
	call CMobTemplate::_ZtlSecureGet_bHPGaugeHide
	test eax,eax
	je Block335

 Block331:
	cmp dword ptr [esi+0x504],0
	je Block335

 Block332:
	mov edi,dword ptr [ebp-0x24]
	test edi,edi
	je Block335

 Block333:
	call timeGetTime
	mov ecx,dword ptr [esi+0x504]
	add ecx,0x4E20
	cmp ecx,eax
	jae Block335

 Block334:
	mov ecx,dword ptr [esi+0x174]
	call CMobTemplate::_ZtlSecureGet_nMaxHP
	mov ecx,dword ptr [esi+0x174]
	push eax
	push 0xFFFFFFFF
	call CMobTemplate::_ZtlSecureGet_nHPTagBgColor
	mov ecx,dword ptr [esi+0x174]
	push eax
	call CMobTemplate::_ZtlSecureGet_nHPTagColor
	mov ecx,dword ptr [esi+0x174]
	push eax
	call CMobTemplate::_ZtlSecureGet_dwTemplateID
	push eax
	mov ecx,edi
	call CField::ShowMobHPTag

 Block335:
	cmp dword ptr [esi+0x4F0],0
	sete al
	test al,al
	sete al
	test al,al
	je Block341

 Block336:
	call timeGetTime
	mov edx,dword ptr [esi+0x504]
	add edx,0x1388
	cmp edx,eax
	jae Block346

 Block337:
	mov ecx,esi
	call CMob::HideHPIndicator
	mov eax,dword ptr [esi+0x4F0]
	test eax,eax
	je Block339

 Block338:
	mov dword ptr [esi+0x4F0],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block339:
	push 0

 Block340:
	mov ecx,esi
	call CLife::ShowNameTag

 Block341:
	mov ecx,esi
	call CMob::AdjustHPIndicatorPosition
	mov edi,1

 Block342:
	mov edx,dword ptr [esi+0x174]
	cmp dword ptr [edx+0x208],0
	je Block362

 Block343:
	mov ecx,esi
	call CMob::IsLeft
	test eax,eax
	je Block353

 Block344:
	cmp dword ptr [esi+0x5C4],edi
	je Block353

 Block345:
	mov ecx,esi
	call CMob::AdjustHPIndicatorPosition
	mov dword ptr [esi+0x5C4],edi
	jmp Block362

 Block346:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x409C],0
	je Block349

 Block347:
	mov eax,dword ptr [esi+0x174]
	cmp dword ptr [eax+0x228],0
	jne Block349

 Block348:
	mov ecx,esi
	call CMob::ShowHPIndicator
	jmp Block350

 Block349:
	mov ecx,esi
	call CMob::HideHPIndicator

 Block350:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ecx+0x4098],0
	je Block339

 Block351:
	mov eax,dword ptr [esi+0x174]
	cmp dword ptr [eax+0x22C],0
	jne Block339

 Block352:
	push 1
	jmp Block340

 Block353:
	mov eax,dword ptr [esi+0x104]
	test eax,eax
	je Block355

 Block354:
	lea ecx,[eax-0xC]
	jmp Block356

 Block355:
	xor ecx,ecx

 Block356:
	call CVecCtrl::GetLadderOrRope
	test eax,eax
	je Block359

 Block357:
	mov edi,2
	cmp dword ptr [esi+0x5C4],edi
	je Block359

 Block358:
	mov ecx,esi
	call CMob::AdjustHPIndicatorPosition
	mov dword ptr [esi+0x5C4],edi
	jmp Block362

 Block359:
	mov ecx,esi
	call CMob::IsLeft
	test eax,eax
	jne Block362

 Block360:
	cmp dword ptr [esi+0x5C4],eax
	je Block362

 Block361:
	mov ecx,esi
	call CMob::AdjustHPIndicatorPosition
	mov dword ptr [esi+0x5C4],0

 Block362:
	push offset _D_VTMISSING
	lea ecx,[ebp-0xB8]
	call Ztl_variant_t::_ctor_1
	lea eax,[ebp-0xB8]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea ecx,[ebp-0x7C]
	push ecx
	lea edx,[ebp-0x80]
	push edx
	lea ecx,[esi+0x104]
	mov dword ptr [ebp-4],0xE
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::_GetSnapshot
	lea ecx,[ebp-0xB8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	lea eax,[ebp-0x80]
	push eax
	lea ecx,[esi+0x538]
	call SECPOINT::op_neq_tagpoint
	test eax,eax
	je Block364

 Block363:
	push 0
	ret

 Block364:
	mov ecx,dword ptr [esi+0x174]
	call CMobTemplate::_ZtlSecureGet_bAngerGauge
	test eax,eax
	je Block366

 Block365:
	mov ecx,dword ptr [esi+0x88]
	push ecx
	mov ecx,esi
	call CMob::ChangeAngerIndicator
	call CMob::AnimateAngerIndicator

 Block366:
	mov ecx,esi
	call CMob::UpdateTimeBomb
	lea esp,[ebp-0xD8]
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
// CMob::OnResolveMoveAction
__SUB_CLASS_THIS(0023CAF0, __thiscall, 47511,  CMob, long, long, long, long, const CVecCtrl*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x104]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	cmp dword ptr [eax+0x300],0
	push esi
	push edi
	je Block9

 Block4:
	cmp dword ptr [ecx+0x288],0
	je Block6

 Block5:
	mov eax,dword ptr [ecx+0x174]
	test eax,eax
	jne Block7

 Block6:
	mov eax,dword ptr [ecx+0x170]

 Block7:
	cmp dword ptr [eax+0x204],0
	je Block9

 Block8:
	mov esi,1
	jmp Block10

 Block9:
	xor esi,esi

 Block10:
	xor edi,edi
	cmp dword ptr [ecx+0x288],edi
	je Block13

 Block11:
	mov eax,dword ptr [ecx+0x174]
	test eax,eax
	je Block13

 Block12:
	mov ecx,eax
	jmp Block14

 Block13:
	mov ecx,dword ptr [ecx+0x170]

 Block14:
	mov eax,dword ptr [ecx+0x48]
	push eax
	add ecx,0x40
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,6
	ja Block40

 Block15:
	cmp EAX, 0
je Block16
cmp EAX, 1
je Block18
cmp EAX, 2
je Block40
cmp EAX, 3
je Block20
cmp EAX, 4
je Block24
cmp EAX, 5
je Block40
cmp EAX, 6
je Block27


 Block16:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block30

 Block17:
	xor ecx,ecx
	test eax,eax
	setl cl
	and ecx,1
	or ecx,4
	mov edi,ecx
	mov eax,edi
	pop edi
	pop esi
	ret 0x10

 Block18:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block30

 Block19:
	neg esi
	sbb esi,esi
	and esi,0xF
	inc esi
	xor edx,edx
	add esi,esi
	test eax,eax
	setl dl
	and edx,1
	or esi,edx
	mov edi,esi
	mov eax,edi
	pop edi
	pop esi
	ret 0x10

 Block20:
	mov eax,dword ptr [esp+0x18]
	cmp dword ptr [eax+0x1A0],edi
	mov eax,dword ptr [esp+0xC]
	je Block34

 Block21:
	test eax,eax
	je Block30

 Block22:
	neg esi
	sbb esi,esi
	and esi,0xF
	inc esi

 Block23:
	xor ecx,ecx
	add esi,esi
	test eax,eax
	setl cl
	and ecx,1
	or esi,ecx
	mov edi,esi
	mov eax,edi
	pop edi
	pop esi
	ret 0x10

 Block24:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block26

 Block25:
	neg esi
	sbb esi,esi
	and esi,0xA
	add esi,6
	jmp Block23

 Block26:
	mov edx,dword ptr [esp+0x14]
	neg esi
	sbb esi,esi
	and esi,0xA
	add esi,6
	add esi,esi
	and edx,1
	or esi,edx
	mov edi,esi
	mov eax,edi
	pop edi
	pop esi
	ret 0x10

 Block27:
	mov esi,dword ptr [esp+0x18]
	cmp dword ptr [esi+0x1A0],edi
	je Block31

 Block28:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block30

 Block29:
	xor ecx,ecx
	test eax,eax
	setl cl
	and ecx,1
	or ecx,2
	mov edi,ecx
	mov eax,edi
	pop edi
	pop esi
	ret 0x10

 Block30:
	mov edi,dword ptr [esp+0x14]
	and edi,1
	or edi,4
	mov eax,edi
	pop edi
	pop esi
	ret 0x10

 Block31:
	mov ecx,esi
	call CVecCtrl::IsOnLadder
	test eax,eax
	jne Block37

 Block32:
	mov ecx,esi
	call CVecCtrl::IsOnRope
	test eax,eax
	jne Block37

 Block33:
	mov eax,dword ptr [esp+0xC]

 Block34:
	test eax,eax
	je Block36

 Block35:
	xor edx,edx
	test eax,eax
	setl dl
	and edx,1
	or edx,6
	mov edi,edx
	mov eax,edi
	pop edi
	pop esi
	ret 0x10

 Block36:
	mov edi,dword ptr [esp+0x14]
	and edi,1
	or edi,6
	mov eax,edi
	pop edi
	pop esi
	ret 0x10

 Block37:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block39

 Block38:
	xor ecx,ecx
	test eax,eax
	setl cl
	and ecx,1
	or ecx,0x10
	mov edi,ecx
	mov eax,edi
	pop edi
	pop esi
	ret 0x10

 Block39:
	mov edi,dword ptr [esp+0x14]
	and edi,1
	or edi,0x10

 Block40:
	mov eax,edi
	pop edi
	pop esi
	ret 0x10
}
}
// CMob::ShowCatchEffect
__SUB_CLASS_THIS(0023B220, __thiscall, 47529,  CMob, void, int32_t, long) {
__asm {

 Block0:
	sub esp,8
	push esi
	push edi
	mov edi,ecx
	mov esi,dword ptr [edi+0x10C]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0xC]
	push ecx
	push esi
	mov dword ptr [esp+0x14],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [edi+0x10C]
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+8]
	push eax
	mov eax,dword ptr [esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	add edx,0xFFFFFFF1
	push edx
	push eax
	call CAnimationDisplayer::Effect_Catch
	pop edi
	pop esi
	add esp,8
	ret 8
}
}
// CMob::ATTACKEFFECT::~ATTACKEFFECT
__SUB_CLASS_THIS0(002447C0, __thiscall, 49632,  CMob::ATTACKEFFECT, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+8]
	test ecx,ecx
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+8],0

 Block2:
	pop esi
	ret
}
}
// CMob::OnEscortStopSay
_SUB_EXCEPTION_HANDLER(24C500)
__SUB_CLASS_THIS(0024C500, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24C500
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
	mov edi,dword ptr [esp+0x38]
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov ebp,eax
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esp+0x24],eax
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,edi
	mov dword ptr [esp+0x1C],eax
	call CInPacket::Decode1
	movzx eax,al
	xor ebx,ebx
	cmp eax,ebx
	je Block18

 Block1:
	mov dword ptr [esp+0x14],ebx
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x34],ebx
	call CInPacket::DecodeStr
	lea edx,[esp+0x18]
	push 0x72D
	push edx
	mov byte ptr [esp+0x38],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [esi+0x174]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,dword ptr [edx+0x30]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x40],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0x10
	mov byte ptr [esp+0x30],1
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block5

 Block4:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push ebx
	push 0xFFFFFFFF
	mov dword ptr [eax+4],ebx
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0x19
	push eax
	call CUIStatusBar::ChatLogAdd

 Block5:
	lea eax,[ebp+ebp*2]
	cdq
	and edx,3
	add eax,edx
	mov ebx,eax
	mov eax,ebp
	cdq
	and edx,3
	add eax,edx
	sar eax,2
	sar ebx,2
	mov dword ptr [esp+0x20],eax
	call get_update_time
	add eax,ebp
	mov ecx,edi
	mov dword ptr [esi+0x5BC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esi+0x3E4]
	push ecx
	lea edi,[esi+0x3DC]
	push edi
	mov dword ptr [esi+0x5C0],eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jg Block8

 Block6:
	mov ecx,dword ptr [esi+0x5C0]
	cmp ecx,0xFFFFFFFF
	je Block8

 Block7:
	mov edx,edi
	call _ZtlSecureTearHelper<long>::call
	mov ecx,esi
	mov dword ptr [esi+0x3E4],eax
	call CMob::PrepareActionLayer

 Block8:
	cmp dword ptr [esp+0x1C],0
	jne Block14

 Block9:
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x24]
	push 0
	push edx
	push eax
	mov eax,dword ptr [esi+0x104]
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block11:
	mov eax,dword ptr [esi+0x4E8]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x48],3
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block13:
	mov eax,dword ptr [esp+0x50]
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x50],4
	call _xbstr_t::_ctor_0
	lea ecx,[esi+0x14]
	mov byte ptr [esp+0x4C],1
	call CChatBalloon::MakeMobBalloon

 Block14:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x30],0
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4
}
}
// CMob::MakeNameTag
_SUB_EXCEPTION_HANDLER(246AE0)
__SUB_CLASS_THIS(00246AE0, __thiscall, 47505,  CMob, long, const char*, NakedParam<_x_com_ptr<IWzGr2DLayer>>, NakedParam<_x_com_ptr<IWzVector2D>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_246AE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xF4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x108]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x48],edi
	xor ebp,ebp
	mov dword ptr [esp+0x110],ebp
	mov dword ptr [esp+0x64],ebp
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x50]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x35]
	push ecx
	add eax,0x33
	push eax
	mov byte ptr [esp+0x118],3
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov bl,al
	mov eax,dword ptr [esp+0x5C]
	add esp,8
	mov byte ptr [esp+0x110],2
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
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov edi,dword ptr [esp+0x48]

 Block5:
	mov eax,dword ptr [edi+0x174]
	mov ecx,dword ptr [eax+0x78]
	push ecx
	add eax,0x70
	push eax
	movzx esi,bl
	call _ZtlSecureFuseHelper<long>::call
	lea edx,[esi+0x14]
	add esp,8
	cmp edx,eax
	jg Block7

 Block6:
	mov al,2
	jmp Block8

 Block7:
	mov eax,dword ptr [edi+0x174]
	mov ecx,dword ptr [eax+0x78]
	push ecx
	add eax,0x70
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esi,0xFFFFFFEC
	add esp,8
	cmp esi,eax
	setge al

 Block8:
	movzx eax,al
	xor esi,esi
	mov dword ptr [esp+0x60],eax
	sub eax,esi
	je Block17

 Block9:
	sub eax,1
	je Block14

 Block10:
	sub eax,1
	jne Block22

 Block11:
	lea edx,[esp+0x44]
	push 0x4A
	push edx
	call get_basic_font
	mov eax,dword ptr [eax]
	add esp,8
	cmp eax,esi
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebp,eax
	push eax
	mov dword ptr [esp+0x68],ebp
	call edx

 Block13:
	mov eax,dword ptr [esp+0x44]
	jmp Block20

 Block14:
	lea eax,[esp+0x14]
	push 3
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	add esp,8
	cmp eax,esi
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebp,eax
	push eax
	mov dword ptr [esp+0x68],ebp
	call edx

 Block16:
	mov eax,dword ptr [esp+0x14]
	jmp Block20

 Block17:
	lea eax,[esp+0x18]
	push esi
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	add esp,8
	cmp eax,esi
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebp,eax
	push eax
	mov dword ptr [esp+0x68],ebp
	call edx

 Block19:
	mov eax,dword ptr [esp+0x18]

 Block20:
	cmp eax,esi
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	lea eax,[esp+0x98]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x98]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	mov eax,dword ptr [esp+0x118]
	lea edx,[esp+0x98]
	push edx
	push ecx
	mov dword ptr [esp+0x58],esp
	mov ecx,esp
	mov bl,4
	push eax
	mov byte ptr [esp+0x11C],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x118],5
	cmp ebp,esi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov ecx,ebp
	mov byte ptr [esp+0x118],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x98],8
	mov dword ptr [esp+0x50],eax
	mov byte ptr [esp+0x110],2
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0xA0]
	xor ecx,ecx
	mov word ptr [esp+0x98],cx
	cmp eax,esi
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x98]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x14]
	lea ecx,[esp+0x44]
	push ecx
	push ebp
	mov dword ptr [esp+0x4C],esi
	call edx
	cmp eax,esi
	jge Block32

 Block31:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push ebp
	push eax
	call _com_issue_errorex

 Block32:
	mov dword ptr [esp+0x2C],esi
	lea eax,[esp+0x14]
	push 0x3D0
	push eax
	mov byte ptr [esp+0x118],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	lea ecx,[esp+0x30]
	push ecx
	push eax
	mov byte ptr [esp+0x11C],7
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x110],6
	cmp eax,esi
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	xor ebp,ebp
	mov dword ptr [esp+0x4C],ebp
	mov dword ptr [esp+0x40],esi
	mov ecx,dword ptr [edi+0x174]
	mov byte ptr [esp+0x110],8
	call CMobTemplate::IsLevelVisible
	test eax,eax
	je Block165

 Block35:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xC8]
	push edx
	call ebp
	lea eax,[esp+0xC8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	lea ecx,[esp+0x98]
	push ecx
	mov byte ptr [esp+0x114],9
	call ebp
	lea edx,[esp+0x98]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	push esi
	push esi
	lea eax,[esp+0xD0]
	push eax
	lea ecx,[esp+0xA4]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1255
	mov bl,0xA
	push edx
	mov byte ptr [esp+0x12C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x124],0xB
	cmp dword ptr [_D_G_RM],esi
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea eax,[esp+0x10C]
	mov byte ptr [esp+0x124],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x118],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0x70],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block44

 Block42:
	cmp eax,0x80004002
	je Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	mov edi,8
	mov byte ptr [esp+0x110],0xE
	cmp word ptr [esp+0xF8],di
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x100]
	xor ecx,ecx
	mov word ptr [esp+0xF8],cx
	cmp eax,esi
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0xF8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov byte ptr [esp+0x110],0xF
	cmp word ptr [esp+0x98],di
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x98],ax
	mov eax,dword ptr [esp+0xA0]
	cmp eax,esi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x98]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov byte ptr [esp+0x110],0x10
	cmp word ptr [esp+0xC8],di
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0xD0]
	xor edx,edx
	mov word ptr [esp+0xC8],dx
	cmp eax,esi
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea eax,[esp+0xC8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov dword ptr [esp+0x68],esi
	lea ecx,[esp+0x14]
	push 0x1254
	push ecx
	mov byte ptr [esp+0x118],0x11
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,dword ptr [esp+0x60]
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x70]
	push edx
	mov byte ptr [esp+0x11C],0x12
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x110],0x11
	cmp eax,esi
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	lea eax,[esp+0x78]
	push eax
	call ebp
	lea ecx,[esp+0x78]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	lea edx,[esp+0xD8]
	push edx
	mov byte ptr [esp+0x114],0x13
	call ebp
	lea eax,[esp+0xD8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	mov eax,dword ptr [esp+0x68]
	push esi
	push esi
	lea ecx,[esp+0x80]
	push ecx
	lea edx,[esp+0xE4]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x14
	push eax
	mov byte ptr [esp+0x128],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x124],0x15
	cmp dword ptr [_D_G_RM],esi
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	lea ecx,[esp+0xFC]
	push ecx
	mov byte ptr [esp+0x128],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x118],0x16
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x64]
	mov dword ptr [esp+0x64],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block67

 Block65:
	cmp eax,0x80004002
	je Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	mov ebx,8
	mov byte ptr [esp+0x110],0x18
	cmp word ptr [esp+0xE8],bx
	jne Block70

 Block68:
	mov eax,dword ptr [esp+0xF0]
	xor edx,edx
	mov word ptr [esp+0xE8],dx
	cmp eax,esi
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea eax,[esp+0xE8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov byte ptr [esp+0x110],0x19
	cmp word ptr [esp+0xD8],bx
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0xE0]
	xor ecx,ecx
	mov word ptr [esp+0xD8],cx
	cmp eax,esi
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[esp+0xD8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov byte ptr [esp+0x110],0x1A
	cmp word ptr [esp+0x78],bx
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	cmp eax,esi
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x78]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov dword ptr [esp+0x74],esi
	lea edx,[esp+0x14]
	push 0x1253
	push edx
	mov byte ptr [esp+0x118],0x1B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[esp+0x7C]
	push eax
	mov byte ptr [esp+0x11C],0x1C
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x110],0x1B
	cmp eax,esi
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block81:
	lea ecx,[esp+0x88]
	push ecx
	call ebp
	lea edx,[esp+0x88]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	lea eax,[esp+0xA8]
	push eax
	mov byte ptr [esp+0x114],0x1D
	call ebp
	lea ecx,[esp+0xA8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	push esi
	push esi
	lea edx,[esp+0x90]
	push edx
	mov edx,dword ptr [esp+0x80]
	lea eax,[esp+0xB4]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x1E
	push edx
	mov byte ptr [esp+0x128],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x124],0x1F
	cmp dword ptr [_D_G_RM],esi
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	lea eax,[esp+0xCC]
	mov byte ptr [esp+0x124],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x118],0x20
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block90

 Block88:
	cmp eax,0x80004002
	je Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	mov edi,8
	mov byte ptr [esp+0x110],0x22
	cmp word ptr [esp+0xB8],di
	jne Block93

 Block91:
	mov eax,dword ptr [esp+0xC0]
	xor ecx,ecx
	mov word ptr [esp+0xB8],cx
	cmp eax,esi
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea edx,[esp+0xB8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	mov byte ptr [esp+0x110],0x23
	cmp word ptr [esp+0xA8],di
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [esp+0xA8],ax
	mov eax,dword ptr [esp+0xB0]
	cmp eax,esi
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[esp+0xA8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov byte ptr [esp+0x110],0x24
	cmp word ptr [esp+0x88],di
	jne Block101

 Block99:
	mov eax,dword ptr [esp+0x90]
	xor edx,edx
	mov word ptr [esp+0x88],dx
	cmp eax,esi
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea eax,[esp+0x88]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block102:
	xor ebp,ebp
	mov dword ptr [esp+0x70],ebp
	lea ecx,[esp+0x18]
	push 0x1A15
	push ecx
	mov byte ptr [esp+0x118],0x25
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,eax
	mov edx,dword ptr [esp+0x48]
	mov eax,dword ptr [edx+0x174]
	mov ecx,dword ptr [eax+0x78]
	push ecx
	add eax,0x70
	push eax
	mov byte ptr [esp+0x118],0x26
	call _ZtlSecureFuseHelper<long>::call
	mov esi,dword ptr [esi]
	add esp,8
	mov edi,eax
	cmp esi,ebp
	je Block106

 Block103:
	cmp dword ptr [esi+4],ebp
	jne Block105

 Block104:
	mov edx,dword ptr [esi]
	push edx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block105:
	mov esi,dword ptr [esi+4]
	jmp Block107

 Block106:
	xor esi,esi

 Block107:
	push edi
	lea eax,[esp+0x74]
	push esi
	push eax
	call ZXString<char>::Format
	mov ecx,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x110],0x25
	cmp ecx,ebp
	je Block109

 Block108:
	call _xbstr_t::Data_t::Release

 Block109:
	lea ecx,[esp+0x18]
	push 0x3D0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea edx,[esp+0x44]
	push edx
	push eax
	mov byte ptr [esp+0x11C],0x27
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x110],0x25
	cmp eax,ebp
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block111:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	lea edx,[esp+0x30]
	mov bl,0x28
	push edx
	mov byte ptr [esp+0x114],bl
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block115

 Block114:
	push eax
	call _com_issue_error

 Block115:
	mov edi,dword ptr [esp+0x60]
	mov byte ptr [esp+0x110],0x29
	cmp edi,ebp
	jne Block117

 Block116:
	push 0x80004003
	call _com_issue_error

 Block117:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x4C]
	push edx
	push edi
	mov dword ptr [esp+0x54],ebp
	call eax
	cmp eax,ebp
	jge Block119

 Block118:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block119:
	mov ebp,dword ptr [esp+0x6C]
	mov esi,dword ptr [esp+0x4C]
	test ebp,ebp
	jne Block121

 Block120:
	push 0x80004003
	call _com_issue_error

 Block121:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push ebp
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block123

 Block122:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block123:
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block125

 Block124:
	mov eax,dword ptr [eax-4]
	jmp Block126

 Block125:
	xor eax,eax

 Block126:
	mov ecx,dword ptr [esp+0x40]
	test ecx,ecx
	jne Block128

 Block127:
	push 0x80004003
	call _com_issue_error

 Block128:
	lea edx,[esp+0x1C]
	push edx
	lea edx,[esp+0x34]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[edx+eax*8]
	push 0xC
	add eax,esi
	push eax
	call IWzCanvas::Create
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x110],bl
	jne Block131

 Block129:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block132:
	mov esi,8
	mov byte ptr [esp+0x110],0x25
	cmp word ptr [esp+0x1C],si
	jne Block135

 Block133:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block136:
	mov edx,3
	mov ebx,0xFF
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],ebx
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0x110],0x2A
	test ecx,ecx
	jne Block138

 Block137:
	push 0x80004003
	call _com_issue_error

 Block138:
	lea eax,[esp+0x1C]
	push eax
	push edi
	push 0
	push 0
	call IWzCanvas::Copy
	mov byte ptr [esp+0x110],0x25
	cmp word ptr [esp+0x1C],si
	jne Block141

 Block139:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block142:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block144

 Block143:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block144:
	mov edi,dword ptr [esp+0x14]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block146

 Block145:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block146:
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [edx+0x174]
	mov ecx,dword ptr [eax+0x78]
	push ecx
	add eax,0x70
	push eax
	mov byte ptr [esp+0x120],0x2B
	call _ZtlSecureFuseHelper<long>::call
	mov esi,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x50]
	add esp,8
	push eax
	push 0
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block148

 Block147:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block148:
	mov byte ptr [esp+0x128],0x25
	call draw_number_by_image
	add esi,eax
	mov eax,3
	add esp,0x18
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],ebx
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0x110],0x2C
	test ecx,ecx
	jne Block150

 Block149:
	push 0x80004003
	call _com_issue_error

 Block150:
	lea edx,[esp+0x1C]
	push edx
	push ebp
	push 0
	push esi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x110],0x25
	jne Block153

 Block151:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block154:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x18]
	push eax
	push ebp
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block156

 Block155:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block156:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x70]
	lea ebp,[esi+edx+1]
	mov dword ptr [esp+0x4C],ebp
	mov byte ptr [esp+0x110],0x24
	test eax,eax
	je Block158

 Block157:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block158:
	mov byte ptr [esp+0x110],0x1B
	test edi,edi
	je Block160

 Block159:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block160:
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x110],0x1A
	test eax,eax
	je Block162

 Block161:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block162:
	mov eax,dword ptr [esp+0x60]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x114],0x11
	call eax
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x110],0x10
	test eax,eax
	je Block164

 Block163:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block164:
	mov eax,dword ptr [esp+0x6C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x114],8
	call edx

 Block165:
	mov eax,dword ptr [esp+0x50]
	mov esi,dword ptr [esp+0x44]
	lea ecx,[esp+0x30]
	lea edi,[eax+ebp+5]
	add esi,4
	push ecx
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x54],esi
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block167

 Block166:
	push eax
	call _com_issue_error

 Block167:
	lea eax,[esp+0x1C]
	mov bl,0x2D
	push eax
	mov byte ptr [esp+0x114],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block169

 Block168:
	push eax
	call _com_issue_error

 Block169:
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x110],0x2E
	test ecx,ecx
	jne Block171

 Block170:
	push 0x80004003
	call _com_issue_error

 Block171:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x20]
	push eax
	push esi
	push edi
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x110],bl
	cmp word ptr [esp+0x1C],si
	jne Block174

 Block172:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	mov byte ptr [esp+0x110],8
	cmp word ptr [esp+0x30],si
	jne Block178

 Block176:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block179:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	jne Block181

 Block180:
	push 0x80004003
	call _com_issue_error

 Block181:
	mov ebx,dword ptr [esp+0x50]
	mov edx,dword ptr [eax]
	push 0xA0000000
	push ebx
	push edi
	push 0
	push ebp
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x8C]
	call eax
	test eax,eax
	jge Block183

 Block182:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block183:
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block190

 Block184:
	mov ecx,3
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],0xFF
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x110],0x2F
	test ecx,ecx
	jne Block186

 Block185:
	push 0x80004003
	call _com_issue_error

 Block186:
	lea edx,[esp+0x1C]
	push edx
	push eax
	push 2
	push 0
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x110],8
	jne Block189

 Block187:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block190

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block190

 Block189:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block190:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	jne Block192

 Block191:
	push 0x80004003
	call _com_issue_error

 Block192:
	mov edx,dword ptr [eax]
	push 0xFFFFFF
	push 1
	push 1
	push 0
	push ebp
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x8C]
	call eax
	test eax,eax
	jge Block194

 Block193:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block194:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	jne Block196

 Block195:
	push 0x80004003
	call _com_issue_error

 Block196:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 1
	push 1
	lea edi,[ebx-1]
	push edi
	push ebp
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block198

 Block197:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block198:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	jne Block200

 Block199:
	push 0x80004003
	call _com_issue_error

 Block200:
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 1
	push 1
	push 0
	dec esi
	push esi
	push eax
	mov ebp,eax
	call edx
	test eax,eax
	jge Block202

 Block201:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block202:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	jne Block204

 Block203:
	push 0x80004003
	call _com_issue_error

 Block204:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 1
	push 1
	push edi
	push esi
	push eax
	mov ebp,eax
	call edx
	test eax,eax
	jge Block206

 Block205:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block206:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call esi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block208

 Block207:
	push eax
	call _com_issue_error

 Block208:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x114],0x30
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block210

 Block209:
	push eax
	call _com_issue_error

 Block210:
	mov eax,dword ptr [esp+0x64]
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x20]
	push edx
	mov edx,dword ptr [esp+0x120]
	push eax
	push ecx
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	mov bl,0x31
	push edx
	mov byte ptr [esp+0x124],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x3C]
	xor ebp,ebp
	mov byte ptr [esp+0x120],0x32
	cmp ecx,ebp
	jne Block212

 Block211:
	push 0x80004003
	call _com_issue_error

 Block212:
	mov eax,dword ptr [esp+0x5C]
	push 2
	add eax,2
	push eax
	mov byte ptr [esp+0x128],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x110],0x30
	cmp word ptr [esp+0x1C],si
	jne Block215

 Block213:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block216

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block216

 Block215:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block216:
	mov byte ptr [esp+0x110],8
	cmp word ptr [esp+0x30],si
	jne Block219

 Block217:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block220

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block220

 Block219:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block220:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push edx
	call edi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block222

 Block221:
	push eax
	call _com_issue_error

 Block222:
	mov ecx,3
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x110],0x34
	cmp ecx,ebp
	jne Block224

 Block223:
	push 0x80004003
	call _com_issue_error

 Block224:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x20]
	push eax
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x6C]
	push edx
	call IWzGr2D::CreateLayer
	mov ebx,dword ptr [esp+0x48]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x7C]
	cmp esi,eax
	je Block229

 Block225:
	mov dword ptr [ebx+0x7C],eax
	cmp eax,ebp
	je Block227

 Block226:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block227:
	cmp esi,ebp
	je Block229

 Block228:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block229:
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block231

 Block230:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block231:
	mov esi,8
	mov byte ptr [esp+0x110],0x33
	cmp word ptr [esp+0x1C],si
	jne Block234

 Block232:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block235

 Block233:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block235

 Block234:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block235:
	mov byte ptr [esp+0x110],8
	cmp word ptr [esp+0x30],si
	jne Block238

 Block236:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block239

 Block237:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block239

 Block238:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block239:
	mov eax,dword ptr [esp+0x11C]
	mov edx,0xD
	mov word ptr [esp+0x50],dx
	mov dword ptr [esp+0x58],eax
	cmp eax,ebp
	je Block241

 Block240:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block241:
	mov esi,dword ptr [ebx+0x7C]
	mov byte ptr [esp+0x110],0x35
	cmp esi,ebp
	jne Block243

 Block242:
	push 0x80004003
	call _com_issue_error

 Block243:
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
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebp
	jge Block245

 Block244:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block245:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x110],8
	jne Block248

 Block246:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,ebp
	je Block249

 Block247:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block249

 Block248:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block249:
	mov esi,dword ptr [ebx+0x7C]
	cmp esi,ebp
	jne Block251

 Block250:
	push 0x80004003
	call _com_issue_error

 Block251:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 5
	push esi
	call ecx
	cmp eax,ebp
	jge Block253

 Block252:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block253:
	mov eax,dword ptr [esp+0x120]
	mov edx,0xD
	mov word ptr [esp+0x50],dx
	mov dword ptr [esp+0x58],eax
	cmp eax,ebp
	je Block255

 Block254:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block255:
	mov esi,dword ptr [ebx+0x7C]
	mov byte ptr [esp+0x110],0x36
	cmp esi,ebp
	jne Block257

 Block256:
	push 0x80004003
	call _com_issue_error

 Block257:
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
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebp
	jge Block259

 Block258:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block259:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x110],8
	jne Block262

 Block260:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,ebp
	je Block263

 Block261:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block263

 Block262:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block263:
	mov esi,dword ptr [ebx+0x7C]
	cmp esi,ebp
	jne Block265

 Block264:
	push 0x80004003
	call _com_issue_error

 Block265:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block267

 Block266:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block267:
	lea edx,[esp+0x78]
	push edx
	call edi
	lea eax,[esp+0x78]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block269

 Block268:
	push eax
	call _com_issue_error

 Block269:
	lea ecx,[esp+0xA8]
	push ecx
	mov byte ptr [esp+0x114],0x37
	call edi
	lea edx,[esp+0xA8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block271

 Block270:
	push eax
	call _com_issue_error

 Block271:
	lea eax,[esp+0x88]
	push eax
	mov byte ptr [esp+0x114],0x38
	call edi
	lea ecx,[esp+0x88]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block273

 Block272:
	push eax
	call _com_issue_error

 Block273:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x114],0x39
	call edi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block275

 Block274:
	push eax
	call _com_issue_error

 Block275:
	lea ecx,[esp+0x1C]
	mov bl,0x3A
	push ecx
	mov byte ptr [esp+0x114],bl
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block277

 Block276:
	push eax
	call _com_issue_error

 Block277:
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [eax+0x7C]
	mov byte ptr [esp+0x110],0x3B
	cmp ecx,ebp
	jne Block279

 Block278:
	push 0x80004003
	call _com_issue_error

 Block279:
	lea edx,[esp+0x78]
	push edx
	lea eax,[esp+0xAC]
	push eax
	lea edx,[esp+0x90]
	push edx
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esp+0x3C]
	lea edx,[esp+0x2C]
	push edx
	push eax
	lea edx,[esp+0xD0]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0xB8],8
	jne Block286

 Block280:
	xor eax,eax
	mov word ptr [esp+0xB8],ax
	mov eax,dword ptr [esp+0xC0]
	cmp eax,ebp
	je Block282

 Block281:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block282:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block283:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x110],bl
	jne Block287

 Block284:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebp
	je Block288

 Block285:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block288

 Block286:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0xB8]
	push ecx
	call esi
	jmp Block283

 Block287:
	lea eax,[esp+0x1C]
	push eax
	call esi

 Block288:
	mov ebx,8
	mov byte ptr [esp+0x110],0x39
	cmp word ptr [esp+0x30],bx
	jne Block291

 Block289:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block292

 Block290:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block292

 Block291:
	lea edx,[esp+0x30]
	push edx
	call esi

 Block292:
	mov byte ptr [esp+0x110],0x38
	cmp word ptr [esp+0x88],bx
	jne Block295

 Block293:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	cmp eax,ebp
	je Block296

 Block294:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block296

 Block295:
	lea ecx,[esp+0x88]
	push ecx
	call esi

 Block296:
	mov byte ptr [esp+0x110],0x37
	cmp word ptr [esp+0xA8],bx
	jne Block299

 Block297:
	mov eax,dword ptr [esp+0xB0]
	xor edx,edx
	mov word ptr [esp+0xA8],dx
	cmp eax,ebp
	je Block300

 Block298:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block300

 Block299:
	lea eax,[esp+0xA8]
	push eax
	call esi

 Block300:
	mov byte ptr [esp+0x110],bl
	cmp word ptr [esp+0x78],bx
	jne Block303

 Block301:
	mov eax,dword ptr [esp+0x80]
	xor ecx,ecx
	mov word ptr [esp+0x78],cx
	cmp eax,ebp
	je Block304

 Block302:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block304

 Block303:
	lea edx,[esp+0x78]
	push edx
	call esi

 Block304:
	lea eax,[esp+0x30]
	push eax
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block306

 Block305:
	push eax
	call _com_issue_error

 Block306:
	lea edx,[esp+0x1C]
	mov bl,0x3C
	push edx
	mov byte ptr [esp+0x114],bl
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block308

 Block307:
	push eax
	call _com_issue_error

 Block308:
	mov ecx,dword ptr [esp+0x48]
	mov ecx,dword ptr [ecx+0x7C]
	mov byte ptr [esp+0x110],0x3D
	cmp ecx,ebp
	jne Block310

 Block309:
	push 0x80004003
	call _com_issue_error

 Block310:
	lea edx,[esp+0x30]
	push edx
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x54]
	add eax,edx
	cdq
	sub eax,edx
	sar eax,1
	push 2
	neg eax
	push eax
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x110],bl
	cmp word ptr [esp+0x1C],di
	jne Block313

 Block311:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea edx,[esp+0x1C]
	push edx
	call esi

 Block314:
	mov byte ptr [esp+0x110],8
	cmp word ptr [esp+0x30],di
	jne Block317

 Block315:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block318

 Block316:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block318

 Block317:
	lea ecx,[esp+0x30]
	push ecx
	call esi

 Block318:
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	jne Block320

 Block319:
	push 0x80004003
	call _com_issue_error

 Block320:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x48]
	lea ecx,[esp+0x44]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [esp+0x4C],ebp
	call edx
	cmp eax,ebp
	jge Block322

 Block321:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block322:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x110],6
	cmp eax,ebp
	je Block324

 Block323:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block324:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x110],2
	cmp eax,ebp
	je Block326

 Block325:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block326:
	mov eax,dword ptr [esp+0x64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x114],1
	call edx
	mov eax,dword ptr [esp+0x11C]
	mov byte ptr [esp+0x110],0
	cmp eax,ebp
	je Block328

 Block327:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block328:
	mov eax,dword ptr [esp+0x120]
	mov dword ptr [esp+0x110],0xFFFFFFFF
	cmp eax,ebp
	je Block330

 Block329:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block330:
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [esp+0x108]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x100
	ret 0xC
}
}
// CMob::_ZtlSecureGet_m_nMP
__SUB_CLASS0(0023A740, __fastcall, 47541,  CMob, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x184]
	push eax
	add ecx,0x17C
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::SendEscortStopEndRequest
_SUB_EXCEPTION_HANDLER(241290)
__SUB_CLASS_THIS0(00241290, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_241290
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
	call CMob::IsActive
	test eax,eax
	je Block2

 Block1:
	push 0xEE
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi+0x170]
	push eax
	add esi,0x168
	push esi
	mov dword ptr [esp+0x28],0
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CMob::IsLeft
__SUB_CLASS_THIS0(0023C610, __thiscall, 47475,  CMob, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x174]
	cmp dword ptr [eax+0x1A0],0
	je Block2

 Block1:
	mov eax,1
	ret

 Block2:
	mov edx,dword ptr [ecx+0x3D8]
	push edx
	add ecx,0x3D0
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	and eax,1
	ret
}
}
// CMob::RawAction2MoveAction
// 63AB00
static uint8_t _SUB_23AA70_LOOKUP_TABLE_0[40] = {
0, 1, 2, 3, 4, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
6, 6, 6, 6, 6, 6, 6, 5, 
};
__SUB_CLASS_THIS(0023AA70, __thiscall, 47556,  CMob, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x27
	ja Block8

 Block1:
	movzx eax,byte ptr [eax+_SUB_23AA70_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5
cmp EAX, 4
je Block7
cmp EAX, 5
je Block6
cmp EAX, 6
je Block8


 Block2:
	mov eax,1
	ret 4

 Block3:
	mov eax,2
	ret 4

 Block4:
	mov eax,3
	ret 4

 Block5:
	mov eax,6
	ret 4

 Block6:
	mov eax,0x10
	ret 4

 Block7:
	mov eax,8
	ret 4

 Block8:
	mov eax,dword ptr [ecx+0x174]
	mov ecx,dword ptr [eax+0x48]
	push ecx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	xor edx,edx
	add esp,8
	cmp eax,4
	sete dl
	lea edx,[edx*4+2]
	mov eax,edx
	ret 4
}
}
// CMob::IsNotEnemyMob
__SUB_CLASS_THIS0(00239FB0, __thiscall, 47473,  CMob, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x174]
	cmp dword ptr [eax+0x208],0
	jne Block4

 Block1:
	cmp dword ptr [eax+0x234],1
	je Block4

 Block2:
	cmp dword ptr [ecx+0x310],0
	jne Block4

 Block3:
	xor eax,eax
	ret

 Block4:
	mov eax,1
	ret
}
}
// CMob::OnSpecialEffectBySkill
_SUB_EXCEPTION_HANDLER(2540B0)
__SUB_CLASS_THIS(002540B0, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2540B0
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
	mov esi,dword ptr [esp+0x3C]
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	mov ebp,eax
	push ebp
	call CSkillInfo::GetSkill
	mov ecx,esi
	mov ebx,eax
	call CInPacket::Decode4
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	mov ecx,esi
	mov dword ptr [esp+0x1C],eax
	call CInPacket::Decode2
	movzx esi,ax
	push 0
	lea eax,[esp+0x40]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x1C],esi
	call SKILLENTRY::GetSpecialUOL
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0
	test ebx,ebx
	je Block19

 Block1:
	cmp dword ptr [ebx],0
	je Block7

 Block2:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block7

 Block3:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block7

 Block4:
	cmp ebp,0x2F7471
	je Block8

 Block5:
	cmp ebp,0x30FB11
	je Block8

 Block6:
	lea ecx,[edi+0x4C0]
	call ZList<CMob::HITEFFECT>::AddTail_
	mov esi,eax
	call get_update_time
	add eax,dword ptr [esp+0x14]
	mov ecx,edi
	mov dword ptr [esi],eax
	mov dword ptr [esi+4],ebp
	call CMob::IsLeft
	lea ecx,[esp+0x3C]
	push ecx
	lea ecx,[esi+0x10]
	mov dword ptr [esi+8],eax
	mov dword ptr [esi+0xC],0
	call Ztl_bstr_t::op_assign
	mov edx,dword ptr [edi+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[edi+4]
	lea eax,[esp+0x24]
	push eax
	call edx
	mov ecx,dword ptr [eax]
	mov dword ptr [esi+0x14],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+0x18],edx

 Block7:
	mov ecx,ebx
	jmp Block18

 Block8:
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block11

 Block9:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov byte ptr [esp+0x4C],1
	call CUser::GetVecCtrl_0
	lea ecx,[esp+0x30]
	push 0x190F
	push ecx
	mov byte ptr [esp+0x50],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x48],3
	push 0
	mov byte ptr [esp+0x4C],4
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x34],0
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	push offset _S_0__2
	lea ecx,[esp+0x18]
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x14]
	push edx
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x38],5
	call _xbstr_t::operator+=
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block13

 Block12:
	call _xbstr_t::Data_t::Release

 Block13:
	push esi
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x10]
	lea esi,[edi+4]
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x44],6
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	push eax
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x4C]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],0
	test esi,esi
	je Block15

 Block14:
	mov eax,dword ptr [esi]
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	push 0
	mov byte ptr [esp+0x50],0
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_ApplyStartDelay
	test esi,esi
	je Block19

 Block17:
	mov ecx,esi

 Block18:
	call _xbstr_t::Data_t::Release

 Block19:
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
// CMob::LoadLayer
_SUB_EXCEPTION_HANDLER(244900)
__SUB_CLASS_THIS(00244900, __thiscall, 47525,  CMob, _x_com_ptr<IWzGr2DLayer>*, _x_com_ptr<IWzGr2DLayer>*, NakedParam<Ztl_bstr_t>, int32_t, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_244900
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x158
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x16C]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	mov ecx,dword ptr [esp+0x180]
	mov dword ptr [esp+0x174],esi
	cmp ecx,esi
	je Block4

 Block1:
	cmp dword ptr [ecx],esi
	je Block4

 Block2:
	mov eax,dword ptr [ecx]
	cmp eax,esi
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,esi
	jne Block5

 Block4:
	mov ebx,dword ptr [esp+0x17C]
	mov dword ptr [ebx],esi
	jmp Block128

 Block5:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x6C]
	push eax
	call ebp
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea edx,[esp+0x5C]
	push edx
	mov byte ptr [esp+0x178],1
	call ebp
	lea eax,[esp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	push esi
	push esi
	lea ecx,[esp+0x74]
	push ecx
	lea edx,[esp+0x68]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x194]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x194]
	mov dword ptr [esp+0x34],esp
	cmp eax,esi
	je Block11

 Block10:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov byte ptr [esp+0x188],3
	cmp dword ptr [_D_G_RM],esi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[esp+0xB0]
	mov byte ptr [esp+0x188],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x17C],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0x174],6
	cmp word ptr [esp+0x9C],bp
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x9C],ax
	mov eax,dword ptr [esp+0xA4]
	cmp eax,esi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x9C]
	push ecx
	call edi

 Block20:
	mov byte ptr [esp+0x174],7
	cmp word ptr [esp+0x5C],bp
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	cmp eax,esi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x5C]
	push eax
	call edi

 Block24:
	mov byte ptr [esp+0x174],8
	cmp word ptr [esp+0x6C],bp
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	cmp eax,esi
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x6C]
	push edx
	call edi

 Block28:
	mov ebp,dword ptr [esp+0x28]
	cmp ebp,esi
	sete al
	test al,al
	jne Block125

 Block29:
	cmp ebp,esi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x1C]
	push ecx
	push ebp
	mov dword ptr [esp+0x24],esi
	call edx
	cmp eax,esi
	jge Block33

 Block32:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebp
	push eax
	call _com_issue_errorex

 Block33:
	cmp dword ptr [esp+0x1C],esi
	je Block125

 Block34:
	mov dword ptr [esp+0x18],esi
	push 1
	lea eax,[esp+0x30]
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x17C],9
	xor edi,edi
	call CMob::GetBodyRect
	mov ebx,dword ptr [esp+0x194]
	cmp ebx,0xFFFFFFFF
	jne Block36

 Block35:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xAB1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x54]
	mov byte ptr [esp+0x17C],0xA
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x180],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x17C],0xB
	call get_int32
	add esp,8
	lea ecx,[esp+0x4C]
	mov ebx,eax
	mov byte ptr [esp+0x174],9
	call Ztl_variant_t::~Ztl_variant_t

 Block36:
	lea eax,[ebx-1]
	cmp eax,4
	ja Block51

 Block37:
	cmp EAX, 0
je Block38
cmp EAX, 1
je Block39
cmp EAX, 2
je Block40
cmp EAX, 3
je Block45
cmp EAX, 4
je Block46


 Block38:
	mov eax,dword ptr [esp+0x14]
	add eax,0x104
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	jmp Block68

 Block39:
	mov ecx,dword ptr [esp+0x14]
	add ecx,0x10C
	push ecx
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	jmp Block68

 Block40:
	lea edx,[esp+0x2C]
	push edx
	call IsRectEmpty
	test eax,eax
	je Block44

 Block41:
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [esp+0x17C]
	mov dword ptr [esi],0
	mov byte ptr [esp+0x174],8
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0x178],0
	call ecx
	lea ecx,[esp+0x180]
	call Ztl_bstr_t::~Ztl_bstr_t
	mov eax,esi
	jmp Block131

 Block44:
	mov ebx,dword ptr [esp+0x14]
	mov edx,dword ptr [ebx+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[ebx+4]
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	call edx
	mov edx,dword ptr [esp+0x2C]
	mov ecx,eax
	mov eax,dword ptr [esp+0x34]
	add eax,edx
	cdq
	sub eax,edx
	mov esi,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	sar esi,1
	sub esi,dword ptr [ecx]
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,edi
	call edx
	mov edx,dword ptr [esp+0x38]
	mov ecx,eax
	mov eax,dword ptr [esp+0x30]
	add eax,edx
	cdq
	sub eax,edx
	mov edi,eax
	sar edi,1
	sub edi,dword ptr [ecx+4]
	add ebx,0x104
	push ebx
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	jmp Block68

 Block45:
	mov ecx,dword ptr [esp+0x14]
	add ecx,0x104
	push ecx
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	mov esi,dword ptr [esp+0x188]
	mov edi,dword ptr [esp+0x18C]
	jmp Block68

 Block46:
	lea edx,[esp+0x2C]
	push edx
	call IsRectEmpty
	test eax,eax
	je Block50

 Block47:
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [esp+0x17C]
	mov dword ptr [esi],0
	mov byte ptr [esp+0x174],8
	test eax,eax
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0x178],0
	call ecx
	lea ecx,[esp+0x180]
	call Ztl_bstr_t::~Ztl_bstr_t
	mov eax,esi
	jmp Block131

 Block50:
	mov ebx,dword ptr [esp+0x14]
	mov edx,dword ptr [ebx+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[ebx+4]
	lea eax,[esp+0xC4]
	push eax
	mov ecx,edi
	call edx
	mov edx,dword ptr [esp+0x34]
	mov ecx,eax
	mov eax,dword ptr [esp+0x2C]
	add eax,edx
	cdq
	sub eax,edx
	mov esi,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	sar esi,1
	sub esi,dword ptr [ecx]
	lea ecx,[esp+0xAC]
	push ecx
	mov ecx,edi
	call edx
	mov edi,dword ptr [esp+0x38]
	sub edi,dword ptr [eax+4]
	add ebx,0x104
	push ebx
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	jmp Block68

 Block51:
	lea eax,[esp+0x1C]
	push 0x3D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov byte ptr [esp+0x180],0xC
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x174],9
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block53:
	lea edx,[esp+0x2C]
	push edx
	call IsRectEmpty
	test eax,eax
	je Block57

 Block54:
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [esp+0x17C]
	mov dword ptr [esi],0
	mov byte ptr [esp+0x174],8
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0x178],0
	call ecx
	lea ecx,[esp+0x180]
	call Ztl_bstr_t::~Ztl_bstr_t
	mov eax,esi
	jmp Block131

 Block57:
	mov esi,dword ptr [esp+0x14]
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	mov edi,dword ptr [esp+0x2C]
	add esi,4
	lea eax,[esp+0xBC]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	add eax,dword ptr [esp+0x188]
	cmp edi,eax
	jl Block59

 Block58:
	mov eax,edi

 Block59:
	mov ecx,dword ptr [esp+0x34]
	cmp eax,ecx
	mov ebx,eax
	jl Block61

 Block60:
	mov ebx,ecx

 Block61:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	mov edi,dword ptr [esp+0x30]
	lea ecx,[esp+0xB4]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	add eax,dword ptr [esp+0x18C]
	cmp edi,eax
	jl Block63

 Block62:
	mov eax,edi

 Block63:
	mov esi,dword ptr [esp+0x38]
	cmp eax,esi
	jge Block65

 Block64:
	mov esi,eax

 Block65:
	push offset _D_VTMISSING
	lea ecx,[esp+0x90]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0x178],0xD
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x174],0xE
	test ecx,ecx
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	lea eax,[esp+0x8C]
	push eax
	lea edx,[esp+0x80]
	push edx
	push esi
	push ebx
	call IWzVector2D::RelMove
	lea ecx,[esp+0x7C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0x174],9
	call Ztl_variant_t::~Ztl_variant_t
	xor esi,esi
	xor edi,edi

 Block68:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0xBD0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0x180],0xF
	mov ecx,ebp
	mov byte ptr [esp+0x180],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x17C],0x10
	call get_int32
	add esp,8
	lea ecx,[esp+0x4C]
	mov ebx,eax
	mov byte ptr [esp+0x174],9
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,ebx
	sub eax,1
	push 0
	je Block105

 Block69:
	sub eax,1
	je Block91

 Block70:
	mov edx,dword ptr [esp+0x194]
	mov eax,dword ptr [esp+0x18]
	push 0xFF
	inc edx
	push edx
	push ecx
	add eax,0x4E8
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push edi
	push esi
	push ecx
	lea edx,[esp+0x34]
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push edx
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	xor eax,eax
	cmp dword ptr [esp+0x1A0],eax
	lea edx,[esp+0x44]
	sete al
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push edx
	call _x_com_ptr<IWzProperty>::_ctor_copy
	lea eax,[esp+0x38]
	push eax
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x95B
	mov bl,0x27
	push ecx
	mov byte ptr [esp+0x184],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x134]
	mov byte ptr [esp+0x17C],0x28
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x180],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x17C],0x29
	call get_int32
	add esp,8
	lea ecx,[esp+0x12C]
	mov esi,eax
	mov byte ptr [esp+0x174],bl
	call Ztl_variant_t::~Ztl_variant_t
	test esi,esi
	je Block76

 Block71:
	mov esi,dword ptr [esp+0x17C]
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x174],9
	test eax,eax
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x174],8
	test eax,eax
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0x178],0
	call ecx
	lea ecx,[esp+0x180]
	call Ztl_bstr_t::~Ztl_bstr_t
	mov eax,esi
	jmp Block131

 Block76:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1AD0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0xE4]
	mov byte ptr [esp+0x17C],0x2A
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x180],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x17C],0x2B
	call get_int32
	add esp,8
	lea ecx,[esp+0xDC]
	mov esi,eax
	mov byte ptr [esp+0x174],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	test esi,esi
	je Block84

 Block77:
	lea ecx,[esp+0x80]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x90]
	mov byte ptr [esp+0x178],0x2C
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x174],0x2D
	test ecx,ecx
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	lea edx,[esp+0x7C]
	push edx
	lea eax,[esp+0x90]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x8C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x7C]
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [esp+0x17C]
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x174],9
	test eax,eax
	je Block81

 Block80:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block81:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x174],8
	test eax,eax
	je Block83

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block83:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0x178],0
	call ecx
	lea ecx,[esp+0x180]
	call Ztl_bstr_t::~Ztl_bstr_t
	mov eax,esi
	jmp Block131

 Block84:
	lea ecx,[esp+0x50]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xD0]
	mov byte ptr [esp+0x178],0x2E
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x174],0x2F
	test ecx,ecx
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0xD0]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0xCC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x174],bl
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov dword ptr [esp+0x24],esp
	mov eax,esp
	push 0
	push ecx
	lea edx,[esp+0x20]
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [eax],0
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x17C]
	mov dword ptr [esi],0
	mov byte ptr [esp+0x174],9
	test eax,eax
	je Block88

 Block87:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block88:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x174],8
	test eax,eax
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block90:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0x178],0
	call ecx
	lea ecx,[esp+0x180]
	call Ztl_bstr_t::~Ztl_bstr_t
	mov eax,esi
	jmp Block131

 Block91:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1ABE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x118]
	mov byte ptr [esp+0x180],0x1D
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x184],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x17C],0x1E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	lea ecx,[esp+0x10C]
	mov byte ptr [esp+0x174],0x20
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1ACB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x158]
	mov byte ptr [esp+0x180],0x21
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x184],0x20
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x17C],0x22
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	lea ecx,[esp+0x14C]
	mov byte ptr [esp+0x174],0x24
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [esp+0x1C]
	mov ebx,dword ptr [esp+0x20]
	test edi,edi
	sete al
	test al,al
	je Block97

 Block92:
	test ebx,ebx
	sete al
	test al,al
	je Block97

 Block93:
	mov byte ptr [esp+0x174],0x20
	test ebx,ebx
	je Block95

 Block94:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block95:
	mov byte ptr [esp+0x174],9
	test edi,edi
	je Block120

 Block96:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax
	jmp Block120

 Block97:
	test ebx,ebx
	jne Block99

 Block98:
	push 0x80004003
	call _com_issue_error

 Block99:
	test edi,edi
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	mov ecx,ebx
	call IWzShape2D::Gety
	push eax
	mov ecx,ebx
	call IWzShape2D::Getx
	push eax
	mov ecx,edi
	call IWzShape2D::Gety
	push eax
	mov ecx,edi
	call IWzShape2D::Getx
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	call SetRect
	mov esi,dword ptr [esp+0x14]
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	add esi,4
	lea eax,[esp+0xB4]
	push eax
	mov ecx,esi
	call edx
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0xBC]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx]
	push eax
	push edx
	lea eax,[esp+0x44]
	push eax
	call OffsetRect
	sub dword ptr [esp+0x40],0x32
	sub dword ptr [esp+0x48],0xAA
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1AA9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0xF4]
	mov byte ptr [esp+0x17C],0x25
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x180],0x24
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x17C],0x26
	call get_int32
	add esp,8
	lea ecx,[esp+0xEC]
	mov esi,eax
	mov byte ptr [esp+0x174],0x24
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x180]
	test eax,eax
	je Block103

 Block102:
	mov eax,dword ptr [eax]
	jmp Block104

 Block103:
	xor eax,eax

 Block104:
	mov edx,dword ptr [esp+0x184]
	push esi
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edx
	push eax
	call CAnimationDisplayer::RegisterFallingAnimation
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [esp+0x178],0x20
	call ecx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0x178],9
	call eax
	jmp Block120

 Block105:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1ABE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x108]
	mov byte ptr [esp+0x180],0x11
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x184],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x17C],0x12
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	lea ecx,[esp+0xFC]
	mov byte ptr [esp+0x174],0x14
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1ACB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x128]
	push ecx
	mov byte ptr [esp+0x184],0x15
	mov ecx,ebp
	mov byte ptr [esp+0x184],0x14
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x17C],0x16
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	lea ecx,[esp+0x11C]
	mov byte ptr [esp+0x174],0x18
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [esp+0x20]
	mov ebx,dword ptr [esp+0x1C]
	test edi,edi
	sete al
	test al,al
	je Block111

 Block106:
	test ebx,ebx
	sete al
	test al,al
	je Block111

 Block107:
	mov byte ptr [esp+0x174],0x14
	test ebx,ebx
	je Block109

 Block108:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block109:
	mov byte ptr [esp+0x174],9
	test edi,edi
	je Block120

 Block110:
	jmp Block119

 Block111:
	test ebx,ebx
	jne Block113

 Block112:
	push 0x80004003
	call _com_issue_error

 Block113:
	test edi,edi
	jne Block115

 Block114:
	push 0x80004003
	call _com_issue_error

 Block115:
	mov ecx,ebx
	call IWzShape2D::Gety
	push eax
	mov ecx,ebx
	call IWzShape2D::Getx
	push eax
	mov ecx,edi
	call IWzShape2D::Gety
	push eax
	mov ecx,edi
	call IWzShape2D::Getx
	push eax
	lea eax,[esp+0x4C]
	push eax
	call SetRect
	mov esi,dword ptr [esp+0x14]
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	add esi,4
	lea eax,[esp+0xAC]
	push eax
	mov ecx,esi
	call edx
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0xC4]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx]
	push eax
	push edx
	lea eax,[esp+0x44]
	push eax
	call OffsetRect
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xB89
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x144]
	mov byte ptr [esp+0x17C],0x19
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x180],0x18
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x17C],0x1A
	call get_int32
	mov esi,eax
	add esp,8
	neg esi
	sbb esi,esi
	lea ecx,[esp+0x13C]
	neg esi
	mov byte ptr [esp+0x174],0x18
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x164]
	mov byte ptr [esp+0x17C],0x1B
	push ecx
	mov byte ptr [esp+0x180],0x18
	mov ecx,ebp
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x17C],0x1C
	call get_int32
	add esp,8
	lea ecx,[esp+0x15C]
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x174],0x18
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x180]
	test eax,eax
	je Block117

 Block116:
	mov eax,dword ptr [eax]
	jmp Block118

 Block117:
	xor eax,eax

 Block118:
	mov edx,dword ptr [esp+0x14]
	push esi
	push 0xFF
	push 0x80
	push 0x1F4
	push edx
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::RegisterFootHoldAnimation
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [esp+0x178],0x14
	call eax
	mov byte ptr [esp+0x174],9

 Block119:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block120:
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [esp+0x17C]
	mov dword ptr [esi],0
	mov byte ptr [esp+0x174],8
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0x178],0
	call ecx
	mov ecx,dword ptr [esp+0x180]
	test ecx,ecx
	je Block124

 Block123:
	call _xbstr_t::Data_t::Release

 Block124:
	mov eax,esi
	jmp Block131

 Block125:
	mov ebx,dword ptr [esp+0x17C]
	mov dword ptr [ebx],esi
	mov byte ptr [esp+0x174],0
	cmp ebp,esi
	je Block127

 Block126:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block127:
	mov ecx,dword ptr [esp+0x180]

 Block128:
	cmp ecx,esi
	je Block130

 Block129:
	call _xbstr_t::Data_t::Release

 Block130:
	mov eax,ebx

 Block131:
	mov ecx,dword ptr [esp+0x16C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x164
	ret 0x1C
}
}
// CMob::GetType
__SUB_CLASS_THIS0(0024CF70, __thiscall, 47510,  CMob, long) {
__asm {

 Block0:
	mov eax,1
	ret
}
}
// CreateMob
_SUB_EXCEPTION_HANDLER(250440)
__SUB(00250440, __cdecl, 138366,  CMob*, CMobTemplate*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_250440
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	push 0x5E8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+4],eax
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	mov ecx,eax
	call CMob::_ctor_0
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret

 Block2:
	xor eax,eax
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret
}
}
// CMob::OnMove
_SUB_EXCEPTION_HANDLER(2521E0)
__SUB_CLASS_THIS(002521E0, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2521E0
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
	mov ebx,dword ptr [esp+0x48]
	mov ecx,ebx
	call CInPacket::Decode1
	movzx ebp,al
	mov ecx,ebx
	mov dword ptr [esp+0x2C],ebp
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,ebx
	mov dword ptr [esp+0x20],eax
	call CInPacket::Decode1
	movzx edi,al
	mov ecx,ebx
	mov dword ptr [esp+0x34],edi
	call CInPacket::Decode1
	mov ecx,dword ptr [esi+0x124]
	mov byte ptr [esp+0x48],al
	lea eax,[esi+0x11C]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,1
	jne Block3

 Block1:
	test edi,edi
	jne Block3

 Block2:
	movzx eax,byte ptr [esp+0x48]
	shr eax,1
	add eax,0xFFFFFFF3
	cmp eax,8
	ja Block50

 Block3:
	call get_update_time
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [esi+0x104]
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	mov dword ptr [esp+0x14],eax
	jmp Block6

 Block5:
	mov dword ptr [esp+0x14],0

 Block6:
	mov ecx,esi
	call CMob::IsActive
	test eax,eax
	je Block14

 Block7:
	mov eax,dword ptr [esi+0x108]
	test eax,eax
	je Block9

 Block8:
	lea ecx,[eax-0xC]
	jmp Block10

 Block9:
	xor ecx,ecx

 Block10:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	call eax
	cmp dword ptr [esi+0x28C],0
	je Block12

 Block11:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block13

 Block12:
	mov eax,dword ptr [esi+0x174]

 Block13:
	mov ecx,dword ptr [eax+0x48]
	push ecx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x1C]
	add esp,8
	push ebp
	push ecx
	push eax
	add ecx,0x244
	call CMovePath::DiscardByInterrupt

 Block14:
	mov ecx,ebx
	call CInPacket::Decode4
	lea ecx,[esi+0x570]
	mov dword ptr [esp+0x28],eax
	call ZArray<tagPOINT>::RemoveAll
	mov ecx,ebx
	call CInPacket::Decode4
	test eax,eax
	jle Block17

 Block15:
	mov dword ptr [esp+0x18],eax
	lea esp,[esp]

 Block16:
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov edi,eax
	call CInPacket::Decode4
	push 0xFFFFFFFF
	lea ecx,[esi+0x570]
	mov ebp,eax
	call ZArray<tagPOINT>::InsertBefore
	sub dword ptr [esp+0x18],1
	mov dword ptr [eax],edi
	mov dword ptr [eax+4],ebp
	jne Block16

 Block17:
	mov ecx,ebx
	call CInPacket::Decode4
	test eax,eax
	jle Block20

 Block18:
	mov ebp,eax

 Block19:
	mov ecx,ebx
	call CInPacket::Decode4
	push 0xFFFFFFFF
	lea ecx,[esi+0x574]
	mov edi,eax
	call ZArray<long>::InsertBefore
	sub ebp,1
	mov dword ptr [eax],edi
	jne Block19

 Block20:
	cmp byte ptr [esp+0x48],0
	jl Block49

 Block21:
	cmp dword ptr [esi+0x28C],0
	je Block23

 Block22:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block24

 Block23:
	mov eax,dword ptr [esi+0x174]

 Block24:
	mov edx,dword ptr [eax+0x48]
	push edx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x34]
	add esp,8
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push ecx
	push eax
	add ecx,0x244
	call CMovePath::DiscardByInterrupt
	movzx eax,byte ptr [esp+0x48]
	mov edx,dword ptr [esi+0x3E4]
	mov edi,eax
	push edx
	and eax,1
	lea ebp,[esi+0x3DC]
	push ebp
	shr edi,1
	mov dword ptr [esp+0x50],eax
	call _ZtlSecureFuseHelper<long>::call
	add eax,0xFFFFFFF3
	add esp,8
	cmp eax,8
	jbe Block26

 Block25:
	mov eax,dword ptr [esi+0x3E4]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add eax,0xFFFFFFEA
	add esp,8
	cmp eax,0x10
	ja Block27

 Block26:
	lea ecx,[edi-7]
	cmp ecx,2
	jbe Block29

 Block27:
	cmp dword ptr [esp+0x20],0
	jne Block29

 Block28:
	mov edx,ebp
	mov ecx,edi
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x3D8]
	mov dword ptr [esi+0x3E4],eax
	lea eax,[esi+0x3D0]
	push edx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	xor ecx,dword ptr [esp+0x50]
	add esp,8
	and ecx,1
	xor ecx,eax
	lea edx,[esi+0x3D0]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,esi
	mov dword ptr [esi+0x3D8],eax
	call CMob::PrepareActionLayer

 Block29:
	lea eax,[edi-0xD]
	cmp eax,8
	ja Block32

 Block30:
	cmp dword ptr [esp+0x20],0
	jne Block32

 Block31:
	mov ecx,dword ptr [esi+0x3E4]
	push ecx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x50]
	add esp,8
	push edx
	push ecx
	push eax
	mov ecx,esi
	call CMob::DoAttack
	jmp Block49

 Block32:
	lea edx,[edi-7]
	cmp edx,2
	ja Block34

 Block33:
	push edi
	mov ecx,esi
	call CMob::GetActionDelay
	add eax,dword ptr [esp+0x30]
	lea edx,[esi+0x3E8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3F0],eax
	jmp Block49

 Block34:
	lea eax,[edi-0x16]
	cmp eax,0x10
	ja Block49

 Block35:
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea ebp,[esi+4]
	mov dword ptr [esp+0x34],eax
	add esp,8
	lea eax,[esp+0x20]
	push eax
	mov ecx,ebp
	call edx
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [ecx]
	push eax
	push edx
	call get_sound_volume_by_pos
	push eax
	mov eax,dword ptr [esp+0x38]
	add edi,0xFFFFFFFE
	push edi
	push eax
	call play_mob_sound
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esi+0x174]
	movzx edi,al
	add esp,0x14
	sar eax,8
	push edi
	movzx ebp,al
	call CMobTemplate::GetSkillInfo
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push edi
	mov dword ptr [esp+0x34],eax
	call CSkillInfo::GetMobSkill
	mov edi,dword ptr [esp+0x30]
	test edi,edi
	je Block49

 Block36:
	test eax,eax
	je Block49

 Block37:
	test ebp,ebp
	jle Block49

 Block38:
	mov ecx,dword ptr [eax+4]
	test ecx,ecx
	je Block40

 Block39:
	mov ecx,dword ptr [ecx-4]

 Block40:
	cmp ebp,ecx
	ja Block49

 Block41:
	mov ecx,dword ptr [eax+4]
	imul ebp,0x5C
	lea edx,[esp+0x28]
	lea ecx,[ecx+ebp-0x5C]
	push edx
	call MOBSKILLLEVELDATA::GetEffectUOL
	mov ebp,dword ptr [esp+0x28]
	mov dword ptr [esp+0x40],0
	test ebp,ebp
	je Block47

 Block42:
	cmp dword ptr [ebp],0
	je Block47

 Block43:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block47

 Block44:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block47

 Block45:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esi+0xAC]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [esi+0xA8],ecx
	call get_update_time
	mov edx,dword ptr [edi+0x18]
	add eax,edx
	mov dword ptr [esi+0xA4],eax
	jne Block47

 Block46:
	mov dword ptr [esi+0xA4],1

 Block47:
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test ebp,ebp
	je Block49

 Block48:
	mov ecx,ebp
	call _xbstr_t::Data_t::Release

 Block49:
	mov ecx,dword ptr [esp+0x14]
	push 0
	push ebx
	add ecx,0x244
	call CMovePath::OnMovePacket
	mov ecx,dword ptr [esp+0x34]
	neg ecx
	sbb ecx,ecx
	add ecx,0xFFFFFFFE
	lea edx,[esi+0x11C]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x124],eax

 Block50:
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
// CMob::TryDoingSkill
_SUB_EXCEPTION_HANDLER(24AE60)
__SUB_CLASS_THIS(0024AE60, __thiscall, 47532,  CMob, int32_t, long&, int32_t&, CMob::TARGETINFO&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24AE60
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
	cmp dword ptr [esi+0x28C],0
	jne Block10

 Block1:
	cmp dword ptr [esi+0x244],0
	jne Block10

 Block2:
	call CMob::IsImmovable
	test eax,eax
	jne Block10

 Block3:
	mov eax,dword ptr [esi+0x130]
	test eax,eax
	je Block10

 Block4:
	cmp dword ptr [esi+0x3A4],0
	jne Block10

 Block5:
	mov ecx,dword ptr [esi+0x174]
	push eax
	call CMobTemplate::GetSkillInfo
	mov edi,eax
	test edi,edi
	je Block10

 Block6:
	mov eax,dword ptr [edi+0x14]
	mov ecx,dword ptr [esp+0x20]
	add eax,0x16
	mov dword ptr [ecx],eax
	mov ecx,esi
	call CMob::IsLeft
	mov ebx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [ebx],eax
	mov dx,word ptr [esi+0x134]
	movzx ax,byte ptr [esi+0x130]
	shl dx,8
	or dx,ax
	mov word ptr [ecx],dx
	mov edx,dword ptr [edi+0xC]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push edx
	call CSkillInfo::GetMobSkill
	mov ecx,dword ptr [esi+0x134]
	mov edx,dword ptr [eax+4]
	imul ecx,0x5C
	lea eax,[esp+0x20]
	lea ecx,[ecx+edx-0x5C]
	push eax
	call MOBSKILLLEVELDATA::GetEffectUOL
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x18],0
	call _xbstr_t::length
	test eax,eax
	je Block9

 Block7:
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esi+0xAC]
	call Ztl_bstr_t::op_assign
	mov edx,dword ptr [ebx]
	mov dword ptr [esi+0xA8],edx
	call get_update_time
	mov ecx,dword ptr [edi+0x18]
	add eax,ecx
	mov dword ptr [esi+0xA4],eax
	jne Block9

 Block8:
	mov dword ptr [esi+0xA4],1

 Block9:
	lea ecx,[esp+0x20]
	mov dword ptr [esi+0x130],0
	call Ztl_bstr_t::~Ztl_bstr_t
	mov eax,1
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0xC

 Block10:
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0xC
}
}
// CMob::ShowEffectByItem
__SUB_CLASS_THIS(0023B2D0, __thiscall, 47485,  CMob, void, long, int32_t) {
__asm {

 Block0:
	sub esp,8
	push esi
	push edi
	mov edi,ecx
	mov esi,dword ptr [edi+0x104]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0xC]
	push ecx
	push esi
	mov dword ptr [esp+0x14],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [edi+0x104]
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov esi,dword ptr [esp+0x18]
	mov edi,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esp+0xC]
	push esi
	push edi
	add eax,0xFFFFFFFE
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::Effect_ByItem
	push esi
	push edi
	call get_item_sound
	add esp,8
	test eax,eax
	je Block10

 Block9:
	push 0x64
	push eax
	call play_game_sound
	add esp,8

 Block10:
	pop edi
	pop esi
	add esp,8
	ret 8
}
}
// CMob::TryFirstAttack
__SUB_CLASS_THIS0(002482F0, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	sub esp,0x44
	push ebp
	mov ebp,ecx
	mov eax,dword ptr [ebp+0x174]
	mov ecx,dword ptr [eax+0x184]
	push ecx
	add eax,0x17C
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block2

 Block1:
	mov ecx,ebp
	call CMob::IsDazzledMobByMe
	test eax,eax
	je Block32

 Block2:
	mov eax,dword ptr [ebp+0x108]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	cmp dword ptr [eax+0x18],0
	je Block32

 Block6:
	cmp dword ptr [eax+0x300],0
	jne Block32

 Block7:
	push ebx
	mov ebx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push esi
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block10

 Block8:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block10

 Block9:
	mov ecx,esi
	jmp Block11

 Block10:
	xor ecx,ecx

 Block11:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x1C]
	call eax
	cmp eax,0xA
	je Block13

 Block12:
	call get_field
	mov edx,dword ptr [eax]
	mov ecx,eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	cmp eax,0xF
	jne Block14

 Block13:
	mov ecx,dword ptr [ebp+0x3C8]
	cmp ecx,dword ptr [ebx+0x2DF0]
	je Block31

 Block14:
	push edi
	mov ecx,ebp
	call CMob::IsDazzledMobByMe
	test eax,eax
	je Block19

 Block15:
	mov edx,dword ptr [ebp+4]
	mov edx,dword ptr [edx+0x10]
	mov edi,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	lea esi,[ebp+4]
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	call edx
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	push 0
	push ecx
	push edx
	mov ecx,edi
	call CMobPool::FindNearestMob
	mov ebx,eax
	test ebx,ebx
	je Block30

 Block16:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x10],eax
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call edx
	mov edi,dword ptr [eax]
	mov eax,dword ptr [ebx+4]
	mov edx,dword ptr [eax+0x10]
	lea esi,[ebx+4]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	call edx
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	sub eax,edi
	cdq
	mov ecx,eax
	xor ecx,edx
	sub ecx,edx
	mov eax,0x66666667
	imul ecx
	push 0
	push 0
	sar edx,2
	push 0
	mov edi,edx
	push 0
	shr edi,0x1F
	push 1
	mov ecx,ebp
	add edi,edx
	call CMob::IsTargetInAttackRange
	test eax,eax
	jne Block28

 Block17:
	mov eax,ebx
	sub eax,dword ptr [esp+0x10]
	cdq
	mov ecx,eax
	xor ecx,edx
	sub ecx,edx
	mov eax,0x55555556
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add eax,edi
	cmp eax,0x28
	jg Block30

 Block18:
	jmp Block28

 Block19:
	mov eax,dword ptr [ebp+0x174]
	mov ecx,dword ptr [eax+0x184]
	push ecx
	add eax,0x17C
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block30

 Block20:
	mov edx,dword ptr [ebp+4]
	mov edx,dword ptr [edx+0x10]
	lea esi,[ebp+4]
	lea eax,[esp+0x34]
	push eax
	mov ecx,esi
	call edx
	add ebx,4
	mov edi,eax
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebx
	call edx
	mov dword ptr [esp+0x10],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	push eax
	push ecx
	lea eax,[esp+0x24]
	push eax
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx]
	push eax
	push edx
	call calc_priority
	mov edi,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	add esp,0x10
	mov dword ptr [esp+0x10],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	call edx
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	push 1
	push ecx
	push edx
	mov ecx,edi
	call CMobPool::FindNearestMob
	mov edi,eax
	test edi,edi
	je Block25

 Block21:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+0x3C]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	mov edx,dword ptr [edi+4]
	mov edx,dword ptr [edx+0x10]
	lea esi,[edi+4]
	mov dword ptr [esp+0x24],eax
	lea eax,[esp+0x44]
	push eax
	mov ecx,esi
	call edx
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,esi
	call edx
	mov dword ptr [esp+0x1C],eax
	mov eax,edi
	sub eax,dword ptr [esp+0x14]
	cdq
	mov ecx,eax
	xor ecx,edx
	sub ecx,edx
	mov eax,0x55555556
	imul ecx
	mov ecx,dword ptr [esp+0x1C]
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [ecx]
	sub eax,dword ptr [esp+0x24]
	cdq
	mov ecx,eax
	xor ecx,edx
	sub ecx,edx
	mov eax,0x66666667
	imul ecx
	mov eax,dword ptr [esp+0x1C]
	sar edx,2
	mov edi,edx
	shr edi,0x1F
	add eax,edx
	add edi,eax
	cmp edi,dword ptr [esp+0x10]
	jg Block25

 Block22:
	push 0
	push 0
	push 0
	push 0
	push 2
	mov ecx,ebp
	call CMob::IsTargetInAttackRange
	test eax,eax
	jne Block24

 Block23:
	cmp edi,0x28
	jg Block25

 Block24:
	test esi,esi
	jne Block29

 Block25:
	push 0
	push 0
	push 0
	push 0
	push 0
	mov ecx,ebp
	call CMob::IsTargetInAttackRange
	test eax,eax
	jne Block27

 Block26:
	cmp dword ptr [esp+0x10],0x28
	jg Block30

 Block27:
	mov esi,ebx

 Block28:
	test esi,esi
	je Block30

 Block29:
	push 0
	push esi
	push 1
	mov ecx,ebp
	call CMob::ChaseTarget

 Block30:
	pop edi

 Block31:
	pop esi
	pop ebx

 Block32:
	pop ebp
	add esp,0x44
	ret
}
}
// CMob::_ZtlSecureGet_m_nMoveAction
__SUB_CLASS0(0023A760, __fastcall, 47541,  CMob, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3D8]
	push eax
	add ecx,0x3D0
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::GetFineMoveDirAction
__SUB_CLASS_THIS(002493D0, __thiscall, 47554,  CMob, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	lea eax,[esp+8]
	push eax
	push ecx
	mov ecx,esi
	call CMob::MoveAction2RawAction
	push eax
	mov ecx,esi
	call CMob::GetFineAction
	push eax
	mov ecx,esi
	call CMob::RawAction2MoveAction
	mov edx,dword ptr [esp+8]
	add eax,eax
	and edx,1
	or eax,edx
	pop esi
	ret 4
}
}
// CMob::GetAttackInfo
__SUB_CLASS_THIS(00241330, __thiscall, 47484,  CMob, const MobAttackInfo*, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	lea edx,[eax-0xD]
	cmp edx,8
	jbe Block2

 Block1:
	xor eax,eax
	ret 4

 Block2:
	mov ecx,dword ptr [ecx+0x174]
	add eax,0xFFFFFFF3
	mov dword ptr [esp+4],eax
	jmp  CMobTemplate::GetAttackInfo
}
}
// CMob::SetAffectedLayerPos
_SUB_EXCEPTION_HANDLER(23EAF0)
__SUB_CLASS_THIS0(0023EAF0, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_23EAF0
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
	mov eax,dword ptr [ecx+0xF4]
	mov ecx,dword ptr [ecx+0xF8]
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x20],ecx
	test ecx,ecx
	je Block46

 Block1:
	cdq
	and edx,3
	add eax,edx
	mov edi,eax
	sar edi,2
	add edi,edi
	add edi,edi
	mov dword ptr [esp+0x24],edi
	jmp Block4

 Block3:
	mov ebx,dword ptr [esp+0x14]
	mov edi,dword ptr [esp+0x24]

 Block4:
	lea eax,[esp+0x20]
	push eax
	call ZList<_x_com_ptr<IWzGr2DLayer>>::GetNext
	mov ebp,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x38],ebp
	test ebp,ebp
	je Block6

 Block5:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	push ebp
	call edx

 Block6:
	mov eax,ebx
	cdq
	and edx,3
	add eax,edx
	mov esi,eax
	sar esi,2
	cmp ebx,edi
	mov dword ptr [esp+0x84],0
	jge Block8

 Block7:
	mov dword ptr [esp+0x18],4
	jmp Block11

 Block8:
	mov eax,dword ptr [esp+0x28]
	and eax,0x80000003
	jns Block10

 Block9:
	dec eax
	or eax,0xFFFFFFFC
	inc eax

 Block10:
	mov dword ptr [esp+0x18],eax

 Block11:
	and ebx,0x80000003
	fild dword ptr [esp+0x18]
	fsub qword ptr [__real_3ff0000000000000]
	fmul qword ptr [__real_3fe0000000000000]
	jns Block13

 Block12:
	dec ebx
	or ebx,0xFFFFFFFC
	inc ebx

 Block13:
	mov dword ptr [esp+0x1C],ebx
	fild dword ptr [esp+0x1C]
	fsubrp st(1),st(0)
	fmul qword ptr [__real_4030000000000000]
	call __ftol2_sse
	mov edi,dword ptr [ZImports::_VariantInit]
	shl esi,4
	mov ecx,esi
	lea edx,[esp+0x4C]
	mov esi,0x10
	push edx
	mov ebx,eax
	sub esi,ecx
	call edi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block47

 Block14:
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x88],1
	call edi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor ecx,ecx
	add esp,8
	cmp eax,ecx
	jl Block47

 Block15:
	mov eax,3
	mov word ptr [esp+0x6C],ax
	mov dword ptr [esp+0x74],ecx
	mov edx,eax
	mov word ptr [esp+0x5C],dx
	mov dword ptr [esp+0x64],ecx
	mov byte ptr [esp+0x84],4
	cmp ebp,ecx
	je Block48

 Block16:
	lea eax,[esp+0x6C]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,ebp
	call IWzGr2DLayer::Getcanvas
	mov edi,eax
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x34]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x8C],5
	call IWzGr2DLayer::Getcanvas
	mov dword ptr [esp+0x1C],eax
	mov edi,dword ptr [edi]
	mov byte ptr [esp+0x84],6
	test edi,edi
	je Block48

 Block17:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block19

 Block18:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block19:
	mov edx,dword ptr [esp+0x1C]
	mov edi,dword ptr [edx]
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x2C],ecx
	test edi,edi
	je Block48

 Block20:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[esp+0x1C]
	push ecx
	push edi
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block22

 Block21:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block22:
	mov edx,dword ptr [esp+0x4C]
	sub esi,dword ptr [esp+0x2C]
	sub ebx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [ebp]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x64]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x68]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x4C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x64]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x68]
	push esi
	push ebx
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push ebp
	call eax
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ebp
	push eax
	call _com_issue_errorex

 Block24:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x84],5
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x84],4
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov edi,8
	mov byte ptr [esp+0x84],3
	cmp word ptr [esp+0x5C],di
	jne Block35

 Block29:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block31:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block32:
	mov byte ptr [esp+0x84],2
	cmp word ptr [esp+0x6C],di
	jne Block36

 Block33:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	test eax,eax
	je Block37

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block35:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x5C]
	push ecx
	call esi
	jmp Block32

 Block36:
	lea eax,[esp+0x6C]
	push eax
	call esi

 Block37:
	mov byte ptr [esp+0x84],1
	cmp word ptr [esp+0x3C],di
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x3C]
	push edx
	call esi

 Block41:
	mov byte ptr [esp+0x84],0
	cmp word ptr [esp+0x4C],di
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x4C]
	push ecx
	call esi

 Block45:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov dword ptr [esp+0x88],0xFFFFFFFF
	call eax
	inc dword ptr [esp+0x14]
	cmp dword ptr [esp+0x20],0
	jne Block3

 Block46:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret

 Block47:
	push eax
	call _com_issue_error

 Block48:
	push 0x80004003
	call _com_issue_error
}
}
// CMob::SetTimeBombTime
__SUB_CLASS_THIS(0023B720, __thiscall, 47486,  CMob, void, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push ebp
	push esi
	mov esi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push edi
	mov ebp,ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	call CSkillInfo::GetSkill
	push ebx
	mov ecx,esi
	mov edi,eax
	call CUserLocal::GetSkillLevel
	test esi,esi
	je Block6

 Block1:
	test edi,edi
	je Block6

 Block2:
	cmp eax,1
	jl Block6

 Block3:
	cmp ebx,0x423D0B
	je Block5

 Block4:
	call get_update_time
	pop edi
	add eax,0xBB8
	pop esi
	mov dword ptr [ebp+0x5B0],eax
	pop ebp
	pop ebx
	ret 4

 Block5:
	push eax
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0xFC]
	push ecx
	add eax,0xF4
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov esi,eax
	call get_update_time
	imul esi,0x3E8
	add eax,esi
	mov dword ptr [ebp+0x5B0],eax

 Block6:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CMob::IsChaseTargetDazzle
__SUB_CLASS_THIS0(0023B830, __thiscall, 47473,  CMob, int32_t) {
__asm {

 Block0:
	call CMob::IsActive
	test eax,eax
	je Block11

 Block1:
	cmp dword ptr [ecx+0x5B8],0
	je Block11

 Block2:
	mov eax,dword ptr [ecx+0x108]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	push esi
	mov esi,dword ptr [eax+0x300]
	test esi,esi
	je Block10

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	mov ecx,esi
	call edx
	cmp eax,1
	jne Block10

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push offset CMob::ms_RTTI_CMob
	mov ecx,esi
	call edx
	test eax,eax
	je Block10

 Block8:
	lea eax,[esi-4]
	test eax,eax
	je Block10

 Block9:
	xor ecx,ecx
	cmp dword ptr [eax+0x310],ecx
	pop esi
	setne cl
	mov eax,ecx
	ret

 Block10:
	xor eax,eax
	pop esi
	ret

 Block11:
	xor eax,eax
	ret
}
}
// get_random_unique_array
_SUB_EXCEPTION_HANDLER(2447E0)
__SUB(002447E0, __cdecl, 138354,  void, ZArray<long>&, long, unsigned long, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2447E0
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
	mov eax,dword ptr [esp+0x48]
	mov ebp,dword ptr [esp+0x3C]
	lea ecx,[esp+0x48]
	push ecx
	mov esi,eax
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x1C],esi
	call ZArray<long>::_Alloc
	xor eax,eax
	mov dword ptr [esp+0x18], 0
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x28],eax
	mov ebx,dword ptr [esp+0x44]
	mov dword ptr [esp+0x34],eax
	xor edi,edi
	jmp Block2

 Block1:
	mov esi,dword ptr [esp+0x14]
	xor eax,eax

 Block2:
	mov dword ptr [esp+0x48],esi
	cmp ebx,esi
	jae Block4

 Block3:
	mov dword ptr [esp+0x48],ebx

 Block4:
	xor esi,esi
	cmp ebx,eax
	jbe Block7

 Block5:
	lea esp,[esp]

 Block6:
	lea ecx,[esp+0x18]
	call ZList<long>::AddTail_
	mov edx,dword ptr [esp+0x40]
	lea ecx,[esi+edx]
	inc esi
	mov dword ptr [eax],ecx
	cmp esi,ebx
	jb Block6

 Block7:
	mov esi,dword ptr [esp+0x48]
	test esi,esi
	jbe Block11

 Block8:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	cmp dword ptr [esp+0x20],0
	je Block10

 Block9:
	xor edx,edx
	div dword ptr [esp+0x20]
	mov eax,edx

 Block10:
	push eax
	lea ecx,[esp+0x1C]
	call ZList<long>::FindIndex
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp]
	mov dword ptr [edx+edi*4],ecx
	push eax
	lea ecx,[esp+0x1C]
	inc edi
	call ZList<long>::RemoveAt
	sub esi,1
	jne Block8

 Block11:
	mov edx,dword ptr [esp+0x48]
	sub dword ptr [esp+0x14],edx
	jne Block1

 Block12:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x18],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// CMob::OnSwallowed
_SUB_EXCEPTION_HANDLER(241810)
__SUB_CLASS_THIS0(00241810, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_241810
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x74]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x28],edi
	call get_update_time
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [edi+0x5B4]
	push eax
	call CUserPool::GetUser
	mov esi,eax
	xor ebx,ebx
	cmp esi,ebx
	je Block68

 Block1:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xC]
	mov ecx,esi
	call eax
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebp,eax
	mov dword ptr [eax+0x20B8],ebx
	call get_update_time
	mov dword ptr [ebp+0x20BC],eax
	mov dword ptr [esi+0x47F0],1
	call get_update_time
	mov dword ptr [esi+0x47F4],eax

 Block3:
	push ebx
	push 0x2A
	push 0x1F914CD
	call play_skill_sound
	add esp,0xC
	mov ecx,esi
	call CUser::LoadSwallowingEffect
	mov edx,dword ptr [edi+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[edi+4]
	lea eax,[esp+0x38]
	push eax
	call edx
	mov eax,dword ptr [esi+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[esi+4]
	lea edx,[esp+0x30]
	push edx
	call eax
	mov eax,dword ptr [esp+0x30]
	sub eax,dword ptr [esp+0x38]
	cdq
	mov ecx,eax
	mov eax,dword ptr [esp+0x34]
	sub eax,dword ptr [esp+0x3C]
	xor ecx,edx
	sub ecx,edx
	cdq
	xor eax,edx
	sub eax,edx
	mov edx,eax
	imul edx,eax
	mov eax,ecx
	imul eax,ecx
	add edx,eax
	mov dword ptr [esp+0x20],edx
	fild dword ptr [esp+0x20]
	call __CIsqrt
	call __ftol2_sse
	mov dword ptr [esp+0x20],eax
	fild dword ptr [esp+0x20]
	fmul qword ptr [__real_3ff8000000000000]
	fiadd dword ptr [esp+0x24]
	call __ftol2_sse
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x14],ebx
	xor ebp,ebp
	mov dword ptr [esp+0x7C],ebx
	mov dword ptr [esp+0x1C],ebp
	lea ecx,[esp+0x20]
	push 0x3D0
	push ecx
	mov byte ptr [esp+0x84],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea edx,[esp+0x18]
	push edx
	push eax
	mov byte ptr [esp+0x88],2
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x7C],1
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	int 3// TODO: 	mov dword ptr [esp+0x60],offset ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [esp+0x68],ebx
	mov dword ptr [esp+0x6C],ebx
	mov dword ptr [esp+0x70],ebx
	mov eax,dword ptr [edi+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	mov byte ptr [esp+0x84],3
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	add esp,8
	lea edx,[esp+0x60]
	push edx
	push 1
	push eax
	call CActionMan::LoadMobAction
	cmp dword ptr [esp+0x68],ebx
	jne Block16

 Block6:
	mov eax,3
	mov word ptr [esp+0x40],ax
	mov dword ptr [esp+0x48],ebx
	mov ecx,dword ptr [edi+0x4E8]
	mov byte ptr [esp+0x7C],4
	cmp ecx,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebp,eax
	push eax
	mov dword ptr [esp+0x20],ebp
	call edx

 Block10:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x7C],3
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebx
	je Block18

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block15:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block18

 Block16:
	mov edx,dword ptr [esp+0x6C]
	mov eax,dword ptr [edx+4]
	mov ebp,dword ptr [eax+0xC]
	cmp ebp,ebx
	je Block19

 Block17:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	mov dword ptr [esp+0x20],ebp
	call ecx

 Block18:
	cmp ebp,ebx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x18]
	push eax
	push ebp
	mov dword ptr [esp+0x20],ebx
	call ecx
	cmp eax,ebx
	jge Block22

 Block21:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block22:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x20]
	push eax
	push ebp
	mov dword ptr [esp+0x28],ebx
	call ecx
	cmp eax,ebx
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block24:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x50]
	push edx
	call edi
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x80],5
	call edi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x7C],6
	cmp ecx,ebx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[esp+0x50]
	push eax
	mov eax,dword ptr [esp+0x1C]
	lea edx,[esp+0x44]
	push edx
	mov edx,dword ptr [esp+0x28]
	push eax
	push edx
	call IWzCanvas::Create
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x7C],5
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebx
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x7C],3
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,ebx
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	lea ecx,[esp+0x50]
	push ecx
	call edi
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x7C],7
	cmp ecx,ebx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea eax,[esp+0x50]
	push eax
	push ebp
	push ebx
	push ebx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x7C],3
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,ebx
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov eax,dword ptr [esp+0x18]
	sub dword ptr [esp+0x34],0x28
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	add dword ptr [esp+0x3C],eax
	test byte ptr [esi+0x640],1
	mov eax,0
	sete al
	lea ecx,[esp+0x40]
	push ecx
	lea eax,[eax+eax-1]
	imul eax,0x46
	add dword ptr [esp+0x34],eax
	call edi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0x80],8
	call edi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	mov esi,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi+0x4E8]
	mov byte ptr [esp+0x7C],9
	cmp ecx,ebx
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x7C],0xA
	cmp ecx,ebx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x54]
	push edx
	push ebx
	push ebx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x7C],9
	cmp eax,ebx
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	mov edi,8
	mov byte ptr [esp+0x7C],8
	cmp word ptr [esp+0x50],di
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebx
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov byte ptr [esp+0x7C],3
	cmp word ptr [esp+0x40],di
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,ebx
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	push ebx
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x30],esp
	cmp eax,ebx
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block66:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x38],esp
	push ecx
	mov ecx,dword ptr [esp+0x4C]
	push edx
	mov edx,dword ptr [esp+0x44]
	push eax
	mov eax,dword ptr [esp+0x40]
	push ecx
	mov byte ptr [esp+0x9C],0xB
	push edx
	mov byte ptr [esp+0xA0],3
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::RegisterMobSwallowAnimation
	lea edx,[esi+0x474]
	mov ecx,2
	call _ZtlSecureTearHelper<int>::call
	lea ecx,[esp+0x60]
	mov dword ptr [esi+0x47C],eax
	mov byte ptr [esp+0x7C],1
	int 3// TODO: 	mov dword ptr [esp+0x60],offset ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::RemoveAll
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x80],bl
	call edx
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	cmp eax,ebx
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	mov ecx,dword ptr [esp+0x74]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x6C
	ret
}
}
// CMob::OnStatReset
_SUB_EXCEPTION_HANDLER(252780)
__SUB_CLASS_THIS(00252780, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_252780
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	lea ecx,[esp+0x18]
	call MY_UINT128::_ctor_default
	mov ebx,dword ptr [esp+0x38]
	push 0x10
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	call CInPacket::DecodeBuffer
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x80
	lea edx,[esp+0x2C]
	push edx
	call MY_UINT128::_ctor_2
	call MobStat::IsMovementAffectingStat
	add esp,0x10
	test eax,eax
	je Block3

 Block1:
	cmp dword ptr [edi+0x588],0
	je Block3

 Block2:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x14],0
	call ZRef<CMob::ReservedPacket>::_Alloc
	mov esi,dword ptr [esp+0x14]
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esi+4]
	mov dword ptr [esp+0x34],0
	mov dword ptr [esi],0
	call MY_UINT128::setValue_0
	push ebx
	lea ecx,[esi+0x14]
	call CInPacket::operator=
	lea ecx,[edi+0x590]
	call ZList<ZRef<CMob::ReservedPacket>>::AddTail_
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,eax
	call ZRef<CMob::ReservedPacket>::op_assign_copy
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<CMob::ReservedPacket>::~ZRef<CMob::ReservedPacket>
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4

 Block3:
	push ebx
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x80
	lea edx,[esp+0x30]
	push edx
	call MY_UINT128::_ctor_2
	mov ecx,edi
	call CMob::ProcessStatReset
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4
}
}
// CMob::ProcessAttack
_SUB_EXCEPTION_HANDLER(252950)
__SUB_CLASS_THIS(00252950, __thiscall, 47486,  CMob, void, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_252950
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
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
	mov eax,dword ptr [edi+0x174]
	mov ecx,dword ptr [eax+0x1AC]
	push ecx
	add eax,0x1A4
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block92

 Block1:
	mov edx,dword ptr [edi+0x47C]
	push edx
	lea esi,[edi+0x474]
	push esi
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [edi+0x47C]
	push eax
	push esi
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	cmp eax,3
	jne Block92

 Block3:
	mov ecx,edi
	call CMob::IsMobOurTeam
	test eax,eax
	jne Block92

 Block4:
	mov ecx,edi
	call CMob::IsSamePhaseWithMe
	test eax,eax
	je Block92

 Block5:
	mov eax,dword ptr [edi+0x310]
	xor esi,esi
	cmp eax,esi
	je Block7

 Block6:
	mov ecx,edi
	call CMob::IsDazzledMobByMe
	test eax,eax
	je Block92

 Block7:
	cmp dword ptr [edi+0x3A4],esi
	jne Block92

 Block8:
	mov eax,dword ptr [edi+0xA4]
	cmp eax,esi
	je Block36

 Block9:
	mov ecx,dword ptr [ebp+0x74]
	sub ecx,eax
	js Block36

 Block10:
	mov dword ptr [ebp+0x64],esi
	mov dword ptr [ebp-4],esi
	or esi,0xFFFFFFFF
	mov dword ptr [ebp+0x60],esi
	jmp Block12

 Block11:
	mov esi,dword ptr [ebp+0x60]

 Block12:
	test esi,esi
	jl Block14

 Block13:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push eax
	push esi
	call _Int2StrW
	add esp,8
	mov ebx,eax
	jmp Block15

 Block14:
	mov ebx,offset _S___3

 Block15:
	lea edx,[ebp+0x58]
	push 0x3DA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi+0xAC]
	mov byte ptr [ebp-4],1
	test ecx,ecx
	je Block17

 Block16:
	mov ecx,dword ptr [ecx]
	jmp Block18

 Block17:
	xor ecx,ecx

 Block18:
	mov eax,dword ptr [eax]
	push ebx
	push ecx
	push eax
	lea eax,[ebp+0x64]
	push eax
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x58]
	add esp,0x10
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block20:
	push offset _D_VTMISSING
	lea ecx,[ebp+0x20]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp+0x10]
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::_ctor_1
	mov esi,dword ptr [ebp+0x64]
	push 0
	push 0
	lea ecx,[ebp+0x20]
	push ecx
	lea edx,[ebp+0x10]
	push edx
	push ecx
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],3
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],4
	je Block31

 Block21:
	lea eax,[ebp]
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x5C]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x10]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::~Ztl_variant_t
	mov ebx,dword ptr [ebp+0x5C]
	test ebx,ebx
	sete al
	test al,al
	jne Block32

 Block22:
	test ebx,ebx
	je Block31

 Block23:
	mov ecx,ebx
	call IWzProperty::Getcount
	test eax,eax
	je Block32

 Block24:
	mov ecx,edi
	call CMob::IsNoFlip
	test eax,eax
	jne Block26

 Block25:
	cmp dword ptr [edi+0xA8],eax
	je Block27

 Block26:
	mov eax,1

 Block27:
	push 0xFFFFFFFF
	push 0
	push 0
	push 0
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x54],esp
	push esi
	call Ztl_bstr_t::_ctor_2
	lea ecx,[ebp+0x50]
	push ecx
	mov ecx,edi
	call CMob::LoadLayer
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block29:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x60]
	inc eax
	cmp eax,0x7FFFFFFF
	mov dword ptr [ebp+0x60],eax
	jle Block11

 Block30:
	jmp Block34

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov byte ptr [ebp-4],0
	test ebx,ebx
	je Block34

 Block33:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block34:
	mov dword ptr [edi+0xA4],0
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block36

 Block35:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block36:
	mov edx,dword ptr [ebp+0x74]
	lea esi,[edi+0x5D0]
	push edx
	mov ecx,esi
	call BulletContainer<CMob::MobBullet>::CallUpdate_T
	mov ebx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push 1
	lea eax,[ebp+0x38]
	push eax
	lea ecx,[ebx+0x88]
	mov dword ptr [ebp+0x54],ebx
	call CAvatar::GetBodyRect
	mov ecx,dword ptr [ebp+0x74]
	mov edx,dword ptr [ebp+0x38]
	push ecx
	mov ecx,dword ptr [ebp+0x3C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x40]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x44]
	mov dword ptr [eax+8],edx
	push ebx
	mov dword ptr [eax+0xC],ecx
	push edi
	mov ecx,esi
	call CMob::MobBullet::Container::ProcessAttack
	mov eax,dword ptr [edi+0xD0]
	mov dword ptr [ebp+0x58],eax
	test eax,eax
	je Block92

 Block37:
	lea edx,[ebp+0x58]
	push edx
	mov dword ptr [ebp+0x4C],eax
	call ZList<CMob::ATTACKENTRY>::GetNext
	mov esi,eax
	mov eax,dword ptr [ebp+0x74]
	add esp,4
	sub eax,dword ptr [esi]
	js Block91

 Block38:
	mov ecx,dword ptr [esi+0x1C]
	push ecx
	mov ecx,dword ptr [edi+0x174]
	call CMobTemplate::GetAttackInfo
	mov dword ptr [ebp+0x60],eax
	test eax,eax
	je Block41

 Block39:
	mov edx,eax
	cmp dword ptr [edx+0x74],0
	je Block41

 Block40:
	fld qword ptr [__real_403e000000000000]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	push 0
	push 0
	push 1
	sub esp,8
	fstp qword ptr [esp]
	call CAnimationDisplayer::Effect_Tremble

 Block41:
	mov eax,dword ptr [esi+4]
	test eax,eax
	jne Block72

 Block42:
	mov eax,dword ptr [esi+0x1C]
	add eax,0xD
	mov dword ptr [ebp+0x64],eax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block48

 Block43:
	cmp dword ptr [eax+0xA8],0
	je Block48

 Block44:
	mov ecx,edi
	call CMob::GetOneTimeAction
	cmp eax,dword ptr [ebp+0x64]
	jne Block48

 Block45:
	mov ecx,edi
	call CMob::_ZtlSecureGet_m_nMobCtrlState
	cmp eax,4
	je Block47

 Block46:
	mov ecx,edi
	call CMob::_ZtlSecureGet_m_nMobCtrlState
	cmp eax,3
	jne Block48

 Block47:
	mov ecx,edi
	call CMob::GetOneTimeActionRemain
	add eax,dword ptr [ebp+0x74]
	mov ecx,dword ptr [esi+0x1C]
	mov dword ptr [edi+0x5CC],eax
	xor eax,eax
	push eax
	push eax
	push eax
	push eax
	push 0xE
	push 1
	mov dword ptr [edi+0x5C8],ecx
	mov edx,dword ptr [esi+0x18]
	push eax
	mov eax,dword ptr [ebp+0x64]
	push edx
	push eax
	mov ecx,edi
	call CMob::GenerateMovePath
	jmp Block58

 Block48:
	lea ecx,[esi+8]
	push ecx
	lea edx,[ebp+0x38]
	push edx
	lea eax,[ebp-0x1C]
	push eax
	call IntersectRect
	test eax,eax
	je Block58

 Block49:
	mov ecx,edi
	call CMob::IsNotEnemyMob
	test eax,eax
	jne Block58

 Block50:
	lea ecx,[ebp+0x50]
	push ecx
	mov ecx,ebx
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	mov dword ptr [ebp+0x64],eax
	jmp Block53

 Block52:
	mov dword ptr [ebp+0x64],0

 Block53:
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block55

 Block54:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block55:
	mov ecx,dword ptr [ebp+0x60]
	cmp dword ptr [ecx+0x28],0
	je Block57

 Block56:
	mov edx,dword ptr [ebp+0x64]
	cmp dword ptr [edx+0x1A0],0
	je Block58

 Block57:
	mov edx,dword ptr [esi+0x1C]
	mov eax,dword ptr [ebx]
	mov eax,dword ptr [eax+0x48]
	xor ecx,ecx
	cmp dword ptr [esi+0x18],ecx
	push 1
	push 1
	sete cl
	push 0
	lea ecx,[ecx+ecx-1]
	push ecx
	push edx
	push edi
	push 0
	push 0
	push 0
	push 0
	mov ecx,ebx
	call eax

 Block58:
	push 2
	lea ecx,[ebp+0x30]
	push ecx
	lea eax,[esi+8]
	push eax
	mov ecx,ebx
	call CUserLocal::FindHitSummonedInRect
	xor ebx,ebx
	mov dword ptr [ebp+0x64],eax
	test eax,eax
	jle Block68

 Block59:
	mov ecx,dword ptr [ebp+ebx*4+0x30]
	lea edx,[ebp+0x48]
	push edx
	call CSummoned::GetVecCtrl
	mov eax,dword ptr [eax]
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	mov dword ptr [ebp+0x5C],eax
	jmp Block62

 Block61:
	mov dword ptr [ebp+0x5C],0

 Block62:
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	mov eax,dword ptr [ebp+0x60]
	cmp dword ptr [eax+0x28],0
	je Block66

 Block65:
	mov ecx,dword ptr [ebp+0x5C]
	cmp dword ptr [ecx+0x1A0],0
	je Block67

 Block66:
	mov eax,dword ptr [esi+0x1C]
	mov ecx,dword ptr [ebp+ebx*4+0x30]
	xor edx,edx
	cmp dword ptr [esi+0x18],edx
	sete dl
	lea edx,[edx+edx-1]
	push edx
	push eax
	push edi
	push 0
	push 0
	push 0
	call CSummoned::SetDamaged

 Block67:
	inc ebx
	cmp ebx,dword ptr [ebp+0x64]
	jl Block59

 Block68:
	push 1
	push 1
	push 0
	push 0
	push 0
	push 0
	push 0xF
	lea ecx,[ebp-0x58]
	push ecx
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	lea eax,[esi+8]
	push eax
	call CMobPool::FindHitMobInRect
	xor ebx,ebx
	mov dword ptr [ebp+0x64],eax
	test eax,eax
	jle Block90

 Block69:
	mov edi,edi

 Block70:
	mov eax,dword ptr [esi+0x1C]
	mov ecx,dword ptr [ebp+ebx*4-0x58]
	xor edx,edx
	cmp dword ptr [esi+0x18],edx
	sete dl
	lea edx,[edx+edx-1]
	push edx
	push eax
	push edi
	push 0
	push 0
	push 0
	call CMob::SetDamagedByMob
	inc ebx
	cmp ebx,dword ptr [ebp+0x64]
	jl Block70

 Block71:
	jmp Block90

 Block72:
	cmp eax,3
	je Block83

 Block73:
	cmp eax,4
	je Block83

 Block74:
	mov eax,dword ptr [esi+8]
	mov edx,dword ptr [ebx+0x19E8]
	mov ecx,eax
	shr ecx,2
	and eax,3
	and edx,0x3FFFFFFF
	mov dword ptr [ebp+0x5C],eax
	cmp ecx,edx
	jne Block80

 Block75:
	test eax,eax
	jne Block78

 Block76:
	mov ecx,edi
	call CMob::IsNotEnemyMob
	test eax,eax
	jne Block78

 Block77:
	cmp dword ptr [esi+0x18],eax
	mov ecx,dword ptr [esi+0x1C]
	push 1
	mov edx,dword ptr [ebx]
	push 1
	push eax
	mov edx,dword ptr [edx+0x48]
	sete al
	lea eax,[eax+eax-1]
	push eax
	push ecx
	push edi
	push 0
	push 0
	push 0
	push 0
	mov ecx,ebx
	call edx
	jmp Block90

 Block78:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp+0x28]
	push eax
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [eax+4]
	push ecx
	push eax
	mov dword ptr [ebp-4],0xA
	call get_summon_skill_id_from_idx
	add esp,8
	push eax
	lea edx,[ebp+8]
	push edx
	mov ecx,ebx
	call CUser::GetSummoned
	mov ebx,dword ptr [eax+4]
	lea ecx,[ebp+8]
	call ZRef<CSummoned>::~ZRef<CSummoned>
	lea ecx,[ebp+0x28]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CharacterData>::~ZRef<CharacterData>
	test ebx,ebx
	je Block90

 Block79:
	mov ecx,dword ptr [esi+0x1C]
	xor eax,eax
	cmp dword ptr [esi+0x18],eax
	sete al
	lea eax,[eax+eax-1]
	push eax
	push ecx
	push edi
	push 0
	push 0
	push 0
	mov ecx,ebx
	call CSummoned::SetDamaged
	jmp Block90

 Block80:
	cmp eax,3
	jne Block90

 Block81:
	push ecx
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	call CMobPool::GetMob
	test eax,eax
	je Block90

 Block82:
	mov ecx,dword ptr [esi+0x1C]
	xor edx,edx
	cmp dword ptr [esi+0x18],edx
	sete dl
	lea edx,[edx+edx-1]
	push edx
	push ecx
	push edi
	push 0
	push 0
	push 0
	mov ecx,eax
	call CMob::SetDamagedByMob
	jmp Block90

 Block83:
	lea eax,[esi+8]
	push eax
	lea edx,[ebp+0x38]
	push edx
	lea eax,[ebp-0x1C]
	push eax
	call IntersectRect
	test eax,eax
	je Block86

 Block84:
	mov ecx,edi
	call CMob::IsNotEnemyMob
	test eax,eax
	jne Block86

 Block85:
	cmp dword ptr [esi+0x18],eax
	mov ecx,dword ptr [esi+0x1C]
	push 1
	mov edx,dword ptr [ebx]
	push 1
	push eax
	mov edx,dword ptr [edx+0x48]
	sete al
	lea eax,[eax+eax-1]
	push eax
	push ecx
	push edi
	push 0
	push 0
	push 0
	push 0
	mov ecx,ebx
	call edx

 Block86:
	push 2
	lea eax,[ebp+0x18]
	push eax
	lea eax,[esi+8]
	push eax
	mov ecx,ebx
	call CUserLocal::FindHitSummonedInRect
	xor ebx,ebx
	mov dword ptr [ebp+0x64],eax
	test eax,eax
	jle Block88

 Block87:
	mov edx,dword ptr [esi+0x1C]
	xor ecx,ecx
	cmp dword ptr [esi+0x18],ecx
	sete cl
	lea ecx,[ecx+ecx-1]
	push ecx
	mov ecx,dword ptr [ebp+ebx*4+0x18]
	push edx
	push edi
	push 0
	push 0
	push 0
	call CSummoned::SetDamaged
	inc ebx
	cmp ebx,dword ptr [ebp+0x64]
	jl Block87

 Block88:
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	push 1
	push 1
	push 0
	push 0
	push 0
	push 0
	push 0xF
	lea eax,[ebp-0x58]
	push eax
	lea eax,[esi+8]
	push eax
	call CMobPool::FindHitMobInRect
	xor ebx,ebx
	mov dword ptr [ebp+0x64],eax
	test eax,eax
	jle Block90

 Block89:
	mov edx,dword ptr [esi+0x1C]
	xor ecx,ecx
	cmp dword ptr [esi+0x18],ecx
	sete cl
	lea ecx,[ecx+ecx-1]
	push ecx
	mov ecx,dword ptr [ebp+ebx*4-0x58]
	push edx
	push edi
	push 0
	push 0
	push 0
	call CMob::SetDamagedByMob
	inc ebx
	cmp ebx,dword ptr [ebp+0x64]
	jl Block89

 Block90:
	mov eax,dword ptr [ebp+0x4C]
	push eax
	lea ecx,[edi+0xC4]
	call ZList<CMob::ATTACKENTRY>::RemoveAt
	mov ebx,dword ptr [ebp+0x54]

 Block91:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	jne Block37

 Block92:
	lea esp,[ebp-0x68]
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
// CMob::HideHPIndicator
_SUB_EXCEPTION_HANDLER(23E530)
__SUB_CLASS_THIS0(0023E530, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_23E530
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	cmp dword ptr [ecx+0x4F0],0
	je Block9

 Block1:
	mov eax,3
	mov word ptr [esp+8],ax
	mov dword ptr [esp+0x10],0xFFFFFFFE
	mov ecx,dword ptr [ecx+0x4F0]
	mov dword ptr [esp+0x20],0
	test ecx,ecx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+8]
	push edx
	lea eax,[esp+8]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	cmp word ptr [esp+8],8
	mov dword ptr [esp+0x20],0xFFFFFFFF
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+8],ax
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret

 Block8:
	lea ecx,[esp+8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret
}
}
// CMob::OnMobSkillDelay
__SUB_CLASS_THIS(0023D560, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0x578],eax
	call get_update_time
	add dword ptr [esi+0x578],eax
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x57C],eax
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x580],eax
	call CInPacket::Decode4
	pop edi
	mov dword ptr [esi+0x584],eax
	pop esi
	ret 4
}
}
// CMob::ShowHitEffect
__SUB_CLASS_THIS(0024B140, __thiscall, 47486,  CMob, void, long) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x3E4]
	push edi
	push eax
	lea edi,[esi+0x3DC]
	push edi
	xor ebx,ebx
	call _ZtlSecureFuseHelper<long>::call
	add eax,0xFFFFFFF3
	add esp,8
	cmp eax,8
	jbe Block12

 Block1:
	mov ecx,dword ptr [esi+0x3E4]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add eax,0xFFFFFFEA
	add esp,8
	cmp eax,0x10
	jbe Block12

 Block2:
	mov edx,dword ptr [esi+0x3E4]
	push edx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add eax,0xFFFFFFF9
	add esp,8
	cmp eax,2
	jbe Block12

 Block3:
	cmp dword ptr [esi+0x28C],ebx
	je Block5

 Block4:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block6

 Block5:
	mov eax,dword ptr [esi+0x174]

 Block6:
	mov ecx,dword ptr [eax+0x114]
	push ecx
	add eax,0x10C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp dword ptr [esp+0x10],eax
	jl Block12

 Block7:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x6C]
	push edx
	add eax,0x64
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block9

 Block8:
	call get_update_time
	mov ecx,esi
	mov ebx,eax
	call CMob::_ZtlSecureGet_m_tLastHitExpire
	add eax,0x2710
	cmp ebx,eax
	jle Block12

 Block9:
	mov ecx,esi
	call CMob::GetRandomHitAction
	mov edi,eax
	mov edx,edi
	mov ecx,esi
	call CMob::_ZtlSecurePut_m_nOneTimeAction
	mov ecx,esi
	call CMob::PrepareActionLayer
	push edi
	mov ecx,esi
	call CMob::GetActionDelay
	mov edx,eax
	add edx,ebx
	mov ecx,esi
	call CMob::_ZtlSecurePut_m_tHitExpire
	test eax,eax
	jne Block11

 Block10:
	mov ecx,esi
	call CMob::_ZtlSecureGet_m_tHitExpire
	mov edx,eax
	inc edx
	mov ecx,esi
	call CMob::_ZtlSecurePut_m_tHitExpire

 Block11:
	mov ecx,esi
	call CMob::_ZtlSecureGet_m_tHitExpire
	mov edx,eax
	mov ecx,esi
	call CMob::_ZtlSecurePut_m_tLastHitExpire

 Block12:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CMob::AdjustHPIndicatorPosition
_SUB_EXCEPTION_HANDLER(242F80)
__SUB_CLASS_THIS0(00242F80, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_242F80
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
	cmp dword ptr [ebp+0x4F0],0
	sete al
	test al,al
	sete al
	test al,al
	je Block18

 Block1:
	push 0
	lea eax,[esp+0x40]
	push eax
	call CMob::GetBodyRect
	test eax,eax
	je Block16

 Block2:
	mov edx,dword ptr [ebp+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[ebp+4]
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call edx
	mov edx,dword ptr [esp+0x3C]
	mov ecx,eax
	mov eax,dword ptr [esp+0x44]
	add eax,edx
	cdq
	sub eax,edx
	mov esi,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	sar esi,1
	sub esi,dword ptr [ecx]
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	sub esi,0x1A
	call edx
	mov edi,dword ptr [esp+0x40]
	sub edi,dword ptr [eax+4]
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call ebx
	lea ecx,[esp+0x2C]
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
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x58],0
	call ebx
	lea eax,[esp+0x1C]
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
	mov ebp,dword ptr [ebp+0x4F0]
	mov byte ptr [esp+0x54],1
	test ebp,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	add edi,0xFFFFFFE2
	push edi
	push esi
	mov ecx,ebp
	call IWzVector2D::RelMove
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x54],0
	cmp word ptr [esp+0x1C],si
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x1C]
	push ecx
	call edi

 Block12:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp word ptr [esp+0x2C],si
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block18

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret

 Block15:
	lea eax,[esp+0x2C]
	push eax
	call edi
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret

 Block16:
	mov eax,dword ptr [ebp+0x4F0]
	test eax,eax
	je Block18

 Block17:
	mov dword ptr [ebp+0x4F0],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret
}
}
// CMob::SetRandTimeForAreaAttack
__SUB_CLASS_THIS(00243B80, __thiscall, 47486,  CMob, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFFF3
	push esi
	mov esi,ecx
	cmp eax,8
	ja Block14

 Block1:
	mov ecx,dword ptr [esi+0x174]
	push eax
	call CMobTemplate::GetAttackInfo
	mov ecx,dword ptr [eax+0xC]
	cmp ecx,3
	je Block3

 Block2:
	cmp ecx,4
	jne Block14

 Block3:
	push ebp
	mov ebp,dword ptr [eax+0xA4]
	test ebp,ebp
	je Block13

 Block4:
	push ebx
	mov ebx,dword ptr [eax+0x34]
	mov eax,dword ptr [esi+0x124]
	push edi
	push eax
	lea edi,[esi+0x11C]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,3
	je Block6

 Block5:
	mov ecx,dword ptr [esi+0x124]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,4
	jne Block12

 Block6:
	test ebx,ebx
	jle Block12

 Block7:
	lea edi,[esi+0x574]

 Block8:
	test ebp,ebp
	je Block10

 Block9:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div ebp
	mov esi,edx
	jmp Block11

 Block10:
	xor esi,esi

 Block11:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<long>::InsertBefore
	sub ebx,1
	mov dword ptr [eax],esi
	jne Block8

 Block12:
	pop edi
	pop ebx

 Block13:
	pop ebp

 Block14:
	pop esi
	ret 4
}
}
// calc_priority
__SUB(0023A0B0, __cdecl, 138328,  long, long, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,dword ptr [esp+0xC]
	push esi
	cdq
	mov ecx,eax
	xor ecx,edx
	sub ecx,edx
	mov eax,0x66666667
	imul ecx
	mov eax,dword ptr [esp+0xC]
	sub eax,dword ptr [esp+0x14]
	sar edx,2
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	cdq
	mov ecx,eax
	xor ecx,edx
	sub ecx,edx
	mov eax,0x55555556
	imul ecx
	mov eax,edx
	add esi,edx
	shr eax,0x1F
	add eax,esi
	pop esi
	ret
}
}
// CMob::AnimateAngerIndicator
_SUB_EXCEPTION_HANDLER(23D060)
__SUB_CLASS_THIS0(0023D060, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_23D060
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
	mov esi,ecx
	call get_update_time
	cmp dword ptr [esi+0x98],0
	mov dword ptr [esp+0x18],eax
	jg Block10

 Block1:
	cmp dword ptr [esi+0x4F8],0
	sete al
	test al,al
	sete al
	test al,al
	je Block10

 Block2:
	mov eax,3
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],0xFFFFFFFE
	mov ecx,dword ptr [esi+0x4F8]
	mov dword ptr [esp+0x94],0
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x94],0xFFFFFFFF
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block58

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block9:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block58

 Block10:
	cmp dword ptr [esi+0x4F8],0
	sete al
	test al,al
	sete al
	test al,al
	je Block58

 Block11:
	mov edx,3
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],0xFFFFFFFE
	mov ecx,dword ptr [esi+0x4F8]
	mov dword ptr [esp+0x94],1
	test ecx,ecx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov ebp,8
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp word ptr [esp+0x1C],bp
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x6C]
	push edx
	call edi
	lea eax,[esp+0x6C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	lea ecx,[esp+0x5C]
	push ecx
	mov dword ptr [esp+0x98],2
	call edi
	lea edx,[esp+0x5C]
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
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x98],3
	call edi
	lea ecx,[esp+0x4C]
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
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x98],4
	call edi
	lea eax,[esp+0x3C]
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
	lea ecx,[esp+0x2C]
	mov bl,5
	push ecx
	mov byte ptr [esp+0x98],bl
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov ecx,dword ptr [esi+0x528]
	mov eax,dword ptr [esi+0x98]
	mov edx,dword ptr [esi+0x90]
	lea eax,[ecx+eax*4-4]
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x4F8]
	lea eax,[eax+edx*4]
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x94],6
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x6C]
	push edx
	lea edx,[esp+0x60]
	push edx
	lea edx,[esp+0x54]
	push edx
	lea edx,[esp+0x48]
	push edx
	lea edx,[esp+0x3C]
	push edx
	push eax
	lea eax,[esp+0x94]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x7C],bp
	jne Block38

 Block32:
	mov eax,dword ptr [esp+0x84]
	xor ecx,ecx
	mov word ptr [esp+0x7C],cx
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block34:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block35:
	mov byte ptr [esp+0x94],bl
	cmp word ptr [esp+0x2C],bp
	jne Block39

 Block36:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block40

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block38:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x7C]
	push edx
	call edi
	jmp Block35

 Block39:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block40:
	mov byte ptr [esp+0x94],4
	cmp word ptr [esp+0x3C],bp
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block44:
	mov byte ptr [esp+0x94],3
	cmp word ptr [esp+0x4C],bp
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block48:
	mov byte ptr [esp+0x94],2
	cmp word ptr [esp+0x5C],bp
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x5C]
	push ecx
	call edi

 Block52:
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp word ptr [esp+0x6C],bp
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea eax,[esp+0x6C]
	push eax
	call edi

 Block56:
	mov ecx,dword ptr [esp+0x18]
	mov edx,ecx
	sub edx,dword ptr [esi+0x94]
	cmp edx,0x64
	jl Block58

 Block57:
	inc dword ptr [esi+0x90]
	mov eax,dword ptr [esi+0x90]
	mov edi,dword ptr [esi+0x98]
	mov ebx,dword ptr [esi+0x524]
	cdq
	idiv dword ptr [ebx+edi*4-4]
	mov dword ptr [esi+0x94],ecx
	mov dword ptr [esi+0x90],edx

 Block58:
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
// CMob::SetMoveAction
__SUB_CLASS_THIS(0024EC40, __thiscall, 47485,  CMob, void, long, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push edi
	push eax
	mov esi,ecx
	call CMob::GetFineMoveDirAction
	cmp dword ptr [esp+0x10],0
	mov edi,eax
	jne Block2

 Block1:
	mov ecx,dword ptr [esi+0x3D8]
	push ecx
	lea edx,[esi+0x3D0]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp edi,eax
	je Block4

 Block2:
	lea edx,[esi+0x3D0]
	mov ecx,edi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3D8],eax
	mov eax,dword ptr [esi+0x3E4]
	push eax
	lea ecx,[esi+0x3DC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jg Block4

 Block3:
	mov ecx,esi
	call CMob::PrepareActionLayer

 Block4:
	pop edi
	pop esi
	ret 8
}
}
// CMob::OnHPIndicator
__SUB_CLASS_THIS(00242EF0, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esi+0x568],eax
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x6C]
	push ecx
	add eax,0x64
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x1E8]
	push edx
	add eax,0x1E0
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block5

 Block2:
	cmp dword ptr [esi+0x568],0
	jne Block4

 Block3:
	lea ecx,[esi+0x50C]
	call ZMap<long, long, long>::RemoveAll

 Block4:
	call timeGetTime
	add eax,0x1F4
	mov dword ptr [esp+8],eax
	push 0
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esi+0x50C]
	call ZMap<long, long, long>::Insert
	mov ecx,dword ptr [esi+0x568]
	mov dword ptr [eax+0xC],ecx

 Block5:
	pop esi
	ret 4
}
}
// CMob::ClearEscortInfo
__SUB_CLASS_THIS0(0023B980, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x108]
	test eax,eax
	je Block5

 Block1:
	lea ecx,[eax-0xC]
	test ecx,ecx
	je Block5

 Block2:
	test eax,eax
	je Block4

 Block3:
	lea ecx,[eax-0xC]
	call CVecCtrlMob::ClearEscortInfo
	mov dword ptr [esi+0x5B8],0
	pop esi
	ret

 Block4:
	xor ecx,ecx
	call CVecCtrlMob::ClearEscortInfo

 Block5:
	mov dword ptr [esi+0x5B8],0
	pop esi
	ret
}
}
// _vectorconstructoriterator_
__SUB(0023A070, __stdcall, 138327,  void, void*, uint32_t, int32_t, PROC*) {
__asm {

 Block0:
	push edi
	mov edi,dword ptr [esp+0x10]
	sub edi,1
	js Block4

 Block1:
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push ebp
	mov ebp,dword ptr [esp+0x14]
	push esi
	mov esi,dword ptr [esp+0x14]
	lea esp,[esp]

 Block2:
	mov ecx,esi
	call ebx
	add esi,ebp
	sub edi,1
	jns Block2

 Block3:
	pop esi
	pop ebp
	pop ebx

 Block4:
	pop edi
	ret 0x10
}
}
// CMob::ProcessStatReset
__SUB_CLASS_THIS(00250030, __thiscall, 47571,  CMob, void, NakedParam<MY_UINT128>, CInPacket&) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x28]
	push esi
	push edi
	push ebx
	sub esp,0x10
	mov esi,ecx
	mov ecx,esp
	push 0x80
	lea eax,[esp+0x38]
	push eax
	lea edi,[esi+0x188]
	call MY_UINT128::_ctor_2
	mov ecx,edi
	call MobStat::Reset_1
	push offset MobStat::MS_DamagedElemAttr
	lea ecx,[esp+0x10]
	push ecx
	lea ecx,[esp+0x28]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block5

 Block1:
	cmp dword ptr [esi+0x28C],0
	je Block3

 Block2:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block4

 Block3:
	mov eax,dword ptr [esi+0x174]

 Block4:
	add eax,0x118
	push eax
	mov ecx,edi
	call MobStat::ResetDamagedElemAttr

 Block5:
	push offset MobStat::MS_Doom
	lea edx,[esp+0x10]
	push edx
	lea ecx,[esp+0x28]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block7

 Block6:
	mov eax,dword ptr [esi+0x174]
	push eax
	mov ecx,edi
	call MobStat::SetFrom
	push 0
	mov ecx,esi
	call CMob::OnDoomed

 Block7:
	push offset MobStat::MS_Dazzle
	lea ecx,[esp+0x10]
	push ecx
	lea ecx,[esp+0x28]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block10

 Block8:
	push 0
	push 0
	push 0
	mov ecx,esi
	call CMob::ChaseTarget
	mov ecx,esi
	call CMob::IsDazzledMobByMe
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	push esi
	call CMobPool::CancelChaseTarget

 Block10:
	mov ecx,ebx
	call CInPacket::Decode1
	movzx edx,al
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x4EC],edx
	call CMob::UpdateAffectedSkillList
	push offset MobStat::MS_Speed
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x28]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block12

 Block11:
	mov ecx,esi
	call CMob::SetShoeAttr

 Block12:
	mov ecx,esi
	call CMob::IsActive
	test eax,eax
	je Block18

 Block13:
	sub esp,0x10
	mov ecx,esp
	push 0x80
	lea edx,[esp+0x34]
	push edx
	call MY_UINT128::_ctor_2
	call MobStat::IsMovementAffectingStat
	add esp,0x10
	test eax,eax
	je Block18

 Block14:
	mov ecx,ebx
	call CInPacket::Decode1
	mov esi,dword ptr [esi+0x108]
	mov byte ptr [esp+0x30],al
	test esi,esi
	je Block16

 Block15:
	lea eax,[esi-0xC]
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	mov ecx,dword ptr [esp+0x30]
	push ecx
	lea ecx,[eax+0x244]
	call CMovePath::SetStatChangedPoint

 Block18:
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0x14
}
}
// CMob::OnSuspendReset
_SUB_EXCEPTION_HANDLER(24ACB0)
__SUB_CLASS_THIS(0024ACB0, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24ACB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x3C]
	call CInPacket::Decode1
	test al,al
	je Block20

 Block1:
	lea edx,[esi+0x3DC]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esi+0x3E4],eax
	lea eax,[esp+0x1C]
	push eax
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea edx,[esp+0xC]
	push edx
	mov dword ptr [esp+0x38],0
	call edi
	lea eax,[esp+0xC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [esi+0x4E8]
	mov byte ptr [esp+0x34],1
	test ecx,ecx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x3C]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x34],2
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x10]
	push edx
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	cmp word ptr [esp+0xC],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x34],0
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0xC],ax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0xC]
	push ecx
	call edi

 Block15:
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x34],0xFFFFFFFF
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[esp+0x1C]
	push eax
	call edi

 Block19:
	mov ecx,esi
	call CMob::SetLayerZ
	mov ecx,esi
	call CMob::PrepareActionLayer
	lea edx,[esi+0x474]
	xor ecx,ecx
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [esi+0x47C],eax
	mov dword ptr [esi+0x160],1

 Block20:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 4
}
}
// CMob::DAMAGEINFO::_ZtlSecureGet_bLeft
__SUB_CLASS0(0023A840, __fastcall, 49844,  CMob::DAMAGEINFO, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x38]
	push eax
	add ecx,0x30
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	ret
}
}
// CMob::DAMAGEINFO::_ZtlSecureGet_nMoveEndingPosX
__SUB_CLASS0(0023A920, __fastcall, 49839,  CMob::DAMAGEINFO, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x8C]
	push eax
	add ecx,0x84
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::MobBullet::PrepareBulletLayer
_SUB_EXCEPTION_HANDLER(2496D0)
__SUB_CLASS_THIS(002496D0, __thiscall, 50168,  CMob::MobBullet, _x_com_ptr<IWzGr2DLayer>, NakedParam<_x_com_ptr<IWzVector2D>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2496D0
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
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x20],ebx
	xor edi,edi
	mov dword ptr [esp+0x84],ebx
	mov dword ptr [esp+0x24],edi
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x88],1
	call ebp
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x88],2
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esi+0x3C]
	push ebx
	push ebx
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block6

 Block5:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov byte ptr [esp+0x98],4
	cmp dword ptr [_D_G_RM],ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x80]
	mov byte ptr [esp+0x98],3
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x8C],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	cmp word ptr [esp+0x6C],8
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x84],7
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x6C]
	push edx
	call ebp

 Block15:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x84],8
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x2C]
	push ecx
	call ebp

 Block19:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x84],9
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0x3C]
	push eax
	call ebp

 Block23:
	mov ebp,dword ptr [esp+0x18]
	cmp ebp,ebx
	sete al
	mov byte ptr [esp+0x17],al
	test al,al
	jne Block89

 Block24:
	cmp ebp,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x1C]
	push edx
	push ebp
	mov dword ptr [esp+0x24],ebx
	call eax
	cmp eax,ebx
	jge Block28

 Block27:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebp
	push eax
	call _com_issue_errorex

 Block28:
	cmp dword ptr [esp+0x1C],ebx
	je Block89

 Block29:
	mov ecx,dword ptr [esi+0x34]
	push ebx
	push 0xFF
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push ebx
	mov dword ptr [eax],ebx
	mov edx,dword ptr [esp+0xA4]
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0xAC]
	mov dword ptr [esp+0x44],esp
	cmp eax,ebx
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block31:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebp
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x4C],esp
	push ebp
	call ecx
	lea edx,[esp+0x40]
	push edx
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	add esp,0x28
	cmp eax,ebx
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x28],edi
	call edx

 Block33:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	cmp edi,ebx
	sete al
	test al,al
	je Block40

 Block36:
	mov eax,dword ptr [ebp]
	mov esi,dword ptr [esp+0x8C]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esi],ebx
	mov byte ptr [esp+0x88],1
	call ecx
	mov byte ptr [esp+0x84],0
	cmp edi,ebx
	je Block38

 Block37:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block38:
	mov eax,dword ptr [esp+0x90]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp eax,ebx
	je Block93

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block93

 Block40:
	cmp dword ptr [esp+0x94],ebx
	je Block60

 Block41:
	cmp edi,ebx
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x84],0xA
	cmp ecx,ebx
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	call IWzVector2D::Getrx
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x84],9
	cmp eax,ebx
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x84],0xB
	cmp ecx,ebx
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	call IWzVector2D::Getry
	mov ebp,eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x84],9
	cmp eax,ebx
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0x88],0xC
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x1C]
	mov bl,0xD
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x88],bl
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x84],0xE
	test esi,esi
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea ecx,[esp+0x4C]
	push ecx
	lea edx,[esp+0x60]
	push edx
	push ebp
	mov ecx,edi
	call IWzGr2DLayer::Getwidth
	add eax,dword ptr [esp+0x34]
	mov ecx,esi
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x84],bl
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	lea ecx,[esp+0x5C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x84],9
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0x88],0xF
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x28]
	mov bl,0x10
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x88],bl
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x84],0x11
	test esi,esi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea ecx,[esp+0x4C]
	push ecx
	lea edx,[esp+0x60]
	push edx
	mov ecx,edi
	call IWzGr2DLayer::Getheight
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getwidth
	neg eax
	push eax
	mov ecx,esi
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x84],bl
	test eax,eax
	je Block59

 Block58:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block59:
	lea ecx,[esp+0x5C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x84],9
	call Ztl_variant_t::~Ztl_variant_t
	mov ebp,dword ptr [esp+0x18]
	xor ebx,ebx

 Block60:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x5C]
	push eax
	call esi
	lea ecx,[esp+0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	lea edx,[esp+0x4C]
	mov bl,0x12
	push edx
	mov byte ptr [esp+0x88],bl
	call esi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	mov byte ptr [esp+0x84],0x13
	test edi,edi
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea ecx,[esp+0x5C]
	push ecx
	lea edx,[esp+0x50]
	push edx
	push 0x20
	mov ecx,edi
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x84],bl
	cmp word ptr [esp+0x4C],si
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov byte ptr [esp+0x84],9
	cmp word ptr [esp+0x5C],si
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block74:
	xor esi,esi
	cmp byte ptr [esp+0x17],0
	sete al
	test al,al
	je Block77

 Block75:
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0xB20
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x64]
	mov byte ptr [esp+0x8C],0x14
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x90],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x8C],0x15
	mov dword ptr [esp+0x28],2
	call get_int32
	mov esi,eax
	add esp,8
	test esi,esi
	je Block77

 Block76:
	mov bl,1
	jmp Block78

 Block77:
	xor bl,bl

 Block78:
	test byte ptr [esp+0x20],2
	mov dword ptr [esp+0x84],9
	je Block80

 Block79:
	lea ecx,[esp+0x5C]
	call Ztl_variant_t::~Ztl_variant_t

 Block80:
	test bl,bl
	je Block87

 Block81:
	cmp dword ptr [esp+0x94],0
	mov eax,3
	mov word ptr [esp+0x5C],ax
	je Block83

 Block82:
	mov dword ptr [esp+0x64],esi
	mov byte ptr [esp+0x84],0x16
	jmp Block84

 Block83:
	neg esi
	mov dword ptr [esp+0x64],esi
	mov byte ptr [esp+0x84],0x17

 Block84:
	mov ecx,dword ptr [esp+0x90]
	test ecx,ecx
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	fldz
	lea edx,[esp+0x5C]
	push edx
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x84],9
	call Ztl_variant_t::~Ztl_variant_t

 Block87:
	mov eax,dword ptr [edi]
	mov esi,dword ptr [esp+0x8C]
	mov ecx,dword ptr [eax+4]
	push edi
	mov dword ptr [esi],edi
	call ecx
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov byte ptr [esp+0x88],1
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0x88],0
	call edx
	mov eax,dword ptr [esp+0x90]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	test eax,eax
	je Block93

 Block88:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block93

 Block89:
	mov esi,dword ptr [esp+0x8C]
	mov dword ptr [esi],ebx
	mov byte ptr [esp+0x84],1
	cmp ebp,ebx
	je Block91

 Block90:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block91:
	mov eax,dword ptr [esp+0x90]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp eax,ebx
	je Block93

 Block92:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block93:
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
// CMob::_ZtlSecurePut_m_tHitExpire
__SUB_CLASS(0023E650, __fastcall, 47542,  CMob, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x3E8]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x3F0],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMob::IsMobOurTeam
__SUB_CLASS_THIS0(0023B4A0, __thiscall, 47473,  CMob, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [_D_G_PSTAGE+4]
	push edi
	mov edi,ecx
	test esi,esi
	je Block6

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block6

 Block2:
	cmp dword ptr [TSingleton<CUserLocal>::ms_pInstance],0
	je Block6

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x1C]
	mov ecx,esi
	call edx
	cmp eax,0xA
	je Block5

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x1C]
	mov ecx,esi
	call edx
	cmp eax,0xF
	jne Block6

 Block5:
	mov eax,dword ptr [edi+0x3C8]
	mov edx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	xor ecx,ecx
	cmp eax,dword ptr [edx+0x2DF0]
	pop edi
	sete cl
	pop esi
	mov eax,ecx
	ret

 Block6:
	pop edi
	xor eax,eax
	pop esi
	ret
}
}
// CMob::DAMAGEINFO::_ZtlSecureGet_nSkillID
__SUB_CLASS0(0023A800, __fastcall, 49839,  CMob::DAMAGEINFO, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x20]
	push eax
	add ecx,0x18
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::GetOneTimeActionRemain
__SUB_CLASS_THIS0(0023E6D0, __thiscall, 47482,  CMob, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x3E4]
	push eax
	lea ecx,[esi+0x3DC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jg Block2

 Block1:
	xor eax,eax
	pop esi
	ret

 Block2:
	mov edx,dword ptr [esi+0x40C]
	push edi
	push edx
	lea eax,[esi+0x404]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x418]
	push ecx
	add esi,0x410
	push esi
	mov edi,eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x10
	add eax,edi
	pop edi
	pop esi
	ret
}
}
// CMob::GetMoveAbility
__SUB_CLASS_THIS0(0023A690, __thiscall, 47482,  CMob, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x174]
	mov ecx,dword ptr [eax+0x48]
	push ecx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::UpdateTimeBomb
_SUB_EXCEPTION_HANDLER(243C30)
__SUB_CLASS_THIS0(00243C30, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_243C30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esi+0x5B0]
	call get_update_time
	cmp eax,edi
	jl Block5

 Block1:
	test edi,edi
	je Block5

 Block2:
	push 0xEB
	lea ecx,[esp+0x20]
	mov dword ptr [esi+0x5B0],0
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi+0x170]
	push eax
	lea ecx,[esi+0x168]
	push ecx
	mov dword ptr [esp+0x3C],0
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode4
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x6C]
	push edx
	add eax,0x64
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block4

 Block3:
	push 1
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	call CMob::GetBodyRect
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+0x14]
	lea eax,[edx+ecx]
	cdq
	sub eax,edx
	sar eax,1
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode4
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x10]
	add eax,ecx
	cdq
	sub eax,edx
	sar eax,1
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode4

 Block4:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[esp+0xC]
	push eax
	call edx
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[esp+0xC]
	push eax
	call edx
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode4
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block5:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret
}
}
// CMob::OnDoomed
__SUB_CLASS_THIS(0024ED40, __thiscall, 47472,  CMob, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	push esi
	push edi
	mov esi,ecx
	je Block9

 Block1:
	cmp dword ptr [esi+0x588],0
	je Block6

 Block2:
	mov eax,dword ptr [esi+0x108]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	movzx ecx,byte ptr [esi+0x58C]
	push ecx
	lea ecx,[eax+0x244]
	call CMovePath::SetStatChangedPoint
	mov dword ptr [esi+0x588],0

 Block6:
	cmp dword ptr [esi+0x178],0
	jne Block31

 Block7:
	push 0x18705
	call CMobTemplate::GetMobTemplate
	add esp,4
	push eax
	lea ecx,[esi+0x188]
	call MobStat::SetFromWhenDoom
	push 0x18705
	call CMobTemplate::GetMobTemplate
	mov dword ptr [esi+0x178],eax
	mov edi,dword ptr [esi+0x4E8]
	add esp,4
	test edi,edi
	jne Block13

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	cmp dword ptr [esi+0x178],0
	je Block31

 Block10:
	mov dword ptr [esi+0x178],0

 Block11:
	mov eax,dword ptr [esi+0x104]
	test eax,eax
	je Block16

 Block12:
	lea edi,[eax-0xC]
	jmp Block17

 Block13:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFF
	push edi
	call eax
	test eax,eax
	jge Block15

 Block14:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block15:
	call get_update_time
	add eax,0x4B0
	mov dword ptr [esi+0x140],eax
	jmp Block11

 Block16:
	xor edi,edi

 Block17:
	mov eax,dword ptr [esi+0x108]
	push ebx
	test eax,eax
	je Block19

 Block18:
	lea ebx,[eax-0xC]
	jmp Block20

 Block19:
	xor ebx,ebx

 Block20:
	cmp dword ptr [esi+0x28C],0
	je Block22

 Block21:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block23

 Block22:
	mov eax,dword ptr [esi+0x174]

 Block23:
	mov ecx,dword ptr [eax+0x48]
	push ecx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [edi+0x2F8],eax
	cmp dword ptr [esi+0x28C],0
	je Block25

 Block24:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block26

 Block25:
	mov eax,dword ptr [esi+0x174]

 Block26:
	mov edx,dword ptr [eax+0x48]
	push edx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ecx,esi
	mov dword ptr [ebx+0x2F8],eax
	call CMob::SetShoeAttr
	mov ecx,esi
	call CMob::ClearActionLayer
	lea edx,[esi+0x3DC]
	or ecx,0xFFFFFFFF
	call _ZtlSecureTearHelper<long>::call
	mov ecx,esi
	mov dword ptr [esi+0x3E4],eax
	call CMob::PrepareActionLayer
	mov ecx,edi
	call CVecCtrl::ResolveMoveAction
	mov ecx,ebx
	call CVecCtrl::ResolveMoveAction
	mov eax,dword ptr [edi+0x1D8]
	push 1
	push eax
	mov ecx,esi
	call CMob::SetMoveAction
	cmp dword ptr [esi+0x28C],0
	pop ebx
	je Block29

 Block27:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	je Block29

 Block28:
	mov esi,eax
	jmp Block30

 Block29:
	mov esi,dword ptr [esi+0x174]

 Block30:
	mov ecx,dword ptr [esi+0x48]
	push ecx
	add esi,0x40
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push 0
	push edi
	push eax
	lea ecx,[edi+0x244]
	call CMovePath::DiscardByInterrupt

 Block31:
	pop edi
	pop esi
	ret 4
}
}
// CMob::GetPos
__SUB_CLASS_THIS0(0024CFF0, __thiscall, 47514,  CMob, const tagPOINT) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x534]
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
// CMob::OnLayerZChanged
__SUB_CLASS_THIS(0023B470, __thiscall, 47512,  CMob, void, const CVecCtrl*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xC
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	cmp eax,dword ptr [ecx+0x100]
	jne Block5

 Block4:
	add ecx,0xFFFFFFFC
	call CMob::SetLayerZ

 Block5:
	ret 4
}
}
// CMob::IsMultiBallAttack
__SUB_CLASS_THIS(00241100, __thiscall, 47565,  CMob, int32_t, long, long&, long&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	lea edx,[eax-0xD]
	cmp edx,8
	ja Block5

 Block1:
	mov ecx,dword ptr [ecx+0x174]
	add eax,0xFFFFFFF3
	push eax
	call CMobTemplate::GetAttackInfo
	test eax,eax
	je Block5

 Block2:
	cmp dword ptr [eax+0xC],2
	jne Block5

 Block3:
	mov ecx,dword ptr [eax+0x20]
	cmp ecx,1
	jle Block5

 Block4:
	mov edx,dword ptr [esp+8]
	mov dword ptr [edx],ecx
	mov eax,dword ptr [eax+0x34]
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [ecx],eax
	mov eax,1
	ret 0xC

 Block5:
	xor eax,eax
	ret 0xC
}
}
// CMob::CMob
_SUB_EXCEPTION_HANDLER(24CA30)
__SUB_CLASS_THIS(0024CA30, __thiscall, 47468,  CMob, void, CMobTemplate*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24CA30
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
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esi],offset CMob::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMob::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMob::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x88],ebx
	mov dword ptr [esi+0x8C],ebx
	mov dword ptr [esi+0x90],ebx
	mov dword ptr [esi+0x94],ebx
	mov dword ptr [esi+0x98],ebx
	mov dword ptr [esi+0x9C],ebx
	mov dword ptr [esi+0xA0],ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esi+0xAC],ebx
	int 3// TODO: 	mov dword ptr [esi+0xB0],offset ZList<CMob::AFFECTEDSKILLENTRY>::`vftable'
	mov dword ptr [esi+0xB8],ebx
	mov dword ptr [esi+0xBC],ebx
	mov dword ptr [esi+0xC0],ebx
	int 3// TODO: 	mov dword ptr [esi+0xC4],offset ZList<CMob::ATTACKENTRY>::`vftable'
	mov dword ptr [esi+0xCC],ebx
	mov dword ptr [esi+0xD0],ebx
	mov dword ptr [esi+0xD4],ebx
	int 3// TODO: 	mov eax,offset ZList<_x_com_ptr<IWzGr2DLayer>>::`vftable'
	mov dword ptr [esi+0xD8],eax
	mov dword ptr [esi+0xE0],ebx
	mov dword ptr [esi+0xE4],ebx
	mov dword ptr [esi+0xE8],ebx
	mov dword ptr [esi+0xEC],eax
	mov dword ptr [esi+0xF4],ebx
	mov dword ptr [esi+0xF8],ebx
	mov dword ptr [esi+0xFC],ebx
	mov dword ptr [esi+0x104],ebx
	mov dword ptr [esi+0x108],ebx
	mov dword ptr [esi+0x10C],ebx
	mov eax,dword ptr [esp+0x28]
	lea ebp,[esi+0x188]
	mov dword ptr [esi+0x130],ebx
	mov dword ptr [esi+0x13C],ebx
	mov dword ptr [esi+0x140],ebx
	mov dword ptr [esi+0x15C],ebx
	mov dword ptr [esi+0x160],ebx
	mov dword ptr [esi+0x174],eax
	mov dword ptr [esi+0x178],ebx
	int 3// TODO: 	mov dword ptr [ebp+0x224],offset ZList<MobStat::BURNED_INFO>::`vftable'
	mov dword ptr [ebp+0x22C],ebx
	mov dword ptr [ebp+0x230],ebx
	mov dword ptr [ebp+0x234],ebx
	mov dword ptr [esi+0x3C8],0xFF
	mov dword ptr [esi+0x3CC],ebx
	mov dword ptr [esi+0x448],ebx
	mov dword ptr [esi+0x44C],ebx
	mov dword ptr [esi+0x450],ebx
	mov dword ptr [esi+0x454],ebx
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esi+0x458]
	push 0x2B
	mov byte ptr [esp+0x28],0xD
	mov dword ptr [ecx],ebx
	call ZArray<ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>>::_Alloc
	mov dword ptr [esi+0x480],ebx
	mov dword ptr [esi+0x484],ebx
	mov dword ptr [esi+0x488],ebx
	mov dword ptr [esi+0x48C],ebx
	mov dword ptr [esi+0x490],ebx
	int 3// TODO: 	mov dword ptr [esi+0x498],offset ZList<unsigned long>::`vftable'
	mov dword ptr [esi+0x4A0],ebx
	mov dword ptr [esi+0x4A4],ebx
	mov dword ptr [esi+0x4A8],ebx
	int 3// TODO: 	mov dword ptr [esi+0x4AC],offset ZList<CMob::DAMAGEINFO>::`vftable'
	mov dword ptr [esi+0x4B4],ebx
	mov dword ptr [esi+0x4B8],ebx
	mov dword ptr [esi+0x4BC],ebx
	int 3// TODO: 	mov dword ptr [esi+0x4C0],offset ZList<CMob::HITEFFECT>::`vftable'
	mov dword ptr [esi+0x4C8],ebx
	mov dword ptr [esi+0x4CC],ebx
	mov dword ptr [esi+0x4D0],ebx
	int 3// TODO: 	mov dword ptr [esi+0x4D4],offset ZList<CMob::DROPPICKUP>::`vftable'
	mov dword ptr [esi+0x4DC],ebx
	mov dword ptr [esi+0x4E0],ebx
	mov dword ptr [esi+0x4E4],ebx
	mov dword ptr [esi+0x4E8],ebx
	mov dword ptr [esi+0x4F0],ebx
	mov dword ptr [esi+0x4F4],ebx
	mov dword ptr [esi+0x4F8],ebx
	mov dword ptr [esi+0x4FC],1
	mov dword ptr [esi+0x500],ebx
	mov dword ptr [esi+0x504],ebx
	mov dword ptr [esi+0x508],ebx
	lea ecx,[esi+0x50C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, long, long>::`vftable'
	mov dword ptr [ecx+4],ebx
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],ebx
	call ZMap<long, long, long>::_CalcAutoGrow
	mov dword ptr [esi+0x524],ebx
	mov dword ptr [esi+0x528],ebx
	mov dword ptr [esi+0x52C],ebx
	mov dword ptr [esi+0x534],ebx
	lea ecx,[esi+0x538]
	mov byte ptr [esp+0x20],0x1B
	call SECPOINT::_ctor_default
	lea ecx,[esi+0x550]
	mov byte ptr [esp+0x20],0x1C
	call SECPOINT::_ctor_default
	mov dword ptr [esi+0x568],0x64
	mov dword ptr [esi+0x56C],ebx
	mov dword ptr [esi+0x570],ebx
	mov dword ptr [esi+0x574],ebx
	mov dword ptr [esi+0x578],ebx
	mov dword ptr [esi+0x57C],ebx
	mov dword ptr [esi+0x580],ebx
	mov dword ptr [esi+0x584],ebx
	mov dword ptr [esi+0x588],ebx
	mov byte ptr [esi+0x58C],bl
	int 3// TODO: 	mov dword ptr [esi+0x590],offset ZList<ZRef<CMob::ReservedPacket>>::`vftable'
	mov dword ptr [esi+0x598],ebx
	mov dword ptr [esi+0x59C],ebx
	mov dword ptr [esi+0x5A0],ebx
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],0x20
	lea edi,[esi+0x5A4]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	call _rand
	mov ecx,eax
	lea eax,[edi-0x3FF8]
	add ecx,eax
	mov dword ptr [edi],ecx
	call _rand
	mov cl,byte ptr [edi]
	mov edx,eax
	lea eax,[edi-0x3FF8]
	add edx,eax
	mov eax,dword ptr [edi+8]
	mov dword ptr [edi+4],edx
	mov byte ptr [eax+5],cl
	mov edx,dword ptr [edi+8]
	mov al,byte ptr [edi+4]
	push ebx
	mov ecx,edi
	mov byte ptr [edx+6],al
	call TSecType<int>::SetData
	mov dword ptr [esi+0x5B0],ebx
	mov dword ptr [esi+0x5B8],ebx
	mov dword ptr [esi+0x5BC],ebx
	mov dword ptr [esi+0x5C0],ebx
	mov dword ptr [esi+0x5C8],0xFFFFFFFF
	mov dword ptr [esi+0x5CC],ebx
	int 3// TODO: 	mov dword ptr [esi+0x5D4],offset ZList<ZRef<CMob::MobBullet>>::`vftable'
	mov dword ptr [esi+0x5DC],ebx
	mov dword ptr [esi+0x5E0],ebx
	mov dword ptr [esi+0x5E4],ebx
	int 3// TODO: 	mov dword ptr [esi+0x5D0],offset CMob::MobBullet::Container::`vftable'
	lea edx,[esi+0x110]
	xor ecx,ecx
	mov byte ptr [esp+0x20],0x22
	call _ZtlSecureTearHelper<int>::call
	lea edx,[esi+0x11C]
	or ecx,0xFFFFFFFF
	mov dword ptr [esi+0x118],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x128]
	xor ecx,ecx
	mov dword ptr [esi+0x124],eax
	call _ZtlSecureTearHelper<short>::call
	lea edx,[esi+0x3DC]
	or ecx,0xFFFFFFFF
	mov dword ptr [esi+0x12C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3D0]
	xor ecx,ecx
	mov dword ptr [esi+0x3E4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x168]
	xor ecx,ecx
	mov dword ptr [esi+0x3D8],eax
	mov dword ptr [esi+0x5C4],ebx
	call _ZtlSecureTearHelper<unsigned long>::call
	lea edx,[esi+0x404]
	xor ecx,ecx
	mov dword ptr [esi+0x170],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x410]
	xor ecx,ecx
	mov dword ptr [esi+0x40C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x41C]
	xor ecx,ecx
	mov dword ptr [esi+0x418],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x45C]
	xor ecx,ecx
	mov dword ptr [esi+0x424],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x468]
	xor ecx,ecx
	mov dword ptr [esi+0x464],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x474]
	xor ecx,ecx
	mov dword ptr [esi+0x470],eax
	call _ZtlSecureTearHelper<int>::call
	mov ecx,dword ptr [esi+0x174]
	mov dword ptr [esi+0x47C],eax
	push ecx
	mov ecx,ebp
	call MobStat::SetFrom
	call get_update_time
	mov edi,eax
	lea edx,[esi+0x150]
	mov ecx,edi
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x144]
	mov ecx,edi
	mov dword ptr [esi+0x158],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esp+0x28]
	push 0x3D0
	push edx
	mov dword ptr [esi+0x14C],eax
	mov dword ptr [esi+0x494],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	push ebx
	lea eax,[esi+0x508]
	push eax
	push ecx
	mov byte ptr [esp+0x2C],0x23
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x20],0x22
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
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
// CMob::GetCurTemplate
__SUB_CLASS_THIS0(00239F40, __thiscall, 47478,  CMob, CMobTemplate*) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x28C],0
	je Block2

 Block1:
	mov eax,dword ptr [ecx+0x178]
	test eax,eax
	jne Block3

 Block2:
	mov eax,dword ptr [ecx+0x174]

 Block3:
	ret
}
}
// CMob::GetBodyRect
__SUB_CLASS_THIS(00242140, __thiscall, 47491,  CMob, int32_t, tagRECT&, int32_t) {
__asm {

 Block0:
	sub esp,0x10
	push ebp
	push edi
	mov edi,ecx
	lea ebp,[edi+0x428]
	push ebp
	call IsRectEmpty
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [esp+0x1C]
	push eax
	call SetRectEmpty
	pop edi
	xor eax,eax
	pop ebp
	add esp,0x10
	ret 8

 Block2:
	mov ecx,dword ptr [edi+0x174]
	cmp dword ptr [ecx+0x1A0],0
	push ebx
	push esi
	je Block4

 Block3:
	mov ebx,1
	mov eax,ebp
	jmp Block7

 Block4:
	mov edx,dword ptr [edi+0x3D8]
	push edx
	lea eax,[edi+0x3D0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	add esp,8
	and ebx,1
	je Block6

 Block5:
	mov eax,ebp
	jmp Block7

 Block6:
	lea eax,[edi+0x438]

 Block7:
	mov ecx,dword ptr [eax]
	mov esi,dword ptr [esp+0x24]
	mov dword ptr [esi],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+4],edx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esi+8],ecx
	mov edx,dword ptr [eax+0xC]
	lea ecx,[edi+0x538]
	mov dword ptr [esi+0xC],edx
	call TSecType<long>::GetData
	push eax
	lea ecx,[edi+0x544]
	call TSecType<long>::GetData
	push eax
	push esi
	call OffsetRect
	cmp dword ptr [esp+0x28],0
	je Block11

 Block8:
	mov eax,ebp
	test ebx,ebx
	jne Block10

 Block9:
	lea eax,[edi+0x438]

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x10],ecx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esp+0x14],edx
	mov edx,dword ptr [eax+0xC]
	mov dword ptr [esp+0x18],ecx
	lea ecx,[edi+0x550]
	mov dword ptr [esp+0x1C],edx
	call TSecType<long>::GetData
	push eax
	lea ecx,[edi+0x55C]
	call TSecType<long>::GetData
	push eax
	lea eax,[esp+0x18]
	push eax
	call OffsetRect
	lea ecx,[esp+0x10]
	push ecx
	push esi
	push esi
	call UnionRect

 Block11:
	pop esi
	pop ebx
	pop edi
	mov eax,1
	pop ebp
	add esp,0x10
	ret 8
}
}
// CMob::OnStatSet
_SUB_EXCEPTION_HANDLER(252660)
__SUB_CLASS_THIS(00252660, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_252660
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	lea ecx,[esp+0x18]
	call MY_UINT128::_ctor_default
	mov ebx,dword ptr [esp+0x38]
	push 0x10
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	call CInPacket::DecodeBuffer
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x80
	lea edx,[esp+0x2C]
	push edx
	call MY_UINT128::_ctor_2
	call MobStat::IsMovementAffectingStat
	add esp,0x10
	test eax,eax
	je Block3

 Block1:
	xor esi,esi
	cmp dword ptr [edi+0x588],esi
	je Block3

 Block2:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x14],esi
	call ZRef<CMob::ReservedPacket>::_Alloc
	mov dword ptr [esp+0x30],esi
	mov esi,dword ptr [esp+0x14]
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esi+4]
	mov dword ptr [esi],1
	call MY_UINT128::setValue_0
	push ebx
	lea ecx,[esi+0x14]
	call CInPacket::operator=
	lea ecx,[edi+0x590]
	call ZList<ZRef<CMob::ReservedPacket>>::AddTail_
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,eax
	call ZRef<CMob::ReservedPacket>::op_assign_copy
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<CMob::ReservedPacket>::~ZRef<CMob::ReservedPacket>
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4

 Block3:
	push ebx
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x80
	lea edx,[esp+0x30]
	push edx
	call MY_UINT128::_ctor_2
	mov ecx,edi
	call CMob::ProcessStatSet
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4
}
}
// CMob::ResetGuided
__SUB_CLASS_THIS0(002410B0, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x100]
	test eax,eax
	je Block6

 Block1:
	mov ecx,dword ptr [eax+8]
	test ecx,ecx
	je Block5

 Block2:
	cmp dword ptr [eax+0xC],0
	push ecx
	lea ecx,[esi+0xEC]
	jne Block4

 Block3:
	lea ecx,[esi+0xD8]

 Block4:
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAt

 Block5:
	mov eax,dword ptr [esi+0x100]
	push eax
	lea ecx,[esi+0xB0]
	call ZList<CMob::AFFECTEDSKILLENTRY>::RemoveAt
	mov dword ptr [esi+0x100],0

 Block6:
	pop esi
	ret
}
}
// CMob::DAMAGEINFO::_ZtlSecureGet_nDamage
__SUB_CLASS0(0023A860, __fastcall, 49839,  CMob::DAMAGEINFO, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x44]
	push eax
	add ecx,0x3C
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::_ZtlSecurePut_m_tInitDelay
__SUB_CLASS(0023E690, __fastcall, 47542,  CMob, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x45C]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x464],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMob::OnDie
_SUB_EXCEPTION_HANDLER(24E4B0)
__SUB_CLASS_THIS0(0024E4B0, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24E4B0
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
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x866E8A
	jne Block19

 Block1:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push edx
	call edi
	lea eax,[esp+0x34]
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
	lea ecx,[esp+0x24]
	push ecx
	mov dword ptr [esp+0x84],0
	call edi
	lea edx,[esp+0x24]
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
	mov ecx,dword ptr [esi+0x4E8]
	mov byte ptr [esp+0x80],1
	test ecx,ecx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],2
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x80],1
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov edi,8
	mov byte ptr [esp+0x80],0
	cmp word ptr [esp+0x24],di
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x34],di
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	cmp dword ptr [esi+0x28C],0
	je Block21

 Block20:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block22

 Block21:
	mov eax,dword ptr [esi+0x174]

 Block22:
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[esi+4]
	mov ebp,eax
	add esp,8
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call edx
	mov ebx,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [ebx]
	push eax
	push ecx
	call get_sound_volume_by_pos
	push eax
	push 1
	push ebp
	call play_mob_sound
	xor ebp,ebp
	add esp,0x14
	cmp dword ptr [esi+0x28C],ebp
	je Block24

 Block23:
	mov eax,dword ptr [esi+0x178]
	cmp eax,ebp
	jne Block25

 Block24:
	mov eax,dword ptr [esi+0x174]

 Block25:
	mov edi,dword ptr [eax+0x224]
	cmp edi,ebp
	jle Block44

 Block26:
	mov edx,dword ptr [esi+0x470]
	push edx
	lea eax,[esi+0x468]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,3
	jne Block28

 Block27:
	lea ecx,[eax+0x13]
	jmp Block29

 Block28:
	call _rand
	cdq
	idiv edi
	mov ecx,edx
	add ecx,0xA

 Block29:
	lea edx,[esi+0x3DC]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,esi
	mov dword ptr [esi+0x3E4],eax
	call CMob::PrepareActionLayer
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	mov edi,dword ptr [esi+0x104]
	mov dword ptr [esp+0x80],3
	cmp edi,ebp
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	push ebp
	push ebp
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	push ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	push ebp
	push ebp
	mov dword ptr [eax+0xC],edx
	push ebp
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [ecx+0x8C]
	lea edx,[esp+0x48]
	push edx
	push edi
	call eax
	cmp eax,ebp
	jge Block35

 Block34:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block35:
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x80],0xFFFFFFFF
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov eax,dword ptr [esp+0x1C]
	lea edi,[esi+0x538]
	push eax
	lea ecx,[edi+0xC]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esp+0x20]
	push ecx
	mov ecx,edi
	call TSecType<long>::SetData
	mov ecx,edi
	call TSecType<long>::GetData
	lea ecx,[esi+0x544]
	mov ebx,eax
	call TSecType<long>::GetData
	mov edi,dword ptr [esi+0x104]
	cmp edi,ebp
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov edx,dword ptr [edi]
	push ebx
	push eax
	mov eax,dword ptr [edx+0x40]
	push edi
	call eax
	cmp eax,ebp
	jge Block43

 Block42:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block43:
	lea edx,[esi+0x474]
	mov ecx,2
	call _ZtlSecureTearHelper<int>::call
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	mov ecx,esi
	mov dword ptr [esi+0x47C],eax
	call CMob::TrySpeaking

 Block44:
	lea ecx,[esi+0xD8]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0xEC]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0xB0]
	call ZList<CMob::AFFECTEDSKILLENTRY>::RemoveAll
	mov eax,0x7FFFFFFF
	mov dword ptr [esi+0x480],eax
	mov dword ptr [esi+0x484],eax
	mov dword ptr [esi+0x488],eax
	mov dword ptr [esi+0x48C],eax
	mov eax,dword ptr [esi+0x3B8]
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block47

 Block45:
	nop

 Block46:
	lea ecx,[esp+0x1C]
	push ecx
	call ZList<MobStat::BURNED_INFO>::GetNext
	add esp,4
	mov dword ptr [eax+0x1C],ebp
	cmp dword ptr [esp+0x1C],ebp
	jne Block46

 Block47:
	mov byte ptr [esp+0x1C],0
	mov edx,dword ptr [esp+0x1C]
	push edx
	lea ecx,[esi+0x5D0]
	call BulletContainer<CMob::MobBullet>::CallUpdate_RemoveT
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x864702
	je Block49

 Block48:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x864766
	jne Block50

 Block49:
	fld qword ptr [__real_403e000000000000]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push ebp
	push ebp
	push ebp
	push ebp
	sub esp,8
	fstp qword ptr [esp]
	call CAnimationDisplayer::Effect_Tremble

 Block50:
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x866E2A
	je Block52

 Block51:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x866E92
	jne Block53

 Block52:
	fld qword ptr [__real_4024000000000000]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 1
	push 0xFA0
	push ebp
	push ebp
	sub esp,8
	fstp qword ptr [esp]
	call CAnimationDisplayer::Effect_Tremble

 Block53:
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x866E22
	je Block55

 Block54:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x866E8A
	jne Block56

 Block55:
	fld qword ptr [__real_4014000000000000]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 1
	push 0xBB8
	push ebp
	push ebp
	sub esp,8
	fstp qword ptr [esp]
	call CAnimationDisplayer::Effect_Tremble

 Block56:
	mov esi,dword ptr [esi+0x174]
	mov eax,dword ptr [esi+0x14]
	push eax
	add esi,0xC
	push esi
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x86BC33
	jne Block58

 Block57:
	fld qword ptr [__real_4024000000000000]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push ebp
	push 0xBB8
	push ebp
	push ebp
	sub esp,8
	fstp qword ptr [esp]
	call CAnimationDisplayer::Effect_Tremble

 Block58:
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
// CMob::OnNextAttack
__SUB_CLASS_THIS(002528A0, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x10]
	call CInPacket::Decode4
	mov ecx,esi
	mov edx,eax
	call CMob::IsActive
	test eax,eax
	je Block4

 Block1:
	test edx,edx
	jle Block4

 Block2:
	push edx
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0xC]
	push ecx
	lea edx,[esp+0x14]
	push edx
	push 4
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call CMob::IsTargetInAttackRange
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	push ecx
	push edx
	mov ecx,esi
	call CMob::GenerateMovePath

 Block4:
	pop esi
	add esp,8
	ret 4
}
}
// CMob::GetMultiBodyRect
__SUB_CLASS_THIS(002443E0, __thiscall, 47495,  CMob, void, ZArray<tagRECT>&, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push eax
	push edx
	lea eax,[ecx+0x44C]
	push eax
	lea edx,[ecx+0x448]
	push edx
	call CMob::GetArrayBodyRectImpl
	ret 8
}
}
// CMob::SetLayerZ
// 63B118
static uint8_t _SUB_23AB50_LOOKUP_TABLE_0[112] = {
0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 144, 
};
// 63B1A8
static uint8_t _SUB_23AB50_LOOKUP_TABLE_1[120] = {
0, 1, 2, 2, 3, 4, 5, 1, 0, 1, 2, 2, 3, 4, 5, 6, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 1, 0, 1, 2, 2, 3, 4, 5, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 6, 
};
__SUB_CLASS_THIS0(0023AB50, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,ecx
	mov eax,dword ptr [ebp+0x104]
	push esi
	push edi
	test eax,eax
	je Block2

 Block1:
	lea esi,[eax-0xC]
	jmp Block3

 Block2:
	xor esi,esi

 Block3:
	cmp dword ptr [esi+0x2F8],4
	jne Block5

 Block4:
	mov eax,0xC0041F14
	jmp Block6

 Block5:
	mov eax,dword ptr [esi+0x1C0]
	imul eax,0xBB8
	sub eax,dword ptr [esi+0x1C4]
	lea eax,[eax+eax*4]
	lea eax,[eax+eax-0x3FFF8AD9]

 Block6:
	mov ebx,dword ptr [ebp+0x4E8]
	lea edi,[ebp+0x4E8]
	test ebx,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+0xB4]
	push eax
	push ebx
	call edx
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [ebp+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x866E12
	ja Block19

 Block11:
	je Block25

 Block12:
	sub eax,0x864700
	cmp eax,0x6E
	ja Block43

 Block13:
	movzx edx,byte ptr [eax+_SUB_23AB50_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block14
cmp EDX, 1
je Block15
cmp EDX, 2
je Block16
cmp EDX, 3
je Block17
cmp EDX, 4
je Block18
cmp EDX, 5
je Block43


 Block14:
	mov eax,dword ptr [esi+0x1C0]
	mov ecx,dword ptr [esi+0x1C4]
	imul eax,0xBB8
	sub eax,ecx
	lea eax,[eax+eax*4]
	lea ecx,[eax+eax-0x3FFF8ADB]
	push ecx
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	jmp Block42

 Block15:
	mov eax,dword ptr [esi+0x1C0]
	mov ecx,dword ptr [esi+0x1C4]
	imul eax,0xBB8
	sub eax,ecx
	lea edx,[eax+eax*4]
	lea eax,[edx+edx-0x3FFF8ADF]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	jmp Block42

 Block16:
	mov eax,dword ptr [esi+0x1C0]
	mov ecx,dword ptr [esi+0x1C4]
	imul eax,0xBB8
	sub eax,ecx
	lea ecx,[eax+eax*4]
	lea edx,[ecx+ecx-0x3FFF8ADE]
	push edx
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	jmp Block42

 Block17:
	mov eax,dword ptr [esi+0x1C0]
	mov ecx,dword ptr [esi+0x1C4]
	imul eax,0xBB8
	sub eax,ecx
	lea eax,[eax+eax*4]
	lea ecx,[eax+eax-0x3FFF8ADD]
	push ecx
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	jmp Block42

 Block18:
	mov eax,dword ptr [esi+0x1C0]
	mov ecx,dword ptr [esi+0x1C4]
	imul eax,0xBB8
	sub eax,ecx
	lea edx,[eax+eax*4]
	lea eax,[edx+edx-0x3FFF8ADC]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	jmp Block42

 Block19:
	sub eax,0x866E13
	cmp eax,0x77
	ja Block43

 Block20:
	movzx ecx,byte ptr [eax+_SUB_23AB50_LOOKUP_TABLE_1]
	cmp ECX, 0
je Block22
cmp ECX, 1
je Block25
cmp ECX, 2
je Block29
cmp ECX, 3
je Block35
cmp ECX, 4
je Block32
cmp ECX, 5
je Block38
cmp ECX, 6
je Block21
cmp ECX, 7
je Block43


 Block21:
	mov eax,dword ptr [esi+0x1C0]
	mov ecx,dword ptr [esi+0x1C4]
	imul eax,0xBB8
	sub eax,ecx
	lea edx,[eax+eax*4]
	lea eax,[edx+edx-0x3FFF8ADB]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	jmp Block42

 Block22:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [esi+0x1C4]
	mov eax,dword ptr [esi+0x1C0]
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	imul eax,0xBB8
	sub eax,edx
	lea edx,[eax+eax*4]
	lea eax,[edx+edx-0x3FFF8ADC]
	jmp Block41

 Block25:
	mov ebx,dword ptr [edi]
	mov ecx,dword ptr [esi+0x1C4]
	mov eax,dword ptr [esi+0x1C0]
	test ebx,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov edx,dword ptr [ebx]
	imul eax,0xBB8
	mov edx,dword ptr [edx+0xB4]
	sub eax,ecx
	lea eax,[eax+eax*4]
	lea ecx,[eax+eax-0x3FFF8ADD]
	push ecx
	push ebx
	call edx
	test eax,eax
	jge Block43

 Block28:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex
	jmp Block43

 Block29:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [esi+0x1C4]
	mov eax,dword ptr [esi+0x1C0]
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	imul eax,0xBB8
	sub eax,edx
	lea eax,[eax+eax*4]
	lea edx,[eax+eax-0x3FFF8ADE]
	push edx
	jmp Block42

 Block32:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [esi+0x1C4]
	mov eax,dword ptr [esi+0x1C0]
	test ecx,ecx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	imul eax,0xBB8
	sub eax,edx
	lea eax,[eax+eax*4]
	lea edx,[eax+eax-0x3FFF8ADF]
	push edx
	jmp Block42

 Block35:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [esi+0x1C4]
	mov eax,dword ptr [esi+0x1C0]
	test ecx,ecx
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	imul eax,0xBB8
	sub eax,edx
	sub eax,0x6665AB0
	lea eax,[eax+eax*4]
	add eax,eax
	jmp Block41

 Block38:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [esi+0x1C4]
	mov eax,dword ptr [esi+0x1C0]
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	imul eax,0xBB8
	sub eax,edx
	lea edx,[eax+eax*4]
	lea eax,[edx+edx-0x3FFF8AE1]

 Block41:
	push eax

 Block42:
	call IWzGr2DLayer::Putz

 Block43:
	mov eax,dword ptr [ebp+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x86BC31
	je Block53

 Block44:
	mov eax,dword ptr [ebp+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x86BC32
	je Block53

 Block45:
	mov eax,dword ptr [ebp+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x86BC34
	je Block53

 Block46:
	mov eax,dword ptr [ebp+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x86BC35
	je Block53

 Block47:
	mov eax,dword ptr [ebp+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x86BC36
	je Block53

 Block48:
	mov ecx,dword ptr [ebp+0x174]
	call CMobTemplate::_ZtlSecureGet_dwTemplateID
	cmp eax,0x86BC38
	je Block53

 Block49:
	mov ecx,dword ptr [ebp+0x174]
	call CMobTemplate::_ZtlSecureGet_dwTemplateID
	cmp eax,0x86BC39
	je Block53

 Block50:
	mov ecx,dword ptr [ebp+0x174]
	call CMobTemplate::_ZtlSecureGet_dwTemplateID
	cmp eax,0x86BC3B
	je Block53

 Block51:
	mov ecx,dword ptr [ebp+0x174]
	call CMobTemplate::_ZtlSecureGet_dwTemplateID
	cmp eax,0x86BC3C
	je Block53

 Block52:
	mov ecx,dword ptr [ebp+0x174]
	call CMobTemplate::_ZtlSecureGet_dwTemplateID
	cmp eax,0x86BC3D
	jne Block57

 Block53:
	mov ebx,dword ptr [edi]
	mov eax,dword ptr [esi+0x1C0]
	test ebx,ebx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov edx,dword ptr [ebx]
	imul eax,0x7530
	sub eax,0x3FFFF830
	push eax
	mov eax,dword ptr [edx+0xB4]
	push ebx
	call eax
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block57:
	mov eax,dword ptr [ebp+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x86BC30
	je Block61

 Block58:
	mov eax,dword ptr [ebp+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x86BC33
	je Block61

 Block59:
	mov eax,dword ptr [ebp+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x86BC37
	je Block61

 Block60:
	mov eax,dword ptr [ebp+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x86BC3A
	jne Block65

 Block61:
	mov ebx,dword ptr [edi]
	mov esi,dword ptr [esi+0x1C0]
	test ebx,ebx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov eax,dword ptr [ebx]
	imul esi,0x7530
	mov ecx,dword ptr [eax+0xB4]
	sub esi,0x3FFFF831
	push esi
	push ebx
	call ecx
	test eax,eax
	jge Block65

 Block64:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block65:
	mov edx,dword ptr [ebp+0x174]
	cmp dword ptr [edx+0x234],1
	jne Block70

 Block66:
	mov esi,dword ptr [edi]
	test esi,esi
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 0xC0041F14
	push esi
	call ecx
	test eax,eax
	jge Block70

 Block69:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block70:
	mov eax,dword ptr [ebp+0x174]
	mov edx,dword ptr [eax+0x2C8]
	push edx
	add eax,0x2C0
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block75

 Block71:
	mov edi,dword ptr [edi]
	test edi,edi
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xB4]
	push 0xC0041F14
	push edi
	call ecx
	test eax,eax
	jge Block75

 Block74:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block75:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// CMob::MobBullet::MobBullet
_SUB_EXCEPTION_HANDLER(2495B0)
__SUB_CLASS_THIS(002495B0, __thiscall, 50163,  CMob::MobBullet, void, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, NakedParam<_x_com_ptr<IWzVector2D>>, long, int32_t, NakedParam<Ztl_bstr_t>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2495B0
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
	push ecx
	mov ecx,dword ptr [esp+0x38]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0xC],esp
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x30]
	mov eax,dword ptr [esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push edx
	mov edx,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x2C]
	push ecx
	push edx
	push eax
	mov ecx,esi
	call CFadeoutBullet::_ctor_0
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [esi+0x34],ecx
	mov ecx,dword ptr [esp+0x40]
	int 3// TODO: 	mov dword ptr [esi],offset CMob::MobBullet::`vftable'
	mov dword ptr [esi+0x38],edx
	mov dword ptr [esi+0x3C],ecx
	test ecx,ecx
	je Block4

 Block3:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x40]

 Block4:
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esi+0x40],eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x40]

 Block6:
	test ecx,ecx
	je Block8

 Block7:
	call _xbstr_t::Data_t::Release

 Block8:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x2C
}
}
// CMob::DAMAGEINFO::_ZtlSecureGet_nMoveEndingPosY
__SUB_CLASS0(0023A940, __fastcall, 49839,  CMob::DAMAGEINFO, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x98]
	push eax
	add ecx,0x90
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::DAMAGEINFO::_ZtlSecureGet_nMoveType
__SUB_CLASS0(0023A8E0, __fastcall, 49839,  CMob::DAMAGEINFO, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x74]
	push eax
	add ecx,0x6C
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::GenerateMovePath
_SUB_EXCEPTION_HANDLER(251100)
__SUB_CLASS_THIS(00251100, __thiscall, 47560,  CMob, void, long, int32_t, NakedParam<CMob::TARGETINFO>, int32_t, long, long, long, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_251100
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
	mov dword ptr [esp+0x18],ebp
	call get_update_time
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [ebp+0x104]
	xor edi,edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	mov dword ptr [esp+0x2C],eax
	jmp Block3

 Block2:
	mov dword ptr [esp+0x2C],edi

 Block3:
	mov eax,dword ptr [ebp+0x108]
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	mov dword ptr [esp+0x1C],eax
	jmp Block6

 Block5:
	mov dword ptr [esp+0x1C],edi

 Block6:
	cmp dword ptr [ebp+0x28C],edi
	je Block8

 Block7:
	mov eax,dword ptr [ebp+0x178]
	cmp eax,edi
	jne Block9

 Block8:
	mov eax,dword ptr [ebp+0x174]

 Block9:
	mov ecx,dword ptr [eax+0x48]
	push ecx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [esp+0x9C]
	xor edx,edx
	add esp,8
	cmp eax,4
	sete dl
	push ebx
	mov ecx,ebp
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x4C],edx
	call CMob::GetAttackInfo
	mov esi,eax
	test esi,esi
	je Block12

 Block10:
	cmp dword ptr [esi+0xC],edi
	jne Block12

 Block11:
	mov eax,dword ptr [esi+0x4C]
	lea edi,[esi+0x2C]
	push eax
	lea ecx,[edi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [edi+8]
	push edx
	push edi
	mov ebp,eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,ebp
	mov ebp,dword ptr [esp+0x28]
	sub eax,ecx
	cdq
	mov edi,eax
	xor edi,edx
	add esp,0x10
	sub edi,edx
	mov dword ptr [esp+0x30],edi

 Block12:
	cmp dword ptr [esp+0xA4],0xE
	jne Block16

 Block13:
	test esi,esi
	je Block16

 Block14:
	cmp dword ptr [esi+0xA8],0
	je Block16

 Block15:
	mov dword ptr [esp+0x24],1
	test edi,edi
	jg Block17

 Block16:
	mov dword ptr [esp+0x24],0

 Block17:
	test ebx,ebx
	jl Block19

 Block18:
	push ebx
	mov ecx,ebp
	call CMob::GetActionDelay
	mov dword ptr [esp+0x20],eax
	jmp Block20

 Block19:
	mov dword ptr [esp+0x20],0

 Block20:
	mov ebp,dword ptr [esp+0x98]
	test ebx,ebx
	jl Block78

 Block21:
	mov esi,dword ptr [esp+0x18]
	mov eax,dword ptr [esi+0x3E4]
	push eax
	lea edi,[esi+0x3DC]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add eax,0xFFFFFFF3
	add esp,8
	cmp eax,8
	jbe Block23

 Block22:
	mov ecx,dword ptr [esi+0x3E4]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add eax,0xFFFFFFEA
	add esp,8
	cmp eax,0x10
	ja Block25

 Block23:
	lea edx,[ebx-7]
	cmp edx,2
	ja Block25

 Block24:
	cmp dword ptr [esp+0xB4],0
	je Block27

 Block25:
	cmp dword ptr [esp+0x24],0
	jne Block27

 Block26:
	mov edx,edi
	mov ecx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3E4],eax
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x3D8]
	push ecx
	add esi,0x3D0
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	xor ecx,ebp
	and ecx,1
	add esp,8
	xor ecx,eax
	mov edx,esi
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [ecx+0x3D8],eax
	call CMob::PrepareActionLayer
	mov esi,dword ptr [esp+0x18]

 Block27:
	lea edx,[ebx-0xD]
	cmp edx,8
	ja Block32

 Block28:
	cmp dword ptr [esp+0x24],0
	jne Block38

 Block29:
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	push ebx
	mov ecx,esi
	call CMob::IsMultiBallAttack
	test eax,eax
	je Block31

 Block30:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x38]
	push edx
	dec eax
	push eax
	mov ecx,esi
	call CMob::SetMultiBallTarget

 Block31:
	push ebx
	mov ecx,esi
	call CMob::SetRandTimeForAreaAttack
	mov ecx,dword ptr [esp+0x9C]
	mov edx,dword ptr [esi+0x3E4]
	push ecx
	push ebp
	push edx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov ecx,esi
	call CMob::DoAttack
	jmp Block38

 Block32:
	lea eax,[ebx-7]
	cmp eax,2
	ja Block36

 Block33:
	mov eax,dword ptr [esp+0x20]
	cmp eax,0x3E8
	jg Block35

 Block34:
	mov eax,0x3E8

 Block35:
	mov ecx,dword ptr [esp+0x28]
	add ecx,eax
	lea edx,[esi+0x3E8]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3F0],eax
	jmp Block38

 Block36:
	lea edx,[ebx-0x16]
	cmp edx,0x10
	ja Block38

 Block37:
	mov esi,dword ptr [esp+0x18]
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	add esi,4
	mov edi,eax
	add esp,8
	lea eax,[esp+0x40]
	push eax
	mov ecx,esi
	call edx
	mov ebp,eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [ebp]
	push eax
	push ecx
	call get_sound_volume_by_pos
	push eax
	lea edx,[ebx-2]
	push edx
	push edi
	call play_mob_sound
	mov ax,word ptr [esp+0x34]
	mov esi,dword ptr [esp+0x2C]
	add esp,0x14
	mov word ptr [esp+0x9E],ax

 Block38:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax+0x300]
	mov dword ptr [esp+0x34],ecx
	lea ecx,[eax+0x304]
	call TSecType<int>::GetData
	mov dword ptr [esp+0x40],eax
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x48]
	push edx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block73

 Block39:
	mov ecx,dword ptr [esp+0x18]
	cmp dword ptr [ecx+0x28C],0
	je Block41

 Block40:
	mov eax,dword ptr [ecx+0x178]
	test eax,eax
	jne Block42

 Block41:
	mov eax,dword ptr [ecx+0x174]

 Block42:
	mov ecx,dword ptr [eax+0x48]
	push ecx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0xBC]
	mov ebp,dword ptr [esp+0x34]
	add esp,8
	push edx
	push ebp
	lea esi,[ebp+0x244]
	push eax
	mov ecx,esi
	call CMovePath::DiscardByInterrupt
	mov eax,dword ptr [esi+0x9C]
	push eax
	lea ecx,[esi+0x94]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x90]
	push edx
	add esi,0x88
	push esi
	mov edi,eax
	call _ZtlSecureFuseHelper<long>::call
	sub eax,edi
	add dword ptr [esp+0x30],eax
	lea esi,[ebp+0x2A0]
	mov ebp,dword ptr [esp+0x2C]
	mov ecx,7
	lea edi,[esp+0x78]
	rep movsd
	movsx eax,word ptr [esp+0x84]
	mov esi,dword ptr [ebp]
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	movsx edi,word ptr [esp+0x7A]
	add esp,0x10
	push eax
	add esi,4
	call CWvsPhysicalSpace2D::GetFoothold
	movzx ecx,byte ptr [esp+0x72]
	movsx edx,word ptr [esp+0x70]
	push eax
	movsx eax,word ptr [esp+0x72]
	push ecx
	movsx ecx,word ptr [esp+0x74]
	push edx
	mov edx,dword ptr [esi]
	push eax
	push ecx
	push edi
	push 1
	mov ecx,ebp
	call edx
	lea esi,[ebx-7]
	cmp esi,2
	ja Block46

 Block43:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x28]
	mov ebp,dword ptr [esp+0x18]
	lea ebx,[eax+ecx]
	add ebp,0x3E8
	mov edx,ebp
	mov ecx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [edx+0x3F0],eax
	test ebx,ebx
	jne Block45

 Block44:
	push eax
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x20]
	mov edx,eax
	add esp,8
	inc edx
	call CMob::_ZtlSecurePut_m_tHitExpire

 Block45:
	mov ebx,dword ptr [esp+0x94]

 Block46:
	mov eax,dword ptr [esp+0x20]
	cmp eax,0x5A
	mov ebp,dword ptr [esp+0x1C]
	jl Block73

 Block47:
	cmp esi,2
	jbe Block51

 Block48:
	cmp dword ptr [esp+0x24],0
	je Block50

 Block49:
	mov ecx,dword ptr [esp+0x18]
	call CMob::GetOneTimeActionRemain
	mov ecx,dword ptr [esp+0x98]
	neg ecx
	sbb ecx,ecx
	and ecx,0xFFFFF510
	push eax
	mov eax,dword ptr [esp+0x34]
	add ecx,0x578
	mov dword ptr [esp+0x3C],ecx
	fild dword ptr [esp+0x3C]
	push eax
	sub esp,8
	mov ecx,ebp
	fstp qword ptr [esp]
	call CVecCtrlMob::SetRushAttack
	jmp Block73

 Block50:
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov ecx,ebp
	call CVecCtrlMob::UpdateActiveInterrupted
	jmp Block73

 Block51:
	cmp dword ptr [esp+0xA4],0xB
	jne Block53

 Block52:
	fld qword ptr [__real_c084500000000000]
	sub esp,8
	mov ecx,ebp
	fstp qword ptr [esp]
	call CVecCtrlMob::RiseByToss
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [edx+0x56C],1
	jmp Block73

 Block53:
	cmp dword ptr [esp+0xB4],0
	je Block55

 Block54:
	fld qword ptr [__real_c07c200000000000]
	sub esp,8
	mov ecx,ebp
	fstp qword ptr [esp]
	call CVecCtrlMob::RiseByToss
	jmp Block73

 Block55:
	mov ebx,dword ptr [esp+0xA8]
	xor eax,eax
	xor ebp,ebp
	cmp dword ptr [esp+0x98],ebp
	mov dword ptr [esp+0x28],ebp
	sete al
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [esp+0xA4]
	add eax,0xFFFFFFFE
	cmp eax,0xB
	ja Block69

 Block56:
	cmp EAX, 0
je Block57
cmp EAX, 1
je Block58
cmp EAX, 2
je Block59
cmp EAX, 3
je Block60
cmp EAX, 4
je Block61
cmp EAX, 5
je Block64
cmp EAX, 6
je Block62
cmp EAX, 7
je Block63
cmp EAX, 8
je Block68
cmp EAX, 9
je Block69
cmp EAX, 10
je Block68
cmp EAX, 11
je Block68


 Block57:
	mov esi,0x12C
	mov dword ptr [esp+0x28],0x4E20
	jmp Block70

 Block58:
	mov ecx,dword ptr [esp+0x18]
	call CMob::GetHalfWidth
	mov ebp,eax
	mov eax,edi
	sub eax,ebx
	cdq
	xor eax,edx
	add ebp,0x2D
	sub eax,edx
	xor ecx,ecx
	cmp eax,ebp
	setl cl
	dec ecx
	and ecx,0xFFFFFC18
	mov esi,ecx
	jmp Block70

 Block59:
	mov eax,edi
	sub eax,ebx
	cdq
	xor eax,edx
	sub eax,edx
	xor edx,edx
	mov ebp,0x4B
	cmp eax,ebp
	setl dl
	dec edx
	and edx,0xFFFFFA88
	mov esi,edx
	jmp Block70

 Block60:
	mov eax,edi
	sub eax,ebx
	cdq
	xor eax,edx
	xor ecx,ecx
	sub eax,edx
	cmp eax,0x64
	setge cl
	dec ecx
	and ecx,0xFFFFFD44
	add ecx,0x3E8
	mov esi,ecx
	jmp Block70

 Block61:
	mov eax,edi
	sub eax,ebx
	cdq
	xor eax,edx
	sub eax,edx
	xor edx,edx
	cmp eax,0x64
	setge dl
	dec edx
	and edx,0xFFFFFE70
	add edx,0x2BC
	mov esi,edx
	jmp Block70

 Block62:
	mov eax,edi
	sub eax,ebx
	cdq
	xor eax,edx
	xor ecx,ecx
	sub eax,edx
	cmp eax,0x64
	setge cl
	dec ecx
	and ecx,0x190
	add ecx,0xFFFFFD44
	mov esi,ecx
	jmp Block70

 Block63:
	mov esi,0x2BC
	jmp Block70

 Block64:
	mov eax,dword ptr [esp+0xB0]
	mov ecx,dword ptr [esp+0x18]
	add ecx,4
	mov esi,0x12C
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block67

 Block65:
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x38]
	push eax
	call edx
	cmp dword ptr [eax],ebx
	jl Block68

 Block66:
	jmp Block71

 Block67:
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0x4C]
	push edx
	call eax
	cmp dword ptr [eax],ebx
	jle Block70

 Block68:
	xor esi,esi
	jmp Block70

 Block69:
	mov esi,0x82
	mov dword ptr [esp+0x28],0x9C40

 Block70:
	cmp dword ptr [esp+0x30],0
	je Block72

 Block71:
	neg esi

 Block72:
	mov ecx,dword ptr [esp+0xAC]
	mov edx,dword ptr [esp+0xA4]
	mov eax,dword ptr [esp+0x28]
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x28]
	push ebx
	push edx
	push eax
	push 0
	push esi
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	call CVecCtrlMob::UpdateActiveInterrupted
	mov ebx,dword ptr [esp+0x94]

 Block73:
	mov edi,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0xA0]
	lea esi,[edi+0x734]
	push edx
	mov ecx,esi
	call TSecType<int>::SetData
	mov ebp,dword ptr [esp+0x18]
	mov ecx,esi
	add ebp,0x5A4
	call TSecType<int>::GetData
	push eax
	mov ecx,ebp
	call TSecType<int>::SetData
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	jne Block77

 Block74:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block76

 Block75:
	add eax,4
	jmp Block77

 Block76:
	xor eax,eax

 Block77:
	mov ecx,dword ptr [esp+0x40]
	push ecx
	push eax
	mov ecx,ebp
	call TSecType<int>::GetData
	push eax
	mov ecx,edi
	call CVecCtrlMob::ChaseTargetImp

 Block78:
	mov esi,dword ptr [esp+0x18]
	push ebx
	mov ecx,esi
	call CMob::GetActionDelay
	mov ecx,esi
	mov edi,eax
	call CMob::GetOneTimeActionRemain
	sub eax,edi
	cmp eax,0x5A
	jle Block80

 Block79:
	mov ecx,dword ptr [esp+0x1C]
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	call CVecCtrlMob::UpdateActiveInterrupted

 Block80:
	mov ebx,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+0x18]
	xor ebp,ebp
	xor esi,esi
	add ebx,0x244

 Block81:
	mov ecx,edi
	call CMob::GetCurTemplate
	mov edx,dword ptr [eax+0x48]
	push edx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	xor ecx,ecx
	add esp,8
	cmp eax,4
	sete cl
	push ebp
	push ecx
	mov ecx,ebx
	call CMovePath::IsTimeForFlush
	test eax,eax
	jne Block83

 Block82:
	mov ecx,dword ptr [esp+0x1C]
	call CVecCtrl::UpdateActive
	inc esi
	cmp esi,0x37
	jl Block81

 Block83:
	mov ecx,dword ptr [esp+0x1C]
	call CVecCtrlMob::ClearTemporaryValues
	mov edx,dword ptr [edi+0x124]
	lea eax,[edi+0x11C]
	push edx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	xor ebx,ebx
	add esp,8
	test eax,eax
	mov eax,dword ptr [esp+0x1C]
	setl bl
	cmp dword ptr [eax+0x300],ebp
	je Block87

 Block84:
	cmp ebx,ebp
	jne Block86

 Block85:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x64
	div ecx
	cmp edx,0x46
	jae Block87

 Block86:
	mov dword ptr [esp+0x30],1
	jmp Block88

 Block87:
	mov dword ptr [esp+0x30],ebp

 Block88:
	mov eax,dword ptr [esp+0x94]
	cmp eax,ebp
	jl Block90

 Block89:
	mov cl,byte ptr [esp+0x98]
	and cl,1
	add al,al
	or cl,al
	mov byte ptr [esp+0x17],cl
	jmp Block91

 Block90:
	mov byte ptr [esp+0x17],al

 Block91:
	push 0xE3
	lea ecx,[esp+0x5C]
	call COutPacket::_ctor_1
	mov edx,dword ptr [edi+0x170]
	push edx
	add edi,0x168
	push edi
	mov dword ptr [esp+0x94],ebp
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov esi,eax
	mov eax,dword ptr [esp+0x64]
	add esp,8
	cmp eax,ebp
	jne Block93

 Block92:
	xor edx,edx
	jmp Block94

 Block93:
	mov edx,dword ptr [eax-4]

 Block94:
	mov ecx,dword ptr [esp+0x60]
	add ecx,4
	cmp ecx,edx
	jbe Block100

 Block95:
	cmp eax,ebp
	jne Block97

 Block96:
	xor eax,eax
	jmp Block98

 Block97:
	mov eax,dword ptr [eax-4]

 Block98:
	add eax,eax
	cmp ecx,eax
	ja Block98

 Block99:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block100:
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+edx],esi
	mov eax,dword ptr [esp+0x18]
	add dword ptr [esp+0x60],4
	lea esi,[eax+0x128]
	mov eax,dword ptr [eax+0x12C]
	push eax
	push esi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	inc eax
	movzx edi,ax
	add esp,8
	mov edx,esi
	mov ecx,edi
	call _ZtlSecureTearHelper<short>::call
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [ecx+0x12C],eax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	jne Block102

 Block101:
	xor edx,edx
	jmp Block103

 Block102:
	mov edx,dword ptr [eax-4]

 Block103:
	mov ecx,dword ptr [esp+0x60]
	add ecx,2
	cmp ecx,edx
	jbe Block109

 Block104:
	cmp eax,ebp
	jne Block106

 Block105:
	xor eax,eax
	jmp Block107

 Block106:
	mov eax,dword ptr [eax-4]

 Block107:
	add eax,eax
	cmp ecx,eax
	ja Block107

 Block108:
	lea edx,[esp+0x17]
	push edx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block109:
	mov ecx,dword ptr [esp+0x60]
	add bl,bl
	or bl,byte ptr [esp+0xB4]
	mov word ptr [eax+ecx],di
	mov eax,dword ptr [esp+0x5C]
	add dword ptr [esp+0x60],2
	add bl,bl
	or bl,byte ptr [esp+0x24]
	add bl,bl
	add bl,bl
	or bl,byte ptr [esp+0x30]
	cmp eax,ebp
	jne Block111

 Block110:
	xor edx,edx
	jmp Block112

 Block111:
	mov edx,dword ptr [eax-4]

 Block112:
	mov ecx,dword ptr [esp+0x60]
	inc ecx
	cmp ecx,edx
	jbe Block118

 Block113:
	cmp eax,ebp
	jne Block115

 Block114:
	xor eax,eax
	jmp Block116

 Block115:
	mov eax,dword ptr [eax-4]

 Block116:
	add eax,eax
	cmp ecx,eax
	ja Block116

 Block117:
	lea edx,[esp+0x17]
	push edx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block118:
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [eax+ecx],bl
	mov eax,dword ptr [esp+0x5C]
	inc dword ptr [esp+0x60]
	cmp eax,ebp
	jne Block120

 Block119:
	xor edx,edx
	jmp Block121

 Block120:
	mov edx,dword ptr [eax-4]

 Block121:
	mov ecx,dword ptr [esp+0x60]
	inc ecx
	cmp ecx,edx
	jbe Block127

 Block122:
	cmp eax,ebp
	jne Block124

 Block123:
	xor eax,eax
	jmp Block125

 Block124:
	mov eax,dword ptr [eax-4]
	lea ebx,[ebx]

 Block125:
	add eax,eax
	cmp ecx,eax
	ja Block125

 Block126:
	lea edx,[esp+0x17]
	push edx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block127:
	mov edx,dword ptr [esp+0x60]
	mov cl,byte ptr [esp+0x17]
	mov byte ptr [eax+edx],cl
	mov eax,dword ptr [esp+0x5C]
	inc dword ptr [esp+0x60]
	mov esi,dword ptr [esp+0x9C]
	cmp eax,ebp
	jne Block129

 Block128:
	xor edx,edx
	jmp Block130

 Block129:
	mov edx,dword ptr [eax-4]

 Block130:
	mov ecx,dword ptr [esp+0x60]
	add ecx,4
	cmp ecx,edx
	jbe Block136

 Block131:
	cmp eax,ebp
	jne Block133

 Block132:
	xor eax,eax
	jmp Block134

 Block133:
	mov eax,dword ptr [eax-4]

 Block134:
	add eax,eax
	cmp ecx,eax
	ja Block134

 Block135:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block136:
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+edx],esi
	mov eax,dword ptr [esp+0x18]
	mov eax,dword ptr [eax+0x570]
	mov esi,4
	add dword ptr [esp+0x60],esi
	cmp eax,ebp
	jne Block138

 Block137:
	xor ebx,ebx
	jmp Block139

 Block138:
	mov ebx,dword ptr [eax-4]

 Block139:
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	jne Block141

 Block140:
	xor edx,edx
	jmp Block142

 Block141:
	mov edx,dword ptr [eax-4]

 Block142:
	mov ecx,dword ptr [esp+0x60]
	add ecx,esi
	cmp ecx,edx
	jbe Block148

 Block143:
	cmp eax,ebp
	jne Block145

 Block144:
	xor eax,eax
	jmp Block146

 Block145:
	mov eax,dword ptr [eax-4]

 Block146:
	add eax,eax
	cmp ecx,eax
	ja Block146

 Block147:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block148:
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+edx],ebx
	add dword ptr [esp+0x60],esi
	xor esi,esi
	cmp ebx,ebp
	jle Block171

 Block149:
	jmp Block151

 Block151:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x570]
	mov eax,dword ptr [esp+0x5C]
	mov edi,dword ptr [ecx+esi*8]
	cmp eax,ebp
	jne Block153

 Block152:
	xor edx,edx
	jmp Block154

 Block153:
	mov edx,dword ptr [eax-4]

 Block154:
	mov ecx,dword ptr [esp+0x60]
	add ecx,4
	cmp ecx,edx
	jbe Block160

 Block155:
	cmp eax,ebp
	jne Block157

 Block156:
	xor eax,eax
	jmp Block158

 Block157:
	mov eax,dword ptr [eax-4]

 Block158:
	add eax,eax
	cmp ecx,eax
	ja Block158

 Block159:
	lea edx,[esp+0x17]
	push edx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block160:
	mov ecx,dword ptr [esp+0x60]
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [eax+ecx],edi
	mov eax,dword ptr [edx+0x570]
	add dword ptr [esp+0x60],4
	mov edi,dword ptr [eax+esi*8+4]
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	jne Block162

 Block161:
	xor edx,edx
	jmp Block163

 Block162:
	mov edx,dword ptr [eax-4]

 Block163:
	mov ecx,dword ptr [esp+0x60]
	add ecx,4
	cmp ecx,edx
	jbe Block170

 Block164:
	cmp eax,ebp
	jne Block166

 Block165:
	xor eax,eax
	jmp Block168

 Block166:
	mov eax,dword ptr [eax-4]
	jmp Block168

 Block168:
	add eax,eax
	cmp ecx,eax
	ja Block168

 Block169:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block170:
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+edx],edi
	add dword ptr [esp+0x60],4
	inc esi
	cmp esi,ebx
	jl Block151

 Block171:
	mov eax,dword ptr [esp+0x18]
	mov eax,dword ptr [eax+0x574]
	cmp eax,ebp
	jne Block173

 Block172:
	xor ebx,ebx
	jmp Block174

 Block173:
	mov ebx,dword ptr [eax-4]

 Block174:
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	jne Block176

 Block175:
	xor edx,edx
	jmp Block177

 Block176:
	mov edx,dword ptr [eax-4]

 Block177:
	mov ecx,dword ptr [esp+0x60]
	add ecx,4
	cmp ecx,edx
	jbe Block183

 Block178:
	cmp eax,ebp
	jne Block180

 Block179:
	xor eax,eax
	jmp Block181

 Block180:
	mov eax,dword ptr [eax-4]
	lea esp,[esp]

 Block181:
	add eax,eax
	cmp ecx,eax
	ja Block181

 Block182:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block183:
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+edx],ebx
	add dword ptr [esp+0x60],4
	xor esi,esi
	cmp ebx,ebp
	jle Block195

 Block184:
	lea esp,[esp]

 Block185:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x574]
	mov eax,dword ptr [esp+0x5C]
	mov edi,dword ptr [ecx+esi*4]
	cmp eax,ebp
	jne Block187

 Block186:
	xor edx,edx
	jmp Block188

 Block187:
	mov edx,dword ptr [eax-4]

 Block188:
	mov ecx,dword ptr [esp+0x60]
	add ecx,4
	cmp ecx,edx
	jbe Block194

 Block189:
	cmp eax,ebp
	jne Block191

 Block190:
	xor eax,eax
	jmp Block192

 Block191:
	mov eax,dword ptr [eax-4]

 Block192:
	add eax,eax
	cmp ecx,eax
	ja Block192

 Block193:
	lea edx,[esp+0x17]
	push edx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block194:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr [eax+ecx],edi
	add dword ptr [esp+0x60],4
	inc esi
	cmp esi,ebx
	jl Block185

 Block195:
	mov edi,dword ptr [esp+0x1C]
	mov esi,dword ptr [edi+0x18]
	mov ecx,edi
	call CVecCtrlMob::IsCheatMobMoveRand
	test eax,eax
	mov eax,dword ptr [esp+0x5C]
	setne bl
	shl bl,4
	cmp esi,ebp
	sete dl
	or bl,dl
	cmp eax,ebp
	jne Block197

 Block196:
	xor edx,edx
	jmp Block198

 Block197:
	mov edx,dword ptr [eax-4]

 Block198:
	mov ecx,dword ptr [esp+0x60]
	inc ecx
	cmp ecx,edx
	jbe Block204

 Block199:
	cmp eax,ebp
	jne Block201

 Block200:
	xor eax,eax
	jmp Block202

 Block201:
	mov eax,dword ptr [eax-4]
	lea ecx,[ecx]

 Block202:
	add eax,eax
	cmp ecx,eax
	ja Block202

 Block203:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block204:
	mov edx,dword ptr [esp+0x60]
	mov byte ptr [eax+edx],bl
	inc dword ptr [esp+0x60]
	lea eax,[esp+0x4C]
	push eax
	mov ecx,edi
	call CVecCtrlMob::GetHackedCode
	mov ecx,eax
	mov byte ptr [esp+0x8C],1
	call TSecType<long>::GetData
	mov esi,eax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	jne Block206

 Block205:
	xor edx,edx
	jmp Block207

 Block206:
	mov edx,dword ptr [eax-4]

 Block207:
	mov ecx,dword ptr [esp+0x60]
	add ecx,4
	cmp ecx,edx
	jbe Block213

 Block208:
	cmp eax,ebp
	jne Block210

 Block209:
	xor eax,eax
	jmp Block211

 Block210:
	mov eax,dword ptr [eax-4]

 Block211:
	add eax,eax
	cmp ecx,eax
	ja Block211

 Block212:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block213:
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+edx],esi
	mov eax,dword ptr [esp+0x54]
	add dword ptr [esp+0x60],4
	mov byte ptr [esp+0x8C],0
	cmp eax,ebp
	je Block215

 Block214:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block215:
	mov edi,dword ptr [esp+0x48]
	mov ebx,dword ptr [esp+0x1C]
	cmp edi,ebp
	je Block217

 Block216:
	mov ecx,dword ptr [ebx+0x718]
	add ecx,0xC
	call TSecType<long>::GetData
	mov esi,eax
	jmp Block218

 Block217:
	mov esi,0xFFDDCC

 Block218:
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	jne Block220

 Block219:
	xor edx,edx
	jmp Block221

 Block220:
	mov edx,dword ptr [eax-4]

 Block221:
	mov ecx,dword ptr [esp+0x60]
	add ecx,4
	cmp ecx,edx
	jbe Block227

 Block222:
	cmp eax,ebp
	jne Block224

 Block223:
	xor eax,eax
	jmp Block225

 Block224:
	mov eax,dword ptr [eax-4]

 Block225:
	add eax,eax
	cmp ecx,eax
	ja Block225

 Block226:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block227:
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+edx],esi
	add dword ptr [esp+0x60],4
	cmp edi,ebp
	je Block229

 Block228:
	mov ecx,dword ptr [ebx+0x718]
	call TSecType<long>::GetData
	mov esi,eax
	jmp Block230

 Block229:
	mov esi,0xFFDDCC

 Block230:
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	jne Block232

 Block231:
	xor edx,edx
	jmp Block233

 Block232:
	mov edx,dword ptr [eax-4]

 Block233:
	mov ecx,dword ptr [esp+0x60]
	add ecx,4
	cmp ecx,edx
	jbe Block239

 Block234:
	cmp eax,ebp
	jne Block236

 Block235:
	xor eax,eax
	jmp Block237

 Block236:
	mov eax,dword ptr [eax-4]

 Block237:
	add eax,eax
	cmp ecx,eax
	ja Block237

 Block238:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block239:
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+edx],esi
	mov edi,4
	add dword ptr [esp+0x60],edi
	lea ecx,[ebx+0x728]
	call TSecType<unsigned long>::GetData
	mov esi,eax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	jne Block241

 Block240:
	xor edx,edx
	jmp Block242

 Block241:
	mov edx,dword ptr [eax-4]

 Block242:
	mov ecx,dword ptr [esp+0x60]
	add ecx,edi
	cmp ecx,edx
	jbe Block248

 Block243:
	cmp eax,ebp
	jne Block245

 Block244:
	xor eax,eax
	jmp Block246

 Block245:
	mov eax,dword ptr [eax-4]
	mov edi,edi

 Block246:
	add eax,eax
	cmp ecx,eax
	ja Block246

 Block247:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block248:
	mov edx,dword ptr [esp+0x60]
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [eax+edx],esi
	add dword ptr [esp+0x60],edi
	cmp dword ptr [ecx+0x28C],ebp
	je Block250

 Block249:
	mov eax,dword ptr [ecx+0x178]
	cmp eax,ebp
	jne Block251

 Block250:
	mov eax,dword ptr [ecx+0x174]

 Block251:
	mov ecx,dword ptr [eax+0x48]
	push ecx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x34]
	mov esi,dword ptr [esp+0x24]
	add esp,8
	xor ecx,ecx
	add edx,0x244
	cmp eax,4
	sete cl
	push edx
	lea edx,[esp+0x5C]
	push ecx
	push edx
	lea ecx,[esi+0x244]
	call CMovePath::Flush
	mov edi,dword ptr [esp+0x18]
	lea ecx,[edi+0x5A4]
	call TSecType<int>::GetData
	mov bl,al
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	jne Block253

 Block252:
	xor edx,edx
	jmp Block254

 Block253:
	mov edx,dword ptr [eax-4]

 Block254:
	mov ecx,dword ptr [esp+0x60]
	inc ecx
	cmp ecx,edx
	jbe Block260

 Block255:
	cmp eax,ebp
	jne Block257

 Block256:
	xor eax,eax
	jmp Block258

 Block257:
	mov eax,dword ptr [eax-4]
	lea ecx,[ecx]

 Block258:
	add eax,eax
	cmp ecx,eax
	ja Block258

 Block259:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block260:
	mov edx,dword ptr [esp+0x60]
	mov byte ptr [eax+edx],bl
	inc dword ptr [esp+0x60]
	cmp dword ptr [esi+0x300],ebp
	mov eax,dword ptr [esp+0x5C]
	setne bl
	cmp eax,ebp
	jne Block262

 Block261:
	xor edx,edx
	jmp Block263

 Block262:
	mov edx,dword ptr [eax-4]

 Block263:
	mov ecx,dword ptr [esp+0x60]
	inc ecx
	cmp ecx,edx
	jbe Block269

 Block264:
	cmp eax,ebp
	jne Block266

 Block265:
	xor eax,eax
	jmp Block267

 Block266:
	mov eax,dword ptr [eax-4]

 Block267:
	add eax,eax
	cmp ecx,eax
	ja Block267

 Block268:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block269:
	mov edx,dword ptr [esp+0x60]
	mov byte ptr [eax+edx],bl
	inc dword ptr [esp+0x60]
	lea ecx,[esi+0x734]
	call TSecType<int>::GetData
	mov bl,al
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	jne Block271

 Block270:
	xor edx,edx
	jmp Block272

 Block271:
	mov edx,dword ptr [eax-4]

 Block272:
	mov ecx,dword ptr [esp+0x60]
	inc ecx
	cmp ecx,edx
	jbe Block278

 Block273:
	cmp eax,ebp
	jne Block275

 Block274:
	xor eax,eax
	jmp Block276

 Block275:
	mov eax,dword ptr [eax-4]

 Block276:
	add eax,eax
	cmp ecx,eax
	ja Block276

 Block277:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block278:
	mov edx,dword ptr [esp+0x60]
	mov byte ptr [eax+edx],bl
	inc dword ptr [esp+0x60]
	lea ecx,[esi+0x740]
	call TSecType<int>::GetData
	mov bl,al
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	jne Block280

 Block279:
	xor edx,edx
	jmp Block281

 Block280:
	mov edx,dword ptr [eax-4]

 Block281:
	mov ecx,dword ptr [esp+0x60]
	inc ecx
	cmp ecx,edx
	jbe Block288

 Block282:
	cmp eax,ebp
	jne Block284

 Block283:
	xor eax,eax
	jmp Block286

 Block284:
	mov eax,dword ptr [eax-4]
	jmp Block286

 Block286:
	add eax,eax
	cmp ecx,eax
	ja Block286

 Block287:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block288:
	mov edx,dword ptr [esp+0x60]
	mov byte ptr [eax+edx],bl
	inc dword ptr [esp+0x60]
	lea ecx,[esi+0x310]
	call TSecType<long>::GetData
	mov esi,eax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	jne Block290

 Block289:
	xor edx,edx
	jmp Block291

 Block290:
	mov edx,dword ptr [eax-4]

 Block291:
	mov ecx,dword ptr [esp+0x60]
	add ecx,4
	cmp ecx,edx
	jbe Block297

 Block292:
	cmp eax,ebp
	jne Block294

 Block293:
	xor eax,eax
	jmp Block295

 Block294:
	mov eax,dword ptr [eax-4]

 Block295:
	add eax,eax
	cmp ecx,eax
	ja Block295

 Block296:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x68]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x5C]

 Block297:
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+edx],esi
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	add dword ptr [esp+0x60],4
	lea eax,[esp+0x58]
	push eax
	call CClientSocket::SendPacket
	mov ecx,dword ptr [edi+0x124]
	push ecx
	lea esi,[edi+0x11C]
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFE
	je Block299

 Block298:
	mov edx,dword ptr [edi+0x124]
	push edx
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ecx,2
	cmp eax,1
	jne Block300

 Block299:
	mov ecx,1

 Block300:
	mov edx,esi
	call _ZtlSecureTearHelper<long>::call
	lea ecx,[esp+0x5C]
	mov dword ptr [edi+0x124],eax
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x7C
	ret 0x24
}
}
// CMob::SetTemporaryStat
__SUB_CLASS_THIS(0024AFD0, __thiscall, 47503,  CMob, void, CInPacket&, long) {
__asm {

 Block0:
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	sub esp,0x10
	mov ebx,esp
	push 0x80
	sub esp,0x10
	mov ebp,esp
	mov esi,ecx
	push 0x80
	push 0
	lea ecx,[esp+0x4C]
	lea edi,[esi+0x188]
	call MY_UINT128::_ctor_1
	push eax
	mov ecx,ebp
	call MY_UINT128::_ctor_2
	lea eax,[esp+0x54]
	push eax
	call MY_UINT128::op_negate
	add esp,0x14
	push eax
	mov ecx,ebx
	call MY_UINT128::_ctor_2
	mov ecx,edi
	call MobStat::Reset_0
	mov ecx,dword ptr [esi+0x174]
	push ecx
	mov ecx,edi
	call MobStat::SetFrom
	lea ecx,[esp+0x10]
	call MY_UINT128::_ctor_default
	mov ebx,dword ptr [esp+0x44]
	push 0x10
	lea edx,[esp+0x14]
	push edx
	mov ecx,ebx
	call CInPacket::DecodeBuffer
	call get_update_time
	push eax
	push ebx
	sub esp,0x10
	mov ecx,esp
	push 0x80
	lea eax,[esp+0x2C]
	push eax
	call MY_UINT128::_ctor_2
	mov ecx,edi
	call MobStat::DecodeTemporary
	push offset MobStat::MS_Doom
	lea ecx,[esp+0x34]
	push ecx
	lea ecx,[esp+0x18]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block2

 Block1:
	push 0x18705
	call CMobTemplate::GetMobTemplate
	add esp,4
	push eax
	mov ecx,edi
	call MobStat::SetFromWhenDoom

 Block2:
	cmp dword ptr [esi+0x28C],0
	je Block4

 Block3:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block5

 Block4:
	mov eax,dword ptr [esi+0x174]

 Block5:
	mov edx,dword ptr [esi+0x384]
	add eax,0x118
	push eax
	push edx
	mov ecx,edi
	call MobStat::AdjustDamagedElemAttr
	mov eax,dword ptr [esp+0x48]
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x4EC],eax
	call CMob::UpdateAffectedSkillList
	push offset MobStat::MS_Speed
	lea ecx,[esp+0x34]
	push ecx
	lea ecx,[esp+0x18]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block7

 Block6:
	mov ecx,esi
	call CMob::SetShoeAttr

 Block7:
	push offset MobStat::MS_RiseByToss
	lea edx,[esp+0x34]
	push edx
	lea ecx,[esp+0x18]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block9

 Block8:
	mov dword ptr [esi+0x56C],0

 Block9:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 8
}
}
// CMob::GetCrc
__SUB_CLASS_THIS0(0023D530, __thiscall, 47561,  CMob, unsigned long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x4FC],0
	je Block2

 Block1:
	call CMob::CalcCrc
	mov dword ptr [esi+0x500],eax
	mov dword ptr [esi+0x4FC],0
	pop esi
	ret

 Block2:
	mov eax,dword ptr [esi+0x500]
	pop esi
	ret
}
}
// CMob::DAMAGEINFO::_ZtlSecurePut_tDelayedProcess
__SUB_CLASS(0023E6B0, __fastcall, 49841,  CMob::DAMAGEINFO, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	mov edx,edi
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+8],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// adjust_rect
__SUB(0023C7D0, __cdecl, 138340,  tagRECT&, tagRECT&, long, long, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+0x10],0
	push esi
	mov esi,dword ptr [esp+8]
	je Block2

 Block1:
	mov eax,dword ptr [esi+8]
	neg eax
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [esi]
	neg eax
	mov dword ptr [esi],eax
	mov ecx,dword ptr [esi+8]
	mov dword ptr [esi],ecx
	mov dword ptr [esi+8],eax

 Block2:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [esp+0xC]
	push edx
	push eax
	push esi
	call OffsetRect
	mov eax,esi
	pop esi
	ret
}
}
// CMob::GetHalfWidth
_SUB_EXCEPTION_HANDLER(23E790)
__SUB_CLASS_THIS0(0023E790, __thiscall, 47480,  CMob, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_23E790
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x458]
	add eax,0x14
	mov eax,dword ptr [eax+0xC]
	xor edi,edi
	mov dword ptr [esp+0x10],eax
	cmp eax,edi
	jne Block12

 Block1:
	mov eax,3
	mov word ptr [esp+0x14],ax
	mov dword ptr [esp+0x1C],edi
	mov ecx,dword ptr [ecx+0x4E8]
	mov dword ptr [esp+0x2C],edi
	cmp ecx,edi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x2C],2
	jne Block6

 Block4:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,edi
	je Block7

 Block5:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block7

 Block6:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block7:
	mov esi,dword ptr [esp+0x10]
	cmp esi,edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[esp+0xC]
	push ecx
	push esi
	mov dword ptr [esp+0x14],edi
	call edx
	cmp eax,edi
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block11:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ecx
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret

 Block12:
	lea edx,[esp+0x10]
	push edx
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::GetNext
	mov eax,dword ptr [eax+4]
	mov esi,dword ptr [eax+0xC]
	add esp,4
	mov dword ptr [esp+0x10],esi
	cmp esi,edi
	je Block14

 Block13:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block14:
	mov dword ptr [esp+0x2C],3
	cmp esi,edi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	lea eax,[esp+0xC]
	push eax
	push esi
	mov dword ptr [esp+0x14],edi
	call ecx
	cmp eax,edi
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	cmp dword ptr [esp+0xC],edi
	jle Block22

 Block19:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	lea eax,[esp+0xC]
	push eax
	push esi
	mov dword ptr [esp+0x14],edi
	call ecx
	cmp eax,edi
	jge Block21

 Block20:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block21:
	mov edi,dword ptr [esp+0xC]

 Block22:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call eax
	mov eax,edi
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret
}
}
// CMob::GetFoothold
__SUB_CLASS_THIS0(0053A1A0, __thiscall, 47498,  CMob, CStaticFoothold*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x104]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax+0x194]
	ret

 Block2:
	xor eax,eax
	mov eax,dword ptr [eax+0x1A0]
	ret
}
}
// CMob::GetPosPrev
__SUB_CLASS_THIS0(0024D020, __thiscall, 47514,  CMob, const tagPOINT) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x54C]
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
// CMob::DAMAGEINFO::_ZtlSecureGet_bMoveLeft
__SUB_CLASS0(0023A960, __fastcall, 49844,  CMob::DAMAGEINFO, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xA4]
	push eax
	add ecx,0x9C
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	ret
}
}
// CMob::OnDamaged
__SUB_CLASS_THIS(0024ECB0, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,edi
	movzx ebx,al
	call CInPacket::Decode4
	mov ebp,eax
	cmp ebx,2
	je Block2

 Block1:
	push 0
	push 0
	push 0
	push 0
	push 0
	push ebp
	mov ecx,esi
	call CMob::ShowDamage

 Block2:
	mov eax,dword ptr [esi+0x174]
	cmp dword ptr [eax+0x208],0
	je Block6

 Block3:
	cmp ebx,2
	je Block5

 Block4:
	push ebp
	mov ecx,esi
	call CMob::ShowHitEffect

 Block5:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov ebx,eax
	call CInPacket::Decode4
	mov ecx,eax
	mov eax,ebx
	imul eax,0x64
	cdq
	idiv ecx
	push 0xFFFF0000
	mov ecx,esi
	push eax
	call CMob::CreateHPIndicator
	mov ecx,esi
	call CMob::ShowHPIndicator

 Block6:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CMob::GetAttackBodyRect
__SUB_CLASS_THIS(002443C0, __thiscall, 47495,  CMob, void, ZArray<tagRECT>&, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push eax
	push edx
	lea eax,[ecx+0x454]
	push eax
	lea edx,[ecx+0x450]
	push edx
	call CMob::GetArrayBodyRectImpl
	ret 8
}
}
// CMob::SetFrameInfo
_SUB_EXCEPTION_HANDLER(242560)
__SUB_CLASS_THIS(00242560, __thiscall, 47558,  CMob, void, ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY> >&, __POSITION*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_242560
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
	mov ebx,ecx
	mov eax,dword ptr [esp+0x54]
	mov edi,dword ptr [eax+4]
	mov ebp,dword ptr [ZImports::_VariantInit]
	or esi,0xFFFFFFFF
	cmp dword ptr [edi+0x54],esi
	mov dword ptr [esp+0x14],edi
	jle Block19

 Block1:
	lea ecx,[esp+0x30]
	push ecx
	call ebp
	lea edx,[esp+0x30]
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
	lea eax,[esp+0x20]
	push eax
	mov dword ptr [esp+0x4C],0
	call ebp
	lea ecx,[esp+0x20]
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
	mov ecx,dword ptr [ebx+0x4E8]
	mov byte ptr [esp+0x48],1
	test ecx,ecx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x48],2
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [edi+0x54]
	lea edx,[esp+0x24]
	push edx
	push 0
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],1
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],0
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	cmp word ptr [esp+0x30],8
	mov dword ptr [esp+0x48],esi
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	cmp dword ptr [edi+0x58],esi
	jle Block40

 Block20:
	lea ecx,[esp+0x20]
	push ecx
	call ebp
	lea edx,[esp+0x20]
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
	mov esi,dword ptr [ebx+0x4E8]
	mov dword ptr [esp+0x48],3
	test esi,esi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block26

 Block25:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	mov eax,dword ptr [edi+0x50]
	add eax,dword ptr [esp+0x18]
	mov ecx,3
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],eax
	mov ecx,dword ptr [ebx+0x4E8]
	mov byte ptr [esp+0x48],4
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x48],5
	test ecx,ecx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [edi+0x58]
	lea edx,[esp+0x34]
	push edx
	push 0
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x48],4
	test eax,eax
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	mov esi,8
	mov byte ptr [esp+0x48],3
	cmp word ptr [esp+0x30],si
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp word ptr [esp+0x20],si
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov ecx,dword ptr [esp+0x50]
	mov edx,dword ptr [esp+0x54]
	cmp edx,dword ptr [ecx+0xC]
	jne Block42

 Block41:
	mov eax,dword ptr [ebx+0x424]
	push eax
	lea ecx,[ebx+0x41C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea edx,[ebx+0x410]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [ebx+0x418],eax

 Block42:
	mov edx,dword ptr [ebx+0x418]
	push edx
	lea esi,[ebx+0x410]
	push esi
	call _ZtlSecureFuseHelper<long>::call
	sub eax,dword ptr [edi+0x50]
	add esp,8
	mov edx,esi
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [ebx+0x418],eax
	mov ecx,dword ptr [edi+0x50]
	lea edx,[ebx+0x404]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [ebx+0x40C],eax
	mov eax,dword ptr [ebx+0x104]
	mov ecx,0xD
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block44:
	mov esi,dword ptr [ebx+0x10C]
	mov dword ptr [esp+0x48],6
	test esi,esi
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block48

 Block47:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block48:
	cmp word ptr [esp+0x20],8
	mov dword ptr [esp+0x48],0xFFFFFFFF
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov esi,dword ptr [ebx+0x4E8]
	test esi,esi
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x54]
	push ecx
	push esi
	mov dword ptr [esp+0x5C],0
	call edx
	test eax,eax
	jge Block56

 Block55:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block56:
	cmp dword ptr [esp+0x54],0
	jne Block70

 Block57:
	lea eax,[esp+0x20]
	push eax
	call ebp
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	lea edx,[esp+0x30]
	push edx
	mov dword ptr [esp+0x4C],7
	call ebp
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov ecx,dword ptr [ebx+0x10C]
	mov byte ptr [esp+0x48],8
	test ecx,ecx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea edx,[esp+0x20]
	push edx
	mov edx,dword ptr [edi+0x4C]
	lea eax,[esp+0x34]
	push eax
	mov eax,dword ptr [edi+0x48]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x48],7
	cmp word ptr [esp+0x30],si
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp word ptr [esp+0x20],si
	jne Block69

 Block68:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	jmp Block82

 Block69:
	lea ecx,[esp+0x20]
	push ecx
	jmp Block85

 Block70:
	lea edx,[esp+0x20]
	push edx
	call ebp
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	lea ecx,[esp+0x30]
	push ecx
	mov dword ptr [esp+0x4C],9
	call ebp
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	mov ecx,dword ptr [ebx+0x10C]
	mov byte ptr [esp+0x48],0xA
	test ecx,ecx
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [edi+0x4C]
	lea edx,[esp+0x34]
	push edx
	mov edx,dword ptr [edi+0x48]
	push eax
	neg edx
	push edx
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x48],9
	cmp word ptr [esp+0x30],si
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp word ptr [esp+0x20],si
	jne Block84

 Block81:
	xor edx,edx
	mov word ptr [esp+0x20],dx

 Block82:
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block86

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block84:
	lea eax,[esp+0x20]
	push eax

 Block85:
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov ecx,dword ptr [edi+0x18]
	lea esi,[edi+0x10]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebx+0x428],eax
	mov edx,dword ptr [esi+0x14]
	push edx
	lea eax,[esi+0xC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebx+0x42C],eax
	mov ecx,dword ptr [esi+0x20]
	push ecx
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebx+0x430],eax
	mov eax,dword ptr [esi+0x2C]
	push eax
	add esi,0x24
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x20
	mov dword ptr [ebx+0x434],eax
	mov edx,dword ptr [ebx+0x428]
	mov ecx,eax
	mov eax,dword ptr [ebx+0x42C]
	push ecx
	mov ecx,dword ptr [ebx+0x430]
	neg edx
	push edx
	push eax
	neg ecx
	push ecx
	lea edx,[ebx+0x438]
	push edx
	call SetRect
	mov eax,dword ptr [edi+0x44]
	test eax,eax
	je Block88

 Block87:
	mov eax,dword ptr [eax-4]

 Block88:
	lea edx,[esp+0x54]
	push edx
	lea ecx,[ebx+0x450]
	push eax
	call ZArray<tagRECT>::_Alloc
	mov eax,dword ptr [edi+0x44]
	test eax,eax
	je Block90

 Block89:
	mov eax,dword ptr [eax-4]

 Block90:
	lea edx,[esp+0x54]
	push edx
	lea ecx,[ebx+0x454]
	push eax
	call ZArray<tagRECT>::_Alloc
	xor ebp,ebp
	mov dword ptr [esp+0x54],ebp
	mov dword ptr [esp+0x50],ebp
	lea esp,[esp]

 Block91:
	mov eax,dword ptr [ebx+0x450]
	test eax,eax
	je Block94

 Block92:
	mov ecx,dword ptr [esp+0x54]
	cmp ecx,dword ptr [eax-4]
	jae Block94

 Block93:
	mov edx,dword ptr [esp+0x14]
	mov esi,dword ptr [edx+0x44]
	add esi,dword ptr [esp+0x50]
	mov edi,eax
	mov eax,dword ptr [esi+8]
	push eax
	push esi
	add edi,ebp
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [edi],eax
	mov ecx,dword ptr [esi+0x14]
	push ecx
	lea edx,[esi+0xC]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [esi+0x20]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [edi+8],eax
	mov edx,dword ptr [esi+0x2C]
	push edx
	add esi,0x24
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [edi+0xC],eax
	mov eax,dword ptr [ebx+0x450]
	mov ecx,dword ptr [eax+ebp+0xC]
	mov edx,dword ptr [eax+ebp]
	add eax,ebp
	add esp,0x20
	push ecx
	mov ecx,dword ptr [eax+4]
	neg edx
	push edx
	mov edx,dword ptr [eax+8]
	mov eax,dword ptr [ebx+0x454]
	push ecx
	neg edx
	push edx
	add eax,ebp
	push eax
	call SetRect
	inc dword ptr [esp+0x54]
	add dword ptr [esp+0x50],0x30
	mov edi,dword ptr [esp+0x14]
	add ebp,0x10
	jmp Block91

 Block94:
	mov eax,dword ptr [edi+0x40]
	test eax,eax
	je Block96

 Block95:
	mov eax,dword ptr [eax-4]

 Block96:
	lea ecx,[esp+0x54]
	push ecx
	lea esi,[ebx+0x448]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x58],esi
	call ZArray<tagRECT>::_Alloc
	mov eax,dword ptr [edi+0x40]
	xor ebp,ebp
	cmp eax,ebp
	jne Block98

 Block97:
	xor eax,eax
	jmp Block99

 Block98:
	mov eax,dword ptr [eax-4]

 Block99:
	lea edx,[esp+0x54]
	push edx
	lea ecx,[ebx+0x44C]
	push eax
	mov dword ptr [esp+0x24],ecx
	call ZArray<tagRECT>::_Alloc
	mov dword ptr [esp+0x54],ebp
	xor ebx,ebx

 Block100:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block103

 Block101:
	mov ecx,dword ptr [esp+0x54]
	cmp ecx,dword ptr [eax-4]
	jae Block103

 Block102:
	mov edx,dword ptr [esp+0x14]
	mov esi,dword ptr [edx+0x40]
	mov ecx,dword ptr [esi+ebx+8]
	mov eax,dword ptr [esp+0x50]
	mov edi,dword ptr [eax]
	add esi,ebx
	push ecx
	push esi
	add edi,ebp
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [edi],eax
	mov edx,dword ptr [esi+0x14]
	push edx
	lea eax,[esi+0xC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [edi+4],eax
	mov ecx,dword ptr [esi+0x20]
	push ecx
	lea edx,[esi+0x18]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [edi+8],eax
	mov eax,dword ptr [esi+0x2C]
	push eax
	add esi,0x24
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr [edi+0xC],eax
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [edx+ebp+0xC]
	lea eax,[edx+ebp]
	mov edx,dword ptr [eax]
	add esp,0x20
	push ecx
	mov ecx,dword ptr [eax+4]
	neg edx
	push edx
	mov edx,dword ptr [eax+8]
	mov eax,dword ptr [esp+0x24]
	push ecx
	mov ecx,dword ptr [eax]
	neg edx
	push edx
	add ecx,ebp
	push ecx
	call SetRect
	inc dword ptr [esp+0x54]
	mov esi,dword ptr [esp+0x50]
	add ebx,0x30
	add ebp,0x10
	jmp Block100

 Block103:
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
// CMob::IsRisingByToss
__SUB_CLASS_THIS0(0023A980, __thiscall, 47473,  CMob, int32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x31C],0
	jne Block2

 Block1:
	cmp dword ptr [ecx+0x56C],0
	je Block7

 Block2:
	mov ecx,dword ptr [ecx+0x104]
	test ecx,ecx
	je Block4

 Block3:
	lea eax,[ecx-0xC]
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	cmp dword ptr [eax+0x1A0],0
	jne Block7

 Block6:
	mov eax,1
	ret

 Block7:
	xor eax,eax
	ret
}
}
// CMob::ShowDamage
__SUB_CLASS_THIS(0023C950, __thiscall, 47528,  CMob, void, long, long, int32_t, int32_t, int32_t, int32_t) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [esp+8],0
	push ebx
	mov ebx,ecx
	jne Block4

 Block1:
	mov eax,dword ptr [ebx+0x174]
	test eax,eax
	je Block4

 Block2:
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x8F71B0
	je Block29

 Block3:
	mov eax,dword ptr [ebx+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x8F71AF
	je Block29

 Block4:
	push esi
	mov esi,dword ptr [ebx+0x10C]
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	cmp dword ptr [esp+0x20],0
	push ebp
	mov ebp,dword ptr [esp+0x18]
	push edi
	mov edi,dword ptr [esp+0x10]
	je Block15

 Block9:
	mov esi,ebp
	and esi,0x80000001
	jns Block11

 Block10:
	dec esi
	or esi,0xFFFFFFFE
	inc esi

 Block11:
	mov eax,dword ptr [ebx+0x174]
	neg esi
	sbb esi,esi
	and esi,0x1E
	add esi,0xFFFFFFF1
	cmp dword ptr [eax+0x1A0],0
	jne Block13

 Block12:
	mov ecx,dword ptr [ebx+0x3D8]
	push ecx
	lea edx,[ebx+0x3D0]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	and eax,1
	je Block14

 Block13:
	sub edi,esi
	jmp Block15

 Block14:
	add edi,esi

 Block15:
	mov esi,dword ptr [ebx+0x10C]
	test esi,esi
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esp+0x28]
	push ecx
	push esi
	mov dword ptr [esp+0x30],0
	call edx
	test eax,eax
	jge Block19

 Block18:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x28]
	neg ecx
	sbb ecx,ecx
	and ecx,0xFFFFFFF1
	add ecx,0x1E
	imul ecx,ebp
	sub eax,ecx
	sub eax,0xF
	cmp dword ptr [esp+0x2C],0
	je Block21

 Block20:
	mov edx,ebp
	neg edx
	add edx,edx
	add edx,edx
	sub edx,ebp
	add eax,edx

 Block21:
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	jle Block23

 Block22:
	mov edx,dword ptr [esp+0x20]
	push edx
	push 0
	jmp Block27

 Block23:
	jne Block25

 Block24:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	push eax
	push edi
	call CAnimationDisplayer::Effect_Miss
	pop edi
	pop ebp
	pop esi
	pop ebx
	pop ecx
	ret 0x18

 Block25:
	test ecx,ecx
	jge Block28

 Block26:
	push 0
	push 1
	neg ecx

 Block27:
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	push edi
	call CAnimationDisplayer::Effect_HP

 Block28:
	pop edi
	pop ebp
	pop esi

 Block29:
	pop ebx
	pop ecx
	ret 0x18
}
}
// CMob::_ZtlSecureGet_m_tInitDelay
__SUB_CLASS0(0023A7C0, __fastcall, 47541,  CMob, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x464]
	push eax
	add ecx,0x45C
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::SetActive
__SUB_CLASS_THIS(00240950, __thiscall, 47472,  CMob, void, int32_t) {
__asm {

 Block0:
	push ebp
	push esi
	mov esi,ecx
	push edi
	mov edi,dword ptr [esi+0x104]
	test edi,edi
	je Block2

 Block1:
	add edi,0xFFFFFFF4
	jmp Block3

 Block2:
	xor edi,edi

 Block3:
	mov ebp,dword ptr [esi+0x108]
	test ebp,ebp
	je Block5

 Block4:
	add ebp,0xFFFFFFF4
	jmp Block6

 Block5:
	xor ebp,ebp

 Block6:
	cmp dword ptr [esp+0x10],0
	je Block9

 Block7:
	cmp dword ptr [ebp+0x18],0
	jne Block21

 Block8:
	lea edx,[esi+0x11C]
	mov ecx,3
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x124],eax
	movsx eax,word ptr [edi+0x2AC]
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov esi,dword ptr [ebp]
	push eax
	call CWvsPhysicalSpace2D::GetFoothold
	movzx ecx,byte ptr [edi+0x2AA]
	movsx edx,word ptr [edi+0x2A8]
	push eax
	movsx eax,word ptr [edi+0x2A6]
	push ecx
	movsx ecx,word ptr [edi+0x2A4]
	push edx
	movsx edx,word ptr [edi+0x2A2]
	push eax
	mov eax,dword ptr [esi+4]
	push ecx
	push edx
	push 1
	mov ecx,ebp
	call eax
	pop edi
	pop esi
	pop ebp
	ret 4

 Block9:
	cmp dword ptr [ebp+0x18],0
	je Block21

 Block10:
	mov ecx,dword ptr [esi+0x124]
	push ebx
	push ecx
	lea ebx,[esi+0x11C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	sub eax,3
	mov edx,ebx
	je Block18

 Block11:
	sub eax,1
	je Block17

 Block12:
	or ecx,0xFFFFFFFF
	call _ZtlSecureTearHelper<long>::call
	cmp dword ptr [esi+0x28C],0
	mov dword ptr [esi+0x124],eax
	je Block15

 Block13:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	je Block15

 Block14:
	mov esi,eax
	jmp Block16

 Block15:
	mov esi,dword ptr [esi+0x174]

 Block16:
	mov edx,dword ptr [esi+0x48]
	push edx
	add esi,0x40
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push 0
	push edi
	push eax
	lea ecx,[edi+0x244]
	call CMovePath::DiscardByInterrupt
	jmp Block20

 Block17:
	mov ecx,0xFFFFFFFD
	jmp Block19

 Block18:
	mov ecx,0xFFFFFFFE

 Block19:
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x124],eax

 Block20:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+4]
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	mov ecx,ebp
	call edx
	pop ebx

 Block21:
	pop edi
	pop esi
	pop ebp
	ret 4
}
}
// CMob::IsDazzledMobByMe
__SUB_CLASS_THIS0(0023B570, __thiscall, 47473,  CMob, int32_t) {
__asm {

 Block0:
	mov edx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test edx,edx
	je Block4

 Block1:
	mov eax,dword ptr [ecx+0x310]
	test eax,eax
	je Block4

 Block2:
	cmp eax,dword ptr [edx+0x19E8]
	jne Block4

 Block3:
	mov eax,1
	ret

 Block4:
	xor eax,eax
	ret
}
}
// CMob::IsOnPlayingOneTimeAction
__SUB_CLASS_THIS0(0023E1D0, __thiscall, 47475,  CMob, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3E4]
	push eax
	add ecx,0x3DC
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	xor ecx,ecx
	add esp,8
	cmp eax,0xFFFFFFFF
	setg cl
	mov eax,ecx
	ret
}
}
// get_item_sound
__SUB(0023A050, __cdecl, 138321,  const wchar_t*, long, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x22A332
	je Block2

 Block1:
	xor eax,eax
	ret

 Block2:
	cmp dword ptr [esp+8],0
	mov eax,offset _D_SPATHSUCCESS
	jne Block4

 Block3:
	mov eax,offset _D_SPATHFAIL

 Block4:
	ret
}
}
// CMob::IsActive
__SUB_CLASS_THIS0(0023AB30, __thiscall, 47473,  CMob, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x108]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax+0xC]
	ret

 Block2:
	xor eax,eax
	mov eax,dword ptr [eax+0x18]
	ret
}
}
// CMob::IsPosFixed
__SUB_CLASS_THIS0(0023A6E0, __thiscall, 47475,  CMob, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x174]
	mov ecx,dword ptr [eax+0x48]
	push ecx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	neg eax
	sbb eax,eax
	inc eax
	ret
}
}
// CMob::ShowAffectedSkill
_SUB_EXCEPTION_HANDLER(24EF30)
__SUB_CLASS_THIS(0024EF30, __thiscall, 47489,  CMob, int32_t, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24EF30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xD8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x5C],ecx
	mov esi,dword ptr [ecx+0x4E8]
	xor edi,edi
	mov dword ptr [ebp+0x60],edi
	cmp esi,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xDC]
	lea ecx,[ebp+0x50]
	push ecx
	push esi
	mov dword ptr [ebp+0x50],edi
	call edx
	cmp eax,edi
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov edi,dword ptr [ebp+0x50]
	mov eax,dword ptr [ebp+0x5C]
	mov eax,dword ptr [eax+0xBC]
	xor ecx,ecx
	and edi,0xFFFFFF
	mov ebx,0xFFFFFF
	mov dword ptr [ebp+0x34],edi
	mov dword ptr [ebp+0x54],ebx
	mov dword ptr [ebp+0x50],ecx
	mov dword ptr [ebp+0x28],ecx
	mov dword ptr [ebp+0x24],eax
	cmp eax,ecx
	je Block271

 Block5:
	lea ecx,[ebp+0x24]
	push ecx
	call ZList<CMob::AFFECTEDSKILLENTRY>::GetNext
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	mov edi,eax
	mov edx,dword ptr [edi]
	add esp,4
	push edx
	mov dword ptr [ebp+0x40],edi
	call CSkillInfo::GetSkill
	mov esi,dword ptr [edi]
	mov ecx,eax
	mov eax,0x431BDE83
	imul esi
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	je Block8

 Block6:
	test ecx,ecx
	je Block8

 Block7:
	mov dword ptr [ebp+0x3C],esi
	jmp Block9

 Block8:
	movsx edx,si
	mov dword ptr [ebp+0x3C],edx

 Block9:
	test eax,eax
	je Block12

 Block10:
	test ecx,ecx
	je Block12

 Block11:
	xor esi,esi
	jmp Block13

 Block12:
	sar esi,0x10

 Block13:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block219

 Block14:
	mov edx,eax
	sub edx,dword ptr [ebp+0x74]
	test edx,edx
	jg Block269

 Block15:
	test eax,eax
	je Block219

 Block16:
	xor edi,edi
	mov dword ptr [ebp+0x30],edi
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp+0x48],edi
	mov dword ptr [ebp+0x58],edi
	mov dword ptr [ebp+0x64],edi
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],3
	cmp eax,0x1EA1CC1
	jne Block40

 Block17:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x2715
	call CSkillInfo::GetItemSkill
	cmp eax,edi
	je Block19

 Block18:
	mov eax,dword ptr [eax+4]
	jmp Block20

 Block19:
	or dword ptr [ebp+0x60],1
	mov dword ptr [ebp+0x1C],edi
	lea eax,[ebp+0x18]

 Block20:
	mov ebx,dword ptr [eax+4]
	mov dword ptr [ebp-0xD0],ebx
	cmp ebx,edi
	je Block22

 Block21:
	lea eax,[ebx-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block22:
	test byte ptr [ebp+0x60],1
	mov byte ptr [ebp-4],4
	je Block28

 Block23:
	and dword ptr [ebp+0x60],0xFFFFFFFE
	cmp dword ptr [ebp+0x1C],edi
	je Block28

 Block24:
	mov esi,dword ptr [ebp+0x1C]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block25:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block27

 Block26:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block27:
	mov dword ptr [ebp+0x1C],0
	xor edi,edi

 Block28:
	cmp ebx,edi
	je Block35

 Block29:
	mov eax,dword ptr [ebx+0x18]
	lea ecx,[ebx+0x18]
	cmp eax,edi
	je Block35

 Block30:
	mov eax,dword ptr [eax]
	cmp eax,edi
	je Block35

 Block31:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,edi
	je Block35

 Block32:
	lea edx,[ebp+0x64]
	cmp edx,ecx
	je Block35

 Block33:
	mov ecx,dword ptr [ecx]
	mov dword ptr [ebp+0x64],ecx
	cmp ecx,edi
	je Block35

 Block34:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block35:
	mov byte ptr [ebp-4],3
	cmp ebx,edi
	je Block89

 Block36:
	lea esi,[ebx-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block37:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block39

 Block38:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block39:
	mov dword ptr [ebp-0xD0],0
	xor edi,edi
	jmp Block89

 Block40:
	lea edx,[eax-0x2710]
	cmp edx,0xD6D8
	ja Block58

 Block41:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetItemSkill
	cmp eax,edi
	je Block43

 Block42:
	mov eax,dword ptr [eax+4]
	lea eax,[eax+esi*8-8]
	jmp Block44

 Block43:
	or dword ptr [ebp+0x60],2
	mov dword ptr [ebp-0x98],edi
	lea eax,[ebp-0x9C]

 Block44:
	mov esi,dword ptr [eax+4]
	mov dword ptr [ebp-0xD8],esi
	cmp esi,edi
	je Block46

 Block45:
	lea ecx,[esi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block46:
	test byte ptr [ebp+0x60],2
	mov byte ptr [ebp-4],5
	je Block48

 Block47:
	and dword ptr [ebp+0x60],0xFFFFFFFD
	lea ecx,[ebp-0x9C]
	call ZRef<ITEMSKILLLEVELDATA>::~ZRef<ITEMSKILLLEVELDATA>

 Block48:
	cmp esi,edi
	je Block53

 Block49:
	mov eax,dword ptr [esi+0x18]
	lea ecx,[esi+0x18]
	cmp eax,edi
	je Block53

 Block50:
	mov eax,dword ptr [eax]
	cmp eax,edi
	je Block53

 Block51:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,edi
	je Block53

 Block52:
	push ecx
	lea ecx,[ebp+0x64]
	call Ztl_bstr_t::op_assign

 Block53:
	mov byte ptr [ebp-4],3
	cmp esi,edi
	je Block89

 Block54:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block57

 Block55:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block57

 Block56:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block57:
	mov dword ptr [ebp-0xD8],0
	xor edi,edi
	jmp Block89

 Block58:
	lea edx,[eax-0x3E8]
	cmp edx,5
	ja Block72

 Block59:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetItemOptionSkill
	cmp eax,edi
	je Block61

 Block60:
	mov eax,dword ptr [eax+4]
	lea eax,[eax+esi*8-8]
	jmp Block62

 Block61:
	or dword ptr [ebp+0x60],4
	mov dword ptr [ebp-0x90],edi
	lea eax,[ebp-0x94]

 Block62:
	mov esi,dword ptr [eax+4]
	mov dword ptr [ebp-0xE0],esi
	cmp esi,edi
	je Block64

 Block63:
	lea ecx,[esi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block64:
	test byte ptr [ebp+0x60],4
	mov byte ptr [ebp-4],6
	je Block66

 Block65:
	and dword ptr [ebp+0x60],0xFFFFFFFB
	lea ecx,[ebp-0x94]
	call ZRef<ITEMOPTIONSKILLLEVELDATA>::~ZRef<ITEMOPTIONSKILLLEVELDATA>

 Block66:
	cmp esi,edi
	je Block71

 Block67:
	mov eax,dword ptr [esi+0x1C]
	lea ecx,[esi+0x1C]
	cmp eax,edi
	je Block71

 Block68:
	mov eax,dword ptr [eax]
	cmp eax,edi
	je Block71

 Block69:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,edi
	je Block71

 Block70:
	push ecx
	lea ecx,[ebp+0x64]
	call Ztl_bstr_t::op_assign

 Block71:
	lea ecx,[ebp-0xE4]
	mov byte ptr [ebp-4],3
	call ZRef<ITEMOPTIONSKILLLEVELDATA>::~ZRef<ITEMOPTIONSKILLLEVELDATA>
	jmp Block89

 Block72:
	lea edx,[eax-0x64]
	cmp edx,0x383
	ja Block87

 Block73:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetMobSkill
	imul esi,0x5C
	mov eax,dword ptr [eax+4]
	lea ebx,[eax+esi-0x5C]
	mov esi,dword ptr [ebp+0x5C]
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	xor edx,edx
	mov ecx,0x864700
	div ecx
	add esp,8
	cmp edx,2
	jbe Block76

 Block74:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	xor edx,edx
	mov ecx,0x864700
	div ecx
	add esp,8
	cmp edx,0xA
	ja Block76

 Block75:
	lea ecx,[ebp+0x64]
	call Ztl_bstr_t::~Ztl_bstr_t
	mov dword ptr [ebp-4],0xFFFFFFFF
	jmp Block269

 Block76:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	xor edx,edx
	mov ecx,0x864764
	div ecx
	add esp,8
	cmp edx,2
	jbe Block79

 Block77:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	xor edx,edx
	mov ecx,0x864764
	div ecx
	add esp,8
	cmp edx,0xA
	ja Block79

 Block78:
	lea ecx,[ebp+0x64]
	call Ztl_bstr_t::~Ztl_bstr_t
	mov dword ptr [ebp-4],0xFFFFFFFF
	jmp Block269

 Block79:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	xor edx,edx
	mov ecx,0x866E10
	div ecx
	add esp,8
	cmp edx,4
	jbe Block82

 Block80:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	xor edx,edx
	mov ecx,0x866E10
	div ecx
	add esp,8
	cmp edx,0x14
	ja Block82

 Block81:
	lea ecx,[ebp+0x64]
	call Ztl_bstr_t::~Ztl_bstr_t
	mov dword ptr [ebp-4],0xFFFFFFFF
	jmp Block269

 Block82:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	xor edx,edx
	mov ecx,0x866E74
	div ecx
	add esp,8
	cmp edx,4
	jbe Block85

 Block83:
	mov ecx,dword ptr [esi+0x174]
	call CMobTemplate::_ZtlSecureGet_dwTemplateID
	xor edx,edx
	mov ecx,0x866E74
	div ecx
	cmp edx,0x18
	ja Block85

 Block84:
	lea ecx,[ebp+0x64]
	call Ztl_bstr_t::~Ztl_bstr_t
	mov dword ptr [ebp-4],0xFFFFFFFF
	jmp Block269

 Block85:
	lea edx,[ebp+0xC]
	push edx
	mov ecx,ebx
	call MOBSKILLLEVELDATA::GetMobUOL
	mov ecx,eax
	call _xbstr_t::length
	lea ecx,[ebp+0xC]
	mov esi,eax
	call Ztl_bstr_t::~Ztl_bstr_t
	cmp esi,edi
	je Block89

 Block86:
	lea eax,[ebp+0x10]
	push eax
	mov ecx,ebx
	call MOBSKILLLEVELDATA::GetMobUOL
	push eax
	lea ecx,[ebp+0x64]
	call Ztl_bstr_t::op_assign
	lea ecx,[ebp+0x10]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block89

 Block87:
	lea edx,[ebp+0x20]
	push edx
	call SKILLENTRY::GetMobUOL
	push eax
	lea ecx,[ebp+0x64]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [ebp+0x20]
	cmp ecx,edi
	je Block89

 Block88:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x20],edi

 Block89:
	mov eax,dword ptr [ebp+0x40]
	mov dword ptr [eax+8],edi
	mov dword ptr [eax+4],edi
	cmp dword ptr [ebp+0x64],edi
	je Block206

 Block90:
	mov eax,dword ptr [ebp+0x64]
	cmp dword ptr [eax],0
	je Block206

 Block91:
	mov ecx,eax
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block206

 Block92:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block206

 Block93:
	or esi,0xFFFFFFFF
	mov dword ptr [ebp+0x38],esi
	jmp Block95

 Block94:
	mov esi,dword ptr [ebp+0x38]

 Block95:
	test esi,esi
	jl Block97

 Block96:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,0xC
	mov esi,eax
	jmp Block98

 Block97:
	mov esi,offset _S___3

 Block98:
	lea edx,[ebp+8]
	push 0x3DA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [eax]
	push esi
	push edx
	push eax
	lea eax,[ebp+0x48]
	push eax
	mov byte ptr [ebp-4],7
	call ZXString16::Format
	mov eax,dword ptr [ebp+8]
	add esp,0x10
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block100:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x5C]
	push ecx
	call esi
	lea edx,[ebp-0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block274

 Block101:
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],8
	call esi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block274

 Block102:
	push 0
	push 0
	lea edx,[ebp-0x5C]
	push edx
	mov edx,dword ptr [ebp+0x48]
	lea eax,[ebp-0x1C]
	push eax
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],9
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xA
	je Block1

 Block103:
	lea eax,[ebp-0xAC]
	mov byte ptr [ebp-4],9
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block111

 Block104:
	mov ecx,dword ptr [eax]
	lea edx,[ebp]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebp+0x58]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp]
	mov edi,ecx
	test eax,eax
	je Block106

 Block105:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block106:
	mov dword ptr [ebp+0x58],edi
	test esi,esi
	jge Block108

 Block107:
	cmp esi,0x80004002
	jne Block275

 Block108:
	mov esi,8
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0xAC],si
	jne Block114

 Block109:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	test eax,eax
	je Block115

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block111:
	cmp dword ptr [ebp+0x58],0
	je Block108

 Block112:
	mov eax,dword ptr [ebp+0x58]
	mov dword ptr [ebp+0x58],0
	test eax,eax
	je Block108

 Block113:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block108

 Block114:
	lea ecx,[ebp-0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x1C],si
	jne Block118

 Block116:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x5C],si
	jne Block122

 Block120:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	cmp dword ptr [ebp+0x58],0
	sete al
	test al,al
	jne Block206

 Block124:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax+0x174]
	cmp dword ptr [ecx+0x1A0],0
	push 0xFFFFFFFF
	push 0
	push 0
	push 0
	je Block126

 Block125:
	mov eax,1
	jmp Block127

 Block126:
	mov edx,dword ptr [eax+0x3D8]
	push edx
	add eax,0x3D0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	and eax,1

 Block127:
	push eax
	mov eax,dword ptr [ebp+0x48]
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	call CMob::LoadLayer
	mov eax,dword ptr [eax]
	mov ebx,dword ptr [ebp+0x30]
	cmp ebx,eax
	je Block132

 Block128:
	mov esi,ebx
	mov ebx,eax
	mov dword ptr [ebp+0x30],ebx
	test eax,eax
	je Block130

 Block129:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block130:
	test esi,esi
	je Block132

 Block131:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block132:
	mov eax,dword ptr [ebp+0x14]
	test eax,eax
	je Block134

 Block133:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block134:
	test ebx,ebx
	je Block205

 Block135:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x114]
	lea ecx,[ebp+0x44]
	push ecx
	push ebx
	mov dword ptr [ebp+0x44],0
	call edx
	test eax,eax
	jge Block137

 Block136:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block137:
	cmp dword ptr [ebp+0x44],0
	jne Block142

 Block138:
	mov ecx,dword ptr [ebp+0x5C]
	add ecx,0xEC
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_
	mov esi,eax
	mov edi,dword ptr [esi]
	cmp edi,ebx
	je Block141

 Block139:
	mov dword ptr [esi],ebx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx
	test edi,edi
	je Block141

 Block140:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block141:
	mov eax,dword ptr [ebp+0x40]
	mov ecx,1
	add dword ptr [ebp+0x28],ecx
	mov dword ptr [eax+0xC],ecx
	jmp Block175

 Block142:
	mov edi,dword ptr [ebp+0x5C]
	cmp dword ptr [edi+0xE0],0
	jbe Block171

 Block143:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x2C]
	push ecx
	call esi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block274

 Block144:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],0xC
	call esi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block274

 Block145:
	mov eax,dword ptr [edi+0xE8]
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0xD
	test ecx,ecx
	je Block1

 Block146:
	lea edx,[ebp+4]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0xE
	test ecx,ecx
	je Block1

 Block147:
	lea eax,[ebp-0x2C]
	push eax
	lea edx,[ebp-0x3C]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block149

 Block148:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block149:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0xC
	jne Block156

 Block150:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block152

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block152:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block153:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],3
	jne Block157

 Block154:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block158

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block156:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x3C]
	push ecx
	call edi
	jmp Block153

 Block157:
	lea eax,[ebp-0x2C]
	push eax
	call edi

 Block158:
	lea ecx,[ebp-0x6C]
	push ecx
	call esi
	lea edx,[ebp-0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block274

 Block159:
	lea eax,[ebp-0x4C]
	push eax
	mov byte ptr [ebp-4],0xF
	call esi
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block274

 Block160:
	lea edx,[ebp+0x2C]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x10
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x11
	test ecx,ecx
	je Block1

 Block161:
	lea eax,[ebp-0x6C]
	push eax
	lea edx,[ebp-0x4C]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block163

 Block162:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block163:
	mov esi,8
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x4C],si
	jne Block166

 Block164:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea ecx,[ebp-0x4C]
	push ecx
	call edi

 Block167:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x6C],si
	jne Block170

 Block168:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	test eax,eax
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea eax,[ebp-0x6C]
	push eax
	call edi

 Block171:
	mov ecx,dword ptr [ebp+0x5C]
	add ecx,0xD8
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_
	mov esi,eax
	mov edi,dword ptr [esi]
	cmp edi,ebx
	je Block174

 Block172:
	mov dword ptr [esi],ebx
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx
	test edi,edi
	je Block174

 Block173:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block174:
	mov eax,dword ptr [ebp+0x40]
	mov dword ptr [eax+0xC],0

 Block175:
	lea edx,[ebp-0x7C]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [ZImports::_VariantInit]
	push edx
	call esi
	lea eax,[ebp-0x7C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jl Block274

 Block176:
	lea ecx,[ebp-0x8C]
	push ecx
	mov byte ptr [ebp-4],0x12
	call esi
	lea edx,[ebp-0x8C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block274

 Block177:
	mov edx,dword ptr [ebp+0x48]
	push ebx
	push ebx
	lea eax,[ebp-0x7C]
	push eax
	lea ecx,[ebp-0x8C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x13
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x14
	cmp dword ptr [_D_G_RM],ebx
	je Block1

 Block178:
	lea eax,[ebp-0xCC]
	mov byte ptr [ebp-4],0x13
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block180

 Block179:
	cmp eax,0x80004002
	jne Block274

 Block180:
	mov esi,8
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp-0xCC],si
	jne Block183

 Block181:
	mov eax,dword ptr [ebp-0xC4]
	xor ecx,ecx
	mov word ptr [ebp-0xCC],cx
	cmp eax,ebx
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea edx,[ebp-0xCC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block184:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x8C],si
	jne Block187

 Block185:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	cmp eax,ebx
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block188:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp-0x7C],si
	jne Block191

 Block189:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	cmp eax,ebx
	je Block192

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block192

 Block191:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block192:
	mov edi,dword ptr [ebp+0x44]
	cmp edi,ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block203

 Block193:
	cmp edi,ebx
	je Block1

 Block194:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x4C]
	push edx
	push edi
	mov dword ptr [ebp+0x4C],ebx
	call eax
	cmp eax,ebx
	jge Block196

 Block195:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block196:
	cmp dword ptr [ebp+0x4C],ebx
	je Block203

 Block197:
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x105F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xBC]
	mov byte ptr [ebp-4],0x1A
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x19
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1B
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [ebp-0xBC],8
	mov byte ptr [ebp-4],0x19
	jne Block200

 Block198:
	xor eax,eax
	mov word ptr [ebp-0xBC],ax
	mov eax,dword ptr [ebp-0xB4]
	cmp eax,ebx
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea ecx,[ebp-0xBC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block201:
	cmp esi,ebx
	je Block203

 Block202:
	mov edx,dword ptr [ebp+0x40]
	mov dword ptr [edx+0x10],1

 Block203:
	mov ecx,dword ptr [ebp+0x5C]
	push 1
	call CMob::ShiftAffectedSkillAnimation
	mov byte ptr [ebp-4],3
	cmp edi,ebx
	je Block205

 Block204:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block205:
	mov eax,dword ptr [ebp+0x38]
	inc eax
	cmp eax,0x64
	mov dword ptr [ebp+0x38],eax
	jle Block94

 Block206:
	mov esi,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],2
	test esi,esi
	je Block213

 Block207:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block213

 Block208:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block210

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block210:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block212

 Block211:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block212:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block213:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block215

 Block214:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block215:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block217

 Block216:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block217:
	mov eax,dword ptr [ebp+0x30]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block219

 Block218:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block219:
	mov esi,dword ptr [ebp+0x5C]
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x6C]
	push ecx
	add eax,0x64
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block269

 Block220:
	mov eax,dword ptr [ebp+0x3C]
	cmp eax,0x23435D
	jg Block246

 Block221:
	je Block244

 Block222:
	cmp eax,0x205D2F
	jg Block234

 Block223:
	je Block268

 Block224:
	cmp eax,0x20361B
	jg Block230

 Block225:
	je Block229

 Block226:
	cmp eax,0x2714
	je Block266

 Block227:
	cmp eax,0x127A7E
	je Block266

 Block228:
	cmp eax,0x200F0D
	jne Block269

 Block229:
	mov dword ptr [ebp+0x54],0x5B8F3B
	jmp Block269

 Block230:
	sub eax,0x20361E
	je Block229

 Block231:
	sub eax,0x270D
	je Block268

 Block232:
	sub eax,3
	jne Block269

 Block233:
	mov dword ptr [ebp+0x54],0x999999
	mov dword ptr [ebp+0x50],1
	jmp Block269

 Block234:
	cmp eax,0x21E3CB
	jg Block241

 Block235:
	je Block240

 Block236:
	sub eax,0x2195AC
	je Block266

 Block237:
	sub eax,0x270E
	je Block266

 Block238:
	sub eax,4
	je Block266

 Block239:
	jmp Block269

 Block240:
	mov dword ptr [ebp+0x54],0xC0FF
	jmp Block269

 Block241:
	sub eax,0x21E3CD
	je Block266

 Block242:
	sub eax,2
	je Block266

 Block243:
	jmp Block269

 Block244:
	cmp dword ptr [esi+0x28C],0
	je Block269

 Block245:
	push 1
	mov ecx,esi
	call CMob::OnDoomed
	jmp Block269

 Block246:
	cmp eax,0xB8CC9B
	jg Block258

 Block247:
	je Block268

 Block248:
	cmp eax,0x423D0C
	jg Block254

 Block249:
	je Block268

 Block250:
	cmp eax,0x2F785B
	je Block268

 Block251:
	cmp eax,0x30FEFB
	je Block266

 Block252:
	cmp eax,0x31260D
	je Block266

 Block253:
	jmp Block269

 Block254:
	sub eax,0x4F5C6A
	je Block268

 Block255:
	sub eax,0x2712
	je Block268

 Block256:
	sub eax,1
	je Block266

 Block257:
	jmp Block269

 Block258:
	cmp eax,0x21612A9
	jg Block264

 Block259:
	je Block268

 Block260:
	cmp eax,0x14220DD
	je Block267

 Block261:
	cmp eax,0x1424406
	je Block266

 Block262:
	cmp eax,0x1518A28
	je Block266

 Block263:
	jmp Block269

 Block264:
	cmp eax,0x2179951
	je Block268

 Block265:
	cmp eax,0x55D4E6E
	jne Block269

 Block266:
	mov dword ptr [ebp+0x50],1

 Block267:
	mov dword ptr [ebp+0x54],0xA9DDFE
	jmp Block269

 Block268:
	mov dword ptr [ebp+0x54],0xFFA0A0

 Block269:
	cmp dword ptr [ebp+0x24],0
	jne Block5

 Block270:
	mov ebx,dword ptr [ebp+0x54]
	mov edi,dword ptr [ebp+0x34]

 Block271:
	cmp edi,ebx
	je Block290

 Block272:
	mov edx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [edx+0x4E8]
	test ecx,ecx
	jne Block276

 Block273:
	push 0x80004003
	call _com_issue_error

 Block274:
	push eax
	call _com_issue_error

 Block275:
	push esi
	call _com_issue_error

 Block276:
	lea eax,[ebp+0x34]
	push eax
	call IWzGr2DLayer::GetredTone
	mov esi,dword ptr [eax]
	mov dword ptr [ebp-4],0x1C
	test esi,esi
	jne Block278

 Block277:
	push 0x80004003
	call _com_issue_error

 Block278:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x44]
	mov edx,ebx
	mov eax,edi
	shr edx,0x10
	shr eax,0x10
	push 0
	sub edx,eax
	push edx
	push esi
	call ecx
	test eax,eax
	jge Block280

 Block279:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block280:
	mov eax,dword ptr [ebp+0x34]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block282

 Block281:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block282:
	mov ecx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ecx+0x4E8]
	test ecx,ecx
	jne Block284

 Block283:
	push 0x80004003
	call _com_issue_error

 Block284:
	lea edx,[ebp+0x2C]
	push edx
	call IWzGr2DLayer::GetgreenBlueTone
	mov esi,dword ptr [eax]
	mov dword ptr [ebp-4],0x1D
	test esi,esi
	jne Block286

 Block285:
	push 0x80004003
	call _com_issue_error

 Block286:
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0x44]
	mov ecx,ebx
	mov edx,edi
	and ecx,0xFF
	and edx,0xFF
	shr ebx,8
	shr edi,8
	sub ecx,edx
	push ecx
	and ebx,0xFF
	and edi,0xFF
	sub ebx,edi
	push ebx
	push esi
	call eax
	test eax,eax
	jge Block288

 Block287:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block288:
	mov eax,dword ptr [ebp+0x2C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block290

 Block289:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block290:
	cmp dword ptr [ebp+0x28],0
	je Block292

 Block291:
	mov ecx,dword ptr [ebp+0x5C]
	call CMob::SetAffectedLayerPos

 Block292:
	mov eax,dword ptr [ebp+0x50]
	lea esp,[ebp-0xF4]
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
// CMob::CreateHPIndicator
_SUB_EXCEPTION_HANDLER(243160)
__SUB_CLASS_THIS(00243160, __thiscall, 47533,  CMob, void, long, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_243160
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	cmp dword ptr [edi+0x4F0],0
	sete al
	test al,al
	je Block46

 Block1:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	mov edx,3
	mov dword ptr [esp+0x5C],0
	mov word ptr [esp+0x14],dx
	mov dword ptr [esp+0x1C],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x5C],1
	test ecx,ecx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea eax,[esp+0x24]
	push eax
	lea edx,[esp+0x18]
	push edx
	push 0
	push 0xA
	push 0x34
	push 0
	push 0
	lea eax,[esp+0x2C]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x4F0]
	cmp esi,eax
	je Block10

 Block6:
	mov dword ptr [edi+0x4F0],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	test esi,esi
	je Block10

 Block9:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block10:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block12:
	mov esi,8
	mov byte ptr [esp+0x5C],0
	cmp word ptr [esp+0x14],si
	jne Block19

 Block13:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block15:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block16:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
	jne Block20

 Block17:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block21

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block19:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x14]
	push edx
	call ebp
	jmp Block16

 Block20:
	lea ecx,[esp+0x24]
	push ecx
	call ebp

 Block21:
	mov eax,dword ptr [edi+0x4E8]
	mov edx,0xD
	mov word ptr [esp+0x14],dx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block23:
	mov esi,dword ptr [edi+0x4F0]
	mov dword ptr [esp+0x5C],2
	test esi,esi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	cmp word ptr [esp+0x14],8
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x14]
	push edx
	call ebp

 Block31:
	mov eax,dword ptr [edi+0x104]
	mov ecx,0xD
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block33:
	mov esi,dword ptr [edi+0x4F0]
	mov dword ptr [esp+0x5C],3
	test esi,esi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block37

 Block36:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block37:
	cmp word ptr [esp+0x14],8
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x14]
	push edx
	call ebp

 Block41:
	mov esi,dword ptr [edi+0x4F0]
	test esi,esi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block45

 Block44:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block45:
	mov ecx,edi
	call CMob::AdjustHPIndicatorPosition

 Block46:
	cmp dword ptr [edi+0x4F0],0
	sete al
	test al,al
	jne Block81

 Block47:
	mov ecx,dword ptr [esp+0x64]
	imul ecx,0x2E
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ebp,edx
	shr ebp,0x1F
	add ebp,edx
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
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
	lea ecx,[esp+0x34]
	push ecx
	mov dword ptr [esp+0x60],4
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
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
	mov ecx,dword ptr [edi+0x508]
	mov byte ptr [esp+0x5C],5
	test ecx,ecx
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea eax,[esp+0x44]
	push eax
	lea edx,[esp+0x38]
	push edx
	push 0xA
	push 0x34
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x5C],4
	cmp word ptr [esp+0x34],si
	jne Block56

 Block54:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x44],si
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov esi,dword ptr [edi+0x508]
	test esi,esi
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFF000000
	push 0xA
	push 0x34
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block65

 Block64:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block65:
	mov esi,dword ptr [edi+0x508]
	test esi,esi
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x8C]
	push 0xFFFFFFFF
	push 8
	push 0x32
	push 1
	push 1
	push esi
	call ecx
	test eax,eax
	jge Block69

 Block68:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block69:
	mov esi,dword ptr [edi+0x508]
	test esi,esi
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x8C]
	push 0xFF000000
	push 6
	push 0x30
	push 2
	push 2
	push esi
	call eax
	test eax,eax
	jge Block73

 Block72:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block73:
	mov esi,dword ptr [edi+0x508]
	test esi,esi
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	mov edx,dword ptr [esp+0x68]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x8C]
	push edx
	push 4
	push ebp
	push 3
	push 3
	push esi
	call eax
	test eax,eax
	jge Block77

 Block76:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block77:
	mov esi,dword ptr [edi+0x508]
	test esi,esi
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFA00300
	push 1
	push ebp
	push 6
	push 3
	push esi
	call edx
	test eax,eax
	jge Block81

 Block80:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block81:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x50
	ret 8
}
}
// CMob::GetFineAction
__SUB_CLASS_THIS(00249270, __thiscall, 47554,  CMob, long, long) {
__asm {

 Block0:
	sub esp,8
	test byte ptr [_D__S4__4],1
	push ebx
	push esi
	push edi
	mov esi,ecx
	jne Block2

 Block1:
	or dword ptr [_D__S4__4],1
	push 0x64
	mov ecx,offset _D_SMOBACTIONERRATA
	int 3// TODO: 	mov dword ptr [_D_SMOBACTIONERRATA],offset ZMap<long, ZMap<long, long, long>, long>::`vftable'
	mov dword ptr [_D_SMOBACTIONERRATA+4],0
	mov dword ptr [_D_SMOBACTIONERRATA+8],0x1F
	mov dword ptr [_D_SMOBACTIONERRATA+12],0
	call ZMap<long, ZMap<long, long, long>, long>::_CalcAutoGrow
	push 0xB12A10
	call _atexit
	add esp,4

 Block2:
	cmp dword ptr [esi+0x28C],0
	je Block4

 Block3:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block5

 Block4:
	mov eax,dword ptr [esi+0x174]

 Block5:
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov edi,dword ptr [esp+0x20]
	add esp,8
	push edi
	mov ecx,esi
	mov ebx,eax
	mov dword ptr [esp+0x10],edi
	call CMob::LoadMobAction
	test eax,eax
	jne Block8

 Block6:
	push eax
	lea edx,[esp+0x14]
	push edx
	mov ecx,offset _D_SMOBACTIONERRATA
	mov dword ptr [esp+0x18],ebx
	call ZMap<long, ZMap<long, long, long>, long>::Insert
	lea ecx,[esp+0xC]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[eax+0xC]
	call ZMap<long, long, long>::GetAt
	mov ecx,esi
	test eax,eax
	je Block9

 Block7:
	mov edi,dword ptr [esp+0xC]
	push edi
	call CMob::LoadMobAction

 Block8:
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	add esp,8
	ret 4

 Block9:
	push 1
	call CMob::LoadMobAction
	test eax,eax
	je Block11

 Block10:
	mov edi,1
	jmp Block13

 Block11:
	push 3
	mov ecx,esi
	call CMob::LoadMobAction
	test eax,eax
	je Block14

 Block12:
	mov edi,3

 Block13:
	push 0
	lea eax,[esp+0x14]
	push eax
	mov ecx,offset _D_SMOBACTIONERRATA
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x18],ebx
	call ZMap<long, ZMap<long, long, long>, long>::Insert
	lea ecx,[esp+0xC]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[eax+0xC]
	call ZMap<long, long, long>::Insert
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	add esp,8
	ret 4

 Block14:
	push 0x22000006
	lea ecx,[esp+0x1C]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x18]
	push offset CTerminateException::THROW_INFO
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esp+0x18],eax
	call _CxxThrowException
	int 3
}
}
// CMob::GetRTTI
__SUB_CLASS_THIS0(0024CF80, __thiscall, 47578,  CMob, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CMob::ms_RTTI_CMob
	ret
}
}
// CMob::OnBomb
_SUB_EXCEPTION_HANDLER(250EC0)
__SUB_CLASS_THIS0(00250EC0, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_250EC0
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
	mov esi,ecx
	cmp dword ptr [esi+0x28C],0
	je Block2

 Block1:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block3

 Block2:
	mov eax,dword ptr [esi+0x174]

 Block3:
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[esi+4]
	mov ebx,eax
	add esp,8
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call edx
	mov ebp,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [ebp]
	push eax
	push ecx
	call get_sound_volume_by_pos
	push eax
	push 1
	push ebx
	call play_mob_sound
	add esp,0x14
	lea edx,[esi+0x3DC]
	mov ecx,0xD
	call _ZtlSecureTearHelper<long>::call
	mov ecx,esi
	mov dword ptr [esi+0x3E4],eax
	call CMob::PrepareActionLayer
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov edi,dword ptr [esi+0x104]
	mov dword ptr [esp+0x44],0
	test edi,edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	push 0
	push 0
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	push 0
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x54]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	push 0
	lea eax,[esp+0x40]
	push eax
	mov eax,dword ptr [ecx+0x8C]
	lea edx,[esp+0x40]
	push edx
	push edi
	call eax
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block9:
	cmp word ptr [esp+0x2C],8
	mov dword ptr [esp+0x44],0xFFFFFFFF
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov eax,dword ptr [esp+0x14]
	lea edi,[esi+0x538]
	push eax
	lea ecx,[edi+0xC]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esp+0x18]
	push ecx
	mov ecx,edi
	call TSecType<long>::SetData
	mov ecx,edi
	call TSecType<long>::GetData
	lea ecx,[esi+0x544]
	mov ebx,eax
	call TSecType<long>::GetData
	mov edi,dword ptr [esi+0x104]
	test edi,edi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov edx,dword ptr [edi]
	push ebx
	push eax
	mov eax,dword ptr [edx+0x40]
	push edi
	call eax
	test eax,eax
	jge Block17

 Block16:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block17:
	lea edx,[esi+0x474]
	mov ecx,3
	call _ZtlSecureTearHelper<int>::call
	mov ecx,dword ptr [esi+0x174]
	xor edi,edi
	mov dword ptr [esi+0x47C],eax
	cmp dword ptr [ecx+0x1A0],edi
	je Block19

 Block18:
	lea eax,[edi+1]
	jmp Block20

 Block19:
	mov edx,dword ptr [esi+0x3D8]
	push edx
	lea eax,[esi+0x3D0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	and eax,1

 Block20:
	push edi
	push eax
	push 0xD
	mov ecx,esi
	call CMob::DoAttack
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
// CMob::OnMobAttackedByMob
_SUB_EXCEPTION_HANDLER(2436A0)
__SUB_CLASS_THIS(002436A0, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2436A0
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
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	mov esi,dword ptr [esp+0x48]
	mov ecx,esi
	call CInPacket::Decode1
	movsx ebp,al
	mov ecx,esi
	mov dword ptr [esp+0x48],ebp
	call CInPacket::Decode4
	cmp ebp,0xFFFFFFFE
	mov dword ptr [esp+0x20],eax
	jle Block17

 Block1:
	mov ecx,esi
	call CInPacket::Decode4
	mov edi,eax
	mov ecx,esi
	mov dword ptr [esp+0x1C],edi
	call CInPacket::Decode1
	movzx eax,al
	push edi
	mov dword ptr [esp+0x1C],eax
	call CMobTemplate::GetMobTemplate
	add esp,4
	test eax,eax
	je Block17

 Block2:
	test ebp,ebp
	jl Block17

 Block3:
	push ebp
	mov ecx,eax
	call CMobTemplate::GetAttackInfo
	mov esi,eax
	test esi,esi
	je Block17

 Block4:
	mov eax,dword ptr [esi+0x7C]
	test eax,eax
	je Block17

 Block5:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block17

 Block6:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block17

 Block7:
	push 1
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebx
	call CMob::GetBodyRect
	mov eax,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x30]
	push eax
	sub edx,eax
	push edx
	call get_rand_0
	mov ecx,dword ptr [esp+0x3C]
	mov edi,eax
	mov eax,dword ptr [esp+0x34]
	push eax
	sub ecx,eax
	push ecx
	call get_rand_0
	add esp,0x10
	cmp dword ptr [esi+0x88],0
	push 0xC00614A4
	push ecx
	mov ebx,eax
	mov eax,esp
	mov dword ptr [eax],0
	je Block12

 Block8:
	mov dword ptr [esp+0x20],esp
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x28]
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push edx
	mov dword ptr [esp+0x58],0
	call CMob::GetVecCtrl
	mov esi,dword ptr [esi+0x7C]
	mov byte ptr [esp+0x54],1
	test esi,esi
	je Block10

 Block9:
	mov esi,dword ptr [esi]
	jmp Block11

 Block10:
	xor esi,esi

 Block11:
	mov ecx,dword ptr [esp+0x28]
	mov ebp,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CMob::IsLeft
	neg eax
	sbb eax,eax
	inc eax
	push eax
	push esi
	mov ecx,ebp
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call CAnimationDisplayer::Effect_General
	mov ebp,dword ptr [esp+0x48]
	jmp Block16

 Block12:
	mov dword ptr [esp+0x50],esp
	push ebx
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [eax],0
	mov esi,dword ptr [esi+0x7C]
	mov dword ptr [esp+0x54],2
	mov dword ptr [esp+0x5C],esp
	test esi,esi
	je Block14

 Block13:
	mov esi,dword ptr [esi]
	jmp Block15

 Block14:
	xor esi,esi

 Block15:
	xor eax,eax
	cmp dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x54],0xFFFFFFFF
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	sete al
	push eax
	push esi
	call CAnimationDisplayer::Effect_General

 Block16:
	push ebx
	push edi
	call get_sound_volume_by_pos
	mov ecx,dword ptr [esp+0x24]
	push eax
	add ebp,0xB
	push ebp
	push ecx
	call play_mob_sound
	mov ebx,dword ptr [esp+0x28]
	add esp,0x14

 Block17:
	mov edx,dword ptr [esp+0x20]
	push 0
	push 0
	push 0
	push 0
	push 0
	push edx
	mov ecx,ebx
	call CMob::ShowDamage
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
// CMob::InitAngerGaugeData
_SUB_EXCEPTION_HANDLER(248B00)
__SUB_CLASS_THIS0(00248B00, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_248B00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x40],edi
	xor ebx,ebx
	mov dword ptr [ebp+0x5C],ebx
	lea eax,[ebp+0x6C]
	push 0x3CE
	push eax
	mov dword ptr [ebp-4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,eax
	mov eax,dword ptr [edi+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	mov byte ptr [ebp-4],1
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov ecx,dword ptr [esi]
	add esp,8
	cmp ecx,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [ecx]
	jmp Block3

 Block2:
	xor ecx,ecx

 Block3:
	push eax
	push ecx
	lea edx,[ebp+0x5C]
	push edx
	call ZXString16::Format
	mov ecx,dword ptr [ebp+0x6C]
	add esp,0xC
	mov byte ptr [ebp-4],0
	cmp ecx,ebx
	je Block5

 Block4:
	call _xbstr_t::Data_t::Release

 Block5:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x30]
	push eax
	call esi
	lea ecx,[ebp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
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
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov eax,dword ptr [ebp+0x5C]
	push 0
	push 0
	lea ecx,[ebp+0x30]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	mov bl,3
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],4
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov esi,8
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x1C],si
	jne Block21

 Block15:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block17:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x20],si
	jne Block22

 Block19:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	test eax,eax
	je Block23

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block21:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x1C]
	push eax
	call ebx
	jmp Block18

 Block22:
	lea edx,[ebp+0x20]
	push edx
	call ebx

 Block23:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x30],si
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[ebp+0x30]
	push ecx
	call ebx

 Block27:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0xC2E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xA
	test esi,esi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea eax,[ebp+0x10]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x6C]
	mov dword ptr [ebp+0x6C],0
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
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0xD
	jne Block35

 Block33:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[ebp+0x10]
	push edx
	call ebx

 Block36:
	mov eax,dword ptr [edi+0x174]
	mov ecx,dword ptr [eax+0x1DC]
	push ecx
	add eax,0x1D4
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [edi+0x52C],eax
	mov dword ptr [ebp+0x54],0
	test eax,eax
	jg Block46

 Block37:
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,dword ptr [ebp+0x5C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
	lea esp,[ebp-0x3C]
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
	ret

 Block45:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block46:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x54]
	mov eax,esp
	xor edi,edi
	push edi
	push edi
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0xE
	cmp ecx,edi
	je Block10

 Block47:
	lea eax,[ebp]
	push eax
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x68],esi
	cmp eax,edi
	je Block51

 Block48:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x44]
	cmp eax,edi
	mov dword ptr [ebp+0x68],ecx
	jge Block50

 Block49:
	cmp eax,0x80004002
	jne Block6

 Block50:
	mov esi,dword ptr [ebp+0x68]

 Block51:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x11
	jne Block54

 Block52:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,edi
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[ebp]
	push eax
	call ebx

 Block55:
	mov dword ptr [ebp+0x50],edi
	mov byte ptr [ebp-4],0x12
	mov dword ptr [ebp+0x64],edi

 Block56:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp+0x64]
	mov eax,esp
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x13
	test esi,esi
	je Block10

 Block57:
	lea edx,[ebp-0x2C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp+0x58]
	push eax
	mov byte ptr [ebp-4],0x14
	call get_unknown
	add esp,8
	mov esi,dword ptr [eax]
	xor edi,edi
	mov byte ptr [ebp-4],0x15
	mov dword ptr [ebp+0x4C],edi
	test esi,esi
	je Block59

 Block58:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx
	test esi,esi

 Block59:
	sete al
	test al,al
	sete al
	test al,al
	je Block62

 Block60:
	test esi,esi
	je Block10

 Block61:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	lea ecx,[ebp+0x48]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	call edx
	mov ebx,eax
	xor eax,eax
	test ebx,ebx
	setl al
	dec eax
	and eax,dword ptr [ebp+0x48]
	mov edi,eax
	mov dword ptr [ebp+0x4C],edi
	jmp Block63

 Block62:
	mov ebx,0x80004002

 Block63:
	test esi,esi
	je Block65

 Block64:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block65:
	test ebx,ebx
	jge Block67

 Block66:
	cmp ebx,0x80004002
	jne Block86

 Block67:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x17
	test eax,eax
	je Block69

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block69:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x18
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	test edi,edi
	sete al
	test al,al
	jne Block82

 Block74:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x50]
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov esi,dword ptr [eax]
	cmp esi,edi
	je Block79

 Block75:
	mov dword ptr [eax],edi
	test edi,edi
	je Block77

 Block76:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block77:
	test esi,esi
	je Block79

 Block78:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block79:
	mov byte ptr [ebp-4],0x12
	test edi,edi
	je Block81

 Block80:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block81:
	inc dword ptr [ebp+0x64]
	mov esi,dword ptr [ebp+0x68]
	jmp Block56

 Block82:
	mov byte ptr [ebp-4],0x12
	test edi,edi
	je Block84

 Block83:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block84:
	mov esi,dword ptr [ebp+0x40]
	lea ecx,[ebp+0x50]
	push ecx
	push 0xFFFFFFFF
	lea ecx,[esi+0x528]
	call ZArray<ZArray<_x_com_ptr<IWzCanvas>>>::InsertBefore
	mov ecx,eax
	call ZArray<_x_com_ptr<IWzCanvas>>::operator=
	push 0xFFFFFFFF
	lea ecx,[esi+0x524]
	call ZArray<long>::InsertBefore
	mov edx,dword ptr [ebp+0x64]
	lea ecx,[ebp+0x50]
	mov dword ptr [eax],edx
	mov byte ptr [ebp-4],0x11
	call ZArray<_x_com_ptr<IWzCanvas>>::RemoveAll
	mov eax,dword ptr [ebp+0x68]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xD
	call edx
	mov eax,dword ptr [ebp+0x54]
	inc eax
	cmp eax,dword ptr [esi+0x52C]
	mov dword ptr [ebp+0x54],eax
	jl Block45

 Block85:
	mov esi,dword ptr [ebp+0x60]
	jmp Block37

 Block86:
	push ebx
	call _com_issue_error
}
}
// CMob::OnMobSpeaking
__SUB_CLASS_THIS(00250000, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov ebx,eax
	call CInPacket::Decode4
	push eax
	push ebx
	mov ecx,esi
	call CMob::TrySpeaking
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CMob::GetTemplate
__SUB_CLASS_THIS0(00239F30, __thiscall, 47478,  CMob, CMobTemplate*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x174]
	ret
}
}
// CMob::OnIncMobChargeCount
__SUB_CLASS_THIS(0023D500, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x88],eax
	call CInPacket::Decode4
	pop edi
	mov dword ptr [esi+0x8C],eax
	pop esi
	ret 4
}
}
// CMob::SetDamagedByMob
_SUB_EXCEPTION_HANDLER(24B260)
__SUB_CLASS_THIS(0024B260, __thiscall, 47564,  CMob, void, long, long, long, CMob*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24B260
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
	mov esi,ecx
	mov ebx,dword ptr [esp+0x74]
	test ebx,ebx
	je Block54

 Block1:
	mov ecx,dword ptr [ebx+0x310]
	mov eax,dword ptr [esi+0x310]
	xor eax,ecx
	jne Block3

 Block2:
	mov eax,dword ptr [ebx+0x174]
	mov edx,dword ptr [esi+0x174]
	xor ecx,ecx
	mov edi,1
	cmp dword ptr [eax+0x234],edi
	sete cl
	xor eax,eax
	cmp dword ptr [edx+0x234],edi
	sete al
	xor ecx,eax
	je Block54

 Block3:
	cmp ebx,esi
	je Block54

 Block4:
	mov edx,dword ptr [esi+0x104]
	test edx,edx
	je Block6

 Block5:
	lea eax,[edx-0xC]
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	cmp dword ptr [eax+0x1A0],0
	je Block54

 Block8:
	mov ecx,esi
	call CMob::IsActive
	test eax,eax
	je Block13

 Block9:
	mov eax,dword ptr [esi+0x108]
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	cmp dword ptr [eax+0x1A0],0
	je Block54

 Block13:
	test edx,edx
	je Block15

 Block14:
	lea eax,[edx-0xC]
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	cmp dword ptr [eax+0x74C],0
	jne Block54

 Block17:
	test edx,edx
	je Block19

 Block18:
	lea ecx,[edx-0xC]
	jmp Block20

 Block19:
	xor ecx,ecx

 Block20:
	call CVecCtrl::GetLadderOrRope
	test eax,eax
	jne Block54

 Block21:
	mov ecx,esi
	call CMob::IsActive
	test eax,eax
	je Block30

 Block22:
	mov eax,dword ptr [esi+0x108]
	test eax,eax
	je Block24

 Block23:
	lea ecx,[eax-0xC]
	jmp Block25

 Block24:
	xor ecx,ecx

 Block25:
	cmp dword ptr [ecx+0x74C],0
	jne Block54

 Block26:
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	jmp Block29

 Block28:
	xor eax,eax

 Block29:
	mov ecx,eax
	call CVecCtrl::GetLadderOrRope
	test eax,eax
	jne Block54

 Block30:
	call get_update_time
	mov ecx,dword ptr [esi+0x174]
	mov ecx,dword ptr [ecx+0x234]
	dec ecx
	neg ecx
	sbb ecx,ecx
	and ecx,0x1F4
	mov edx,eax
	sub edx,dword ptr [esi+0x490]
	add ecx,0x5DC
	cmp edx,ecx
	jl Block54

 Block31:
	mov dword ptr [esi+0x490],eax
	mov eax,dword ptr [esp+0x78]
	mov ecx,dword ptr [ebx+0x174]
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	mov dword ptr [esp+0x20],ecx
	call CMobTemplate::GetAttackInfo
	mov edi,eax
	test edi,edi
	je Block34

 Block32:
	cmp dword ptr [edi+0x1C],0
	je Block34

 Block33:
	lea ecx,[esi+0x188]
	push ecx
	add ebx,0x188
	push ebx
	lea ecx,[ebp+0x3C78]
	call CalcDamage::MDamage_0
	jmp Block35

 Block34:
	lea edx,[esi+0x188]
	push edx
	add ebx,0x188
	push ebx
	lea ecx,[ebp+0x3C78]
	call CalcDamage::PDamage_0

 Block35:
	mov ebx,eax
	test edi,edi
	je Block53

 Block36:
	push 1
	lea eax,[esp+0x3C]
	push eax
	mov ecx,esi
	call CMob::GetBodyRect
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x40]
	push eax
	sub ecx,eax
	push ecx
	call get_rand_0
	mov edx,dword ptr [esp+0x4C]
	mov ebp,eax
	mov eax,dword ptr [esp+0x44]
	push eax
	sub edx,eax
	push edx
	mov dword ptr [esp+0x24],ebp
	call get_rand_0
	add esp,0x10
	cmp dword ptr [edi+0x88],0
	mov ecx,eax
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [eax],0
	je Block41

 Block37:
	mov dword ptr [esp+0x28],esp
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x78],0
	call CMob::GetVecCtrl
	mov edi,dword ptr [edi+0x7C]
	mov byte ptr [esp+0x74],1
	test edi,edi
	je Block39

 Block38:
	mov ebp,dword ptr [edi]
	jmp Block40

 Block39:
	xor ebp,ebp

 Block40:
	mov edi,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	mov ecx,esi
	call CMob::IsLeft
	neg eax
	sbb eax,eax
	inc eax
	push eax
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	call CAnimationDisplayer::Effect_General
	mov ebp,dword ptr [esp+0x14]
	jmp Block45

 Block41:
	mov dword ptr [esp+0x2C],esp
	push ecx
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [eax],0
	mov edi,dword ptr [edi+0x7C]
	mov dword ptr [esp+0x74],2
	mov dword ptr [esp+0x38],esp
	test edi,edi
	je Block43

 Block42:
	mov edi,dword ptr [edi]
	jmp Block44

 Block43:
	xor edi,edi

 Block44:
	xor ecx,ecx
	cmp dword ptr [esp+0x90],ecx
	mov dword ptr [esp+0x74],0xFFFFFFFF
	setg cl
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edi
	call CAnimationDisplayer::Effect_General

 Block45:
	mov edx,dword ptr [esi+0x174]
	cmp dword ptr [edx+0x234],1
	jne Block52

 Block46:
	mov ecx,esi
	call CMob::GetCurTemplate
	mov edi,dword ptr [eax+0x220]
	test edi,edi
	jle Block52

 Block47:
	mov eax,dword ptr [esi+0x108]
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	jmp Block50

 Block49:
	xor eax,eax

 Block50:
	cmp dword ptr [eax+0x760],0
	jne Block52

 Block51:
	call _rand
	cdq
	idiv edi
	mov ecx,esi
	add edx,7
	call CMob::_ZtlSecurePut_m_nOneTimeAction
	mov ecx,esi
	call CMob::PrepareActionLayer

 Block52:
	mov eax,dword ptr [esp+0x18]
	push eax
	push ebp
	call get_sound_volume_by_pos
	mov ecx,dword ptr [esp+0x80]
	add esp,8
	add ecx,0xB
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x24]
	call CMobTemplate::_ZtlSecureGet_dwTemplateID
	push eax
	call play_mob_sound
	add esp,0xC

 Block53:
	push 0
	push 0
	push 0
	push 0
	push 0
	push ebx
	mov ecx,esi
	call CMob::ShowDamage
	push 0
	lea edx,[esp+0x4C]
	push edx
	mov ecx,esi
	call CMob::GetBodyRect
	mov ecx,dword ptr [esp+0x50]
	mov eax,dword ptr [esp+0x48]
	add eax,ecx
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x4C]
	mov edi,eax
	mov eax,dword ptr [esp+0x54]
	add eax,edx
	cdq
	sub eax,edx
	mov ebp,eax
	mov eax,dword ptr [esp+0x74]
	push 0
	add eax,4
	push eax
	push 1
	mov ecx,esi
	sar edi,1
	sar ebp,1
	call CMob::ChaseTarget
	push 0xE9
	lea ecx,[esp+0x2C]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [esp+0x74]
	mov dword ptr [esp+0x60],3
	call CMob::GetMobID
	push eax
	lea ecx,[esp+0x2C]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x20B4]
	push eax
	lea ecx,[esp+0x2C]
	call COutPacket::Encode4
	mov ecx,esi
	call CMob::GetMobID
	push eax
	lea ecx,[esp+0x2C]
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0x78]
	push edx
	lea ecx,[esp+0x2C]
	call COutPacket::Encode1
	push ebx
	lea ecx,[esp+0x2C]
	call COutPacket::Encode4
	cmp dword ptr [esp+0x7C],0
	setl al
	movzx ecx,al
	push ecx
	lea ecx,[esp+0x2C]
	call COutPacket::Encode1
	push edi
	lea ecx,[esp+0x2C]
	call COutPacket::Encode2
	push ebp
	lea ecx,[esp+0x2C]
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x28]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block54:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 0x18
}
}
// CMob::ProcessStatSet
_SUB_EXCEPTION_HANDLER(24BDD0)
__SUB_CLASS_THIS(0024BDD0, __thiscall, 47571,  CMob, void, NakedParam<MY_UINT128>, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24BDD0
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
	call get_update_time
	mov ebx,dword ptr [esp+0x70]
	mov esi,eax
	push esi
	push ebx
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x80
	lea eax,[esp+0x7C]
	push eax
	lea edi,[ebp+0x188]
	call MY_UINT128::_ctor_2
	mov ecx,edi
	call MobStat::DecodeTemporary
	push offset MobStat::MS_Poison
	lea ecx,[esp+0x34]
	push ecx
	lea ecx,[esp+0x68]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block2

 Block1:
	mov dword ptr [ebp+0x480],esi

 Block2:
	push offset MobStat::MS_Venom
	lea edx,[esp+0x34]
	push edx
	lea ecx,[esp+0x68]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block4

 Block3:
	mov dword ptr [ebp+0x484],esi

 Block4:
	push offset MobStat::MS_Ambush
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x68]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block6

 Block5:
	mov dword ptr [ebp+0x488],esi

 Block6:
	push offset MobStat::MS_Dazzle
	lea ecx,[esp+0x34]
	push ecx
	lea ecx,[esp+0x68]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block8

 Block7:
	push 0
	push 0
	push 0
	mov ecx,ebp
	call CMob::ChaseTarget

 Block8:
	push offset MobStat::MS_DamagedElemAttr
	lea edx,[esp+0x34]
	push edx
	lea ecx,[esp+0x68]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block13

 Block9:
	cmp dword ptr [ebp+0x28C],0
	je Block11

 Block10:
	mov eax,dword ptr [ebp+0x178]
	test eax,eax
	jne Block12

 Block11:
	mov eax,dword ptr [ebp+0x174]

 Block12:
	add eax,0x118
	push eax
	mov eax,dword ptr [ebp+0x384]
	push eax
	mov ecx,edi
	call MobStat::AdjustDamagedElemAttr

 Block13:
	mov ecx,ebx
	call CInPacket::Decode2
	mov ecx,ebx
	movzx esi,ax
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [ebp+0x4EC],ecx
	push esi
	mov ecx,ebp
	call CMob::UpdateAffectedSkillList
	push offset MobStat::MS_Speed
	lea edx,[esp+0x34]
	push edx
	lea ecx,[esp+0x68]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block15

 Block14:
	mov ecx,ebp
	call CMob::SetShoeAttr

 Block15:
	push offset MobStat::MS_Disable
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x68]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block80

 Block16:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
	push ecx
	call esi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea eax,[esp+0x30]
	push eax
	mov dword ptr [esp+0x5C],0
	call esi
	lea ecx,[esp+0x30]
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
	mov ecx,dword ptr [ebp+0x4E8]
	mov byte ptr [esp+0x58],1
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x58],2
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [ebp+0x3A4]
	neg eax
	sbb eax,eax
	lea edx,[esp+0x34]
	push edx
	and eax,0xFFFFFF01
	push 0
	add eax,0xFF
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x58],1
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x58],0
	cmp word ptr [esp+0x30],bx
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
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp word ptr [esp+0x20],bx
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[esp+0x20]
	push eax
	call edi

 Block34:
	mov eax,dword ptr [ebp+0xF8]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block55

 Block35:
	mov ebx,3
	mov edi,edi

 Block36:
	lea ecx,[esp+0x14]
	push ecx
	call ZList<_x_com_ptr<IWzGr2DLayer>>::GetNext
	mov edi,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x1C],edi
	test edi,edi
	je Block38

 Block37:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block38:
	lea ecx,[esp+0x30]
	push ecx
	mov dword ptr [esp+0x5C],ebx
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block17

 Block39:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x5C],4
	call esi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block17

 Block40:
	mov byte ptr [esp+0x58],5
	test edi,edi
	je Block21

 Block41:
	lea edx,[esp+0x18]
	push edx
	mov ecx,edi
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x58],6
	test esi,esi
	je Block21

 Block42:
	mov eax,dword ptr [ebp+0x3A4]
	mov ebx,dword ptr [esp+0x30]
	mov edx,dword ptr [esi]
	neg eax
	sbb eax,eax
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebx
	mov ebx,dword ptr [esp+0x44]
	mov dword ptr [ecx+4],ebx
	mov ebx,dword ptr [esp+0x48]
	mov dword ptr [ecx+8],ebx
	mov ebx,dword ptr [esp+0x4C]
	mov dword ptr [ecx+0xC],ebx
	mov ebx,dword ptr [esp+0x30]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebx
	mov ebx,dword ptr [esp+0x44]
	mov dword ptr [ecx+4],ebx
	mov ebx,dword ptr [esp+0x48]
	and eax,0xFFFFFF01
	add eax,0xFF
	push 0
	mov dword ptr [ecx+8],ebx
	mov ebx,dword ptr [esp+0x50]
	push eax
	mov eax,dword ptr [edx+0x90]
	push esi
	mov dword ptr [ecx+0xC],ebx
	call eax
	test eax,eax
	jge Block44

 Block43:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block44:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x58],5
	test eax,eax
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	mov esi,8
	mov byte ptr [esp+0x58],4
	cmp word ptr [esp+0x20],si
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov ebx,3
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x30],si
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call edx
	cmp dword ptr [esp+0x14],0
	mov esi,dword ptr [ZImports::_VariantInit]
	jne Block36

 Block55:
	mov eax,dword ptr [ebp+0xE4]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block77

 Block56:
	mov ebx,7
	jmp Block58

 Block57:
	mov esi,dword ptr [ZImports::_VariantInit]

 Block58:
	lea eax,[esp+0x14]
	push eax
	call ZList<_x_com_ptr<IWzGr2DLayer>>::GetNext
	mov edi,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x1C],edi
	test edi,edi
	je Block60

 Block59:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block60:
	lea eax,[esp+0x20]
	push eax
	mov dword ptr [esp+0x5C],ebx
	call esi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block17

 Block61:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x5C],8
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block17

 Block62:
	mov byte ptr [esp+0x58],9
	test edi,edi
	je Block21

 Block63:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x58],0xA
	test esi,esi
	je Block21

 Block64:
	mov eax,dword ptr [ebp+0x3A4]
	mov ebx,dword ptr [esp+0x20]
	mov edx,dword ptr [esi]
	neg eax
	sbb eax,eax
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebx
	mov ebx,dword ptr [esp+0x34]
	mov dword ptr [ecx+4],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [ecx+8],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [ecx+0xC],ebx
	mov ebx,dword ptr [esp+0x40]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebx
	mov ebx,dword ptr [esp+0x54]
	mov dword ptr [ecx+4],ebx
	mov ebx,dword ptr [esp+0x58]
	and eax,0xFFFFFF01
	add eax,0xFF
	push 0
	mov dword ptr [ecx+8],ebx
	mov ebx,dword ptr [esp+0x60]
	push eax
	mov eax,dword ptr [edx+0x90]
	push esi
	mov dword ptr [ecx+0xC],ebx
	call eax
	test eax,eax
	jge Block66

 Block65:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block66:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x58],9
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x58],8
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	cmp word ptr [esp+0x20],8
	mov ebx,7
	mov byte ptr [esp+0x58],bl
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call edx
	cmp dword ptr [esp+0x14],0
	jne Block57

 Block77:
	cmp dword ptr [ebp+0x3A4],0
	jne Block80

 Block78:
	cmp dword ptr [ebp+0x3A0],0
	jne Block80

 Block79:
	lea edx,[ebp+0x3DC]
	mov ecx,0x25
	call _ZtlSecureTearHelper<long>::call
	mov ecx,ebp
	mov dword ptr [ebp+0x3E4],eax
	call CMob::PrepareActionLayer

 Block80:
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x80
	lea eax,[esp+0x74]
	push eax
	call MY_UINT128::_ctor_2
	call MobStat::IsMovementAffectingStat
	add esp,0x10
	test eax,eax
	je Block88

 Block81:
	mov ecx,dword ptr [esp+0x70]
	call CInPacket::Decode1
	push offset MobStat::MS_Doom
	lea ecx,[esp+0x44]
	mov bl,al
	push ecx
	lea ecx,[esp+0x68]
	mov byte ptr [esp+0x78],bl
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block84

 Block82:
	cmp dword ptr [ebp+0x588],0
	jne Block84

 Block83:
	mov dword ptr [ebp+0x588],1
	mov byte ptr [ebp+0x58C],bl
	jmp Block88

 Block84:
	mov eax,dword ptr [ebp+0x108]
	test eax,eax
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	jmp Block87

 Block86:
	xor eax,eax

 Block87:
	mov edx,dword ptr [esp+0x70]
	push edx
	lea ecx,[eax+0x244]
	call CMovePath::SetStatChangedPoint

 Block88:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 0x14
}
}
// CMob::CalcCrc
__SUB_CLASS_THIS0(0023B5A0, __thiscall, 47561,  CMob, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	mov eax,dword ptr [eax+0x6C]
	mov ecx,dword ptr [ecx+0x174]
	push eax
	call CMobTemplate::CalcCrc
	ret
}
}
// CMob::OnDestructByMiss
_SUB_EXCEPTION_HANDLER(24EA30)
__SUB_CLASS_THIS0(0024EA30, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24EA30
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
	mov esi,ecx
	cmp dword ptr [esi+0x28C],0
	je Block2

 Block1:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block3

 Block2:
	mov eax,dword ptr [esi+0x174]

 Block3:
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[esi+4]
	mov ebx,eax
	add esp,8
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call edx
	mov ebp,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [ebp]
	push eax
	push ecx
	call get_sound_volume_by_pos
	push eax
	push 1
	push ebx
	call play_mob_sound
	add esp,0x14
	lea edx,[esi+0x3DC]
	mov ecx,0x28
	call _ZtlSecureTearHelper<long>::call
	mov ecx,esi
	mov dword ptr [esi+0x3E4],eax
	call CMob::PrepareActionLayer
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov edi,dword ptr [esi+0x104]
	mov dword ptr [esp+0x44],0
	test edi,edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	push 0
	push 0
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	push 0
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x54]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	push 0
	lea eax,[esp+0x40]
	push eax
	mov eax,dword ptr [ecx+0x8C]
	lea edx,[esp+0x40]
	push edx
	push edi
	call eax
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block9:
	cmp word ptr [esp+0x2C],8
	mov dword ptr [esp+0x44],0xFFFFFFFF
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov eax,dword ptr [esp+0x14]
	lea edi,[esi+0x538]
	push eax
	lea ecx,[edi+0xC]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esp+0x18]
	push ecx
	mov ecx,edi
	call TSecType<long>::SetData
	mov ecx,edi
	call TSecType<long>::GetData
	lea ecx,[esi+0x544]
	mov ebx,eax
	call TSecType<long>::GetData
	mov edi,dword ptr [esi+0x104]
	test edi,edi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov edx,dword ptr [edi]
	push ebx
	push eax
	mov eax,dword ptr [edx+0x40]
	push edi
	call eax
	test eax,eax
	jge Block17

 Block16:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block17:
	lea edx,[esi+0x474]
	mov ecx,2
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [esi+0x47C],eax
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
// CMob::OnEscortStopEndPermmision
__SUB_CLASS_THIS0(0023B9C0, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	call CMob::IsActive
	test eax,eax
	je Block8

 Block1:
	mov eax,dword ptr [ecx+0x108]
	test eax,eax
	je Block8

 Block2:
	lea edx,[eax-0xC]
	test edx,edx
	je Block8

 Block3:
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov dword ptr [eax+0x75C],0
	mov dword ptr [eax+0x760],0

 Block7:
	ret

 Block8:
	mov eax,dword ptr [ecx+0x108]
	test eax,eax
	je Block7

 Block9:
	add eax,0xFFFFFFF4
	je Block7

 Block10:
	jmp  CMob::ClearEscortInfo
}
}
// CMob::TARGETINFO::TARGETINFO
__SUB_CLASS_THIS0(00239FA0, __thiscall, 49620,  CMob::TARGETINFO, void) {
__asm {

 Block0:
	mov eax,ecx
	mov dword ptr [eax],0
	ret
}
}
// CMob::GetOneTimeAction
__SUB_CLASS_THIS0(0023C5F0, __thiscall, 47482,  CMob, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3E4]
	push eax
	add ecx,0x3DC
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::GetShoeAttr
__SUB_CLASS_THIS0(00240C20, __thiscall, 47513,  CMob, const ZRef<CAttrShoe>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x530]
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
// CMob::GetHitPoint
__SUB_CLASS_THIS(00242260, __thiscall, 47493,  CMob, tagPOINT*, tagPOINT*, NakedParam<tagRECT>) {
__asm {

 Block0:
	sub esp,0x20
	push esi
	mov esi,dword ptr [esp+0x28]
	push 0
	lea eax,[esp+8]
	push eax
	mov dword ptr [esi],0
	mov dword ptr [esi+4],0
	call CMob::GetBodyRect
	test eax,eax
	je Block10

 Block1:
	mov eax,dword ptr [esp+0xC]
	cmp dword ptr [esp+0x2C],eax
	jl Block3

 Block2:
	dec eax
	mov dword ptr [esp+0x2C],eax
	jmp Block5

 Block3:
	mov eax,dword ptr [esp+4]
	cmp dword ptr [esp+0x34],eax
	jg Block5

 Block4:
	inc eax
	mov dword ptr [esp+0x34],eax

 Block5:
	mov eax,dword ptr [esp+0x10]
	cmp dword ptr [esp+0x30],eax
	jl Block7

 Block6:
	dec eax
	mov dword ptr [esp+0x30],eax
	jmp Block9

 Block7:
	mov eax,dword ptr [esp+8]
	cmp dword ptr [esp+0x38],eax
	jg Block9

 Block8:
	inc eax
	mov dword ptr [esp+0x38],eax

 Block9:
	lea ecx,[esp+4]
	push ecx
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IntersectRect
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x1C]
	lea eax,[edx+ecx]
	mov ecx,dword ptr [esp+0x20]
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esi],eax
	mov eax,dword ptr [esp+0x18]
	add eax,ecx
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esi+4],eax

 Block10:
	mov eax,esi
	pop esi
	add esp,0x20
	ret 0x14
}
}
// CMob::GetZMass
__SUB_CLASS_THIS0(0024CFA0, __thiscall, 47510,  CMob, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x100]
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
// CMob::OnCtrlAck
__SUB_CLASS_THIS(00240C50, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	call CMob::IsActive
	test eax,eax
	jne Block2

 Block1:
	push 1
	call CMob::SetActive

 Block2:
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x14]
	mov ecx,esi
	call CInPacket::Decode2
	mov ecx,esi
	movzx ebp,ax
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,esi
	mov dword ptr [esp+0x14],eax
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[edi+0x17C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,esi
	mov dword ptr [edi+0x184],eax
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebx,al
	call CInPacket::Decode1
	cmp dword ptr [edi+0x130],0
	movzx eax,al
	je Block4

 Block3:
	test ebx,ebx
	je Block5

 Block4:
	mov dword ptr [edi+0x130],ebx
	mov dword ptr [edi+0x134],eax

 Block5:
	mov ecx,dword ptr [edi+0x12C]
	push ecx
	lea edx,[edi+0x128]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	movsx ecx,bp
	cwde
	sub ecx,eax
	pop esi
	pop ebp
	pop ebx
	jns Block7

 Block6:
	mov ecx,2
	jmp Block8

 Block7:
	xor ecx,ecx
	cmp dword ptr [esp+8],ecx
	setne cl
	add ecx,3

 Block8:
	lea edx,[edi+0x11C]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x124],eax
	pop edi
	ret 4
}
}
// CMob::Init
_SUB_EXCEPTION_HANDLER(24D3B0)
__SUB_CLASS_THIS(0024D3B0, __thiscall, 47471,  CMob, void, unsigned long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24D3B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x134
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x148]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call get_update_time
	mov ecx,dword ptr [esp+0x158]
	lea edx,[esi+0x168]
	mov dword ptr [esp+0x38],eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov ecx,esi
	mov dword ptr [esi+0x170],eax
	call CMob::SetShoeAttr
	mov edi,dword ptr [esp+0x15C]
	mov ecx,edi
	call CInPacket::Decode2
	cwde
	lea ecx,[esi+0x55C]
	push eax
	call TSecType<long>::SetData
	mov ecx,edi
	call CInPacket::Decode2
	cwde
	lea ebx,[esi+0x550]
	push eax
	mov ecx,ebx
	call TSecType<long>::SetData
	lea ecx,[ebx+0xC]
	lea ebp,[esi+0x538]
	call TSecType<long>::GetData
	lea ecx,[ebp+0xC]
	push eax
	call TSecType<long>::SetData
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	mov ecx,ebp
	call TSecType<long>::SetData
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	lea ebx,[esi+0x3D0]
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x3D8],eax
	call CInPacket::Decode2
	movzx eax,ax
	mov ecx,edi
	mov dword ptr [esp+0x1C],eax
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [esp+0x14],ecx
	mov ecx,edi
	call CInPacket::Decode1
	movsx eax,al
	mov dword ptr [esp+0x20],eax
	cmp eax,0xFFFFFFFD
	je Block3

 Block1:
	test eax,eax
	jge Block3

 Block2:
	mov dword ptr [esp+0x24],0
	jmp Block4

 Block3:
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esp+0x24],eax

 Block4:
	mov ecx,edi
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,edi
	mov dword ptr [esi+0x3C8],edx
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esp+0x3C],eax
	call CInPacket::Decode4
	mov dword ptr [esi+0x3CC],eax
	movsx eax,word ptr [esp+0x1C]
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push eax
	call CWvsPhysicalSpace2D::GetFoothold
	movsx ecx,word ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov dword ptr [esp+0x20],eax
	call CWvsPhysicalSpace2D::GetFoothold
	test eax,eax
	je Block6

 Block5:
	mov edx,dword ptr [eax+0x30]
	mov dword ptr [esp+0x18],edx
	jmp Block7

 Block6:
	mov dword ptr [esp+0x18],0

 Block7:
	call CVecCtrlMob::CreateInstance
	mov edi,eax
	lea ecx,[esi+0x104]
	push edi
	call __QueryVecCtrlMob
	test eax,eax
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	cmp dword ptr [esi+0x28C],0
	je Block12

 Block11:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block13

 Block12:
	mov eax,dword ptr [esi+0x174]

 Block13:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [eax+0x48]
	push ecx
	push edx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea eax,[esi+4]
	push eax
	mov ecx,edi
	call CVecCtrlMob::Init
	mov eax,dword ptr [esi+0x3D8]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ecx,ebp
	mov dword ptr [esp+0x14],eax
	call TSecType<long>::GetData
	lea ecx,[esi+0x544]
	mov ebp,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+4]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push ecx
	push 0
	push 0
	push ebp
	push eax
	push 0
	mov ecx,edi
	call edx
	mov edi,dword ptr [edi+0x1D8]
	push edi
	mov ecx,esi
	call CMob::GetFineMoveDirAction
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3D8],eax
	call CVecCtrlMob::CreateInstance
	lea ecx,[esi+0x108]
	push eax
	mov dword ptr [esp+0x20],eax
	call __QueryVecCtrlMob
	test eax,eax
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea eax,[esp+0x14]
	push 0x3D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	xor ebx,ebx
	push ebx
	lea ecx,[esi+0x10C]
	push ecx
	push eax
	mov dword ptr [esp+0x15C],ebx
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x150],0xFFFFFFFF
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block18:
	cmp dword ptr [esi+0x28C],ebx
	je Block20

 Block19:
	mov eax,dword ptr [esi+0x178]
	cmp eax,ebx
	jne Block21

 Block20:
	mov eax,dword ptr [esi+0x174]

 Block21:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x48]
	push edx
	push ecx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edi,dword ptr [esp+0x28]
	add esp,8
	push eax
	lea ebp,[esi+4]
	push ebp
	mov ecx,edi
	call CVecCtrlMob::Init
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	mov ecx,edi
	call eax
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov eax,3
	mov dword ptr [esp+0x150],1
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x150],2
	cmp ecx,ebx
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[esp+0x30]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x4E8]
	cmp edi,eax
	je Block30

 Block26:
	mov dword ptr [esi+0x4E8],eax
	cmp eax,ebx
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block28:
	cmp edi,ebx
	je Block30

 Block29:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block30:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block32:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x150],1
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	cmp word ptr [esp+0x4C],8
	mov dword ptr [esp+0x150],0xFFFFFFFF
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebx
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [esi+0x104]
	mov edx,0xD
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block42:
	mov edi,dword ptr [esi+0x4E8]
	mov dword ptr [esp+0x150],3
	cmp edi,ebx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
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
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	cmp eax,ebx
	jge Block46

 Block45:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block46:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0x150],0xFFFFFFFF
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebx
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov edi,dword ptr [esi+0x4E8]
	cmp edi,ebx
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFF
	push edi
	call ecx
	cmp eax,ebx
	jge Block54

 Block53:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block54:
	mov edi,dword ptr [esp+0x20]
	lea eax,[edi+5]
	cmp eax,4
	ja Block96

 Block55:
	cmp EAX, 0
je Block93
cmp EAX, 1
je Block82
cmp EAX, 2
je Block80
cmp EAX, 3
je Block63
cmp EAX, 4
je Block56


 Block56:
	push offset _D_VTMISSING
	lea ecx,[esp+0x12C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x10C]
	mov dword ptr [esp+0x154],4
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi+0x4E8]
	mov bl,5
	mov byte ptr [esp+0x150],bl
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[esp+0x48]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x150],6
	test ecx,ecx
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	lea eax,[esp+0x128]
	push eax
	lea edx,[esp+0x10C]
	push edx
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block62:
	lea ecx,[esp+0x108]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x128]
	mov dword ptr [esp+0x150],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block139

 Block63:
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x54]
	push ecx
	add eax,0x4C
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	mov ecx,esi
	test eax,eax
	je Block71

 Block64:
	mov edx,5
	call CMob::_ZtlSecurePut_m_nOneTimeAction
	push offset _D_VTMISSING
	lea ecx,[esp+0xEC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xDC]
	mov dword ptr [esp+0x154],7
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi+0x4E8]
	mov byte ptr [esp+0x150],8
	cmp ecx,ebx
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea edx,[esp+0x44]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x150],9
	cmp ecx,ebx
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea eax,[esp+0xE8]
	push eax
	lea edx,[esp+0xDC]
	push edx
	push ebx
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x150],8
	cmp eax,ebx
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block70:
	lea ecx,[esp+0xD8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xE8]
	mov dword ptr [esp+0x150],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block139

 Block71:
	mov edx,dword ptr [esp+0x38]
	add edx,0x320
	call CMob::_ZtlSecurePut_m_tInitDelay
	mov ecx,esi
	call CMob::_ZtlSecureGet_m_tInitDelay
	test eax,eax
	jne Block73

 Block72:
	lea edx,[eax+1]
	mov ecx,esi
	call CMob::_ZtlSecurePut_m_tInitDelay

 Block73:
	push offset _D_VTMISSING
	lea ecx,[esp+0xFC]
	call Ztl_variant_t::_ctor_1
	mov ecx,esi
	mov dword ptr [esp+0x150],0xA
	call CMob::_ZtlSecureGet_m_tInitDelay
	mov ecx,3
	mov word ptr [esp+0xC4],cx
	mov dword ptr [esp+0xCC],eax
	mov ecx,dword ptr [esi+0x4E8]
	mov bl,0xB
	mov byte ptr [esp+0x150],bl
	test ecx,ecx
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	lea edx,[esp+0x60]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x150],0xC
	test ecx,ecx
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	lea eax,[esp+0xF8]
	push eax
	lea edx,[esp+0xC8]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	lea ecx,[esp+0xC4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xF8]
	mov dword ptr [esp+0x150],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block139

 Block80:
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	push eax
	call CMobPool::GetMob
	mov edi,eax
	cmp edi,ebx
	je Block139

 Block81:
	mov ecx,esi
	call CMob::GetMobID
	lea ecx,[edi+0x498]
	mov ebx,eax
	call ZList<unsigned long>::AddTail_
	push 1
	mov ecx,esi
	mov dword ptr [eax],ebx
	call CMob::SetSuspended
	jmp Block139

 Block82:
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x54]
	push ecx
	add eax,0x4C
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block90

 Block83:
	mov edx,5
	mov ecx,esi
	call CMob::_ZtlSecurePut_m_nOneTimeAction
	push offset _D_VTMISSING
	lea ecx,[esp+0x13C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x11C]
	mov dword ptr [esp+0x154],0xD
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi+0x4E8]
	mov bl,0xE
	mov byte ptr [esp+0x150],bl
	test ecx,ecx
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea edx,[esp+0x40]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x150],0xF
	test ecx,ecx
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	lea eax,[esp+0x138]
	push eax
	lea edx,[esp+0x11C]
	push edx
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block89

 Block88:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block89:
	lea ecx,[esp+0x118]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x138]
	mov dword ptr [esp+0x150],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,esi
	call CMob::GetCurTemplate
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov edx,dword ptr [ebp]
	mov edx,dword ptr [edx+0x10]
	mov edi,eax
	add esp,8
	lea eax,[esp+0x4C]
	push eax
	mov ecx,ebp
	call edx
	mov ebp,eax
	mov eax,dword ptr [esi+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[esi+4]
	lea edx,[esp+0x28]
	push edx
	call eax
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ebp]
	push ecx
	push edx
	call get_sound_volume_by_pos
	push eax
	push 0x26
	push edi
	call play_mob_sound
	add esp,0x14

 Block90:
	lea edx,[esi+0x45C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x474]
	mov ecx,1
	mov dword ptr [esi+0x464],eax
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [esi+0x47C],eax
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x864700
	je Block92

 Block91:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x864764
	jne Block139

 Block92:
	fld qword ptr [__real_403e000000000000]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	push 0
	push 0
	push 0
	sub esp,8
	fstp qword ptr [esp]
	call CAnimationDisplayer::Effect_Tremble
	jmp Block139

 Block93:
	mov ecx,dword ptr [esp+0x38]
	lea edi,[esi+0x45C]
	add ecx,0x32A
	mov edx,edi
	call _ZtlSecureTearHelper<long>::call
	push eax
	push edi
	mov dword ptr [esi+0x464],eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block95

 Block94:
	lea edx,[eax+1]
	mov ecx,esi
	call CMob::_ZtlSecurePut_m_tInitDelay

 Block95:
	lea edx,[esi+0x474]
	mov ecx,1
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [esi+0x47C],eax
	jmp Block139

 Block96:
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x5C]
	push 0x663
	push eax
	mov dword ptr [esp+0x158],0x10
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x15C],0x11
	call ZXString16::Format
	mov eax,dword ptr [esp+0x68]
	add esp,0xC
	mov byte ptr [esp+0x150],0x10
	cmp eax,ebx
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block98:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x94]
	push edx
	call edi
	lea eax,[esp+0x94]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	lea ecx,[esp+0x84]
	push ecx
	mov byte ptr [esp+0x154],0x12
	call edi
	lea edx,[esp+0x84]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block102

 Block101:
	push eax
	call _com_issue_error

 Block102:
	mov ebp,dword ptr [esp+0x18]
	push 0
	push 0
	lea eax,[esp+0x9C]
	push eax
	lea ecx,[esp+0x90]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x13
	push ebp
	mov byte ptr [esp+0x168],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x164],0x14
	jne Block104

 Block103:
	push 0x80004003
	call _com_issue_error

 Block104:
	lea edx,[esp+0xB8]
	mov byte ptr [esp+0x164],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x158],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block107

 Block105:
	cmp eax,0x80004002
	je Block107

 Block106:
	push eax
	call _com_issue_error

 Block107:
	mov edi,8
	mov byte ptr [esp+0x150],0x17
	cmp word ptr [esp+0xA4],di
	jne Block110

 Block108:
	xor eax,eax
	mov word ptr [esp+0xA4],ax
	mov eax,dword ptr [esp+0xAC]
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea ecx,[esp+0xA4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov byte ptr [esp+0x150],0x18
	cmp word ptr [esp+0x84],di
	jne Block114

 Block112:
	mov eax,dword ptr [esp+0x8C]
	xor edx,edx
	mov word ptr [esp+0x84],dx
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea eax,[esp+0x84]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov byte ptr [esp+0x150],0x19
	cmp word ptr [esp+0x94],di
	jne Block118

 Block116:
	mov eax,dword ptr [esp+0x9C]
	xor ecx,ecx
	mov word ptr [esp+0x94],cx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea edx,[esp+0x94]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov edi,dword ptr [esp+0x14]
	test edi,edi
	sete al
	test al,al
	je Block124

 Block120:
	mov byte ptr [esp+0x150],0x10
	test edi,edi
	je Block122

 Block121:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block122:
	mov dword ptr [esp+0x150],0xFFFFFFFF
	test ebp,ebp
	je Block139

 Block123:
	mov edx,dword ptr [esp+0x18]
	add edx,0xFFFFFFF4
	push edx
	jmp Block138

 Block124:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xDC],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x158],0x1A
	test edi,edi
	jne Block126

 Block125:
	push 0x80004003
	call _com_issue_error

 Block126:
	lea ecx,[esp+0xBC]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x15C],0x19
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x158],0x1B
	call get_int32
	add eax,dword ptr [esp+0x2C]
	mov ebx,dword ptr [esp+0x40]
	add eax,ebx
	lea ebp,[esi+0x45C]
	add esp,8
	mov edx,ebp
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	cmp word ptr [esp+0xB4],8
	mov dword ptr [esi+0x464],eax
	mov byte ptr [esp+0x150],0x19
	jne Block129

 Block127:
	mov eax,dword ptr [esp+0xBC]
	xor edx,edx
	mov word ptr [esp+0xB4],dx
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea eax,[esp+0xB4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block130:
	mov ecx,dword ptr [esi+0x464]
	push ecx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block132

 Block131:
	mov edx,ebp
	lea ecx,[eax+1]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x464],eax

 Block132:
	mov edx,dword ptr [esp+0x24]
	lea eax,[edx+ebx]
	mov dword ptr [esi+0x13C],eax
	test eax,eax
	jne Block134

 Block133:
	mov dword ptr [esi+0x13C],1

 Block134:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esi+0x138],eax
	cmp eax,0xF
	jne Block136

 Block135:
	lea ecx,[ebx+0xBB8]
	mov edx,ebp
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x464],eax

 Block136:
	lea edx,[esi+0x474]
	mov ecx,1
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [esi+0x47C],eax
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x154],0x10
	call ecx
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x150],0xFFFFFFFF
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFF4
	push eax

 Block138:
	call ZXString16::_Release
	add esp,4

 Block139:
	mov ecx,esi
	call CMob::SetLayerZ
	mov ecx,esi
	call CMob::PrepareActionLayer
	push 0
	mov ecx,esi
	call CMob::UpdateAffectedSkillList
	lea edx,[esi+0x11C]
	or ecx,0xFFFFFFFF
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x17C]
	xor ecx,ecx
	mov dword ptr [esi+0x124],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3F4]
	xor ecx,ecx
	mov dword ptr [esi+0x184],eax
	mov dword ptr [esi+0xA4],0
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3E8]
	xor ecx,ecx
	mov dword ptr [esi+0x3FC],eax
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x174]
	mov dword ptr [esi+0x3F0],eax
	cmp dword ptr [edx+0x208],0
	je Block141

 Block140:
	push 0xFFFF0000
	push 0x64
	mov ecx,esi
	call CMob::CreateHPIndicator
	mov ecx,esi
	call CMob::ShowHPIndicator

 Block141:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+8]
	call edx
	mov ebx,eax
	mov ecx,dword ptr [ebx+0x13E4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+4]
	call edx
	test al,al
	je Block151

 Block142:
	mov ebp,dword ptr [ebx+0x13E4]
	test ebp,ebp
	je Block151

 Block143:
	lea edi,[ebp+0x18]
	mov ecx,edi
	call ZFatalSection::Lock
	mov ebp,dword ptr [ebp+0x24]
	test edi,edi
	je Block146

 Block144:
	add dword ptr [edi+4],0xFFFFFFFF
	jne Block146

 Block145:
	mov dword ptr [edi],0

 Block146:
	cmp ebp,dword ptr [esp+0x158]
	jne Block151

 Block147:
	mov ebp,dword ptr [ebx+0x13E4]
	lea edi,[ebp+0x18]
	mov ecx,edi
	call ZFatalSection::Lock
	test edi,edi
	je Block150

 Block148:
	add dword ptr [edi+4],0xFFFFFFFF
	jne Block150

 Block149:
	mov dword ptr [edi],0

 Block150:
	mov eax,dword ptr [ebp+0x10]
	push 0
	push eax
	mov ecx,esi
	call CMob::SetGuided

 Block151:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block159

 Block152:
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,esi
	call CMob::LoadEffectLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x4F4]
	cmp edi,eax
	je Block157

 Block153:
	mov dword ptr [esi+0x4F4],eax
	test eax,eax
	je Block155

 Block154:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block155:
	test edi,edi
	je Block157

 Block156:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block157:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block159

 Block158:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block159:
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x19C]
	push ecx
	add eax,0x194
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block178

 Block160:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x74]
	push edx
	call edi
	lea eax,[esp+0x74]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block162

 Block161:
	push eax
	call _com_issue_error

 Block162:
	lea ecx,[esp+0x64]
	push ecx
	mov dword ptr [esp+0x154],0x1C
	call edi
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block164

 Block163:
	push eax
	call _com_issue_error

 Block164:
	mov ecx,dword ptr [esi+0x4E8]
	mov bl,0x1D
	mov byte ptr [esp+0x150],bl
	test ecx,ecx
	jne Block166

 Block165:
	push 0x80004003
	call _com_issue_error

 Block166:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x150],0x1E
	test ecx,ecx
	jne Block168

 Block167:
	push 0x80004003
	call _com_issue_error

 Block168:
	lea edx,[esp+0x74]
	push edx
	lea eax,[esp+0x68]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x150],bl
	test eax,eax
	je Block170

 Block169:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block170:
	mov edi,8
	mov byte ptr [esp+0x150],0x1C
	cmp word ptr [esp+0x64],di
	jne Block173

 Block171:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block174

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block174

 Block173:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block174:
	mov dword ptr [esp+0x150],0xFFFFFFFF
	cmp word ptr [esp+0x74],di
	jne Block177

 Block175:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	test eax,eax
	je Block178

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block178

 Block177:
	lea eax,[esp+0x74]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block178:
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x1D0]
	push ecx
	add eax,0x1C8
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block180

 Block179:
	mov ecx,esi
	call CMob::InitAngerGaugeData
	mov ecx,esi
	call CMob::CreateAngerIndicator

 Block180:
	mov edx,dword ptr [esi+0x174]
	mov eax,1
	cmp dword ptr [edx+0x234],eax
	jne Block182

 Block181:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [ecx+0x2F0],eax

 Block182:
	mov ecx,dword ptr [esp+0x148]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x140
	ret 8
}
}
// CMob::TryFirstSelfDestruction
_SUB_EXCEPTION_HANDLER(240EE0)
__SUB_CLASS_THIS0(00240EE0, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_240EE0
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
	mov eax,dword ptr [edi+0x174]
	mov ecx,dword ptr [eax+0x160]
	push ecx
	add eax,0x158
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block10

 Block1:
	mov eax,dword ptr [edi+0x174]
	mov edx,dword ptr [eax+0x16C]
	push edx
	add eax,0x164
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block10

 Block2:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov ecx,dword ptr [eax+0x640]
	and ecx,0xFFFFFFFE
	cmp ecx,0x12
	je Block10

 Block3:
	push 0
	lea ecx,[esp+0x40]
	push ecx
	lea ecx,[eax+0x88]
	call CAvatar::GetBodyRect
	xor esi,esi
	mov ecx,edi
	mov dword ptr [esp+0x18],esi
	call CMob::GetCurTemplate
	cmp dword ptr [eax+0x218],esi
	jle Block10

 Block4:
	push esi
	mov ecx,edi
	call CMob::GetCurTemplate
	mov ecx,eax
	call CMobTemplate::GetAttackInfo
	mov ebx,eax
	cmp dword ptr [ebx+0xC],0
	jne Block7

 Block5:
	mov edx,dword ptr [edi+4]
	mov edx,dword ptr [edx+0x10]
	lea esi,[edi+4]
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call edx
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	call edx
	mov esi,dword ptr [eax]
	add ebx,0x2C
	lea eax,[esp+0x4C]
	push ebx
	push eax
	call SECRECT::ToRect
	add esp,8
	push ebp
	push esi
	push eax
	call OffsetRect
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x64]
	push eax
	call IntersectRect
	test eax,eax
	jne Block9

 Block6:
	mov esi,dword ptr [esp+0x18]

 Block7:
	inc esi
	mov ecx,edi
	mov dword ptr [esp+0x18],esi
	call CMob::GetCurTemplate
	cmp esi,dword ptr [eax+0x218]
	jl Block4

 Block8:
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block9:
	push 0xE8
	lea ecx,[esp+0x30]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [edi+0x170]
	push ecx
	add edi,0x168
	push edi
	mov dword ptr [esp+0x80],0
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	push eax
	lea ecx,[esp+0x30]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x2C]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block10:
	mov ecx,dword ptr [esp+0x70]
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
// CMob::AngerGaugeFullChargeEffect
_SUB_EXCEPTION_HANDLER(2490B0)
__SUB_CLASS_THIS0(002490B0, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2490B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	call get_update_time
	mov ecx,dword ptr [edi+0x9C]
	add ecx,dword ptr [edi+0xA0]
	cmp eax,ecx
	jl Block19

 Block1:
	xor ebx,ebx
	mov dword ptr [edi+0xA0],eax
	mov dword ptr [esp+0x10],ebx
	lea edx,[esp+0x14]
	push 0x3CE
	push edx
	mov dword ptr [esp+0x34],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,eax
	mov eax,dword ptr [edi+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	mov byte ptr [esp+0x34],1
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov ecx,dword ptr [esi]
	add esp,8
	cmp ecx,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [ecx]
	jmp Block4

 Block3:
	xor ecx,ecx

 Block4:
	push eax
	push ecx
	lea edx,[esp+0x18]
	push edx
	call ZXString16::Format
	mov ecx,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x2C],bl
	cmp ecx,ebx
	je Block6

 Block5:
	call _xbstr_t::Data_t::Release

 Block6:
	push 1
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x1C],0x2F
	call ZXString16::_Cat
	lea ecx,[esp+0x14]
	push 0xC2F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x2C],2
	cmp eax,ebx
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	jmp Block9

 Block8:
	xor edx,edx

 Block9:
	mov eax,edx
	lea esi,[eax+2]

 Block10:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,bx
	jne Block10

 Block11:
	sub eax,esi
	sar eax,1
	push eax
	push edx
	lea ecx,[esp+0x18]
	call ZXString16::_Cat
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x2C],bl
	cmp ecx,ebx
	je Block13

 Block12:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],ebx

 Block13:
	mov eax,dword ptr [edi+0x4E8]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block15:
	mov eax,dword ptr [edi+0x10C]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x34],3
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block17:
	push ecx
	mov ecx,esp
	lea eax,[esp+0x1C]
	mov dword ptr [esp+0x2C],esp
	push eax
	mov byte ptr [esp+0x3C],4
	mov dword ptr [ecx],ebx
	call ZXString16::op_assign
	mov byte ptr [esp+0x38],bl
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::Effect_FullChargedAngerGauge
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret
}
}
// CMob::_ZtlSecurePut_m_nMoveAction
__SUB_CLASS(0023E610, __fastcall, 47542,  CMob, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x3D0]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x3D8],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMob::_ZtlSecureGet_m_tHitExpire
__SUB_CLASS0(0023A780, __fastcall, 47541,  CMob, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3F0]
	push eax
	add ecx,0x3E8
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::OnEscortReturnBefore
_SUB_EXCEPTION_HANDLER(249410)
__SUB_CLASS_THIS(00249410, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_249410
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
	mov edi,ecx
	call CMob::IsActive
	test eax,eax
	je Block22

 Block1:
	mov ecx,dword ptr [esp+0x38]
	call CInPacket::Decode4
	mov ecx,dword ptr [edi+0x108]
	xor ebx,ebx
	mov ebp,eax
	cmp ecx,ebx
	je Block3

 Block2:
	lea eax,[ecx-0xC]
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	mov eax,dword ptr [eax+0x780]
	cmp eax,ebx
	je Block22

 Block5:
	cmp dword ptr [eax-4],ebx
	je Block22

 Block6:
	cmp ebp,ebx
	jl Block22

 Block7:
	cmp ecx,ebx
	je Block9

 Block8:
	lea eax,[ecx-0xC]
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov eax,dword ptr [eax+0x780]
	cmp eax,ebx
	je Block22

 Block11:
	cmp ebp,dword ptr [eax-4]
	jae Block22

 Block12:
	mov dword ptr [esp+0x38],ebx
	lea eax,[esp+0x14]
	push 0x663
	push eax
	mov dword ptr [esp+0x38],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 7
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x3C],1
	call ZXString16::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],ebx
	mov edx,dword ptr [edi+4]
	mov edx,dword ptr [edx+0x10]
	lea esi,[edi+4]
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x3C],2
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x44]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],ebx
	push ebx
	mov byte ptr [esp+0x48],bl
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push esi
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [edi+0x108]
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	mov dword ptr [eax+0x7A0],1
	mov eax,dword ptr [edi+0x108]
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	jmp Block20

 Block19:
	xor eax,eax

 Block20:
	mov dword ptr [eax+0x79C],ebp
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp esi,ebx
	je Block22

 Block21:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block22:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4
}
}
// CMob::DAMAGEINFO::_ZtlSecureGet_nHitAction
__SUB_CLASS0(0023A820, __fastcall, 49839,  CMob::DAMAGEINFO, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x2C]
	push eax
	add ecx,0x24
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::DAMAGEINFO::_ZtlSecureGet_nBulletCashItemID
__SUB_CLASS0(0023A900, __fastcall, 49839,  CMob::DAMAGEINFO, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x80]
	push eax
	add ecx,0x78
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::GetRandomHitAction
__SUB_CLASS_THIS0(00239F70, __thiscall, 47482,  CMob, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x174]
	cmp dword ptr [eax+0x220],0
	jle Block2

 Block1:
	call _rand
	mov ecx,dword ptr [esi+0x174]
	cdq
	idiv dword ptr [ecx+0x220]
	pop esi
	mov eax,edx
	add eax,7
	ret

 Block2:
	or eax,0xFFFFFFFF
	pop esi
	ret
}
}
// CMob::IsKindOf
__SUB_CLASS_THIS(0024CFC0, __thiscall, 47579,  CMob, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CMob::ms_RTTI_CMob
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
// CMob::MobBullet::Container::~Container
__SUB_CLASS_THIS0(00241760, __thiscall, 50184,  CMob::MobBullet::Container, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset BulletContainer<CMob::MobBullet>::`vftable'
	add ecx,4
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CMob::MobBullet>>::`vftable'
	jmp  ZList<ZRef<CMob::MobBullet>>::RemoveAll
}
}
// CMob::ProcessAction
_SUB_EXCEPTION_HANDLER(24AB60)
__SUB_CLASS_THIS(0024AB60, __thiscall, 47486,  CMob, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24AB60
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
	push 0
	call CMob::GetCurrentAction
	mov edi,eax
	mov eax,dword ptr [esi+0x40C]
	push eax
	lea ebx,[esi+0x404]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	lea ebp,[eax-0x1E]
	add esp,8
	mov edx,ebx
	mov ecx,ebp
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x40C],eax
	test ebp,ebp
	jg Block13

 Block1:
	mov edx,dword ptr [esi+0x458]
	lea ecx,[edi+edi*4]
	lea edi,[esi+0x400]
	push edi
	lea ebp,[edx+ecx*4]
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::GetNext
	mov eax,dword ptr [esi+0x3E4]
	push eax
	lea ebx,[esi+0x3DC]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,0xC
	cmp eax,0xFFFFFFFF
	jle Block4

 Block2:
	cmp dword ptr [edi],0
	jne Block6

 Block3:
	mov edx,ebx
	or ecx,0xFFFFFFFF
	call _ZtlSecureTearHelper<long>::call
	mov ecx,esi
	mov dword ptr [esi+0x3E4],eax
	call CMob::PrepareActionLayer
	jmp Block13

 Block4:
	cmp dword ptr [edi],0
	jne Block6

 Block5:
	mov ecx,dword ptr [ebp+0xC]
	mov dword ptr [edi],ecx

 Block6:
	mov edx,3
	mov word ptr [esp+0x14],dx
	mov dword ptr [esp+0x1C],1
	mov ecx,dword ptr [esi+0x4E8]
	mov dword ptr [esp+0x2C],0
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::ShiftCanvas
	cmp word ptr [esp+0x14],8
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov eax,dword ptr [edi]
	push eax
	push ebp
	mov ecx,esi
	call CMob::SetFrameInfo

 Block13:
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
// CMob::SetMultiBallTarget
_SUB_EXCEPTION_HANDLER(2438A0)
__SUB_CLASS_THIS(002438A0, __thiscall, 47516,  CMob, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2438A0
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
	mov ebx,ecx
	mov eax,dword ptr [ebx+0x124]
	push eax
	lea esi,[ebx+0x11C]
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,3
	je Block2

 Block1:
	mov ecx,dword ptr [ebx+0x124]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,4
	jne Block41

 Block2:
	mov ebp,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	xor edi,edi
	add ebp,0x24
	mov dword ptr [esp+0x14],edi
	lea esi,[ebx+0x538]
	lea ecx,[esi+0xC]
	mov dword ptr [esp+0x48],edi
	call TSecType<long>::GetData
	mov ecx,esi
	mov dword ptr [esp+0x28],eax
	call TSecType<long>::GetData
	mov ebp,dword ptr [ebp+0xC]
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x18],ebp
	test ebp,ebp
	je Block28

 Block3:
	lea esp,[esp]

 Block4:
	lea edx,[esp+0x18]
	push edx
	call ZList<ZRef<USERREMOTE_ENTRY>>::GetNext
	mov edi,dword ptr [eax+4]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	add esp,4
	mov dword ptr [esp+0x3C],edi
	test edi,edi
	je Block6

 Block5:
	lea eax,[edi+4]
	push eax
	call ebp

 Block6:
	test edi,edi
	jne Block8

 Block7:
	mov byte ptr [esp+0x48],0
	jmp Block26

 Block8:
	mov esi,dword ptr [edi+0x10]
	mov dword ptr [esp+0x34],esi
	test esi,esi
	je Block10

 Block9:
	lea ecx,[esi+0xC]
	push ecx
	call ebp

 Block10:
	mov byte ptr [esp+0x48],2
	test esi,esi
	jne Block14

 Block11:
	lea esi,[edi+4]
	push esi
	mov byte ptr [esp+0x4C],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block12:
	push esi
	call ebp
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block13:
	mov dword ptr [esp+0x3C],0
	jmp Block26

 Block14:
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[esi+4]
	lea eax,[esp+0x20]
	push eax
	call edx
	mov edx,dword ptr [esp+0x24]
	mov ebp,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x2C]
	sub edx,0x19
	sub ecx,edx
	mov dword ptr [esp+0x24],edx
	mov edx,ecx
	mov eax,ebp
	imul edx,ecx
	sub eax,dword ptr [esp+0x20]
	mov ecx,eax
	imul ecx,eax
	add edx,ecx
	mov dword ptr [esp+0x1C],edx
	fild dword ptr [esp+0x1C]
	call __CIsqrt
	call __ftol2_sse
	mov edx,dword ptr [ebx+0x174]
	cmp dword ptr [edx+0x1A0],0
	mov esi,eax
	jne Block16

 Block15:
	mov eax,dword ptr [ebx+0x3D8]
	push eax
	lea ecx,[ebx+0x3D0]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	and eax,1
	je Block18

 Block16:
	cmp ebp,dword ptr [esp+0x20]
	jle Block18

 Block17:
	cmp esi,dword ptr [esp+0x54]
	jle Block22

 Block18:
	mov edx,dword ptr [ebx+0x174]
	cmp dword ptr [edx+0x1A0],0
	jne Block23

 Block19:
	mov eax,dword ptr [ebx+0x3D8]
	push eax
	lea ecx,[ebx+0x3D0]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	and eax,1
	jne Block23

 Block20:
	cmp ebp,dword ptr [esp+0x20]
	jge Block23

 Block21:
	cmp esi,dword ptr [esp+0x54]
	jg Block23

 Block22:
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	call ZArray<tagPOINT>::InsertBefore
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [eax+4],ecx

 Block23:
	push 0
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x4C],1
	call ZRef<CUserRemote>::_ReleaseRaw
	lea esi,[edi+4]
	xor ebp,ebp
	push esi
	mov dword ptr [esp+0x38],ebp
	mov byte ptr [esp+0x4C],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block25

 Block24:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block25:
	mov dword ptr [esp+0x3C],ebp

 Block26:
	cmp dword ptr [esp+0x18],0
	jne Block4

 Block27:
	mov edi,dword ptr [esp+0x14]
	test edi,edi
	jne Block29

 Block28:
	xor eax,eax
	jmp Block30

 Block29:
	mov eax,dword ptr [edi-4]

 Block30:
	mov ebp,dword ptr [esp+0x50]
	cmp eax,ebp
	jle Block39

 Block31:
	test ebp,ebp
	jle Block40

 Block32:
	add ebx,0x570

 Block33:
	test edi,edi
	je Block36

 Block34:
	mov esi,dword ptr [edi-4]
	test esi,esi
	je Block36

 Block35:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div esi
	mov eax,edx
	jmp Block37

 Block36:
	mov ecx,offset _D_G_RAND
	call CRand32::Random

 Block37:
	push 0xFFFFFFFF
	mov ecx,ebx
	lea esi,[edi+eax*8]
	call ZArray<tagPOINT>::InsertBefore
	mov ecx,dword ptr [esi]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esi+4]
	push esi
	lea ecx,[esp+0x18]
	mov dword ptr [eax+4],edx
	call ZArray<tagPOINT>::RemoveAt
	sub ebp,1
	jne Block33

 Block38:
	jmp Block40

 Block39:
	lea eax,[esp+0x14]
	push eax
	lea ecx,[ebx+0x570]
	call ZArray<tagPOINT>::operator=

 Block40:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ZArray<tagPOINT>::RemoveAll

 Block41:
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
// CMob::TrySpeaking
_SUB_EXCEPTION_HANDLER(24B6D0)
__SUB_CLASS_THIS(0024B6D0, __thiscall, 47516,  CMob, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24B6D0
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov ebp,dword ptr [esi+0x174]
	mov eax,dword ptr [ebp+0x284]
	add ebp,0x284
	mov dword ptr [esp+0x54],ebx
	mov dword ptr [esp+0x24],0x1388
	mov dword ptr [esp+0x20],0x258
	cmp eax,ebx
	je Block94

 Block1:
	mov eax,dword ptr [eax-4]
	cmp eax,ebx
	je Block94

 Block2:
	mov edi,dword ptr [esp+0x5C]
	cmp edi,eax
	jge Block94

 Block3:
	push ebx
	call CMob::GetCurrentAction
	mov ecx,dword ptr [esi+0x174]
	mov edx,dword ptr [ecx+0x290]
	add eax,0xFFFFFFF6
	mov dword ptr [esp+0x38],edx
	cmp eax,2
	ja Block17

 Block4:
	cmp edi,0xFFFFFFFF
	jne Block18

 Block5:
	cmp dword ptr [esp+0x60],edi
	jne Block94

 Block6:
	mov ecx,ebp
	xor edi,edi
	call ZArray<ZRef<MobSpeakInformation>>::GetCount
	test eax,eax
	jbe Block94

 Block7:
	lea ebx,[esi+0x3DC]

 Block8:
	mov eax,dword ptr [ebp]
	mov esi,dword ptr [eax+edi*8+4]
	lea eax,[eax+edi*8]
	mov dword ptr [esp+0x34],esi
	test esi,esi
	je Block10

 Block9:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x3E4]
	push eax
	push ebx
	mov byte ptr [esp+0x5C],1
	call _ZtlSecureFuseHelper<long>::call
	xor ecx,ecx
	add esp,8
	cmp dword ptr [esi+0xC],eax
	sete cl
	mov eax,ecx
	test eax,eax
	jne Block13

 Block11:
	mov byte ptr [esp+0x54],cl
	lea ecx,[esp+0x30]
	call ZRef<MobSpeakInformation>::~ZRef<MobSpeakInformation>
	mov ecx,ebp
	inc edi
	call ZArray<ZRef<MobSpeakInformation>>::GetCount
	cmp edi,eax
	jb Block8

 Block12:
	jmp Block94

 Block13:
	mov esi,dword ptr [esi+0x20]
	mov dword ptr [esp+0x5C],edi
	test esi,esi
	jne Block15

 Block14:
	xor eax,eax
	jmp Block16

 Block15:
	mov eax,dword ptr [esi-4]

 Block16:
	push 0
	push eax
	call get_rand_0
	mov edi,dword ptr [esp+0x20]
	mov edx,dword ptr [edi+0x3E4]
	push edx
	push ebx
	mov esi,eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x10
	push eax
	mov ecx,edi
	call CMob::GetActionDelay
	mov ecx,eax
	lea edx,[ecx*4]
	mov eax,0x66666667
	imul edx
	sar edx,1
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	sub ecx,eax
	mov dword ptr [esp+0x20],ecx
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x54],0
	call ZRef<MobSpeakInformation>::~ZRef<MobSpeakInformation>
	mov edi,dword ptr [esp+0x5C]
	jmp Block25

 Block17:
	cmp edi,0xFFFFFFFF
	je Block94

 Block18:
	mov eax,dword ptr [ebp]
	cmp eax,ebx
	je Block94

 Block19:
	cmp dword ptr [eax-4],edi
	jbe Block94

 Block20:
	mov eax,dword ptr [eax+edi*8+4]
	mov ecx,dword ptr [eax+0x20]
	cmp ecx,ebx
	je Block94

 Block21:
	mov ecx,dword ptr [ecx-4]
	mov esi,dword ptr [esp+0x60]
	cmp ecx,esi
	jbe Block94

 Block22:
	cmp dword ptr [eax+0xC],0
	je Block25

 Block23:
	cmp dword ptr [eax+0xC],0x2B
	jge Block25

 Block24:
	mov eax,dword ptr [esp+0x18]
	cmp dword ptr [eax+0x18],0
	jne Block94

 Block25:
	mov ecx,dword ptr [ebp]
	lea eax,[ecx+edi*8]
	mov edi,dword ptr [eax+4]
	mov dword ptr [esp+0x48],edi
	test edi,edi
	je Block27

 Block26:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block27:
	mov eax,dword ptr [edi+0x20]
	mov byte ptr [esp+0x54],2
	test eax,eax
	je Block46

 Block28:
	cmp esi,dword ptr [eax-4]
	jae Block46

 Block29:
	lea ecx,[eax+esi*4]
	push ecx
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov esi,dword ptr [esp+0x14]
	test esi,esi
	je Block47

 Block30:
	cmp byte ptr [esi],0
	je Block47

 Block31:
	mov edx,dword ptr [esp+0x18]
	mov ebx,dword ptr [edx+0x174]
	add ebx,0x288
	mov ecx,ebx
	call ZArray<ZRef<MobSpeakCondition>>::IsEmpty
	test eax,eax
	jne Block77

 Block32:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x3C]
	push eax
	mov dword ptr [esp+0x30],ecx
	call CWvsContext::GetCharacterData
	lea ecx,[esp+0x3C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov edx,dword ptr [ecx+8]
	xor eax,eax
	mov dword ptr [esp+0x28],edx
	mov dword ptr [esp+0x5C],eax
	mov dword ptr [esp+0x1C],eax

 Block33:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [ecx+0x2E44]
	mov edi,dword ptr [eax+edx+4]
	mov ecx,ebx
	mov dword ptr [esp+0x30],edi
	xor ebp,ebp
	call ZArray<ZRef<MobSpeakCondition>>::GetCount
	test eax,eax
	jbe Block57

 Block34:
	cmp dword ptr [esp+0x5C],0
	jne Block57

 Block35:
	mov eax,dword ptr [ebx]
	mov esi,dword ptr [eax+ebp*8+4]
	lea eax,[eax+ebp*8]
	mov dword ptr [esp+0x40],esi
	test esi,esi
	je Block37

 Block36:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block37:
	mov eax,dword ptr [esi+0x14]
	mov byte ptr [esp+0x54],3
	test eax,eax
	je Block40

 Block38:
	test edi,edi
	je Block49

 Block39:
	mov edx,dword ptr [edi+0x88]
	mov ecx,dword ptr [edx]
	xor edx,edx
	cmp ecx,eax
	sete dl
	mov dword ptr [esp+0x5C],edx

 Block40:
	cmp dword ptr [esi+0xC],0
	je Block53

 Block41:
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	lea eax,[esp+0x60]
	push eax
	call CQuestMan::GetQuestArray
	mov edx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],4
	xor ecx,ecx

 Block42:
	test edx,edx
	je Block52

 Block43:
	cmp ecx,dword ptr [edx-4]
	jae Block52

 Block44:
	movzx eax,word ptr [edx+ecx*2]
	movzx edi,ax
	cmp edi,dword ptr [esi+0xC]
	je Block51

 Block45:
	inc ecx
	jmp Block42

 Block46:
	mov esi,dword ptr [esp+0x14]

 Block47:
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x54],0
	call ZRef<MobSpeakInformation>::~ZRef<MobSpeakInformation>
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test esi,esi
	je Block94

 Block48:
	add esi,0xFFFFFFF4
	push esi
	jmp Block93

 Block49:
	test eax,eax
	je Block40

 Block50:
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x54],2
	call ZRef<MobSpeakCondition>::~ZRef<MobSpeakCondition>
	jmp Block56

 Block51:
	mov ecx,dword ptr [esp+0x2C]
	push eax
	call CWvsContext::GetQuestState
	xor ecx,ecx
	cmp eax,dword ptr [esi+0x10]
	sete cl
	mov dword ptr [esp+0x5C],ecx

 Block52:
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0x54],3
	call ZArray<unsigned short>::RemoveAll

 Block53:
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x58],2
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block55

 Block54:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block55:
	mov edi,dword ptr [esp+0x30]
	mov dword ptr [esp+0x40],0

 Block56:
	mov ecx,ebx
	inc ebp
	call ZArray<ZRef<MobSpeakCondition>>::GetCount
	cmp ebp,eax
	jb Block34

 Block57:
	mov eax,dword ptr [esp+0x1C]
	add eax,8
	cmp eax,0x18
	mov dword ptr [esp+0x1C],eax
	jl Block33

 Block58:
	xor esi,esi
	cmp dword ptr [esp+0x5C],esi
	jne Block77

 Block59:
	test byte ptr [_D__S3__9],1
	jne Block61

 Block60:
	or dword ptr [_D__S3__9],1
	push esi
	push 2
	mov ecx,offset _D_SCHAR
	mov byte ptr [esp+0x5C],5
	mov dword ptr [_D_SCHAR],esi
	call ZXString<char>::GetBuffer
	mov cx,word ptr [_S_RAW_2__1]
	mov word ptr [eax],cx
	push 2
	mov ecx,offset _D_SCHAR
	call ZXString<char>::ReleaseBuffer
	push 0xB129F0
	call _atexit
	add esp,4

 Block61:
	test byte ptr [_D__S3__9],2
	jne Block63

 Block62:
	or dword ptr [_D__S3__9],2
	push esi
	push 7
	mov ecx,offset _D_SIGNORESYMBOLS
	mov byte ptr [esp+0x5C],6
	mov dword ptr [_D_SIGNORESYMBOLS],esi
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S___42]
	mov dword ptr [eax],edx
	mov cx,word ptr [_S___42+4]
	mov word ptr [eax+4],cx
	mov dl,byte ptr [_S___42+6]
	push 7
	mov ecx,offset _D_SIGNORESYMBOLS
	mov byte ptr [eax+6],dl
	call ZXString<char>::ReleaseBuffer
	push 0xB129D0
	call _atexit
	add esp,4

 Block63:
	xor edi,edi
	mov dword ptr [esp+0x60],edi
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x54],7
	xor esi,esi
	call ZXString<char>::GetLength
	test eax,eax
	jle Block75

 Block64:
	mov edi,dword ptr [esp+0x14]
	jmp Block66

 Block66:
	mov al,byte ptr [esi+edi]
	mov byte ptr [esp+0x30],al
	mov ecx,dword ptr [esp+0x30]
	push 0
	push ecx
	mov ecx,offset _D_SIGNORESYMBOLS
	call ZXString<char>::Find__1
	cmp eax,0xFFFFFFFF
	jne Block72

 Block67:
	mov ecx,dword ptr [_D_SCHAR]
	test ecx,ecx
	je Block69

 Block68:
	mov eax,dword ptr [ecx-4]
	jmp Block70

 Block69:
	xor eax,eax

 Block70:
	push eax
	push ecx
	lea ecx,[esp+0x68]
	call ZXString<char>::_Cat
	mov dl,byte ptr [esi+edi+1]
	mov byte ptr [esp+0x2C],dl
	mov eax,dword ptr [esp+0x2C]
	push 0
	push eax
	mov ecx,offset _D_SIGNORESYMBOLS
	call ZXString<char>::Find__1
	cmp eax,0xFFFFFFFF
	jne Block73

 Block71:
	inc esi
	jmp Block73

 Block72:
	mov cl,byte ptr [esi+edi]
	push 1
	lea edx,[esp+0x60]
	mov byte ptr [esp+0x60],cl
	push edx
	lea ecx,[esp+0x68]
	call ZXString<char>::_Cat

 Block73:
	lea ecx,[esp+0x14]
	inc esi
	call ZXString<char>::GetLength
	cmp esi,eax
	jl Block66

 Block74:
	mov edi,dword ptr [esp+0x60]

 Block75:
	lea eax,[esp+0x60]
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x54],2
	test edi,edi
	je Block77

 Block76:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block77:
	mov dword ptr [esp+0x5C],0
	lea ecx,[esp+0x60]
	push 0x72D
	push ecx
	mov byte ptr [esp+0x5C],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [edx+0x174]
	mov ebp,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx+0x30]
	mov eax,dword ptr [eax]
	push ebp
	push edx
	push eax
	lea eax,[esp+0x68]
	push eax
	mov byte ptr [esp+0x64],9
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x70]
	add esp,0x10
	mov byte ptr [esp+0x54],8
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	mov esi,dword ptr [esp+0x5C]
	je Block81

 Block80:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0
	push 0xFFFFFFFF
	push 0x19
	mov dword ptr [eax+4],0
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	call CUIStatusBar::ChatLogAdd

 Block81:
	mov edi,dword ptr [esp+0x48]
	mov eax,dword ptr [edi+0x1C]
	test eax,eax
	jne Block83

 Block82:
	mov eax,dword ptr [esp+0x38]

 Block83:
	mov ebx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [ebx+0x174]
	push eax
	mov eax,dword ptr [edx+0x28C]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [ebx+0x104]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block85

 Block84:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block85:
	mov eax,dword ptr [ebx+0x4E8]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x6C],0xA
	mov dword ptr [esp+0x48],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block87:
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x74],0xB
	call _xbstr_t::_ctor_0
	lea ecx,[ebx+0x14]
	mov byte ptr [esp+0x70],8
	call CChatBalloon::MakeMobBalloon
	mov byte ptr [esp+0x54],2
	test esi,esi
	je Block89

 Block88:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block89:
	lea esi,[edi+4]
	push esi
	mov byte ptr [esp+0x58],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block91

 Block90:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block91:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test ebp,ebp
	je Block94

 Block92:
	add ebp,0xFFFFFFF4
	push ebp

 Block93:
	call ZXString<char>::_Release
	add esp,4

 Block94:
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
// CMob::SendCollisionEscort
_SUB_EXCEPTION_HANDLER(241150)
__SUB_CLASS_THIS(00241150, __thiscall, 47486,  CMob, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_241150
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
	push 0xEC
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi+0x170]
	push eax
	add esi,0x168
	push esi
	mov dword ptr [esp+0x28],0
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [esp+0x28]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CMob::ChangeAngerIndicator
__SUB_CLASS_THIS(0023A100, __thiscall, 47486,  CMob, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,dword ptr [ecx+0x98]
	je Block4

 Block1:
	cmp eax,dword ptr [ecx+0x52C]
	mov dword ptr [ecx+0x90],0
	jg Block4

 Block2:
	test eax,eax
	jl Block4

 Block3:
	mov dword ptr [ecx+0x98],eax

 Block4:
	ret 4
}
}
// CMob::IsSamePhaseWithMe
__SUB_CLASS_THIS0(0023B510, __thiscall, 47473,  CMob, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [_D_G_PSTAGE+4]
	push edi
	mov edi,ecx
	test esi,esi
	je Block7

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block7

 Block2:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block7

 Block3:
	mov esi,dword ptr [esi+0x24C]
	test esi,esi
	je Block6

 Block4:
	mov eax,dword ptr [edi+0x3CC]
	cmp esi,eax
	jl Block7

 Block5:
	cmp eax,dword ptr [ecx+0x2E18]
	jne Block7

 Block6:
	pop edi
	mov eax,1
	pop esi
	ret

 Block7:
	pop edi
	xor eax,eax
	pop esi
	ret
}
}
// CMob::~CMob
_SUB_EXCEPTION_HANDLER(24D050)
__SUB_CLASS_THIS0(0024D050, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24D050
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
	int 3// TODO: 	mov dword ptr [esi],offset CMob::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMob::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMob::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x5D4]
	int 3// TODO: 	mov dword ptr [esi+0x5D0],offset BulletContainer<CMob::MobBullet>::`vftable'
	mov dword ptr [esp+0x14],0x21
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CMob::MobBullet>>::`vftable'
	call ZList<ZRef<CMob::MobBullet>>::RemoveAll
	mov eax,dword ptr [esi+0x5AC]
	mov byte ptr [esp+0x14],0x20
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block2:
	lea ecx,[esi+0x590]
	mov byte ptr [esp+0x14],0x1F
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CMob::ReservedPacket>>::`vftable'
	call ZList<ZRef<CMob::ReservedPacket>>::RemoveAll
	lea ecx,[esi+0x574]
	mov byte ptr [esp+0x14],0x1E
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x570]
	mov byte ptr [esp+0x14],0x1D
	call ZArray<tagPOINT>::RemoveAll
	lea ecx,[esi+0x550]
	mov byte ptr [esp+0x14],0x1C
	call SECPOINT::~SECPOINT
	lea ecx,[esi+0x538]
	mov byte ptr [esp+0x14],0x1B
	call SECPOINT::~SECPOINT
	mov eax,dword ptr [esi+0x534]
	mov byte ptr [esp+0x14],0x1A
	test eax,eax
	je Block7

 Block3:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	mov eax,dword ptr [esi+0x534]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x534]
	test ecx,ecx
	je Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block6:
	mov dword ptr [esi+0x534],0

 Block7:
	lea ecx,[esi+0x528]
	mov byte ptr [esp+0x14],0x19
	call ZArray<ZArray<_x_com_ptr<IWzCanvas>>>::RemoveAll
	lea ecx,[esi+0x524]
	mov byte ptr [esp+0x14],0x18
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x50C]
	mov byte ptr [esp+0x14],0x17
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, long, long>::`vftable'
	call ZMap<long, long, long>::RemoveAll
	mov eax,dword ptr [esi+0x508]
	mov byte ptr [esp+0x14],0x16
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [esi+0x4F8]
	mov byte ptr [esp+0x14],0x15
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov eax,dword ptr [esi+0x4F4]
	mov byte ptr [esp+0x14],0x14
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov eax,dword ptr [esi+0x4F0]
	mov byte ptr [esp+0x14],0x13
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov eax,dword ptr [esi+0x4E8]
	mov byte ptr [esp+0x14],0x12
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	lea ecx,[esi+0x4D4]
	mov byte ptr [esp+0x14],0x11
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CMob::DROPPICKUP>::`vftable'
	call ZList<CMob::DROPPICKUP>::RemoveAll
	lea ecx,[esi+0x4C0]
	mov byte ptr [esp+0x14],0x10
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CMob::HITEFFECT>::`vftable'
	call ZList<CMob::HITEFFECT>::RemoveAll
	lea ecx,[esi+0x4AC]
	mov byte ptr [esp+0x14],0xF
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CMob::DAMAGEINFO>::`vftable'
	call ZList<CMob::DAMAGEINFO>::RemoveAll
	lea ecx,[esi+0x498]
	mov byte ptr [esp+0x14],0xE
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<unsigned long>::`vftable'
	call ZList<unsigned long>::RemoveAll
	lea ecx,[esi+0x458]
	mov byte ptr [esp+0x14],0xD
	call ZArray<ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>>::RemoveAll
	lea ecx,[esi+0x454]
	mov byte ptr [esp+0x14],0xC
	call ZArray<tagRECT>::RemoveAll
	lea ecx,[esi+0x450]
	mov byte ptr [esp+0x14],0xB
	call ZArray<tagRECT>::RemoveAll
	lea ecx,[esi+0x44C]
	mov byte ptr [esp+0x14],0xA
	call ZArray<tagRECT>::RemoveAll
	lea ecx,[esi+0x448]
	mov byte ptr [esp+0x14],9
	call ZArray<tagRECT>::RemoveAll
	lea ecx,[esi+0x3AC]
	mov byte ptr [esp+0x14],8
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<MobStat::BURNED_INFO>::`vftable'
	call ZList<MobStat::BURNED_INFO>::RemoveAll
	mov eax,dword ptr [esi+0x10C]
	mov byte ptr [esp+0x14],7
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov eax,dword ptr [esi+0x108]
	mov byte ptr [esp+0x14],6
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov eax,dword ptr [esi+0x104]
	mov byte ptr [esp+0x14],5
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	lea ecx,[esi+0xEC]
	mov byte ptr [esp+0x14],4
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<_x_com_ptr<IWzGr2DLayer>>::`vftable'
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0xD8]
	mov byte ptr [esp+0x14],3
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<_x_com_ptr<IWzGr2DLayer>>::`vftable'
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0xC4]
	mov byte ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CMob::ATTACKENTRY>::`vftable'
	call ZList<CMob::ATTACKENTRY>::RemoveAll
	lea ecx,[esi+0xB0]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CMob::AFFECTEDSKILLENTRY>::`vftable'
	call ZList<CMob::AFFECTEDSKILLENTRY>::RemoveAll
	mov ecx,dword ptr [esi+0xAC]
	test ecx,ecx
	je Block25

 Block24:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0xAC],0

 Block25:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CLife::~CLife
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMob::ShiftAffectedSkillAnimation
_SUB_EXCEPTION_HANDLER(248640)
__SUB_CLASS_THIS(00248640, __thiscall, 47472,  CMob, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_248640
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
	mov ebp,ecx
	mov eax,dword ptr [ebp+0xE0]
	xor ebx,ebx
	cmp eax,ebx
	je Block69

 Block1:
	cmp eax,1
	jne Block9

 Block2:
	mov eax,dword ptr [ebp+0xE8]
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x18],esi
	cmp esi,ebx
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block4:
	mov dword ptr [esp+0x44],ebx
	cmp esi,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xDC]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],ebx
	call ecx
	cmp eax,ebx
	jge Block8

 Block7:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call eax

 Block9:
	cmp dword ptr [esp+0x4C],ebx
	je Block11

 Block10:
	mov dword ptr [_D_DWCOUNTER],1
	jmp Block12

 Block11:
	mov ecx,dword ptr [_D_DWCOUNTER]
	mov eax,0xBA2E8BA3
	mul ecx
	shr edx,4
	imul edx,0x16
	mov eax,ecx
	sub eax,edx
	inc ecx
	mov dword ptr [_D_DWCOUNTER],ecx
	test eax,eax
	jne Block69

 Block12:
	mov dword ptr [esp+0x4C],ebx
	mov eax,dword ptr [ebp+0xE8]
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x44],6
	cmp esi,ebx
	je Block5

 Block13:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	mov dword ptr [esp+0x50],esi
	call edx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xDC]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block15

 Block14:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block15:
	test dword ptr [esp+0x14],0xFF000000
	je Block38

 Block16:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea edx,[esp+0x1C]
	mov bl,7
	push edx
	mov byte ptr [esp+0x48],bl
	call edi
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
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x48],8
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x44],9
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
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],8
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov esi,8
	mov byte ptr [esp+0x44],bl
	cmp word ptr [esp+0x1C],si
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [esp+0x44],6
	cmp word ptr [esp+0x2C],si
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov eax,dword ptr [ebp+0xE8]
	mov edi,dword ptr [ebp+0xE8]
	lea esi,[ebp+0xD8]
	push eax
	mov ecx,esi
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAt
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,esi
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddHead_Position
	mov eax,dword ptr [ebp+0xBC]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block37

 Block33:
	lea ebx,[ebx]

 Block34:
	lea edx,[esp+0x14]
	push edx
	call ZList<CMob::AFFECTEDSKILLENTRY>::GetNext
	add esp,4
	cmp dword ptr [eax+8],edi
	jne Block36

 Block35:
	mov ecx,dword ptr [ebp+0xE4]
	mov dword ptr [eax+8],ecx

 Block36:
	cmp dword ptr [esp+0x14],0
	jne Block34

 Block37:
	mov eax,dword ptr [ebp+0xE8]
	push eax
	lea ecx,[esp+0x50]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov esi,dword ptr [esp+0x4C]
	xor ebx,ebx

 Block38:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push edx
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x48],0xA
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov bl,0xB
	mov byte ptr [esp+0x44],bl
	test esi,esi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x44],0xC
	test ecx,ecx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	test eax,eax
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block48:
	mov edi,8
	mov byte ptr [esp+0x44],0xA
	cmp word ptr [esp+0x2C],di
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov byte ptr [esp+0x44],6
	cmp word ptr [esp+0x1C],di
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block56:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
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
	lea eax,[esp+0x2C]
	mov bl,0xD
	push eax
	mov byte ptr [esp+0x48],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
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
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0x20
	mov ecx,esi
	mov byte ptr [esp+0x50],0xE
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [esp+0x44],bl
	cmp word ptr [esp+0x2C],di
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [esp+0x44],6
	cmp word ptr [esp+0x1C],di
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call eax

 Block69:
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
// CMob::GetHitPointHeightRand
__SUB_CLASS_THIS(00242310, __thiscall, 47493,  CMob, tagPOINT*, tagPOINT*, NakedParam<tagRECT>) {
__asm {

 Block0:
	sub esp,0x20
	push edi
	mov edi,dword ptr [esp+0x28]
	push 0
	lea eax,[esp+0x18]
	push eax
	mov dword ptr [edi],0
	mov dword ptr [edi+4],0
	call CMob::GetBodyRect
	test eax,eax
	je Block13

 Block1:
	mov eax,dword ptr [esp+0x1C]
	cmp dword ptr [esp+0x2C],eax
	jl Block3

 Block2:
	dec eax
	mov dword ptr [esp+0x2C],eax
	jmp Block5

 Block3:
	mov eax,dword ptr [esp+0x14]
	cmp dword ptr [esp+0x34],eax
	jg Block5

 Block4:
	inc eax
	mov dword ptr [esp+0x34],eax

 Block5:
	mov eax,dword ptr [esp+0x20]
	cmp dword ptr [esp+0x30],eax
	jl Block7

 Block6:
	dec eax
	mov dword ptr [esp+0x30],eax
	jmp Block9

 Block7:
	mov eax,dword ptr [esp+0x18]
	cmp dword ptr [esp+0x38],eax
	jg Block9

 Block8:
	inc eax
	mov dword ptr [esp+0x38],eax

 Block9:
	push esi
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x10]
	push eax
	call IntersectRect
	mov edx,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+8]
	lea eax,[edx+ecx]
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [edi],eax
	mov eax,dword ptr [esp+0x14]
	sub eax,dword ptr [esp+0xC]
	cdq
	xor eax,edx
	sub eax,edx
	cdq
	sub eax,edx
	mov esi,eax
	sar esi,1
	je Block11

 Block10:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div esi
	mov ecx,edx
	jmp Block12

 Block11:
	xor ecx,ecx

 Block12:
	mov eax,esi
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0xC]
	sar eax,1
	sub ecx,eax
	mov eax,dword ptr [esp+0x14]
	add eax,edx
	cdq
	sub eax,edx
	lea ecx,[ecx+ecx*2]
	sar eax,1
	add ecx,eax
	mov dword ptr [edi+4],ecx
	pop esi

 Block13:
	mov eax,edi
	pop edi
	add esp,0x20
	ret 0x14
}
}
// CMob::LoadEffectLayer
_SUB_EXCEPTION_HANDLER(2458E0)
__SUB_CLASS_THIS(002458E0, __thiscall, 47526,  CMob, _x_com_ptr<IWzGr2DLayer>*, _x_com_ptr<IWzGr2DLayer>*, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2458E0
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
	mov dword ptr [ebp-0x24],ecx
	xor edi,edi
	mov dword ptr [ebp-0x3C],edi
	mov dword ptr [ebp-0x18],edi
	lea eax,[ebp-0x28]
	push 0xE2D
	push eax
	mov dword ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0xC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp-0x18]
	push edx
	mov byte ptr [ebp-4],2
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x28]
	add esp,0xC
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea eax,[ebp-0x28]
	push 0x3D4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],3
	cmp eax,edi
	je Block4

 Block3:
	mov ecx,dword ptr [eax-4]
	jmp Block5

 Block4:
	xor ecx,ecx

 Block5:
	push ecx
	push eax
	lea ecx,[ebp-0x18]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x5C]
	push ecx
	call esi
	lea edx,[ebp-0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea eax,[ebp-0x6C]
	push eax
	mov byte ptr [ebp-4],4
	call esi
	lea ecx,[ebp-0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov edx,dword ptr [ebp-0x18]
	push edi
	push edi
	push 0xFFFFFFFF
	push edx
	push edi
	mov bl,5
	push edi
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp-0x18]
	mov esi,esp
	push edi
	push edi
	lea eax,[ebp-0x5C]
	push eax
	lea ecx,[ebp-0x6C]
	push ecx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edx
	push edi
	push edi
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],6
	cmp dword ptr [_D_G_RM],edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea eax,[ebp-0x8C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x28]
	mov dword ptr [ebp-0x28],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov esi,8
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x8C],si
	jne Block19

 Block17:
	mov eax,dword ptr [ebp-0x84]
	xor ecx,ecx
	mov word ptr [ebp-0x8C],cx
	cmp eax,edi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[ebp-0x8C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x6C],si
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	cmp eax,edi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x5C],si
	jne Block27

 Block25:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	cmp eax,edi
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
	mov ebx,dword ptr [ebp-0x28]
	cmp ebx,edi
	sete al
	test al,al
	jne Block82

 Block29:
	cmp ebx,edi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x1C]
	push edx
	push ebx
	mov dword ptr [ebp-0x1C],edi
	call eax
	cmp eax,edi
	jge Block33

 Block32:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block33:
	cmp dword ptr [ebp-0x1C],edi
	je Block82

 Block34:
	mov ecx,dword ptr [ebp-0x24]
	mov eax,dword ptr [ecx+0x104]
	mov dword ptr [ebp-0x1C],eax
	cmp eax,edi
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block36:
	push 1
	lea ecx,[ebp-0x7C]
	push ecx
	mov ecx,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0xC
	xor esi,esi
	call CMob::GetBodyRect
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x3E9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x38]
	mov byte ptr [ebp-4],0xD
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xE
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0xC
	jne Block39

 Block37:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0xAB1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],0xF
	mov ecx,ebx
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x10
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x38],8
	mov dword ptr [ebp-0x14],eax
	mov byte ptr [ebp-4],0xC
	jne Block43

 Block41:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov eax,dword ptr [ebp-0x14]
	sub eax,1
	je Block54

 Block45:
	sub eax,1
	je Block49

 Block46:
	sub eax,1
	jne Block55

 Block47:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,dword ptr [ebp-0x24]
	call CMob::GetVecCtrl
	push eax
	lea ecx,[ebp-0x1C]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block55

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block55

 Block49:
	lea ecx,[ebp-0x7C]
	push ecx
	call IsRectEmpty
	test eax,eax
	je Block53

 Block50:
	mov eax,dword ptr [ebp-0x1C]
	mov esi,dword ptr [ebp+8]
	mov dword ptr [esi],0
	mov dword ptr [ebp-0x3C],1
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block52

 Block51:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block52:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],1
	call edx
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	jmp Block85

 Block53:
	mov esi,dword ptr [ebp-0x24]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x10]
	add esi,4
	lea ecx,[ebp-0x44]
	push ecx
	mov ecx,esi
	call edx
	mov edx,dword ptr [ebp-0x7C]
	mov ecx,eax
	mov eax,dword ptr [ebp-0x74]
	add eax,edx
	cdq
	sub eax,edx
	mov edi,eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	sar edi,1
	sub edi,dword ptr [ecx]
	lea ecx,[ebp-0x30]
	push ecx
	mov ecx,esi
	call edx
	mov edx,dword ptr [ebp-0x70]
	mov ecx,eax
	mov eax,dword ptr [ebp-0x78]
	add eax,edx
	cdq
	sub eax,edx
	mov esi,eax
	sar esi,1
	sub esi,dword ptr [ecx+4]
	jmp Block55

 Block54:
	mov ecx,dword ptr [ebp-0x24]
	add ecx,0x10C
	push ecx
	lea ecx,[ebp-0x1C]
	call _x_com_ptr<IWzVector2D>::op_assign_copy

 Block55:
	mov edx,dword ptr [ebp-0x24]
	mov eax,dword ptr [edx+0x4E8]
	push 0
	push 0xFF
	push 3
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block57:
	push esi
	push edi
	mov edi,dword ptr [ebp-0x1C]
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block59

 Block58:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block59:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebx
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp-0x14],esp
	push ebx
	call eax
	lea ecx,[ebp-0x20]
	push ecx
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	sete cl
	test cl,cl
	sete cl
	mov byte ptr [ebp-4],0x11
	test cl,cl
	je Block75

 Block60:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x4C]
	push edx
	call esi
	lea eax,[ebp-0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],0x12
	call esi
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	mov ecx,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],0x13
	test ecx,ecx
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea eax,[ebp-0x4C]
	push eax
	lea edx,[ebp-0x38]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x38],si
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x4C],si
	jne Block73

 Block71:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block74:
	mov eax,dword ptr [ebp-0x20]

 Block75:
	mov esi,dword ptr [ebp+8]
	mov dword ptr [esi],eax
	test eax,eax
	je Block77

 Block76:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov eax,dword ptr [ebp-0x20]

 Block77:
	mov dword ptr [ebp-0x3C],1
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	mov byte ptr [ebp-4],0xB
	test edi,edi
	je Block81

 Block80:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block81:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [ebp-4],1
	call eax
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	jmp Block85

 Block82:
	mov esi,dword ptr [ebp+8]
	mov dword ptr [esi],edi
	mov dword ptr [ebp-0x3C],1
	mov byte ptr [ebp-4],1
	cmp ebx,edi
	je Block84

 Block83:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block84:
	mov eax,dword ptr [ebp-0x18]
	cmp eax,edi

 Block85:
	mov byte ptr [ebp-4],0
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block87:
	mov eax,esi
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
	ret 8
}
}
// CMob::UpdateAffectedSkillList
_SUB_EXCEPTION_HANDLER(24A500)
__SUB_CLASS_THIS(0024A500, __thiscall, 47486,  CMob, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24A500
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
	mov ebx,ecx
	xor ebp,ebp
	push 0x64
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24], 0
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x2C],0x1F
	mov dword ptr [esp+0x30],ebp
	call ZMap<long, int, long>::_CalcAutoGrow
	mov dword ptr [esp+0x60],ebp
	cmp dword ptr [ebx+0x1B0],ebp
	je Block2

 Block1:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebx+0x1B4]
	push ecx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block2:
	cmp dword ptr [ebx+0x1C0],ebp
	je Block4

 Block3:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[ebx+0x1C4]
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block4:
	cmp dword ptr [ebx+0x1D0],ebp
	je Block6

 Block5:
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[ebx+0x1D4]
	push edx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block6:
	cmp dword ptr [ebx+0x1E0],ebp
	je Block8

 Block7:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebx+0x1E4]
	push ecx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block8:
	cmp dword ptr [ebx+0x1F0],ebp
	je Block10

 Block9:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[ebx+0x1F4]
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block10:
	cmp dword ptr [ebx+0x200],ebp
	je Block12

 Block11:
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[ebx+0x204]
	push edx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block12:
	cmp dword ptr [ebx+0x210],ebp
	je Block14

 Block13:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebx+0x214]
	push ecx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block14:
	cmp dword ptr [ebx+0x234],ebp
	je Block17

 Block15:
	cmp dword ptr [ebx+0x238],0x1EA1CC0
	lea eax,[ebx+0x238]
	je Block17

 Block16:
	lea edx,[esp+0x1C]
	push edx
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block17:
	cmp dword ptr [ebx+0x21C],ebp
	je Block19

 Block18:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebx+0x220]
	push ecx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block19:
	cmp dword ptr [ebx+0x228],ebp
	je Block21

 Block20:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[ebx+0x22C]
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block21:
	cmp dword ptr [ebx+0x244],ebp
	je Block23

 Block22:
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[ebx+0x248]
	push edx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block23:
	cmp dword ptr [ebx+0x274],ebp
	je Block25

 Block24:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebx+0x278]
	push ecx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block25:
	cmp dword ptr [ebx+0x280],ebp
	je Block27

 Block26:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[ebx+0x284]
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block27:
	cmp dword ptr [ebx+0x25C],ebp
	je Block29

 Block28:
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[ebx+0x260]
	push edx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block29:
	cmp dword ptr [ebx+0x268],ebp
	je Block31

 Block30:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebx+0x26C]
	push ecx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block31:
	cmp dword ptr [ebx+0x298],ebp
	je Block33

 Block32:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[ebx+0x29C]
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block33:
	cmp dword ptr [ebx+0x2A8],ebp
	je Block35

 Block34:
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[ebx+0x2AC]
	push edx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block35:
	cmp dword ptr [ebx+0x2B4],ebp
	je Block37

 Block36:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebx+0x2B8]
	push ecx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block37:
	cmp dword ptr [ebx+0x2CC],ebp
	je Block39

 Block38:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[ebx+0x2D0]
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block39:
	cmp dword ptr [ebx+0x2D8],ebp
	je Block41

 Block40:
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[ebx+0x2DC]
	push edx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block41:
	cmp dword ptr [ebx+0x2E8],ebp
	je Block43

 Block42:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebx+0x2EC]
	push ecx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block43:
	cmp dword ptr [ebx+0x2D8],ebp
	je Block45

 Block44:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[ebx+0x2DC]
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block45:
	cmp dword ptr [ebx+0x2F8],ebp
	je Block47

 Block46:
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[ebx+0x2FC]
	push edx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block47:
	cmp dword ptr [ebx+0x304],ebp
	je Block49

 Block48:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebx+0x308]
	push ecx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block49:
	cmp dword ptr [ebx+0x310],ebp
	je Block51

 Block50:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[ebx+0x314]
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block51:
	cmp dword ptr [ebx+0x28C],ebp
	je Block53

 Block52:
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[ebx+0x290]
	push edx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block53:
	cmp dword ptr [ebx+0x328],ebp
	je Block55

 Block54:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebx+0x32C]
	push ecx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block55:
	cmp dword ptr [ebx+0x338],ebp
	je Block57

 Block56:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[ebx+0x33C]
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block57:
	cmp dword ptr [ebx+0x34C],ebp
	je Block59

 Block58:
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[ebx+0x350]
	push edx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block59:
	cmp dword ptr [ebx+0x358],ebp
	je Block61

 Block60:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebx+0x35C]
	push ecx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block61:
	cmp dword ptr [ebx+0x364],ebp
	je Block63

 Block62:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[ebx+0x368]
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block63:
	cmp dword ptr [ebx+0x2C0],ebp
	je Block66

 Block64:
	cmp dword ptr [ebx+0x2C4],0x1F962ED
	lea eax,[ebx+0x2C4]
	jne Block66

 Block65:
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block66:
	cmp dword ptr [ebx+0x374],ebp
	je Block69

 Block67:
	cmp dword ptr [ebx+0x378],ebp
	lea eax,[ebx+0x378]
	je Block69

 Block68:
	lea edx,[esp+0x1C]
	push edx
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block69:
	mov eax,dword ptr [ebx+0x3B8]
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block73

 Block70:
	lea eax,[esp+0x1C]
	push eax
	call ZList<MobStat::BURNED_INFO>::GetNext
	mov ecx,8
	mov esi,eax
	lea edi,[esp+0x3C]
	add esp,4
	rep movsd
	cmp dword ptr [esp+0x54],ebp
	je Block72

 Block71:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x40]
	push edx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x20],ebp
	call ZMap<long, int, long>::Insert

 Block72:
	cmp dword ptr [esp+0x1C],ebp
	jne Block70

 Block73:
	cmp dword ptr [ebx+0x38C],ebp
	je Block75

 Block74:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebx+0x390]
	push ecx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<long, int, long>::Insert

 Block75:
	mov eax,dword ptr [ebx+0xBC]
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block85

 Block76:
	lea edx,[esp+0x14]
	push edx
	mov edi,eax
	call ZList<CMob::AFFECTEDSKILLENTRY>::GetNext
	add esp,4
	mov esi,eax
	push ebp
	push esi
	lea ecx,[esp+0x28]
	call ZMap<long, int, long>::GetAt
	test eax,eax
	je Block78

 Block77:
	push esi
	lea ecx,[esp+0x24]
	call ZMap<long, int, long>::RemoveKey
	jmp Block84

 Block78:
	mov eax,dword ptr [esi]
	push eax
	call is_guided_bullet_skill
	add esp,4
	test eax,eax
	jne Block84

 Block79:
	mov eax,dword ptr [esi+8]
	cmp eax,ebp
	je Block83

 Block80:
	push eax
	cmp dword ptr [esi+0xC],ebp
	je Block82

 Block81:
	lea ecx,[ebx+0xEC]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAt
	dec dword ptr [esp+0x18]
	jmp Block83

 Block82:
	lea ecx,[ebx+0xD8]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAt
	dec dword ptr [esp+0x1C]

 Block83:
	push edi
	lea ecx,[ebx+0xB0]
	call ZList<CMob::AFFECTEDSKILLENTRY>::RemoveAt

 Block84:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block76

 Block85:
	call get_update_time
	lea ecx,[esp+0x20]
	mov edi,eax
	call ZMap<long, int, long>::GetHeadPosition
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block90

 Block86:
	mov ecx,dword ptr [esp+0x68]
	add edi,ecx
	nop

 Block87:
	lea ecx,[ebx+0xB0]
	call ZList<CMob::AFFECTEDSKILLENTRY>::AddTail_
	push ebp
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x28]
	mov esi,eax
	call ZMap<long, int, long>::GetNext
	mov eax,dword ptr [eax]
	mov dword ptr [esi],eax
	mov dword ptr [esi+4],edi
	cmp edi,ebp
	jne Block89

 Block88:
	mov dword ptr [esi+4],1

 Block89:
	mov dword ptr [esi+8],ebp
	cmp dword ptr [esp+0x14],ebp
	jne Block87

 Block90:
	cmp dword ptr [esp+0x18],ebp
	je Block92

 Block91:
	mov ecx,ebx
	call CMob::SetAffectedLayerPos

 Block92:
	cmp dword ptr [esp+0x1C],ebp
	je Block94

 Block93:
	push 1
	mov ecx,ebx
	call CMob::ShiftAffectedSkillAnimation

 Block94:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	mov dword ptr [esp+0x20], 0
	call ZMap<long, int, long>::RemoveAll
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 4
}
}
// CMob::GetVecCtrl
__SUB_CLASS_THIS0(0023C680, __thiscall, 47499,  CMob, _x_com_ptr<IWzVector2D>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x104]
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
// CMob::GetMobStat
__SUB_CLASS_THIS0(00239F60, __thiscall, 47479,  CMob, MobStat*) {
__asm {

 Block0:
	lea eax,[ecx+0x188]
	ret
}
}
// CMob::GetActionDelay
__SUB_CLASS_THIS(0023E970, __thiscall, 47554,  CMob, long, long) {
__asm {

 Block0:
	push edi
	mov edi,dword ptr [esp+8]
	cmp edi,0x2A
	ja Block10

 Block1:
	mov edx,dword ptr [ecx+0x458]
	lea eax,[edi+edi*4]
	cmp dword ptr [edx+eax*4+8],0
	push esi
	lea esi,[edx+eax*4]
	jne Block7

 Block2:
	cmp dword ptr [ecx+0x28C],0
	je Block4

 Block3:
	mov eax,dword ptr [ecx+0x178]
	test eax,eax
	jne Block5

 Block4:
	mov eax,dword ptr [ecx+0x174]

 Block5:
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	add esp,8
	push esi
	push edi
	push eax
	call CActionMan::LoadMobAction
	cmp dword ptr [esi+8],0
	jne Block7

 Block6:
	pop esi
	xor eax,eax
	pop edi
	ret 4

 Block7:
	mov esi,dword ptr [esi+0xC]
	xor edi,edi
	mov dword ptr [esp+0xC],esi
	test esi,esi
	je Block9

 Block8:
	lea edx,[esp+0xC]
	push edx
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::GetNext
	mov eax,dword ptr [eax+4]
	add edi,dword ptr [eax+0x50]
	add esp,4
	cmp dword ptr [esp+0xC],0
	jne Block8

 Block9:
	pop esi
	mov eax,edi
	pop edi
	ret 4

 Block10:
	xor eax,eax
	pop edi
	ret 4
}
}
// CMob::OnEffectByItem
__SUB_CLASS_THIS(0023CD40, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov ebx,eax
	call CInPacket::Decode1
	movzx eax,al
	push eax
	push ebx
	mov ecx,esi
	call CMob::ShowEffectByItem
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CMob::DAMAGEINFO::_ZtlSecureGet_bCriticalAttack
__SUB_CLASS0(0023A880, __fastcall, 49844,  CMob::DAMAGEINFO, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x50]
	push eax
	add ecx,0x48
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	ret
}
}
// CMob::TryPickUpDrop
__SUB_CLASS_THIS(0023EA60, __thiscall, 47486,  CMob, void, long) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,ecx
	call CMob::IsActive
	test eax,eax
	je Block5

 Block1:
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x178]
	push ecx
	add eax,0x170
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block5

 Block2:
	mov edx,dword ptr [esi+0x158]
	push ebp
	push edi
	push edx
	lea edi,[esi+0x150]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ebp,dword ptr [esp+0x20]
	mov ecx,ebp
	sub ecx,eax
	add esp,8
	cmp ecx,0x96
	jl Block4

 Block3:
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[esi+4]
	push ebx
	mov ebx,dword ptr [TSingleton<CDropPool>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call edx
	push eax
	push esi
	mov ecx,ebx
	call CDropPool::TryPickUpDropByMob
	mov edx,edi
	mov ecx,ebp
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x158],eax
	pop ebx

 Block4:
	pop edi
	pop ebp

 Block5:
	pop esi
	add esp,8
	ret 4
}
}
// CMob::DAMAGEINFO::_ZtlSecureGet_bChase
__SUB_CLASS0(0023A8C0, __fastcall, 49844,  CMob::DAMAGEINFO, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x68]
	push eax
	add ecx,0x60
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	ret
}
}
// CMob::_ZtlSecurePut_m_tLastHitExpire
__SUB_CLASS(0023E670, __fastcall, 47542,  CMob, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x3F4]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x3FC],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMob::IsImmovable
__SUB_CLASS_THIS0(0023C640, __thiscall, 47475,  CMob, int32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x21C],0
	jne Block5

 Block1:
	cmp dword ptr [ecx+0x228],0
	jne Block5

 Block2:
	cmp dword ptr [ecx+0x298],0
	jne Block5

 Block3:
	mov eax,dword ptr [ecx+0x47C]
	push eax
	add ecx,0x474
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	cmp eax,4
	je Block5

 Block4:
	xor eax,eax
	ret

 Block5:
	mov eax,1
	ret
}
}
// CMob::SendDropPickUpRequest
_SUB_EXCEPTION_HANDLER(244450)
__SUB_CLASS_THIS(00244450, __thiscall, 47487,  CMob, int32_t, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_244450
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	call get_update_time
	mov ebx,dword ptr [esp+0x34]
	mov esi,eax
	mov eax,dword ptr [edi+0x4E0]
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block7

 Block1:
	lea eax,[esp+0x10]
	push eax
	call ZList<CMob::DROPPICKUP>::GetNext
	add esp,4
	cmp dword ptr [eax],ebx
	je Block4

 Block2:
	cmp dword ptr [esp+0x10],0
	jne Block1

 Block3:
	jmp Block7

 Block4:
	mov eax,dword ptr [eax+4]
	sub esi,eax
	cmp esi,0xBB8
	jge Block6

 Block5:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block6:
	cmp dword ptr [esp+0x10],0
	mov esi,eax
	jne Block8

 Block7:
	lea ecx,[edi+0x4D4]
	call ZList<CMob::DROPPICKUP>::AddTail_
	mov dword ptr [eax],ebx
	mov dword ptr [eax+4],esi

 Block8:
	push 0xE5
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [edi+0x170]
	push ecx
	add edi,0x168
	push edi
	mov dword ptr [esp+0x34],0
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	push ebx
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4
}
}
// CMob::OnAffected
__SUB_CLASS_THIS(00244400, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov esi,ecx
	call get_update_time
	mov ebx,dword ptr [esp+0x14]
	mov ecx,ebx
	mov edi,eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov ebp,eax
	call CInPacket::Decode2
	lea ecx,[esi+0xB0]
	movsx ebx,ax
	call ZList<CMob::AFFECTEDSKILLENTRY>::AddTail_
	lea ecx,[ebx+edi]
	pop edi
	pop esi
	xor edx,edx
	mov dword ptr [eax],ebp
	pop ebp
	mov dword ptr [eax+4],ecx
	pop ebx
	mov dword ptr [eax+8],edx
	cmp ecx,edx
	jne Block2

 Block1:
	mov dword ptr [eax+4],1

 Block2:
	ret 4
}
}
// CMob::IsNoFlip
__SUB_CLASS_THIS0(0023A6B0, __thiscall, 47475,  CMob, int32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x28C],0
	jne Block3

 Block1:
	mov eax,dword ptr [ecx+0x174]
	cmp dword ptr [eax+0x1A0],0
	je Block3

 Block2:
	mov eax,1
	ret

 Block3:
	xor eax,eax
	ret
}
}
// CMob::SetBallDestPoint
__SUB_CLASS_THIS(0023A130, __thiscall, 47567,  CMob, tagPOINT*, tagPOINT*, NakedParam<tagPOINT>, NakedParam<tagPOINT>, int32_t, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+8]
	push ebx
	mov ebx,dword ptr [esp+0x14]
	push ebp
	push esi
	push edi
	test edx,edx
	je Block2

 Block1:
	mov esi,eax
	sub esi,ebx
	jmp Block3

 Block2:
	mov esi,ebx
	sub esi,dword ptr [esp+0x18]

 Block3:
	mov edi,dword ptr [esp+0x24]
	mov ebp,dword ptr [esp+0x1C]
	mov ecx,edi
	sub ecx,ebp
	mov dword ptr [esp+0x28],esi
	mov dword ptr [esp+0x20],ecx
	test esi,esi
	jg Block7

 Block4:
	lea ebx,[eax-1]
	test edx,edx
	jne Block6

 Block5:
	lea ebx,[eax+1]

 Block6:
	mov esi,1
	xor ecx,ecx
	mov edi,ebp
	mov dword ptr [esp+0x28],esi
	mov dword ptr [esp+0x20],ecx

 Block7:
	fild dword ptr [esp+0x28]
	fild dword ptr [esp+0x20]
	fdiv st,st(1)
	fabs
	fld qword ptr [__real_3fe3333333333333]
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block11

 Block8:
	test ecx,ecx
	jg Block10

 Block9:
	mov eax,esi
	fstp st(1)
	neg eax
	mov dword ptr [esp+0x28],eax
	fild dword ptr [esp+0x28]

 Block10:
	fmulp st(1),st(0)
	fiadd dword ptr [esp+0x1C]
	call __ftol2_sse
	mov edi,eax
	mov ecx,edi
	sub ecx,ebp
	jmp Block12

 Block11:
	fstp st(0)
	fstp st(0)

 Block12:
	fild dword ptr [esp+0x2C]
	mov edx,ecx
	mov eax,esi
	imul edx,ecx
	fstp qword ptr [esp+0x20]
	imul eax,esi
	add edx,eax
	mov dword ptr [esp+0x28],edx
	fild dword ptr [esp+0x28]
	call __CIsqrt
	fdivr qword ptr [esp+0x20]
	sub ebx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ebx
	fild dword ptr [esp+0x28]
	fmul st,st(1)
	fiadd dword ptr [esp+0x18]
	call __ftol2_sse
	sub edi,ebp
	mov dword ptr [esp+0x28],edi
	fild dword ptr [esp+0x28]
	mov esi,eax
	fmulp st(1),st(0)
	fiadd dword ptr [esp+0x1C]
	call __ftol2_sse
	mov ecx,eax
	mov eax,dword ptr [esp+0x14]
	pop edi
	mov dword ptr [eax],esi
	pop esi
	pop ebp
	mov dword ptr [eax+4],ecx
	pop ebx
	ret 0x1C
}
}
// CMob::IsTargetInAttackRange
_SUB_EXCEPTION_HANDLER(245F50)
__SUB_CLASS_THIS(00245F50, __thiscall, 47509,  CMob, int32_t, long, long*, int32_t*, CMob::TARGETINFO*, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_245F50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1E0
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1F0]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	cmp dword ptr [esi+0x28C],0
	je Block2

 Block1:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block3

 Block2:
	mov eax,dword ptr [esi+0x174]

 Block3:
	cmp dword ptr [eax+0x218],0
	jle Block138

 Block4:
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x1AC]
	push ecx
	add eax,0x1A4
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block138

 Block5:
	mov edx,dword ptr [esi+0x47C]
	push edx
	lea eax,[esi+0x474]
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block138

 Block6:
	mov ecx,esi
	call CMob::IsImmovable
	test eax,eax
	jne Block138

 Block7:
	cmp dword ptr [esi+0x244],eax
	jne Block138

 Block8:
	cmp dword ptr [esi+0x3A4],eax
	jne Block138

 Block9:
	push offset CMob::TARGETINFO::_ctor_default
	push 9
	push 4
	lea ecx,[esp+0xAC]
	push ecx
	call __vector_ctor_iterator
	xor ebx,ebx
	mov ecx,esi
	mov dword ptr [esp+0x14],ebx
	call CMob::IsLeft
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov dword ptr [esp+0x48],eax
	mov eax,dword ptr [ebp+8]
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x3C],ebx
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x44],edi
	cmp eax,4
	ja Block45

 Block10:
	cmp EAX, 0
je Block11
cmp EAX, 1
je Block38
cmp EAX, 2
je Block41
cmp EAX, 3
je Block13
cmp EAX, 4
je Block42


 Block11:
	push 0
	lea edx,[esp+0x2C]
	push edx

 Block12:
	lea ecx,[edi+0x88]
	call CAvatar::GetBodyRect
	mov dword ptr [esp+0x1C],0
	jmp Block45

 Block13:
	mov eax,dword ptr [esi+0x108]
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	mov ebx,dword ptr [eax+0x300]
	test ebx,ebx
	je Block138

 Block17:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	push offset CSummoned::ms_RTTI_CSummoned
	mov ecx,ebx
	call edx
	test eax,eax
	je Block19

 Block18:
	lea eax,[ebx-4]
	mov dword ptr [esp+0x3C],eax
	jmp Block20

 Block19:
	mov dword ptr [esp+0x3C],0

 Block20:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x20]
	push offset CMob::ms_RTTI_CMob
	mov ecx,ebx
	call eax
	test eax,eax
	je Block22

 Block21:
	lea ecx,[ebx-4]
	jmp Block23

 Block22:
	xor ecx,ecx

 Block23:
	mov dword ptr [esp+0x38],ecx
	test edi,edi
	je Block25

 Block24:
	lea eax,[edi+4]
	jmp Block26

 Block25:
	xor eax,eax

 Block26:
	cmp eax,ebx
	jne Block28

 Block27:
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	jmp Block12

 Block28:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block30

 Block29:
	add eax,4
	jmp Block31

 Block30:
	xor eax,eax

 Block31:
	cmp ebx,eax
	jne Block33

 Block32:
	mov ecx,dword ptr [esp+0x3C]
	push 0
	lea edx,[esp+0x2C]
	push edx
	call CSummoned::GetBodyRect
	mov dword ptr [esp+0x1C],1
	jmp Block45

 Block33:
	test ecx,ecx
	je Block35

 Block34:
	lea eax,[ecx+4]
	jmp Block36

 Block35:
	xor eax,eax

 Block36:
	cmp ebx,eax
	jne Block138

 Block37:
	push 0
	lea eax,[esp+0x2C]
	push eax
	call CMob::GetBodyRect
	mov dword ptr [esp+0x1C],2
	jmp Block45

 Block38:
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	mov edi,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	lea ecx,[esi+4]
	lea eax,[esp+0x184]
	push eax
	call edx
	push 0

 Block39:
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	push ecx
	push edx
	mov ecx,edi
	call CMobPool::FindNearestMob
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block138

 Block40:
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,eax
	call CMob::GetBodyRect
	mov dword ptr [esp+0x1C],2
	jmp Block45

 Block41:
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	mov edi,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	lea ecx,[esi+4]
	lea eax,[esp+0x114]
	push eax
	call edx
	push 1
	jmp Block39

 Block42:
	push 0
	lea edx,[esp+0x2C]
	push edx
	mov ecx,esi
	call CMob::GetBodyRect
	lea eax,[esp+0x28]
	push eax
	call IsRectEmpty
	test eax,eax
	je Block44

 Block43:
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	mov eax,1
	lea edi,[esi+4]
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x30],eax
	lea eax,[esp+0x124]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x2C],ebx
	call edx
	mov ebx,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x134]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [ebx]
	push eax
	push ecx
	lea edx,[esp+0x30]
	push edx
	call OffsetRect

 Block44:
	mov dword ptr [esp+0x1C],3

 Block45:
	mov ecx,esi
	call CMob::IsNoFlip
	mov ecx,esi
	mov dword ptr [esp+0x4C],eax
	mov dword ptr [esp+0x40],0
	call CMob::GetCurTemplate
	cmp dword ptr [eax+0x218],0
	jle Block138

 Block46:
	mov ebx,dword ptr [esp+0x40]

 Block47:
	push ebx
	mov ecx,esi
	call CMob::GetCurTemplate
	mov ecx,eax
	call CMobTemplate::GetAttackInfo
	mov edi,eax
	test edi,edi
	je Block128

 Block48:
	cmp dword ptr [edi+0x94],0
	jne Block50

 Block49:
	cmp dword ptr [esi+0x160],0
	jne Block128

 Block50:
	cmp dword ptr [edi+0x10],0
	jne Block128

 Block51:
	mov ecx,esi
	call CMob::_ZtlSecureGet_m_nMP
	cmp dword ptr [edi+0x14],eax
	jg Block128

 Block52:
	cmp dword ptr [esp+0x1C],0
	jne Block54

 Block53:
	mov ecx,dword ptr [esp+0x44]
	add ecx,0x88
	call CAvatar::IsHideMorphed
	test eax,eax
	jne Block128

 Block54:
	cmp dword ptr [edi+0xAC],0
	je Block56

 Block55:
	cmp dword ptr [esi+0x8C],0
	je Block128

 Block56:
	cmp dword ptr [esp+0x1C],0
	jne Block62

 Block57:
	cmp dword ptr [edi+0x1C],0
	jne Block62

 Block58:
	mov ecx,esi
	call CMob::GetMobID
	cmp eax,0x8F7112
	je Block62

 Block59:
	mov ecx,dword ptr [esp+0x44]
	call CUser::IsDarkSight
	test eax,eax
	jne Block128

 Block60:
	mov ecx,dword ptr [esp+0x44]
	call CUser::IsWindWalk
	test eax,eax
	jne Block128

 Block61:
	mov ecx,dword ptr [esp+0x44]
	call CUser::IsSneak
	test eax,eax
	jne Block128

 Block62:
	mov ecx,esi
	call CMob::GetCurTemplate
	mov ecx,eax
	call CMobTemplate::_ZtlSecureGet_bSelfDestruction
	test eax,eax
	je Block64

 Block63:
	mov ecx,esi
	call CMob::GetCurTemplate
	mov eax,dword ptr [eax+0x218]
	dec eax
	cmp ebx,eax
	je Block129

 Block64:
	mov eax,dword ptr [edi+0xC]
	test eax,eax
	jne Block78

 Block65:
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	add esi,4
	lea eax,[esp+0x144]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x10],eax
	lea eax,[esp+0x154]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	lea ebx,[edi+0x2C]
	lea ecx,[esp+0xC4]
	push ebx
	push ecx
	mov dword ptr [esp+0x28],eax
	call SECRECT::ToRect
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x28]
	add esp,8
	push edx
	push ecx
	push eax
	call OffsetRect
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x17C]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x10],eax
	lea eax,[esp+0xE4]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	lea ecx,[esp+0xD4]
	push ebx
	push ecx
	mov dword ptr [esp+0x28],eax
	call SECRECT::ToRect
	mov edx,dword ptr [eax+8]
	mov ecx,dword ptr [eax]
	neg edx
	neg ecx
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	add esp,8
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x10]
	push ecx
	push edx
	push eax
	call OffsetRect
	cmp dword ptr [esp+0x48],0
	lea eax,[esp+0x28]
	lea edx,[esp+0x90]
	push eax
	je Block70

 Block66:
	lea ecx,[esp+0xC8]
	push ecx
	push edx
	call IntersectRect
	test eax,eax
	jne Block74

 Block67:
	cmp dword ptr [esp+0x4C],eax
	jne Block128

 Block68:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0xD8]
	push ecx
	lea edx,[esp+0x98]
	push edx
	call IntersectRect
	test eax,eax
	je Block128

 Block69:
	xor eax,eax
	jmp Block75

 Block70:
	lea ecx,[esp+0xD8]
	push ecx
	push edx
	call IntersectRect
	test eax,eax
	je Block72

 Block71:
	xor eax,eax
	jmp Block75

 Block72:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0xC8]
	push ecx
	lea edx,[esp+0x98]
	push edx
	call IntersectRect

 Block73:
	test eax,eax
	je Block128

 Block74:
	mov eax,1

 Block75:
	cmp dword ptr [esp+0x4C],0
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [esp+edx*4+0x1B8],ecx
	jne Block103

 Block76:
	test eax,eax
	jne Block103

 Block77:
	xor ecx,ecx
	jmp Block104

 Block78:
	cmp eax,3
	je Block88

 Block79:
	cmp eax,4
	je Block88

 Block80:
	mov esi,dword ptr [esp+0x18]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x10]
	add esi,4
	lea ecx,[esp+0x14C]
	push ecx
	mov ecx,esi
	call edx
	mov ebx,dword ptr [eax]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	add ebx,dword ptr [edi+0x2C]
	lea ecx,[esp+0xFC]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	add eax,dword ptr [edi+0x30]
	lea ecx,[esp+0x18C]
	mov dword ptr [esp+0x8C],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	sub eax,dword ptr [edi+0x2C]
	lea ecx,[esp+0x10C]
	mov dword ptr [esp+0x50],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	add eax,dword ptr [edi+0x30]
	cmp dword ptr [esp+0x48],0
	mov dword ptr [esp+0x54],eax
	lea eax,[esp+0x28]
	push eax
	push 4
	je Block85

 Block81:
	mov ecx,dword ptr [esp+0x94]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov edx,ebx
	sub edx,dword ptr [edi+0x34]
	push edx
	push ebx
	push ebx
	call CMob::IsRectIntersectWithTrapezoid
	test eax,eax
	jne Block74

 Block82:
	cmp dword ptr [esp+0x4C],eax
	jne Block128

 Block83:
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [edi+0x34]
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x54]
	push 4
	push ecx
	mov ecx,dword ptr [esp+0x24]
	add edx,eax
	push edx
	push eax
	push eax
	call CMob::IsRectIntersectWithTrapezoid
	test eax,eax
	je Block128

 Block84:
	xor eax,eax
	jmp Block75

 Block85:
	mov eax,dword ptr [esp+0x58]
	mov ecx,dword ptr [esp+0x5C]
	mov edx,dword ptr [edi+0x34]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	add edx,eax
	push edx
	push eax
	push eax
	call CMob::IsRectIntersectWithTrapezoid
	test eax,eax
	je Block87

 Block86:
	xor eax,eax
	jmp Block75

 Block87:
	mov ecx,dword ptr [esp+0x8C]
	lea eax,[esp+0x28]
	push eax
	push 4
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov edx,ebx
	sub edx,dword ptr [edi+0x34]
	push edx
	push ebx
	push ebx
	call CMob::IsRectIntersectWithTrapezoid
	jmp Block73

 Block88:
	call get_update_time
	sub eax,dword ptr [esi+0x15C]
	cmp eax,0x9C4
	jl Block128

 Block89:
	lea eax,[edi+0x3C]
	push eax
	lea ecx,[esp+0x64]
	push ecx
	call SECRECT::ToRect
	mov esi,dword ptr [esp+0x20]
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea ebx,[esi+4]
	add esp,8
	lea eax,[esp+0x15C]
	push eax
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax+4]
	add dword ptr [esp+0x64],eax
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x11C]
	push eax
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax+4]
	add dword ptr [esp+0x6C],eax
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x164]
	push eax
	mov ecx,ebx
	call edx
	mov ecx,esi
	mov dword ptr [esp+0x10],eax
	call CMob::IsLeft
	neg eax
	mov ecx,dword ptr [esp+0x10]
	sbb eax,eax
	and eax,2
	mov edx,dword ptr [ebx]
	dec eax
	imul eax,dword ptr [edi+0x38]
	imul eax,dword ptr [edi+0x2C]
	add eax,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x60],eax
	lea eax,[esp+0x12C]
	push eax
	mov ecx,ebx
	call edx
	mov ecx,esi
	mov dword ptr [esp+0x10],eax
	call CMob::IsLeft
	mov ecx,dword ptr [edi+0x30]
	neg eax
	sbb eax,eax
	add ecx,dword ptr [edi+0x2C]
	mov edx,dword ptr [esp+0x10]
	and eax,2
	dec eax
	imul eax,ecx
	imul eax,dword ptr [edi+0x38]
	add eax,dword ptr [edx]
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x68],eax
	lea eax,[esp+0x28]
	push eax
	push ecx
	lea edx,[esp+0x1E4]
	push edx
	call IntersectRect
	test eax,eax
	je Block128

 Block90:
	xor esi,esi
	mov dword ptr [esp+0x24],esi
	mov eax,dword ptr [edi+0x34]
	mov ecx,dword ptr [edi+0x30]
	mov edx,dword ptr [edi+0x2C]
	push eax
	push ecx
	push edx
	lea eax,[esp+0x30]
	push eax
	mov dword ptr [esp+0x208],esi
	call get_random_unique_array
	add esp,0x10
	mov dword ptr [esp+0x10],esi
	mov dword ptr [esp+0x20],esi

 Block91:
	mov eax,dword ptr [esp+0x24]
	cmp eax,esi
	je Block100

 Block92:
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,dword ptr [eax-4]
	jae Block100

 Block93:
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x16C]
	push eax
	mov ecx,ebx
	call edx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x58],eax
	mov eax,dword ptr [edi+0x38]
	mov dword ptr [esp+0x70],eax
	call CMob::IsLeft
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x24]
	mov ecx,dword ptr [ecx+edx*4]
	mov esi,eax
	mov eax,dword ptr [esp+0x70]
	neg esi
	sbb esi,esi
	imul ecx,eax
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x58]
	and esi,2
	sar eax,1
	dec esi
	add ecx,eax
	imul esi,ecx
	add esi,dword ptr [edx]
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esp+0x74],offset ZList<long>::`vftable'
	mov dword ptr [esp+0x7C],eax
	mov dword ptr [esp+0x80],eax
	mov dword ptr [esp+0x84],eax
	mov eax,dword ptr [edi+0xC]
	mov byte ptr [esp+0x1F8],1
	cmp eax,3
	jne Block95

 Block94:
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[esp+0x74]
	mov dword ptr [esp+0x58],eax
	push ecx
	lea eax,[esp+0x140]
	push eax
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	add eax,0x64
	push eax
	lea eax,[esp+0x17C]
	push eax
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esp+0x60]
	sub eax,0x64
	push eax
	push esi
	call CWvsPhysicalSpace2D::GetFootholdRange
	jmp Block97

 Block95:
	cmp eax,4
	jne Block99

 Block96:
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0xEC]
	push eax
	mov ecx,ebx
	call edx
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x74]
	call ZList<long>::AddTail_
	mov dword ptr [eax],esi

 Block97:
	cmp dword ptr [esp+0x7C],0
	je Block99

 Block98:
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax+ecx*4]
	sub ecx,dword ptr [edi+0x2C]
	mov edx,1
	shl edx,cl
	or dword ptr [esp+0x10],edx

 Block99:
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x1F8],0
	int 3// TODO: 	mov dword ptr [esp+0x74],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	inc dword ptr [esp+0x20]
	xor esi,esi
	jmp Block91

 Block100:
	cmp dword ptr [esp+0x10],esi
	je Block102

 Block101:
	mov eax,dword ptr [esp+0x40]
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esp+esi*4+0x1B8],eax
	call CMob::IsLeft
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [esp+esi*4+0x194],eax
	mov dword ptr [esp+esi*4+0xA0],ecx
	inc esi
	mov dword ptr [esp+0x14],esi

 Block102:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x1F8],0xFFFFFFFF
	call ZArray<long>::RemoveAll
	jmp Block128

 Block103:
	mov ecx,1

 Block104:
	mov dword ptr [esp+edx*4+0x194],ecx
	mov ecx,dword ptr [edi+0xC]
	cmp ecx,1
	jne Block113

 Block105:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	jl Block127

 Block106:
	cmp eax,ecx
	jle Block109

 Block107:
	cmp eax,2
	jne Block127

 Block108:
	mov ecx,dword ptr [esp+0x38]
	call CMob::GetMobID
	mov edx,dword ptr [esp+0x14]
	add eax,eax
	add eax,eax
	or eax,3
	mov dword ptr [esp+edx*4+0xA0],eax
	jmp Block127

 Block109:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block111

 Block110:
	mov eax,dword ptr [eax+0xC0]
	push eax
	call get_summon_idx_from_skill_id
	add esp,4
	jmp Block112

 Block111:
	xor eax,eax

 Block112:
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [ecx+0x19E8]
	add edx,edx
	add edx,edx
	or edx,eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+eax*4+0xA0],edx
	jmp Block127

 Block113:
	cmp ecx,2
	jne Block126

 Block114:
	test eax,eax
	je Block116

 Block115:
	mov ecx,dword ptr [edi+0x2C]
	mov dword ptr [esp+0x10],ecx
	jmp Block117

 Block116:
	mov eax,dword ptr [edi+0x2C]
	neg eax
	mov dword ptr [esp+0x10],eax

 Block117:
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0xF4]
	push eax
	mov ecx,esi
	call edx
	mov ebx,dword ptr [eax]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	add ebx,dword ptr [esp+0x10]
	lea ecx,[esp+0x104]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	add eax,dword ptr [edi+0x30]
	cmp dword ptr [esp+0x48],0
	mov dword ptr [esp+0x58],ebx
	mov esi,eax
	je Block119

 Block118:
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [esp+0x28]
	add eax,ecx
	cdq
	sub eax,edx
	sar eax,1
	add ecx,0xFFFFFFF6
	cmp eax,ecx
	jmp Block120

 Block119:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x30]
	lea eax,[edx+ecx]
	cdq
	sub eax,edx
	sar eax,1
	add ecx,0xA
	cmp ecx,eax

 Block120:
	jl Block122

 Block121:
	mov ecx,eax

 Block122:
	mov edi,dword ptr [esp+0x2C]
	lea eax,[edi+0xA]
	cmp esi,eax
	jl Block125

 Block123:
	mov edx,dword ptr [esp+0x34]
	lea eax,[edx-0xA]
	cmp esi,eax
	jg Block125

 Block124:
	lea eax,[edx+edi]
	cdq
	sub eax,edx
	sar eax,1

 Block125:
	mov edx,dword ptr [esp+0x14]
	mov word ptr [esp+edx*4+0xA0],cx
	mov word ptr [esp+edx*4+0xA2],ax
	jmp Block127

 Block126:
	mov dword ptr [esp+edx*4+0xA0],0

 Block127:
	inc dword ptr [esp+0x14]

 Block128:
	mov ebx,dword ptr [esp+0x40]
	mov esi,dword ptr [esp+0x18]
	inc ebx
	mov ecx,esi
	mov dword ptr [esp+0x40],ebx
	call CMob::GetCurTemplate
	cmp ebx,dword ptr [eax+0x218]
	jl Block47

 Block129:
	cmp dword ptr [esp+0x14],0
	je Block138

 Block130:
	mov ebx,dword ptr [ebp+0xC]
	test ebx,ebx
	je Block137

 Block131:
	mov edi,dword ptr [ebp+0x10]
	test edi,edi
	je Block137

 Block132:
	mov esi,dword ptr [ebp+0x14]
	test esi,esi
	je Block137

 Block133:
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block135

 Block134:
	dec eax
	jmp Block136

 Block135:
	mov eax,dword ptr [esp+0x14]
	push 0
	push eax
	call get_rand_0
	add esp,8

 Block136:
	mov ecx,dword ptr [esp+eax*4+0x1B8]
	mov edx,dword ptr [esp+eax*4+0x194]
	mov eax,dword ptr [esp+eax*4+0xA0]
	add ecx,0xD
	mov dword ptr [ebx],ecx
	mov dword ptr [edi],edx
	mov dword ptr [esi],eax

 Block137:
	mov eax,1
	mov ecx,dword ptr [esp+0x1F0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x14

 Block138:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1F0]
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
// CMob::UpdateEscortStopActRepeat
__SUB_CLASS_THIS0(0024C730, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x5BC],0
	je Block5

 Block1:
	cmp dword ptr [esi+0x5C0],0
	je Block5

 Block2:
	mov eax,dword ptr [esi+0x174]
	cmp dword ptr [eax+0x234],1
	jne Block5

 Block3:
	call get_update_time
	cmp dword ptr [esi+0x5BC],eax
	jge Block6

 Block4:
	mov dword ptr [esi+0x5BC],0
	mov dword ptr [esi+0x5C0],0

 Block5:
	pop esi
	ret

 Block6:
	mov ecx,esi
	call CMob::IsOnPlayingOneTimeAction
	test eax,eax
	jne Block5

 Block7:
	mov edx,dword ptr [esi+0x5C0]
	cmp edx,0xFFFFFFFF
	je Block5

 Block8:
	mov ecx,esi
	call CMob::_ZtlSecurePut_m_nOneTimeAction
	mov ecx,esi
	pop esi
	jmp  CMob::PrepareActionLayer
}
}
// CMob::DAMAGEINFO::_ZtlSecureGet_dwCharacterId
__SUB_CLASS0(0023A7E0, __fastcall, 49842,  CMob::DAMAGEINFO, unsigned long) {
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
// CMob::AddDamageInfo
_SUB_EXCEPTION_HANDLER(253A10)
__SUB_CLASS_THIS(00253A10, __thiscall, 47501,  CMob, void, unsigned long, long, long, long, int32_t, long, int32_t, long, NakedParam<tagPOINT>, NakedParam<Ztl_bstr_t>, int32_t, long, long, long, long, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_253A10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
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
	mov dword ptr [ebp-0x14],edi
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov dword ptr [ebp-4],0
	test eax,eax
	je Block11

 Block1:
	mov esi,dword ptr [ebp+8]
	cmp dword ptr [eax+0x19E8],esi
	jne Block3

 Block2:
	call timeGetTime
	mov dword ptr [edi+0x504],eax
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]

 Block3:
	test eax,eax
	je Block11

 Block4:
	cmp dword ptr [eax+0x19E8],esi
	jne Block11

 Block5:
	mov eax,dword ptr [edi+0x174]
	test eax,eax
	je Block11

 Block6:
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	cmp eax,0x8F71AF
	jne Block8

 Block7:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::IsGL5thEventCakeTeam
	jmp Block10

 Block8:
	cmp eax,0x8F71B0
	jne Block11

 Block9:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::IsGL5thEventPieTeam

 Block10:
	test eax,eax
	jne Block78

 Block11:
	lea ecx,[edi+0x4AC]
	call ZList<CMob::DAMAGEINFO>::AddTail_
	mov ebx,dword ptr [ebp+0xC]
	mov esi,eax
	cmp ebx,0x4DD5CC
	je Block39

 Block12:
	cmp ebx,0xE66C4B
	je Block39

 Block13:
	cmp ebx,0x423D0A
	je Block39

 Block14:
	cmp ebx,0x4E23EF
	je Block38

 Block15:
	cmp ebx,0xE6935C
	je Block38

 Block16:
	cmp ebx,0x406849
	je Block38

 Block17:
	cmp ebx,0x40684F
	je Block38

 Block18:
	cmp ebx,0x1F962E9
	je Block38

 Block19:
	cmp ebx,0x1E84BE8
	je Block38

 Block20:
	cmp ebx,0x1E9D288
	je Block38

 Block21:
	cmp ebx,0x1E9F99A
	je Block38

 Block22:
	cmp ebx,0x1EA20AA
	je Block38

 Block23:
	cmp ebx,0x21612AB
	je Block38

 Block24:
	cmp ebx,0x1524D7A
	jne Block28

 Block25:
	mov eax,dword ptr [ebp+0x24]
	cmp eax,4
	mov dword ptr [ebp-0x2C],0
	mov dword ptr [ebp-0x28],0x3C
	mov dword ptr [ebp-0x24],0xB4
	mov dword ptr [ebp-0x20],0x1A4
	jl Block27

 Block26:
	mov edx,dword ptr [ebp+0x10]
	xor eax,eax
	add edx,eax
	mov ecx,esi
	call CMob::DAMAGEINFO::_ZtlSecurePut_tDelayedProcess
	jmp Block41

 Block27:
	mov eax,dword ptr [ebp+eax*4-0x2C]
	mov edx,dword ptr [ebp+0x10]
	add edx,eax
	mov ecx,esi
	call CMob::DAMAGEINFO::_ZtlSecurePut_tDelayedProcess
	jmp Block41

 Block28:
	cmp ebx,0x2F785E
	je Block36

 Block29:
	cmp ebx,0x30FEFE
	je Block36

 Block30:
	cmp ebx,0xC80ED9
	je Block36

 Block31:
	cmp ebx,0x1F78E28
	je Block36

 Block32:
	cmp ebx,0x1F93BD9
	je Block36

 Block33:
	cmp ebx,0x217C05C
	je Block36

 Block34:
	cmp ebx,0x217E76D
	je Block36

 Block35:
	mov edx,0x78
	cmp ebx,0x217E775
	jne Block37

 Block36:
	mov edx,0x3C

 Block37:
	imul edx,dword ptr [ebp+0x24]
	add edx,dword ptr [ebp+0x10]
	mov ecx,esi
	call CMob::DAMAGEINFO::_ZtlSecurePut_tDelayedProcess
	jmp Block41

 Block38:
	mov ecx,dword ptr [ebp+0x10]
	jmp Block40

 Block39:
	xor ecx,ecx

 Block40:
	mov edx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+8],eax

 Block41:
	mov ecx,dword ptr [ebp+8]
	lea edx,[esi+0xC]
	call _ZtlSecureTearHelper<unsigned long>::call
	lea edx,[esi+0x18]
	mov ecx,ebx
	mov dword ptr [esi+0x14],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x14]
	lea edx,[esi+0x24]
	mov dword ptr [esi+0x20],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x18]
	lea edx,[esi+0x30]
	mov dword ptr [esi+0x2C],eax
	call _ZtlSecureTearHelper<int>::call
	mov ecx,dword ptr [ebp+0x1C]
	lea edx,[esi+0x3C]
	mov dword ptr [esi+0x38],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x20]
	lea edx,[esi+0x48]
	mov dword ptr [esi+0x44],eax
	call _ZtlSecureTearHelper<int>::call
	mov ecx,dword ptr [ebp+0x24]
	lea edx,[esi+0x54]
	mov dword ptr [esi+0x50],eax
	call _ZtlSecureTearHelper<long>::call
	add edi,4
	mov dword ptr [esi+0x5C],eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	sub dword ptr [ebp+0x28],eax
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x10]
	lea eax,[ebp-0x24]
	push eax
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [ebp+0x34]
	sub dword ptr [ebp+0x2C],eax
	lea edx,[esi+0x60]
	call _ZtlSecureTearHelper<int>::call
	mov ecx,dword ptr [ebp+0x3C]
	lea edx,[esi+0x78]
	mov dword ptr [esi+0x68],eax
	call _ZtlSecureTearHelper<long>::call
	mov edi,dword ptr [ebp+0x38]
	mov dword ptr [esi+0x80],eax
	cmp edi,1
	jne Block44

 Block42:
	mov ecx,dword ptr [ebp-0x14]
	call CMob::GetPushedDamage
	cmp dword ptr [ebp+0x1C],eax
	jge Block44

 Block43:
	xor ecx,ecx
	jmp Block45

 Block44:
	mov ecx,edi

 Block45:
	lea edx,[esi+0x6C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x40]
	lea edx,[esi+0x84]
	mov dword ptr [esi+0x74],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x44]
	lea edx,[esi+0x90]
	mov dword ptr [esi+0x8C],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x48]
	lea edx,[esi+0x9C]
	mov dword ptr [esi+0x98],eax
	call _ZtlSecureTearHelper<int>::call
	cmp dword ptr [ebp+0x1C],0
	mov dword ptr [esi+0xA4],eax
	mov ecx,dword ptr [ebp+0x30]
	jle Block79

 Block46:
	test ecx,ecx
	je Block81

 Block47:
	cmp dword ptr [ecx],0
	je Block79

 Block48:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block79

 Block49:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block79

 Block50:
	mov eax,0x7FFFFFFF
	cmp dword ptr [ebp+0x28],eax
	je Block80

 Block51:
	cmp dword ptr [ebp+0x2C],eax
	je Block80

 Block52:
	cmp ebx,0x4E23EC
	je Block58

 Block53:
	cmp ebx,0x4E23EF
	je Block58

 Block54:
	cmp ebx,0xE6935C
	je Block58

 Block55:
	cmp ebx,0xD72A0E
	je Block58

 Block56:
	cmp ebx,0xA98A5E
	je Block58

 Block57:
	cmp ebx,0x1524D7A
	jne Block59

 Block58:
	cmp dword ptr [ebp+0x24],0
	jne Block74

 Block59:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x3C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x4C]
	mov byte ptr [ebp-4],1
	call Ztl_variant_t::_ctor_1
	push 0
	lea ecx,[ebp-0x3C]
	push ecx
	lea edx,[ebp-0x4C]
	push edx
	lea eax,[ebp-0x18]
	push 0x1673
	push eax
	mov byte ptr [ebp-4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[ebp-0x1C]
	push ecx
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],3
	call Ztl_bstr_t::op_add_0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push eax
	call Ztl_bstr_t::_ctor_4
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],5
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	lea edx,[ebp-0x5C]
	mov byte ptr [ebp-4],4
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	push eax
	mov byte ptr [ebp-4],6
	call get_int32
	mov edi,eax
	add esp,8
	neg edi
	sbb edi,edi
	lea ecx,[ebp-0x5C]
	neg edi
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1C]
	call _xbstr_t::~_xbstr_t
	lea ecx,[ebp-0x18]
	call Ztl_bstr_t::~Ztl_bstr_t
	lea ecx,[ebp-0x4C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x3C]
	mov byte ptr [ebp-4],0
	call Ztl_variant_t::~Ztl_variant_t
	test edi,edi
	je Block63

 Block62:
	cmp dword ptr [ebp+0x24],0
	jne Block73

 Block63:
	mov ecx,dword ptr [ebp-0x14]
	add ecx,0x4C0
	call ZList<CMob::HITEFFECT>::AddTail_
	push offset _D_VTMISSING
	lea ecx,[ebp-0x4C]
	mov edi,eax
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x3C]
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::_ctor_1
	push 0
	lea eax,[ebp-0x4C]
	push eax
	lea ecx,[ebp-0x3C]
	push ecx
	lea edx,[ebp-0x20]
	push 0x665
	push edx
	mov byte ptr [ebp-4],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea eax,[ebp-0x14]
	push eax
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],9
	call Ztl_bstr_t::op_add_0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x18],esp
	push eax
	call Ztl_bstr_t::_ctor_4
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xB
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	lea ecx,[ebp-0x5C]
	push ecx
	mov byte ptr [ebp-4],0xA
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov dword ptr [ebp-0x18],eax
	mov edx,dword ptr [esi+8]
	push edx
	push esi
	mov byte ptr [ebp-4],0xC
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp-0x1C],eax
	mov eax,dword ptr [ebp-0x18]
	add esp,8
	push eax
	call get_int32
	mov ecx,dword ptr [ebp-0x1C]
	sub ecx,eax
	mov dword ptr [edi],ecx
	add esp,8
	lea ecx,[ebp-0x5C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x14]
	call _xbstr_t::~_xbstr_t
	lea ecx,[ebp-0x20]
	call Ztl_bstr_t::~Ztl_bstr_t
	lea ecx,[ebp-0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x4C]
	mov byte ptr [ebp-4],0
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [ebp+0x18]
	mov dword ptr [edi+4],ebx
	mov dword ptr [edi+8],ecx
	cmp ebx,0x127A7A
	je Block67

 Block66:
	cmp ebx,0x12A191
	jne Block68

 Block67:
	mov edx,dword ptr [ebp+8]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push edx
	call CUserPool::GetUser
	mov edx,dword ptr [eax]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,eax
	call SecondaryStat::_ZtlSecureGet_rWeaponCharge_
	push eax
	call get_element_by_charged_skillid
	mov dword ptr [ebp-0x20],eax
	add esp,4
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp-0x20]
	mov eax,esp
	push eax
	push ecx
	call _Int2StrW
	add esp,8
	push eax
	lea ecx,[ebp-0x14]
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x14]
	push edx
	push offset _S___9
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],0xD
	call Ztl_bstr_t::op_add_assign
	mov ecx,eax
	call _xbstr_t::operator+=
	lea ecx,[ebp-0x14]
	mov byte ptr [ebp-4],0
	call _xbstr_t::~_xbstr_t

 Block68:
	push ebx
	call is_delayed_hit_sfx_needed_skill
	add esp,4
	test eax,eax
	je Block71

 Block69:
	cmp dword ptr [ebp+0x24],0
	jne Block71

 Block70:
	mov eax,1
	jmp Block72

 Block71:
	xor eax,eax

 Block72:
	mov dword ptr [edi+0xC],eax
	lea eax,[ebp+0x30]
	push eax
	lea ecx,[edi+0x10]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [ebp+0x28]
	mov dword ptr [edi+0x14],ecx
	mov edx,dword ptr [ebp+0x2C]
	mov dword ptr [edi+0x18],edx

 Block73:
	mov ecx,dword ptr [ebp+0x30]

 Block74:
	cmp ebx,0x205D2F
	je Block77

 Block75:
	cmp ebx,0x21E3CF
	je Block77

 Block76:
	cmp ebx,0xB8CC9B
	jne Block79

 Block77:
	mov eax,dword ptr [esi+8]
	push eax
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add eax,0x168
	add esp,8
	mov edx,esi
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+8],eax

 Block78:
	mov ecx,dword ptr [ebp+0x30]

 Block79:
	test ecx,ecx
	je Block81

 Block80:
	call _xbstr_t::Data_t::Release

 Block81:
	lea esp,[ebp-0x6C]
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
	ret 0x44
}
}
// CMob::OnRevive
_SUB_EXCEPTION_HANDLER(240AA0)
__SUB_CLASS_THIS0(00240AA0, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_240AA0
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
	lea edx,[esi+0x474]
	xor ecx,ecx
	call _ZtlSecureTearHelper<int>::call
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esi+0x47C],eax
	lea eax,[esp+0x20]
	push eax
	call edi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x10]
	push edx
	mov dword ptr [esp+0x3C],0
	call edi
	lea eax,[esp+0x10]
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
	mov ecx,dword ptr [esi+0x4E8]
	mov byte ptr [esp+0x38],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0xC]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x38],2
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x20]
	push eax
	lea edx,[esp+0x14]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x38],1
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x10],di
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x10]
	push ecx
	call esi

 Block14:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp word ptr [esp+0x20],di
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block18

 Block16:
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

 Block17:
	lea eax,[esp+0x20]
	push eax
	call esi

 Block18:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret
}
}
// CMob::OnEscortFullPath
_SUB_EXCEPTION_HANDLER(243D90)
__SUB_CLASS_THIS(00243D90, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_243D90
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
	mov ebx,ecx
	call CMob::IsActive
	test eax,eax
	je Block80

 Block1:
	cmp dword ptr [ebx+0x108],0
	sete al
	test al,al
	jne Block80

 Block2:
	mov edi,dword ptr [esp+0x30]
	mov ecx,edi
	call CInPacket::Decode4
	mov ebp,eax
	mov eax,dword ptr [ebx+0x108]
	test eax,eax
	je Block4

 Block3:
	lea esi,[eax-0xC]
	jmp Block5

 Block4:
	xor esi,esi

 Block5:
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0x784],eax
	mov eax,dword ptr [ebx+0x108]
	test eax,eax
	je Block7

 Block6:
	lea esi,[eax-0xC]
	jmp Block8

 Block7:
	xor esi,esi

 Block8:
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0x788],eax
	mov eax,dword ptr [ebx+0x108]
	xor esi,esi
	cmp eax,esi
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	mov dword ptr [eax+0x78C],esi
	mov eax,dword ptr [ebx+0x108]
	cmp eax,esi
	je Block13

 Block12:
	lea esi,[eax-0xC]

 Block13:
	mov eax,dword ptr [ebx+4]
	mov edx,dword ptr [eax+0x18]
	lea ecx,[ebx+4]
	call edx
	mov dword ptr [esi+0x790],eax
	mov eax,dword ptr [ebx+0x108]
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	lea ecx,[eax+0x780]
	call ZArray<CVecCtrlMob::EscortDest>::RemoveAll
	mov eax,dword ptr [ebx+0x108]
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	lea ecx,[esp+0x30]
	push ecx
	push ebp
	lea ecx,[eax+0x780]
	call ZArray<CVecCtrlMob::EscortDest>::_Alloc
	test ebp,ebp
	jle Block67

 Block20:
	xor edi,edi
	mov dword ptr [esp+0x14],ebp

 Block21:
	mov eax,dword ptr [ebx+0x108]
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	jmp Block24

 Block23:
	xor eax,eax

 Block24:
	mov esi,dword ptr [eax+0x780]
	mov ebp,dword ptr [esp+0x30]
	mov ecx,ebp
	add esi,edi
	call CInPacket::Decode4
	mov dword ptr [esi],eax
	mov eax,dword ptr [ebx+0x108]
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	jmp Block27

 Block26:
	xor eax,eax

 Block27:
	mov esi,dword ptr [eax+0x780]
	mov ecx,ebp
	add esi,edi
	call CInPacket::Decode4
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [ebx+0x108]
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	jmp Block30

 Block29:
	xor eax,eax

 Block30:
	mov esi,dword ptr [eax+0x780]
	mov ecx,ebp
	add esi,edi
	call CInPacket::Decode4
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [ebx+0x108]
	xor ebp,ebp
	cmp eax,ebp
	je Block32

 Block31:
	lea ecx,[eax-0xC]
	jmp Block33

 Block32:
	xor ecx,ecx

 Block33:
	mov edx,dword ptr [ecx+0x780]
	cmp dword ptr [edx+edi+8],1
	jne Block37

 Block34:
	cmp eax,ebp
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	mov eax,dword ptr [eax+0x780]
	mov dword ptr [eax+edi+0xC],ebp
	jmp Block65

 Block36:
	xor eax,eax
	mov eax,dword ptr [eax+0x780]
	mov dword ptr [eax+edi+0xC],ebp
	jmp Block65

 Block37:
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x28],ebp
	cmp eax,ebp
	je Block39

 Block38:
	lea ecx,[eax-0xC]
	jmp Block40

 Block39:
	xor ecx,ecx

 Block40:
	mov ecx,dword ptr [ecx+0x780]
	add ecx,edi
	cmp eax,ebp
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	jmp Block43

 Block42:
	xor eax,eax

 Block43:
	mov eax,dword ptr [eax+0x780]
	mov ecx,dword ptr [ecx+4]
	mov edx,dword ptr [eax+edi]
	push 1
	push 0x7FFFFFFF
	push ebp
	add eax,edi
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push edx
	call CWvsPhysicalSpace2D::GetFootholdUnderneath
	mov esi,eax
	cmp esi,ebp
	je Block45

 Block44:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block45:
	mov eax,dword ptr [ebx+0x108]
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebp
	je Block49

 Block46:
	mov ecx,dword ptr [esi+0x30]
	cmp eax,ebp
	je Block48

 Block47:
	mov edx,dword ptr [eax+0x774]
	add eax,0xFFFFFFF4
	mov dword ptr [edx+edi+0xC],ecx
	jmp Block53

 Block48:
	xor eax,eax
	mov edx,dword ptr [eax+0x780]
	mov dword ptr [edx+edi+0xC],ecx
	jmp Block53

 Block49:
	cmp eax,ebp
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	jmp Block52

 Block51:
	xor eax,eax

 Block52:
	mov ebp,dword ptr [eax+0x780]
	mov eax,dword ptr [ebx+4]
	mov edx,dword ptr [eax+0x18]
	lea ecx,[ebx+4]
	add ebp,edi
	call edx
	mov dword ptr [ebp+0xC],eax

 Block53:
	mov eax,dword ptr [ebx+0x108]
	test eax,eax
	je Block55

 Block54:
	lea ecx,[eax-0xC]
	jmp Block56

 Block55:
	xor ecx,ecx

 Block56:
	mov ecx,dword ptr [ecx+0x780]
	cmp dword ptr [ecx+edi+8],2
	jne Block61

 Block57:
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	jmp Block60

 Block59:
	xor eax,eax

 Block60:
	mov ebp,dword ptr [eax+0x780]
	mov ecx,dword ptr [esp+0x30]
	add ebp,edi
	call CInPacket::Decode4
	mov dword ptr [ebp+0x10],eax

 Block61:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test esi,esi
	je Block65

 Block62:
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block64

 Block63:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block64:
	mov dword ptr [esp+0x1C],0

 Block65:
	add edi,0x14
	sub dword ptr [esp+0x14],1
	jne Block21

 Block66:
	mov edi,dword ptr [esp+0x30]

 Block67:
	mov eax,dword ptr [ebx+0x108]
	test eax,eax
	je Block69

 Block68:
	lea esi,[eax-0xC]
	jmp Block70

 Block69:
	xor esi,esi

 Block70:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x798],eax
	call CInPacket::Decode1
	test al,al
	je Block75

 Block71:
	mov ecx,edi
	call CInPacket::Decode4
	mov edi,eax
	mov eax,dword ptr [ebx+0x108]
	test eax,eax
	je Block73

 Block72:
	lea esi,[eax-0xC]
	jmp Block74

 Block73:
	xor esi,esi

 Block74:
	call get_update_time
	add eax,edi
	mov edi,dword ptr [esp+0x30]
	mov dword ptr [esi+0x75C],eax
	mov dword ptr [esi+0x760],1

 Block75:
	mov ecx,edi
	call CInPacket::Decode1
	test al,al
	je Block80

 Block76:
	mov eax,dword ptr [ebx+0x108]
	test eax,eax
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	jmp Block79

 Block78:
	xor eax,eax

 Block79:
	mov dword ptr [eax+0x75C],0
	mov dword ptr [eax+0x760],1

 Block80:
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
// CMob::GetMobID
__SUB_CLASS_THIS0(0023C5B0, __thiscall, 47481,  CMob, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x170]
	push eax
	add ecx,0x168
	push ecx
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	ret
}
}
// CMob::MoveAction2RawAction
// 63AA5C
static uint8_t _SUB_23A9C0_LOOKUP_TABLE_0[16] = {
0, 1, 2, 6, 6, 3, 6, 4, 6, 6, 6, 6, 6, 6, 6, 5, 
};
__SUB_CLASS_THIS(0023A9C0, __thiscall, 47555,  CMob, long, long, long*) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [esp+4]
	test edx,edx
	je Block2

 Block1:
	push esi
	mov esi,eax
	and esi,1
	mov dword ptr [edx],esi
	pop esi

 Block2:
	sar eax,1
	dec eax
	cmp eax,0xF
	ja Block10

 Block3:
	movzx eax,byte ptr [eax+_SUB_23A9C0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block5
cmp EAX, 2
je Block6
cmp EAX, 3
je Block7
cmp EAX, 4
je Block9
cmp EAX, 5
je Block8
cmp EAX, 6
je Block10


 Block4:
	xor eax,eax
	ret 8

 Block5:
	mov eax,1
	ret 8

 Block6:
	mov eax,2
	ret 8

 Block7:
	mov eax,3
	ret 8

 Block8:
	mov eax,0x27
	ret 8

 Block9:
	mov eax,4
	ret 8

 Block10:
	mov eax,dword ptr [ecx+0x174]
	mov ecx,dword ptr [eax+0x48]
	push ecx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	xor edx,edx
	add esp,8
	cmp eax,4
	sete dl
	lea edx,[edx+edx+1]
	mov eax,edx
	ret 8
}
}
// CMob::MobBullet::ProcessAttack
_SUB_EXCEPTION_HANDLER(24C7A0)
__SUB_CLASS_THIS(0024C7A0, __thiscall, 50167,  CMob::MobBullet, void, CMob*, CUserLocal*, NakedParam<tagRECT>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24C7A0
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
	mov esi,ecx
	lea eax,[esp+0x14]
	push eax
	call CBullet::GetLayer
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esp+0x88],0
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x84],1
	test edi,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov edx,dword ptr [esp+0x20]
	sub esp,0x10
	mov eax,esp
	mov ecx,dword ptr [edi]
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x38]
	push 0
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	push 0
	mov dword ptr [eax+0xC],edx
	lea eax,[esp+0x34]
	push eax
	mov eax,dword ptr [ecx+0x8C]
	lea edx,[esp+0x34]
	push edx
	push 0
	push 0
	push 0
	push 0
	push edi
	call eax
	mov ebx,eax
	test ebx,ebx
	jge Block6

 Block5:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push ebx
	call _com_issue_errorex

 Block6:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x84],0
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	test ebx,ebx
	jl Block18

 Block11:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x18]
	push eax
	push ecx
	lea edx,[esp+0x9C]
	push edx
	call PtInRect
	mov edi,dword ptr [esp+0x90]
	mov ebx,dword ptr [esp+0x8C]
	test eax,eax
	je Block13

 Block12:
	mov edx,dword ptr [esi+0x40]
	mov eax,dword ptr [edi]
	mov eax,dword ptr [eax+0x48]
	xor ecx,ecx
	cmp dword ptr [esi+0x38],ecx
	push 1
	push 1
	sete cl
	push 0
	lea ecx,[ecx+ecx-1]
	push ecx
	push edx
	push ebx
	push 0
	push 0
	push 0
	push 0
	mov ecx,edi
	call eax

 Block13:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x34],ecx
	inc ecx
	mov dword ptr [esp+0x3C],ecx
	push 2
	lea ecx,[esp+0x24]
	push ecx
	mov dword ptr [esp+0x38],eax
	lea edx,[esp+0x38]
	inc eax
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x44],eax
	call CUserLocal::FindHitSummonedInRect
	mov ebp,eax
	xor edi,edi
	test ebp,ebp
	jle Block15

 Block14:
	mov ecx,dword ptr [esi+0x40]
	xor eax,eax
	cmp dword ptr [esi+0x38],eax
	sete al
	lea eax,[eax+eax-1]
	push eax
	push ecx
	mov ecx,dword ptr [esp+edi*4+0x28]
	push ebx
	push 0
	push 0
	push 0
	call CSummoned::SetDamaged
	inc edi
	cmp edi,ebp
	jl Block14

 Block15:
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	push 1
	push 1
	push 0
	push 0
	push 0
	push 0
	push 0xF
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x50]
	push eax
	call CMobPool::FindHitMobInRect
	mov ebp,eax
	xor edi,edi
	test ebp,ebp
	jle Block17

 Block16:
	mov edx,dword ptr [esi+0x40]
	xor ecx,ecx
	cmp dword ptr [esi+0x38],ecx
	sete cl
	lea ecx,[ecx+ecx-1]
	push ecx
	mov ecx,dword ptr [esp+edi*4+0x44]
	push edx
	push ebx
	push 0
	push 0
	push 0
	call CMob::SetDamagedByMob
	inc edi
	cmp edi,ebp
	jl Block16

 Block17:
	mov edi,dword ptr [esp+0x14]

 Block18:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x88],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret 0x18
}
}
// CMob::ChaseTarget
__SUB_CLASS_THIS(00242DB0, __thiscall, 47477,  CMob, void, int32_t, IVecCtrlOwner*, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push ecx
	push ebx
	push esi
	push edi
	mov edi,ecx
	mov dword ptr [ebp-4],edi
	call CMob::IsActive
	test eax,eax
	je Block23

 Block1:
	mov ebx,dword ptr [ebp+8]
	test ebx,ebx
	je Block10

 Block2:
	call CMob::IsChaseTargetEscort
	test eax,eax
	je Block5

 Block3:
	mov eax,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	cmp dword ptr [eax+0x5C],0
	je Block5

 Block4:
	cmp dword ptr [edi+0x310],0
	je Block23

 Block5:
	mov ecx,dword ptr [edi+0x174]
	cmp dword ptr [ecx+0x234],1
	jne Block10

 Block6:
	mov eax,dword ptr [edi+0x108]
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	cmp dword ptr [eax+0x760],0
	jne Block23

 Block10:
	lea esi,[edi+0x5A4]
	push ebx
	mov ecx,esi
	call TSecType<int>::SetData
	mov edi,dword ptr [edi+0x108]
	test edi,edi
	je Block12

 Block11:
	lea ebx,[edi-0xC]
	jmp Block13

 Block12:
	xor ebx,ebx

 Block13:
	mov ecx,esi
	lea edi,[ebx+0x734]
	call TSecType<int>::GetData
	push eax
	mov ecx,edi
	call TSecType<int>::SetData
	mov edx,dword ptr [ebp+0x10]
	mov esi,dword ptr [ebp+0xC]
	push edx
	push esi
	mov ecx,edi
	call TSecType<int>::GetData
	push eax
	mov ecx,ebx
	call CVecCtrlMob::ChaseTargetImp
	cmp dword ptr [ebp+8],0
	je Block19

 Block14:
	test esi,esi
	je Block19

 Block15:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	mov ecx,esi
	call edx
	cmp eax,1
	jne Block19

 Block16:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push offset CMob::ms_RTTI_CMob
	mov ecx,esi
	call edx
	test eax,eax
	je Block19

 Block17:
	lea ecx,[esi-4]
	test ecx,ecx
	je Block19

 Block18:
	call CMob::GetMobID
	mov ecx,dword ptr [ebp-4]
	mov dword ptr [ecx+0x5B8],eax

 Block19:
	lea ecx,[ebx+0x740]
	call TSecType<int>::GetData
	test eax,eax
	jne Block21

 Block20:
	xor edx,edx
	cmp dword ptr [ebx+0x300],edx
	mov ecx,edi
	setne dl
	mov esi,edx
	call TSecType<int>::GetData
	cmp esi,eax
	je Block22

 Block21:
	xor eax,eax
	xor esp,eax
	push eax
	ret

 Block22:
	mov ecx,dword ptr [ebp-4]
	call CMob::SetShoeAttr

 Block23:
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CMob::_ZtlSecurePut_m_nOneTimeAction
__SUB_CLASS(0023E630, __fastcall, 47542,  CMob, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x3DC]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x3E4],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMob::OnHit
_SUB_EXCEPTION_HANDLER(253100)
__SUB_CLASS_THIS(00253100, __thiscall, 47520,  CMob, void, unsigned long, long, long, int32_t, long, int32_t, long, int32_t, long, long, long, long, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_253100
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
	mov ebx,ecx
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x34],0
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esp+0x18],edi
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x30]
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
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x30],0

 Block5:
	mov esi,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	mov dword ptr [esp+0x44],0
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x40]
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,edi
	call eax
	sub eax,0x7D0
	neg eax
	sbb eax,eax
	and eax,0xF422F
	add eax,0x1312D11
	push eax
	push ebp
	mov ecx,esi
	call CSkillInfo::GetSkillLevel_0
	mov esi,eax
	mov eax,dword ptr [edi+0x58C]
	push eax
	call get_weapon_type
	mov ecx,dword ptr [edi+0x19E8]
	add esp,4
	cmp dword ptr [esp+0x68],ecx
	jne Block10

 Block6:
	test esi,esi
	jle Block10

 Block7:
	cmp eax,0x2C
	jne Block10

 Block8:
	cmp dword ptr [esp+0x78],0
	jle Block10

 Block9:
	mov ecx,edi
	call CUserLocal::RequestIncCombo

 Block10:
	mov edi,dword ptr [esp+0x88]
	cmp edi,0xB
	je Block16

 Block11:
	cmp dword ptr [ebx+0x31C],0
	je Block25

 Block12:
	mov eax,dword ptr [ebx+0x104]
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	cmp dword ptr [eax+0x1A0],0
	jne Block25

 Block16:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebp
	call CSkillInfo::GetMobTossSkillID
	test eax,eax
	je Block25

 Block17:
	mov eax,dword ptr [ebx+0x174]
	mov ecx,dword ptr [eax+0x6C]
	push ecx
	add eax,0x64
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block25

 Block18:
	mov eax,dword ptr [ebx+0x174]
	mov edx,dword ptr [eax+0x48]
	push edx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,1
	je Block20

 Block19:
	mov eax,dword ptr [ebx+0x174]
	mov ecx,dword ptr [eax+0x48]
	push ecx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,3
	jne Block25

 Block20:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block22

 Block21:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	jne Block23

 Block22:
	xor esi,esi

 Block23:
	cmp dword ptr [esi+0x190],0
	jne Block25

 Block24:
	mov ebp,1
	jmp Block26

 Block25:
	xor ebp,ebp

 Block26:
	cmp edi,3
	je Block28

 Block27:
	mov dword ptr [esp+0x2C],0
	cmp edi,4
	jne Block29

 Block28:
	mov dword ptr [esp+0x2C],1

 Block29:
	mov edi,dword ptr [esp+0x6C]
	cmp edi,0x423D0D
	jne Block31

 Block30:
	cmp dword ptr [esp+0x2C],0
	mov dword ptr [esp+0x1C],1
	jne Block32

 Block31:
	mov dword ptr [esp+0x1C],0

 Block32:
	mov eax,dword ptr [ebx+0x174]
	mov ecx,dword ptr [eax+0x48]
	push ecx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block35

 Block33:
	push edi
	call is_guided_bullet_skill
	add esp,4
	test eax,eax
	je Block50

 Block34:
	mov edx,dword ptr [esp+0x78]
	push edx
	mov ecx,ebx
	call CMob::ShowHitEffect
	jmp Block50

 Block35:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x68]
	cmp ecx,dword ptr [eax+0x19E8]
	jne Block50

 Block36:
	mov edx,dword ptr [ebx+0x124]
	push edx
	lea esi,[ebx+0x11C]
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFE
	je Block38

 Block37:
	mov eax,dword ptr [ebx+0x124]
	push eax
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block50

 Block38:
	mov esi,dword ptr [esp+0x88]
	test esi,esi
	je Block50

 Block39:
	mov ecx,ebx
	call CMob::IsRisingByToss
	test eax,eax
	je Block41

 Block40:
	test ebp,ebp
	je Block50

 Block41:
	mov ecx,dword ptr [ebx+0x3F0]
	push ecx
	lea edx,[ebx+0x3E8]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block49

 Block42:
	cmp edi,0x1F914CD
	je Block49

 Block43:
	cmp edi,0x4E23EF
	je Block49

 Block44:
	cmp edi,0xE6935C
	je Block49

 Block45:
	cmp edi,0xD72A0E
	je Block49

 Block46:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	push eax
	call is_aran_job
	add esp,4
	test eax,eax
	jne Block49

 Block47:
	cmp edi,0x423D0D
	jne Block50

 Block48:
	cmp dword ptr [esp+0x1C],eax
	jne Block69

 Block49:
	mov ecx,dword ptr [esp+0x98]
	mov edx,dword ptr [esp+0x94]
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x98]
	push edx
	mov edx,dword ptr [esp+0x90]
	push ecx
	mov ecx,dword ptr [esp+0x80]
	xor eax,eax
	cmp dword ptr [esp+0x84],eax
	push esi
	push edx
	push eax
	sete al
	push eax
	push ecx
	mov ecx,ebx
	call CMob::GenerateMovePath

 Block50:
	cmp edi,0x31260F
	je Block52

 Block51:
	cmp edi,0x1F962EB
	jne Block53

 Block52:
	mov ecx,1
	jmp Block54

 Block53:
	mov ecx,dword ptr [esp+0x7C]

 Block54:
	cmp edi,0x12A193
	je Block66

 Block55:
	cmp edi,0x4FAA91
	je Block66

 Block56:
	cmp edi,0x1424406
	je Block66

 Block57:
	cmp edi,0x1F914CD
	je Block66

 Block58:
	cmp dword ptr [esp+0x1C],0
	jne Block66

 Block59:
	cmp edi,0x217C059
	je Block64

 Block60:
	cmp edi,0x217C061
	je Block64

 Block61:
	cmp edi,0x217C062
	je Block64

 Block62:
	cmp edi,0x217E774
	je Block64

 Block63:
	xor eax,eax
	jmp Block65

 Block64:
	mov eax,1

 Block65:
	mov edx,dword ptr [esp+0x9C]
	push eax
	xor eax,eax
	cmp edi,0x4E23EC
	sete al
	push edx
	mov edx,dword ptr [esp+0x80]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x90]
	push ecx
	push edx
	mov ecx,ebx
	call CMob::ShowDamage

 Block66:
	cmp edi,0x111AE9
	je Block68

 Block67:
	cmp edi,0x142829
	jne Block69

 Block68:
	mov eax,dword ptr [esp+0x2C]
	push 0
	push eax
	mov ecx,ebx
	call CMob::ShowCatchEffect

 Block69:
	xor eax,eax
	mov dword ptr [esp+0x30],eax
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x68]
	mov dword ptr [esp+0x60],eax
	cmp edx,dword ptr [ecx+0x19E8]
	jne Block74

 Block70:
	push 0x1F93BDB
	lea eax,[esp+0x20]
	push eax
	call CUser::GetSummoned
	mov esi,eax
	mov eax,dword ptr [esi+4]
	mov dword ptr [esp+0x34],1
	test eax,eax
	je Block72

 Block71:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block72:
	mov esi,dword ptr [esi+4]
	mov dword ptr [esp+0x30],esi
	test esi,esi
	je Block74

 Block73:
	mov bl,1
	jmp Block75

 Block74:
	xor bl,bl

 Block75:
	test byte ptr [esp+0x34],1
	mov dword ptr [esp+0x60],0
	je Block78

 Block76:
	cmp dword ptr [esp+0x20],0
	je Block78

 Block77:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CSummoned>::_ReleaseRaw

 Block78:
	test bl,bl
	je Block82

 Block79:
	mov esi,dword ptr [esp+0x30]
	test esi,esi
	je Block81

 Block80:
	mov ecx,dword ptr [esp+0x84]
	push 0
	lea eax,[esi+4]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x24]
	call CMob::ChaseTarget
	jmp Block86

 Block81:
	mov ecx,dword ptr [esp+0x84]
	xor eax,eax
	push eax
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x24]
	call CMob::ChaseTarget
	jmp Block86

 Block82:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block84

 Block83:
	add eax,4
	jmp Block85

 Block84:
	xor eax,eax

 Block85:
	mov edx,dword ptr [esp+0x84]
	mov ecx,dword ptr [esp+0x18]
	push 0
	push eax
	push edx
	call CMob::ChaseTarget
	mov esi,dword ptr [esp+0x30]

 Block86:
	cmp dword ptr [esp+0x6C],0x1F914CD
	jne Block88

 Block87:
	test esi,esi
	jmp Block144

 Block88:
	xor ebp,ebp
	mov dword ptr [esp+0x68],ebp
	mov esi,dword ptr [esp+0x18]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x10]
	add esi,4
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x64],2
	call edx
	mov edi,eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [edi]
	push eax
	push ecx
	call get_sound_volume_by_pos
	mov esi,dword ptr [esp+0x94]
	mov ebx,dword ptr [esp+0x74]
	add esp,8
	mov edi,eax
	test esi,esi
	jle Block101

 Block89:
	cmp ebx,0x3EBA9D
	je Block101

 Block90:
	cmp ebx,0xD7511A
	je Block101

 Block91:
	lea edx,[esp+0x6C]
	push 0xD0B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x70]
	push eax
	mov byte ptr [esp+0x6C],3
	call ZXString16::Format
	mov eax,dword ptr [esp+0x78]
	add esp,0xC
	mov byte ptr [esp+0x60],2
	test eax,eax
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block93:
	cmp dword ptr [esp+0x80],0
	jg Block95

 Block94:
	cmp dword ptr [esp+0x78],0
	jne Block96

 Block95:
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x70]
	call ZXString16::AssignCharStr

 Block96:
	push offset _D_VTMISSING
	lea ecx,[esp+0x38]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x64],4
	call Ztl_variant_t::_ctor_1
	mov ebp,dword ptr [esp+0x68]
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x4C]
	push edx
	push ecx
	mov dword ptr [esp+0x84],esp
	mov ecx,esp
	mov bl,5
	push ebp
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x6C],6
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	lea eax,[esp+0x28]
	mov byte ptr [esp+0x6C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	lea ecx,[esp+0x48]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x60],9
	call Ztl_variant_t::~Ztl_variant_t
	cmp word ptr [esp+0x1C],0
	jne Block100

 Block99:
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x70]
	call ZXString16::AssignCharStr
	mov ebp,dword ptr [esp+0x68]

 Block100:
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x60],2
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block134

 Block101:
	test ebx,ebx
	je Block137

 Block102:
	lea ecx,[esp+0x6C]
	push 0x664
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	push eax
	lea edx,[esp+0x70]
	push edx
	mov byte ptr [esp+0x6C],0xA
	call ZXString16::Format
	mov eax,dword ptr [esp+0x78]
	add esp,0xC
	mov byte ptr [esp+0x60],2
	test eax,eax
	je Block104

 Block103:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block104:
	cmp ebx,0x2F514D
	je Block106

 Block105:
	cmp ebx,0x1F914CF
	jne Block108

 Block106:
	cmp dword ptr [esp+0x80],0
	jg Block113

 Block107:
	cmp dword ptr [esp+0x78],0
	je Block113

 Block108:
	cmp ebx,0x4E23EF
	je Block112

 Block109:
	cmp ebx,0x4E23EC
	je Block112

 Block110:
	cmp ebx,0xE6935C
	je Block112

 Block111:
	cmp ebx,0x1524D7A
	jne Block114

 Block112:
	cmp dword ptr [esp+0x80],0
	jle Block114

 Block113:
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x70]
	call ZXString16::AssignCharStr

 Block114:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x64],0xB
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block118

 Block117:
	push eax
	call _com_issue_error

 Block118:
	mov ebp,dword ptr [esp+0x68]
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov dword ptr [esp+0x84],esp
	mov ecx,esp
	mov bl,0xC
	push ebp
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x6C],0xD
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	lea eax,[esp+0x54]
	mov byte ptr [esp+0x6C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x60],0xF
	cmp word ptr [esp+0x34],bx
	jne Block123

 Block121:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea edx,[esp+0x34]
	push edx
	call esi

 Block124:
	mov byte ptr [esp+0x60],0x10
	cmp word ptr [esp+0x1C],bx
	jne Block127

 Block125:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea ecx,[esp+0x1C]
	push ecx
	call esi

 Block128:
	cmp word ptr [esp+0x48],0
	jne Block130

 Block129:
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x70]
	call ZXString16::AssignCharStr
	mov ebp,dword ptr [esp+0x68]

 Block130:
	mov byte ptr [esp+0x60],2
	cmp word ptr [esp+0x48],bx
	jne Block133

 Block131:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea eax,[esp+0x48]
	push eax
	call esi

 Block134:
	test ebp,ebp
	je Block137

 Block135:
	cmp word ptr [ebp],0
	je Block137

 Block136:
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push edi
	push ebp
	call CSoundMan::PlaySE
	jmp Block141

 Block137:
	mov ecx,dword ptr [esp+0x18]
	cmp dword ptr [ecx+0x28C],0
	je Block139

 Block138:
	mov eax,dword ptr [ecx+0x178]
	test eax,eax
	jne Block140

 Block139:
	mov eax,dword ptr [ecx+0x174]

 Block140:
	mov ecx,dword ptr [eax+0x14]
	push edi
	push 0
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	push eax
	call play_mob_sound
	add esp,0xC

 Block141:
	mov byte ptr [esp+0x60],0
	test ebp,ebp
	je Block143

 Block142:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block143:
	cmp dword ptr [esp+0x30],0

 Block144:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	je Block146

 Block145:
	push 0
	lea ecx,[esp+0x30]
	call ZRef<CSummoned>::_ReleaseRaw

 Block146:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 0x38
}
}
// CMob::IsRectIntersectWithTrapezoid
__SUB_CLASS_THIS(0023B390, __thiscall, 47518,  CMob, int32_t, long, long, long, long, long, const tagRECT&) {
__asm {

 Block0:
	sub esp,0x20
	mov eax,dword ptr [esp+0x24]
	push ebx
	mov ebx,dword ptr [esp+0x30]
	push ebp
	push esi
	mov esi,dword ptr [esp+0x34]
	xor ecx,ecx
	cmp esi,ebx
	setg cl
	push edi
	mov edi,esi
	sub edi,eax
	sub eax,esi
	mov ebp,eax
	mov dword ptr [esp+0x38],ecx
	jmp Block2

 Block1:
	mov ecx,dword ptr [esp+0x38]

 Block2:
	xor eax,eax
	test ecx,ecx
	je Block4

 Block3:
	cmp esi,ebx
	setg al
	jmp Block5

 Block4:
	cmp esi,ebx
	setl al

 Block5:
	test eax,eax
	je Block14

 Block6:
	test ecx,ecx
	je Block10

 Block7:
	mov dword ptr [esp+0x18],esi
	mov eax,ebp
	sub esi,0x14
	add ebp,0x14
	sub edi,0x14
	cmp ebx,esi
	jge Block9

 Block8:
	mov dword ptr [esp+0x10],esi
	jmp Block12

 Block9:
	mov dword ptr [esp+0x10],ebx
	jmp Block12

 Block10:
	mov dword ptr [esp+0x10],esi
	add esi,0x14
	mov eax,edi
	sub ebp,0x14
	add edi,0x14
	cmp esi,ebx
	mov dword ptr [esp+0x18],esi
	jl Block12

 Block11:
	mov dword ptr [esp+0x18],ebx

 Block12:
	cdq
	idiv dword ptr [esp+0x44]
	mov ecx,dword ptr [esp+0x40]
	mov edx,ecx
	sub edx,eax
	lea eax,[eax+ecx+1]
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [esp+0x14],edx
	push ecx
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x20],eax
	push edx
	lea eax,[esp+0x28]
	push eax
	call IntersectRect
	test eax,eax
	je Block1

 Block13:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x20
	ret 0x18

 Block14:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x20
	ret 0x18
}
}
// CMob::IsAbleTargetEscortMob
__SUB_CLASS_THIS(0023B8A0, __thiscall, 47573,  CMob, int32_t, CMob*) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push esi
	mov esi,ecx
	test ebx,ebx
	je Block6

 Block1:
	mov eax,dword ptr [ebx+0x174]
	cmp dword ptr [eax+0x234],1
	jne Block6

 Block2:
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x48]
	push ecx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [esi+0x174]
	mov edx,dword ptr [eax+0x48]
	push edx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,1
	jne Block5

 Block4:
	mov eax,dword ptr [ebx+4]
	mov edx,dword ptr [eax+0x18]
	lea ecx,[ebx+4]
	push ebp
	push edi
	lea edi,[esi+4]
	call edx
	mov ebp,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x18]
	mov ecx,edi
	call edx
	pop edi
	cmp eax,ebp
	pop ebp
	jne Block6

 Block5:
	mov eax,dword ptr [esi+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[esi+4]
	lea edx,[esp+8]
	push edx
	call eax
	mov edx,dword ptr [ebx+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[ebx+4]
	lea eax,[esp+0x10]
	push eax
	call edx
	mov ecx,dword ptr [esp+8]
	sub ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [esp+0xC]
	sub eax,dword ptr [esp+0x14]
	mov edx,ecx
	imul edx,ecx
	mov ecx,eax
	imul ecx,eax
	add edx,ecx
	xor eax,eax
	cmp edx,0x9C40
	pop esi
	setle al
	pop ebx
	add esp,0x10
	ret 4

 Block6:
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 4
}
}
// CMob::GetCurrentAction
__SUB_CLASS_THIS(00249EA0, __thiscall, 47490,  CMob, long, long*) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x3D8]
	push edi
	push eax
	lea ecx,[esi+0x3D0]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x18]
	add esp,8
	push edx
	push eax
	mov ecx,esi
	call CMob::MoveAction2RawAction
	mov ebx,eax
	mov eax,dword ptr [esi+0x3E4]
	push eax
	lea edi,[esi+0x3DC]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jle Block2

 Block1:
	mov ecx,dword ptr [esi+0x3E4]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov ecx,esi
	call CMob::GetFineAction
	pop edi
	pop esi
	pop ebx
	ret 4

 Block2:
	mov eax,ebx
	push eax
	mov ecx,esi
	call CMob::GetFineAction
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CMob::GetHeight
_SUB_EXCEPTION_HANDLER(23C810)
__SUB_CLASS_THIS0(0023C810, __thiscall, 47480,  CMob, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_23C810
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	xor esi,esi
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x14],esi
	mov eax,3
	mov dword ptr [esp+0x30],ebx
	mov word ptr [esp+0x18],ax
	mov dword ptr [esp+0x20],ebx
	mov ecx,dword ptr [ecx+0x4E8]
	mov byte ptr [esp+0x30],1
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov esi,eax
	push eax
	mov dword ptr [esp+0x18],esi
	call edx

 Block4:
	mov eax,dword ptr [esp+0x10]
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],bl
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	cmp esi,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x10]
	push eax
	push esi
	mov dword ptr [esp+0x18],ebx
	call ecx
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	cmp dword ptr [esp+0x10],ebx
	jle Block18

 Block15:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x10]
	push eax
	push esi
	mov dword ptr [esp+0x18],ebx
	call ecx
	cmp eax,ebx
	jge Block17

 Block16:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block17:
	mov edi,dword ptr [esp+0x10]

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call eax
	mov eax,edi
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret
}
}
// CMob::IsChaseTargetEscort
__SUB_CLASS_THIS0(0023B7B0, __thiscall, 47473,  CMob, int32_t) {
__asm {

 Block0:
	call CMob::IsActive
	test eax,eax
	je Block3

 Block1:
	cmp dword ptr [ecx+0x5B8],0
	je Block3

 Block2:
	mov eax,dword ptr [ecx+0x174]
	cmp dword ptr [eax+0x234],1
	jne Block4

 Block3:
	xor eax,eax
	ret

 Block4:
	mov ecx,dword ptr [ecx+0x108]
	test ecx,ecx
	je Block6

 Block5:
	lea eax,[ecx-0xC]
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push esi
	mov esi,dword ptr [eax+0x300]
	test esi,esi
	je Block12

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	mov ecx,esi
	call eax
	cmp eax,1
	jne Block12

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push offset CMob::ms_RTTI_CMob
	mov ecx,esi
	call eax
	test eax,eax
	je Block12

 Block10:
	lea eax,[esi-4]
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax+0x174]
	xor eax,eax
	cmp dword ptr [ecx+0x234],1
	pop esi
	sete al
	ret

 Block12:
	xor eax,eax
	pop esi
	ret
}
}
// CMob::MobBullet::Container::ProcessAttack
__SUB_CLASS_THIS(002503E0, __thiscall, 50186,  CMob::MobBullet::Container, void, CMob*, CUserLocal*, NakedParam<tagRECT>, long) {
__asm {

 Block0:
	sub esp,0x1C
	mov edx,dword ptr [esp+0x24]
	mov eax,ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp],ecx
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [esp+8],ecx
	mov ecx,dword ptr [esp+0x30]
	push esi
	mov dword ptr [esp+8],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [esp+0x14],ecx
	mov ecx,dword ptr [esp+0x3C]
	push edi
	mov dword ptr [esp+0x14],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x20],ecx
	sub esp,0x1C
	mov edi,esp
	mov dword ptr [esp+0x38],edx
	mov ecx,7
	lea esi,[esp+0x24]
	rep movsd
	mov ecx,eax
	call BulletContainer<CMob::MobBullet>::CallUpdate_ProcessT
	pop edi
	pop esi
	add esp,0x1C
	ret 0x1C
}
}
// CMob::SendRequestEscortPath
_SUB_EXCEPTION_HANDLER(2411F0)
__SUB_CLASS_THIS0(002411F0, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2411F0
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
	call CMob::IsActive
	test eax,eax
	je Block2

 Block1:
	call CMob::ClearEscortInfo
	push 0xED
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi+0x170]
	push eax
	add esi,0x168
	push esi
	mov dword ptr [esp+0x28],0
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CMob::DAMAGEINFO::_ZtlSecureGet_nAttackIdx
__SUB_CLASS0(0023A8A0, __fastcall, 49839,  CMob::DAMAGEINFO, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x5C]
	push eax
	add ecx,0x54
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::CreateAngerIndicator
_SUB_EXCEPTION_HANDLER(23CD70)
__SUB_CLASS_THIS0(0023CD70, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_23CD70
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
	cmp dword ptr [edi+0x4F8],ebx
	mov dword ptr [edi+0x90],ebx
	sete al
	cmp al,bl
	je Block44

 Block1:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	mov edx,3
	mov dword ptr [esp+0x50],ebx
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x50],1
	cmp ecx,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x4F8]
	cmp esi,eax
	je Block10

 Block6:
	mov dword ptr [edi+0x4F8],eax
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	cmp esi,ebx
	je Block10

 Block9:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block10:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block12:
	mov ebp,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x18],bp
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebx
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp word ptr [esp+0x38],bp
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov eax,dword ptr [edi+0x4E8]
	mov edx,0xD
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebx
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block22:
	mov esi,dword ptr [edi+0x4F8]
	mov dword ptr [esp+0x50],2
	cmp esi,ebx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
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
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebx
	jge Block26

 Block25:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp word ptr [esp+0x18],bp
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebx
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov eax,dword ptr [edi+0x10C]
	mov ecx,0xD
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block32:
	mov esi,dword ptr [edi+0x4F8]
	mov dword ptr [esp+0x50],3
	cmp esi,ebx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebx
	jge Block36

 Block35:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block36:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp word ptr [esp+0x28],bp
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebx
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov esi,dword ptr [edi+0x4F8]
	cmp esi,ebx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebx
	jge Block44

 Block43:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block44:
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
// CMob::DoAttack
_SUB_EXCEPTION_HANDLER(2504D0)
__SUB_CLASS_THIS(002504D0, __thiscall, 47522,  CMob, void, long, int32_t, NakedParam<CMob::TARGETINFO>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2504D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x74]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	cmp dword ptr [ebp+0x178],0
	jne Block83

 Block1:
	cmp dword ptr [ebp+0x21C],0
	jne Block83

 Block2:
	cmp dword ptr [ebp+0x228],0
	jne Block83

 Block3:
	cmp dword ptr [ebp+0x298],0
	jne Block83

 Block4:
	mov eax,dword ptr [ebp+0x47C]
	push eax
	lea ecx,[ebp+0x474]
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	cmp eax,4
	je Block83

 Block5:
	cmp dword ptr [ebp+0x244],0
	jne Block83

 Block6:
	call get_update_time
	mov ecx,dword ptr [ebp+0x174]
	mov ebx,eax
	mov eax,dword ptr [esp+0x84]
	add eax,0xFFFFFFF3
	push eax
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x88],eax
	call CMobTemplate::GetAttackInfo
	mov esi,eax
	test esi,esi
	je Block83

 Block7:
	mov ecx,dword ptr [esi+0x78]
	lea eax,[esi+0x78]
	test ecx,ecx
	je Block12

 Block8:
	mov ecx,dword ptr [ecx]
	test ecx,ecx
	je Block12

 Block9:
	mov ecx,dword ptr [ecx-4]
	shr ecx,1
	je Block12

 Block10:
	push eax
	lea ecx,[ebp+0xAC]
	call Ztl_bstr_t::op_assign
	mov edx,dword ptr [esp+0x88]
	mov dword ptr [ebp+0xA8],edx
	mov eax,dword ptr [esi+0x8C]
	add eax,ebx
	mov dword ptr [ebp+0xA4],eax
	jne Block12

 Block11:
	mov dword ptr [ebp+0xA4],1

 Block12:
	cmp dword ptr [esi+0xAC],0
	je Block14

 Block13:
	mov dword ptr [ebp+0x8C],0

 Block14:
	mov edi,dword ptr [esi+0xC]
	cmp edi,1
	jne Block39

 Block15:
	mov eax,dword ptr [esp+0x8C]
	mov ebx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edi,eax
	xor edx,edx
	and eax,3
	mov ecx,eax
	mov dword ptr [esp+0x50],edx
	mov dword ptr [esp+0x54],edx
	mov dword ptr [esp+0x58],edx
	mov dword ptr [esp+0x5C],edx
	mov eax,dword ptr [ebx+0x19E8]
	shr edi,2
	and eax,0x3FFFFFFF
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x18],1
	cmp edi,eax
	jne Block20

 Block16:
	cmp ecx,edx
	jne Block18

 Block17:
	push edx
	lea ecx,[esp+0x54]
	push ecx
	lea ecx,[ebx+0x88]
	call CAvatar::GetBodyRect
	jmp Block23

 Block18:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x40]
	push edx
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [eax+4]
	push ecx
	push eax
	mov dword ptr [esp+0x84],0
	call get_summon_skill_id_from_idx
	add esp,8
	push eax
	lea edx,[esp+0x4C]
	push edx
	mov ecx,ebx
	call CUser::GetSummoned
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x48]
	call ZRef<CSummoned>::~ZRef<CSummoned>
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	call ZRef<CharacterData>::~ZRef<CharacterData>
	test ebx,ebx
	je Block20

 Block19:
	push 0
	lea eax,[esp+0x54]
	push eax
	mov ecx,ebx
	call CSummoned::GetBodyRect
	mov dword ptr [esp+0x18],0

 Block20:
	cmp dword ptr [esp+0x24],3
	jne Block24

 Block21:
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	push edi
	call CMobPool::GetMob
	test eax,eax
	je Block83

 Block22:
	push 0
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,eax
	call CMob::GetBodyRect

 Block23:
	mov dword ptr [esp+0x18],1

 Block24:
	cmp dword ptr [esp+0x88],0
	je Block26

 Block25:
	mov edx,dword ptr [esi+0x2C]
	mov dword ptr [esp+0x24],edx
	jmp Block27

 Block26:
	mov eax,dword ptr [esi+0x2C]
	neg eax
	mov dword ptr [esp+0x24],eax

 Block27:
	mov eax,dword ptr [ebp+4]
	mov edx,dword ptr [eax+0x10]
	lea edi,[ebp+4]
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,edi
	call edx
	mov ebx,dword ptr [eax]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	add ebx,dword ptr [esp+0x24]
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,edi
	call edx
	mov ecx,dword ptr [eax+4]
	add ecx,dword ptr [esi+0x30]
	cmp dword ptr [esp+0x88],0
	mov dword ptr [esp+0x48],ebx
	mov edi,ecx
	je Block29

 Block28:
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [esp+0x50]
	add eax,edx
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x58]
	sar eax,1
	add edx,0xFFFFFFF6
	cmp eax,edx
	jmp Block30

 Block29:
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [esp+0x58]
	add eax,edx
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x50]
	sar eax,1
	add edx,0xA
	cmp edx,eax

 Block30:
	jge Block32

 Block31:
	mov eax,edx

 Block32:
	mov edx,dword ptr [esp+0x54]
	cmp edi,edx
	jl Block34

 Block33:
	mov edx,dword ptr [esp+0x5C]
	cmp edi,edx
	jle Block35

 Block34:
	mov edi,edx

 Block35:
	sub eax,ebx
	mov dword ptr [esp+0x24],eax
	fild dword ptr [esp+0x24]
	sub edi,ecx
	mov dword ptr [esp+0x24],edi
	fild dword ptr [esp+0x24]
	fmul st(0),st
	fld st(1)
	fmulp st(2),st
	faddp st(1),st(0)
	call __CIsqrt
	cmp dword ptr [esp+0x18],0
	mov eax,dword ptr [esi+0x34]
	je Block37

 Block36:
	cdq
	xor eax,edx
	sub eax,edx

 Block37:
	add eax,0xA
	mov dword ptr [esp+0x24],eax
	fild dword ptr [esp+0x24]
	fcompp
	fnstsw ax
	test ah,5
	jnp Block83

 Block38:
	lea ecx,[ebp+0xC4]
	call ZList<CMob::ATTACKENTRY>::AddTail_
	mov ecx,dword ptr [esi+0x90]
	add ecx,dword ptr [esp+0x14]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esi+0xC]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [esp+0x8C]
	mov edx,dword ptr [esp+0x88]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr [eax+0x18],edx
	mov dword ptr [eax+0x1C],ecx
	jmp Block82

 Block39:
	cmp edi,2
	jne Block60

 Block40:
	lea ecx,[esi+0x80]
	call _xbstr_t::length
	test eax,eax
	je Block60

 Block41:
	cmp dword ptr [esp+0x88],0
	je Block43

 Block42:
	mov edx,dword ptr [esi+0x2C]
	mov dword ptr [esp+0x24],edx
	jmp Block44

 Block43:
	mov eax,dword ptr [esi+0x2C]
	neg eax
	mov dword ptr [esp+0x24],eax

 Block44:
	mov eax,dword ptr [ebp+4]
	mov edx,dword ptr [eax+0x10]
	lea ebx,[ebp+4]
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,ebx
	call edx
	mov edi,dword ptr [eax]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x10]
	add edi,dword ptr [esp+0x24]
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,ebx
	call edx
	mov edx,dword ptr [esi+0x34]
	mov ebx,dword ptr [eax+4]
	movsx ecx,word ptr [esp+0x8E]
	movsx eax,word ptr [esp+0x8C]
	add ebx,dword ptr [esi+0x30]
	push edx
	mov dword ptr [esp+0x28],edx
	mov edx,dword ptr [esp+0x8C]
	push edx
	push ecx
	push eax
	push ebx
	push edi
	lea eax,[esp+0x60]
	push eax
	mov ecx,ebp
	call CMob::SetBallDestPoint
	mov ecx,dword ptr [eax]
	fild dword ptr [esp+0x24]
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x30],ecx
	mov dword ptr [esp+0x34],edx
	fmul qword ptr [__real_4082c00000000000]
	fidiv dword ptr [esi+0x6C]
	call __ftol2_sse
	mov ecx,dword ptr [esi+0x90]
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x28],eax
	add eax,ecx
	add eax,dword ptr [esp+0x14]
	add edx,ecx
	push 0x44
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x24],edx
	mov dword ptr [esp+0x28],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x7C],1
	test eax,eax
	je Block46

 Block45:
	mov eax,dword ptr [esp+0x84]
	push eax
	push ecx
	lea eax,[esi+0x80]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	call Ztl_bstr_t::_ctor_copy
	mov ecx,dword ptr [esp+0x90]
	push ecx
	lea ecx,[ebp+0x4E8]
	mov byte ptr [esp+0x88],2
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getz
	mov edx,dword ptr [esp+0x40]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x38]
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0x48]
	push eax
	push ebx
	push edi
	push ecx
	mov ecx,dword ptr [esp+0x40]
	push edx
	mov byte ptr [esp+0xA8],1
	call CMob::MobBullet::_ctor_0
	jmp Block47

 Block46:
	xor eax,eax

 Block47:
	mov dword ptr [esp+0x4C],eax
	test eax,eax
	je Block49

 Block48:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block49:
	sub esp,8
	lea eax,[esp+0x50]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	mov dword ptr [esp+0x88],3
	call ZRef<CMob::MobBullet>::_ctor_copy
	lea ecx,[ebp+0x5D0]
	call BulletContainer<CMob::MobBullet>::Insert
	xor ecx,ecx
	mov dword ptr [esp+0x18],ecx
	jmp Block51

 Block51:
	mov eax,dword ptr [ebp+0x570]
	test eax,eax
	je Block59

 Block52:
	cmp ecx,dword ptr [eax-4]
	jae Block59

 Block53:
	mov edx,dword ptr [esi+0x34]
	mov eax,dword ptr [esp+0x88]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x570]
	mov edx,dword ptr [eax+ecx*8+4]
	mov eax,dword ptr [eax+ecx*8]
	push edx
	push eax
	push ebx
	push edi
	lea ecx,[esp+0x68]
	push ecx
	mov ecx,ebp
	call CMob::SetBallDestPoint
	mov edx,dword ptr [eax]
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x3C],eax
	mov eax,dword ptr [esi+0x90]
	mov dword ptr [esp+0x38],edx
	lea edx,[eax+ecx]
	mov dword ptr [esp+0x20],edx
	mov edx,dword ptr [esp+0x28]
	add eax,edx
	add eax,ecx
	push 0x44
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x28],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block55

 Block54:
	mov eax,dword ptr [esp+0x84]
	push eax
	push ecx
	lea eax,[esi+0x80]
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push eax
	call Ztl_bstr_t::_ctor_copy
	mov ecx,dword ptr [esp+0x90]
	push ecx
	lea ecx,[ebp+0x4E8]
	mov byte ptr [esp+0x88],5
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getz
	mov edx,dword ptr [esp+0x48]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x38]
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0x50]
	push eax
	push ebx
	push edi
	push ecx
	mov ecx,dword ptr [esp+0x54]
	push edx
	mov byte ptr [esp+0xA8],4
	call CMob::MobBullet::_ctor_0
	jmp Block56

 Block55:
	xor eax,eax

 Block56:
	mov dword ptr [esp+0x44],eax
	test eax,eax
	je Block58

 Block57:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block58:
	sub esp,8
	lea eax,[esp+0x48]
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov byte ptr [esp+0x88],6
	call ZRef<CMob::MobBullet>::_ctor_copy
	lea ecx,[ebp+0x5D0]
	call BulletContainer<CMob::MobBullet>::Insert
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x7C],3
	call ZRef<CMob::MobBullet>::~ZRef<CMob::MobBullet>
	inc dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x18]
	jmp Block51

 Block59:
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	call ZRef<CMob::MobBullet>::~ZRef<CMob::MobBullet>
	jmp Block82

 Block60:
	xor ecx,ecx
	cmp edi,ecx
	jne Block62

 Block61:
	lea ecx,[ebp+0xC4]
	call ZList<CMob::ATTACKENTRY>::AddTail_
	mov ecx,dword ptr [esi+0x90]
	add ecx,ebx
	mov edi,eax
	mov dword ptr [edi],ecx
	mov edx,dword ptr [esi+0xC]
	mov dword ptr [edi+4],edx
	mov eax,dword ptr [ebp+4]
	mov edx,dword ptr [eax+0x10]
	lea ebx,[ebp+4]
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,ebx
	call edx
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x2C],eax
	xor eax,eax
	cmp dword ptr [esp+0x88],eax
	mov ecx,ebx
	sete al
	push eax
	lea eax,[esp+0x4C]
	push eax
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [ecx]
	push eax
	push edx
	add esi,0x2C
	lea eax,[edi+8]
	push esi
	push eax
	call SECRECT::ToRect
	add esp,8
	push eax
	call adjust_rect
	mov ecx,dword ptr [esp+0x98]
	mov edx,dword ptr [esp+0x94]
	add esp,0x10
	mov dword ptr [edi+0x18],ecx
	mov dword ptr [edi+0x1C],edx
	jmp Block82

 Block62:
	cmp edi,3
	je Block64

 Block63:
	cmp edi,4
	jne Block82

 Block64:
	cmp dword ptr [esi+0x30],ecx
	mov eax,dword ptr [esp+0x8C]
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x24],ecx
	jle Block82

 Block65:
	mov edx,dword ptr [esp+0x18]
	cmp edx,dword ptr [esi+0x34]
	jge Block82

 Block66:
	mov eax,1
	shl eax,cl
	mov ecx,dword ptr [esp+0x2C]
	test ecx,eax
	je Block81

 Block67:
	mov edx,dword ptr [ebp+4]
	mov edx,dword ptr [edx+0x10]
	lea ebx,[ebp+4]
	lea eax,[esp+0x50]
	push eax
	mov ecx,ebx
	call edx
	mov edi,dword ptr [esi+0x2C]
	add edi,dword ptr [esp+0x24]
	mov ecx,eax
	mov eax,dword ptr [esi+0x38]
	imul edi,eax
	cdq
	sub eax,edx
	sar eax,1
	add edi,eax
	xor eax,eax
	xor edx,edx
	cmp dword ptr [esp+0x88],eax
	setne dl
	lea edx,[edx+edx-1]
	imul edi,edx
	add edi,dword ptr [ecx]
	int 3// TODO: 	mov dword ptr [esp+0x60],offset ZList<long>::`vftable'
	mov dword ptr [esp+0x68],eax
	mov dword ptr [esp+0x6C],eax
	mov dword ptr [esp+0x70],eax
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [esp+0x7C],7
	cmp eax,3
	jne Block69

 Block68:
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x28],eax
	push ecx
	lea eax,[esp+0x4C]
	push eax
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	add eax,0x64
	push eax
	lea eax,[esp+0x48]
	push eax
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esp+0x30]
	sub eax,0x64
	push eax
	push edi
	call CWvsPhysicalSpace2D::GetFootholdRange
	jmp Block71

 Block69:
	cmp eax,4
	jne Block80

 Block70:
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x38]
	push eax
	mov ecx,ebx
	call edx
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x60]
	call ZList<long>::AddTail_
	mov dword ptr [eax],ebx

 Block71:
	cmp dword ptr [esp+0x68],0
	je Block80

 Block72:
	lea ecx,[ebp+0xC4]
	call ZList<CMob::ATTACKENTRY>::AddTail_
	mov ebx,eax
	mov eax,dword ptr [ebp+0x574]
	test eax,eax
	je Block75

 Block73:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,dword ptr [eax-4]
	jae Block75

 Block74:
	mov ecx,dword ptr [eax+ecx*4]
	mov dword ptr [esp+0x20],ecx
	jmp Block76

 Block75:
	mov dword ptr [esp+0x20],0

 Block76:
	mov edx,dword ptr [esi+0x90]
	add edx,dword ptr [esp+0x20]
	xor ecx,ecx
	add edx,dword ptr [esp+0x14]
	cmp dword ptr [esp+0x88],ecx
	mov dword ptr [ebx],edx
	mov eax,dword ptr [esi+0xC]
	sete cl
	mov dword ptr [ebx+4],eax
	mov edx,dword ptr [esp+0x6C]
	lea eax,[ebx+8]
	mov dword ptr [esp+0x28],eax
	push ecx
	mov ecx,dword ptr [edx]
	push ecx
	push edi
	lea edx,[esi+0x3C]
	push edx
	push eax
	call SECRECT::ToRect
	add esp,8
	push eax
	call adjust_rect
	mov eax,dword ptr [esp+0x98]
	mov ecx,dword ptr [esp+0x94]
	mov edx,dword ptr [esp+0x24]
	inc dword ptr [esp+0x28]
	mov dword ptr [ebx+0x18],eax
	mov eax,dword ptr [esp+0x30]
	add esp,0x10
	push eax
	push 0xC00614A4
	push ecx
	mov dword ptr [ebx+0x1C],ecx
	mov eax,esp
	mov dword ptr [ebp+0x15C],edx
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esi+0x38]
	mov ecx,dword ptr [ebx+0x14]
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x34]
	sar eax,1
	add eax,dword ptr [edx]
	push ecx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esi+0x84]
	mov byte ptr [esp+0x94],8
	mov dword ptr [esp+0x48],esp
	test eax,eax
	je Block78

 Block77:
	mov eax,dword ptr [eax]
	jmp Block79

 Block78:
	xor eax,eax

 Block79:
	push 0
	mov byte ptr [esp+0x98],7
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_ApplyStartDelay

 Block80:
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x60],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll

 Block81:
	mov ecx,dword ptr [esp+0x24]
	inc ecx
	cmp ecx,dword ptr [esi+0x30]
	mov dword ptr [esp+0x24],ecx
	jl Block65

 Block82:
	mov eax,dword ptr [ebp+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov edx,dword ptr [ebp+4]
	mov edx,dword ptr [edx+0x10]
	add ebp,4
	mov esi,eax
	add esp,8
	lea eax,[esp+0x38]
	push eax
	mov ecx,ebp
	call edx
	mov edi,eax
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [edi]
	push eax
	push ecx
	call get_sound_volume_by_pos
	mov edx,dword ptr [esp+0x8C]
	push eax
	add edx,2
	push edx
	push esi
	call play_mob_sound
	add esp,0x14

 Block83:
	mov ecx,dword ptr [esp+0x74]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x6C
	ret 0xC
}
}
// CMob::SetShoeAttr
_SUB_EXCEPTION_HANDLER(241E50)
__SUB_CLASS_THIS0(00241E50, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_241E50
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
	push 0x90
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x40],eax
	mov dword ptr [esp+0x80],0
	test eax,eax
	je Block2

 Block1:
	push 0
	mov ecx,eax
	call CAttrShoe::_ctor_0
	mov ebx,eax
	jmp Block3

 Block2:
	xor ebx,ebx

 Block3:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test ebx,ebx
	je Block5

 Block4:
	lea eax,[ebx+4]
	push eax
	call ebp

 Block5:
	mov edi,dword ptr [esi+0x534]
	mov dword ptr [esi+0x534],ebx
	test edi,edi
	je Block8

 Block6:
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block7:
	push ebx
	call ebp
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block8:
	mov eax,dword ptr [esi+0x108]
	test eax,eax
	je Block10

 Block9:
	lea ecx,[eax-0xC]
	jmp Block11

 Block10:
	xor ecx,ecx

 Block11:
	cmp dword ptr [esi+0x28C],0
	mov edi,dword ptr [esi+0x20C]
	je Block13

 Block12:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block14

 Block13:
	mov eax,dword ptr [esi+0x174]

 Block14:
	test ecx,ecx
	je Block18

 Block15:
	cmp dword ptr [ecx+0x300],0
	je Block18

 Block16:
	cmp dword ptr [eax+0x204],0
	je Block18

 Block17:
	mov ecx,dword ptr [eax+0xB4]
	push ecx
	add eax,0xAC
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov edi,eax

 Block18:
	cmp dword ptr [esi+0x28C],0
	je Block20

 Block19:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block21

 Block20:
	mov eax,dword ptr [esi+0x174]

 Block21:
	mov edx,dword ptr [eax+0x48]
	push edx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ebx,0x8C
	test eax,eax
	jne Block23

 Block22:
	fldz
	jmp Block29

 Block23:
	mov eax,dword ptr [esi+0x210]
	add eax,edi
	cmp eax,0xA
	jg Block25

 Block24:
	mov eax,0xA
	mov dword ptr [esp+0x40],eax
	jmp Block28

 Block25:
	cmp eax,ebx
	jge Block27

 Block26:
	mov dword ptr [esp+0x40],eax
	jmp Block28

 Block27:
	mov dword ptr [esp+0x40],ebx

 Block28:
	fild dword ptr [esp+0x40]
	fdiv qword ptr [__real_4059000000000000]

 Block29:
	mov ecx,dword ptr [esi+0x534]
	sub esp,8
	add ecx,0x24
	fstp qword ptr [esp]
	call TSecType<double>::SetData
	cmp dword ptr [esi+0x28C],0
	je Block31

 Block30:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block32

 Block31:
	mov eax,dword ptr [esi+0x174]

 Block32:
	mov ecx,dword ptr [eax+0x48]
	push ecx
	add eax,0x40
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,4
	jne Block44

 Block33:
	mov ecx,dword ptr [esi+0x534]
	fld1
	sub esp,8
	fstp qword ptr [esp]
	add ecx,0x78
	call TSecType<double>::SetData
	mov eax,dword ptr [esi+0x210]
	add eax,dword ptr [esi+0x20C]
	cmp eax,0xA
	jg Block35

 Block34:
	mov eax,0xA
	mov dword ptr [esp+0x40],eax
	jmp Block38

 Block35:
	cmp eax,ebx
	jge Block37

 Block36:
	mov dword ptr [esp+0x40],eax
	jmp Block38

 Block37:
	mov dword ptr [esp+0x40],ebx

 Block38:
	fild dword ptr [esp+0x40]
	mov ecx,dword ptr [esi+0x534]
	sub esp,8
	add ecx,0x84
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp]
	call TSecType<double>::SetData
	fld1
	mov ecx,dword ptr [esi+0x534]
	sub esp,8
	fstp qword ptr [esp]
	add ecx,0x54
	call TSecType<double>::SetData
	mov eax,dword ptr [esi+0x210]
	add eax,dword ptr [esi+0x20C]
	cmp eax,0xA
	jg Block40

 Block39:
	mov eax,0xA
	mov dword ptr [esp+0x40],eax
	jmp Block43

 Block40:
	cmp eax,ebx
	jge Block42

 Block41:
	mov dword ptr [esp+0x40],eax
	jmp Block43

 Block42:
	mov dword ptr [esp+0x40],ebx

 Block43:
	fild dword ptr [esp+0x40]
	mov edi,dword ptr [esi+0x534]
	add edi,0x6C
	sub esp,8
	fdiv qword ptr [__real_4059000000000000]
	mov ecx,edi
	fstp qword ptr [esp]
	call TSecType<double>::SetData
	mov ebx,dword ptr [esi+0x534]
	mov ecx,edi
	add ebx,0x60
	call TSecType<double>::GetData
	sub esp,8
	mov ecx,ebx
	fstp qword ptr [esp]
	call TSecType<double>::SetData

 Block44:
	mov edx,dword ptr [esi+0x174]
	mov ecx,dword ptr [esi+0x534]
	fld qword ptr [edx+0x150]
	sub esp,8
	add ecx,0x18
	fstp qword ptr [esp]
	call TSecType<double>::SetData
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [esi+0x534]
	fld qword ptr [eax+0x150]
	sub esp,8
	add ecx,0x30
	fstp qword ptr [esp]
	call TSecType<double>::SetData
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
// CMob::_ZtlSecureGet_m_tLastHitExpire
__SUB_CLASS0(0023A7A0, __fastcall, 47541,  CMob, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x3FC]
	push eax
	add ecx,0x3F4
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::LoadMobAction
__SUB_CLASS_THIS(0023B6B0, __thiscall, 47489,  CMob, int32_t, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push ebp
	push esi
	push edi
	lea edi,[ebx+ebx*4]
	add edi,edi
	mov esi,ecx
	mov eax,dword ptr [esi+0x458]
	add edi,edi
	cmp dword ptr [edi+eax+8],0
	lea ebp,[edi+eax]
	jne Block5

 Block1:
	cmp dword ptr [esi+0x28C],0
	je Block3

 Block2:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block4

 Block3:
	mov eax,dword ptr [esi+0x174]

 Block4:
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	add esp,8
	push ebp
	push ebx
	push eax
	call CActionMan::LoadMobAction

 Block5:
	mov edx,dword ptr [esi+0x458]
	xor eax,eax
	cmp dword ptr [edi+edx+8],eax
	pop edi
	pop esi
	pop ebp
	setne al
	pop ebx
	ret 4
}
}
// CMob::_ZtlSecureGet_m_nMobCtrlState
__SUB_CLASS0(0023A700, __fastcall, 47541,  CMob, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x124]
	push eax
	add ecx,0x11C
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMob::ClearActionLayer
__SUB_CLASS_THIS0(0023E940, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	xor esi,esi
	jmp Block2

 Block2:
	mov ecx,dword ptr [edi+0x458]
	add ecx,esi
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::RemoveAll
	add esi,0x14
	cmp esi,0x35C
	jl Block2

 Block3:
	pop edi
	pop esi
	ret
}
}
// CMob::IsSuspended
__SUB_CLASS_THIS0(0023C5D0, __thiscall, 47475,  CMob, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x47C]
	push eax
	add ecx,0x474
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	ret
}
}
// CMob::PrepareActionLayer
_SUB_EXCEPTION_HANDLER(24A030)
__SUB_CLASS_THIS0(0024A030, __thiscall, 47470,  CMob, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_24A030
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
	mov edi,ecx
	lea eax,[esp+0x24]
	push eax
	call CMob::GetCurrentAction
	push eax
	mov ecx,edi
	call CMob::GetFineAction
	mov edx,dword ptr [edi+0x458]
	lea ecx,[eax+eax*4]
	lea ebp,[edx+ecx*4]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x24],ebp
	call CMob::LoadMobAction
	test eax,eax
	jne Block2

 Block1:
	push 0x22000006
	lea ecx,[esp+0x18]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x14]
	push offset CTerminateException::THROW_INFO
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esp+0x24],eax
	call _CxxThrowException

 Block2:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],0xFFFFFFFE
	mov ecx,dword ptr [edi+0x4E8]
	xor ebx,ebx
	mov dword ptr [esp+0x90],ebx
	cmp ecx,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0x90],0xFFFFFFFF
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	lea edx,[edi+0x41C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x424],eax
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block53

 Block11:
	jmp Block13

 Block13:
	lea edx,[esp+0x14]
	push edx
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [edi+0x424]
	push eax
	lea ebp,[edi+0x41C]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x50]
	add esp,0xC
	add ecx,eax
	mov edx,ebp
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [edi+0x424],eax
	call CMob::IsMobOurTeam
	test eax,eax
	jne Block15

 Block14:
	mov ecx,edi
	call CMob::IsSamePhaseWithMe
	test eax,eax
	jne Block23

 Block15:
	or eax,0xFFFFFFFF
	cmp dword ptr [esi+0x54],eax
	jne Block17

 Block16:
	cmp dword ptr [esi+0x58],eax
	je Block23

 Block17:
	mov ecx,edi
	call CMob::IsMobOurTeam
	test eax,eax
	je Block19

 Block18:
	mov dword ptr [esi+0x54],0x80FFFFFF
	jmp Block22

 Block19:
	mov ebp,dword ptr [_D_G_PSTAGE+4]
	cmp ebp,ebx
	je Block23

 Block20:
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[ebp+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block23

 Block21:
	mov eax,dword ptr [ebp+0x250]
	shl eax,0x18
	add eax,0xFFFFFF
	mov dword ptr [esi+0x54],eax

 Block22:
	mov dword ptr [esi+0x58],ebx

 Block23:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x68]
	push ecx
	call ebp
	lea edx,[esp+0x68]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block57

 Block24:
	lea eax,[esp+0x58]
	push eax
	mov dword ptr [esp+0x94],1
	call ebp
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block57

 Block25:
	mov eax,dword ptr [esi+0x58]
	mov edx,3
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],eax
	mov eax,dword ptr [esi+0x54]
	mov ecx,edx
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],eax
	mov eax,dword ptr [esi+0x50]
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],eax
	mov ecx,dword ptr [edi+0x4E8]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [esp+0x90],5
	cmp ecx,ebx
	je Block3

 Block26:
	lea eax,[esp+0x68]
	push eax
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x50]
	push eax
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x38]
	push eax
	push esi
	lea edx,[esp+0x90]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov ebp,8
	cmp word ptr [esp+0x78],bp
	jne Block33

 Block27:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	cmp eax,ebx
	je Block29

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block29:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block30:
	mov byte ptr [esp+0x90],4
	cmp word ptr [esp+0x28],bp
	jne Block34

 Block31:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebx
	je Block35

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block33:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x78]
	push ecx
	call esi
	jmp Block30

 Block34:
	lea eax,[esp+0x28]
	push eax
	call esi

 Block35:
	mov byte ptr [esp+0x90],3
	cmp word ptr [esp+0x38],bp
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebx
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x38]
	push edx
	call esi

 Block39:
	mov byte ptr [esp+0x90],2
	cmp word ptr [esp+0x48],bp
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebx
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x48]
	push ecx
	call esi

 Block43:
	mov byte ptr [esp+0x90],1
	cmp word ptr [esp+0x58],bp
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	cmp eax,ebx
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0x58]
	push eax
	call esi

 Block47:
	mov dword ptr [esp+0x90],0xFFFFFFFF
	cmp word ptr [esp+0x68],bp
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	cmp eax,ebx
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x68]
	push edx
	call esi

 Block51:
	cmp dword ptr [esp+0x14],ebx
	jne Block13

 Block52:
	mov ebp,dword ptr [esp+0x20]

 Block53:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [edi+0x400],eax
	cmp dword ptr [edi+0x28C],ebx
	jne Block55

 Block54:
	mov ecx,dword ptr [edi+0x174]
	cmp dword ptr [ecx+0x1A0],ebx
	jne Block58

 Block55:
	cmp dword ptr [esp+0x24],ebx
	jne Block58

 Block56:
	mov eax,1
	jmp Block59

 Block57:
	push eax
	call _com_issue_error

 Block58:
	xor eax,eax

 Block59:
	mov esi,dword ptr [edi+0x4E8]
	cmp esi,ebx
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0xD8]
	push esi
	call eax
	cmp eax,ebx
	jge Block63

 Block62:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block63:
	cmp dword ptr [edi+0x4F4],ebx
	je Block72

 Block64:
	mov esi,dword ptr [edi+0x4E8]
	cmp esi,ebx
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block68

 Block67:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block68:
	mov esi,dword ptr [edi+0x4F4]
	cmp esi,ebx
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD8]
	push edx
	push esi
	call eax
	cmp eax,ebx
	jge Block72

 Block71:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block72:
	mov ecx,dword ptr [edi+0x400]
	push ecx
	push ebp
	mov ecx,edi
	call CMob::SetFrameInfo
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x80
	ret
}
}
// CMob::SetGuided
__SUB_CLASS_THIS(00244570, __thiscall, 47516,  CMob, void, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	call get_update_time
	lea ecx,[esi+0xB0]
	mov edi,eax
	call ZList<CMob::AFFECTEDSKILLENTRY>::AddTail_
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [eax],ecx
	lea ecx,[edi+edx]
	mov dword ptr [eax+4],ecx
	test ecx,ecx
	jne Block2

 Block1:
	mov dword ptr [eax+4],1

 Block2:
	mov dword ptr [eax+8],0
	mov eax,dword ptr [esi+0xC0]
	pop edi
	mov dword ptr [esi+0x100],eax
	pop esi
	ret 8
}
}
// CMob::ApplyControl
_SUB_EXCEPTION_HANDLER(240D20)
__SUB_CLASS_THIS(00240D20, __thiscall, 47486,  CMob, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_240D20
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
	mov dword ptr [esp+0x14],edi
	mov esi,dword ptr [edi+0x174]
	mov eax,dword ptr [esi+0x178]
	push eax
	lea ecx,[esi+0x170]
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block2

 Block1:
	mov edx,dword ptr [esi+0x184]
	push edx
	add esi,0x17C
	push esi
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block6

 Block2:
	mov eax,dword ptr [edi+0x14C]
	push eax
	lea esi,[edi+0x144]
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x60]
	mov edx,ecx
	sub edx,eax
	add esp,8
	cmp edx,0x3E8
	jl Block6

 Block3:
	mov edx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x14C],eax
	mov ebp,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ebp+4]
	mov edx,dword ptr [eax+0x10]
	lea esi,[ebp+4]
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call edx
	add edi,4
	mov ebx,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call edx
	mov ebx,dword ptr [ebx]
	sub ebx,dword ptr [eax]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	call edx
	lea esi,[eax+4]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,edi
	call edx
	mov esi,dword ptr [esi]
	sub esi,dword ptr [eax+4]
	mov eax,ebx
	cdq
	mov ecx,eax
	xor ecx,edx
	sub ecx,edx
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov eax,esi
	cdq
	mov ecx,eax
	xor ecx,edx
	sub ecx,edx
	mov eax,0x55555556
	imul ecx
	mov eax,dword ptr [ebp+0x640]
	mov esi,edx
	shr esi,0x1F
	add edi,edx
	and eax,0xFFFFFFFE
	add esi,edi
	cmp eax,0x12
	jne Block5

 Block4:
	add esi,0x64

 Block5:
	push 0xE4
	lea ecx,[esp+0x3C]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0x170]
	push ecx
	add eax,0x168
	push eax
	mov dword ptr [esp+0x58],0
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	push eax
	lea ecx,[esp+0x3C]
	call COutPacket::Encode4
	push esi
	lea ecx,[esp+0x3C]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x38]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block6:
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
// CMob::GetActiveVecCtrl
__SUB_CLASS_THIS0(0023C6B0, __thiscall, 47499,  CMob, _x_com_ptr<IWzVector2D>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x108]
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
// CMob::SetSuspended
__SUB_CLASS_THIS(00240910, __thiscall, 47486,  CMob, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	lea edx,[esi+0x474]
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [esi+0x47C],eax
	pop esi
	ret 4
}
}
// CMob::GetRemainDamageInfoDelay
__SUB_CLASS_THIS0(0023E730, __thiscall, 47482,  CMob, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	cmp dword ptr [ebx+0x4B4],0
	jne Block2

 Block1:
	xor eax,eax
	pop ebx
	pop ecx
	ret

 Block2:
	push esi
	push edi
	call get_update_time
	mov edi,eax
	mov eax,dword ptr [ebx+0x4B8]
	mov esi,1
	mov dword ptr [esp+0xC],eax
	test eax,eax
	je Block7

 Block3:
	mov edi,edi

 Block4:
	lea eax,[esp+0xC]
	push eax
	call ZList<CMob::DAMAGEINFO>::GetNext
	mov ecx,dword ptr [eax+8]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	sub eax,edi
	add esp,0xC
	cmp eax,esi
	jl Block6

 Block5:
	mov esi,eax

 Block6:
	cmp dword ptr [esp+0xC],0
	jne Block4

 Block7:
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	pop ecx
	ret
}
}
// CMob::GetPushedDamage
__SUB_CLASS_THIS0(0023B5C0, __thiscall, 47480,  CMob, long) {
__asm {

 Block0:
	push ecx
	push ebx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push edi
	test ecx,ecx
	je Block8

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+8]
	call edx
	mov edi,eax
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [eax+0x6C]
	push ecx
	add eax,0x64
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block8

 Block2:
	mov edx,dword ptr [edi+0xC9C]
	push edx
	lea ebx,[edi+0xC94]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block8

 Block3:
	mov eax,dword ptr [edi+0xC9C]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp dword ptr [esi+0x28C],0
	mov edi,eax
	je Block6

 Block4:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	je Block6

 Block5:
	mov esi,eax
	jmp Block7

 Block6:
	mov esi,dword ptr [esi+0x174]

 Block7:
	mov ecx,dword ptr [esi+0x114]
	push ecx
	add esi,0x10C
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	imul eax,edi
	mov dword ptr [esp+0xC],eax
	pop edi
	pop esi
	fild dword ptr [esp+4]
	pop ebx
	fdiv qword ptr [__real_4059000000000000]
	add esp,4
	jmp  __ftol2_sse

 Block8:
	cmp dword ptr [esi+0x28C],0
	je Block10

 Block9:
	mov eax,dword ptr [esi+0x178]
	test eax,eax
	jne Block11

 Block10:
	mov eax,dword ptr [esi+0x174]

 Block11:
	mov edx,dword ptr [eax+0x114]
	push edx
	add eax,0x10C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret
}
}
// CMob::OnCatchEffect
__SUB_CLASS_THIS(0023CD00, __thiscall, 47515,  CMob, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,edi
	movzx ebx,al
	call CInPacket::Decode1
	movzx eax,al
	neg eax
	sbb eax,eax
	and eax,0x10E
	push eax
	push ebx
	mov ecx,esi
	call CMob::ShowCatchEffect
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CMob::_ZtlSecureGet_m_dwMobID
__SUB_CLASS0(0023A720, __fastcall, 47545,  CMob, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x170]
	push eax
	add ecx,0x168
	push ecx
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	ret
}
}
// CMob::CheckDamagedByMob
__SUB_CLASS_THIS(0023D4B0, __thiscall, 47487,  CMob, int32_t, unsigned long) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0x174]
	cmp dword ptr [edx+0x208],0
	push esi
	je Block9

 Block1:
	mov eax,dword ptr [edx+0x210]
	test eax,eax
	je Block3

 Block2:
	cmp dword ptr [eax-4],0
	jne Block4

 Block3:
	mov eax,1
	pop esi
	ret 4

 Block4:
	mov esi,dword ptr [esp+8]
	xor ecx,ecx
	nop

 Block5:
	mov eax,dword ptr [edx+0x210]
	test eax,eax
	je Block9

 Block6:
	cmp ecx,dword ptr [eax-4]
	jae Block9

 Block7:
	cmp dword ptr [eax+ecx*4],esi
	je Block3

 Block8:
	inc ecx
	jmp Block5

 Block9:
	xor eax,eax
	pop esi
	ret 4
}
}
