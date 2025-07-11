#include "regen.hpp"
// CashShop_ShopSvrRes.ipp
#include "CashShop_ShopSvrRes.hpp"

// CCashShop::OnCashItemResIncBuyCharacterCountDone
__SUB_CLASS_THIS(00095000, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode2
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	movzx eax,ax
	mov dword ptr [esp+0x1C],esp
	push 0x226
	push ecx
	mov dword ptr [esi+0x498],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	pop esi
	ret 4
}
}
// CCashShop::OnOneADay
__SUB_CLASS_THIS(00095950, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [edi+0x3B48],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [edi+0x3B44],eax
	call CInPacket::Decode4
	mov esi,eax
	test esi,esi
	je Block2

 Block1:
	lea eax,[esp+0x10]
	push eax
	push 1
	add edi,0x3B50
	push esi
	mov ecx,edi
	call ZArray<OneADayInfo>::_Realloc
	mov edx,dword ptr [edi]
	lea ecx,[esi+esi*2]
	add ecx,ecx
	add ecx,ecx
	push ecx
	push edx
	mov ecx,ebx
	call CInPacket::DecodeBuffer
	pop edi
	pop esi
	pop ebx
	ret 4

 Block2:
	lea ecx,[edi+0x3B50]
	call ZArray<OneADayInfo>::RemoveAll
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CCashShop::IsUsableItemGift
_SUB_EXCEPTION_HANDLER(86B20)
__SUB_CLASS_THIS(00086B20, __thiscall, 48298,  CCashShop, int32_t, long, ZXString<char>&, NakedParam<ZXString<char>>, const CharacterData&, const BasicStat&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_86B20
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
	mov ebp,dword ptr [esp+0x40]
	mov edi,dword ptr [esp+0x34]
	lea eax,[esp+0x1C]
	push eax
	push ebp
	xor esi,esi
	push edi
	mov dword ptr [esp+0x38],esi
	mov dword ptr [esp+0x28],esi
	call CCashShop::IsUsableMasteryBookItem
	test eax,eax
	jne Block6

 Block1:
	lea ecx,[esp+0x34]
	push 0x16CB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edx+4]
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	mov eax,dword ptr [esp+0x44]
	push eax
	mov byte ptr [esp+0x3C],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x44]
	add esp,0x10
	mov byte ptr [esp+0x2C],0
	cmp eax,esi
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,esi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	xor eax,eax
	jmp Block101

 Block6:
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	cmp esi,0x207
	je Block8

 Block7:
	cmp esi,0x20C
	jne Block20

 Block8:
	push edi
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemInfo
	mov edi,dword ptr [esp+0x1C]
	test edi,edi
	sete al
	mov bl,2
	mov byte ptr [esp+0x2C],bl
	test al,al
	je Block10

 Block9:
	push 0x22000006
	lea ecx,[esp+0x3C]
	call CMSException::_ctor_0
	mov edx,dword ptr [esp+0x38]
	push offset CTerminateException::THROW_INFO
	lea eax,[esp+0x38]
	push eax
	mov dword ptr [esp+0x3C],edx
	call _CxxThrowException

 Block10:
	mov ecx,dword ptr [ebp+0x1F]
	mov edx,dword ptr [ebp+0x1B]
	push ecx
	push edx
	push 5
	mov ecx,ebp
	call CharacterData::FindCashItemSlotPosition_0
	test eax,eax
	jle Block12

 Block11:
	mov ecx,dword ptr [ebp+0x515]
	cmp dword ptr [ecx+eax*8+4],0
	jne Block18

 Block12:
	lea edx,[esp+0x34]
	push 0x208
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x38]
	push eax
	mov byte ptr [esp+0x30],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x2C],bl
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block5

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	jmp Block101

 Block18:
	mov byte ptr [esp+0x2C],0
	test edi,edi
	je Block20

 Block19:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block20:
	cmp esi,0x228
	jne Block58

 Block21:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	xor esi,esi
	push edx
	mov dword ptr [esp+0x1C],esi
	call CItemInfo::GetKarmaScissorsItem
	cmp eax,esi
	je Block23

 Block22:
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x18],eax

 Block23:
	mov ecx,dword ptr [esp+0x40]
	add ecx,0x505
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x1C],ecx
	mov dword ptr [esp+0x20],5
	mov edi,edi

 Block24:
	mov ebx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block26

 Block25:
	mov eax,dword ptr [eax-4]

 Block26:
	lea ebp,[eax-1]
	mov edi,1
	cmp ebp,edi
	jl Block32

 Block27:
	lea esp,[esp]

 Block28:
	mov edx,dword ptr [ebx]
	mov esi,dword ptr [edx+edi*8+4]
	test esi,esi
	je Block31

 Block29:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetAppliableKarmaType
	cmp eax,dword ptr [esp+0x18]
	jne Block31

 Block30:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	mov ecx,esi
	call edx
	test eax,eax
	je Block49

 Block31:
	inc edi
	cmp edi,ebp
	jle Block28

 Block32:
	cmp dword ptr [esp+0x14],0
	jne Block50

 Block33:
	mov ebx,dword ptr [esp+0x40]
	xor edi,edi
	lea ebp,[ebx+0xFD]

 Block34:
	mov esi,dword ptr [ebp]
	test esi,esi
	je Block37

 Block35:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetAppliableKarmaType
	cmp eax,dword ptr [esp+0x18]
	jne Block37

 Block36:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	mov ecx,esi
	call edx
	test eax,eax
	je Block49

 Block37:
	inc edi
	add ebp,8
	cmp edi,0x3C
	jl Block34

 Block38:
	xor edi,edi
	lea ebp,[ebx+0x4BD]

 Block39:
	mov esi,dword ptr [ebp]
	test esi,esi
	je Block42

 Block40:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetAppliableKarmaType
	cmp eax,dword ptr [esp+0x18]
	jne Block42

 Block41:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	mov ecx,esi
	call edx
	test eax,eax
	je Block49

 Block42:
	inc edi
	add ebp,8
	cmp edi,4
	jl Block39

 Block43:
	xor edi,edi
	lea ebp,[ebx+0x4DD]

 Block44:
	mov esi,dword ptr [ebp]
	test esi,esi
	je Block47

 Block45:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetAppliableKarmaType
	cmp eax,dword ptr [esp+0x18]
	jne Block47

 Block46:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	mov ecx,esi
	call edx
	test eax,eax
	je Block49

 Block47:
	inc edi
	add ebp,8
	cmp edi,5
	jl Block44

 Block48:
	jmp Block50

 Block49:
	mov dword ptr [esp+0x14],1

 Block50:
	add dword ptr [esp+0x1C],4
	sub dword ptr [esp+0x20],1
	jne Block24

 Block51:
	cmp dword ptr [esp+0x14],0
	jne Block58

 Block52:
	mov eax,dword ptr [esp+0x34]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	lea edx,[esp+0x44]
	push 0x1565
	push edx
	mov byte ptr [esp+0x34],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x34],0
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x3C],6
	call ZXString<char>::Format
	mov ecx,dword ptr [esp+0x48]
	add esp,0x10
	push eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x2C],5
	test eax,eax
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x2C],4
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block16

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block16

 Block58:
	mov ebx,dword ptr [esp+0x40]
	mov ecx,dword ptr [ebx+0x3D]
	push ecx
	lea esi,[ebx+0x39]
	push esi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,0x16
	je Block67

 Block59:
	cmp ecx,0x7D1
	je Block67

 Block60:
	mov edi,dword ptr [esp+0x34]
	cmp edi,0x55C126
	je Block63

 Block61:
	cmp edi,0x55C127
	je Block63

 Block62:
	cmp edi,0x55C128
	jne Block68

 Block63:
	lea ecx,[esp+0x34]
	push 0x162B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x2C],7

 Block64:
	mov ecx,dword ptr [esp+0x38]
	push eax
	call ZXString<char>::op_assign

 Block65:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block16

 Block66:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block16

 Block67:
	mov edi,dword ptr [esp+0x34]

 Block68:
	mov edx,dword ptr [ebx+0x3D]
	push edx
	push esi
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
	jne Block70

 Block69:
	cmp word ptr [ebx+0xF7],1
	je Block72

 Block70:
	push edi
	call is_dual_masterybook_item
	add esp,4
	test eax,eax
	je Block72

 Block71:
	lea ecx,[esp+0x34]
	push 0x16CC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x2C],8
	jmp Block64

 Block72:
	mov eax,0x431BDE83
	imul edi
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,1
	jne Block98

 Block73:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	call CItemInfo::GetEquipItem
	mov esi,eax
	test esi,esi
	jne Block75

 Block74:
	lea ecx,[esp+0x34]
	push 0x23F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x38]
	push eax
	push edx
	mov byte ptr [esp+0x34],9
	call ZXString<char>::Format
	add esp,8
	jmp Block65

 Block75:
	mov ebp,dword ptr [esp+0x44]
	mov eax,dword ptr [ebp+0x20]
	push eax
	lea ecx,[ebp+0x18]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	call get_job_category
	add esp,0xC
	test eax,eax
	je Block77

 Block76:
	lea ecx,[eax-1]
	mov edi,1
	shl edi,cl
	jmp Block78

 Block77:
	xor edi,edi

 Block78:
	mov edx,dword ptr [esi+0x5C]
	push edx
	lea eax,[esi+0x54]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block81

 Block79:
	mov ecx,esi
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrJob
	test edi,eax
	jne Block81

 Block80:
	lea ecx,[esp+0x34]
	push 0x1A36
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [esp+0x40]
	push eax
	mov byte ptr [esp+0x38],0xA
	call ZXString<char>::Format
	add esp,0xC
	jmp Block65

 Block81:
	mov ecx,dword ptr [esi+0x68]
	push ecx
	lea edx,[esi+0x60]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	mov eax,dword ptr [ebp+0x14]
	push eax
	lea ecx,[ebp+0xC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x10
	cmp edi,eax
	jle Block84

 Block82:
	lea edx,[esp+0x34]
	push 0x1A36
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x2C],0xB

 Block83:
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x38]
	push ecx
	push eax
	push edx
	call ZXString<char>::Format
	add esp,0xC
	jmp Block65

 Block84:
	mov ecx,esi
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrPOP
	test eax,eax
	je Block87

 Block85:
	mov ecx,esi
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrPOP
	mov ecx,ebp
	mov edi,eax
	call BasicStat::_ZtlSecureGet_nPOP
	cmp edi,eax
	jle Block87

 Block86:
	lea eax,[esp+0x34]
	push 0x1A36
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x2C],0xC
	jmp Block83

 Block87:
	mov edi,dword ptr [esp+0x34]
	push edi
	call is_weapon_sticker
	add esp,4
	test eax,eax
	je Block91

 Block88:
	mov eax,dword ptr [ebx+0x155]
	test eax,eax
	je Block91

 Block89:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call CItemInfo::EQUIPITEM::IsAbleToStickWithWeapon
	test eax,eax
	jne Block91

 Block90:
	lea eax,[esp+0x34]
	push 0x1544
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x2C],0xD
	jmp Block83

 Block91:
	push edi
	call is_tamedmob
	add esp,4
	test eax,eax
	jne Block93

 Block92:
	push edi
	call is_saddle
	add esp,4
	test eax,eax
	je Block95

 Block93:
	mov esi,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0
	mov ecx,ebx
	call GW_CharacterStat::_ZtlSecureGet_nJob
	cwde
	push eax
	push 0x3EC
	call get_novice_skill_as_race
	add esp,8
	push eax
	push ebx
	mov ecx,esi
	call CSkillInfo::GetSkillLevel_0
	xor ecx,ecx
	test eax,eax
	setg cl
	mov eax,ecx
	test eax,eax
	jne Block95

 Block94:
	lea edx,[esp+0x34]
	push 0x20A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x2C],0xE
	jmp Block64

 Block95:
	movzx eax,word ptr [ebx+0xF7]
	push eax
	mov ecx,ebx
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx ecx,ax
	push ecx
	call is_dual_job_born
	add esp,8
	test eax,eax
	je Block98

 Block96:
	push edi
	call is_shield
	add esp,4
	test eax,eax
	je Block98

 Block97:
	lea edx,[esp+0x34]
	push 0x16CE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x2C],0xF
	jmp Block64

 Block98:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block100:
	mov eax,1

 Block101:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0x14
}
}
// CCashShop::DecodeLimitGoods
__SUB_CLASS_THIS(00082DF0, __thiscall, 48301,  CCashShop, int32_t, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,ecx
	mov ecx,ebx
	call CInPacket::Decode2
	movzx esi,ax
	test esi,esi
	jg Block2

 Block1:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 4

 Block2:
	lea eax,[esp+0x10]
	push eax
	push 1
	add edi,0x50
	push esi
	mov ecx,edi
	call ZArray<CS_LIMITGOODS>::_Realloc
	imul esi,0x68
	mov ecx,dword ptr [edi]
	push esi
	push ecx
	mov ecx,ebx
	call CInPacket::DecodeBuffer
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 4
}
}
// CCashShop::OnCashItemResEnableEquipSlotExtDone
_SUB_EXCEPTION_HANDLER(97490)
__SUB_CLASS_THIS(00097490, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_97490
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
	mov edi,dword ptr [esp+0x54]
	mov ecx,edi
	call CInPacket::Decode2
	mov ecx,edi
	movzx esi,ax
	call CInPacket::Decode2
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	movzx ebx,ax
	lea eax,[esp+0x1C]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [esp+0x20]
	mov edi,dword ptr [eax+4]
	test ebp,ebp
	je Block5

 Block1:
	add ebp,0xFFFFFFF0
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block4

 Block3:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block4:
	mov dword ptr [esp+0x20],0

 Block5:
	call Util::FTGetNow
	mov dword ptr [esp+0x24],eax
	xor eax,eax
	mov dword ptr [esp+0x28],edx
	mov dword ptr [esp+0x54],eax
	lea ebp,[esi+0x3B]
	lea ecx,[ebp-0x3B]
	mov dword ptr [esp+0x4C],eax
	test ecx,ecx
	ja Block10

 Block6:
	lea edx,[esp+0x24]
	push edx
	lea eax,[edi+ebp*8+0x341]
	push eax
	call dword ptr [ZImports::_CompareFileTime]
	test eax,eax
	jge Block10

 Block7:
	lea ecx,[esp+0x24]
	push ebx
	push ecx
	call Util::FTAddDay
	mov dword ptr [edi+esi*8+0x51D],edx
	lea edx,[esp+0x20]
	push ebp
	push edx
	mov dword ptr [edi+esi*8+0x519],eax
	call get_bodyaprt_name
	add esp,0x10
	mov esi,eax
	lea eax,[esp+0x14]
	push 0x1474
	push eax
	mov byte ptr [esp+0x54],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x5C]
	push edx
	mov byte ptr [esp+0x58],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x4C],1
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov eax,dword ptr [esp+0x18]
	jmp Block13

 Block10:
	lea esi,[edi+esi*8+0x519]
	push ebx
	push esi
	call Util::FTAddDay
	add esp,8
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esi],eax
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov dword ptr [esp+0x38],edx
	mov dword ptr [esi+4],edx
	call FileTimeToSystemTime
	lea edx,[esp+0x14]
	push ebp
	push edx
	call get_bodyaprt_name
	add esp,8
	mov esi,eax
	lea eax,[esp+0x18]
	push 0x1473
	mov bl,3
	push eax
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	movzx ecx,word ptr [esp+0x3E]
	movzx edx,word ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	push ecx
	movzx ecx,word ptr [esp+0x3E]
	push edx
	movzx edx,word ptr [esp+0x3E]
	push ecx
	movzx ecx,word ptr [esp+0x40]
	push edx
	mov edx,dword ptr [esi]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x70]
	push eax
	mov byte ptr [esp+0x6C],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0x20
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esp+0x14]

 Block13:
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x68]
	mov dword ptr [esp+0x30],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x68]
	add esp,0x14
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
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
// CCashShop::ShowPersonalShop
__SUB_CLASS_THIS(0007D3B0, __thiscall, 48250,  CCashShop, void, long, long) {
__asm {

 Block0:
	add ecx,0x564
	jmp  CCSWnd_Char::ShowPersonalShop
}
}
// CCashShop::SetSearchResult
__SUB_CLASS_THIS(00093C00, __thiscall, 48288,  CCashShop, void, ZList<ZRef<CS_COMMODITY_EX> >&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	lea edi,[esi+0x550]
	mov ecx,edi
	call ZList<ZRef<CS_COMMODITY_EX>>::RemoveAll
	mov eax,dword ptr [esp+0xC]
	push eax
	mov ecx,edi
	call ZList<ZRef<CS_COMMODITY_EX>>::AddTail_List
	push 0xA
	mov ecx,esi
	call CCashShop::OnChangedCategory
	pop edi
	pop esi
	ret 4
}
}
// CCashShop::CheckAlreadyExist
__SUB_CLASS_THIS(0007E750, __thiscall, 48299,  CCashShop, int32_t, long, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+8],0
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	jne Block7

 Block1:
	xor edx,edx
	xor esi,esi

 Block2:
	mov eax,dword ptr [ecx+0x48C]
	test eax,eax
	je Block7

 Block3:
	cmp edx,dword ptr [eax-4]
	jae Block7

 Block4:
	cmp dword ptr [eax+esi+0x10],edi
	je Block6

 Block5:
	inc edx
	add esi,0x37
	jmp Block2

 Block6:
	pop edi
	mov eax,1
	pop esi
	ret 8

 Block7:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	call CWvsContext::IsExist
	neg eax
	sbb eax,eax
	pop edi
	neg eax
	pop esi
	ret 8
}
}
// CCashShop::OnCashItemResBuyPackageDone
_SUB_EXCEPTION_HANDLER(96B60)
__SUB_CLASS_THIS(00096B60, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_96B60
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
	mov edi,dword ptr [esp+0x30]
	mov ecx,edi
	call CInPacket::Decode1
	movzx esi,al
	lea eax,[esp+0x30]
	push eax
	xor ebp,ebp
	push esi
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebp
	call ZArray<GW_CashItemInfo>::_Alloc
	cmp esi,ebp
	mov dword ptr [esp+0x28],ebp
	jle Block5

 Block1:
	mov ebp,dword ptr [esp+0x14]
	mov ecx,esi
	imul ecx,0x37
	push ecx
	push ebp
	mov ecx,edi
	call CInPacket::DecodeBuffer
	test esi,esi
	jle Block5

 Block2:
	lea edx,[ebx+0x48C]
	mov dword ptr [esp+0x1C],edx
	add ebx,0xA50
	mov dword ptr [esp+0x18],esi

 Block3:
	mov ecx,dword ptr [esp+0x1C]
	push 0xFFFFFFFF
	call ZArray<GW_CashItemInfo>::InsertBefore
	mov edi,eax
	mov ecx,0xD
	mov esi,ebp
	rep movsd
	movsw
	push 0
	mov ecx,ebx
	movsb
	call CWnd::InvalidateRect
	push 0
	mov ecx,ebx
	call CCSWnd_Locker::SetSelectedNo
	add ebp,0x37
	sub dword ptr [esp+0x18],1
	jne Block3

 Block4:
	mov edi,dword ptr [esp+0x30]

 Block5:
	mov ecx,edi
	call CInPacket::Decode2
	movzx esi,ax
	mov dword ptr [esp+0x30],0
	mov byte ptr [esp+0x28],1
	test esi,esi
	jne Block7

 Block6:
	lea eax,[esp+0x1C]
	push 0x222
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x30],2
	call ZXString<char>::Format
	add esp,8
	jmp Block8

 Block7:
	lea edx,[esp+0x1C]
	push 0xD93
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x34],3
	call ZXString<char>::Format
	add esp,0xC

 Block8:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	push 0
	push 1
	push 0
	lea ecx,[esp+0x28]
	push 0x4F9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x44]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov byte ptr [esp+0x40],4
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x30]
	add esp,0x14
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZArray<GW_CashItemInfo>::RemoveAll
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
// CCashShop::FindWishList
__SUB_CLASS_THIS(00082CD0, __thiscall, 48300,  CCashShop, long, long) {
__asm {

 Block0:
	sub esp,0xC
	push edi
	lea eax,[esp+0x14]
	mov edi,ecx
	push eax
	mov dword ptr [esp+0x10],edi
	call CCashShop::GetUsableCommodityIndexBySN
	mov dword ptr [esp+4],eax
	test eax,eax
	jge Block2

 Block1:
	or eax,0xFFFFFFFF
	pop edi
	add esp,0xC
	ret 4

 Block2:
	push ebx
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebp
	add ebx,0x3F80
	mov dword ptr [esp+0x1C],0
	lea ebp,[edi+0x4A8]
	push esi

 Block3:
	cmp dword ptr [ebp],0
	je Block9

 Block4:
	push ebp
	mov ecx,edi
	call CCashShop::GetUsableCommodityIndexBySN
	mov esi,eax
	test esi,esi
	jl Block9

 Block5:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [esp+0x10]
	mov edi,dword ptr [eax+esi*8+4]
	mov eax,dword ptr [eax+ecx*8+4]
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	lea ecx,[edi+0x10]
	mov dword ptr [esp+0x14],eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,eax
	jne Block8

 Block6:
	mov eax,dword ptr [ebx]
	mov esi,dword ptr [eax+esi*8+4]
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [eax+edx*8+4]
	mov ecx,dword ptr [eax+0x1C]
	cmp ecx,dword ptr [esi+0x1C]
	jne Block8

 Block7:
	mov edx,dword ptr [eax+0x2C]
	cmp edx,dword ptr [esi+0x2C]
	je Block11

 Block8:
	mov edi,dword ptr [esp+0x18]

 Block9:
	mov eax,dword ptr [esp+0x20]
	inc eax
	add ebp,4
	cmp eax,0xA
	mov dword ptr [esp+0x20],eax
	jl Block3

 Block10:
	pop esi
	pop ebp
	pop ebx
	or eax,0xFFFFFFFF
	pop edi
	add esp,0xC
	ret 4

 Block11:
	mov eax,dword ptr [esp+0x20]
	pop esi
	pop ebp
	pop ebx
	pop edi
	add esp,0xC
	ret 4
}
}
// CCashShop::OnCashItemResLoadWishDone
__SUB_CLASS_THIS(00094020, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov ebx,ecx
	mov ecx,dword ptr [esp+0x10]
	push 0x28
	lea esi,[ebx+0x4A8]
	push esi
	call CInPacket::DecodeBuffer
	mov edi,0xA
	lea esp,[esp]

 Block1:
	cmp dword ptr [esi],0
	je Block3

 Block2:
	push esi
	mov ecx,ebx
	call CCashShop::GetUsableCommodityIndexBySN

 Block3:
	add esi,4
	sub edi,1
	jne Block1

 Block4:
	push edi
	lea ecx,[ebx+0x210C]
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CCashShop::OnMouseMove
__SUB_CLASS_THIS(00092E10, __thiscall, 48245,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x2E8C]
	mov edx,dword ptr [eax+0x34]
	add ecx,0x2E8C
	call edx
	xor eax,eax
	ret 8
}
}
// CCashShop::OnCashItemResRebateFailed
__SUB_CLASS_THIS(00097AD0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	mov dword ptr [esi+0x1C],0
	call CInPacket::Decode1
	movzx eax,al
	push eax
	mov ecx,esi
	call CCashShop::NoticeFailReason
	pop esi
	ret 4
}
}
// CCashShop::OnNoticeFreeCashItem
_SUB_EXCEPTION_HANDLER(959C0)
__SUB_CLASS_THIS(000959C0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_959C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	push 0
	push 0
	push 0
	lea eax,[esp+0x10]
	push 0x4F9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x162C
	push ecx
	mov dword ptr [esp+0x30],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x18]
	add esp,0x14
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x14
	ret 4
}
}
// CCashShop::OnCashItemResLoadLockerFailed
__SUB_CLASS_THIS(000964F0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	movzx eax,al
	push eax
	mov ecx,esi
	call CCashShop::NoticeFailReason
	mov ecx,esi
	call CCashShop::SendTransferFieldPacket
	pop esi
	ret 4
}
}
// CCashShop::GetUsableCommodityIndexBySN
_SUB_EXCEPTION_HANDLER(82520)
__SUB_CLASS_THIS(00082520, __thiscall, 48260,  CCashShop, long, long&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_82520
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
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [ebp+0x3F80]
	add ebp,0x3F80
	mov dword ptr [esp+0x14],ebp
	test edx,edx
	jne Block2

 Block1:
	xor ebx,ebx
	jmp Block3

 Block2:
	mov ebx,dword ptr [edx-4]

 Block3:
	xor edi,edi
	mov dword ptr [esp+0x18],ebx
	test ebx,ebx
	jle Block8

 Block4:
	mov eax,dword ptr [esp+0x38]
	mov esi,dword ptr [eax]
	lea eax,[edx+4]
	jmp Block6

 Block6:
	mov ecx,dword ptr [eax]
	cmp dword ptr [ecx+0xC],esi
	je Block8

 Block7:
	inc edi
	add eax,8
	cmp edi,ebx
	jl Block6

 Block8:
	cmp edi,ebx
	jne Block10

 Block9:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [ecx],0
	or eax,0xFFFFFFFF
	jmp Block24

 Block10:
	mov eax,dword ptr [edx+edi*8+4]
	cmp dword ptr [eax+0x4C],0
	jne Block27

 Block11:
	mov esi,eax
	mov dword ptr [esp+0x24],esi
	test esi,esi
	je Block13

 Block12:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov dword ptr [esp+0x1C],edi
	xor edi,edi
	mov dword ptr [esp+0x30],0
	test ebx,ebx
	jle Block20

 Block14:
	lea esp,[esp]

 Block15:
	mov eax,dword ptr [ebp]
	lea ebx,[edi*8]
	add eax,ebx
	mov eax,dword ptr [eax+4]
	lea ecx,[eax+0x10]
	call TSecType<long>::GetData
	lea ecx,[esi+0x10]
	mov ebp,eax
	call TSecType<long>::GetData
	cmp ebp,eax
	mov ebp,dword ptr [esp+0x14]
	jne Block19

 Block16:
	mov eax,dword ptr [ebp]
	mov ebx,dword ptr [eax+ebx+4]
	mov ecx,dword ptr [ebx+0x1C]
	cmp ecx,dword ptr [esi+0x1C]
	jne Block19

 Block17:
	mov edx,dword ptr [ebx+0x2C]
	cmp edx,dword ptr [esi+0x2C]
	jne Block19

 Block18:
	cmp dword ptr [ebx+0x4C],0
	jne Block25

 Block19:
	inc edi
	cmp edi,dword ptr [esp+0x18]
	jl Block15

 Block20:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test esi,esi
	je Block23

 Block21:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block23

 Block22:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block23:
	mov eax,dword ptr [esp+0x1C]

 Block24:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4

 Block25:
	mov eax,dword ptr [eax+edi*8+4]
	mov ecx,dword ptr [eax+0xC]
	mov edx,dword ptr [esp+0x38]
	lea ebx,[esi+4]
	push ebx
	mov dword ptr [edx],ecx
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block26:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block27:
	mov eax,edi
	jmp Block24
}
}
// CCashShop::OnKey
__SUB_CLASS_THIS(0007F7C0, __thiscall, 48242,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	test edi,edi
	js Block3

 Block1:
	cmp ebx,0x14
	jne Block3

 Block2:
	lea ecx,[esi-4]
	call CCashShop::IsControlingUserPreview
	neg eax
	sbb eax,eax
	inc eax
	push eax
	call CCashShop::SetUserPreviewControl

 Block3:
	lea ecx,[esi-4]
	call CCashShop::IsControlingUserPreview
	test eax,eax
	je Block5

 Block4:
	push edi
	push ebx
	lea ecx,[esi+0x560]
	call CCSWnd_Char::OnKeyRet
	test eax,eax
	jne Block8

 Block5:
	push edi
	push ebx
	lea ecx,[esi+0x2044]
	call CCSWnd_Tab::OnKeyRet
	test eax,eax
	jne Block8

 Block6:
	push edi
	push ebx
	lea ecx,[esi+0x2108]
	call CCSWnd_List::OnKeyRet
	test eax,eax
	jne Block8

 Block7:
	push edi
	push ebx
	lea ecx,[esi+0x2E88]
	call CCSWnd_Status::OnKeyRet

 Block8:
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CCashShop::OnCashItemResIncBuyCharacterCountFailed
__SUB_CLASS_THIS(00097450, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [edi+0x1C],0
	call CInPacket::Decode1
	movzx esi,al
	push esi
	mov ecx,edi
	call CCashShop::NoticeFailReason
	test esi,esi
	je Block3

 Block1:
	cmp esi,2
	je Block3

 Block2:
	cmp esi,1
	jne Block4

 Block3:
	mov ecx,edi
	call CCashShop::SendTransferFieldPacket

 Block4:
	pop edi
	pop esi
	ret 4
}
}
// CCashShop::SENDGIFT::~SENDGIFT
_SUB_EXCEPTION_HANDLER(82350)
__SUB_CLASS_THIS0(00082350, __thiscall, 49344,  CCashShop::SENDGIFT, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_82350
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
	mov eax,dword ptr [esi+8]
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
// CCashShop::OnCashItemResult
// 499770
static uint8_t _SUB_99370_LOOKUP_TABLE_0[105] = {
0, 58, 58, 58, 1, 2, 3, 4, 5, 6, 58, 58, 58, 58, 7, 8, 
9, 10, 11, 58, 12, 13, 58, 14, 15, 16, 17, 18, 19, 20, 21, 22, 
23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 58, 58, 58, 58, 58, 58, 
58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 
58, 58, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 58, 58, 43, 44, 
58, 58, 58, 58, 58, 58, 45, 46, 58, 58, 58, 47, 48, 58, 58, 49, 
58, 50, 51, 52, 53, 54, 55, 56, 57, 
};
__SUB_CLASS_THIS(00099370, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	add eax,0xFFFFFFAC
	cmp eax,0x68
	ja Block59

 Block1:
	movzx eax,byte ptr [eax+_SUB_99370_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5
cmp EAX, 4
je Block6
cmp EAX, 5
je Block7
cmp EAX, 6
je Block8
cmp EAX, 7
je Block9
cmp EAX, 8
je Block10
cmp EAX, 9
je Block11
cmp EAX, 10
je Block12
cmp EAX, 11
je Block17
cmp EAX, 12
je Block18
cmp EAX, 13
je Block19
cmp EAX, 14
je Block20
cmp EAX, 15
je Block21
cmp EAX, 16
je Block22
cmp EAX, 17
je Block23
cmp EAX, 18
je Block24
cmp EAX, 19
je Block25
cmp EAX, 20
je Block26
cmp EAX, 21
je Block27
cmp EAX, 22
je Block28
cmp EAX, 23
je Block29
cmp EAX, 24
je Block30
cmp EAX, 25
je Block31
cmp EAX, 26
je Block32
cmp EAX, 27
je Block33
cmp EAX, 28
je Block34
cmp EAX, 29
je Block35
cmp EAX, 30
je Block36
cmp EAX, 31
je Block37
cmp EAX, 32
je Block45
cmp EAX, 33
je Block38
cmp EAX, 34
je Block39
cmp EAX, 35
je Block40
cmp EAX, 36
je Block41
cmp EAX, 37
je Block13
cmp EAX, 38
je Block14
cmp EAX, 39
je Block15
cmp EAX, 40
je Block16
cmp EAX, 41
je Block46
cmp EAX, 42
je Block47
cmp EAX, 43
je Block42
cmp EAX, 44
je Block43
cmp EAX, 45
je Block44
cmp EAX, 46
je Block59
cmp EAX, 47
je Block51
cmp EAX, 48
je Block52
cmp EAX, 49
je Block48
cmp EAX, 50
je Block49
cmp EAX, 51
je Block50
cmp EAX, 52
je Block53
cmp EAX, 53
je Block54
cmp EAX, 54
je Block55
cmp EAX, 55
je Block56
cmp EAX, 56
je Block57
cmp EAX, 57
je Block58
cmp EAX, 58
je Block59


 Block2:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResLimitGoodsCountChanged
	pop edi
	pop esi
	ret 4

 Block3:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResLoadLockerDone
	pop edi
	pop esi
	ret 4

 Block4:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResLoadLockerFailed
	pop edi
	pop esi
	ret 4

 Block5:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResLoadGiftDone
	pop edi
	pop esi
	ret 4

 Block6:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResLoadGiftFailed
	pop edi
	pop esi
	ret 4

 Block7:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResLoadWishDone
	pop edi
	pop esi
	ret 4

 Block8:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResLoadWishFailed
	pop edi
	pop esi
	ret 4

 Block9:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResSetWishDone
	pop edi
	pop esi
	ret 4

 Block10:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResSetWishFailed
	pop edi
	pop esi
	ret 4

 Block11:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResBuyDone
	pop edi
	pop esi
	ret 4

 Block12:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResBuyFailed
	pop edi
	pop esi
	ret 4

 Block13:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResBuyPackageDone
	pop edi
	pop esi
	ret 4

 Block14:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResBuyPackageFailed
	pop edi
	pop esi
	ret 4

 Block15:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResGiftPackageDone
	pop edi
	pop esi
	ret 4

 Block16:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResGiftPackageFailed
	pop edi
	pop esi
	ret 4

 Block17:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResUseCouponDone
	pop edi
	pop esi
	ret 4

 Block18:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResGiftCouponDone
	pop edi
	pop esi
	ret 4

 Block19:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResUseCouponFailed
	pop edi
	pop esi
	ret 4

 Block20:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResGiftDone
	pop edi
	pop esi
	ret 4

 Block21:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResGiftFailed
	pop edi
	pop esi
	ret 4

 Block22:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResIncSlotCountDone
	pop edi
	pop esi
	ret 4

 Block23:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResIncSlotCountFailed
	pop edi
	pop esi
	ret 4

 Block24:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResIncTrunkCountDone
	pop edi
	pop esi
	ret 4

 Block25:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResIncTrunkCountFailed
	pop edi
	pop esi
	ret 4

 Block26:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResIncCharacterSlotCountDone
	pop edi
	pop esi
	ret 4

 Block27:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResIncCharacterSlotCountFailed
	pop edi
	pop esi
	ret 4

 Block28:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResIncBuyCharacterCountDone
	pop edi
	pop esi
	ret 4

 Block29:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResIncBuyCharacterCountFailed
	pop edi
	pop esi
	ret 4

 Block30:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResEnableEquipSlotExtDone
	pop edi
	pop esi
	ret 4

 Block31:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResEnableEquipSlotExtFailed
	pop edi
	pop esi
	ret 4

 Block32:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResMoveLtoSDone
	pop edi
	pop esi
	ret 4

 Block33:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResMoveLtoSFailed
	pop edi
	pop esi
	ret 4

 Block34:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResMoveStoLDone
	pop edi
	pop esi
	ret 4

 Block35:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResMoveStoLFailed
	pop edi
	pop esi
	ret 4

 Block36:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResDestroyDone
	pop edi
	pop esi
	ret 4

 Block37:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResDestroyFailed
	pop edi
	pop esi
	ret 4

 Block38:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResRebateDone
	pop edi
	pop esi
	ret 4

 Block39:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResRebateFailed
	pop edi
	pop esi
	ret 4

 Block40:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResCoupleDone
	pop edi
	pop esi
	ret 4

 Block41:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResCoupleFailed
	pop edi
	pop esi
	ret 4

 Block42:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResFriendShipDone
	pop edi
	pop esi
	ret 4

 Block43:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResFriendShipFailed
	pop edi
	pop esi
	ret 4

 Block44:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResFreeCashItemDone
	pop edi
	pop esi
	ret 4

 Block45:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResExpireDone
	pop edi
	pop esi
	ret 4

 Block46:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResBuyNormalDone
	pop edi
	pop esi
	ret 4

 Block47:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResBuyNormalFailed
	pop edi
	pop esi
	ret 4

 Block48:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemNameChangeResBuyDone
	pop edi
	pop esi
	ret 4

 Block49:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResTransferWorldDone
	pop edi
	pop esi
	ret 4

 Block50:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResTransferWorldFailed
	pop edi
	pop esi
	ret 4

 Block51:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResPurchaseRecord
	pop edi
	pop esi
	ret 4

 Block52:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResPurchaseRecordFailed
	pop edi
	pop esi
	ret 4

 Block53:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResCashGachaponOpenDone
	pop edi
	pop esi
	ret 4

 Block54:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResCashGachaponOpenFailed
	pop edi
	pop esi
	ret 4

 Block55:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResCashGachaponCopyDone
	pop edi
	pop esi
	ret 4

 Block56:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResCashGachaponCopyFailed
	pop edi
	pop esi
	ret 4

 Block57:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResChangeMaplePointDone
	pop edi
	pop esi
	ret 4

 Block58:
	push edi
	mov ecx,esi
	call CCashShop::OnCashItemResChangeMaplePointFailed

 Block59:
	pop edi
	pop esi
	ret 4
}
}
// CCashShop::TrySendQueryCashRequest
_SUB_EXCEPTION_HANDLER(81BC0)
__SUB_CLASS_THIS0(00081BC0, __thiscall, 48257,  CCashShop, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_81BC0
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
	cmp dword ptr [esi+0x1C],0
	je Block2

 Block1:
	xor eax,eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret

 Block2:
	push 0x112
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	mov dword ptr [esp+0x24],0
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x1C],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CCashShop::OnCashItemResFriendShipFailed
__SUB_CLASS_THIS(00097F40, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,ecx
	mov ecx,ebx
	mov dword ptr [edi+0x1C],0
	call CInPacket::Decode1
	movzx esi,al
	cmp esi,0x1E
	je Block2

 Block1:
	cmp esi,0x1D
	jne Block3

 Block2:
	mov ecx,ebx
	call CInPacket::Decode4
	mov ebx,eax
	push esi
	push ebx
	mov ecx,edi
	call CCashShop::UpdateStock
	push esi
	push ebx
	mov ecx,edi
	call CCashShop::ChangeLimitGoodsState
	lea ecx,[edi+0x210C]
	call CCSWnd_List::ChangePage

 Block3:
	push esi
	mov ecx,edi
	call CCashShop::NoticeFailReason
	test esi,esi
	je Block6

 Block4:
	cmp esi,2
	je Block6

 Block5:
	cmp esi,1
	jne Block7

 Block6:
	mov ecx,edi
	call CCashShop::SendTransferFieldPacket

 Block7:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CCashShop::ShowMessageBox
__SUB_CLASS_THIS(0007D3A0, __thiscall, 48250,  CCashShop, void, long, long) {
__asm {

 Block0:
	add ecx,0x564
	jmp  CCSWnd_Char::ShowMessageBox
}
}
// CCashShop::OnCheckTransferWorldPossibleResult
_SUB_EXCEPTION_HANDLER(980B0)
__SUB_CLASS_THIS(000980B0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_980B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov esi,dword ptr [esp+0x30]
	mov ecx,esi
	mov dword ptr [ebx+0x1C],0
	call CInPacket::Decode4
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,esi
	mov dword ptr [esp+0x14],eax
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0x1C],eax
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	je Block6

 Block1:
	lea edi,[ebx+0x530]
	mov ecx,edi
	call ZArray<ZXString<char>>::RemoveAll
	mov ecx,esi
	call CInPacket::Decode4
	test eax,eax
	jle Block6

 Block2:
	mov dword ptr [esp+0x30],eax
	lea ecx,[ecx]

 Block3:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	call CInPacket::DecodeStr
	push eax
	push 0xFFFFFFFF
	mov ecx,edi
	mov dword ptr [esp+0x30],0
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	sub dword ptr [esp+0x30],1
	jne Block3

 Block6:
	mov eax,dword ptr [esp+0x14]
	cmp eax,8
	ja Block24

 Block7:
	cmp EAX, 0
je Block8
cmp EAX, 1
je Block16
cmp EAX, 2
je Block17
cmp EAX, 3
je Block18
cmp EAX, 4
je Block19
cmp EAX, 5
je Block20
cmp EAX, 6
je Block21
cmp EAX, 7
je Block22
cmp EAX, 8
je Block23


 Block8:
	push 0xC4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x28],1
	test eax,eax
	je Block15

 Block9:
	push ebx
	mov ecx,eax
	call CUITransferWorldLicenseNotice::_ctor_0
	test eax,eax
	je Block15

 Block10:
	add eax,8
	je Block15

 Block11:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block13

 Block12:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov eax,dword ptr [esp+0x1C]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x2C],2
	call CUITransferWorldLicenseNotice::SetBirthDate
	mov ecx,esi
	call CDialog::DoModal
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test esi,esi
	je Block28

 Block14:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CUITransferWorldLicenseNotice>::_ReleaseRaw
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block15:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	jmp Block13

 Block16:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x44],esp
	push 0x22
	push offset _S_CANNOTFINDCHARAC
	push 0
	push 0x22
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x22
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	jmp Block27

 Block17:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0xFCB
	push ecx
	jmp Block26

 Block18:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0xFD2
	jmp Block25

 Block19:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0xFCC
	push eax
	jmp Block26

 Block20:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0xFCD
	push ecx
	jmp Block26

 Block21:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0xFD8
	jmp Block25

 Block22:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0xFD3
	push eax
	jmp Block26

 Block23:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x13AB
	push ecx
	jmp Block26

 Block24:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0xE16

 Block25:
	push edx

 Block26:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0

 Block27:
	call CUtilDlg::Notice
	add esp,0x14

 Block28:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CCashShop::DecodeStock
__SUB_CLASS_THIS(00082DA0, __thiscall, 48301,  CCashShop, int32_t, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,ecx
	mov ecx,ebx
	call CInPacket::Decode2
	movzx esi,ax
	test esi,esi
	jg Block2

 Block1:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 4

 Block2:
	lea eax,[esp+0x10]
	push eax
	push 1
	add edi,0x4C
	push esi
	mov ecx,edi
	call ZArray<CS_STOCK>::_Realloc
	mov edx,dword ptr [edi]
	lea ecx,[esi*8]
	push ecx
	push edx
	mov ecx,ebx
	call CInPacket::DecodeBuffer
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 4
}
}
// CCashShop::Init
_SUB_EXCEPTION_HANDLER(84920)
__SUB_CLASS_THIS(00084920, __thiscall, 48241,  CCashShop, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_84920
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
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::ClearFieldUI
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor ebx,ebx
	lea edx,[esi+0x20]
	xor ecx,ecx
	mov dword ptr [eax+0x3868],ebx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x2C]
	xor ecx,ecx
	mov dword ptr [esi+0x28],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x38]
	xor ecx,ecx
	mov dword ptr [esi+0x34],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x40],eax
	mov dword ptr [esi+0x540],ebx
	mov dword ptr [esi+0x544],ebx
	mov eax,1
	mov dword ptr [esi+0x53C],eax
	mov dword ptr [esi+0x548],eax
	xor eax,eax
	mov dword ptr [esi+0x4A8],eax
	mov dword ptr [esi+0x4AC],eax
	mov dword ptr [esi+0x4B0],eax
	mov dword ptr [esi+0x4B4],eax
	mov dword ptr [esi+0x4B8],eax
	mov dword ptr [esi+0x4BC],eax
	mov dword ptr [esi+0x4C0],eax
	mov dword ptr [esi+0x4C4],eax
	mov dword ptr [esi+0x4C8],eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esi+0x4CC],eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block5

 Block1:
	lea ebp,[eax-0x10]
	lea ebx,[ebp+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block4

 Block3:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block4:
	mov dword ptr [esp+0x20],0

 Block5:
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	mov ecx,dword ptr [edi+0x3D]
	push ecx
	lea ebp,[edi+0x39]
	push ebp
	mov dword ptr [esp+0x5C],eax
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	mov ebx,dword ptr [ZImports::_VariantInit]
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,1
	jne Block28

 Block6:
	lea ecx,[esp+0x2C]
	push ecx
	call ebx
	lea edx,[esp+0x2C]
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
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x58],1
	call ebx
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	push 0
	push 0
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x53F
	mov bl,2
	push ecx
	mov byte ptr [esp+0x70],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x68],3
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x68],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block15

 Block13:
	cmp eax,0x80004002
	je Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov edi,8
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x3C],di
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [esp+0x54],1
	cmp word ptr [esp+0x1C],di
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov byte ptr [esp+0x54],0
	cmp word ptr [esp+0x2C],di
	jne Block27

 Block24:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx

 Block25:
	test eax,eax
	je Block81

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block27:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block81

 Block28:
	mov eax,dword ptr [edi+0x3D]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,0x15
	je Block30

 Block29:
	cmp ecx,0x7D0
	jne Block49

 Block30:
	lea ecx,[esp+0x1C]
	push ecx
	call ebx
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x58],5
	call ebx
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	push 0
	push 0
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A72
	mov bl,6
	push ecx
	mov byte ptr [esp+0x70],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x68],7
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x68],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block39

 Block37:
	cmp eax,0x80004002
	je Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	mov edi,8
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x3C],di
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov byte ptr [esp+0x54],5
	cmp word ptr [esp+0x2C],di
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov byte ptr [esp+0x54],0
	cmp word ptr [esp+0x1C],di
	jne Block67

 Block48:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	jmp Block25

 Block49:
	mov eax,dword ptr [edi+0x3D]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,0x16
	je Block51

 Block50:
	cmp ecx,0x7D1
	jne Block68

 Block51:
	lea ecx,[esp+0x1C]
	push ecx
	call ebx
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x58],9
	call ebx
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	push 0
	push 0
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A73
	mov bl,0xA
	push ecx
	mov byte ptr [esp+0x70],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x68],0xB
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x68],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block60

 Block58:
	cmp eax,0x80004002
	je Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	mov edi,8
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x3C],di
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [esp+0x54],9
	cmp word ptr [esp+0x2C],di
	jne Block46

 Block65:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block47

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block67:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block81

 Block68:
	mov eax,dword ptr [edi+0x3D]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add esp,8
	add ecx,edx
	jne Block73

 Block69:
	cmp word ptr [edi+0xF7],1
	jne Block73

 Block70:
	push offset _D_VTMISSING
	lea ecx,[esp+0x30]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x58],0xD
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x540
	mov bl,0xE
	push ecx
	mov byte ptr [esp+0x70],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x68],0xF
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea edx,[esp+0x30]
	mov byte ptr [esp+0x68],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov byte ptr [esp+0x5C],0x10
	jmp Block80

 Block73:
	mov eax,dword ptr [edi+0x3D]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add esp,8
	cmp ecx,3
	push offset _D_VTMISSING
	lea ecx,[esp+0x30]
	jne Block77

 Block74:
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x58],0x11
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1970
	mov bl,0x12
	push ecx
	mov byte ptr [esp+0x70],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x68],0x13
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea edx,[esp+0x30]
	mov byte ptr [esp+0x68],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov byte ptr [esp+0x5C],0x14
	jmp Block80

 Block77:
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x58],0x15
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x53E
	push edx
	mov byte ptr [esp+0x70],0x16
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x68],0x17
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	lea eax,[esp+0x30]
	mov byte ptr [esp+0x68],0x16
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov byte ptr [esp+0x5C],0x18

 Block80:
	mov ecx,eax
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x54],0
	call Ztl_variant_t::~Ztl_variant_t

 Block81:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	mov eax,0xD
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x14]
	mov bl,0x19
	mov byte ptr [esp+0x54],bl
	mov dword ptr [esp+0x34],eax
	cmp eax,ebp
	je Block85

 Block84:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block85:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x54],0x1A
	cmp ecx,ebp
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x30]
	push edx
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x34]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x54C]
	cmp edi,eax
	je Block92

 Block88:
	mov dword ptr [esi+0x54C],eax
	cmp eax,ebp
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block90:
	cmp edi,ebp
	je Block92

 Block91:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block92:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block94

 Block93:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block94:
	mov edi,8
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov byte ptr [esp+0x54],0
	cmp word ptr [esp+0x1C],di
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov edi,dword ptr [esi+0x54C]
	cmp edi,ebp
	jne Block104

 Block103:
	push 0x80004003
	call _com_issue_error

 Block104:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFF
	push edi
	call eax
	cmp eax,ebp
	jge Block106

 Block105:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block106:
	mov edi,dword ptr [esi+0x54C]
	cmp edi,ebp
	jne Block108

 Block107:
	push 0x80004003
	call _com_issue_error

 Block108:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	cmp eax,ebp
	jge Block110

 Block109:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block110:
	push ebp
	push 1
	push esi
	push 1
	push ebp
	push 0x13C
	push 0x100
	push ebp
	push ebp
	lea ecx,[esi+0x564]
	call CWnd::CreateWnd
	push ebp
	push 1
	push esi
	push 1
	push ebp
	push 0x68
	push 0x100
	push 0x13E
	push 0xFFFFFFFF
	lea ecx,[esi+0xA50]
	call CWnd::CreateWnd
	push ebp
	push 1
	push esi
	push 1
	push ebp
	push 0xA3
	push 0xF6
	push 0x1AA
	push ebp
	lea ecx,[esi+0x1534]
	call CWnd::CreateWnd
	push ebp
	push 1
	push esi
	push 1
	push ebp
	push 0x4E
	push 0x1FC
	push 0x11
	push 0x110
	lea ecx,[esi+0x2048]
	call CWnd::CreateWnd
	push ebp
	push 1
	push esi
	push 1
	push ebp
	push 0x1AE
	push 0x19C
	push 0x5F
	push 0x113
	lea ecx,[esi+0x210C]
	call CWnd::CreateWnd
	push ebp
	push 1
	push esi
	push 1
	push ebp
	push 0x166
	push 0x5A
	push 0x9D
	lea edi,[esi+0x2DF4]
	push 0x2B2
	mov ecx,edi
	call CWnd::CreateWnd
	push ebp
	push 1
	push esi
	push 1
	push ebp
	push 0x38
	push 0x221
	push 0x212
	push 0xFE
	lea ecx,[esi+0x2E8C]
	call CWnd::CreateWnd
	push ebp
	push 1
	push esi
	push 1
	push ebp
	push 0x16
	push 0x59
	push 0x61
	push 0x2B2
	lea ecx,[esi+0x2F30]
	call CWnd::CreateWnd
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 1
	call CInputSystem::ShowCursor
	lea eax,[esp+0x18]
	push 0x50A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push ebp
	push ebp
	push ebp
	push 1
	push eax
	mov byte ptr [esp+0x68],0x1B
	call CSoundMan::PlayBGM
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],0
	cmp eax,ebp
	je Block112

 Block111:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block112:
	mov ecx,dword ptr [esp+0x5C]
	mov edx,dword ptr [ecx]
	mov dword ptr [esi+0x4EC],edx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x40CC]
	cmp eax,ebp
	je Block114

 Block113:
	push eax
	mov ecx,edi
	call CCSWnd_Best::GoToCommoditySN

 Block114:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [ecx+0x40CC],ebp
	mov ecx,esi
	call CStage::FadeIn
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esi+0x3B4C],ebp
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebp
	je Block116

 Block115:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block116:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 4
}
}
// CCashShop::IsKindOf
__SUB_CLASS_THIS(00092E40, __thiscall, 48320,  CCashShop, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCashShop::ms_RTTI_CCashShop
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
// CCashShop::OnCashItemResGiftPackageDone
_SUB_EXCEPTION_HANDLER(96DC0)
__SUB_CLASS_THIS(00096DC0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_96DC0
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
	mov esi,dword ptr [esp+0x2C]
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call CInPacket::Decode4
	mov ecx,esi
	mov edi,eax
	call CInPacket::Decode2
	mov ecx,esi
	call CInPacket::Decode2
	mov ecx,esi
	call CInPacket::Decode4
	push edi
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov esi,eax
	call CItemInfo::GetSpecialName
	mov dword ptr [esp+0x2C],0
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [esp+0xC]
	push esi
	push edx
	push eax
	lea ecx,[esp+0x38]
	push offset _S_SWASSENTTOSDNXPR
	push ecx
	mov byte ptr [esp+0x38],2
	call ZXString<char>::Format
	add esp,0x14
	push 0
	push 1
	push 0
	lea edx,[esp+0x20]
	push 0x4F9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	lea eax,[esp+0x40]
	mov dword ptr [esp+0x2C],esp
	push eax
	mov byte ptr [esp+0x3C],3
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x24],2
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x24],1
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CCashShop::SendBuyTransferWorldItemPacket
_SUB_EXCEPTION_HANDLER(82F30)
__SUB_CLASS_THIS(00082F30, __thiscall, 48250,  CCashShop, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_82F30
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
	push 0x113
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x35
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x28]
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [esp+0x2C]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x1C],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 8
}
}
// CCashShop::IsBuyableCommodity
_SUB_EXCEPTION_HANDLER(872F0)
__SUB_CLASS_THIS(000872F0, __thiscall, 48296,  CCashShop, int32_t, long, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_872F0
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
	mov eax,dword ptr [esp+0x34]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCommodityBySN
	xor ebx,ebx
	mov dword ptr [esp+0x2C],ebx
	cmp dword ptr [esp+0x18],ebx
	jne Block8

 Block1:
	lea edx,[esp+0x34]
	push 0x23F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x38]
	push eax
	mov byte ptr [esp+0x30],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block7

 Block4:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x18]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,ebx
	je Block7

 Block6:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block7:
	xor eax,eax
	jmp Block23

 Block8:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block13

 Block9:
	lea esi,[eax-0x10]
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block12

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block12:
	mov dword ptr [esp+0x20],ebx

 Block13:
	mov ecx,dword ptr [edi+0x35]
	push ecx
	lea edx,[edi+0x33]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx ecx,al
	mov eax,dword ptr [esp+0x20]
	add esp,8
	cmp ecx,dword ptr [eax+0x34]
	jge Block17

 Block14:
	lea edx,[esp+0x34]
	push 0x16C5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx+0x34]
	mov eax,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [esp+0x40]
	push eax
	mov byte ptr [esp+0x38],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x40]
	add esp,0xC
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	xor eax,eax
	jmp Block23

 Block17:
	cmp dword ptr [eax+0x30],ebx
	je Block22

 Block18:
	mov ecx,dword ptr [edi+0xB1]
	push ecx
	add edi,0xAD
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx edx,ax
	mov eax,dword ptr [esp+0x20]
	add esp,8
	cmp edx,dword ptr [eax+0x30]
	jge Block22

 Block19:
	lea ecx,[esp+0x34]
	push 0x16C6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [edx+0x30]
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x38]
	push ecx
	push eax
	push edx
	mov byte ptr [esp+0x38],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x40]
	add esp,0xC
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	xor eax,eax
	jmp Block23

 Block22:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	mov eax,1

 Block23:
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
// CCashShop::UpdateStock
__SUB_CLASS_THIS(0007E7A0, __thiscall, 48270,  CCashShop, int32_t, long, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [ecx+0x4C]
	test esi,esi
	je Block10

 Block1:
	mov eax,esi
	test eax,eax
	je Block10

 Block2:
	cmp dword ptr [eax-4],0
	je Block10

 Block3:
	mov ecx,eax
	test ecx,ecx
	je Block5

 Block4:
	mov ecx,dword ptr [ecx-4]

 Block5:
	lea eax,[ecx-1]
	test eax,eax
	jl Block10

 Block6:
	mov edx,dword ptr [esp+8]
	lea ecx,[esi+eax*8]
	jmp Block8

 Block8:
	cmp dword ptr [ecx],edx
	je Block11

 Block9:
	dec eax
	sub ecx,8
	test eax,eax
	jge Block8

 Block10:
	xor eax,eax
	pop esi
	ret 8

 Block11:
	mov ecx,dword ptr [esp+0xC]
	sub ecx,0x1D
	je Block14

 Block12:
	sub ecx,1
	jne Block10

 Block13:
	mov dword ptr [esi+eax*8+4],1
	mov eax,1
	pop esi
	ret 8

 Block14:
	mov dword ptr [esi+eax*8+4],2
	mov eax,1
	pop esi
	ret 8
}
}
// CCashShop::OnSetFocus
__SUB_CLASS_THIS(00092E00, __thiscall, 48244,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,1
	ret 4
}
}
// CCashShop::IsZeroGoods
__SUB_CLASS_THIS(0007E920, __thiscall, 48300,  CCashShop, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x508]
	sub esp,0x10
	test eax,eax
	je Block2

 Block1:
	cmp dword ptr [eax-4],0
	ja Block3

 Block2:
	xor eax,eax
	add esp,0x10
	ret 4

 Block3:
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push edi
	xor edx,edx
	xor edi,edi
	push esi
	jmp Block5

 Block5:
	mov eax,dword ptr [ecx+0x508]
	test eax,eax
	je Block20

 Block6:
	cmp edx,dword ptr [eax-4]
	jae Block20

 Block7:
	mov esi,eax
	add esi,edi
	je Block10

 Block8:
	cmp ebx,dword ptr [esi]
	jl Block10

 Block9:
	cmp ebx,dword ptr [esi+4]
	jle Block11

 Block10:
	inc edx
	add edi,0x44
	jmp Block5

 Block11:
	lea eax,[esp+0xC]
	push eax
	call GetLocalTime
	movzx eax,word ptr [esp+0xC]
	movzx ecx,word ptr [esp+0xE]
	imul eax,0x64
	movzx edx,word ptr [esp+0x12]
	movzx edi,word ptr [esp+0x10]
	add eax,ecx
	mov ecx,dword ptr [esi+0x14]
	imul eax,0x64
	add eax,edx
	movzx edx,word ptr [esp+0x14]
	test cl,2
	je Block14

 Block12:
	cmp dword ptr [esi+0x18],eax
	jg Block20

 Block13:
	cmp eax,dword ptr [esi+0x1C]
	jg Block20

 Block14:
	test cl,4
	je Block16

 Block15:
	cmp dword ptr [esi+edi*4+0x28],0
	je Block20

 Block16:
	test cl,8
	je Block19

 Block17:
	cmp dword ptr [esi+0x20],edx
	jg Block20

 Block18:
	mov eax,dword ptr [esi+0x24]
	dec eax
	cmp edx,eax
	jg Block20

 Block19:
	mov eax,dword ptr [esi+0xC]
	pop esi
	pop edi
	pop ebx
	add esp,0x10
	ret 4

 Block20:
	pop esi
	pop edi
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 4
}
}
// CCashShop::OnCashItemResChangeMaplePointFailed
__SUB_CLASS_THIS(00095910, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	push 0x1629
	push eax
	mov dword ptr [ecx+0x1C],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x18
	ret 4
}
}
// CCashShop::OnWear
__SUB_CLASS_THIS(0007D330, __thiscall, 48249,  CCashShop, void, long, long, int32_t) {
__asm {

 Block0:
	add ecx,0x564
	jmp  CCSWnd_Char::OnWear
}
}
// CCashShop::OnCashItemResFreeCashItemDone
__SUB_CLASS_THIS(00094880, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push 0x37
	push 0xFFFFFFFF
	lea ecx,[esi+0x48C]
	call ZArray<GW_CashItemInfo>::InsertBefore
	mov ecx,dword ptr [esp+0xC]
	push eax
	call CInPacket::DecodeBuffer
	add esi,0xA50
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	push 0
	mov ecx,esi
	call CCSWnd_Locker::SetSelectedNo
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	push 1
	mov ecx,esi
	call CCSWnd_Locker::SetSelectedNo
	pop esi
	ret 4
}
}
// CCashShop::OnRebateLockerItem
__SUB_CLASS_THIS(00095BC0, __thiscall, 48246,  CCashShop, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	dec eax
	cmp eax,0x44
	ja Block58

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block58
cmp EAX, 2
je Block3
cmp EAX, 3
je Block4
cmp EAX, 4
je Block5
cmp EAX, 5
je Block47
cmp EAX, 6
je Block48
cmp EAX, 7
je Block49
cmp EAX, 8
je Block50
cmp EAX, 9
je Block6
cmp EAX, 10
je Block7
cmp EAX, 11
je Block58
cmp EAX, 12
je Block58
cmp EAX, 13
je Block15
cmp EAX, 14
je Block58
cmp EAX, 15
je Block11
cmp EAX, 16
je Block10
cmp EAX, 17
je Block12
cmp EAX, 18
je Block13
cmp EAX, 19
je Block14
cmp EAX, 20
je Block28
cmp EAX, 21
je Block9
cmp EAX, 22
je Block16
cmp EAX, 23
je Block17
cmp EAX, 24
je Block18
cmp EAX, 25
je Block19
cmp EAX, 26
je Block20
cmp EAX, 27
je Block21
cmp EAX, 28
je Block22
cmp EAX, 29
je Block23
cmp EAX, 30
je Block24
cmp EAX, 31
je Block25
cmp EAX, 32
je Block26
cmp EAX, 33
je Block27
cmp EAX, 34
je Block58
cmp EAX, 35
je Block58
cmp EAX, 36
je Block29
cmp EAX, 37
je Block30
cmp EAX, 38
je Block58
cmp EAX, 39
je Block58
cmp EAX, 40
je Block58
cmp EAX, 41
je Block58
cmp EAX, 42
je Block8
cmp EAX, 43
je Block58
cmp EAX, 44
je Block58
cmp EAX, 45
je Block31
cmp EAX, 46
je Block58
cmp EAX, 47
je Block32
cmp EAX, 48
je Block33
cmp EAX, 49
je Block34
cmp EAX, 50
je Block35
cmp EAX, 51
je Block36
cmp EAX, 52
je Block37
cmp EAX, 53
je Block38
cmp EAX, 54
je Block39
cmp EAX, 55
je Block40
cmp EAX, 56
je Block41
cmp EAX, 57
je Block42
cmp EAX, 58
je Block43
cmp EAX, 59
je Block44
cmp EAX, 60
je Block45
cmp EAX, 61
je Block46
cmp EAX, 62
je Block51
cmp EAX, 63
je Block52
cmp EAX, 64
je Block55
cmp EAX, 65
je Block53
cmp EAX, 66
je Block54
cmp EAX, 67
je Block56
cmp EAX, 68
je Block57


 Block2:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x228
	push eax
	jmp Block60

 Block3:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x229
	jmp Block59

 Block4:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x22A
	push edx
	jmp Block60

 Block5:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x22B
	push eax
	jmp Block60

 Block6:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x22C
	jmp Block59

 Block7:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x22D
	push edx
	jmp Block60

 Block8:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x22E
	push eax
	jmp Block60

 Block9:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x22F
	jmp Block59

 Block10:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x230
	push edx
	jmp Block60

 Block11:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x231
	push eax
	jmp Block60

 Block12:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x232
	jmp Block59

 Block13:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x233
	push edx
	jmp Block60

 Block14:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x234
	push eax
	jmp Block60

 Block15:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x235
	jmp Block59

 Block16:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x239
	push edx
	jmp Block60

 Block17:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x23A
	push eax
	jmp Block60

 Block18:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x366
	jmp Block59

 Block19:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x23B
	push edx
	jmp Block60

 Block20:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x23C
	push eax
	jmp Block60

 Block21:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x258
	jmp Block59

 Block22:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x9F2
	push edx
	jmp Block60

 Block23:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x9F3
	push eax
	jmp Block60

 Block24:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x23D
	jmp Block59

 Block25:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x1A8B
	push edx
	jmp Block60

 Block26:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x23E
	push eax
	jmp Block60

 Block27:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x213
	jmp Block59

 Block28:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0xCEB
	push edx
	jmp Block60

 Block29:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0xCEC
	push eax
	jmp Block60

 Block30:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0xE0A
	jmp Block59

 Block31:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x117B
	push edx
	jmp Block60

 Block32:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0xFFFFFFFF
	push offset _S_THECOUPONSYSTEMW
	call ZXString<char>::CreateFromCharStr
	call CUtilDlg::Notice
	add esp,0x14
	ret 4

 Block33:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0xECD
	push eax
	jmp Block60

 Block34:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0xFC1
	jmp Block59

 Block35:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0xFC2
	push edx
	jmp Block60

 Block36:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0xFC3
	push eax
	jmp Block60

 Block37:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0xFC4
	jmp Block59

 Block38:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0xFC5
	push edx
	jmp Block60

 Block39:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0xFC6
	push eax
	jmp Block60

 Block40:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0xFC7
	jmp Block59

 Block41:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0xFCB
	push edx
	jmp Block60

 Block42:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0xFCE
	push eax
	jmp Block60

 Block43:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0xFCF
	jmp Block59

 Block44:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0xFD0
	push edx
	jmp Block60

 Block45:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0xFD1
	push eax
	jmp Block60

 Block46:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0xFDD
	jmp Block59

 Block47:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x11C9
	push edx
	jmp Block60

 Block48:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x11CA
	push eax
	jmp Block60

 Block49:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x11CB
	jmp Block59

 Block50:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x11CC
	push edx
	jmp Block60

 Block51:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x13DB
	push eax
	jmp Block60

 Block52:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x13DC
	jmp Block59

 Block53:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x1A6D
	push edx
	jmp Block60

 Block54:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x1A6E
	push eax
	jmp Block60

 Block55:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x16A0
	jmp Block59

 Block56:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x22E
	push edx
	jmp Block60

 Block57:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x16C8
	push eax
	jmp Block60

 Block58:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x23F

 Block59:
	push ecx

 Block60:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	ret 4
}
}
// CCashShop::GetCategoryIndex
__SUB_CLASS_THIS(0007E590, __thiscall, 48258,  CCashShop, void, long, long&, long&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0x10]
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x18]
	mov dword ptr [edi],0xFFFFFFFF
	xor edx,edx
	mov dword ptr [ebx],0
	xor esi,esi

 Block1:
	mov eax,dword ptr [ecx+0x48]
	test eax,eax
	je Block8

 Block2:
	cmp edx,dword ptr [eax-4]
	jae Block8

 Block3:
	cmp dword ptr [esi+eax],ebp
	jne Block7

 Block4:
	cmp dword ptr [edi],0xFFFFFFFF
	jne Block6

 Block5:
	mov dword ptr [edi],edx

 Block6:
	inc dword ptr [ebx]

 Block7:
	inc edx
	add esi,0x1C
	jmp Block1

 Block8:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC
}
}
// CCashShop::OnCashItemResDestroyFailed
__SUB_CLASS_THIS(00097950, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	mov dword ptr [esi+0x1C],0
	call CInPacket::Decode1
	movzx eax,al
	push eax
	mov ecx,esi
	call CCashShop::NoticeFailReason
	pop esi
	ret 4
}
}
// CCashShop::_ZtlSecureGet_m_nMaplePoint
__SUB_CLASS0(0007DA20, __fastcall, 48272,  CCashShop, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x34]
	push eax
	add ecx,0x2C
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CCashShop::OnCashItemResBuyNormalDone
_SUB_EXCEPTION_HANDLER(95310)
__SUB_CLASS_THIS(00095310, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_95310
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
	mov edi,dword ptr [esp+0x2C]
	xor ebp,ebp
	mov ecx,edi
	mov dword ptr [esi+0x1C],ebp
	call CInPacket::Decode4
	mov ebx,eax
	lea eax,[esp+0x2C]
	push eax
	push ebx
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x34],ebp
	call ZArray<_ULARGE_INTEGER>::_Alloc
	cmp ebx,ebp
	mov dword ptr [esp+0x24],ebp
	jle Block4

 Block1:
	mov ebp,dword ptr [esp+0x2C]
	lea ecx,[ebx*8]
	push ecx
	push ebp
	mov ecx,edi
	call CInPacket::DecodeBuffer
	test ebx,ebx
	jle Block4

 Block2:
	lea edx,[esi+0xA50]
	lea edi,[esi+0x1534]
	mov dword ptr [esp+0x14],edx
	lea esi,[ebp+2]

 Block3:
	mov ecx,dword ptr [esi+2]
	movzx ebp,word ptr [esi]
	mov eax,0x431BDE83
	imul ecx
	mov ecx,dword ptr [TSingleton<CCSWnd_Inventory>::ms_pInstance]
	mov ecx,dword ptr [ecx+0x84]
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	dec eax
	push eax
	call CCtrlTab::SetTab
	mov ecx,dword ptr [esp+0x14]
	push 0
	call CWnd::InvalidateRect
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	push ebp
	mov ecx,edi
	call CCSWnd_Inventory::SetSelectedNo
	add esi,8
	sub ebx,1
	jne Block3

 Block4:
	push 0
	push 0
	push 0
	lea edx,[esp+0x20]
	push 0x4F9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x222
	push eax
	mov byte ptr [esp+0x40],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<_ULARGE_INTEGER>::RemoveAll
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4
}
}
// CCashShop::OnPacket
__SUB_CLASS_THIS(000997E0, __thiscall, 48291,  CCashShop, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFE82
	cmp eax,0xE
	ja Block15

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block5
cmp EAX, 3
je Block4
cmp EAX, 4
je Block12
cmp EAX, 5
je Block6
cmp EAX, 6
je Block7
cmp EAX, 7
je Block15
cmp EAX, 8
je Block8
cmp EAX, 9
je Block9
cmp EAX, 10
je Block10
cmp EAX, 11
je Block11
cmp EAX, 12
je Block15
cmp EAX, 13
je Block13
cmp EAX, 14
je Block14


 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CCashShop::OnChargeParamResult
	ret 8

 Block3:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CCashShop::OnQueryCashResult
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CCashShop::OnPurchaseExpChanged
	ret 8

 Block5:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CCashShop::OnCashItemResult
	ret 8

 Block6:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CCashShop::OnCheckDuplicatedIDResult
	ret 8

 Block7:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CCashShop::OnCheckNameChangePossibleResult
	ret 8

 Block8:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CCashShop::OnCheckTransferWorldPossibleResult
	ret 8

 Block9:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CCashShop::OnCashShopGachaponStampResult
	ret 8

 Block10:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CCashShop::OnCashItemGachaponResult
	ret 8

 Block11:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CCashShop::OnCashItemGachaponResult
	ret 8

 Block12:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CCashShop::OnGiftMateInfoResult
	ret 8

 Block13:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CCashShop::OnOneADay
	ret 8

 Block14:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CCashShop::OnNoticeFreeCashItem

 Block15:
	ret 8
}
}
// CCashShop::OnCashItemGachaponResult
__SUB_CLASS_THIS(00095820, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	mov ebx,dword ptr [esp+0x14]
	push ebp
	push esi
	mov esi,ecx
	push edi
	mov ecx,ebx
	mov dword ptr [esp+0x10],esi
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,0xC1
	jne Block11

 Block1:
	push 8
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebx
	call CInPacket::DecodeBuffer
	mov ecx,ebx
	call CInPacket::Decode4
	xor ecx,ecx
	add esi,0x48C
	xor edi,edi

 Block2:
	mov edx,dword ptr [esi]
	test edx,edx
	je Block9

 Block3:
	cmp ecx,dword ptr [edx-4]
	jae Block9

 Block4:
	mov ebp,dword ptr [edi+edx]
	cmp ebp,dword ptr [esp+0x14]
	jne Block6

 Block5:
	mov edx,dword ptr [edi+edx+4]
	cmp edx,dword ptr [esp+0x18]
	je Block7

 Block6:
	inc ecx
	add edi,0x37
	jmp Block2

 Block7:
	mov edx,dword ptr [esi]
	imul ecx,0x37
	mov word ptr [edx+ecx+0x18],ax
	test eax,eax
	jne Block9

 Block8:
	mov eax,dword ptr [esi]
	add eax,ecx
	push eax
	mov ecx,esi
	call ZArray<GW_CashItemInfo>::RemoveAt

 Block9:
	push 0x37
	push 0xFFFFFFFF
	mov ecx,esi
	call ZArray<GW_CashItemInfo>::InsertBefore
	push eax
	mov ecx,ebx
	call CInPacket::DecodeBuffer
	mov ecx,dword ptr [esp+0x10]
	mov ecx,dword ptr [ecx+0x534]
	test ecx,ecx
	je Block13

 Block10:
	push ebx
	call CUICashItemGachapon::OnCashItemGachaponResult
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4

 Block11:
	cmp eax,0xC0
	jne Block13

 Block12:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x22C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block13:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4
}
}
// CCashShop::SetPet
__SUB_CLASS_THIS(0007D340, __thiscall, 48249,  CCashShop, void, long, long, int32_t) {
__asm {

 Block0:
	add ecx,0x564
	jmp  CCSWnd_Char::SetPet
}
}
// CCashShop::OnCashItemResGiftDone
_SUB_EXCEPTION_HANDLER(97050)
__SUB_CLASS_THIS(00097050, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_97050
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
	mov edi,dword ptr [esp+0x34]
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	mov ecx,edi
	mov dword ptr [esp+0x2C],0
	call CInPacket::Decode4
	mov ecx,edi
	mov ebp,eax
	call CInPacket::Decode2
	mov ecx,edi
	movzx ebx,ax
	call CInPacket::Decode4
	push ebp
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov edi,eax
	call CItemInfo::GetItemName
	mov dword ptr [esp+0x34],0
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x18]
	push edi
	push edx
	push eax
	push ebx
	lea ecx,[esp+0x44]
	push offset _S_DSWASSENTTOSDNXP
	push ecx
	mov byte ptr [esp+0x44],2
	call ZXString<char>::Format
	add esp,0x18
	cmp dword ptr [esi+0x514],0
	jne Block3

 Block1:
	push 0
	push 0
	push 0
	lea edx,[esp+0x28]
	push 0x4F9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	lea eax,[esp+0x48]
	mov dword ptr [esp+0x34],esp
	push eax
	mov byte ptr [esp+0x44],3
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x30]
	add esp,0x14
	mov byte ptr [esp+0x2C],2
	test eax,eax
	je Block6

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	jmp Block5

 Block3:
	lea ecx,[esp+0x14]
	push ecx
	push 0xFFFFFFFF
	lea ecx,[esi+0x520]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	add dword ptr [esi+0x518],edi
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebp
	lea edx,[esp+0x20]
	push edx
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esi+0x51C]
	mov byte ptr [esp+0x30],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x2C],2
	test eax,eax
	je Block6

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release

 Block5:
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x2C],1
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
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
// CCashShop::OnCashItemResUseCouponFailed
// 49701C
static uint8_t _SUB_96F90_LOOKUP_TABLE_0[38] = {
0, 2, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 
2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 2, 2, 2, 2, 
2, 2, 2, 2, 2, 1, 
};
__SUB_CLASS_THIS(00096F90, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	push edi
	mov dword ptr [esi+0x1C],0
	call CInPacket::Decode1
	movzx edi,al
	cmp edi,0x25
	ja Block3

 Block1:
	movzx eax,byte ptr [edi+_SUB_96F90_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block3


 Block2:
	push edi
	mov ecx,esi
	call CCashShop::NoticeFailReason
	mov ecx,esi
	call CCashShop::SendTransferFieldPacket
	jmp Block4

 Block3:
	push edi
	mov ecx,esi
	call CCashShop::NoticeFailReason

 Block4:
	cmp edi,0xF
	jne Block6

 Block5:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x236
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,esi
	call CCashShop::OnStatusExit

 Block6:
	pop edi
	pop esi
	ret 4
}
}
// CCashShop::OnCashItemResUseCouponDone
_SUB_EXCEPTION_HANDLER(98670)
__SUB_CLASS_THIS(00098670, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_98670
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
	mov ebx,ecx
	mov dword ptr [esp+0x3C],ebx
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x64],esi
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x38],esi
	mov dword ptr [esp+0x34],esi
	mov dword ptr [esp+0x58],esi
	mov dword ptr [esp+0x1C],esi
	mov dword ptr [esp+0x28],esi
	mov dword ptr [esp+0x18],esi
	mov ebp,dword ptr [esp+0x6C]
	mov ecx,ebp
	mov byte ptr [esp+0x64],7
	call CInPacket::Decode1
	movzx edi,al
	lea eax,[esp+0x6C]
	push eax
	push edi
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x38],edi
	mov dword ptr [esp+0x2C],esi
	call ZArray<GW_CashItemInfo>::_Alloc
	cmp edi,esi
	mov byte ptr [esp+0x64],8
	jle Block13

 Block1:
	mov edx,dword ptr [esp+0x24]
	mov ecx,edi
	imul ecx,0x37
	push ecx
	push edx
	mov ecx,ebp
	call CInPacket::DecodeBuffer
	cmp edi,esi
	jle Block13

 Block2:
	mov ebp,dword ptr [esp+0x24]
	add ebx,0xA50
	add ebp,0x18
	mov dword ptr [esp+0x20],edi
	jmp Block4

 Block4:
	mov ecx,dword ptr [esp+0x3C]
	push 0xFFFFFFFF
	add ecx,0x48C
	call ZArray<GW_CashItemInfo>::InsertBefore
	mov edi,eax
	lea esi,[ebp-0x18]
	mov ecx,0xD
	rep movsd
	movsw
	push 0
	mov ecx,ebx
	movsb
	call CWnd::InvalidateRect
	push 0
	mov ecx,ebx
	call CCSWnd_Locker::SetSelectedNo
	mov eax,dword ptr [ebp-8]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x68],9
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x64],8
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	movzx esi,word ptr [ebp]
	lea edx,[esp+0x40]
	push 0x25B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push esi
	push eax
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x74],0xA
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x50]
	add esp,0x10
	mov byte ptr [esp+0x64],8
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block10

 Block9:
	mov eax,dword ptr [ecx-4]
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	push eax
	push ecx
	lea ecx,[esp+0x34]
	call ZXString<char>::_Cat
	add ebp,0x37
	sub dword ptr [esp+0x20],1
	jne Block4

 Block12:
	mov edi,dword ptr [esp+0x30]
	mov ebp,dword ptr [esp+0x6C]
	mov ebx,dword ptr [esp+0x3C]

 Block13:
	mov ecx,ebp
	call CInPacket::Decode4
	mov ecx,ebp
	mov dword ptr [esp+0x44],eax
	call CInPacket::Decode4
	mov esi,eax
	lea eax,[esp+0x6C]
	push eax
	add edi,esi
	push esi
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x38],edi
	mov dword ptr [esp+0x28],0
	call ZArray<_ULARGE_INTEGER>::_Alloc
	mov byte ptr [esp+0x64],0xB
	test esi,esi
	jle Block30

 Block14:
	mov edx,dword ptr [esp+0x20]
	lea ecx,[esi*8]
	push ecx
	push edx
	mov ecx,ebp
	call CInPacket::DecodeBuffer
	test esi,esi
	jle Block30

 Block15:
	lea eax,[ebx+0xA50]
	add ebx,0x1534
	mov dword ptr [esp+0x4C],ebx
	mov ebx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x48],eax
	add ebx,2
	mov dword ptr [esp+0x40],esi
	lea esp,[esp]

 Block16:
	mov edi,dword ptr [ebx+2]
	movzx ecx,word ptr [ebx-2]
	movzx ebp,word ptr [ebx]
	mov eax,0x431BDE83
	imul edi
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [esp+0x3C],ecx
	cmp eax,2
	je Block21

 Block17:
	cmp eax,3
	je Block21

 Block18:
	cmp eax,4
	je Block21

 Block19:
	test ecx,ecx
	jne Block21

 Block20:
	mov dword ptr [esp+0x3C],1

 Block21:
	mov ecx,dword ptr [TSingleton<CCSWnd_Inventory>::ms_pInstance]
	mov ecx,dword ptr [ecx+0x84]
	dec eax
	push eax
	call CCtrlTab::SetTab
	mov ecx,dword ptr [esp+0x48]
	push 0
	call CWnd::InvalidateRect
	mov esi,dword ptr [esp+0x4C]
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	push ebp
	mov ecx,esi
	call CCSWnd_Inventory::SetSelectedNo
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	lea edx,[esp+0x54]
	push edx
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x68],0xC
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x64],0xB
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	lea eax,[esp+0x54]
	push 0x25B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x74],0xD
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x64]
	add esp,0x10
	mov byte ptr [esp+0x64],0xB
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block27

 Block26:
	mov eax,dword ptr [ecx-4]
	jmp Block28

 Block27:
	xor eax,eax

 Block28:
	push eax
	push ecx
	lea ecx,[esp+0x34]
	call ZXString<char>::_Cat
	add ebx,8
	sub dword ptr [esp+0x40],1
	jne Block16

 Block29:
	mov edi,dword ptr [esp+0x30]
	mov ebp,dword ptr [esp+0x6C]

 Block30:
	mov ecx,ebp
	call CInPacket::Decode4
	mov esi,eax
	test edi,edi
	jle Block36

 Block31:
	lea ecx,[esp+0x2C]
	push ecx
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov edi,dword ptr [esp+0x44]
	lea edx,[esi+edi]
	test edx,edx
	je Block37

 Block32:
	lea eax,[esp+0x54]
	push 0x1A9D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x70]
	push ecx
	mov bl,0xE
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x6C],bl
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x68],0xF
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],bl
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x64],0xB
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block37

 Block36:
	mov edi,dword ptr [esp+0x44]

 Block37:
	test edi,edi
	je Block48

 Block38:
	lea edx,[esp+0x6C]
	push 0x25C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x70],0x10
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x78]
	add esp,0xC
	mov byte ptr [esp+0x64],0xB
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x70]
	push edx
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x68],0x11
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],0xB
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	test esi,esi
	je Block79

 Block43:
	lea eax,[esp+0x6C]
	push 0x1A9D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x64],0x12
	test eax,eax
	je Block45

 Block44:
	mov ecx,dword ptr [eax-4]
	jmp Block46

 Block45:
	xor ecx,ecx

 Block46:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],0xB
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	test esi,esi
	je Block79

 Block49:
	lea ecx,[esp+0x6C]
	push 0x25D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x70],0x13
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x78]
	add esp,0xC
	mov byte ptr [esp+0x64],0xB
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x70]
	push ecx
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x68],0x14
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],0xB
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	lea eax,[esp+0x6C]
	push 0x1A97
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x64],0x16

 Block54:
	push eax
	lea ecx,[esp+0x2C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],0xB
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	lea ecx,[esp+0x50]
	push 0x25A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	lea edx,[esp+0x14]
	push edx
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x17
	call ZXString<char>::op_add_1
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esp+0x70]
	push ecx
	mov bl,0x18
	mov ecx,eax
	mov byte ptr [esp+0x6C],bl
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x68],0x19
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],bl
	test eax,eax
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x64],0x17
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block60:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x64],0xB
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	push 0
	push 0
	push 0
	lea edx,[esp+0x78]
	push 0x4F9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x68],esp
	push eax
	mov byte ptr [esp+0x7C],0x1A
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x80]
	add esp,0x14
	mov byte ptr [esp+0x64],0xB
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block64:
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x64],8
	call ZArray<_ULARGE_INTEGER>::RemoveAll
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x64],7
	call ZArray<GW_CashItemInfo>::RemoveAll
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x64],6
	test eax,eax
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x64],5
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x64],4
	test eax,eax
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block70:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x64],2
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x64],1
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x64],0
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	test eax,eax
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block78:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 4

 Block79:
	test edi,edi
	je Block53

 Block80:
	lea edx,[esp+0x6C]
	push 0x1A97
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x64],0x15
	jmp Block54
}
}
// CCashShop::OnCashItemResLoadWishFailed
__SUB_CLASS_THIS(00096990, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	movzx eax,al
	push eax
	mov ecx,esi
	call CCashShop::NoticeFailReason
	mov ecx,esi
	call CCashShop::SendTransferFieldPacket
	pop esi
	ret 4
}
}
// CCashShop::GoTo
__SUB_CLASS_THIS(0007E6F0, __thiscall, 48255,  CCashShop, void, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push ebx
	push esi
	push edi
	push eax
	mov edi,ecx
	call CCashShop::OnChangedCategory
	mov ecx,dword ptr [esp+0x14]
	push ecx
	mov ecx,edi
	call CCashShop::OnChangedCategorySub
	mov ebx,dword ptr [esp+0x18]
	mov eax,0x66666667
	imul ebx
	sar edx,2
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	push esi
	mov ecx,edi
	call CCashShop::OnChangedPage
	lea edx,[esi+esi*4]
	add edx,edx
	sub ebx,edx
	push ebx
	lea ecx,[edi+0x210C]
	call CCSWnd_List::SetCursorToPlate
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CCashShop::OnPurchaseExpChanged
__SUB_CLASS_THIS(00093F10, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CInPacket::Decode1
	mov byte ptr [esi+0x2059],al
	pop esi
	ret 4
}
}
// CCashShop::OnCashShopGachaponStampResult
_SUB_EXCEPTION_HANDLER(983A0)
__SUB_CLASS_THIS(000983A0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_983A0
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
	call CInPacket::Decode1
	test al,al
	je Block4

 Block1:
	mov eax,dword ptr [TSingleton<CCSWnd_Inventory>::ms_pInstance]
	mov ecx,dword ptr [eax+0x84]
	push 3
	call CCtrlTab::SetTab
	push 0
	lea ecx,[esi+0x1534]
	call CWnd::InvalidateRect
	mov ecx,edi
	call CInPacket::Decode4
	mov esi,eax
	mov dword ptr [esp+0x24],0
	lea ecx,[esp+0xC]
	push 0x1538
	push ecx
	mov dword ptr [esp+0x24],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x28],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x18]
	add esp,0xC
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x20],esp
	jmp Block7

 Block4:
	mov dword ptr [esp+0x24],0
	lea ecx,[esp+0xC]
	push 0x1539
	push ecx
	mov dword ptr [esp+0x24],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x24],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x14]
	add esp,8
	mov byte ptr [esp+0x1C],2
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x24],esp

 Block7:
	mov ecx,esp
	lea eax,[esp+0x38]
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x38]
	add esp,0x14
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CCashShop::SendCheckTransferWorldPossiblePacket
_SUB_EXCEPTION_HANDLER(884C0)
__SUB_CLASS_THIS(000884C0, __thiscall, 48266,  CCashShop, void, unsigned long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_884C0
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
	push 0x12
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::_ctor_1
	mov eax,dword ptr [esp+0x28]
	push eax
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x24],1
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	lea edx,[esp+0x30]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x1C],1
	mov byte ptr [esp+0x20],0
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 8
}
}
// CCashShop::OnCashItemResLimitGoodsCountChanged
__SUB_CLASS_THIS(00093F30, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	push esi
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esp+0xC],ecx
	push edi
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0x14],eax
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0x1C],eax
	call CInPacket::Decode4
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add edi,0x3F84
	mov ecx,edi
	mov dword ptr [esp+0xC],eax
	xor ebx,ebx
	call ZArray<CS_LIMITGOODS>::GetCount
	test eax,eax
	jbe Block19

 Block1:
	mov esi,dword ptr [edi]
	push ebp
	lea ebp,[esi+4]

 Block2:
	test esi,esi
	je Block8

 Block3:
	mov eax,dword ptr [esp+0x18]
	cmp eax,dword ptr [esi]
	jne Block8

 Block4:
	xor eax,eax
	mov ecx,ebp

 Block5:
	mov edx,dword ptr [ecx]
	test edx,edx
	je Block8

 Block6:
	cmp edx,dword ptr [esp+0x20]
	je Block10

 Block7:
	inc eax
	add ecx,4
	cmp eax,0xA
	jl Block5

 Block8:
	mov ecx,edi
	inc ebx
	add esi,0x68
	add ebp,0x68
	call ZArray<CS_LIMITGOODS>::GetCount
	cmp ebx,eax
	jb Block2

 Block9:
	pop ebp
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4

 Block10:
	mov ecx,dword ptr [esp+0x10]
	xor eax,eax
	cmp dword ptr [esi+0x34],eax
	jg Block13

 Block11:
	test ecx,ecx
	jle Block13

 Block12:
	mov eax,1

 Block13:
	mov dword ptr [esi+0x34],ecx
	test eax,eax
	jne Block16

 Block14:
	test ecx,ecx
	jne Block18

 Block15:
	mov ecx,dword ptr [esp+0x20]
	push 0x1E
	push ecx
	jmp Block17

 Block16:
	mov edx,dword ptr [esp+0x20]
	push 0xFFFFFFFF
	push edx

 Block17:
	mov esi,dword ptr [esp+0x1C]
	mov ecx,esi
	call CCashShop::ChangeLimitGoodsState
	lea ecx,[esi+0x210C]
	call CCSWnd_List::ChangePage

 Block18:
	pop ebp

 Block19:
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4
}
}
// CCashShop::OnCashItemResLoadGiftFailed
__SUB_CLASS_THIS(00096960, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	movzx eax,al
	push eax
	mov ecx,esi
	call CCashShop::NoticeFailReason
	mov ecx,esi
	call CCashShop::SendTransferFieldPacket
	pop esi
	ret 4
}
}
// CCashShop::OnCashItemResBuyFailed
_SUB_EXCEPTION_HANDLER(969F0)
__SUB_CLASS_THIS(000969F0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_969F0
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
	mov edi,ecx
	mov ebx,dword ptr [esp+0x2C]
	xor ebp,ebp
	mov ecx,ebx
	mov dword ptr [edi+0x1C],ebp
	call CInPacket::Decode1
	movzx esi,al
	cmp esi,0x1E
	je Block2

 Block1:
	cmp esi,0x1D
	jne Block3

 Block2:
	mov ecx,ebx
	call CInPacket::Decode4
	mov ebp,eax
	push esi
	push ebp
	mov ecx,edi
	call CCashShop::UpdateStock
	push esi
	push ebp
	mov ecx,edi
	call CCashShop::ChangeLimitGoodsState
	lea ecx,[edi+0x210C]
	call CCSWnd_List::ChangePage
	xor ebp,ebp

 Block3:
	cmp esi,ebp
	je Block16

 Block4:
	cmp esi,2
	je Block16

 Block5:
	cmp esi,1
	je Block16

 Block6:
	cmp dword ptr [edi+0x4E4],ebp
	je Block8

 Block7:
	mov ecx,edi
	call CCashShop::SendBuyAvatarPacket
	jmp Block17

 Block8:
	cmp esi,0x44
	jne Block15

 Block9:
	mov ecx,ebx
	call CInPacket::Decode1
	movzx esi,al
	cmp esi,0xC
	mov edi,1
	jge Block11

 Block10:
	lea edi,[esi+1]

 Block11:
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x24]
	push 0x16C9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esp+0x3C],ebp
	mov eax,dword ptr [eax]
	push edi
	push esi
	push eax
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x44],1
	call ZXString<char>::Format
	add esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x40]
	add esp,0x14
	mov byte ptr [esp+0x24],0
	cmp eax,ebp
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebp
	je Block17

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block17

 Block15:
	push esi
	mov ecx,edi
	call CCashShop::NoticeFailReason
	jmp Block17

 Block16:
	push esi
	mov ecx,edi
	call CCashShop::NoticeFailReason
	mov ecx,edi
	call CCashShop::SendTransferFieldPacket

 Block17:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4
}
}
// CCashShop::GetCashPurchaseRecord
__SUB_CLASS_THIS(00082450, __thiscall, 48263,  CCashShop, int32_t, long) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov dword ptr [esp+8],1
	test edi,edi
	jne Block4

 Block1:
	cmp dword ptr [esi+0x3B54],0xFFFFFFFF
	jne Block3

 Block2:
	push edi
	call CCashShop::RequestCashPurchaseRecord

 Block3:
	xor eax,eax
	cmp dword ptr [esi+0x3B54],eax
	pop edi
	setne al
	pop esi
	pop ecx
	ret 4

 Block4:
	lea eax,[esp+8]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[esi+0x3B58]
	call ZMap<long, int, long>::GetAt
	test eax,eax
	jne Block6

 Block5:
	push edi
	mov ecx,esi
	call CCashShop::RequestCashPurchaseRecord

 Block6:
	mov eax,dword ptr [esp+8]
	pop edi
	pop esi
	pop ecx
	ret 4
}
}
// CCashShop::OnCashItemResGiftCouponDone
_SUB_EXCEPTION_HANDLER(98E10)
__SUB_CLASS_THIS(00098E10, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_98E10
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
	mov esi,dword ptr [esp+0x58]
	lea eax,[esp+0x38]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	xor ebp,ebp
	mov ecx,esi
	mov dword ptr [esp+0x50],ebp
	call CInPacket::Decode1
	movzx ebx,al
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x20],ebp
	lea ecx,[esp+0x34]
	push 0x25E
	push ecx
	mov byte ptr [esp+0x58],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x5C],8
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x40]
	add esp,0xC
	mov byte ptr [esp+0x50],7
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x58]
	push ecx
	push ebx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebp
	call ZArray<GW_CashItemInfo>::_Alloc
	cmp ebx,ebp
	mov byte ptr [esp+0x50],9
	jle Block14

 Block3:
	mov edi,dword ptr [esp+0x1C]
	mov edx,ebx
	imul edx,0x37
	push edx
	push edi
	mov ecx,esi
	call CInPacket::DecodeBuffer
	cmp ebx,ebp
	jle Block14

 Block4:
	add edi,0x18
	mov dword ptr [esp+0x34],ebx

 Block5:
	mov eax,dword ptr [edi-8]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x54],0xA
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x50],9
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	movzx esi,word ptr [edi]
	lea edx,[esp+0x40]
	push 0x25B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [eax]
	push ecx
	push esi
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x60],0xB
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x50]
	add esp,0x10
	mov byte ptr [esp+0x50],9
	cmp eax,ebp
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,ebp
	je Block11

 Block10:
	mov eax,dword ptr [ecx-4]
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	push eax
	push ecx
	lea ecx,[esp+0x38]
	call ZXString<char>::_Cat
	add edi,0x37
	sub dword ptr [esp+0x34],1
	jne Block5

 Block13:
	mov esi,dword ptr [esp+0x58]

 Block14:
	mov ecx,esi
	call CInPacket::Decode4
	cmp ebx,ebp
	mov esi,eax
	jle Block20

 Block15:
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	cmp esi,ebp
	je Block26

 Block16:
	lea ecx,[esp+0x40]
	push 0x1A9D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea edx,[esp+0x5C]
	mov bl,0xC
	push edx
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x58],bl
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x54],0xD
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],bl
	cmp eax,ebp
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x50],9
	cmp eax,ebp
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	cmp esi,ebp
	je Block26

 Block21:
	lea eax,[esp+0x58]
	push 0x25C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x5C],0xE
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x64]
	add esp,0xC
	mov byte ptr [esp+0x50],9
	cmp eax,ebp
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x5C]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x54],0xF
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],9
	cmp eax,ebp
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	lea ecx,[esp+0x58]
	push 0x1A8D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x50],0x10
	jmp Block27

 Block26:
	lea edx,[esp+0x58]
	push 0x1A8D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x50],0x11

 Block27:
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],9
	cmp eax,ebp
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	lea eax,[esp+0x44]
	push 0x25A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x38]
	push edx
	mov ecx,eax
	mov byte ptr [esp+0x58],0x12
	call ZXString<char>::op_add_1
	push offset _S___4
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,eax
	mov byte ptr [esp+0x58],0x13
	call ZXString<char>::op_add_0
	lea edx,[esp+0x14]
	push edx
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,eax
	mov byte ptr [esp+0x58],0x14
	call ZXString<char>::op_add_1
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x5C]
	push ecx
	mov bl,0x15
	mov ecx,eax
	mov byte ptr [esp+0x58],bl
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x54],0x16
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],bl
	cmp eax,ebp
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x50],0x14
	cmp eax,ebp
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x50],0x13
	cmp eax,ebp
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x50],0x12
	cmp eax,ebp
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x50],9
	cmp eax,ebp
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x64]
	push 0x4F9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x58],esp
	push eax
	mov byte ptr [esp+0x68],0x17
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x6C]
	add esp,0x14
	mov byte ptr [esp+0x50],9
	cmp eax,ebp
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x50],7
	call ZArray<GW_CashItemInfo>::RemoveAll
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x50],6
	cmp eax,ebp
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],5
	cmp eax,ebp
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x50],4
	cmp eax,ebp
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x50],3
	cmp eax,ebp
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x50],2
	cmp eax,ebp
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x50],1
	cmp eax,ebp
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x50],0
	cmp eax,ebp
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp eax,ebp
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
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
// CCashShop::OnCashItemResCoupleFailed
__SUB_CLASS_THIS(00097D20, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,ecx
	mov ecx,ebx
	mov dword ptr [edi+0x1C],0
	call CInPacket::Decode1
	movzx esi,al
	cmp esi,0x1E
	je Block2

 Block1:
	cmp esi,0x1D
	jne Block3

 Block2:
	mov ecx,ebx
	call CInPacket::Decode4
	mov ebx,eax
	push esi
	push ebx
	mov ecx,edi
	call CCashShop::UpdateStock
	push esi
	push ebx
	mov ecx,edi
	call CCashShop::ChangeLimitGoodsState
	lea ecx,[edi+0x210C]
	call CCSWnd_List::ChangePage

 Block3:
	push esi
	mov ecx,edi
	call CCashShop::NoticeFailReason
	test esi,esi
	je Block6

 Block4:
	cmp esi,2
	je Block6

 Block5:
	cmp esi,1
	jne Block7

 Block6:
	mov ecx,edi
	call CCashShop::SendTransferFieldPacket

 Block7:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CCashShop::OnCashItemNameChangeResBuyDone
_SUB_EXCEPTION_HANDLER(95600)
__SUB_CLASS_THIS(00095600, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_95600
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
	push 0x37
	push 0xFFFFFFFF
	lea ecx,[esi+0x48C]
	call ZArray<GW_CashItemInfo>::InsertBefore
	mov ecx,dword ptr [esp+0x24]
	push eax
	call CInPacket::DecodeBuffer
	lea edi,[esi+0xA50]
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	push 0
	mov ecx,edi
	call CCSWnd_Locker::SetSelectedNo
	cmp dword ptr [esi+0x4E4],0
	jne Block3

 Block1:
	push 0
	push 0
	push 0
	lea eax,[esp+0x2C]
	push 0x4F9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x222
	push ecx
	mov dword ptr [esp+0x34],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x34]
	add esp,0x14
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block4

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block4

 Block3:
	push 0xFFFFFFFF
	lea ecx,[esi+0x4DC]
	call ZArray<long>::InsertBefore
	mov edx,dword ptr [esi+0x4E0]
	mov dword ptr [eax],edx

 Block4:
	mov ecx,dword ptr [TSingleton<CUIChangingCharacterName>::ms_pInstance]
	test ecx,ecx
	je Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	push 2
	call edx

 Block6:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CCashShop::IsUsableItemCheckFirst
_SUB_EXCEPTION_HANDLER(86820)
__SUB_CLASS_THIS(00086820, __thiscall, 48296,  CCashShop, int32_t, long, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_86820
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
	mov ebp,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
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
	mov dword ptr [esp+0x18],0

 Block5:
	mov ecx,dword ptr [esi+0x3D]
	push ecx
	lea edi,[esi+0x39]
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	mov ebx,dword ptr [esp+0x38]
	movsx ecx,ax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,0x16
	je Block13

 Block6:
	cmp ecx,0x7D1
	je Block13

 Block7:
	cmp ebx,0x55C126
	je Block10

 Block8:
	cmp ebx,0x55C127
	je Block10

 Block9:
	cmp ebx,0x55C128
	jne Block13

 Block10:
	lea ecx,[esp+0x30]
	push 0x162A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x34]
	push eax
	mov dword ptr [esp+0x2C],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	xor eax,eax
	jmp Block31

 Block13:
	mov edx,dword ptr [esi+0x3D]
	push edx
	push edi
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

 Block14:
	cmp word ptr [esi+0xF7],1
	je Block21

 Block15:
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x232
	jne Block21

 Block16:
	cmp ebx,0x55C126
	je Block21

 Block17:
	cmp ebx,0x55C127
	je Block21

 Block18:
	cmp ebx,0x55C128
	je Block21

 Block19:
	lea edx,[esp+0x30]
	push 0x1764
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x34]
	push eax
	mov dword ptr [esp+0x2C],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block12

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	jmp Block31

 Block21:
	lea eax,[esp+0x30]
	push eax
	push esi
	push ebx
	mov ecx,ebp
	mov dword ptr [esp+0x3C],0
	call CCashShop::IsUsableMasteryBookItem
	test eax,eax
	jne Block24

 Block22:
	lea ecx,[esp+0x14]
	push 0x16CA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [edx+4]
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x34]
	push ecx
	push eax
	push edx
	mov dword ptr [esp+0x34],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block12

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	jmp Block31

 Block24:
	mov eax,0x431BDE83
	imul ebx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,1
	jne Block30

 Block25:
	mov ecx,dword ptr [esi+0x3D]
	push ecx
	push edi
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
	jne Block30

 Block26:
	cmp word ptr [esi+0xF7],1
	jne Block30

 Block27:
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x6D
	jne Block30

 Block28:
	lea edx,[esp+0x1C]
	push 0x16CD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x34]
	push eax
	mov dword ptr [esp+0x2C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block12

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	jmp Block31

 Block30:
	mov eax,1

 Block31:
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
// CCashShop::GetRTTI
__SUB_CLASS_THIS0(00092E30, __thiscall, 48319,  CCashShop, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCashShop::ms_RTTI_CCashShop
	ret
}
}
// CCashShop::OnCashItemResRebateDone
_SUB_EXCEPTION_HANDLER(97980)
__SUB_CLASS_THIS(00097980, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_97980
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
	mov esi,dword ptr [esp+0x30]
	push 8
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call CInPacket::DecodeBuffer
	mov ecx,esi
	call CInPacket::Decode4
	xor esi,esi
	mov ebx,eax
	lea ecx,[edi+0x48C]
	xor edx,edx
	mov edi,edi

 Block1:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block7

 Block2:
	cmp esi,dword ptr [eax-4]
	jae Block7

 Block3:
	mov ebp,dword ptr [edx+eax]
	cmp ebp,dword ptr [esp+0x18]
	jne Block5

 Block4:
	mov eax,dword ptr [edx+eax+4]
	cmp eax,dword ptr [esp+0x1C]
	je Block6

 Block5:
	inc esi
	add edx,0x37
	jmp Block1

 Block6:
	imul esi,0x37
	add esi,dword ptr [ecx]
	push esi
	call ZArray<GW_CashItemInfo>::RemoveAt

 Block7:
	lea esi,[edi+0xA50]
	xor ebp,ebp
	push ebp
	mov ecx,esi
	call CWnd::InvalidateRect
	push 1
	mov ecx,esi
	call CCSWnd_Locker::SetSelectedNo
	push ebp
	lea ecx,[edi+0x1534]
	call CWnd::InvalidateRect
	mov dword ptr [esp+0x30],ebp
	lea ecx,[esp+0x14]
	push 0x249
	push ecx
	mov dword ptr [esp+0x30],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push eax
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x34],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x28],0
	cmp eax,ebp
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	lea eax,[esp+0x44]
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x44]
	add esp,0x14
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebp
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
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
// CCashShop::OnCashItemResIncCharacterSlotCountDone
__SUB_CLASS_THIS(00094F70, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	push edi
	mov edi,dword ptr [esi+0x494]
	call CInPacket::Decode2
	movzx eax,ax
	cmp eax,edi
	mov dword ptr [esi+0x494],eax
	jle Block3

 Block1:
	cmp eax,0xF
	jg Block3

 Block2:
	lea ecx,[esi+0x210C]
	call CCSWnd_List::ResetSlotIncComm
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x225
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	pop edi
	pop esi
	pop ecx
	ret 4

 Block3:
	push 0x22000008
	lea ecx,[esp+0x14]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x10]
	push offset CTerminateException::THROW_INFO
	lea edx,[esp+0xC]
	push edx
	mov dword ptr [esp+0x10],ecx
	call _CxxThrowException
	int 3
}
}
// CCashShop::_ZtlSecureGet_m_nNexonCash
__SUB_CLASS0(0007DA00, __fastcall, 48272,  CCashShop, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x28]
	push eax
	add ecx,0x20
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CCashShop::ChangeLimitGoodsState
__SUB_CLASS_THIS(0007E820, __thiscall, 48270,  CCashShop, int32_t, long, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,dword ptr [ecx+0x50]
	test ebx,ebx
	je Block17

 Block1:
	mov eax,ebx
	test eax,eax
	je Block17

 Block2:
	cmp dword ptr [eax-4],0
	je Block17

 Block3:
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push edi
	xor edi,edi
	add ebx,4
	push esi
	lea ecx,[ecx]

 Block4:
	mov eax,dword ptr [ecx+0x50]
	test eax,eax
	je Block14

 Block5:
	cmp edi,dword ptr [eax-4]
	jae Block14

 Block6:
	xor eax,eax
	mov edx,ebx

 Block7:
	mov esi,dword ptr [edx]
	test esi,esi
	je Block10

 Block8:
	cmp esi,ebp
	je Block11

 Block9:
	inc eax
	add edx,4
	cmp eax,0xA
	jl Block7

 Block10:
	inc edi
	add ebx,0x68
	jmp Block4

 Block11:
	mov eax,dword ptr [esp+0x1C]
	imul edi,0x68
	sub eax,0x1D
	je Block16

 Block12:
	sub eax,1
	je Block15

 Block13:
	mov eax,dword ptr [ecx+0x50]
	mov dword ptr [edi+eax+0x2C],0xFFFFFFFF

 Block14:
	pop esi
	pop edi
	pop ebp
	xor eax,eax
	pop ebx
	pop ecx
	ret 8

 Block15:
	mov ecx,dword ptr [ecx+0x50]
	pop esi
	mov dword ptr [edi+ecx+0x2C],1
	pop edi
	pop ebp
	mov eax,1
	pop ebx
	pop ecx
	ret 8

 Block16:
	mov edx,dword ptr [ecx+0x50]
	pop esi
	mov dword ptr [edi+edx+0x2C],2
	pop edi
	pop ebp
	mov eax,1
	pop ebx
	pop ecx
	ret 8

 Block17:
	xor eax,eax
	pop ebx
	pop ecx
	ret 8
}
}
// CCashShop::OnCashItemResGiftPackageFailed
__SUB_CLASS_THIS(00096F20, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,ecx
	mov ecx,ebx
	mov dword ptr [edi+0x1C],0
	call CInPacket::Decode1
	movzx esi,al
	cmp esi,0x1E
	je Block2

 Block1:
	cmp esi,0x1D
	jne Block3

 Block2:
	mov ecx,ebx
	call CInPacket::Decode4
	mov ebx,eax
	push esi
	push ebx
	mov ecx,edi
	call CCashShop::UpdateStock
	push esi
	push ebx
	mov ecx,edi
	call CCashShop::ChangeLimitGoodsState
	lea ecx,[edi+0x210C]
	call CCSWnd_List::ChangePage

 Block3:
	push esi
	mov ecx,edi
	call CCashShop::NoticeFailReason
	test esi,esi
	je Block6

 Block4:
	cmp esi,2
	je Block6

 Block5:
	cmp esi,1
	jne Block7

 Block6:
	mov ecx,edi
	call CCashShop::SendTransferFieldPacket

 Block7:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CCashShop::IsControlingUserPreview
__SUB_CLASS_THIS0(0007D400, __thiscall, 48257,  CCashShop, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x548]
	ret
}
}
// CCashShop::OnCashItemResLoadGiftDone
_SUB_EXCEPTION_HANDLER(96520)
__SUB_CLASS_THIS(00096520, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_96520
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
	mov edi,dword ptr [esp+0x4C]
	mov ecx,edi
	call CInPacket::Decode2
	xor ebp,ebp
	movzx esi,ax
	mov dword ptr [esp+0x4C],ebp
	lea eax,[esp+0x4C]
	push eax
	push esi
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x4C],ebp
	call ZArray<GW_GiftList>::_Alloc
	cmp esi,ebp
	jle Block2

 Block1:
	imul esi,0x62
	push esi
	mov esi,dword ptr [esp+0x50]
	push esi
	mov ecx,edi
	call CInPacket::DecodeBuffer
	jmp Block3

 Block2:
	mov esi,dword ptr [esp+0x4C]

 Block3:
	mov dword ptr [esp+0x14],ebp
	lea ebx,[esi+0xC]
	nop

 Block4:
	cmp esi,ebp
	je Block65

 Block5:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,dword ptr [esi-4]
	jae Block65

 Block6:
	push 0xB0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x44],1
	cmp eax,ebp
	je Block22

 Block7:
	mov ecx,eax
	call CUIReceiveGift::_ctor_default
	cmp eax,ebp
	je Block22

 Block8:
	add eax,8
	cmp eax,ebp
	je Block22

 Block9:
	lea esi,[eax-8]
	mov dword ptr [esp+0x28],esi
	cmp esi,ebp
	je Block11

 Block10:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	push ecx
	mov edi,esp
	mov dword ptr [edi],ebp
	lea ebp,[ebx+0xD]
	mov byte ptr [esp+0x48],2
	mov dword ptr [esp+0x20],esp
	test ebp,ebp
	je Block15

 Block12:
	mov eax,ebp
	lea edx,[eax+1]
	mov edi,edi

 Block13:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block13

 Block14:
	sub eax,edx
	mov esi,eax
	push esi
	push ebp
	push 0
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x2C]

 Block15:
	push ecx
	mov edi,esp
	mov byte ptr [esp+0x4C],3
	mov dword ptr [esp+0x28],esp
	mov dword ptr [edi],0
	test ebx,ebx
	je Block19

 Block16:
	mov eax,ebx
	lea edx,[eax+1]

 Block17:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block17

 Block18:
	sub eax,edx
	mov esi,eax
	push esi
	push ebx
	push 0
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x30]

 Block19:
	mov eax,dword ptr [ebp-0x11]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x50],2
	call CUIReceiveGift::SetValues
	mov ecx,esi
	call CDialog::DoModal
	mov ebp,1
	cmp eax,ebp
	jne Block59

 Block20:
	mov dword ptr [esp+0x18],0
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x48],4
	call CUIReceiveGift::GetResult
	push 0x9A
	lea ecx,[esp+0x30]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x44],5
	test eax,eax
	jne Block23

 Block21:
	xor edx,edx
	jmp Block24

 Block22:
	mov dword ptr [esp+0x28],ebp
	mov esi,ebp
	jmp Block11

 Block23:
	mov edx,dword ptr [eax-4]

 Block24:
	mov ecx,dword ptr [esp+0x34]
	inc ecx
	cmp ecx,edx
	jbe Block29

 Block25:
	test eax,eax
	je Block27

 Block26:
	mov eax,dword ptr [eax-4]
	lea ecx,[ecx]

 Block27:
	add eax,eax
	cmp ecx,eax
	ja Block27

 Block28:
	lea edx,[esp+0x4C]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x3C]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x30]

 Block29:
	mov ecx,dword ptr [esp+0x34]
	push ecx
	mov byte ptr [eax+ecx],0
	add dword ptr [esp+0x38],ebp
	mov edi,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [edi],0
	test ebx,ebx
	je Block33

 Block30:
	mov eax,ebx
	lea edx,[eax+1]
	lea ecx,[ecx]

 Block31:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block31

 Block32:
	sub eax,edx
	mov esi,eax
	push esi
	push ebx
	push 0
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x2C]

 Block33:
	lea ecx,[esp+0x30]
	call COutPacket::EncodeStr
	push ecx
	mov ecx,esp
	lea edx,[esp+0x1C]
	mov dword ptr [esp+0x24],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x30]
	call COutPacket::EncodeStr
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	jne Block35

 Block34:
	xor edx,edx
	jmp Block36

 Block35:
	mov edx,dword ptr [eax-4]

 Block36:
	mov ecx,dword ptr [esp+0x34]
	inc ecx
	cmp ecx,edx
	jbe Block41

 Block37:
	test eax,eax
	je Block39

 Block38:
	mov eax,dword ptr [eax-4]

 Block39:
	add eax,eax
	cmp ecx,eax
	ja Block39

 Block40:
	lea ecx,[esp+0x4C]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x3C]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x30]

 Block41:
	mov edx,dword ptr [esp+0x34]
	mov byte ptr [eax+edx],1
	mov eax,dword ptr [esp+0x30]
	add dword ptr [esp+0x34],ebp
	test eax,eax
	jne Block43

 Block42:
	xor edx,edx
	jmp Block44

 Block43:
	mov edx,dword ptr [eax-4]

 Block44:
	mov ecx,dword ptr [esp+0x34]
	add ecx,4
	cmp ecx,edx
	jbe Block49

 Block45:
	test eax,eax
	je Block47

 Block46:
	mov eax,dword ptr [eax-4]
	lea esp,[esp]

 Block47:
	add eax,eax
	cmp ecx,eax
	ja Block47

 Block48:
	lea ecx,[esp+0x4C]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x3C]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x30]

 Block49:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [eax+edx],ecx
	mov eax,dword ptr [esp+0x30]
	add dword ptr [esp+0x34],4
	test eax,eax
	jne Block51

 Block50:
	xor edx,edx
	jmp Block52

 Block51:
	mov edx,dword ptr [eax-4]

 Block52:
	mov ecx,dword ptr [esp+0x34]
	add ecx,8
	cmp ecx,edx
	jbe Block57

 Block53:
	test eax,eax
	je Block55

 Block54:
	mov eax,dword ptr [eax-4]
	lea esp,[esp]

 Block55:
	add eax,eax
	cmp ecx,eax
	ja Block55

 Block56:
	lea edx,[esp+0x4C]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x3C]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x30]

 Block57:
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [ebx-0xC]
	add eax,ecx
	mov dword ptr [eax],edx
	mov ecx,dword ptr [ebx-8]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	add dword ptr [esp+0x34],8
	lea edx,[esp+0x2C]
	push edx
	call CClientSocket::SendPacket
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0xAC0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x44],4
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x44],2
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	mov byte ptr [esp+0x44],0
	test esi,esi
	je Block64

 Block60:
	add esi,8
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block63

 Block61:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block63

 Block62:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push ebp
	mov ecx,esi
	call edx

 Block63:
	mov dword ptr [esp+0x28],0

 Block64:
	add dword ptr [esp+0x14],ebp
	mov esi,dword ptr [esp+0x4C]
	add ebx,0x62
	xor ebp,ebp
	jmp Block4

 Block65:
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	call ZArray<GW_GiftList>::RemoveAll
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
// CCashShop::GetCategorySubIndex
__SUB_CLASS_THIS(0007E5E0, __thiscall, 48259,  CCashShop, long, long, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	xor eax,eax
	xor esi,esi
	nop

 Block1:
	mov edx,dword ptr [ecx+0x48]
	test edx,edx
	je Block6

 Block2:
	cmp eax,dword ptr [edx-4]
	jae Block6

 Block3:
	add edx,esi
	cmp dword ptr [edx],edi
	jne Block5

 Block4:
	cmp dword ptr [edx+4],ebx
	je Block7

 Block5:
	inc eax
	add esi,0x1C
	jmp Block1

 Block6:
	or eax,0xFFFFFFFF

 Block7:
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CCashShop::IsUsableItem
_SUB_EXCEPTION_HANDLER(85E80)
__SUB_CLASS_THIS(00085E80, __thiscall, 48296,  CCashShop, int32_t, long, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_85E80
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
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x34]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x14],ebx
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
	mov dword ptr [esp+0x38],0

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,0x68DB8BAD
	imul dword ptr [esp+0x4C]
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add ecx,0x20D0
	mov dword ptr [esp+0x30],ecx
	mov dword ptr [esp+0x28],eax
	cmp eax,0x207
	je Block7

 Block6:
	cmp eax,0x20C
	jne Block41

 Block7:
	mov edx,dword ptr [esp+0x4C]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call CItemInfo::GetItemInfo
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x44],0
	sete al
	test al,al
	je Block9

 Block8:
	push 0x22000006
	lea ecx,[esp+0x54]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	push offset CTerminateException::THROW_INFO
	lea edx,[esp+0x50]
	push edx
	mov dword ptr [esp+0x54],ecx
	call _CxxThrowException

 Block9:
	mov eax,dword ptr [ebx+0x1F]
	mov ecx,dword ptr [ebx+0x1B]
	lea esi,[ebx+0x1B]
	push eax
	push ecx
	push 5
	mov ecx,ebx
	call CharacterData::FindCashItemSlotPosition_0
	test eax,eax
	jle Block11

 Block10:
	mov edx,dword ptr [ebx+0x515]
	cmp dword ptr [edx+eax*8+4],0
	jne Block16

 Block11:
	lea eax,[esp+0x4C]
	push 0x208
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x50]
	push eax
	mov byte ptr [esp+0x48],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	xor eax,eax
	jmp Block121

 Block16:
	mov dword ptr [esp+0x24],1
	xor ebx,ebx
	mov ebp,esi
	lea esp,[esp]

 Block17:
	mov eax,dword ptr [ebp+4]
	mov ecx,dword ptr [ebp]
	mov esi,dword ptr [esp+0x14]
	push eax
	push ecx
	push 5
	mov ecx,esi
	call CharacterData::FindCashItemSlotPosition_0
	test eax,eax
	jle Block29

 Block18:
	mov edx,dword ptr [esi+0x515]
	mov esi,dword ptr [edx+eax*8+4]
	test esi,esi
	je Block29

 Block19:
	mov eax,dword ptr [esp+0x4C]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	mov dword ptr [esp+0x28],0
	call CItemInfo::GetPetFoodItem
	mov edi,eax
	test edi,edi
	je Block21

 Block20:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push 0
	lea ecx,[esp+0x30]
	push ecx
	lea ecx,[edi+8]
	mov dword ptr [esp+0x34],eax
	call ZList<unsigned long>::Find
	test eax,eax
	jne Block24

 Block21:
	lea edx,[esi+0x28]
	mov eax,edx
	lea esi,[eax+1]

 Block22:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block22

 Block23:
	sub eax,esi
	mov esi,dword ptr [esp+0x50]
	push eax
	push edx
	mov ecx,esi
	call ZXString<char>::_Cat
	push 1
	push offset _S___2
	mov ecx,esi
	call ZXString<char>::_Cat

 Block24:
	inc ebx
	add ebp,8
	cmp ebx,3
	jl Block17

 Block25:
	mov esi,dword ptr [esp+0x50]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block39

 Block26:
	cmp byte ptr [eax],0
	je Block39

 Block27:
	lea eax,[esp+0x50]
	push 0x209
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x44],3
	test eax,eax
	je Block34

 Block28:
	mov ecx,dword ptr [eax-4]
	jmp Block35

 Block29:
	cmp dword ptr [esp+0x24],0
	je Block25

 Block30:
	lea edx,[esp+0x4C]
	push 0x208
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x50]
	push eax
	mov byte ptr [esp+0x48],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block15

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	xor eax,eax
	jmp Block121

 Block34:
	xor ecx,ecx

 Block35:
	push ecx
	push eax
	mov ecx,esi
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block15

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	xor eax,eax
	jmp Block121

 Block39:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	cmp dword ptr [esp+0x28],0x228
	jne Block81

 Block42:
	mov eax,dword ptr [esp+0x4C]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	xor esi,esi
	push eax
	mov dword ptr [esp+0x20],esi
	call CItemInfo::GetKarmaScissorsItem
	cmp eax,esi
	je Block44

 Block43:
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x1C],ecx

 Block44:
	mov edx,dword ptr [esp+0x14]
	add edx,0x505
	mov dword ptr [esp+0x18],esi
	mov dword ptr [esp+0x24],edx
	mov dword ptr [esp+0x2C],5

 Block45:
	mov ebx,dword ptr [esp+0x24]
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block47

 Block46:
	mov eax,dword ptr [eax-4]

 Block47:
	lea ebp,[eax-1]
	mov edi,1
	cmp ebp,edi
	jl Block54

 Block48:
	jmp Block50

 Block50:
	mov eax,dword ptr [ebx]
	mov esi,dword ptr [eax+edi*8+4]
	test esi,esi
	je Block53

 Block51:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetAppliableKarmaType
	cmp eax,dword ptr [esp+0x1C]
	jne Block53

 Block52:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	mov ecx,esi
	call eax
	test eax,eax
	je Block71

 Block53:
	inc edi
	cmp edi,ebp
	jle Block50

 Block54:
	cmp dword ptr [esp+0x18],0
	jne Block72

 Block55:
	mov ebx,dword ptr [esp+0x14]
	xor edi,edi
	lea ebp,[ebx+0xFD]

 Block56:
	mov esi,dword ptr [ebp]
	test esi,esi
	je Block59

 Block57:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetAppliableKarmaType
	cmp eax,dword ptr [esp+0x1C]
	jne Block59

 Block58:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	mov ecx,esi
	call eax
	test eax,eax
	je Block71

 Block59:
	inc edi
	add ebp,8
	cmp edi,0x3C
	jl Block56

 Block60:
	xor edi,edi
	lea ebp,[ebx+0x4BD]

 Block61:
	mov esi,dword ptr [ebp]
	test esi,esi
	je Block64

 Block62:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetAppliableKarmaType
	cmp eax,dword ptr [esp+0x1C]
	jne Block64

 Block63:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	mov ecx,esi
	call eax
	test eax,eax
	je Block71

 Block64:
	inc edi
	add ebp,8
	cmp edi,4
	jl Block61

 Block65:
	xor edi,edi
	lea ebp,[ebx+0x4DD]

 Block66:
	mov esi,dword ptr [ebp]
	test esi,esi
	je Block69

 Block67:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetAppliableKarmaType
	cmp eax,dword ptr [esp+0x1C]
	jne Block69

 Block68:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	mov ecx,esi
	call eax
	test eax,eax
	je Block71

 Block69:
	inc edi
	add ebp,8
	cmp edi,5
	jl Block66

 Block70:
	jmp Block72

 Block71:
	mov dword ptr [esp+0x18],1

 Block72:
	add dword ptr [esp+0x24],4
	sub dword ptr [esp+0x2C],1
	jne Block45

 Block73:
	cmp dword ptr [esp+0x18],0
	jne Block81

 Block74:
	mov ecx,dword ptr [esp+0x4C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x30]
	push edx
	call CItemInfo::GetItemName
	lea eax,[esp+0x28]
	push 0x124B
	push eax
	mov dword ptr [esp+0x4C],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x4C],0
	mov ecx,dword ptr [esp+0x2C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x54]
	push edx
	mov byte ptr [esp+0x50],6
	call ZXString<char>::Format
	mov ecx,dword ptr [esp+0x5C]
	add esp,0xC
	push eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x44],5
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x44],4
	test eax,eax
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block78:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block80:
	xor eax,eax
	jmp Block121

 Block81:
	mov ecx,dword ptr [esp+0x4C]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,1
	jne Block120

 Block82:
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetEquipItem
	mov edi,eax
	test edi,edi
	jne Block88

 Block83:
	lea ecx,[esp+0x4C]
	push 0x23F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x50]
	push eax
	mov dword ptr [esp+0x48],7
	push edx

 Block84:
	call ZXString<char>::Format
	add esp,8

 Block85:
	mov eax,dword ptr [esp+0x4C]

 Block86:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block80

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	jmp Block121

 Block88:
	mov ebx,dword ptr [esp+0x30]
	mov eax,dword ptr [ebx+0x20]
	push eax
	lea ecx,[ebx+0x18]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
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
	add esp,8
	add eax,edx
	je Block90

 Block89:
	lea ecx,[eax-1]
	mov esi,1
	shl esi,cl
	jmp Block91

 Block90:
	xor esi,esi

 Block91:
	mov ecx,dword ptr [edi+0x5C]
	push ecx
	lea ebp,[edi+0x54]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block94

 Block92:
	mov edx,dword ptr [edi+0x5C]
	push edx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test esi,eax
	jne Block94

 Block93:
	lea eax,[esp+0x4C]
	push 0x1FF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x50]
	push eax
	mov dword ptr [esp+0x48],8
	push ecx
	jmp Block84

 Block94:
	mov edx,dword ptr [edi+0x68]
	push edx
	lea eax,[edi+0x60]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebx+0x14]
	push ecx
	lea edx,[ebx+0xC]
	push edx
	mov esi,eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x10
	cmp esi,eax
	jle Block96

 Block95:
	lea eax,[esp+0x4C]
	push 0x200
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x50]
	push eax
	mov dword ptr [esp+0x48],9
	push ecx
	jmp Block84

 Block96:
	mov edx,dword ptr [edi+0x50]
	push edx
	lea esi,[edi+0x48]
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block99

 Block97:
	mov eax,dword ptr [edi+0x50]
	push eax
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebx+0x5C]
	push ecx
	add ebx,0x54
	push ebx
	mov esi,eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x10
	cmp esi,eax
	jle Block99

 Block98:
	lea edx,[esp+0x4C]
	push 0x201
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x48],0xA
	push eax
	jmp Block84

 Block99:
	mov eax,0x14F8B589
	imul dword ptr [esp+0x4C]
	sar edx,0xD
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x11
	jne Block103

 Block100:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0x155]
	test eax,eax
	je Block103

 Block101:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	mov ecx,edi
	call CItemInfo::EQUIPITEM::IsAbleToStickWithWeapon
	test eax,eax
	jne Block103

 Block102:
	lea eax,[esp+0x4C]
	push 0x204
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x50]
	push eax
	mov dword ptr [esp+0x48],0xB
	push ecx
	jmp Block84

 Block103:
	cmp dword ptr [esp+0x28],0xB4
	jne Block116

 Block104:
	mov ebp,dword ptr [esp+0x14]
	xor eax,eax
	mov ebx,1
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x2C],eax
	add ebp,0x1B

 Block105:
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [esp+0x14]
	push edx
	push eax
	push 5
	call CharacterData::FindCashItemSlotPosition_0
	test eax,eax
	je Block113

 Block106:
	inc dword ptr [esp+0x24]
	push eax
	push 5
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	xor ebx,ebx
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x1C]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push eax
	mov ecx,edi
	call CItemInfo::EQUIPITEM::IsItemSuitedForPet
	test eax,eax
	jne Block108

 Block107:
	mov ecx,dword ptr [esp+0x50]
	add esi,0x28
	push esi
	call ZXString<char>::op_add_assign_t_1
	mov ecx,dword ptr [esp+0x50]
	push offset _S___2
	call ZXString<char>::op_add_assign_t_1

 Block108:
	mov eax,dword ptr [esp+0x2C]
	inc eax
	add ebp,8
	cmp eax,3
	mov dword ptr [esp+0x2C],eax
	jl Block105

 Block109:
	mov eax,dword ptr [esp+0x50]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block116

 Block110:
	cmp byte ptr [eax],0
	je Block116

 Block111:
	cmp dword ptr [esp+0x24],1
	jle Block115

 Block112:
	mov ecx,dword ptr [esp+0x50]
	push offset _S_ONEORMOREOFYOURP
	push ecx
	call ZXString<char>::Format
	add esp,8
	xor eax,eax
	jmp Block121

 Block113:
	test ebx,ebx
	je Block109

 Block114:
	lea edx,[esp+0x4C]
	push 0x207
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x50]
	push eax
	mov dword ptr [esp+0x48],0xC
	call ZXString<char>::op_assign
	jmp Block85

 Block115:
	lea edx,[esp+0x4C]
	push 0x206
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x50]
	push eax
	mov dword ptr [esp+0x48],0xD
	call ZXString<char>::op_add_assign_other_0
	jmp Block85

 Block116:
	cmp dword ptr [esp+0x28],0xBE
	je Block118

 Block117:
	mov eax,dword ptr [esp+0x4C]
	push eax
	call is_saddle
	add esp,4
	test eax,eax
	je Block120

 Block118:
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x3D]
	push ecx
	lea edx,[esi+0x39]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	add esp,8
	cwde
	push 0
	push eax
	push 0x3EC
	call get_novice_skill_as_race
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	add esp,8
	push eax
	push esi
	call CSkillInfo::GetSkillLevel_0
	xor ecx,ecx
	test eax,eax
	setg cl
	mov eax,ecx
	test eax,eax
	jne Block120

 Block119:
	lea edx,[esp+0x30]
	push 0x20A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x50]
	push eax
	mov dword ptr [esp+0x48],0xE
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	jmp Block86

 Block120:
	mov eax,1

 Block121:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 8
}
}
// CCashShop::OnCashItemResMoveStoLFailed
__SUB_CLASS_THIS(00097920, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	mov dword ptr [esi+0x1C],0
	call CInPacket::Decode1
	movzx eax,al
	push eax
	mov ecx,esi
	call CCashShop::NoticeFailReason
	pop esi
	ret 4
}
}
// CCashShop::OnCashItemResTransferWorldDone
_SUB_EXCEPTION_HANDLER(95710)
__SUB_CLASS_THIS(00095710, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_95710
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
	push 0x37
	push 0xFFFFFFFF
	lea ecx,[esi+0x48C]
	call ZArray<GW_CashItemInfo>::InsertBefore
	mov ecx,dword ptr [esp+0x24]
	push eax
	call CInPacket::DecodeBuffer
	lea edi,[esi+0xA50]
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	push 0
	mov ecx,edi
	call CCSWnd_Locker::SetSelectedNo
	cmp dword ptr [esi+0x4E4],0
	jne Block3

 Block1:
	push 0
	push 0
	push 0
	lea eax,[esp+0x2C]
	push 0x4F9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x222
	push ecx
	mov dword ptr [esp+0x34],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x34]
	add esp,0x14
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block4

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block4

 Block3:
	push 0xFFFFFFFF
	lea ecx,[esi+0x4DC]
	call ZArray<long>::InsertBefore
	mov edx,dword ptr [esi+0x4E0]
	mov dword ptr [eax],edx

 Block4:
	mov ecx,dword ptr [TSingleton<CUITransferWorldSelectDlg>::ms_pInstance]
	test ecx,ecx
	je Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	push 2
	call edx

 Block6:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CCashShop::SetColorLens
__SUB_CLASS_THIS(0007D360, __thiscall, 48250,  CCashShop, void, long, long) {
__asm {

 Block0:
	add ecx,0x564
	jmp  CCSWnd_Char::SetColorLens
}
}
// CCashShop::OnChangedPage
__SUB_CLASS_THIS(0007D310, __thiscall, 48247,  CCashShop, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x544],eax
	add ecx,0x210C
	call CCSWnd_List::ChangePage
	ret 4
}
}
// CCashShop::SetActiveEffectItem
__SUB_CLASS_THIS(0007D370, __thiscall, 48250,  CCashShop, void, long, long) {
__asm {

 Block0:
	add ecx,0x564
	jmp  CCSWnd_Char::SetActiveEffectItem
}
}
// CCashShop::ProcessBuy
_SUB_EXCEPTION_HANDLER(936B0)
__SUB_CLASS_THIS(000936B0, __thiscall, 48250,  CCashShop, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_936B0
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
	mov dword ptr [esp+0x10],0
	mov esi,dword ptr [esp+0x28]
	lea eax,[esp+0x10]
	push eax
	push esi
	mov dword ptr [esp+0x24],0
	call CCashShop::IsBuyableCommodity
	test eax,eax
	jne Block2

 Block1:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x24]
	mov dword ptr [esp+0x3C],esp
	push edx
	mov dword ptr [ecx],eax
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block27

 Block2:
	mov eax,0x14F8B589
	imul esi
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xD2
	je Block4

 Block3:
	cmp esi,0x560F40
	jne Block5

 Block4:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x15C4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block27

 Block5:
	mov ebx,dword ptr [esp+0x24]
	mov eax,0x51EB851F
	imul ebx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x2B70
	jne Block8

 Block6:
	cmp ebx,0x10F7C0
	je Block8

 Block7:
	push esi
	mov ecx,edi
	call CCashShop::OnBuyCouple
	jmp Block27

 Block8:
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x38E
	jne Block10

 Block9:
	push esi
	mov ecx,edi
	call CCashShop::OnBuyPackage
	jmp Block27

 Block10:
	lea edx,[esi-0x4C4B400]
	cmp edx,0x98967F
	ja Block12

 Block11:
	push esi
	mov ecx,edi
	call CCashShop::OnBuyNormal
	jmp Block27

 Block12:
	push ebx
	call is_friendship_equip_item
	add esp,4
	test eax,eax
	je Block14

 Block13:
	push esi
	mov ecx,edi
	call CCashShop::OnBuyFriendship
	jmp Block27

 Block14:
	push ebx
	call is_charslot_inc_item
	add esp,4
	test eax,eax
	je Block16

 Block15:
	push esi
	mov ecx,edi
	call CCashShop::OnIncCharacterSlotCount
	jmp Block27

 Block16:
	push ebx
	call is_character_sale_item
	add esp,4
	test eax,eax
	je Block18

 Block17:
	push esi
	mov ecx,edi
	call CCashShop::OnBuyCharacter
	jmp Block27

 Block18:
	push ebx
	call is_equipslot_ext_item
	add esp,4
	test eax,eax
	je Block20

 Block19:
	push esi
	mov ecx,edi
	call CCashShop::OnEnableEquipSlotExt
	jmp Block27

 Block20:
	push ebx
	call is_slot_inc_item
	add esp,4
	push esi
	mov ecx,edi
	test eax,eax
	je Block22

 Block21:
	call CCashShop::OnBuySlotInc
	jmp Block27

 Block22:
	cmp ebx,0x5265C0
	jne Block24

 Block23:
	call CCashShop::OnBuyNameChange
	jmp Block27

 Block24:
	cmp ebx,0x5269A8
	jne Block26

 Block25:
	call CCashShop::OnBuyTransferWorldItem
	jmp Block27

 Block26:
	call CCashShop::OnBuy

 Block27:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// CCashShop::RequestCashPurchaseRecord
_SUB_EXCEPTION_HANDLER(823C0)
__SUB_CLASS_THIS(000823C0, __thiscall, 48264,  CCashShop, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_823C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 0x113
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 0x2C
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+8]
	call COutPacket::Encode4
	lea ecx,[esp+4]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret 4
}
}
// CCashShop::OnCashItemResSetWishDone
__SUB_CLASS_THIS(00094D60, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	push 0x28
	lea eax,[esi+0x4A8]
	push eax
	mov dword ptr [esi+0x1C],0
	call CInPacket::DecodeBuffer
	cmp dword ptr [esi+0x53C],9
	jne Block2

 Block1:
	lea ecx,[esi+0x210C]
	call CCSWnd_List::ChangePage

 Block2:
	cmp dword ptr [esi+0x4D4],0
	jne Block4

 Block3:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x24E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block4:
	pop esi
	ret 4
}
}
// CCashShop::OnCashItemResCoupleDone
_SUB_EXCEPTION_HANDLER(97B70)
__SUB_CLASS_THIS(00097B70, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_97B70
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
	push 0x37
	push 0xFFFFFFFF
	lea ecx,[edi+0x48C]
	call ZArray<GW_CashItemInfo>::InsertBefore
	mov esi,dword ptr [esp+0x30]
	push eax
	mov ecx,esi
	call CInPacket::DecodeBuffer
	add edi,0xA50
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	push 0
	mov ecx,edi
	call CCSWnd_Locker::SetSelectedNo
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call CInPacket::Decode4
	mov ecx,esi
	mov edi,eax
	call CInPacket::Decode2
	push edi
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	movzx esi,ax
	call CItemInfo::GetItemName
	mov dword ptr [esp+0x2C],0
	lea edx,[esp+0x14]
	push 0x223
	push edx
	mov byte ptr [esp+0x2C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [eax]
	push ecx
	push esi
	push edx
	push eax
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x38],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x24],2
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	push 0
	push 0
	push 0
	lea ecx,[esp+0x20]
	push 0x4F9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov byte ptr [esp+0x3C],4
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x24],2
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x24],1
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CCashShop::OnCashItemResMoveLtoSDone
_SUB_EXCEPTION_HANDLER(95050)
__SUB_CLASS_THIS(00095050, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_95050
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
	mov edi,ecx
	xor ebp,ebp
	mov dword ptr [edi+0x1C],ebp
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x28]
	push eax
	mov dword ptr [esp+0x1C],ecx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x14],ecx
	cmp esi,ebp
	je Block5

 Block1:
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
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
	mov dword ptr [esp+0x2C],ebp

 Block5:
	mov esi,dword ptr [esp+0x40]
	mov ecx,esi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esp+0x20]
	push esi
	push edx
	mov dword ptr [esp+0x48],ecx
	call GW_ItemSlotBase::Decode
	add esp,8
	mov ebx,dword ptr [esp+0x24]
	xor eax,eax
	mov dword ptr [esp+0x38],ebp
	lea ecx,[edi+0x48C]
	xor edx,edx
	lea ecx,[ecx]

 Block6:
	mov esi,dword ptr [ecx]
	test esi,esi
	je Block12

 Block7:
	cmp eax,dword ptr [esi-4]
	jae Block12

 Block8:
	mov ebp,dword ptr [edx+esi]
	cmp ebp,dword ptr [ebx+0x18]
	jne Block10

 Block9:
	mov esi,dword ptr [edx+esi+4]
	cmp esi,dword ptr [ebx+0x1C]
	je Block11

 Block10:
	inc eax
	add edx,0x37
	jmp Block6

 Block11:
	imul eax,0x37
	add eax,dword ptr [ecx]
	push eax
	call ZArray<GW_CashItemInfo>::RemoveAt
	mov ebx,dword ptr [esp+0x24]

 Block12:
	lea ecx,[ebx+0xC]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	mov ecx,dword ptr [esp+0x24]
	sar edx,0x12
	sub esp,8
	mov eax,esp
	mov esi,edx
	shr esi,0x1F
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x2C]
	add esi,edx
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block14

 Block13:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov ebx,dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0x1C]
	push ebx
	push esi
	call CharacterData::SetItem
	test eax,eax
	jne Block16

 Block15:
	push 0x22000008
	lea ecx,[esp+0x18]
	call CMSException::_ctor_0
	mov edx,dword ptr [esp+0x14]
	push offset CTerminateException::THROW_INFO
	lea eax,[esp+0x1C]
	push eax
	mov dword ptr [esp+0x20],edx
	call _CxxThrowException

 Block16:
	mov ecx,dword ptr [TSingleton<CCSWnd_Inventory>::ms_pInstance]
	mov ecx,dword ptr [ecx+0x84]
	dec esi
	push esi
	call CCtrlTab::SetTab
	lea esi,[edi+0x1534]
	push ebx
	mov ecx,esi
	call CCSWnd_Inventory::SetSelectedNo
	push 0
	lea ecx,[edi+0xA50]
	call CWnd::InvalidateRect
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x24]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [ecx+0x4194],eax
	mov dword ptr [ecx+0x4198],ebx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block20

 Block17:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block20

 Block18:
	mov edx,dword ptr [esp+0x24]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block20

 Block19:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block20:
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
// CCashShop::OnCashItemResFriendShipDone
_SUB_EXCEPTION_HANDLER(97D90)
__SUB_CLASS_THIS(00097D90, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_97D90
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
	push 0x37
	push 0xFFFFFFFF
	lea ecx,[edi+0x48C]
	call ZArray<GW_CashItemInfo>::InsertBefore
	mov esi,dword ptr [esp+0x30]
	push eax
	mov ecx,esi
	call CInPacket::DecodeBuffer
	add edi,0xA50
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	push 0
	mov ecx,edi
	call CCSWnd_Locker::SetSelectedNo
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call CInPacket::Decode4
	mov ecx,esi
	mov edi,eax
	call CInPacket::Decode2
	push edi
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	movzx esi,ax
	call CItemInfo::GetItemName
	mov dword ptr [esp+0x2C],0
	lea edx,[esp+0x14]
	push 0x223
	push edx
	mov byte ptr [esp+0x2C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [eax]
	push ecx
	push esi
	push edx
	push eax
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x38],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x24],2
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	push 0
	push 0
	push 0
	lea ecx,[esp+0x20]
	push 0x4F9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov byte ptr [esp+0x3C],4
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x24],2
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x24],1
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CCashShop::OnCashItemResBuyNormalFailed
__SUB_CLASS_THIS(00097B00, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,ecx
	mov ecx,ebx
	mov dword ptr [edi+0x1C],0
	call CInPacket::Decode1
	movzx esi,al
	cmp esi,0x1E
	je Block2

 Block1:
	cmp esi,0x1D
	jne Block3

 Block2:
	mov ecx,ebx
	call CInPacket::Decode4
	mov ebx,eax
	push esi
	push ebx
	mov ecx,edi
	call CCashShop::UpdateStock
	push esi
	push ebx
	mov ecx,edi
	call CCashShop::ChangeLimitGoodsState
	lea ecx,[edi+0x210C]
	call CCSWnd_List::ChangePage

 Block3:
	push esi
	mov ecx,edi
	call CCashShop::NoticeFailReason
	test esi,esi
	je Block5

 Block4:
	cmp esi,1
	jne Block6

 Block5:
	mov ecx,edi
	call CCashShop::SendTransferFieldPacket

 Block6:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CCashShop::OnCashItemResBuyDone
_SUB_EXCEPTION_HANDLER(94DD0)
__SUB_CLASS_THIS(00094DD0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_94DD0
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
	push 0x37
	push 0xFFFFFFFF
	lea ecx,[esi+0x48C]
	call ZArray<GW_CashItemInfo>::InsertBefore
	mov ecx,dword ptr [esp+0x24]
	push eax
	call CInPacket::DecodeBuffer
	lea edi,[esi+0xA50]
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	push 0
	mov ecx,edi
	call CCSWnd_Locker::SetSelectedNo
	cmp dword ptr [esi+0x4E4],0
	jne Block3

 Block1:
	push 0
	push 0
	push 0
	lea eax,[esp+0x2C]
	push 0x4F9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x222
	push ecx
	mov dword ptr [esp+0x34],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x34]
	add esp,0x14
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block4

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4

 Block3:
	push 0xFFFFFFFF
	lea ecx,[esi+0x4DC]
	call ZArray<long>::InsertBefore
	mov edx,dword ptr [esi+0x4E0]
	mov dword ptr [eax],edx

 Block4:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CCashShop::OnQueryCashResult
__SUB_CLASS_THIS(00096400, __thiscall, 48248,  CCashShop, void, CInPacket&) {
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
	call CInPacket::Decode4
	mov edi,eax
	test ebx,ebx
	jl Block12

 Block1:
	test ebp,ebp
	jl Block12

 Block2:
	test edi,edi
	jl Block12

 Block3:
	lea edx,[esi+0x20]
	mov ecx,ebx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x2C]
	mov ecx,ebp
	mov dword ptr [esi+0x28],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x38]
	mov ecx,edi
	mov dword ptr [esi+0x34],eax
	call _ZtlSecureTearHelper<long>::call
	xor edi,edi
	push edi
	lea ecx,[esi+0x2E8C]
	mov dword ptr [esi+0x40],eax
	call CWnd::InvalidateRect
	mov dword ptr [esi+0x1C],edi
	cmp dword ptr [esi+0x4E4],edi
	je Block5

 Block4:
	mov ecx,esi
	call CCashShop::SendBuyAvatarPacket

 Block5:
	cmp dword ptr [esi+0x514],edi
	je Block7

 Block6:
	mov ecx,esi
	call CCashShop::SendGiftsPacket

 Block7:
	mov eax,dword ptr [esi+0x4D0]
	cmp eax,edi
	je Block10

 Block8:
	push eax
	mov ecx,esi
	call CCashShop::FindWishList
	test eax,eax
	jl Block10

 Block9:
	mov eax,dword ptr [esi+0x4D0]
	push eax
	mov ecx,esi
	call CCashShop::OnRemoveWish
	mov dword ptr [esi+0x4D0],edi

 Block10:
	cmp dword ptr [esi+0x4EC],edi
	je Block13

 Block11:
	mov ecx,esi
	mov dword ptr [esi+0x4EC],edi
	call CCashShop::GiftWishItem
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4

 Block12:
	push 2
	mov ecx,esi
	call CCashShop::NoticeFailReason
	mov ecx,esi
	call CCashShop::SendTransferFieldPacket

 Block13:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CCashShop::SendBuyNameChangeItemPacket
_SUB_EXCEPTION_HANDLER(88250)
__SUB_CLASS_THIS(00088250, __thiscall, 48268,  CCashShop, void, long, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_88250
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
	push 0x113
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],1
	call COutPacket::_ctor_1
	push 0x32
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x24],2
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x28]
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	lea edx,[esp+0x30]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	call COutPacket::EncodeStr
	push ecx
	mov ecx,esp
	lea eax,[esp+0x34]
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	call COutPacket::EncodeStr
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x1C],1
	mov byte ptr [esp+0x20],1
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 0xC
}
}
// CCashShop::OnCashItemResTransferWorldFailed
__SUB_CLASS_THIS(00098370, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	mov dword ptr [esi+0x1C],0
	call CInPacket::Decode1
	movzx eax,al
	push eax
	mov ecx,esi
	call CCashShop::NoticeFailReason
	pop esi
	ret 4
}
}
// CCashShop::OnMoveCashItemLtoS
_SUB_EXCEPTION_HANDLER(828E0)
__SUB_CLASS_THIS(000828E0, __thiscall, 48252,  CCashShop, int32_t, _LARGE_INTEGER, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_828E0
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
	cmp dword ptr [edi+0x44],0
	mov dword ptr [esp+0x14],0
	jne Block3

 Block1:
	push 0x21
	call CCashShop::NoticeFailReason

 Block2:
	xor eax,eax
	jmp Block35

 Block3:
	cmp dword ptr [edi+0x1C],0
	jne Block2

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x24]
	push eax
	mov dword ptr [esp+0x1C],ecx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x24]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ebp,dword ptr [esp+0x5C]
	cmp ebp,1
	jge Block6

 Block5:
	cmp ebp,5
	jg Block12

 Block6:
	mov ecx,dword ptr [esp+0x60]
	test ecx,ecx
	jle Block12

 Block7:
	mov eax,dword ptr [esi+ebp*4+0x501]
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [eax-4]

 Block9:
	dec eax
	cmp ecx,eax
	jg Block12

 Block10:
	push ecx
	push ebp
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	call CharacterData::GetItem
	cmp dword ptr [eax+4],0
	mov dword ptr [esp+0x14],1
	jne Block12

 Block11:
	xor bl,bl
	jmp Block13

 Block12:
	mov bl,1

 Block13:
	test byte ptr [esp+0x14],1
	je Block15

 Block14:
	lea ecx,[esp+0x2C]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block15:
	xor eax,eax
	test bl,bl
	jne Block35

 Block16:
	mov ebx,dword ptr [esp+0x58]
	mov esi,dword ptr [esp+0x54]
	xor edx,edx
	lea ebx,[ebx]

 Block17:
	mov ecx,dword ptr [edi+0x48C]
	test ecx,ecx
	je Block23

 Block18:
	cmp eax,dword ptr [ecx-4]
	jae Block23

 Block19:
	mov ebp,dword ptr [edx+ecx]
	cmp ebp,esi
	jne Block21

 Block20:
	mov ecx,dword ptr [edx+ecx+4]
	cmp ecx,ebx
	je Block22

 Block21:
	mov ebp,dword ptr [esp+0x5C]
	inc eax
	add edx,0x37
	jmp Block17

 Block22:
	mov ebp,dword ptr [esp+0x5C]

 Block23:
	mov ecx,dword ptr [edi+0x48C]
	test ecx,ecx
	je Block2

 Block24:
	cmp eax,dword ptr [ecx-4]
	jae Block2

 Block25:
	imul eax,0x37
	add eax,ecx
	mov ecx,dword ptr [esp+0x18]
	mov esi,eax
	mov edx,dword ptr [esi+0x14]
	push edx
	lea eax,[esp+0x20]
	push eax
	call CWvsContext::GetCommodityBySN
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x4C],0
	test eax,eax
	je Block30

 Block26:
	cmp dword ptr [eax+0x24],0
	jne Block30

 Block27:
	cmp dword ptr [eax+0x20],0
	jne Block30

 Block28:
	mov ecx,dword ptr [esi+0x10]
	push 1
	push ecx
	mov ecx,edi
	call CCashShop::CheckAlreadyExist
	test eax,eax
	je Block30

 Block29:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x70],esp
	push 0xBC0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	xor eax,eax
	jmp Block35

 Block30:
	push 0x113
	lea ecx,[esp+0x38]
	call COutPacket::_ctor_1
	push 0xE
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x50],1
	call COutPacket::Encode1
	push 8
	lea eax,[esp+0x58]
	push eax
	lea ecx,[esp+0x3C]
	call COutPacket::EncodeBuffer
	push ebp
	lea ecx,[esp+0x38]
	call COutPacket::Encode1
	mov ecx,dword ptr [esp+0x60]
	push ecx
	lea ecx,[esp+0x38]
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x34]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x38]
	mov dword ptr [edi+0x1C],1
	mov byte ptr [esp+0x4C],0
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block34

 Block31:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x20]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x20]
	test ecx,ecx
	je Block34

 Block33:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block34:
	mov eax,1

 Block35:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 0x10
}
}
// CCashShop::OnCashItemResGiftFailed
__SUB_CLASS_THIS(00097210, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	push edi
	mov dword ptr [esi+0x1C],0
	call CInPacket::Decode1
	movzx edi,al
	push edi
	mov ecx,esi
	call CCashShop::NoticeFailReason
	test edi,edi
	je Block3

 Block1:
	cmp edi,2
	je Block3

 Block2:
	cmp edi,1
	jne Block4

 Block3:
	mov ecx,esi
	call CCashShop::SendTransferFieldPacket

 Block4:
	cmp dword ptr [esi+0x514],0
	mov ecx,esi
	je Block6

 Block5:
	call CCashShop::SendGiftsPacket
	pop edi
	pop esi
	ret 4

 Block6:
	push edi
	call CCashShop::NoticeFailReason
	pop edi
	pop esi
	ret 4
}
}
// CCashShop::OnCashItemResMoveStoLDone
__SUB_CLASS_THIS(000948D0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	push esi
	mov ebx,ecx
	push edi
	lea eax,[esp+0x10]
	mov dword ptr [ebx+0x1C],0
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
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
	mov dword ptr [esp+0x14],0

 Block5:
	push 0xFFFFFFFF
	lea ecx,[ebx+0x48C]
	call ZArray<GW_CashItemInfo>::InsertBefore
	mov ecx,dword ptr [esp+0x1C]
	mov edi,eax
	push 0x37
	push edi
	call CInPacket::DecodeBuffer
	mov ecx,dword ptr [edi+0x10]
	mov eax,0x431BDE83
	imul ecx
	mov ecx,dword ptr [edi+4]
	sar edx,0x12
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov edx,dword ptr [edi]
	push ecx
	push edx
	push esi
	mov ecx,ebp
	call CharacterData::FindCashItemSlotPosition_0
	test eax,eax
	jg Block7

 Block6:
	push 0x22000008
	lea ecx,[esp+0x20]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x1C]
	push offset CTerminateException::THROW_INFO
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esp+0x18],eax
	call _CxxThrowException

 Block7:
	mov edx,dword ptr [ebp+esi*4+0x501]
	lea esi,[edx+eax*8]
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block12

 Block8:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block11

 Block10:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block11:
	mov dword ptr [esi+4],0

 Block12:
	lea esi,[ebx+0xA50]
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	push 0
	mov ecx,esi
	call CCSWnd_Locker::SetSelectedNo
	push 0
	lea ecx,[ebx+0x1534]
	call CWnd::InvalidateRect
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [eax+0x3600]
	cmp ecx,dword ptr [edi+0x10]
	jne Block14

 Block13:
	mov dword ptr [eax+0x3600],0

 Block14:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 4
}
}
// CCashShop::OnCashItemResExpireDone
_SUB_EXCEPTION_HANDLER(97760)
__SUB_CLASS_THIS(00097760, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_97760
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x1C],edi
	mov ecx,dword ptr [esp+0x30]
	push 8
	lea eax,[esp+0x14]
	push eax
	call CInPacket::DecodeBuffer
	xor ecx,ecx
	mov dword ptr [esp+0x30],ecx
	mov edx,dword ptr [esp+0x10]
	xor esi,esi
	mov dword ptr [esp+0x28],ecx
	add edi,0x48C

 Block1:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block11

 Block2:
	cmp esi,dword ptr [eax-4]
	jae Block11

 Block3:
	mov ebp,dword ptr [ecx+eax]
	cmp ebp,edx
	jne Block5

 Block4:
	mov eax,dword ptr [ecx+eax+4]
	cmp eax,dword ptr [esp+0x14]
	je Block6

 Block5:
	inc esi
	add ecx,0x37
	jmp Block1

 Block6:
	mov eax,dword ptr [edi]
	imul esi,0x37
	mov ecx,dword ptr [eax+esi+0x10]
	add eax,esi
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x1C]
	push edx
	call CItemInfo::GetItemName
	mov ebp,eax
	lea eax,[esp+0x10]
	push 0xB2A
	push eax
	mov byte ptr [esp+0x30],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x34],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [edi]
	add eax,esi
	push eax
	mov ecx,edi
	call ZArray<GW_CashItemInfo>::RemoveAt

 Block11:
	mov esi,dword ptr [esp+0x1C]
	add esi,0xA50
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	push 1
	mov ecx,esi
	call CCSWnd_Locker::SetSelectedNo
	push 0
	push 0
	push 0
	lea ecx,[esp+0x24]
	push 0x4F9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x44]
	mov dword ptr [esp+0x30],esp
	push edx
	mov byte ptr [esp+0x40],3
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x2C]
	add esp,0x14
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x1C
	ret 4
}
}
// CCashShop::OnCashItemResCashGachaponOpenFailed
__SUB_CLASS_THIS(000962B0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [edi+0x1C],0
	call CInPacket::Decode1
	movzx esi,al
	push esi
	mov ecx,edi
	call CCashShop::NoticeFailReason
	test esi,esi
	je Block3

 Block1:
	cmp esi,2
	je Block3

 Block2:
	cmp esi,1
	jne Block4

 Block3:
	mov ecx,edi
	call CCashShop::SendTransferFieldPacket

 Block4:
	pop edi
	pop esi
	ret 4
}
}
// CCashShop::CheckTransferWorldPossible
_SUB_EXCEPTION_HANDLER(88360)
__SUB_CLASS_THIS(00088360, __thiscall, 48269,  CCashShop, int32_t, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_88360
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test esi,esi
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x1C]
	push offset _S_UNKNOWNERRORTYPE
	push eax
	call ZXString<char>::Format
	add esp,8
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4

 Block2:
	cmp dword ptr [esi+0x37C8],0
	je Block5

 Block3:
	mov eax,dword ptr [esi+0x20B4]
	mov ecx,dword ptr [esi+0x37D4]
	cmp dword ptr [ecx],eax
	jne Block5

 Block4:
	mov edx,dword ptr [esp+0x1C]
	push offset _S_GUILDMASTERCANNO
	push edx
	call ZXString<char>::Format
	add esp,8
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4

 Block5:
	lea ecx,[esi+0x2038]
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block7

 Block6:
	cmp dword ptr [esi+0x209C],0
	je Block8

 Block7:
	mov eax,dword ptr [esp+0x1C]
	push offset _S_GMCANNOTTRANSFER
	push eax
	call ZXString<char>::Format
	add esp,8
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4

 Block8:
	cmp word ptr [esi+0x40F8],0
	jne Block10

 Block9:
	cmp dword ptr [esi+0x4100],0
	je Block13

 Block10:
	lea ecx,[esp+8]
	push 0x13AB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x1C]
	push eax
	push edx
	mov dword ptr [esp+0x1C],0
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x10]
	add esp,8
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4

 Block13:
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CCashShop::OnCashItemResPurchaseRecordFailed
__SUB_CLASS_THIS(00094070, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	call CInPacket::Decode1
	ret 4
}
}
// CCashShop::CCashShop
_SUB_EXCEPTION_HANDLER(938B0)
__SUB_CLASS_THIS(000938B0, __thiscall, 48238,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_938B0
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
	int 3// TODO: 	mov dword ptr [esi+4],offset IUIMsgHandler::`vftable'
	int 3// TODO: 	mov dword ptr [esi+8],offset INetMsgHandler::`vftable'
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi+0xC],offset ZRefCounted::`vftable'
	mov dword ptr [esi+0x10],eax
	xor edi,edi
	mov dword ptr [esi+0x14],eax
	int 3// TODO: 	mov dword ptr [esi],offset CCashShop::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCashShop::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCashShop::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CCashShop::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esi+0x1C],edi
	mov dword ptr [esi+0x44],edi
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esi+0x48],edi
	mov dword ptr [esi+0x4C],edi
	mov dword ptr [esi+0x50],edi
	mov dword ptr [esi+0x48C],edi
	mov dword ptr [esi+0x490],0xFFFFFFFF
	mov dword ptr [esi+0x494],edi
	mov dword ptr [esi+0x498],edi
	mov dword ptr [esi+0x49C],edi
	mov dword ptr [esi+0x4A0],edi
	mov dword ptr [esi+0x4A4],edi
	mov dword ptr [esi+0x4D0],edi
	mov dword ptr [esi+0x4D8],edi
	mov dword ptr [esi+0x4DC],edi
	mov dword ptr [esi+0x4E4],edi
	mov dword ptr [esi+0x4E8],edi
	mov dword ptr [esi+0x4F4],edi
	mov dword ptr [esi+0x508],edi
	mov dword ptr [esi+0x50C],edi
	push edi
	push offset _S_
	lea ebx,[esi+0x51C]
	push edi
	mov dword ptr [esi+0x514],edi
	mov dword ptr [esi+0x518],edi
	push edi
	mov ecx,ebx
	mov byte ptr [esp+0x30],0xB
	mov dword ptr [ebx],edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer
	mov dword ptr [esi+0x520],edi
	mov dword ptr [esi+0x524],edi
	mov dword ptr [esi+0x52C],edi
	mov dword ptr [esi+0x530],edi
	mov dword ptr [esi+0x534],edi
	mov dword ptr [esi+0x538],edi
	mov dword ptr [esi+0x548],1
	mov dword ptr [esi+0x54C],edi
	int 3// TODO: 	mov dword ptr [esi+0x550],offset ZList<ZRef<CS_COMMODITY_EX>>::`vftable'
	mov dword ptr [esi+0x558],edi
	mov dword ptr [esi+0x55C],edi
	mov dword ptr [esi+0x560],edi
	mov byte ptr [esp+0x20],0x11
	lea ecx,[esi+0x564]
	call CCSWnd_Char::_ctor_default
	lea ecx,[esi+0xA50]
	mov byte ptr [esp+0x20],0x12
	call CCSWnd_Locker::_ctor_default
	lea ecx,[esi+0x1534]
	mov byte ptr [esp+0x20],0x13
	call CCSWnd_Inventory::_ctor_default
	lea ecx,[esi+0x2048]
	mov byte ptr [esp+0x20],0x14
	call CCSWnd_Tab::_ctor_default
	lea ecx,[esi+0x210C]
	mov byte ptr [esp+0x20],0x15
	call CCSWnd_List::_ctor_default
	lea ebx,[esi+0x2DF4]
	mov ecx,ebx
	mov byte ptr [esp+0x20],0x16
	call CWnd::_ctor_default
	int 3// TODO: 	mov dword ptr [ebx],offset CCSWnd_Best::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [ebx+4],offset CCSWnd_Best::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [ebx+8],offset CCSWnd_Best::`vftable'{for `ZRefCounted'}
	lea ebx,[esi+0x2E8C]
	mov ecx,ebx
	mov byte ptr [esp+0x20],0x17
	call CWnd::_ctor_default
	int 3// TODO: 	mov dword ptr [ebx],offset CCSWnd_Status::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [ebx+4],offset CCSWnd_Status::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [ebx+8],offset CCSWnd_Status::`vftable'{for `ZRefCounted'}
	mov dword ptr [ebx+0x84],edi
	mov dword ptr [ebx+0x8C],edi
	mov dword ptr [ebx+0x94],edi
	mov dword ptr [ebx+0x9C],edi
	lea ebx,[esi+0x2F30]
	mov ecx,ebx
	mov byte ptr [esp+0x20],0x18
	call CWnd::_ctor_default
	int 3// TODO: 	mov dword ptr [ebx],offset CCSWnd_ItemSearch::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [ebx+4],offset CCSWnd_ItemSearch::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [ebx+8],offset CCSWnd_ItemSearch::`vftable'{for `ZRefCounted'}
	mov dword ptr [ebx+0x80],edi
	mov dword ptr [ebx+0x88],edi
	mov dword ptr [ebx+0x90],edi
	lea ecx,[esi+0x2FC4]
	mov byte ptr [esp+0x20],0x19
	call CCSWnd_OneADay::_ctor_default
	mov dword ptr [esi+0x3B50],edi
	lea ecx,[esi+0x3B58]
	mov dword ptr [esi+0x3B54],0xFFFFFFFF
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, int, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, int, long>::_CalcAutoGrow
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov byte ptr [esp+0x20],0x1C
	call CWvsContext::LoadCommodity
	test eax,eax
	jne Block2

 Block1:
	push 0x22000006
	lea ecx,[esp+0x2C]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x28]
	push offset CTerminateException::THROW_INFO
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esp+0x18],eax
	call _CxxThrowException

 Block2:
	cmp dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance],edi
	jne Block5

 Block3:
	push 4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,edi
	je Block5

 Block4:
	mov dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance],eax
	mov dword ptr [eax],edi

 Block5:
	mov edi,dword ptr [esp+0x28]
	push edi
	mov ecx,esi
	call CCashShop::LoadData
	mov ecx,edi
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,edi
	mov dword ptr [esi+0x500],edx
	call CInPacket::Decode4
	mov dword ptr [esi+0x504],eax
	mov eax,esi
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
// CCashShop::OnCashItemResSetWishFailed
__SUB_CLASS_THIS(000969C0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	mov dword ptr [esi+0x1C],0
	call CInPacket::Decode1
	movzx eax,al
	push eax
	mov ecx,esi
	call CCashShop::NoticeFailReason
	pop esi
	ret 4
}
}
// CCashShop::OnCashItemResEnableEquipSlotExtFailed
__SUB_CLASS_THIS(000976F0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [edi+0x1C],0
	call CInPacket::Decode1
	movzx esi,al
	push esi
	mov ecx,edi
	call CCashShop::NoticeFailReason
	test esi,esi
	je Block3

 Block1:
	cmp esi,2
	je Block3

 Block2:
	cmp esi,1
	jne Block4

 Block3:
	mov ecx,edi
	call CCashShop::SendTransferFieldPacket

 Block4:
	pop edi
	pop esi
	ret 4
}
}
// CCashShop::OnChangedSortType
_SUB_EXCEPTION_HANDLER(81810)
__SUB_CLASS_THIS(00081810, __thiscall, 48247,  CCashShop, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_81810
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
	mov ebx,ecx
	mov dword ptr [esp+0x20],ebx
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [ebx+0x4FC],eax
	mov ecx,dword ptr [TSingleton<CWvsCommodityEx>::ms_pInstance]
	call CWvsCommodityEx::GetCommodityEx
	mov esi,eax
	xor eax,eax
	mov dword ptr [esp+0x58],esi
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x18],eax

 Block1:
	mov eax,dword ptr [ebx+0x48]
	test eax,eax
	je Block60

 Block2:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,dword ptr [eax-4]
	jae Block60

 Block3:
	mov edx,eax
	mov eax,dword ptr [esp+0x18]
	cmp dword ptr [edx+eax+0x10],0xFFFFFFFF
	lea ecx,[edx+eax]
	je Block59

 Block4:
	mov eax,dword ptr [ecx+0x10]
	mov edi,dword ptr [ecx+0x14]
	add edi,eax
	lea ecx,[edi-1]
	cmp eax,ecx
	mov dword ptr [esp+0x2C],edi
	jge Block59

 Block5:
	lea edx,[eax+1]
	sub ecx,eax
	lea ebp,[eax*8]
	mov dword ptr [esp+0x24],edx
	mov dword ptr [esp+0x28],ecx
	lea esp,[esp]

 Block6:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+ebp+4]
	cmp dword ptr [eax+0x4C],0
	je Block58

 Block7:
	cmp edx,edi
	mov ecx,edx
	mov dword ptr [esp+0x1C],ecx
	jge Block58

 Block8:
	mov edi,edi

 Block9:
	mov eax,dword ptr [esi]
	lea edi,[ecx*8]
	mov ecx,dword ptr [edi+eax+4]
	cmp dword ptr [ecx+0x4C],0
	je Block56

 Block10:
	mov edx,dword ptr [ebx+0x4FC]
	sub edx,0
	je Block41

 Block11:
	sub edx,1
	je Block27

 Block12:
	sub edx,1
	jne Block56

 Block13:
	mov edx,dword ptr [eax+ebp+4]
	mov edx,dword ptr [edx+0xC]
	cmp edx,dword ptr [ecx+0xC]
	jge Block56

 Block14:
	mov ebx,dword ptr [eax+ebp+4]
	mov dword ptr [esp+0x34],ebx
	test ebx,ebx
	je Block16

 Block15:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block16:
	mov eax,dword ptr [esi]
	lea ecx,[edi+eax]
	push ecx
	lea ecx,[eax+ebp]
	mov dword ptr [esp+0x54],2
	call ZRef<CS_COMMODITY_EX>::op_assign_copy
	mov esi,dword ptr [esi]
	add esi,edi
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block18

 Block17:
	lea edx,[ebx+4]
	push edx
	call edi

 Block18:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block23

 Block19:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block20:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block22

 Block21:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block22:
	mov dword ptr [esi+4],0

 Block23:
	mov dword ptr [esi+4],ebx
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test ebx,ebx
	je Block55

 Block24:
	lea esi,[ebx+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block26

 Block25:
	push esi
	call edi
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block26:
	mov dword ptr [esp+0x34],0
	jmp Block55

 Block27:
	mov edx,dword ptr [eax+ebp+4]
	mov edx,dword ptr [edx+0x20]
	cmp edx,dword ptr [ecx+0x20]
	jle Block56

 Block28:
	mov ebx,dword ptr [eax+ebp+4]
	mov dword ptr [esp+0x3C],ebx
	test ebx,ebx
	je Block30

 Block29:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block30:
	mov eax,dword ptr [esi]
	lea ecx,[edi+eax]
	push ecx
	lea ecx,[eax+ebp]
	mov dword ptr [esp+0x54],1
	call ZRef<CS_COMMODITY_EX>::op_assign_copy
	mov esi,dword ptr [esi]
	add esi,edi
	test ebx,ebx
	je Block32

 Block31:
	lea edx,[ebx+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block32:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block37

 Block33:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block36

 Block34:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block36

 Block35:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block36:
	mov dword ptr [esi+4],0

 Block37:
	mov dword ptr [esi+4],ebx
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test ebx,ebx
	je Block55

 Block38:
	lea esi,[ebx+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block40

 Block39:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block40:
	mov dword ptr [esp+0x3C],0
	jmp Block55

 Block41:
	mov edx,dword ptr [eax+ebp+4]
	mov edx,dword ptr [edx+0x28]
	cmp edx,dword ptr [ecx+0x28]
	jge Block56

 Block42:
	mov ebx,dword ptr [eax+ebp+4]
	mov dword ptr [esp+0x44],ebx
	test ebx,ebx
	je Block44

 Block43:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block44:
	mov eax,dword ptr [esi]
	lea ecx,[edi+eax]
	push ecx
	lea ecx,[eax+ebp]
	mov dword ptr [esp+0x54],0
	call ZRef<CS_COMMODITY_EX>::op_assign_copy
	mov esi,dword ptr [esi]
	add esi,edi
	test ebx,ebx
	je Block46

 Block45:
	lea edx,[ebx+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block46:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block51

 Block47:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block50

 Block48:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block50

 Block49:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block50:
	mov dword ptr [esi+4],0

 Block51:
	mov dword ptr [esi+4],ebx
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test ebx,ebx
	je Block55

 Block52:
	lea esi,[ebx+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block54

 Block53:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block54:
	mov dword ptr [esp+0x44],0

 Block55:
	mov esi,dword ptr [esp+0x58]

 Block56:
	mov ecx,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+0x2C]
	mov ebx,dword ptr [esp+0x20]
	inc ecx
	cmp ecx,edi
	mov dword ptr [esp+0x1C],ecx
	jl Block9

 Block57:
	mov edx,dword ptr [esp+0x24]

 Block58:
	inc edx
	add ebp,8
	sub dword ptr [esp+0x28],1
	mov dword ptr [esp+0x24],edx
	jne Block6

 Block59:
	inc dword ptr [esp+0x14]
	add dword ptr [esp+0x18],0x1C
	jmp Block1

 Block60:
	mov eax,dword ptr [ebx+0x540]
	push eax
	mov ecx,ebx
	call CCashShop::OnChangedCategorySub
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
// CCashShop::OnCashItemResBuyPackageFailed
__SUB_CLASS_THIS(00096D40, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,ecx
	mov ecx,ebx
	mov dword ptr [edi+0x1C],0
	call CInPacket::Decode1
	movzx esi,al
	cmp esi,0x1E
	je Block2

 Block1:
	cmp esi,0x1D
	jne Block3

 Block2:
	mov ecx,ebx
	call CInPacket::Decode4
	mov ebx,eax
	push esi
	push ebx
	mov ecx,edi
	call CCashShop::UpdateStock
	push esi
	push ebx
	mov ecx,edi
	call CCashShop::ChangeLimitGoodsState
	lea ecx,[edi+0x210C]
	call CCSWnd_List::ChangePage

 Block3:
	push esi
	mov ecx,edi
	call CCashShop::NoticeFailReason
	test esi,esi
	je Block6

 Block4:
	cmp esi,2
	je Block6

 Block5:
	cmp esi,1
	jne Block7

 Block6:
	push esi
	mov ecx,edi
	call CCashShop::NoticeFailReason
	mov ecx,edi
	call CCashShop::SendTransferFieldPacket

 Block7:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CCashShop::ShowADBoard
__SUB_CLASS_THIS(0007D3D0, __thiscall, 48250,  CCashShop, void, long, long) {
__asm {

 Block0:
	add ecx,0x564
	jmp  CCSWnd_Char::ShowADBoard
}
}
// CCashShop::IsUsableMasteryBookItem
_SUB_EXCEPTION_HANDLER(85B90)
__SUB_CLASS_THIS(00085B90, __thiscall, 48294,  CCashShop, int32_t, long, const CharacterData&, const SKILLENTRY*&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_85B90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
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
	mov esi,dword ptr [ebp+8]
	xor ebx,ebx
	push esi
	mov dword ptr [eax],ebx
	call is_masterybook_item
	add esp,4
	test eax,eax
	je Block36

 Block1:
	push esi
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemInfo
	cmp dword ptr [ebp-0x14],ebx
	mov dword ptr [ebp-4],ebx
	sete al
	test al,al
	je Block3

 Block2:
	push 0x22000006
	lea ecx,[ebp-0x18]
	call CMSException::_ctor_0
	mov edx,dword ptr [ebp-0x18]
	push offset CTerminateException::THROW_INFO
	lea eax,[ebp-0x1C]
	push eax
	mov dword ptr [ebp-0x1C],edx
	call _CxxThrowException

 Block3:
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push 0x1AC0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	cmp ecx,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea edx,[ebp-0x30]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],2
	call get_int32
	mov esi,8
	add esp,8
	mov dword ptr [ebp-0x38],eax
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x30],si
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x20],esp
	push 0x1AD8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],3
	cmp ecx,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[ebp-0x30]
	push eax
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x1C]
	mov dword ptr [ebp-0x1C],ebx
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
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x30],si
	jne Block17

 Block15:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov edi,dword ptr [ebp-0x1C]
	cmp edi,ebx
	je Block32

 Block19:
	lea ecx,[ecx]

 Block20:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xFFFFFFFF
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x48]
	mov byte ptr [ebp-4],7
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],8
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x48],8
	mov esi,eax
	mov dword ptr [ebp-0x34],esi
	mov byte ptr [ebp-4],6
	jne Block23

 Block21:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[ebp-0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	test esi,esi
	jl Block32

 Block25:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push esi
	call CSkillInfo::GetSkill
	mov dword ptr [ebp-0x20],eax
	test eax,eax
	je Block28

 Block26:
	push esi
	call is_skill_need_master_level
	add esp,4
	test eax,eax
	je Block28

 Block27:
	lea eax,[ebp-0x18]
	push eax
	lea ecx,[ebp-0x34]
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	add ecx,0x56D
	mov dword ptr [ebp-0x18],0
	call ZMap<long, long, long>::GetAt
	mov edx,dword ptr [ebp-0x38]
	cmp dword ptr [ebp-0x18],edx
	jge Block29

 Block28:
	inc ebx
	jmp Block20

 Block29:
	mov eax,dword ptr [ebp-0x20]
	mov ecx,dword ptr [ebp+0x10]
	mov dword ptr [ecx],eax
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],0
	call eax
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	xor eax,eax
	jmp Block37

 Block32:
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block34

 Block33:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block34:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block36:
	mov eax,1

 Block37:
	lea esp,[ebp-0x58]
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
}
}
// CCashShop::OnCashItemResCashGachaponCopyDone
__SUB_CLASS_THIS(00094B90, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x14]
	push edi
	mov edi,ecx
	mov ecx,esi
	mov dword ptr [edi+0x1C],0
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebp,al
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebx,al
	call CInPacket::Decode4
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0x10],eax
	call CInPacket::Decode4
	mov dword ptr [esp+0x18],eax
	test ebx,ebx
	je Block3

 Block1:
	test ebp,ebp
	je Block3

 Block2:
	push 0x37
	push 0xFFFFFFFF
	lea ecx,[edi+0x48C]
	call ZArray<GW_CashItemInfo>::InsertBefore
	push eax
	mov ecx,esi
	call CInPacket::DecodeBuffer

 Block3:
	mov edi,dword ptr [edi+0x538]
	test edi,edi
	je Block5

 Block4:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x10]
	push eax
	push ecx
	push ebp
	mov ecx,edi
	call CUICashGachapon::OnCashGachaponItemCopyResult

 Block5:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4
}
}
// CCashShop::SendChangeMaplePoint
_SUB_EXCEPTION_HANDLER(88580)
__SUB_CLASS_THIS(00088580, __thiscall, 48271,  CCashShop, void, _LARGE_INTEGER, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_88580
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x3C]
	push eax
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	xor ebx,ebx
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x3C],ebx
	lea edx,[esp+0xC]
	push 0x1627
	push edx
	mov byte ptr [esp+0x34],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x38],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x18]
	add esp,0xC
	mov byte ptr [esp+0x2C],1
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x50]
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block4

 Block3:
	push 0xBB
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 8
	lea ecx,[esp+0x38]
	push ecx
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],3
	call COutPacket::EncodeBuffer
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],1
	call ZArray<unsigned char>::RemoveAll

 Block4:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop ebx
	add esp,0x28
	ret 0xC
}
}
// CCashShop::OnCashItemResIncTrunkCountFailed
__SUB_CLASS_THIS(000973D0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [edi+0x1C],0
	call CInPacket::Decode1
	movzx esi,al
	push esi
	mov ecx,edi
	call CCashShop::NoticeFailReason
	test esi,esi
	je Block3

 Block1:
	cmp esi,2
	je Block3

 Block2:
	cmp esi,1
	jne Block4

 Block3:
	mov ecx,edi
	call CCashShop::SendTransferFieldPacket

 Block4:
	pop edi
	pop esi
	ret 4
}
}
// CCashShop::OnCashGachaponCopy
_SUB_EXCEPTION_HANDLER(92690)
__SUB_CLASS_THIS(00092690, __thiscall, 48270,  CCashShop, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_92690
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ebx,ebx
	cmp dword ptr [edi+0x44],ebx
	jne Block3

 Block1:
	push 0x21
	call CCashShop::NoticeFailReason

 Block2:
	xor eax,eax
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x30
	ret 8

 Block3:
	cmp dword ptr [edi+0x1C],ebx
	jne Block2

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CWvsContext::GetCharacterData
	lea ecx,[esp+0x1C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [edi+0x28]
	push ecx
	lea edx,[edi+0x20]
	xor esi,esi
	push edx
	mov dword ptr [esp+0x18],esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x1C2
	jl Block6

 Block5:
	mov esi,1
	mov dword ptr [esp+0x10],esi

 Block6:
	mov eax,dword ptr [edi+0x34]
	push eax
	lea ecx,[edi+0x2C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x1C2
	jl Block8

 Block7:
	or esi,2
	mov dword ptr [esp+0x10],esi

 Block8:
	mov edx,dword ptr [edi+0x40]
	push edx
	lea eax,[edi+0x38]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x1C2
	jl Block10

 Block9:
	or esi,4
	mov dword ptr [esp+0x10],esi

 Block10:
	cmp esi,ebx
	jne Block12

 Block11:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	push 0x161A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x30
	ret 8

 Block12:
	mov dword ptr [esp+0x18],ebx
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x3C],ebx
	call ZRef<CS_COMMODITY>::_Alloc
	mov edx,dword ptr [esp+0x44]
	mov esi,dword ptr [esp+0x18]
	lea ecx,[esi+0x10]
	push edx
	call TSecType<long>::SetData
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esi+0xC],0xC8
	push ebx
	mov dword ptr [esi+0x20],0x1C2
	sub esp,8
	mov dword ptr [esi+0x1C],eax
	mov eax,esp
	mov dword ptr [eax+4],esi
	mov dword ptr [esp+0x50],esp
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[esp+0x1C]
	push ecx
	push 4
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x60],esp
	push 0x161B
	push edx
	mov byte ptr [esp+0x5C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x54],bl
	call CConfirmPurchaseDlg::Confirm_1
	add esp,0x18
	cmp eax,1
	je Block14

 Block13:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	xor eax,eax
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x30
	ret 8

 Block14:
	push 0x113
	lea ecx,[esp+0x28]
	call COutPacket::_ctor_1
	push 0x4C
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x40],2
	call COutPacket::Encode1
	mov esi,dword ptr [esp+0x10]
	cmp esi,2
	sete al
	movzx ecx,al
	push ecx
	lea ecx,[esp+0x28]
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x24]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x28]
	mov dword ptr [edi+0x1C],1
	mov byte ptr [esp+0x3C],bl
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	mov eax,1
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x30
	ret 8
}
}
// CCashShop::IsLimitGoodsRemain
__SUB_CLASS_THIS(0007E620, __thiscall, 48302,  CCashShop, int32_t, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	push esi
	xor ebp,ebp
	push edi
	xor ebx,ebx
	jmp Block2

 Block2:
	mov eax,dword ptr [ecx+0x50]
	test eax,eax
	je Block20

 Block3:
	cmp ebp,dword ptr [eax-4]
	jae Block20

 Block4:
	mov esi,eax
	add esi,ebx
	xor eax,eax
	lea edx,[esi+4]
	lea ecx,[ecx]

 Block5:
	mov edi,dword ptr [edx]
	test edi,edi
	je Block8

 Block6:
	cmp edi,dword ptr [esp+0x24]
	je Block9

 Block7:
	inc eax
	add edx,4
	cmp eax,0xA
	jl Block5

 Block8:
	inc ebp
	add ebx,0x68
	jmp Block2

 Block9:
	lea eax,[esp+0x10]
	push eax
	call GetLocalTime
	movzx eax,word ptr [esp+0x10]
	movzx ecx,word ptr [esp+0x12]
	imul eax,0x64
	movzx edx,word ptr [esp+0x16]
	add eax,ecx
	mov ecx,dword ptr [esi+0x38]
	imul eax,0x64
	add eax,edx
	movzx edx,word ptr [esp+0x14]
	test cl,2
	je Block12

 Block10:
	cmp dword ptr [esi+0x3C],eax
	jg Block20

 Block11:
	cmp eax,dword ptr [esi+0x40]
	jg Block20

 Block12:
	test cl,4
	je Block14

 Block13:
	cmp dword ptr [esi+edx*4+0x4C],0
	je Block20

 Block14:
	test cl,8
	je Block17

 Block15:
	cmp dword ptr [esi+0x44],eax
	jg Block20

 Block16:
	mov edx,dword ptr [esi+0x48]
	dec edx
	cmp eax,edx
	jg Block20

 Block17:
	test cl,1
	je Block19

 Block18:
	cmp dword ptr [esi+0x34],0
	jle Block20

 Block19:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x10
	ret 4

 Block20:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 4
}
}
// CCashShop::OnCashItemResChangeMaplePointDone
_SUB_EXCEPTION_HANDLER(98520)
__SUB_CLASS_THIS(00098520, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_98520
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
	mov ecx,dword ptr [esp+0x30]
	push 8
	lea eax,[esp+0x1C]
	xor esi,esi
	push eax
	mov dword ptr [edi+0x1C],esi
	call CInPacket::DecodeBuffer
	mov ebx,dword ptr [esp+0x1C]
	xor eax,eax
	lea ecx,[edi+0x48C]
	lea ebx,[ebx]

 Block1:
	mov edx,dword ptr [ecx]
	test edx,edx
	je Block8

 Block2:
	cmp eax,dword ptr [edx-4]
	jae Block8

 Block3:
	mov ebp,dword ptr [esi+edx]
	cmp ebp,dword ptr [esp+0x18]
	jne Block5

 Block4:
	mov edx,dword ptr [esi+edx+4]
	cmp edx,ebx
	je Block6

 Block5:
	inc eax
	add esi,0x37
	jmp Block1

 Block6:
	mov edx,dword ptr [ecx]
	imul eax,0x37
	lea edx,[edx+eax+0x18]
	mov esi,0xFFFF
	add word ptr [edx],si
	mov edx,dword ptr [ecx]
	cmp word ptr [edx+eax+0x18],0
	jne Block8

 Block7:
	add edx,eax
	push edx
	call ZArray<GW_CashItemInfo>::RemoveAt

 Block8:
	xor ebx,ebx
	push ebx
	lea ecx,[edi+0xA50]
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x30]
	call CInPacket::Decode4
	mov esi,eax
	mov dword ptr [esp+0x30],ebx
	lea eax,[esp+0x14]
	push 0x1628
	push eax
	mov dword ptr [esp+0x30],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x34],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x28],bl
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x44]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x44]
	add esp,0x14
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
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
// CCashShop::DecodeZeroGoods
__SUB_CLASS_THIS(00082E40, __thiscall, 48301,  CCashShop, int32_t, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,ecx
	mov ecx,ebx
	call CInPacket::Decode2
	movzx esi,ax
	test esi,esi
	jg Block2

 Block1:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 4

 Block2:
	lea eax,[esp+0x10]
	push eax
	push 1
	add edi,0x508
	push esi
	mov ecx,edi
	call ZArray<CS_ZEROGOODS>::_Realloc
	mov edx,dword ptr [edi]
	mov ecx,esi
	shl ecx,4
	add ecx,esi
	add ecx,ecx
	add ecx,ecx
	push ecx
	push edx
	mov ecx,ebx
	call CInPacket::DecodeBuffer
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 4
}
}
// CCashShop::OnCheckNameChangePossibleResult
_SUB_EXCEPTION_HANDLER(95470)
__SUB_CLASS_THIS(00095470, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_95470
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
	mov edi,ecx
	mov esi,dword ptr [esp+0x28]
	mov ecx,esi
	mov dword ptr [edi+0x1C],0
	call CInPacket::Decode4
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movsx ebx,al
	call CInPacket::Decode4
	mov dword ptr [esp+0x28],eax
	cmp ebx,3
	ja Block13

 Block1:
	cmp EBX, 0
je Block2
cmp EBX, 1
je Block10
cmp EBX, 2
je Block11
cmp EBX, 3
je Block12


 Block2:
	push 0xC4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block9

 Block3:
	push edi
	mov ecx,eax
	call CUIChangingLicenseNotice::_ctor_0
	test eax,eax
	je Block9

 Block4:
	add eax,8
	je Block9

 Block5:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block7

 Block6:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov ecx,dword ptr [esp+0x28]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],1
	call CUIChangingLicenseNotice::SetBirthDate
	mov ecx,esi
	call CDialog::DoModal
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test esi,esi
	je Block16

 Block8:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CUIChangingLicenseNotice>::_ReleaseRaw
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block9:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block7

 Block10:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x21A
	jmp Block14

 Block11:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0x21B
	push eax
	jmp Block15

 Block12:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x21C
	push ecx
	jmp Block15

 Block13:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0xE16

 Block14:
	push edx

 Block15:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block16:
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
// CCashShop::ShowEntrustedShop
__SUB_CLASS_THIS(0007D3C0, __thiscall, 48250,  CCashShop, void, long, long) {
__asm {

 Block0:
	add ecx,0x564
	jmp  CCSWnd_Char::ShowEntrustedShop
}
}
// CCashShop::OnCashItemResIncCharacterSlotCountFailed
__SUB_CLASS_THIS(00097410, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [edi+0x1C],0
	call CInPacket::Decode1
	movzx esi,al
	push esi
	mov ecx,edi
	call CCashShop::NoticeFailReason
	test esi,esi
	je Block3

 Block1:
	cmp esi,2
	je Block3

 Block2:
	cmp esi,1
	jne Block4

 Block3:
	mov ecx,edi
	call CCashShop::SendTransferFieldPacket

 Block4:
	pop edi
	pop esi
	ret 4
}
}
// CCashShop::OnChangedCategory
__SUB_CLASS_THIS(0007E560, __thiscall, 48247,  CCashShop, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	lea ecx,[esi+0x2048]
	mov dword ptr [esi+0x53C],eax
	call CCSWnd_Tab::ChangeCategory
	lea ecx,[esi+0x2DF4]
	call CCSWnd_Best::ChangeCategory
	push 0
	mov ecx,esi
	call CCashShop::OnChangedCategorySub
	pop esi
	ret 4
}
}
// CCashShop::~CCashShop
_SUB_EXCEPTION_HANDLER(94A20)
__SUB_CLASS_THIS0(00094A20, __thiscall, 48240,  CCashShop, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_94A20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	push 0x29
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	mov dword ptr [esp+0x24],0
	call CClientSocket::SendPacket
	push 0x18
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+4],eax
	mov byte ptr [esp+0x20],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CInterStage::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	push 0
	push eax
	mov byte ptr [esp+0x28],0
	call set_stage
	add esp,8
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret
}
}
// CCashShop::OnChangedCategorySub
__SUB_CLASS_THIS(0007DBF0, __thiscall, 48247,  CCashShop, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	lea ecx,[esi+0x2048]
	mov dword ptr [esi+0x540],eax
	call CCSWnd_Tab::ChangeSubCategory
	lea ecx,[esi+0x210C]
	call CCSWnd_List::ChangeCategorySub
	mov eax,dword ptr [esi+0x53C]
	mov ecx,2
	cmp eax,1
	jne Block6

 Block1:
	cmp dword ptr [esi+0x540],ecx
	jne Block4

 Block2:
	cmp dword ptr [esi+0x18],0
	jne Block4

 Block3:
	push 0
	mov ecx,esi
	call CCashShop::OnChangedPage
	mov ecx,esi
	call CCashShop::InitOneADay
	push 0
	push 1
	push esi
	push 1
	push 0xA
	push 0x1AE
	push 0x19C
	push 0x5F
	push 0x113
	lea ecx,[esi+0x2FC4]
	mov dword ptr [esi+0x18],1
	call CWnd::CreateWnd
	pop esi
	ret 4

 Block4:
	cmp eax,1
	jne Block6

 Block5:
	cmp dword ptr [esi+0x540],ecx
	je Block8

 Block6:
	cmp dword ptr [esi+0x18],0
	je Block8

 Block7:
	lea ecx,[esi+0x2FC4]
	call CWnd::Destroy
	mov dword ptr [esi+0x18],0

 Block8:
	push 0
	mov ecx,esi
	call CCashShop::OnChangedPage
	pop esi
	ret 4
}
}
// CCashShop::SetUserPreviewControl
__SUB_CLASS_THIS(0007E8E0, __thiscall, 48247,  CCashShop, void, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	push edi
	lea ecx,[esi+0x564]
	mov dword ptr [esi+0x548],edi
	call CCSWnd_Char::SetUserPreviewControl
	push edi
	lea ecx,[esi+0x210C]
	call CCSWnd_List::SetUserPreviewControl
	mov ecx,esi
	call CCashShop::RestoreFocus
	pop edi
	pop esi
	ret 4
}
}
// CCashShop::OnCashItemResCashGachaponCopyFailed
__SUB_CLASS_THIS(000962F0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	mov dword ptr [esi+0x1C],0
	call CInPacket::Decode1
	movzx eax,al
	push eax
	mov ecx,esi
	call CCashShop::NoticeFailReason
	pop esi
	ret 4
}
}
// CCashShop::OnMoveCashItemStoL
_SUB_EXCEPTION_HANDLER(82B50)
__SUB_CLASS_THIS(00082B50, __thiscall, 48254,  CCashShop, int32_t, _LARGE_INTEGER, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_82B50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	cmp dword ptr [ebp+0x44],0
	jne Block3

 Block1:
	push 0x21
	call CCashShop::NoticeFailReason

 Block2:
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x2C
	ret 0xC

 Block3:
	cmp dword ptr [ebp+0x1C],0
	jne Block2

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x10]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x40]
	mov edi,dword ptr [esp+0x48]
	push ecx
	push edx
	push edi
	mov ecx,esi
	call CharacterData::FindCashItemSlotPosition_0
	test eax,eax
	jle Block2

 Block5:
	push eax
	push edi
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov eax,dword ptr [eax+4]
	lea ecx,[eax+0xC]
	mov dword ptr [esp+0x38],0
	call TSecType<long>::GetData
	lea ecx,[esp+0x18]
	mov esi,eax
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push esi
	call CItemInfo::IsMovableToLocker
	test eax,eax
	jne Block7

 Block6:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x9F4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x2C
	ret 0xC

 Block7:
	push 0x113
	lea ecx,[esp+0x24]
	call COutPacket::_ctor_1
	mov esi,1
	push 0xF
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x3C],esi
	call COutPacket::Encode1
	push 8
	lea edx,[esp+0x44]
	push edx
	lea ecx,[esp+0x28]
	call COutPacket::EncodeBuffer
	push edi
	lea ecx,[esp+0x24]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x20]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x24]
	mov dword ptr [ebp+0x1C],esi
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,esi
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x2C
	ret 0xC
}
}
// CCashShop::OnChargeParamResult
_SUB_EXCEPTION_HANDLER(96320)
__SUB_CLASS_THIS(00096320, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_96320
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	lea eax,[esp+0xC]
	mov dword ptr [ecx+0x1C],ebx
	mov ecx,dword ptr [esp+0x24]
	push eax
	call CInPacket::DecodeStr
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x10]
	push 5
	push ecx
	mov byte ptr [esp+0x24],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0xC]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x28],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	mov byte ptr [esp+0x1C],1
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esp+0x24]
	push esi
	call open_web_site2
	add esp,4
	mov byte ptr [esp+0x1C],bl
	cmp esi,ebx
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp eax,ebx
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
	pop ebx
	add esp,0x14
	ret 4
}
}
// CCashShop::OnCashItemResPurchaseRecord
__SUB_CLASS_THIS(00095B50, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	mov ebx,eax
	mov ecx,edi
	mov dword ptr [esp+0x10],ebx
	call CInPacket::Decode1
	xor ecx,ecx
	test al,al
	setne cl
	mov edi,ecx
	test ebx,ebx
	jne Block2

 Block1:
	mov dword ptr [esi+0x3B54],edi
	jmp Block4

 Block2:
	push 0
	lea edx,[esp+0x14]
	push edx
	lea ecx,[esi+0x3B58]
	call ZMap<long, int, long>::Insert
	mov dword ptr [eax+0xC],edi
	test edi,edi
	je Block4

 Block3:
	mov dword ptr [esi+0x3B54],1

 Block4:
	lea ecx,[esi+0x210C]
	mov dword ptr [esi+0x2DF0],1
	call CCSWnd_List::ChangePage
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CCashShop::_ZtlSecureGet_m_nPrepaidNXCash
__SUB_CLASS0(0007DA40, __fastcall, 48272,  CCashShop, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x40]
	push eax
	add ecx,0x38
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CCashShop::OnCashItemResLoadLockerDone
__SUB_CLASS_THIS(00094CB0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push ebp
	push esi
	mov esi,ecx
	push edi
	mov ecx,ebx
	call CInPacket::Decode2
	movzx edi,ax
	lea eax,[esp+0x14]
	push eax
	lea ebp,[esi+0x48C]
	push edi
	mov ecx,ebp
	call ZArray<GW_CashItemInfo>::_Alloc
	test edi,edi
	jle Block2

 Block1:
	mov ecx,dword ptr [ebp]
	imul edi,0x37
	push edi
	push ecx
	mov ecx,ebx
	call CInPacket::DecodeBuffer

 Block2:
	mov ecx,ebx
	call CInPacket::Decode2
	movzx edx,ax
	mov ecx,ebx
	mov dword ptr [esi+0x490],edx
	call CInPacket::Decode2
	movzx eax,ax
	mov ecx,ebx
	mov dword ptr [esi+0x494],eax
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [esi+0x498],ecx
	mov ecx,ebx
	call CInPacket::Decode2
	movzx edx,ax
	lea ecx,[esi+0x210C]
	mov dword ptr [esi+0x49C],edx
	call CCSWnd_List::ResetSlotIncComm
	lea ecx,[esi+0x1534]
	call CCSWnd_Inventory::EnableExTrunkButton
	push 0
	lea ecx,[esi+0xA50]
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CCashShop::OnCashItemResIncTrunkCountDone
__SUB_CLASS_THIS(00094ED0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	push edi
	mov edi,dword ptr [esi+0x490]
	call CInPacket::Decode2
	movzx eax,ax
	cmp eax,edi
	mov dword ptr [esi+0x490],eax
	jle Block3

 Block1:
	cmp eax,0x30
	jg Block3

 Block2:
	lea ecx,[esi+0x1534]
	call CCSWnd_Inventory::EnableExTrunkButton
	lea ecx,[esi+0x210C]
	call CCSWnd_List::ResetSlotIncComm
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x224
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	pop edi
	pop esi
	pop ecx
	ret 4

 Block3:
	push 0x22000008
	lea ecx,[esp+0x14]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x10]
	push offset CTerminateException::THROW_INFO
	lea edx,[esp+0xC]
	push edx
	mov dword ptr [esp+0x10],ecx
	call _CxxThrowException
	int 3
}
}
// CCashShop::SendCheckNameChangePossiblePacket
_SUB_EXCEPTION_HANDLER(88190)
__SUB_CLASS_THIS(00088190, __thiscall, 48266,  CCashShop, void, unsigned long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_88190
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
	push 0x10
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::_ctor_1
	mov eax,dword ptr [esp+0x28]
	push eax
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x24],1
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	lea edx,[esp+0x30]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x1C],1
	mov byte ptr [esp+0x20],0
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 8
}
}
// CCashShop::OnCashItemResDestroyDone
__SUB_CLASS_THIS(00095250, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [esp+0x1C]
	push 8
	lea eax,[esp+0x14]
	xor esi,esi
	push eax
	mov dword ptr [edi+0x1C],esi
	call CInPacket::DecodeBuffer
	mov ebx,dword ptr [esp+0x14]
	lea ecx,[edi+0x48C]
	xor edx,edx
	lea ebx,[ebx]

 Block1:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block7

 Block2:
	cmp esi,dword ptr [eax-4]
	jae Block7

 Block3:
	mov ebp,dword ptr [edx+eax]
	cmp ebp,dword ptr [esp+0x10]
	jne Block5

 Block4:
	mov eax,dword ptr [edx+eax+4]
	cmp eax,ebx
	je Block6

 Block5:
	inc esi
	add edx,0x37
	jmp Block1

 Block6:
	imul esi,0x37
	add esi,dword ptr [ecx]
	push esi
	call ZArray<GW_CashItemInfo>::RemoveAt

 Block7:
	lea esi,[edi+0xA50]
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	push 1
	mov ecx,esi
	call CCSWnd_Locker::SetSelectedNo
	push 0
	lea ecx,[edi+0x1534]
	call CWnd::InvalidateRect
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x227
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 4
}
}
// CCashShop::OnCheckDuplicatedIDResult
_SUB_EXCEPTION_HANDLER(97FB0)
__SUB_CLASS_THIS(00097FB0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_97FB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x20]
	lea eax,[esp+0x20]
	mov dword ptr [ecx+0x1C],0
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x18],0
	call CInPacket::Decode1
	movsx eax,al
	mov dword ptr [esp+8],0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov byte ptr [esp+0x2C],1
	mov dword ptr [esp+0x20],esp
	test eax,eax
	jle Block2

 Block1:
	mov ecx,esp
	push 0x216
	jmp Block5

 Block2:
	jne Block4

 Block3:
	mov edx,esp
	push 0x217
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x10
	mov ecx,esp
	lea eax,[esp+0x24]
	mov dword ptr [esp+0x10],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CUIChangingCharacterName>::ms_pInstance]
	call CUIChangingCharacterName::SetNameValues
	jmp Block6

 Block4:
	mov ecx,esp
	push 0xE16

 Block5:
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block6:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 4
}
}
// CCashShop::OnCashItemResIncSlotCountFailed
__SUB_CLASS_THIS(00097390, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [edi+0x1C],0
	call CInPacket::Decode1
	movzx esi,al
	push esi
	mov ecx,edi
	call CCashShop::NoticeFailReason
	test esi,esi
	je Block3

 Block1:
	cmp esi,2
	je Block3

 Block2:
	cmp esi,1
	jne Block4

 Block3:
	mov ecx,edi
	call CCashShop::SendTransferFieldPacket

 Block4:
	pop edi
	pop esi
	ret 4
}
}
// CCashShop::OnCashItemResCashGachaponOpenDone
__SUB_CLASS_THIS(00094AC0, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x1C]
	mov ebx,ecx
	push 8
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	mov dword ptr [ebx+0x1C],0
	call CInPacket::DecodeBuffer
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esp+0x1C],eax
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esp+0xC],ecx
	xor eax,eax
	lea esi,[ebx+0x48C]
	xor ecx,ecx
	push ebp

 Block1:
	mov edx,dword ptr [esi]
	test edx,edx
	je Block8

 Block2:
	cmp eax,dword ptr [edx-4]
	jae Block8

 Block3:
	mov ebp,dword ptr [ecx+edx]
	cmp ebp,dword ptr [esp+0x14]
	jne Block5

 Block4:
	mov edx,dword ptr [ecx+edx+4]
	cmp edx,dword ptr [esp+0x18]
	je Block6

 Block5:
	inc eax
	add ecx,0x37
	jmp Block1

 Block6:
	mov ecx,dword ptr [esp+0x20]
	imul eax,0x37
	mov edx,dword ptr [esi]
	mov word ptr [edx+eax+0x18],cx
	test ecx,ecx
	jne Block8

 Block7:
	mov ecx,dword ptr [esi]
	add ecx,eax
	push ecx
	mov ecx,esi
	call ZArray<GW_CashItemInfo>::RemoveAt

 Block8:
	cmp dword ptr [esp+0x10],0
	pop ebp
	je Block10

 Block9:
	push 0x37
	push 0xFFFFFFFF
	mov ecx,esi
	call ZArray<GW_CashItemInfo>::InsertBefore
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer

 Block10:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov esi,eax
	call CInPacket::Decode1
	mov ecx,dword ptr [ebx+0x538]
	movzx eax,al
	test ecx,ecx
	je Block12

 Block11:
	push eax
	push esi
	call CUICashGachapon::OnCashGachaponOpenResult

 Block12:
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4
}
}
// CCashShop::OnCashItemResIncSlotCountDone
__SUB_CLASS_THIS(00097270, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x1C]
	mov ebx,ecx
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x10],ebx
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode2
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	movzx esi,ax
	lea eax,[esp+0x14]
	push eax
	mov dword ptr [esp+0x24],esi
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
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
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov ebx,dword ptr [esp+0x10]
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0

 Block5:
	mov eax,dword ptr [ebp+edi*4+0x501]
	lea ecx,[ebp+edi*4+0x501]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	dec edi
	dec eax
	cmp edi,4
	ja Block11

 Block8:
	cmp esi,eax
	jle Block11

 Block9:
	cmp esi,0x60
	jg Block11

 Block10:
	lea edx,[esp+0x20]
	push edx
	push 0
	inc esi
	push esi
	call ZArray<ZRef<GW_ItemSlotBase>>::_Realloc
	lea ecx,[ebx+0x1534]
	call CCSWnd_Inventory::ResetInfo
	lea ecx,[ebx+0x210C]
	call CCSWnd_List::ResetSlotIncComm
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x224
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4

 Block11:
	push 0x22000008
	lea ecx,[esp+0x24]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x20]
	push offset CTerminateException::THROW_INFO
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x18],ecx
	call _CxxThrowException
	int 3
}
}
// CCashShop::SendCheckDuplicateIDPacket
_SUB_EXCEPTION_HANDLER(88070)
__SUB_CLASS_THIS(00088070, __thiscall, 48265,  CCashShop, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_88070
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esi+0x2038]
	mov dword ptr [esp+0x28],0
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block3

 Block1:
	cmp dword ptr [esi+0x209C],0
	jne Block3

 Block2:
	xor eax,eax
	jmp Block4

 Block3:
	mov eax,1

 Block4:
	xor ecx,ecx
	test eax,eax
	sete cl
	lea edx,[esp+0x30]
	push ecx
	push edx
	call is_valid_character_name
	add esp,8
	test eax,eax
	jne Block6

 Block5:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x215
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block7

 Block6:
	push 0x15
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push ecx
	mov ecx,esp
	lea edx,[esp+0x34]
	mov dword ptr [esp+0x10],esp
	push edx
	mov byte ptr [esp+0x30],1
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x14]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	mov dword ptr [edi+0x1C],1
	mov byte ptr [esp+0x28],0
	call ZArray<unsigned char>::RemoveAll

 Block7:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4
}
}
// CCashShop::OnMouseButton
__SUB_CLASS_THIS(00092E80, __thiscall, 48243,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	add ecx,0x560
	call CCSWnd_Char::EndChat
	ret 0x10
}
}
// CCashShop::OnCashItemResMoveLtoSFailed
__SUB_CLASS_THIS(00097730, __thiscall, 48248,  CCashShop, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	mov dword ptr [esi+0x1C],0
	call CInPacket::Decode1
	movzx eax,al
	push eax
	mov ecx,esi
	call CCashShop::NoticeFailReason
	pop esi
	ret 4
}
}
